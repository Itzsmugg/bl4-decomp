// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14779c588 FUN_14779c588 body=257 status=ok
// SIG undefined FUN_14779c588(void)

void FUN_14779c588(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  void *_Dst;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar3 = *(int *)(param_1 + 0x228);
  if (0 < iVar3) {
    plVar1 = (longlong *)(param_1 + 0x220);
    uVar6 = 0;
    do {
      uVar5 = (uint)uVar6;
      lVar2 = *(longlong *)(*plVar1 + uVar6 * 8);
      if (lVar2 == 0) {
        iVar4 = ~uVar5 + iVar3;
        if (iVar4 != 0) {
          _Dst = (void *)(*plVar1 + uVar6 * 8);
LAB_14779c5d7:
          memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar4 << 3);
          iVar3 = *(int *)(param_1 + 0x228);
        }
LAB_14779c5f0:
        *(int *)(param_1 + 0x228) = iVar3 + -1;
        FUN_1477ab9de(plVar1);
        uVar5 = uVar5 - 1;
        iVar3 = *(int *)(param_1 + 0x228);
      }
      else if ((*(byte *)(lVar2 + 0x2b5) & 1) == 0) {
        FUN_1476c855c();
        iVar3 = *(int *)(param_1 + 0x228);
        iVar4 = ~uVar5 + iVar3;
        if (iVar4 != 0) {
          _Dst = (void *)(uVar6 * 8 + *plVar1);
          goto LAB_14779c5d7;
        }
        goto LAB_14779c5f0;
      }
      uVar6 = (ulonglong)(uVar5 + 1);
    } while ((int)(uVar5 + 1) < iVar3);
  }
  iVar3 = *(int *)(param_1 + 0x240);
  if ((longlong)iVar3 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x238);
    lVar7 = 0;
    do {
      FUN_1476c855c(*(undefined8 *)(lVar2 + lVar7));
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar3 * 8 != lVar7);
  }
  *(undefined4 *)(param_1 + 0x240) = 0;
  if (*(int *)(param_1 + 0x244) != 0) {
    FUN_1477aba7a(param_1 + 0x238);
    return;
  }
  return;
}



// FUNCTION 14779c68a FUN_14779c68a body=63 status=ok
// SIG undefined FUN_14779c68a(void)

void FUN_14779c68a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x228);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x220);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) != 0) {
        FUN_1476c8464();
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 14779c6ca FUN_14779c6ca body=59 status=ok
// SIG undefined FUN_14779c6ca(void)

longlong FUN_14779c6ca(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1477abaca(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x38 + *param_1;
  FUN_1477abaaa(lVar2);
  return lVar2;
}



// FUNCTION 14779c706 FUN_14779c706 body=251 status=ok
// SIG undefined FUN_14779c706(void)

longlong * FUN_14779c706(longlong *param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  *param_1 = lVar2;
  *(char *)(param_1 + 1) = (char)param_2[1];
  if (param_2 == param_1) {
    return param_1;
  }
  if ((char)param_2[2] == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar1 = 1;
  }
  else {
    if ((char)param_1[2] != '\x01') goto LAB_14779c74c;
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 2) = uVar1;
LAB_14779c74c:
  if ((char)param_2[3] == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else if ((char)param_1[3] == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if ((char)param_2[4] == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else if ((char)param_1[4] == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if ((char)param_2[5] == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    *(undefined1 *)(param_1 + 5) = 1;
  }
  else if ((char)param_1[5] == '\x01') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if ((char)param_2[6] == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(undefined1 *)(param_1 + 6) = 1;
  }
  else if ((char)param_1[6] == '\x01') {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  if (*(char *)((longlong)param_2 + 0x35) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x34) = *(undefined1 *)((longlong)param_2 + 0x34);
    *(undefined1 *)((longlong)param_1 + 0x35) = 1;
  }
  else if (*(char *)((longlong)param_1 + 0x35) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x35) = 0;
  }
  return param_1;
}



// FUNCTION 14779c802 FUN_14779c802 body=166 status=ok
// SIG undefined FUN_14779c802(void)

void FUN_14779c802(longlong param_1,float param_2)

{
  int iVar1;
  float fVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  float fVar6;
  
  dVar5 = ((double)*(int *)(param_1 + 0x250) * (double)param_2) / (double)*(int *)(param_1 + 0x254);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar5;
  auVar4 = roundpd(auVar4,auVar4,1);
  dVar3 = auVar4._0_8_;
  dVar5 = dVar5 - dVar3;
  if (2147483647.0 <= dVar3) {
    dVar3 = 2147483647.0;
  }
  if (dVar3 <= -2147483648.0) {
    dVar3 = -2147483648.0;
  }
  iVar1 = (int)dVar5;
  fVar2 = (float)dVar5 - (float)iVar1;
  fVar6 = fVar2;
  if (0.99999994 <= fVar2) {
    fVar6 = 0.99999994;
  }
  fVar6 = (float)(~-(uint)(0.0 < fVar2) & (uint)fVar2 | (uint)fVar6 & -(uint)(0.0 < fVar2)) + 0.5 +
          -0.5;
  if (0.99999994 <= fVar6) {
    fVar6 = 0.99999994;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  *(int *)(param_1 + 0x25c) = (int)dVar3 + iVar1;
  *(float *)(param_1 + 0x260) = fVar6;
  return;
}



// FUNCTION 14779c8a8 FUN_14779c8a8 body=44 status=ok
// SIG undefined FUN_14779c8a8(void)

void FUN_14779c8a8(undefined8 param_1,longlong param_2)

{
  FUN_147794392(param_1,*(undefined8 *)(param_2 + 0x210));
  FUN_14779c8d4(param_1,param_2,0);
  return;
}



// FUNCTION 14779c8d4 FUN_14779c8d4 body=265 status=ok
// SIG undefined FUN_14779c8d4(void)

void FUN_14779c8d4(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_2 + 0x210);
  local_58 = 0;
  iVar2 = *(int *)(param_1 + 0x2b0);
  uVar4 = *(undefined8 *)(param_1 + 0x2a8);
  local_50 = iVar2;
  if (iVar2 != 0) {
    FUN_1477abf8c(&local_58,iVar2);
    FUN_1477abff6(local_58,uVar4,iVar2);
    lVar5 = local_58;
    lVar7 = (longlong)local_50;
    if (lVar7 != 0) {
      lVar1 = local_58 + 8;
      lVar8 = 0;
      do {
        if (((*(longlong *)(lVar5 + lVar8) == lVar3) && (*(char *)(lVar5 + 0x18 + lVar8) == param_3)
            ) && ((lVar9 = *(longlong *)(lVar5 + 0x1c + lVar8), lVar9 == 0 ||
                  (lVar9 == *(longlong *)(param_2 + 0x2ac))))) {
          lVar9 = lVar1 + lVar8;
          cVar6 = FUN_14113f0c0(lVar9);
          if (cVar6 != '\0') {
            FUN_1476c4102(lVar9);
          }
        }
        lVar8 = lVar8 + 0x28;
      } while (lVar7 * 0x28 != lVar8);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14779c9de FUN_14779c9de body=338 status=ok
// SIG undefined FUN_14779c9de(void)

void FUN_14779c9de(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147794256(param_1,*(undefined8 *)(param_2 + 0x210));
  FUN_14779c8d4(param_1,param_2,1);
  iVar4 = (**(code **)(*(longlong *)(param_2 + 0x28) + 0x38))(param_2 + 0x28);
  if (iVar4 == 0) {
    local_28 = param_2;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    FUN_1477abc44(param_1 + 0x238,&local_28);
    lVar1 = *(longlong *)(param_1 + 0x230);
    if (lVar1 != 0) {
      local_38 = (undefined8 *)0x0;
      local_30 = 0;
      FUN_1446efa72(&local_38,0,3,0x10);
      puVar2 = local_38;
      local_30 = 3;
      *local_38 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_38[2] = lVar5;
      *local_38 = &PTR_FUN_14a55e8f0;
      local_38[3] = 0;
      FUN_14485c47a(local_38 + 3,param_1);
      puVar2[4] = FUN_14779cb32;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_1476c8366(lVar1,&local_38);
    }
  }
  FUN_1417aaa18(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779cb32 FUN_14779cb32 body=207 status=ok
// SIG undefined FUN_14779cb32(void)

void FUN_14779cb32(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0x240);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x238);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      local_48 = lVar3;
      if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar3);
      }
      FUN_14779f22e(param_1 + 0x220,&local_48);
      FUN_1476c855c(lVar3);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x240) = 0;
  if (*(int *)(param_1 + 0x244) == 0) {
    if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
}



// FUNCTION 14779cc1a FUN_14779cc1a body=78 status=ok
// SIG undefined FUN_14779cc1a(void)

void FUN_14779cc1a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_20;
  local_18 = FUN_14333e246;
  local_20 = param_2;
  FUN_140ec5510();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779cc6a FUN_14779cc6a body=14 status=ok
// SIG undefined FUN_14779cc6a(void)

undefined8 * FUN_14779cc6a(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x28c);
  return param_2;
}



// FUNCTION 14779cc78 FUN_14779cc78 body=12 status=ok
// SIG undefined FUN_14779cc78(void)

void FUN_14779cc78(longlong param_1)

{
  FUN_14479d2ce(param_1 + 0x294);
  return;
}



// FUNCTION 14779cc84 FUN_14779cc84 body=222 status=ok
// SIG undefined FUN_14779cc84(void)

void FUN_14779cc84(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  code *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + -0x158);
  if (lVar3 != 0) {
    lVar4 = FUN_140e64c66();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      uVar1 = *(uint *)(lVar3 + 0x418);
      if (uVar1 != 0) {
        iVar2 = *(int *)(param_2 + 8);
        *(uint *)(param_2 + 8) = iVar2 + uVar1;
        if ((uint)(*(int *)(param_2 + 0xc) - iVar2) < uVar1) {
          FUN_1446f84a2(param_2,iVar2);
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
      }
      goto LAB_14779ccfa;
    }
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    local_30 = &local_40;
    local_38 = FUN_14333d9da;
    local_40 = param_2;
    FUN_140ec5510();
  }
LAB_14779ccfa:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779cdb0 FUN_14779cdb0 body=481 status=ok
// SIG undefined FUN_14779cdb0(void)

void FUN_14779cdb0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *_Dst;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  longlong **local_58;
  undefined1 *local_50;
  undefined8 **local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_2;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    local_58 = &local_40;
    local_40 = (longlong *)0x0;
    local_60 = &local_68;
    local_48 = &local_60;
    local_50 = &LAB_14333e22e;
    FUN_140ec5510();
    plVar1 = local_40;
    bVar3 = true;
    if (local_40 == (longlong *)0x0) goto LAB_14779ce6a;
    lVar4 = FUN_145a6970c();
    if ((*(int *)(plVar1[2] + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30)) goto LAB_14779ce6a;
    (**(code **)(*plVar1 + 0x300))();
    if (param_3 != 0) {
      FUN_14772c428(plVar1,param_3);
    }
  }
  bVar3 = false;
LAB_14779ce6a:
  lVar4 = local_68;
  plVar1 = (longlong *)(param_1 + 0xe0);
  uVar6 = *(uint *)(param_1 + 0xe8);
  if (0 < (int)uVar6) {
    _Dst = (longlong *)*plVar1;
    uVar5 = 0;
    do {
      if (*_Dst == local_68) {
        if ((bool)(param_3 == 0 | bVar3)) {
          if (uVar6 - 1 != (int)uVar5) {
            memmove(_Dst,_Dst + 2,(longlong)(int)((uVar6 - 1) - (int)uVar5) << 4);
            uVar6 = *(uint *)(param_1 + 0xe8);
          }
          *(uint *)(param_1 + 0xe8) = uVar6 - 1;
          FUN_1477ac07e(plVar1);
        }
        else {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(param_3);
          }
          _Dst[1] = param_3;
        }
        goto LAB_14779ceaa;
      }
      uVar5 = uVar5 + 1;
      _Dst = _Dst + 2;
    } while (uVar6 != uVar5);
  }
  if (param_3 != 0 && !bVar3) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_3);
      uVar6 = *(uint *)(param_1 + 0xe8);
    }
    *(uint *)(param_1 + 0xe8) = uVar6 + 1;
    if (*(uint *)(param_1 + 0xec) < uVar6 + 1) {
      FUN_1477ac11a(plVar1,uVar6);
    }
    lVar2 = *plVar1;
    *(longlong *)(lVar2 + (longlong)(int)uVar6 * 0x10) = lVar4;
    *(longlong *)(lVar2 + 8 + (longlong)(int)uVar6 * 0x10) = param_3;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_3);
    }
  }
LAB_14779ceaa:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779cf92 FUN_14779cf92 body=48 status=ok
// SIG undefined FUN_14779cf92(void)

undefined8 FUN_14779cf92(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_141318136(param_1 + 0x2b8);
  if (cVar1 != '\0') {
    uVar2 = FUN_140059518(param_1 + 0x2b8);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14779cfc2 FUN_14779cfc2 body=48 status=ok
// SIG undefined FUN_14779cfc2(void)

undefined8 FUN_14779cfc2(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_141318136(param_1 + 0x2b8);
  if (cVar1 != '\0') {
    uVar2 = FUN_1400f3ad8(param_1 + 0x2b8);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14779cff2 FUN_14779cff2 body=162 status=ok
// SIG undefined FUN_14779cff2(void)

void FUN_14779cff2(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *_Dst;
  longlong lVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x250);
  if (0 < iVar1) {
    uVar3 = 0;
    do {
      _Dst = (longlong *)((longlong)(int)uVar3 * 0x10 + *(longlong *)(param_1 + 0x248));
      if ((longlong)(int)param_2[1] != 0) {
        lVar2 = 0;
        do {
          if (*(longlong *)(*param_2 + lVar2) == *_Dst) goto LAB_14779d082;
          lVar2 = lVar2 + 8;
        } while ((longlong)(int)param_2[1] * 8 != lVar2);
      }
      if (~uVar3 + iVar1 != 0) {
        memmove(_Dst,_Dst + 2,(longlong)(int)(~uVar3 + iVar1) << 4);
        iVar1 = *(int *)(param_1 + 0x250);
      }
      *(int *)(param_1 + 0x250) = iVar1 + -1;
      FUN_1477ac07e((longlong *)(param_1 + 0x248));
      uVar3 = uVar3 - 1;
      iVar1 = *(int *)(param_1 + 0x250);
LAB_14779d082:
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar1);
  }
  return;
}



// FUNCTION 14779d098 FUN_14779d098 body=111 status=ok
// SIG undefined FUN_14779d098(void)

void FUN_14779d098(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x108);
  *(uint *)(param_1 + 0x108) = iVar2 + uVar1;
  if ((uint)(*(int *)(param_1 + 0x10c) - iVar2) < uVar1) {
    FUN_1477ac24c(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar3 = param_1;
  }
  FUN_1477ac234(lVar3 + (longlong)iVar2 * 8,*param_2,uVar1);
  return;
}



// FUNCTION 14779d108 FUN_14779d108 body=153 status=ok
// SIG undefined FUN_14779d108(void)

void FUN_14779d108(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  code *local_40;
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = &local_41;
  local_40 = FUN_141073f72;
  lVar1 = FUN_144a773aa(&local_40,&DAT_14c75ec34);
  if ((*(char *)(lVar1 + 0x20) == '\0') && (0 < *(int *)(param_1 + 0x228))) {
    lVar1 = 0;
    do {
      FUN_1476c6bda(*(undefined8 *)(*(longlong *)(param_1 + 0x220) + lVar1 * 8),param_2);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x228));
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779d1a2 FUN_14779d1a2 body=229 status=ok
// SIG undefined FUN_14779d1a2(void)

longlong FUN_14779d1a2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  FUN_1477aa018();
  *(undefined1 *)(param_1 + 6) = 1;
  plVar3 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a55ecf0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14779d247;
    param_1[1] = 0;
LAB_14779d208:
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
    if (plVar3 == (longlong *)0x0) goto LAB_14779d247;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)(plVar3 + 2);
    plVar4 = (longlong *)param_1[1];
    if (plVar3 == plVar4) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    else {
      param_1[1] = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_14779d208;
    }
  }
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_14779d247:
  return *param_1;
}



// FUNCTION 14779d288 FUN_14779d288 body=189 status=ok
// SIG undefined FUN_14779d288(void)

void FUN_14779d288(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = &PTR_LAB_14a55e9d0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[1] = *param_4;
  puVar3[2] = param_4[1];
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
  puVar3[3] = lVar5;
  *puVar3 = &PTR_FUN_14a55e960;
  puVar3[4] = 0;
  FUN_14485c47a(puVar3 + 4,param_2);
  *(undefined4 *)(puVar3 + 6) = uVar1;
  puVar3[5] = uVar2;
  return;
}



// FUNCTION 14779d346 FUN_14779d346 body=36 status=ok
// SIG undefined FUN_14779d346(void)

void FUN_14779d346(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_14775b22e();
  if (cVar1 == '\0') {
    return;
  }
  FUN_14779d36a(param_2);
  return;
}



// FUNCTION 14779d36a FUN_14779d36a body=77 status=ok
// SIG undefined FUN_14779d36a(void)

void FUN_14779d36a(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  
  cVar2 = FUN_14113f0c0();
  if (cVar2 != '\0') {
    plVar3 = (longlong *)FUN_14479d2ce(param_1);
    uVar1 = FUN_14477b072(plVar3,*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00014779d3ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x248))(plVar3,uVar1,0,*(code **)(*plVar3 + 0x248));
    return;
  }
  return;
}



// FUNCTION 14779d3b8 FUN_14779d3b8 body=828 status=ok
// SIG undefined FUN_14779d3b8(void)

void FUN_14779d3b8(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  longlong *local_110 [2];
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  undefined1 local_c8 [8];
  undefined1 local_c0 [48];
  undefined1 local_90 [8];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  wchar_t **local_70;
  ulonglong *local_68;
  longlong local_60;
  undefined4 local_58;
  wchar_t *local_50;
  undefined4 local_48;
  longlong *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar3 = (**(code **)(*param_1 + 0x2c8))();
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x188) == 0) {
      uVar4 = FUN_145860fd8();
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 0x188) + 0x10);
    }
    local_128 = 0;
    uStack_120 = 0;
    local_130 = 0;
    local_138 = 0;
    lVar3 = FUN_141262cc4(param_1,uVar4,0,0x40);
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
    param_1[0x54] = lVar3;
    *(byte *)(lVar3 + 0x194) =
         *(byte *)(lVar3 + 0x194) & 0xfe | *(byte *)((longlong)param_1 + 0x20c) >> 1 & 1;
    *(int *)(param_1[0x54] + 400) = (int)param_1[0x41];
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_158);
  }
  FUN_1446ddc76(local_c8,&DAT_14a492018,1);
  FUN_14276766e(local_c0,local_c8);
  local_f0 = *(undefined8 *)(param_1[2] + 0x18);
  FUN_145715fae(local_e8);
  local_50 = L"NoInputListeningWithoutPlayerController";
  local_48 = 0x27;
  FUN_1446e940c(local_114,&local_50);
  local_50 = L"UMG";
  local_48 = 3;
  FUN_1446e940c(local_118,&local_50);
  FUN_140208bae(local_110,local_118,local_114,
                L"Unable to listen to input actions without a player controller in {0}.");
  FUN_14023409e(&local_100,local_110,1);
  local_50 = (wchar_t *)CONCAT44(local_50._4_4_,4);
  FUN_14023423e(local_40,local_e8);
  local_68 = &local_30;
  local_70 = &local_50;
  FUN_14010d304(&local_60);
  local_80 = local_100;
  local_78 = local_f8;
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_d8,&local_80,&local_60);
  FUN_14007f2db(local_60,local_58);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_f8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar2 = (int *)((longlong)local_f8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_f8 + 0x10))(local_f8);
      }
    }
  }
  if (local_e8[0] != (longlong *)0x0) {
    (**(code **)(*local_e8[0] + 0x10))();
  }
  FUN_142767a34(local_c0,local_90,local_d8);
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_88 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar2 = (int *)((longlong)local_88 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_88 + 0x10))(local_88);
      }
    }
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  if (local_110[0] != (longlong *)0x0) {
    (**(code **)(*local_110[0] + 0x10))();
  }
  FUN_1427678c0(local_c0);
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779d710 FUN_14779d710 body=94 status=ok
// SIG undefined FUN_14779d710(void)

undefined1 FUN_14779d710(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  uVar1 = FUN_14477b072(param_1,DAT_14cab9780);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779d770 FUN_14779d770 body=634 status=ok
// SIG undefined FUN_14779d770(void)

undefined8
FUN_14779d770(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined1 local_198 [8];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  char local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_e0 [8];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  char local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_1a8 = *(undefined8 *)(param_3 + 0xc);
  local_1d8 = *param_3;
  uStack_1d4 = param_3[1];
  uStack_1d0 = param_3[2];
  uStack_1cc = param_3[3];
  local_1c8 = param_3[4];
  uStack_1c4 = param_3[5];
  uStack_1c0 = param_3[6];
  uStack_1bc = param_3[7];
  local_1b8 = param_3[8];
  uStack_1b4 = param_3[9];
  uStack_1b0 = param_3[10];
  uStack_1ac = param_3[0xb];
  FUN_147795064(param_1,local_198,&local_1d8,*param_4);
  local_e0[0] = local_198[0];
  local_d8 = local_190;
  uStack_d0 = uStack_188;
  local_190 = 0;
  uStack_188 = 0;
  local_c0 = local_178;
  if (local_178 == '\x01') {
    local_c8 = local_180;
  }
  local_b8 = local_170;
  uStack_b0 = uStack_168;
  local_170 = 0;
  uStack_168 = 0;
  local_a8 = (undefined4)local_160;
  uStack_a4 = local_160._4_4_;
  uStack_a0 = (undefined4)uStack_158;
  uStack_9c = uStack_158._4_4_;
  local_160 = 0;
  uStack_158 = 0;
  local_98 = (undefined4)local_150;
  uStack_94 = local_150._4_4_;
  uStack_90 = (undefined4)uStack_148;
  uStack_8c = uStack_148._4_4_;
  local_150 = 0;
  uStack_148 = 0;
  local_88 = local_140;
  uStack_80 = uStack_138;
  local_140 = 0;
  uStack_138 = 0;
  local_78 = (undefined4)local_130;
  uStack_74 = local_130._4_4_;
  uStack_70 = (undefined4)uStack_128;
  uStack_6c = uStack_128._4_4_;
  local_130 = 0;
  uStack_128 = 0;
  local_68 = local_120;
  local_60 = uStack_118;
  local_120 = 0;
  uStack_118 = 0;
  local_58 = local_110;
  local_50 = local_108;
  local_48 = uStack_100;
  local_108 = 0;
  uStack_100 = 0;
  local_40 = local_f8;
  local_38 = uStack_f0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_2c = local_e8._4_1_;
  local_30 = (undefined4)local_e8;
  FUN_14493db24();
  lVar2 = FUN_14333cad2(param_1 + 0x28c);
  if (lVar2 == 0) {
    FUN_1428fd920(param_2,local_e0);
  }
  else {
    local_198[0] = 1;
    local_178 = '\0';
    local_190 = 0;
    uStack_188 = 0;
    memset(&local_170,0,0x88);
    local_e8 = 0x20702;
    uVar1 = *(undefined1 *)param_4;
    FUN_140760c2c(lVar2,&local_1f8);
    local_1e8 = local_1f8;
    uStack_1e4 = uStack_1f4;
    uStack_1e0 = uStack_1f0;
    uStack_1dc = uStack_1ec;
    uVar3 = FUN_140592b68(local_198,&local_1e8,
                          CONCAT71((int7)((ulonglong)param_4 >> 8),uVar1) & 0xffffffff,0);
    FUN_1403d4c6e(param_2,uVar3);
    FUN_14493db24(local_198);
  }
  FUN_14493db24(local_e0);
  if ((local_28 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779d9ec FUN_14779d9ec body=95 status=ok
// SIG undefined FUN_14779d9ec(void)

void FUN_14779d9ec(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cab9848);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779da4c FUN_14779da4c body=174 status=ok
// SIG undefined FUN_14779da4c(void)

void FUN_14779da4c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  
  plVar3 = (longlong *)param_1[0x22];
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  iVar7 = (int)plVar3[1];
  do {
    if (iVar7 == 0) {
      return;
    }
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar9 = iVar7 == iVar5;
    if (bVar9) {
      *(int *)(plVar3 + 1) = iVar7 + 1;
      iVar5 = iVar7;
    }
    iVar7 = iVar5;
    UNLOCK();
  } while (!bVar9);
  lVar4 = param_1[0x21];
  if (lVar4 != 0) {
    cVar6 = FUN_1403d1f4c(param_3,lVar4);
    lVar8 = 0x3a0;
    if (cVar6 != '\0') {
      cVar6 = FUN_14497f9ca(param_2,lVar4);
      lVar8 = 0x398;
      if (cVar6 != '\0') goto LAB_14779dac4;
    }
    (**(code **)(*param_1 + lVar8))(param_1,param_4);
  }
LAB_14779dac4:
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
                    /* WARNING: Could not recover jumptable at 0x00014779dae9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return;
    }
  }
  return;
}



// FUNCTION 14779dafa FUN_14779dafa body=95 status=ok
// SIG undefined FUN_14779dafa(void)

void FUN_14779dafa(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cab97a8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779db5a FUN_14779db5a body=95 status=ok
// SIG undefined FUN_14779db5a(void)

void FUN_14779db5a(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cab9968);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779dbba FUN_14779dbba body=30 status=ok
// SIG undefined FUN_14779dbba(void)

undefined8
FUN_14779dbba(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_14779dbd8(param_2,param_5);
  return param_2;
}



// FUNCTION 14779dbd8 FUN_14779dbd8 body=104 status=ok
// SIG undefined FUN_14779dbd8(void)

undefined8 * FUN_14779dbd8(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = param_2[2];
  lVar1 = param_2[3];
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_1414df504(param_1 + 4,param_2 + 4);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



// FUNCTION 14779dc40 FUN_14779dc40 body=191 status=ok
// SIG undefined FUN_14779dc40(void)

undefined8 FUN_14779dc40(undefined8 param_1,undefined8 param_2,undefined4 *param_3,longlong param_4)

{
  undefined1 auStack_158 [40];
  undefined **local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined2 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined1 local_d0 [184];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_128 = *(undefined8 *)(param_4 + 8);
  uStack_120 = *(undefined8 *)(param_4 + 0x10);
  local_118 = *(undefined8 *)(param_4 + 0x18);
  local_130 = &PTR_FUN_149eda6b0;
  local_110 = *(undefined2 *)(param_4 + 0x20);
  local_108 = *param_3;
  uStack_104 = param_3[1];
  uStack_100 = param_3[2];
  uStack_fc = param_3[3];
  local_f8 = param_3[4];
  uStack_f4 = param_3[5];
  uStack_f0 = param_3[6];
  uStack_ec = param_3[7];
  local_e8 = param_3[8];
  uStack_e4 = param_3[9];
  uStack_e0 = param_3[10];
  uStack_dc = param_3[0xb];
  local_d8 = *(undefined8 *)(param_3 + 0xc);
  FUN_14779518e(local_108,local_d0,&local_108,&local_130);
  FUN_1428fd920(param_2,local_d0);
  FUN_14493db24(local_d0);
  if ((local_18 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779dd00 FUN_14779dd00 body=224 status=ok
// SIG undefined FUN_14779dd00(void)

undefined8 FUN_14779dd00(undefined8 param_1,undefined8 param_2,undefined4 *param_3,longlong param_4)

{
  undefined1 auStack_168 [32];
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined1 local_d0 [184];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_140 = *(undefined8 *)(param_4 + 8);
  uStack_138 = *(undefined8 *)(param_4 + 0x10);
  local_130 = *(undefined8 *)(param_4 + 0x18);
  local_148 = &PTR_FUN_149eda6d0;
  local_128 = *(undefined8 *)(param_4 + 0x20);
  local_120 = *(undefined8 *)(param_4 + 0x28);
  local_118 = *(longlong *)(param_4 + 0x30);
  if (local_118 != 0) {
    LOCK();
    *(int *)(local_118 + 8) = *(int *)(local_118 + 8) + 1;
    UNLOCK();
  }
  local_110 = *(undefined8 *)(param_4 + 0x38);
  local_108 = *param_3;
  uStack_104 = param_3[1];
  uStack_100 = param_3[2];
  uStack_fc = param_3[3];
  local_f8 = param_3[4];
  uStack_f4 = param_3[5];
  uStack_f0 = param_3[6];
  uStack_ec = param_3[7];
  local_e8 = param_3[8];
  uStack_e4 = param_3[9];
  uStack_e0 = param_3[10];
  uStack_dc = param_3[0xb];
  local_d8 = *(undefined8 *)(param_3 + 0xc);
  FUN_147796956(local_108,local_d0,&local_108);
  FUN_1428fd920(param_2,local_d0);
  FUN_14493db24(local_d0);
  if ((local_18 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779dde2 FUN_14779dde2 body=224 status=ok
// SIG undefined FUN_14779dde2(void)

undefined8 FUN_14779dde2(undefined8 param_1,undefined8 param_2,undefined4 *param_3,longlong param_4)

{
  undefined1 auStack_168 [32];
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined1 local_d0 [184];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_140 = *(undefined8 *)(param_4 + 8);
  uStack_138 = *(undefined8 *)(param_4 + 0x10);
  local_130 = *(undefined8 *)(param_4 + 0x18);
  local_148 = &PTR_FUN_149eda6d0;
  local_128 = *(undefined8 *)(param_4 + 0x20);
  local_120 = *(undefined8 *)(param_4 + 0x28);
  local_118 = *(longlong *)(param_4 + 0x30);
  if (local_118 != 0) {
    LOCK();
    *(int *)(local_118 + 8) = *(int *)(local_118 + 8) + 1;
    UNLOCK();
  }
  local_110 = *(undefined8 *)(param_4 + 0x38);
  local_108 = *param_3;
  uStack_104 = param_3[1];
  uStack_100 = param_3[2];
  uStack_fc = param_3[3];
  local_f8 = param_3[4];
  uStack_f4 = param_3[5];
  uStack_f0 = param_3[6];
  uStack_ec = param_3[7];
  local_e8 = param_3[8];
  uStack_e4 = param_3[9];
  uStack_e0 = param_3[10];
  uStack_dc = param_3[0xb];
  local_d8 = *(undefined8 *)(param_3 + 0xc);
  FUN_1477952ea(local_108,local_d0,&local_108);
  FUN_1428fd920(param_2,local_d0);
  FUN_14493db24(local_d0);
  if ((local_18 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779dec4 FUN_14779dec4 body=224 status=ok
// SIG undefined FUN_14779dec4(void)

undefined8 FUN_14779dec4(undefined8 param_1,undefined8 param_2,undefined4 *param_3,longlong param_4)

{
  undefined1 auStack_168 [32];
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined1 local_d0 [184];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_140 = *(undefined8 *)(param_4 + 8);
  uStack_138 = *(undefined8 *)(param_4 + 0x10);
  local_130 = *(undefined8 *)(param_4 + 0x18);
  local_148 = &PTR_FUN_149eda6d0;
  local_128 = *(undefined8 *)(param_4 + 0x20);
  local_120 = *(undefined8 *)(param_4 + 0x28);
  local_118 = *(longlong *)(param_4 + 0x30);
  if (local_118 != 0) {
    LOCK();
    *(int *)(local_118 + 8) = *(int *)(local_118 + 8) + 1;
    UNLOCK();
  }
  local_110 = *(undefined8 *)(param_4 + 0x38);
  local_108 = *param_3;
  uStack_104 = param_3[1];
  uStack_100 = param_3[2];
  uStack_fc = param_3[3];
  local_f8 = param_3[4];
  uStack_f4 = param_3[5];
  uStack_f0 = param_3[6];
  uStack_ec = param_3[7];
  local_e8 = param_3[8];
  uStack_e4 = param_3[9];
  uStack_e0 = param_3[10];
  uStack_dc = param_3[0xb];
  local_d8 = *(undefined8 *)(param_3 + 0xc);
  FUN_147795524(local_108,local_d0,&local_108);
  FUN_1428fd920(param_2,local_d0);
  FUN_14493db24(local_d0);
  if ((local_18 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779dfa6 FUN_14779dfa6 body=251 status=ok
// SIG undefined FUN_14779dfa6(void)

undefined8 FUN_14779dfa6(undefined8 param_1,undefined8 param_2,undefined4 *param_3,longlong param_4)

{
  undefined1 auStack_178 [40];
  undefined **local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined1 local_d0 [184];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_148 = *(undefined8 *)(param_4 + 8);
  uStack_140 = *(undefined8 *)(param_4 + 0x10);
  local_138 = *(undefined8 *)(param_4 + 0x18);
  local_130 = *(undefined8 *)(param_4 + 0x20);
  local_128 = *(undefined8 *)(param_4 + 0x28);
  local_120 = *(longlong *)(param_4 + 0x30);
  if (local_120 != 0) {
    LOCK();
    *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
    UNLOCK();
  }
  local_118 = *(undefined8 *)(param_4 + 0x38);
  local_150 = &PTR_FUN_149eda6f0;
  local_110 = *(undefined4 *)(param_4 + 0x40);
  local_108 = *param_3;
  uStack_104 = param_3[1];
  uStack_100 = param_3[2];
  uStack_fc = param_3[3];
  local_f8 = param_3[4];
  uStack_f4 = param_3[5];
  uStack_f0 = param_3[6];
  uStack_ec = param_3[7];
  local_e8 = param_3[8];
  uStack_e4 = param_3[9];
  uStack_e0 = param_3[10];
  uStack_dc = param_3[0xb];
  local_d8 = *(undefined8 *)(param_3 + 0xc);
  FUN_147793fba(local_108,local_d0,&local_108,&local_150);
  FUN_1428fd920(param_2,local_d0);
  FUN_14493db24(local_d0);
  if ((local_18 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779e0a2 FUN_14779e0a2 body=141 status=ok
// SIG undefined FUN_14779e0a2(void)

undefined8 FUN_14779e0a2(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined1 local_d0 [184];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_108 = *param_3;
  uStack_104 = param_3[1];
  uStack_100 = param_3[2];
  uStack_fc = param_3[3];
  local_f8 = param_3[4];
  uStack_f4 = param_3[5];
  uStack_f0 = param_3[6];
  uStack_ec = param_3[7];
  local_e8 = param_3[8];
  uStack_e4 = param_3[9];
  uStack_e0 = param_3[10];
  uStack_dc = param_3[0xb];
  local_d8 = *(undefined8 *)(param_3 + 0xc);
  FUN_147795b6c(local_108,local_d0,&local_108);
  FUN_1428fd920(param_2,local_d0);
  FUN_14493db24(local_d0);
  if ((local_18 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779e130 FUN_14779e130 body=141 status=ok
// SIG undefined FUN_14779e130(void)

undefined8 FUN_14779e130(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined1 local_d0 [184];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_108 = *param_3;
  uStack_104 = param_3[1];
  uStack_100 = param_3[2];
  uStack_fc = param_3[3];
  local_f8 = param_3[4];
  uStack_f4 = param_3[5];
  uStack_f0 = param_3[6];
  uStack_ec = param_3[7];
  local_e8 = param_3[8];
  uStack_e4 = param_3[9];
  uStack_e0 = param_3[10];
  uStack_dc = param_3[0xb];
  local_d8 = *(undefined8 *)(param_3 + 0xc);
  FUN_147796b90(local_108,local_d0,&local_108);
  FUN_1428fd920(param_2,local_d0);
  FUN_14493db24(local_d0);
  if ((local_18 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779e1be FUN_14779e1be body=141 status=ok
// SIG undefined FUN_14779e1be(void)

undefined8 FUN_14779e1be(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined1 local_d0 [184];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_108 = *param_3;
  uStack_104 = param_3[1];
  uStack_100 = param_3[2];
  uStack_fc = param_3[3];
  local_f8 = param_3[4];
  uStack_f4 = param_3[5];
  uStack_f0 = param_3[6];
  uStack_ec = param_3[7];
  local_e8 = param_3[8];
  uStack_e4 = param_3[9];
  uStack_e0 = param_3[10];
  uStack_dc = param_3[0xb];
  local_d8 = *(undefined8 *)(param_3 + 0xc);
  FUN_147795de8(local_108,local_d0,&local_108);
  FUN_1428fd920(param_2,local_d0);
  FUN_14493db24(local_d0);
  if ((local_18 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779e24c FUN_14779e24c body=141 status=ok
// SIG undefined FUN_14779e24c(void)

undefined8 FUN_14779e24c(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined1 local_d0 [184];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_108 = *param_3;
  uStack_104 = param_3[1];
  uStack_100 = param_3[2];
  uStack_fc = param_3[3];
  local_f8 = param_3[4];
  uStack_f4 = param_3[5];
  uStack_f0 = param_3[6];
  uStack_ec = param_3[7];
  local_e8 = param_3[8];
  uStack_e4 = param_3[9];
  uStack_e0 = param_3[10];
  uStack_dc = param_3[0xb];
  local_d8 = *(undefined8 *)(param_3 + 0xc);
  FUN_1477963a6(local_108,local_d0,&local_108);
  FUN_1428fd920(param_2,local_d0);
  FUN_14493db24(local_d0);
  if ((local_18 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779e2da FUN_14779e2da body=89 status=ok
// SIG undefined FUN_14779e2da(void)

void FUN_14779e2da(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = param_2[4];
  uStack_34 = param_2[5];
  uStack_30 = param_2[6];
  uStack_2c = param_2[7];
  local_28 = param_2[8];
  uStack_24 = param_2[9];
  uStack_20 = param_2[10];
  uStack_1c = param_2[0xb];
  local_18 = *(undefined8 *)(param_2 + 0xc);
  FUN_147796064(local_48,&local_48);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779e334 thunk_FUN_147796240 body=5 status=ok
// SIG undefined thunk_FUN_147796240(void)

/* WARNING: Removing unreachable block (ram,0x0001477962ee) */
/* WARNING: Removing unreachable block (ram,0x0001477962f4) */
/* WARNING: Removing unreachable block (ram,0x000147796302) */

void thunk_FUN_147796240(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_c8 [32];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong *plStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined3 uStack_40;
  undefined4 uStack_3d;
  undefined4 uStack_39;
  ulonglong uStack_30;
  
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  ppuStack_a8 = &PTR_FUN_149eda650;
  uStack_90 = *(undefined8 *)(param_2 + 0x18);
  uStack_a0 = *(undefined8 *)(param_2 + 8);
  uStack_98 = *(undefined8 *)(param_2 + 0x10);
  uStack_88 = *(undefined4 *)(param_2 + 0x20);
  uStack_84 = *(undefined4 *)(param_2 + 0x24);
  uStack_80 = *(undefined4 *)(param_2 + 0x28);
  uStack_7c = *(undefined4 *)(param_2 + 0x2c);
  uStack_78 = *(undefined4 *)(param_2 + 0x30);
  uStack_74 = *(undefined4 *)(param_2 + 0x34);
  uStack_70 = *(undefined4 *)(param_2 + 0x38);
  uStack_6c = *(undefined4 *)(param_2 + 0x3c);
  uStack_68 = *(undefined8 *)(param_2 + 0x40);
  uStack_60 = *(undefined8 *)(param_2 + 0x48);
  plStack_58 = *(longlong **)(param_2 + 0x50);
  if (plStack_58 == (longlong *)0x0) {
    plStack_58 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plStack_58 + 1) = (int)plStack_58[1] + 1;
    UNLOCK();
  }
  uStack_50 = *(undefined8 *)(param_2 + 0x58);
  uStack_48 = *(undefined4 *)(param_2 + 0x60);
  uVar3 = *(undefined4 *)(param_2 + 100);
  uStack_3d = *(undefined4 *)(param_2 + 0x6b);
  uStack_39 = *(undefined4 *)(param_2 + 0x6f);
  uStack_44 = (undefined2)uVar3;
  uStack_42 = (undefined1)((uint)uVar3 >> 0x10);
  uStack_40 = (undefined3)((uint)*(undefined4 *)(param_2 + 0x67) >> 8);
  uStack_41 = (undefined1)((uint)uVar3 >> 0x18);
  uVar5 = FUN_14477b072(param_1,DAT_14cab9908);
  (**(code **)(*param_1 + 0x248))(param_1,uVar5,&ppuStack_a8);
  plVar4 = plStack_58;
  ppuStack_a8 = &PTR_FUN_149eda650;
  if (plStack_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_58)(plStack_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((uStack_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14779e33a FUN_14779e33a body=141 status=ok
// SIG undefined FUN_14779e33a(void)

undefined8 FUN_14779e33a(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined1 local_d0 [184];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_108 = *param_3;
  uStack_104 = param_3[1];
  uStack_100 = param_3[2];
  uStack_fc = param_3[3];
  local_f8 = param_3[4];
  uStack_f4 = param_3[5];
  uStack_f0 = param_3[6];
  uStack_ec = param_3[7];
  local_e8 = param_3[8];
  uStack_e4 = param_3[9];
  uStack_e0 = param_3[10];
  uStack_dc = param_3[0xb];
  local_d8 = *(undefined8 *)(param_3 + 0xc);
  FUN_147796622(local_108,local_d0,&local_108);
  FUN_1428fd920(param_2,local_d0);
  FUN_14493db24(local_d0);
  if ((local_18 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779e3c8 FUN_14779e3c8 body=141 status=ok
// SIG undefined FUN_14779e3c8(void)

undefined8 FUN_14779e3c8(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined1 local_d0 [184];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_108 = *param_3;
  uStack_104 = param_3[1];
  uStack_100 = param_3[2];
  uStack_fc = param_3[3];
  local_f8 = param_3[4];
  uStack_f4 = param_3[5];
  uStack_f0 = param_3[6];
  uStack_ec = param_3[7];
  local_e8 = param_3[8];
  uStack_e4 = param_3[9];
  uStack_e0 = param_3[10];
  uStack_dc = param_3[0xb];
  local_d8 = *(undefined8 *)(param_3 + 0xc);
  FUN_1477958f0(local_108,local_d0,&local_108);
  FUN_1428fd920(param_2,local_d0);
  FUN_14493db24(local_d0);
  if ((local_18 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779e456 FUN_14779e456 body=89 status=ok
// SIG undefined FUN_14779e456(void)

void FUN_14779e456(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = param_2[4];
  uStack_34 = param_2[5];
  uStack_30 = param_2[6];
  uStack_2c = param_2[7];
  local_28 = param_2[8];
  uStack_24 = param_2[9];
  uStack_20 = param_2[10];
  uStack_1c = param_2[0xb];
  local_18 = *(undefined8 *)(param_2 + 0xc);
  FUN_14779464e(local_48,&local_48);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779e4b0 FUN_14779e4b0 body=216 status=ok
// SIG undefined FUN_14779e4b0(void)

void FUN_14779e4b0(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  undefined1 auStack_e8 [40];
  undefined **local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined3 uStack_60;
  undefined5 local_5d;
  undefined3 uStack_58;
  undefined8 uStack_55;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8 = *(undefined8 *)(param_3 + 8);
  uStack_b0 = *(undefined8 *)(param_3 + 0x10);
  local_a8 = *(undefined8 *)(param_3 + 0x18);
  local_c0 = &PTR_FUN_149eda650;
  local_a0 = *(undefined8 *)(param_3 + 0x20);
  uStack_98 = *(undefined8 *)(param_3 + 0x28);
  local_90 = *(undefined8 *)(param_3 + 0x30);
  uStack_88 = *(undefined8 *)(param_3 + 0x38);
  local_80 = *(undefined8 *)(param_3 + 0x40);
  local_78 = *(undefined8 *)(param_3 + 0x48);
  local_70 = *(longlong *)(param_3 + 0x50);
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
  }
  uStack_68 = *(undefined8 *)(param_3 + 0x58);
  uStack_55 = *(undefined8 *)(param_3 + 0x6b);
  uStack_58 = (undefined3)((ulonglong)*(undefined8 *)(param_3 + 99) >> 0x28);
  uStack_60 = (undefined3)*(undefined8 *)(param_3 + 0x60);
  local_5d = (undefined5)((ulonglong)*(undefined8 *)(param_3 + 0x60) >> 0x18);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = param_2[4];
  uStack_34 = param_2[5];
  uStack_30 = param_2[6];
  uStack_2c = param_2[7];
  local_28 = param_2[8];
  uStack_24 = param_2[9];
  uStack_20 = param_2[10];
  uStack_1c = param_2[0xb];
  local_18 = *(undefined8 *)(param_2 + 0xc);
  FUN_14779484a(local_48,&local_48);
  if ((local_8 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779e58a FUN_14779e58a body=168 status=ok
// SIG undefined FUN_14779e58a(void)

void FUN_14779e58a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_a8 [40];
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined3 uStack_18;
  undefined4 uStack_15;
  undefined4 uStack_11;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *(undefined8 *)(param_2 + 8);
  uStack_70 = *(undefined8 *)(param_2 + 0x10);
  local_68 = *(undefined8 *)(param_2 + 0x18);
  local_80 = &PTR_FUN_149eda650;
  local_60 = *(undefined8 *)(param_2 + 0x20);
  uStack_58 = *(undefined8 *)(param_2 + 0x28);
  local_50 = *(undefined8 *)(param_2 + 0x30);
  uStack_48 = *(undefined8 *)(param_2 + 0x38);
  local_40 = *(undefined8 *)(param_2 + 0x40);
  local_38 = *(undefined8 *)(param_2 + 0x48);
  local_30 = *(longlong *)(param_2 + 0x50);
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  uStack_28 = *(undefined4 *)(param_2 + 0x58);
  uStack_24 = *(undefined4 *)(param_2 + 0x5c);
  uStack_20 = *(undefined4 *)(param_2 + 0x60);
  uStack_1c = *(undefined4 *)(param_2 + 100);
  uStack_15 = *(undefined4 *)(param_2 + 0x6b);
  uStack_11 = *(undefined4 *)(param_2 + 0x6f);
  uStack_18 = (undefined3)((uint)*(undefined4 *)(param_2 + 0x67) >> 8);
  FUN_147794a62();
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779e634 FUN_14779e634 body=216 status=ok
// SIG undefined FUN_14779e634(void)

void FUN_14779e634(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  undefined1 auStack_e8 [40];
  undefined **local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined3 uStack_60;
  undefined5 local_5d;
  undefined3 uStack_58;
  undefined8 uStack_55;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8 = *(undefined8 *)(param_3 + 8);
  uStack_b0 = *(undefined8 *)(param_3 + 0x10);
  local_a8 = *(undefined8 *)(param_3 + 0x18);
  local_c0 = &PTR_FUN_149eda650;
  local_a0 = *(undefined8 *)(param_3 + 0x20);
  uStack_98 = *(undefined8 *)(param_3 + 0x28);
  local_90 = *(undefined8 *)(param_3 + 0x30);
  uStack_88 = *(undefined8 *)(param_3 + 0x38);
  local_80 = *(undefined8 *)(param_3 + 0x40);
  local_78 = *(undefined8 *)(param_3 + 0x48);
  local_70 = *(longlong *)(param_3 + 0x50);
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
  }
  uStack_68 = *(undefined8 *)(param_3 + 0x58);
  uStack_55 = *(undefined8 *)(param_3 + 0x6b);
  uStack_58 = (undefined3)((ulonglong)*(undefined8 *)(param_3 + 99) >> 0x28);
  uStack_60 = (undefined3)*(undefined8 *)(param_3 + 0x60);
  local_5d = (undefined5)((ulonglong)*(undefined8 *)(param_3 + 0x60) >> 0x18);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = param_2[4];
  uStack_34 = param_2[5];
  uStack_30 = param_2[6];
  uStack_2c = param_2[7];
  local_28 = param_2[8];
  uStack_24 = param_2[9];
  uStack_20 = param_2[10];
  uStack_1c = param_2[0xb];
  local_18 = *(undefined8 *)(param_2 + 0xc);
  FUN_147794c0c(local_48,&local_48);
  if ((local_8 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779e70e FUN_14779e70e body=216 status=ok
// SIG undefined FUN_14779e70e(void)

void FUN_14779e70e(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  undefined1 auStack_e8 [40];
  undefined **local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined3 uStack_60;
  undefined5 local_5d;
  undefined3 uStack_58;
  undefined8 uStack_55;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8 = *(undefined8 *)(param_3 + 8);
  uStack_b0 = *(undefined8 *)(param_3 + 0x10);
  local_a8 = *(undefined8 *)(param_3 + 0x18);
  local_c0 = &PTR_FUN_149eda650;
  local_a0 = *(undefined8 *)(param_3 + 0x20);
  uStack_98 = *(undefined8 *)(param_3 + 0x28);
  local_90 = *(undefined8 *)(param_3 + 0x30);
  uStack_88 = *(undefined8 *)(param_3 + 0x38);
  local_80 = *(undefined8 *)(param_3 + 0x40);
  local_78 = *(undefined8 *)(param_3 + 0x48);
  local_70 = *(longlong *)(param_3 + 0x50);
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
  }
  uStack_68 = *(undefined8 *)(param_3 + 0x58);
  uStack_55 = *(undefined8 *)(param_3 + 0x6b);
  uStack_58 = (undefined3)((ulonglong)*(undefined8 *)(param_3 + 99) >> 0x28);
  uStack_60 = (undefined3)*(undefined8 *)(param_3 + 0x60);
  local_5d = (undefined5)((ulonglong)*(undefined8 *)(param_3 + 0x60) >> 0x18);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = param_2[4];
  uStack_34 = param_2[5];
  uStack_30 = param_2[6];
  uStack_2c = param_2[7];
  local_28 = param_2[8];
  uStack_24 = param_2[9];
  uStack_20 = param_2[10];
  uStack_1c = param_2[0xb];
  local_18 = *(undefined8 *)(param_2 + 0xc);
  FUN_147794e38(local_48,&local_48);
  if ((local_8 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779e7ee FUN_14779e7ee body=141 status=ok
// SIG undefined FUN_14779e7ee(void)

undefined8 FUN_14779e7ee(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined1 local_d0 [184];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_108 = *param_3;
  uStack_104 = param_3[1];
  uStack_100 = param_3[2];
  uStack_fc = param_3[3];
  local_f8 = param_3[4];
  uStack_f4 = param_3[5];
  uStack_f0 = param_3[6];
  uStack_ec = param_3[7];
  local_e8 = param_3[8];
  uStack_e4 = param_3[9];
  uStack_e0 = param_3[10];
  uStack_dc = param_3[0xb];
  local_d8 = *(undefined8 *)(param_3 + 0xc);
  FUN_147797304(local_108,local_d0,&local_108);
  FUN_1428fd920(param_2,local_d0);
  FUN_14493db24(local_d0);
  if ((local_18 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779e87c FUN_14779e87c body=141 status=ok
// SIG undefined FUN_14779e87c(void)

undefined8 FUN_14779e87c(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined1 local_d0 [184];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_108 = *param_3;
  uStack_104 = param_3[1];
  uStack_100 = param_3[2];
  uStack_fc = param_3[3];
  local_f8 = param_3[4];
  uStack_f4 = param_3[5];
  uStack_f0 = param_3[6];
  uStack_ec = param_3[7];
  local_e8 = param_3[8];
  uStack_e4 = param_3[9];
  uStack_e0 = param_3[10];
  uStack_dc = param_3[0xb];
  local_d8 = *(undefined8 *)(param_3 + 0xc);
  FUN_1477977fc(local_108,local_d0,&local_108);
  FUN_1428fd920(param_2,local_d0);
  FUN_14493db24(local_d0);
  if ((local_18 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779e90a FUN_14779e90a body=141 status=ok
// SIG undefined FUN_14779e90a(void)

undefined8 FUN_14779e90a(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined1 local_d0 [184];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_108 = *param_3;
  uStack_104 = param_3[1];
  uStack_100 = param_3[2];
  uStack_fc = param_3[3];
  local_f8 = param_3[4];
  uStack_f4 = param_3[5];
  uStack_f0 = param_3[6];
  uStack_ec = param_3[7];
  local_e8 = param_3[8];
  uStack_e4 = param_3[9];
  uStack_e0 = param_3[10];
  uStack_dc = param_3[0xb];
  local_d8 = *(undefined8 *)(param_3 + 0xc);
  FUN_147797580(local_108,local_d0,&local_108);
  FUN_1428fd920(param_2,local_d0);
  FUN_14493db24(local_d0);
  if ((local_18 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779e998 FUN_14779e998 body=141 status=ok
// SIG undefined FUN_14779e998(void)

undefined8 FUN_14779e998(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined1 local_d0 [184];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_108 = *param_3;
  uStack_104 = param_3[1];
  uStack_100 = param_3[2];
  uStack_fc = param_3[3];
  local_f8 = param_3[4];
  uStack_f4 = param_3[5];
  uStack_f0 = param_3[6];
  uStack_ec = param_3[7];
  local_e8 = param_3[8];
  uStack_e4 = param_3[9];
  uStack_e0 = param_3[10];
  uStack_dc = param_3[0xb];
  local_d8 = *(undefined8 *)(param_3 + 0xc);
  FUN_147796e0c(local_108,local_d0,&local_108);
  FUN_1428fd920(param_2,local_d0);
  FUN_14493db24(local_d0);
  if ((local_18 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779ea26 FUN_14779ea26 body=208 status=ok
// SIG undefined FUN_14779ea26(void)

undefined8 FUN_14779ea26(undefined8 param_1,undefined8 param_2,undefined4 *param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178 [12];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined1 local_d8 [184];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_190 = *(undefined8 *)(param_4 + 8);
  uStack_188 = *(undefined8 *)(param_4 + 0x10);
  local_180 = *(undefined8 *)(param_4 + 0x18);
  local_198 = &PTR_FUN_149eda710;
  puVar2 = (undefined8 *)(param_4 + 0x20);
  puVar3 = local_178;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_e8 = *(undefined8 *)(param_3 + 0xc);
  local_118 = *param_3;
  uStack_114 = param_3[1];
  uStack_110 = param_3[2];
  uStack_10c = param_3[3];
  local_108 = param_3[4];
  uStack_104 = param_3[5];
  uStack_100 = param_3[6];
  uStack_fc = param_3[7];
  local_f8 = param_3[8];
  uStack_f4 = param_3[9];
  uStack_f0 = param_3[10];
  uStack_ec = param_3[0xb];
  FUN_14779575e(param_1,local_d8,&local_118,&local_198);
  FUN_1428fd920(param_2,local_d8);
  FUN_14493db24(local_d8);
  if ((local_20 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779eaf8 FUN_14779eaf8 body=141 status=ok
// SIG undefined FUN_14779eaf8(void)

undefined8 FUN_14779eaf8(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined1 local_d0 [184];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_108 = *param_3;
  uStack_104 = param_3[1];
  uStack_100 = param_3[2];
  uStack_fc = param_3[3];
  local_f8 = param_3[4];
  uStack_f4 = param_3[5];
  uStack_f0 = param_3[6];
  uStack_ec = param_3[7];
  local_e8 = param_3[8];
  uStack_e4 = param_3[9];
  uStack_e0 = param_3[10];
  uStack_dc = param_3[0xb];
  local_d8 = *(undefined8 *)(param_3 + 0xc);
  FUN_147797088(local_108,local_d0,&local_108);
  FUN_1428fd920(param_2,local_d0);
  FUN_14493db24(local_d0);
  if ((local_18 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779eb86 FUN_14779eb86 body=62 status=ok
// SIG undefined FUN_14779eb86(void)

longlong FUN_14779eb86(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  bool bVar2;
  
  bVar2 = (*(byte *)(param_1 + 0xd9) & 8) != 0;
  if (bVar2) {
    uVar1 = FUN_14775e068();
  }
  else {
    uVar1 = 1;
  }
  *(bool *)param_2 = bVar2;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  return param_2;
}



// FUNCTION 14779ebda FUN_14779ebda body=47 status=ok
// SIG undefined FUN_14779ebda(void)

void FUN_14779ebda(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cab98e8);
                    /* WARNING: Could not recover jumptable at 0x00014779ec06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 14779ec0a FUN_14779ec0a body=135 status=ok
// SIG undefined FUN_14779ec0a(void)

void FUN_14779ec0a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x268) != 0) {
    FUN_144757f48(*(longlong *)(param_1 + 0x268),0x40);
  }
  lVar1 = FUN_14779c096(param_1);
  if (lVar1 != 0) {
    FUN_14779cff2(param_1,lVar1 + 0x3f0);
  }
  local_20 = *param_2;
  *(int *)(local_20 + 0x94) = *(int *)(local_20 + 0x94) + 1;
  FUN_14775e78e(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779ec92 FUN_14779ec92 body=263 status=ok
// SIG undefined FUN_14779ec92(void)

undefined8 FUN_14779ec92(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 == (longlong *)0x0) {
LAB_14779ecda:
    if ((param_1[4] != 0) &&
       (param_1 = *(longlong **)(param_1[4] + 0x20), param_1 != (longlong *)0x0)) {
      lVar1 = FUN_1405e2bf2();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
          lVar1 + 0x30)) goto LAB_14779ed10;
    }
  }
  else {
    lVar1 = FUN_1405e2bf2();
    if ((*(int *)(param_1[2] + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) goto LAB_14779ecda;
LAB_14779ed10:
    if (param_1[0x4d] != 0) {
      uVar2 = (**(code **)(*param_1 + 0x2d0))(param_1);
      uVar3 = (**(code **)(*param_1 + 0x180))(param_1);
      local_38 = *param_2;
      if ((local_38 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      local_48 = uVar2;
      uVar2 = FUN_14126c752(param_1[0x4d],&local_38,param_3,uVar3);
      goto LAB_14779ed70;
    }
  }
  uVar2 = 0;
LAB_14779ed70:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779ed9a FUN_14779ed9a body=1170 status=ok
// SIG undefined FUN_14779ed9a(void)

undefined8 FUN_14779ed9a(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_f8;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  longlong local_b0 [2];
  longlong local_a0;
  longlong *local_98 [2];
  longlong local_88;
  ulonglong uStack_80;
  longlong *local_70 [2];
  wchar_t *local_60;
  undefined4 local_58;
  longlong *local_50;
  undefined4 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(byte *)(param_1 + 0x84) & 2) == 0) {
LAB_14779ee78:
    local_60 = L"NotLocalPlayer";
    local_58 = 0xe;
    FUN_1446e940c(&local_88,&local_60);
    local_60 = L"UMG";
    local_58 = 3;
    FUN_1446e940c(local_98,&local_60);
    FUN_140208bae(local_70,local_98,&local_88,
                  L"Only Local Player Controllers can be assigned to widgets. {PlayerController} is not a Local Player Controller."
                 );
    local_88 = 0;
    uStack_80 = 0;
    local_a0 = param_1[3];
    FUN_145715fae(local_98);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
    FUN_14023423e(&local_50,local_98);
    FUN_140056680(local_b0,L"PlayerController");
    FUN_140233eec(&local_88,local_b0,&local_60);
    if (local_b0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
      local_50 = (longlong *)0x0;
      local_48 = 0;
    }
    if (local_98[0] != (longlong *)0x0) {
      (**(code **)(*local_98[0] + 0x10))();
    }
    FUN_1446ddc76(local_b0,&DAT_14a492018,1);
    FUN_14276766e(&local_60,local_b0);
    FUN_14023409e(local_d0,local_70,1);
    FUN_140233c04(local_98,local_d0,&local_88);
    puVar8 = local_c0;
LAB_14779f001:
    FUN_142767974(&local_60,puVar8,local_98);
    plVar4 = *(longlong **)(puVar8 + 8);
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
    if (local_98[0] != (longlong *)0x0) {
      (**(code **)(*local_98[0] + 0x10))();
    }
    FUN_1427678c0(&local_60);
    FUN_14010f8af(local_88,uStack_80 & 0xffffffff);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_70[0] != (longlong *)0x0) {
      (**(code **)(*local_70[0] + 0x10))();
    }
  }
  else {
    cVar5 = (**(code **)(*param_1 + 0x6c8))(param_1);
    if (cVar5 == '\0') goto LAB_14779ee78;
    if (param_1[0x86] == 0) {
      local_60 = L"NoPlayer";
      local_58 = 8;
      FUN_1446e940c(&local_88,&local_60);
      local_60 = L"UMG";
      local_58 = 3;
      FUN_1446e940c(local_98,&local_60);
      FUN_140208bae(local_70,local_98,&local_88,
                    L"CreateWidget cannot be used on Player Controller with no attached player. {PlayerController} has no Player attached."
                   );
      local_88 = 0;
      uStack_80 = 0;
      local_a0 = param_1[3];
      FUN_145715fae(local_98);
      local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
      FUN_14023423e(&local_50,local_98);
      FUN_140056680(local_b0,L"PlayerController");
      FUN_140233eec(&local_88,local_b0,&local_60);
      if (local_b0[0] != 0) {
        FUN_1400020a8();
      }
      if (local_50 != (longlong *)0x0) {
        (**(code **)(*local_50 + 0x10))();
        local_50 = (longlong *)0x0;
        local_48 = 0;
      }
      if (local_98[0] != (longlong *)0x0) {
        (**(code **)(*local_98[0] + 0x10))();
      }
      FUN_1446ddc76(local_b0,&DAT_14a492018,1);
      FUN_14276766e(&local_60,local_b0);
      FUN_14023409e(local_f0,local_70,1);
      FUN_140233c04(local_98,local_f0,&local_88);
      puVar8 = local_e0;
      goto LAB_14779f001;
    }
    lVar6 = FUN_1447210f0(param_1);
    if (lVar6 != 0) {
      lVar9 = *(longlong *)(lVar6 + 0x1f0);
      if (*(longlong *)(lVar6 + 0x1f0) == 0) {
        lVar9 = lVar6;
      }
      lVar3 = param_1[0x86];
      local_f8 = *param_2;
      if ((local_f8 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      local_108 = lVar3;
      uVar7 = FUN_14126c752(lVar9,&local_f8,param_3,lVar6);
      goto LAB_14779ee4f;
    }
  }
  uVar7 = 0;
LAB_14779ee4f:
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779f22e FUN_14779f22e body=215 status=ok
// SIG undefined FUN_14779f22e(void)

void FUN_14779f22e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  
  iVar3 = (int)param_1[1];
  if (0 < iVar3) {
    lVar6 = 0;
    bVar5 = false;
    do {
      while( true ) {
        lVar1 = *param_1;
        lVar2 = *param_2;
        if ((lVar2 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar2);
          iVar3 = (int)param_1[1];
        }
        if (*(longlong *)(lVar1 + lVar6 * 8) != lVar2) break;
        iVar4 = iVar3 + ~(uint)lVar6;
        if (iVar4 != 0) {
          if (0 < iVar4) {
            iVar4 = 1;
          }
          memmove((void *)(*param_1 + lVar6 * 8),(void *)(*param_1 + (longlong)(iVar3 - iVar4) * 8),
                  (longlong)iVar4 << 3);
          iVar3 = (int)param_1[1];
        }
        iVar3 = iVar3 + -1;
        *(int *)(param_1 + 1) = iVar3;
        bVar5 = true;
        if (iVar3 <= lVar6) goto LAB_14779f2ed;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar3);
    if (bVar5) {
LAB_14779f2ed:
      FUN_1477ab9de(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14779f305 FUN_14779f305 body=266 status=ok
// SIG undefined FUN_14779f305(void)

undefined8
FUN_14779f305(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4,undefined8 param_5
             ,byte param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_98 = 0;
  uStack_c0 = (ulonglong)param_4;
  local_b0 = param_5;
  local_b8 = (ushort)param_6;
  local_a8 = param_7;
  local_a0 = param_8;
  local_d8 = param_2;
  local_d0 = param_1;
  local_c8 = param_3;
  uVar1 = FUN_1402710dd(&local_d8);
  if (local_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779f410 FUN_14779f410 body=225 status=ok
// SIG undefined FUN_14779f410(void)

undefined8 FUN_14779f410(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    iVar6 = 1;
    lVar8 = 0;
    lVar9 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar2 = *param_2;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar1 + lVar8) == lVar2) {
        if (iVar6 == 0) {
          return 0;
        }
        iVar5 = (int)param_1[1];
        iVar6 = iVar5 - iVar6;
        if (iVar6 != 0) {
          iVar7 = 1;
          if (iVar6 < 1) {
            iVar7 = iVar6;
          }
          memmove((void *)(*param_1 + (lVar9 >> 0x20) * 8),
                  (void *)(*param_1 + (longlong)(iVar5 - iVar7) * 8),(longlong)iVar7 << 3);
          iVar5 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar5 + -1;
        FUN_1477ac788(param_1);
        return 1;
      }
      lVar9 = lVar9 + 0x100000000;
      iVar6 = iVar6 + 1;
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar8);
  }
  return 0;
}



// FUNCTION 14779f4f2 FUN_14779f4f2 body=158 status=ok
// SIG undefined FUN_14779f4f2(void)

void FUN_14779f4f2(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  byte *local_40;
  undefined8 *local_38;
  undefined1 *local_30;
  byte **local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_1 - 4 < 2) {
    FUN_14485c47a(param_1 + 0x14);
    *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_1 + 4);
  }
  else if (*param_1 == 1) {
    local_40 = param_1 + 4;
    local_38 = &local_20;
    local_20 = 0;
    local_28 = &local_40;
    local_30 = &LAB_14333e22e;
    FUN_140ec5510(param_3);
    FUN_14485c47a(param_1 + 0xc,local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779f592 FUN_14779f592 body=119 status=ok
// SIG undefined FUN_14779f592(void)

void FUN_14779f592(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14779f4f2(param_1 + 0x28);
  FUN_14779f4f2(param_1 + 0x4c,param_2,param_3);
  FUN_14779f4f2(param_1 + 0x70,param_2,param_3);
  FUN_14779f4f2(param_1 + 0x94,param_2,param_3);
  FUN_14779f4f2(param_1 + 0xb8,param_2,param_3);
  FUN_14779f4f2(param_1 + 0xdc,param_2,param_3);
  return;
}



// FUNCTION 14779f60a FUN_14779f60a body=386 status=ok
// SIG undefined FUN_14779f60a(void)

void FUN_14779f60a(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_14779f7a0(&local_28,param_1 + 0x28,2);
  local_38 = *param_2;
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_14779f7a0(&local_38,param_1 + 0x4c,3);
  local_48 = *param_2;
  local_40 = param_2[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  FUN_14779f7a0(&local_48,param_1 + 0x70,0);
  local_58 = *param_2;
  local_50 = param_2[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  FUN_14779f7a0(&local_58,param_1 + 0x94,1);
  local_68 = *param_2;
  local_60 = param_2[1];
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  FUN_14779f7a0(&local_68,param_1 + 0xb8,4);
  local_78 = *param_2;
  local_70 = param_2[1];
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
  }
  FUN_14779f7a0(&local_78,param_1 + 0xdc,5);
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779f7a0 FUN_14779f7a0 body=423 status=ok
// SIG undefined FUN_14779f7a0(void)

void FUN_14779f7a0(undefined8 *param_1,undefined1 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  switch(*param_2) {
  case 0:
    FUN_14779f948(*param_1,param_3);
    break;
  case 1:
    cVar7 = FUN_144729dda(param_2 + 0xc);
    if (cVar7 != '\0') {
      uVar4 = *param_1;
      uVar8 = FUN_14479d2ce(param_2 + 0xc);
      FUN_140760c2c(uVar8,local_50);
      FUN_14779fa58(uVar4,param_3,local_50);
    }
    break;
  case 2:
    FUN_14779f9d0(*param_1,param_3);
    break;
  case 3:
    FUN_145716b82(*param_1,param_3);
    break;
  case 4:
  case 5:
    cVar7 = FUN_14113f0c0(param_2 + 0x14);
    if (cVar7 != '\0') {
      uVar4 = *(undefined8 *)(param_2 + 0x14);
      uVar8 = *(undefined8 *)(param_2 + 0x1c);
      uVar5 = *param_1;
      local_60 = (undefined8 *)0x0;
      local_58 = 0;
      FUN_1446efa72(&local_60,0,3,0x10);
      local_58 = 3;
      *local_60 = &PTR_LAB_14a55eab0;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar6 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar6 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar6;
      local_60[2] = lVar9;
      *local_60 = &PTR_FUN_14a55ea40;
      local_60[3] = uVar4;
      local_60[4] = uVar8;
      FUN_14779fb3a(uVar5,param_3,*param_2,&local_60);
    }
  }
  plVar3 = (longlong *)param_1[1];
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
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14779f948 FUN_14779f948 body=135 status=ok
// SIG undefined FUN_14779f948(void)

void FUN_14779f948(longlong param_1,byte param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1 = param_1 + (ulonglong)param_2 * 0x28;
  *(undefined1 *)(param_1 + 8) = 0;
  local_28 = 0;
  local_20 = 0;
  FUN_144a450dc(param_1 + 0x20,&local_28);
  FUN_1449db362(&local_28);
  plVar2 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779f9d0 FUN_14779f9d0 body=135 status=ok
// SIG undefined FUN_14779f9d0(void)

void FUN_14779f9d0(longlong param_1,byte param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1 = param_1 + (ulonglong)param_2 * 0x28;
  *(undefined1 *)(param_1 + 8) = 2;
  local_28 = 0;
  local_20 = 0;
  FUN_144a450dc(param_1 + 0x20,&local_28);
  FUN_1449db362(&local_28);
  plVar2 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779fa58 FUN_14779fa58 body=224 status=ok
// SIG undefined FUN_14779fa58(void)

void FUN_14779fa58(longlong param_1,byte param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_1 + (ulonglong)param_2 * 0x28;
  *(undefined1 *)(lVar2 + 8) = 1;
  local_40 = 0;
  local_38 = 0;
  FUN_144a450dc(lVar2 + 0x20,&local_40);
  FUN_1449db362(&local_40);
  *(undefined8 *)(lVar2 + 0x10) = *param_3;
  plVar4 = (longlong *)param_3[1];
  plVar3 = *(longlong **)(lVar2 + 0x18);
  if (plVar3 != plVar4) {
    param_1 = param_1 + (ulonglong)param_2 * 0x28;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar3 = *(longlong **)(param_1 + 0x18);
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x18) = plVar4;
    plVar4 = (longlong *)param_3[1];
  }
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779fb3a FUN_14779fb3a body=78 status=ok
// SIG undefined FUN_14779fb3a(void)

void FUN_14779fb3a(longlong param_1,byte param_2,undefined1 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = param_1 + 0x20 + (ulonglong)param_2 * 0x28;
  *(undefined1 *)(lVar2 + -0x18) = param_3;
  FUN_1414df504(lVar2,param_4);
  plVar3 = *(longlong **)(lVar2 + -8);
  *(undefined8 *)(lVar2 + -0x10) = 0;
  *(undefined8 *)(lVar2 + -8) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_1449db362(param_4);
  return;
}



// FUNCTION 14779fba8 FUN_14779fba8 body=164 status=ok
// SIG undefined FUN_14779fba8(void)

longlong FUN_14779fba8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    if (param_1 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = *(longlong *)(param_1 + 0x50);
    }
    local_20 = 0xffffffff;
    local_1c = 0x101;
    local_1a = 0;
    local_30 = param_1;
    FUN_1477ac832(&local_30);
    if (local_28 != 0) {
      do {
        lVar1 = local_28;
        if (*(longlong *)(local_28 + 0x20) == param_2) goto LAB_14779fbc4;
        local_28 = *(longlong *)(local_28 + 0x18);
        FUN_1477ac832(&local_30);
      } while (local_28 != 0);
    }
  }
  lVar1 = 0;
LAB_14779fbc4:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 14779fc4e FUN_14779fc4e body=260 status=ok
// SIG undefined FUN_14779fc4e(void)

void FUN_14779fc4e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_14797e798();
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    FUN_1468b71ae();
    (**(code **)(**(longlong **)(param_1 + 0x3b0) + 0x170))
              (*(longlong **)(param_1 + 0x3b0),0,DAT_14c951640,0x34);
    *(undefined8 *)(param_1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 1000);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x3e0);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      FUN_1468b71ae(plVar3);
      (**(code **)(*plVar3 + 0x170))(plVar3,0,DAT_14c951640,0x34);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 1000) = 0;
  if (*(int *)(param_1 + 0x3ec) != 0) {
    FUN_1477acfbe(param_1 + 0x3e0);
  }
  FUN_1413180ee(*(undefined8 *)(param_1 + 0x3d0),*(undefined4 *)(param_1 + 0x3d8));
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  if (*(int *)(param_1 + 0x3dc) == 0) {
    return;
  }
  FUN_1477acfee(param_1 + 0x3d0);
  return;
}



// FUNCTION 14779fd52 FUN_14779fd52 body=56 status=ok
// SIG undefined FUN_14779fd52(void)

undefined8 FUN_14779fd52(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_1401e2c50();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0x27c));
}



// FUNCTION 14779fdae FUN_14779fdae body=440 status=ok
// SIG undefined FUN_14779fdae(void)

void FUN_14779fdae(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_1e8 [44];
  int local_1bc;
  undefined8 local_1b8;
  undefined1 local_1b0 [184];
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_f8[0] = 0;
  local_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  memset(local_d0,0,0x88);
  local_48 = 0x20702;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_1b8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b8);
  }
  local_1bc = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1bc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1bc);
  }
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = local_f8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477a68ac(local_1b0,puVar1,local_1b8,local_1bc != 0);
  FUN_1403d4924(param_3,local_1b0);
  FUN_14493db24(local_1b0);
  FUN_14493db24(local_f8);
  if ((local_40 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779ff68 FUN_14779ff68 body=361 status=ok
// SIG undefined FUN_14779ff68(void)

void FUN_14779ff68(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined1 local_1b0 [184];
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_f8[0] = 0;
  local_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  memset(local_d0,0,0x88);
  local_48 = 0x20702;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_1b8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b8);
  }
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = local_f8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477a00d2(local_1b0,puVar1,local_1b8);
  FUN_1403d4924(param_3,local_1b0);
  FUN_14493db24(local_1b0);
  FUN_14493db24(local_f8);
  if ((local_40 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a00d2 FUN_1477a00d2 body=188 status=ok
// SIG undefined FUN_1477a00d2(void)

undefined8 FUN_1477a00d2(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    FUN_140760c2c(param_3,&local_30);
    if (local_30 != 0) {
      local_40 = local_30;
      local_38 = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
      }
      uVar3 = FUN_140592a6e(param_2,&local_40);
      FUN_1402c17c2(param_2,uVar3);
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
  }
  FUN_1403d4c6e(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a0198 FUN_1477a0198 body=399 status=ok
// SIG undefined FUN_1477a0198(void)

void FUN_1477a0198(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_1d8 [36];
  int local_1b4;
  undefined1 local_1b0 [184];
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_f8[0] = 0;
  local_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  memset(local_d0,0,0x88);
  local_48 = 0x20702;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_1b4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1b4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b4);
  }
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = local_f8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_146948ce8(puVar2,2,local_1b4 != 0);
  FUN_1402c17c2(puVar2,uVar1);
  FUN_1403d4c6e(local_1b0,puVar2);
  FUN_1403d4924(param_3,local_1b0);
  FUN_14493db24(local_1b0);
  FUN_14493db24(local_f8);
  if ((local_40 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a0328 FUN_1477a0328 body=340 status=ok
// SIG undefined FUN_1477a0328(void)

void FUN_1477a0328(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
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
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uVar1 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_1477a047e(local_20,&local_38,uVar1);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a047e FUN_1477a047e body=415 status=ok
// SIG undefined FUN_1477a047e(void)

undefined8 FUN_1477a047e(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar1 = FUN_1405e2bf2();
    if ((((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
         lVar1 + 0x30)) && (lVar3 = *param_2, lVar3 != 0)) {
      if (param_3 != 0) {
        local_30 = lVar3;
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c();
        }
        plVar4 = &local_30;
        param_1 = param_3;
LAB_1477a0513:
        uVar2 = FUN_143335f3f(param_1,plVar4,0);
        goto LAB_1477a04cb;
      }
      if (param_1 != 0) {
        lVar3 = FUN_144a75eb4();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          local_38 = *param_2;
          if ((local_38 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          plVar4 = &local_38;
          goto LAB_1477a0513;
        }
        lVar3 = FUN_1405e2bf2();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          local_40 = *param_2;
          if ((local_40 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          uVar2 = FUN_14333cccd(param_1,&local_40);
          goto LAB_1477a04cb;
        }
      }
      lVar3 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
      if (lVar3 != 0) {
        local_48 = *param_2;
        if ((local_48 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        uVar2 = FUN_1412b606d(lVar3,&local_48,0);
        goto LAB_1477a04cb;
      }
    }
  }
  uVar2 = 0;
LAB_1477a04cb:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a061e FUN_1477a061e body=185 status=ok
// SIG undefined FUN_1477a061e(void)

void FUN_1477a061e(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_1477a06d8(&local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a06d8 FUN_1477a06d8 body=134 status=ok
// SIG undefined FUN_1477a06d8(void)

void FUN_1477a06d8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = FUN_1411b2a4c();
    if ((((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
         lVar1 + 0x30)) && (lVar2 = *param_1, lVar2 != 0)) {
      lVar1 = FUN_1411b2a4c();
      if (((lVar1 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
          lVar1 + 0x30)) {
        lVar2 = 0;
      }
      else {
        lVar2 = *param_1;
      }
      FUN_1477a7150(DAT_14c951640,lVar2);
      return;
    }
  }
  FUN_1477a720a(DAT_14c951640);
  return;
}



// FUNCTION 1477a075e FUN_1477a075e body=514 status=ok
// SIG undefined FUN_1477a075e(void)

void FUN_1477a075e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_208 [40];
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  longlong *local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong *local_1b8;
  undefined8 local_1a8;
  undefined1 local_1a0 [184];
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8;
  undefined1 local_c0 [136];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_e8[0] = 0;
  local_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  memset(local_c0,0,0x88);
  local_38 = 0x20702;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e8);
  }
  puVar4 = local_e8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_1a8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a8);
  }
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1e0 = (undefined4)local_1c8;
  uStack_1dc = local_1c8._4_4_;
  uStack_1d8 = (undefined4)uStack_1c0;
  uStack_1d4 = uStack_1c0._4_4_;
  local_1d0 = local_1b8;
  if (local_1b8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1b8 + 1) = (int)local_1b8[1] + 1;
    UNLOCK();
  }
  FUN_1477a0962(local_1a0,puVar4,local_1a8,&local_1e0);
  FUN_1403d4924(param_3,local_1a0);
  FUN_14493db24(local_1a0);
  plVar3 = local_1b8;
  if (local_1b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1b8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1b8)(local_1b8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_14493db24(local_e8);
  if ((local_30 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a0962 FUN_1477a0962 body=331 status=ok
// SIG undefined FUN_1477a0962(void)

undefined8 FUN_1477a0962(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 != 0) {
    FUN_140760c2c(param_3,&local_38);
    if (local_38 != 0) {
      local_50 = *param_4;
      local_48 = param_4[1];
      local_40 = param_4[2];
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      local_58 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
      }
      uVar4 = FUN_1407c9a0c(param_2,local_60,&local_50);
      FUN_1402c17c2(param_2,uVar4);
      plVar3 = local_58;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_58)(local_58);
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
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_30 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  FUN_1403d4c6e(param_1,param_2);
  plVar3 = (longlong *)param_4[2];
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
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a0aae FUN_1477a0aae body=611 status=ok
// SIG undefined FUN_1477a0aae(void)

void FUN_1477a0aae(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_1b8 [40];
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  longlong *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  longlong *local_168;
  undefined8 local_160;
  undefined **local_158;
  undefined2 local_150;
  undefined1 local_14e;
  undefined8 local_14c;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong *local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined7 local_f0;
  undefined4 uStack_e9;
  undefined1 local_e0 [184];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_150 = 0;
  local_14e = 0;
  local_14c = 0xffffffff00000000;
  local_140 = 0;
  local_158 = &PTR_FUN_149eda650;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_120 = &DAT_14c96b1e8;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = (longlong *)0x0;
  uStack_100 = 0;
  local_f8 = 0x3f800000;
  local_f4 = 0;
  local_f0 = 0;
  uStack_e9 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_158);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_158);
  }
  pppuVar4 = &local_158;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar4 = *(undefined ****)(param_2 + 0x38);
  }
  local_160 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_160);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_160);
  }
  local_178 = 0;
  uStack_170 = 0;
  local_168 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_178);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_178);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_190 = (undefined4)local_178;
  uStack_18c = local_178._4_4_;
  uStack_188 = (undefined4)uStack_170;
  uStack_184 = uStack_170._4_4_;
  local_180 = local_168;
  if (local_168 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_168 + 1) = (int)local_168[1] + 1;
    UNLOCK();
  }
  FUN_1477a0d12(local_e0,pppuVar4,local_160,&local_190);
  FUN_1403d4924(param_3,local_e0);
  FUN_14493db24(local_e0);
  plVar3 = local_168;
  if (local_168 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_168 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_168)(local_168);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_108;
  local_158 = &PTR_FUN_149eda650;
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_108 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a0d12 FUN_1477a0d12 body=323 status=ok
// SIG undefined FUN_1477a0d12(void)

undefined8 FUN_1477a0d12(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_128 [40];
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  undefined1 local_e8 [184];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar4 = *(longlong *)(param_2 + 0x40);
  plVar5 = *(longlong **)(param_2 + 0x50);
  if (plVar5 == (longlong *)0x0) {
    if (lVar4 != *param_4) {
      cVar3 = *(char *)(param_2 + 100);
joined_r0x0001477a0da8:
      if (cVar3 == '\0') {
        FUN_1477a6f1e(param_1);
        goto LAB_1477a0dfb;
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    if (lVar4 != *param_4) {
      cVar3 = *(char *)(param_2 + 100);
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
      goto joined_r0x0001477a0da8;
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
  }
  FUN_1477a4418(local_e8);
  local_100 = *param_4;
  local_f8 = param_4[1];
  local_f0 = param_4[2];
  if (local_f0 != 0) {
    LOCK();
    *(int *)(local_f0 + 8) = *(int *)(local_f0 + 8) + 1;
    UNLOCK();
  }
  FUN_1477a0962(param_1,local_e8,param_3,&local_100);
  FUN_14493db24(local_e8);
LAB_1477a0dfb:
  plVar5 = (longlong *)param_4[2];
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
  if ((local_30 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1477a0e72 FUN_1477a0e72 body=589 status=ok
// SIG undefined FUN_1477a0e72(void)

void FUN_1477a0e72(undefined8 param_1,longlong param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_30;
  undefined *local_28;
  undefined1 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_48 = &DAT_14cab9b4c;
  local_40 = &DAT_14cab9b84;
  FUN_14779bfd2();
  local_38 = &DAT_14cab9bc8;
  local_30 = 0;
  local_28 = &DAT_14cab9b94;
  local_20 = 1;
  local_1c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  ppuVar1 = *(undefined ***)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  ppuVar2 = &local_48;
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar2 = ppuVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c8 = &local_98;
  local_98 = local_80;
  uStack_90 = uStack_78;
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  local_b8 = local_58;
  uStack_b4 = uStack_54;
  uStack_b0 = uStack_50;
  uStack_ac = uStack_4c;
  FUN_1477a10c0(ppuVar2,&local_b8,&local_a8,local_70);
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a10c0 FUN_1477a10c0 body=481 status=ok
// SIG undefined FUN_1477a10c0(void)

void FUN_1477a10c0(longlong *param_1,double *param_2,double *param_3,longlong param_4,
                  undefined8 param_5)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_9c;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  byte local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar4 = *(int *)((longlong)param_1 + 0x2c) + 1;
  *(int *)((longlong)param_1 + 0x2c) = iVar4;
  if (param_4 != 0) {
    fVar6 = (float)param_2[1];
    fVar5 = (float)*param_2;
    lVar3 = *param_1;
    local_90 = (float)param_3[1];
    local_94 = (float)*param_3;
    local_a0 = *(float *)(lVar3 + 8);
    local_8c = *(float *)(lVar3 + 0x1c);
    local_a8 = CONCAT44(local_a0 * fVar6 + *(float *)(lVar3 + 0x10),
                        local_a0 * fVar5 + *(float *)(lVar3 + 0xc));
    local_88 = *(float *)(lVar3 + 0x20);
    fVar1 = *(float *)(lVar3 + 0x28);
    fVar2 = *(float *)(lVar3 + 0x24);
    local_78 = fVar5 * local_88 + fVar1 * fVar6 + *(float *)(lVar3 + 0x30);
    local_7c = fVar5 * local_8c + fVar6 * fVar2 + *(float *)(lVar3 + 0x2c);
    local_80 = local_88 * 0.0 + fVar1;
    local_84 = local_8c * 0.0 + fVar2;
    local_88 = fVar1 * 0.0 + local_88;
    local_8c = fVar2 * 0.0 + local_8c;
    local_9c = 0;
    local_74 = *(char *)(lVar3 + 0x34) * '\x02' & 2;
    local_b0 = param_5;
    local_b8 = 0;
    FUN_140239bd2(param_1[2],iVar4,&local_a8,param_4 + 0x30);
  }
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a12a8 FUN_1477a12a8 body=665 status=ok
// SIG undefined FUN_1477a12a8(void)

void FUN_1477a12a8(undefined8 param_1,longlong param_2)

{
  undefined **ppuVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  int local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_38;
  undefined *local_30;
  undefined1 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_50 = &DAT_14cab9b4c;
  local_48 = &DAT_14cab9b84;
  FUN_14779bfd2();
  local_40 = &DAT_14cab9bc8;
  local_38 = 0;
  local_30 = &DAT_14cab9b94;
  local_28 = 1;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  ppuVar1 = *(undefined ***)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_84 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  iVar2 = local_84;
  local_88 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  ppuVar3 = &local_50;
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar3 = ppuVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_80;
  uStack_90 = uStack_78;
  local_a8 = local_70;
  uStack_a0 = uStack_68;
  local_b8 = local_60;
  uStack_b4 = uStack_5c;
  uStack_b0 = uStack_58;
  uStack_ac = uStack_54;
  local_c8 = iVar2 != 0;
  local_c0 = local_88;
  FUN_1477a1542(ppuVar3);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a1542 FUN_1477a1542 body=521 status=ok
// SIG undefined FUN_1477a1542(void)

void FUN_1477a1542(longlong *param_1,double *param_2,double *param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6)

{
  double dVar1;
  double dVar2;
  undefined8 *puVar3;
  float *_Src;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined4 local_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  float *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 local_6c;
  byte local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(int *)((longlong)param_1 + 0x2c) = *(int *)((longlong)param_1 + 0x2c) + 1;
  local_a8 = (float *)0x0;
  dVar1 = *param_2;
  dVar2 = param_2[1];
  uStack_a0._0_4_ = 1;
  uStack_a0._4_4_ = 0;
  FUN_140752556(&local_a8,0);
  iVar4 = (int)uStack_a0;
  *local_a8 = (float)dVar1;
  local_a8[1] = (float)dVar2;
  dVar1 = *param_3;
  dVar2 = param_3[1];
  lVar6 = (longlong)(int)uStack_a0;
  uVar5 = (int)uStack_a0 + 1;
  uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar5);
  if (uStack_a0._4_4_ < uVar5) {
    FUN_140752556(&local_a8,iVar4);
  }
  _Src = local_a8;
  local_a8[lVar6 * 2] = (float)dVar1;
  local_a8[lVar6 * 2 + 1] = (float)dVar2;
  if (9.999999747378752e-05 <
      (*param_2 - *param_3) * (*param_2 - *param_3) +
      (param_2[1] - param_3[1]) * (param_2[1] - param_3[1])) {
    local_b8 = (void *)0x0;
    lVar6 = (longlong)(int)uStack_a0;
    local_b0 = (int)uStack_a0;
    if (lVar6 == 0) {
      local_ac = 0;
    }
    else {
      FUN_1401f7a02(&local_b8,uStack_a0 & 0xffffffff,0);
      memcpy(local_b8,_Src,lVar6 << 3);
    }
    puVar3 = (undefined8 *)*param_1;
    local_84 = *puVar3;
    local_98 = *(undefined8 *)((longlong)puVar3 + 0xc);
    local_90 = *(undefined4 *)(puVar3 + 1);
    local_8c = 0;
    local_7c = *(undefined4 *)((longlong)puVar3 + 0x1c);
    uStack_78 = *(undefined4 *)(puVar3 + 4);
    uStack_74 = *(undefined4 *)((longlong)puVar3 + 0x24);
    uStack_70 = *(undefined4 *)(puVar3 + 5);
    local_6c = *(undefined8 *)((longlong)puVar3 + 0x2c);
    local_64 = *(char *)((longlong)puVar3 + 0x34) * '\x02' & 2;
    local_c0 = param_6;
    local_c8 = param_5;
    local_d8 = 0;
    local_d0 = param_4;
    FUN_146955074(param_1[2],*(undefined4 *)((longlong)param_1 + 0x2c),&local_98,&local_b8);
  }
  if (local_a8 != (float *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a1752 FUN_1477a1752 body=600 status=ok
// SIG undefined FUN_1477a1752(void)

void FUN_1477a1752(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined **ppuVar3;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68 [2];
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_40;
  undefined *local_38;
  undefined1 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = &DAT_14cab9b4c;
  local_50 = &DAT_14cab9b84;
  FUN_14779bfd2();
  local_48 = &DAT_14cab9bc8;
  local_40 = 0;
  local_38 = &DAT_14cab9b94;
  local_30 = 1;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  ppuVar3 = &local_58;
  if (*(undefined ***)(param_2 + 0x38) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_2 + 0x38);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar2 = local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_7c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  iVar1 = local_7c;
  local_80 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_78;
  uStack_94 = uStack_74;
  uStack_90 = uStack_70;
  uStack_8c = uStack_6c;
  local_a8 = local_80;
  FUN_1477a19ac(ppuVar3,plVar2,&local_98,iVar1 != 0);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a19ac FUN_1477a19ac body=634 status=ok
// SIG undefined FUN_1477a19ac(void)

void FUN_1477a19ac(longlong *param_1,longlong *param_2,undefined8 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined4 local_e0;
  longlong local_d8;
  int local_d0;
  undefined4 local_cc;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 local_8c;
  byte local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (1 < (int)param_2[1]) {
    local_c8 = 0;
    uStack_c0 = 0;
    FUN_14171ef34(&local_c8);
    uVar5 = uStack_c0;
    dVar1 = *(double *)*param_2;
    dVar2 = ((double *)*param_2)[1];
    lVar10 = (longlong)(int)uStack_c0;
    uVar6 = (int)uStack_c0 + 1;
    uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar6);
    if (uStack_c0._4_4_ < uVar6) {
      FUN_140752556(&local_c8,uVar5 & 0xffffffff);
    }
    *(float *)(local_c8 + lVar10 * 8) = (float)dVar1;
    *(float *)(local_c8 + 4 + lVar10 * 8) = (float)dVar2;
    iVar7 = (int)param_2[1];
    if (1 < iVar7) {
      uVar3 = *(undefined8 *)*param_2;
      uVar11 = (undefined4)uVar3;
      uVar12 = (undefined4)((ulonglong)uVar3 >> 0x20);
      uVar3 = ((undefined8 *)*param_2)[1];
      uVar13 = (undefined4)uVar3;
      uVar14 = (undefined4)((ulonglong)uVar3 >> 0x20);
      lVar9 = 1;
      lVar10 = 0x18;
      do {
        uVar5 = uStack_c0;
        dVar1 = *(double *)(*param_2 + -8 + lVar10);
        dVar2 = *(double *)(*param_2 + lVar10);
        dVar15 = dVar2 - (double)CONCAT44(uVar14,uVar13);
        dVar16 = dVar1 - (double)CONCAT44(uVar12,uVar11);
        if (9.999999747378752e-05 < dVar16 * dVar16 + dVar15 * dVar15) {
          lVar8 = (longlong)(int)uStack_c0;
          uVar6 = (int)uStack_c0 + 1;
          uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar6);
          if (uStack_c0._4_4_ < uVar6) {
            FUN_140752556(&local_c8,uVar5 & 0xffffffff);
          }
          *(float *)(local_c8 + lVar8 * 8) = (float)dVar1;
          *(float *)(local_c8 + 4 + lVar8 * 8) = (float)dVar2;
          iVar7 = (int)param_2[1];
          uVar11 = SUB84(dVar1,0);
          uVar12 = (int)((ulonglong)dVar1 >> 0x20);
          uVar13 = SUB84(dVar2,0);
          uVar14 = (int)((ulonglong)dVar2 >> 0x20);
        }
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 0x10;
      } while (lVar9 < iVar7);
    }
    iVar7 = (int)uStack_c0;
    if (1 < (int)uStack_c0) {
      *(int *)((longlong)param_1 + 0x2c) = *(int *)((longlong)param_1 + 0x2c) + 1;
      local_d8 = local_c8;
      local_cc = uStack_c0._4_4_;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d0 = iVar7;
      puVar4 = (undefined8 *)*param_1;
      local_a4 = *puVar4;
      local_b8 = *(undefined8 *)((longlong)puVar4 + 0xc);
      local_b0 = *(undefined4 *)(puVar4 + 1);
      local_ac = 0;
      local_9c = *(undefined4 *)((longlong)puVar4 + 0x1c);
      uStack_98 = *(undefined4 *)(puVar4 + 4);
      uStack_94 = *(undefined4 *)((longlong)puVar4 + 0x24);
      uStack_90 = *(undefined4 *)(puVar4 + 5);
      local_8c = *(undefined8 *)((longlong)puVar4 + 0x2c);
      local_84 = *(char *)((longlong)puVar4 + 0x34) * '\x02' & 2;
      local_e0 = param_5;
      local_f8 = 0;
      local_f0 = param_3;
      local_e8 = param_4;
      FUN_146955074(param_1[2]);
    }
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_80 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a1c28 FUN_1477a1c28 body=794 status=ok
// SIG undefined FUN_1477a1c28(void)

void FUN_1477a1c28(undefined8 param_1,longlong param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 *local_110;
  undefined4 local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_30;
  undefined *local_28;
  undefined1 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_48 = &DAT_14cab9b4c;
  local_40 = &DAT_14cab9b84;
  FUN_14779bfd2();
  local_38 = &DAT_14cab9bc8;
  local_30 = 0;
  local_28 = &DAT_14cab9b94;
  local_20 = 1;
  local_1c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  ppuVar1 = *(undefined ***)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_9c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  ppuVar2 = &local_48;
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar2 = ppuVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_110 = &local_b8;
  local_b8 = local_98;
  uStack_b0 = uStack_90;
  local_118 = &local_c8;
  local_c8 = local_88;
  uStack_c0 = uStack_80;
  local_d8 = local_78;
  uStack_d0 = uStack_70;
  local_e8 = local_68;
  uStack_e0 = uStack_60;
  local_f8 = local_58;
  uStack_f4 = uStack_54;
  uStack_f0 = uStack_50;
  uStack_ec = uStack_4c;
  local_108 = local_9c;
  FUN_1477a1f44(ppuVar2);
  if ((local_18 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a1f44 FUN_1477a1f44 body=398 status=ok
// SIG undefined FUN_1477a1f44(void)

void FUN_1477a1f44(longlong *param_1,double *param_2,double *param_3,double *param_4,double *param_5
                  ,undefined8 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  byte local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar2 = *(int *)((longlong)param_1 + 0x2c) + 1;
  *(int *)((longlong)param_1 + 0x2c) = iVar2;
  puVar1 = (undefined8 *)*param_1;
  local_84 = *puVar1;
  local_98 = *(undefined8 *)((longlong)puVar1 + 0xc);
  local_90 = *(undefined4 *)(puVar1 + 1);
  local_8c = 0;
  local_7c = *(undefined8 *)((longlong)puVar1 + 0x1c);
  uStack_74 = *(undefined8 *)((longlong)puVar1 + 0x24);
  local_6c = *(undefined8 *)((longlong)puVar1 + 0x2c);
  local_64 = *(char *)((longlong)puVar1 + 0x34) * '\x02' & 2;
  local_c8 = CONCAT44((float)param_3[1],(float)*param_3);
  local_c0 = CONCAT44((float)param_4[1],(float)*param_4);
  local_b8 = CONCAT44((float)param_5[1],(float)*param_5);
  local_a0 = param_6;
  local_b0 = param_7;
  local_a8 = 0;
  FUN_146954d3e(param_1[2],iVar2,&local_98,CONCAT44((float)param_2[1],(float)*param_2));
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a20d4 FUN_1477a20d4 body=495 status=ok
// SIG undefined FUN_1477a20d4(void)

void FUN_1477a20d4(undefined8 param_1,longlong param_2)

{
  undefined **ppuVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58 [2];
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_30;
  undefined *local_28;
  undefined1 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = &DAT_14cab9b4c;
  local_40 = &DAT_14cab9b84;
  FUN_14779bfd2();
  local_38 = &DAT_14cab9bc8;
  local_30 = 0;
  local_28 = &DAT_14cab9b94;
  local_20 = 1;
  local_1c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  ppuVar1 = &local_48;
  if (*(undefined ***)(param_2 + 0x38) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x38);
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_78;
  uStack_80 = uStack_70;
  local_98 = local_68;
  uStack_94 = uStack_64;
  uStack_90 = uStack_60;
  uStack_8c = uStack_5c;
  FUN_1477a22c4(ppuVar1,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a22c4 FUN_1477a22c4 body=558 status=ok
// SIG undefined FUN_1477a22c4(void)

void FUN_1477a22c4(longlong *param_1,undefined8 param_2,double *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_158 [32];
  undefined1 *local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [56];
  longlong *local_e0;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  byte local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *(int *)((longlong)param_1 + 0x2c) = *(int *)((longlong)param_1 + 0x2c) + 1;
  uVar6 = DAT_14c98de08;
  FUN_1446ddc76(&local_120,"NormalText",1);
  lVar7 = FUN_140a57516(uVar6,local_120,0,0);
  FUN_144a87366(local_118,lVar7 + 8);
  puVar5 = (undefined8 *)*param_1;
  fVar9 = (float)param_3[1];
  fVar8 = (float)*param_3;
  local_b0 = *(float *)(puVar5 + 1);
  local_a4 = *puVar5;
  local_b8 = CONCAT44(local_b0 * fVar9 + *(float *)(puVar5 + 2),
                      local_b0 * fVar8 + *(float *)((longlong)puVar5 + 0xc));
  local_98 = *(float *)(puVar5 + 4);
  fVar3 = *(float *)(puVar5 + 5);
  local_9c = *(float *)((longlong)puVar5 + 0x1c);
  fVar4 = *(float *)((longlong)puVar5 + 0x24);
  local_88 = fVar8 * local_98 + fVar3 * fVar9 + *(float *)(puVar5 + 6);
  local_8c = fVar8 * local_9c + fVar9 * fVar4 + *(float *)((longlong)puVar5 + 0x2c);
  local_90 = local_98 * 0.0 + fVar3;
  local_94 = local_9c * 0.0 + fVar4;
  local_98 = fVar3 * 0.0 + local_98;
  local_9c = fVar4 * 0.0 + local_9c;
  local_ac = 0;
  local_84 = local_84 & 0xfc | *(char *)((longlong)puVar5 + 0x34) * '\x02' & 2U;
  local_130 = 0;
  local_138 = local_118;
  local_128 = param_4;
  FUN_1428695e4(param_1[2],*(undefined4 *)((longlong)param_1 + 0x2c),&local_b8,param_2);
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
  if ((local_80 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a24f4 FUN_1477a24f4 body=824 status=ok
// SIG undefined FUN_1477a24f4(void)

void FUN_1477a24f4(undefined8 param_1,longlong param_2)

{
  longlong **pplVar1;
  undefined **ppuVar2;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_68 [2];
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_40;
  undefined *local_38;
  undefined1 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_58 = &DAT_14cab9b4c;
  local_50 = &DAT_14cab9b84;
  FUN_14779bfd2();
  local_48 = &DAT_14cab9bc8;
  local_40 = 0;
  local_38 = &DAT_14cab9b94;
  local_30 = 1;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  ppuVar2 = &local_58;
  if (*(undefined ***)(param_2 + 0x38) != (undefined **)0x0) {
    ppuVar2 = *(undefined ***)(param_2 + 0x38);
  }
  FUN_144a5dc74(local_68);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  pplVar1 = local_68;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar1 = *(longlong ***)(param_2 + 0x38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_80 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_84 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  local_90 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_d8 = &local_b8;
  local_b8 = local_a0;
  uStack_b0 = uStack_98;
  local_c8 = local_78;
  uStack_c4 = uStack_74;
  uStack_c0 = uStack_70;
  uStack_bc = uStack_6c;
  local_e0 = local_90;
  local_e8 = local_84;
  FUN_1477a282e(ppuVar2,pplVar1,&local_c8,local_80);
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a282e FUN_1477a282e body=603 status=ok
// SIG undefined FUN_1477a282e(void)

void FUN_1477a282e(longlong *param_1,undefined8 param_2,double *param_3,longlong param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_168 [32];
  ulonglong *local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [56];
  longlong *local_f0;
  ulonglong local_c8;
  float local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined8 uStack_b4;
  float fStack_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  byte local_94;
  ulonglong local_90;
  
  uVar8 = param_7;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_4 != 0) {
    *(int *)((longlong)param_1 + 0x2c) = *(int *)((longlong)param_1 + 0x2c) + 1;
    local_148 = &local_c8;
    local_c0 = 0.0;
    uStack_bc = 0;
    local_c8 = local_c8 & 0xff00000000000000;
    local_b8 = 0;
    uStack_b4 = 0;
    fStack_ac = 1.0;
    FUN_140324f46(local_128,param_4,param_5,&param_6);
    puVar6 = (undefined8 *)*param_1;
    fVar11 = (float)param_3[1];
    fVar10 = (float)*param_3;
    local_c0 = *(float *)(puVar6 + 1);
    uStack_b4 = *puVar6;
    local_c8 = CONCAT44(local_c0 * fVar11 + *(float *)(puVar6 + 2),
                        local_c0 * fVar10 + *(float *)((longlong)puVar6 + 0xc));
    local_a8 = *(float *)(puVar6 + 4);
    fVar3 = *(float *)(puVar6 + 5);
    fStack_ac = *(float *)((longlong)puVar6 + 0x1c);
    fVar4 = *(float *)((longlong)puVar6 + 0x24);
    local_98 = fVar10 * local_a8 + fVar3 * fVar11 + *(float *)(puVar6 + 6);
    local_9c = fVar10 * fStack_ac + fVar11 * fVar4 + *(float *)((longlong)puVar6 + 0x2c);
    local_a0 = local_a8 * 0.0 + fVar3;
    local_a4 = fStack_ac * 0.0 + fVar4;
    local_a8 = fVar3 * 0.0 + local_a8;
    fStack_ac = fVar4 * 0.0 + fStack_ac;
    uStack_bc = 0;
    local_b8 = 0;
    local_94 = *(char *)((longlong)puVar6 + 0x34) * '\x02' & 2;
    uVar5 = *(undefined4 *)((longlong)param_1 + 0x2c);
    lVar7 = param_1[2];
    uVar9 = FUN_1447a1f4a(param_2);
    local_138 = uVar8;
    local_140 = 0;
    local_148 = (ulonglong *)local_128;
    FUN_1428695e4(lVar7,uVar5,&local_c8,uVar9);
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar2 = (int *)((longlong)local_f0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_f0 + 0x10))(local_f0);
        }
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a2a8a FUN_1477a2a8a body=310 status=ok
// SIG undefined FUN_1477a2a8a(void)

void FUN_1477a2a8a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_1d8 [40];
  undefined1 local_1b0 [184];
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_f8[0] = 0;
  local_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  memset(local_d0,0,0x88);
  local_48 = 0x20702;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  if (*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) {
    puVar1 = local_f8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar1[0xb4] = puVar1[0xb4] | 0x80;
  FUN_1402c17c2(puVar1,puVar1);
  FUN_1403d4c6e(local_1b0,puVar1);
  FUN_1403d4924(param_3,local_1b0);
  FUN_14493db24(local_1b0);
  FUN_14493db24(local_f8);
  if ((local_40 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a2bc8 FUN_1477a2bc8 body=440 status=ok
// SIG undefined FUN_1477a2bc8(void)

void FUN_1477a2bc8(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_44;
  longlong local_40;
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
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
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  iVar1 = local_44;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_40;
  if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_1477a2d82(local_38[2],plVar2,&local_50,iVar1 != 0);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a2d82 FUN_1477a2d82 body=491 status=ok
// SIG undefined FUN_1477a2d82(void)

void FUN_1477a2d82(longlong param_1,longlong *param_2,longlong *param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    FUN_1477ad08c(param_2);
  }
  lVar6 = *param_3;
  if (((((lVar6 != 0) && (lVar5 = FUN_1405e2bf2(), lVar5 != 0)) &&
       (*(int *)(lVar5 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
      ((*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30 && (param_1 != 0)))) &&
     ((*param_3 != 0 && (lVar6 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1), lVar6 != 0)))) {
    FUN_1477a72ba(&local_58);
    uVar8 = (ulonglong)local_48;
    if ((-1 < (int)local_48) && ((int)local_48 < local_50)) {
      do {
        plVar2 = *(longlong **)(local_58 + (uVar8 & 0xffffffff) * 8);
        lVar5 = (**(code **)(*plVar2 + 0x180))(plVar2);
        if ((lVar5 == lVar6) && (lVar5 = *param_3, lVar5 != 0)) {
          lVar3 = plVar2[2];
          lVar7 = FUN_1405e2bf2();
          if ((((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
              (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
               lVar7 + 0x30)) &&
             (((lVar5 = *param_3, lVar5 != 0 && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38)))
              && ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
                   == lVar5 + 0x30 &&
                  ((param_4 == '\0' || (cVar4 = FUN_14775bd5a(plVar2), cVar4 != '\0')))))))) {
            iVar1 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
              FUN_1477ad0bc(param_2,iVar1);
            }
            *(longlong **)(*param_2 + (longlong)iVar1 * 8) = plVar2;
          }
        }
        uVar8 = (longlong)(int)local_48;
        do {
          uVar9 = uVar8;
          uVar8 = uVar9 + 1;
          local_48 = (uint)uVar8;
          if ((longlong)local_50 <= (longlong)uVar8) break;
        } while (*(longlong *)(local_58 + uVar8 * 8) == 0);
      } while ((-2 < (longlong)uVar9) && ((int)local_48 < local_50));
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477a2f74 FUN_1477a2f74 body=440 status=ok
// SIG undefined FUN_1477a2f74(void)

void FUN_1477a2f74(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_44;
  longlong local_40;
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
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
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  iVar1 = local_44;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_40;
  if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_1477a312e(local_38[2],plVar2,&local_50,iVar1 != 0);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a312e FUN_1477a312e body=468 status=ok
// SIG undefined FUN_1477a312e(void)

void FUN_1477a312e(longlong param_1,longlong *param_2,longlong *param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    FUN_1477ad08c(param_2);
  }
  lVar5 = *param_3;
  if (((((lVar5 != 0) && (lVar4 = FUN_144a8d392(), lVar4 != 0)) &&
       (*(int *)(lVar4 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
      ((*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30 && (param_1 != 0)))) &&
     ((*param_3 != 0 && (lVar5 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1), lVar5 != 0)))) {
    FUN_1477a72ba(&local_58);
    uVar8 = (ulonglong)local_48;
    if ((-1 < (int)local_48) && ((int)local_48 < local_50)) {
      do {
        plVar2 = *(longlong **)(local_58 + (uVar8 & 0xffffffff) * 8);
        lVar4 = (**(code **)(*plVar2 + 0x180))(plVar2);
        if (lVar4 == lVar5) {
          lVar4 = plVar2[2];
          lVar7 = *param_3;
          if ((((lVar7 == 0) || (lVar6 = FUN_144a8d392(), lVar6 == 0)) ||
              (*(int *)(lVar7 + 0x38) < *(int *)(lVar6 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
              lVar6 + 0x30)) {
            lVar7 = 0;
          }
          else {
            lVar7 = *param_3;
          }
          cVar3 = FUN_144a7ff9e(lVar4,lVar7);
          if ((cVar3 != '\0') &&
             ((param_4 == '\0' || (cVar3 = FUN_14775bd5a(plVar2), cVar3 != '\0')))) {
            iVar1 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
              FUN_1477ad0bc(param_2,iVar1);
            }
            *(longlong **)(*param_2 + (longlong)iVar1 * 8) = plVar2;
          }
        }
        uVar8 = (longlong)(int)local_48;
        do {
          uVar9 = uVar8;
          uVar8 = uVar9 + 1;
          local_48 = (uint)uVar8;
          if ((longlong)local_50 <= (longlong)uVar8) break;
        } while (*(longlong *)(local_58 + uVar8 * 8) == 0);
      } while ((-2 < (longlong)uVar9) && ((int)local_48 < local_50));
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477a3304 FUN_1477a3304 body=384 status=ok
// SIG undefined FUN_1477a3304(void)

void FUN_1477a3304(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = &PTR_FUN_149ed05f0;
  local_d0 = &DAT_3f8000003f800000;
  puStack_c8 = &DAT_3f8000003f800000;
  local_c0 = 0;
  local_bc = 3;
  local_b8 = 0x4200000042000000;
  local_64 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  local_60 = 1;
  local_50 = DAT_14c84635c;
  local_58 = DAT_14c84635c;
  local_48 = 0;
  local_44 = 4;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  plVar3 = plStack_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar4 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar4 = &local_d8;
  }
  *param_3 = pppuVar4[7];
  local_d8 = &PTR_FUN_149ed05f0;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a3486 FUN_1477a3486 body=426 status=ok
// SIG undefined FUN_1477a3486(void)

void FUN_1477a3486(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  longlong lVar5;
  undefined **ppuVar6;
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = &PTR_FUN_149ed05f0;
  local_d0 = &DAT_3f8000003f800000;
  puStack_c8 = &DAT_3f8000003f800000;
  local_c0 = 0;
  local_bc = 3;
  local_b8 = 0x4200000042000000;
  local_64 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  local_60 = 1;
  local_50 = DAT_14c84635c;
  local_58 = DAT_14c84635c;
  local_48 = 0;
  local_44 = 4;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar4 = &local_d8;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar4 = *(undefined ****)(param_2 + 0x38);
  }
  ppuVar6 = pppuVar4[7];
  if (ppuVar6 != (undefined **)0x0) {
    lVar5 = FUN_1402d2740();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(ppuVar6[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(ppuVar6[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) goto LAB_1477a35b6;
  }
  ppuVar6 = (undefined **)0x0;
LAB_1477a35b6:
  plVar3 = plStack_38;
  *param_3 = (longlong)ppuVar6;
  local_d8 = &PTR_FUN_149ed05f0;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a3632 FUN_1477a3632 body=426 status=ok
// SIG undefined FUN_1477a3632(void)

void FUN_1477a3632(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  longlong lVar5;
  undefined **ppuVar6;
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = &PTR_FUN_149ed05f0;
  local_d0 = &DAT_3f8000003f800000;
  puStack_c8 = &DAT_3f8000003f800000;
  local_c0 = 0;
  local_bc = 3;
  local_b8 = 0x4200000042000000;
  local_64 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  local_60 = 1;
  local_50 = DAT_14c84635c;
  local_58 = DAT_14c84635c;
  local_48 = 0;
  local_44 = 4;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar4 = &local_d8;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar4 = *(undefined ****)(param_2 + 0x38);
  }
  ppuVar6 = pppuVar4[7];
  if (ppuVar6 != (undefined **)0x0) {
    lVar5 = FUN_144a79692();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(ppuVar6[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(ppuVar6[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) goto LAB_1477a3762;
  }
  ppuVar6 = (undefined **)0x0;
LAB_1477a3762:
  plVar3 = plStack_38;
  *param_3 = (longlong)ppuVar6;
  local_d8 = &PTR_FUN_149ed05f0;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a37de FUN_1477a37de body=38 status=ok
// SIG undefined FUN_1477a37de(void)

void FUN_1477a37de(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477a3804();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1477a3804 FUN_1477a3804 body=217 status=ok
// SIG undefined FUN_1477a3804(void)

longlong FUN_1477a3804(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1469af76e(DAT_14c98e618,&local_28);
  plVar1 = local_28;
  if (local_28 != (longlong *)0x0) {
    FUN_1477ad01e();
    cVar4 = (**(code **)(*plVar1 + 0x50))(plVar1,&DAT_14caba858);
    plVar1 = local_20;
    if (cVar4 != '\0') {
      if (local_20 == (longlong *)0x0) {
        lVar5 = local_28[0xc];
      }
      else {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
        lVar5 = local_28[0xc];
        LOCK();
        plVar3 = local_20 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      goto LAB_1477a3837;
    }
  }
  lVar5 = 0;
LAB_1477a3837:
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
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a38de FUN_1477a38de body=382 status=ok
// SIG undefined FUN_1477a38de(void)

void FUN_1477a38de(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = &PTR_FUN_149ed05f0;
  local_d0 = &DAT_3f8000003f800000;
  puStack_c8 = &DAT_3f8000003f800000;
  local_c0 = 0;
  local_bc = 3;
  local_b8 = 0x4200000042000000;
  local_64 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  local_60 = 1;
  local_50 = DAT_14c84635c;
  local_58 = DAT_14c84635c;
  local_48 = 0;
  local_44 = 4;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  pppuVar5 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar5 = &local_d8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_1477a3a5e(pppuVar5);
  plVar3 = plStack_38;
  *param_3 = uVar4;
  local_d8 = &PTR_FUN_149ed05f0;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
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



// FUNCTION 1477a3a5e FUN_1477a3a5e body=123 status=ok
// SIG undefined FUN_1477a3a5e(void)

longlong FUN_1477a3a5e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 != 0) {
    lVar1 = FUN_144a772c4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) {
      return lVar2;
    }
    lVar1 = FUN_1402d2740();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) {
      lVar2 = FUN_14090ceee(lVar2,0,0);
      FUN_140648376(param_1,lVar2);
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 1477a3ada FUN_1477a3ada body=204 status=ok
// SIG undefined FUN_1477a3ada(void)

void FUN_1477a3ada(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 auStack_68 [32];
  undefined **local_48;
  undefined2 local_40;
  undefined1 uStack_3e;
  undefined8 uStack_3c;
  undefined8 local_30;
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  uStack_3e = 0;
  uStack_3c = 0;
  local_30 = 0;
  local_48 = &PTR_FUN_149eda6b0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar5 = (undefined4 *)(*(longlong *)(param_2 + 0x38) + 8);
  if (*(longlong *)(param_2 + 0x38) == 0) {
    puVar5 = (undefined4 *)&local_40;
  }
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(puVar5 + 4);
  *(undefined4 *)(param_3 + 8) = uVar1;
  *(undefined4 *)(param_3 + 0xc) = uVar2;
  *(undefined4 *)(param_3 + 0x10) = uVar3;
  *(undefined4 *)(param_3 + 0x14) = uVar4;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a3ba8 FUN_1477a3ba8 body=265 status=ok
// SIG undefined FUN_1477a3ba8(void)

void FUN_1477a3ba8(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined1 auStack_88 [32];
  undefined **local_68;
  undefined2 local_60;
  undefined1 uStack_5e;
  undefined8 uStack_5c;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = 0;
  uStack_5e = 0;
  uStack_5c = 0;
  local_50 = 0;
  local_68 = &PTR_FUN_149eda6d0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = (longlong *)0x0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  plVar7 = local_38;
  puVar8 = (undefined4 *)(*(longlong *)(param_2 + 0x38) + 8);
  if (*(longlong *)(param_2 + 0x38) == 0) {
    puVar8 = (undefined4 *)&local_60;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = *puVar8;
  uVar4 = puVar8[1];
  uVar5 = puVar8[2];
  uVar6 = puVar8[3];
  *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(puVar8 + 4);
  *(undefined4 *)(param_3 + 8) = uVar3;
  *(undefined4 *)(param_3 + 0xc) = uVar4;
  *(undefined4 *)(param_3 + 0x10) = uVar5;
  *(undefined4 *)(param_3 + 0x14) = uVar6;
  local_68 = &PTR_FUN_149eda6d0;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a3cb2 FUN_1477a3cb2 body=221 status=ok
// SIG undefined FUN_1477a3cb2(void)

void FUN_1477a3cb2(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 auStack_68 [32];
  undefined **local_48;
  undefined2 local_40;
  undefined1 uStack_3e;
  undefined8 uStack_3c;
  undefined8 local_30;
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  uStack_3e = 0;
  uStack_3c = 0xffffffff00000000;
  local_30 = 0;
  local_48 = &PTR_FUN_149eda690;
  local_28 = 0x207;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar5 = (undefined4 *)(*(longlong *)(param_2 + 0x38) + 8);
  if (*(longlong *)(param_2 + 0x38) == 0) {
    puVar5 = (undefined4 *)&local_40;
  }
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(puVar5 + 4);
  *(undefined4 *)(param_3 + 8) = uVar1;
  *(undefined4 *)(param_3 + 0xc) = uVar2;
  *(undefined4 *)(param_3 + 0x10) = uVar3;
  *(undefined4 *)(param_3 + 0x14) = uVar4;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a3d90 FUN_1477a3d90 body=326 status=ok
// SIG undefined FUN_1477a3d90(void)

void FUN_1477a3d90(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined1 auStack_c8 [40];
  undefined **local_a0;
  undefined2 local_98;
  undefined1 uStack_96;
  undefined8 uStack_94;
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
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = 0;
  uStack_96 = 0;
  uStack_94 = 0xffffffff00000000;
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
  plVar7 = local_50;
  puVar8 = (undefined4 *)(*(longlong *)(param_2 + 0x38) + 8);
  if (*(longlong *)(param_2 + 0x38) == 0) {
    puVar8 = (undefined4 *)&local_98;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = *puVar8;
  uVar4 = puVar8[1];
  uVar5 = puVar8[2];
  uVar6 = puVar8[3];
  *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(puVar8 + 4);
  *(undefined4 *)(param_3 + 8) = uVar3;
  *(undefined4 *)(param_3 + 0xc) = uVar4;
  *(undefined4 *)(param_3 + 0x10) = uVar5;
  *(undefined4 *)(param_3 + 0x14) = uVar6;
  local_a0 = &PTR_FUN_149eda650;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a3ed8 FUN_1477a3ed8 body=441 status=ok
// SIG undefined FUN_1477a3ed8(void)

void FUN_1477a3ed8(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined ***pppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  longlong *plVar6;
  undefined ***pppuVar7;
  undefined1 auStack_c8 [32];
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined **local_90;
  undefined **local_88;
  undefined **local_80;
  undefined **local_78;
  undefined **local_70;
  undefined **local_68;
  undefined2 local_60;
  undefined1 uStack_5e;
  undefined8 uStack_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_60 = 0;
  uStack_5e = 0;
  uStack_5c = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 0;
  local_68 = &PTR_FUN_149eda6f0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  pppuVar3 = *(undefined ****)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar7 = pppuVar3 + 1;
  if (pppuVar3 == (undefined ***)0x0) {
    pppuVar7 = (undefined ***)&local_60;
  }
  local_90 = pppuVar7[2];
  ppuVar4 = *pppuVar7;
  ppuVar5 = pppuVar7[1];
  local_a8 = &PTR_FUN_149eda6d0;
  pppuVar7 = pppuVar3;
  if (pppuVar3 == (undefined ***)0x0) {
    pppuVar7 = &local_68;
  }
  local_88 = pppuVar7[4];
  local_80 = pppuVar7[5];
  local_78 = pppuVar7[6];
  if (local_78 != (undefined **)0x0) {
    LOCK();
    *(int *)(local_78 + 1) = *(int *)(local_78 + 1) + 1;
    UNLOCK();
  }
  pppuVar7 = &local_68;
  if (pppuVar3 != (undefined ***)0x0) {
    pppuVar7 = pppuVar3;
  }
  local_70 = pppuVar7[7];
  *(undefined ***)(param_3 + 0x18) = local_90;
  local_a0._0_4_ = SUB84(ppuVar4,0);
  local_a0._4_4_ = (undefined4)((ulonglong)ppuVar4 >> 0x20);
  uStack_98._0_4_ = SUB84(ppuVar5,0);
  uStack_98._4_4_ = (undefined4)((ulonglong)ppuVar5 >> 0x20);
  *(undefined4 *)(param_3 + 8) = (undefined4)local_a0;
  *(undefined4 *)(param_3 + 0xc) = local_a0._4_4_;
  *(undefined4 *)(param_3 + 0x10) = (undefined4)uStack_98;
  *(undefined4 *)(param_3 + 0x14) = uStack_98._4_4_;
  local_a0 = ppuVar4;
  uStack_98 = ppuVar5;
  FUN_1413a4742(param_3 + 0x20);
  ppuVar4 = local_78;
  *(undefined ***)(param_3 + 0x38) = local_70;
  local_a8 = &PTR_FUN_149eda6d0;
  if (local_78 != (undefined **)0x0) {
    LOCK();
    ppuVar5 = local_78 + 1;
    *(int *)ppuVar5 = *(int *)ppuVar5 + -1;
    UNLOCK();
    if (*(int *)ppuVar5 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)ppuVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*ppuVar4 + 0x10))(ppuVar4);
      }
    }
  }
  plVar6 = plStack_38;
  local_68 = &PTR_FUN_149eda6d0;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a4092 FUN_1477a4092 body=458 status=ok
// SIG undefined FUN_1477a4092(void)

void FUN_1477a4092(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar3 = local_68;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  puVar2 = &local_58;
  if (puVar4 != (undefined8 *)0x0) {
    puVar2 = puVar4;
  }
  puVar4 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477a425e(local_38,puVar2,puVar3,puVar4);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a425e FUN_1477a425e body=326 status=ok
// SIG undefined FUN_1477a425e(void)

void FUN_1477a425e(undefined8 param_1,double *param_2,double *param_3,undefined4 *param_4)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  undefined1 auStack_c8 [40];
  float local_a0;
  float local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1477a7326(&local_80,param_1);
  local_98 = 0;
  uStack_90 = 0;
  local_9c = (float)local_78;
  local_a0 = (float)local_80;
  FUN_145787b40(DAT_14c98e618,&local_98);
  *param_2 = (double)(float)local_98;
  param_2[1] = (double)local_98._4_4_;
  param_2[2] = (double)(float)uStack_90;
  param_2[3] = (double)uStack_90._4_4_;
  dVar9 = (double)uStack_90._4_4_;
  if (uStack_90._4_4_ <= local_98._4_4_) {
    dVar9 = (double)local_98._4_4_;
  }
  dVar1 = (double)(float)uStack_90;
  if ((float)uStack_90 <= (float)local_98) {
    dVar1 = (double)(float)local_98;
  }
  *param_3 = dVar1 / local_80;
  param_3[1] = dVar9 / local_78;
  uVar2 = *(undefined4 *)param_2;
  uVar3 = *(undefined4 *)((longlong)param_2 + 4);
  uVar4 = *(undefined4 *)(param_2 + 1);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar7 = *(undefined4 *)(param_2 + 3);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_4[4] = *(undefined4 *)(param_2 + 2);
  param_4[5] = uVar6;
  param_4[6] = uVar7;
  param_4[7] = uVar8;
  *param_4 = uVar2;
  param_4[1] = uVar3;
  param_4[2] = uVar4;
  param_4[3] = uVar5;
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a43a6 FUN_1477a43a6 body=113 status=ok
// SIG undefined FUN_1477a43a6(void)

void FUN_1477a43a6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [184];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477a4418(local_d0);
  FUN_1403d4924(param_3,local_d0);
  FUN_14493db24(local_d0);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a4418 FUN_1477a4418 body=200 status=ok
// SIG undefined FUN_1477a4418(void)

undefined1 * FUN_1477a4418(undefined1 *param_1)

{
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8;
  undefined1 local_c0 [136];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_1 = 0;
  param_1[0x20] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  memset(param_1 + 0x28,0,0x88);
  *(undefined4 *)(param_1 + 0xb0) = 0x20702;
  param_1[0xb4] = 0;
  local_e8[0] = 1;
  local_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  memset(local_c0,0,0x88);
  local_38 = 0x20702;
  FUN_1403d4924(param_1,local_e8);
  FUN_14493db24(local_e8);
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a44e6 FUN_1477a44e6 body=37 status=ok
// SIG undefined FUN_1477a44e6(void)

void FUN_1477a44e6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477a450c();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1477a450c FUN_1477a450c body=174 status=ok
// SIG undefined FUN_1477a450c(void)

undefined8 FUN_1477a450c(void)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar4 = FUN_1469af6ea(DAT_14c98e618);
  if (cVar4 != '\0') {
    FUN_1469af76e(DAT_14c98e618,&local_28);
    if (local_28 == (longlong *)0x0) {
LAB_1477a454d:
      bVar3 = true;
    }
    else {
      FUN_1477ad01e();
      cVar4 = (**(code **)(*local_28 + 0x50))(local_28,&DAT_14caba858);
      if (cVar4 == '\0') goto LAB_1477a454d;
      bVar3 = false;
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
    uVar5 = 1;
    if (!bVar3) goto LAB_1477a4580;
  }
  uVar5 = 0;
LAB_1477a4580:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a45bc FUN_1477a45bc body=361 status=ok
// SIG undefined FUN_1477a45bc(void)

void FUN_1477a45bc(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined1 local_1b0 [184];
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_f8[0] = 0;
  local_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  memset(local_d0,0,0x88);
  local_48 = 0x20702;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_1b8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b8);
  }
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = local_f8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477a4726(local_1b0,puVar1,local_1b8);
  FUN_1403d4924(param_3,local_1b0);
  FUN_14493db24(local_1b0);
  FUN_14493db24(local_f8);
  if ((local_40 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a4726 FUN_1477a4726 body=188 status=ok
// SIG undefined FUN_1477a4726(void)

undefined8 FUN_1477a4726(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    FUN_140760c2c(param_3,&local_30);
    if (local_30 != 0) {
      local_40 = local_30;
      local_38 = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
      }
      uVar3 = FUN_1405929ee(param_2,&local_40);
      FUN_1402c17c2(param_2,uVar3);
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
  }
  FUN_1403d4c6e(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a47e4 FUN_1477a47e4 body=247 status=ok
// SIG undefined FUN_1477a47e4(void)

void FUN_1477a47e4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_f8 [32];
  undefined **local_d8 [20];
  longlong *local_38;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
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
  FUN_1477a48dc(local_d8,local_20);
  FUN_140f13d9e(param_3,local_d8);
  local_d8[0] = &PTR_FUN_149ed05f0;
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
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a48dc FUN_1477a48dc body=359 status=ok
// SIG undefined FUN_1477a48dc(void)

undefined8 * FUN_1477a48dc(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined **local_d8;
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
  longlong local_a0;
  undefined8 local_98 [10];
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 != 0) {
    FUN_140e361c2(param_1,param_2 + 0x30);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_108);
  }
  local_e0 = DAT_14c84635c;
  FUN_1412ce202(&local_d8);
  *param_1 = &PTR_FUN_149ed05f0;
  *(undefined4 *)(param_1 + 1) = local_d0;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_cc;
  *(undefined4 *)(param_1 + 2) = uStack_c8;
  *(undefined4 *)((longlong)param_1 + 0x14) = uStack_c4;
  *(undefined4 *)(param_1 + 3) = local_c0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_bc;
  *(undefined4 *)(param_1 + 4) = uStack_b8;
  *(undefined4 *)((longlong)param_1 + 0x24) = uStack_b4;
  *(undefined4 *)(param_1 + 5) = local_b0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_ac;
  *(undefined4 *)(param_1 + 6) = uStack_a8;
  *(undefined4 *)((longlong)param_1 + 0x34) = uStack_a4;
  param_1[7] = local_a0;
  if ((local_a0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar4 = local_98;
  puVar5 = param_1 + 8;
  for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x94) = local_44;
  *(undefined4 *)(param_1 + 0x12) = local_48;
  param_1[0x13] = local_40;
  param_1[0x14] = local_38;
  if (local_38 == (longlong *)0x0) {
    param_1[0x15] = local_30;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    param_1[0x15] = local_30;
    local_d8 = &PTR_FUN_149ed05f0;
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
  }
  if ((local_28 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1477a4a44 FUN_1477a4a44 body=421 status=ok
// SIG undefined FUN_1477a4a44(void)

void FUN_1477a4a44(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_f8 [32];
  undefined **local_d8 [20];
  longlong *local_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
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
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477a4bea(local_d8,local_20,local_24,local_28);
  FUN_140f13d9e(param_3,local_d8);
  local_d8[0] = &PTR_FUN_149ed05f0;
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
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a4bea FUN_1477a4bea body=396 status=ok
// SIG undefined FUN_1477a4bea(void)

undefined8 * FUN_1477a4bea(undefined8 *param_1,longlong param_2,int param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined **local_d8;
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
  longlong local_a0;
  undefined8 local_98 [10];
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 == 0) {
    local_e0 = DAT_14c84635c;
    FUN_1412ce202(&local_d8);
    *param_1 = &PTR_FUN_149ed05f0;
    *(undefined4 *)(param_1 + 1) = local_d0;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_cc;
    *(undefined4 *)(param_1 + 2) = uStack_c8;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_c4;
    *(undefined4 *)(param_1 + 3) = local_c0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_bc;
    *(undefined4 *)(param_1 + 4) = uStack_b8;
    *(undefined4 *)((longlong)param_1 + 0x24) = uStack_b4;
    *(undefined4 *)(param_1 + 5) = local_b0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_ac;
    *(undefined4 *)(param_1 + 6) = uStack_a8;
    *(undefined4 *)((longlong)param_1 + 0x34) = uStack_a4;
    param_1[7] = local_a0;
    if ((local_a0 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    puVar4 = local_98;
    puVar5 = param_1 + 8;
    for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined1 *)((longlong)param_1 + 0x94) = local_44;
    *(undefined4 *)(param_1 + 0x12) = local_48;
    param_1[0x13] = local_40;
    param_1[0x14] = local_38;
    if (local_38 == (longlong *)0x0) {
      param_1[0x15] = local_30;
    }
    else {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
      param_1[0x15] = local_30;
      local_d8 = &PTR_FUN_149ed05f0;
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
    }
  }
  else {
    FUN_140ca8f8e(param_1);
    FUN_140648376(param_1,param_2);
    *(float *)(param_1 + 4) = (float)param_3;
    *(float *)((longlong)param_1 + 0x24) = (float)param_4;
  }
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a4d78 FUN_1477a4d78 body=421 status=ok
// SIG undefined FUN_1477a4d78(void)

void FUN_1477a4d78(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_f8 [32];
  undefined **local_d8 [20];
  longlong *local_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
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
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477a4f1e(local_d8,local_20,local_24,local_28);
  FUN_140f13d9e(param_3,local_d8);
  local_d8[0] = &PTR_FUN_149ed05f0;
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
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a4f1e FUN_1477a4f1e body=424 status=ok
// SIG undefined FUN_1477a4f1e(void)

undefined8 * FUN_1477a4f1e(undefined8 *param_1,longlong param_2,int param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined **local_d8;
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
  longlong local_a0;
  undefined8 local_98 [10];
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 == 0) {
    local_e0 = DAT_14c84635c;
    FUN_1412ce202(&local_d8);
    *param_1 = &PTR_FUN_149ed05f0;
    *(undefined4 *)(param_1 + 1) = local_d0;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_cc;
    *(undefined4 *)(param_1 + 2) = uStack_c8;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_c4;
    *(undefined4 *)(param_1 + 3) = local_c0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_bc;
    *(undefined4 *)(param_1 + 4) = uStack_b8;
    *(undefined4 *)((longlong)param_1 + 0x24) = uStack_b4;
    *(undefined4 *)(param_1 + 5) = local_b0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_ac;
    *(undefined4 *)(param_1 + 6) = uStack_a8;
    *(undefined4 *)((longlong)param_1 + 0x34) = uStack_a4;
    param_1[7] = local_a0;
    if ((local_a0 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    puVar4 = local_98;
    puVar5 = param_1 + 8;
    for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined1 *)((longlong)param_1 + 0x94) = local_44;
    *(undefined4 *)(param_1 + 0x12) = local_48;
    param_1[0x13] = local_40;
    param_1[0x14] = local_38;
    if (local_38 == (longlong *)0x0) {
      param_1[0x15] = local_30;
    }
    else {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
      param_1[0x15] = local_30;
      local_d8 = &PTR_FUN_149ed05f0;
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
    }
  }
  else {
    FUN_140ca8f8e(param_1);
    FUN_140648376(param_1,param_2);
    if (param_3 < 1) {
      param_3 = FUN_144a92d02(param_2);
    }
    if (param_4 < 1) {
      param_4 = FUN_144a92d14(param_2);
    }
    *(float *)(param_1 + 4) = (float)param_3;
    *(float *)((longlong)param_1 + 0x24) = (float)param_4;
  }
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a50c8 FUN_1477a50c8 body=156 status=ok
// SIG undefined FUN_1477a50c8(void)

void FUN_1477a50c8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_e8 [32];
  undefined **local_c8 [20];
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477a5166(local_c8);
  FUN_140f13d9e(param_3,local_c8);
  local_c8[0] = &PTR_FUN_149ed05f0;
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
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a5166 FUN_1477a5166 body=322 status=ok
// SIG undefined FUN_1477a5166(void)

undefined8 * FUN_1477a5166(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined **local_d8;
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
  longlong local_a0;
  undefined8 local_98 [10];
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e0 = DAT_14c84635c;
  FUN_1412ce202(&local_d8);
  *param_1 = &PTR_FUN_149ed05f0;
  *(undefined4 *)(param_1 + 1) = local_d0;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_cc;
  *(undefined4 *)(param_1 + 2) = uStack_c8;
  *(undefined4 *)((longlong)param_1 + 0x14) = uStack_c4;
  *(undefined4 *)(param_1 + 3) = local_c0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_bc;
  *(undefined4 *)(param_1 + 4) = uStack_b8;
  *(undefined4 *)((longlong)param_1 + 0x24) = uStack_b4;
  *(undefined4 *)(param_1 + 5) = local_b0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_ac;
  *(undefined4 *)(param_1 + 6) = uStack_a8;
  *(undefined4 *)((longlong)param_1 + 0x34) = uStack_a4;
  param_1[7] = local_a0;
  if ((local_a0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar4 = local_98;
  puVar5 = param_1 + 8;
  for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x94) = local_44;
  *(undefined4 *)(param_1 + 0x12) = local_48;
  param_1[0x13] = local_40;
  param_1[0x14] = local_38;
  if (local_38 == (longlong *)0x0) {
    param_1[0x15] = local_30;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    param_1[0x15] = local_30;
    local_d8 = &PTR_FUN_149ed05f0;
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
  }
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a52b2 FUN_1477a52b2 body=399 status=ok
// SIG undefined FUN_1477a52b2(void)

void FUN_1477a52b2(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_1d8 [36];
  int local_1b4;
  undefined1 local_1b0 [184];
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_f8[0] = 0;
  local_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  memset(local_d0,0,0x88);
  local_48 = 0x20702;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_1b4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1b4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b4);
  }
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = local_f8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_146948ce8(puVar2,2,local_1b4 != 0);
  FUN_1402c17c2(puVar2,uVar1);
  FUN_1403d4c6e(local_1b0,puVar2);
  FUN_1403d4924(param_3,local_1b0);
  FUN_14493db24(local_1b0);
  FUN_14493db24(local_f8);
  if ((local_40 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a5442 FUN_1477a5442 body=278 status=ok
// SIG undefined FUN_1477a5442(void)

void FUN_1477a5442(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_1c8 [40];
  undefined1 local_1a0 [184];
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8;
  undefined1 local_c0 [136];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_e8[0] = 0;
  local_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  memset(local_c0,0,0x88);
  local_38 = 0x20702;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e8);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  if (*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) {
    puVar1 = local_e8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477a555a(local_1a0,puVar1);
  FUN_1403d4924(param_3,local_1a0);
  FUN_14493db24(local_1a0);
  FUN_14493db24(local_e8);
  if ((local_30 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a555a FUN_1477a555a body=89 status=ok
// SIG undefined FUN_1477a555a(void)

undefined8 FUN_1477a555a(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *(uint *)(param_2 + 0xb4) = (*(uint *)(param_2 + 0xb4) & 0xffffffde) + 1;
  FUN_1402c17c2(param_2,param_2);
  FUN_1403d4c6e(param_1,param_2);
  return param_1;
}



// FUNCTION 1477a55ca FUN_1477a55ca body=152 status=ok
// SIG undefined FUN_1477a55ca(void)

void FUN_1477a55ca(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  
  lVar4 = DAT_14cb0d2b0;
  if (DAT_14cb0d2b0 != 0) {
    lVar8 = FUN_1413f862e();
    lVar3 = *(longlong *)(lVar4 + 0x10);
    if ((((*(int *)(lVar8 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
          lVar8 + 0x30)) && (lVar4 = *(longlong *)(lVar4 + 0xc20), lVar4 != 0)) &&
       (plVar5 = *(longlong **)(lVar4 + 0x138), plVar5 != (longlong *)0x0)) {
      iVar7 = (int)plVar5[1];
      do {
        if (iVar7 == 0) {
          return;
        }
        LOCK();
        iVar6 = (int)plVar5[1];
        bVar9 = iVar7 == iVar6;
        if (bVar9) {
          *(int *)(plVar5 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
      } while (!bVar9);
      if (*(longlong **)(lVar4 + 0x130) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar4 + 0x130) + 0x80))();
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
                    /* WARNING: Could not recover jumptable at 0x0001477a565e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 0x10))(plVar5);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1477a5662 FUN_1477a5662 body=471 status=ok
// SIG undefined FUN_1477a5662(void)

void FUN_1477a5662(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined **local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d8 = &PTR_FUN_149ed05f0;
  local_d0 = &DAT_3f8000003f800000;
  puStack_c8 = &DAT_3f8000003f800000;
  local_c0 = 0;
  local_bc = 3;
  local_b8 = 0x4200000042000000;
  local_64 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  local_60 = 1;
  local_50 = DAT_14c84635c;
  local_58 = DAT_14c84635c;
  local_48 = 0;
  local_44 = 4;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  pppuVar4 = &local_d8;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar4 = *(undefined ****)(param_2 + 0x38);
  }
  local_e0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140648376(pppuVar4,local_e0);
  plVar3 = plStack_38;
  local_d8 = &PTR_FUN_149ed05f0;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a583a FUN_1477a583a body=471 status=ok
// SIG undefined FUN_1477a583a(void)

void FUN_1477a583a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined **local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d8 = &PTR_FUN_149ed05f0;
  local_d0 = &DAT_3f8000003f800000;
  puStack_c8 = &DAT_3f8000003f800000;
  local_c0 = 0;
  local_bc = 3;
  local_b8 = 0x4200000042000000;
  local_64 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  local_60 = 1;
  local_50 = DAT_14c84635c;
  local_58 = DAT_14c84635c;
  local_48 = 0;
  local_44 = 4;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  pppuVar4 = &local_d8;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar4 = *(undefined ****)(param_2 + 0x38);
  }
  local_e0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140648376(pppuVar4,local_e0);
  plVar3 = plStack_38;
  local_d8 = &PTR_FUN_149ed05f0;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a5a1e FUN_1477a5a1e body=451 status=ok
// SIG undefined FUN_1477a5a1e(void)

void FUN_1477a5a1e(undefined8 param_1,longlong param_2)

{
  int iVar1;
  float fVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  int local_28;
  int local_24;
  float local_20;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_20 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
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
  local_38 = local_28 != 0;
  fVar2 = local_20;
  if (1.0 <= local_20) {
    fVar2 = 1.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  (**(code **)(**(longlong **)(DAT_14c968098 + 0x20) + 0x60))
            (*(longlong **)(DAT_14c968098 + 0x20),local_19,(int)(fVar2 * 10.0),iVar1 != 0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a5c06 FUN_1477a5c06 body=379 status=ok
// SIG undefined FUN_1477a5c06(void)

void FUN_1477a5c06(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined1 local_21;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_40;
  uStack_54 = uStack_3c;
  uStack_50 = uStack_38;
  uStack_4c = uStack_34;
  uVar1 = FUN_1477a5d82(local_20,local_21,local_30);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a5d82 FUN_1477a5d82 body=161 status=ok
// SIG undefined FUN_1477a5d82(void)

undefined8
FUN_1477a5d82(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar2 != 0) {
    bVar1 = *(byte *)(lVar2 + 0x152);
    if ((bVar1 != 1) && ((uVar3 = 0, 6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0))))
    goto LAB_1477a5df0;
    lVar2 = FUN_1449baec6(lVar2);
    if (lVar2 != 0) {
      local_38 = *param_4;
      uStack_34 = param_4[1];
      uStack_30 = param_4[2];
      uStack_2c = param_4[3];
      uVar3 = FUN_1434f9a00(lVar2,param_2,param_3);
      goto LAB_1477a5df0;
    }
  }
  uVar3 = 0;
LAB_1477a5df0:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1477a5e30 FUN_1477a5e30 body=459 status=ok
// SIG undefined FUN_1477a5e30(void)

void FUN_1477a5e30(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_34;
  int local_30;
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
  FUN_1446f4b16();
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
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_34 != 0;
  FUN_1477a5ffc(local_20,local_28,local_29,iVar1 != 0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a5ffc FUN_1477a5ffc body=352 status=ok
// SIG undefined FUN_1477a5ffc(void)

void FUN_1477a5ffc(longlong *param_1,longlong param_2,undefined1 param_3,undefined1 param_4,
                  char param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined **local_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != (longlong *)0x0) {
    local_60 = &PTR_FUN_14a55eca0;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    local_48 = param_3;
    local_47 = param_4;
    if (param_2 != 0) {
      local_30 = &local_39;
      local_38 = FUN_143336ee2;
      FUN_1407616b4(param_2,&local_80);
      local_70 = local_80;
      local_68 = local_78;
      if (local_78 == (longlong *)0x0) {
        FUN_1457de9cc(&local_60,&local_70);
      }
      else {
        LOCK();
        *(int *)(local_78 + 1) = (int)local_78[1] + 1;
        UNLOCK();
        FUN_1457de9cc(&local_60,&local_70);
        if (local_78 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_78 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_78)(local_78);
            LOCK();
            piVar2 = (int *)((longlong)local_78 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_78 + 0x10))(local_78);
            }
          }
        }
      }
    }
    (**(code **)(*param_1 + 0xcb0))(param_1,&local_60);
    if (param_5 != '\0') {
      (**(code **)(*param_1 + 0xcf8))(param_1);
    }
    plVar3 = plStack_50;
    local_60 = &PTR_FUN_14a55eca0;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_50)(plStack_50);
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
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a6164 FUN_1477a6164 body=285 status=ok
// SIG undefined FUN_1477a6164(void)

void FUN_1477a6164(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [36];
  int local_34;
  longlong *local_30;
  undefined **local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (longlong *)0x0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  plVar2 = local_30;
  iVar1 = local_34;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_30 != (longlong *)0x0) {
    local_28 = &PTR_FUN_14a55ecc0;
    local_20 = 1;
    (**(code **)(*local_30 + 0xcb0))(local_30);
    if (iVar1 != 0) {
      (**(code **)(*plVar2 + 0xcf8))(plVar2);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a6288 FUN_1477a6288 body=375 status=ok
// SIG undefined FUN_1477a6288(void)

void FUN_1477a6288(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  int local_28;
  undefined1 local_21;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
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
  FUN_1477a6400(local_18,local_20,local_21,local_28 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a6400 FUN_1477a6400 body=341 status=ok
// SIG undefined FUN_1477a6400(void)

void FUN_1477a6400(longlong *param_1,longlong param_2,undefined4 param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined **local_68;
  undefined8 local_60;
  longlong *plStack_58;
  undefined1 local_50;
  undefined1 local_41;
  code *local_40;
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != (longlong *)0x0) {
    local_68 = &PTR_FUN_14a55e4c0;
    local_60 = 0;
    plStack_58 = (longlong *)0x0;
    local_50 = 3;
    FUN_147ca2552(&local_68,param_3);
    if (param_2 != 0) {
      local_38 = &local_41;
      local_40 = FUN_143336ee2;
      FUN_1407616b4(param_2,&local_88);
      local_78 = local_88;
      local_70 = local_80;
      if (local_80 == (longlong *)0x0) {
        FUN_147ca24d6(&local_68,&local_78);
      }
      else {
        LOCK();
        *(int *)(local_80 + 1) = (int)local_80[1] + 1;
        UNLOCK();
        FUN_147ca24d6(&local_68,&local_78);
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_80 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar2 = (int *)((longlong)local_80 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_80 + 0x10))(local_80);
            }
          }
        }
      }
    }
    (**(code **)(*param_1 + 0xcb0))(param_1,&local_68);
    if (param_4 != '\0') {
      (**(code **)(*param_1 + 0xcf8))(param_1);
    }
    plVar1 = plStack_58;
    local_68 = &PTR_FUN_14a55e4c0;
    if (plStack_58 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_58 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a6556 FUN_1477a6556 body=402 status=ok
// SIG undefined FUN_1477a6556(void)

void FUN_1477a6556(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_1e8 [32];
  double local_1c8;
  double local_1c0;
  int local_1b8;
  int local_1b4;
  undefined1 local_1b0 [184];
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_f8[0] = 0;
  local_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  memset(local_d0,0,0x88);
  local_48 = 0x20702;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c8);
  }
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = local_f8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1b4 = (int)local_1c0;
  local_1b8 = (int)local_1c8;
  uVar1 = FUN_146948cd0(puVar2);
  FUN_1402c17c2(puVar2,uVar1);
  FUN_1403d4c6e(local_1b0,puVar2);
  FUN_1403d4924(param_3,local_1b0);
  FUN_14493db24(local_1b0);
  FUN_14493db24(local_f8);
  if ((local_40 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a66f2 FUN_1477a66f2 body=440 status=ok
// SIG undefined FUN_1477a66f2(void)

void FUN_1477a66f2(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_1e8 [44];
  int local_1bc;
  undefined8 local_1b8;
  undefined1 local_1b0 [184];
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_f8[0] = 0;
  local_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  memset(local_d0,0,0x88);
  local_48 = 0x20702;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_1b8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b8);
  }
  local_1bc = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1bc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1bc);
  }
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = local_f8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477a68ac(local_1b0,puVar1,local_1b8,local_1bc != 0);
  FUN_1403d4924(param_3,local_1b0);
  FUN_14493db24(local_1b0);
  FUN_14493db24(local_f8);
  if ((local_40 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a68ac FUN_1477a68ac body=201 status=ok
// SIG undefined FUN_1477a68ac(void)

undefined8 FUN_1477a68ac(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    FUN_140760c2c(param_3,&local_38);
    if (local_38 != 0) {
      local_48 = local_38;
      local_40 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
      }
      uVar3 = FUN_140592b68(param_2,&local_48,2,param_4);
      FUN_1402c17c2(param_2,uVar3);
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
  }
  FUN_1403d4c6e(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a697a FUN_1477a697a body=149 status=ok
// SIG undefined FUN_1477a697a(void)

void FUN_1477a697a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  DAT_14c75ef6c = local_14 != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a6a10 FUN_1477a6a10 body=155 status=ok
// SIG undefined FUN_1477a6a10(void)

void FUN_1477a6a10(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  FUN_1477a6aac();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a6aac FUN_1477a6aac body=213 status=ok
// SIG undefined FUN_1477a6aac(void)

void FUN_1477a6aac(undefined4 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  DAT_14caba708 = *param_1;
  DAT_14caba70c = param_1[1];
  DAT_14caba710._0_4_ = param_1[2];
  DAT_14caba710._4_4_ = param_1[3];
  local_20 = (undefined8 *)0x0;
  local_18 = 0;
  FUN_1446efa72(&local_20,0,2,0x10);
  local_18 = 2;
  *local_20 = &PTR_LAB_149e020b0;
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
  local_20[2] = lVar2;
  *local_20 = &PTR_FUN_149e062c0;
  local_20[3] = FUN_14333cd49;
  FUN_14009d848(&DAT_14c98f1f0,&local_20);
  FUN_1449db362(&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a6b94 FUN_1477a6b94 body=466 status=ok
// SIG undefined FUN_1477a6b94(void)

void FUN_1477a6b94(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_38;
  int local_34;
  int local_30;
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_1446f4b16();
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
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  iVar2 = local_30;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar1 = local_34;
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38 != 0;
  FUN_1477a6d68(local_28,local_29,iVar2 != 0,iVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a6d68 FUN_1477a6d68 body=323 status=ok
// SIG undefined FUN_1477a6d68(void)

void FUN_1477a6d68(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  lVar4 = DAT_14cb0d2b0;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb0d2b0 != 0) {
    lVar9 = FUN_1413f862e();
    lVar3 = *(longlong *)(lVar4 + 0x10);
    if ((((*(int *)(lVar9 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
          lVar9 + 0x30)) && (lVar4 = *(longlong *)(lVar4 + 0xc20), lVar4 != 0)) &&
       (plVar5 = *(longlong **)(lVar4 + 0x138), plVar5 != (longlong *)0x0)) {
      iVar8 = (int)plVar5[1];
      do {
        if (iVar8 == 0) goto LAB_1477a6dbc;
        LOCK();
        iVar7 = (int)plVar5[1];
        bVar10 = iVar8 == iVar7;
        if (bVar10) {
          *(int *)(plVar5 + 1) = iVar8 + 1;
          iVar7 = iVar8;
        }
        iVar8 = iVar7;
        UNLOCK();
      } while (!bVar10);
      plVar6 = *(longlong **)(lVar4 + 0x130);
      if (plVar6 != (longlong *)0x0) {
        if (param_1 == 0) {
          local_58 = 0;
          plStack_50 = (longlong *)0x0;
        }
        else {
          FUN_140760c2c(param_1,&local_58);
        }
        local_60 = param_5;
        local_68 = param_4;
        (**(code **)(*plVar6 + 0x78))(plVar6,&local_58,param_2,param_3);
        plVar6 = plStack_50;
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_50)(plStack_50);
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
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  }
LAB_1477a6dbc:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477a6eac FUN_1477a6eac body=113 status=ok
// SIG undefined FUN_1477a6eac(void)

void FUN_1477a6eac(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [184];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477a6f1e(local_d0);
  FUN_1403d4924(param_3,local_d0);
  FUN_14493db24(local_d0);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a6f1e FUN_1477a6f1e body=199 status=ok
// SIG undefined FUN_1477a6f1e(void)

undefined1 * FUN_1477a6f1e(undefined1 *param_1)

{
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8;
  undefined1 local_c0 [136];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_1 = 0;
  param_1[0x20] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  memset(param_1 + 0x28,0,0x88);
  *(undefined4 *)(param_1 + 0xb0) = 0x20702;
  param_1[0xb4] = 0;
  local_e8[0] = 0;
  local_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  memset(local_c0,0,0x88);
  local_38 = 0x20702;
  FUN_1403d4924(param_1,local_e8);
  FUN_14493db24(local_e8);
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a6fe6 FUN_1477a6fe6 body=278 status=ok
// SIG undefined FUN_1477a6fe6(void)

void FUN_1477a6fe6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_1c8 [40];
  undefined1 local_1a0 [184];
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8;
  undefined1 local_c0 [136];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_e8[0] = 0;
  local_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  memset(local_c0,0,0x88);
  local_38 = 0x20702;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e8);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  if (*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) {
    puVar1 = local_e8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477a70fe(local_1a0,puVar1);
  FUN_1403d4924(param_3,local_1a0);
  FUN_14493db24(local_1a0);
  FUN_14493db24(local_e8);
  if ((local_30 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a70fe FUN_1477a70fe body=79 status=ok
// SIG undefined FUN_1477a70fe(void)

undefined8 FUN_1477a70fe(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *(byte *)(param_2 + 0xb4) = *(byte *)(param_2 + 0xb4) | 0x10;
  plVar2 = *(longlong **)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_1402c17c2(param_2,param_2);
  FUN_1403d4c6e(param_1,param_2);
  return param_1;
}



// FUNCTION 1477a7150 FUN_1477a7150 body=185 status=ok
// SIG undefined FUN_1477a7150(void)

undefined8 FUN_1477a7150(undefined8 param_1,undefined8 param_2)

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
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a720a FUN_1477a720a body=175 status=ok
// SIG undefined FUN_1477a720a(void)

undefined8 FUN_1477a720a(undefined8 param_1)

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
  local_b8 = FUN_1411b2a4c();
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



// FUNCTION 1477a72ba FUN_1477a72ba body=107 status=ok
// SIG undefined FUN_1477a72ba(void)

longlong * FUN_1477a72ba(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_1405e2bf2();
  FUN_14123d74c(uVar2,param_1,1,0x10,uVar1 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 1477a7326 FUN_1477a7326 body=340 status=ok
// SIG undefined FUN_1477a7326(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1477a7326(undefined4 *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caba818) && (FUN_144b3d300(&DAT_14caba818), DAT_14caba818 == -1)) {
    DAT_14caba7f8 = DAT_14c872be0;
    DAT_14caba810 = '\0';
    atexit((_func_5014 *)&LAB_14333cf09);
    _Init_thread_footer(&DAT_14caba818);
  }
  if ((DAT_14caba810 != '\x01') || (DAT_14caba7f8 != DAT_14c872be0)) {
    local_28 = 0x3ff0000000000000;
    uStack_20 = 0x3ff0000000000000;
    lVar5 = FUN_1402ad3be(DAT_14cb0d2b0,param_2,1);
    if ((lVar5 != 0) &&
       (((bVar1 = *(byte *)(lVar5 + 0x152), bVar1 == 1 ||
         ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
        (lVar5 = FUN_1449baec6(lVar5), lVar5 != 0)))) {
      FUN_14039c14e(lVar5,&local_28);
    }
    _DAT_14caba800 = local_28;
    uRam000000014caba808 = uStack_20;
    DAT_14caba810 = '\x01';
    DAT_14caba7f8 = DAT_14c872be0;
  }
  uVar2 = DAT_14caba800_4;
  uVar3 = (undefined4)uRam000000014caba808;
  uVar4 = uRam000000014caba808._4_4_;
  *param_1 = _DAT_14caba800;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1477a747c FUN_1477a747c body=121 status=ok
// SIG undefined FUN_1477a747c(void)

void FUN_1477a747c(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_48 [40];
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (DAT_14c98e618 == (longlong *)0x0) {
    dVar1 = 0.0;
    dVar2 = 0.0;
  }
  else {
    (**(code **)(*DAT_14c98e618 + 0x68))(DAT_14c98e618,&local_20);
    dVar1 = (double)local_1c;
    dVar2 = (double)local_20;
  }
  *param_3 = dVar2;
  param_3[1] = dVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a74f6 FUN_1477a74f6 body=167 status=ok
// SIG undefined FUN_1477a74f6(void)

void FUN_1477a74f6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477a759e(&local_30,local_20);
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a759e FUN_1477a759e body=375 status=ok
// SIG undefined FUN_1477a759e(void)

double * FUN_1477a759e(double *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  float fVar3;
  undefined1 auStack_b8 [32];
  float local_98;
  float local_94;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  dVar1 = 0.0;
  dVar2 = 0.0;
  if (DAT_14c98e618 != (longlong *)0x0) {
    (**(code **)(*DAT_14c98e618 + 0x68))(DAT_14c98e618,&local_98);
    FUN_1477a7c8e(&local_98,param_2);
    fVar3 = 1.0 / (local_7c * local_70 - local_74 * local_78);
    dVar2 = (double)(-local_78 * fVar3 * local_98 + local_94 * local_7c * fVar3 +
                    (-local_6c * -local_78 * fVar3 - local_7c * fVar3 * local_68));
    dVar1 = (double)(fVar3 * local_70 * local_98 + -local_74 * fVar3 * local_94 +
                    (-local_6c * fVar3 * local_70 - local_68 * -local_74 * fVar3));
  }
  *param_1 = dVar1;
  param_1[1] = dVar2;
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a771c FUN_1477a771c body=341 status=ok
// SIG undefined FUN_1477a771c(void)

void FUN_1477a771c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
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
  puVar3 = *(undefined4 **)(param_2 + 0x38);
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
  if (puVar3 != (undefined4 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = &local_38;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477a7872(local_30,puVar2,puVar3);
  *param_3 = uVar1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a7872 FUN_1477a7872 body=76 status=ok
// SIG undefined FUN_1477a7872(void)

undefined8 FUN_1477a7872(longlong param_1,float *param_2,float *param_3)

{
  char cVar1;
  float extraout_XMM0_Da;
  
  if ((param_1 != 0) && (cVar1 = FUN_14588d080(), cVar1 != '\0')) {
    FUN_14778e70a(param_1);
    *param_2 = *param_2 / extraout_XMM0_Da;
    *param_3 = *param_3 / extraout_XMM0_Da;
    return 1;
  }
  return 0;
}



// FUNCTION 1477a78be FUN_1477a78be body=201 status=ok
// SIG undefined FUN_1477a78be(void)

void FUN_1477a78be(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477a7988(&local_50,local_58);
  if (&local_50 != param_3) {
    *(undefined8 *)(param_3 + 0xc) = local_20;
    *(undefined8 *)(param_3 + 8) = local_30;
    *(undefined8 *)(param_3 + 10) = uStack_28;
    *(undefined8 *)(param_3 + 4) = local_40;
    *(undefined8 *)(param_3 + 6) = uStack_38;
    *param_3 = local_50;
    param_3[1] = uStack_4c;
    param_3[2] = uStack_48;
    param_3[3] = uStack_44;
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a7988 FUN_1477a7988 body=245 status=ok
// SIG undefined FUN_1477a7988(void)

undefined8 FUN_1477a7988(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  bool bVar9;
  
  lVar7 = FUN_1402ad3be(DAT_14cb0d2b0,param_2,1);
  if (((lVar7 != 0) &&
      (((bVar2 = *(byte *)(lVar7 + 0x152), bVar2 == 1 ||
        ((bVar2 < 7 && ((0x68U >> (bVar2 & 0x1f) & 1) != 0)))) &&
       (lVar7 = FUN_1449baec6(lVar7), lVar7 != 0)))) &&
     (plVar3 = *(longlong **)(lVar7 + 0x138), plVar3 != (longlong *)0x0)) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1477a7a53;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    plVar4 = *(longlong **)(lVar7 + 0x130);
    if (plVar4 != (longlong *)0x0) {
      uVar8 = FUN_144a7ba4c(param_2);
      (**(code **)(*plVar4 + 0x18))(plVar4,param_1,uVar8);
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 != 0) {
        return param_1;
      }
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) {
        return param_1;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return param_1;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
LAB_1477a7a53:
  FUN_14570e3a0(param_1);
  return param_1;
}



// FUNCTION 1477a7a7e FUN_1477a7a7e body=157 status=ok
// SIG undefined FUN_1477a7a7e(void)

void FUN_1477a7a7e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
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
  uVar1 = FUN_14778e70a(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a7b1c FUN_1477a7b1c body=167 status=ok
// SIG undefined FUN_1477a7b1c(void)

void FUN_1477a7b1c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477a7326(&local_30,local_20);
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a7bc4 FUN_1477a7bc4 body=201 status=ok
// SIG undefined FUN_1477a7bc4(void)

void FUN_1477a7bc4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477a7c8e(&local_50,local_58);
  if (&local_50 != param_3) {
    *(undefined8 *)(param_3 + 0xc) = local_20;
    *(undefined8 *)(param_3 + 8) = local_30;
    *(undefined8 *)(param_3 + 10) = uStack_28;
    *(undefined8 *)(param_3 + 4) = local_40;
    *(undefined8 *)(param_3 + 6) = uStack_38;
    *param_3 = local_50;
    param_3[1] = uStack_4c;
    param_3[2] = uStack_48;
    param_3[3] = uStack_44;
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a7c8e FUN_1477a7c8e body=217 status=ok
// SIG undefined FUN_1477a7c8e(void)

undefined8 FUN_1477a7c8e(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar7 = FUN_1402ad3be(DAT_14cb0d2b0,param_2,1);
  if (((lVar7 != 0) &&
      (((bVar2 = *(byte *)(lVar7 + 0x152), bVar2 == 1 ||
        ((bVar2 < 7 && ((0x68U >> (bVar2 & 0x1f) & 1) != 0)))) &&
       (lVar7 = FUN_1449baec6(lVar7), lVar7 != 0)))) &&
     (plVar3 = *(longlong **)(lVar7 + 0x138), plVar3 != (longlong *)0x0)) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1477a7d40;
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
    plVar4 = *(longlong **)(lVar7 + 0x130);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4,param_1);
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 != 0) {
        return param_1;
      }
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) {
        return param_1;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return param_1;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
LAB_1477a7d40:
  FUN_14570e3a0(param_1);
  return param_1;
}



// FUNCTION 1477a7d74 FUN_1477a7d74 body=431 status=ok
// SIG undefined FUN_1477a7d74(void)

void FUN_1477a7d74(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_b8 [44];
  int local_8c;
  undefined4 local_88 [4];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
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
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_8c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  puVar3 = local_88;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_68;
  local_58 = local_78;
  uStack_54 = uStack_74;
  uStack_50 = uStack_70;
  uStack_4c = uStack_6c;
  uVar2 = FUN_1477a8be8(local_60,&local_58,&local_40,local_8c != 0);
  *puVar3 = local_40;
  puVar3[1] = uStack_3c;
  puVar3[2] = uStack_38;
  puVar3[3] = uStack_34;
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a7f24 FUN_1477a7f24 body=148 status=ok
// SIG undefined FUN_1477a7f24(void)

void FUN_1477a7f24(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477a7fba(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a7fba FUN_1477a7fba body=87 status=ok
// SIG undefined FUN_1477a7fba(void)

void FUN_1477a7fba(undefined8 param_1)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar2 != 0) {
    bVar1 = *(byte *)(lVar2 + 0x152);
    if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
      lVar2 = FUN_1449baec6(lVar2);
      if (lVar2 != 0) {
        FUN_1457945b4(lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477a8012 FUN_1477a8012 body=232 status=ok
// SIG undefined FUN_1477a8012(void)

void FUN_1477a8012(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 != 0) && (*(longlong *)(local_20 + 0x30) != 0)) {
    lVar3 = FUN_14128aa12();
    lVar1 = *(longlong *)(lVar1 + 0x30);
    if (lVar1 != 0) {
      lVar4 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_1477a80b6;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar4 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          lVar4 = lVar1;
        }
        goto LAB_1477a80b6;
      }
    }
  }
  lVar4 = 0;
LAB_1477a80b6:
  *param_3 = lVar4;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477a80fc FUN_1477a80fc body=232 status=ok
// SIG undefined FUN_1477a80fc(void)

void FUN_1477a80fc(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 != 0) && (*(longlong *)(local_20 + 0x30) != 0)) {
    lVar3 = FUN_1458f09fa();
    lVar1 = *(longlong *)(lVar1 + 0x30);
    if (lVar1 != 0) {
      lVar4 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_1477a81a0;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar4 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          lVar4 = lVar1;
        }
        goto LAB_1477a81a0;
      }
    }
  }
  lVar4 = 0;
LAB_1477a81a0:
  *param_3 = lVar4;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477a81e6 FUN_1477a81e6 body=232 status=ok
// SIG undefined FUN_1477a81e6(void)

void FUN_1477a81e6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 != 0) && (*(longlong *)(local_20 + 0x30) != 0)) {
    lVar3 = FUN_145920d02();
    lVar1 = *(longlong *)(lVar1 + 0x30);
    if (lVar1 != 0) {
      lVar4 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_1477a828a;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar4 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          lVar4 = lVar1;
        }
        goto LAB_1477a828a;
      }
    }
  }
  lVar4 = 0;
LAB_1477a828a:
  *param_3 = lVar4;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477a82d0 FUN_1477a82d0 body=232 status=ok
// SIG undefined FUN_1477a82d0(void)

void FUN_1477a82d0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 != 0) && (*(longlong *)(local_20 + 0x30) != 0)) {
    lVar3 = FUN_145920dec();
    lVar1 = *(longlong *)(lVar1 + 0x30);
    if (lVar1 != 0) {
      lVar4 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_1477a8374;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar4 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          lVar4 = lVar1;
        }
        goto LAB_1477a8374;
      }
    }
  }
  lVar4 = 0;
LAB_1477a8374:
  *param_3 = lVar4;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477a83ba FUN_1477a83ba body=232 status=ok
// SIG undefined FUN_1477a83ba(void)

void FUN_1477a83ba(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 != 0) && (*(longlong *)(local_20 + 0x30) != 0)) {
    lVar3 = FUN_14128df6c();
    lVar1 = *(longlong *)(lVar1 + 0x30);
    if (lVar1 != 0) {
      lVar4 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_1477a845e;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar4 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          lVar4 = lVar1;
        }
        goto LAB_1477a845e;
      }
    }
  }
  lVar4 = 0;
LAB_1477a845e:
  *param_3 = lVar4;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477a84a4 FUN_1477a84a4 body=232 status=ok
// SIG undefined FUN_1477a84a4(void)

void FUN_1477a84a4(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 != 0) && (*(longlong *)(local_20 + 0x30) != 0)) {
    lVar3 = FUN_1459e615c();
    lVar1 = *(longlong *)(lVar1 + 0x30);
    if (lVar1 != 0) {
      lVar4 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_1477a8548;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar4 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          lVar4 = lVar1;
        }
        goto LAB_1477a8548;
      }
    }
  }
  lVar4 = 0;
LAB_1477a8548:
  *param_3 = lVar4;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477a858e FUN_1477a858e body=232 status=ok
// SIG undefined FUN_1477a858e(void)

void FUN_1477a858e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 != 0) && (*(longlong *)(local_20 + 0x30) != 0)) {
    lVar3 = FUN_145991036();
    lVar1 = *(longlong *)(lVar1 + 0x30);
    if (lVar1 != 0) {
      lVar4 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_1477a8632;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar4 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          lVar4 = lVar1;
        }
        goto LAB_1477a8632;
      }
    }
  }
  lVar4 = 0;
LAB_1477a8632:
  *param_3 = lVar4;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477a8678 FUN_1477a8678 body=232 status=ok
// SIG undefined FUN_1477a8678(void)

void FUN_1477a8678(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 != 0) && (*(longlong *)(local_20 + 0x30) != 0)) {
    lVar3 = FUN_145991122();
    lVar1 = *(longlong *)(lVar1 + 0x30);
    if (lVar1 != 0) {
      lVar4 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_1477a871c;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar4 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          lVar4 = lVar1;
        }
        goto LAB_1477a871c;
      }
    }
  }
  lVar4 = 0;
LAB_1477a871c:
  *param_3 = lVar4;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477a8762 FUN_1477a8762 body=232 status=ok
// SIG undefined FUN_1477a8762(void)

void FUN_1477a8762(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 != 0) && (*(longlong *)(local_20 + 0x30) != 0)) {
    lVar3 = FUN_145958512();
    lVar1 = *(longlong *)(lVar1 + 0x30);
    if (lVar1 != 0) {
      lVar4 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_1477a8806;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar4 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          lVar4 = lVar1;
        }
        goto LAB_1477a8806;
      }
    }
  }
  lVar4 = 0;
LAB_1477a8806:
  *param_3 = lVar4;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477a884c FUN_1477a884c body=232 status=ok
// SIG undefined FUN_1477a884c(void)

void FUN_1477a884c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 != 0) && (*(longlong *)(local_20 + 0x30) != 0)) {
    lVar3 = FUN_145920fc2();
    lVar1 = *(longlong *)(lVar1 + 0x30);
    if (lVar1 != 0) {
      lVar4 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_1477a88f0;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar4 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          lVar4 = lVar1;
        }
        goto LAB_1477a88f0;
      }
    }
  }
  lVar4 = 0;
LAB_1477a88f0:
  *param_3 = lVar4;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477a8936 FUN_1477a8936 body=232 status=ok
// SIG undefined FUN_1477a8936(void)

void FUN_1477a8936(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 != 0) && (*(longlong *)(local_20 + 0x30) != 0)) {
    lVar3 = FUN_1459210ac();
    lVar1 = *(longlong *)(lVar1 + 0x30);
    if (lVar1 != 0) {
      lVar4 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_1477a89da;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar4 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          lVar4 = lVar1;
        }
        goto LAB_1477a89da;
      }
    }
  }
  lVar4 = 0;
LAB_1477a89da:
  *param_3 = lVar4;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477a8a20 FUN_1477a8a20 body=225 status=ok
// SIG undefined FUN_1477a8a20(void)

void FUN_1477a8a20(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 != 0) && (*(longlong *)(local_20 + 0x30) != 0)) {
    lVar3 = FUN_1459913e6();
    lVar1 = *(longlong *)(lVar1 + 0x30);
    if (lVar1 != 0) {
      lVar4 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_1477a8a84;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar4 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          lVar4 = lVar1;
        }
        goto LAB_1477a8a84;
      }
    }
  }
  lVar4 = 0;
LAB_1477a8a84:
  *param_3 = lVar4;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477a8b02 FUN_1477a8b02 body=225 status=ok
// SIG undefined FUN_1477a8b02(void)

void FUN_1477a8b02(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 != 0) && (*(longlong *)(local_20 + 0x30) != 0)) {
    lVar3 = FUN_14592120c();
    lVar1 = *(longlong *)(lVar1 + 0x30);
    if (lVar1 != 0) {
      lVar4 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_1477a8b66;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar4 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          lVar4 = lVar1;
        }
        goto LAB_1477a8b66;
      }
    }
  }
  lVar4 = 0;
LAB_1477a8b66:
  *param_3 = lVar4;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477a8be8 FUN_1477a8be8 body=282 status=ok
// SIG undefined FUN_1477a8be8(void)

undefined8 FUN_1477a8be8(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  double local_70;
  double local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1 != 0) {
    local_88 = *param_2;
    uStack_80 = param_2[1];
    local_78 = param_2[2];
    cVar1 = FUN_147c9ea88(param_1,&local_88,&local_70);
    if (cVar1 != '\0') {
      auVar4._0_8_ = local_68 + 0.5;
      auVar4._8_8_ = 0;
      auVar4 = roundpd(auVar4,auVar4,1);
      auVar3._0_8_ = local_70 + 0.5;
      auVar3._8_8_ = 0;
      auVar3 = roundpd(auVar3,auVar3,1);
      local_38 = auVar3._0_8_;
      uStack_30 = auVar4._0_8_;
      FUN_14778c508(param_1,&local_38,local_58,0);
      FUN_14778b342(param_1,local_58,local_48,&local_98);
      *param_3 = local_98;
      param_3[1] = local_90;
      param_3[2] = local_60;
      uVar2 = 1;
      goto LAB_1477a8c4f;
    }
  }
  param_3[2] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  *param_3 = DAT_14c8464e0;
  param_3[1] = uVar2;
  uVar2 = 0;
LAB_1477a8c4f:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a8d08 FUN_1477a8d08 body=72 status=ok
// SIG undefined FUN_1477a8d08(void)

undefined8 FUN_1477a8d08(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_1405e2bf2();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x0001477a8d49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar1 + 0x180))(plVar1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1477a8d5a FUN_1477a8d5a body=763 status=ok
// SIG undefined FUN_1477a8d5a(void)

void FUN_1477a8d5a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1402191ca(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar7);
    }
    FUN_144732142(&local_98,uVar7);
    iVar5 = 1;
    if (3 < uVar7) {
      uVar7 = (uVar7 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar5)) {
      local_50 = iVar5;
      FUN_144869b4a();
    }
  }
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
    FUN_1402191ca(param_2);
  }
  local_b0 = param_1 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_1;
  if (iStack_a4 < (int)local_b0[3]) {
    do {
      lVar1 = *local_e0;
      lVar3 = (longlong)iStack_c4;
      if ((int)uStack_90 != local_64) {
        lVar2 = *(longlong *)(lVar1 + lVar3 * 0x18);
        uVar7 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar6 = (uint)lVar2 & 0xffff;
        puVar4 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar4 = local_60;
        }
        for (iVar5 = *(int *)(puVar4 + (ulonglong)
                                       (local_50 - 1U &
                                       (int)((ulonglong)lVar2 >> 0x20) +
                                       ((uint)lVar2 << 0x10 | uVar6) +
                                       (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar6 >> 4)) * 4);
            iVar5 != -1; iVar5 = *(int *)((longlong)iVar5 * 0x10 + local_98 + 8)) {
          if (*(longlong *)(local_98 + (longlong)iVar5 * 0x10) == lVar2) goto LAB_1477a8f06;
        }
      }
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_1446f84a2(param_2,iVar5);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar5 * 8) = *(undefined8 *)(lVar3 * 0x18 + lVar1);
      FUN_144a13f80(&local_98,&local_b8,(longlong)iStack_c4 * 0x18 + *local_e0,0);
LAB_1477a8f06:
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < (int)local_d0[3]);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a9058 FUN_1477a9058 body=188 status=ok
// SIG undefined FUN_1477a9058(void)

longlong FUN_1477a9058(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    uVar3 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar4 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x50);
    }
    iVar2 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar3 << 0x13 | uVar3) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar2 != -1) {
      while (plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0x18),
            *plVar1 != param_2) {
        iVar2 = (int)plVar1[2];
        if (iVar2 == -1) {
          return 0;
        }
      }
      if (plVar1 != (longlong *)0x0) {
        lVar4 = plVar1[1];
        if (DAT_14c950c29 != '\x01') {
          return lVar4;
        }
        if (lVar4 == 0) {
          return 0;
        }
        FUN_1456cec3c(lVar4);
        return lVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 1477a9114 FUN_1477a9114 body=142 status=ok
// SIG undefined FUN_1477a9114(void)

void FUN_1477a9114(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  undefined8 *local_28;
  longlong *local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (param_3 != 0) {
    local_38 = param_3;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_3);
    }
    local_28 = &local_30;
    local_20 = &local_38;
    FUN_1477ad142(param_1 + 0x10,local_14);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_1477ad65e(param_1 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a91aa FUN_1477a91aa body=68 status=ok
// SIG undefined FUN_1477a91aa(void)

void FUN_1477a91aa(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477a91f0 FUN_1477a91f0 body=45 status=ok
// SIG undefined FUN_1477a91f0(void)

longlong FUN_1477a91f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145ef1c6e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477a921e FUN_1477a921e body=45 status=ok
// SIG undefined FUN_1477a921e(void)

longlong FUN_1477a921e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145807312(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477a9254 FUN_1477a9254 body=45 status=ok
// SIG undefined FUN_1477a9254(void)

longlong FUN_1477a9254(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145ac6e1a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477a9282 FUN_1477a9282 body=45 status=ok
// SIG undefined FUN_1477a9282(void)

longlong FUN_1477a9282(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145ac6e9a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477a92b0 FUN_1477a92b0 body=38 status=ok
// SIG undefined FUN_1477a92b0(void)

undefined8 FUN_1477a92b0(undefined8 param_1,int param_2)

{
  FUN_147790322();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477a92fa FUN_1477a92fa body=38 status=ok
// SIG undefined FUN_1477a92fa(void)

undefined8 FUN_1477a92fa(undefined8 param_1,int param_2)

{
  FUN_1477ad7d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477a9320 FUN_1477a9320 body=87 status=ok
// SIG undefined FUN_1477a9320(void)

undefined8 FUN_1477a9320(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_1477ad01e();
  if (DAT_14caba860 == *(int *)(param_2 + 1)) {
    if (1 < DAT_14caba860) {
      iVar1 = FUN_144a80a00(DAT_14caba858,*param_2);
      if (iVar1 != 0) goto LAB_1477a9356;
    }
  }
  else if (*(int *)(param_2 + 1) + DAT_14caba860 != 1) {
LAB_1477a9356:
    uVar2 = FUN_146949a48(param_1,param_2);
    return uVar2;
  }
  return 1;
}



// FUNCTION 1477a9378 FUN_1477a9378 body=45 status=ok
// SIG undefined FUN_1477a9378(void)

longlong FUN_1477a9378(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  FUN_1477ad7d8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477a93b0 FUN_1477a93b0 body=45 status=ok
// SIG undefined FUN_1477a93b0(void)

longlong FUN_1477a93b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140cdcea6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477a93e4 FUN_1477a93e4 body=48 status=ok
// SIG undefined FUN_1477a93e4(void)

longlong FUN_1477a93e4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x250;
  FUN_1411b5f82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477a9414 FUN_1477a9414 body=45 status=ok
// SIG undefined FUN_1477a9414(void)

longlong FUN_1477a9414(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140f9e244(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477a9448 FUN_1477a9448 body=146 status=ok
// SIG undefined FUN_1477a9448(void)

undefined1 * FUN_1477a9448(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 0x128) = 0;
  lVar1 = *(longlong *)(param_2 + 0x128);
  if (lVar1 == 0) {
    memmove(param_1 + 8,param_2 + 8,0x120);
    lVar1 = *(longlong *)(param_2 + 0x128);
  }
  *(longlong *)(param_1 + 0x128) = lVar1;
  *(undefined8 *)(param_2 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
  *(undefined8 *)(param_2 + 0x130) = 0x400000000;
  param_1[0x138] = param_2[0x138];
  return param_1;
}



// FUNCTION 1477a95bc FUN_1477a95bc body=59 status=ok
// SIG undefined FUN_1477a95bc(void)

undefined8 FUN_1477a95bc(longlong *param_1)

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



// FUNCTION 1477a965e FUN_1477a965e body=119 status=ok
// SIG undefined FUN_1477a965e(void)

undefined8 * FUN_1477a965e(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a55dba8;
  param_1[1] = &PTR_LAB_14a55dbb0;
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[1] = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 0x11) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1 + 1);
    *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477a96e0 FUN_1477a96e0 body=69 status=ok
// SIG undefined FUN_1477a96e0(void)

void FUN_1477a96e0(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x18,0,0);
                    /* WARNING: Could not recover jumptable at 0x0001477a9722. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x20,0,0);
  return;
}



// FUNCTION 1477a9726 FUN_1477a9726 body=32 status=ok
// SIG undefined FUN_1477a9726(void)

undefined8 FUN_1477a9726(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FRetainerWidgetRenderingResources");
  return param_2;
}



// FUNCTION 1477a9746 FUN_1477a9746 body=88 status=ok
// SIG undefined FUN_1477a9746(void)

void FUN_1477a9746(longlong param_1,int param_2)

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



// FUNCTION 1477a979e FUN_1477a979e body=40 status=ok
// SIG undefined FUN_1477a979e(void)

void FUN_1477a979e(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
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
  return;
}



// FUNCTION 1477a985a FUN_1477a985a body=54 status=ok
// SIG undefined FUN_1477a985a(void)

undefined1 FUN_1477a985a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1477a9994(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 1477a98b8 FUN_1477a98b8 body=59 status=ok
// SIG undefined FUN_1477a98b8(void)

undefined8 FUN_1477a98b8(longlong *param_1)

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



// FUNCTION 1477a9994 FUN_1477a9994 body=251 status=ok
// SIG undefined FUN_1477a9994(void)

longlong * FUN_1477a9994(longlong *param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  *param_1 = lVar2;
  *(char *)(param_1 + 1) = (char)param_2[1];
  if (param_2 == param_1) {
    return param_1;
  }
  if ((char)param_2[2] == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar1 = 1;
  }
  else {
    if ((char)param_1[2] != '\x01') goto LAB_1477a99da;
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 2) = uVar1;
LAB_1477a99da:
  if ((char)param_2[3] == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else if ((char)param_1[3] == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if ((char)param_2[4] == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else if ((char)param_1[4] == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if ((char)param_2[5] == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    *(undefined1 *)(param_1 + 5) = 1;
  }
  else if ((char)param_1[5] == '\x01') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if ((char)param_2[6] == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(undefined1 *)(param_1 + 6) = 1;
  }
  else if ((char)param_1[6] == '\x01') {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  if (*(char *)((longlong)param_2 + 0x35) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x34) = *(undefined1 *)((longlong)param_2 + 0x34);
    *(undefined1 *)((longlong)param_1 + 0x35) = 1;
  }
  else if (*(char *)((longlong)param_1 + 0x35) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x35) = 0;
  }
  return param_1;
}



// FUNCTION 1477a9ad0 FUN_1477a9ad0 body=120 status=ok
// SIG undefined FUN_1477a9ad0(void)

undefined1 FUN_1477a9ad0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      lVar7 = *(longlong *)(param_3 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(param_3 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar8);
      *plVar1 = lVar7;
      puVar2 = (undefined4 *)(param_3 + 8 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(plVar1 + 1) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
      *(undefined4 *)(plVar1 + 2) = uVar4;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar5;
      *(undefined4 *)(plVar1 + 4) = *(undefined4 *)(param_3 + 0x20 + lVar8);
      plVar1[3] = *(longlong *)(param_3 + 0x18 + lVar8);
      lVar8 = lVar8 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1477a9b70 FUN_1477a9b70 body=59 status=ok
// SIG undefined FUN_1477a9b70(void)

undefined8 FUN_1477a9b70(longlong *param_1)

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



// FUNCTION 1477a9c12 FUN_1477a9c12 body=74 status=ok
// SIG undefined FUN_1477a9c12(void)

void FUN_1477a9c12(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_14cab9b4c;
  param_2[1] = &DAT_14cab9b84;
  FUN_14779bfd2();
  param_2[2] = &DAT_14cab9bc8;
  *(undefined4 *)(param_2 + 3) = 0;
  param_2[4] = &DAT_14cab9b94;
  *(undefined1 *)(param_2 + 5) = 1;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  return;
}



// FUNCTION 1477a9c5c FUN_1477a9c5c body=74 status=ok
// SIG undefined FUN_1477a9c5c(void)

void FUN_1477a9c5c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_14cab9b4c;
  param_2[1] = &DAT_14cab9b84;
  FUN_14779bfd2();
  param_2[2] = &DAT_14cab9bc8;
  *(undefined4 *)(param_2 + 3) = 0;
  param_2[4] = &DAT_14cab9b94;
  *(undefined1 *)(param_2 + 5) = 1;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  return;
}



// FUNCTION 1477a9cbe FUN_1477a9cbe body=83 status=ok
// SIG undefined FUN_1477a9cbe(void)

undefined8 FUN_1477a9cbe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      uVar1 = *(undefined1 *)(param_3 + 0x28 + lVar6);
      uVar3 = *(undefined8 *)(param_3 + 0x20 + lVar6);
      uVar2 = *(undefined4 *)(param_3 + 0x18 + lVar6);
      uVar4 = *(undefined8 *)(param_3 + 0x10 + lVar6);
      uVar5 = ((undefined8 *)(param_3 + lVar6))[1];
      *(undefined8 *)(param_2 + lVar6) = *(undefined8 *)(param_3 + lVar6);
      ((undefined8 *)(param_2 + lVar6))[1] = uVar5;
      *(undefined8 *)(param_2 + 0x10 + lVar6) = uVar4;
      *(undefined4 *)(param_2 + 0x18 + lVar6) = uVar2;
      *(undefined8 *)(param_2 + 0x20 + lVar6) = uVar3;
      *(undefined1 *)(param_2 + 0x28 + lVar6) = uVar1;
      *(undefined4 *)(param_2 + 0x2c + lVar6) = uVar2;
      *(undefined4 *)(param_2 + 0x2c + lVar6) = *(undefined4 *)(param_3 + 0x2c + lVar6);
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1477a9d3a FUN_1477a9d3a body=59 status=ok
// SIG undefined FUN_1477a9d3a(void)

undefined8 FUN_1477a9d3a(longlong *param_1)

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



// FUNCTION 1477a9e04 FUN_1477a9e04 body=101 status=ok
// SIG undefined FUN_1477a9e04(void)

undefined1 FUN_1477a9e04(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1477a9e92 FUN_1477a9e92 body=59 status=ok
// SIG undefined FUN_1477a9e92(void)

undefined8 FUN_1477a9e92(longlong *param_1)

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



// FUNCTION 1477a9f33 FUN_1477a9f33 body=227 status=ok
// SIG undefined FUN_1477a9f33(void)

undefined8
FUN_1477a9f33(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined2 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong lStack_88;
  longlong *local_78;
  longlong local_68 [4];
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_78 = (longlong *)0x0;
  local_48 = 0;
  local_a8 = 0;
  uStack_b0 = 8;
  local_98 = param_5;
  local_90 = 0;
  lStack_88 = 0;
  local_c8 = param_2;
  local_c0 = param_1;
  local_b8 = param_3;
  local_a0 = param_4;
  uVar1 = FUN_1402710dd(&local_c8);
  if (lStack_88 != 0) {
    plVar2 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar2 = local_68;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477aa018 FUN_1477aa018 body=109 status=ok
// SIG undefined FUN_1477aa018(void)

void FUN_1477aa018(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)(param_1 + 6);
  if (cVar1 == '\x03') {
    puVar2 = (undefined8 *)param_1[4];
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  else {
    if (cVar1 == '\x02') {
      plVar3 = (longlong *)param_1[2];
    }
    else {
      if (cVar1 != '\x01') goto LAB_1477aa034;
      plVar3 = (longlong *)*param_1;
    }
    if (((int)plVar3[1] != 0) && (puVar2 = (undefined8 *)*plVar3, puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(plVar3 + 1) = 0;
    }
  }
LAB_1477aa034:
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}



// FUNCTION 1477aa086 FUN_1477aa086 body=37 status=ok
// SIG undefined FUN_1477aa086(void)

void FUN_1477aa086(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  thunk_FUN_140f4ae1c(param_2 + 4);
  *(undefined1 *)(param_2 + 0xb) = 1;
  return;
}



// FUNCTION 1477aa0ac FUN_1477aa0ac body=42 status=ok
// SIG undefined FUN_1477aa0ac(void)

void FUN_1477aa0ac(undefined8 param_1,longlong *param_2)

{
  FUN_141318128(param_2 + 4);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1477aa0ec FUN_1477aa0ec body=81 status=ok
// SIG undefined FUN_1477aa0ec(void)

undefined1 FUN_1477aa0ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
    FUN_14702ac0a(param_2 + 0x20,param_3 + 0x20);
    *(undefined1 *)(param_2 + 0x58) = *(undefined1 *)(param_3 + 0x58);
    param_2 = param_2 + 0x60;
    param_3 = param_3 + 0x60;
  }
  return 1;
}



// FUNCTION 1477aa166 FUN_1477aa166 body=59 status=ok
// SIG undefined FUN_1477aa166(void)

undefined8 FUN_1477aa166(longlong *param_1)

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



// FUNCTION 1477aa1ac FUN_1477aa1ac body=46 status=ok
// SIG undefined FUN_1477aa1ac(void)

void FUN_1477aa1ac(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[0xc] == '\x01') {
    FUN_141318128(param_2 + 4);
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1477aa22a FUN_1477aa22a body=107 status=ok
// SIG undefined FUN_1477aa22a(void)

longlong * FUN_1477aa22a(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_140e64c66();
  FUN_14123d74c(uVar2,param_1,1,0x10,uVar1 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 1477aa296 FUN_1477aa296 body=83 status=ok
// SIG undefined FUN_1477aa296(void)

undefined8 * FUN_1477aa296(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a55e4c0;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477aa2ea FUN_1477aa2ea body=83 status=ok
// SIG undefined FUN_1477aa2ea(void)

undefined8 * FUN_1477aa2ea(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a55eca0;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477aa342 FUN_1477aa342 body=29 status=ok
// SIG undefined FUN_1477aa342(void)

undefined8 FUN_1477aa342(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477aa360 FUN_1477aa360 body=9 status=ok
// SIG undefined FUN_1477aa360(void)

void FUN_1477aa360(longlong param_1)

{
  FUN_146aa22e2(param_1 + 0x10);
  return;
}



// FUNCTION 1477aa36a FUN_1477aa36a body=29 status=ok
// SIG undefined FUN_1477aa36a(void)

undefined8 FUN_1477aa36a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477aa388 FUN_1477aa388 body=29 status=ok
// SIG undefined FUN_1477aa388(void)

undefined8 FUN_1477aa388(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477aa3c0 FUN_1477aa3c0 body=29 status=ok
// SIG undefined FUN_1477aa3c0(void)

bool FUN_1477aa3c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1477aa3de FUN_1477aa3de body=26 status=ok
// SIG undefined FUN_1477aa3de(void)

bool FUN_1477aa3de(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1477aa3f8 FUN_1477aa3f8 body=24 status=ok
// SIG undefined FUN_1477aa3f8(void)

bool FUN_1477aa3f8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1477aa41c FUN_1477aa41c body=101 status=ok
// SIG undefined FUN_1477aa41c(void)

void FUN_1477aa41c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a55e550;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a55e4e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1477aa482 FUN_1477aa482 body=101 status=ok
// SIG undefined FUN_1477aa482(void)

void FUN_1477aa482(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a55e550;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a55e4e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1477aa4e8 FUN_1477aa4e8 body=134 status=ok
// SIG undefined FUN_1477aa4e8(void)

void FUN_1477aa4e8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a55e550;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a55e4e0;
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
                    /* WARNING: Could not recover jumptable at 0x0001477aa55f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1477aa56e FUN_1477aa56e body=52 status=ok
// SIG undefined FUN_1477aa56e(void)

void FUN_1477aa56e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001477aa59f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1477aa5a2 FUN_1477aa5a2 body=155 status=ok
// SIG undefined FUN_1477aa5a2(void)

bool FUN_1477aa5a2(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_38);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477aa640 FUN_1477aa640 body=29 status=ok
// SIG undefined FUN_1477aa640(void)

undefined8 FUN_1477aa640(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477aa678 FUN_1477aa678 body=29 status=ok
// SIG undefined FUN_1477aa678(void)

bool FUN_1477aa678(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1477aa696 FUN_1477aa696 body=26 status=ok
// SIG undefined FUN_1477aa696(void)

bool FUN_1477aa696(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1477aa6b0 FUN_1477aa6b0 body=24 status=ok
// SIG undefined FUN_1477aa6b0(void)

bool FUN_1477aa6b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}


