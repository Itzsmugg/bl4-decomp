// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14603654e FUN_14603654e body=445 status=ok
// SIG undefined FUN_14603654e(void)

void FUN_14603654e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_3e8 [40];
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined1 local_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined1 local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined1 local_370 [424];
  undefined8 local_1c8;
  longlong *local_1c0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined1 local_1a0;
  undefined1 local_198 [16];
  undefined1 local_188 [64];
  undefined8 local_148;
  undefined1 local_140;
  undefined1 local_138 [248];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  FUN_14603678a(param_1 + 0x2a0,param_2 + 0x1b8);
  FUN_14603670c(param_1 + 0x2b0,param_2 + 0x1c8);
  FUN_140a562d0(local_370);
  plVar5 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = DAT_14c96b350;
  }
  FUN_1446f470e(&local_3c0,L"BlackBrush",1);
  local_3b8 = (**(code **)(*plVar5 + 0x50))(plVar5,local_3c0,0,0);
  local_3b0 = 1;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_140 = 1;
  local_148 = local_3b8;
  FUN_144a450dc(local_138,&local_3a8);
  FUN_1449db362(&local_3a8);
  FUN_145767132(local_188,param_2 + 0x1a8);
  local_398 = 0;
  uStack_390 = 0;
  local_388 = 1;
  local_380 = 0;
  uStack_378 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 1;
  FUN_144a450dc(local_198,&local_380);
  FUN_1449db362(&local_380);
  plVar4 = local_1c0;
  local_1c8 = *(undefined8 *)(param_2 + 0x1d8);
  plVar5 = *(longlong **)(param_2 + 0x1e0);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar5 + 8) = *(int *)((longlong)plVar5 + 8) + 1;
    UNLOCK();
  }
  if (local_1c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1c0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar3 = (undefined8 *)*local_1c0;
      local_1c0 = plVar5;
      (*(code *)*puVar3)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar5 = local_1c0;
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        plVar5 = local_1c0;
      }
    }
  }
  local_1c0 = plVar5;
  FUN_140a5a2ee(param_1,local_370);
  FUN_140a59028(local_370);
  if ((local_40 ^ (ulonglong)auStack_3e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603670c FUN_14603670c body=124 status=ok
// SIG undefined FUN_14603670c(void)

void FUN_14603670c(longlong *param_1,longlong *param_2)

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



// FUNCTION 14603678a FUN_14603678a body=124 status=ok
// SIG undefined FUN_14603678a(void)

void FUN_14603678a(longlong *param_1,longlong *param_2)

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



// FUNCTION 146036812 FUN_146036812 body=369 status=ok
// SIG undefined FUN_146036812(void)

undefined8 * FUN_146036812(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a9c1960;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0x459c4000;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(byte *)((longlong)param_1 + 0x411) = *(byte *)((longlong)param_1 + 0x411) & 0xfe;
  FUN_1403121a6(param_1,0);
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xf0 | 3;
  FUN_1446f470e(&local_20,L"StaticMeshComponent0",1);
  uVar1 = FUN_144a7a726();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x72] = lVar2;
  FUN_146036984(param_1,lVar2);
  *(byte *)((longlong)param_1 + 0x411) = *(byte *)((longlong)param_1 + 0x411) & 0xf5;
  *(undefined4 *)((longlong)param_1 + 0x414) = 0;
  lVar2 = param_1[0x72];
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_1[0x72];
    }
  }
  param_1[0x39] = lVar2;
  *(undefined1 *)(param_1 + 0x82) = 1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146036984 FUN_146036984 body=161 status=ok
// SIG undefined FUN_146036984(void)

void FUN_146036984(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  
  (**(code **)(*param_2 + 0x728))(param_2,DAT_14cad0f30,1);
  *(undefined1 *)((longlong)param_2 + 0x1fb) = 0;
  FUN_14127091c(param_2,0);
  *(byte *)((longlong)param_2 + 0x2d6) = *(byte *)((longlong)param_2 + 0x2d6) & 0x3d;
  *(byte *)((longlong)param_2 + 0x2d4) = *(byte *)((longlong)param_2 + 0x2d4) & 0xfe;
  *(byte *)((longlong)param_2 + 0x2d2) = *(byte *)((longlong)param_2 + 0x2d2) | 8;
  fVar3 = 0.0;
  iVar1 = DAT_14cae98e8 - (uint)*(byte *)(param_1 + 0x410);
  if ((((int)(uint)*(byte *)(param_1 + 0x410) <= DAT_14cae98e8) &&
      (uVar2 = iVar1 + *(int *)(param_1 + 0x3fc),
      uVar2 != 0 && SCARRY4(iVar1,*(int *)(param_1 + 0x3fc)) == (int)uVar2 < 0)) &&
     ((int)uVar2 <= DAT_14cae98e8)) {
    fVar3 = *(float *)(DAT_14cae98e0 + -4 + (ulonglong)uVar2 * 4);
  }
  *(uint *)(param_2 + 0x58) =
       ~-(uint)(fVar3 != 0.0) & *(uint *)(param_1 + 0x3f8) | (uint)fVar3 & -(uint)(fVar3 != 0.0);
  return;
}



// FUNCTION 146036a26 FUN_146036a26 body=28 status=ok
// SIG undefined FUN_146036a26(void)

void FUN_146036a26(longlong *param_1)

{
  FUN_140d7749e();
                    /* WARNING: Could not recover jumptable at 0x000146036a3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))(param_1);
  return;
}



// FUNCTION 146036a4a FUN_146036a4a body=263 status=ok
// SIG undefined FUN_146036a4a(void)

undefined8 * FUN_146036a4a(undefined8 *param_1)

{
  FUN_141083082();
  *param_1 = &PTR_FUN_14bc7e840;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  FUN_14020fad6(param_1 + 0x2a,L"IsMaterialImportEnabled");
  *param_1 = &PTR_FUN_14bc84410;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  FUN_14020fad6(param_1 + 0x2c,L"ShadingModel");
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_14020fad6(param_1 + 0x2e,L"TranslucencyLightingMode");
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  FUN_14020fad6(param_1 + 0x30,L"BlendMode");
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  FUN_14020fad6(param_1 + 0x32,L"TwoSided");
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FUN_14020fad6(param_1 + 0x34,L"OpacityMaskClipValue");
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  FUN_14020fad6(param_1 + 0x36,L"RefractionMethod");
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  FUN_14020fad6(param_1 + 0x38,L"ScreenSpaceReflections");
  return param_1;
}



// FUNCTION 146036b52 FUN_146036b52 body=115 status=ok
// SIG undefined FUN_146036b52(void)

void FUN_146036b52(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be80580;
  param_1[0x57] = &PTR_FUN_14be80590;
  param_1[0x59] = &PTR_FUN_14be805c0;
  FUN_144725486(param_1 + 0x59);
  FUN_144a4509c(param_1 + 0x59);
  param_1[0x57] = &PTR_LAB_14a399f40;
  FUN_141220b8a(param_1 + 0x57);
  FUN_1415c3278(param_1);
  return;
}



// FUNCTION 146036bc6 FUN_146036bc6 body=212 status=ok
// SIG undefined FUN_146036bc6(void)

void FUN_146036bc6(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  char local_48;
  undefined1 local_47;
  undefined8 local_40;
  undefined8 uStack_38;
  char local_30;
  undefined1 local_2f;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x1a8);
  if (plVar1 != (longlong *)0x0) {
    if (((*(char *)((longlong)plVar1 + 0x39) == DAT_14c96b238) &&
        (*(longlong *)(param_1 + 0x1b8) != 0)) &&
       (*(char *)(*(longlong *)(param_1 + 0x1b8) + 0x39) == *(char *)((longlong)plVar1 + 0x39)))
    goto LAB_146036c62;
    local_30 = DAT_14c96b238;
    local_2f = 1;
    local_28 = 0;
    uStack_20 = 0;
    (**(code **)(*plVar1 + 0x1c0))();
  }
  if (*(longlong **)(param_1 + 0x1b8) != (longlong *)0x0) {
    local_48 = DAT_14c96b238;
    local_47 = 1;
    local_40 = 0;
    uStack_38 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x1c0))();
  }
  FUN_141600210(param_1);
  FUN_146036c9c(0);
  FUN_140898514(param_1 + 0x30,param_2);
LAB_146036c62:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146036c9c FUN_146036c9c body=392 status=ok
// SIG undefined FUN_146036c9c(void)

void FUN_146036c9c(ulonglong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar8 = CONCAT71((int7)((param_1 & 0xffffffff) >> 8),(byte)(param_1 & 0xffffffff) | *DAT_14cb98790
                  );
  plVar7 = (longlong *)FUN_146036e40();
  (**(code **)(*plVar7 + 0x60))(plVar7,uVar8);
  plVar7 = (longlong *)FUN_146036e40();
  plVar7 = (longlong *)(**(code **)(*plVar7 + 0x48))(plVar7);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x10))(plVar7,uVar8);
  }
  plVar7 = (longlong *)FUN_146036e40();
  plVar7 = (longlong *)(**(code **)(*plVar7 + 0x58))(plVar7);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 8))(plVar7,uVar8);
  }
  if (((DAT_14cb0d2b0 != 0) && (*(longlong *)(DAT_14cb0d2b0 + 0xc20) != 0)) &&
     (cVar5 = FUN_146036e26(), cVar5 == '\0')) {
    lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0xc20);
    plVar7 = *(longlong **)(lVar3 + 0x118);
    if (plVar7 != (longlong *)0x0) {
      iVar6 = (int)plVar7[1];
      do {
        if (iVar6 == 0) goto LAB_146036d2d;
        LOCK();
        iVar4 = (int)plVar7[1];
        bVar9 = iVar6 == iVar4;
        if (bVar9) {
          *(int *)(plVar7 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar9);
      lVar3 = *(longlong *)(lVar3 + 0x110);
      if (lVar3 != 0) {
        FUN_144b016b8(lVar3,&local_28);
        FUN_1469807c6(lVar3,CONCAT44(local_24 + 1.0,local_28 + 1.0));
        FUN_144b016b8(lVar3,&local_28);
        FUN_1469807c6(lVar3,CONCAT44(local_24 + -1.0,local_28 + -1.0));
      }
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
  }
LAB_146036d2d:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146036e26 FUN_146036e26 body=25 status=ok
// SIG undefined FUN_146036e26(void)

undefined8 FUN_146036e26(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0xf8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146036e35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x130))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 146036e40 FUN_146036e40 body=147 status=ok
// SIG undefined FUN_146036e40(void)

void FUN_146036e40(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (DAT_14cadbd10 == (undefined8 *)0x0) {
    lVar1 = FUN_1415c3314();
    if (lVar1 == 0) {
      DAT_14cadbd10 = (undefined8 *)FUN_14001cc68(8,0x10);
      *DAT_14cadbd10 = &PTR_FUN_14a909540;
    }
    else {
      FUN_1446f470e(&local_18,lVar1,1);
      uVar2 = FUN_144a52528();
      DAT_14cadbd10 = (undefined8 *)FUN_14493e38c(uVar2,local_18);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146036ed4 FUN_146036ed4 body=208 status=ok
// SIG undefined FUN_146036ed4(void)

void FUN_146036ed4(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146037192();
  if (DAT_14cb0d2b0 != 0) {
    FUN_145aa735e(DAT_14cb0d2b0,0);
    FUN_145aa7366(DAT_14cb0d2b0,0);
  }
  lVar1 = FUN_1400b465c(param_1);
  if (lVar1 != 0) {
    lVar2 = FUN_1459b10c6(lVar1);
    if (lVar2 != 0) {
      uVar3 = FUN_14586d25c(lVar2);
      FUN_146036fa6(uVar3,local_20,param_1);
    }
    lVar1 = *(longlong *)(lVar1 + 0x48);
    if (lVar1 != 0) {
      lVar2 = FUN_140b6d0be();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_14603709c(lVar1 + 0x1e0,local_20,param_1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146036fa6 FUN_146036fa6 body=244 status=ok
// SIG undefined FUN_146036fa6(void)

undefined8 FUN_146036fa6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14b978e50;
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
  *local_38 = &PTR_FUN_14b978a70;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_145bf749e;
  FUN_14586ec72(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603709c FUN_14603709c body=244 status=ok
// SIG undefined FUN_14603709c(void)

undefined8 FUN_14603709c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_149e020b0;
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
  *local_38 = &PTR_FUN_14b978ae0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_145bd36aa;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146037192 FUN_146037192 body=623 status=ok
// SIG undefined FUN_146037192(void)

void FUN_146037192(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146037462(&DAT_14c964278,&local_48,param_1,&LAB_145adc8a8);
  FUN_146037534(&local_48,param_1);
  lVar1 = FUN_145a10c70();
  lVar4 = *(longlong *)(lVar1 + 0x110);
  if (lVar4 == 0) {
    FUN_140aa6c08(lVar1);
    lVar4 = *(longlong *)(lVar1 + 0x110);
    if (lVar4 == 0) goto LAB_1460372a5;
  }
  if (*(longlong *)(lVar4 + 0x60) != 0) {
    FUN_14050fd64();
    lVar1 = FUN_14050fd64();
    FUN_148aef622(lVar1 + 0x1e8,&local_48,lVar4 + 0x58);
    local_38 = local_48;
    if (((local_48 == 0) || (lVar1 = FUN_1405e2bf2(), lVar1 == 0)) ||
       (*(int *)(local_38 + 0x38) < *(int *)(lVar1 + 0x38))) {
      local_38 = 0;
      lVar3 = local_38;
    }
    else {
      lVar3 = 0;
      if ((*(longlong *)(*(longlong *)(local_38 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
           lVar1 + 0x30) && (lVar3 = local_38, DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
        lVar3 = local_38;
      }
    }
    local_38 = lVar3;
    uVar2 = FUN_1400b465c(param_1);
    lVar3 = FUN_1434fa804(uVar2,&local_38,0);
    lVar1 = *(longlong *)(param_1 + 0x70);
    if (lVar3 == 0) {
      if (lVar1 != 0) {
        if (DAT_14c872a72 == '\0') {
          FUN_140113f48();
        }
LAB_1460373c5:
        *(longlong *)(param_1 + 0x70) = lVar3;
      }
    }
    else if (lVar1 != lVar3) {
      if ((lVar1 != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      FUN_1401924dc(lVar3);
      goto LAB_1460373c5;
    }
  }
  if (*(int *)(lVar4 + 0x50) < 2) {
    FUN_140810f5e(&local_48,0);
    if ((longlong *)(param_1 + 200) == &local_48) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 200) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 200) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0xd0) = local_40;
      *(undefined4 *)(param_1 + 0xd4) = local_3c;
    }
  }
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(lVar4 + 0x84);
  FUN_144a65a1e(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_145811e2e(param_1 + 0x90,0);
  }
  FUN_146037402(param_1 + 0x90,lVar4 + 0x88);
LAB_1460372a5:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146037402 FUN_146037402 body=96 status=ok
// SIG undefined FUN_146037402(void)

void FUN_146037402(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14011bb82(param_1,iVar2);
    }
    FUN_14573204f((longlong)iVar2 * 0x18 + *param_1,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 146037462 FUN_146037462 body=208 status=ok
// SIG undefined FUN_146037462(void)

undefined8
FUN_146037462(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar1 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_149e063e0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b529dc0;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_3);
  puVar1[4] = param_4;
  FUN_14134bd86(param_1,param_2,&local_50);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146037534 FUN_146037534 body=201 status=ok
// SIG undefined FUN_146037534(void)

undefined8 FUN_146037534(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a1e1a40;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b529e30;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_2);
  puVar1[4] = &LAB_145b22022;
  FUN_141211c46(&DAT_14c9647a0,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603760a FUN_14603760a body=327 status=ok
// SIG undefined FUN_14603760a(void)

undefined8 * FUN_14603760a(undefined8 *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14b213dc0;
  lVar2 = FUN_14009d2a0();
  lVar3 = FUN_14038fb82();
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar3 + 0xfe);
  *(undefined1 *)((longlong)param_1 + 0x32) = 8;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    uVar1 = *(undefined2 *)(lVar2 + 0xbe);
    local_30 = param_1[2];
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_30,uVar1);
    uVar1 = *(undefined2 *)(lVar2 + 0xc0);
    local_38 = param_1[2];
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_38,uVar1);
    uVar1 = *(undefined2 *)(lVar2 + 0xc2);
    local_40 = param_1[2];
    if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_40,uVar1);
    uVar1 = *(undefined2 *)(lVar3 + 0xfe);
    local_48 = param_1[2];
    if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14122166c(&local_48,uVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146037752 FUN_146037752 body=398 status=ok
// SIG undefined FUN_146037752(void)

void FUN_146037752(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 *local_c8;
  undefined1 local_c0;
  undefined8 local_b0;
  longlong local_a8 [2];
  longlong *local_98 [2];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  ulonglong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar1 = FUN_140f4f540();
  local_60 = 0x3e99999a;
  uStack_5c = 0x3f333333;
  uStack_58 = 0x3ecccccd;
  uStack_54 = 0x3f800000;
  FUN_1446ddc76(&local_68,"FDebugDraw",1);
  uVar2 = FUN_1457dd274(3,4,4);
  FUN_1446ddc76(&local_80,"LocalToWorld",1);
  local_78 = &local_50;
  local_50 = local_80;
  local_70 = &local_40;
  local_48 = uVar2;
  FUN_1446ddc76(&local_88,"FDebugDraw",1);
  uVar2 = FUN_1460378e2(local_88,&local_78);
  FUN_140056680(local_a8,L"FDebugDraw");
  FUN_140233b1a(local_98,local_a8);
  FUN_1446ddc76(&local_b0,"FDebugDraw",1);
  local_d8 = local_68;
  local_c0 = 0x18;
  local_d0 = 0;
  local_c8 = &local_60;
  FUN_1415c348a(uVar1,local_b0,local_98,uVar2);
  if (local_98[0] != (longlong *)0x0) {
    (**(code **)(*local_98[0] + 0x10))();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460378e2 FUN_1460378e2 body=233 status=ok
// SIG undefined FUN_1460378e2(void)

undefined8 FUN_1460378e2(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined1 auStack_78 [40];
  undefined2 local_50 [2];
  longlong local_4c;
  undefined1 local_44;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 == 0) {
    uVar8 = 0;
    goto LAB_146037997;
  }
  local_44 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50[0] = 4;
  puVar10 = (undefined4 *)*param_2;
  puVar2 = (undefined4 *)param_2[1];
  local_4c = param_1;
  if (puVar10 == puVar2) {
LAB_1460379bd:
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    do {
      uVar6 = uStack_38;
      if ((*(char **)(puVar10 + 2) == (char *)0x0) || (**(char **)(puVar10 + 2) == '\x04'))
      goto LAB_14603798d;
      lVar9 = (longlong)(int)uStack_38;
      uVar7 = (int)uStack_38 + 1;
      uStack_38 = CONCAT44(uStack_38._4_4_,uVar7);
      if (uStack_38._4_4_ < uVar7) {
        FUN_1460379cc(&local_40,uVar6 & 0xffffffff);
      }
      uVar3 = puVar10[1];
      uVar4 = puVar10[2];
      uVar5 = puVar10[3];
      puVar1 = (undefined4 *)(local_40 + lVar9 * 0x10);
      *puVar1 = *puVar10;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      puVar10 = puVar10 + 4;
    } while (puVar10 != puVar2);
    if ((int)uStack_38 == 0) goto LAB_1460379bd;
    uVar8 = FUN_1410a7212(local_50);
  }
LAB_14603798d:
  if (local_40 != 0) {
    FUN_1400020a8();
  }
LAB_146037997:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460379cc FUN_1460379cc body=132 status=ok
// SIG undefined FUN_1460379cc(void)

void FUN_1460379cc(longlong param_1,int param_2)

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



// FUNCTION 146037a50 FUN_146037a50 body=346 status=ok
// SIG undefined FUN_146037a50(void)

int FUN_146037a50(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 auStack_68 [40];
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  piVar3 = (int *)FUN_146037c50(param_1 + 0x3780);
  if (piVar3 == (int *)0x0) {
    puVar1 = (uint *)(param_1 + 0x3820);
    puVar4 = *(uint **)(param_1 + 0x3830);
    if (*(uint **)(param_1 + 0x3830) == (uint *)0x0) {
      puVar4 = puVar1;
    }
    iVar5 = *(int *)(param_1 + 0x3838);
    if (0x1f < iVar5 + 0x1fU) {
      lVar6 = 0;
      puVar8 = puVar4;
LAB_146037b40:
      if (*puVar8 == 0xffffffff) goto code_r0x000146037b49;
      uVar9 = ~*puVar8;
      iVar7 = 0;
      if (uVar9 != 0) {
        for (; (uVar9 >> iVar7 & 1) == 0; iVar7 = iVar7 + 1) {
        }
      }
      iVar2 = iVar7 - (int)lVar6;
      if (iVar7 + 1 == (int)lVar6 || iVar5 <= iVar2) goto LAB_146037ab2;
      iVar5 = iVar2 + 0x1f;
      if (-1 < iVar2) {
        iVar5 = iVar2;
      }
      puVar4[iVar5 >> 5] = puVar4[iVar5 >> 5] | 1 << ((byte)iVar7 & 0x1f);
      goto LAB_146037aea;
    }
LAB_146037ab2:
    iVar2 = FUN_144a54ea4(puVar1,1);
    puVar4 = *(uint **)(param_1 + 0x3830);
    if (*(uint **)(param_1 + 0x3830) == (uint *)0x0) {
      puVar4 = puVar1;
    }
    iVar7 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar7 = iVar2;
    }
    puVar4[iVar7 >> 5] = puVar4[iVar7 >> 5] | 1 << ((byte)iVar2 & 0x1f);
    iVar2 = iVar5;
LAB_146037aea:
    local_3c = 0;
    local_40 = iVar2;
    FUN_146037bac(param_1 + 0x3780,param_2);
    *(undefined1 *)(param_1 + 0x3739) = 1;
  }
  else {
    iVar2 = *piVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar2;
code_r0x000146037b49:
  lVar6 = lVar6 + -0x20;
  puVar8 = puVar8 + 1;
  if ((ulonglong)(iVar5 + 0x1fU & 0xffffffe0) + lVar6 == 0) goto LAB_146037ab2;
  goto LAB_146037b40;
}



// FUNCTION 146037bac FUN_146037bac body=162 status=ok
// SIG undefined FUN_146037bac(void)

void FUN_146037bac(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_146037c50();
  if (lVar1 == 0) {
    local_58 = 1;
    uStack_54 = (undefined4)*param_3;
    uStack_50 = (undefined4)((ulonglong)*param_3 >> 0x20);
    local_48 = (undefined4 *)(param_2 + 0x2e0);
    local_40 = &local_58;
    FUN_14603804a(param_1 + 0x50,local_34,&local_48);
    local_58 = (undefined4)param_2;
    uStack_54 = (undefined4)((ulonglong)param_2 >> 0x20);
    local_48 = &local_58;
    local_40 = (undefined4 *)(param_2 + 0x2e0);
    FUN_1460382ce(param_1,local_34,&local_48);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146037c50 FUN_146037c50 body=119 status=ok
// SIG undefined FUN_146037c50(void)

longlong FUN_146037c50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  cVar2 = FUN_146037cc8();
  uVar3 = FUN_1447addd0(param_2 + 0x2e0,0x10);
  iVar4 = FUN_14025f414((longlong *)(param_1 + 0x50),uVar3,param_2 + 0x2e0);
  if (iVar4 != -1) {
    lVar1 = *(longlong *)(param_1 + 0x50) + (longlong)iVar4 * 0x24;
    piVar5 = (int *)(lVar1 + 0x10);
    if (piVar5 != (int *)0x0 && lVar1 != 0) {
      if (cVar2 == '\0') {
        *piVar5 = *piVar5 + 1;
      }
      return lVar1 + 0x14;
    }
  }
  return 0;
}



// FUNCTION 146037cc8 FUN_146037cc8 body=897 status=ok
// SIG undefined FUN_146037cc8(void)

bool FUN_146037cc8(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  ulonglong local_c8;
  longlong local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar10 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar7 != -1) {
      bVar15 = false;
      do {
        lVar13 = *param_1 + (longlong)iVar7 * 0x20;
        if (*(ulonglong *)(*param_1 + (longlong)iVar7 * 0x20) == param_2) {
          bVar15 = false;
          if ((lVar13 != 0) && (plVar10 = (longlong *)(lVar13 + 8), plVar10 != (longlong *)0x0)) {
            if ((*(int *)(lVar13 + 8) == *(int *)(param_2 + 0x2e0)) &&
               (((*(int *)(lVar13 + 0xc) == *(int *)(param_2 + 0x2e4) &&
                 (*(int *)(lVar13 + 0x10) == *(int *)(param_2 + 0x2e8))) &&
                (*(int *)(lVar13 + 0x14) == *(int *)(param_2 + 0x2ec))))) goto LAB_146037d9b;
            local_88 = *(undefined4 *)plVar10;
            uStack_84 = *(undefined4 *)(lVar13 + 0xc);
            local_c0 = *plVar10;
            uStack_80 = *(undefined4 *)(lVar13 + 0x10);
            uStack_7c = *(undefined4 *)(lVar13 + 0x14);
            local_c8 = *(ulonglong *)(lVar13 + 0x10);
            local_d0 = param_1 + 10;
            uVar11 = ((local_c0 + 0x9ae16a3b2f90404fU << 0x27 |
                      local_c0 + 0x9ae16a3b2f90404fU >> 0x19) + local_c8) * -0x651e95c4d06fbf91;
            uVar12 = ((local_c8 << 0x1b | local_c8 >> 0x25) * -0x651e95c4d06fbf91 + local_c0 +
                      0x9ae16a3b2f90404f ^ uVar11) * -0x651e95c4d06fbf91;
            lVar13 = (uVar12 >> 0x2f ^ uVar11 ^ uVar12) * -0x651e95c4d06fbf91;
            iVar7 = FUN_14025f414(local_d0,((uint)((ulonglong)lVar13 >> 0x2f) ^ (uint)lVar13) *
                                           0x2f90406f);
            if (iVar7 == -1) {
              lVar13 = 0;
            }
            else {
              lVar13 = (longlong)iVar7 * 0x24 + *local_d0;
            }
            local_b8 = (undefined8 *)(lVar13 + 0x10);
            if (lVar13 == 0) {
              local_b8 = (undefined8 *)0x0;
            }
            bVar15 = local_b8 != (undefined8 *)0x0;
            if (bVar15) {
              plVar10 = param_1 + 2;
              local_70 = 0x100000000;
              local_60 = 0xffffffff;
              local_58 = 0;
              iVar14 = 0;
              iVar7 = 0;
              local_68 = plVar10;
              if ((int)param_1[5] != 0) {
                FUN_1449c0562(&local_70);
                iVar7 = (int)param_1[5];
              }
              lVar13 = local_c0;
              uVar11 = local_c8;
              local_98 = local_60;
              uVar5 = local_98;
              local_90 = local_58;
              local_8c = local_54;
              local_a8 = (undefined8 *)local_70;
              local_a0 = local_68;
              local_98._4_4_ = (int)((ulonglong)local_60 >> 0x20);
              local_b0 = param_1;
              if ((local_98._4_4_ != iVar7) || (local_68 != plVar10)) {
                iVar14 = 0;
                iVar8 = local_98._4_4_;
                local_98 = uVar5;
                do {
                  lVar1 = *local_b0;
                  lVar9 = (longlong)iVar8 * 0x20;
                  if (((*(int *)(lVar1 + 8 + lVar9) == (int)local_c0) &&
                      (*(int *)(lVar1 + 0xc + lVar9) == (int)((ulonglong)lVar13 >> 0x20))) &&
                     ((*(int *)(lVar1 + 0x10 + lVar9) == (int)local_c8 &&
                      (*(int *)(lVar1 + 0x14 + lVar9) == (int)(uVar11 >> 0x20))))) {
                    lVar9 = lVar9 + lVar1;
                    uVar2 = *(undefined4 *)(param_2 + 0x2e4);
                    uVar3 = *(undefined4 *)(param_2 + 0x2e8);
                    uVar4 = *(undefined4 *)(param_2 + 0x2ec);
                    *(undefined4 *)(lVar9 + 8) = *(undefined4 *)(param_2 + 0x2e0);
                    *(undefined4 *)(lVar9 + 0xc) = uVar2;
                    *(undefined4 *)(lVar9 + 0x10) = uVar3;
                    *(undefined4 *)(lVar9 + 0x14) = uVar4;
                    iVar14 = iVar14 + 1;
                  }
                  local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~local_a8._4_4_);
                  FUN_1449c0562(&local_a8);
                  iVar8 = local_98._4_4_;
                  uVar5 = local_98;
                } while (local_b0 != param_1 || (local_a0 != plVar10 || local_98._4_4_ != iVar7));
              }
              local_98 = uVar5;
              plVar10 = local_d0;
              local_68 = (longlong *)CONCAT44(local_68._4_4_,*(undefined4 *)(local_b8 + 1));
              local_70 = CONCAT44((int)((ulonglong)*local_b8 >> 0x20),iVar14);
              FUN_145d0dddc(local_d0,&local_88);
              FUN_1472d069c(plVar10);
              FUN_1472d0658(plVar10,(int)param_1[0xb] - *(int *)((longlong)param_1 + 0x84));
              local_b0 = (longlong *)(param_2 + 0x2e0);
              local_a8 = &local_70;
              FUN_1472d0760(plVar10,local_4c);
            }
          }
          break;
        }
        iVar7 = *(int *)(lVar13 + 0x18);
      } while (iVar7 != -1);
      goto LAB_146037d9d;
    }
  }
LAB_146037d9b:
  bVar15 = false;
LAB_146037d9d:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar15;
}



// FUNCTION 14603804a FUN_14603804a body=308 status=ok
// SIG undefined FUN_14603804a(void)

undefined4 * FUN_14603804a(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1460381e6(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  local_40[6] = *(undefined4 *)(puVar2 + 1);
  *(undefined8 *)(local_40 + 4) = *puVar2;
  local_40[7] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = FUN_1447addd0(local_40,0x10);
  cVar6 = FUN_146038180(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[8] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[7] = *(undefined4 *)
                     (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
      ;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_146038584(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146038180 FUN_146038180 body=102 status=ok
// SIG undefined FUN_146038180(void)

undefined8 FUN_146038180(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar8 = FUN_14025f414(), iVar8 != -1)) {
    lVar2 = *param_1;
    lVar9 = (longlong)iVar8;
    uVar4 = *param_3;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    uVar3 = *(undefined8 *)(param_3 + 4);
    *(undefined4 *)(lVar2 + 0x18 + lVar9 * 0x24) = param_3[6];
    *(undefined8 *)(lVar2 + 0x10 + lVar9 * 0x24) = uVar3;
    puVar1 = (undefined4 *)(lVar2 + lVar9 * 0x24);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    FUN_145d0dece(param_1,*param_4);
    *param_4 = iVar8;
    return 1;
  }
  return 0;
}



// FUNCTION 1460381e6 FUN_1460381e6 body=231 status=ok
// SIG undefined FUN_1460381e6(void)

int * FUN_1460381e6(longlong *param_1,int *param_2)

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
      FUN_14042c636(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x24);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x24) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x24 + *param_1;
  return param_2;
}



// FUNCTION 1460382ce FUN_1460382ce body=323 status=ok
// SIG undefined FUN_1460382ce(void)

undefined4 * FUN_1460382ce(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14603849e(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar8 = *(ulonglong *)*param_3;
  *local_40 = uVar8;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar2;
  *(undefined4 *)(local_40 + 2) = uVar3;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar4;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar6 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  cVar5 = FUN_146038412(param_1,uVar6,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar5 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x1c) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_14603874a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146038412 FUN_146038412 body=139 status=ok
// SIG undefined FUN_146038412(void)

undefined8 FUN_146038412(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_145d0dd68((int)lVar4,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14603849e FUN_14603849e body=230 status=ok
// SIG undefined FUN_14603849e(void)

int * FUN_14603849e(longlong *param_1,int *param_2)

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



// FUNCTION 146038584 FUN_146038584 body=452 status=ok
// SIG undefined FUN_146038584(void)

void FUN_146038584(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x24;
        iVar6 = FUN_1447addd0(lVar2,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x20) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x1c) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14603874a FUN_14603874a body=486 status=ok
// SIG undefined FUN_14603874a(void)

void FUN_14603874a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
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
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 14603893c FUN_14603893c body=225 status=ok
// SIG undefined FUN_14603893c(void)

undefined8 * FUN_14603893c(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a60aee0;
  param_1[0xd] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_28 = 0;
    FUN_14485c47a(&local_28,param_1);
    local_20 = local_28;
    iVar2 = FUN_146038a1e((uint)((ulonglong)local_28 >> 0x20) ^ (uint)local_28);
    puVar3 = (undefined8 *)((longlong)iVar2 * 0x10 + DAT_14cb0d2d8);
    if (puVar3 != (undefined8 *)0x0 && iVar2 != -1) {
      cVar1 = FUN_144729dda(puVar3);
      if (cVar1 != '\0') goto LAB_1460389dd;
      FUN_147d89116(*puVar3);
    }
    FUN_146038aec(&local_20,&local_28);
  }
LAB_1460389dd:
  *(undefined2 *)(param_1 + 0xe) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x72) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146038a1e FUN_146038a1e body=205 status=ok
// SIG undefined FUN_146038a1e(void)

int FUN_146038a1e(uint param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb0d2e0 != DAT_14cb0d30c) {
    puVar2 = &DAT_14cb0d310;
    if (DAT_14cb0d318 != (undefined *)0x0) {
      puVar2 = DAT_14cb0d318;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)(DAT_14cb0d320 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        local_40 = *param_2;
        local_38 = *(undefined8 *)(DAT_14cb0d2d8 + (longlong)iVar3 * 0x10);
        cVar1 = FUN_147d9e1b2(&local_38,&local_40);
        if (cVar1 != '\0') goto LAB_146038a4b;
        iVar3 = *(int *)(DAT_14cb0d2d8 + 8 + (longlong)iVar3 * 0x10);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_146038a4b:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 146038aec FUN_146038aec body=293 status=ok
// SIG undefined FUN_146038aec(void)

undefined4 * FUN_146038aec(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
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
  FUN_146038c9a(local_40);
  uVar1 = *param_2;
  *local_38 = uVar1;
  *(undefined4 *)(local_38 + 1) = 0xffffffff;
  local_44 = local_40[0];
  uVar9 = (uint)((ulonglong)uVar1 >> 0x20) ^ (uint)uVar1;
  cVar4 = FUN_146038c12(uVar9,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar5 = DAT_14cb0d2e0 - DAT_14cb0d30c;
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
    if (((int)uVar5 < 1) || (iVar8 <= DAT_14cb0d320)) {
      uVar9 = DAT_14cb0d320 - 1U & uVar9;
      *(uint *)((longlong)local_38 + 0xc) = uVar9;
      puVar6 = DAT_14cb0d318;
      if (DAT_14cb0d318 == (undefined *)0x0) {
        puVar6 = &DAT_14cb0d310;
      }
      *(undefined4 *)(local_38 + 1) =
           *(undefined4 *)(puVar6 + ((longlong)DAT_14cb0d320 - 1U & (longlong)(int)uVar9) * 4);
      puVar6 = DAT_14cb0d318;
      if (DAT_14cb0d318 == (undefined *)0x0) {
        puVar6 = &DAT_14cb0d310;
      }
      *(undefined4 *)(puVar6 + ((longlong)DAT_14cb0d320 - 1U & (longlong)(int)uVar9) * 4) = local_44
      ;
    }
    else {
      DAT_14cb0d320 = iVar8;
      FUN_146038da8();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146038c12 FUN_146038c12 body=134 status=ok
// SIG undefined FUN_146038c12(void)

undefined8 FUN_146038c12(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb0d2e0 - DAT_14cb0d30c != 1) {
    local_28 = *param_2;
    iVar1 = FUN_146038a1e();
    if (iVar1 != -1) {
      *(undefined8 *)(DAT_14cb0d2d8 + (longlong)iVar1 * 0x10) = *param_2;
      FUN_147d9e1e8(*param_3);
      *param_3 = iVar1;
      uVar2 = 1;
      goto LAB_146038c3b;
    }
  }
  uVar2 = 0;
LAB_146038c3b:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146038c9a FUN_146038c9a body=269 status=ok
// SIG undefined FUN_146038c9a(void)

int * FUN_146038c9a(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb0d308;
  iVar3 = DAT_14cb0d2e0;
  if (DAT_14cb0d30c == 0) {
    iVar2 = DAT_14cb0d2e0 + 1;
    bVar7 = DAT_14cb0d2e4 == DAT_14cb0d2e0;
    DAT_14cb0d2e0 = iVar2;
    if (bVar7) {
      FUN_144869a3c(&DAT_14cb0d2d8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb0d2e8,1);
    puVar4 = DAT_14cb0d2f8;
    if (DAT_14cb0d2f8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb0d2e8;
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
    lVar6 = (longlong)DAT_14cb0d308;
    DAT_14cb0d308 = *(int *)(DAT_14cb0d2d8 + 4 + lVar6 * 0x10);
    DAT_14cb0d30c = DAT_14cb0d30c + -1;
    if (DAT_14cb0d30c != 0) {
      *(undefined4 *)(DAT_14cb0d2d8 + (longlong)DAT_14cb0d308 * 0x10) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb0d2e8;
  if (DAT_14cb0d2f8 != (undefined *)0x0) {
    puVar4 = DAT_14cb0d2f8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x10 + DAT_14cb0d2d8;
  return param_1;
}



// FUNCTION 146038da8 FUN_146038da8 body=489 status=ok
// SIG undefined FUN_146038da8(void)

void FUN_146038da8(void)

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
  if (DAT_14cb0d318 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb0d318,0,0,4);
  }
  uVar2 = DAT_14cb0d320;
  uVar3 = local_50;
  if (DAT_14cb0d320 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb0d310,0,DAT_14cb0d320,4);
    if (0 < (int)uVar2) {
      do {
        puVar5 = DAT_14cb0d318;
        if (DAT_14cb0d318 == (undefined *)0x0) {
          puVar5 = &DAT_14cb0d310;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cb0d320 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb0d2e8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb0d300 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb0d2d8;
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
        lVar6 = (longlong)iVar4 * 0x10;
        uVar9 = (longlong)
                (int)((uint)((ulonglong)*(undefined8 *)(lVar1 + lVar6) >> 0x20) ^
                     (uint)*(undefined8 *)(lVar1 + lVar6)) & (longlong)(int)DAT_14cb0d320 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0xc + lVar6) = iVar8;
        puVar5 = DAT_14cb0d318;
        if (DAT_14cb0d318 == (undefined *)0x0) {
          puVar5 = &DAT_14cb0d310;
        }
        *(undefined4 *)(lVar1 + 8 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14cb0d320 - 1U & uVar9) * 4);
        puVar5 = DAT_14cb0d318;
        if (DAT_14cb0d318 == (undefined *)0x0) {
          puVar5 = &DAT_14cb0d310;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14cb0d320 - 1U) * 4) = iVar4;
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



// FUNCTION 146038f92 FUN_146038f92 body=71 status=ok
// SIG undefined FUN_146038f92(void)

void FUN_146038f92(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = &local_18;
  local_18 = param_2;
  FUN_146038fda(param_1 + 8);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146038fda FUN_146038fda body=200 status=ok
// SIG undefined FUN_146038fda(void)

void FUN_146038fda(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar4 = (longlong)(int)uVar1;
  if (lVar4 != 0) {
    plVar2 = (longlong *)*param_1;
    uVar5 = 0;
    bVar11 = *plVar2 == *(longlong *)*param_2;
    uVar8 = 0;
    do {
      uVar3 = (ulonglong)uVar8;
      uVar9 = uVar8;
      uVar7 = uVar3;
      uVar6 = uVar8 + 1;
      if ((int)(uVar8 + 1) < (int)uVar1) {
        uVar6 = uVar1;
      }
      do {
        uVar7 = uVar7 + 1;
        uVar10 = uVar6;
        if (lVar4 <= (longlong)uVar7) break;
        uVar10 = uVar9 + 1;
        uVar9 = uVar10;
      } while (bVar11 == (plVar2[uVar7] == *(longlong *)*param_2));
      if (bVar11 == false) {
        if (uVar5 != uVar8) {
          memmove(plVar2 + (int)uVar5,plVar2 + uVar3,(longlong)(int)(uVar10 - uVar8) << 3);
        }
        uVar5 = uVar5 + (uVar10 - uVar8);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      uVar8 = uVar10;
    } while ((longlong)uVar7 < lVar4);
    *(uint *)(param_1 + 1) = uVar5;
  }
  return;
}



// FUNCTION 1460390a2 FUN_1460390a2 body=44 status=ok
// SIG undefined FUN_1460390a2(void)

undefined8 FUN_1460390a2(undefined8 param_1,int param_2)

{
  FUN_1415c35ca();
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 1460390dc FUN_1460390dc body=54 status=ok
// SIG undefined FUN_1460390dc(void)

undefined8 * FUN_1460390dc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146039112 FUN_146039112 body=87 status=ok
// SIG undefined FUN_146039112(void)

void FUN_146039112(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x60) = 0;
  plVar3 = *(longlong **)(param_1 + 0x68);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
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
  FUN_14603916a(param_1);
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 14603916a FUN_14603916a body=184 status=ok
// SIG undefined FUN_14603916a(void)

void FUN_14603916a(longlong param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x70) == '\0') {
    local_30 = (longlong *)0x0;
    cVar2 = FUN_140a68212();
    if (cVar2 != '\0') {
      local_20 = 0;
      plVar3 = (longlong *)FUN_1401e3228();
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x60))(plVar3,&local_30);
        if (local_30 != (longlong *)0x0) {
          (**(code **)(*local_30 + 0x30))(local_30,param_1 + 0x58);
        }
        if (local_28 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_28 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_28)(local_28);
            LOCK();
            piVar1 = (int *)((longlong)local_28 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_28 + 0x10))(local_28);
            }
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603922c FUN_14603922c body=1080 status=ok
// SIG undefined FUN_14603922c(void)

undefined8 * FUN_14603922c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *param_1 = &PTR_FUN_14b66ae10;
  param_1[3] = 0x466a6000461c4000;
  param_1[4] = 0x4416000044610000;
  param_1[5] = 0x42f0000042b40000;
  param_1[6] = 0x42f0000042b40000;
  param_1[7] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 8) = 0x44fa0000;
  param_1[9] = &PTR_FUN_14b00bdf8;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0xbc) = 0x404;
  param_1[10] = &DAT_14a176f00;
  param_1[0x1e] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1f] = &PTR_FUN_14b00bdf8;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x16c) = 0x404;
  param_1[0x20] = &DAT_14a176f00;
  param_1[0x34] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x35] = &PTR_FUN_14b00bdf8;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x21c) = 0x404;
  param_1[0x36] = &DAT_14a176f00;
  *(undefined8 *)((longlong)param_1 + 0x249) = 0;
  *(undefined8 *)((longlong)param_1 + 0x251) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x4c] = &PTR_FUN_14b00bdf8;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x2d4) = 0x404;
  param_1[0x4d] = &DAT_14a176f00;
  param_1[0x61] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x62] = &PTR_FUN_14b00bdf8;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 900) = 0x404;
  param_1[99] = &DAT_14a176f00;
  *(undefined8 *)((longlong)param_1 + 0x3b2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ba) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0x3eb333333f800000;
  *(undefined8 *)((longlong)param_1 + 0x3cc) = 0x100010100000000;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x7b) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0x3f0ccccd;
  *(undefined2 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e4) = 0x41a000003eb33333;
  *(undefined2 *)((longlong)param_1 + 0x3ec) = 1;
  *(undefined1 *)((longlong)param_1 + 0x3ee) = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x3f4) = 0x3eb33333;
  *(undefined4 *)(param_1 + 0x7f) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x3fc) = 0x447a0000;
  *(undefined2 *)(param_1 + 0x80) = 1;
  *(undefined1 *)((longlong)param_1 + 0x402) = 1;
  FUN_144928b90(param_1 + 0x81,0);
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined2 *)(param_1 + 0x89) = 1;
  *(undefined1 *)((longlong)param_1 + 0x44a) = 1;
  FUN_144928b90(param_1 + 0x8a,0);
  *(undefined1 *)(param_1 + 0x91) = 0;
  *(undefined2 *)(param_1 + 0x92) = 1;
  *(undefined1 *)((longlong)param_1 + 0x492) = 1;
  FUN_144928b90(param_1 + 0x93,0);
  *(undefined1 *)(param_1 + 0x9a) = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  *(undefined1 *)(param_1 + 0xa0) = 1;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  FUN_1446f470e(param_1 + 0xa8,L"GrappleCarryObject",1);
  FUN_1446f470e(param_1 + 0xa9,L"GrappleResonator",1);
  FUN_1446f470e(param_1 + 0xaa,L"Melee",1);
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  FUN_1446f470e(param_1 + 0xb0,L"FX_L_Hand_Grapple",1);
  FUN_1446f470e(param_1 + 0xb1,L"FX_L_Hand",1);
  return param_1;
}



// FUNCTION 146039670 FUN_146039670 body=260 status=ok
// SIG undefined FUN_146039670(void)

undefined8 * FUN_146039670(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140eca8ca();
  *param_1 = &PTR_FUN_14b87dc40;
  local_50 = DAT_14cbe5420;
  local_58 = DAT_14cbe5418;
  FUN_1448075d0(&local_48);
  FUN_1404e49fa(param_1 + 5,&local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1447715ec(param_1 + 10,&DAT_14cbe5430);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddda2(&local_48,&DAT_14b9d8d88,0);
  FUN_1447325ac(&local_48,&local_58,1);
  param_1[0x10] = local_58;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  param_1[0x11] = DAT_14cbe5458;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146039776 FUN_146039776 body=38 status=ok
// SIG undefined FUN_146039776(void)

undefined8 FUN_146039776(undefined8 param_1,int param_2)

{
  FUN_14603979c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14603979c FUN_14603979c body=234 status=ok
// SIG undefined FUN_14603979c(void)

void FUN_14603979c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba38460;
  FUN_141214b54(param_1[0x2f],*(undefined4 *)(param_1 + 0x30));
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2a));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0xf);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_14047c7cc(param_1 + 5);
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146039886 FUN_146039886 body=147 status=ok
// SIG undefined FUN_146039886(void)

void FUN_146039886(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1458b0bbe(local_20);
  FUN_14603997e(param_1 + 0x78,local_20);
  FUN_145d37a3e(local_20);
  plVar2 = (longlong *)FUN_14603991a();
  (**(code **)(*plVar2 + 8))(plVar2,param_1);
  puVar1 = *(undefined8 **)(param_1 + 0x170);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x170) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  switchD_143c3d4dc::caseD_1d(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603991a FUN_14603991a body=99 status=ok
// SIG undefined FUN_14603991a(void)

undefined * FUN_14603991a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc16fe0) {
    FUN_144b3d300(&DAT_14cc16fe0);
    if (DAT_14cc16fe0 == -1) {
      FUN_146039a32();
      atexit((_func_5014 *)&LAB_14451f48f);
      _Init_thread_footer(&DAT_14cc16fe0);
    }
  }
  return &DAT_14cc16f58;
}



// FUNCTION 14603997e FUN_14603997e body=178 status=ok
// SIG undefined FUN_14603997e(void)

longlong * FUN_14603997e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1412d55ee(0);
  lVar1 = *param_2;
  lVar2 = FUN_14494321d(2);
  *(undefined1 *)(lVar2 + 1) = 0;
  FUN_1412d55ee(1);
  if (lVar2 != lVar1) {
    *(undefined1 *)(lVar2 + 1) = 1;
  }
  FUN_1412d5698(1);
  local_28 = lVar2;
  if (&local_28 != param_1) {
    lVar1 = *param_1;
    *param_1 = lVar2;
    local_28 = 0;
    FUN_1412d55b0(param_1,lVar1);
  }
  FUN_1412d55b0(&local_28,local_28);
  FUN_1412d5698(0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146039a32 FUN_146039a32 body=389 status=ok
// SIG undefined FUN_146039a32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146039a32(void)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong *plStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  _DAT_14cc16f58 = &PTR_FUN_14bccf130;
  _DAT_14cc16f90 = 0;
  _DAT_14cc16f98 = 0;
  _DAT_14cc16f60 = 0;
  DAT_14cc16f68 = (longlong *)0x0;
  _DAT_14cc16f70 = 0;
  uRam000000014cc16f78 = 0;
  _DAT_14cc16f9c = 0xffffffff00000080;
  _DAT_14cc16fa4 = 0;
  _DAT_14cc16fb0 = 0;
  _DAT_14cc16fb8 = 0;
  plVar4 = (longlong *)FUN_144a7672a();
  iVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
  _DAT_14cc16fc0 = 1;
  if (1 < iVar3) {
    _DAT_14cc16fc0 = iVar3;
  }
  _DAT_14cc16fc4 = 0;
  _DAT_14cc16fd0 = 0;
  uRam000000014cc16fd8 = 0;
  uVar5 = FUN_1401cb356();
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  puVar2 = local_60;
  local_58 = 2;
  *local_60 = &PTR_LAB_149e02020;
  uVar6 = FUN_144a3f946();
  puVar2[2] = uVar6;
  *puVar2 = &PTR_FUN_14bccf710;
  puVar2[3] = &DAT_14cc16f58;
  local_68 = 0;
  FUN_1405f67fc(uVar5,&local_50,&local_60,L"FGeometryCacheStreamer");
  plVar4 = DAT_14cc16f68;
  _DAT_14cc16f60 = local_50;
  uVar5 = plStack_48;
  local_50 = 0;
  plStack_48 = (longlong *)0x0;
  if (DAT_14cc16f68 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)DAT_14cc16f68 + 0xc);
    DAT_14cc16f68 = (longlong *)uVar5;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    uVar5 = DAT_14cc16f68;
    if (plStack_48 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plStack_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      uVar5 = DAT_14cc16f68;
      if (*piVar1 == 0) {
        (**(code **)(*plStack_48 + 0x10))();
        uVar5 = DAT_14cc16f68;
      }
    }
  }
  DAT_14cc16f68 = (longlong *)uVar5;
  FUN_1449db362(&local_60);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146039bc0 FUN_146039bc0 body=264 status=ok
// SIG undefined FUN_146039bc0(void)

undefined8 * FUN_146039bc0(undefined8 *param_1)

{
  FUN_1400841f8();
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_14bee1320;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_1446f8bcc(param_1 + 9,0);
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  return param_1;
}



// FUNCTION 146039cc8 FUN_146039cc8 body=146 status=ok
// SIG undefined FUN_146039cc8(void)

code * FUN_146039cc8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1415c36ae();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GBufferPass";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLumenFrontLayerTranslucencyGBufferPassUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000144;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9ecfe8;
  return FUN_145dca414;
}



// FUNCTION 146039d5a FUN_146039d5a body=232 status=ok
// SIG undefined FUN_146039d5a(void)

longlong * FUN_146039d5a(longlong *param_1)

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
  pcVar12 = FUN_1462d7f5e;
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



// FUNCTION 146039e52 FUN_146039e52 body=779 status=ok
// SIG undefined FUN_146039e52(void)

undefined8 * FUN_146039e52(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_88 [40];
  code *local_60;
  undefined4 local_58;
  undefined1 local_50 [8];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a592a00;
  param_1[5] = &PTR_LAB_14a592ca8;
  auVar7 = roundpd(ZEXT816(0x412e848100000000),ZEXT816(0x412e848100000000),1);
  memset(param_1 + 6,0,0x90);
  param_1[0x18] = (longlong)auVar7._0_8_;
  auVar8 = roundpd(ZEXT816(0x417c9c3808000000),ZEXT816(0x417c9c3808000000),1);
  param_1[0x19] = (longlong)auVar8._0_8_;
  param_1[0x1a] = (longlong)auVar7._0_8_;
  *(undefined1 *)((longlong)param_1 + 0xd9) = 1;
  *(byte *)((longlong)param_1 + 0xdc) = *(byte *)((longlong)param_1 + 0xdc) & 0xfc;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x4270000042b40000;
  uVar3 = DAT_14c846500;
  param_1[0x20] = DAT_14c8464f8;
  param_1[0x21] = uVar3;
  param_1[0x22] = DAT_14c846508;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 2;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  FUN_1412e3d1e(param_1 + 0x28);
  *(undefined2 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) goto LAB_14603a079;
  lVar4 = FUN_14001cc68(0x3e0,0x10);
  local_48 = 0;
  FUN_14485c47a(&local_48,param_1);
  FUN_14603a35c(lVar4,local_48);
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a598c00;
  plVar5[2] = lVar4;
  if ((lVar4 != 0) &&
     (((*(longlong *)(lVar4 + 0x18) == 0 || (*(longlong *)(lVar4 + 0x20) == 0)) ||
      (*(int *)(*(longlong *)(lVar4 + 0x20) + 8) < 1)))) {
    if (plVar5 == (longlong *)0x0) {
      *(longlong *)(lVar4 + 0x18) = lVar4;
      plVar6 = *(longlong **)(lVar4 + 0x20);
      if (plVar6 != (longlong *)0x0) {
LAB_14603a0f7:
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        *(longlong **)(lVar4 + 0x20) = plVar5;
        if (plVar5 != (longlong *)0x0) goto LAB_14603a01c;
      }
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *(longlong *)(lVar4 + 0x18) = lVar4;
      if (*(longlong **)(lVar4 + 0x20) != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar6 = *(longlong **)(lVar4 + 0x20);
        if (plVar6 != (longlong *)0x0) goto LAB_14603a0f7;
        *(longlong **)(lVar4 + 0x20) = plVar5;
      }
LAB_14603a01c:
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  }
  param_1[0x26] = lVar4;
  plVar6 = (longlong *)param_1[0x27];
  if (plVar5 == plVar6) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar6 = plVar5;
        goto joined_r0x00014603a0bc;
      }
    }
  }
  else {
    param_1[0x27] = plVar5;
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
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x00014603a0bc:
        if (iVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  local_60 = FUN_1478102de;
  local_58 = 0;
  FUN_14603a15e(param_1[0x26] + 0x240,local_50,param_1);
LAB_14603a079:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603a15e FUN_14603a15e body=254 status=ok
// SIG undefined FUN_14603a15e(void)

undefined8
FUN_14603a15e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14a5981a0;
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
  *local_48 = &PTR_FUN_14a598c20;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14603a25e(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603a25e FUN_14603a25e body=216 status=ok
// SIG undefined FUN_14603a25e(void)

undefined8 * FUN_14603a25e(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14603a344 FUN_14603a344 body=24 status=ok
// SIG undefined FUN_14603a344(void)

bool FUN_14603a344(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14603a35c FUN_14603a35c body=861 status=ok
// SIG undefined FUN_14603a35c(void)

undefined8 * FUN_14603a35c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14a5898a0;
  param_1[1] = &PTR_FUN_14a5898c8;
  param_1[2] = &PTR_FUN_14a5898d8;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
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
  param_1[0x2b] = param_1;
  *(undefined1 *)(param_1 + 0x2c) = 2;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 2;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x30) = 2;
  param_1[0x31] = 0x8000000000000000;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 2;
  param_1[0x34] = 0x8000000000000000;
  param_1[0x35] = 0;
  *(undefined1 *)(param_1 + 0x36) = 2;
  param_1[0x37] = 0;
  *(undefined1 *)(param_1 + 0x38) = 2;
  param_1[0x39] = 0;
  local_70 = param_2;
  FUN_14603a6ba(param_1 + 0x2b);
  uVar1 = FUN_14001cc68(0x178,0x10);
  FUN_14603a700(uVar1);
  param_1[0x3d] = uVar1;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3e));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x3e),4000);
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined8 *)((longlong)param_1 + 0x221) = 0;
  *(undefined8 *)((longlong)param_1 + 0x229) = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0xffffffffffffffff;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 2;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  param_1[0x53] = puVar2;
  param_1[0x52] = puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  param_1[0x55] = puVar2;
  param_1[0x54] = puVar2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x56));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x56),4000);
  param_1[0x5b] = 0x8000000000000000;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0xbff0000000000000;
  param_1[0x5e] = 0x8000000000000000;
  param_1[0x5f] = 0;
  param_1[0x60] = 0xbff0000000000000;
  *(undefined1 *)(param_1 + 0x61) = 2;
  param_1[0x62] = 0x8000000000000000;
  param_1[99] = 0;
  *(undefined1 *)(param_1 + 100) = 2;
  param_1[0x65] = 0x8000000000000000;
  param_1[0x66] = 0;
  param_1[0x67] = 0x8000000000000000;
  param_1[0x68] = 0;
  param_1[0x69] = 0x8000000000000000;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0x8000000000000000;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0x8000000000000000;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0xbff0000000000000;
  *(undefined1 *)(param_1 + 0x73) = 0;
  param_1[0x74] = 0x8000000000000000;
  param_1[0x75] = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b5) = 0;
  param_1[0x78] = local_70;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  FUN_1446ddc76(&local_68,"Media",1);
  uVar1 = FUN_144a52528();
  uVar1 = FUN_1405f3750(uVar1,local_68,0);
  param_1[0x77] = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x3b4) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0xffffffff;
  param_1[0x1e] = 0xffffffffffffffff;
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603a6ba FUN_14603a6ba body=70 status=ok
// SIG undefined FUN_14603a6ba(void)

void FUN_14603a6ba(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  return;
}



// FUNCTION 14603a700 FUN_14603a700 body=221 status=ok
// SIG undefined FUN_14603a700(void)

undefined8 * FUN_14603a700(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
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
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2a));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x2a),4000);
  return param_1;
}



// FUNCTION 14603a7de FUN_14603a7de body=99 status=ok
// SIG undefined FUN_14603a7de(void)

undefined8 FUN_14603a7de(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c83efb0) {
    FUN_144b3d300(&DAT_14c83efb0);
    if (DAT_14c83efb0 == -1) {
      FUN_1415c3862();
      atexit((_func_5014 *)&LAB_14274da1d);
      _Init_thread_footer(&DAT_14c83efb0);
    }
  }
  return DAT_14c83efa8;
}



// FUNCTION 14603a842 FUN_14603a842 body=38 status=ok
// SIG undefined FUN_14603a842(void)

undefined8 FUN_14603a842(undefined8 param_1,int param_2)

{
  FUN_1415c3910();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14603a870 FUN_14603a870 body=265 status=ok
// SIG undefined FUN_14603a870(void)

undefined8 * FUN_14603a870(undefined8 *param_1)

{
  FUN_145f8fbd2();
  *param_1 = &PTR_FUN_14aeabfa0;
  param_1[0x27] = &PTR_FUN_14aeac320;
  param_1[0x2a] = 0;
  param_1[0x2c] = &PTR_LAB_14aeb6ad0;
  param_1[0x2d] = &LAB_14841bf4e;
  param_1[0x28] = FUN_14841bf88;
  param_1[0x32] = 0;
  param_1[0x34] = &PTR_LAB_14aeb5700;
  param_1[0x35] = &DAT_14841bfac;
  param_1[0x30] = &LAB_14841bfae;
  param_1[0x3a] = 0;
  param_1[0x3c] = &PTR_LAB_14aeb5700;
  param_1[0x3d] = &DAT_14841bfc2;
  param_1[0x38] = &LAB_14841bfae;
  param_1[0x42] = 0;
  param_1[0x44] = &PTR_LAB_14aeb5700;
  param_1[0x45] = &DAT_14841bfc4;
  param_1[0x40] = &LAB_14841bfae;
  param_1[0x4a] = 0;
  param_1[0x4c] = &PTR_LAB_149e16f80;
  param_1[0x4d] = &DAT_14841bfc6;
  param_1[0x48] = FUN_140d11fbe;
  return param_1;
}



// FUNCTION 14603a97a FUN_14603a97a body=123 status=ok
// SIG undefined FUN_14603a97a(void)

void FUN_14603a97a(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14603ab6e(param_1,iVar1);
    }
    FUN_14603a9f5((longlong)iVar1 * 0x50 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_14603aa96(param_1,param_2,iVar1 - param_2);
      FUN_14603aa58(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14603a9f5 FUN_14603a9f5 body=99 status=ok
// SIG undefined FUN_14603a9f5(void)

void FUN_14603a9f5(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x40;
    do {
      *(undefined8 *)(param_1 + -0x40) = 0;
      *(undefined8 *)(param_1 + -0x38) = 0;
      *(undefined1 *)(param_1 + -0x30) = 0;
      *(undefined8 *)(param_1 + -0x28) = 0;
      *(undefined8 *)(param_1 + -0x20) = 0;
      *(undefined8 *)(param_1 + -0x1b) = 0;
      FUN_140056680(param_1 + -0x10,&DAT_149dfb77a);
      FUN_140056680(param_1,&DAT_149dfb77a);
      param_1 = param_1 + 0x50;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14603aa58 FUN_14603aa58 body=62 status=ok
// SIG undefined FUN_14603aa58(void)

void FUN_14603aa58(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14603aafe(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,8);
  }
  return;
}



// FUNCTION 14603aa96 FUN_14603aa96 body=103 status=ok
// SIG undefined FUN_14603aa96(void)

void FUN_14603aa96(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x50 + *param_1);
  FUN_145ac84d9(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x50 + (longlong)_Dst),(longlong)iVar2 * 0x50);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14603aafe FUN_14603aafe body=111 status=ok
// SIG undefined FUN_14603aafe(void)

ulonglong FUN_14603aafe(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x50) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x50,8);
      uVar1 = uVar1 / 0x50;
    }
  }
  return uVar1;
}



// FUNCTION 14603ab6e FUN_14603ab6e body=147 status=ok
// SIG undefined FUN_14603ab6e(void)

void FUN_14603ab6e(longlong param_1,int param_2)

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



// FUNCTION 14603ac02 FUN_14603ac02 body=91 status=ok
// SIG undefined FUN_14603ac02(void)

void FUN_14603ac02(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_14603aea0();
    *(undefined8 *)(param_1 + 0x30) = 0;
    plVar3 = *(longlong **)(param_1 + 0x38);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014603ac59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14603ac5e FUN_14603ac5e body=9 status=ok
// SIG undefined FUN_14603ac5e(void)

void FUN_14603ac5e(longlong param_1)

{
  FUN_14603ac68(param_1 + 0x10);
  return;
}



// FUNCTION 14603ac68 FUN_14603ac68 body=155 status=ok
// SIG undefined FUN_14603ac68(void)

void FUN_14603ac68(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_14603ad04(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  FUN_141475320(param_1 + 0x40);
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
                    /* WARNING: Could not recover jumptable at 0x00014603acff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14603ad04 FUN_14603ad04 body=53 status=ok
// SIG undefined FUN_14603ad04(void)

void FUN_14603ad04(longlong *param_1)

{
  FUN_14603ad3a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14603ad3a FUN_14603ad3a body=357 status=ok
// SIG undefined FUN_14603ad3a(void)

void FUN_14603ad3a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
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
      plVar3 = *(longlong **)(*local_68 + 0x20 + (longlong)iStack_4c * 0x30);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14603aea0 FUN_14603aea0 body=699 status=ok
// SIG undefined FUN_14603aea0(void)

void FUN_14603aea0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong *local_60;
  longlong *local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar9 = param_1 + 0x28;
  lVar6 = FUN_14479d2ce(lVar9);
  if (lVar6 != 0) {
    lVar7 = FUN_144a79464();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) {
      FUN_140457ffc(lVar6 + 0x340,param_1);
      FUN_140457ffc(lVar6 + 0x2a8,param_1);
    }
  }
  FUN_1446f470e(&local_60,L"SHIFT",1);
  FUN_14111b7b0(param_1);
  local_88 = local_60;
  plVar8 = (longlong *)FUN_1401e3228();
  if (plVar8 == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    uVar3 = local_70;
  }
  else {
    (**(code **)(*plVar8 + 0x80))(plVar8,&local_58);
    uVar3 = local_70;
    if (local_58 != (longlong *)0x0) {
      local_40 = param_1 + 0x50;
      local_48 = 0x100000000;
      local_38 = 0xffffffff;
      local_30 = 0;
      if (*(int *)(param_1 + 0x68) != 0) {
        FUN_1449c0562(&local_48);
      }
      local_70 = local_38;
      uVar3 = local_70;
      local_68 = local_30;
      local_64 = local_2c;
      local_80 = local_48;
      local_78 = local_40;
      local_70._4_4_ = (int)((ulonglong)local_38 >> 0x20);
      local_88 = (longlong *)(param_1 + 0x40);
      if (local_70._4_4_ < *(int *)(local_40 + 0x18)) {
        iVar5 = local_70._4_4_;
        local_70 = uVar3;
        do {
          local_48 = *(undefined8 *)(*local_88 + 8 + (longlong)iVar5 * 0x18);
          (**(code **)(*local_58 + 0x30))
                    (local_58,*(undefined4 *)(*local_88 + (longlong)iVar5 * 0x18),&local_48);
          local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
          FUN_1449c0562(&local_80);
          iVar5 = local_70._4_4_;
          uVar3 = local_70;
        } while (local_70._4_4_ < *(int *)(local_78 + 0x18));
      }
    }
  }
  local_70 = uVar3;
  plVar8 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  FUN_145bd660c(param_1 + 0x40,0);
  cVar4 = FUN_14111b834(lVar9,0);
  if (cVar4 == '\0') {
    lVar6 = FUN_14479d2ce(lVar9);
    FUN_140457ffc(lVar6 + 0xc0,param_1);
    lVar6 = FUN_14479d2ce(lVar9);
    FUN_140457ffc(lVar6 + 0xd8,param_1);
    lVar9 = FUN_14479d2ce(lVar9);
    lVar9 = *(longlong *)(lVar9 + 0x48);
    if (lVar9 != 0) {
      lVar6 = FUN_140b6d0be();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30)) {
        FUN_140457ffc(lVar9 + 0x1e0,param_1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1411ebbe4();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603b15c FUN_14603b15c body=89 status=ok
// SIG undefined FUN_14603b15c(void)

void FUN_14603b15c(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x3c + (longlong)param_2 * 0x40);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x40 + 0x38);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x40 + 0x38);
  FUN_14603b1b6();
  return;
}



// FUNCTION 14603b1b6 FUN_14603b1b6 body=116 status=ok
// SIG undefined FUN_14603b1b6(void)

void FUN_14603b1b6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 14603b22a FUN_14603b22a body=68 status=ok
// SIG undefined FUN_14603b22a(void)

void FUN_14603b22a(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x248);
  memset(_Dst,0,0x248);
  FUN_14603b26e(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 14603b26e FUN_14603b26e body=868 status=ok
// SIG undefined FUN_14603b26e(void)

undefined8 * FUN_14603b26e(undefined8 *param_1)

{
  undefined1 auStack_78 [40];
  undefined4 *local_50;
  longlong local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8c16b0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  local_50 = &local_40;
  uStack_3c = uStack_3c & 0xffffff00;
  local_40 = 0;
  local_48 = (longlong)&uStack_3c + 1;
  FUN_14603b5d4(param_1 + 0x19);
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = &DAT_40a00000;
  FUN_140056680(&local_40,&DAT_149dfb77a);
  param_1[0x21] = CONCAT44(uStack_3c,local_40);
  *(undefined4 *)(param_1 + 0x22) = local_38;
  *(undefined4 *)((longlong)param_1 + 0x114) = local_34;
  *(undefined4 *)(param_1 + 0x23) = 0;
  FUN_140056680(&local_40,&DAT_149dfb77a);
  param_1[0x24] = CONCAT44(uStack_3c,local_40);
  *(undefined4 *)(param_1 + 0x25) = local_38;
  *(undefined4 *)((longlong)param_1 + 300) = local_34;
  *(undefined4 *)(param_1 + 0x26) = 0;
  FUN_140056680(&local_40,&DAT_149dfb77a);
  param_1[0x27] = CONCAT44(uStack_3c,local_40);
  *(undefined4 *)(param_1 + 0x28) = local_38;
  *(undefined4 *)((longlong)param_1 + 0x144) = local_34;
  *(undefined4 *)(param_1 + 0x29) = 0;
  FUN_140056680(&local_40,&DAT_149dfb77a);
  param_1[0x2a] = CONCAT44(uStack_3c,local_40);
  *(undefined4 *)(param_1 + 0x2b) = local_38;
  *(undefined4 *)((longlong)param_1 + 0x15c) = local_34;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 1;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  FUN_140056680(&local_40,&DAT_149dfb77a);
  param_1[0x2e] = CONCAT44(uStack_3c,local_40);
  *(undefined4 *)(param_1 + 0x2f) = local_38;
  *(undefined4 *)((longlong)param_1 + 0x17c) = local_34;
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_140056680(&local_40,&DAT_149dfb77a);
  param_1[0x31] = CONCAT44(uStack_3c,local_40);
  *(undefined4 *)(param_1 + 0x32) = local_38;
  *(undefined4 *)((longlong)param_1 + 0x194) = local_34;
  *(undefined4 *)(param_1 + 0x33) = 0;
  FUN_140056680(&local_40,&DAT_149dfb77a);
  param_1[0x34] = CONCAT44(uStack_3c,local_40);
  *(undefined4 *)(param_1 + 0x35) = local_38;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = local_34;
  *(undefined4 *)(param_1 + 0x36) = 0;
  FUN_140056680(&local_40,&DAT_149dfb77a);
  param_1[0x37] = CONCAT44(uStack_3c,local_40);
  *(undefined4 *)(param_1 + 0x38) = local_38;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = local_34;
  *(undefined4 *)(param_1 + 0x39) = 0;
  FUN_140056680(&local_40,&DAT_149dfb77a);
  param_1[0x3a] = CONCAT44(uStack_3c,local_40);
  *(undefined4 *)(param_1 + 0x3b) = local_38;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = local_34;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_140056680(&local_40,&DAT_149dfb77a);
  param_1[0x3d] = CONCAT44(uStack_3c,local_40);
  *(undefined4 *)(param_1 + 0x3e) = local_38;
  *(undefined4 *)((longlong)param_1 + 500) = local_34;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  FUN_140056680(&local_40,&DAT_149dfb77a);
  param_1[0x40] = CONCAT44(uStack_3c,local_40);
  *(undefined4 *)(param_1 + 0x41) = local_38;
  *(undefined4 *)((longlong)param_1 + 0x20c) = local_34;
  *(undefined4 *)(param_1 + 0x42) = 0;
  FUN_140056680(&local_40,&DAT_149dfb77a);
  param_1[0x43] = CONCAT44(uStack_3c,local_40);
  *(undefined4 *)(param_1 + 0x44) = local_38;
  *(undefined4 *)((longlong)param_1 + 0x224) = local_34;
  *(undefined4 *)(param_1 + 0x45) = 0;
  FUN_140056680(&local_40,&DAT_149dfb77a);
  param_1[0x46] = CONCAT44(uStack_3c,local_40);
  *(undefined4 *)(param_1 + 0x47) = local_38;
  *(undefined4 *)((longlong)param_1 + 0x23c) = local_34;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603b5d4 FUN_14603b5d4 body=156 status=ok
// SIG undefined FUN_14603b5d4(void)

undefined8 * FUN_14603b5d4(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  _Src = (void *)*param_2;
  local_38 = (void *)0x0;
  uVar2 = param_2[1] - (longlong)_Src;
  iVar1 = (int)uVar2;
  local_30 = iVar1;
  if (iVar1 == 0) {
    local_2c = 0;
    iVar1 = 0;
  }
  else {
    FUN_1447cd5fa(&local_38,uVar2 & 0xffffffff,0);
    memcpy(local_38,_Src,(longlong)iVar1);
    iVar1 = local_30;
  }
  *param_1 = local_38;
  *(int *)(param_1 + 1) = iVar1;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_2c;
  *(undefined4 *)(param_1 + 2) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603b672 FUN_14603b672 body=95 status=ok
// SIG undefined FUN_14603b672(void)

void FUN_14603b672(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 14603b6d2 FUN_14603b6d2 body=273 status=ok
// SIG undefined FUN_14603b6d2(void)

void FUN_14603b6d2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
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
  local_38 = 0;
  local_30 = 0xf;
  local_28 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  local_48 = local_30;
  local_40 = 0;
  FUN_1415c435e(local_20);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603b7e4 FUN_14603b7e4 body=59 status=ok
// SIG undefined FUN_14603b7e4(void)

void FUN_14603b7e4(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    FUN_14603b820(*(undefined8 *)(param_1 + 0x130),param_1 + 0x140);
    FUN_1415c442c(param_1);
    return;
  }
  return;
}



// FUNCTION 14603b820 FUN_14603b820 body=11 status=ok
// SIG undefined FUN_14603b820(void)

void FUN_14603b820(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x27c) = *param_2;
  *(undefined8 *)(param_1 + 0x284) = uVar1;
  return;
}



// FUNCTION 14603b836 FUN_14603b836 body=263 status=ok
// SIG undefined FUN_14603b836(void)

undefined8 * FUN_14603b836(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_1458097b0();
  *param_1 = &PTR_FUN_14ac0ef10;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined8 *)((longlong)param_1 + 0x201) = 0;
  *(undefined8 *)((longlong)param_1 + 0x209) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined8 *)((longlong)param_1 + 0x221) = 0;
  *(undefined8 *)((longlong)param_1 + 0x229) = 0;
  lVar1 = FUN_145869c20();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x3d] = lVar1;
  *(undefined1 *)(param_1 + 0x42) = 1;
  lVar1 = FUN_1411e5f92();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x41] = lVar1;
  *(undefined1 *)(param_1 + 0x46) = 0;
  lVar1 = FUN_1411e5f92();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x43] = lVar1;
  lVar1 = FUN_145a75b0c();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x44] = lVar1;
  *(undefined2 *)(param_1 + 0x47) = 0;
  return param_1;
}



// FUNCTION 14603b948 FUN_14603b948 body=262 status=ok
// SIG undefined FUN_14603b948(void)

undefined8 * FUN_14603b948(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined4 local_2c;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145b02024();
  *param_1 = &PTR_FUN_14adcd3b0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14adcd0a0;
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 7) = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0x44) = 0;
  puVar3[10] = 0;
  *(undefined4 *)(puVar3 + 0xb) = 0;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar3) && (param_1[5] = puVar3, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  local_38 = FUN_140f1f190();
  if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_38);
  }
  local_30 = 1;
  local_2e = 0;
  local_2c = 0xffffffff;
  uVar2 = FUN_144830b78(local_24);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603ba50 FUN_14603ba50 body=144 status=ok
// SIG undefined FUN_14603ba50(void)

bool FUN_14603ba50(longlong param_1)

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



// FUNCTION 14603bae2 FUN_14603bae2 body=129 status=ok
// SIG undefined FUN_14603bae2(void)

void FUN_14603bae2(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x38);
  uVar2 = 0;
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x40) * 0x18;
    lVar4 = lVar4 + 8;
    do {
      if (*(longlong *)(param_1 + 0x30) != 0) {
        FUN_140993b54(*(longlong *)(param_1 + 0x30),lVar4);
      }
      lVar4 = lVar4 + 0x18;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
    uVar2 = *(undefined4 *)(param_1 + 0x40);
    lVar4 = *(longlong *)(param_1 + 0x38);
  }
  iVar1 = *(int *)(param_1 + 0x44);
  FUN_14117d0df(lVar4,uVar2);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x44) != 0)) {
    FUN_14883663a(param_1 + 0x38,0);
  }
  FUN_145911512(param_1);
  return;
}



// FUNCTION 14603bb64 FUN_14603bb64 body=21 status=ok
// SIG undefined FUN_14603bb64(void)

undefined8 FUN_14603bb64(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14603bb7a FUN_14603bb7a body=352 status=ok
// SIG undefined FUN_14603bb7a(void)

void FUN_14603bb7a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    lVar7 = param_1[0x22];
    if ((longlong)(int)lVar7 != 0) {
      lVar4 = param_1[0x21];
      lVar8 = 0;
      do {
        lVar6 = FUN_14479d2ce(*(longlong *)(lVar4 + lVar8) + 0xa0);
        if (lVar6 == param_2) {
          if (*(longlong *)(lVar4 + lVar8) != 0) goto LAB_14603bc5c;
          break;
        }
        lVar8 = lVar8 + 0x10;
      } while ((longlong)(int)lVar7 * 0x10 != lVar8);
    }
    (**(code **)(*param_1 + 0x38))(param_1,&local_48);
    lVar7 = local_48 + 0xa8;
    uVar5 = FUN_14479d2ce((longlong)param_1 + 0xac);
    FUN_14485c47a(lVar7,uVar5);
    FUN_14603bd60(local_48,param_2);
    FUN_145822e64(local_48,param_1 + 0x26);
    iVar3 = (int)param_1[0x22];
    *(uint *)(param_1 + 0x22) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0x114) < iVar3 + 1U) {
      FUN_14603bcdc(param_1 + 0x21,iVar3);
    }
    lVar7 = param_1[0x21];
    *(longlong *)(lVar7 + (longlong)iVar3 * 0x10) = local_48;
    *(longlong **)(lVar7 + 8 + (longlong)iVar3 * 0x10) = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
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
    }
  }
LAB_14603bc5c:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14603bcdc FUN_14603bcdc body=132 status=ok
// SIG undefined FUN_14603bcdc(void)

void FUN_14603bcdc(longlong param_1,int param_2)

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



// FUNCTION 14603bd60 FUN_14603bd60 body=493 status=ok
// SIG undefined FUN_14603bd60(void)

void FUN_14603bd60(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14485c47a(param_1 + 0x14);
  (**(code **)(*param_1 + 0x40))(param_1,&local_38);
  plVar3 = plStack_30;
  if (plStack_30 == (longlong *)0x0) {
    param_1[0x12] = local_38;
    plVar6 = (longlong *)param_1[0x13];
    if (plVar6 == (longlong *)0x0) goto LAB_14603bdd7;
    param_1[0x13] = 0;
LAB_14603bea0:
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_14603bdd7;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar5 = *piVar2;
    UNLOCK();
    plVar3 = plVar6;
  }
  else {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
    param_1[0x12] = local_38;
    plVar6 = (longlong *)param_1[0x13];
    if (plStack_30 != plVar6) {
      param_1[0x13] = (longlong)plStack_30;
      if (plVar6 == (longlong *)0x0) goto LAB_14603bdd7;
      goto LAB_14603bea0;
    }
    LOCK();
    plVar6 = plStack_30 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_14603bdd7;
    (**(code **)*plStack_30)(plStack_30);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar5 = *piVar2;
    UNLOCK();
  }
  if (iVar5 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_14603bdd7:
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plStack_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
      }
    }
  }
  plVar3 = (longlong *)param_1[0x12];
  plVar6 = (longlong *)param_1[2];
  if (plVar6 == (longlong *)0x0) {
LAB_14603be74:
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar6[1];
    do {
      if (iVar5 == 0) goto LAB_14603be74;
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    local_38 = param_1[1];
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    plStack_30 = plVar6;
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
  (**(code **)(*plVar3 + 8))(plVar3,param_2,&local_38);
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_30 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603bf4e FUN_14603bf4e body=96 status=ok
// SIG undefined FUN_14603bf4e(void)

void FUN_14603bf4e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  FUN_14485c47a(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *param_3;
  plVar2 = (longlong *)param_3[1];
  plVar3 = *(longlong **)(param_1 + 0x88);
  if (plVar3 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar3 = *(longlong **)(param_1 + 0x88);
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
    *(longlong **)(param_1 + 0x88) = plVar2;
  }
  return;
}



// FUNCTION 14603bfae FUN_14603bfae body=210 status=ok
// SIG undefined FUN_14603bfae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14603bfae(void)

{
  if ((DAT_14cb0e89f & 2) == 0) {
    DAT_14cb0e89f = DAT_14cb0e89f | 2;
    _DAT_14cb0e840 = L"FVectorFieldVisualizationVertexFactoryShaderParameters";
    _DAT_14cb0e858 = FUN_146826540;
    _DAT_14cb0e860 = FUN_146825d77;
    _DAT_14cb0e868 = FUN_146825fd6;
    _DAT_14cb0e870 = FUN_1407e02ea;
    _DAT_14cb0e878 = FUN_146826273;
    _DAT_14cb0e850 = &LAB_147d96c8a;
    _DAT_14cb0e890 = 0xffffffff0000000c;
    _DAT_14cb0e898 = 4;
    DAT_14cb0e89c = 0;
    _DAT_14cb0e880 = &LAB_147d96ca0;
    FUN_14603c0fc();
    FUN_14603c080();
    FUN_1407e00cc(&DAT_14cb0e838);
    return;
  }
  return;
}



// FUNCTION 14603c080 FUN_14603c080 body=123 status=ok
// SIG undefined FUN_14603c080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14603c080(void)

{
  _DAT_14cb0f0b8 = L"BASE";
  DAT_14cb0f0e2 = 4;
  _DAT_14cb0f0c0 = FUN_1412f7d22();
  _DAT_14cb0f0c8 = DAT_14cb0e848;
  _DAT_14cb0f0d0 = &LAB_14682652b;
  DAT_14cb0e848 = &DAT_14cb0f0b8;
  DAT_14cb0e89d = DAT_14cb0e89d + '\x01';
  _DAT_14cb0f0d8 = 0x100000000;
  if (*(char *)(_DAT_14cb0f0c0 + 100) != '\0') {
    DAT_14cb0e89e = DAT_14cb0e89e + '\x01';
  }
  return;
}



// FUNCTION 14603c0fc FUN_14603c0fc body=216 status=ok
// SIG undefined FUN_14603c0fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14603c0fc(void)

{
  _DAT_14cb0ee28 = L"VectorFieldTextureSampler";
  DAT_14cb0ee52 = FUN_140850cc5();
  _DAT_14cb0ee30 = FUN_140fb78d0();
  _DAT_14cb0ee40 = &LAB_14682652b;
  _DAT_14cb0ee48 = &DAT_100000008;
  _DAT_14cb0ee50 = 0;
  _DAT_14cb0ee38 = DAT_14cb0e848;
  DAT_14cb0e848 = &DAT_14cb0ee28;
  _DAT_14cb0edf8 = L"VectorFieldTexture";
  DAT_14cb0ee22 = FUN_140850cc5();
  _DAT_14cb0ee00 = FUN_140fb78d0();
  _DAT_14cb0ee10 = &LAB_14682652b;
  _DAT_14cb0ee18 = &DAT_100000004;
  _DAT_14cb0ee20 = 0;
  _DAT_14cb0ee08 = DAT_14cb0e848;
  DAT_14cb0e848 = &DAT_14cb0edf8;
  return;
}



// FUNCTION 14603c1da FUN_14603c1da body=26 status=ok
// SIG undefined FUN_14603c1da(void)

undefined8 FUN_14603c1da(longlong param_1,undefined8 param_2)

{
  FUN_14603c1f4(param_1 + 0x18);
  return param_2;
}



// FUNCTION 14603c1f4 FUN_14603c1f4 body=385 status=ok
// SIG undefined FUN_14603c1f4(void)

longlong * FUN_14603c1f4(undefined8 param_1,longlong *param_2)

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
  if (((DAT_14cb1ae60 != 0) && (DAT_14cb1ae58 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*DAT_14cb1ae58 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cb1ae58;
    if (DAT_14cb1ae60 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_38);
    plVar4 = local_30;
    lVar3 = local_38;
    goto LAB_14603c257;
  }
  lVar3 = FUN_14001cc68(0x680,0x10);
  FUN_1415d51d6(lVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14ab65370;
  plVar4[2] = lVar3;
  if (lVar3 == 0) {
    lVar3 = 0;
    goto LAB_14603c257;
  }
  if (((*(longlong *)(lVar3 + 0x10) != 0) && (*(longlong *)(lVar3 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar3 + 0x18) + 8))) goto LAB_14603c257;
  if (plVar4 == (longlong *)0x0) {
    *(longlong *)(lVar3 + 0x10) = lVar3;
    plVar5 = *(longlong **)(lVar3 + 0x18);
    if (plVar5 != (longlong *)0x0) {
LAB_14603c30f:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      *(longlong **)(lVar3 + 0x18) = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_14603c323;
    }
    plVar4 = (longlong *)0x0;
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
      if (plVar5 != (longlong *)0x0) goto LAB_14603c30f;
      *(longlong **)(lVar3 + 0x18) = plVar4;
    }
LAB_14603c323:
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
LAB_14603c257:
  *param_2 = lVar3;
  param_2[1] = (longlong)plVar4;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14603c376 FUN_14603c376 body=55 status=ok
// SIG undefined FUN_14603c376(void)

void FUN_14603c376(longlong *param_1)

{
  FUN_14603c3ae(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14603c3ae FUN_14603c3ae body=123 status=ok
// SIG undefined FUN_14603c3ae(void)

void FUN_14603c3ae(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
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



// FUNCTION 14603c42a FUN_14603c42a body=198 status=ok
// SIG undefined FUN_14603c42a(void)

void FUN_14603c42a(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar1 = (int)param_2[1];
  uVar3 = uVar2 + iVar1;
  if (uVar2 < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_14920e406(param_1,uVar3);
    iVar1 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar1)) {
      *(int *)(param_1 + 0x48) = iVar1;
      FUN_14920e5a2(param_1);
    }
    iVar1 = (int)param_2[1];
  }
  if (iVar1 != 0) {
    lVar4 = *param_2;
    lVar5 = (longlong)iVar1 * 0xc;
    do {
      FUN_14920e87e(param_1,local_2c,lVar4);
      lVar4 = lVar4 + 0xc;
      lVar5 = lVar5 + -0xc;
    } while (lVar5 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14603c4fa FUN_14603c4fa body=266 status=ok
// SIG undefined FUN_14603c4fa(void)

undefined8 * FUN_14603c4fa(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14007ca06();
  FUN_144a0768c(param_1,uVar1);
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_14a8d96d0;
  *(undefined2 *)(param_1 + 6) = 0x103;
  FUN_1446ddc76(&local_28,"InputDeviceTriggerResetProperty",1);
  *(undefined8 *)((longlong)param_1 + 0x34) = local_28;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 3;
  *param_1 = &PTR_FUN_14a8da960;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_1446ddc76(&local_28,"InputDeviceTriggerVibration",1);
  param_1[0x15] = local_28;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603c60e FUN_14603c60e body=266 status=ok
// SIG undefined FUN_14603c60e(void)

undefined8 * FUN_14603c60e(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14007ca06();
  FUN_14588cc1a(param_1,uVar1);
  *param_1 = &PTR_FUN_14aeb6bd0;
  FUN_14472eae2(param_1,8);
  *param_1 = &PTR_FUN_14aec8cd0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  FUN_1446f470e(&local_20,L"GizmoCenter",1);
  uVar1 = FUN_140f974a4();
  local_30 = 0;
  local_38 = 1;
  plVar2 = (longlong *)FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((plVar2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar2);
  }
  param_1[0x39] = plVar2;
  *(undefined4 *)(plVar2 + 200) = 0x3f800000;
  FUN_14045627c(plVar2,0,1);
  (**(code **)(*plVar2 + 0x728))(plVar2,DAT_14cad0f30,1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603c71a FUN_14603c71a body=26 status=ok
// SIG undefined FUN_14603c71a(void)

void FUN_14603c71a(undefined8 param_1)

{
  FUN_14603c734();
  FUN_14603c784(param_1);
  return;
}



// FUNCTION 14603c734 FUN_14603c734 body=80 status=ok
// SIG undefined FUN_14603c734(void)

void FUN_14603c734(longlong *param_1,longlong param_2,undefined4 param_3)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  param_1[0xf] = param_2;
  (**(code **)(*param_1 + 0x318))(param_1,param_3);
  FUN_14036c39e(param_1 + 0x27,param_1);
  return;
}



// FUNCTION 14603c784 FUN_14603c784 body=140 status=ok
// SIG undefined FUN_14603c784(void)

void FUN_14603c784(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  code *local_28;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1415c4d66(param_1,param_1 + 0x338);
  FUN_14603cbe0(param_1 + 0x338);
  lVar1 = FUN_14603c812(param_1);
  if (lVar1 != 0) {
    FUN_14603ccb6(lVar1);
    FUN_14603d1b0(lVar1);
  }
  local_20 = &local_29;
  local_28 = FUN_1441e8390;
  FUN_14603c8c8(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603c812 FUN_14603c812 body=105 status=ok
// SIG undefined FUN_14603c812(void)

void FUN_14603c812(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145922f74();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_14603c87c(param_1 + 0x138,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603c87c FUN_14603c87c body=76 status=ok
// SIG undefined FUN_14603c87c(void)

void FUN_14603c87c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145922f74();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14603c8b9;
    }
  }
  lVar2 = 0;
LAB_14603c8b9:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 14603c8c8 FUN_14603c8c8 body=148 status=ok
// SIG undefined FUN_14603c8c8(void)

void FUN_14603c8c8(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = FUN_1411b1284();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  local_40 = *param_2;
  local_28 = &local_40;
  local_38 = param_2[1];
  local_30 = FUN_1441e834c;
  FUN_14603c95e(param_1 + 0x138,&local_30,&local_20);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603c95e FUN_14603c95e body=155 status=ok
// SIG undefined FUN_14603c95e(void)

void FUN_14603c95e(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  local_28 = &local_40;
  local_38 = param_2[1];
  local_30 = FUN_1435693ae;
  lVar2 = *param_3;
  if (lVar2 != 0) {
    lVar1 = FUN_14115fc2e();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_3;
      goto LAB_14603c9a5;
    }
  }
  lVar2 = 0;
LAB_14603c9a5:
  FUN_1406d0e12(param_1,lVar2,&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603c9fa FUN_14603c9fa body=153 status=ok
// SIG undefined FUN_14603c9fa(void)

void FUN_14603c9fa(longlong *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  iVar1 = (int)param_1[0x20];
  if (iVar1 != param_2) {
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    FUN_14603ca94(DAT_14cb0d2b0,param_1,iVar1,param_2);
    *(int *)(param_1 + 0x20) = param_2;
    FUN_14603cb34(param_1 + 0x21,param_2,iVar1);
    cVar2 = (**(code **)(*DAT_14cb0d2b0 + 0x338))();
    if (cVar2 != '\0') {
      plVar4 = (longlong *)FUN_144a81a0a();
      uVar3 = (**(code **)(*plVar4 + 0x98))(plVar4,(int)param_1[0x20]);
                    /* WARNING: Could not recover jumptable at 0x00014603ca90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x310))(param_1,uVar3,*(code **)(*param_1 + 0x310));
      return;
    }
  }
  return;
}



// FUNCTION 14603ca94 FUN_14603ca94 body=160 status=ok
// SIG undefined FUN_14603ca94(void)

void FUN_14603ca94(longlong param_1,longlong *param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (0 < (longlong)*(int *)(param_1 + 0x1150)) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1148) + lVar5 * 8) + 0x2a8);
      if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0x40) != 0)) {
        lVar4 = (longlong)*(int *)(lVar1 + 0x40) * 8;
        lVar3 = 0;
LAB_14603cad3:
        if (*(longlong **)(*(longlong *)(lVar1 + 0x38) + lVar3) != param_2) goto LAB_14603cb29;
        lVar3 = 0;
        do {
          plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x38) + lVar3);
          if ((plVar2 != param_2 && plVar2 != (longlong *)0x0) && ((int)plVar2[0x20] == param_4)) {
                    /* WARNING: Could not recover jumptable at 0x00014603cb26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar2 + 0x318))(plVar2,param_3);
            return;
          }
          lVar3 = lVar3 + 8;
        } while (lVar4 != lVar3);
      }
LAB_14603cafb:
      lVar5 = lVar5 + 1;
    } while (lVar5 != *(int *)(param_1 + 0x1150));
  }
  return;
LAB_14603cb29:
  lVar3 = lVar3 + 8;
  if (lVar4 == lVar3) goto LAB_14603cafb;
  goto LAB_14603cad3;
}



// FUNCTION 14603cb34 FUN_14603cb34 body=171 status=ok
// SIG undefined FUN_14603cb34(void)

void FUN_14603cb34(longlong *param_1,undefined4 param_2,undefined4 param_3)

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
        goto LAB_14603cbc9;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14603cbc9:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14603cbe0 FUN_14603cbe0 body=213 status=ok
// SIG undefined FUN_14603cbe0(void)

void FUN_14603cbe0(int *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_98 [40];
  undefined **local_70;
  undefined8 local_68;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined8 uStack_57;
  longlong local_48;
  ulonglong uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*param_1 != 0) && (*(longlong **)(param_1 + 2) != (longlong *)0x0)) &&
     (lVar1 = (**(code **)(**(longlong **)(param_1 + 2) + 0x180))(), lVar1 != 0)) {
    local_70 = &PTR_FUN_14b4665c8;
    local_68 = 0;
    uStack_60 = 0;
    uStack_5f = 0;
    uStack_58 = 0;
    uStack_57 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    FUN_14603cea2(lVar1,&local_70);
    uVar2 = uStack_40 & 0xffffffff;
    if (uVar2 != 0) {
      lVar1 = 0;
      do {
        FUN_1403ca8ec(param_1,local_48 + lVar1);
        lVar1 = lVar1 + 8;
      } while (uVar2 << 3 != lVar1);
    }
    local_70 = &PTR_FUN_14b4665c8;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14603ccb6 FUN_14603ccb6 body=490 status=ok
// SIG undefined FUN_14603ccb6(void)

void FUN_14603ccb6(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = FUN_140059518(param_1 + 0x30);
  lVar2 = FUN_1404960a8(uVar1);
  if (lVar2 != 0) {
    FUN_1446ddc76(&local_30,"FOakUIEvent_OnExit",1);
    FUN_1401cd85c(lVar2,local_30,param_1 + 0x50);
    FUN_1446ddc76(&local_38,"FOakUIEvent_StartNewGame",1);
    FUN_1401cd85c(lVar2,local_38,param_1 + 0x40);
    FUN_1446ddc76(&local_40,"FOakUIEvent_ContinueGame",1);
    FUN_1401cd85c(lVar2,local_40,param_1 + 0x48);
    FUN_1446ddc76(&local_48,"FOakUIEvent_QuitToMainMenu",1);
    FUN_1401cd85c(lVar2,local_48,param_1 + 0x60);
    FUN_1446ddc76(&local_50,"FOakUIEvent_QuitToTitleScreen",1);
    FUN_1401cd85c(lVar2,local_50,param_1 + 0x58);
    FUN_1446ddc76(&local_58,"FGbxUIEvent_QuitGame",1);
    FUN_1401cd85c(lVar2,local_58,param_1 + 0x68);
    FUN_1446ddc76(&local_60,"FOakUIEvent_LeaveParty",1);
    FUN_1401cd85c(lVar2,local_60,param_1 + 0x70);
    FUN_1446ddc76(&local_68,"FOakUIEvent_OpenTestMap",1);
    FUN_1401cd85c(lVar2,local_68,param_1 + 0x80);
    FUN_1446ddc76(&local_70,"FOakUIEvent_OpenLegalUrl",1);
    FUN_1401cd85c(lVar2,local_70,param_1 + 0x88);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603cea2 FUN_14603cea2 body=780 status=ok
// SIG undefined FUN_14603cea2(void)

void FUN_14603cea2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  undefined2 *puVar15;
  longlong *plVar16;
  uint uVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  int local_a8;
  longlong local_a0;
  int local_98;
  undefined **local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 uStack_78;
  undefined4 uStack_77;
  undefined4 uStack_73;
  undefined7 uStack_6f;
  longlong local_68 [5];
  
  local_68[4] = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar16 = local_68;
  uStack_6f = 0;
  local_90 = &PTR_FUN_14b4665c8;
  local_88 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_73 = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  *(undefined8 *)(param_2 + 0x11) = 0;
  *(undefined8 *)(param_2 + 0x19) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar1 = param_2 + 0x28;
  FUN_1403de7ba(lVar1,plVar16);
  local_90 = &PTR_FUN_14b4665c8;
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  local_90 = &PTR_FUN_14b4665c8;
  local_88 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_73 = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  FUN_1410908dc(param_1,&local_a0,0);
  iVar13 = 0;
  if (*(int *)(param_1 + 0xd0) == 0) {
    puVar15 = &DAT_149dfb77a;
  }
  else {
    puVar15 = *(undefined2 **)(param_1 + 200);
    iVar13 = *(int *)(param_1 + 0xd0) + -1;
  }
  plVar2 = (longlong *)(param_2 + 8);
  FUN_140c540b4(&local_a0,puVar15,iVar13,1);
  lVar14 = FUN_1402735c8();
  if ((longlong)*(int *)(lVar14 + 0x90) != 0) {
    lVar18 = *(longlong *)(lVar14 + 0x88);
    local_b8 = lVar18 + (longlong)*(int *)(lVar14 + 0x90) * 0x48;
    do {
      FUN_1400021e4((undefined4 *)(lVar18 + 8),&local_b0);
      if (local_98 == local_a8) {
        bVar19 = true;
        if (1 < local_98) {
          lVar14 = 0;
          while( true ) {
            uVar3 = *(ushort *)(local_a0 + lVar14);
            uVar12 = (uint)uVar3;
            uVar4 = *(ushort *)(local_b0 + lVar14);
            uVar17 = (uint)uVar4;
            if (uVar3 != uVar4) {
              if ((uVar4 | uVar3) < 0x80) {
                uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                uVar17 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_14603d0b8;
              }
              iVar13 = uVar12 - uVar17;
              goto LAB_14603d11f;
            }
            if (uVar3 == 0) break;
LAB_14603d0b8:
            lVar14 = lVar14 + 2;
          }
          iVar13 = 0;
LAB_14603d11f:
          bVar19 = iVar13 == 0;
        }
      }
      else {
        bVar19 = local_a8 + local_98 == 1;
      }
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
      if (bVar19) {
        if (*(char *)(lVar18 + 0x20) == '\x01') {
          FUN_148eeba6c(&local_90,lVar18);
        }
        else {
          uVar5 = *(undefined4 *)(lVar18 + 8);
          uVar6 = *(undefined4 *)(lVar18 + 0xc);
          uVar7 = *(undefined4 *)(lVar18 + 0x10);
          uVar8 = *(undefined4 *)(lVar18 + 0x14);
          uVar9 = *(undefined4 *)(lVar18 + 0x15);
          uVar10 = *(undefined4 *)(lVar18 + 0x19);
          uVar11 = *(undefined4 *)(lVar18 + 0x1d);
          *(undefined4 *)(param_2 + 0x11) = *(undefined4 *)(lVar18 + 0x11);
          *(undefined4 *)(param_2 + 0x15) = uVar9;
          *(undefined4 *)(param_2 + 0x19) = uVar10;
          *(undefined4 *)(param_2 + 0x1d) = uVar11;
          *(undefined4 *)plVar2 = uVar5;
          *(undefined4 *)(param_2 + 0xc) = uVar6;
          *(undefined4 *)(param_2 + 0x10) = uVar7;
          *(undefined4 *)(param_2 + 0x14) = uVar8;
          FUN_1403de7ba(lVar1,lVar18 + 0x28);
        }
        break;
      }
      lVar18 = lVar18 + 0x48;
    } while (lVar18 != local_b8);
  }
  if (uStack_73._3_1_ == '\x01') {
    if (*plVar2 != 0) {
      FUN_148eeba6c(&local_90,param_2);
    }
    *(uint *)(param_2 + 0x11) = CONCAT13((undefined1)uStack_7c,uStack_80._1_3_);
    *(uint *)(param_2 + 0x15) = CONCAT13(uStack_78,uStack_7c._1_3_);
    *(undefined4 *)(param_2 + 0x19) = uStack_77;
    *(undefined4 *)(param_2 + 0x1d) = uStack_73;
    *(undefined4 *)plVar2 = (undefined4)local_88;
    *(undefined4 *)(param_2 + 0xc) = local_88._4_4_;
    *(undefined4 *)(param_2 + 0x10) = uStack_80;
    *(undefined4 *)(param_2 + 0x14) = uStack_7c;
  }
  else {
    if (*plVar2 != 0) goto LAB_14603cfe9;
    lVar14 = FUN_1402735c8();
    uVar5 = *(undefined4 *)(lVar14 + 0x3c);
    uVar6 = *(undefined4 *)(lVar14 + 0x40);
    uVar7 = *(undefined4 *)(lVar14 + 0x44);
    uVar8 = *(undefined4 *)(lVar14 + 0x41);
    uVar9 = *(undefined4 *)(lVar14 + 0x45);
    uVar10 = *(undefined4 *)(lVar14 + 0x49);
    uVar11 = *(undefined4 *)(lVar14 + 0x4d);
    *(undefined4 *)plVar2 = *(undefined4 *)(lVar14 + 0x38);
    *(undefined4 *)(param_2 + 0xc) = uVar5;
    *(undefined4 *)(param_2 + 0x10) = uVar6;
    *(undefined4 *)(param_2 + 0x14) = uVar7;
    *(undefined4 *)(param_2 + 0x11) = uVar8;
    *(undefined4 *)(param_2 + 0x15) = uVar9;
    *(undefined4 *)(param_2 + 0x19) = uVar10;
    *(undefined4 *)(param_2 + 0x1d) = uVar11;
    plVar16 = (longlong *)(lVar14 + 0x58);
  }
  FUN_1403de7ba(lVar1,plVar16);
LAB_14603cfe9:
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  local_90 = &PTR_FUN_14b4665c8;
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_68[4] ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603d1b0 FUN_14603d1b0 body=2183 status=ok
// SIG undefined FUN_14603d1b0(void)

void FUN_14603d1b0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar3 = FUN_140059518(param_1 + 0x30);
  lVar4 = FUN_1404960a8(uVar3);
  if (lVar4 != 0) {
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_60[2] = lVar5;
    *local_60 = &PTR_FUN_14b9dbec0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,param_1);
    puVar1[4] = FUN_145da4646;
    FUN_1446ddc76(&local_68,"FOakUIEvent_StartNewGame",1);
    FUN_140391af6(lVar4,&local_50,local_68,&local_60);
    *(undefined8 *)(param_1 + 0x40) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_60[2] = lVar5;
    *local_60 = &PTR_FUN_14b9dbec0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,param_1);
    puVar1[4] = FUN_145da41e8;
    FUN_1446ddc76(&local_70,"FOakUIEvent_ContinueGame",1);
    FUN_140391af6(lVar4,&local_50,local_70,&local_60);
    *(undefined8 *)(param_1 + 0x48) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_60[2] = lVar5;
    *local_60 = &PTR_FUN_14b9dbec0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,param_1);
    puVar1[4] = FUN_145da4234;
    FUN_1446ddc76(&local_78,"FOakUIEvent_OnExit",1);
    FUN_140391af6(lVar4,&local_50,local_78,&local_60);
    *(undefined8 *)(param_1 + 0x50) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_60[2] = lVar5;
    *local_60 = &PTR_FUN_14b9dbec0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,param_1);
    puVar1[4] = FUN_148ef8634;
    FUN_1446ddc76(&local_80,"FOakUIEvent_QuitToTitleScreen",1);
    FUN_140391af6(lVar4,&local_50,local_80,&local_60);
    *(undefined8 *)(param_1 + 0x58) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_60[2] = lVar5;
    *local_60 = &PTR_FUN_14b9dbec0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,param_1);
    puVar1[4] = FUN_148ef867e;
    FUN_1446ddc76(&local_88,"FOakUIEvent_QuitToMainMenu",1);
    FUN_140391af6(lVar4,&local_50,local_88,&local_60);
    *(undefined8 *)(param_1 + 0x60) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_60[2] = lVar5;
    *local_60 = &PTR_FUN_14b9dbec0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,param_1);
    puVar1[4] = FUN_148ef86d6;
    FUN_1446ddc76(&local_90,"FGbxUIEvent_QuitGame",1);
    FUN_140391af6(lVar4,&local_50,local_90,&local_60);
    *(undefined8 *)(param_1 + 0x68) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_60[2] = lVar5;
    *local_60 = &PTR_FUN_14b9dbec0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,param_1);
    puVar1[4] = FUN_148ef8724;
    FUN_1446ddc76(&local_98,"FOakUIEvent_LeaveParty",1);
    FUN_140391af6(lVar4,&local_50,local_98,&local_60);
    *(undefined8 *)(param_1 + 0x70) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_60[2] = lVar5;
    *local_60 = &PTR_FUN_14b9dbec0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,param_1);
    puVar1[4] = FUN_146256fd4;
    FUN_1446ddc76(&local_a0,"FOakUIEvent_OpenShiftMenu",1);
    FUN_140391af6(lVar4,&local_50,local_a0,&local_60);
    *(undefined8 *)(param_1 + 0x78) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_60[2] = lVar5;
    *local_60 = &PTR_FUN_14b9dbec0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,param_1);
    puVar1[4] = FUN_148ef8776;
    FUN_1446ddc76(&local_a8,"FOakUIEvent_OpenTestMap",1);
    FUN_140391af6(lVar4,&local_50,local_a8,&local_60);
    *(undefined8 *)(param_1 + 0x80) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_60[2] = lVar5;
    *local_60 = &PTR_FUN_14b9dbec0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,param_1);
    puVar1[4] = FUN_148ef87d2;
    FUN_1446ddc76(&local_b0,"FOakUIEvent_OpenLegalUrl",1);
    FUN_140391af6(lVar4,&local_50,local_b0,&local_60);
    *(undefined8 *)(param_1 + 0x88) = local_50;
    FUN_1449db362(&local_60);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603da38 FUN_14603da38 body=46 status=ok
// SIG undefined FUN_14603da38(void)

void FUN_14603da38(undefined8 param_1)

{
  longlong lVar1;
  
  FUN_14603da66();
  lVar1 = FUN_1403ca102(param_1);
  if (lVar1 != 0) {
    FUN_14603dbc2(lVar1);
    return;
  }
  return;
}



// FUNCTION 14603da66 FUN_14603da66 body=346 status=ok
// SIG undefined FUN_14603da66(void)

void FUN_14603da66(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14603ddca();
  iVar1 = *(int *)(param_1 + 0x658);
  local_48 = param_1;
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x650);
    lVar7 = 0;
    do {
      if (*(longlong *)(lVar4 + lVar7) != 0) {
        FUN_143d54f38(&local_48);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
    lVar4 = *(longlong *)(param_1 + 0x650);
    iVar1 = *(int *)(param_1 + 0x658);
    local_48 = param_1;
    if ((longlong)iVar1 != 0) {
      lVar7 = 0;
      do {
        if (*(longlong *)(lVar4 + lVar7) != 0) {
          FUN_143d5517e(&local_48);
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar1 * 8 != lVar7);
    }
  }
  lVar4 = FUN_1447210f0(param_1);
  if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x238))) {
    lVar7 = 0;
    do {
      uVar5 = FUN_14479d2ce(lVar7 * 8 + *(longlong *)(lVar4 + 0x230));
      iVar1 = *(int *)(param_1 + 0x658);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x650);
        lVar6 = 0;
        do {
          plVar3 = *(longlong **)(lVar2 + lVar6);
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x2c8))(plVar3,uVar5);
          }
          lVar6 = lVar6 + 8;
        } while ((longlong)iVar1 * 8 != lVar6);
      }
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 < *(int *)(lVar4 + 0x238));
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_145727f64(param_1);
  return;
}



// FUNCTION 14603dbc2 FUN_14603dbc2 body=422 status=ok
// SIG undefined FUN_14603dbc2(void)

void FUN_14603dbc2(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined8 unaff_RDI;
  undefined7 uVar13;
  bool bVar14;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar4 = (**(code **)(*param_1 + 0x498))();
  if (5 < bVar4) {
    cVar5 = (**(code **)(*param_1 + 0x498))(param_1);
    uVar7 = (uint)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (cVar5 != '\t') goto LAB_14603dcc5;
  }
  uVar8 = FUN_14119d4d6(param_1);
  if (param_1[6] == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(param_1[6] + 0x360);
  }
  lVar9 = FUN_140334a94(uVar8,uVar11);
  if (lVar9 == 0) {
LAB_14603dd23:
    lVar9 = 0;
  }
  else {
    lVar10 = FUN_144a5dd5e();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
        != lVar10 + 0x30)) goto LAB_14603dd23;
  }
  if (param_1[6] == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_1[6] + 0x360);
  }
  FUN_1410d53f0(&local_30,uVar8);
  uVar13 = (undefined7)((ulonglong)lVar9 >> 8);
  if (local_28 != (longlong *)0x0) {
    iVar6 = (int)local_28[1];
    do {
      if (iVar6 == 0) {
        plVar12 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar14 = iVar6 == iVar3;
      if (bVar14) {
        *(int *)(local_28 + 1) = iVar6 + 1;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      UNLOCK();
      plVar12 = local_28;
    } while (!bVar14);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar12 != (longlong *)0x0) {
      if (local_30 == 0) {
        uVar7 = (uint)CONCAT71(uVar13,1);
      }
      else {
        uVar7 = FUN_14603dd6a(local_30,lVar9);
        uVar7 = uVar7 ^ 1;
      }
      LOCK();
      plVar2 = plVar12 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      goto LAB_14603dcc5;
    }
  }
  uVar7 = (uint)CONCAT71(uVar13,1);
LAB_14603dcc5:
  FUN_14144f736(param_1 + 0x40,&DAT_14cbca3c0,uVar7);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14603dd6a FUN_14603dd6a body=95 status=ok
// SIG undefined FUN_14603dd6a(void)

bool FUN_14603dd6a(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if ((param_2 == 0) || ((longlong)*(int *)(param_1 + 0x238) == 0)) {
    bVar4 = false;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x230);
    lVar2 = (longlong)*(int *)(param_1 + 0x238) * 0x98;
    do {
      cVar1 = FUN_14088ccfe(lVar3 + 0x10,param_2);
      if (cVar1 != '\0') goto LAB_14603dda3;
      lVar3 = lVar3 + 0x98;
      lVar2 = lVar2 + -0x98;
    } while (lVar2 != 0);
    lVar3 = 0;
LAB_14603dda3:
    bVar4 = lVar3 != 0;
  }
  return bVar4;
}



// FUNCTION 14603ddca FUN_14603ddca body=977 status=ok
// SIG undefined FUN_14603ddca(void)

void FUN_14603ddca(longlong *param_1)

{
  void *pvVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  longlong local_b8 [2];
  longlong local_a8 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78;
  ulonglong uStack_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  int local_50;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  (**(code **)(*(longlong *)param_1[0x7d] + 0x710))();
  lVar3 = FUN_1447210f0(param_1);
  if (0 < *(int *)(lVar3 + 0x238)) {
    iVar7 = 0;
    lVar8 = 0;
    do {
      lVar4 = FUN_14479d2ce(*(longlong *)(lVar3 + 0x230) + lVar8);
      if ((lVar4 != 0) &&
         (((*(char *)((longlong)param_1 + 0x471) != '\0' || (*(longlong *)(lVar4 + 0x3d0) == 0)) &&
          (cVar2 = FUN_14603e1e4(param_1,lVar4), cVar2 != '\0')))) {
        (**(code **)(*param_1 + 0x7a0))(param_1,lVar4);
      }
      lVar8 = lVar8 + 8;
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(lVar3 + 0x238));
  }
  uVar5 = FUN_1447210f0(param_1);
  FUN_14051e3d2(uVar5);
  plVar6 = (longlong *)FUN_14093f908(param_1);
  (**(code **)(*plVar6 + 0x680))(plVar6);
  plVar6 = (longlong *)FUN_14093f908(param_1);
  (**(code **)(*plVar6 + 0x688))(plVar6);
  FUN_140056680(&local_58,L"BugLoc");
  local_68 = (void *)0x0;
  local_60 = (int)param_1[0x73];
  lVar3 = (longlong)local_60;
  pvVar1 = (void *)param_1[0x72];
  if (lVar3 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_60,0);
    memcpy(local_68,pvVar1,lVar3 * 2);
  }
  FUN_14126d510(&local_48,&local_68,&local_58);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_78,L"BugRot");
  local_88 = (void *)0x0;
  local_80 = (int)param_1[0x73];
  lVar3 = (longlong)local_80;
  pvVar1 = (void *)param_1[0x72];
  if (lVar3 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_80,0);
    memcpy(local_88,pvVar1,lVar3 * 2);
  }
  FUN_14126d510(&local_58,&local_88,&local_78);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (((1 < local_40) || (1 < local_50)) &&
     (lVar3 = FUN_1447210f0(param_1), 0 < *(int *)(lVar3 + 0x238))) {
    iVar7 = 0;
    lVar8 = 0;
    do {
      lVar4 = FUN_14479d2ce(*(longlong *)(lVar3 + 0x230) + lVar8);
      if ((lVar4 != 0) && (plVar6 = *(longlong **)(lVar4 + 0x4f8), plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 1000))(plVar6,&local_48,&local_58);
      }
      lVar8 = lVar8 + 8;
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(lVar3 + 0x238));
  }
  cVar2 = (**(code **)(*param_1 + 0x7c8))(param_1);
  if ((cVar2 != '\0') && (lVar3 = FUN_14497e828(param_1), lVar3 != 0)) {
    plVar6 = (longlong *)FUN_14497e828(param_1);
    local_98 = 0;
    uStack_90 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uVar5 = FUN_1447210f0(param_1);
    FUN_1410908dc(uVar5,local_a8,0);
    uVar5 = FUN_1447210f0(param_1);
    FUN_1410908dc(uVar5,local_b8,0);
    local_c8 = &local_98;
    (**(code **)(*plVar6 + 0x360))(plVar6,local_b8,local_a8,&local_78);
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_a8[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14603e19c FUN_14603e19c body=71 status=ok
// SIG undefined FUN_14603e19c(void)

bool FUN_14603e19c(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_1447210f0();
  if (lVar3 != 0) {
    uVar4 = FUN_1447210f0(param_1);
    cVar1 = FUN_144a80e00(uVar4);
    if (cVar1 != '\0') {
      return false;
    }
  }
  if (*(char *)(param_1 + 0x470) != '\x01') {
    return false;
  }
  iVar2 = FUN_14487fd02(param_1);
  return iVar2 == 1;
}



// FUNCTION 14603e1e4 FUN_14603e1e4 body=160 status=ok
// SIG undefined FUN_14603e1e4(void)

void FUN_14603e1e4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14477b072(param_1,DAT_14cadaea8);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_30 = 0;
    local_38 = param_2;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014603e24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x658))(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603e292 FUN_14603e292 body=25 status=ok
// SIG undefined FUN_14603e292(void)

undefined8 FUN_14603e292(undefined8 param_1,undefined8 param_2)

{
  FUN_14603e2ac(param_2);
  return param_2;
}



// FUNCTION 14603e2ac FUN_14603e2ac body=387 status=ok
// SIG undefined FUN_14603e2ac(void)

undefined8 * FUN_14603e2ac(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cbd4030 == (longlong *)0x0 || DAT_14cbd4038 == 0) ||
     (cVar3 = (**(code **)(*DAT_14cbd4030 + 0x30))(), cVar3 == '\0')) {
    puVar4 = (undefined8 *)FUN_14001cc68(0x88,0x10);
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &PTR_FUN_14b9a1b20;
    puVar4[0xb] = 0;
    *(undefined4 *)(puVar4 + 0xc) = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    *(undefined8 *)((longlong)puVar4 + 100) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar4 + 0x6c) = 0;
    puVar4[0xf] = 0;
    *(undefined4 *)(puVar4 + 0x10) = 0;
    plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14b9a3480;
    plVar5[2] = (longlong)puVar4;
    local_28 = plVar5;
    if (puVar4 == (undefined8 *)0x0) {
      local_30 = (undefined8 *)0x0;
    }
    else {
      local_30 = puVar4;
      if (plVar5 == (longlong *)0x0) {
        puVar4[2] = puVar4;
        local_28 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        puVar4[2] = puVar4;
        if ((longlong *)puVar4[3] != plVar5) {
          LOCK();
          *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
          UNLOCK();
          plVar2 = (longlong *)puVar4[3];
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))();
            }
          }
          puVar4[3] = plVar5;
        }
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
    }
  }
  else {
    plVar5 = DAT_14cbd4030;
    if (DAT_14cbd4038 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x58))(plVar5,&local_30);
  }
  *param_1 = local_30;
  param_1[1] = local_28;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14603e430 FUN_14603e430 body=1461 status=ok
// SIG undefined FUN_14603e430(void)

void FUN_14603e430(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  void *_Dst;
  undefined1 auStack_428 [32];
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  undefined1 local_238 [4];
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  uint local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_428;
  FUN_144a928e2(local_238,param_3 + 0x40);
  uVar6 = local_20c;
  uVar5 = local_21c;
  uVar4 = local_220;
  uVar3 = local_22c;
  uVar2 = local_230;
  uVar1 = local_234;
  local_234 = local_228;
  local_230 = local_218;
  local_22c = local_208;
  local_228 = uVar1;
  local_220 = local_214;
  local_21c = local_204;
  local_218 = uVar2;
  local_214 = uVar4;
  local_20c = local_200;
  local_208 = uVar3;
  local_204 = uVar5;
  local_200 = uVar6;
  FUN_144a928e2(&local_408,param_3 + 0xc0);
  local_1f8 = local_408;
  local_1f4 = local_3f8;
  local_1f0 = local_3e8;
  local_1ec = local_3d8;
  local_1e8 = uStack_404;
  local_1e4 = uStack_3f4;
  local_1e0 = uStack_3e4;
  local_1dc = uStack_3d4;
  local_1d8 = uStack_400;
  local_1d4 = uStack_3f0;
  local_1d0 = uStack_3e0;
  local_1cc = uStack_3d0;
  local_1c8 = uStack_3fc;
  local_1c4 = uStack_3ec;
  local_1c0 = uStack_3dc;
  local_1bc = uStack_3cc;
  FUN_14603e9e6(&local_408,4);
  FUN_14603ed46(&local_2b8,param_3,&local_408,1);
  local_1b8 = (float)local_2b8;
  local_1a8 = (float)local_2b0;
  local_198 = (float)local_2a8;
  local_188 = (float)local_2a0;
  local_1b4 = (float)local_298;
  local_1a4 = (float)local_290;
  local_194 = (float)local_288;
  local_184 = (float)local_280;
  local_1b0 = (float)local_278;
  local_1a0 = (float)local_270;
  local_190 = (float)local_268;
  local_180 = (float)local_260;
  local_1ac = (float)local_258;
  local_19c = (float)local_250;
  local_18c = (float)local_248;
  local_17c = (float)local_240;
  FUN_144906bb6(&local_1b8,&local_408);
  local_148 = local_3d8;
  uStack_144 = uStack_3d4;
  uStack_140 = uStack_3d0;
  uStack_13c = uStack_3cc;
  local_158 = local_3e8;
  uStack_154 = uStack_3e4;
  uStack_150 = uStack_3e0;
  uStack_14c = uStack_3dc;
  local_168 = local_3f8;
  uStack_164 = uStack_3f4;
  uStack_160 = uStack_3f0;
  uStack_15c = uStack_3ec;
  local_178 = local_408;
  uStack_174 = uStack_404;
  uStack_170 = uStack_400;
  uStack_16c = uStack_3fc;
  FUN_14603e9e6(&local_408,3);
  FUN_14603ed46(&local_2b8,param_3,&local_408,1);
  local_138 = (float)local_2b8;
  local_128 = (float)local_2b0;
  local_118 = (float)local_2a8;
  local_108 = (float)local_2a0;
  local_134 = (float)local_298;
  local_124 = (float)local_290;
  local_114 = (float)local_288;
  local_104 = (float)local_280;
  local_130 = (float)local_278;
  local_120 = (float)local_270;
  local_110 = (float)local_268;
  local_100 = (float)local_260;
  local_12c = (float)local_258;
  local_11c = (float)local_250;
  local_10c = (float)local_248;
  local_fc = (float)local_240;
  bVar7 = FUN_1415c4eb8(param_3);
  local_f8 = (uint)bVar7;
  _Dst = *(void **)(param_1 + 0x20);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)FUN_14001cc68(0x150,0x10);
    *(void **)(param_1 + 0x20) = _Dst;
  }
  memcpy(_Dst,local_238,0x150);
  FUN_1447fd100(param_1,param_2);
  if ((local_e0 ^ (ulonglong)auStack_428) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603e9e6 FUN_14603e9e6 body=150 status=ok
// SIG undefined FUN_14603e9e6(void)

longlong FUN_14603e9e6(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8 [17];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14603ea7e();
  *(bool *)(param_1 + 0x140) = param_2 == '\x01';
  FUN_14603eb60(param_1,local_a8);
  puVar2 = local_a8;
  puVar3 = (undefined8 *)(param_1 + 0x40);
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_14494412e((undefined8 *)(param_1 + 0x40),local_a8);
  puVar2 = local_a8;
  puVar3 = (undefined8 *)(param_1 + 0xc0);
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603ea7e FUN_14603ea7e body=225 status=ok
// SIG undefined FUN_14603ea7e(void)

void FUN_14603ea7e(undefined8 *param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  uVar1 = DAT_14c8463f8;
  param_1[6] = DAT_14c8463f0;
  param_1[7] = uVar1;
  uVar1 = DAT_14c8463f8;
  *param_1 = DAT_14c8463f0;
  param_1[1] = uVar1;
  uVar1 = DAT_14c8463f8;
  param_1[2] = DAT_14c8463f0;
  param_1[3] = uVar1;
  uVar1 = DAT_14c8463f8;
  param_1[4] = DAT_14c8463f0;
  param_1[5] = uVar1;
  if ((byte)(param_2 - 1U) < 0xe) {
    lVar8 = (ulonglong)(byte)(param_2 - 1U) * 8;
    uVar1 = *(undefined8 *)(&DAT_149e003a8 + lVar8);
    uVar2 = *(undefined8 *)(&DAT_149e00418 + lVar8);
    uVar3 = *(undefined8 *)(&DAT_149e00488 + lVar8);
    uVar4 = *(undefined8 *)(&DAT_149e004f8 + lVar8);
    uVar5 = *(undefined8 *)(&DAT_149e00568 + lVar8);
    uVar6 = *(undefined8 *)(&DAT_149e005d8 + lVar8);
    uVar7 = *(undefined8 *)(&DAT_149e00648 + lVar8);
    *param_1 = *(undefined8 *)(&DAT_149e00338 + lVar8);
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    param_1[4] = uVar4;
    param_1[5] = uVar5;
    param_1[6] = uVar6;
    param_1[7] = uVar7;
  }
  return;
}



// FUNCTION 14603eb60 FUN_14603eb60 body=485 status=ok
// SIG undefined FUN_14603eb60(void)

double * FUN_14603eb60(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auStack_118 [32];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  dVar7 = param_1[4];
  dVar1 = param_1[5];
  dVar2 = param_1[2];
  dVar3 = param_1[3];
  dVar4 = *param_1;
  dVar5 = param_1[1];
  *param_2 = dVar4;
  param_2[1] = dVar5;
  param_2[2] = (1.0 - dVar4) - dVar5;
  lVar6 = 0;
  param_2[3] = 0.0;
  param_2[4] = dVar2;
  param_2[5] = dVar3;
  param_2[6] = (1.0 - dVar2) - dVar3;
  param_2[7] = 0.0;
  param_2[8] = dVar7;
  param_2[9] = dVar1;
  param_2[10] = (1.0 - dVar7) - dVar1;
  param_2[0xb] = 0.0;
  param_2[0xc] = 0.0;
  param_2[0xd] = 0.0;
  param_2[0xe] = 0.0;
  param_2[0xf] = 1.0;
  FUN_14494412e(param_2,&local_f8);
  dVar7 = param_1[7];
  dVar1 = ((1.0 - param_1[6]) - dVar7) / dVar7;
  dVar7 = param_1[6] / dVar7;
  do {
    param_2[lVar6] =
         param_2[lVar6] * (local_98 * 0.0 + dVar1 * local_b8 + dVar7 * local_f8 + local_d8);
    param_2[lVar6 + 4] =
         param_2[lVar6 + 4] * (dStack_90 * 0.0 + dVar1 * dStack_b0 + dVar7 * dStack_f0 + dStack_d0);
    param_2[lVar6 + 8] =
         param_2[lVar6 + 8] * (dVar7 * local_e8 + local_c8 + dVar1 * local_a8 + local_88 * 0.0);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 3);
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603ed46 FUN_14603ed46 body=730 status=ok
// SIG undefined FUN_14603ed46(void)

undefined8 * FUN_14603ed46(undefined8 *param_1,longlong param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_288 [32];
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  undefined8 local_238 [16];
  undefined1 local_1b8 [128];
  undefined1 local_138 [136];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  puVar2 = (undefined1 *)(param_2 + 0x40);
  if (param_4 != '\0') {
    dVar6 = *(double *)(param_2 + 0xa0) * 0.0 +
            *(double *)(param_2 + 0x80) * DAT_14c846520 +
            *(double *)(param_2 + 0x60) * DAT_14c846518 +
            *(double *)(param_2 + 0x40) * DAT_14c846510;
    dVar7 = *(double *)(param_2 + 0xa8) * 0.0 +
            *(double *)(param_2 + 0x88) * DAT_14c846520 +
            *(double *)(param_2 + 0x68) * DAT_14c846518 +
            *(double *)(param_2 + 0x48) * DAT_14c846510;
    dVar10 = *(double *)(param_2 + 0x50) * DAT_14c846510 +
             *(double *)(param_2 + 0x70) * DAT_14c846518 +
             *(double *)(param_2 + 0x90) * DAT_14c846520 + *(double *)(param_2 + 0xb0) * 0.0;
    dVar8 = *(double *)(param_3 + 0xa0) * 0.0 +
            DAT_14c846520 * *(double *)(param_3 + 0x80) +
            DAT_14c846518 * *(double *)(param_3 + 0x60) +
            DAT_14c846510 * *(double *)(param_3 + 0x40);
    dVar9 = *(double *)(param_3 + 0xa8) * 0.0 +
            DAT_14c846520 * *(double *)(param_3 + 0x88) +
            DAT_14c846518 * *(double *)(param_3 + 0x68) +
            DAT_14c846510 * *(double *)(param_3 + 0x48);
    dVar5 = DAT_14c846510 * *(double *)(param_3 + 0x50) +
            DAT_14c846518 * *(double *)(param_3 + 0x70) +
            DAT_14c846520 * *(double *)(param_3 + 0x90) + *(double *)(param_3 + 0xb0) * 0.0;
    if (((1e-07 < ABS(dVar6 - dVar8)) || (1e-07 < ABS(dVar7 - dVar9))) ||
       (1e-07 < ABS(dVar10 - dVar5))) {
      local_268 = dVar6;
      local_260 = dVar7;
      local_258 = dVar10;
      local_250 = dVar8;
      local_248 = dVar9;
      local_240 = dVar5;
      FUN_14603f022(local_138);
      FUN_1447fea8d(local_1b8,puVar2,local_138);
      puVar2 = local_1b8;
    }
  }
  FUN_1447fea8d(local_238,puVar2,param_3 + 0xc0);
  puVar3 = local_238;
  puVar4 = param_1;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if ((local_b0 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14603f022 FUN_14603f022 body=856 status=ok
// SIG undefined FUN_14603f022(void)

undefined8 * FUN_14603f022(undefined8 *param_1,double *param_2,double *param_3,char param_4)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_2e8 [32];
  undefined1 local_2c8 [128];
  undefined1 local_248 [128];
  undefined8 local_1c8 [5];
  undefined8 local_1a0;
  double local_178;
  undefined8 local_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 local_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if (param_4 == '\x01') {
    local_f8 = 1.0296;
    dStack_100 = 0.0367;
    local_108 = -0.1614;
    local_118 = -0.0685;
    dStack_120 = 1.7135;
    uVar13 = 0x95e9e1b1;
    uVar14 = 0x3fd10cb2;
    local_138 = 0.0389;
    uVar15 = 0x6e2eb1c4;
    uVar16 = 0xbfe801a3;
    uVar17 = 0xc154c986;
    uVar18 = 0x3feca4a8;
  }
  else {
    if (param_4 != '\x02') {
      puVar4 = &DAT_14c846400;
      for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
        *param_1 = *puVar4;
        puVar4 = puVar4 + 1;
        param_1 = param_1 + 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_2e8);
    }
    local_f8 = 0.9834;
    dStack_100 = 0.0061;
    local_108 = -0.1624;
    local_118 = 0.0136;
    dStack_120 = 1.6975;
    uVar13 = 0xff972474;
    uVar14 = 0x3fdb7e90;
    local_138 = 0.003;
    uVar15 = 0x25aee632;
    uVar16 = 0xbfe683e4;
    uVar17 = 0xfc504817;
    uVar18 = 0x3fe77318;
  }
  local_148 = (double)CONCAT44(uVar18,uVar17);
  dStack_140 = (double)CONCAT44(uVar16,uVar15);
  local_130 = 0;
  local_128 = (double)CONCAT44(uVar14,uVar13);
  local_110 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_d0 = 0x3ff0000000000000;
  dVar9 = param_2[2];
  dVar10 = *param_2;
  dVar1 = param_2[1];
  dVar8 = *param_3;
  dVar7 = param_3[1];
  dVar6 = param_3[2];
  dVar2 = dVar9 * dStack_100 + dVar1 * dStack_120 + dVar10 * dStack_140 + 0.0;
  auVar11._0_8_ = dVar6 * local_108 + dVar7 * local_128 + dVar8 * local_148 + 0.0;
  auVar11._8_8_ = dVar6 * dStack_100 + dVar7 * dStack_120 + dVar8 * dStack_140 + 0.0;
  auVar12._8_4_ = SUB84(dVar2,0);
  auVar12._0_8_ = dVar9 * local_108 + dVar1 * local_128 + dVar10 * local_148 + 0.0;
  auVar12._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar12 = divpd(auVar11,auVar12);
  dVar1 = dVar1 * local_118;
  dVar10 = dVar10 * local_138;
  dVar9 = dVar9 * local_f8;
  dVar8 = local_138 * dVar8;
  dVar7 = local_118 * dVar7;
  dVar6 = local_f8 * dVar6;
  puVar4 = &DAT_14c846400;
  puVar5 = local_1c8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_1c8[0] = auVar12._0_8_;
  local_1a0 = auVar12._8_8_;
  local_150 = 0x3ff0000000000000;
  local_178 = (dVar6 + dVar7 + dVar8 + 0.0) / (dVar9 + dVar10 + dVar1 + 0.0);
  FUN_14494412e(&local_148,local_248);
  FUN_1447fea8d(local_2c8,&local_148,local_1c8);
  FUN_1447fea8d(param_1,local_2c8,local_248);
  if ((local_c0 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603f380 FUN_14603f380 body=85 status=ok
// SIG undefined FUN_14603f380(void)

longlong FUN_14603f380(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1b0);
  *(uint *)(param_1 + 0x1b0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1b4) < iVar1 + 1U) {
    FUN_14603f3d6(param_1 + 0x1a8,iVar1);
  }
  FUN_14603f46a((longlong)iVar1 * 0xc0 + *(longlong *)(param_1 + 0x1a8),param_2);
  return param_1;
}



// FUNCTION 14603f3d6 FUN_14603f3d6 body=147 status=ok
// SIG undefined FUN_14603f3d6(void)

void FUN_14603f3d6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc0)) {
      uVar5 = uVar4 / 0xc0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14603f46a FUN_14603f46a body=319 status=ok
// SIG undefined FUN_14603f46a(void)

void FUN_14603f46a(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *param_2 = 0;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[6] = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)(param_2 + 7) = 0;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar2 = param_2[8];
  uVar3 = param_2[9];
  uVar4 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar4;
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xd] = param_2[0xd];
  param_2[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)(param_2 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  uVar2 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar2;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x12] = param_2[0x12];
  param_2[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)(param_2 + 0x13) = 0;
  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 0x14);
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x15] = param_2[0x15];
  param_2[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)(param_2 + 0x16) = 0;
  cVar1 = *(char *)((longlong)param_2 + 0xbc);
  *(char *)((longlong)param_1 + 0xbc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  }
  return;
}



// FUNCTION 14603f5b4 FUN_14603f5b4 body=539 status=ok
// SIG undefined FUN_14603f5b4(void)

undefined8 * FUN_14603f5b4(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14b385940;
  FUN_144a63cba(param_1 + 0x72);
  *(undefined4 *)(param_1 + 0x16) = 0x14e56504;
  param_1[0x17] = "inv_params";
  FUN_1400b22c2(local_68,"Inventory.Parameters");
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (ulonglong)local_48._4_4_ << 0x20;
  local_40 = 0;
  uStack_38 = 0;
  FUN_1446ddda2(&local_58,&DAT_149e02088,0);
  FUN_1404e49fa(param_1 + 0x72,&local_58);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_14087e99e();
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
    FUN_1400bbfae(&local_58,lVar4);
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
        goto LAB_14603f6fa;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_14603f6fa:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603f7d0 FUN_14603f7d0 body=40 status=ok
// SIG undefined FUN_14603f7d0(void)

undefined8 FUN_14603f7d0(undefined8 param_1,int param_2)

{
  FUN_14603f7f8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14603f7f8 FUN_14603f7f8 body=236 status=ok
// SIG undefined FUN_14603f7f8(void)

void FUN_14603f7f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f26440;
  if ((longlong *)param_1[0x1d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1d] + 0x10))();
  }
  if ((longlong *)param_1[0x1b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1b] + 0x10))();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14603f8e4 FUN_14603f8e4 body=226 status=ok
// SIG undefined FUN_14603f8e4(void)

longlong * FUN_14603f8e4(longlong *param_1)

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
  pcVar13 = FUN_1462d44e6;
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



// FUNCTION 14603f9cc FUN_14603f9cc body=132 status=ok
// SIG undefined FUN_14603f9cc(void)

undefined1 * FUN_14603f9cc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DrawIndirectArgsBufferOut";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x573;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14603f9c8;
}



// FUNCTION 14603fa58 FUN_14603fa58 body=267 status=ok
// SIG undefined FUN_14603fa58(void)

undefined8 * FUN_14603fa58(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined2 local_28;
  undefined1 local_26;
  undefined4 local_24;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14007ca06();
  FUN_1400841f8(param_1);
  param_1[5] = 0;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xf8;
  *param_1 = &PTR_FUN_14adb0500;
  param_1[7] = 0;
  FUN_1414dc74c(param_1 + 8);
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
  *puVar3 = &PTR_FUN_14adbb960;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0x80;
  *(undefined4 *)(puVar3 + 8) = 0xffffffff;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar3) && (param_1[5] = puVar3, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  local_30 = FUN_144a7937e();
  if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_30);
  }
  local_28 = 1;
  local_26 = 0;
  local_24 = 0xffffffff;
  uVar2 = FUN_144830b78(local_1c);
  *(undefined4 *)(param_1 + 9) = uVar2;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603fb6c FUN_14603fb6c body=130 status=ok
// SIG undefined FUN_14603fb6c(void)

undefined8 * FUN_14603fb6c(undefined8 *param_1)

{
  FUN_1410df32e();
  *param_1 = &PTR_FUN_14b1c14b0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x15) = 4;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x16) = 3;
  *(char *)(param_1 + 0x17) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined4 *)(param_1 + 0x18) = 0xff000000;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0x164;
  param_1[0x19] = DAT_14cb80c78;
  return param_1;
}



// FUNCTION 14603fbfa FUN_14603fbfa body=540 status=ok
// SIG undefined FUN_14603fbfa(void)

undefined8 * FUN_14603fbfa(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b1ee890;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined2 *)(param_1 + 0x7e) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x7f));
  *(undefined4 *)(param_1 + 0x16) = 0xdeadbeef;
  param_1[0x17] = "recipe";
  FUN_1400b22c2(local_58,"GbxItem.Recipe");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_14010363a();
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
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
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
        goto LAB_14603fd4b;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_14603fd4b:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603fe18 FUN_14603fe18 body=26 status=ok
// SIG undefined FUN_14603fe18(void)

undefined8 FUN_14603fe18(longlong param_1,undefined8 param_2)

{
  FUN_14603fe32(param_1 + 0x18);
  return param_2;
}



// FUNCTION 14603fe32 FUN_14603fe32 body=525 status=ok
// SIG undefined FUN_14603fe32(void)

undefined8 * FUN_14603fe32(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((DAT_14cbc2040 != (longlong *)0x0 && DAT_14cbc2048 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cbc2040 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cbc2040;
    if (DAT_14cbc2048 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_40);
    goto LAB_14603ff6d;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  *puVar3 = &PTR_FUN_14b95cc10;
  FUN_1409e1656(puVar3 + 4);
  *puVar3 = &PTR_FUN_14b95cba0;
  puVar3[4] = &PTR_FUN_14b95cbc0;
  *(undefined1 *)(puVar3 + 5) = 1;
  puVar3[10] = 0;
  *(undefined4 *)(puVar3 + 0xb) = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 100) = 0;
  puVar3[0xe] = 0;
  *(undefined4 *)(puVar3 + 0xf) = 0;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b95cc30;
  plVar4[2] = (longlong)puVar3;
  local_38 = plVar4;
  if (puVar3 == (undefined8 *)0x0) {
    local_40 = (undefined8 *)0x0;
    goto LAB_14603ff6d;
  }
  local_40 = puVar3;
  if (((puVar3[2] != 0) && (puVar3[3] != 0)) && (0 < *(int *)(puVar3[3] + 8))) goto LAB_14603ff6d;
  if (plVar4 == (longlong *)0x0) {
    puVar3[2] = puVar3;
    plVar5 = (longlong *)puVar3[3];
    if (plVar5 != (longlong *)0x0) {
LAB_14603ffe4:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      puVar3[3] = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_14603ff63;
    }
    local_38 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    puVar3[2] = puVar3;
    if ((longlong *)puVar3[3] != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = (longlong *)puVar3[3];
      if (plVar5 != (longlong *)0x0) goto LAB_14603ffe4;
      puVar3[3] = plVar4;
    }
LAB_14603ff63:
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
LAB_14603ff6d:
  *param_2 = local_40;
  param_2[1] = local_38;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146040040 FUN_146040040 body=41 status=ok
// SIG undefined FUN_146040040(void)

void FUN_146040040(longlong param_1)

{
  param_1 = param_1 + -0x30;
  FUN_14604006a(param_1);
  FUN_146040424(param_1);
  FUN_1460401a6(param_1);
  return;
}



// FUNCTION 14604006a FUN_14604006a body=316 status=ok
// SIG undefined FUN_14604006a(void)

void FUN_14604006a(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = param_1 + 0x48;
  cVar1 = FUN_144729dda(lVar6);
  if (cVar1 == '\0') {
    return;
  }
  uVar4 = FUN_14479d2ce(lVar6);
  iVar2 = FUN_145830e94(uVar4);
  plVar5 = (longlong *)FUN_145940bc4(param_1);
  lVar7 = *plVar5;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x1f0));
  *(int *)(lVar7 + 0x1e8) = *(int *)(lVar7 + 0x1e8) + 1;
  if (iVar2 == *(int *)(lVar7 + 0x88)) {
    iVar3 = 1;
    if (*(int *)(lVar7 + 0x8c) == 0) goto LAB_1460400e7;
  }
  else {
    iVar3 = *(int *)(lVar7 + 0x8c) + 1;
LAB_1460400e7:
    *(int *)(lVar7 + 0x88) = iVar2;
    *(int *)(lVar7 + 0x8c) = iVar3;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x1f0));
  uVar4 = FUN_14479d2ce(lVar6);
  lVar6 = FUN_1400d7050(param_1 + 0x30);
  if (lVar6 == 0) {
LAB_14604013a:
    lVar6 = 0;
  }
  else {
    lVar7 = FUN_144a5dd5e();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        != lVar7 + 0x30)) goto LAB_14604013a;
  }
  iVar2 = FUN_148f0b12e(uVar4,lVar6);
  plVar5 = (longlong *)FUN_145940bc4(param_1);
  lVar6 = *plVar5;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x1f0));
  *(int *)(lVar6 + 0x1e8) = *(int *)(lVar6 + 0x1e8) + 1;
  if (iVar2 == *(int *)(lVar6 + 0x80)) {
    if (*(int *)(lVar6 + 0x84) != 0) goto LAB_146040191;
    iVar3 = 1;
  }
  else {
    iVar3 = *(int *)(lVar6 + 0x84) + 1;
  }
  *(int *)(lVar6 + 0x80) = iVar2;
  *(int *)(lVar6 + 0x84) = iVar3;
LAB_146040191:
                    /* WARNING: Could not recover jumptable at 0x00014604019f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0x1f0));
  return;
}



// FUNCTION 1460401a6 FUN_1460401a6 body=637 status=ok
// SIG undefined FUN_1460401a6(void)

void FUN_1460401a6(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar4 = FUN_144729dda(param_1 + 0x48);
  if (cVar4 == '\0') goto LAB_1460401d8;
  lVar6 = FUN_14479d2ce(param_1 + 0x48);
  lVar6 = *(longlong *)(lVar6 + 10000);
  if (lVar6 == 0) goto LAB_1460401d8;
  plVar7 = (longlong *)FUN_145940bc4(param_1);
  lVar2 = *plVar7;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x1f0));
  *(int *)(lVar2 + 0x1e8) = *(int *)(lVar2 + 0x1e8) + 1;
  *(longlong *)(lVar2 + 0x100) = lVar6;
  if (*(char *)(lVar6 + 0x4bd) == *(char *)(lVar2 + 0xf0)) {
    iVar8 = 1;
    if (*(int *)(lVar2 + 0xf4) == 0) goto LAB_146040260;
  }
  else {
    iVar8 = *(int *)(lVar2 + 0xf4) + 1;
LAB_146040260:
    *(char *)(lVar2 + 0xf0) = *(char *)(lVar6 + 0x4bd);
    *(int *)(lVar2 + 0xf4) = iVar8;
  }
  if (*(char *)(lVar6 + 0x4b8) == *(char *)(lVar2 + 0x98)) {
    iVar8 = 1;
    if (*(int *)(lVar2 + 0x9c) == 0) goto LAB_146040290;
  }
  else {
    iVar8 = *(int *)(lVar2 + 0x9c) + 1;
LAB_146040290:
    *(char *)(lVar2 + 0x98) = *(char *)(lVar6 + 0x4b8);
    *(int *)(lVar2 + 0x9c) = iVar8;
  }
  FUN_1410e88ee(lVar2,lVar6 + 0x458);
  FUN_1410e88ee(lVar2 + 0x18,lVar6 + 0x458);
  plVar7 = (longlong *)(lVar6 + 0x468);
  FUN_148e68282(lVar2 + 0xa0,*(int *)(lVar6 + 0x470) - *(int *)(lVar6 + 0x49c));
  *(int *)(lVar2 + 0xb0) = *(int *)(lVar2 + 0xb0) + 1;
  plVar1 = (longlong *)(lVar6 + 0x478);
  local_98 = 0x100000000;
  local_88 = 0xffffffff;
  uStack_80 = 0;
  uStack_90 = plVar1;
  if (*(int *)(lVar6 + 0x490) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_98);
    iVar8 = *(int *)(lVar6 + 0x490);
  }
  uStack_50 = CONCAT44(uStack_7c,uStack_80);
  local_58 = local_88;
  uVar3 = local_58;
  local_68 = (undefined4)local_98;
  uStack_64 = local_98._4_4_;
  uStack_60 = (undefined4)uStack_90;
  uStack_5c = uStack_90._4_4_;
  local_58._4_4_ = (int)((ulonglong)local_88 >> 0x20);
  local_70 = plVar7;
  if ((local_58._4_4_ != iVar8) || (uStack_90 != plVar1)) {
    iVar5 = local_58._4_4_;
    local_58 = uVar3;
    do {
      lVar6 = *local_70;
      lVar9 = (longlong)iVar5 * 0x20;
      local_98 = *(undefined8 *)(lVar6 + lVar9);
      uStack_90 = *(longlong **)(lVar6 + 8 + lVar9);
      if (uStack_90 != (longlong *)0x0) {
        (**(code **)(*uStack_90 + 8))();
      }
      local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(lVar6 + lVar9 + 0x10));
      FUN_140056680(&uStack_80,L"no-icon");
      FUN_148e5c3d4(lVar2 + 0xa0,&local_98);
      if (CONCAT44(uStack_7c,uStack_80) != 0) {
        FUN_1400020a8();
      }
      if (uStack_90 != (longlong *)0x0) {
        (**(code **)(*uStack_90 + 0x10))();
      }
      local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~uStack_64);
      FUN_1449c0562(&local_68);
      iVar5 = local_58._4_4_;
      uVar3 = local_58;
    } while (local_70 != plVar7 ||
             ((longlong *)CONCAT44(uStack_5c,uStack_60) != plVar1 || local_58._4_4_ != iVar8));
  }
  local_58 = uVar3;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x1f0));
LAB_1460401d8:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146040424 FUN_146040424 body=1074 status=ok
// SIG undefined FUN_146040424(void)

void FUN_146040424(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_508 [32];
  longlong local_4e8;
  longlong *local_4e0;
  longlong local_4d8;
  longlong local_4d0;
  undefined2 *local_4c8;
  undefined8 uStack_4c0;
  longlong local_4b8;
  longlong local_4b0;
  longlong local_4a8 [134];
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_508;
  plVar8 = param_1 + 9;
  cVar2 = FUN_144729dda(plVar8);
  if ((cVar2 != '\0') && (lVar4 = FUN_1400d7050(param_1 + 6), lVar4 != 0)) {
    lVar5 = FUN_144a5dd5e();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      plVar6 = (longlong *)FUN_145940bc4(param_1);
      lVar5 = *plVar6;
      AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x1f0));
      *(int *)(lVar5 + 0x1e8) = *(int *)(lVar5 + 0x1e8) + 1;
      local_4e0 = (longlong *)(lVar5 + 0x38);
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x1f0));
      lVar7 = FUN_14479d2ce(plVar8);
      local_4b0 = 0;
      FUN_14485c47a(&local_4b0,lVar4);
      local_4a8[0] = local_4b0;
      iVar3 = FUN_141303122(lVar7 + 0x2968,(uint)((ulonglong)local_4b0 >> 0x20) ^ (uint)local_4b0);
      if (iVar3 == -1) {
        *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
        iVar3 = *(int *)(lVar5 + 0x44);
        FUN_145d24fc7(*(undefined8 *)(lVar5 + 0x38),*(undefined4 *)(lVar5 + 0x40));
        *(undefined4 *)(lVar5 + 0x40) = 0;
        if ((iVar3 < 0) && (*(int *)(lVar5 + 0x44) != 0)) {
          FUN_148e423f8(local_4e0,0);
        }
      }
      else {
        lVar7 = FUN_14479d2ce(plVar8);
        local_4b8 = 0;
        FUN_14485c47a(&local_4b8,lVar4);
        local_4a8[0] = local_4b8;
        iVar3 = FUN_141303122((longlong *)(lVar7 + 0x2968),
                              (uint)((ulonglong)local_4b8 >> 0x20) ^ (uint)local_4b8);
        if (iVar3 == -1) {
          local_4e8 = 0;
        }
        else {
          local_4e8 = (longlong)iVar3 * 0x20 + *(longlong *)(lVar7 + 0x2968);
        }
        FUN_145d24f8a(local_4e0,*(undefined4 *)(local_4e8 + 0x10));
        *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
        lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
        if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1f0) != 0)) &&
           (local_4d0 = FUN_1400d6ce6(), local_4d0 != 0)) {
          if ((ulonglong)*(uint *)(local_4e8 + 0x10) != 0) {
            local_4d8 = (ulonglong)*(uint *)(local_4e8 + 0x10) * 0xf0;
            lVar4 = 0;
            do {
              *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
              FUN_148e1eab2(local_4a8,*(longlong *)(local_4e8 + 8) + lVar4);
              iVar3 = *(int *)(lVar5 + 0x40);
              *(uint *)(lVar5 + 0x40) = iVar3 + 1U;
              if (*(uint *)(lVar5 + 0x44) < iVar3 + 1U) {
                FUN_148e4246c(local_4e0,iVar3);
              }
              lVar1 = *local_4e0;
              lVar7 = lVar1 + (longlong)iVar3 * 0x448;
              FUN_1413505e4(lVar7,local_4a8);
              puVar10 = (undefined8 *)(lVar1 + (longlong)iVar3 * 0x448);
              *puVar10 = &PTR_FUN_14b8b6620;
              puVar10[0x86] = 0;
              *(undefined4 *)(puVar10 + 0x86) = local_78;
              *(undefined4 *)((longlong)puVar10 + 0x434) = local_74;
              *(undefined1 *)(puVar10 + 0x87) = 0;
              *(undefined4 *)((longlong)puVar10 + 0x43c) = 0;
              *(undefined1 *)(puVar10 + 0x87) = local_70;
              *(undefined4 *)((longlong)puVar10 + 0x43c) = local_6c;
              *(undefined1 *)(puVar10 + 0x88) = 0;
              *(undefined4 *)((longlong)puVar10 + 0x444) = 0;
              *(undefined1 *)(puVar10 + 0x88) = local_68;
              *(undefined4 *)((longlong)puVar10 + 0x444) = local_64;
              FUN_141286efe(local_4a8);
              FUN_1411bce66(local_4d0,local_4a8,puVar10 + 0x3e,&DAT_14cbe4638);
              if (local_4a8[0] != 0) {
                local_4c8 = (undefined2 *)0x0;
                uStack_4c0 = 0;
                FUN_1401031ac(local_4a8[0],0,&local_4c8);
                puVar9 = &DAT_149dfb77a;
                if ((int)uStack_4c0 != 0) {
                  puVar9 = local_4c8;
                }
                FUN_140002266(local_4a8,L"TextureRenderTarget2D\'%s\'",puVar9);
                FUN_140775538(lVar7 + 0x1d8,local_4a8);
                if (local_4a8[0] != 0) {
                  FUN_1400020a8();
                }
                if (local_4c8 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                iVar3 = *(int *)(lVar7 + 0x1d4);
                if (*(char *)(lVar7 + 0x1d0) == '\0') {
                  if (iVar3 != 0) goto LAB_146040827;
                  iVar3 = 0;
                }
                *(undefined1 *)(lVar7 + 0x1d0) = 0;
                *(int *)(lVar7 + 0x1d4) = iVar3 + 1;
              }
LAB_146040827:
              lVar4 = lVar4 + 0xf0;
            } while (local_4d8 != lVar4);
          }
          plVar8 = (longlong *)FUN_145940bc4(param_1);
          lVar4 = *plVar8;
          AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x1f0));
          *(int *)(lVar4 + 0x1e8) = *(int *)(lVar4 + 0x1e8) + 1;
          FUN_148e1ec8a(lVar4);
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x1f0));
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_508) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146040862 FUN_146040862 body=265 status=ok
// SIG undefined FUN_146040862(void)

undefined8 * FUN_146040862(undefined8 *param_1)

{
  FUN_145afd9b0();
  *param_1 = &PTR_FUN_14bd154a0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
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
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2c));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x2c),4000);
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x34) = 1;
  return param_1;
}



// FUNCTION 14604096c FUN_14604096c body=90 status=ok
// SIG undefined FUN_14604096c(void)

void FUN_14604096c(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if ((*(char *)(lVar1 + 0x178) == '\x03') && (*(longlong **)(lVar1 + 0x1b0) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x1b0) + 0x700))();
    if (cVar2 == '\0') {
      uVar3 = FUN_141177592(lVar1,param_1);
      FUN_1460409c6(lVar1,uVar3,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1460409c6 FUN_1460409c6 body=95 status=ok
// SIG undefined FUN_1460409c6(void)

void FUN_1460409c6(longlong *param_1,undefined1 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [4];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20[0] = param_2;
  local_1c = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cb93808);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146040a26 FUN_146040a26 body=210 status=ok
// SIG undefined FUN_146040a26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146040a26(void)

{
  if ((DAT_14ca459ef & 2) == 0) {
    DAT_14ca459ef = DAT_14ca459ef | 2;
    _DAT_14ca45990 = L"FOcclusionQueryVS";
    _DAT_14ca459a8 = FUN_146826540;
    _DAT_14ca459b0 = FUN_146825d77;
    _DAT_14ca459b8 = FUN_146825fd6;
    _DAT_14ca459c0 = FUN_1407e02ea;
    _DAT_14ca459c8 = FUN_146826273;
    _DAT_14ca459a0 = FUN_1472d9dec;
    _DAT_14ca459e0 = 0xffffffff000000f8;
    _DAT_14ca459e8 = 8;
    DAT_14ca459ec = 0;
    _DAT_14ca459d0 = &LAB_1472d9e16;
    FUN_146040b74();
    FUN_146040af8();
    FUN_1407e00cc(&DAT_14ca45988);
    return;
  }
  return;
}



// FUNCTION 146040af8 FUN_146040af8 body=123 status=ok
// SIG undefined FUN_146040af8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146040af8(void)

{
  _DAT_14ca471d0 = L"BASE";
  DAT_14ca471fa = 4;
  _DAT_14ca471d8 = FUN_140b35ae4();
  _DAT_14ca471e0 = DAT_14ca45998;
  _DAT_14ca471e8 = &LAB_14682652b;
  DAT_14ca45998 = &DAT_14ca471d0;
  DAT_14ca459ed = DAT_14ca459ed + '\x01';
  _DAT_14ca471f0 = 0x100000000;
  if (*(char *)(_DAT_14ca471d8 + 100) != '\0') {
    DAT_14ca459ee = DAT_14ca459ee + '\x01';
  }
  return;
}



// FUNCTION 146040b74 FUN_146040b74 body=216 status=ok
// SIG undefined FUN_146040b74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146040b74(void)

{
  _DAT_14ca46ea8 = L"ViewId";
  DAT_14ca46ed2 = FUN_140850cc5();
  _DAT_14ca46eb0 = FUN_140ec6960();
  _DAT_14ca46ec0 = &LAB_14682652b;
  _DAT_14ca46ec8 = 0x1000000f2;
  _DAT_14ca46ed0 = 0;
  _DAT_14ca46eb8 = DAT_14ca45998;
  DAT_14ca45998 = &DAT_14ca46ea8;
  _DAT_14ca46e78 = L"StencilingGeometryParameters";
  DAT_14ca46ea2 = FUN_140850cc5();
  _DAT_14ca46e80 = FUN_145dfa232();
  _DAT_14ca46e90 = &LAB_14682652b;
  _DAT_14ca46e98 = 0x1000000e0;
  _DAT_14ca46ea0 = 0;
  _DAT_14ca46e88 = DAT_14ca45998;
  DAT_14ca45998 = &DAT_14ca46e78;
  return;
}



// FUNCTION 146040c4c FUN_146040c4c body=210 status=ok
// SIG undefined FUN_146040c4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146040c4c(void)

{
  if ((DAT_14cae1ecf & 2) == 0) {
    DAT_14cae1ecf = DAT_14cae1ecf | 2;
    _DAT_14cae1e70 = L"FRadixSortSpineCS";
    _DAT_14cae1e88 = FUN_146826540;
    _DAT_14cae1e90 = FUN_146825d77;
    _DAT_14cae1e98 = FUN_146825fd6;
    _DAT_14cae1ea0 = FUN_1407e02ea;
    _DAT_14cae1ea8 = FUN_146826273;
    _DAT_14cae1e80 = FUN_147addb12;
    _DAT_14cae1ec0 = 0xffffffff000000e8;
    _DAT_14cae1ec8 = 8;
    DAT_14cae1ecc = 0;
    _DAT_14cae1eb0 = &LAB_147addb3c;
    FUN_146040d9a();
    FUN_146040d1e();
    FUN_1407e00cc(&DAT_14cae1e68);
    return;
  }
  return;
}



// FUNCTION 146040d1e FUN_146040d1e body=123 status=ok
// SIG undefined FUN_146040d1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146040d1e(void)

{
  _DAT_14cae3990 = L"BASE";
  DAT_14cae39ba = 4;
  _DAT_14cae3998 = FUN_140b35ae4();
  _DAT_14cae39a0 = DAT_14cae1e78;
  _DAT_14cae39a8 = &LAB_14682652b;
  DAT_14cae1e78 = &DAT_14cae3990;
  DAT_14cae1ecd = DAT_14cae1ecd + '\x01';
  _DAT_14cae39b0 = 0x100000000;
  if (*(char *)(_DAT_14cae3998 + 100) != '\0') {
    DAT_14cae1ece = DAT_14cae1ece + '\x01';
  }
  return;
}



// FUNCTION 146040d9a FUN_146040d9a body=216 status=ok
// SIG undefined FUN_146040d9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146040d9a(void)

{
  _DAT_14cae2400 = L"OutOffsets";
  DAT_14cae242a = FUN_140850cc5();
  _DAT_14cae2408 = FUN_140fb78d0();
  _DAT_14cae2418 = &LAB_14682652b;
  _DAT_14cae2420 = 0x1000000e4;
  _DAT_14cae2428 = 0;
  _DAT_14cae2410 = DAT_14cae1e78;
  DAT_14cae1e78 = &DAT_14cae2400;
  _DAT_14cae23d0 = L"InOffsets";
  DAT_14cae23fa = FUN_140850cc5();
  _DAT_14cae23d8 = FUN_140fb78d0();
  _DAT_14cae23e8 = &LAB_14682652b;
  _DAT_14cae23f0 = 0x1000000e0;
  _DAT_14cae23f8 = 0;
  _DAT_14cae23e0 = DAT_14cae1e78;
  DAT_14cae1e78 = &DAT_14cae23d0;
  return;
}



// FUNCTION 146040e72 FUN_146040e72 body=507 status=ok
// SIG undefined FUN_146040e72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146040e72(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14c9a20b0 = 0;
  FUN_1446ddc76(&DAT_14c9a20b4,"FNexusSerializeTest_GameplayTagDef",1);
  _DAT_14c9a20c0 = 0;
  _DAT_14c9a20c8 = 0;
  _DAT_14c9a20d0 = 0;
  DAT_14c9a20d8 = (void *)0x0;
  _DAT_14c9a20e0 = 0;
  _DAT_14c9a20e8 = FUN_145cec728;
  DAT_14c9a20f0 = *param_1;
  DAT_14c9a2100 = param_1[2];
  param_1[2] = 0;
  DAT_14c9a2110._0_4_ = (undefined4)param_1[4];
  DAT_14c9a2110._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014c9a2118 = (undefined4)param_1[5];
  uRam000000014c9a211c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14c9a2120 = (undefined4)param_1[6];
  uRam000000014c9a2124 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014c9a2128 = (undefined4)param_1[7];
  uRam000000014c9a212c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14c9a20f0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14c9a20c0 = 0;
  _DAT_14c9a20c8 = local_68;
  _DAT_14c9a20d0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14c9a20e0 = CONCAT44(DAT_14c9a20e4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14c9a20e4 == 0) {
    _DAT_14c9a20e0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14c9a20d8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14c9a20d8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14c9a20b0) && ((DAT_14c9a2050 == (int *)0x0 || (*DAT_14c9a2050 < DAT_14c9a20b0)))) {
    DAT_14c9a2050 = &DAT_14c9a20b0;
  }
  FUN_14604106e();
  local_30 = &local_70;
  local_70 = &DAT_14c9a20b0;
  local_38 = &DAT_14c9a20b4;
  FUN_146041106(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14604106e FUN_14604106e body=152 status=ok
// SIG undefined FUN_14604106e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604106e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a20a8) {
    FUN_144b3d300(&DAT_14c9a20a8);
    if (DAT_14c9a20a8 == -1) {
      DAT_14c9a2078 = 0;
      DAT_14c9a2080 = 0;
      DAT_14c9a2058 = 0;
      _DAT_14c9a2060 = 0;
      _DAT_14c9a2084 = 0xffffffff00000080;
      DAT_14c9a208c = 0;
      DAT_14c9a2098 = 0;
      DAT_14c9a20a0 = 0;
      atexit(FUN_142b2af3f);
      _Init_thread_footer(&DAT_14c9a20a8);
      return;
    }
  }
  return;
}



// FUNCTION 146041106 FUN_146041106 body=338 status=ok
// SIG undefined FUN_146041106(void)

undefined4 * FUN_146041106(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460412ec(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_14604125a(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14c9a2060 - DAT_14c9a208c;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14c9a20a0)) {
      uVar10 = DAT_14c9a20a0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14c9a2098;
      if (DAT_14c9a2098 == (undefined *)0x0) {
        puVar7 = &DAT_14c9a2090;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14c9a20a0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14c9a2098;
      if (DAT_14c9a2098 == (undefined *)0x0) {
        puVar7 = &DAT_14c9a2090;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14c9a20a0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14c9a20a0 = iVar9;
      FUN_1460413fa();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14604125a FUN_14604125a body=145 status=ok
// SIG undefined FUN_14604125a(void)

undefined8 FUN_14604125a(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14c9a2060 - DAT_14c9a208c != 1) && (DAT_14c9a2060 != DAT_14c9a208c)) {
    puVar6 = &DAT_14c9a2090;
    if (DAT_14c9a2098 != (undefined *)0x0) {
      puVar6 = DAT_14c9a2098;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14c9a20a0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14c9a2058 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d8ed24(*param_3);
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



// FUNCTION 1460412ec FUN_1460412ec body=270 status=ok
// SIG undefined FUN_1460412ec(void)

int * FUN_1460412ec(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c9a2088;
  iVar3 = DAT_14c9a2060;
  if (DAT_14c9a208c == 0) {
    iVar2 = DAT_14c9a2060 + 1;
    bVar7 = DAT_14c9a2064 == DAT_14c9a2060;
    DAT_14c9a2060 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14c9a2058,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14c9a2068,1);
    puVar4 = DAT_14c9a2078;
    if (DAT_14c9a2078 == (undefined *)0x0) {
      puVar4 = &DAT_14c9a2068;
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
    lVar6 = (longlong)DAT_14c9a2088;
    DAT_14c9a2088 = *(int *)(DAT_14c9a2058 + 4 + lVar6 * 0x18);
    DAT_14c9a208c = DAT_14c9a208c + -1;
    if (DAT_14c9a208c != 0) {
      *(undefined4 *)(DAT_14c9a2058 + (longlong)DAT_14c9a2088 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14c9a2068;
  if (DAT_14c9a2078 != (undefined *)0x0) {
    puVar4 = DAT_14c9a2078;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14c9a2058;
  return param_1;
}



// FUNCTION 1460413fa FUN_1460413fa body=523 status=ok
// SIG undefined FUN_1460413fa(void)

void FUN_1460413fa(void)

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
  if (DAT_14c9a2098 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c9a2098,0,0,4);
  }
  uVar3 = DAT_14c9a20a0;
  uVar2 = local_50;
  if (DAT_14c9a20a0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14c9a2090,0,DAT_14c9a20a0,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14c9a2098;
        if (DAT_14c9a2098 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a2090;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14c9a20a0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c9a2068;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c9a2080 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c9a2058;
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
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14c9a20a0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14c9a2098;
        if (DAT_14c9a2098 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a2090;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14c9a20a0 - 1U & uVar9) * 4);
        puVar6 = DAT_14c9a2098;
        if (DAT_14c9a2098 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a2090;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14c9a20a0 - 1U) * 4) = iVar4;
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



// FUNCTION 146041606 FUN_146041606 body=211 status=ok
// SIG undefined FUN_146041606(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146041606(void)

{
  if ((DAT_14cb05e7f & 2) == 0) {
    DAT_14cb05e7f = DAT_14cb05e7f | 2;
    _DAT_14cb05e20 = L"FSimpleElementVS";
    _DAT_14cb05e38 = FUN_146826540;
    _DAT_14cb05e40 = FUN_146825d77;
    _DAT_14cb05e48 = FUN_146825fd6;
    _DAT_14cb05e50 = FUN_1407e02ea;
    _DAT_14cb05e58 = FUN_146826273;
    _DAT_14cb05e30 = FUN_147d13f04;
    _DAT_14cb05e70 = 0xffffffff000000f0;
    _DAT_14cb05e78 = 8;
    DAT_14cb05e7c = 0;
    _DAT_14cb05e60 = &LAB_147d13f2e;
    FUN_146041756();
    FUN_1460416da();
    FUN_1407e00cc(&DAT_14cb05e18);
  }
  return &DAT_14cb05e18;
}



// FUNCTION 1460416da FUN_1460416da body=123 status=ok
// SIG undefined FUN_1460416da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460416da(void)

{
  _DAT_14cb074f0 = L"BASE";
  DAT_14cb0751a = 4;
  _DAT_14cb074f8 = FUN_140b35ae4();
  _DAT_14cb07500 = DAT_14cb05e28;
  _DAT_14cb07508 = &LAB_14682652b;
  DAT_14cb05e28 = &DAT_14cb074f0;
  DAT_14cb05e7d = DAT_14cb05e7d + '\x01';
  _DAT_14cb07510 = 0x100000000;
  if (*(char *)(_DAT_14cb074f8 + 100) != '\0') {
    DAT_14cb05e7e = DAT_14cb05e7e + '\x01';
  }
  return;
}



// FUNCTION 146041756 FUN_146041756 body=216 status=ok
// SIG undefined FUN_146041756(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146041756(void)

{
  _DAT_14cb07050 = L"TransformPositionHigh";
  DAT_14cb0707a = FUN_140850cc5();
  _DAT_14cb07058 = FUN_140ec6960();
  _DAT_14cb07068 = &LAB_14682652b;
  _DAT_14cb07070 = 0x1000000e6;
  _DAT_14cb07078 = 0;
  _DAT_14cb07060 = DAT_14cb05e28;
  DAT_14cb05e28 = &DAT_14cb07050;
  _DAT_14cb07020 = L"RelativeTransform";
  DAT_14cb0704a = FUN_140850cc5();
  _DAT_14cb07028 = FUN_140ec6960();
  _DAT_14cb07038 = &LAB_14682652b;
  _DAT_14cb07040 = 0x1000000e0;
  _DAT_14cb07048 = 0;
  _DAT_14cb07030 = DAT_14cb05e28;
  DAT_14cb05e28 = &DAT_14cb07020;
  return;
}



// FUNCTION 14604182e FUN_14604182e body=211 status=ok
// SIG undefined FUN_14604182e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14604182e(void)

{
  if ((DAT_14cb0f4d7 & 2) == 0) {
    DAT_14cb0f4d7 = DAT_14cb0f4d7 | 2;
    _DAT_14cb0f478 = L"FWriteToSliceVS";
    _DAT_14cb0f490 = FUN_146826540;
    _DAT_14cb0f498 = FUN_146825d77;
    _DAT_14cb0f4a0 = FUN_146825fd6;
    _DAT_14cb0f4a8 = FUN_1407e02ea;
    _DAT_14cb0f4b0 = FUN_146826273;
    _DAT_14cb0f488 = FUN_147da5370;
    _DAT_14cb0f4c8 = 0xffffffff000000f0;
    _DAT_14cb0f4d0 = 8;
    DAT_14cb0f4d4 = 0;
    _DAT_14cb0f4b8 = &LAB_147da539a;
    FUN_14604197e();
    FUN_146041902();
    FUN_1407e00cc(&DAT_14cb0f470);
  }
  return &DAT_14cb0f470;
}



// FUNCTION 146041902 FUN_146041902 body=123 status=ok
// SIG undefined FUN_146041902(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146041902(void)

{
  _DAT_14cb106e0 = L"BASE";
  DAT_14cb1070a = 4;
  _DAT_14cb106e8 = FUN_140b35ae4();
  _DAT_14cb106f0 = DAT_14cb0f480;
  _DAT_14cb106f8 = &LAB_14682652b;
  DAT_14cb0f480 = &DAT_14cb106e0;
  DAT_14cb0f4d5 = DAT_14cb0f4d5 + '\x01';
  _DAT_14cb10700 = 0x100000000;
  if (*(char *)(_DAT_14cb106e8 + 100) != '\0') {
    DAT_14cb0f4d6 = DAT_14cb0f4d6 + '\x01';
  }
  return;
}



// FUNCTION 14604197e FUN_14604197e body=216 status=ok
// SIG undefined FUN_14604197e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604197e(void)

{
  _DAT_14cb104b0 = L"MinZ";
  DAT_14cb104da = FUN_140850cc5();
  _DAT_14cb104b8 = FUN_140ec6960();
  _DAT_14cb104c8 = &LAB_14682652b;
  _DAT_14cb104d0 = 0x1000000e6;
  _DAT_14cb104d8 = 0;
  _DAT_14cb104c0 = DAT_14cb0f480;
  DAT_14cb0f480 = &DAT_14cb104b0;
  _DAT_14cb10480 = L"UVScaleBias";
  DAT_14cb104aa = FUN_140850cc5();
  _DAT_14cb10488 = FUN_140ec6960();
  _DAT_14cb10498 = &LAB_14682652b;
  _DAT_14cb104a0 = 0x1000000e0;
  _DAT_14cb104a8 = 0;
  _DAT_14cb10490 = DAT_14cb0f480;
  DAT_14cb0f480 = &DAT_14cb10480;
  return;
}



// FUNCTION 146041a56 FUN_146041a56 body=54 status=ok
// SIG undefined FUN_146041a56(void)

void FUN_146041a56(void)

{
  FUN_146041a8c();
  if (DAT_14cb277f0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb277d0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146041a8c FUN_146041a8c body=383 status=ok
// SIG undefined FUN_146041a8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146041a8c(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined4 *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0x100000000;
  local_38 = &DAT_14cb277e0;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (DAT_14cb277f8 != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = &DAT_14cb277d0;
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  if (iStack_2c < (int)local_38[6]) {
    do {
      lVar1 = *local_68;
      lVar2 = (longlong)iStack_4c * 0x70;
      *(undefined4 *)(lVar1 + 0x60 + lVar2) = 0;
      if (*(longlong *)(lVar1 + 0x58 + lVar2) != 0) {
        FUN_1400020a8();
      }
      FUN_1415c5f06(lVar1 + lVar2 + 0x18);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[6]);
  }
  DAT_14cb277d8 = 0;
  if (DAT_14cb277dc != 0) {
    FUN_140875b54(&DAT_14cb277d0,0);
  }
  _DAT_14cb27800 = 0xffffffff;
  DAT_14cb277f8 = 0;
  if (0x80 < DAT_14cb277fc) {
    DAT_14cb277fc = 0x80;
    FUN_1446efbd8(&DAT_14cb277e0,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146041c0c FUN_146041c0c body=221 status=ok
// SIG undefined FUN_146041c0c(void)

void FUN_146041c0c(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_28 = *(longlong *)(param_1 + 0x10);
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e();
    }
    local_20 = 1;
    local_1e = 0;
    local_1c = 0xffffffff;
    FUN_140c6bd52(&local_28,0x17);
    lVar1 = FUN_146041cea();
    local_28 = lVar1;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar1);
    }
    local_20 = 2;
    local_1e = 0;
    local_1c = 0xffffffff;
    FUN_140c6c26c(lVar1,0);
    FUN_140c6bd52(&local_28,0x37);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146041cea FUN_146041cea body=55 status=ok
// SIG undefined FUN_146041cea(void)

void FUN_146041cea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1f1c0 == 0) {
    uVar1 = FUN_145a25cfb();
    DAT_14cc1f1c0 = FUN_140002ddd(FUN_1467419c7,uVar1,L"HoudiniEvent");
  }
  return;
}



// FUNCTION 146041d22 FUN_146041d22 body=171 status=ok
// SIG undefined FUN_146041d22(void)

undefined8 * FUN_146041d22(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_14a90dea0;
  FUN_146041dce(local_50,param_1,FUN_1459b55de);
  FUN_14126834e(&DAT_14cb10aa8,local_58,local_50);
  FUN_1401cb1ee(local_50);
  FUN_146041e98(&DAT_14c9647a0,local_50,param_1,FUN_145b22918);
  FUN_146041f7e(&DAT_14cb10a78,local_50,param_1,FUN_14085e8f8);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146041dce FUN_146041dce body=202 status=ok
// SIG undefined FUN_146041dce(void)

LPCRITICAL_SECTION FUN_146041dce(LPCRITICAL_SECTION param_1,_LIST_ENTRY *param_2,undefined8 param_3)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
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
  *(undefined ***)p_Var1 = &PTR_LAB_14a3cb240;
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Flink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_14a9149d0;
  (p_Var1->ProcessLocksList).Blink = param_2;
  p_Var1->EntryCount = (int)param_3;
  p_Var1->ContentionCount = (int)((ulonglong)param_3 >> 0x20);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 146041e98 FUN_146041e98 body=228 status=ok
// SIG undefined FUN_146041e98(void)

undefined8
FUN_146041e98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_14a1e1a40;
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
  local_40[2] = lVar2;
  *local_40 = &PTR_FUN_14a914a40;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_141211c46(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146041f7e FUN_146041f7e body=228 status=ok
// SIG undefined FUN_146041f7e(void)

undefined8
FUN_146041f7e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_14a1ca6c0;
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
  local_40[2] = lVar2;
  *local_40 = &PTR_FUN_14a914ab0;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_1411df00c(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146042063 FUN_146042063 body=63 status=ok
// SIG undefined FUN_146042063(void)

void FUN_146042063(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1460420a2(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b6b81a0;
  puVar1[0x8f] = 0;
  puVar1[0x90] = 0;
  puVar1[0x91] = 0;
  puVar1[0x92] = 0;
  puVar1[0x93] = 0;
  return;
}



// FUNCTION 1460420a2 FUN_1460420a2 body=769 status=ok
// SIG undefined FUN_1460420a2(void)

undefined8 * FUN_1460420a2(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14b06a760;
  *(undefined2 *)(param_1 + 6) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0x412000003f19999a;
  param_1[0x12] = &PTR_FUN_14b00bdf8;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x104) = 0x404;
  param_1[0x13] = &DAT_14a176f00;
  param_1[0x27] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x28] = 0x3f6666663f666666;
  param_1[0x29] = 0x3f6666663f666666;
  param_1[0x2a] = 0xc1a00000459c4000;
  *(undefined4 *)(param_1 + 0x2b) = 0x42340000;
  param_1[0x2c] = &PTR_FUN_14b00bdf8;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x1d4) = 0x404;
  param_1[0x2d] = &DAT_14a176f00;
  param_1[0x41] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x42] = &PTR_FUN_14b00bdf8;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x284) = 0x404;
  param_1[0x43] = &DAT_14a176f00;
  param_1[0x57] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x42340000;
  param_1[0x59] = &PTR_FUN_14b00bdf8;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x33c) = 0x404;
  param_1[0x5a] = &DAT_14a176f00;
  param_1[0x6e] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6f] = &PTR_FUN_14b00bdf8;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3bc) = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x3ec) = 0x404;
  param_1[0x70] = &DAT_14a176f00;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x88] = 0x42b4000042c80000;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  return param_1;
}



// FUNCTION 1460423ae FUN_1460423ae body=378 status=ok
// SIG undefined FUN_1460423ae(void)

undefined8 * FUN_1460423ae(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  *param_1 = &PTR_FUN_14a673d30;
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
              0x110) < DAT_14caeaaf8) {
    FUN_144b3d300(&DAT_14caeaaf8);
    if (DAT_14caeaaf8 == -1) {
      FUN_1415c5f7a();
      atexit((_func_5014 *)&LAB_14356d5a8);
      _Init_thread_footer(&DAT_14caeaaf8);
    }
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (*(int *)((longlong)param_1 + 0xac) < 0) {
    FUN_147bb3bca(param_1 + 0x14,0);
  }
  FUN_1446f470e(&local_30,&DAT_149dfb77a,1);
  iVar2 = *(int *)(param_1 + 0x15);
  *(uint *)(param_1 + 0x15) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xac) < iVar2 + 1U) {
    FUN_145c36f2c(param_1 + 0x14,iVar2);
  }
  lVar3 = param_1[0x14];
  lVar4 = (longlong)iVar2 * 0x1c;
  *(undefined8 *)(lVar3 + lVar4) = local_30;
  puVar1 = (undefined8 *)(lVar3 + 8 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(lVar3 + 0x18 + lVar4) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14604252a FUN_14604252a body=284 status=ok
// SIG undefined FUN_14604252a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14604252a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cd1a0) {
    FUN_144b3d300(&DAT_14c9cd1a0);
    if (DAT_14c9cd1a0 == -1) {
      FUN_146042646();
      FUN_140db5666(&DAT_14c9cd0f8,0,&DAT_14c9cd090,L"FPostProcessBenchmarkPS0",
                    L"/Engine/Private/GPUBenchmark.usf",L"MainPS",3,1,FUN_14715b900,FUN_14715b8d8,
                    &LAB_14715b8b8,&LAB_14715b8b4,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0);
      _DAT_14c9cd0f8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c192d3);
      _Init_thread_footer(&DAT_14c9cd1a0);
    }
  }
  return &DAT_14c9cd0f8;
}



// FUNCTION 146042646 FUN_146042646 body=210 status=ok
// SIG undefined FUN_146042646(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146042646(void)

{
  if ((DAT_14c9cd0f7 & 2) == 0) {
    DAT_14c9cd0f7 = DAT_14c9cd0f7 | 2;
    _DAT_14c9cd098 = L"FPostProcessBenchmarkPS0";
    _DAT_14c9cd0b0 = FUN_146826540;
    _DAT_14c9cd0b8 = FUN_146825d77;
    _DAT_14c9cd0c0 = FUN_146825fd6;
    _DAT_14c9cd0c8 = FUN_1407e02ea;
    _DAT_14c9cd0d0 = FUN_146826273;
    _DAT_14c9cd0a8 = FUN_14715b886;
    _DAT_14c9cd0e8 = 0xffffffff000000e8;
    _DAT_14c9cd0f0 = 8;
    DAT_14c9cd0f4 = 0;
    _DAT_14c9cd0d8 = &LAB_14715b8b0;
    FUN_146042794();
    FUN_146042718();
    FUN_1407e00cc(&DAT_14c9cd090);
    return;
  }
  return;
}



// FUNCTION 146042718 FUN_146042718 body=123 status=ok
// SIG undefined FUN_146042718(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146042718(void)

{
  _DAT_14c9cf7c0 = L"BASE";
  DAT_14c9cf7ea = 4;
  _DAT_14c9cf7c8 = FUN_140b35ae4();
  _DAT_14c9cf7d0 = DAT_14c9cd0a0;
  _DAT_14c9cf7d8 = &LAB_14682652b;
  DAT_14c9cd0a0 = &DAT_14c9cf7c0;
  DAT_14c9cd0f5 = DAT_14c9cd0f5 + '\x01';
  _DAT_14c9cf7e0 = 0x100000000;
  if (*(char *)(_DAT_14c9cf7c8 + 100) != '\0') {
    DAT_14c9cd0f6 = DAT_14c9cd0f6 + '\x01';
  }
  return;
}



// FUNCTION 146042794 FUN_146042794 body=216 status=ok
// SIG undefined FUN_146042794(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146042794(void)

{
  _DAT_14c9cf790 = L"InputTextureSampler";
  DAT_14c9cf7ba = FUN_140850cc5();
  _DAT_14c9cf798 = FUN_140fb78d0();
  _DAT_14c9cf7a8 = &LAB_14682652b;
  _DAT_14c9cf7b0 = 0x1000000e4;
  _DAT_14c9cf7b8 = 0;
  _DAT_14c9cf7a0 = DAT_14c9cd0a0;
  DAT_14c9cd0a0 = &DAT_14c9cf790;
  _DAT_14c9cf760 = L"InputTexture";
  DAT_14c9cf78a = FUN_140850cc5();
  _DAT_14c9cf768 = FUN_140fb78d0();
  _DAT_14c9cf778 = &LAB_14682652b;
  _DAT_14c9cf780 = 0x1000000e0;
  _DAT_14c9cf788 = 0;
  _DAT_14c9cf770 = DAT_14c9cd0a0;
  DAT_14c9cd0a0 = &DAT_14c9cf760;
  return;
}



// FUNCTION 14604286c FUN_14604286c body=284 status=ok
// SIG undefined FUN_14604286c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14604286c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cd2c8) {
    FUN_144b3d300(&DAT_14c9cd2c8);
    if (DAT_14c9cd2c8 == -1) {
      FUN_146042988();
      FUN_140db5666(&DAT_14c9cd220,0,&DAT_14c9cd1b8,L"FPostProcessBenchmarkPS1",
                    L"/Engine/Private/GPUBenchmark.usf",L"MainPS",3,1,FUN_14715b9ae,FUN_14715b986,
                    &LAB_14715b966,&LAB_14715b962,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0);
      _DAT_14c9cd220 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c192df);
      _Init_thread_footer(&DAT_14c9cd2c8);
    }
  }
  return &DAT_14c9cd220;
}



// FUNCTION 146042988 FUN_146042988 body=210 status=ok
// SIG undefined FUN_146042988(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146042988(void)

{
  if ((DAT_14c9cd21f & 2) == 0) {
    DAT_14c9cd21f = DAT_14c9cd21f | 2;
    _DAT_14c9cd1c0 = L"FPostProcessBenchmarkPS1";
    _DAT_14c9cd1d8 = FUN_146826540;
    _DAT_14c9cd1e0 = FUN_146825d77;
    _DAT_14c9cd1e8 = FUN_146825fd6;
    _DAT_14c9cd1f0 = FUN_1407e02ea;
    _DAT_14c9cd1f8 = FUN_146826273;
    _DAT_14c9cd1d0 = FUN_14715b934;
    _DAT_14c9cd210 = 0xffffffff000000e8;
    _DAT_14c9cd218 = 8;
    DAT_14c9cd21c = 0;
    _DAT_14c9cd200 = &LAB_14715b95e;
    FUN_146042ad6();
    FUN_146042a5a();
    FUN_1407e00cc(&DAT_14c9cd1b8);
    return;
  }
  return;
}



// FUNCTION 146042a5a FUN_146042a5a body=123 status=ok
// SIG undefined FUN_146042a5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146042a5a(void)

{
  _DAT_14c9cf850 = L"BASE";
  DAT_14c9cf87a = 4;
  _DAT_14c9cf858 = FUN_140b35ae4();
  _DAT_14c9cf860 = DAT_14c9cd1c8;
  _DAT_14c9cf868 = &LAB_14682652b;
  DAT_14c9cd1c8 = &DAT_14c9cf850;
  DAT_14c9cd21d = DAT_14c9cd21d + '\x01';
  _DAT_14c9cf870 = 0x100000000;
  if (*(char *)(_DAT_14c9cf858 + 100) != '\0') {
    DAT_14c9cd21e = DAT_14c9cd21e + '\x01';
  }
  return;
}



// FUNCTION 146042ad6 FUN_146042ad6 body=216 status=ok
// SIG undefined FUN_146042ad6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146042ad6(void)

{
  _DAT_14c9cf820 = L"InputTextureSampler";
  DAT_14c9cf84a = FUN_140850cc5();
  _DAT_14c9cf828 = FUN_140fb78d0();
  _DAT_14c9cf838 = &LAB_14682652b;
  _DAT_14c9cf840 = 0x1000000e4;
  _DAT_14c9cf848 = 0;
  _DAT_14c9cf830 = DAT_14c9cd1c8;
  DAT_14c9cd1c8 = &DAT_14c9cf820;
  _DAT_14c9cf7f0 = L"InputTexture";
  DAT_14c9cf81a = FUN_140850cc5();
  _DAT_14c9cf7f8 = FUN_140fb78d0();
  _DAT_14c9cf808 = &LAB_14682652b;
  _DAT_14c9cf810 = 0x1000000e0;
  _DAT_14c9cf818 = 0;
  _DAT_14c9cf800 = DAT_14c9cd1c8;
  DAT_14c9cd1c8 = &DAT_14c9cf7f0;
  return;
}



// FUNCTION 146042bae FUN_146042bae body=284 status=ok
// SIG undefined FUN_146042bae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146042bae(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cd3f0) {
    FUN_144b3d300(&DAT_14c9cd3f0);
    if (DAT_14c9cd3f0 == -1) {
      FUN_146042cca();
      FUN_140db5666(&DAT_14c9cd348,0,&DAT_14c9cd2e0,L"FPostProcessBenchmarkPS2",
                    L"/Engine/Private/GPUBenchmark.usf",L"MainPS",3,1,FUN_14715ba5c,FUN_14715ba34,
                    &LAB_14715ba14,&LAB_14715ba10,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0);
      _DAT_14c9cd348 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c192eb);
      _Init_thread_footer(&DAT_14c9cd3f0);
    }
  }
  return &DAT_14c9cd348;
}



// FUNCTION 146042cca FUN_146042cca body=210 status=ok
// SIG undefined FUN_146042cca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146042cca(void)

{
  if ((DAT_14c9cd347 & 2) == 0) {
    DAT_14c9cd347 = DAT_14c9cd347 | 2;
    _DAT_14c9cd2e8 = L"FPostProcessBenchmarkPS2";
    _DAT_14c9cd300 = FUN_146826540;
    _DAT_14c9cd308 = FUN_146825d77;
    _DAT_14c9cd310 = FUN_146825fd6;
    _DAT_14c9cd318 = FUN_1407e02ea;
    _DAT_14c9cd320 = FUN_146826273;
    _DAT_14c9cd2f8 = FUN_14715b9e2;
    _DAT_14c9cd338 = 0xffffffff000000e8;
    _DAT_14c9cd340 = 8;
    DAT_14c9cd344 = 0;
    _DAT_14c9cd328 = &LAB_14715ba0c;
    FUN_146042e18();
    FUN_146042d9c();
    FUN_1407e00cc(&DAT_14c9cd2e0);
    return;
  }
  return;
}



// FUNCTION 146042d9c FUN_146042d9c body=123 status=ok
// SIG undefined FUN_146042d9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146042d9c(void)

{
  _DAT_14c9cf8e0 = L"BASE";
  DAT_14c9cf90a = 4;
  _DAT_14c9cf8e8 = FUN_140b35ae4();
  _DAT_14c9cf8f0 = DAT_14c9cd2f0;
  _DAT_14c9cf8f8 = &LAB_14682652b;
  DAT_14c9cd2f0 = &DAT_14c9cf8e0;
  DAT_14c9cd345 = DAT_14c9cd345 + '\x01';
  _DAT_14c9cf900 = 0x100000000;
  if (*(char *)(_DAT_14c9cf8e8 + 100) != '\0') {
    DAT_14c9cd346 = DAT_14c9cd346 + '\x01';
  }
  return;
}



// FUNCTION 146042e18 FUN_146042e18 body=216 status=ok
// SIG undefined FUN_146042e18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146042e18(void)

{
  _DAT_14c9cf8b0 = L"InputTextureSampler";
  DAT_14c9cf8da = FUN_140850cc5();
  _DAT_14c9cf8b8 = FUN_140fb78d0();
  _DAT_14c9cf8c8 = &LAB_14682652b;
  _DAT_14c9cf8d0 = 0x1000000e4;
  _DAT_14c9cf8d8 = 0;
  _DAT_14c9cf8c0 = DAT_14c9cd2f0;
  DAT_14c9cd2f0 = &DAT_14c9cf8b0;
  _DAT_14c9cf880 = L"InputTexture";
  DAT_14c9cf8aa = FUN_140850cc5();
  _DAT_14c9cf888 = FUN_140fb78d0();
  _DAT_14c9cf898 = &LAB_14682652b;
  _DAT_14c9cf8a0 = 0x1000000e0;
  _DAT_14c9cf8a8 = 0;
  _DAT_14c9cf890 = DAT_14c9cd2f0;
  DAT_14c9cd2f0 = &DAT_14c9cf880;
  return;
}



// FUNCTION 146042ef0 FUN_146042ef0 body=284 status=ok
// SIG undefined FUN_146042ef0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146042ef0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cd518) {
    FUN_144b3d300(&DAT_14c9cd518);
    if (DAT_14c9cd518 == -1) {
      FUN_14604300c();
      FUN_140db5666(&DAT_14c9cd470,0,&DAT_14c9cd408,L"FPostProcessBenchmarkPS3",
                    L"/Engine/Private/GPUBenchmark.usf",L"MainPS",3,1,FUN_14715bb0a,FUN_14715bae2,
                    &LAB_14715bac2,&LAB_14715babe,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0);
      _DAT_14c9cd470 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c192f7);
      _Init_thread_footer(&DAT_14c9cd518);
    }
  }
  return &DAT_14c9cd470;
}



// FUNCTION 14604300c FUN_14604300c body=210 status=ok
// SIG undefined FUN_14604300c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604300c(void)

{
  if ((DAT_14c9cd46f & 2) == 0) {
    DAT_14c9cd46f = DAT_14c9cd46f | 2;
    _DAT_14c9cd410 = L"FPostProcessBenchmarkPS3";
    _DAT_14c9cd428 = FUN_146826540;
    _DAT_14c9cd430 = FUN_146825d77;
    _DAT_14c9cd438 = FUN_146825fd6;
    _DAT_14c9cd440 = FUN_1407e02ea;
    _DAT_14c9cd448 = FUN_146826273;
    _DAT_14c9cd420 = FUN_14715ba90;
    _DAT_14c9cd460 = 0xffffffff000000e8;
    _DAT_14c9cd468 = 8;
    DAT_14c9cd46c = 0;
    _DAT_14c9cd450 = &LAB_14715baba;
    FUN_14604315a();
    FUN_1460430de();
    FUN_1407e00cc(&DAT_14c9cd408);
    return;
  }
  return;
}



// FUNCTION 1460430de FUN_1460430de body=123 status=ok
// SIG undefined FUN_1460430de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460430de(void)

{
  _DAT_14c9cf970 = L"BASE";
  DAT_14c9cf99a = 4;
  _DAT_14c9cf978 = FUN_140b35ae4();
  _DAT_14c9cf980 = DAT_14c9cd418;
  _DAT_14c9cf988 = &LAB_14682652b;
  DAT_14c9cd418 = &DAT_14c9cf970;
  DAT_14c9cd46d = DAT_14c9cd46d + '\x01';
  _DAT_14c9cf990 = 0x100000000;
  if (*(char *)(_DAT_14c9cf978 + 100) != '\0') {
    DAT_14c9cd46e = DAT_14c9cd46e + '\x01';
  }
  return;
}



// FUNCTION 14604315a FUN_14604315a body=216 status=ok
// SIG undefined FUN_14604315a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604315a(void)

{
  _DAT_14c9cf940 = L"InputTextureSampler";
  DAT_14c9cf96a = FUN_140850cc5();
  _DAT_14c9cf948 = FUN_140fb78d0();
  _DAT_14c9cf958 = &LAB_14682652b;
  _DAT_14c9cf960 = 0x1000000e4;
  _DAT_14c9cf968 = 0;
  _DAT_14c9cf950 = DAT_14c9cd418;
  DAT_14c9cd418 = &DAT_14c9cf940;
  _DAT_14c9cf910 = L"InputTexture";
  DAT_14c9cf93a = FUN_140850cc5();
  _DAT_14c9cf918 = FUN_140fb78d0();
  _DAT_14c9cf928 = &LAB_14682652b;
  _DAT_14c9cf930 = 0x1000000e0;
  _DAT_14c9cf938 = 0;
  _DAT_14c9cf920 = DAT_14c9cd418;
  DAT_14c9cd418 = &DAT_14c9cf910;
  return;
}



// FUNCTION 146043232 FUN_146043232 body=284 status=ok
// SIG undefined FUN_146043232(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146043232(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cd640) {
    FUN_144b3d300(&DAT_14c9cd640);
    if (DAT_14c9cd640 == -1) {
      FUN_14604334e();
      FUN_140db5666(&DAT_14c9cd598,0,&DAT_14c9cd530,L"FPostProcessBenchmarkPS4",
                    L"/Engine/Private/GPUBenchmark.usf",L"MainPS",3,1,FUN_14715bbb8,FUN_14715bb90,
                    &LAB_14715bb70,&LAB_14715bb6c,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0);
      _DAT_14c9cd598 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c19303);
      _Init_thread_footer(&DAT_14c9cd640);
    }
  }
  return &DAT_14c9cd598;
}



// FUNCTION 14604334e FUN_14604334e body=210 status=ok
// SIG undefined FUN_14604334e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604334e(void)

{
  if ((DAT_14c9cd597 & 2) == 0) {
    DAT_14c9cd597 = DAT_14c9cd597 | 2;
    _DAT_14c9cd538 = L"FPostProcessBenchmarkPS4";
    _DAT_14c9cd550 = FUN_146826540;
    _DAT_14c9cd558 = FUN_146825d77;
    _DAT_14c9cd560 = FUN_146825fd6;
    _DAT_14c9cd568 = FUN_1407e02ea;
    _DAT_14c9cd570 = FUN_146826273;
    _DAT_14c9cd548 = FUN_14715bb3e;
    _DAT_14c9cd588 = 0xffffffff000000e8;
    _DAT_14c9cd590 = 8;
    DAT_14c9cd594 = 0;
    _DAT_14c9cd578 = &LAB_14715bb68;
    FUN_14604349c();
    FUN_146043420();
    FUN_1407e00cc(&DAT_14c9cd530);
    return;
  }
  return;
}



// FUNCTION 146043420 FUN_146043420 body=123 status=ok
// SIG undefined FUN_146043420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146043420(void)

{
  _DAT_14c9cfa00 = L"BASE";
  DAT_14c9cfa2a = 4;
  _DAT_14c9cfa08 = FUN_140b35ae4();
  _DAT_14c9cfa10 = DAT_14c9cd540;
  _DAT_14c9cfa18 = &LAB_14682652b;
  DAT_14c9cd540 = &DAT_14c9cfa00;
  DAT_14c9cd595 = DAT_14c9cd595 + '\x01';
  _DAT_14c9cfa20 = 0x100000000;
  if (*(char *)(_DAT_14c9cfa08 + 100) != '\0') {
    DAT_14c9cd596 = DAT_14c9cd596 + '\x01';
  }
  return;
}



// FUNCTION 14604349c FUN_14604349c body=216 status=ok
// SIG undefined FUN_14604349c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604349c(void)

{
  _DAT_14c9cf9d0 = L"InputTextureSampler";
  DAT_14c9cf9fa = FUN_140850cc5();
  _DAT_14c9cf9d8 = FUN_140fb78d0();
  _DAT_14c9cf9e8 = &LAB_14682652b;
  _DAT_14c9cf9f0 = 0x1000000e4;
  _DAT_14c9cf9f8 = 0;
  _DAT_14c9cf9e0 = DAT_14c9cd540;
  DAT_14c9cd540 = &DAT_14c9cf9d0;
  _DAT_14c9cf9a0 = L"InputTexture";
  DAT_14c9cf9ca = FUN_140850cc5();
  _DAT_14c9cf9a8 = FUN_140fb78d0();
  _DAT_14c9cf9b8 = &LAB_14682652b;
  _DAT_14c9cf9c0 = 0x1000000e0;
  _DAT_14c9cf9c8 = 0;
  _DAT_14c9cf9b0 = DAT_14c9cd540;
  DAT_14c9cd540 = &DAT_14c9cf9a0;
  return;
}



// FUNCTION 146043574 FUN_146043574 body=284 status=ok
// SIG undefined FUN_146043574(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146043574(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cd768) {
    FUN_144b3d300(&DAT_14c9cd768);
    if (DAT_14c9cd768 == -1) {
      FUN_146043690();
      FUN_140db5666(&DAT_14c9cd6c0,0,&DAT_14c9cd658,L"FPostProcessBenchmarkPS5",
                    L"/Engine/Private/GPUBenchmark.usf",L"MainPS",3,1,FUN_14715bc66,FUN_14715bc3e,
                    &LAB_14715bc1e,&LAB_14715bc1a,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0);
      _DAT_14c9cd6c0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c1930f);
      _Init_thread_footer(&DAT_14c9cd768);
    }
  }
  return &DAT_14c9cd6c0;
}



// FUNCTION 146043690 FUN_146043690 body=210 status=ok
// SIG undefined FUN_146043690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146043690(void)

{
  if ((DAT_14c9cd6bf & 2) == 0) {
    DAT_14c9cd6bf = DAT_14c9cd6bf | 2;
    _DAT_14c9cd660 = L"FPostProcessBenchmarkPS5";
    _DAT_14c9cd678 = FUN_146826540;
    _DAT_14c9cd680 = FUN_146825d77;
    _DAT_14c9cd688 = FUN_146825fd6;
    _DAT_14c9cd690 = FUN_1407e02ea;
    _DAT_14c9cd698 = FUN_146826273;
    _DAT_14c9cd670 = FUN_14715bbec;
    _DAT_14c9cd6b0 = 0xffffffff000000e8;
    _DAT_14c9cd6b8 = 8;
    DAT_14c9cd6bc = 0;
    _DAT_14c9cd6a0 = &LAB_14715bc16;
    FUN_1460437de();
    FUN_146043762();
    FUN_1407e00cc(&DAT_14c9cd658);
    return;
  }
  return;
}



// FUNCTION 146043762 FUN_146043762 body=123 status=ok
// SIG undefined FUN_146043762(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146043762(void)

{
  _DAT_14c9cfa90 = L"BASE";
  DAT_14c9cfaba = 4;
  _DAT_14c9cfa98 = FUN_140b35ae4();
  _DAT_14c9cfaa0 = DAT_14c9cd668;
  _DAT_14c9cfaa8 = &LAB_14682652b;
  DAT_14c9cd668 = &DAT_14c9cfa90;
  DAT_14c9cd6bd = DAT_14c9cd6bd + '\x01';
  _DAT_14c9cfab0 = 0x100000000;
  if (*(char *)(_DAT_14c9cfa98 + 100) != '\0') {
    DAT_14c9cd6be = DAT_14c9cd6be + '\x01';
  }
  return;
}



// FUNCTION 1460437de FUN_1460437de body=216 status=ok
// SIG undefined FUN_1460437de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460437de(void)

{
  _DAT_14c9cfa60 = L"InputTextureSampler";
  DAT_14c9cfa8a = FUN_140850cc5();
  _DAT_14c9cfa68 = FUN_140fb78d0();
  _DAT_14c9cfa78 = &LAB_14682652b;
  _DAT_14c9cfa80 = 0x1000000e4;
  _DAT_14c9cfa88 = 0;
  _DAT_14c9cfa70 = DAT_14c9cd668;
  DAT_14c9cd668 = &DAT_14c9cfa60;
  _DAT_14c9cfa30 = L"InputTexture";
  DAT_14c9cfa5a = FUN_140850cc5();
  _DAT_14c9cfa38 = FUN_140fb78d0();
  _DAT_14c9cfa48 = &LAB_14682652b;
  _DAT_14c9cfa50 = 0x1000000e0;
  _DAT_14c9cfa58 = 0;
  _DAT_14c9cfa40 = DAT_14c9cd668;
  DAT_14c9cd668 = &DAT_14c9cfa30;
  return;
}



// FUNCTION 1460438b6 FUN_1460438b6 body=210 status=ok
// SIG undefined FUN_1460438b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460438b6(void)

{
  if ((DAT_14c9f870f & 2) == 0) {
    DAT_14c9f870f = DAT_14c9f870f | 2;
    _DAT_14c9f86b0 = L"FLumenCardCS";
    _DAT_14c9f86c8 = FUN_146826540;
    _DAT_14c9f86d0 = FUN_146825d77;
    _DAT_14c9f86d8 = FUN_146825fd6;
    _DAT_14c9f86e0 = FUN_1407e02ea;
    _DAT_14c9f86e8 = FUN_146826273;
    _DAT_14c9f86c0 = FUN_147204842;
    _DAT_14c9f8700 = 0xffffffff00000110;
    _DAT_14c9f8708 = 8;
    DAT_14c9f870c = 0;
    _DAT_14c9f86f0 = &LAB_147204878;
    FUN_146043a04();
    FUN_146043988();
    FUN_1407e00cc(&DAT_14c9f86a8);
    return;
  }
  return;
}



// FUNCTION 146043988 FUN_146043988 body=123 status=ok
// SIG undefined FUN_146043988(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146043988(void)

{
  _DAT_14c9ffaf8 = L"BASE";
  DAT_14c9ffb22 = 4;
  _DAT_14c9ffb00 = FUN_141092e92();
  _DAT_14c9ffb08 = DAT_14c9f86b8;
  _DAT_14c9ffb10 = &LAB_14682652b;
  DAT_14c9f86b8 = &DAT_14c9ffaf8;
  DAT_14c9f870d = DAT_14c9f870d + '\x01';
  _DAT_14c9ffb18 = 0x100000000;
  if (*(char *)(_DAT_14c9ffb00 + 100) != '\0') {
    DAT_14c9f870e = DAT_14c9f870e + '\x01';
  }
  return;
}



// FUNCTION 146043a04 FUN_146043a04 body=216 status=ok
// SIG undefined FUN_146043a04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146043a04(void)

{
  _DAT_14c9fd868 = L"LumenCardOutputsParam";
  DAT_14c9fd892 = FUN_140850cc5();
  _DAT_14c9fd870 = FUN_14106a12a();
  _DAT_14c9fd880 = &LAB_14682652b;
  _DAT_14c9fd888 = 0x10000010e;
  _DAT_14c9fd890 = 0;
  _DAT_14c9fd878 = DAT_14c9f86b8;
  DAT_14c9f86b8 = &DAT_14c9fd868;
  _DAT_14c9fd838 = L"PassDataParam";
  DAT_14c9fd862 = FUN_140850cc5();
  _DAT_14c9fd840 = FUN_140ec6960();
  _DAT_14c9fd850 = &LAB_14682652b;
  _DAT_14c9fd858 = &DAT_100000108;
  _DAT_14c9fd860 = 0;
  _DAT_14c9fd848 = DAT_14c9f86b8;
  DAT_14c9f86b8 = &DAT_14c9fd838;
  return;
}



// FUNCTION 146043adc FUN_146043adc body=284 status=ok
// SIG undefined FUN_146043adc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146043adc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb039f8) {
    FUN_144b3d300(&DAT_14cb039f8);
    if (DAT_14cb039f8 == -1) {
      FUN_146043bf8();
      FUN_140db5666(&DAT_14cb03950,0,&DAT_14cb038e8,L"FScreenPSInvertAlpha",
                    L"/Engine/Private/ScreenPixelShader.usf",L"MainInvertAlpha",3,1,FUN_147cf12d8,
                    FUN_147cf12b0,&LAB_147cf12ac,&LAB_147cf12a8,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0
                   );
      _DAT_14cb03950 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1436a4ebd);
      _Init_thread_footer(&DAT_14cb039f8);
    }
  }
  return &DAT_14cb03950;
}



// FUNCTION 146043bf8 FUN_146043bf8 body=210 status=ok
// SIG undefined FUN_146043bf8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146043bf8(void)

{
  if ((DAT_14cb0394f & 2) == 0) {
    DAT_14cb0394f = DAT_14cb0394f | 2;
    _DAT_14cb038f0 = L"FScreenPSInvertAlpha";
    _DAT_14cb03908 = FUN_146826540;
    _DAT_14cb03910 = FUN_146825d77;
    _DAT_14cb03918 = FUN_146825fd6;
    _DAT_14cb03920 = FUN_1407e02ea;
    _DAT_14cb03928 = FUN_146826273;
    _DAT_14cb03900 = FUN_147cf127a;
    _DAT_14cb03940 = 0xffffffff000000e8;
    _DAT_14cb03948 = 8;
    DAT_14cb0394c = 0;
    _DAT_14cb03930 = &LAB_147cf12a4;
    FUN_146043d46();
    FUN_146043cca();
    FUN_1407e00cc(&DAT_14cb038e8);
    return;
  }
  return;
}



// FUNCTION 146043cca FUN_146043cca body=123 status=ok
// SIG undefined FUN_146043cca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146043cca(void)

{
  _DAT_14cb05238 = L"BASE";
  DAT_14cb05262 = 4;
  _DAT_14cb05240 = FUN_140b35ae4();
  _DAT_14cb05248 = DAT_14cb038f8;
  _DAT_14cb05250 = &LAB_14682652b;
  DAT_14cb038f8 = &DAT_14cb05238;
  DAT_14cb0394d = DAT_14cb0394d + '\x01';
  _DAT_14cb05258 = 0x100000000;
  if (*(char *)(_DAT_14cb05240 + 100) != '\0') {
    DAT_14cb0394e = DAT_14cb0394e + '\x01';
  }
  return;
}



// FUNCTION 146043d46 FUN_146043d46 body=216 status=ok
// SIG undefined FUN_146043d46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146043d46(void)

{
  _DAT_14cb04f98 = L"InTextureSampler";
  DAT_14cb04fc2 = FUN_140850cc5();
  _DAT_14cb04fa0 = FUN_140fb78d0();
  _DAT_14cb04fb0 = &LAB_14682652b;
  _DAT_14cb04fb8 = 0x1000000e4;
  _DAT_14cb04fc0 = 0;
  _DAT_14cb04fa8 = DAT_14cb038f8;
  DAT_14cb038f8 = &DAT_14cb04f98;
  _DAT_14cb04f68 = L"InTexture";
  DAT_14cb04f92 = FUN_140850cc5();
  _DAT_14cb04f70 = FUN_140fb78d0();
  _DAT_14cb04f80 = &LAB_14682652b;
  _DAT_14cb04f88 = 0x1000000e0;
  _DAT_14cb04f90 = 0;
  _DAT_14cb04f78 = DAT_14cb038f8;
  DAT_14cb038f8 = &DAT_14cb04f68;
  return;
}



// FUNCTION 146043e1e FUN_146043e1e body=284 status=ok
// SIG undefined FUN_146043e1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146043e1e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb03b20) {
    FUN_144b3d300(&DAT_14cb03b20);
    if (DAT_14cb03b20 == -1) {
      FUN_146043f3a();
      FUN_140db5666(&DAT_14cb03a78,0,&DAT_14cb03a10,L"FScreenPSsRGBSource",
                    L"/Engine/Private/ScreenPixelShader.usf",L"MainsRGBSource",3,1,FUN_147cf136a,
                    FUN_147cf1342,&LAB_147cf133e,&LAB_147cf133a,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0
                   );
      _DAT_14cb03a78 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1436a4ec9);
      _Init_thread_footer(&DAT_14cb03b20);
    }
  }
  return &DAT_14cb03a78;
}



// FUNCTION 146043f3a FUN_146043f3a body=210 status=ok
// SIG undefined FUN_146043f3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146043f3a(void)

{
  if ((DAT_14cb03a77 & 2) == 0) {
    DAT_14cb03a77 = DAT_14cb03a77 | 2;
    _DAT_14cb03a18 = L"FScreenPSsRGBSource";
    _DAT_14cb03a30 = FUN_146826540;
    _DAT_14cb03a38 = FUN_146825d77;
    _DAT_14cb03a40 = FUN_146825fd6;
    _DAT_14cb03a48 = FUN_1407e02ea;
    _DAT_14cb03a50 = FUN_146826273;
    _DAT_14cb03a28 = FUN_147cf130c;
    _DAT_14cb03a68 = 0xffffffff000000e8;
    _DAT_14cb03a70 = 8;
    DAT_14cb03a74 = 0;
    _DAT_14cb03a58 = &LAB_147cf1336;
    FUN_146044088();
    FUN_14604400c();
    FUN_1407e00cc(&DAT_14cb03a10);
    return;
  }
  return;
}



// FUNCTION 14604400c FUN_14604400c body=123 status=ok
// SIG undefined FUN_14604400c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604400c(void)

{
  _DAT_14cb05268 = L"BASE";
  DAT_14cb05292 = 4;
  _DAT_14cb05270 = FUN_140b35ae4();
  _DAT_14cb05278 = DAT_14cb03a20;
  _DAT_14cb05280 = &LAB_14682652b;
  DAT_14cb03a20 = &DAT_14cb05268;
  DAT_14cb03a75 = DAT_14cb03a75 + '\x01';
  _DAT_14cb05288 = 0x100000000;
  if (*(char *)(_DAT_14cb05270 + 100) != '\0') {
    DAT_14cb03a76 = DAT_14cb03a76 + '\x01';
  }
  return;
}



// FUNCTION 146044088 FUN_146044088 body=216 status=ok
// SIG undefined FUN_146044088(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146044088(void)

{
  _DAT_14cb04ff8 = L"InTextureSampler";
  DAT_14cb05022 = FUN_140850cc5();
  _DAT_14cb05000 = FUN_140fb78d0();
  _DAT_14cb05010 = &LAB_14682652b;
  _DAT_14cb05018 = 0x1000000e4;
  _DAT_14cb05020 = 0;
  _DAT_14cb05008 = DAT_14cb03a20;
  DAT_14cb03a20 = &DAT_14cb04ff8;
  _DAT_14cb04fc8 = L"InTexture";
  DAT_14cb04ff2 = FUN_140850cc5();
  _DAT_14cb04fd0 = FUN_140fb78d0();
  _DAT_14cb04fe0 = &LAB_14682652b;
  _DAT_14cb04fe8 = 0x1000000e0;
  _DAT_14cb04ff0 = 0;
  _DAT_14cb04fd8 = DAT_14cb03a20;
  DAT_14cb03a20 = &DAT_14cb04fc8;
  return;
}



// FUNCTION 146044160 FUN_146044160 body=284 status=ok
// SIG undefined FUN_146044160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146044160(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb03fc0) {
    FUN_144b3d300(&DAT_14cb03fc0);
    if (DAT_14cb03fc0 == -1) {
      FUN_14604427c();
      FUN_140db5666(&DAT_14cb03f18,0,&DAT_14cb03eb0,L"FScreenPS_OSE",
                    L"/Engine/Private/ScreenPixelShaderOES.usf",L"Main",3,1,FUN_147cf15a6,
                    FUN_147cf157e,&LAB_147cf157a,&LAB_147cf1576,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0
                   );
      _DAT_14cb03f18 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1436a4ef9);
      _Init_thread_footer(&DAT_14cb03fc0);
    }
  }
  return &DAT_14cb03f18;
}



// FUNCTION 14604427c FUN_14604427c body=210 status=ok
// SIG undefined FUN_14604427c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604427c(void)

{
  if ((DAT_14cb03f17 & 2) == 0) {
    DAT_14cb03f17 = DAT_14cb03f17 | 2;
    _DAT_14cb03eb8 = L"FScreenPS_OSE";
    _DAT_14cb03ed0 = FUN_146826540;
    _DAT_14cb03ed8 = FUN_146825d77;
    _DAT_14cb03ee0 = FUN_146825fd6;
    _DAT_14cb03ee8 = FUN_1407e02ea;
    _DAT_14cb03ef0 = FUN_146826273;
    _DAT_14cb03ec8 = FUN_147cf1548;
    _DAT_14cb03f08 = 0xffffffff000000e8;
    _DAT_14cb03f10 = 8;
    DAT_14cb03f14 = 0;
    _DAT_14cb03ef8 = &LAB_147cf1572;
    FUN_1460443ca();
    FUN_14604434e();
    FUN_1407e00cc(&DAT_14cb03eb0);
    return;
  }
  return;
}



// FUNCTION 14604434e FUN_14604434e body=123 status=ok
// SIG undefined FUN_14604434e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604434e(void)

{
  _DAT_14cb05328 = L"BASE";
  DAT_14cb05352 = 4;
  _DAT_14cb05330 = FUN_140b35ae4();
  _DAT_14cb05338 = DAT_14cb03ec0;
  _DAT_14cb05340 = &LAB_14682652b;
  DAT_14cb03ec0 = &DAT_14cb05328;
  DAT_14cb03f15 = DAT_14cb03f15 + '\x01';
  _DAT_14cb05348 = 0x100000000;
  if (*(char *)(_DAT_14cb05330 + 100) != '\0') {
    DAT_14cb03f16 = DAT_14cb03f16 + '\x01';
  }
  return;
}



// FUNCTION 1460443ca FUN_1460443ca body=216 status=ok
// SIG undefined FUN_1460443ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460443ca(void)

{
  _DAT_14cb05178 = L"InTextureSampler";
  DAT_14cb051a2 = FUN_140850cc5();
  _DAT_14cb05180 = FUN_140fb78d0();
  _DAT_14cb05190 = &LAB_14682652b;
  _DAT_14cb05198 = 0x1000000e4;
  _DAT_14cb051a0 = 0;
  _DAT_14cb05188 = DAT_14cb03ec0;
  DAT_14cb03ec0 = &DAT_14cb05178;
  _DAT_14cb05148 = L"InTexture";
  DAT_14cb05172 = FUN_140850cc5();
  _DAT_14cb05150 = FUN_140fb78d0();
  _DAT_14cb05160 = &LAB_14682652b;
  _DAT_14cb05168 = 0x1000000e0;
  _DAT_14cb05170 = 0;
  _DAT_14cb05158 = DAT_14cb03ec0;
  DAT_14cb03ec0 = &DAT_14cb05148;
  return;
}



// FUNCTION 1460444a2 FUN_1460444a2 body=284 status=ok
// SIG undefined FUN_1460444a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460444a2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0da20) {
    FUN_144b3d300(&DAT_14cb0da20);
    if (DAT_14cb0da20 == -1) {
      FUN_1460445be();
      FUN_140db5666(&DAT_14cb0d978,0,&DAT_14cb0d910,L"TCopyDataCS<2>",
                    L"/Engine/Private/UpdateTextureShaders.usf",L"CopyData2CS",5,1,FUN_147d8a4f8,
                    FUN_147d8a4d0,&LAB_147d8a4b8,&LAB_147d8a4b4,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0
                   );
      _DAT_14cb0d978 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14376c9c4);
      _Init_thread_footer(&DAT_14cb0da20);
    }
  }
  return &DAT_14cb0d978;
}



// FUNCTION 1460445be FUN_1460445be body=210 status=ok
// SIG undefined FUN_1460445be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460445be(void)

{
  if ((DAT_14cb0d977 & 2) == 0) {
    DAT_14cb0d977 = DAT_14cb0d977 | 2;
    _DAT_14cb0d918 = L"TCopyDataCS<2>";
    _DAT_14cb0d930 = FUN_146826540;
    _DAT_14cb0d938 = FUN_146825d77;
    _DAT_14cb0d940 = FUN_146825fd6;
    _DAT_14cb0d948 = FUN_1407e02ea;
    _DAT_14cb0d950 = FUN_146826273;
    _DAT_14cb0d928 = FUN_147d8a486;
    _DAT_14cb0d968 = 0xffffffff000000e8;
    _DAT_14cb0d970 = 8;
    DAT_14cb0d974 = 0;
    _DAT_14cb0d958 = &LAB_147d8a4b0;
    FUN_14604470c();
    FUN_146044690();
    FUN_1407e00cc(&DAT_14cb0d910);
    return;
  }
  return;
}



// FUNCTION 146044690 FUN_146044690 body=123 status=ok
// SIG undefined FUN_146044690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146044690(void)

{
  _DAT_14cb0efa8 = L"BASE";
  DAT_14cb0efd2 = 4;
  _DAT_14cb0efb0 = FUN_140b35ae4();
  _DAT_14cb0efb8 = DAT_14cb0d920;
  _DAT_14cb0efc0 = &LAB_14682652b;
  DAT_14cb0d920 = &DAT_14cb0efa8;
  DAT_14cb0d975 = DAT_14cb0d975 + '\x01';
  _DAT_14cb0efc8 = 0x100000000;
  if (*(char *)(_DAT_14cb0efb0 + 100) != '\0') {
    DAT_14cb0d976 = DAT_14cb0d976 + '\x01';
  }
  return;
}



// FUNCTION 14604470c FUN_14604470c body=216 status=ok
// SIG undefined FUN_14604470c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604470c(void)

{
  _DAT_14cb0ef78 = L"DestBuffer";
  DAT_14cb0efa2 = FUN_140850cc5();
  _DAT_14cb0ef80 = FUN_140fb78d0();
  _DAT_14cb0ef90 = &LAB_14682652b;
  _DAT_14cb0ef98 = 0x1000000e4;
  _DAT_14cb0efa0 = 0;
  _DAT_14cb0ef88 = DAT_14cb0d920;
  DAT_14cb0d920 = &DAT_14cb0ef78;
  _DAT_14cb0ef48 = L"SrcBuffer";
  DAT_14cb0ef72 = FUN_140850cc5();
  _DAT_14cb0ef50 = FUN_140fb78d0();
  _DAT_14cb0ef60 = &LAB_14682652b;
  _DAT_14cb0ef68 = 0x1000000e0;
  _DAT_14cb0ef70 = 0;
  _DAT_14cb0ef58 = DAT_14cb0d920;
  DAT_14cb0d920 = &DAT_14cb0ef48;
  return;
}



// FUNCTION 1460447e4 FUN_1460447e4 body=284 status=ok
// SIG undefined FUN_1460447e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460447e4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0db48) {
    FUN_144b3d300(&DAT_14cb0db48);
    if (DAT_14cb0db48 == -1) {
      FUN_146044900();
      FUN_140db5666(&DAT_14cb0daa0,0,&DAT_14cb0da38,L"TCopyDataCS<1>",
                    L"/Engine/Private/UpdateTextureShaders.usf",L"CopyData1CS",5,1,FUN_147d8a59e,
                    FUN_147d8a576,&LAB_147d8a55e,&LAB_147d8a55a,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0
                   );
      _DAT_14cb0daa0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14376c9d0);
      _Init_thread_footer(&DAT_14cb0db48);
    }
  }
  return &DAT_14cb0daa0;
}



// FUNCTION 146044900 FUN_146044900 body=210 status=ok
// SIG undefined FUN_146044900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146044900(void)

{
  if ((DAT_14cb0da9f & 2) == 0) {
    DAT_14cb0da9f = DAT_14cb0da9f | 2;
    _DAT_14cb0da40 = L"TCopyDataCS<1>";
    _DAT_14cb0da58 = FUN_146826540;
    _DAT_14cb0da60 = FUN_146825d77;
    _DAT_14cb0da68 = FUN_146825fd6;
    _DAT_14cb0da70 = FUN_1407e02ea;
    _DAT_14cb0da78 = FUN_146826273;
    _DAT_14cb0da50 = FUN_147d8a52c;
    _DAT_14cb0da90 = 0xffffffff000000e8;
    _DAT_14cb0da98 = 8;
    DAT_14cb0da9c = 0;
    _DAT_14cb0da80 = &LAB_147d8a556;
    FUN_146044a4e();
    FUN_1460449d2();
    FUN_1407e00cc(&DAT_14cb0da38);
    return;
  }
  return;
}



// FUNCTION 1460449d2 FUN_1460449d2 body=123 status=ok
// SIG undefined FUN_1460449d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460449d2(void)

{
  _DAT_14cb0f038 = L"BASE";
  DAT_14cb0f062 = 4;
  _DAT_14cb0f040 = FUN_140b35ae4();
  _DAT_14cb0f048 = DAT_14cb0da48;
  _DAT_14cb0f050 = &LAB_14682652b;
  DAT_14cb0da48 = &DAT_14cb0f038;
  DAT_14cb0da9d = DAT_14cb0da9d + '\x01';
  _DAT_14cb0f058 = 0x100000000;
  if (*(char *)(_DAT_14cb0f040 + 100) != '\0') {
    DAT_14cb0da9e = DAT_14cb0da9e + '\x01';
  }
  return;
}



// FUNCTION 146044a4e FUN_146044a4e body=216 status=ok
// SIG undefined FUN_146044a4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146044a4e(void)

{
  _DAT_14cb0f008 = L"DestBuffer";
  DAT_14cb0f032 = FUN_140850cc5();
  _DAT_14cb0f010 = FUN_140fb78d0();
  _DAT_14cb0f020 = &LAB_14682652b;
  _DAT_14cb0f028 = 0x1000000e4;
  _DAT_14cb0f030 = 0;
  _DAT_14cb0f018 = DAT_14cb0da48;
  DAT_14cb0da48 = &DAT_14cb0f008;
  _DAT_14cb0efd8 = L"SrcBuffer";
  DAT_14cb0f002 = FUN_140850cc5();
  _DAT_14cb0efe0 = FUN_140fb78d0();
  _DAT_14cb0eff0 = &LAB_14682652b;
  _DAT_14cb0eff8 = 0x1000000e0;
  _DAT_14cb0f000 = 0;
  _DAT_14cb0efe8 = DAT_14cb0da48;
  DAT_14cb0da48 = &DAT_14cb0efd8;
  return;
}



// FUNCTION 146044b26 FUN_146044b26 body=175 status=ok
// SIG undefined FUN_146044b26(void)

void FUN_146044b26(LPCRITICAL_SECTION param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  bool bVar8;
  ulonglong uVar9;
  
  EnterCriticalSection(param_1);
  iVar2 = *(int *)((longlong)&param_1[1].OwningThread + 4);
  *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2 + 1;
  uVar6 = (ulonglong)param_1[1].LockCount;
  if ((longlong)uVar6 < 1) {
    *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2;
  }
  else {
    bVar8 = false;
    do {
      lVar7 = uVar6 * 0x10 + -8;
      uVar9 = uVar6;
      while ((*(int *)((longlong)&(param_1[1].DebugInfo)->Type + lVar7) != 0 &&
             (plVar3 = *(longlong **)((longlong)param_1[1].DebugInfo + lVar7 + -8),
             plVar3 != (longlong *)0x0))) {
        cVar5 = (**(code **)(*plVar3 + 0x60))();
        if (cVar5 == '\0') break;
        lVar7 = lVar7 + -0x10;
        bVar4 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar4) {
          piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
          *piVar1 = *piVar1 + -1;
          if (!bVar8) goto LAB_146044b92;
          goto LAB_146044bbf;
        }
      }
      uVar6 = uVar9 - 1;
      bVar8 = true;
    } while (1 < uVar9);
    piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
    *piVar1 = *piVar1 + -1;
LAB_146044bbf:
    FUN_14109be94(param_1,0);
  }
LAB_146044b92:
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146044ba3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 146044bd6 FUN_146044bd6 body=284 status=ok
// SIG undefined FUN_146044bd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146044bd6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9dda48) {
    FUN_144b3d300(&DAT_14c9dda48);
    if (DAT_14c9dda48 == -1) {
      FUN_146044cf2();
      FUN_140db5666(&DAT_14c9dd9a0,0,&DAT_14c9dd938,L"FHdrCustomResolveFMask2xPS",
                    L"/Engine/Private/HdrCustomResolveShaders.usf",L"HdrCustomResolveFMaskPS",3,1,
                    FUN_14719929c,FUN_147199274,&LAB_147199270,&LAB_14719926c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe8,0);
      _DAT_14c9dd9a0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c8ce04);
      _Init_thread_footer(&DAT_14c9dda48);
    }
  }
  return &DAT_14c9dd9a0;
}



// FUNCTION 146044cf2 FUN_146044cf2 body=211 status=ok
// SIG undefined FUN_146044cf2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146044cf2(void)

{
  if ((DAT_14c9dd99f & 2) == 0) {
    DAT_14c9dd99f = DAT_14c9dd99f | 2;
    _DAT_14c9dd940 = L"FHdrCustomResolveFMask2xPS";
    _DAT_14c9dd958 = FUN_146826540;
    _DAT_14c9dd960 = FUN_146825d77;
    _DAT_14c9dd968 = FUN_146825fd6;
    _DAT_14c9dd970 = FUN_1407e02ea;
    _DAT_14c9dd978 = FUN_146826273;
    _DAT_14c9dd950 = FUN_14719923e;
    _DAT_14c9dd990 = 0xffffffff000000e8;
    _DAT_14c9dd998 = 8;
    DAT_14c9dd99c = 0;
    _DAT_14c9dd980 = &LAB_147199268;
    FUN_146044e42();
    FUN_146044dc6();
    FUN_1407e00cc(&DAT_14c9dd938);
  }
  return &DAT_14c9dd938;
}



// FUNCTION 146044dc6 FUN_146044dc6 body=123 status=ok
// SIG undefined FUN_146044dc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146044dc6(void)

{
  _DAT_14c9e1750 = L"BASE";
  DAT_14c9e177a = 4;
  _DAT_14c9e1758 = FUN_140b35ae4();
  _DAT_14c9e1760 = DAT_14c9dd948;
  _DAT_14c9e1768 = &LAB_14682652b;
  DAT_14c9dd948 = &DAT_14c9e1750;
  DAT_14c9dd99d = DAT_14c9dd99d + '\x01';
  _DAT_14c9e1770 = 0x100000000;
  if (*(char *)(_DAT_14c9e1758 + 100) != '\0') {
    DAT_14c9dd99e = DAT_14c9dd99e + '\x01';
  }
  return;
}



// FUNCTION 146044e42 FUN_146044e42 body=216 status=ok
// SIG undefined FUN_146044e42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146044e42(void)

{
  _DAT_14c9e0598 = L"FMaskTex";
  DAT_14c9e05c2 = FUN_140850cc5();
  _DAT_14c9e05a0 = FUN_140fb78d0();
  _DAT_14c9e05b0 = &LAB_14682652b;
  _DAT_14c9e05b8 = 0x1000000e4;
  _DAT_14c9e05c0 = 0;
  _DAT_14c9e05a8 = DAT_14c9dd948;
  DAT_14c9dd948 = &DAT_14c9e0598;
  _DAT_14c9e0568 = &DAT_14a235a78;
  DAT_14c9e0592 = FUN_140850cc5();
  _DAT_14c9e0570 = FUN_140fb78d0();
  _DAT_14c9e0580 = &LAB_14682652b;
  _DAT_14c9e0588 = 0x1000000e0;
  _DAT_14c9e0590 = 0;
  _DAT_14c9e0578 = DAT_14c9dd948;
  DAT_14c9dd948 = &DAT_14c9e0568;
  return;
}



// FUNCTION 146044f1a FUN_146044f1a body=284 status=ok
// SIG undefined FUN_146044f1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146044f1a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ddb70) {
    FUN_144b3d300(&DAT_14c9ddb70);
    if (DAT_14c9ddb70 == -1) {
      FUN_146045036();
      FUN_140db5666(&DAT_14c9ddac8,0,&DAT_14c9dda60,L"FHdrCustomResolveFMask4xPS",
                    L"/Engine/Private/HdrCustomResolveShaders.usf",L"HdrCustomResolveFMaskPS",3,1,
                    FUN_14719932e,FUN_147199306,&LAB_147199302,&LAB_1471992fe,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe8,0);
      _DAT_14c9ddac8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c8ce10);
      _Init_thread_footer(&DAT_14c9ddb70);
    }
  }
  return &DAT_14c9ddac8;
}



// FUNCTION 146045036 FUN_146045036 body=211 status=ok
// SIG undefined FUN_146045036(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146045036(void)

{
  if ((DAT_14c9ddac7 & 2) == 0) {
    DAT_14c9ddac7 = DAT_14c9ddac7 | 2;
    _DAT_14c9dda68 = L"FHdrCustomResolveFMask4xPS";
    _DAT_14c9dda80 = FUN_146826540;
    _DAT_14c9dda88 = FUN_146825d77;
    _DAT_14c9dda90 = FUN_146825fd6;
    _DAT_14c9dda98 = FUN_1407e02ea;
    _DAT_14c9ddaa0 = FUN_146826273;
    _DAT_14c9dda78 = FUN_1471992d0;
    _DAT_14c9ddab8 = 0xffffffff000000e8;
    _DAT_14c9ddac0 = 8;
    DAT_14c9ddac4 = 0;
    _DAT_14c9ddaa8 = &LAB_1471992fa;
    FUN_146045186();
    FUN_14604510a();
    FUN_1407e00cc(&DAT_14c9dda60);
  }
  return &DAT_14c9dda60;
}



// FUNCTION 14604510a FUN_14604510a body=123 status=ok
// SIG undefined FUN_14604510a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604510a(void)

{
  _DAT_14c9e1780 = L"BASE";
  DAT_14c9e17aa = 4;
  _DAT_14c9e1788 = FUN_140b35ae4();
  _DAT_14c9e1790 = DAT_14c9dda70;
  _DAT_14c9e1798 = &LAB_14682652b;
  DAT_14c9dda70 = &DAT_14c9e1780;
  DAT_14c9ddac5 = DAT_14c9ddac5 + '\x01';
  _DAT_14c9e17a0 = 0x100000000;
  if (*(char *)(_DAT_14c9e1788 + 100) != '\0') {
    DAT_14c9ddac6 = DAT_14c9ddac6 + '\x01';
  }
  return;
}



// FUNCTION 146045186 FUN_146045186 body=216 status=ok
// SIG undefined FUN_146045186(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146045186(void)

{
  _DAT_14c9e05f8 = L"FMaskTex";
  DAT_14c9e0622 = FUN_140850cc5();
  _DAT_14c9e0600 = FUN_140fb78d0();
  _DAT_14c9e0610 = &LAB_14682652b;
  _DAT_14c9e0618 = 0x1000000e4;
  _DAT_14c9e0620 = 0;
  _DAT_14c9e0608 = DAT_14c9dda70;
  DAT_14c9dda70 = &DAT_14c9e05f8;
  _DAT_14c9e05c8 = &DAT_14a235a78;
  DAT_14c9e05f2 = FUN_140850cc5();
  _DAT_14c9e05d0 = FUN_140fb78d0();
  _DAT_14c9e05e0 = &LAB_14682652b;
  _DAT_14c9e05e8 = 0x1000000e0;
  _DAT_14c9e05f0 = 0;
  _DAT_14c9e05d8 = DAT_14c9dda70;
  DAT_14c9dda70 = &DAT_14c9e05c8;
  return;
}



// FUNCTION 14604525e FUN_14604525e body=284 status=ok
// SIG undefined FUN_14604525e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14604525e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ddc98) {
    FUN_144b3d300(&DAT_14c9ddc98);
    if (DAT_14c9ddc98 == -1) {
      FUN_14604537a();
      FUN_140db5666(&DAT_14c9ddbf0,0,&DAT_14c9ddb88,L"FHdrCustomResolveFMask8xPS",
                    L"/Engine/Private/HdrCustomResolveShaders.usf",L"HdrCustomResolveFMaskPS",3,1,
                    FUN_1471993c0,FUN_147199398,&LAB_147199394,&LAB_147199390,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe8,0);
      _DAT_14c9ddbf0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c8ce1c);
      _Init_thread_footer(&DAT_14c9ddc98);
    }
  }
  return &DAT_14c9ddbf0;
}



// FUNCTION 14604537a FUN_14604537a body=211 status=ok
// SIG undefined FUN_14604537a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14604537a(void)

{
  if ((DAT_14c9ddbef & 2) == 0) {
    DAT_14c9ddbef = DAT_14c9ddbef | 2;
    _DAT_14c9ddb90 = L"FHdrCustomResolveFMask8xPS";
    _DAT_14c9ddba8 = FUN_146826540;
    _DAT_14c9ddbb0 = FUN_146825d77;
    _DAT_14c9ddbb8 = FUN_146825fd6;
    _DAT_14c9ddbc0 = FUN_1407e02ea;
    _DAT_14c9ddbc8 = FUN_146826273;
    _DAT_14c9ddba0 = FUN_147199362;
    _DAT_14c9ddbe0 = 0xffffffff000000e8;
    _DAT_14c9ddbe8 = 8;
    DAT_14c9ddbec = 0;
    _DAT_14c9ddbd0 = &LAB_14719938c;
    FUN_1460454ca();
    FUN_14604544e();
    FUN_1407e00cc(&DAT_14c9ddb88);
  }
  return &DAT_14c9ddb88;
}



// FUNCTION 14604544e FUN_14604544e body=123 status=ok
// SIG undefined FUN_14604544e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604544e(void)

{
  _DAT_14c9e17b0 = L"BASE";
  DAT_14c9e17da = 4;
  _DAT_14c9e17b8 = FUN_140b35ae4();
  _DAT_14c9e17c0 = DAT_14c9ddb98;
  _DAT_14c9e17c8 = &LAB_14682652b;
  DAT_14c9ddb98 = &DAT_14c9e17b0;
  DAT_14c9ddbed = DAT_14c9ddbed + '\x01';
  _DAT_14c9e17d0 = 0x100000000;
  if (*(char *)(_DAT_14c9e17b8 + 100) != '\0') {
    DAT_14c9ddbee = DAT_14c9ddbee + '\x01';
  }
  return;
}



// FUNCTION 1460454ca FUN_1460454ca body=216 status=ok
// SIG undefined FUN_1460454ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460454ca(void)

{
  _DAT_14c9e0658 = L"FMaskTex";
  DAT_14c9e0682 = FUN_140850cc5();
  _DAT_14c9e0660 = FUN_140fb78d0();
  _DAT_14c9e0670 = &LAB_14682652b;
  _DAT_14c9e0678 = 0x1000000e4;
  _DAT_14c9e0680 = 0;
  _DAT_14c9e0668 = DAT_14c9ddb98;
  DAT_14c9ddb98 = &DAT_14c9e0658;
  _DAT_14c9e0628 = &DAT_14a235a78;
  DAT_14c9e0652 = FUN_140850cc5();
  _DAT_14c9e0630 = FUN_140fb78d0();
  _DAT_14c9e0640 = &LAB_14682652b;
  _DAT_14c9e0648 = 0x1000000e0;
  _DAT_14c9e0650 = 0;
  _DAT_14c9e0638 = DAT_14c9ddb98;
  DAT_14c9ddb98 = &DAT_14c9e0628;
  return;
}



// FUNCTION 1460455a2 FUN_1460455a2 body=284 status=ok
// SIG undefined FUN_1460455a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460455a2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca97d10) {
    FUN_144b3d300(&DAT_14ca97d10);
    if (DAT_14ca97d10 == -1) {
      FUN_1460456be();
      FUN_140db5666(&DAT_14ca97c68,0,&DAT_14ca97c00,L"FResolveSingleSamplePS",
                    L"/Engine/Private/ResolvePixelShader.usf",L"MainSingleSample",3,1,FUN_147431c9e,
                    FUN_147431c76,&LAB_147431c58,&LAB_147431c54,&LAB_14712ac0c,&LAB_14712ac08,0xf0,0
                   );
      _DAT_14ca97c68 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143226e6b);
      _Init_thread_footer(&DAT_14ca97d10);
    }
  }
  return &DAT_14ca97c68;
}



// FUNCTION 1460456be FUN_1460456be body=211 status=ok
// SIG undefined FUN_1460456be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460456be(void)

{
  if ((DAT_14ca97c67 & 2) == 0) {
    DAT_14ca97c67 = DAT_14ca97c67 | 2;
    _DAT_14ca97c08 = L"FResolveSingleSamplePS";
    _DAT_14ca97c20 = FUN_146826540;
    _DAT_14ca97c28 = FUN_146825d77;
    _DAT_14ca97c30 = FUN_146825fd6;
    _DAT_14ca97c38 = FUN_1407e02ea;
    _DAT_14ca97c40 = FUN_146826273;
    _DAT_14ca97c18 = FUN_147431c24;
    _DAT_14ca97c58 = 0xffffffff000000f0;
    _DAT_14ca97c60 = 8;
    DAT_14ca97c64 = 0;
    _DAT_14ca97c48 = &LAB_147431c50;
    FUN_14604580e();
    FUN_146045792();
    FUN_1407e00cc(&DAT_14ca97c00);
  }
  return &DAT_14ca97c00;
}



// FUNCTION 146045792 FUN_146045792 body=123 status=ok
// SIG undefined FUN_146045792(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146045792(void)

{
  _DAT_14ca9a188 = L"BASE";
  DAT_14ca9a1b2 = 4;
  _DAT_14ca9a190 = FUN_140b35ae4();
  _DAT_14ca9a198 = DAT_14ca97c10;
  _DAT_14ca9a1a0 = &LAB_14682652b;
  DAT_14ca97c10 = &DAT_14ca9a188;
  DAT_14ca97c65 = DAT_14ca97c65 + '\x01';
  _DAT_14ca9a1a8 = 0x100000000;
  if (*(char *)(_DAT_14ca9a190 + 100) != '\0') {
    DAT_14ca97c66 = DAT_14ca97c66 + '\x01';
  }
  return;
}



// FUNCTION 14604580e FUN_14604580e body=216 status=ok
// SIG undefined FUN_14604580e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604580e(void)

{
  _DAT_14ca98b28 = L"SingleSampleIndex";
  DAT_14ca98b52 = FUN_140850cc5();
  _DAT_14ca98b30 = FUN_140ec6960();
  _DAT_14ca98b40 = &LAB_14682652b;
  _DAT_14ca98b48 = 0x1000000e4;
  _DAT_14ca98b50 = 0;
  _DAT_14ca98b38 = DAT_14ca97c10;
  DAT_14ca97c10 = &DAT_14ca98b28;
  _DAT_14ca98af8 = L"UnresolvedSurface";
  DAT_14ca98b22 = FUN_140850cc5();
  _DAT_14ca98b00 = FUN_140fb78d0();
  _DAT_14ca98b10 = &LAB_14682652b;
  _DAT_14ca98b18 = 0x1000000e0;
  _DAT_14ca98b20 = 0;
  _DAT_14ca98b08 = DAT_14ca97c10;
  DAT_14ca97c10 = &DAT_14ca98af8;
  return;
}


