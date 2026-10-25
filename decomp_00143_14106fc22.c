// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14106fc22 FUN_14106fc22 body=52 status=ok
// SIG undefined FUN_14106fc22(void)

void FUN_14106fc22(longlong param_1)

{
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}



// FUNCTION 14106fc56 FUN_14106fc56 body=305 status=ok
// SIG undefined FUN_14106fc56(void)

void FUN_14106fc56(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_14106fcf0;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  iVar3 = 0;
  if ((int)param_2[1] == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    param_2 = (longlong *)*param_2;
    puVar2 = (undefined8 *)0x0;
    iVar3 = 0;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_30);
      puVar2 = local_30;
      iVar3 = local_28;
    }
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_14106fcc9:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_14106fcc9;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_14106fcf0;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14106fcf0:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14106fd88 FUN_14106fd88 body=28 status=ok
// SIG undefined FUN_14106fd88(void)

undefined8 FUN_14106fd88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14106fda4(param_2,param_3);
  return param_2;
}



// FUNCTION 14106fda4 FUN_14106fda4 body=644 status=ok
// SIG undefined FUN_14106fda4(void)

undefined8 * FUN_14106fda4(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar11;
  ushort uVar12;
  ulonglong uVar13;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140056680();
  FUN_1448097c4(param_1,&DAT_149e01f64,&DAT_149e065c6);
  uVar4 = FUN_1401af3ae();
  FUN_140056680(&local_48,uVar4);
  FUN_1448097c4(&local_48,&DAT_149e01f64,&DAT_149e065c6);
  local_60 = 0xffffffff;
  local_68 = 1;
  iVar1 = FUN_1447ee042(&local_48,&DAT_149e065c6,1);
  iVar2 = local_60;
  local_60 = iVar1;
joined_r0x00014106fe36:
  if (local_60 != -1) {
    uVar7 = local_40 - 1;
    if (local_40 == 0) {
      uVar7 = 0;
    }
    if (0 < (int)uVar7) {
      puVar5 = &DAT_149dfb77a;
      if (local_40 != 0) {
        puVar5 = local_48;
      }
      puVar6 = &DAT_149dfb77a;
      if (*(int *)(param_1 + 1) != 0) {
        puVar6 = (undefined2 *)*param_1;
      }
      uVar8 = (ulonglong)uVar7;
      lVar9 = 0;
      do {
        uVar10 = *(ushort *)((longlong)puVar6 + lVar9);
        uVar11 = (ulonglong)uVar10;
        uVar12 = *(ushort *)((longlong)puVar5 + lVar9);
        if (uVar10 == uVar12) {
          if (uVar10 == 0) goto LAB_14106ff8f;
        }
        else {
          if (0x7f < (uVar12 | uVar10)) goto LAB_14106fec1;
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
          uVar13 = (ulonglong)uVar12;
          uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
          if ((&DAT_149e05da0)[uVar11] != (&DAT_149e05da0)[uVar13]) goto LAB_14106fec1;
        }
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) goto LAB_14106ff8f;
        lVar9 = lVar9 + 2;
      } while( true );
    }
    goto LAB_14106fecd;
  }
LAB_14106ffcf:
  local_60 = iVar2;
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
LAB_14106fec1:
  if (uVar10 == uVar12) {
LAB_14106ff8f:
    local_60 = iVar2;
    uVar4 = FUN_1401aee94();
    FUN_140056680(&local_58,uVar4);
    puVar5 = local_58;
    if (local_50 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_14107002a(param_1,puVar5);
    iVar2 = local_60;
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
      iVar2 = local_60;
    }
    goto LAB_14106ffcf;
  }
LAB_14106fecd:
  local_68 = 1;
  iVar2 = FUN_1447ee042(&local_48,&DAT_149e065c6,1);
  if (iVar2 == -1) {
    local_40 = 0;
    if (local_3c != 0) {
      FUN_1446f8c06(&local_48,0);
    }
  }
  else {
    uVar7 = local_40 - 1;
    if (local_40 == 0) {
      uVar7 = 0;
    }
    uVar3 = iVar2 + 1U;
    if ((int)uVar7 <= (int)(iVar2 + 1U)) {
      uVar3 = uVar7;
    }
    uVar8 = (ulonglong)uVar3;
    if ((int)uVar3 < 1) {
      uVar8 = 0;
    }
    uVar7 = uVar7 - (int)uVar8;
    if (0 < (int)uVar7) {
      iVar2 = local_40 - (uVar7 + (int)uVar8);
      if (iVar2 != 0) {
        memmove(local_48 + uVar8,local_48 + uVar8 + uVar7,(longlong)iVar2 * 2);
      }
      local_40 = local_40 - uVar7;
    }
  }
  local_60 = 0xffffffff;
  local_68 = 1;
  iVar1 = FUN_1447ee042(&local_48,&DAT_149e065c6,1);
  iVar2 = local_60;
  local_60 = iVar1;
  goto joined_r0x00014106fe36;
}



// FUNCTION 14107002a FUN_14107002a body=1275 status=ok
// SIG undefined FUN_14107002a(void)

ulonglong FUN_14107002a(code **param_1,undefined8 param_2)

{
  longlong *plVar1;
  code **ppcVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ushort uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  code **ppcVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auStack_2e8 [32];
  code **local_2c8;
  longlong *local_2c0;
  int local_2b8;
  undefined2 *local_2b0;
  int local_2a8;
  longlong *local_2a0;
  int local_298;
  undefined2 *local_290;
  int local_288;
  code **local_280;
  code *local_278;
  undefined8 uStack_270;
  code *local_268;
  longlong **local_260;
  code **local_168;
  undefined8 local_160;
  longlong local_158 [32];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  FUN_1401aea18(&local_2b0,param_1);
  FUN_140056680(&local_268,param_2);
  FUN_140aa5ef8(local_158,&local_268);
  FUN_140beea4a(&local_2c0,local_158);
  if (local_158[0] != 0) {
    FUN_1400020a8();
  }
  local_2c8 = param_1;
  if (local_268 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_1448097c4(&local_2c0,&DAT_149e01f64,&DAT_149e065c6,0);
  FUN_1448097c4(&local_2b0,&DAT_149e01f64,&DAT_149e065c6,0);
  local_58 = (longlong *)0x0;
  local_50 = 0x1000000000;
  local_288 = local_2a8 + -1;
  if (local_2a8 == 0) {
    local_288 = 0;
  }
  local_260 = &local_2a0;
  local_268 = FUN_142788b08;
  local_278 = (code *)&DAT_149e065c6;
  uStack_270 = (code ***)CONCAT44(uStack_270._4_4_,1);
  local_290 = local_2b0;
  local_2a0 = local_158;
  FUN_1403deae6(&local_290,&local_278,&local_268,3);
  plVar1 = local_58;
  plVar8 = local_58;
  if (local_58 == (longlong *)0x0) {
    plVar8 = local_158;
  }
  uVar14 = (uint)local_50;
  local_168 = (code **)0x0;
  local_160 = 0x1000000000;
  local_298 = local_2b8 + -1;
  if (local_2b8 == 0) {
    local_298 = 0;
  }
  uStack_270 = &local_280;
  local_278 = FUN_142788b08;
  local_290 = &DAT_149e065c6;
  local_288 = 1;
  local_2a0 = local_2c0;
  local_280 = &local_268;
  FUN_1403deae6(&local_2a0,&local_290,&local_278,3);
  ppcVar2 = local_168;
  if (local_168 == (code **)0x0) {
    ppcVar2 = &local_268;
  }
  uVar3 = (uint)local_160;
  if ((uVar14 == 0) || ((uint)local_160 == 0)) {
LAB_141070362:
    uVar9 = (ulonglong)uVar3;
    uVar16 = uVar14;
  }
  else {
    plVar6 = local_158;
    if (plVar1 != (longlong *)0x0) {
      plVar6 = plVar1;
    }
    if ((1 < (int)plVar6[1]) && (((ushort *)*plVar8)[1] == 0x3a)) {
      ppcVar15 = &local_268;
      if (local_168 != (code **)0x0) {
        ppcVar15 = local_168;
      }
      if (((1 < *(int *)(ppcVar15 + 1)) && (*(ushort *)(*ppcVar2 + 2) == 0x3a)) &&
         (uVar10 = *(ushort *)*plVar8, uVar5 = *(ushort *)*ppcVar2,
         (ushort)((ushort)(0x19 < uVar10 - 0x61) * 0x20 + uVar10) !=
         (ushort)((ushort)(0x19 < uVar5 - 0x61) * 0x20 + uVar5))) {
        uVar9 = 0;
        goto LAB_14107047a;
      }
    }
    do {
      iVar4 = *(int *)(ppcVar2 + 1);
      lVar11 = (longlong)iVar4;
      if ((int)plVar8[1] != iVar4) goto LAB_141070362;
      if (iVar4 != 0) {
        lVar12 = 0;
        while( true ) {
          uVar10 = *(ushort *)(*plVar8 + lVar12);
          uVar9 = (ulonglong)uVar10;
          uVar5 = *(ushort *)(*ppcVar2 + lVar12);
          if (uVar10 != uVar5) break;
          if (uVar10 == 0) goto LAB_1410702fe;
LAB_1410702d6:
          lVar11 = lVar11 + -1;
          if (lVar11 == 0) goto LAB_1410702fe;
          lVar12 = lVar12 + 2;
        }
        if ((uVar5 | uVar10) < 0x80) {
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          uVar7 = (ulonglong)uVar5;
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar7]) goto LAB_1410702d6;
        }
        if (uVar10 != uVar5) goto LAB_141070362;
      }
LAB_1410702fe:
      uVar16 = 1;
      if (1 < (int)uVar14) {
        uVar16 = uVar14;
      }
      uVar16 = uVar16 - 1;
      plVar8 = plVar8 + (longlong)(int)uVar14 * 2 + (ulonglong)uVar16 * -2;
      uVar13 = 1;
      if (1 < (int)uVar3) {
        uVar13 = uVar3;
      }
      uVar13 = uVar13 - 1;
      uVar9 = (ulonglong)uVar13;
    } while ((uVar16 != 0) &&
            (ppcVar2 = ppcVar2 + (longlong)(int)uVar3 * 2 + uVar9 * -2, uVar14 = uVar16,
            uVar3 = uVar13, uVar13 != 0));
  }
  uVar14 = 1;
  if (1 < (int)uVar16) {
    uVar14 = uVar16;
  }
  iVar4 = uVar14 + (int)uVar9 * 3 + -1;
  lVar11 = (longlong)(int)uVar16;
  if (uVar16 != 0) {
    lVar12 = 0;
    do {
      iVar4 = iVar4 + *(int *)((longlong)plVar8 + lVar12 + 8);
      lVar12 = lVar12 + 0x10;
    } while (lVar11 << 4 != lVar12);
  }
  local_278 = (code *)0x0;
  uStack_270 = (code ***)0x0;
  if (0 < iVar4) {
    FUN_1446f8c06(&local_278,iVar4 + 1);
  }
  if (0 < (int)uVar9) {
    do {
      FUN_1400020e8(&local_278,&DAT_149e32c58,3);
      uVar14 = (int)uVar9 - 1;
      uVar9 = (ulonglong)uVar14;
    } while (uVar14 != 0);
  }
  if (0 < (int)uVar16) {
    plVar8 = plVar8 + 1;
    lVar12 = 1;
    do {
      FUN_1400020e8(&local_278,plVar8[-1],(int)*plVar8);
      if (lVar12 < lVar11) {
        FUN_1400020e8(&local_278,&DAT_149e065c6,1);
      }
      plVar8 = plVar8 + 2;
      bVar17 = lVar12 != lVar11;
      lVar12 = lVar12 + 1;
    } while (bVar17);
  }
  ppcVar2 = local_2c8;
  if (&local_278 == local_2c8) {
    if (local_278 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*local_2c8 != (code *)0x0) {
      FUN_1400020a8();
    }
    *ppcVar2 = local_278;
    local_278 = (code *)0x0;
    *(undefined4 *)(ppcVar2 + 1) = (undefined4)uStack_270;
    *(undefined4 *)((longlong)ppcVar2 + 0xc) = uStack_270._4_4_;
  }
  uVar9 = CONCAT71((int7)((ulonglong)ppcVar2 >> 8),1);
LAB_14107047a:
  if (local_168 != (code **)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_2c0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_2b0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 141070526 FUN_141070526 body=603 status=ok
// SIG undefined FUN_141070526(void)

longlong * FUN_141070526(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  bVar2 = *(byte *)((longlong)param_2 + 0x1539);
  if (bVar2 < 2) {
LAB_141070547:
    puVar5 = (undefined8 *)FUN_14001cc68(0x1d08,0x10);
    FUN_1410709ce(puVar5);
    *puVar5 = &PTR_FUN_14aba5470;
    puVar5[0x39e] = &PTR_FUN_14aba54d8;
    puVar5[0x39f] = 0;
    puVar5[0x3a0] = 0;
  }
  else if (bVar2 == 2) {
    puVar5 = (undefined8 *)FUN_14001cc68(0x1d00,0x10);
    FUN_1410709ce(puVar5);
    *puVar5 = &PTR_FUN_14aba5310;
    puVar5[0x39e] = &PTR_FUN_14aba53e8;
    *(undefined4 *)(puVar5 + 0x39f) = 0;
  }
  else {
    if (bVar2 != 3) {
      if (bVar2 != 4) {
        *param_1 = 0;
        param_1[1] = 0;
        return param_1;
      }
      goto LAB_141070547;
    }
    puVar5 = (undefined8 *)FUN_14001cc68(0x1d00,0x10);
    FUN_1410709ce(puVar5);
    puVar5[0x39e] = &PTR_FUN_14aba53e8;
    *(undefined4 *)(puVar5 + 0x39f) = 0;
    *puVar5 = &PTR_FUN_14aba5400;
  }
  FUN_141070782(puVar5);
  plVar6 = (longlong *)FUN_14001cc68(0xce0,0x10);
  FUN_141070e84(plVar6,param_2);
  *param_1 = (longlong)plVar6;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14aba55e0;
  plVar7[2] = (longlong)plVar6;
  param_1[1] = (longlong)plVar7;
  if ((plVar6 == (longlong *)0x0) ||
     (((*plVar6 != 0 && (plVar6[1] != 0)) && (0 < *(int *)(plVar6[1] + 8))))) goto LAB_141070626;
  if (plVar7 == (longlong *)0x0) {
    *plVar6 = (longlong)plVar6;
    plVar8 = (longlong *)plVar6[1];
    if (plVar8 == (longlong *)0x0) goto LAB_141070626;
LAB_1410706e9:
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    plVar6[1] = (longlong)plVar7;
    if (plVar7 == (longlong *)0x0) goto LAB_141070626;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *plVar6 = (longlong)plVar6;
    if ((longlong *)plVar6[1] != plVar7) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      plVar8 = (longlong *)plVar6[1];
      if (plVar8 != (longlong *)0x0) goto LAB_1410706e9;
      plVar6[1] = (longlong)plVar7;
    }
  }
  LOCK();
  plVar6 = plVar7 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_141070626:
  puVar3 = *(undefined8 **)(*param_1 + 0xcc8);
  *(undefined8 **)(*param_1 + 0xcc8) = puVar5;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  uVar4 = (**(code **)(*param_2 + 0xbf0))(param_2);
  (**(code **)(*param_2 + 0x7c0))(param_2,uVar4);
  return param_1;
}



// FUNCTION 141070782 FUN_141070782 body=586 status=ok
// SIG undefined FUN_141070782(void)

void FUN_141070782(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  uVar6 = DAT_14cb1d030;
  uVar5 = DAT_14cb1d028;
  uVar4 = DAT_14cb1d020;
  local_38 = DAT_14cb1d030;
  local_48 = DAT_14cb1d020;
  uStack_40 = DAT_14cb1d028;
  local_20 = DAT_14cb1d030;
  local_30 = DAT_14cb1d020;
  uStack_28 = DAT_14cb1d028;
  *(undefined8 *)(param_1 + 0x1a98) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x1aa0) = 0;
  local_48._0_4_ = (undefined4)uVar4;
  local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar5;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  *(undefined4 *)(param_1 + 0x1aa8) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x1aac) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x1ab0) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x1ab4) = uStack_40._4_4_;
  *(undefined8 *)(param_1 + 0x1ab8) = uVar6;
  *(undefined8 *)(param_1 + 0x1ac0) = uVar4;
  *(undefined8 *)(param_1 + 0x1ac8) = uVar5;
  *(undefined8 *)(param_1 + 0x1ad0) = uVar6;
  *(undefined8 *)(param_1 + 0x1ad8) = 0;
  plVar3 = *(longlong **)(param_1 + 0x1ae0);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1ae0) = 0;
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      local_48 = uVar4;
      uStack_40 = uVar5;
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
  *(undefined4 *)(param_1 + 0x1ae8) = 0xffffffff;
  uVar6 = DAT_14cb1d030;
  uVar5 = DAT_14cb1d028;
  uVar4 = DAT_14cb1d020;
  plVar3 = *(longlong **)(param_1 + 0x1b38);
  local_38 = DAT_14cb1d030;
  local_48 = DAT_14cb1d020;
  uStack_40 = DAT_14cb1d028;
  local_30 = DAT_14cb1d020;
  uStack_28 = DAT_14cb1d028;
  local_20 = DAT_14cb1d030;
  *(undefined8 *)(param_1 + 0x1af0) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x1af8) = 0;
  local_48._0_4_ = (undefined4)uVar4;
  local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar5;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  *(undefined4 *)(param_1 + 0x1b00) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x1b04) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x1b08) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x1b0c) = uStack_40._4_4_;
  *(undefined8 *)(param_1 + 0x1b10) = uVar6;
  *(undefined8 *)(param_1 + 0x1b18) = uVar4;
  *(undefined8 *)(param_1 + 0x1b20) = uVar5;
  *(undefined8 *)(param_1 + 0x1b28) = uVar6;
  *(undefined8 *)(param_1 + 0x1b30) = 0;
  local_48 = uVar4;
  uStack_40 = uVar5;
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1b38) = 0;
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
  *(undefined4 *)(param_1 + 0x1b40) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1990) = 0x3f80000000000000;
  memset((void *)(param_1 + 0x1998),0,0x9c);
  *(undefined4 *)(param_1 + 0x1a34) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1a38) = 0;
  *(undefined8 *)(param_1 + 0x1a40) = 0;
  *(undefined8 *)(param_1 + 0x1a48) = 0;
  *(undefined8 *)(param_1 + 0x1a50) = 0;
  *(undefined8 *)(param_1 + 0x1a58) = 0;
  *(undefined4 *)(param_1 + 0x1a60) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1a64) = 0;
  *(undefined8 *)(param_1 + 0x1a6c) = 0;
  *(undefined8 *)(param_1 + 0x1a74) = 0;
  *(undefined8 *)(param_1 + 0x1a7c) = 0;
  *(undefined8 *)(param_1 + 0x1a84) = 0;
  *(undefined8 *)(param_1 + 0x1a8c) = 0;
  *(undefined4 *)(param_1 + 0x1a94) = 0;
  (&DAT_00001ce8)[param_1] = 0;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410709ce FUN_1410709ce body=1206 status=ok
// SIG undefined FUN_1410709ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1410709ce(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = &PTR_LAB_14aba5380;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x6c] = 0;
  *(undefined1 *)(param_1 + 0xd2) = 0xff;
  *(undefined1 *)(param_1 + 0xd3) = 1;
  uVar1 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
  param_1[0xd5] = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
  param_1[0xd6] = uVar1;
  param_1[0xd7] = DAT_14cb1d030;
  uVar1 = DAT_14cb1c868;
  param_1[0xd8] = DAT_14cb1c860;
  param_1[0xd9] = uVar1;
  param_1[0xda] = DAT_14cb1c870;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  *(undefined4 *)(param_1 + 0xdd) = 0xffffffff;
  param_1[0xde] = 0;
  param_1[0xdf] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  param_1[0xe3] = DAT_14cb1d030;
  uVar1 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
  param_1[0xe1] = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
  param_1[0xe2] = uVar1;
  uVar1 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
  param_1[0xe4] = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
  param_1[0xe5] = uVar1;
  param_1[0xe6] = DAT_14cb1d030;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  *(undefined4 *)(param_1 + 0xe9) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xfd) = 0;
  param_1[0x226] = 0;
  param_1[0x227] = 0x800000000;
  *(undefined4 *)(param_1 + 0xee) = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  *(undefined2 *)(param_1 + 0x228) = 0;
  param_1[0x229] = 0xbf800000;
  param_1[0x22a] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x22b) = 0;
  param_1[0x22e] = DAT_14cb1d018;
  uVar1 = _DAT_14cb1d010;
  param_1[0x22c] = _DAT_14cb1d008;
  param_1[0x22d] = uVar1;
  param_1[0x231] = DAT_14cb1d030;
  uVar1 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
  param_1[0x22f] = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
  param_1[0x230] = uVar1;
  param_1[0x234] = DAT_14cb1d018;
  uVar1 = _DAT_14cb1d010;
  param_1[0x232] = _DAT_14cb1d008;
  param_1[0x233] = uVar1;
  param_1[0x237] = DAT_14cb1d030;
  uVar1 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
  param_1[0x235] = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
  param_1[0x236] = uVar1;
  param_1[0x238] = 0;
  param_1[0x239] = 0;
  *(undefined4 *)(param_1 + 0x23a) = 0xffffffff;
  param_1[0x23b] = 0;
  *(undefined1 *)(param_1 + 0x23c) = 0;
  param_1[0x240] = 0;
  *(undefined4 *)(param_1 + 0x241) = 0;
  *(undefined2 *)(param_1 + 0x245) = 0;
  *(undefined1 *)((longlong)param_1 + 0x122a) = 0;
  *(undefined1 *)(param_1 + 0x246) = 0;
  param_1[0x24c] = 0;
  *(undefined4 *)(param_1 + 0x24d) = 0;
  *(undefined4 *)(param_1 + 0x23f) = 0;
  param_1[0x23d] = 0;
  param_1[0x23e] = 0;
  *(undefined1 *)(param_1 + 0x243) = 0;
  param_1[0x242] = 0;
  *(undefined2 *)((longlong)param_1 + 0x1224) = 0;
  *(undefined8 *)((longlong)param_1 + 0x121c) = 0;
  param_1[0x248] = 0;
  param_1[0x249] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1234) = 0;
  *(undefined8 *)((longlong)param_1 + 0x123c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x126c) = 4;
  param_1[0x28e] = 0;
  *(undefined4 *)(param_1 + 0x28f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1287) = 0;
  param_1[0x24f] = 0;
  param_1[0x250] = 0;
  *(undefined4 *)((longlong)param_1 + 0x147c) = 4;
  *(undefined1 *)(param_1 + 0x29a) = 0;
  *(undefined1 *)(param_1 + 0x29d) = 0;
  *(undefined1 *)(param_1 + 0x2c9) = 0;
  *(undefined1 *)(param_1 + 0x2f5) = 0;
  *(undefined1 *)(param_1 + 0x321) = 0;
  *(undefined1 *)(param_1 + 0x325) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1934) = 0;
  param_1[0x327] = 0xbf800000bf800000;
  *(undefined2 *)(param_1 + 0x328) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1944) = 0;
  *(undefined1 *)(param_1 + 0x329) = 0;
  *(undefined1 *)(param_1 + 0x330) = 0;
  *(undefined1 *)(param_1 + 0x331) = 0;
  memset(param_1 + 0x332,0,0x100);
  *(undefined4 *)(param_1 + 0x34c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1994) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1a34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x352) = 0;
  param_1[0x353] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x354) = 0;
  uVar1 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
  param_1[0x355] = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
  param_1[0x356] = uVar1;
  param_1[0x357] = DAT_14cb1d030;
  uVar1 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
  param_1[0x358] = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
  param_1[0x359] = uVar1;
  param_1[0x35a] = DAT_14cb1d030;
  param_1[0x35b] = 0;
  param_1[0x35c] = 0;
  *(undefined4 *)(param_1 + 0x35d) = 0xffffffff;
  param_1[0x35e] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x35f) = 0;
  param_1[0x362] = DAT_14cb1d030;
  uVar1 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
  param_1[0x360] = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
  param_1[0x361] = uVar1;
  uVar1 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
  param_1[0x363] = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
  param_1[0x364] = uVar1;
  param_1[0x365] = DAT_14cb1d030;
  param_1[0x366] = 0;
  param_1[0x367] = 0;
  *(undefined4 *)(param_1 + 0x368) = 0xffffffff;
  param_1[0x36b] = DAT_14cb1d018;
  uVar1 = _DAT_14cb1d010;
  param_1[0x369] = _DAT_14cb1d008;
  param_1[0x36a] = uVar1;
  param_1[0x36e] = DAT_14cb1d030;
  uVar1 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
  param_1[0x36c] = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
  param_1[0x36d] = uVar1;
  param_1[0x371] = DAT_14cb1d018;
  uVar1 = _DAT_14cb1d010;
  param_1[0x36f] = _DAT_14cb1d008;
  param_1[0x370] = uVar1;
  param_1[0x374] = DAT_14cb1d030;
  uVar1 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
  param_1[0x372] = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
  param_1[0x373] = uVar1;
  param_1[0x375] = 0;
  param_1[0x376] = 0;
  *(undefined4 *)(param_1 + 0x377) = 0xffffffff;
  param_1[0x37a] = DAT_14cb1d030;
  uVar1 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
  param_1[0x378] = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
  param_1[0x379] = uVar1;
  param_1[0x37d] = DAT_14cb1d030;
  uVar4 = DAT_14cb1d028._4_4_;
  uVar3 = (undefined4)DAT_14cb1d028;
  uVar2 = DAT_14cb1d020._4_4_;
  *(undefined4 *)(param_1 + 0x37b) = (undefined4)DAT_14cb1d020;
  *(undefined4 *)((longlong)param_1 + 0x1bdc) = uVar2;
  *(undefined4 *)(param_1 + 0x37c) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1be4) = uVar4;
  param_1[0x37e] = 0;
  param_1[0x37f] = 0;
  *(undefined4 *)(param_1 + 0x380) = 0xffffffff;
  param_1[0x385] = 0;
  *(undefined4 *)(param_1 + 0x386) = 0;
  param_1[0x381] = 0;
  param_1[0x382] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1c3c) = 0;
  param_1[0x389] = 0;
  *(undefined4 *)(param_1 + 0x38a) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x38b));
  *(undefined1 *)(param_1 + 0x392) = 0;
  *(undefined1 *)(param_1 + 0x39c) = 0;
  return param_1;
}



// FUNCTION 141070e84 FUN_141070e84 body=1447 status=ok
// SIG undefined FUN_141070e84(void)

undefined8 * FUN_141070e84(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
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
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0xf] = 0x3f800000;
  param_1[0x10] = 0x3f80000000000000;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x21] = DAT_14cb1c748;
  uVar2 = CONCAT44(DAT_14cb1c740._4_4_,(undefined4)DAT_14cb1c740);
  param_1[0x1f] = CONCAT44(DAT_14cb1c738._4_4_,(undefined4)DAT_14cb1c738);
  param_1[0x20] = uVar2;
  uVar2 = DAT_14cb1c868;
  param_1[0x22] = DAT_14cb1c860;
  param_1[0x23] = uVar2;
  param_1[0x24] = DAT_14cb1c870;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  memset(param_1 + 0x28,0,0x108);
  *(undefined4 *)(param_1 + 0x43) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x49) = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0xffffffff;
  param_1[0x4b] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  uVar2 = CONCAT44(DAT_14cb1c740._4_4_,(undefined4)DAT_14cb1c740);
  param_1[0x4d] = CONCAT44(DAT_14cb1c738._4_4_,(undefined4)DAT_14cb1c738);
  param_1[0x4e] = uVar2;
  param_1[0x4f] = DAT_14cb1c748;
  param_1[0x52] = DAT_14cb1c748;
  uVar2 = CONCAT44(DAT_14cb1c740._4_4_,(undefined4)DAT_14cb1c740);
  param_1[0x50] = CONCAT44(DAT_14cb1c738._4_4_,(undefined4)DAT_14cb1c738);
  param_1[0x51] = uVar2;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x56) = 0x100;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  param_1[0x6a] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x6b) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined1 *)(param_1 + 0x83) = 1;
  *(undefined2 *)(param_1 + 0x8b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44c) = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 2;
  *(undefined2 *)(param_1 + 0x8c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x462) = 0;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0x404000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x46c) = 0x3f8000003fc00000;
  *(undefined8 *)((longlong)param_1 + 0x474) = 0x400000003f800000;
  *(undefined4 *)((longlong)param_1 + 0x47c) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x494) = 0;
  *(undefined1 *)(param_1 + 0x93) = 0;
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0;
  param_1[0x94] = 0;
  *(undefined2 *)(param_1 + 0x95) = 0x100;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0x3f800000;
  param_1[0xa2] = 0x3f80000000000000;
  *(undefined1 *)(param_1 + 0xa3) = 1;
  param_1[0xa4] = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  param_1[0xb3] = DAT_14cb1c748;
  uVar2 = CONCAT44(DAT_14cb1c740._4_4_,(undefined4)DAT_14cb1c740);
  param_1[0xb1] = CONCAT44(DAT_14cb1c738._4_4_,(undefined4)DAT_14cb1c738);
  param_1[0xb2] = uVar2;
  uVar2 = DAT_14cb1c868;
  param_1[0xb4] = DAT_14cb1c860;
  param_1[0xb5] = uVar2;
  param_1[0xb6] = DAT_14cb1c870;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0xffffffff;
  param_1[0xba] = 0;
  *(undefined4 *)(param_1 + 0xbb) = 0;
  *(undefined1 *)(param_1 + 0xbf) = 0;
  *(undefined1 *)(param_1 + 0xc3) = 0;
  *(undefined1 *)(param_1 + 0xca) = 0;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + 0xfe) = 0;
  param_1[0x100] = 0;
  *(undefined2 *)(param_1 + 0x101) = 0;
  *(undefined1 *)(param_1 + 0x129) = 0;
  *(undefined4 *)(param_1 + 0x12a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x954) = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  param_1[0x135] = 0x3f800000;
  param_1[0x136] = 0x3f80000000000000;
  *(undefined1 *)(param_1 + 0x137) = 1;
  param_1[0x138] = 0;
  *(undefined1 *)(param_1 + 0x144) = 0;
  param_1[0x147] = DAT_14cb1c748;
  uVar2 = CONCAT44(DAT_14cb1c740._4_4_,(undefined4)DAT_14cb1c740);
  param_1[0x145] = CONCAT44(DAT_14cb1c738._4_4_,(undefined4)DAT_14cb1c738);
  param_1[0x146] = uVar2;
  param_1[0x14a] = DAT_14cb1c870;
  uVar2 = DAT_14cb1c868;
  param_1[0x148] = DAT_14cb1c860;
  param_1[0x149] = uVar2;
  param_1[0x14b] = 0;
  param_1[0x14c] = 0;
  *(undefined4 *)(param_1 + 0x14d) = 0xffffffff;
  memset(param_1 + 0x14e,0,0x108);
  *(undefined4 *)(param_1 + 0x169) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa7c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xb1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x16f) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
  param_1[0x171] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x172) = 0;
  uVar2 = CONCAT44(DAT_14cb1c740._4_4_,(undefined4)DAT_14cb1c740);
  param_1[0x173] = CONCAT44(DAT_14cb1c738._4_4_,(undefined4)DAT_14cb1c738);
  param_1[0x174] = uVar2;
  param_1[0x175] = DAT_14cb1c748;
  param_1[0x178] = DAT_14cb1c748;
  uVar11 = DAT_14cb1c740._4_4_;
  uVar10 = (undefined4)DAT_14cb1c740;
  uVar9 = DAT_14cb1c738._4_4_;
  *(undefined4 *)(param_1 + 0x176) = (undefined4)DAT_14cb1c738;
  *(undefined4 *)((longlong)param_1 + 0xbb4) = uVar9;
  *(undefined4 *)(param_1 + 0x177) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0xbbc) = uVar11;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  *(undefined4 *)(param_1 + 0x17b) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x17c) = 0x100;
  *(undefined1 *)(param_1 + 0x180) = 0;
  *(undefined1 *)(param_1 + 0x181) = 0;
  *(undefined1 *)(param_1 + 0x18e) = 0;
  param_1[400] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x191) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x195) = 0;
  *(undefined1 *)(param_1 + 0x196) = 0;
  *(undefined2 *)(param_1 + 0x19a) = 0;
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    iVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 2) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar3 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar3 = *(int *)(lVar5 + 0x10);
      bVar6 = iVar3 == 0;
      if (bVar6) {
        *(int *)(lVar5 + 0x10) = iVar4;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar3 = iVar4;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x14) = iVar3;
  lVar5 = *(longlong *)(param_2 + 0x110);
  if (lVar5 == 0) {
    uVar7 = 0;
    uVar8 = 0;
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0x3ff00000;
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
  }
  else {
    local_98 = *(undefined4 *)(lVar5 + 0x240);
    uStack_94 = *(undefined4 *)(lVar5 + 0x244);
    uStack_90 = *(undefined4 *)(lVar5 + 0x248);
    uStack_8c = *(undefined4 *)(lVar5 + 0x24c);
    local_88 = *(undefined4 *)(lVar5 + 0x250);
    uStack_84 = *(undefined4 *)(lVar5 + 0x254);
    uStack_80 = *(undefined4 *)(lVar5 + 600);
    uStack_7c = *(undefined4 *)(lVar5 + 0x25c);
    uVar9 = *(undefined4 *)(lVar5 + 0x260);
    uVar10 = *(undefined4 *)(lVar5 + 0x264);
    uVar11 = *(undefined4 *)(lVar5 + 0x268);
    uVar12 = *(undefined4 *)(lVar5 + 0x26c);
    uVar7 = *(undefined4 *)(lVar5 + 0x270);
    uVar8 = *(undefined4 *)(lVar5 + 0x274);
  }
  FUN_1448052ee(&local_98,&local_c8);
  local_a0 = CONCAT44(uVar8,uVar7);
  param_1[0x7c] = local_c8;
  param_1[0x7d] = uStack_c0;
  param_1[0x7e] = uStack_b8;
  param_1[0x7f] = CONCAT44(uVar10,uVar9);
  *(undefined4 *)(param_1 + 0x80) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x404) = uVar12;
  *(undefined4 *)(param_1 + 0x81) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x40c) = uVar8;
  *(undefined1 *)(param_1 + 0x82) = 1;
  if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
    local_b0 = uVar9;
    uStack_ac = uVar10;
    uStack_a8 = uVar11;
    uStack_a4 = uVar12;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14107142c FUN_14107142c body=96 status=ok
// SIG undefined FUN_14107142c(void)

ulonglong FUN_14107142c(longlong param_1)

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
LAB_14107146f:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14107146f;
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



// FUNCTION 141071492 FUN_141071492 body=284 status=ok
// SIG undefined FUN_141071492(void)

void FUN_141071492(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  void *pvVar5;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0xa0);
  if (0 < (longlong)iVar1) {
    local_38 = (void *)0x0;
    pvVar5 = *(void **)(param_1 + 0x98);
    local_30 = iVar1;
    FUN_148bd953e(&local_38,iVar1,0);
    memcpy(local_38,pvVar5,(longlong)iVar1 * 0x18);
    if ((longlong)local_30 != 0) {
      lVar4 = (longlong)local_30 * 0x18;
      pvVar5 = local_38;
      do {
        if ((((*(longlong *)((longlong)pvVar5 + 8) != 0) &&
             (cVar2 = FUN_144729dda(pvVar5), cVar2 != '\0')) &&
            (*(longlong **)((longlong)pvVar5 + 8) != (longlong *)0x0)) &&
           (lVar3 = (**(code **)(**(longlong **)((longlong)pvVar5 + 8) + 0x10))(), lVar3 != 0)) {
          FUN_148e046e0(lVar3);
        }
        pvVar5 = (void *)((longlong)pvVar5 + 0x18);
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != 0);
    }
    if (local_38 != (void *)0x0) {
      FUN_1400020a8(local_38);
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_140457ffc(*(longlong *)(param_1 + 8) + 0x2d0,param_1);
    FUN_140457ffc(*(longlong *)(param_1 + 8) + 0x2b8,param_1);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410715b0 FUN_1410715b0 body=288 status=ok
// SIG undefined FUN_1410715b0(void)

undefined8 FUN_1410715b0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1410716c9;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1410716c9;
    }
    FUN_1400841de(param_1 + 0x18,&local_40);
  }
  else {
LAB_1410716c9:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14107167b;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_14107167b;
    }
  }
  uVar6 = 0;
LAB_14107167b:
  if (local_40 != 0) {
    FUN_140113f3a(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410716d2 FUN_1410716d2 body=673 status=ok
// SIG undefined FUN_1410716d2(void)

void FUN_1410716d2(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  if ((DAT_14cb0d2b0 != 0) && ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0)) {
    lVar8 = 0;
    do {
      lVar9 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar8);
      if (*(longlong *)(lVar9 + 0x360) == param_2) {
        if (((lVar9 != 0) && (*(char *)(lVar9 + 0x88) == '\x01')) &&
           (*(char *)(lVar9 + 0x89) != '\0')) {
          return;
        }
        break;
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar8);
  }
  iVar2 = *(int *)(param_1 + 0x5b0);
  if (iVar2 == 0) {
    uVar12 = 1;
    uVar14 = 0;
    iVar7 = 0;
    iVar10 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x5a8);
    if (*(uint **)(param_1 + 0x5a8) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x598);
    }
    uVar13 = *puVar6;
    if (uVar13 == 0) {
      iVar7 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar7 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar12 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar12 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar12 == uVar14) goto LAB_1410717b2;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar6[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar12 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar12 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (iVar10 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar7) {
      iVar7 = iVar2;
    }
  }
  if (iVar7 < iVar2) {
    uVar13 = 0xffffffff;
    do {
      lVar8 = *(longlong *)(param_1 + 0x588);
      iVar4 = *(int *)(lVar8 + 4 + (longlong)iVar7 * 0x70);
      if (((((iVar4 == 0) || (uVar3 = *(uint *)(lVar8 + (longlong)iVar7 * 0x70), (int)uVar3 < 0)) ||
           ((DAT_14c9647dc <= (int)uVar3 ||
            ((plVar11 = (longlong *)
                        ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
             plVar11 == (longlong *)0x0 || ((int)plVar11[2] != iVar4)))))) ||
          ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)) ||
         ((((*(uint *)(plVar11 + 1) & 0x10200000) != 0 || (*plVar11 == 0)) ||
          (*(longlong *)(*plVar11 + 0xc0) == param_2)))) {
        FUN_1405f5d2e((longlong *)(param_1 + 0x588));
        iVar2 = *(int *)(param_1 + 0x5b0);
      }
      uVar13 = uVar13 & ~(uint)uVar12;
      puVar6 = *(uint **)(param_1 + 0x5a8);
      if (*(uint **)(param_1 + 0x5a8) == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0x598);
      }
      iVar7 = (int)uVar14;
      lVar8 = (longlong)iVar7;
      uVar3 = puVar6[lVar8] & uVar13;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar7) {
          iVar5 = iVar7;
        }
        if (iVar4 <= iVar7) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar6[lVar8 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar8 == lVar9) goto LAB_1410717b2;
        }
        uVar14 = (ulonglong)(iVar7 + (int)lVar9 + 1);
        uVar13 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar12 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar2);
  }
LAB_1410717b2:
  FUN_144a38812(param_1);
  return;
}



// FUNCTION 141071974 FUN_141071974 body=29 status=ok
// SIG undefined FUN_141071974(void)

undefined8 FUN_141071974(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x130) == '\0') {
    FUN_141071992();
  }
  return 1;
}



// FUNCTION 141071992 FUN_141071992 body=1390 status=ok
// SIG undefined FUN_141071992(void)

void FUN_141071992(longlong param_1,longlong param_2)

{
  int *piVar1;
  float fVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  byte bVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 ****ppppuVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  float fVar16;
  undefined1 auStack_198 [32];
  uint *local_178;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  undefined8 local_150;
  undefined1 local_141;
  undefined1 local_140;
  undefined7 uStack_13f;
  longlong *local_138;
  ushort local_128;
  byte local_120;
  undefined4 local_118;
  undefined8 ***local_110;
  longlong *local_108;
  ushort local_f8;
  byte local_f0;
  uint local_e8 [2];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulonglong local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined4 local_69;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x170) == '\x01') {
    if (*(float *)(param_2 + 8) <= *(float *)(param_1 + 0xd8)) goto LAB_141071b64;
    *(undefined4 *)(param_1 + 0xd8) = 0xbf800000;
  }
  local_168 = *(longlong *)(lVar3 + 0x90);
  uVar8 = FUN_14477b664(*(undefined8 *)(lVar3 + 0x98));
  local_160 = FUN_14477b664(uVar8);
  local_158 = *(longlong *)(lVar3 + 0xa0);
  lVar14 = lVar3 + 0xa8;
  if ((longlong)*(int *)(lVar3 + 0x88) != 0) {
    lVar12 = (longlong)*(int *)(lVar3 + 0x88) * 0xa0;
    lVar13 = *(longlong *)(lVar3 + 0x80) + 0x50;
    do {
      lVar12 = lVar12 + -0xa0;
      local_150 = CONCAT71(local_150._1_7_,2);
      local_110 = (undefined8 ***)FUN_144a7be76(param_1);
      FUN_144a7bec8(param_1,&local_140);
      local_e8[0] = local_e8[0] & 0xffffff00;
      local_c0 = local_c0 & 0xffffffff00000000;
      FUN_144a7bf34(local_e8,&local_140,&local_110,&local_150);
      if (local_138 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_138 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_138 + 0x10))();
        }
      }
      FUN_1447c3578(lVar13 + -0x50,&local_140,local_e8);
      FUN_144a5ac3a(local_e8);
      if ((local_120 == 0) || (cVar7 = FUN_144a7fca4(&local_140), cVar7 == '\0')) {
        bVar6 = 0;
      }
      else {
        local_168 = *(longlong *)(lVar13 + -0x18);
        uVar8 = FUN_14477b664(*(undefined8 *)(lVar13 + -0x10));
        local_160 = FUN_14477b664(uVar8);
        local_158 = *(longlong *)(lVar13 + -8);
        bVar6 = 1;
        lVar14 = lVar13;
      }
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_120 * 0x120));
      if (pcVar5 != (code *)0x0) {
        puVar10 = &local_140;
        if (0x18 < local_128) {
          puVar10 = (undefined1 *)CONCAT71(uStack_13f,local_140);
        }
        (*pcVar5)(puVar10);
      }
      if (0x18 < local_128) {
        FUN_1400020a8(CONCAT71(uStack_13f,local_140));
      }
      lVar13 = lVar13 + 0xa0;
    } while (!(bool)(bVar6 | lVar12 == 0));
  }
  if (local_160 == 0) {
    uVar8 = FUN_1407ad36c();
    local_160 = FUN_14477b664(uVar8);
  }
  if (local_158 == 0) {
    if ((local_160 == 0) || (local_168 == 0)) goto LAB_141071b64;
    plVar4 = *(longlong **)(local_160 + 0xb8);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar7 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar7 == '\0')) {
      local_158 = 0;
    }
    else {
      uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
      local_158 = FUN_144aff482(uVar8,&local_168);
    }
    bVar15 = local_158 != 0;
  }
  else {
    bVar15 = true;
  }
  if ((bVar15) && (lVar14 != 0)) {
    local_e8[0] = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0xffffffff;
    local_6c = 0;
    local_6a = 1;
    local_69 = 0;
    if (*(char *)(lVar3 + 0x170) == '\x01') {
      local_141 = 2;
      local_150 = FUN_144a7be76(param_1);
      FUN_144a7bec8(param_1,&local_110);
      local_140 = 0;
      local_118 = 0;
      FUN_144a7bf34(&local_140,&local_110,&local_150,&local_141);
      if (local_108 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_108 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_108 + 0x10))();
        }
      }
      FUN_1447c3578(lVar3 + 0xf8,&local_110,&local_140);
      local_e8[0] = FUN_144a7ecd0(&local_110);
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f0 * 0x120));
      if (pcVar5 != (code *)0x0) {
        ppppuVar11 = &local_110;
        if (0x18 < local_f8) {
          ppppuVar11 = (undefined8 ****)local_110;
        }
        (*pcVar5)(ppppuVar11);
      }
      if (0x18 < local_f8) {
        FUN_1400020a8(local_110);
      }
      FUN_144a5ac3a(&local_140);
    }
    uVar8 = FUN_140343d7a(param_1);
    uVar9 = FUN_1405f939e(param_1);
    local_178 = local_e8;
    FUN_1407acb05(uVar9,&local_168,lVar14,uVar8);
    if (*(char *)(lVar3 + 0x170) == '\x01') {
      fVar2 = *(float *)(param_2 + 8);
      local_141 = 2;
      local_150 = FUN_144a7be76(param_1);
      FUN_144a7bec8(param_1,&local_110);
      local_140 = 0;
      local_118 = 0;
      FUN_144a7bf34(&local_140,&local_110,&local_150,&local_141);
      if (local_108 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_108 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_108 + 0x10))();
        }
      }
      FUN_1447c3578(lVar3 + 0x138,&local_110,&local_140);
      fVar16 = (float)FUN_144a7ecd0(&local_110);
      *(float *)(param_1 + 0xd8) = fVar2 + fVar16;
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f0 * 0x120));
      if (pcVar5 != (code *)0x0) {
        ppppuVar11 = &local_110;
        if (0x18 < local_f8) {
          ppppuVar11 = (undefined8 ****)local_110;
        }
        (*pcVar5)(ppppuVar11);
      }
      if (0x18 < local_f8) {
        FUN_1400020a8(local_110);
      }
      FUN_144a5ac3a(&local_140);
    }
  }
LAB_141071b64:
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141071f0c FUN_141071f0c body=173 status=ok
// SIG undefined FUN_141071f0c(void)

undefined8 * FUN_141071f0c(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a8a69b0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 2;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xf0;
  return param_1;
}



// FUNCTION 141071fba FUN_141071fba body=152 status=ok
// SIG undefined FUN_141071fba(void)

undefined4 FUN_141071fba(undefined4 *param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined *local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = &DAT_14c949608;
  local_28 = 0;
  DVar1 = GetCurrentThreadId();
  if (DAT_14c949610 != DVar1) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c949608);
    LOCK();
    UNLOCK();
    DAT_14c949610 = DVar1;
  }
  DAT_14c949614 = DAT_14c949614 + 1;
  FUN_1410720c4();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  uVar2 = FUN_14107234a();
  FUN_141072054(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141072054 FUN_141072054 body=56 status=ok
// SIG undefined FUN_141072054(void)

void FUN_141072054(undefined8 *param_1)

{
  int *piVar1;
  PSRWLOCK SRWLock;
  
  SRWLock = (PSRWLOCK)*param_1;
  GetCurrentThreadId();
  piVar1 = (int *)((longlong)&SRWLock[1].Ptr + 4);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)&SRWLock[1].Ptr = 0;
    ReleaseSRWLockExclusive(SRWLock);
  }
  FUN_14107208c(param_1);
  return;
}



// FUNCTION 14107208c FUN_14107208c body=55 status=ok
// SIG undefined FUN_14107208c(void)

void FUN_14107208c(undefined8 *param_1)

{
  int *piVar1;
  PSRWLOCK SRWLock;
  
  if (*(char *)(param_1 + 1) == '\x01') {
    SRWLock = (PSRWLOCK)*param_1;
    if (*(int *)((longlong)&SRWLock[1].Ptr + 4) < 1) {
                    /* WARNING: Could not recover jumptable at 0x0001410720bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared(SRWLock);
      return;
    }
    GetCurrentThreadId();
    piVar1 = (int *)((longlong)&SRWLock[1].Ptr + 4);
    *piVar1 = *piVar1 + -1;
  }
  return;
}



// FUNCTION 1410720c4 FUN_1410720c4 body=644 status=ok
// SIG undefined FUN_1410720c4(void)

void FUN_1410720c4(void)

{
  DWORD DVar1;
  undefined1 auStack_78 [36];
  undefined1 local_54 [8];
  undefined4 local_4c;
  undefined *local_48;
  undefined1 local_40;
  undefined1 *local_38;
  undefined4 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((DAT_14c86a9f8 == '\x01') &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 1)) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if ((DAT_14c949554 & 1) == 0) {
    local_48 = &DAT_14c949608;
    local_40 = 0;
    DVar1 = GetCurrentThreadId();
    if (DAT_14c949610 != DVar1) {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c949608);
      LOCK();
      UNLOCK();
      DAT_14c949610 = DVar1;
    }
    DAT_14c949614 = DAT_14c949614 + 1;
    local_4c = 1;
    FUN_1446f470e(local_54,L"ObjectRedirects",1);
    local_38 = local_54;
    local_30 = &local_4c;
    FUN_145afd19e(local_24,&local_38);
    local_4c = 2;
    FUN_1446f470e(local_54,L"ClassRedirects",1);
    local_38 = local_54;
    local_30 = &local_4c;
    FUN_145afd19e(local_24,&local_38);
    local_4c = 4;
    FUN_1446f470e(local_54,L"StructRedirects",1);
    local_38 = local_54;
    local_30 = &local_4c;
    FUN_145afd19e(local_24,&local_38);
    local_4c = 8;
    FUN_1446f470e(local_54,L"EnumRedirects",1);
    local_38 = local_54;
    local_30 = &local_4c;
    FUN_145afd19e(local_24,&local_38);
    local_4c = 0x10;
    FUN_1446f470e(local_54,L"FunctionRedirects",1);
    local_38 = local_54;
    local_30 = &local_4c;
    FUN_145afd19e(local_24,&local_38);
    local_4c = 0x20;
    FUN_1446f470e(local_54,L"PropertyRedirects",1);
    local_38 = local_54;
    local_30 = &local_4c;
    FUN_145afd19e(local_24,&local_38);
    local_4c = 0x40;
    FUN_1446f470e(local_54,L"PackageRedirects",1);
    local_38 = local_54;
    local_30 = &local_4c;
    FUN_145afd19e(local_24,&local_38);
    local_4c = 0x80;
    FUN_1446f470e(local_54,L"AssetRedirects",1);
    local_38 = local_54;
    local_30 = &local_4c;
    FUN_145afd19e(local_24,&local_38);
    FUN_146267f76(&local_48);
    FUN_1407a34cc(0x4020040);
    DAT_14c949554 = 1;
    FUN_141072054(&local_48);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14107234a FUN_14107234a body=746 status=ok
// SIG undefined FUN_14107234a(void)

ulonglong FUN_14107234a(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  undefined8 local_130;
  int local_128;
  longlong local_120;
  int local_118;
  longlong local_110;
  int local_108;
  undefined8 local_100;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 local_d4;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 == 0) {
    local_138 = (undefined8 *)0x0;
  }
  else {
    lVar2 = *param_1;
    lVar12 = 0;
    local_138 = (undefined8 *)0x0;
    do {
      if (((*(longlong *)(lVar2 + 4 + lVar12) != 0) || (*(longlong *)(lVar2 + 0x14 + lVar12) != 0))
         && ((*(longlong *)(lVar2 + 0x1c + lVar12) != 0 ||
             (*(longlong *)(lVar2 + 0x2c + lVar12) != 0)))) {
        puVar1 = (undefined8 *)(lVar2 + lVar12);
        plVar9 = (longlong *)(lVar2 + lVar12 + 4);
        plVar10 = (longlong *)(lVar2 + lVar12 + 0x1c);
        if (-1 < (char)*(undefined4 *)puVar1) {
          cVar4 = FUN_1407d01da(plVar9);
          if (cVar4 == '\0') {
            FUN_1400021e4(lVar2 + lVar12 + 0x14,&local_120);
            local_110 = local_120;
            local_108 = local_118 + -1;
            if (local_118 == 0) {
              local_108 = 0;
            }
            cVar5 = FUN_144a427d4(&local_110);
            bVar6 = 1;
            if (cVar5 != '\0') {
              cVar5 = FUN_1407d01da(plVar10,*(undefined4 *)puVar1);
              if (cVar5 == '\0') goto LAB_141072462;
              bVar6 = 0;
            }
LAB_1410724c0:
            if (local_120 != 0) {
              FUN_1400020a8();
            }
            if (bVar6 != 0) goto LAB_1410725dd;
          }
          else {
            cVar5 = FUN_1407d01da(plVar10,*(undefined4 *)puVar1);
            if (cVar5 == '\0') {
LAB_141072462:
              FUN_1400021e4(lVar2 + lVar12 + 0x2c,&local_100);
              local_130 = CONCAT44(local_100._4_4_,(undefined4)local_100);
              local_128 = iStack_f8 + -1;
              if (iStack_f8 == 0) {
                local_128 = 0;
              }
              bVar6 = FUN_144a427d4(&local_130);
              if (CONCAT44(local_100._4_4_,(undefined4)local_100) != 0) {
                FUN_1400020a8();
              }
              if (cVar4 == '\0') {
                bVar6 = bVar6 ^ 1;
                goto LAB_1410724c0;
              }
              if (bVar6 == 0) goto LAB_1410725dd;
            }
          }
        }
        puVar7 = puVar1;
        cVar4 = FUN_1427e0aac(puVar1);
        if (((cVar4 != '\0') &&
            (((*plVar9 != *plVar10 ||
              (*(longlong *)(lVar2 + 0xc + lVar12) != *(longlong *)(lVar2 + 0x24 + lVar12))) ||
             (puVar7 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar7 >> 8),1), local_138 = puVar7,
             *(longlong *)(lVar2 + 0x14 + lVar12) != *(longlong *)(lVar2 + 0x2c + lVar12))))) &&
           (local_138 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar7 >> 8),1),
           *(int *)(lVar2 + 0x84 + lVar12) < *(int *)(lVar2 + 0x58 + lVar12))) {
          puVar7 = puVar1;
          puVar11 = &local_100;
          for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
            *puVar11 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar11 = puVar11 + 1;
          }
          local_b8 = *(undefined4 *)(puVar1 + 9);
          local_90 = 0;
          local_88 = 0;
          local_b0 = 0;
          uStack_a8 = 0;
          local_84 = 0xffffffff00000080;
          local_7c = 0;
          local_70 = 0;
          local_68 = 0;
          FUN_14058acb2(&local_b0,lVar2 + lVar12 + 0x50);
          local_100._4_4_ = local_e4;
          iStack_f8 = iStack_e0;
          uStack_f4 = uStack_dc;
          uStack_f0 = uStack_d8;
          local_ec = local_d4;
          FUN_1427e0aac(&local_100);
          local_68 = 0;
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          FUN_1407a3a68(&local_b0);
        }
      }
LAB_1410725dd:
      lVar12 = lVar12 + 0xa0;
    } while ((longlong)(int)lVar3 * 0xa0 != lVar12);
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)local_138 & 0xffffffffffffff01;
}



// FUNCTION 141072636 FUN_141072636 body=1842 status=ok
// SIG undefined FUN_141072636(void)

void FUN_141072636(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  void *pvVar4;
  int iVar5;
  wchar_t *pwVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_308 [40];
  undefined1 local_2e0 [4];
  undefined1 local_2dc [4];
  longlong *local_2d8 [2];
  undefined8 local_2c8;
  longlong *local_2c0;
  longlong *local_2b8 [2];
  undefined8 local_2a8;
  longlong *plStack_2a0;
  longlong *local_290 [2];
  longlong *local_280 [2];
  undefined8 local_270;
  longlong *local_268;
  wchar_t **local_260;
  ulonglong *local_258;
  longlong *local_250;
  undefined4 local_248;
  wchar_t *local_240;
  undefined4 local_238;
  longlong local_228;
  undefined1 local_180 [24];
  undefined4 local_168;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_88 = DAT_14cb8dd60;
  local_80[0] = DAT_14cb8dd68;
  FUN_1448075d0(&local_240);
  iVar2 = *param_2;
  iVar5 = (int)local_240;
  if (local_228 != 0) {
    FUN_1400020a8();
  }
  if (iVar2 == iVar5) {
    local_240 = L"ProfileSaveTitle";
    local_238 = 0x10;
    FUN_1446e940c(&local_250,&local_240);
    local_240 = L"OakPPVault";
    local_238 = 10;
    FUN_1446e940c(&local_260,&local_240);
    local_240 = L"User Settings";
    local_238 = 0xd;
    FUN_140208c1e(&local_88,&local_260,&local_250,&local_240);
    pwVar8 = local_88;
    if (*(code **)(*(longlong *)local_88 + 0x50) != FUN_144828418) {
      pwVar8 = (wchar_t *)(**(code **)(*(longlong *)local_88 + 0x50))();
    }
    FUN_1447a1fc0(pwVar8);
    pcVar3 = *(code **)(*(longlong *)local_88 + 0x28);
    if (pcVar3 == FUN_14482841c) {
      pwVar8 = local_88 + 0xc;
      if (*(longlong *)(local_88 + 0x14) != 0) {
        pwVar8 = (wchar_t *)(*(longlong *)(local_88 + 0x14) + 8);
      }
    }
    else if (pcVar3 == (code *)&LAB_14010c34c) {
      pwVar8 = local_88 + 8;
    }
    else {
      pwVar8 = (wchar_t *)(*pcVar3)(local_88);
    }
    local_240 = (wchar_t *)CONCAT62(local_240._2_6_,2);
    pwVar6 = (wchar_t *)FUN_141072ec0(param_4,2);
    if (pwVar6 != pwVar8) {
      iVar2 = *(int *)(pwVar8 + 4);
      pvVar4 = *(void **)pwVar8;
      *(int *)(pwVar6 + 4) = iVar2;
      if (iVar2 == 0 && *(int *)(pwVar6 + 6) == 0) {
        pwVar6[6] = L'\0';
        pwVar6[7] = L'\0';
      }
      else {
        FUN_1446dd670(pwVar6,iVar2);
        if (iVar2 != 0) {
          memcpy(*(void **)pwVar6,pvVar4,(longlong)iVar2 * 2);
        }
      }
    }
    if (local_88 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_88 + 0x10))();
    }
  }
  else {
    FUN_141073488(&local_240);
    FUN_141073756(&local_240,param_1,param_3);
    local_88 = L"CharacterSaveTitle";
    local_80[0] = 0x12;
    FUN_1446e940c(&local_260,&local_88);
    local_88 = L"OakPPVault";
    local_80[0] = 10;
    FUN_1446e940c(&local_270,&local_88);
    local_88 = L"Character Save";
    local_80[0] = 0xe;
    FUN_140208c1e(&local_250,&local_270,&local_260,&local_88);
    plVar9 = local_250;
    if (*(code **)(*local_250 + 0x50) != FUN_144828418) {
      plVar9 = (longlong *)(**(code **)(*local_250 + 0x50))();
    }
    FUN_1447a1fc0(plVar9);
    pcVar3 = *(code **)(*local_250 + 0x28);
    if (pcVar3 == FUN_14482841c) {
      plVar9 = local_250 + 3;
      if (local_250[5] != 0) {
        plVar9 = (longlong *)(local_250[5] + 8);
      }
    }
    else if (pcVar3 == (code *)&LAB_14010c34c) {
      plVar9 = local_250 + 2;
    }
    else {
      plVar9 = (longlong *)(*pcVar3)(local_250);
    }
    local_88 = (wchar_t *)CONCAT62(local_88._2_6_,2);
    plVar7 = (longlong *)FUN_141072ec0(param_4,2);
    if (plVar7 != plVar9) {
      iVar2 = (int)plVar9[1];
      pvVar4 = (void *)*plVar9;
      *(int *)(plVar7 + 1) = iVar2;
      if (iVar2 == 0 && *(int *)((longlong)plVar7 + 0xc) == 0) {
        *(undefined4 *)((longlong)plVar7 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(plVar7,iVar2);
        if (iVar2 != 0) {
          memcpy((void *)*plVar7,pvVar4,(longlong)iVar2 * 2);
        }
      }
    }
    if (local_250 != (longlong *)0x0) {
      (**(code **)(*local_250 + 0x10))();
    }
    local_2a8 = 0;
    plStack_2a0 = (longlong *)0x0;
    FUN_1413a454c(local_290,local_168,0);
    FUN_140009b9a(local_2b8,local_180);
    local_88 = L"CharacterSaveSubTitle";
    local_80[0] = 0x15;
    FUN_1446e940c(local_2dc,&local_88);
    local_88 = L"OakPPVault";
    local_80[0] = 10;
    FUN_1446e940c(local_2e0,&local_88);
    local_88 = L"{0} - Level {1}";
    local_80[0] = 0xf;
    FUN_140208c1e(local_2d8,local_2e0,local_2dc,&local_88);
    FUN_14023409e(&local_2c8,local_2d8,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_2b8);
    local_68 = 4;
    FUN_14023423e(local_58,local_290);
    local_258 = &local_48;
    local_260 = &local_88;
    FUN_14010d304(&local_250);
    local_270 = local_2c8;
    local_268 = local_2c0;
    if (local_2c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2c0 + 1) = (int)local_2c0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_280,&local_270,&local_250);
    FUN_14007f2db(local_250,local_248);
    if (local_250 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    lVar10 = 0x30;
    do {
      plVar9 = *(longlong **)((longlong)local_80 + lVar10 + -8);
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar10 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar10) = 0;
      }
      lVar10 = lVar10 + -0x20;
    } while (lVar10 != -0x10);
    if (local_2c0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_2c0 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_2c0)(local_2c0);
        LOCK();
        piVar1 = (int *)((longlong)local_2c0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_2c0 + 0x10))(local_2c0);
        }
      }
    }
    if (local_2b8[0] != (longlong *)0x0) {
      (**(code **)(*local_2b8[0] + 0x10))();
    }
    if (local_290[0] != (longlong *)0x0) {
      (**(code **)(*local_290[0] + 0x10))();
    }
    plVar9 = local_280[0];
    if (*(code **)(*local_280[0] + 0x50) != FUN_144828418) {
      plVar9 = (longlong *)(**(code **)(*local_280[0] + 0x50))(local_280[0]);
    }
    FUN_1447a1fc0(plVar9);
    pcVar3 = *(code **)(*local_280[0] + 0x28);
    if (pcVar3 == FUN_14482841c) {
      plVar9 = (longlong *)(local_280[0][5] + 8);
      if (local_280[0][5] == 0) {
        plVar9 = local_280[0] + 3;
      }
    }
    else if (pcVar3 == (code *)&LAB_14010c34c) {
      plVar9 = local_280[0] + 2;
    }
    else {
      plVar9 = (longlong *)(*pcVar3)(local_280[0]);
    }
    local_88 = (wchar_t *)CONCAT62(local_88._2_6_,3);
    plVar7 = (longlong *)FUN_141072ec0(param_4,3);
    if (plVar7 != plVar9) {
      iVar2 = (int)plVar9[1];
      pvVar4 = (void *)*plVar9;
      *(int *)(plVar7 + 1) = iVar2;
      if (iVar2 == 0 && *(int *)((longlong)plVar7 + 0xc) == 0) {
        *(undefined4 *)((longlong)plVar7 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(plVar7,iVar2);
        if (iVar2 != 0) {
          memcpy((void *)*plVar7,pvVar4,(longlong)iVar2 * 2);
        }
      }
    }
    if (local_280[0] != (longlong *)0x0) {
      (**(code **)(*local_280[0] + 0x10))(local_280[0]);
    }
    if (local_2d8[0] != (longlong *)0x0) {
      (**(code **)(*local_2d8[0] + 0x10))();
    }
    plVar9 = plStack_2a0;
    if (plStack_2a0 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_2a0 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plStack_2a0)(plStack_2a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    FUN_141072d6a(&local_240);
  }
  if ((local_48 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141072d6a FUN_141072d6a body=342 status=ok
// SIG undefined FUN_141072d6a(void)

void FUN_141072d6a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b712950;
  if (param_1[0x34] != 0) {
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
  plVar3 = (longlong *)param_1[0x31];
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
  FUN_140cb1696(param_1[0x2e],*(undefined4 *)(param_1 + 0x2f));
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x27] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x27] + 0x10))();
  }
  if ((longlong *)param_1[0x23] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x23] + 0x10))();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b0703c0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141072ec0 FUN_141072ec0 body=1480 status=ok
// SIG undefined FUN_141072ec0(void)

longlong FUN_141072ec0(longlong *param_1,uint param_2,short *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  short sVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte bVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  longlong *plVar21;
  ulonglong uVar22;
  int iVar23;
  longlong lVar24;
  int iVar25;
  ulonglong uVar26;
  
  iVar23 = (int)param_1[1];
  iVar25 = *(int *)((longlong)param_1 + 0x34);
  if (iVar23 != iVar25) {
    plVar12 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar12 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        lVar13 = *param_1 + (longlong)iVar10 * 0x20;
        if (*(short *)(*param_1 + (longlong)iVar10 * 0x20) == *param_3) {
          if (lVar13 != 0) goto LAB_141073252;
          break;
        }
        iVar10 = *(int *)(lVar13 + 0x18);
      } while (iVar10 != -1);
    }
  }
  if (iVar25 == 0) {
    *(int *)(param_1 + 1) = iVar23 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar23) {
      FUN_1447711aa(param_1,iVar23);
    }
    iVar25 = (int)param_1[5];
    if (iVar25 == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = iVar25 + 0x1e;
      if (-1 < iVar25 + -1) {
        iVar10 = iVar25 + -1;
      }
      iVar10 = iVar10 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar16 = iVar25 + 1;
    iVar19 = iVar25 + 0x1f;
    if (-1 < iVar25) {
      iVar19 = iVar25;
    }
    if (iVar19 >> 5 == iVar10) {
      *(int *)(param_1 + 5) = iVar16;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar25) {
        if (iVar25 + 0x20U < 0xa0) {
          iVar16 = 0x80;
          iVar10 = iVar25;
        }
        else {
          uVar18 = iVar25 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = (uVar18 * 3 >> 3) + uVar18 + 0x10;
          }
          uVar14 = FUN_144a3809e(uVar11 << 2,0);
          iVar10 = (int)(uVar14 >> 2);
          iVar16 = -0x20;
          if ((int)uVar18 <= iVar10) {
            iVar16 = iVar10 << 5;
          }
          iVar10 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar16;
        FUN_1446efbd8(plVar12,iVar10);
        iVar16 = (int)param_1[5] + 1;
      }
      iVar10 = iVar16 + 0x1f;
      if (-1 < iVar16) {
        iVar10 = iVar16;
      }
      *(int *)(param_1 + 5) = iVar16;
      if (iVar16 % 0x20 != 0) {
        plVar21 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar21 = plVar12;
        }
        bVar15 = -(char)(iVar16 % 0x20);
        *(uint *)((longlong)plVar21 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar21 + (longlong)(iVar10 >> 5) * 4) << (bVar15 & 0x1f)) >>
             (bVar15 & 0x1f);
      }
    }
    lVar13 = (longlong)iVar23;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar15 = (byte)iVar25 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar19 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
  }
  else {
    iVar23 = (int)param_1[6];
    lVar13 = (longlong)iVar23;
    iVar10 = *(int *)(*param_1 + 4 + lVar13 * 0x20);
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar25 + -1;
    if (iVar25 + -1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar10 * 0x20) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  puVar17 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar17 = puVar1;
  }
  iVar25 = iVar23 + 0x1f;
  if (-1 < iVar23) {
    iVar25 = iVar23;
  }
  puVar17[iVar25 >> 5] = puVar17[iVar25 >> 5] | 1 << ((byte)iVar23 & 0x1f);
  uVar18 = 1;
  lVar24 = *param_1;
  lVar13 = lVar13 * 0x20;
  puVar2 = (undefined4 *)(lVar24 + lVar13);
  sVar5 = *param_3;
  *(short *)(lVar24 + lVar13) = sVar5;
  puVar4 = (undefined8 *)(lVar24 + 8 + lVar13);
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)(lVar24 + 0x18 + lVar13) = 0xffffffff;
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (1 < uVar11) {
    plVar12 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[8];
    }
    iVar25 = *(int *)((longlong)plVar12 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar25 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar25 * 0x20);
        if (*(short *)(*param_1 + (longlong)iVar25 * 0x20) == sVar5) {
          if (*(longlong *)(puVar3 + 2) != 0) {
            FUN_1400020a8();
          }
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
          *puVar3 = uVar6;
          puVar3[1] = uVar7;
          puVar3[2] = uVar8;
          puVar3[3] = uVar9;
          FUN_148f0345a(param_1,iVar23);
          goto LAB_141073241;
        }
        iVar25 = puVar3[6];
      } while (iVar25 != -1);
    }
  }
  if (3 < uVar11) {
    uVar14 = (ulonglong)(uVar11 & 0xfffffffe) + 0xf;
    lVar13 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar18 = 1 << ((byte)lVar13 & 0x1f);
  }
  if (((int)uVar11 < 1) || ((int)uVar18 <= (int)param_1[9])) {
    param_2 = (int)param_1[9] - 1U & param_2;
    puVar2[7] = param_2;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    puVar2[6] = *(undefined4 *)((longlong)plVar12 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4)
    ;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4) = iVar23;
    goto LAB_141073241;
  }
  *(uint *)(param_1 + 9) = uVar18;
  plVar12 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar12,0,0,4);
    uVar18 = *(uint *)(param_1 + 9);
  }
  plVar21 = param_1 + 7;
  if (uVar18 == 1) {
    if (*plVar12 != 0) {
      FUN_1446efa72(plVar12,0,0,4);
    }
LAB_141073094:
    uVar11 = 0;
    do {
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = plVar21;
      }
      *(undefined4 *)((longlong)plVar12 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4) =
           0xffffffff;
      uVar11 = uVar11 + 1;
    } while (uVar18 != uVar11);
  }
  else {
    if (uVar18 == 0) goto LAB_141073241;
    FUN_1446efa72(plVar12,0,uVar18,4);
    if (0 < (int)uVar18) goto LAB_141073094;
  }
  iVar25 = (int)param_1[5];
  if (iVar25 == 0) {
    uVar14 = 0;
    uVar22 = 1;
    iVar10 = 0;
    iVar16 = 0;
  }
  else {
    puVar17 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar17 = puVar1;
    }
    uVar18 = *puVar17;
    if (uVar18 == 0) {
      iVar10 = iVar25 + 0x1e;
      if (-1 < iVar25 + -1) {
        iVar10 = iVar25 + -1;
      }
      uVar14 = 0;
      uVar22 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar22 = uVar14;
      }
      iVar16 = 0;
      do {
        if (uVar22 == uVar14) goto LAB_141073241;
        iVar16 = iVar16 + 0x20;
        uVar18 = puVar17[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar14 = 0;
      iVar16 = 0;
    }
    uVar22 = (ulonglong)(-uVar18 & uVar18);
    uVar26 = uVar22 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar10 = (iVar16 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar25 <= iVar10) {
      iVar10 = iVar25;
    }
  }
  if (iVar10 < iVar25) {
    uVar18 = 0xffffffff;
    do {
      lVar13 = *param_1;
      lVar24 = (longlong)iVar10 * 0x20;
      uVar26 = (longlong)(int)param_1[9] - 1U & (longlong)*(short *)(lVar13 + lVar24);
      iVar25 = (int)uVar26;
      *(int *)(lVar13 + 0x1c + lVar24) = iVar25;
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = plVar21;
      }
      *(undefined4 *)(lVar13 + 0x18 + lVar24) =
           *(undefined4 *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & uVar26) * 4);
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = plVar21;
      }
      *(int *)((longlong)plVar12 + ((longlong)iVar25 & (longlong)(int)param_1[9] - 1U) * 4) = iVar10
      ;
      uVar18 = ~(uint)uVar22 & uVar18;
      puVar17 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar17 = puVar1;
      }
      iVar25 = (int)param_1[5];
      iVar10 = (int)uVar14;
      lVar13 = (longlong)iVar10;
      uVar11 = puVar17[lVar13] & uVar18;
      if (uVar11 == 0) {
        iVar19 = iVar25 + 0x1e;
        if (-1 < iVar25 + -1) {
          iVar19 = iVar25 + -1;
        }
        iVar19 = iVar19 >> 5;
        iVar20 = iVar19;
        if (iVar19 < iVar10) {
          iVar20 = iVar10;
        }
        if (iVar19 <= iVar10) break;
        lVar24 = 0;
        while( true ) {
          iVar16 = iVar16 + 0x20;
          uVar11 = puVar17[lVar13 + lVar24 + 1];
          if (uVar11 != 0) break;
          lVar24 = lVar24 + 1;
          if (iVar20 - lVar13 == lVar24) goto LAB_141073241;
        }
        uVar14 = (ulonglong)(iVar10 + (int)lVar24 + 1);
        uVar18 = 0xffffffff;
      }
      uVar22 = (ulonglong)(-uVar11 & uVar11);
      uVar26 = uVar22 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar10 = (iVar16 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar10 < iVar25);
  }
LAB_141073241:
  lVar13 = *param_1 + (longlong)iVar23 * 0x20;
LAB_141073252:
  return lVar13 + 8;
}



// FUNCTION 141073488 FUN_141073488 body=717 status=ok
// SIG undefined FUN_141073488(void)

undefined8 * FUN_141073488(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b0703c0;
  FUN_1447a97f4(param_1 + 1,&DAT_14c9485f0);
  FUN_1447a97f4(param_1 + 6,&DAT_14c9485f0);
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x4ade3d;
  *param_1 = &PTR_FUN_14b712950;
  FUN_1447a97f4(param_1 + 0x11,&DAT_14c9485f0);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x23] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 0x25) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x12a) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x27] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined2 *)(param_1 + 0x36) = 0;
  return param_1;
}



// FUNCTION 141073756 FUN_141073756 body=2075 status=ok
// SIG undefined FUN_141073756(void)

void FUN_141073756(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  longlong *plVar3;
  undefined1 uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  int *piVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  int local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 local_50;
  undefined2 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_143e5f0e4();
  lVar8 = FUN_1418b39fa(param_2,&DAT_14cb89248);
  if (lVar8 == 0) {
LAB_1410737db:
    plVar9 = &DAT_14c9a1308;
  }
  else {
    lVar1 = *(longlong *)(lVar8 + 0x88);
    if (*param_3 == 0) {
      plVar9 = &DAT_14c9a1308;
    }
    else {
      plVar9 = (longlong *)FUN_1446e60f4(*param_3,lVar8 + 0x80);
    }
    if (lVar1 != 0) {
      if (*plVar9 == 0) goto LAB_1410737db;
      plVar9 = (longlong *)FUN_1446e60f4(*plVar9,lVar8 + 0x88);
    }
  }
  if (((byte *)*plVar9 != (byte *)0x0) && ((*(byte *)*plVar9 & 0x6b) == 3)) {
    FUN_14151c7bd(&local_78,plVar9);
    *(undefined4 *)(param_1 + 0xb0) = (undefined4)local_78;
    *(undefined4 *)(param_1 + 0xb4) = local_78._4_4_;
    *(undefined4 *)(param_1 + 0xb8) = (undefined4)uStack_70;
    *(undefined4 *)(param_1 + 0xbc) = uStack_70._4_4_;
    FUN_1418eed7d(&local_78,plVar9);
    if ((undefined8 *)(param_1 + 0xc0) == &local_78) {
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0xc0) != 0) {
        FUN_1400020a8();
      }
      *(longlong **)(param_1 + 0xc0) = local_78;
      local_78 = (longlong *)0x0;
      *(undefined4 *)(param_1 + 200) = (undefined4)uStack_70;
      *(undefined4 *)(param_1 + 0xcc) = uStack_70._4_4_;
    }
    FUN_1418eeb7b(&local_78,plVar9);
    *(longlong **)(param_1 + 0xd0) = local_78;
    uVar7 = FUN_140e1e9fc(plVar9,&DAT_14cb790d0);
    *(undefined4 *)(param_1 + 0xd8) = uVar7;
    uVar7 = FUN_140b962c6(plVar9);
    *(undefined4 *)(param_1 + 0xdc) = uVar7;
    FUN_140d796e5(&local_78,plVar9);
    *(longlong **)(param_1 + 0xe0) = local_78;
    FUN_1418eef56(&local_78,plVar9);
    *(longlong **)(param_1 + 300) = local_78;
    FUN_140e04346(&local_78,plVar9);
    plVar13 = *(longlong **)(param_1 + 0x138);
    if (plVar13 != local_78) {
      *(longlong **)(param_1 + 0x138) = local_78;
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 8))();
      }
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
    *(undefined4 *)(param_1 + 0x140) = (undefined4)uStack_70;
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x10))();
    }
    FUN_1418ef10d(&local_78,plVar9);
    FUN_1404e49fa(param_1 + 0x148,&local_78);
    if (local_60 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    uVar4 = FUN_143ca043c(plVar9,1);
    *(undefined1 *)(param_1 + 0x129) = uVar4;
  }
  lVar8 = FUN_1418b39fa(param_2,&DAT_14cb86ae0);
  if (lVar8 == 0) {
LAB_1410739d9:
    plVar9 = &DAT_14c9a1308;
  }
  else {
    lVar1 = *(longlong *)(lVar8 + 0x88);
    if (*param_3 == 0) {
      plVar9 = &DAT_14c9a1308;
    }
    else {
      plVar9 = (longlong *)FUN_1446e60f4(*param_3,lVar8 + 0x80);
    }
    if (lVar1 != 0) {
      if (*plVar9 == 0) goto LAB_1410739d9;
      plVar9 = (longlong *)FUN_1446e60f4(*plVar9,lVar8 + 0x88);
    }
  }
  if (((byte *)*plVar9 == (byte *)0x0) || ((*(byte *)*plVar9 & 0x6b) != 3)) goto LAB_141073be0;
  lVar8 = FUN_1441a6300(plVar9);
  if (lVar8 == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
    plVar3 = DAT_14c844840;
    plVar13 = *(longlong **)(param_1 + 0x118);
    if (plVar13 != DAT_14c844840) {
      *(longlong **)(param_1 + 0x118) = DAT_14c844840;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
    *(undefined4 *)(param_1 + 0x120) = DAT_14c844848;
    FUN_1447715ec(param_1 + 0xf0,&DAT_14c9485f0);
    *(undefined1 *)(param_1 + 0x128) = 0;
  }
  else {
    piVar10 = *(int **)(lVar8 + 8);
    if (piVar10 == (int *)0x0) {
      piVar10 = &DAT_14c9485f0;
    }
    if (((*piVar10 == 0) || (iVar12 = piVar10[1], iVar12 == 0)) || (*piVar10 == DAT_14c948000)) {
LAB_141073df5:
      local_80 = DAT_14c948620;
      local_88 = DAT_14c948618;
    }
    else {
      if ((iVar12 < 2) && (piVar10[9] < 1)) {
        piVar10 = piVar10 + 2;
      }
      else {
        piVar10 = *(int **)(piVar10 + 6);
      }
      if (iVar12 < 1) goto LAB_141073df5;
      local_80 = piVar10[2];
      local_88 = *(undefined8 *)piVar10;
    }
    FUN_143deff24((ulonglong)((uint)*(ushort *)(lVar8 + 0x53a) * 0x18) +
                  *(longlong *)(DAT_14cb86da8 + 0x370),&local_78,&local_88,0);
    FUN_140008f88(param_1 + 0x118,&local_78);
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x10))();
    }
    puVar14 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar8 + 8) != (undefined4 *)0x0) {
      puVar14 = *(undefined4 **)(lVar8 + 8);
    }
    FUN_1447715ec(param_1 + 0xf0,puVar14);
    local_78 = *(longlong **)(lVar8 + 0x4f0);
    uStack_70 = (longlong *)CONCAT44(uStack_70._4_4_,*(undefined4 *)(lVar8 + 0x4f8));
    cVar5 = FUN_1407a73f8(&local_78,&DAT_14cbcdda8);
    uVar6 = 1;
    uVar4 = 1;
    if (cVar5 == '\0') {
      uVar4 = FUN_1407a73f8(&local_78,&DAT_14cbcddb8);
    }
    *(undefined1 *)(param_1 + 0x128) = uVar4;
    cVar5 = FUN_1407a73f8(&local_78,&DAT_14cbcdda0);
    if (cVar5 == '\0') {
      uVar6 = FUN_1407a73f8(&local_78,&DAT_14cbcddb8);
    }
    *(undefined1 *)(param_1 + 0x12a) = uVar6;
  }
  uVar7 = FUN_1407a6902(plVar9);
  *(undefined4 *)(param_1 + 0xe8) = uVar7;
LAB_141073be0:
  pbVar2 = (byte *)*param_3;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar9 = &DAT_14c9a1288;
    }
    else {
      plVar9 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
      plVar13 = plVar9 + 8;
      if ((longlong *)plVar9[9] != (longlong *)0x0) {
        plVar13 = (longlong *)plVar9[9];
      }
      iVar12 = *(int *)((longlong)plVar13 + (ulonglong)((int)plVar9[10] - 1U & DAT_14cbe66c8) * 4);
      if (iVar12 != -1) {
        do {
          lVar8 = *plVar9 + (longlong)iVar12 * 0x40;
          if (*(uint *)(*plVar9 + (longlong)iVar12 * 0x40) == DAT_14cbe66c8) {
            if (((lVar8 != 0) &&
                (puVar11 = (undefined8 *)(lVar8 + 0x28), puVar11 != (undefined8 *)0x0)) &&
               (((byte *)*puVar11 != (byte *)0x0 && ((*(byte *)*puVar11 & 0x40) == 0))))
            goto LAB_141073c6c;
            break;
          }
          iVar12 = *(int *)(lVar8 + 0x38);
        } while (iVar12 != -1);
      }
    }
  }
  puVar11 = &DAT_14c9a1308;
LAB_141073c6c:
  if (((byte *)*puVar11 != (byte *)0x0) && ((*(byte *)*puVar11 & 0x6b) == 3)) {
    FUN_140cb21a8(&local_78,puVar11);
    FUN_140cb1648(param_1 + 0x170,&local_78);
    FUN_140cb1696(local_78,(ulonglong)uStack_70 & 0xffffffff);
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_140cb1980(&local_78,puVar11);
    plVar9 = uStack_70;
    if ((undefined8 *)(param_1 + 0x180) == &local_78) {
      *(undefined2 *)(param_1 + 0x1b0) = local_48;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      *(longlong **)(param_1 + 0x180) = local_78;
      local_78 = (longlong *)0x0;
      plVar13 = *(longlong **)(param_1 + 0x188);
      if (uStack_70 != plVar13) {
        uStack_70 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x188) = plVar9;
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar13 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar10 = (int *)((longlong)plVar13 + 0xc);
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (*piVar10 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
        }
      }
      plVar13 = local_60;
      *(undefined8 *)(param_1 + 400) = local_68;
      local_68 = 0;
      plVar9 = *(longlong **)(param_1 + 0x198);
      if (local_60 != plVar9) {
        local_60 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x198) = plVar13;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar9 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar10 = (int *)((longlong)plVar9 + 0xc);
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (*piVar10 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
      }
      if (*(longlong *)(param_1 + 0x1a0) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x1a0) = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 0x1a8) = (undefined4)local_50;
      *(undefined4 *)(param_1 + 0x1ac) = local_50._4_4_;
      local_50 = 0;
      *(undefined2 *)(param_1 + 0x1b0) = local_48;
    }
    plVar9 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_60 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar10 = (int *)((longlong)plVar9 + 0xc);
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (*piVar10 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    plVar9 = uStack_70;
    if (uStack_70 != (longlong *)0x0) {
      LOCK();
      plVar13 = uStack_70 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*uStack_70)(uStack_70);
        LOCK();
        piVar10 = (int *)((longlong)plVar9 + 0xc);
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (*piVar10 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141073f72 FUN_141073f72 body=31 status=ok
// SIG undefined FUN_141073f72(void)

void FUN_141073f72(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x60,0x10);
  FUN_141073f92(uVar1);
  return;
}



// FUNCTION 141073f92 FUN_141073f92 body=147 status=ok
// SIG undefined FUN_141073f92(void)

undefined8 * FUN_141073f92(undefined8 *param_1)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149eb5db0;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(param_1 + 1) = DVar1;
  *param_1 = &PTR_FUN_149eb0588;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar2[9] = 0;
  *(undefined4 *)(puVar2 + 10) = 0;
  puVar2[0xb] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  param_1[0xb] = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)puVar2 = 1;
  }
  return param_1;
}



// FUNCTION 141074026 FUN_141074026 body=106 status=ok
// SIG undefined FUN_141074026(void)

undefined8 * FUN_141074026(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_140de970a(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014107403d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar2 = (undefined8 *)(**(code **)(lVar1 + 0x38))();
    return puVar2;
  }
  puVar2 = (undefined8 *)FUN_1400b0774(&DAT_14cb8d9f0);
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14b3e4af0;
  FUN_144a5dc74(puVar2 + 3);
  puVar2[5] = DAT_14caa8578;
  *(undefined1 *)(puVar2 + 6) = 0;
  return puVar2;
}



// FUNCTION 141074090 FUN_141074090 body=291 status=ok
// SIG undefined FUN_141074090(void)

undefined8 * FUN_141074090(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1400b0774(&DAT_14cb8d9f0);
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14b3e4af0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  puVar2[3] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(puVar2 + 4) = 0;
  puVar2[5] = DAT_14caa8578;
  *(undefined1 *)(puVar2 + 6) = 0;
  return puVar2;
}



// FUNCTION 1410741b4 FUN_1410741b4 body=161 status=ok
// SIG undefined FUN_1410741b4(void)

void FUN_1410741b4(longlong param_1,uint param_2,char param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((-1 < (int)param_2) && (uVar4 = (ulonglong)param_2, (int)param_2 < *(int *)(param_1 + 0x3d08))
     ) {
    lVar2 = *(longlong *)(param_1 + 0x3d00);
    lVar3 = *(longlong *)(lVar2 + 0x14 + uVar4 * 0x48);
    cVar1 = *(char *)(lVar2 + 0x10 + uVar4 * 0x48);
    *(longlong *)(lVar2 + 0x14 + uVar4 * 0x48) = param_4;
    *(char *)(lVar2 + 0x10 + uVar4 * 0x48) = param_3;
    if (*(char *)(param_1 + -0x3a70) == '\x03') {
      FUN_140705884(param_1 + 0x3bf0,lVar2 + uVar4 * 0x48);
      if ((param_3 == '\0') && (lVar3 != param_4 || cVar1 != param_3)) {
        FUN_141074256(param_1 + 0x2418,param_2,param_4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141074256 FUN_141074256 body=171 status=ok
// SIG undefined FUN_141074256(void)

void FUN_141074256(longlong *param_1,undefined4 param_2,undefined8 param_3)

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
        goto LAB_1410742eb;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1410742eb:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 141074302 FUN_141074302 body=535 status=ok
// SIG undefined FUN_141074302(void)

undefined8 FUN_141074302(longlong *param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar3 = param_1[6];
  *(undefined1 *)((longlong)param_1 + 0xe6) = *(undefined1 *)(lVar3 + 0xbd8);
  cVar5 = (**(code **)(*param_1 + 0x2b8))(param_1);
  if (cVar5 == '\0') {
    fVar1 = *(float *)((longlong)param_1 + 0xb4);
    if ((fVar1 <= 0.0) || (1 < *(byte *)(param_1 + 0x18))) {
      (**(code **)(*param_1 + 0x310))(param_1);
    }
    else {
      fVar2 = *(float *)(lVar3 + 0x74);
      uVar9 = -(uint)(0.0001 < fVar2);
      lVar6 = (**(code **)(*param_1 + 0x180))(param_1);
      if (*(longlong *)(lVar6 + 0x1f0) == 0) {
        puVar7 = (undefined8 *)(lVar6 + 0x458);
      }
      else {
        puVar7 = (undefined8 *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
      }
      uVar4 = *puVar7;
      local_c0 = (undefined8 *)0x0;
      local_b8 = 0;
      FUN_1446efa72(&local_c0,0,3,0x10);
      puVar7 = local_c0;
      local_b8 = 3;
      *local_c0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar6 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar6 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar6;
      local_c0[2] = lVar8;
      *local_c0 = &PTR_FUN_14b9df150;
      local_c0[3] = 0;
      FUN_14485c47a(local_c0 + 3,lVar3);
      puVar7[4] = param_1;
      local_a8 = 0;
      local_a0 = 0;
      FUN_14487d8d8(&local_a8,&local_c0);
      local_68 = 1;
      local_c8 = local_b0;
      local_b0[0] = 0;
      local_ac = 0xbf800000;
      FUN_1406f4044(uVar4,param_1 + 0x20,&local_a8,
                    fVar1 * (float)(~uVar9 & 0x3f800000 | (uint)(1.0 / fVar2) & uVar9));
      (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
      FUN_1449db362(&local_c0);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141074532 FUN_141074532 body=1247 status=ok
// SIG undefined FUN_141074532(void)

void FUN_141074532(longlong *param_1)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined *puVar10;
  uint *puVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_f8 [32];
  undefined2 *local_d8;
  undefined8 *local_d0;
  int local_c8;
  undefined2 local_c0 [2];
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined1 *)((longlong)param_1 + 0xe1) = 0;
  FUN_141074a32();
  lVar7 = (**(code **)(*param_1 + 0x180))();
  fVar18 = (float)*(double *)(lVar7 + 0x6d0);
  fVar19 = *(float *)((longlong)param_1 + 0x84);
  if ((char)param_1[0x18] == '\x01') {
    fVar17 = (float)FUN_140086a76(param_1);
    param_1[0x1b] = (longlong)(double)(fVar18 - fVar17 * fVar19);
    (**(code **)(*param_1 + 0x380))(param_1,0);
  }
  else {
    param_1[0x1b] = (longlong)(double)fVar18;
  }
  *(undefined1 *)(param_1 + 0x18) = 2;
  bVar6 = *(char *)((longlong)param_1 + 0xc4) << 3 | 2;
  if (*(byte *)((longlong)param_1 + 0xc1) != bVar6) {
    *(byte *)((longlong)param_1 + 0xc1) = bVar6;
    uVar3 = param_1[0xd];
    if (uVar3 < 0xffffffff00000000) {
      plVar12 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar12 = (longlong *)0x0;
      }
      (**(code **)(*plVar12 + 0x58))(plVar12,param_1,uVar3,1);
    }
    else {
      uVar16 = (uint)uVar3;
      if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c998088)) {
        puVar10 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar10 = DAT_14c998080;
        }
        if ((*(uint *)(puVar10 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar16 & 0x1f) & 1) != 0) {
          lVar7 = DAT_14c998060 + (ulonglong)(uVar16 & 0x7fffffff) * 0x68;
          puVar11 = *(uint **)(lVar7 + 0x18);
          if (*(uint **)(lVar7 + 0x18) == (uint *)0x0) {
            puVar11 = (uint *)(lVar7 + 8);
          }
          *puVar11 = *puVar11 | 2;
          *(byte *)(lVar7 + 0x60) = *(byte *)(lVar7 + 0x60) | 1;
        }
      }
    }
  }
  param_1[0x1a] = (longlong)(double)fVar18;
  bVar6 = *(byte *)(param_1[0xe] + 0x1c8);
  if ((bVar6 & 4) != 0) {
    lVar7 = param_1[6];
    bVar1 = *(byte *)(lVar7 + 0xbd8);
    if ((int)(uint)bVar1 < *(int *)(lVar7 + 0xbf0)) {
      lVar7 = *(longlong *)
               (*(longlong *)(lVar7 + 0xbe8) + ((ulonglong)bVar1 + (ulonglong)bVar1 * 0x10 + 8) * 8)
      ;
      if (lVar7 != 0) {
        if (-1 < (char)*(byte *)(lVar7 + 0xc4)) {
          *(byte *)(lVar7 + 0xc4) = *(byte *)(lVar7 + 0xc4) | 0x80;
          bVar6 = *(byte *)(param_1[0xe] + 0x1c8);
        }
      }
    }
  }
  if ((bVar6 & 8) != 0) {
    FUN_148f108c8(param_1,1);
  }
  fVar19 = (float)((double)fVar19 - ((double)fVar18 - (double)param_1[0x1b]));
  if (fVar19 <= 0.0) {
    if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
                    /* WARNING: Could not recover jumptable at 0x0001410749b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 800))(param_1);
    return;
  }
  lVar7 = (**(code **)(*param_1 + 0x180))(param_1);
  if (*(longlong *)(lVar7 + 0x1f0) == 0) {
    puVar8 = (undefined8 *)(lVar7 + 0x458);
  }
  else {
    puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x1f0) + 0xf0);
  }
  uVar4 = *puVar8;
  lVar7 = param_1[6];
  fVar18 = *(float *)(lVar7 + 0x74);
  uVar16 = -(uint)(0.0001 < fVar18);
  local_d0 = (undefined8 *)0x0;
  local_c8 = 0;
  FUN_1446efa72(&local_d0,0,3,0x10);
  puVar8 = local_d0;
  local_c8 = 3;
  *local_d0 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_d0[2] = lVar9;
  *local_d0 = &PTR_FUN_14b9df230;
  local_d0[3] = 0;
  iVar13 = 0;
  if (lVar7 != 0) {
    uVar2 = *(uint *)(lVar7 + 0xc);
    *(uint *)(local_d0 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar13 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar14 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar14);
      }
      LOCK();
      iVar13 = *(int *)(lVar7 + 0x10);
      bVar15 = iVar13 == 0;
      if (bVar15) {
        *(int *)(lVar7 + 0x10) = iVar14;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar13 = iVar14;
      }
    }
  }
  *(int *)((longlong)puVar8 + 0x1c) = iVar13;
  puVar8[4] = param_1;
  local_b8 = 0;
  local_b0 = 0;
  FUN_14487d8d8(&local_b8,&local_d0);
  local_78 = 1;
  local_d8 = local_c0;
  local_c0[0] = 0;
  local_bc = 0xbf800000;
  FUN_1406f4044(uVar4,param_1 + 0x1e,&local_b8,
                (float)(~uVar16 & 0x3f800000 | (uint)(1.0 / fVar18) & uVar16) * fVar19);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
  if (local_c8 != 0) {
    if (local_d0 == (undefined8 *)0x0) goto LAB_1410747cf;
    (**(code **)*local_d0)(local_d0,0);
    FUN_1446efa72(&local_d0,0,0,0x10);
    local_c8 = 0;
  }
  if (local_d0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1410747cf:
  FUN_141074ab4(param_1);
  (**(code **)(*param_1 + 0x348))(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_f8);
}



// FUNCTION 141074a32 FUN_141074a32 body=129 status=ok
// SIG undefined FUN_141074a32(void)

void FUN_141074a32(longlong param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  bVar1 = *(byte *)(param_1 + 0xe6);
  if ((int)(uint)bVar1 < *(int *)(*(longlong *)(param_1 + 0x30) + 0xbf0)) {
    plVar4 = *(longlong **)
              (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xbe8) + 8 +
              (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
  }
  else {
    plVar4 = (longlong *)0x0;
  }
  *(undefined4 *)(param_1 + 0xec) = 0;
  if (*(char *)(param_1 + 0xe5) == '\x01') {
    if (((*(byte *)(*(longlong *)(param_1 + 0x70) + 0x1c8) & 2) == 0) &&
       (iVar2 = (**(code **)(*plVar4 + 0x3c8))(plVar4), iVar2 != 1)) {
      return;
    }
    uVar3 = (**(code **)(*plVar4 + 0x348))(plVar4);
    *(undefined4 *)(param_1 + 0xec) = uVar3;
  }
  return;
}



// FUNCTION 141074ab4 FUN_141074ab4 body=558 status=ok
// SIG undefined FUN_141074ab4(void)

void FUN_141074ab4(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 *local_e0;
  longlong local_d0;
  longlong local_c8;
  undefined1 local_b9;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a8 [40];
  undefined4 local_80;
  undefined1 local_78 [40];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar4 = *(uint *)(*(longlong *)(param_1 + 0x70) + 0x238);
  uVar10 = (ulonglong)uVar4;
  if ((0 < (int)uVar4) &&
     (lVar5 = *(longlong *)(param_1 + 0x30), *(char *)(lVar5 + 0x178) == '\x03')) {
    local_c8 = *(longlong *)(lVar5 + 0x1b0);
    plVar1 = (longlong *)(param_1 + 0x108);
    if (*(uint *)(param_1 + 0x110) != uVar4) {
      FUN_148f10aba(plVar1,uVar4);
    }
    lVar9 = 8;
    lVar12 = 0;
    do {
      if ((*(byte *)(param_1 + 0xc0) == 0) ||
         (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x230),
         (*(uint *)(lVar6 + -8 + lVar9) >> (*(byte *)(param_1 + 0xc0) & 0x1f) & 1) == 0)) {
        cVar8 = FUN_141105466(*plVar1 + lVar12);
        if (cVar8 != '\0') {
          FUN_140fbcb7d(*plVar1 + lVar12);
        }
      }
      else {
        cVar8 = FUN_141105466(*plVar1 + lVar12);
        lVar11 = local_c8;
        if (cVar8 == '\0') {
          local_d0 = lVar6 + lVar9;
          if (*(char *)(lVar6 + -4 + lVar9) == '\x01') {
            local_a8[0] = 0;
            local_80 = 0;
            FUN_1456bb102(local_a8,local_c8);
            local_78[0] = 0;
            local_50 = 0;
            FUN_1456bb102(local_78,lVar5);
          }
          else {
            local_a8[0] = 0;
            local_80 = 0;
            FUN_1456bb102(local_a8,lVar5);
            local_78[0] = 0;
            local_50 = 0;
            lVar11 = lVar5;
          }
          local_e0 = &local_b9;
          local_e8 = 0;
          FUN_140c3fd92(local_d0,local_b8,lVar11,local_a8);
          FUN_1418e83ea(*plVar1 + lVar12,local_b8);
          plVar7 = local_b0;
          if (local_b0 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_b0 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_b0)(local_b0);
              LOCK();
              piVar3 = (int *)((longlong)plVar7 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
              }
            }
          }
          FUN_144a5ac3a(local_78);
          FUN_144a5ac3a(local_a8);
        }
      }
      lVar12 = lVar12 + 0x10;
      lVar9 = lVar9 + 0x78;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141074ce4 FUN_141074ce4 body=919 status=ok
// SIG undefined FUN_141074ce4(void)

void FUN_141074ce4(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined1 auStack_b8 [32];
  uint local_98;
  code *local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_48;
  longlong *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined1 *)((longlong)param_1 + 0xe2) = 0;
  if (*(float *)(param_1 + 0x12) <= 0.0) {
    *(undefined4 *)(param_1 + 0x1d) = 0;
  }
  cVar5 = (**(code **)(*param_1 + 0x340))(param_1);
  if (cVar5 != '\0') {
    FUN_14107507c(param_1,1);
  }
  pcVar8 = (code *)param_1[6];
  if (pcVar8 != (code *)0x0) {
    if (DAT_14cbbd498 == 0) {
      local_60 = &local_48;
      local_48 = FUN_140940982;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_146572ba2;
      local_68 = &LAB_148ca13ba;
      local_70 = &LAB_140e51436;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = (code *)CONCAT44(local_90._4_4_,8);
      local_98 = 0x1068;
      FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
    }
    if ((*(int *)(DAT_14cbbd498 + 0x38) <= *(int *)(*(longlong *)(pcVar8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pcVar8 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) == DAT_14cbbd498 + 0x30)) goto LAB_141074d78;
  }
  pcVar8 = (code *)0x0;
LAB_141074d78:
  if (pcVar8[0x178] == (code)0x3) {
    FUN_1447cd2ec(pcVar8 + 0xad0,0);
  }
  local_40 = DAT_14cbe7740;
  local_48 = pcVar8;
  FUN_1447cd2ec(pcVar8 + 0xaf0);
  pcVar8[0xbd9] = pcVar8[0xbda];
  iVar6 = FUN_14487fd02(pcVar8);
  if (iVar6 != 1) {
    local_98 = local_98 & 0xffffff00;
    FUN_140980406(pcVar8,DAT_14cbe7708,*(undefined1 *)((longlong)param_1 + 0xe6),
                  *(undefined4 *)((longlong)param_1 + 0xec));
    (**(code **)(*(longlong *)(pcVar8 + 0x520) + 0x10))(pcVar8 + 0x520,&local_48);
    plVar4 = local_40;
    pcVar3 = local_48;
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
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
    if (pcVar3 != (code *)0x0) {
      FUN_1410eba38(pcVar3,0,*(undefined1 *)((longlong)param_1 + 0xe6));
    }
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
    uVar9 = FUN_140086a76(param_1);
    lVar7 = param_1[0xe];
    if (*(longlong *)(lVar7 + 0x224) != 0) {
      local_40 = (longlong *)((ulonglong)local_40 & 0xffffff0000000000);
      local_48 = DAT_14cbe7708;
      local_38 = 1 << (*(byte *)((longlong)param_1 + 0xe6) & 0x1f);
      (**(code **)(*(longlong *)(pcVar8 + 0x8c0) + 0x20))
                (pcVar8 + 0x8c0,*(longlong *)(lVar7 + 0x224),uVar9);
      lVar7 = param_1[0xe];
    }
    if (0 < *(int *)(lVar7 + 0x248)) {
      uVar9 = FUN_140086a76(param_1);
      local_98 = 0;
      local_90 = pcVar8;
      FUN_148f10b34(param_1,param_1[0xe] + 0x240,DAT_14cbe7708,uVar9);
    }
    local_90 = (code *)((ulonglong)local_90 & 0xffffffffffffff00);
    local_98 = local_98 & 0xffffff00;
    cVar5 = FUN_140dd024a(pcVar8,DAT_14cbe76e8,0x3f800000,0);
    if (cVar5 != '\0') {
      *(char *)(param_1 + 0x19) = cVar5;
    }
    *(undefined1 *)((longlong)param_1 + 0xe2) = 0;
    lVar7 = param_1[0xe];
    if ((*(longlong *)(lVar7 + 0x260) != 0) && (*(int *)(lVar7 + 0x268) - 1U < 0xfffffffe)) {
      FUN_1410750a6(param_1,lVar7 + 0x260,*(undefined1 *)(lVar7 + 0x290));
      *(undefined1 *)((longlong)param_1 + 0xe3) = 1;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14107507c FUN_14107507c body=41 status=ok
// SIG undefined FUN_14107507c(void)

void FUN_14107507c(ulonglong param_1,byte param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_58 [44];
  undefined1 auStack_2c [4];
  ulonglong uStack_28;
  ulonglong uStack_20;
  
  if ((*(byte *)(param_1 + 0x28) & 1) != param_2) {
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfe | param_2;
    plVar2 = *(longlong **)(param_1 + 0x30);
    if (plVar2 != (longlong *)0x0) {
      uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
      uStack_28 = param_1;
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(uStack_20 ^ (ulonglong)auStack_58);
      }
      if ((int)plVar2[0x1b2] != *(int *)((longlong)plVar2 + 0xdbc)) {
        uVar3 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        plVar4 = plVar2 + 0x1b8;
        if ((longlong *)plVar2[0x1b9] != (longlong *)0x0) {
          plVar4 = (longlong *)plVar2[0x1b9];
        }
        iVar5 = *(int *)((longlong)plVar4 +
                        (ulonglong)((int)plVar2[0x1ba] - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
        if (iVar5 != -1) {
          lVar1 = plVar2[0x1b1];
          do {
            if (*(ulonglong *)(lVar1 + (longlong)iVar5 * 0x10) == param_1) goto LAB_140b822ea;
            iVar5 = *(int *)((longlong)iVar5 * 0x10 + lVar1 + 8);
          } while (iVar5 != -1);
        }
      }
      FUN_140b824c0(plVar2 + 0x1b1,auStack_2c,&uStack_28,0);
LAB_140b822ea:
      if (*(char *)((longlong)plVar2 + 0x3b) == '\0') {
        (**(code **)(*plVar2 + 0x400))(plVar2,1);
      }
      if ((uStack_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
  return;
}



// FUNCTION 1410750a6 FUN_1410750a6 body=393 status=ok
// SIG undefined FUN_1410750a6(void)

void FUN_1410750a6(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 local_e0;
  undefined4 local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined4 *local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined1 local_60 [24];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar1 = *(longlong *)(param_1 + 0x30);
  if ((*(longlong *)(lVar1 + 0x1b0) != 0) &&
     (plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x1b0) + 0x3c0), plVar2 != (longlong *)0x0)) {
    lVar4 = FUN_1449f3324();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      cVar3 = (**(code **)(*plVar2 + 0x6c8))(plVar2);
      if (cVar3 != '\0') {
        if (*(char *)(*(longlong *)(param_1 + 0x70) + 0x291) == '\x01') {
          FUN_148a21650(lVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x294),&local_48,
                        local_60);
          local_c0 = &local_78;
          local_68 = local_38;
          local_78 = local_48;
          uStack_74 = uStack_44;
          uStack_70 = uStack_40;
          uStack_6c = uStack_3c;
          local_90 = *param_2;
          local_88 = *(undefined4 *)(param_2 + 1);
          local_80 = 0;
          local_b0 = 0;
          local_b8 = 0;
          local_d8 = CONCAT31(local_d8._1_3_,param_3);
          local_e0 = 0;
          local_e8 = 0;
          local_d0 = CONCAT44(local_d0._4_4_,0x3f800000);
          local_c8 = lVar1;
          FUN_141884caa(plVar2,&local_90,0xff,plVar2 + 300);
        }
        else {
          local_a8 = *param_2;
          local_a0 = *(undefined4 *)(param_2 + 1);
          local_98 = 0;
          local_d8 = 0x3f800000;
          local_e8 = 0;
          local_e0 = param_3;
          local_d0 = lVar1;
          FUN_140cab292(plVar2,&local_a8,0xff,plVar2 + 300);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141075230 FUN_141075230 body=104 status=ok
// SIG undefined FUN_141075230(void)

void FUN_141075230(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((param_2 != 0) && (iVar3 = 0x32, 0x32 < param_2)) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if ((int)param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (iVar3 == *(int *)(param_1 + 0x19c)) {
    return;
  }
  *(int *)(param_1 + 0x19c) = iVar3;
  FUN_141075298(param_1,*(undefined4 *)(param_1 + 0x198));
  return;
}



// FUNCTION 141075298 FUN_141075298 body=140 status=ok
// SIG undefined FUN_141075298(void)

void FUN_141075298(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 400);
  if ((uint)param_3 < 0x33) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 400,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 400),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 400,param_2,param_3,8);
  return;
}



// FUNCTION 141075330 FUN_141075330 body=273 status=ok
// SIG undefined FUN_141075330(void)

undefined8 * FUN_141075330(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  char *local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = "AnimationPlayer";
  local_30 = 0xf;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  uVar2 = FUN_1410758a4();
  FUN_140486538(param_2,uVar1);
  FUN_14048646a(param_2 + 0x20,uVar1,uVar2,0);
  FUN_141075442(param_1,param_2);
  *param_1 = &PTR_FUN_14b79bbd0;
  param_1[0x72] = &PTR_FUN_14b79c210;
  param_1[0x73] = &PTR_FUN_14b79c248;
  param_1[0x74] = &PTR_FUN_14b79c260;
  param_1[0x87] = &PTR_FUN_14b79c280;
  param_1[0x88] = &PTR_FUN_14b79c2a0;
  param_1[0x89] = &PTR_FUN_14b79c2c0;
  param_1[0x8a] = &PTR_FUN_14b79c360;
  param_1[0x8b] = &PTR_FUN_14b79c390;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141075442 FUN_141075442 body=1121 status=ok
// SIG undefined FUN_141075442(void)

undefined8 * FUN_141075442(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70 = "AnimationPlayer";
  local_68 = 0xf;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  uVar2 = FUN_1410758a4();
  FUN_140486538(param_2,uVar1);
  FUN_14048646a(param_2 + 0x20,uVar1,uVar2,0);
  local_70 = "InstanceData";
  local_68 = 0xc;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  uVar2 = FUN_141075a68();
  FUN_140486538(param_2,uVar1);
  FUN_14048646a(param_2 + 0x20,uVar1,uVar2,0);
  FUN_141075b4e(param_1);
  *param_1 = &PTR_FUN_14b19b640;
  param_1[0x72] = &PTR_FUN_14b19bc80;
  param_1[0x73] = &PTR_FUN_14b19bcb8;
  param_1[0x74] = &PTR_FUN_14b19bcd0;
  param_1[0x87] = &PTR_FUN_14b19bcf0;
  param_1[0x88] = &PTR_FUN_14b19bd10;
  param_1[0x89] = &PTR_FUN_14b19bd30;
  param_1[0x8a] = &PTR_FUN_14b19bdd0;
  param_1[0x8b] = &PTR_FUN_14b19be00;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0xc3769d17;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = &DAT_14a171d50;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x91] = &DAT_14cb70058;
  *(undefined1 *)(param_1 + 0x9a) = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4ec) = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4df) = 0;
  param_1[0x9b] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x509) = 0;
  *(undefined8 *)((longlong)param_1 + 0x511) = 0;
  *(undefined4 *)(param_1 + 0xa6) = 2;
  *(undefined8 *)((longlong)param_1 + 0x534) = 0;
  *(undefined8 *)((longlong)param_1 + 0x53c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x544) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x54c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x554) = 0;
  *(undefined8 *)((longlong)param_1 + 0x559) = 0;
  memset(param_1 + 0xad,0,0x98);
  *(undefined4 *)(param_1 + 0xc0) = 2;
  *(undefined8 *)((longlong)param_1 + 0x604) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x614) = 0x200000000;
  *(undefined4 *)(param_1 + 200) = 0;
  param_1[0xc9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x61c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x624) = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  *(byte *)(param_1 + 0xca) = *(byte *)(param_1 + 0xca) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x654) = 0;
  *(undefined8 *)((longlong)param_1 + 0x659) = 0;
  *(undefined1 *)((longlong)param_1 + 0x661) = 1;
  *(undefined8 *)((longlong)param_1 + 0x664) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x66c) = *(byte *)((longlong)param_1 + 0x66c) & 0xc0;
  *(undefined1 *)(param_1 + 0xce) = 0;
  *(uint *)((longlong)param_1 + 0x674) = *(uint *)((longlong)param_1 + 0x674) & 0xfffffff8 | 2;
  param_1[0xcf] = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0xc3769d17;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x691) = 0;
  *(undefined8 *)((longlong)param_1 + 0x699) = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c4) = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6cc) = 0x3ff00000;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  *(undefined4 *)(param_1 + 0xde) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6f4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0xdf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6fc) = 0x3ff00000;
  param_1[0xe0] = 0x3ff0000000000000;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  *(undefined1 *)(param_1 + 0xe4) = 1;
  param_1[0xeb] = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x764) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x76c) = 0;
  param_1[0xef] = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + 0xf1) = 0;
  FUN_1446f470e(&local_78,L"PassthroughInstanceData",1);
  local_98 = FUN_14107598a();
  local_88 = 0;
  local_90 = 1;
  lVar3 = FUN_140486aac(param_2,param_1,local_78,local_98);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  param_1[0xc5] = lVar3;
  FUN_1446f470e(&local_80,L"TransientBindingOverrides",1);
  local_98 = FUN_140aadfdc();
  local_88 = 0;
  local_90 = 1;
  lVar3 = FUN_140486aac(param_2,param_1,local_80,local_98);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  param_1[0xc6] = lVar3;
  *(byte *)(param_1 + 0x7f) = *(byte *)(param_1 + 0x7f) | 4;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 8;
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410758a4 FUN_1410758a4 body=228 status=ok
// SIG undefined FUN_1410758a4(void)

longlong FUN_1410758a4(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb60200 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464eb498;
    local_38 = &LAB_1486c1452;
    local_40 = FUN_1418542b3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0xa20;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxLevelSequencePlayer",&DAT_14cb60200,FUN_1464eb470);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb60200;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14107598a FUN_14107598a body=221 status=ok
// SIG undefined FUN_14107598a(void)

longlong FUN_14107598a(void)

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
  if (DAT_14cb6b7c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1487774e7;
    local_40 = FUN_143c7fb8b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/GbxGame",L"MinimalLevelSequenceInstanceData",&DAT_14cb6b7c0,
                  &DAT_1487774e6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6b7c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141075a68 FUN_141075a68 body=228 status=ok
// SIG undefined FUN_141075a68(void)

longlong FUN_141075a68(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb60118 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14636708c;
    local_38 = &LAB_1486c10bf;
    local_40 = FUN_143c5760c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0xf0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxLevelSequenceInstanceData",&DAT_14cb60118,&DAT_1486c10be);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb60118;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141075b4e FUN_141075b4e body=2148 status=ok
// SIG undefined FUN_141075b4e(void)

undefined8 * FUN_141075b4e(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  uint local_c0;
  uint local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  code *local_88;
  code *local_80;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_140312256();
  *param_1 = &PTR_FUN_14a59cce0;
  param_1[0x72] = &PTR_FUN_14a59d320;
  param_1[0x73] = &PTR_FUN_14a59d358;
  param_1[0x74] = &PTR_FUN_14a59d370;
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x3ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b1) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b9) = 1;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x3c4) = *(byte *)((longlong)param_1 + 0x3c4) & 0xc0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  *(uint *)((longlong)param_1 + 0x3cc) = *(uint *)((longlong)param_1 + 0x3cc) & 0xfffffff8 | 2;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined2 *)(param_1 + 0x7c) = 0x101;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined1 *)(param_1 + 0x82) = 1;
  *(undefined8 *)((longlong)param_1 + 0x424) = 0;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0;
  FUN_1446f470e(&local_60,L"SceneComp",1);
  if (DAT_14cac7648 == 0) {
    local_90 = &local_58;
    local_58 = FUN_144a7958c;
    local_80 = FUN_14081d0ea;
    local_88 = FUN_143242436;
    local_98 = &LAB_14789ef1f;
    local_a0 = &LAB_1417b008f;
    local_a8 = L"Engine";
    local_b0 = 0x8000000000;
    local_b8 = 0x10000004;
    local_c0 = 0x10;
    local_c8 = CONCAT44(local_c8._4_4_,0x2b0);
    FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
  }
  local_c0 = local_c0 & 0xffffff00;
  local_c8 = CONCAT71(local_c8._1_7_,1);
  lVar11 = FUN_14048696c(param_1,local_60,DAT_14cac7648,DAT_14cac7648);
  if ((lVar11 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar11);
  }
  param_1[0x39] = lVar11;
  local_58 = (code *)0x14a59c7e0;
  uStack_50 = 0x10;
  uStack_4c = 0;
  uVar9 = FUN_14001a6c0(&local_58,1);
  local_c8 = FUN_140aadfdc();
  local_b8 = local_b8 & 0xffffff00;
  local_c0 = CONCAT31(local_c0._1_3_,1);
  lVar11 = FUN_140486aac(param_2,param_1,uVar9,local_c8);
  if ((lVar11 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar11);
  }
  param_1[0x7e] = lVar11;
  local_58 = (code *)0x14a59c790;
  uStack_50 = 0xd;
  uStack_4c = 0;
  uVar9 = FUN_14001a6c0(&local_58,1);
  local_c8 = FUN_140fa47e0();
  local_b8 = local_b8 & 0xffffff00;
  local_c0 = CONCAT31(local_c0._1_3_,1);
  lVar11 = FUN_140486aac(param_2,param_1,uVar9,local_c8);
  if ((lVar11 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar11);
  }
  param_1[0x7d] = lVar11;
  local_58 = (code *)0x14a1d4058;
  uStack_50 = 0xc;
  uStack_4c = 0;
  uVar9 = FUN_14001a6c0(&local_58,1);
  local_c8 = FUN_140aae0ba();
  local_b8 = local_b8 & 0xffffff00;
  local_c0 = CONCAT31(local_c0._1_3_,1);
  lVar11 = FUN_140486aac(param_2,param_1,uVar9,local_c8);
  if ((lVar11 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar11);
  }
  param_1[0x80] = lVar11;
  local_58 = (code *)0x14a5a4db8;
  uStack_50 = 0xf;
  uStack_4c = 0;
  uVar9 = FUN_14001a6c0(&local_58,1);
  local_c8 = FUN_141076468();
  local_b8 = local_b8 & 0xffffff00;
  local_c0 = CONCAT31(local_c0._1_3_,1);
  lVar11 = FUN_140486aac(param_2,param_1,uVar9,local_c8);
  if ((lVar11 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar11);
  }
  param_1[0x7a] = lVar11;
  FUN_1410763b4(&local_68);
  local_58 = (code *)0x0;
  uStack_50 = 0;
  uVar9 = uStack_50;
  uStack_4c = 0;
  uVar3 = uStack_4c;
  uStack_4b = 0;
  uVar5 = uStack_4b;
  uStack_4a = 0;
  uVar7 = uStack_4a;
  uStack_4c = (undefined1)((ulonglong)local_68 >> 0x20);
  uVar4 = uStack_4c;
  uStack_4b = (undefined1)((ulonglong)local_68 >> 0x28);
  uVar6 = uStack_4b;
  uStack_4a = (undefined2)((ulonglong)local_68 >> 0x30);
  uVar8 = uStack_4a;
  uStack_50 = (undefined4)local_68;
  uVar2 = uStack_50;
  uStack_50 = uVar2;
  uStack_4c = uVar4;
  uStack_4b = uVar6;
  uStack_4a = uVar8;
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    local_58 = (code *)(ulonglong)uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar10 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar16) {
        uStack_50 = uVar9;
        uStack_4c = uVar3;
        uStack_4b = uVar5;
        uStack_4a = uVar7;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar10 = *(int *)(lVar14 + 0x10);
      bVar16 = iVar10 == 0;
      if (bVar16) {
        *(int *)(lVar14 + 0x10) = iVar13;
        iVar10 = 0;
      }
      UNLOCK();
      uVar1 = (uint)local_58;
      if (bVar16) {
        iVar10 = iVar13;
      }
    }
    local_58._0_4_ = uVar1;
    local_58 = (code *)CONCAT44(iVar10,(uint)local_58);
    uStack_50 = uVar2;
    uStack_4c = uVar4;
    uStack_4b = uVar6;
    uStack_4a = uVar8;
    if ((((((local_68 != 0) && (iVar10 != 0)) && (-1 < (int)(uint)local_58)) &&
         (((int)(uint)local_58 < DAT_14c9647dc &&
          (plVar12 = (longlong *)
                     ((ulonglong)(((uint)local_58 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_58 >> 0x10) * 8)),
          plVar12 != (longlong *)0x0)))) && ((int)plVar12[2] == iVar10)) &&
       (((*(uint *)(plVar12 + 1) & 0x10200000) == 0 && (*plVar12 != 0)))) {
      FUN_1400796d0(*(undefined8 *)(*plVar12 + 0x10),local_68,1);
    }
  }
  FUN_14053c012(lVar11 + 0x230,&local_58);
  lVar11 = param_1[0x7a];
  FUN_1410763b4(&local_70);
  local_58 = (code *)0x0;
  uStack_50 = 0;
  uVar9 = uStack_50;
  uStack_4c = 0;
  uVar3 = uStack_4c;
  uStack_4b = 0;
  uVar5 = uStack_4b;
  uStack_4a = 0;
  uVar7 = uStack_4a;
  uStack_4c = (undefined1)((ulonglong)local_70 >> 0x20);
  uVar4 = uStack_4c;
  uStack_4b = (undefined1)((ulonglong)local_70 >> 0x28);
  uVar6 = uStack_4b;
  uStack_4a = (undefined2)((ulonglong)local_70 >> 0x30);
  uVar8 = uStack_4a;
  uStack_50 = (undefined4)local_70;
  uVar2 = uStack_50;
  uStack_50 = uVar2;
  uStack_4c = uVar4;
  uStack_4b = uVar6;
  uStack_4a = uVar8;
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    local_58 = (code *)(ulonglong)uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar10 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar16) {
        uStack_50 = uVar9;
        uStack_4c = uVar3;
        uStack_4b = uVar5;
        uStack_4a = uVar7;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar10 = *(int *)(lVar14 + 0x10);
      bVar16 = iVar10 == 0;
      if (bVar16) {
        *(int *)(lVar14 + 0x10) = iVar13;
        iVar10 = 0;
      }
      UNLOCK();
      uVar1 = (uint)local_58;
      if (bVar16) {
        iVar10 = iVar13;
      }
    }
    local_58._0_4_ = uVar1;
    local_58 = (code *)CONCAT44(iVar10,(uint)local_58);
    uStack_50 = uVar2;
    uStack_4c = uVar4;
    uStack_4b = uVar6;
    uStack_4a = uVar8;
    if ((((local_70 != 0) && (iVar10 != 0)) && (-1 < (int)(uint)local_58)) &&
       ((((int)(uint)local_58 < DAT_14c9647dc &&
         (plVar12 = (longlong *)
                    ((ulonglong)(((uint)local_58 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_58 >> 0x10) * 8)),
         plVar12 != (longlong *)0x0)) &&
        (((int)plVar12[2] == iVar10 &&
         (((*(uint *)(plVar12 + 1) & 0x10200000) == 0 && (*plVar12 != 0)))))))) {
      FUN_1400796d0(*(undefined8 *)(*plVar12 + 0x10),local_70,1);
    }
  }
  FUN_14053c012(lVar11 + 0x240,&local_58);
  lVar11 = param_1[0x7a];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cabce58) && (FUN_144b3d300(&DAT_14cabce58), DAT_14cabce58 == -1)) {
    local_58 = (code *)0x65006400690048;
    uStack_50._0_2_ = L'B';
    uStack_50._2_2_ = L'u';
    uStack_4c = 0x72;
    uStack_4b = 0;
    uStack_4a = 0x6e;
    uStack_48 = 0x6e0069;
    FUN_1446f470e(&DAT_14cabce50,&local_58,1);
    _Init_thread_footer(&DAT_14cabce58);
  }
  lVar14 = DAT_14cabce50;
  local_58 = (code *)0x0;
  uStack_50 = 0;
  uVar9 = uStack_50;
  uStack_4c = 0;
  uVar3 = uStack_4c;
  uStack_4b = 0;
  uVar5 = uStack_4b;
  uStack_4a = 0;
  uVar7 = uStack_4a;
  uStack_4c = (undefined1)((ulonglong)DAT_14cabce50 >> 0x20);
  uVar4 = uStack_4c;
  uStack_4b = (undefined1)((ulonglong)DAT_14cabce50 >> 0x28);
  uVar6 = uStack_4b;
  uStack_4a = (undefined2)((ulonglong)DAT_14cabce50 >> 0x30);
  uVar8 = uStack_4a;
  uStack_50 = (undefined4)DAT_14cabce50;
  uVar2 = uStack_50;
  uStack_50 = uVar2;
  uStack_4c = uVar4;
  uStack_4b = uVar6;
  uStack_4a = uVar8;
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    local_58 = (code *)(ulonglong)uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar10 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar16) {
        uStack_50 = uVar9;
        uStack_4c = uVar3;
        uStack_4b = uVar5;
        uStack_4a = uVar7;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar10 = *(int *)(lVar15 + 0x10);
      bVar16 = iVar10 == 0;
      if (bVar16) {
        *(int *)(lVar15 + 0x10) = iVar13;
        iVar10 = 0;
      }
      UNLOCK();
      uVar1 = (uint)local_58;
      if (bVar16) {
        iVar10 = iVar13;
      }
    }
    local_58._0_4_ = uVar1;
    local_58 = (code *)CONCAT44(iVar10,(uint)local_58);
    uStack_50 = uVar2;
    uStack_4c = uVar4;
    uStack_4b = uVar6;
    uStack_4a = uVar8;
    if ((((lVar14 != 0) && (iVar10 != 0)) && (-1 < (int)(uint)local_58)) &&
       ((((int)(uint)local_58 < DAT_14c9647dc &&
         (plVar12 = (longlong *)
                    ((ulonglong)(((uint)local_58 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_58 >> 0x10) * 8)),
         plVar12 != (longlong *)0x0)) &&
        (((int)plVar12[2] == iVar10 &&
         (((*(uint *)(plVar12 + 1) & 0x10200000) == 0 && (*plVar12 != 0)))))))) {
      FUN_1400796d0(*(undefined8 *)(*plVar12 + 0x10),lVar14,1);
    }
  }
  FUN_14053c012(lVar11 + 0x250,&local_58);
  *(byte *)(param_1 + 0x7f) = *(byte *)(param_1 + 0x7f) & 0xf8;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 0x88;
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1410763b4 FUN_1410763b4 body=179 status=ok
// SIG undefined FUN_1410763b4(void)

undefined8 * FUN_1410763b4(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  wchar_t local_28 [12];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cabce48) {
    FUN_144b3d300(&DAT_14cabce48);
    if (DAT_14cabce48 == -1) {
      builtin_wcsncpy(local_28,L"ShowBurnin",0xb);
      FUN_1446f470e(&DAT_14cabce40,local_28,1);
      _Init_thread_footer(&DAT_14cabce48);
    }
  }
  *param_1 = DAT_14cabce40;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141076468 FUN_141076468 body=228 status=ok
// SIG undefined FUN_141076468(void)

longlong FUN_141076468(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cabcdc0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146341bc0;
    local_38 = &LAB_1478214c5;
    local_40 = &LAB_145775919;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x5b8;
    FUN_14081cfa3(L"/Script/LevelSequence",L"LevelSequencePlayer",&DAT_14cabcdc0,FUN_1463683b4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabcdc0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141076552 FUN_141076552 body=221 status=ok
// SIG undefined FUN_141076552(void)

longlong FUN_141076552(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4ce58 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148504e0d;
    local_40 = &LAB_145ddda61;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0xc0;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"MeshOpPreviewWithBackgroundCompute",&DAT_14cb4ce58
                  ,&DAT_148504e0c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4ce58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141076630 FUN_141076630 body=46 status=ok
// SIG undefined FUN_141076630(void)

undefined8 FUN_141076630(undefined8 param_1,int param_2)

{
  FUN_144b47060();
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 14107665e FUN_14107665e body=107 status=ok
// SIG undefined FUN_14107665e(void)

undefined8 * FUN_14107665e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3fe390;
  plVar3 = (longlong *)param_1[0xf];
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
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140d59dc2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410766ca FUN_1410766ca body=1 status=ok
// SIG undefined FUN_1410766ca(void)

void FUN_1410766ca(void)

{
  return;
}



// FUNCTION 1410766cb FUN_1410766cb body=49 status=ok
// SIG undefined FUN_1410766cb(void)

longlong FUN_1410766cb(void)

{
  if (DAT_14c98e330 == 0) {
    FUN_140f50038(&DAT_14c98e330,&PTR_s__Script_Slate_149ef8c60);
  }
  return DAT_14c98e330;
}



// FUNCTION 1410766fc FUN_1410766fc body=49 status=ok
// SIG undefined FUN_1410766fc(void)

longlong FUN_1410766fc(void)

{
  if (DAT_14cb1d350 == 0) {
    FUN_140f50038(&DAT_14cb1d350,&PTR_s__Script_NavigationSystem_14aba7af0);
  }
  return DAT_14cb1d350;
}



// FUNCTION 14107672d FUN_14107672d body=49 status=ok
// SIG undefined FUN_14107672d(void)

longlong FUN_14107672d(void)

{
  if (DAT_14cb510a8 == 0) {
    FUN_140f50038(&DAT_14cb510a8,&PTR_s__Script_GbxSpline_14afac4a7_1_14afac488);
  }
  return DAT_14cb510a8;
}



// FUNCTION 14107675e FUN_14107675e body=49 status=ok
// SIG undefined FUN_14107675e(void)

longlong FUN_14107675e(void)

{
  if (DAT_14cb95450 == 0) {
    FUN_140f50038(&DAT_14cb95450,&PTR_s__Script_OnlineSubsystemUtils_14b4acf20);
  }
  return DAT_14cb95450;
}



// FUNCTION 14107678f FUN_14107678f body=49 status=ok
// SIG undefined FUN_14107678f(void)

longlong FUN_14107678f(void)

{
  if (DAT_14cb98168 == 0) {
    FUN_140f50038(&DAT_14cb98168,&PTR_s__Script_GbxNetGame_14b4fb428);
  }
  return DAT_14cb98168;
}



// FUNCTION 1410767c0 FUN_1410767c0 body=49 status=ok
// SIG undefined FUN_1410767c0(void)

longlong FUN_1410767c0(void)

{
  if (DAT_14cb9ea48 == 0) {
    FUN_140f50038(&DAT_14cb9ea48,&PTR_s__Script_GameplayDebugger_14b5afd57_1_14b5afd38);
  }
  return DAT_14cb9ea48;
}



// FUNCTION 1410767f1 FUN_1410767f1 body=49 status=ok
// SIG undefined FUN_1410767f1(void)

longlong FUN_1410767f1(void)

{
  if (DAT_14cc0dc70 == 0) {
    FUN_140f50038(&DAT_14cc0dc70,&PTR_s__Script_InterchangeEngine_14bc5e6f0);
  }
  return DAT_14cc0dc70;
}



// FUNCTION 141076822 FUN_141076822 body=58 status=ok
// SIG undefined FUN_141076822(void)

void FUN_141076822(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b887ef0;
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 10;
  }
  return;
}



// FUNCTION 14107685c FUN_14107685c body=1973 status=ok
// SIG undefined FUN_14107685c(void)

void FUN_14107685c(longlong *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  char *pcVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint *puVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined7 uVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong local_60;
  
  plVar1 = param_1 + 0xb;
  puVar2 = (uint *)(param_1 + 0xd);
  iVar22 = (int)param_1[0x10];
  if (iVar22 == 0) {
    uVar23 = 1;
    uVar20 = 0;
    iVar19 = 0;
    iVar13 = 0;
  }
  else {
    puVar7 = (uint *)param_1[0xf];
    if ((uint *)param_1[0xf] == (uint *)0x0) {
      puVar7 = puVar2;
    }
    uVar17 = *puVar7;
    if (uVar17 == 0) {
      iVar19 = iVar22 + 0x1e;
      if (-1 < iVar22 + -1) {
        iVar19 = iVar22 + -1;
      }
      uVar20 = 0;
      uVar14 = (ulonglong)(uint)(iVar19 >> 5);
      if (iVar19 >> 5 < 1) {
        uVar14 = uVar20;
      }
      iVar19 = 0;
      do {
        if (uVar14 == uVar20) goto LAB_141076898;
        iVar19 = iVar19 + 0x20;
        uVar17 = puVar7[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar20 = 0;
      iVar19 = 0;
    }
    uVar23 = (ulonglong)(-uVar17 & uVar17);
    uVar14 = uVar23 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar13 = (iVar19 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar22 <= iVar13) {
      iVar13 = iVar22;
    }
  }
  if (iVar13 < iVar22) {
    uVar17 = 0xffffffff;
    do {
      cVar4 = FUN_141077302((longlong)iVar13 * 0x90 + *plVar1 + 8);
      if (cVar4 == '\0') {
        FUN_1457e76aa(plVar1,iVar13);
      }
      uVar17 = uVar17 & ~(uint)uVar23;
      puVar7 = (uint *)param_1[0xf];
      if ((uint *)param_1[0xf] == (uint *)0x0) {
        puVar7 = puVar2;
      }
      iVar22 = (int)param_1[0x10];
      iVar13 = (int)uVar20;
      lVar18 = (longlong)iVar13;
      uVar10 = puVar7[lVar18] & uVar17;
      if (uVar10 == 0) {
        iVar6 = iVar22 + 0x1e;
        if (-1 < iVar22 + -1) {
          iVar6 = iVar22 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar11 = iVar6;
        if (iVar6 < iVar13) {
          iVar11 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar21 = 0;
        while( true ) {
          iVar19 = iVar19 + 0x20;
          uVar10 = puVar7[lVar18 + lVar21 + 1];
          if (uVar10 != 0) break;
          lVar21 = lVar21 + 1;
          if (iVar11 - lVar18 == lVar21) goto LAB_141076898;
        }
        uVar20 = (ulonglong)(iVar13 + (int)lVar21 + 1);
        uVar17 = 0xffffffff;
      }
      uVar23 = (ulonglong)(-uVar10 & uVar10);
      uVar14 = uVar23 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar13 = (iVar19 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar22);
  }
LAB_141076898:
  if (iVar22 == 0) {
    uVar23 = 1;
    uVar20 = 0;
    iVar19 = 0;
    iVar13 = 0;
  }
  else {
    puVar7 = (uint *)param_1[0xf];
    if ((uint *)param_1[0xf] == (uint *)0x0) {
      puVar7 = puVar2;
    }
    uVar17 = *puVar7;
    if (uVar17 == 0) {
      iVar19 = iVar22 + 0x1e;
      if (-1 < iVar22 + -1) {
        iVar19 = iVar22 + -1;
      }
      uVar20 = 0;
      uVar14 = (ulonglong)(uint)(iVar19 >> 5);
      if (iVar19 >> 5 < 1) {
        uVar14 = uVar20;
      }
      iVar19 = 0;
      do {
        if (uVar14 == uVar20) goto LAB_1410768b6;
        iVar19 = iVar19 + 0x20;
        uVar17 = puVar7[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar20 = 0;
      iVar19 = 0;
    }
    uVar23 = (ulonglong)(-uVar17 & uVar17);
    uVar14 = uVar23 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar13 = (iVar19 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar22 <= iVar13) {
      iVar13 = iVar22;
    }
  }
  if (iVar13 != iVar22) {
    uVar17 = 0xffffffff;
    iVar6 = iVar22;
    do {
      if (*(char *)(*plVar1 + 9 + (longlong)iVar13 * 0x90) == '\0') {
        lVar18 = *plVar1 + (longlong)iVar13 * 0x90;
        pcVar3 = (char *)(lVar18 + 8);
        if (((((*(int *)(lVar18 + 0x30) != 0) &&
              (uVar10 = *(uint *)(lVar18 + 0x2c), -1 < (int)uVar10)) &&
             ((int)uVar10 < DAT_14c9647dc)) &&
            (((plVar15 = (longlong *)
                         ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
              plVar15 != (longlong *)0x0 && ((int)plVar15[2] == *(int *)(lVar18 + 0x30))) &&
             (((*(uint *)(plVar15 + 1) & 0x10200000) == 0 &&
              ((lVar21 = *plVar15, lVar21 != 0 && (*(longlong *)(lVar21 + 0x918) == DAT_14cb24218)))
              ))))) &&
           ((*pcVar3 == '\0' &&
            (((*(char *)(lVar21 + 0xb40) == '\x01' && (cVar4 = FUN_1487c7834(lVar21), cVar4 != '\0')
              ) && (*(longlong *)(lVar18 + 0x58) != 0)))))) {
          bVar5 = FUN_144729dda(lVar18 + 0x50);
          uVar16 = (undefined7)((ulonglong)plVar15 >> 8);
          if (((*(longlong **)(lVar18 + 0x58) != (longlong *)0x0 & bVar5) == 1) &&
             (lVar24 = (**(code **)(**(longlong **)(lVar18 + 0x58) + 0x20))(), lVar24 != 0)) {
            FUN_140356f00(lVar24,CONCAT71(uVar16,1),3);
            FUN_1487c6956(lVar21,0);
          }
        }
        if (((*pcVar3 == '\0') && (*(int *)(lVar18 + 0x30) != 0)) &&
           ((uVar10 = *(uint *)(lVar18 + 0x2c), -1 < (int)uVar10 &&
            ((((((int)uVar10 < DAT_14c9647dc &&
                (plVar15 = (longlong *)
                           ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
                plVar15 != (longlong *)0x0)) && ((int)plVar15[2] == *(int *)(lVar18 + 0x30))) &&
              (((*(uint *)(plVar15 + 1) & 0x10200000) == 0 &&
               (plVar8 = (longlong *)*plVar15, plVar8 != (longlong *)0x0)))) &&
             (plVar8[0x123] == DAT_14cb24220)))))) {
          lVar21 = (**(code **)(*plVar8 + 0x9f8))(plVar8);
          if (lVar21 == 0) {
            if (*(char *)((longlong)plVar8 + 0xd23) == '\x01') goto LAB_141076fb7;
          }
          else if (*(char *)(lVar21 + 0x6f1) != '\0') {
LAB_141076fb7:
            cVar4 = FUN_1456f0ca8(plVar8);
            if ((cVar4 != '\0') && (*(longlong *)(lVar18 + 0x58) != 0)) {
              bVar5 = FUN_144729dda(lVar18 + 0x50);
              uVar16 = (undefined7)((ulonglong)plVar15 >> 8);
              if (((*(longlong **)(lVar18 + 0x58) != (longlong *)0x0 & bVar5) == 1) &&
                 (lVar21 = (**(code **)(**(longlong **)(lVar18 + 0x58) + 0x20))(), lVar21 != 0)) {
                FUN_140356f00(lVar21,CONCAT71(uVar16,1),3);
              }
            }
          }
        }
        cVar4 = FUN_1410770b6(param_1,pcVar3);
        if (cVar4 != '\0') {
          FUN_1456f06d6(param_1,pcVar3);
        }
        FUN_141077574(pcVar3);
        if (*(char *)(lVar18 + 0xb) == '\x01') {
          if ((*(int *)(lVar18 + 0x40) == 0) || (uVar10 = *(uint *)(lVar18 + 0x3c), (int)uVar10 < 0)
             ) {
LAB_141076e23:
            local_60 = 0;
          }
          else {
            local_60 = 0;
            if ((int)uVar10 < DAT_14c9647dc) {
              plVar15 = (longlong *)
                        ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
              if (((plVar15 == (longlong *)0x0) || ((int)plVar15[2] != *(int *)(lVar18 + 0x40))) ||
                 ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)) goto LAB_141076e23;
              local_60 = *plVar15;
            }
          }
          if (((((*(int *)(lVar18 + 0x30) != 0) &&
                (uVar10 = *(uint *)(lVar18 + 0x2c), -1 < (int)uVar10)) &&
               (((int)uVar10 < DAT_14c9647dc &&
                ((plVar15 = (longlong *)
                            ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
                 plVar15 != (longlong *)0x0 && ((int)plVar15[2] == *(int *)(lVar18 + 0x30))))))) &&
              ((*(uint *)(plVar15 + 1) & 0x10200000) == 0)) &&
             ((local_60 != 0 && (plVar15 = (longlong *)*plVar15, plVar15 != (longlong *)0x0)))) {
            plVar8 = (longlong *)(**(code **)(*plVar15 + 0x9f8))(plVar15);
            if (*(char *)(lVar18 + 10) != '\0') {
              plVar8 = plVar15;
            }
            if ((((plVar8 != (longlong *)0x0) && (*(char *)((longlong)plVar8 + 0x6f1) == '\x01')) &&
                (cVar4 = FUN_141077012(plVar8), cVar4 == '\0')) &&
               ((cVar4 = FUN_1402b80e4(plVar8,local_60), cVar4 != '\0' ||
                (cVar4 = FUN_14096b0e8(plVar8,local_60), cVar4 != '\0')))) {
              FUN_1457e778c(param_1,local_60,plVar8);
            }
          }
        }
        iVar6 = (int)param_1[0x10];
      }
      uVar17 = uVar17 & ~(uint)uVar23;
      puVar7 = (uint *)param_1[0xf];
      if ((uint *)param_1[0xf] == (uint *)0x0) {
        puVar7 = puVar2;
      }
      iVar13 = (int)uVar20;
      lVar18 = (longlong)iVar13;
      uVar10 = puVar7[lVar18] & uVar17;
      if (uVar10 == 0) {
        iVar11 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar11 = iVar6 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar19 = iVar19 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar13) {
          iVar12 = iVar13;
        }
        if (iVar13 < iVar11) {
          lVar21 = 0;
          do {
            uVar10 = puVar7[lVar18 + lVar21 + 1];
            if (uVar10 != 0) {
              uVar20 = (ulonglong)(iVar13 + (int)lVar21 + 1);
              uVar17 = 0xffffffff;
              goto LAB_141076c1f;
            }
            iVar19 = iVar19 + 0x20;
            lVar21 = lVar21 + 1;
          } while (iVar12 - lVar18 != lVar21);
          uVar17 = 0xffffffff;
          iVar13 = iVar12;
        }
        uVar20 = (ulonglong)(iVar13 + 1);
        iVar13 = iVar6;
      }
      else {
LAB_141076c1f:
        uVar23 = (ulonglong)(-uVar10 & uVar10);
        uVar14 = uVar23 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar13 = (iVar19 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar13) {
          iVar13 = iVar6;
        }
      }
    } while (iVar13 != iVar22);
  }
LAB_1410768b6:
  if (0 < (int)param_1[0x16]) {
    uVar20 = 0;
    do {
      uVar17 = (uint)uVar20;
      cVar4 = FUN_1487cc0b2(param_1,uVar20 * 0xc + param_1[0x15]);
      if (cVar4 != '\0') {
        iVar22 = (int)param_1[0x16];
        if (~uVar17 + iVar22 != 0) {
          memmove((void *)(param_1[0x15] + uVar20 * 0xc),
                  (void *)(param_1[0x15] + uVar20 * 0xc + 0xc),
                  (longlong)(int)(~uVar17 + iVar22) * 0xc);
          iVar22 = (int)param_1[0x16];
        }
        *(int *)(param_1 + 0x16) = iVar22 + -1;
        FUN_1487d1c6e(param_1 + 0x15);
        uVar17 = uVar17 - 1;
      }
      uVar20 = (ulonglong)(uVar17 + 1);
    } while ((int)(uVar17 + 1) < (int)param_1[0x16]);
  }
  lVar18 = param_1[9];
  if (0 < (longlong)(int)lVar18) {
    *(undefined1 *)(param_1 + 10) = 1;
    lVar21 = param_1[8];
    param_1[8] = 0;
    param_1[9] = 0;
    lVar24 = 0;
    do {
      lVar9 = FUN_14479d2ce(lVar21 + lVar24);
      if (lVar9 != 0) {
        (**(code **)(*param_1 + 0x20))(param_1,lVar9);
      }
      lVar24 = lVar24 + 8;
    } while ((longlong)(int)lVar18 * 8 != lVar24);
    *(undefined1 *)(param_1 + 10) = 0;
    if (lVar21 != 0) {
      FUN_1400020a8(lVar21);
      return;
    }
  }
  return;
}



// FUNCTION 141077012 FUN_141077012 body=163 status=ok
// SIG undefined FUN_141077012(void)

ulonglong FUN_141077012(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x918);
  if (lVar2 == DAT_14cb24208) {
    lVar2 = FUN_1456f0676(param_1 + 0x928);
    if (lVar2 != 0) {
      uVar1 = CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(param_1 + 0x959));
      goto LAB_14107703e;
    }
    lVar2 = *(longlong *)(param_1 + 0x918);
  }
  if (lVar2 == DAT_14cb24210) {
    lVar2 = FUN_1487c6890(param_1 + 0x960);
    if (lVar2 != 0) {
      uVar1 = CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(param_1 + 0xa91));
      goto LAB_14107703e;
    }
    lVar2 = *(longlong *)(param_1 + 0x918);
  }
  if (lVar2 == DAT_14cb24218) {
    if (*(char *)(param_1 + 0xa9b) == '\x01') {
      lVar2 = FUN_145a30f1c(param_1 + 0xaa0);
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0xac8);
    }
    if (lVar2 != 0) {
      uVar1 = CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(param_1 + 0xa98));
      goto LAB_14107703e;
    }
  }
  uVar1 = 0;
LAB_14107703e:
  return uVar1 & 0xffffffffffffff01;
}



// FUNCTION 1410770b6 FUN_1410770b6 body=586 status=ok
// SIG undefined FUN_1410770b6(void)

uint FUN_1410770b6(longlong param_1,char *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *plStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar4 = FUN_141077302(param_2);
  if ((((cVar4 == '\0') || (*param_2 != '\0')) ||
      (*(float *)(param_1 + 0x28) <= *(float *)(param_2 + 8) &&
       *(float *)(param_2 + 8) != *(float *)(param_1 + 0x28))) || (*(int *)(param_2 + 0x28) == 0))
  goto LAB_14107722b;
  uVar3 = *(uint *)(param_2 + 0x24);
  uVar5 = 0;
  if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_14107722d;
  plVar10 = (longlong *)
            ((ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
  if ((((plVar10 != (longlong *)0x0) &&
       (((int)plVar10[2] == *(int *)(param_2 + 0x28) && ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)
        ))) && (plVar10 = (longlong *)*plVar10, plVar10 != (longlong *)0x0)) &&
     (plVar10[0x123] != DAT_14cb241f8)) {
    if (*(int *)(param_2 + 0x38) == 0) {
LAB_1410772b6:
      uVar9 = 0;
    }
    else {
      uVar3 = *(uint *)(param_2 + 0x34);
      uVar9 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        puVar8 = (undefined8 *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((puVar8 == (undefined8 *)0x0) ||
           ((*(int *)(puVar8 + 2) != *(int *)(param_2 + 0x38) ||
            ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_1410772b6;
        uVar9 = *puVar8;
      }
    }
    FUN_14070cbf4(&local_58,uVar9);
    plVar6 = plStack_50;
    lVar7 = local_58;
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
    if (lVar7 != 0) {
      plVar6 = plVar10;
      if (param_2[2] == '\0') {
        plVar6 = (longlong *)(**(code **)(*plVar10 + 0x9f8))(plVar10);
        if (plVar6 != (longlong *)0x0) goto LAB_14107721b;
        cVar4 = '\x01';
      }
      else {
LAB_14107721b:
        cVar4 = *(char *)((longlong)plVar6 + 0xf9b);
      }
      if ((param_2[3] != '\x01') || (cVar4 == '\0')) {
        uVar5 = 1;
        if (param_2[2] != '\0') goto LAB_14107722d;
        lVar7 = (**(code **)(*plVar10 + 0x9f8))(plVar10);
        if (lVar7 == 0) {
          uVar5 = (uint)(*(char *)((longlong)plVar10 + 0xd23) != '\0');
          goto LAB_14107722d;
        }
        if (*(char *)(lVar7 + 0x6f1) != '\0') {
          cVar4 = FUN_1402b8050(lVar7);
          if (cVar4 != '\0') {
            local_58 = *(longlong *)(lVar7 + 0x260);
            plStack_50 = *(longlong **)(lVar7 + 0x268);
            local_48 = *(undefined8 *)(lVar7 + 0x270);
            uVar5 = FUN_1487cc8a2(param_1);
          }
          goto LAB_14107722d;
        }
        param_2[8] = -1;
        param_2[9] = -1;
        param_2[10] = '\x7f';
        param_2[0xb] = '\x7f';
      }
    }
  }
LAB_14107722b:
  uVar5 = 0;
LAB_14107722d:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141077302 FUN_141077302 body=625 status=ok
// SIG undefined FUN_141077302(void)

undefined8 FUN_141077302(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar1 = *(uint *)(param_1 + 0x24);
    uVar5 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1410774b6;
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x28))) {
      uVar5 = 0;
      if (((*(uint *)(lVar3 + 8) & 0x10200000) != 0) ||
         (uVar5 = 0, *(longlong *)(param_1 + 0x50) == 0)) goto LAB_1410774b6;
      if (*(int *)(param_1 + 0x4c) != 0) {
        uVar1 = *(uint *)(param_1 + 0x48);
        uVar5 = 0;
        if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1410774b6;
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x4c))) {
          uVar5 = 0;
          if (((*(uint *)(lVar3 + 8) & 0x10200000) != 0) || (*(longlong *)(param_1 + 0x60) == 0))
          goto LAB_1410774b6;
          if (*(int *)(param_1 + 0x5c) != 0) {
            uVar1 = *(uint *)(param_1 + 0x58);
            uVar5 = 0;
            if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1410774b6;
            lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            if ((lVar3 != 0) &&
               (((*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x5c) &&
                 ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) && (*(int *)(param_1 + 0x38) != 0)))) {
              uVar1 = *(uint *)(param_1 + 0x34);
              uVar5 = 0;
              if (((int)uVar1 < 0) || (uVar5 = 0, DAT_14c9647dc <= (int)uVar1)) goto LAB_1410774b6;
              plVar4 = (longlong *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
              if ((plVar4 != (longlong *)0x0) &&
                 ((((int)plVar4[2] == *(int *)(param_1 + 0x38) &&
                   ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) &&
                  ((lVar3 = *plVar4, lVar3 != 0 && ((*(byte *)(lVar3 + 0x65) & 2) == 0)))))) {
                if (DAT_14cb56270 == 0) {
                  local_30 = &local_18;
                  local_18 = FUN_1449e2820;
                  local_20 = FUN_14081d0ea;
                  local_28 = FUN_1427b09ee;
                  local_38 = &LAB_148630fef;
                  local_40 = FUN_1464b6a91;
                  local_48 = L"Engine";
                  local_50 = 0;
                  local_58 = 0x10004001;
                  local_60 = 8;
                  local_68 = 0x28;
                  FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,
                                &DAT_148630fee);
                }
                plVar4 = (longlong *)FUN_144718840(lVar3,DAT_14cb56270);
                if (plVar4 != (longlong *)0x0) {
                  cVar2 = (**(code **)(*plVar4 + 0x40))(plVar4);
                  if (cVar2 != '\0') goto LAB_1410774b4;
                }
                uVar5 = 1;
                goto LAB_1410774b6;
              }
            }
          }
        }
      }
    }
  }
LAB_1410774b4:
  uVar5 = 0;
LAB_1410774b6:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141077574 FUN_141077574 body=2139 status=ok
// SIG undefined FUN_141077574(void)

void FUN_141077574(byte *param_1)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 *puVar16;
  uint uVar17;
  longlong lVar18;
  longlong *plVar19;
  int iVar20;
  longlong lVar21;
  bool bVar22;
  float fVar23;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  code *local_88;
  code *local_80;
  int local_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar9 = *(longlong **)(param_1 + 0x50);
  if ((((plVar9 == (longlong *)0x0) || (*(int *)(param_1 + 0x4c) == 0)) ||
      (uVar4 = *(uint *)(param_1 + 0x48), (int)uVar4 < 0)) ||
     (((DAT_14c9647dc <= (int)uVar4 ||
       (lVar21 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar21 == 0)) ||
      ((*(int *)(lVar21 + 0x10) != *(int *)(param_1 + 0x4c) ||
       ((*(uint *)(lVar21 + 8) & 0x10200000) != 0)))))) goto LAB_141077adb;
  if (*(int *)(param_1 + 0x28) == 0) {
LAB_141077a5d:
    plVar19 = (longlong *)0x0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x24);
    plVar19 = (longlong *)0x0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      puVar16 = (undefined8 *)
                ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((puVar16 == (undefined8 *)0x0) ||
         ((*(int *)(puVar16 + 2) != *(int *)(param_1 + 0x28) ||
          ((*(uint *)(puVar16 + 1) & 0x10200000) != 0)))) goto LAB_141077a5d;
      plVar19 = (longlong *)*puVar16;
    }
  }
  plVar8 = plVar19;
  if (param_1[2] == 0) {
    plVar8 = (longlong *)(**(code **)(*plVar19 + 0x9f8))(plVar19);
  }
  bVar3 = *param_1;
  bVar6 = param_1[3];
  plVar9 = (longlong *)(**(code **)(*plVar9 + 0x10))(plVar9);
  if ((plVar19 == (longlong *)0x0) || ((plVar8 == (longlong *)0x0 & bVar3) != 0))
  goto LAB_141077adb;
  plVar14 = plVar19;
  if (bVar3 != 0) {
    plVar14 = plVar8;
  }
  if (plVar9 == (longlong *)0x0) goto LAB_141077adb;
  uVar10 = FUN_14098e156();
  plVar11 = (longlong *)(**(code **)(*plVar9 + 0x288))(plVar9,uVar10);
  if (plVar11 != (longlong *)0x0) {
    uVar10 = FUN_14098e156();
    plVar12 = (longlong *)FUN_144718840(plVar11,uVar10);
    if ((plVar12 != (longlong *)0x0 && plVar11 != plVar12) &&
       (cVar5 = (**(code **)(*plVar12 + 0x18))(plVar12), cVar5 != '\0')) goto LAB_141077adb;
  }
  lVar21 = FUN_1409fd42f();
  lVar13 = FUN_1447210f0(plVar9);
  if (lVar13 == 0) {
    fVar23 = 0.0;
  }
  else {
    fVar23 = (float)*(double *)(lVar13 + 0x6d0);
  }
  if (plVar14 == (longlong *)0x0) {
    local_68._0_4_ = 0;
    iVar7 = 0;
    uVar4 = (uint)local_68;
  }
  else {
    uVar4 = *(uint *)((longlong)plVar14 + 0xc);
    local_68 = (code *)(ulonglong)uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    iVar7 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar20 = DAT_14c964868 + 1;
      bVar22 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar22) {
        local_6c = iVar20;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar20);
        iVar20 = local_6c;
      }
      LOCK();
      iVar7 = *(int *)(lVar13 + 0x10);
      bVar22 = iVar7 == 0;
      if (bVar22) {
        *(int *)(lVar13 + 0x10) = iVar20;
        iVar7 = 0;
      }
      UNLOCK();
      uVar4 = (uint)local_68;
      if (bVar22) {
        iVar7 = iVar20;
      }
    }
  }
  local_68._0_4_ = uVar4;
  local_68 = (code *)CONCAT44(iVar7,(uint)local_68);
  if ((param_1[0x10] == bVar3) && (cVar5 = FUN_141077dfa(&local_68,param_1 + 0x1c), cVar5 != '\0'))
  {
    fVar1 = *(float *)(param_1 + 0x14);
    fVar2 = *(float *)(lVar21 + 0x38);
    param_1[0x10] = bVar3;
    *(code **)(param_1 + 0x1c) = local_68;
    *(float *)(param_1 + 0x14) = fVar23;
    if (fVar23 - fVar1 < fVar2) goto LAB_141077adb;
  }
  else {
    param_1[0x10] = bVar3;
    *(code **)(param_1 + 0x1c) = local_68;
    *(float *)(param_1 + 0x14) = fVar23;
  }
  if (bVar3 == 0) {
    plVar14 = plVar19 + 0x123;
    plVar11 = plVar19 + 0x194;
    if ((bVar6 | *(byte *)(plVar19 + 0x1a4)) == 1) {
LAB_141077814:
      lVar21 = FUN_140519fd4(plVar9);
      if (lVar21 != 0) {
        bVar6 = FUN_140b038fa(lVar21);
        plVar11 = plVar11 + (ulonglong)bVar6 * 4;
      }
    }
  }
  else {
    plVar14 = (longlong *)((longlong)plVar8 + 0xd24);
    plVar11 = plVar8 + 0x1dc;
    if (bVar6 != 0 || *(char *)((longlong)plVar8 + 0xf9b) != '\0') goto LAB_141077814;
  }
  bVar6 = (**(code **)(*plVar11 + 8))(plVar11);
  param_1[0x18] = bVar6;
  lVar21 = *plVar14;
  if (lVar21 == DAT_14cb24238) {
    bVar6 = FUN_1487cd51a(plVar9,plVar8);
  }
  else {
    if ((lVar21 == DAT_14cb24240) || (lVar21 == DAT_14cb24248)) {
      uVar10 = 0;
      plVar14 = plVar8;
    }
    else {
      if ((bVar3 != 0) || (lVar21 != DAT_14cb24230)) {
        bVar6 = (**(code **)(*plVar11 + 0x10))(plVar11);
        goto LAB_141077884;
      }
      uVar10 = 1;
      plVar14 = plVar19;
    }
    bVar6 = FUN_1487cd71e(plVar9,plVar14,uVar10);
  }
LAB_141077884:
  param_1[0x19] = bVar6;
  if (bVar6 == 0) {
    param_1[0x19] = ((param_1[0x18] & 0xfe) == 2) + 1;
  }
  plVar19 = plVar19 + 0x194;
  if (bVar3 != 0) {
    plVar19 = plVar8 + 0x1dc;
  }
  if (DAT_14cb1c498 == 0) {
    local_90 = &local_68;
    local_68 = FUN_1449e2820;
    local_80 = FUN_14081d0ea;
    local_88 = FUN_1427b09ee;
    local_98 = &LAB_147e36893;
    local_a0 = FUN_146420564;
    local_a8 = L"Engine";
    local_b0 = 0;
    local_b8 = 0x10004001;
    local_c0 = 8;
    local_c8 = 0x28;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498,&DAT_147e36892);
  }
  plVar9 = (longlong *)(**(code **)(*plVar9 + 0x288))(plVar9,DAT_14cb1c498);
  if (plVar9 == (longlong *)0x0) goto LAB_141077adb;
  if (DAT_14cb1c498 == 0) {
    local_90 = &local_68;
    local_68 = FUN_1449e2820;
    local_80 = FUN_14081d0ea;
    local_88 = FUN_1427b09ee;
    local_98 = &LAB_147e36893;
    local_a0 = FUN_146420564;
    local_a8 = L"Engine";
    local_b0 = 0;
    local_b8 = 0x10004001;
    local_c0 = 8;
    local_c8 = 0x28;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498,&DAT_147e36892);
  }
  plVar8 = (longlong *)FUN_144718840(plVar9,DAT_14cb1c498);
  if (((plVar9 == plVar8) || (plVar8 == (longlong *)0x0)) ||
     (lVar21 = (**(code **)(*plVar8 + 0x10))(plVar8), lVar21 == 0)) goto LAB_141077adb;
  if ((char)plVar19[0xf] == '\x01') {
    plVar9 = plVar19 + 0xb;
  }
  else {
    plVar9 = (longlong *)FUN_140b041a5(param_1[0x18]);
  }
  lVar13 = plVar19[9];
  if (lVar13 == 0) {
    uVar10 = FUN_1410780a4();
    lVar13 = FUN_14477b664(uVar10);
    plVar19[9] = lVar13;
  }
  lVar15 = plVar19[10];
  if (lVar15 == 0) {
    if ((plVar19[8] != 0) && (lVar13 != 0)) {
      plVar8 = *(longlong **)(lVar13 + 0xb8);
      if ((plVar8 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar5 == '\0')) {
        plVar19[10] = 0;
      }
      else {
        uVar10 = (**(code **)(*plVar8 + 0x110))(plVar8);
        lVar15 = FUN_144aff482(uVar10);
        plVar19[10] = lVar15;
        if (lVar15 != 0) goto LAB_141077ce4;
      }
    }
  }
  else {
LAB_141077ce4:
    if (*(int *)(lVar15 + 0x20) != *(int *)(lVar15 + 0x4c)) {
      lVar13 = *plVar9;
      uVar4 = (uint)((ulonglong)lVar13 >> 0x10);
      uVar17 = (uint)lVar13 & 0xffff;
      lVar18 = lVar15 + 0x50;
      if (*(longlong *)(lVar15 + 0x58) != 0) {
        lVar18 = *(longlong *)(lVar15 + 0x58);
      }
      iVar7 = *(int *)(lVar18 + (ulonglong)
                                (*(int *)(lVar15 + 0x60) - 1U &
                                (int)((ulonglong)lVar13 >> 0x20) + ((uint)lVar13 << 0x10 | uVar17) +
                                (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar17 >> 4)) * 4);
      if (iVar7 != -1) {
        lVar15 = *(longlong *)(lVar15 + 0x18);
        iVar20 = iVar7;
        do {
          if (*(longlong *)(lVar15 + (longlong)iVar20 * 0x28) == lVar13) {
            goto LAB_141077d85;
          }
          iVar20 = *(int *)(lVar15 + (longlong)iVar20 * 0x28 + 0x20);
        } while (iVar20 != -1);
      }
    }
  }
  if (*(int *)(lVar21 + 0xb8) != *(int *)(lVar21 + 0xe4)) {
    lVar13 = *plVar9;
    uVar4 = (uint)((ulonglong)lVar13 >> 0x10);
    uVar17 = (uint)lVar13 & 0xffff;
    lVar15 = lVar21 + 0xe8;
    if (*(longlong *)(lVar21 + 0xf0) != 0) {
      lVar15 = *(longlong *)(lVar21 + 0xf0);
    }
    iVar7 = *(int *)(lVar15 + (ulonglong)
                              (*(int *)(lVar21 + 0xf8) - 1U &
                              (int)((ulonglong)lVar13 >> 0x20) + ((uint)lVar13 << 0x10 | uVar17) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar17 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar8 = (longlong *)(*(longlong *)(lVar21 + 0xb0) + (longlong)iVar7 * 0x28);
        if (*plVar8 == lVar13) goto LAB_1410779d1;
        iVar7 = (int)plVar8[4];
      } while (iVar7 != -1);
    }
  }
  plVar8 = (longlong *)0x0;
  goto LAB_1410779d1;
  while (iVar7 = (int)plVar8[4], plVar8 = (longlong *)0x0, iVar7 != -1) {
LAB_141077d85:
    plVar8 = (longlong *)(lVar15 + (longlong)iVar7 * 0x28);
    if (*plVar8 == lVar13) break;
  }
LAB_1410779d1:
  plVar14 = plVar8 + 1;
  if (plVar8 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
  }
  plVar8 = plVar19 + 0xc;
  if (*(char *)((longlong)plVar19 + 0x79) == '\0') {
    plVar8 = plVar14;
  }
  if (plVar8 == (longlong *)0x0) {
    cVar5 = FUN_14493c216(lVar21 + 0xa8,0);
    if (cVar5 != '\0') {
      if ((longlong *)(lVar21 + 0x16c) != plVar9) {
        *(longlong *)(lVar21 + 0x16c) = *plVar9;
        *(undefined1 *)(lVar21 + 0x174) = 1;
      }
      *(undefined8 *)(lVar21 + 0x178) = 0;
      *(undefined8 *)(lVar21 + 0x180) = 0;
      *(undefined8 *)(lVar21 + 0x188) = 0;
LAB_141077adb:
      if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    FUN_140de1ade(lVar21 + 0xb0);
  }
  else {
    FUN_14058d91e();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_e8);
}



// FUNCTION 141077dfa FUN_141077dfa body=104 status=ok
// SIG undefined FUN_141077dfa(void)

ulonglong FUN_141077dfa(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 != *param_2) || (uVar4 = 1, uVar2 != param_2[1])) {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0)))) &&
       ((*(uint *)(lVar3 + 0x10) == uVar2 && ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar4 = FUN_144729dda(param_2);
    uVar4 = uVar4 ^ 1;
  }
  return uVar4;
}



// FUNCTION 141077e62 FUN_141077e62 body=577 status=ok
// SIG undefined FUN_141077e62(void)

void FUN_141077e62(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0x168) = param_3;
  cVar4 = FUN_14493c216(param_1 + 0xa8,0);
  if (cVar4 == '\0') {
    if (*(longlong *)(param_1 + 400) != param_2) {
      FUN_140844312(&local_40,param_1,param_2);
      *(longlong *)(param_1 + 400) = local_40;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
      }
      plVar3 = *(longlong **)(param_1 + 0x1a0);
      *(undefined8 *)(param_1 + 0x198) = local_38;
      *(longlong **)(param_1 + 0x1a0) = local_30;
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
    if (*(char *)(param_1 + 0x118) == '\0') {
      uVar5 = FUN_144836af6(param_1);
      FUN_1448367ba(param_1,uVar5);
    }
    if (((*(char *)(param_1 + 0x160) == '\x01') &&
        (4 < DAT_14c872be0 - *(longlong *)(param_1 + 0x158))) &&
       ((*(longlong *)(param_1 + 0x150) + 4U <= DAT_14c872be0 ||
        (*(char *)(param_1 + 0x148) == '\0')))) {
      FUN_14012b994(param_1);
    }
    goto LAB_141078026;
  }
  if (*(longlong *)(param_1 + 0x180) == 0) {
    uVar5 = FUN_140bed5ca();
    uVar5 = FUN_14477b664(uVar5);
    *(undefined8 *)(param_1 + 0x180) = uVar5;
  }
  lVar6 = FUN_140bed5ca();
  uVar5 = FUN_140bed5ca();
  FUN_1402d1bfa(&local_40,uVar5,param_2);
  if (*(longlong *)(param_1 + 0x178) != local_40) {
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  *(longlong *)(param_1 + 0x178) = local_40;
  lVar7 = FUN_140bed5ca();
  if (lVar6 == 0) {
LAB_141077f26:
    lVar7 = lVar6;
  }
  else if (lVar7 == 0) {
    lVar7 = 0;
  }
  else if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
           lVar7 + 0x30)) goto LAB_141077f26;
  if (*(longlong *)(param_1 + 0x180) != lVar7) {
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  uVar5 = FUN_14477b664(lVar7);
  lVar6 = FUN_14477b664(uVar5);
  *(longlong *)(param_1 + 0x180) = lVar6;
  if ((lVar6 != 0) && (*(longlong *)(param_1 + 0x178) != 0)) {
    *(longlong *)(param_1 + 0x188) = param_2;
  }
  if (*(char *)(param_1 + 0x174) == '\x01') {
    *(undefined1 *)(param_1 + 0x174) = 0;
  }
LAB_141078026:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410780a4 FUN_1410780a4 body=57 status=ok
// SIG undefined FUN_1410780a4(void)

void FUN_1410780a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1c500 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1c500 = FUN_140002ddd(FUN_14642073b,uVar1,L"GbxStanceUserDataDef");
  }
  return;
}



// FUNCTION 1410780de FUN_1410780de body=1780 status=ok
// SIG undefined FUN_1410780de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410780de(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined1 local_120;
  undefined1 *local_118;
  longlong **local_110;
  char local_108 [26];
  char acStack_ee [6];
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  double local_c8;
  double local_c0;
  double local_b8;
  longlong *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  double local_98;
  double local_90;
  double local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_1[0xe4] != 0) {
    if (*(char *)(param_1[0xe4] + 0xd8) == '\x01') {
      (**(code **)(*param_1 + 0x730))(param_1,5);
      (**(code **)(*param_1 + 0x938))(param_1,2,0);
      (**(code **)(*param_1 + 0x690))(param_1,1);
    }
    lVar14 = (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff);
    if (lVar14 != 0) {
      *(byte *)(lVar14 + 8) = *(byte *)(lVar14 + 8) & 0xdf | *(char *)(param_1[0xe4] + 0xd9) << 5;
    }
  }
  FUN_14025a3d0(param_1);
  if (*(char *)((longlong)param_1 + 0x75c) == '\x01') {
    local_110 = &local_b0;
    local_118 = &LAB_143e07424;
    local_b0 = param_1;
    FUN_144966906(param_1 + 0xa9);
  }
  if ((param_1[0xe4] != 0) && (*(char *)(param_1[0xe4] + 0xa0) == '\x01')) {
    lVar14 = (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff);
    if ((lVar14 != 0) &&
       ((*(longlong *)(lVar14 + 0x138) != 0 &&
        (lVar14 = *(longlong *)(*(longlong *)(lVar14 + 0x138) + 0x50), lVar14 != 0)))) {
      FUN_1457e7c5c(lVar14,param_1 + 0xef,param_1[0xe4],param_1 + 0x48);
    }
  }
  lVar14 = param_1[0x16];
  if (lVar14 == 0) {
    lVar14 = FUN_1448abda6(param_1);
  }
  if (((lVar14 == 0) || (param_1[0x15] == 0)) ||
     (plVar2 = (longlong *)param_1[0x141], plVar2 == (longlong *)0x0)) goto LAB_1410781eb;
  if ((longlong *)plVar2[0x24] != param_1) {
    FUN_1401bf202(plVar2);
    (**(code **)(*plVar2 + 0x4a0))(plVar2,&DAT_14cadad9c);
    FUN_140486fc4(plVar2,param_1,0);
  }
  FUN_140b506a4(plVar2);
  lVar15 = 0;
  do {
    cVar7 = local_108[lVar15];
    cVar8 = local_108[lVar15 + 1];
    cVar9 = local_108[lVar15 + 2];
    cVar10 = local_108[lVar15 + 3];
    cVar11 = local_108[lVar15 + 4];
    cVar12 = local_108[lVar15 + 5];
    if ((bool)(~(cVar7 == '\0') & 1)) {
      local_108[lVar15] = '\0';
    }
    if ((bool)(~(cVar8 == '\0') & 1)) {
      local_108[lVar15 + 1] = '\0';
    }
    if ((bool)(~(cVar9 == '\0') & 1)) {
      local_108[lVar15 + 2] = '\0';
    }
    if ((bool)(~(cVar10 == '\0') & 1)) {
      local_108[lVar15 + 3] = '\0';
    }
    if ((bool)(~(cVar11 == '\0') & 1)) {
      local_108[lVar15 + 4] = '\0';
    }
    if ((bool)(~(cVar12 == '\0') & 1)) {
      local_108[lVar15 + 5] = '\0';
    }
    if ((bool)(~(local_108[lVar15 + 6] == '\0') & 1)) {
      local_108[lVar15 + 6] = '\0';
    }
    if ((bool)(~(local_108[lVar15 + 7] == '\0') & 1)) {
      local_108[lVar15 + 7] = '\0';
    }
    if ((bool)(~(cVar7 == '\0') & 1)) {
      local_108[lVar15 + 8] = '\0';
    }
    if ((bool)(~(cVar8 == '\0') & 1)) {
      local_108[lVar15 + 9] = '\0';
    }
    if ((bool)(~(cVar9 == '\0') & 1)) {
      local_108[lVar15 + 10] = '\0';
    }
    if ((bool)(~(cVar10 == '\0') & 1)) {
      local_108[lVar15 + 0xb] = '\0';
    }
    if ((bool)(~(cVar11 == '\0') & 1)) {
      local_108[lVar15 + 0xc] = '\0';
    }
    if ((bool)(~(cVar12 == '\0') & 1)) {
      local_108[lVar15 + 0xd] = '\0';
    }
    if ((bool)(~(local_108[lVar15 + 0xe] == '\0') & 1)) {
      local_108[lVar15 + 0xe] = '\0';
    }
    if ((bool)(~(local_108[lVar15 + 0xf] == '\0') & 1)) {
      local_108[lVar15 + 0xf] = '\0';
    }
    lVar15 = lVar15 + 0x10;
  } while (lVar15 != 0x20);
  lVar15 = 0x1a;
  do {
    if (local_108[lVar15] != (&DAT_14cad0ed0)[lVar15]) {
      local_108[lVar15] = (&DAT_14cad0ed0)[lVar15];
    }
    lVar15 = lVar15 + 1;
  } while (lVar15 != 0x20);
  bVar1 = *(byte *)(lVar14 + 0x152);
  if (((bVar1 != 1) && ((6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0)))) &&
     (local_108[2] != '\x02')) {
    local_108[2] = '\x02';
  }
  lVar14 = param_1[0x141];
  if (((lVar14 != 0) &&
      ((lVar15 = param_1[0x16], lVar15 != 0 || (lVar15 = FUN_1448abda6(param_1), lVar15 != 0)))) &&
     (((*(byte *)(lVar15 + 0x155) & 0x20) == 0 &&
      ((bVar1 = *(byte *)(lVar15 + 0x152), bVar1 != 1 &&
       ((6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0)))))))) {
    (**(code **)(*param_1 + 0x530))(param_1,&local_b0);
    if ((local_98 != 0.0) ||
       ((((NAN(local_98) || (local_90 != 0.0)) || (NAN(local_90))) ||
        ((local_88 != 0.0 || (NAN(local_88))))))) {
      local_b8 = local_88 + 25.0;
      local_c0 = local_90 + 0.0;
      local_c8 = local_98 + 0.0;
      FUN_140c9cc04(lVar14,&local_c8,1);
      local_d8 = local_a0;
      local_e8 = local_b0;
      uStack_e0 = uStack_a8;
      auVar17 = *(undefined1 (*) [16])(lVar14 + 0x1b0);
      dVar5 = auVar17._0_8_;
      dVar6 = auVar17._8_8_;
      dVar22 = *(double *)(lVar14 + 0x1c0);
      puVar16 = *(undefined8 **)(lVar14 + 0x230);
      if (puVar16 == (undefined8 *)0x0) {
        puVar16 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        uVar13 = DAT_14c8463d8;
        *puVar16 = DAT_14c8463d0;
        puVar16[1] = uVar13;
        uVar13 = DAT_14c8463e8;
        puVar16[2] = DAT_14c8463e0;
        puVar16[3] = uVar13;
        uVar13 = DAT_14c846500;
        puVar16[4] = DAT_14c8464f8;
        puVar16[5] = uVar13;
        puVar16[6] = DAT_14c846508;
        *(undefined8 **)(lVar14 + 0x230) = puVar16;
      }
      if ((((double)puVar16[4] != dVar5) || (NAN((double)puVar16[4]) || NAN(dVar5))) ||
         (((double)puVar16[5] != dVar6 || (NAN((double)puVar16[5]) || NAN(dVar6))))) {
LAB_1410785c9:
        auVar25._8_8_ = 0;
        auVar25._0_8_ = dVar22;
        dVar3 = (double)DAT_1499387d0;
        dVar4 = DAT_1499387d0._8_8_;
        auVar17 = divpd(auVar17,_DAT_1499387d0);
        auVar20 = divpd(auVar25,_DAT_1499387d0);
        auVar17 = roundpd(auVar17,auVar17,3);
        auVar20 = roundpd(auVar20,auVar20,3);
        dVar5 = dVar5 - auVar17._0_8_ * dVar3;
        dVar6 = dVar6 - auVar17._8_8_ * dVar4;
        auVar26._0_8_ = dVar22 - auVar20._0_8_ * dVar3;
        auVar26._8_8_ = 0.0 - auVar20._8_8_ * dVar4;
        auVar24._0_8_ = dVar5 + dVar3;
        auVar24._8_8_ = dVar6 + dVar4;
        auVar23._0_8_ = dVar3 + auVar26._0_8_;
        auVar23._8_8_ = dVar4 + auVar26._8_8_;
        auVar20._8_8_ = -(ulonglong)(0.0 <= dVar6);
        auVar20._0_8_ = -(ulonglong)(0.0 <= dVar5);
        auVar17._8_4_ = SUB84(dVar6,0);
        auVar17._0_8_ = dVar5;
        auVar17._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        auVar20 = blendvpd(auVar24,auVar17,auVar20);
        auVar18._8_8_ = -(ulonglong)(0.0 <= auVar26._8_8_);
        auVar18._0_8_ = -(ulonglong)(0.0 <= auVar26._0_8_);
        auVar17 = blendvpd(auVar23,auVar26,auVar18);
        auVar21._0_8_ = auVar20._0_8_ + -360.0;
        auVar21._8_8_ = auVar20._8_8_ + -360.0;
        auVar19._8_8_ = -(ulonglong)(180.0 < auVar20._8_8_);
        auVar19._0_8_ = -(ulonglong)(180.0 < auVar20._0_8_);
        auVar20 = blendvpd(auVar20,auVar21,auVar19);
        dVar22 = auVar17._0_8_;
        *(undefined1 (*) [16])(puVar16 + 4) = auVar20;
        puVar16[6] = ~-(ulonglong)(180.0 < dVar22) & (ulonglong)dVar22 |
                     (ulonglong)(dVar22 + -360.0) & -(ulonglong)(180.0 < dVar22);
        FUN_144a7484c(puVar16 + 4,&local_78);
        puVar16[2] = local_68;
        puVar16[3] = uStack_60;
        *puVar16 = local_78;
        puVar16[1] = uStack_70;
      }
      else if (((double)puVar16[6] != dVar22) || (NAN((double)puVar16[6]) || NAN(dVar22)))
      goto LAB_1410785c9;
      local_78 = *puVar16;
      uStack_70 = puVar16[1];
      local_68 = puVar16[2];
      uStack_60 = puVar16[3];
      local_120 = 0;
      local_128 = 0;
      FUN_144927ad4(lVar14,&local_e8,&local_78,0);
    }
  }
  (**(code **)(*plVar2 + 0x948))(plVar2,local_108);
  if (param_1[0x141] != 0) {
    lVar14 = FUN_14477bcf0();
    FUN_140f94ab6(param_1[0x141],*(undefined8 *)(lVar14 + 0x60));
    if ((*(byte *)((longlong)param_1 + 0x2d3) & 8) == 0) {
      *(byte *)((longlong)param_1 + 0x2d3) = *(byte *)((longlong)param_1 + 0x2d3) | 8;
      (**(code **)(*param_1 + 0x958))(param_1);
    }
  }
LAB_1410781eb:
  if ((char)param_1[0xe8] == '\x01') {
    *(undefined1 *)(param_1 + 0xe8) = 0;
    (**(code **)(param_1[0xe3] + 0x68))(param_1 + 0xe3);
  }
  if ((local_50 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410787d4 FUN_1410787d4 body=108 status=ok
// SIG undefined FUN_1410787d4(void)

void FUN_1410787d4(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  FUN_1405a2f88(param_1 + 0x410,param_2,0,0);
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if ((byte)(lVar1 != 0 & *(byte *)(param_1 + 0xa00) & (byte)param_2) != 1) {
    return;
  }
  if ((*(byte *)(lVar1 + 100) & 2) == 0) {
    *(byte *)(lVar1 + 99) = *(byte *)(lVar1 + 99) | 8;
  }
  else {
    FUN_140c7ce82(lVar1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x000141078837. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x2c0))(*(longlong **)(param_1 + 0xa8),1);
  return;
}



// FUNCTION 141078840 FUN_141078840 body=1 status=ok
// SIG undefined FUN_141078840(void)

void FUN_141078840(void)

{
  return;
}



// FUNCTION 141078850 FUN_141078850 body=118 status=ok
// SIG undefined FUN_141078850(void)

undefined8 * FUN_141078850(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5dfa60;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  FUN_14075386c(param_1 + 0x81);
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_1407538a4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410788c6 FUN_1410788c6 body=311 status=ok
// SIG undefined FUN_1410788c6(void)

void FUN_1410788c6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar7 = DAT_14caca278;
  if (DAT_14caca280 == 0) {
    plVar7 = (longlong *)0x0;
  }
  (**(code **)(*plVar7 + 0x58))(plVar7,param_1);
  lVar5 = FUN_1447210f0(param_1);
  if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x155) & 0x20) == 0)) {
    uVar6 = FUN_1447210f0(param_1);
    FUN_1404d1e78(&local_30,uVar6);
    if ((local_30 != 0) && ((local_28 != (longlong *)0x0 && (0 < (int)local_28[1])))) {
      iVar4 = (int)local_28[1];
      do {
        if (iVar4 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_28[1];
        bVar8 = iVar4 == iVar3;
        if (bVar8) {
          *(int *)(local_28 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar7 = local_28;
      } while (!bVar8);
      lVar5 = 0;
      if (plVar7 != (longlong *)0x0) {
        lVar5 = local_30;
      }
      FUN_1457e882a(lVar5,param_1);
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
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x3a8);
  if (lVar5 != 0) {
    FUN_141078a6c(&local_38);
    FUN_1410789fe(lVar5 + 0x59e,param_1,local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410789fe FUN_1410789fe body=108 status=ok
// SIG undefined FUN_1410789fe(void)

void FUN_1410789fe(char *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == '\x01') {
    FUN_14015716c(param_1,&local_30);
    cVar1 = FUN_14048e8dc(param_1 + -0x59e,local_30,param_2,param_3);
    *param_1 = cVar1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141078a6c FUN_141078a6c body=177 status=ok
// SIG undefined FUN_141078a6c(void)

undefined8 * FUN_141078a6c(undefined8 *param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68 [9];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb54760) {
    FUN_144b3d300(&DAT_14cb54760);
    if (DAT_14cb54760 == -1) {
      pwVar2 = L"OnBrushComponentPhysicsStateChanged";
      puVar3 = local_68;
      for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *(undefined8 *)pwVar2;
        pwVar2 = pwVar2 + 4;
        puVar3 = puVar3 + 1;
      }
      FUN_1446f470e(&DAT_14cb54758,local_68,1);
      _Init_thread_footer(&DAT_14cb54760);
    }
  }
  *param_1 = DAT_14cb54758;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141078b1e FUN_141078b1e body=263 status=ok
// SIG undefined FUN_141078b1e(void)

void FUN_141078b1e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    lVar2 = *param_1;
    bVar4 = FUN_141078c26(lVar2,*param_2);
    iVar7 = 0;
    iVar8 = 0;
    do {
      lVar11 = (longlong)iVar8;
      iVar3 = iVar8 + 1;
      if (iVar8 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      lVar12 = lVar2 + 8 + lVar11 * 8;
      iVar9 = iVar8;
      lVar6 = lVar11;
      do {
        lVar6 = lVar6 + 1;
        iVar10 = iVar3;
        if (lVar13 <= lVar6) break;
        bVar5 = FUN_141078c26(lVar12,*param_2);
        iVar9 = iVar9 + 1;
        lVar12 = lVar12 + 8;
        iVar10 = iVar9;
      } while ((bVar4 & 1) == bVar5);
      if ((bVar4 & 1) == 0) {
        if (iVar7 != iVar8) {
          memmove((void *)(lVar2 + (longlong)iVar7 * 8),(void *)(lVar2 + lVar11 * 8),
                  (longlong)(iVar10 - iVar8) << 3);
        }
        iVar7 = iVar7 + (iVar10 - iVar8);
      }
      iVar8 = iVar10;
      bVar4 = bVar4 ^ 1;
    } while (lVar6 < lVar13);
    *(int *)(param_1 + 1) = iVar7;
  }
  return;
}



// FUNCTION 141078c26 FUN_141078c26 body=104 status=ok
// SIG undefined FUN_141078c26(void)

ulonglong FUN_141078c26(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 == *param_2) && (uVar2 == param_2[1])) {
    uVar3 = CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
  }
  else {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0)))) &&
       ((*(uint *)(lVar4 + 0x10) == uVar2 && ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar3 = FUN_144729dda(param_2);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}



// FUNCTION 141078c98 FUN_141078c98 body=94 status=ok
// SIG undefined FUN_141078c98(void)

undefined8 FUN_141078c98(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)*param_1;
  if (((plVar1 != (longlong *)0x0) && ((int)plVar1[1] != 0)) &&
     ((longlong *)*plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*(longlong *)*plVar1 + 0x30))();
    if (((cVar2 != '\0') && (param_2 != 0)) &&
       (((int)((longlong *)*param_1)[1] != 0 &&
        (plVar1 = *(longlong **)*param_1, plVar1 != (longlong *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x000141078cea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 141078cf6 FUN_141078cf6 body=40 status=ok
// SIG undefined FUN_141078cf6(void)

undefined8 FUN_141078cf6(undefined8 param_1,int param_2)

{
  FUN_141078d1e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141078d1e FUN_141078d1e body=119 status=ok
// SIG undefined FUN_141078d1e(void)

void FUN_141078d1e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b242990;
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



// FUNCTION 141078d96 FUN_141078d96 body=118 status=ok
// SIG undefined FUN_141078d96(void)

void FUN_141078d96(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141078e0c FUN_141078e0c body=55 status=ok
// SIG undefined FUN_141078e0c(void)

void FUN_141078e0c(longlong *param_1)

{
  FUN_141078e44(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141078e44 FUN_141078e44 body=121 status=ok
// SIG undefined FUN_141078e44(void)

void FUN_141078e44(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
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



// FUNCTION 141078ebe FUN_141078ebe body=89 status=ok
// SIG undefined FUN_141078ebe(void)

void FUN_141078ebe(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar4 != 0) {
        FUN_1400020a8();
      }
      plVar3 = (longlong *)plVar4[-1];
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
      plVar4 = plVar4 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141078f18 FUN_141078f18 body=502 status=ok
// SIG undefined FUN_141078f18(void)

void FUN_141078f18(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar15 = 1;
    local_58._4_4_ = 0;
    uVar14 = 0xffffffff;
    iVar16 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
    uVar14 = (uint)local_58;
    iVar16 = (int)local_68;
  }
  plVar7 = local_60;
  iVar9 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      plVar10 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar9 * 0x30);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar3 = (int *)((longlong)plVar10 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar15;
      plVar10 = (longlong *)plVar7[2];
      if ((longlong *)plVar7[2] == (longlong *)0x0) {
        plVar10 = plVar7;
      }
      iVar5 = (int)plVar7[3];
      lVar13 = (longlong)iVar16;
      uVar8 = *(uint *)((longlong)plVar10 + lVar13 * 4) & uVar14;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar6 = iVar9;
        if (iVar9 < iVar16) {
          iVar6 = iVar16;
        }
        if (iVar9 <= iVar16) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar8 = *(uint *)((longlong)plVar10 + lVar11 * 4 + lVar13 * 4 + 4);
          if (uVar8 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar6 - lVar13 == lVar11) goto LAB_141079040;
        }
        iVar16 = iVar16 + (int)lVar11 + 1;
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar9 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar5);
  }
LAB_141079040:
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
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141079110 FUN_141079110 body=648 status=ok
// SIG undefined FUN_141079110(void)

void FUN_141079110(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined1 auStack_98 [32];
  int local_78;
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_74 = param_2;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar10 = 1;
    local_58._4_4_ = 0;
    uVar15 = 0xffffffff;
    iVar16 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar10 = local_68 >> 0x20;
    uVar15 = (uint)local_58;
    iVar16 = (int)local_68;
  }
  plVar6 = local_60;
  iVar8 = local_58._4_4_;
  iVar14 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      lVar13 = lVar11 + (longlong)iVar8 * 0x110;
      lVar12 = 0;
      local_78 = iVar14;
      do {
        if (*(longlong *)(lVar11 + (longlong)iVar8 * 0x110 + 0xe0 + lVar12) != 0) {
          FUN_1400020a8();
        }
        lVar12 = lVar12 + -0x10;
      } while (lVar12 != -0x50);
      lVar11 = 0x90;
      do {
        if (*(longlong *)(lVar13 + lVar11) != 0) {
          FUN_1400020a8();
        }
        lVar11 = lVar11 + -0x10;
      } while (lVar11 != 0x40);
      plVar9 = *(longlong **)(lVar13 + 0x10);
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
      uVar15 = uVar15 & ~(uint)uVar10;
      plVar9 = (longlong *)plVar6[2];
      if ((longlong *)plVar6[2] == (longlong *)0x0) {
        plVar9 = plVar6;
      }
      iVar4 = (int)plVar6[3];
      lVar13 = (longlong)iVar16;
      uVar7 = *(uint *)((longlong)plVar9 + lVar13 * 4) & uVar15;
      iVar14 = local_78;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar5 = iVar8;
        if (iVar8 < iVar16) {
          iVar5 = iVar16;
        }
        if (iVar8 <= iVar16) break;
        lVar11 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar7 = *(uint *)((longlong)plVar9 + lVar11 * 4 + lVar13 * 4 + 4);
          if (uVar7 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar5 - lVar13 == lVar11) goto LAB_141079303;
        }
        iVar16 = iVar16 + (int)lVar11 + 1;
        uVar15 = 0xffffffff;
      }
      uVar10 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar10 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar8 = (iVar14 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar4);
  }
LAB_141079303:
  iVar16 = local_74;
  if (local_74 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_74);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != local_74) {
    FUN_140e3154e(param_1,local_74);
  }
  param_1[6] = 0xffffffff;
  uVar15 = iVar16 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar15) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar7 = 0x80;
    if (0x80 < (int)uVar15) {
      uVar7 = uVar15;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14107939a FUN_14107939a body=489 status=ok
// SIG undefined FUN_14107939a(void)

void FUN_14107939a(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar15 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
  }
  plVar7 = local_60;
  iVar16 = (int)local_68;
  uVar14 = (uint)local_58;
  iVar9 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      plVar10 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar9 * 0x28);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar3 = (int *)((longlong)plVar10 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar15;
      plVar10 = (longlong *)plVar7[2];
      if ((longlong *)plVar7[2] == (longlong *)0x0) {
        plVar10 = plVar7;
      }
      iVar5 = (int)plVar7[3];
      lVar13 = (longlong)iVar16;
      uVar8 = *(uint *)((longlong)plVar10 + lVar13 * 4) & uVar14;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar6 = iVar9;
        if (iVar9 < iVar16) {
          iVar6 = iVar16;
        }
        if (iVar9 <= iVar16) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar8 = *(uint *)((longlong)plVar10 + lVar11 * 4 + lVar13 * 4 + 4);
          if (uVar8 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar6 - lVar13 == lVar11) goto LAB_1410794ca;
        }
        iVar16 = iVar16 + (int)lVar11 + 1;
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar9 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar5);
  }
LAB_1410794ca:
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
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141079584 FUN_141079584 body=514 status=ok
// SIG undefined FUN_141079584(void)

void FUN_141079584(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_74 = param_2;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar9 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar9 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar13 = (int)local_68;
  uVar12 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      if (*(longlong *)(lVar11 + 0x30 + (longlong)iVar6 * 0x70) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar11 + (longlong)iVar6 * 0x70 + 0x20) != 0) {
        FUN_1400020a8();
      }
      uVar12 = uVar12 & ~(uint)uVar9;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar8 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar3 - lVar11 == lVar8) goto LAB_1410796f3;
        }
        iVar13 = iVar13 + (int)lVar8 + 1;
        uVar12 = 0xffffffff;
      }
      uVar9 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1410796f3:
  iVar13 = local_74;
  if (local_74 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_74);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != local_74) {
    FUN_140875b54(param_1,local_74);
  }
  param_1[6] = 0xffffffff;
  uVar12 = iVar13 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar12) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141079790 FUN_141079790 body=1336 status=ok
// SIG undefined FUN_141079790(void)

undefined8 * FUN_141079790(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_140e6e8f4();
  *param_1 = &PTR_FUN_14b711280;
  param_1[5] = &PTR_FUN_14b7121c0;
  param_1[6] = &PTR_LAB_14b712200;
  param_1[0x2f] = &PTR_FUN_14b712250;
  param_1[0x3c] = &PTR_FUN_14b712390;
  param_1[0x3d] = &PTR_FUN_14b712420;
  param_1[0x20b] = &PTR_FUN_14b712478;
  param_1[0x238] = &PTR_FUN_14b712490;
  param_1[0x83d] = 0;
  param_1[0x83e] = 0;
  param_1[0x83f] = 2;
  *(undefined1 *)(param_1 + 0x840) = 0;
  param_1[0x841] = 0;
  param_1[0x842] = 0;
  param_1[0x843] = 0;
  param_1[0x844] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4225) = 0;
  *(undefined4 *)(param_1 + 0x846) = 0xbf800000;
  *(undefined2 *)((longlong)param_1 + 0x4234) = 0;
  param_1[0x847] = 0;
  param_1[0x848] = 0x3f800000;
  param_1[0x849] = &DAT_41200000;
  param_1[0x84a] = 0x4248000000000000;
  param_1[0x84b] = 0;
  *(undefined4 *)(param_1 + 0x84c) = 0x3f19999a;
  *(undefined1 *)((longlong)param_1 + 0x4294) = 0;
  *(undefined1 *)((longlong)param_1 + 0x42b4) = 0;
  param_1[0x851] = 0;
  param_1[0x84f] = 0;
  param_1[0x850] = 0;
  param_1[0x84d] = 0;
  param_1[0x84e] = 0;
  param_1[0x853] = 0;
  param_1[0x854] = 0;
  param_1[0x857] = 0;
  *(undefined4 *)(param_1 + 0x858) = 0;
  param_1[0x859] = 0;
  param_1[0x85a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x42d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x42dc) = 0;
  param_1[0x85d] = 0;
  param_1[0x85e] = 0;
  param_1[0x85f] = 0;
  param_1[0x860] = 0;
  param_1[0x861] = 0;
  param_1[0x862] = 0;
  *(undefined4 *)(param_1 + 0x863) = 0;
  *(undefined1 *)((longlong)param_1 + 0x431c) = 0xff;
  param_1[0x86a] = 0;
  *(undefined4 *)(param_1 + 0x86b) = 0;
  param_1[0x866] = 0;
  param_1[0x867] = 0;
  param_1[0x864] = 0;
  param_1[0x865] = 0;
  *(undefined8 *)((longlong)param_1 + 0x435c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4364) = 0;
  param_1[0x86e] = 0;
  *(undefined4 *)(param_1 + 0x86f) = 0;
  *(undefined4 *)(param_1 + 0x870) = 0;
  *(undefined1 *)(param_1 + 0x871) = 0;
  param_1[0x872] = 0;
  *(undefined2 *)(param_1 + 0x873) = 0;
  *(undefined4 *)((longlong)param_1 + 0x439c) = 0;
  param_1[0x876] = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8;
  param_1[0x874] = DAT_14c8464e0;
  param_1[0x875] = uVar3;
  uVar3 = DAT_14c8464e8;
  param_1[0x877] = DAT_14c8464e0;
  param_1[0x878] = uVar3;
  param_1[0x879] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x87a) = 0;
  param_1[0x87d] = 0;
  param_1[0x87b] = 0;
  param_1[0x87c] = 0;
  *(undefined1 *)(param_1 + 0x883) = 0;
  param_1[0x881] = 0;
  param_1[0x882] = 0;
  param_1[0x87f] = 0;
  param_1[0x880] = 0;
  *(undefined8 *)((longlong)param_1 + 0x443a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4442) = 0;
  param_1[0x886] = 0;
  param_1[0x887] = 0;
  param_1[0x884] = 0;
  param_1[0x885] = 0;
  param_1[0x88a] = 0xbff0000000000000;
  param_1[0x88c] = 0;
  param_1[0x88d] = 0;
  param_1[0x88e] = 0;
  param_1[0x88f] = 0;
  param_1[0x896] = 0;
  param_1[0x894] = 0;
  param_1[0x895] = 0;
  param_1[0x892] = 0;
  param_1[0x893] = 0;
  *(undefined2 *)(param_1 + 0x8a0) = 0;
  param_1[0x89e] = 0;
  param_1[0x89f] = 0;
  param_1[0x89c] = 0;
  param_1[0x89d] = 0;
  param_1[0x89a] = 0;
  param_1[0x89b] = 0;
  param_1[0x898] = 0;
  param_1[0x899] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4504) = 0xbf800000bf800000;
  *(undefined4 *)((longlong)param_1 + 0x450c) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x8a2) = 0;
  param_1[0x8a5] = 0;
  param_1[0x8a6] = 0x200000000;
  param_1[0x8ca] = 0;
  param_1[0x8cb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4581) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4589) = 0;
  param_1[0x8af] = 0;
  param_1[0x8b0] = 0;
  param_1[0x8ad] = 0;
  param_1[0x8ae] = 0;
  param_1[0x8ab] = 0;
  param_1[0x8ac] = 0;
  param_1[0x8a9] = 0;
  param_1[0x8aa] = 0;
  param_1[0x8a7] = 0;
  param_1[0x8a8] = 0;
  memset((void *)((longlong)param_1 + 0x4594),0,0xb8);
  param_1[0x8cc] = 2;
  *(undefined1 *)(param_1 + 0x8cd) = 0;
  param_1[0x8d0] = 0;
  param_1[0x8d1] = 0x200000000;
  *(undefined1 *)(param_1 + 0x8d2) = 0;
  param_1[0x8d5] = 0;
  param_1[0x8d6] = 0x200000000;
  *(undefined1 *)(param_1 + 0x8d7) = 0;
  param_1[0x8da] = 0;
  param_1[0x8db] = 0x200000000;
  *(undefined1 *)(param_1 + 0x8dc) = 0;
  param_1[0x8df] = 0;
  param_1[0x8e0] = 0x200000000;
  *(undefined4 *)(param_1 + 0x8e2) = 0;
  param_1[0x8e3] = 0;
  param_1[0x8e4] = 0;
  param_1[0x8e5] = 0;
  param_1[0x8e6] = 0;
  param_1[0x8e7] = 0;
  param_1[0x8e8] = 0;
  param_1[0x8e9] = 0;
  param_1[0x8ea] = 0;
  param_1[0x8eb] = 0;
  param_1[0x8ec] = 0;
  param_1[0x8ef] = DAT_14c846300;
  uVar3 = DAT_14c8462f8;
  param_1[0x8ed] = DAT_14c8462f0;
  param_1[0x8ee] = uVar3;
  param_1[0x8f0] = 0;
  param_1[0x8f1] = 0;
  *(undefined4 *)(param_1 + 0x8f2) = 0;
  *(undefined4 *)(param_1 + 0x8f3) = 0xbf800000;
  param_1[0x8f4] = 0;
  param_1[0x8f5] = 0;
  param_1[0x8f6] = 0;
  param_1[0x8f7] = 0;
  *(undefined4 *)(param_1 + 0x8f8) = 0;
  param_1[0x8e1] = &PTR_FUN_14b712770;
  param_1[0x8f9] = 0xbf800000bf800000;
  param_1[0x8fa] = 0;
  param_1[0x8fb] = 0;
  param_1[0x8fc] = 0;
  param_1[0x8fd] = 0;
  param_1[0x8fe] = 2;
  *(byte *)((longlong)param_1 + 0x349) = *(byte *)((longlong)param_1 + 0x349) | 0x80;
  *(undefined4 *)(param_1 + 0x845) = 0;
  *(undefined1 *)((longlong)param_1 + 0x422c) = 0;
  *(float *)(param_1 + 0x890) = *(float *)((longlong)param_1 + 0x1de4) * 1.5;
  *(undefined4 *)((longlong)param_1 + 0x4484) = *(undefined4 *)((longlong)param_1 + 0x2ec);
  *(undefined4 *)(param_1 + 0x891) = *(undefined4 *)((longlong)param_1 + 0x2ec);
  puVar1 = param_1 + 0x3d9;
  iVar2 = *(int *)(param_1 + 0x3da);
  *(uint *)(param_1 + 0x3da) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1ed4) < iVar2 + 1U) {
    FUN_140e6f7c8(puVar1,iVar2);
  }
  *(undefined8 *)(param_1[0x3d9] + (longlong)iVar2 * 8) = DAT_14cbc5e48;
  iVar2 = *(int *)(param_1 + 0x3da);
  *(uint *)(param_1 + 0x3da) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1ed4) < iVar2 + 1U) {
    FUN_140e6f7c8(puVar1,iVar2);
  }
  *(undefined8 *)(param_1[0x3d9] + (longlong)iVar2 * 8) = DAT_14cbc5e50;
  iVar2 = *(int *)(param_1 + 0x3da);
  *(uint *)(param_1 + 0x3da) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1ed4) < iVar2 + 1U) {
    FUN_140e6f7c8(puVar1,iVar2);
  }
  *(undefined8 *)(param_1[0x3d9] + (longlong)iVar2 * 8) = DAT_14cbc5e58;
  iVar2 = *(int *)(param_1 + 0x3da);
  *(uint *)(param_1 + 0x3da) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1ed4) < iVar2 + 1U) {
    FUN_140e6f7c8(puVar1,iVar2);
  }
  *(undefined8 *)(param_1[0x3d9] + (longlong)iVar2 * 8) = DAT_14cbc5e60;
  param_1[0x89b] = param_1;
  param_1[0x17f] = param_1 + 0x8e1;
  return param_1;
}



// FUNCTION 141079cc8 FUN_141079cc8 body=58 status=ok
// SIG undefined FUN_141079cc8(void)

undefined8 FUN_141079cc8(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_140f42f34();
  if (lVar2 != 0) {
    cVar1 = FUN_1405f61f4(lVar2);
    if (cVar1 == '\x04') {
      uVar3 = FUN_141079d02(param_1 + 0x1b8);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 141079d02 FUN_141079d02 body=125 status=ok
// SIG undefined FUN_141079d02(void)

undefined8 FUN_141079d02(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar4 = FUN_140f42f34(*param_1);
  if (lVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_140f430f8(lVar4);
  }
  iVar1 = *(int *)(param_1 + 2);
  if ((longlong)iVar1 != 0) {
    lVar4 = param_1[1];
    lVar6 = 0;
    do {
      if (iVar3 == *(int *)(*(longlong *)(*(longlong *)(lVar4 + lVar6) + 0x40) + 0x40)) {
        cVar2 = FUN_141079d80();
        if (cVar2 != '\0') {
          return 0;
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  uVar5 = FUN_1457e9d52(param_1);
  return uVar5;
}



// FUNCTION 141079d80 FUN_141079d80 body=65 status=ok
// SIG undefined FUN_141079d80(void)

ulonglong FUN_141079d80(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_140dcc81c();
  if (((lVar2 != 0) && (bVar1 = FUN_141042fba(lVar2), bVar1 < 0x12)) &&
     ((0x22200U >> (bVar1 & 0x1f) & 1) != 0)) {
    return 0;
  }
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x40) >> 8),
                  *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0x3aa)) ^ 1;
}



// FUNCTION 141079dc2 FUN_141079dc2 body=132 status=ok
// SIG undefined FUN_141079dc2(void)

undefined8 * FUN_141079dc2(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a7be1c0;
  puVar1 = param_1 + 2;
  if ((undefined8 *)param_1[0x232] != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[0x232];
  }
  FUN_141079e46(puVar1,*(undefined4 *)(param_1 + 0x233));
  if (param_1[0x232] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a7be1c8;
  puVar1 = TlsGetValue(DAT_14c7612d8);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c7612d8,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141079e46 FUN_141079e46 body=70 status=ok
// SIG undefined FUN_141079e46(void)

void FUN_141079e46(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)(param_1 + 0x1178) = 0;
    if (*(longlong *)(param_1 + 0x1170) != 0) {
      FUN_1400020a8();
    }
    FUN_1447a64de(param_1);
    param_1 = param_1 + 0x1180;
  }
  return;
}



// FUNCTION 141079e8c FUN_141079e8c body=124 status=ok
// SIG undefined FUN_141079e8c(void)

longlong * FUN_141079e8c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0xb8,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b2830f0;
  FUN_141079f08(plVar3 + 2,0);
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



// FUNCTION 141079f08 FUN_141079f08 body=315 status=ok
// SIG undefined FUN_141079f08(void)

undefined8 * FUN_141079f08(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14a1b6c40;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_38 = (longlong *)FUN_14001cc68(0x98,0x10);
  local_38[1] = (longlong)&DAT_100000001;
  *local_38 = (longlong)&PTR_FUN_14a1b6cc0;
  local_40 = local_38 + 2;
  local_38[2] = (longlong)&PTR_FUN_14a18e458;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_38[8] = 0;
  local_38[9] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0;
  local_38[0xc] = 0;
  local_38[0xd] = 0;
  local_38[0xe] = 0;
  local_38[0xf] = 0;
  local_38[0x10] = 0;
  local_38[0x11] = 0;
  local_38[0x12] = 0;
  FUN_1404e24cc(&local_40);
  FUN_1404e256a(param_1 + 0xd,&local_40);
  plVar3 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR_FUN_14b42d630;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14107a044 FUN_14107a044 body=267 status=ok
// SIG undefined FUN_14107a044(void)

void FUN_14107a044(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auStack_668 [32];
  longlong local_648 [125];
  longlong local_260;
  longlong local_50;
  byte local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_668;
  (**(code **)(*param_1 + 0x9a8))();
  if ((*(byte *)((longlong)param_1 + 0x5bc) & 0x10) != 0) {
    if ((*(byte *)((longlong)param_1 + 0x349) & 1) == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_1[0x22];
    }
    FUN_1402ed838(local_648,lVar1,1,1);
    (**(code **)(*param_1 + 0x640))(param_1,param_2);
    (**(code **)(*param_1 + 0x658))(param_1);
    *(byte *)((longlong)param_1 + 0x5bc) = *(byte *)((longlong)param_1 + 0x5bc) & 0xef;
    if ((((local_40 & 1) != 0) && (local_648[0] != 0)) &&
       ((*(uint *)(local_648[0] + 8) >> 0x1e & 1) == 0)) {
      FUN_140248a4c(local_648[0],local_648);
    }
    local_648[0] = 0;
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (local_260 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_668) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14107a150 FUN_14107a150 body=170 status=ok
// SIG undefined FUN_14107a150(void)

void FUN_14107a150(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((DAT_14cad09b8 == 1) && (cVar2 = (**(code **)(*param_1 + 0x9b8))(), cVar2 != '\0')) &&
     (FUN_1479c8da0(param_1[0x41],&local_30), local_30 != 0)) {
    do {
      lVar1 = local_30;
      (**(code **)(*param_1 + 0x9a0))(param_1,local_30 + -0x10);
      (**(code **)(*local_28 + 0x10))(local_28,lVar1);
      FUN_1479c8da0(param_1[0x41],&local_30);
    } while (local_30 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14107a202 FUN_14107a202 body=228 status=ok
// SIG undefined FUN_14107a202(void)

longlong FUN_14107a202(void)

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
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb0ace8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad04a;
    local_28 = &LAB_146406b72;
    local_38 = &LAB_147d67b2b;
    local_40 = FUN_146406b77;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"GameInstanceSubsystem",&DAT_14cb0ace8,&DAT_147d67b2a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0ace8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14107a2e8 thunk_FUN_1402d9b92 body=5 status=ok
// SIG undefined thunk_FUN_1402d9b92(void)

void thunk_FUN_1402d9b92(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5cfba0;
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 14107a2f2 FUN_14107a2f2 body=228 status=ok
// SIG undefined FUN_14107a2f2(void)

longlong FUN_14107a2f2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4ac30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145840f38;
    local_38 = &LAB_148412b7b;
    local_40 = &LAB_145a35fcb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0x3b0;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"CombinedTransformGizmo",&DAT_14cb4ac30,
                  &DAT_148412b7a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4ac30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14107a3d8 FUN_14107a3d8 body=31 status=ok
// SIG undefined FUN_14107a3d8(void)

undefined8 FUN_14107a3d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14107a3f8 FUN_14107a3f8 body=104 status=ok
// SIG undefined FUN_14107a3f8(void)

void FUN_14107a3f8(undefined8 param_1,longlong *param_2)

{
  FUN_14107a460(param_2[0x1b],(int)param_2[0x1c]);
  if (param_2[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_2[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_2[7] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014107a448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_2 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14107a460 FUN_14107a460 body=58 status=ok
// SIG undefined FUN_14107a460(void)

void FUN_14107a460(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      FUN_140d47599(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14107a49a FUN_14107a49a body=31 status=ok
// SIG undefined FUN_14107a49a(void)

undefined8 FUN_14107a49a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14107a4ba FUN_14107a4ba body=645 status=ok
// SIG undefined FUN_14107a4ba(void)

void FUN_14107a4ba(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  uint *local_78;
  longlong *local_70;
  undefined1 local_61;
  undefined1 *local_60;
  undefined8 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = (longlong *)FUN_14107a740();
  if (((local_70 != (longlong *)0x0) && (lVar6 = FUN_14107a740(param_1), lVar6 != 0)) &&
     (plVar7 = (longlong *)FUN_14107a796(lVar6,*(undefined8 *)(param_1 + 0x138)),
     plVar7 != (longlong *)0x0)) {
    iVar2 = (int)plVar7[5];
    if (iVar2 == 0) {
      uVar13 = 1;
      uVar17 = 0;
      iVar5 = 0;
      iVar16 = 0;
    }
    else {
      puVar8 = (uint *)plVar7[4];
      if ((uint *)plVar7[4] == (uint *)0x0) {
        puVar8 = (uint *)(plVar7 + 2);
      }
      uVar15 = *puVar8;
      if (uVar15 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        uVar17 = 0;
        uVar13 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar13 = uVar17;
        }
        iVar16 = 0;
        do {
          if (uVar13 == uVar17) goto LAB_14107a6d8;
          iVar16 = iVar16 + 0x20;
          uVar15 = puVar8[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar15 == 0);
      }
      else {
        uVar17 = 0;
        iVar16 = 0;
      }
      uVar13 = (ulonglong)(-uVar15 & uVar15);
      uVar1 = uVar13 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = (iVar16 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar5) {
        iVar5 = iVar2;
      }
    }
    if (iVar5 != iVar2) {
      local_80 = param_1 + 0x140;
      local_88 = param_1 + 0x170;
      uVar15 = 0xffffffff;
      local_78 = (uint *)(plVar7 + 2);
      do {
        puVar12 = (undefined8 *)((longlong)iVar5 * 0x90 + *plVar7);
        cVar4 = (**(code **)(*local_70 + 0x2e8))(local_70,puVar12,local_80);
        if (cVar4 != '\0') {
          *(undefined8 *)(param_1 + 0x138) = *puVar12;
          local_58 = puVar12 + 9;
          if (puVar12[9] == puVar12[6]) {
            local_58 = puVar12 + 6;
          }
          local_61 = *(undefined1 *)(puVar12 + 5);
          local_60 = &local_61;
          FUN_14119bb0e(local_88,local_4c,&local_60);
        }
        uVar15 = uVar15 & ~(uint)uVar13;
        puVar8 = (uint *)plVar7[4];
        if ((uint *)plVar7[4] == (uint *)0x0) {
          puVar8 = local_78;
        }
        iVar3 = (int)plVar7[5];
        iVar5 = (int)uVar17;
        lVar6 = (longlong)iVar5;
        uVar11 = puVar8[lVar6] & uVar15;
        if (uVar11 == 0) {
          iVar9 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar9 = iVar3 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar16 = iVar16 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar5) {
            iVar10 = iVar5;
          }
          if (iVar5 < iVar9) {
            lVar14 = 0;
            do {
              uVar11 = puVar8[lVar6 + lVar14 + 1];
              if (uVar11 != 0) {
                uVar17 = (ulonglong)(iVar5 + (int)lVar14 + 1);
                uVar15 = 0xffffffff;
                goto LAB_14107a6ab;
              }
              iVar16 = iVar16 + 0x20;
              lVar14 = lVar14 + 1;
            } while (iVar10 - lVar6 != lVar14);
            uVar15 = 0xffffffff;
            iVar5 = iVar10;
          }
          uVar17 = (ulonglong)(iVar5 + 1);
          iVar5 = iVar3;
        }
        else {
LAB_14107a6ab:
          uVar13 = (ulonglong)(-uVar11 & uVar11);
          uVar1 = uVar13 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          iVar5 = (iVar16 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar5) {
            iVar5 = iVar3;
          }
        }
      } while (iVar5 != iVar2);
    }
  }
LAB_14107a6d8:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14107a740 FUN_14107a740 body=85 status=ok
// SIG undefined FUN_14107a740(void)

undefined8 FUN_14107a740(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar1 = FUN_1400b6e86();
    if (lVar1 != 0) {
      plVar2 = (longlong *)(**(code **)(*(longlong *)(lVar1 + 0x30) + 0x18))(lVar1 + 0x30);
      if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014107a78a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar2 + 800))(plVar2,param_1 + 0x168,*(code **)(*plVar2 + 800));
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 14107a796 FUN_14107a796 body=148 status=ok
// SIG undefined FUN_14107a796(void)

longlong FUN_14107a796(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar2 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x88);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x90) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x48) + (longlong)iVar4 * 0x60;
        if (*(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar4 * 0x60) == param_2)
        goto LAB_14107a81e;
        iVar4 = *(int *)(lVar2 + 0x58);
      } while (iVar4 != -1);
    }
  }
  lVar2 = 0;
LAB_14107a81e:
  lVar3 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 14107a844 FUN_14107a844 body=2751 status=ok
// SIG undefined FUN_14107a844(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14107a844(longlong *param_1)

{
  double dVar1;
  byte bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  byte bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  double dVar15;
  longlong lVar17;
  undefined1 auVar16 [16];
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_328 [32];
  undefined8 *local_308;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  undefined1 local_2c8 [16];
  double local_2b8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  undefined1 local_268 [128];
  double local_1e8;
  double local_1e0;
  double local_1d8;
  undefined8 local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  undefined8 local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined8 local_190;
  double local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  if (((*(byte *)(param_1 + 0xc) & 0x10) == 0) || ((char)param_1[0x2f] != '\x01'))
  goto LAB_14107b280;
  if ((longlong *)param_1[0x85] != (longlong *)0x0) {
    cVar6 = (**(code **)(*(longlong *)param_1[0x85] + 0xbb0))();
    if (cVar6 != '\0') goto LAB_14107b280;
  }
  *(byte *)(param_1[0x86] + 0x5b4) = *(byte *)(param_1[0x86] + 0x5b4) | 0x40;
  bVar2 = *(byte *)(param_1 + 0xaa);
  *(byte *)(param_1 + 0xaa) = bVar2 | 1;
  lVar8 = param_1[0x93];
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar8);
  }
  if (param_1[0x8a] == lVar8) {
    lVar8 = *(longlong *)((longlong)param_1 + 0x48c);
    if (*(longlong *)((longlong)param_1 + 0x444) != lVar8) goto LAB_14107a96f;
    bVar9 = 0;
  }
  else {
    lVar8 = *(longlong *)((longlong)param_1 + 0x48c);
LAB_14107a96f:
    bVar9 = 1;
    (**(code **)(*param_1 + 0x7a8))(param_1,param_1[0x93],lVar8,1);
  }
  *(int *)(param_1 + 0x89) = (int)param_1[0x92];
  param_1[0x88] = param_1[0x91];
  plVar7 = (longlong *)param_1[0x93];
  if (DAT_14c950c29 == 1) {
    if (plVar7 != (longlong *)0x0) {
      FUN_1456cec3c(plVar7);
      plVar7 = (longlong *)param_1[0x93];
      goto LAB_14107aa0a;
    }
    param_1[0x8a] = 0;
    *(int *)(param_1 + 0x8b) = (int)param_1[0x94];
    *(undefined4 *)((longlong)param_1 + 0x45c) = *(undefined4 *)((longlong)param_1 + 0x4a4);
    *(int *)(param_1 + 0x8c) = (int)param_1[0x95];
    *(undefined4 *)((longlong)param_1 + 0x464) = *(undefined4 *)((longlong)param_1 + 0x4ac);
    param_1[0x8d] = param_1[0x96];
    param_1[0x8e] = param_1[0x97];
    param_1[0x8f] = param_1[0x98];
    param_1[0x90] = param_1[0x99];
  }
  else {
LAB_14107aa0a:
    param_1[0x8a] = (longlong)plVar7;
    *(int *)(param_1 + 0x8b) = (int)param_1[0x94];
    *(undefined4 *)((longlong)param_1 + 0x45c) = *(undefined4 *)((longlong)param_1 + 0x4a4);
    *(int *)(param_1 + 0x8c) = (int)param_1[0x95];
    *(undefined4 *)((longlong)param_1 + 0x464) = *(undefined4 *)((longlong)param_1 + 0x4ac);
    param_1[0x8d] = param_1[0x96];
    param_1[0x8e] = param_1[0x97];
    param_1[0x8f] = param_1[0x98];
    param_1[0x90] = param_1[0x99];
    if ((plVar7 != (longlong *)0x0) && (*(char *)((longlong)plVar7 + 0x1fb) == '\x02')) {
      lVar8 = param_1[0x39];
      if (lVar8 == 0) {
        local_278 = (double)CONCAT44(DAT_14c8464f0._4_4_,(undefined4)DAT_14c8464f0);
        dStack_280 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_288 = DAT_14c8464e0;
        local_2a8 = 0;
        uStack_2a0 = 0;
        local_298 = 0;
        uStack_290 = 0x3ff0000000000000;
      }
      else {
        local_288 = *(double *)(lVar8 + 0x260);
        dStack_280 = *(double *)(lVar8 + 0x268);
        local_278 = *(double *)(lVar8 + 0x270);
        local_2a8 = *(undefined8 *)(lVar8 + 0x240);
        uStack_2a0 = *(undefined8 *)(lVar8 + 0x248);
        local_298 = *(undefined8 *)(lVar8 + 0x250);
        uStack_290 = *(undefined8 *)(lVar8 + 600);
      }
      lVar8 = param_1[0x86];
      lVar14 = *(longlong *)((longlong)param_1 + 0x48c);
      if (lVar14 == 0) {
LAB_14107ab56:
        lVar17 = plVar7[0x4d];
        lVar14 = plVar7[0x4e];
        *(longlong *)(lVar8 + 0x2c0) = plVar7[0x4c];
        *(longlong *)(lVar8 + 0x2c8) = lVar17;
        *(longlong *)(lVar8 + 0x2d0) = lVar14;
        uVar10 = (undefined4)plVar7[0x48];
        uVar11 = *(undefined4 *)((longlong)plVar7 + 0x244);
        uVar12 = (undefined4)plVar7[0x49];
        uVar13 = *(undefined4 *)((longlong)plVar7 + 0x24c);
        lVar14 = plVar7[0x4a];
        lVar17 = plVar7[0x4b];
      }
      else {
        cVar6 = (**(code **)(*plVar7 + 0x4c8))(plVar7,lVar14);
        if (cVar6 == '\0') goto LAB_14107ab56;
        (**(code **)(*plVar7 + 0x4a8))(plVar7,&local_168,lVar14,0);
        *(double *)(lVar8 + 0x2c0) = local_148;
        *(double *)(lVar8 + 0x2c8) = dStack_140;
        *(double *)(lVar8 + 0x2d0) = local_138;
        uVar10 = (undefined4)local_168;
        uVar11 = local_168._4_4_;
        uVar12 = (undefined4)uStack_160;
        uVar13 = uStack_160._4_4_;
        lVar14 = local_158._0_8_;
        lVar17 = local_158._8_8_;
      }
      *(undefined4 *)(lVar8 + 0x2a0) = uVar10;
      *(undefined4 *)(lVar8 + 0x2a4) = uVar11;
      *(undefined4 *)(lVar8 + 0x2a8) = uVar12;
      *(undefined4 *)(lVar8 + 0x2ac) = uVar13;
      *(longlong *)(lVar8 + 0x2b0) = lVar14;
      *(longlong *)(lVar8 + 0x2b8) = lVar17;
      lVar8 = param_1[0x86];
      dVar22 = *(double *)(lVar8 + 0x2a0);
      dVar15 = *(double *)(lVar8 + 0x2a8);
      dVar5 = *(double *)(lVar8 + 0x2b0);
      dVar1 = *(double *)(lVar8 + 0x2b8);
      dVar4 = (double)param_1[0x94];
      dVar23 = (double)param_1[0x95];
      dVar20 = dVar23 * dVar22 - dVar15 * dVar4;
      dVar21 = (double)param_1[0x96] * dVar15 - dVar5 * dVar23;
      dVar24 = dVar4 * dVar5 - dVar22 * (double)param_1[0x96];
      dVar21 = dVar21 + dVar21;
      dVar24 = dVar24 + dVar24;
      dVar20 = dVar20 + dVar20;
      dVar4 = (dVar20 * dVar15 - dVar24 * dVar5) + dVar1 * dVar21 + dVar4 +
              *(double *)(lVar8 + 0x2c0);
      dVar5 = (dVar5 * dVar21 - dVar22 * dVar20) + *(double *)(lVar8 + 0x2b8) * dVar24 + dVar23 +
              *(double *)(lVar8 + 0x2c8);
      local_2c8._8_4_ = SUB84(dVar5,0);
      local_2c8._0_8_ = dVar4;
      local_2c8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      dVar1 = dVar20 * dVar1 + (double)param_1[0x96] + (dVar24 * dVar22 - dVar21 * dVar15) +
              *(double *)(lVar8 + 0x2d0);
      local_2b8 = dVar1;
      if ((((*(byte *)((longlong)param_1 + 0x48a) & 2) == 0) || (param_1[0x93] == 0)) ||
         (*(char *)(param_1[0x93] + 0x1fb) != '\x02')) {
        dVar20 = (double)param_1[0x97];
        dVar22 = (double)param_1[0x98];
        dVar15 = (double)param_1[0x99];
      }
      else {
        dVar21 = (double)param_1[0x97];
        dVar24 = (double)param_1[0x98];
        dVar20 = (double)param_1[0x99];
        dVar22 = sin(dVar21 * 0.01745329238474369);
        dVar15 = sin(dVar24 * 0.01745329238474369);
        dVar23 = sin(dVar20 * 0.01745329238474369);
        sin(0.0);
        dVar21 = cos(dVar21 * 0.01745329238474369);
        dVar24 = cos(dVar24 * 0.01745329238474369);
        dVar20 = cos(dVar20 * 0.01745329238474369);
        cos(0.0);
        local_1e8 = dVar21 * dVar24;
        local_1e0 = dVar15 * dVar21;
        local_1d0 = 0;
        local_1c8 = dVar22 * dVar23 * dVar24 - dVar15 * dVar20;
        local_1c0 = dVar22 * dVar23 * dVar15 + dVar24 * dVar20;
        local_1b8 = -dVar23 * dVar21;
        local_1b0 = 0;
        local_1a8 = -(dVar22 * dVar20 * dVar24 + dVar15 * dVar23);
        local_1a0 = dVar24 * dVar23 - dVar15 * dVar22 * dVar20;
        local_198 = dVar21 * dVar20;
        local_190 = 0;
        local_188 = DAT_14c8464e0;
        local_180 = (undefined4)DAT_14c8464e8;
        uStack_17c = DAT_14c8464e8._4_4_;
        uStack_178 = (undefined4)DAT_14c8464f0;
        uStack_174 = DAT_14c8464f0._4_4_;
        local_170 = 0x3ff0000000000000;
        local_1d8 = dVar22;
        FUN_1403d6372(local_268,param_1[0x86] + 0x2a0);
        FUN_1447fea8d(&local_168,&local_1e8,local_268);
        local_2d0 = local_138;
        local_2f8 = dStack_140;
        local_2f0 = local_148;
        local_2d8 = local_118;
        local_2e8 = local_120;
        local_2e0 = local_128;
        dVar22 = 0.0;
        if (((uStack_160 != 0.0) || (NAN(uStack_160))) || ((local_168 != 0.0 || (NAN(local_168)))))
        {
          dVar22 = atan2(uStack_160,local_168);
          dVar22 = dVar22 * 57.29577951308232;
        }
        dVar15 = SQRT(uStack_160 * uStack_160 + local_168 * local_168);
        dVar20 = 0.0;
        if ((((double)local_158._0_8_ != 0.0) || (NAN((double)local_158._0_8_))) ||
           ((dVar15 != 0.0 || (NAN(dVar15))))) {
          dVar20 = atan2((double)local_158._0_8_,dVar15);
          dVar20 = dVar20 * 57.29577951308232;
        }
        dVar23 = sin(dVar20 * 0.01745329238474369);
        dVar21 = sin(dVar22 * 0.01745329238474369);
        dVar24 = cos(dVar20 * 0.01745329238474369);
        dVar3 = cos(dVar22 * 0.01745329238474369);
        dVar15 = 0.0;
        dVar18 = dVar23 * 0.0 * dVar3 - dVar21;
        dVar3 = dVar23 * 0.0 * dVar21 + dVar3;
        dVar21 = local_2d0 * dVar24 * -0.0 + local_2f0 * dVar18 + local_2f8 * dVar3;
        dVar23 = local_2d8 * dVar24 * -0.0 + local_2e0 * dVar18 + local_2e8 * dVar3;
        if ((((dVar23 != 0.0) || (NAN(dVar23))) || (dVar21 != 0.0)) || (NAN(dVar21))) {
          dVar15 = atan2(dVar23,dVar21);
          dVar15 = dVar15 * 57.29577951308232;
        }
        cVar6 = (**(code **)(*(longlong *)param_1[0x86] + 0x820))();
        if (cVar6 != '\0') {
          dVar15 = 0.0;
          dVar20 = 0.0;
        }
      }
      *(byte *)(param_1[0x86] + 0x5b4) =
           *(byte *)(param_1[0x86] + 0x5b4) |
           (dVar1 != local_278 | dVar5 != dStack_280 | bVar9 | dVar4 != local_288) << 5;
      *(byte *)(param_1[0x86] + 0x34a) = *(byte *)(param_1[0x86] + 0x34a) & 0xfd;
      lVar8 = param_1[0x86];
      auVar16._8_8_ = dVar22;
      auVar16._0_8_ = dVar20;
      auVar16 = divpd(auVar16,_DAT_1499387d0);
      auVar19._8_8_ = 0;
      auVar19._0_8_ = dVar15 / 360.0;
      auVar16 = roundpd(auVar16,auVar16,3);
      auVar19 = roundpd(auVar19,auVar19,3);
      dVar20 = (dVar20 - auVar16._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
      dVar22 = (dVar22 - auVar16._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      dVar15 = (dVar15 - auVar19._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
      dVar23 = (0.0 - auVar19._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      dVar1 = sin(dVar20);
      dVar4 = sin(dVar22);
      dVar5 = sin(dVar15);
      sin(dVar23);
      dVar20 = cos(dVar20);
      dVar22 = cos(dVar22);
      dVar15 = cos(dVar15);
      cos(dVar23);
      dVar23 = dVar4 * dVar1 * dVar5 + dVar22 * dVar20 * dVar15;
      local_168 = dVar1 * dVar4 * dVar15 - dVar20 * dVar22 * dVar5;
      uStack_160 = -(dVar1 * dVar22 * dVar15) - dVar20 * dVar4 * dVar5;
      local_308 = &local_168;
      local_158._8_4_ = SUB84(dVar23,0);
      local_158._0_8_ = -(dVar22 * dVar1 * dVar5) + dVar4 * dVar20 * dVar15;
      local_158._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      (**(code **)(*(longlong *)(lVar8 + 0x1e8) + 0x20))
                (lVar8 + 0x1e8,&local_288,&local_2a8,local_2c8);
      (**(code **)(*param_1 + 0x8d0))(param_1,&local_288,&local_2a8);
    }
  }
  *(byte *)(param_1 + 0xaa) = *(byte *)(param_1 + 0xaa) & 0xfe | bVar2 & 1;
LAB_14107b280:
  if ((local_e0 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14107b310 FUN_14107b310 body=585 status=ok
// SIG undefined FUN_14107b310(void)

undefined8 * FUN_14107b310(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  uint local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140312256();
  *param_1 = &PTR_FUN_14ab90690;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_30,L"Root",1);
  if (DAT_14cac7648 == 0) {
    local_70 = &local_28;
    local_28 = FUN_144a7958c;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_143242436;
    local_78 = &LAB_14789ef1f;
    local_80 = &LAB_1417b008f;
    local_88 = L"Engine";
    local_90 = 0x8000000000;
    local_98 = 0x10000004;
    local_a0 = 0x10;
    local_a8 = 0x2b0;
    FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
  }
  local_a0 = local_a0 & 0xffffff00;
  local_a8 = CONCAT31(local_a8._1_3_,1);
  lVar1 = FUN_14048696c(param_1,local_30,DAT_14cac7648,DAT_14cac7648);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x39] = lVar1;
  *(undefined1 *)(lVar1 + 0x1fb) = 0;
  FUN_1446f470e(&local_38,L"Painter",1);
  uVar2 = FUN_14107b55a();
  local_a0 = local_a0 & 0xffffff00;
  local_a8 = CONCAT31(local_a8._1_3_,1);
  lVar1 = FUN_14048696c(param_1,local_38,uVar2,uVar2);
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x72] = lVar1;
    if (lVar1 == 0) goto LAB_14107b46a;
  }
  else {
    FUN_1456cec3c(lVar1);
    param_1[0x72] = lVar1;
  }
  *(undefined1 *)(lVar1 + 0x658) = 1;
  FUN_140486fc4(param_1[0x72],param_1[0x39],0);
  *(undefined1 *)(param_1[0x72] + 0x1fb) = 0;
  local_50 = 0x4014000000000000;
  local_48 = 0x4014000000000000;
  local_40 = 0x4014000000000000;
  (**(code **)(*(longlong *)param_1[0x72] + 0x478))();
LAB_14107b46a:
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14107b55a FUN_14107b55a body=228 status=ok
// SIG undefined FUN_14107b55a(void)

longlong FUN_14107b55a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1c008 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14641d004;
    local_38 = &LAB_147e341ea;
    local_40 = &LAB_1408f367f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x730;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxNavPainterComponent",&DAT_14cb1c008,FUN_14641eeca);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1c008;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14107b640 FUN_14107b640 body=277 status=ok
// SIG undefined FUN_14107b640(void)

undefined8 FUN_14107b640(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14107b74f;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14107b74f;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14107b74f:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14107b6fc;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_14107b6fc;
    }
  }
  uVar6 = 0;
LAB_14107b6fc:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14107b756 FUN_14107b756 body=1372 status=ok
// SIG undefined FUN_14107b756(void)

void FUN_14107b756(longlong param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  lVar9 = param_1 + 0x108;
  if (*(int *)(param_1 + 0x110) != 0) {
    FUN_141083f38(uVar3,lVar9,1);
    *(undefined4 *)(param_1 + 0x110) = 0;
    if (*(int *)(param_1 + 0x114) < 0) {
      FUN_146551c6e(lVar9,0);
    }
  }
  lVar6 = param_1 + 0x118;
  if (*(int *)(param_1 + 0x120) != 0) {
    FUN_14107bcb4(uVar3,lVar6,1);
    *(undefined4 *)(param_1 + 0x120) = 0;
    if (*(int *)(param_1 + 0x124) < 0) {
      FUN_146551c6e(lVar6,0);
    }
  }
  if (param_2 == '\0') goto LAB_14107b9f8;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar4 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_58[2] = lVar5;
  *local_58 = &PTR_FUN_14b9e1100;
  local_58[3] = 0;
  iVar7 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar7 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      iVar7 = *(int *)(lVar8 + 0x10);
      bVar11 = iVar7 == 0;
      if (bVar11) {
        *(int *)(lVar8 + 0x10) = iVar10;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar7 = iVar10;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar7;
  puVar4[4] = &LAB_140fe8196;
  local_68 = lVar9;
  FUN_14107bdda(uVar3,&local_58,1,param_1);
  if (local_50 == 0) {
LAB_14107b8dc:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_14107b8dc;
  }
  if (0.0 < *(float *)(param_1 + 0xd0)) {
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar4 = local_58;
    local_50 = 3;
    *local_58 = &PTR_LAB_149e01f80;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_58[2] = lVar8;
    *local_58 = &PTR_FUN_14b9e1170;
    local_58[3] = 0;
    iVar7 = 0;
    if (param_1 != 0) {
      uVar2 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_58 + 3) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar7 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar7 = *(int *)(lVar9 + 0x10);
        bVar11 = iVar7 == 0;
        if (bVar11) {
          *(int *)(lVar9 + 0x10) = iVar10;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar7 = iVar10;
        }
      }
    }
    *(int *)((longlong)puVar4 + 0x1c) = iVar7;
    puVar4[4] = &LAB_140ee7560;
    local_68 = lVar6;
    FUN_14107c13e(uVar3,&local_58,1,param_1);
    if (local_50 != 0) {
      if (local_58 == (undefined8 *)0x0) goto LAB_14107b9f8;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
    }
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14107b9f8:
  cVar1 = *(char *)(*(longlong *)(param_1 + 0xa0) + 0x178);
  if (cVar1 == '\x02') {
    if (param_2 != '\0') {
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,3,0x10);
      puVar4 = local_58;
      local_50 = 3;
      *local_58 = &PTR_LAB_149e01f80;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      local_58[2] = lVar6;
      *local_58 = &PTR_FUN_14b9e1170;
      local_58[3] = 0;
      FUN_14485c47a(local_58 + 3,param_1);
      puVar4[4] = FUN_148f149a4;
      local_68 = param_1 + 0x128;
      FUN_14107c13e(uVar3,&local_58,0,param_1);
      FUN_1449db362(&local_58);
    }
  }
  else if ((cVar1 == '\x01') && (param_2 == '\0')) {
    *(undefined4 *)(param_1 + 0xe4) = 0;
    *(undefined8 *)(param_1 + 0xdc) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14107bcb4 FUN_14107bcb4 body=294 status=ok
// SIG undefined FUN_14107bcb4(void)

void FUN_14107bcb4(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  
  iVar5 = *(int *)(param_1 + 0xbf0);
  if (0 < iVar5) {
    iVar9 = 0;
    uVar7 = 0;
    do {
      uVar6 = uVar7 & 0xff;
      if (((int)uVar6 < iVar5) &&
         (lVar1 = *(longlong *)
                   (*(longlong *)(param_1 + 0xbe8) + 0x40 +
                   (ulonglong)(uVar6 << 7) + (ulonglong)uVar6 * 8), lVar1 != 0)) {
        if (param_3 == '\x01') {
          lVar3 = param_2[1];
          if ((longlong)(int)lVar3 != 0) {
            lVar2 = *param_2;
            lVar8 = 0;
            do {
              if ((*(longlong *)(lVar2 + lVar8) != 0) &&
                 (cVar4 = FUN_14480f766(lVar1 + 0x50), cVar4 != '\0')) {
                *(undefined8 *)(lVar2 + lVar8) = 0;
                iVar9 = iVar9 + 1;
              }
              lVar8 = lVar8 + 8;
            } while ((longlong)(int)lVar3 * 8 != lVar8);
          }
        }
        else if ((param_3 == '\0') && (lVar3 = param_2[1], (longlong)(int)lVar3 != 0)) {
          lVar2 = *param_2;
          lVar8 = 0;
          do {
            if ((*(longlong *)(lVar2 + lVar8) != 0) &&
               (cVar4 = FUN_14480f766(lVar1 + 0x38), cVar4 != '\0')) {
              *(undefined8 *)(lVar2 + lVar8) = 0;
              iVar9 = iVar9 + 1;
            }
            lVar8 = lVar8 + 8;
          } while ((longlong)(int)lVar3 * 8 != lVar8);
        }
        if (iVar9 == (int)param_2[1]) {
          return;
        }
        iVar5 = *(int *)(param_1 + 0xbf0);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar5);
  }
  return;
}



// FUNCTION 14107bdda FUN_14107bdda body=512 status=ok
// SIG undefined FUN_14107bdda(void)

void FUN_14107bdda(longlong param_1,undefined8 param_2,byte param_3,longlong param_4,
                  longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [36];
  uint local_64;
  undefined8 local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = (ulonglong)*(uint *)(param_1 + 0xbf0);
  if (0 < (int)*(uint *)(param_1 + 0xbf0)) {
    uVar7 = 0;
    local_64 = (uint)param_3;
    do {
      if ((int)((uint)uVar7 & 0xff) < (int)uVar3) {
        lVar2 = *(longlong *)(param_1 + 0xbe8);
        lVar6 = *(longlong *)
                 (lVar2 + 8 + (ulonglong)(uint)((int)(uVar7 & 0xff) << 7) + (uVar7 & 0xff) * 8);
        if (lVar6 != 0) {
          if (param_4 == 0) {
LAB_14107be93:
            if (param_3 == 2) {
              lVar6 = lVar6 + 0x70;
LAB_14107bea0:
              local_58 = (undefined8 *)0x0;
              local_50 = 0;
              FUN_14009d848(&local_58,param_2);
              FUN_1448b6402(lVar6,&local_60,&local_58);
              if (local_50 != 0) {
                if (local_58 == (undefined8 *)0x0) goto LAB_14107bee1;
                (**(code **)*local_58)(local_58,0);
                FUN_1446efa72(&local_58,0,0,0x10);
                local_50 = 0;
              }
              if (local_58 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
            else {
              if (local_64 == 1) {
                lVar6 = lVar6 + 0x88;
                goto LAB_14107bea0;
              }
              if (local_64 != 0) goto LAB_14107bf08;
              local_58 = (undefined8 *)0x0;
              local_50 = 0;
              FUN_14009d848(&local_58,param_2);
              FUN_1448b6402(lVar6 + 0x58,&local_60,&local_58);
              FUN_1449db362(&local_58);
            }
LAB_14107bee1:
            iVar1 = (int)param_5[1];
            *(uint *)(param_5 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_5 + 0xc) < iVar1 + 1U) {
              FUN_14107bfdc(param_5,iVar1);
            }
            *(undefined8 *)(*param_5 + (longlong)iVar1 * 8) = local_60;
          }
          else {
            lVar4 = (longlong)*(int *)(lVar2 + 0x50 + uVar7 * 0x88);
            if (lVar4 != 0) {
              lVar5 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar2 + 0x48 + uVar7 * 0x88) + lVar5) == param_4)
                goto LAB_14107be93;
                lVar5 = lVar5 + 8;
              } while (lVar4 * 8 != lVar5);
            }
          }
        }
      }
LAB_14107bf08:
      uVar7 = uVar7 + 1;
      uVar3 = (ulonglong)*(int *)(param_1 + 0xbf0);
    } while ((longlong)uVar7 < (longlong)uVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14107bfdc FUN_14107bfdc body=353 status=ok
// SIG undefined FUN_14107bfdc(void)

void FUN_14107bfdc(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14107c061;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_14107c061:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14107c13e FUN_14107c13e body=919 status=ok
// SIG undefined FUN_14107c13e(void)

void FUN_14107c13e(longlong param_1,undefined8 param_2,byte param_3,longlong param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined1 auStack_98 [44];
  uint local_6c;
  undefined8 local_68;
  longlong *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar8 = (ulonglong)*(uint *)(param_1 + 0xbf0);
  local_68 = param_2;
  if (0 < (int)*(uint *)(param_1 + 0xbf0)) {
    local_6c = (uint)param_3;
    uVar11 = 0;
    do {
      if ((int)((uint)uVar11 & 0xff) < (int)uVar8) {
        lVar3 = *(longlong *)(param_1 + 0xbe8);
        lVar13 = *(longlong *)
                  (lVar3 + 0x40 + (ulonglong)(uint)((int)(uVar11 & 0xff) << 7) + (uVar11 & 0xff) * 8
                  );
        if (lVar13 != 0) {
          if (param_4 == 0) {
LAB_14107c1ee:
            if (param_3 == 1) {
              local_60 = (longlong *)0x0;
              local_58 = 0;
              FUN_140328a42(&local_60);
              if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
                 (cVar5 = (**(code **)(*local_60 + 0x30))(), cVar5 == '\0')) {
                if (local_58 == 0) {
                  uVar14 = 0;
                  goto LAB_14107c2df;
                }
                if (local_60 != (longlong *)0x0) {
                  uVar14 = 0;
                  (**(code **)*local_60)(local_60,0);
                  FUN_1446efa72(&local_60,0,0,0x10);
                  goto LAB_14107c2d2;
                }
                uVar14 = 0;
              }
              else {
                plVar1 = (longlong *)(lVar13 + 0x50);
                if (*(int *)(lVar13 + 100) < 1) {
                  iVar2 = *(int *)(lVar13 + 0x58);
                  iVar6 = *(int *)(lVar13 + 0x60) + -1;
                  *(int *)(lVar13 + 0x60) = iVar6;
                  if (iVar6 <= iVar2) {
                    iVar6 = iVar2;
                    if (0 < iVar2) {
                      iVar12 = 0;
                      do {
                        if (((*(int *)(*plVar1 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                            (plVar4 = *(longlong **)(*plVar1 + (longlong)iVar12 * 0x10),
                            plVar4 == (longlong *)0x0)) ||
                           (cVar5 = (**(code **)(*plVar4 + 0x28))(), cVar5 != '\0')) {
                          FUN_14005b288(plVar1,iVar12);
                          FUN_14005b248(plVar1);
                        }
                        else {
                          iVar12 = iVar12 + 1;
                        }
                        iVar6 = *(int *)(lVar13 + 0x58);
                      } while (iVar12 < iVar6);
                    }
                    iVar12 = iVar6 * 2;
                    if (iVar12 < 3) {
                      iVar12 = 2;
                    }
                    *(int *)(lVar13 + 0x60) = iVar12;
                    if ((iVar12 < iVar2) && (*(int *)(lVar13 + 0x5c) != iVar6)) {
                      FUN_14045812c(plVar1);
                    }
                  }
                }
                if (local_58 == 0) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = 0;
                  if (local_60 != (longlong *)0x0) {
                    (**(code **)(*local_60 + 0x38))();
                    uVar14 = local_50;
                  }
                }
                iVar2 = *(int *)(lVar13 + 0x58);
                uVar7 = iVar2 + 1;
                *(uint *)(lVar13 + 0x58) = uVar7;
                if (*(uint *)(lVar13 + 0x5c) < uVar7) {
                  FUN_1447a71f6(plVar1);
                }
                lVar3 = *plVar1;
                lVar13 = (longlong)iVar2 * 0x10;
                *(undefined8 *)(lVar3 + lVar13) = 0;
                *(undefined4 *)(lVar3 + 8 + lVar13) = 0;
                *(longlong **)(lVar3 + lVar13) = local_60;
                local_60 = (longlong *)0x0;
                *(int *)(lVar3 + 8 + lVar13) = local_58;
LAB_14107c2d2:
                local_58 = 0;
LAB_14107c2df:
                if (local_60 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
              }
              iVar2 = (int)param_5[1];
              *(uint *)(param_5 + 1) = iVar2 + 1U;
              if (*(uint *)((longlong)param_5 + 0xc) < iVar2 + 1U) {
                FUN_14107bfdc(param_5,iVar2);
              }
              *(undefined8 *)(*param_5 + (longlong)iVar2 * 8) = uVar14;
            }
            else if (local_6c == 0) {
              local_60 = (longlong *)0x0;
              local_58 = 0;
              FUN_140328a42(&local_60,local_68);
              FUN_140ca2242(lVar13 + 0x38,&local_50,&local_60);
              FUN_1449db362(&local_60);
              iVar2 = (int)param_5[1];
              *(uint *)(param_5 + 1) = iVar2 + 1U;
              if (*(uint *)((longlong)param_5 + 0xc) < iVar2 + 1U) {
                FUN_14107bfdc(param_5,iVar2);
              }
              *(undefined8 *)(*param_5 + (longlong)iVar2 * 8) = local_50;
            }
          }
          else {
            lVar9 = (longlong)*(int *)(lVar3 + 0x50 + uVar11 * 0x88);
            if (lVar9 != 0) {
              lVar10 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar3 + 0x48 + uVar11 * 0x88) + lVar10) == param_4)
                goto LAB_14107c1ee;
                lVar10 = lVar10 + 8;
              } while (lVar9 * 8 != lVar10);
            }
          }
        }
      }
      uVar11 = uVar11 + 1;
      uVar8 = (ulonglong)*(int *)(param_1 + 0xbf0);
    } while ((longlong)uVar11 < (longlong)uVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14107c4d6 FUN_14107c4d6 body=93 status=ok
// SIG undefined FUN_14107c4d6(void)

undefined8 * FUN_14107c4d6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14107c533(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14107c57c(param_1,iVar1);
      FUN_14107c654(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14107c533 FUN_14107c533 body=72 status=ok
// SIG undefined FUN_14107c533(void)

void FUN_14107c533(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (plVar1[2] != 0) {
        FUN_1400020a8();
      }
      FUN_1447a1747(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14107c57c FUN_14107c57c body=216 status=ok
// SIG undefined FUN_14107c57c(void)

void FUN_14107c57c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x3ffffffffffffffU) * 4]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 6);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x40,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14107c654 FUN_14107c654 body=249 status=ok
// SIG undefined FUN_14107c654(void)

void FUN_14107c654(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x20);
    do {
      lVar2 = *param_2;
      puVar3[-4] = lVar2;
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      *(int *)(puVar3 + -3) = (int)param_2[1];
      puVar3[-2] = 0;
      iVar1 = (int)param_2[3];
      lVar2 = param_2[2];
      *(int *)(puVar3 + -1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + -4) = 0;
      }
      else {
        FUN_140b856de(puVar3 + -2,iVar1,0);
        FUN_140b8566a(puVar3[-2],lVar2);
      }
      *puVar3 = 0;
      iVar1 = (int)param_2[5];
      _Src = (void *)param_2[4];
      *(int *)(puVar3 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        FUN_144a06ca8(puVar3,iVar1,0);
        memcpy((void *)*puVar3,_Src,(longlong)iVar1 << 2);
      }
      *(int *)(puVar3 + 3) = (int)param_2[7];
      puVar3[2] = param_2[6];
      param_2 = param_2 + 8;
      puVar3 = puVar3 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14107c75c FUN_14107c75c body=81 status=ok
// SIG undefined FUN_14107c75c(void)

undefined8 * FUN_14107c75c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b280240;
  if (param_1[0x126] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x115] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14107c7ae FUN_14107c7ae body=376 status=ok
// SIG undefined FUN_14107c7ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14107c7ae(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar9 = (longlong *)FUN_14001cc68(0x1758);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14b405f00;
  memset(plVar9 + 3,0,0x1710);
  plVar9[2] = (longlong)&PTR_FUN_14b0d3100;
  lVar10 = 0xba9;
  do {
    *(undefined8 *)((longlong)plVar9 + lVar10 + -0x69) = 0;
    puVar3 = (undefined8 *)((longlong)plVar9 + lVar10 + -0x61);
    *puVar3 = 0x2000000000;
    puVar3[1] = 0xffffffffffffffff;
    *(undefined4 *)((longlong)plVar9 + lVar10 + -0x51) = 0;
    uVar5 = CONCAT44(uRam000000014cb7dff4,_DAT_14cb7dff0);
    puVar3 = (undefined8 *)((longlong)plVar9 + lVar10 + -0x49);
    *puVar3 = CONCAT44(uRam000000014cb7dfec,_DAT_14cb7dfe8);
    puVar3[1] = uVar5;
    *(undefined8 *)((longlong)plVar9 + lVar10 + -0x39) = DAT_14cb7dff8;
    uVar8 = uRam000000014cb7dff4;
    uVar7 = _DAT_14cb7dff0;
    uVar6 = uRam000000014cb7dfec;
    puVar4 = (undefined4 *)((longlong)plVar9 + lVar10 + -0x31);
    *puVar4 = _DAT_14cb7dfe8;
    puVar4[1] = uVar6;
    puVar4[2] = uVar7;
    puVar4[3] = uVar8;
    *(undefined8 *)((longlong)plVar9 + lVar10 + -0x21) = DAT_14cb7dff8;
    puVar3 = (undefined8 *)((longlong)plVar9 + lVar10 + -0x19);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined4 *)((longlong)plVar9 + lVar10 + -9) = 0xffffffff;
    *(undefined2 *)((longlong)plVar9 + lVar10 + -1) = 0;
    lVar10 = lVar10 + 0xb70;
  } while (lVar10 != 0x2289);
  *(undefined4 *)(plVar9 + 0x2e4) = 0x459c4000;
  plVar9[0x2e5] = 0;
  plVar9[0x2e6] = 0;
  plVar9[0x2e7] = 0;
  plVar9[0x2e8] = 0;
  plVar9[0x2e9] = 0;
  plVar9[0x2ea] = 0;
  local_38 = plVar9 + 2;
  local_30 = plVar9;
  FUN_14107c928(&local_38,plVar9 + 2);
  plVar9 = local_30;
  *param_1 = (longlong)local_38;
  param_1[1] = (longlong)local_30;
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
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14107c928 FUN_14107c928 body=157 status=ok
// SIG undefined FUN_14107c928(void)

void FUN_14107c928(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14107c962;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14107c962;
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
LAB_14107c962:
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
                    /* WARNING: Could not recover jumptable at 0x00014107c9c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14107c9c6 FUN_14107c9c6 body=61 status=ok
// SIG undefined FUN_14107c9c6(void)

undefined8 FUN_14107c9c6(undefined2 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1449d9015(*param_1,0);
  if ((cVar1 != '\0') && ((*(ulonglong *)(param_1 + 0x1c) & 0x2000000000001) != 0)) {
    uVar2 = FUN_14107ca03(0,*param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14107ca03 FUN_14107ca03 body=2614 status=ok
// SIG undefined FUN_14107ca03(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14107ca03(undefined1 param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  ushort uVar6;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0f958) && (FUN_144b3d300(&DAT_14cb0f958), DAT_14cb0f958 == -1)) {
    DAT_14cb0f940 = (undefined2 *)0x0;
    _DAT_14cb0f948 = 0;
    DAT_14cb0f950 = DAT_14cb0f8b8;
    atexit((_func_5014 *)&LAB_143780763);
    _Init_thread_footer(&DAT_14cb0f958);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0f978) && (FUN_144b3d300(&DAT_14cb0f978), DAT_14cb0f978 == -1)) {
    DAT_14cb0f960 = (undefined2 *)0x0;
    _DAT_14cb0f968 = 0;
    DAT_14cb0f970 = DAT_14cb0f8d0;
    atexit((_func_5014 *)&LAB_143780774);
    _Init_thread_footer(&DAT_14cb0f978);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0f998) && (FUN_144b3d300(&DAT_14cb0f998), DAT_14cb0f998 == -1)) {
    DAT_14cb0f980 = (undefined2 *)0x0;
    _DAT_14cb0f988 = 0;
    DAT_14cb0f990 = DAT_14cb0f8e8;
    atexit((_func_5014 *)&LAB_143780785);
    _Init_thread_footer(&DAT_14cb0f998);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0f9b8) && (FUN_144b3d300(&DAT_14cb0f9b8), DAT_14cb0f9b8 == -1)) {
    DAT_14cb0f9a0 = (undefined2 *)0x0;
    _DAT_14cb0f9a8 = 0;
    DAT_14cb0f9b0 = DAT_14cb0f900;
    atexit((_func_5014 *)&LAB_143780796);
    _Init_thread_footer(&DAT_14cb0f9b8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0f9d8) && (FUN_144b3d300(&DAT_14cb0f9d8), DAT_14cb0f9d8 == -1)) {
    DAT_14cb0f9c0 = (undefined2 *)0x0;
    _DAT_14cb0f9c8 = 0;
    DAT_14cb0f9d0 = DAT_14cb0f918;
    atexit((_func_5014 *)&LAB_1437807a7);
    _Init_thread_footer(&DAT_14cb0f9d8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0f9f8) && (FUN_144b3d300(&DAT_14cb0f9f8), DAT_14cb0f9f8 == -1)) {
    DAT_14cb0f9e0 = (undefined2 *)0x0;
    _DAT_14cb0f9e8 = 0;
    DAT_14cb0f9f0 = DAT_14cb0f930;
    atexit((_func_5014 *)&LAB_1437807b8);
    _Init_thread_footer(&DAT_14cb0f9f8);
  }
  uVar6 = (ushort)param_2;
  switch(param_1) {
  case 0:
    puVar3 = &DAT_14ca84468;
    if (uVar6 == 0x31) goto switchD_14107cf05_caseD_33;
    switch(param_2 & 0xffff) {
    case 0x30:
switchD_14107cf05_caseD_30:
      puVar3 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_14107cf05_caseD_31:
      if ((uVar6 & 0xfff0) == 0x20) {
        lVar4 = FUN_14741392a();
        puVar3 = (undefined8 *)(lVar4 + (ulonglong)(param_2 & 0xf) * 0x18);
        break;
      }
      uVar2 = 0;
      goto LAB_14107cc02;
    case 0x33:
      break;
    case 0x34:
switchD_14107cf05_caseD_34:
      puVar3 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_14107cf05_caseD_35:
      puVar3 = &DAT_14ca84478;
      break;
    default:
      switch(param_2 & 0xffff) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_14107cf05_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_14107cf05_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_14107cf05_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_14107cf05_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar3 = &DAT_14ca84488;
      }
    }
switchD_14107cf05_caseD_33:
    uVar2 = *puVar3;
LAB_14107cc02:
    if (DAT_14cb0f950 == 0) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      puVar5 = DAT_14cb0f940;
      if (DAT_14cb0f948 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      DAT_14cb0f950 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar5,1);
    }
    cVar1 = FUN_14002b5e0(uVar2,"Windows",7);
    puVar3 = &DAT_14cb0f950;
    break;
  case 1:
    puVar3 = &DAT_14ca84468;
    if (uVar6 == 0x31) goto switchD_14107cf24_caseD_33;
    switch(param_2 & 0xffff) {
    case 0x30:
switchD_14107cf24_caseD_30:
      puVar3 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_14107cf24_caseD_31:
      if ((uVar6 & 0xfff0) == 0x20) {
        lVar4 = FUN_14741392a();
        puVar3 = (undefined8 *)(lVar4 + (ulonglong)(param_2 & 0xf) * 0x18);
        break;
      }
      uVar2 = 0;
      goto LAB_14107cc45;
    case 0x33:
      break;
    case 0x34:
switchD_14107cf24_caseD_34:
      puVar3 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_14107cf24_caseD_35:
      puVar3 = &DAT_14ca84478;
      break;
    default:
      switch(param_2 & 0xffff) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_14107cf24_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_14107cf24_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_14107cf24_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_14107cf24_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar3 = &DAT_14ca84488;
      }
    }
switchD_14107cf24_caseD_33:
    uVar2 = *puVar3;
LAB_14107cc45:
    if (DAT_14cb0f9b0 == 0) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      puVar5 = DAT_14cb0f9a0;
      if (DAT_14cb0f9a8 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      DAT_14cb0f9b0 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar5,1);
    }
    cVar1 = FUN_14002b5e0(uVar2,"Windows",7);
    puVar3 = &DAT_14cb0f9b0;
    break;
  case 2:
    puVar3 = &DAT_14ca84468;
    if (uVar6 == 0x31) goto switchD_14107cee6_caseD_33;
    switch(param_2 & 0xffff) {
    case 0x30:
switchD_14107cee6_caseD_30:
      puVar3 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_14107cee6_caseD_31:
      if ((uVar6 & 0xfff0) == 0x20) {
        lVar4 = FUN_14741392a();
        puVar3 = (undefined8 *)(lVar4 + (ulonglong)(param_2 & 0xf) * 0x18);
        break;
      }
      uVar2 = 0;
      goto LAB_14107cbbf;
    case 0x33:
      break;
    case 0x34:
switchD_14107cee6_caseD_34:
      puVar3 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_14107cee6_caseD_35:
      puVar3 = &DAT_14ca84478;
      break;
    default:
      switch(param_2 & 0xffff) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_14107cee6_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_14107cee6_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_14107cee6_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_14107cee6_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar3 = &DAT_14ca84488;
      }
    }
switchD_14107cee6_caseD_33:
    uVar2 = *puVar3;
LAB_14107cbbf:
    if (DAT_14cb0f970 == 0) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      puVar5 = DAT_14cb0f960;
      if (DAT_14cb0f968 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      DAT_14cb0f970 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar5,1);
    }
    cVar1 = FUN_14002b5e0(uVar2,"Windows",7);
    puVar3 = &DAT_14cb0f970;
    break;
  case 3:
  case 4:
  case 5:
    puVar3 = &DAT_14ca84468;
    if (uVar6 == 0x31) goto switchD_14107cea8_caseD_33;
    switch(param_2 & 0xffff) {
    case 0x30:
switchD_14107cea8_caseD_30:
      puVar3 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_14107cea8_caseD_31:
      if ((uVar6 & 0xfff0) == 0x20) {
        lVar4 = FUN_14741392a();
        puVar3 = (undefined8 *)(lVar4 + (ulonglong)(param_2 & 0xf) * 0x18);
        break;
      }
      uVar2 = 0;
      goto LAB_14107cb1c;
    case 0x33:
      break;
    case 0x34:
switchD_14107cea8_caseD_34:
      puVar3 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_14107cea8_caseD_35:
      puVar3 = &DAT_14ca84478;
      break;
    default:
      switch(param_2 & 0xffff) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_14107cea8_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_14107cea8_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_14107cea8_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_14107cea8_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar3 = &DAT_14ca84488;
      }
    }
switchD_14107cea8_caseD_33:
    uVar2 = *puVar3;
LAB_14107cb1c:
    if (DAT_14cb0f990 == 0) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      puVar5 = DAT_14cb0f980;
      if (DAT_14cb0f988 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      DAT_14cb0f990 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar5,1);
    }
    cVar1 = FUN_14002b5e0(uVar2,"Windows",7);
    puVar3 = &DAT_14cb0f990;
    break;
  case 6:
    puVar3 = &DAT_14ca84468;
    if (uVar6 == 0x31) goto switchD_14107cec7_caseD_33;
    switch(param_2 & 0xffff) {
    case 0x30:
switchD_14107cec7_caseD_30:
      puVar3 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_14107cec7_caseD_31:
      if ((uVar6 & 0xfff0) == 0x20) {
        lVar4 = FUN_14741392a();
        puVar3 = (undefined8 *)(lVar4 + (ulonglong)(param_2 & 0xf) * 0x18);
        break;
      }
      uVar2 = 0;
      goto LAB_14107cb7f;
    case 0x33:
      break;
    case 0x34:
switchD_14107cec7_caseD_34:
      puVar3 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_14107cec7_caseD_35:
      puVar3 = &DAT_14ca84478;
      break;
    default:
      switch(param_2 & 0xffff) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_14107cec7_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_14107cec7_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_14107cec7_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_14107cec7_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar3 = &DAT_14ca84488;
      }
    }
switchD_14107cec7_caseD_33:
    uVar2 = *puVar3;
LAB_14107cb7f:
    if (DAT_14cb0f9d0 == 0) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      puVar5 = DAT_14cb0f9c0;
      if (DAT_14cb0f9c8 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      DAT_14cb0f9d0 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar5,1);
    }
    cVar1 = FUN_14002b5e0(uVar2,"Windows",7);
    puVar3 = &DAT_14cb0f9d0;
    break;
  case 7:
    puVar3 = &DAT_14ca84468;
    if (uVar6 == 0x31) goto switchD_14107cf43_caseD_33;
    switch(param_2 & 0xffff) {
    case 0x30:
switchD_14107cf43_caseD_30:
      puVar3 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_14107cf43_caseD_31:
      if ((uVar6 & 0xfff0) == 0x20) {
        lVar4 = FUN_14741392a();
        puVar3 = (undefined8 *)(lVar4 + (ulonglong)(param_2 & 0xf) * 0x18);
        break;
      }
      uVar2 = 0;
      goto LAB_14107cc88;
    case 0x33:
      break;
    case 0x34:
switchD_14107cf43_caseD_34:
      puVar3 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_14107cf43_caseD_35:
      puVar3 = &DAT_14ca84478;
      break;
    default:
      switch(param_2 & 0xffff) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_14107cf43_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_14107cf43_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_14107cf43_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_14107cf43_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar3 = &DAT_14ca84488;
      }
    }
switchD_14107cf43_caseD_33:
    uVar2 = *puVar3;
LAB_14107cc88:
    if (DAT_14cb0f9f0 == 0) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      puVar5 = DAT_14cb0f9e0;
      if (DAT_14cb0f9e8 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      DAT_14cb0f9f0 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar5,1);
    }
    cVar1 = FUN_14002b5e0(uVar2,"Windows",7);
    puVar3 = &DAT_14cb0f9f0;
    break;
  default:
    goto switchD_14107cb06_default;
  }
  if ((cVar1 != '\0') || (DAT_14ca85550 == uVar6)) {
                    /* WARNING: Could not recover jumptable at 0x00014107cb64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)*puVar3 + 0xa8))();
    return uVar2;
  }
switchD_14107cb06_default:
  return 0;
}



// FUNCTION 14107d43a FUN_14107d43a body=157 status=ok
// SIG undefined FUN_14107d43a(void)

void FUN_14107d43a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14107d4d8();
  if ((*(longlong *)(param_1 + 0x1568) != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x3e0) + 0x20))(param_1 + 0x3e0);
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
      lVar3 = FUN_14069c71e();
      if ((((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30)) &&
         (*(byte *)(plVar1 + 0xbd) = *(byte *)(*(longlong *)(param_1 + 0x1568) + 0x6f0) >> 1 & 1,
         (*(byte *)(*(longlong *)(param_1 + 0x1568) + 0x6f0) & 2) != 0)) {
        *(byte *)((longlong)plVar1 + 0x7d) = *(byte *)((longlong)plVar1 + 0x7d) | 1;
      }
    }
  }
  return;
}



// FUNCTION 14107d4d8 FUN_14107d4d8 body=167 status=ok
// SIG undefined FUN_14107d4d8(void)

void FUN_14107d4d8(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0xe10) != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    lVar1 = (**(code **)(*(longlong *)(param_1 + 0x3e0) + 0x20))(param_1 + 0x3e0);
    if (lVar1 != 0) {
      FUN_1405dc634(lVar1 + 0x528,*(longlong *)(param_1 + 0xe10) + 0x350);
      local_30 = &LAB_1459515dc;
      local_28 = 0;
      FUN_14111ac76(lVar1 + 400,local_20,param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14107d580 FUN_14107d580 body=105 status=ok
// SIG undefined FUN_14107d580(void)

undefined8 FUN_14107d580(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x540);
  plVar4 = *(longlong **)(param_1 + 0x548);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  return uVar3;
}



// FUNCTION 14107d5ea FUN_14107d5ea body=653 status=ok
// SIG undefined FUN_14107d5ea(void)

int FUN_14107d5ea(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  int iVar14;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar14 != -1) {
      lVar9 = *param_1;
      do {
        plVar8 = (longlong *)(lVar9 + (longlong)iVar14 * 0x28);
        if (plVar8[1] == 0) {
          uVar12 = FUN_14043db3a();
          lVar9 = FUN_14477b664(uVar12);
          plVar8[1] = lVar9;
        }
        lVar9 = param_3[1];
        if (lVar9 == 0) {
          lVar9 = FUN_14043db3a();
        }
        lVar1 = *param_3;
        lVar9 = FUN_14477b664(lVar9);
        iVar6 = 0;
        if ((lVar9 != 0) && (plVar2 = *(longlong **)(lVar9 + 0xb8), plVar2 != (longlong *)0x0)) {
          lVar10 = *plVar2;
          pcVar3 = *(code **)(lVar10 + 0x108);
          if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
            cVar5 = (*pcVar3)(plVar2);
            iVar6 = 0;
            if (cVar5 == '\0') goto LAB_14107d6dc;
            lVar10 = *plVar2;
          }
          pcVar3 = *(code **)(lVar10 + 0x110);
          ppuVar13 = &PTR_PTR_14c763408;
          if ((pcVar3 != (code *)&LAB_144783426) &&
             (ppuVar13 = &PTR_PTR_14c75f798, pcVar3 != (code *)&LAB_144783432)) {
            ppuVar13 = (undefined **)(*pcVar3)(plVar2);
          }
          iVar6 = FUN_144aff48c(ppuVar13);
        }
LAB_14107d6dc:
        lVar10 = *plVar8;
        lVar4 = plVar8[1];
        iVar7 = 0;
        if ((lVar4 != 0) &&
           (plVar8 = *(longlong **)(lVar4 + 0xb8), iVar7 = 0, plVar8 != (longlong *)0x0)) {
          lVar11 = *plVar8;
          pcVar3 = *(code **)(lVar11 + 0x108);
          if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
            cVar5 = (*pcVar3)(plVar8);
            if (cVar5 == '\0') goto LAB_14107d744;
            lVar11 = *plVar8;
          }
          pcVar3 = *(code **)(lVar11 + 0x110);
          ppuVar13 = &PTR_PTR_14c763408;
          if ((pcVar3 != (code *)&LAB_144783426) &&
             (ppuVar13 = &PTR_PTR_14c75f798, pcVar3 != (code *)&LAB_144783432)) {
            ppuVar13 = (undefined **)(*pcVar3)(plVar8);
          }
          iVar7 = FUN_144aff48c(ppuVar13);
        }
LAB_14107d744:
        if ((iVar7 == iVar6) && (lVar10 == lVar1)) {
          if (lVar4 == lVar9) {
            return iVar14;
          }
          if ((lVar9 != 0) && (lVar4 != 0)) {
            iVar6 = *(int *)(lVar9 + 0x38);
            iVar7 = *(int *)(lVar4 + 0x38);
            if ((iVar6 <= iVar7) &&
               (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar6 * 8) == lVar9 + 0x30)) {
              return iVar14;
            }
            if ((iVar7 <= iVar6) &&
               (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar7 * 8) == lVar4 + 0x30)) {
              return iVar14;
            }
          }
        }
        lVar9 = *param_1;
        iVar14 = *(int *)(lVar9 + 0x20 + (longlong)iVar14 * 0x28);
      } while (iVar14 != -1);
    }
  }
  return -1;
}



// FUNCTION 14107d878 FUN_14107d878 body=370 status=ok
// SIG undefined FUN_14107d878(void)

undefined8 * FUN_14107d878(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14107d9f8 FUN_14107d9f8 body=71 status=ok
// SIG undefined FUN_14107d9f8(void)

undefined8 * FUN_14107d9f8(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 14107da40 FUN_14107da40 body=565 status=ok
// SIG undefined FUN_14107da40(void)

void FUN_14107da40(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
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
  uVar5 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar5 != uVar10);
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
      iVar11 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar3 = *local_80;
        lVar8 = *(longlong *)(lVar3 + 8 + (longlong)iVar11 * 0x28);
        if (lVar8 == 0) {
          lVar8 = FUN_14043db3a();
        }
        puVar2 = (undefined8 *)(lVar3 + (longlong)iVar11 * 0x28);
        uVar4 = *puVar2;
        uVar7 = FUN_14477b664(lVar8);
        uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar10 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar5 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar12 = (uint)uVar4 & 0xffff;
        iVar6 = FUN_144a78877(((uint)uVar4 << 0x10 | uVar12) + (int)((ulonglong)uVar4 >> 0x20) +
                              (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar12 >> 4),
                              uVar10 >> 0x10 ^ uVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)((longlong)puVar2 + 0x24) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(puVar2 + 4) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11
        ;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar11 = local_68._4_4_;
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



// FUNCTION 14107dc76 FUN_14107dc76 body=76 status=ok
// SIG undefined FUN_14107dc76(void)

undefined8 FUN_14107dc76(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_14107dcc2(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00014107dcb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14107dcc2 FUN_14107dcc2 body=191 status=ok
// SIG undefined FUN_14107dcc2(void)

longlong FUN_14107dcc2(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_14107dd82();
  lVar3 = *param_1;
  if (DAT_14cb8d7f0 != DAT_14cb8d81c) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb8d820;
    if (DAT_14cb8d828 != (undefined *)0x0) {
      puVar7 = DAT_14cb8d828;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb8d830 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb8d7e8 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb8d7e0;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 14107dd82 FUN_14107dd82 body=152 status=ok
// SIG undefined FUN_14107dd82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14107dd82(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8d838) {
    FUN_144b3d300(&DAT_14cb8d838);
    if (DAT_14cb8d838 == -1) {
      DAT_14cb8d808 = 0;
      DAT_14cb8d810 = 0;
      DAT_14cb8d7e8 = 0;
      _DAT_14cb8d7f0 = 0;
      _DAT_14cb8d814 = 0xffffffff00000080;
      DAT_14cb8d81c = 0;
      DAT_14cb8d828 = 0;
      DAT_14cb8d830 = 0;
      atexit(FUN_143e56444);
      _Init_thread_footer(&DAT_14cb8d838);
      return;
    }
  }
  return;
}



// FUNCTION 14107de1a FUN_14107de1a body=1695 status=ok
// SIG undefined FUN_14107de1a(void)

void FUN_14107de1a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  int *_Src;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_14107df05;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_30,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_14107df05:
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1409e12a0;
      local_60 = 0;
      local_68 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_38);
            goto LAB_14107dfd2;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_38) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_38,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_38,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_38,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_38,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
LAB_14107dfd2:
  local_3c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_14067a048;
      local_60 = 0;
      local_68 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_3c);
            goto LAB_14107e09e;
          }
        }
        _Src = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_3c) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_3c,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_3c,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_3c,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_3c,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
LAB_14107e09e:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x4a8))(param_1,local_30,local_38,local_3c != 0);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14107e4c6 FUN_14107e4c6 body=327 status=ok
// SIG undefined FUN_14107e4c6(void)

void FUN_14107e4c6(longlong *param_1,longlong param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x20))();
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1);
  if ((longlong)(int)plVar6[1] != 0) {
    lVar10 = *plVar6;
    lVar7 = 0;
    do {
      if (((param_3 != 0) && (*(longlong *)(lVar10 + lVar7) == param_3)) ||
         ((lVar1 = lVar10 + lVar7, param_2 != 0 && (*(longlong *)(lVar1 + 8) == param_2)))) {
        uVar9 = (int)(lVar7 >> 3) * -0x49249249;
        if (uVar9 == 0xffffffff) {
          return;
        }
        lVar10 = (longlong)(int)uVar9 * 0x38;
        plVar6 = *(longlong **)(*plVar5 + 0x10 + lVar10);
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        if (param_4 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014107e5e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x2b0))();
          return;
        }
        puVar8 = (undefined8 *)(*plVar5 + lVar10 + 0x10);
        lVar7 = (**(code **)(*param_1 + 0x20))(param_1);
        uVar2 = *(undefined8 *)(lVar7 + 0x20);
        uVar3 = *(undefined8 *)(lVar7 + 0x28);
        plVar6 = (longlong *)*puVar8;
        (**(code **)(*plVar6 + 0xa88))(plVar6,lVar7 + 0x20);
        *(undefined8 *)(lVar7 + 0x20) = uVar2;
        *(undefined8 *)(lVar7 + 0x28) = uVar3;
        plVar6 = (longlong *)*puVar8;
        (**(code **)(*plVar6 + 0x420))(plVar6,0);
        iVar4 = (int)plVar5[1];
        if (~uVar9 + iVar4 != 0) {
          memmove((void *)(*plVar5 + lVar10),(void *)(*plVar5 + lVar10 + 0x38),
                  (longlong)(int)(~uVar9 + iVar4) * 0x38);
          iVar4 = (int)plVar5[1];
        }
        *(int *)(plVar5 + 1) = iVar4 + -1;
        FUN_14107e60e(plVar5);
        return;
      }
      lVar7 = lVar7 + 0x38;
    } while (lVar1 + 0x38 != (longlong)(int)plVar6[1] * 0x38 + lVar10);
  }
  return;
}



// FUNCTION 14107e60e FUN_14107e60e body=151 status=ok
// SIG undefined FUN_14107e60e(void)

void FUN_14107e60e(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x38)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x38,8);
      uVar3 = uVar3 / 0x38;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x38,8);
    }
  }
  return;
}



// FUNCTION 14107e6b4 FUN_14107e6b4 body=40 status=ok
// SIG undefined FUN_14107e6b4(void)

undefined8 FUN_14107e6b4(undefined8 param_1,int param_2)

{
  FUN_14107e6dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14107e6dc FUN_14107e6dc body=389 status=ok
// SIG undefined FUN_14107e6dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14107e6dc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b470d80;
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_14107e862(param_1 + 0x20,0);
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 0x16);
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
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
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar4 = (undefined8 *)param_1[1], puVar4 != (undefined8 *)0x0)) {
    if (puVar4[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar4 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00014107e817. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 14107e862 FUN_14107e862 body=121 status=ok
// SIG undefined FUN_14107e862(void)

void FUN_14107e862(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
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



// FUNCTION 14107e8dc FUN_14107e8dc body=12 status=ok
// SIG undefined FUN_14107e8dc(void)

void FUN_14107e8dc(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x1d8) = 0;
  FUN_145953928();
  return;
}



// FUNCTION 14107e8e8 FUN_14107e8e8 body=7 status=ok
// SIG undefined FUN_14107e8e8(void)

void FUN_14107e8e8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014107e8eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



// FUNCTION 14107e8f0 FUN_14107e8f0 body=162 status=ok
// SIG undefined FUN_14107e8f0(void)

void FUN_14107e8f0(longlong *param_1,undefined8 param_2)

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
        goto LAB_14107e97d;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14107e97d:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14107e992 FUN_14107e992 body=136 status=ok
// SIG undefined FUN_14107e992(void)

void FUN_14107e992(longlong *param_1,int *param_2)

{
  char cVar1;
  
  if ((*param_2 == *(int *)((longlong)param_1 + 0x2c)) &&
     (param_2[2] == *(int *)((longlong)param_1 + 0x34))) {
    return;
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  *(int *)((longlong)param_1 + 0x34) = param_2[2];
  *(undefined8 *)((longlong)param_1 + 0x2c) = *(undefined8 *)param_2;
  if (param_1[3] != 0) {
    FUN_14654e512(param_1[3],(undefined8 *)((longlong)param_1 + 0x2c));
  }
  FUN_1458771b0(param_1);
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    cVar1 = FUN_1411184fc(param_1);
    if (cVar1 == '\0') {
      FUN_145ca2874(param_1);
    }
  }
  FUN_1447f69b6(param_1 + 0x2d);
  return;
}



// FUNCTION 14107ea1a FUN_14107ea1a body=648 status=ok
// SIG undefined FUN_14107ea1a(void)

void FUN_14107ea1a(longlong param_1,char param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  
  if (((*(char *)(param_1 + 0x29) != '\x01') || (param_3 != '\0')) ||
     (iVar4 = FUN_1410babec(param_1), iVar4 != 3)) {
    plVar1 = (longlong *)(param_1 + 0x30);
    if (param_2 == '\0') {
      FUN_14107ed14(plVar1);
      FUN_1457ec074(param_1 + 0x68);
    }
    else if (0 < *(int *)(param_1 + 0x38)) {
      uVar12 = 0;
      do {
        if ((longlong)uVar12 < (longlong)*(int *)(param_1 + 0x58)) {
          uVar11 = (uint)uVar12;
          lVar5 = *(longlong *)(param_1 + 0x50);
          if (*(longlong *)(param_1 + 0x50) == 0) {
            lVar5 = param_1 + 0x40;
          }
          if ((*(uint *)(lVar5 + (uVar12 >> 5 & 0x7ffffff) * 4) >> (uVar11 & 0x1f) & 1) != 0) {
            piVar8 = (int *)(*plVar1 + uVar12 * 0x30);
            if (*(int *)(*plVar1 + 0x20 + uVar12 * 0x30) == 0) {
              iVar4 = *(int *)(param_1 + 0x70);
              if (iVar4 != *(int *)(param_1 + 0x9c)) {
                iVar9 = piVar8[2];
                if (iVar9 != 0) {
                  iVar4 = FUN_144a78877(*piVar8,iVar9);
                }
                if (iVar9 == 0) {
                  iVar4 = *piVar8;
                }
                lVar5 = *(longlong *)(param_1 + 0xa8);
                if (*(longlong *)(param_1 + 0xa8) == 0) {
                  lVar5 = param_1 + 0xa0;
                }
                iVar4 = *(int *)(lVar5 + ((longlong)iVar4 & (longlong)*(int *)(param_1 + 0xb0) - 1U)
                                         * 4);
                if (iVar4 != -1) {
                  lVar10 = *(longlong *)(param_1 + 0x68);
LAB_14107eb19:
                  piVar2 = (int *)(lVar10 + (longlong)iVar4 * 0x18);
                  if ((*piVar2 != *piVar8) || (piVar2[2] != piVar8[2])) goto LAB_14107eb29;
                  iVar9 = *(int *)(lVar5 + (longlong)piVar2[5] * 4);
                  if (iVar9 == iVar4) {
                    piVar8 = (int *)(lVar5 + (longlong)piVar2[5] * 4);
                  }
                  else {
                    do {
                      piVar8 = (int *)(lVar10 + (longlong)iVar9 * 0x18 + 0x10);
                      iVar9 = *piVar8;
                    } while (iVar9 != iVar4);
                  }
                  *piVar8 = piVar2[4];
                  FUN_14107eca2((longlong *)(param_1 + 0x68));
                }
              }
LAB_14107eb62:
              lVar5 = *plVar1;
              lVar10 = (longlong)(int)uVar11 * 0x30;
              FUN_140bc669e(*(undefined8 *)(lVar5 + 0x18 + lVar10),
                            *(undefined4 *)(lVar5 + 0x20 + lVar10));
              if (*(longlong *)(lVar5 + 0x18 + lVar10) != 0) {
                FUN_1400020a8();
              }
              lVar5 = *(longlong *)(param_1 + 0x30);
              if (*(int *)(param_1 + 100) != 0) {
                *(uint *)(lVar5 + (longlong)*(int *)(param_1 + 0x60) * 0x30) = uVar11;
              }
              *(undefined4 *)(lVar5 + lVar10) = 0xffffffff;
              if (*(int *)(param_1 + 100) < 1) {
                uVar6 = 0xffffffff;
              }
              else {
                uVar6 = *(undefined4 *)(param_1 + 0x60);
              }
              *(undefined4 *)(lVar5 + lVar10 + 4) = uVar6;
              *(uint *)(param_1 + 0x60) = uVar11;
              *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
              lVar5 = *(longlong *)(param_1 + 0x50);
              if (*(longlong *)(param_1 + 0x50) == 0) {
                lVar5 = param_1 + 0x40;
              }
              uVar7 = uVar11 + 0x1f;
              if (-1 < (int)uVar11) {
                uVar7 = uVar11;
              }
              puVar3 = (uint *)(lVar5 + (longlong)((int)uVar7 >> 5) * 4);
              *puVar3 = *puVar3 & ~(1 << ((byte)uVar12 & 0x1f));
            }
            else {
              piVar8[3] = 0;
              piVar8[4] = 0;
              piVar8[5] = -0x40800000;
            }
          }
        }
        uVar12 = uVar12 + 1;
      } while ((longlong)uVar12 < (longlong)*(int *)(param_1 + 0x38));
    }
    *(undefined4 *)(param_1 + 0xc0) = 0;
    if (*(int *)(param_1 + 0xc4) != 0) {
      FUN_14480809c(param_1 + 0xb8,0);
      return;
    }
  }
  return;
LAB_14107eb29:
  iVar4 = piVar2[4];
  if (iVar4 == -1) goto LAB_14107eb62;
  goto LAB_14107eb19;
}



// FUNCTION 14107eca2 FUN_14107eca2 body=114 status=ok
// SIG undefined FUN_14107eca2(void)

void FUN_14107eca2(longlong *param_1,int param_2)

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



// FUNCTION 14107ed14 FUN_14107ed14 body=471 status=ok
// SIG undefined FUN_14107ed14(void)

void FUN_14107ed14(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar12 = 1;
    local_58._4_4_ = 0;
    uVar9 = 0xffffffff;
    iVar13 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar12 = local_68 >> 0x20;
    uVar9 = (uint)local_58;
    iVar13 = (int)local_68;
  }
  plVar4 = local_60;
  iVar6 = local_58._4_4_;
  iVar8 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      lVar10 = (longlong)iVar6 * 0x30;
      FUN_140bc669e(*(undefined8 *)(lVar11 + 0x18 + lVar10),*(undefined4 *)(lVar11 + 0x20 + lVar10))
      ;
      if (*(longlong *)(lVar11 + 0x18 + lVar10) != 0) {
        FUN_1400020a8();
      }
      uVar9 = uVar9 & ~(uint)uVar12;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar9;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar10 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar3 - lVar11 == lVar10) goto LAB_14107ee45;
        }
        iVar13 = iVar13 + (int)lVar10 + 1;
        uVar9 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar8 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_14107ee45:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14107eeec FUN_14107eeec body=661 status=ok
// SIG undefined FUN_14107eeec(void)

void FUN_14107eeec(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  uint uVar17;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x30);
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_78 = param_1;
  local_60 = plVar1;
  if (*(int *)(param_1 + 0x48) == 0) {
    uVar11 = 1;
    iVar12 = 0;
    local_58._4_4_ = 0;
    uVar17 = 0xffffffff;
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar11 = local_68 >> 0x20;
    iVar12 = *(int *)(local_78 + 0x48);
    uVar17 = (uint)local_58;
    iVar9 = (int)local_68;
  }
  plVar7 = local_60;
  local_70 = (longlong *)(local_78 + 0x20);
  iVar8 = local_58._4_4_;
  iVar16 = local_50;
  if (local_58._4_4_ != iVar12 || local_60 != plVar1) {
    do {
      local_68 = *(ulonglong *)(*local_70 + 0x10 + (longlong)iVar8 * 0x28);
      plVar15 = *(longlong **)(*local_70 + 0x18 + (longlong)iVar8 * 0x28);
      local_60 = plVar15;
      if (plVar15 == (longlong *)0x0) {
        FUN_14107f182(&local_68);
      }
      else {
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
        FUN_14107f182(&local_68);
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar15 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar3 = (int *)((longlong)plVar15 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
      }
      uVar17 = uVar17 & ~(uint)uVar11;
      plVar15 = (longlong *)plVar7[2];
      if ((longlong *)plVar7[2] == (longlong *)0x0) {
        plVar15 = plVar7;
      }
      iVar5 = (int)plVar7[3];
      lVar13 = (longlong)iVar9;
      uVar10 = *(uint *)((longlong)plVar15 + lVar13 * 4) & uVar17;
      if (uVar10 == 0) {
        iVar8 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar8 = iVar5 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar16 = iVar16 + 0x20;
        iVar6 = iVar8;
        if (iVar8 < iVar9) {
          iVar6 = iVar9;
        }
        if (iVar9 < iVar8) {
          lVar14 = 0;
          do {
            uVar10 = *(uint *)((longlong)plVar15 + lVar14 * 4 + lVar13 * 4 + 4);
            if (uVar10 != 0) {
              iVar9 = iVar9 + (int)lVar14 + 1;
              uVar17 = 0xffffffff;
              goto LAB_14107f03f;
            }
            iVar16 = iVar16 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar6 - lVar13 != lVar14);
          uVar17 = 0xffffffff;
          iVar9 = iVar6;
        }
        iVar9 = iVar9 + 1;
        iVar8 = iVar5;
      }
      else {
LAB_14107f03f:
        uVar11 = (ulonglong)(-uVar10 & uVar10);
        uVar4 = uVar11 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar8 = (iVar16 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar8) {
          iVar8 = iVar5;
        }
      }
    } while (iVar8 != iVar12 || plVar7 != plVar1);
  }
  FUN_1457ec212(local_70);
  lVar13 = local_78;
  FUN_1457ec251(*(undefined8 *)(local_78 + 0x80),*(undefined4 *)(local_78 + 0x88));
  *(undefined4 *)(lVar13 + 0x88) = 0;
  if (*(int *)(lVar13 + 0x8c) != 0) {
    FUN_1488570d8(lVar13 + 0x80);
  }
  *(undefined1 *)(lVar13 + 0xf8) = 1;
  *(undefined1 *)(lVar13 + 0xfa) = 1;
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14107f182 FUN_14107f182 body=918 status=ok
// SIG undefined FUN_14107f182(void)

void FUN_14107f182(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 auStack_b8 [32];
  uint *local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar14 = *param_1;
  if (lVar14 != 0) {
    iVar13 = *(int *)(lVar14 + 0x38);
    if (iVar13 == 0) {
      uVar18 = 1;
      uVar17 = 0;
      iVar7 = 0;
      iVar15 = 0;
    }
    else {
      puVar8 = *(uint **)(lVar14 + 0x30);
      if (*(uint **)(lVar14 + 0x30) == (uint *)0x0) {
        puVar8 = (uint *)(lVar14 + 0x20);
      }
      uVar19 = *puVar8;
      if (uVar19 == 0) {
        iVar7 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar7 = iVar13 + -1;
        }
        uVar17 = 0;
        uVar18 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar18 = uVar17;
        }
        iVar15 = 0;
        do {
          if (uVar18 == uVar17) goto LAB_14107f234;
          iVar15 = iVar15 + 0x20;
          uVar19 = puVar8[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar19 == 0);
      }
      else {
        uVar17 = 0;
        iVar15 = 0;
      }
      uVar18 = (ulonglong)(-uVar19 & uVar19);
      uVar4 = uVar18 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar7 = (iVar15 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if (iVar13 <= iVar7) {
        iVar7 = iVar13;
      }
    }
    if (iVar7 != iVar13) {
      uVar19 = 0xffffffff;
      local_98 = (uint *)(lVar14 + 0x20);
      do {
        uVar6 = *(undefined8 *)(*(longlong *)(lVar14 + 0x10) + 0x10 + (longlong)iVar7 * 0x28);
        plVar1 = *(longlong **)(*(longlong *)(lVar14 + 0x10) + 0x18 + (longlong)iVar7 * 0x28);
        if (plVar1 == (longlong *)0x0) {
          FUN_14107f81a(uVar6);
        }
        else {
          LOCK();
          *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
          UNLOCK();
          FUN_14107f81a(uVar6);
          LOCK();
          plVar2 = plVar1 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar1)(plVar1);
            LOCK();
            piVar3 = (int *)((longlong)plVar1 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
          LOCK();
          plVar2 = plVar1 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar1)(plVar1);
            LOCK();
            piVar3 = (int *)((longlong)plVar1 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        uVar19 = uVar19 & ~(uint)uVar18;
        puVar8 = *(uint **)(lVar14 + 0x30);
        if (*(uint **)(lVar14 + 0x30) == (uint *)0x0) {
          puVar8 = local_98;
        }
        iVar5 = *(int *)(lVar14 + 0x38);
        iVar7 = (int)uVar17;
        lVar16 = (longlong)iVar7;
        uVar12 = puVar8[lVar16] & uVar19;
        if (uVar12 == 0) {
          iVar10 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar10 = iVar5 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar11 = iVar10;
          if (iVar10 < iVar7) {
            iVar11 = iVar7;
          }
          if (iVar7 < iVar10) {
            lVar9 = 0;
            do {
              uVar12 = puVar8[lVar16 + lVar9 + 1];
              if (uVar12 != 0) {
                uVar17 = (ulonglong)(iVar7 + (int)lVar9 + 1);
                uVar19 = 0xffffffff;
                goto LAB_14107f372;
              }
              iVar15 = iVar15 + 0x20;
              lVar9 = lVar9 + 1;
            } while (iVar11 - lVar16 != lVar9);
            uVar19 = 0xffffffff;
            iVar7 = iVar11;
          }
          uVar17 = (ulonglong)(iVar7 + 1);
          iVar7 = iVar5;
        }
        else {
LAB_14107f372:
          uVar18 = (ulonglong)(-uVar12 & uVar12);
          uVar4 = uVar18 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar7 = (iVar15 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if (iVar5 <= iVar7) {
            iVar7 = iVar5;
          }
        }
      } while (iVar7 != iVar13);
      lVar14 = *param_1;
    }
LAB_14107f234:
    plVar1 = (longlong *)(lVar14 + 0x10);
    iVar13 = *(int *)(lVar14 + 0x58);
    if (1 < iVar13) {
      FUN_14107f532(plVar1);
      *(undefined4 *)(lVar14 + 0x58) = 1;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
    }
    lVar16 = lVar14 + 0x48;
    if (*(longlong *)(lVar14 + 0x50) != 0) {
      lVar16 = *(longlong *)(lVar14 + 0x50);
    }
    iVar7 = iVar13 + 3;
    if (-1 < iVar13) {
      iVar7 = iVar13;
    }
    if (*(int *)(lVar14 + 0x18) - *(int *)(lVar14 + 0x44) < iVar7 >> 2) {
      lVar9 = lVar14 + 0x20;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = lVar9;
      if (*(int *)(lVar14 + 0x38) == 0) {
        iVar13 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar13 = *(int *)(lVar14 + 0x38);
      }
      local_88 = (undefined4)local_68;
      uStack_84 = local_68._4_4_;
      uStack_80 = (undefined4)uStack_60;
      uStack_7c = uStack_60._4_4_;
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_78 = local_58;
      uVar6 = local_78;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar7 = local_78._4_4_;
      local_90 = plVar1;
      if ((local_78._4_4_ != iVar13) || (local_78 = local_58, uStack_60 != lVar9)) {
        do {
          local_78 = uVar6;
          *(undefined4 *)
           (lVar16 + (longlong)*(int *)(*local_90 + 0x24 + (longlong)iVar7 * 0x28) * 4) = 0xffffffff
          ;
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
          FUN_1449c0562(&local_88);
          iVar7 = local_78._4_4_;
          uVar6 = local_78;
        } while (local_90 != plVar1 ||
                 (CONCAT44(uStack_7c,uStack_80) != lVar9 || local_78._4_4_ != iVar13));
      }
    }
    else if (iVar13 == 1) {
      lVar9 = 0;
      do {
        *(undefined4 *)(lVar16 + lVar9 * 4) = 0xffffffff;
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(lVar14 + 0x58));
    }
    FUN_14107f532(plVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14107f532 FUN_14107f532 body=502 status=ok
// SIG undefined FUN_14107f532(void)

void FUN_14107f532(longlong *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar16 = 0;
    uVar17 = 1;
    iVar13 = 0;
    iVar9 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar15 = *puVar10;
    if (uVar15 == 0) {
      iVar13 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar13 = iVar4 + -1;
      }
      uVar16 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar16;
      }
      iVar13 = 0;
      do {
        if (uVar11 == uVar16) goto LAB_14107f563;
        iVar13 = iVar13 + 0x20;
        uVar15 = puVar10[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar16 = 0;
      iVar13 = 0;
    }
    uVar17 = (ulonglong)(-uVar15 & uVar15);
    uVar11 = uVar17 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar9 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar9) {
      iVar9 = iVar4;
    }
  }
  if (iVar9 < iVar4) {
    uVar15 = 0xffffffff;
    do {
      plVar5 = *(longlong **)(*param_1 + 0x18 + (longlong)iVar9 * 0x28);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      uVar15 = uVar15 & ~(uint)uVar17;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = puVar1;
      }
      iVar4 = (int)param_1[5];
      iVar9 = (int)uVar16;
      lVar14 = (longlong)iVar9;
      uVar6 = puVar10[lVar14] & uVar15;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar9) {
          iVar8 = iVar9;
        }
        if (iVar7 <= iVar9) break;
        lVar12 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar6 = puVar10[lVar14 + lVar12 + 1];
          if (uVar6 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar8 - lVar14 == lVar12) goto LAB_14107f563;
        }
        uVar16 = (ulonglong)(iVar9 + (int)lVar12 + 1);
        uVar15 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar6 & uVar6);
      uVar11 = uVar17 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar9 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar4);
  }
LAB_14107f563:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 14107f728 FUN_14107f728 body=218 status=ok
// SIG undefined FUN_14107f728(void)

void FUN_14107f728(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14107fc6e(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0xa8);
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
  FUN_14107fa76(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x88) == '\x01') {
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x50);
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
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014107f7fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14107f81a FUN_14107f81a body=603 status=ok
// SIG undefined FUN_14107f81a(void)

void FUN_14107f81a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_108 [40];
  undefined8 *local_e0;
  int local_d8;
  int local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e0 = (undefined8 *)0x0;
  iVar6 = *(int *)(param_1 + 0x88);
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  local_d8 = iVar6;
  if (iVar6 == 0) {
    local_d4 = 0;
  }
  else {
    FUN_14107ff1e(&local_e0,iVar6);
    FUN_14107fac5(local_e0,uVar3,iVar6);
    if ((longlong)local_d8 != 0) {
      puVar8 = local_e0 + (longlong)local_d8 * 2;
      puVar7 = local_e0;
      do {
        local_d0 = (undefined4)*puVar7;
        uStack_cc = (undefined4)((ulonglong)*puVar7 >> 0x20);
        plVar4 = (longlong *)puVar7[1];
        local_c8 = SUB84(plVar4,0);
        uStack_c4 = (undefined4)((ulonglong)plVar4 >> 0x20);
        if (plVar4 == (longlong *)0x0) {
          FUN_14107fff4(param_1,&local_d0);
        }
        else {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          FUN_14107fff4(param_1,&local_d0);
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
        }
        puVar7 = puVar7 + 2;
        iVar6 = local_d8;
      } while (puVar7 != puVar8);
      goto LAB_14107f8e8;
    }
  }
  iVar6 = 0;
LAB_14107f8e8:
  FUN_14107fa76(local_e0,iVar6);
  local_d8 = 0;
  if (local_d4 != 0) {
    FUN_14107faee(&local_e0);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  plVar4 = *(longlong **)(param_1 + 0x98);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x98) = 0;
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
  FUN_14107fb1e(param_1);
  cVar5 = FUN_140daa3ac(*(undefined8 *)(param_1 + 0x10));
  if (cVar5 == '\0') {
    local_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = DAT_14cb7bd68;
    local_50 = DAT_14cb7bd70;
    local_44 = DAT_14cb7bd88;
    local_4c = DAT_14cb7bd80;
    local_40 = 0;
    local_38 = 0;
    local_d0 = CONCAT31(local_d0._1_3_,2);
    uStack_c4 = *(undefined4 *)(param_1 + 0x28);
    uStack_cc = (undefined4)*(undefined8 *)(param_1 + 0x20);
    local_c8 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
    local_c0 = *(undefined8 *)(param_1 + 0x2c);
    local_b8 = *(undefined4 *)(param_1 + 0x34);
    FUN_140daa376(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_14107fa76(local_e0,local_d8);
  if (local_e0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14107fa76 FUN_14107fa76 body=79 status=ok
// SIG undefined FUN_14107fa76(void)

void FUN_14107fa76(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (undefined8 *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*puVar4;
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
      puVar4 = puVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14107fac5 FUN_14107fac5 body=40 status=ok
// SIG undefined FUN_14107fac5(void)

void FUN_14107fac5(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 14107faee FUN_14107faee body=48 status=ok
// SIG undefined FUN_14107faee(void)

void FUN_14107faee(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14107fb1e FUN_14107fb1e body=335 status=ok
// SIG undefined FUN_14107fb1e(void)

void FUN_14107fb1e(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  iVar4 = *(int *)(param_1 + 0x88);
  if ((longlong)iVar4 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x80);
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar5);
      (**(code **)(*plVar2 + 0x20))(plVar2,&local_48);
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar4 * 0x10 != lVar5);
    iVar4 = (int)uStack_40;
    if ((int)uStack_40 != 0) goto LAB_14107fbae;
  }
  lVar1 = *(longlong *)(param_1 + 0x90);
  iVar4 = 0;
  if (lVar1 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x98);
    if (lVar5 == 0) {
      iVar4 = 0;
    }
    else {
      LOCK();
      *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
      UNLOCK();
      iVar4 = (int)uStack_40;
    }
    uStack_40 = CONCAT44(uStack_40._4_4_,iVar4 + 1U);
    if (uStack_40._4_4_ < iVar4 + 1U) {
      FUN_14107fe10(&local_48,iVar4);
    }
    *(longlong *)(local_48 + (longlong)iVar4 * 0x10) = lVar1;
    *(longlong *)(local_48 + 8 + (longlong)iVar4 * 0x10) = lVar5;
    iVar4 = (int)uStack_40;
  }
LAB_14107fbae:
  if ((iVar4 != *(int *)(param_1 + 0xa8)) ||
     (cVar3 = FUN_141080175(local_48,*(undefined8 *)(param_1 + 0xa0)), cVar3 == '\0')) {
    FUN_14107fca6((undefined8 *)(param_1 + 0xa0),&local_48);
    *(undefined2 *)(*(longlong *)(param_1 + 0x10) + 0xf8) = 0x101;
  }
  FUN_14107fc6e(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14107fc6e FUN_14107fc6e body=56 status=ok
// SIG undefined FUN_14107fc6e(void)

void FUN_14107fc6e(longlong param_1,int param_2)

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



// FUNCTION 14107fca6 FUN_14107fca6 body=93 status=ok
// SIG undefined FUN_14107fca6(void)

undefined8 * FUN_14107fca6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14107fc6e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14107fd30(param_1,iVar1);
      FUN_14107fd03(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14107fd03 FUN_14107fd03 body=45 status=ok
// SIG undefined FUN_14107fd03(void)

void FUN_14107fd03(longlong param_1,longlong param_2,int param_3)

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
        *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14107fd30 FUN_14107fd30 body=224 status=ok
// SIG undefined FUN_14107fd30(void)

void FUN_14107fd30(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14107fe10 FUN_14107fe10 body=269 status=ok
// SIG undefined FUN_14107fe10(void)

void FUN_14107fe10(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14107ff1e FUN_14107ff1e body=213 status=ok
// SIG undefined FUN_14107ff1e(void)

void FUN_14107ff1e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = (longlong)param_2 * 0x10;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (uVar1 < 0x7ff1) {
        uVar1 = (ulonglong)
                (ushort)(&DAT_14c841d90)
                        [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
      }
      else {
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar1 = -uVar3 & (uVar1 + uVar3) - 1;
      }
    }
    else {
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
    }
  }
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



// FUNCTION 14107fff4 FUN_14107fff4 body=385 status=ok
// SIG undefined FUN_14107fff4(void)

void FUN_14107fff4(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int local_5c;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
    return;
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  iVar2 = *(int *)(param_1 + 0x88);
  lVar15 = (longlong)iVar2;
  if (lVar15 != 0) {
    plVar5 = *(longlong **)(param_1 + 0x80);
    local_5c = 0;
    bVar11 = *plVar5 == lVar3;
    iVar12 = 0;
    do {
      lVar9 = (longlong)iVar12;
      iVar7 = iVar12 + 1;
      if (iVar12 + 1 < iVar2) {
        iVar7 = iVar2;
      }
      plVar8 = plVar5 + lVar9 * 2 + 2;
      iVar14 = iVar12;
      lVar10 = lVar9;
      do {
        lVar10 = lVar10 + 1;
        iVar13 = iVar7;
        if (lVar15 <= lVar10) break;
        lVar6 = *plVar8;
        iVar14 = iVar14 + 1;
        plVar8 = plVar8 + 2;
        iVar13 = iVar14;
      } while (bVar11 == (lVar6 == lVar3));
      iVar7 = iVar13 - iVar12;
      if (bVar11 == false) {
        if (local_5c != iVar12) {
          memmove(plVar5 + (longlong)local_5c * 2,plVar5 + lVar9 * 2,(longlong)iVar7 << 4);
        }
        local_5c = local_5c + iVar7;
      }
      else {
        FUN_14107fa76(plVar5 + lVar9 * 2,iVar7);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar12 = iVar13;
    } while (lVar10 < lVar15);
    *(int *)(param_1 + 0x88) = local_5c;
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
  }
                    /* WARNING: Could not recover jumptable at 0x0001410800ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_2 + 0x18))();
  return;
}



// FUNCTION 141080175 FUN_141080175 body=223 status=ok
// SIG undefined FUN_141080175(void)

bool FUN_141080175(longlong *param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  
  if (param_3 == 0) {
    bVar9 = true;
  }
  else {
    do {
      plVar8 = (longlong *)param_1[1];
      if (plVar8 == (longlong *)0x0) {
LAB_141080200:
        plVar8 = (longlong *)0x0;
      }
      else {
        iVar5 = (int)plVar8[1];
        do {
          if (iVar5 == 0) goto LAB_141080200;
          LOCK();
          iVar4 = (int)plVar8[1];
          bVar9 = iVar5 == iVar4;
          if (bVar9) {
            *(int *)(plVar8 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar9);
      }
      lVar6 = *param_1;
      plVar3 = (longlong *)param_2[1];
      if (plVar3 == (longlong *)0x0) {
LAB_1410801d9:
        lVar7 = 0;
      }
      else {
        iVar5 = (int)plVar3[1];
        do {
          if (iVar5 == 0) goto LAB_1410801d9;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar9 = iVar5 == iVar4;
          if (bVar9) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar9);
        lVar7 = *param_2;
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
      if (plVar8 == (longlong *)0x0) {
        lVar6 = 0;
      }
      else {
        LOCK();
        plVar3 = plVar8 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      bVar9 = lVar6 == lVar7;
      if (!bVar9) {
        return bVar9;
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return bVar9;
}



// FUNCTION 141080254 FUN_141080254 body=481 status=ok
// SIG undefined FUN_141080254(void)

void FUN_141080254(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar15 = 1;
    local_58._4_4_ = 0;
    uVar14 = 0xffffffff;
    iVar16 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
    uVar14 = (uint)local_58;
    iVar16 = (int)local_68;
  }
  plVar7 = local_60;
  iVar9 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      plVar10 = *(longlong **)(*param_1 + 0x18 + (longlong)iVar9 * 0x28);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar3 = (int *)((longlong)plVar10 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar15;
      plVar10 = (longlong *)plVar7[2];
      if ((longlong *)plVar7[2] == (longlong *)0x0) {
        plVar10 = plVar7;
      }
      iVar5 = (int)plVar7[3];
      lVar13 = (longlong)iVar16;
      uVar8 = *(uint *)((longlong)plVar10 + lVar13 * 4) & uVar14;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar6 = iVar9;
        if (iVar9 < iVar16) {
          iVar6 = iVar16;
        }
        if (iVar9 <= iVar16) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar8 = *(uint *)((longlong)plVar10 + lVar11 * 4 + lVar13 * 4 + 4);
          if (uVar8 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar6 - lVar13 == lVar11) goto LAB_14108038b;
        }
        iVar16 = iVar16 + (int)lVar11 + 1;
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar9 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar5);
  }
LAB_14108038b:
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
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141080436 FUN_141080436 body=107 status=ok
// SIG undefined FUN_141080436(void)

void FUN_141080436(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x78);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_14107f532((longlong *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1410804a2 FUN_1410804a2 body=1006 status=ok
// SIG undefined FUN_1410804a2(void)

void FUN_1410804a2(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_128 [40];
  longlong *local_100;
  int local_f4;
  ulonglong local_f0;
  longlong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  int local_d0;
  ulonglong local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  int local_b0;
  longlong local_a8 [2];
  undefined1 local_98 [16];
  undefined8 local_88;
  uint local_80;
  undefined8 local_7c;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = (longlong *)(param_1 + 0x10);
  uVar10 = 0;
  local_88 = 0;
  local_80 = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  FUN_1457ec53e(local_a8);
  local_58 = *(undefined8 *)(param_1 + 0x60);
  local_c8 = 0x100000000;
  local_b8 = 0xffffffff;
  local_b0 = 0;
  local_e8 = param_1;
  local_c0 = local_98;
  if (local_80 == 0) {
    uVar17 = 1;
    local_b8._0_4_ = 0xffffffff;
    local_b8._4_4_ = 0;
    local_c8._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_c8);
    uVar17 = local_c8 >> 0x20;
    uVar10 = (ulonglong)local_80;
  }
  puVar4 = local_c0;
  if (local_b8._4_4_ != (int)uVar10 || local_c0 != local_98) {
    local_e0 = local_e8 + 0x48;
    iVar7 = (int)local_c8;
    uVar13 = (uint)local_b8;
    iVar6 = local_b8._4_4_;
    iVar11 = local_b0;
    local_f0 = uVar10;
    do {
      puVar1 = (ulonglong *)(local_a8[0] + (longlong)iVar6 * 0x68);
      local_f4 = iVar11;
      if (*(int *)(local_a8[0] + 0x50 + (longlong)iVar6 * 0x68) == 0) {
        if (*(int *)(local_e8 + 0x18) != *(int *)(local_e8 + 0x44)) {
          iVar6 = (int)*puVar1;
          iVar11 = (int)puVar1[1];
          iVar5 = iVar6;
          if (iVar11 != 0) {
            iVar5 = FUN_144a78877(iVar6,iVar11);
          }
          lVar14 = *(longlong *)(local_e8 + 0x50);
          if (*(longlong *)(local_e8 + 0x50) == 0) {
            lVar14 = local_e0;
          }
          iVar5 = *(int *)(lVar14 + ((longlong)iVar5 & (longlong)*(int *)(local_e8 + 0x58) - 1U) * 4
                          );
          if (iVar5 != -1) {
            lVar15 = *local_100;
LAB_141080618:
            lVar12 = (longlong)iVar5 * 0x68;
            lVar2 = lVar15 + lVar12;
            if ((*(int *)(lVar15 + lVar12) != iVar6) || (*(int *)(lVar2 + 8) != iVar11))
            goto LAB_141080628;
            iVar6 = *(int *)(lVar14 + (longlong)*(int *)(lVar2 + 100) * 4);
            if (iVar6 == iVar5) {
              piVar8 = (int *)(lVar14 + (longlong)*(int *)(lVar2 + 100) * 4);
            }
            else {
              do {
                piVar8 = (int *)((longlong)iVar6 * 0x68 + lVar15 + 0x60);
                iVar6 = *piVar8;
              } while (iVar6 != iVar5);
            }
            *piVar8 = *(int *)(lVar2 + 0x60);
            lVar14 = *local_100;
            FUN_14103c380(*(undefined8 *)(lVar14 + 0x48 + lVar12),
                          *(undefined4 *)(lVar14 + 0x50 + lVar12));
            if (*(longlong *)(lVar14 + 0x48 + lVar12) != 0) {
              FUN_1400020a8();
            }
            if (*(longlong *)(lVar14 + 0x28 + lVar12) != 0) {
              FUN_1400020a8();
            }
            FUN_141080892(local_100,iVar5);
          }
        }
      }
      else {
        local_d0 = (int)puVar1[1];
        uVar10 = *puVar1;
        local_d8 = uVar10;
        if (local_d0 != 0) {
          uVar9 = FUN_144a78877(uVar10 & 0xffffffff,local_d0);
          uVar10 = (ulonglong)uVar9;
        }
        iVar6 = FUN_140bc7976(local_100,uVar10,&local_d8);
        if (iVar6 == -1) {
          lVar14 = 0;
        }
        else {
          lVar14 = (longlong)iVar6 * 0x68 + *local_100;
        }
        *(undefined1 *)(lVar14 + 0x38) = 0;
      }
LAB_1410806a3:
      uVar13 = uVar13 & ~(uint)uVar17;
      puVar16 = *(undefined1 **)(puVar4 + 0x10);
      if (*(undefined1 **)(puVar4 + 0x10) == (undefined1 *)0x0) {
        puVar16 = puVar4;
      }
      iVar5 = *(int *)(puVar4 + 0x18);
      lVar14 = (longlong)iVar7;
      uVar9 = *(uint *)(puVar16 + lVar14 * 4) & uVar13;
      iVar11 = local_f4;
      if (uVar9 == 0) {
        iVar6 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar6 = iVar5 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar11 = local_f4 + 0x20;
        iVar3 = iVar6;
        if (iVar6 < iVar7) {
          iVar3 = iVar7;
        }
        if (iVar7 < iVar6) {
          lVar15 = 0;
          do {
            uVar9 = *(uint *)(puVar16 + lVar15 * 4 + lVar14 * 4 + 4);
            if (uVar9 != 0) {
              iVar7 = iVar7 + (int)lVar15 + 1;
              uVar13 = 0xffffffff;
              goto LAB_141080723;
            }
            iVar11 = iVar11 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar3 - lVar14 != lVar15);
          uVar13 = 0xffffffff;
          iVar7 = iVar3;
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar5;
      }
      else {
LAB_141080723:
        uVar17 = (ulonglong)(-uVar9 & uVar9);
        uVar10 = uVar17 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar6 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar6) {
          iVar6 = iVar5;
        }
      }
    } while (iVar6 != (int)local_f0 || puVar4 != local_98);
  }
  local_60 = 0;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_14103c068(local_a8);
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_141080628:
  iVar5 = *(int *)(lVar2 + 0x60);
  if (iVar5 == -1) goto LAB_1410806a3;
  goto LAB_141080618;
}



// FUNCTION 141080892 FUN_141080892 body=116 status=ok
// SIG undefined FUN_141080892(void)

void FUN_141080892(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 141080906 FUN_141080906 body=347 status=ok
// SIG undefined FUN_141080906(void)

longlong * FUN_141080906(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14103c15e(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1406a7630(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar7 = (undefined8 *)*param_2;
      puVar8 = (undefined8 *)(*param_1 + 0x48);
      uVar6 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(puVar8 + -9) = *(undefined4 *)puVar7;
          *(undefined4 *)((longlong)puVar8 + -0x44) = *(undefined4 *)((longlong)puVar7 + 4);
        }
        else {
          *(undefined4 *)(puVar8 + -8) = *(undefined4 *)(puVar7 + 1);
          puVar8[-9] = *puVar7;
          FUN_1447a97f4(puVar8 + -7,puVar7 + 2);
          puVar8[-2] = puVar7[7];
          *(undefined1 *)(puVar8 + -1) = *(undefined1 *)(puVar7 + 8);
          *puVar8 = 0;
          iVar2 = *(int *)(puVar7 + 10);
          uVar3 = puVar7[9];
          *(int *)(puVar8 + 1) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
          }
          else {
            FUN_148834d8a(puVar8,iVar2);
            FUN_148834de2(*puVar8,uVar3,iVar2);
          }
          puVar8[2] = puVar7[0xb];
          puVar8[3] = puVar7[0xc];
        }
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 0xd;
        puVar8 = puVar8 + 0xd;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 141080a62 FUN_141080a62 body=635 status=ok
// SIG undefined FUN_141080a62(void)

void FUN_141080a62(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  cVar4 = FUN_140526f64();
  if (cVar4 != '\0') {
    if ((longlong)*(int *)(param_1 + 0x40) != 0) {
      lVar13 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x38) + 8 + lVar13) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x38) + lVar13) != 0)) {
          if ((((*(int *)(param_1 + 0x54) != 0) &&
               ((((uVar6 = *(uint *)(param_1 + 0x50), -1 < (int)uVar6 &&
                  ((int)uVar6 < DAT_14c9647dc)) &&
                 (plVar14 = (longlong *)
                            ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
                 plVar14 != (longlong *)0x0)) &&
                (((int)plVar14[2] == *(int *)(param_1 + 0x54) &&
                 ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)))))) && (*plVar14 != 0)) &&
             ((lVar13 = *(longlong *)(*plVar14 + 0x30), lVar13 != 0 &&
              (*(char *)(lVar13 + 0x88) == '\x01')))) {
            FUN_1447f69b6(param_1 + 0x38);
          }
          break;
        }
        lVar13 = lVar13 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x40) * 0x10 != lVar13);
    }
    uVar1 = *(undefined1 *)(param_1 + 0x1c7);
    *(undefined1 *)(param_1 + 0x1c7) = 1;
    iVar2 = *(int *)(param_1 + 0xd8);
    if (iVar2 == 0) {
      uVar16 = 1;
      uVar17 = 0;
      iVar10 = 0;
      iVar12 = 0;
    }
    else {
      puVar5 = *(uint **)(param_1 + 0xd0);
      if (*(uint **)(param_1 + 0xd0) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0xc0);
      }
      uVar6 = *puVar5;
      if (uVar6 == 0) {
        iVar10 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar10 = iVar2 + -1;
        }
        uVar17 = 0;
        uVar7 = (ulonglong)(uint)(iVar10 >> 5);
        if (iVar10 >> 5 < 1) {
          uVar7 = uVar17;
        }
        iVar10 = 0;
        do {
          if (uVar7 == uVar17) goto LAB_141080bc8;
          iVar10 = iVar10 + 0x20;
          uVar6 = puVar5[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar6 == 0);
      }
      else {
        uVar17 = 0;
        iVar10 = 0;
      }
      uVar16 = (ulonglong)(-uVar6 & uVar6);
      uVar7 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar12 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar12) {
        iVar12 = iVar2;
      }
    }
    if (iVar12 != iVar2) {
      uVar6 = 0xffffffff;
      do {
        FUN_143df5d4c(*(undefined8 *)
                       (*(longlong *)(param_1 + 0xb0) + 0x10 + (longlong)iVar12 * 0x20));
        uVar6 = ~(uint)uVar16 & uVar6;
        puVar5 = *(uint **)(param_1 + 0xd0);
        if (*(uint **)(param_1 + 0xd0) == (uint *)0x0) {
          puVar5 = (uint *)(param_1 + 0xc0);
        }
        iVar3 = *(int *)(param_1 + 0xd8);
        iVar12 = (int)uVar17;
        lVar13 = (longlong)iVar12;
        uVar11 = puVar5[lVar13] & uVar6;
        if (uVar11 == 0) {
          iVar8 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar8 = iVar3 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar10 = iVar10 + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar12) {
            iVar9 = iVar12;
          }
          if (iVar12 < iVar8) {
            lVar15 = 0;
            do {
              uVar11 = puVar5[lVar13 + lVar15 + 1];
              if (uVar11 != 0) {
                uVar17 = (ulonglong)(iVar12 + (int)lVar15 + 1);
                uVar6 = 0xffffffff;
                goto LAB_141080c88;
              }
              iVar10 = iVar10 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar9 - lVar13 != lVar15);
            uVar6 = 0xffffffff;
            iVar12 = iVar9;
          }
          uVar17 = (ulonglong)(iVar12 + 1);
          iVar12 = iVar3;
        }
        else {
LAB_141080c88:
          uVar16 = (ulonglong)(-uVar11 & uVar11);
          uVar7 = uVar16 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar12 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar12) {
            iVar12 = iVar3;
          }
        }
      } while (iVar12 != iVar2);
    }
LAB_141080bc8:
    if (*(char *)(param_1 + 0x198) == '\x02') {
      *(undefined1 *)(param_1 + 0x198) = 1;
    }
    FUN_146556a0e(param_1);
    *(undefined1 *)(param_1 + 0x1c7) = uVar1;
  }
  return;
}



// FUNCTION 141080cde FUN_141080cde body=1139 status=ok
// SIG undefined FUN_141080cde(void)

void FUN_141080cde(longlong param_1,char param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  if (*(int *)(param_1 + 0x4e0) != *(int *)(param_1 + 0x50c)) {
    FUN_14654d7d0(param_1 + 0x4d8);
    FUN_14654d918(param_1 + 0x4d8);
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_143d340a6(param_1 + 0x70);
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(int *)(param_1 + 0x10c) != 0) {
    FUN_1417335d8(param_1 + 0x80,0);
  }
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (*(int *)(param_1 + 0x19c) != 0) {
    FUN_1417335d8(param_1 + 0x110,0);
  }
  *(undefined4 *)(param_1 + 0x228) = 0;
  if (*(int *)(param_1 + 0x22c) != 0) {
    FUN_1417335d8(param_1 + 0x1a0,0);
  }
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  if (*(int *)(param_1 + 700) != 0) {
    FUN_1417335d8(param_1 + 0x230,0);
  }
  FUN_1400800e2(param_1 + 0x488,0);
  *(undefined4 *)(param_1 + 0x348) = 0;
  if (*(int *)(param_1 + 0x34c) != 0) {
    FUN_1417335d8(param_1 + 0x2c0,0);
  }
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  if (*(int *)(param_1 + 0x3dc) != 0) {
    FUN_1417335d8(param_1 + 0x350,0);
  }
  if (param_2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x60);
    if (iVar1 == 0) {
      uVar13 = 1;
      iVar8 = 0;
      uVar14 = 0;
      iVar10 = 0;
    }
    else {
      puVar3 = *(uint **)(param_1 + 0x58);
      if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
        puVar3 = (uint *)(param_1 + 0x48);
      }
      uVar4 = *puVar3;
      if (uVar4 == 0) {
        iVar8 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar8 = iVar1 + -1;
        }
        uVar14 = 0;
        uVar5 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar5 = uVar14;
        }
        iVar8 = 0;
        do {
          if (uVar5 == uVar14) goto LAB_141080e92;
          iVar8 = iVar8 + 0x20;
          uVar4 = puVar3[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar4 == 0);
      }
      else {
        iVar8 = 0;
        uVar14 = 0;
      }
      uVar13 = (ulonglong)(-uVar4 & uVar4);
      uVar5 = uVar13 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = (iVar8 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      if (iVar1 <= iVar10) {
        iVar10 = iVar1;
      }
    }
    if (iVar10 != iVar1) {
      uVar4 = 0xffffffff;
      do {
        FUN_141488992((longlong)iVar10 * 0x300 + *(longlong *)(param_1 + 0x38));
        uVar4 = ~(uint)uVar13 & uVar4;
        puVar3 = *(uint **)(param_1 + 0x58);
        if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
          puVar3 = (uint *)(param_1 + 0x48);
        }
        iVar2 = *(int *)(param_1 + 0x60);
        iVar10 = (int)uVar14;
        lVar11 = (longlong)iVar10;
        uVar9 = puVar3[lVar11] & uVar4;
        if (uVar9 == 0) {
          iVar6 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar6 = iVar2 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar8 = iVar8 + 0x20;
          iVar7 = iVar6;
          if (iVar6 < iVar10) {
            iVar7 = iVar10;
          }
          if (iVar10 < iVar6) {
            lVar12 = 0;
            do {
              uVar9 = puVar3[lVar11 + lVar12 + 1];
              if (uVar9 != 0) {
                uVar14 = (ulonglong)(iVar10 + (int)lVar12 + 1);
                uVar4 = 0xffffffff;
                goto LAB_1410810f3;
              }
              iVar8 = iVar8 + 0x20;
              lVar12 = lVar12 + 1;
            } while (iVar7 - lVar11 != lVar12);
            uVar4 = 0xffffffff;
            iVar10 = iVar7;
          }
          uVar14 = (ulonglong)(iVar10 + 1);
          iVar10 = iVar2;
        }
        else {
LAB_1410810f3:
          uVar13 = (ulonglong)(-uVar9 & uVar9);
          uVar5 = uVar13 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          iVar10 = (iVar8 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar10) {
            iVar10 = iVar2;
          }
        }
      } while (iVar10 != iVar1);
    }
  }
LAB_141080e92:
  FUN_141519ce4(param_1 + 0x38,200);
  FUN_1459dcb52(param_1 + 1000);
  FUN_1459b4590(param_1 + 0x438);
  iVar1 = *(int *)(param_1 + 0x550);
  if (iVar1 == 0) {
    uVar13 = 1;
    uVar14 = 0;
    iVar8 = 0;
    iVar10 = 0;
  }
  else {
    puVar3 = *(uint **)(param_1 + 0x548);
    if (*(uint **)(param_1 + 0x548) == (uint *)0x0) {
      puVar3 = (uint *)(param_1 + 0x538);
    }
    uVar4 = *puVar3;
    if (uVar4 == 0) {
      iVar8 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar8 = iVar1 + -1;
      }
      uVar14 = 0;
      uVar5 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar5 = uVar14;
      }
      iVar8 = 0;
      do {
        if (uVar5 == uVar14) goto LAB_141080f53;
        iVar8 = iVar8 + 0x20;
        uVar4 = puVar3[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar4 == 0);
    }
    else {
      uVar14 = 0;
      iVar8 = 0;
    }
    uVar13 = (ulonglong)(-uVar4 & uVar4);
    uVar5 = uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar10 = (iVar8 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar10) {
      iVar10 = iVar1;
    }
  }
  if (iVar10 != iVar1) {
    uVar4 = 0xffffffff;
    do {
      FUN_1457f5aec(param_1,*(longlong *)(param_1 + 0x528) + (longlong)iVar10 * 0xb0,
                    *(longlong *)(param_1 + 0x528) + (longlong)iVar10 * 0xb0 + 0x28);
      uVar4 = ~(uint)uVar13 & uVar4;
      puVar3 = *(uint **)(param_1 + 0x548);
      if (*(uint **)(param_1 + 0x548) == (uint *)0x0) {
        puVar3 = (uint *)(param_1 + 0x538);
      }
      iVar2 = *(int *)(param_1 + 0x550);
      iVar10 = (int)uVar14;
      lVar11 = (longlong)iVar10;
      uVar9 = puVar3[lVar11] & uVar4;
      if (uVar9 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar8 = iVar8 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar10) {
          iVar7 = iVar10;
        }
        if (iVar10 < iVar6) {
          lVar12 = 0;
          do {
            uVar9 = puVar3[lVar11 + lVar12 + 1];
            if (uVar9 != 0) {
              uVar14 = (ulonglong)(iVar10 + (int)lVar12 + 1);
              uVar4 = 0xffffffff;
              goto LAB_141081015;
            }
            iVar8 = iVar8 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar7 - lVar11 != lVar12);
          uVar4 = 0xffffffff;
          iVar10 = iVar7;
        }
        uVar14 = (ulonglong)(iVar10 + 1);
        iVar10 = iVar2;
      }
      else {
LAB_141081015:
        uVar13 = (ulonglong)(-uVar9 & uVar9);
        uVar5 = uVar13 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar10 = (iVar8 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar10) {
          iVar10 = iVar2;
        }
      }
    } while (iVar10 != iVar1);
  }
LAB_141080f53:
  FUN_145be6242(param_1 + 0x528);
  return;
}



// FUNCTION 141081152 FUN_141081152 body=1696 status=ok
// SIG undefined FUN_141081152(void)

void FUN_141081152(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  void *_Dst;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  undefined1 auStack_e8 [40];
  int local_c0;
  int local_bc;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  uint local_9c;
  longlong local_98;
  ulonglong local_90;
  ulonglong local_88;
  longlong local_80;
  ulonglong local_78;
  uint *local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar20 = param_2[1];
  uVar12 = (int)lVar20 + 1;
  *(uint *)(param_2 + 1) = uVar12;
  local_a8 = param_1;
  if (*(uint *)((longlong)param_2 + 0xc) < uVar12) {
    FUN_1457ecdd8(param_2);
  }
  lVar25 = *param_2;
  lVar20 = (longlong)(int)lVar20 * 0xa0;
  iVar19 = 0;
  memset((void *)(lVar25 + lVar20),0,0xa0);
  *(undefined8 *)(lVar25 + 0x78 + lVar20) = DAT_14cb7bd68;
  *(undefined4 *)(lVar25 + 0x80 + lVar20) = DAT_14cb7bd70;
  *(undefined8 *)(lVar25 + 0x84 + lVar20) = DAT_14cb7bd80;
  *(undefined4 *)(lVar25 + 0x8c + lVar20) = DAT_14cb7bd88;
  *(undefined8 *)(lVar25 + 0x90 + lVar20) = 0;
  *(undefined4 *)(lVar25 + 0x98 + lVar20) = 0;
  *(undefined1 *)(lVar25 + lVar20) = 0;
  iVar18 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar18 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar18 + 1U) {
    FUN_1457ecdd8(param_2,iVar18);
  }
  puVar2 = (undefined1 *)(*param_2 + (longlong)iVar18 * 0xa0);
  memset((void *)(*param_2 + (longlong)iVar18 * 0xa0),0,0xa0);
  lVar25 = local_a8;
  *(undefined8 *)(puVar2 + 0x78) = DAT_14cb7bd68;
  *(undefined4 *)(puVar2 + 0x80) = DAT_14cb7bd70;
  *(undefined8 *)(puVar2 + 0x84) = DAT_14cb7bd80;
  *(undefined4 *)(puVar2 + 0x8c) = DAT_14cb7bd88;
  *(undefined8 *)(puVar2 + 0x90) = 0;
  *(undefined4 *)(puVar2 + 0x98) = 0;
  *puVar2 = 5;
  FUN_140d7e6a6(puVar2 + 0x68,local_a8 + 0xe8);
  lVar20 = lVar25 + 0x30;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = lVar20;
  if (*(int *)(lVar25 + 0x48) == 0) {
    uVar23 = 1;
    local_58._4_4_ = 0;
    uVar21 = 0;
    uVar12 = 0xffffffff;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar21 = local_68 & 0xffffffff;
    uVar23 = local_68 >> 0x20;
    iVar19 = *(int *)(local_a8 + 0x48);
    uVar12 = (uint)local_58;
  }
  iVar18 = local_58._4_4_;
  iVar14 = local_50;
  plVar6 = param_2;
  lVar25 = local_60;
  if (local_58._4_4_ != iVar19 || local_60 != lVar20) {
    do {
      local_98 = lVar25;
      local_b0 = lVar20;
      local_b8 = plVar6;
      local_c0 = iVar19;
      lVar20 = *(longlong *)(*(longlong *)(local_a8 + 0x20) + 0x10 + (longlong)iVar18 * 0x28);
      uVar17 = *(uint *)(lVar20 + 0x38);
      local_bc = iVar14;
      local_9c = uVar12;
      local_90 = uVar23;
      local_78 = uVar21;
      if (uVar17 == 0) {
        uVar21 = 1;
        uVar23 = 0;
        uVar12 = 0;
        iVar18 = 0;
      }
      else {
        puVar13 = *(uint **)(lVar20 + 0x30);
        if (*(uint **)(lVar20 + 0x30) == (uint *)0x0) {
          puVar13 = (uint *)(lVar20 + 0x20);
        }
        uVar12 = *puVar13;
        if (uVar12 == 0) {
          iVar18 = uVar17 + 0x1e;
          if (-1 < (int)(uVar17 - 1)) {
            iVar18 = uVar17 - 1;
          }
          uVar23 = 0;
          uVar21 = (ulonglong)(uint)(iVar18 >> 5);
          if (iVar18 >> 5 < 1) {
            uVar21 = uVar23;
          }
          iVar18 = 0;
          do {
            if (uVar21 == uVar23) goto LAB_14108159c;
            iVar18 = iVar18 + 0x20;
            uVar12 = puVar13[uVar23 + 1];
            uVar23 = uVar23 + 1;
          } while (uVar12 == 0);
        }
        else {
          uVar23 = 0;
          iVar18 = 0;
        }
        uVar21 = (ulonglong)(-uVar12 & uVar12);
        uVar3 = uVar21 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        uVar12 = (iVar18 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
        if ((int)uVar17 <= (int)uVar12) {
          uVar12 = uVar17;
        }
      }
      if (uVar12 != uVar17) {
        uVar24 = 0xffffffff;
        local_88 = (ulonglong)uVar17;
        local_80 = lVar20;
        local_70 = (uint *)(lVar20 + 0x20);
        do {
          lVar20 = *(longlong *)
                    (*(longlong *)(local_80 + 0x10) + 0x10 + (longlong)(int)uVar12 * 0x28);
          lVar25 = param_2[1];
          uVar12 = (int)lVar25 + 1;
          *(uint *)(param_2 + 1) = uVar12;
          if (*(uint *)((longlong)param_2 + 0xc) < uVar12) {
            FUN_1457ecdd8(param_2);
          }
          lVar22 = *param_2;
          lVar25 = (longlong)(int)lVar25 * 0xa0;
          _Dst = (void *)(lVar22 + lVar25);
          memset(_Dst,0,0xa0);
          puVar2 = (undefined1 *)(lVar22 + lVar25);
          *(undefined8 *)(puVar2 + 0x78) = DAT_14cb7bd68;
          *(undefined4 *)(puVar2 + 0x80) = DAT_14cb7bd70;
          *(undefined8 *)(puVar2 + 0x84) = DAT_14cb7bd80;
          *(undefined4 *)(puVar2 + 0x8c) = DAT_14cb7bd88;
          *(undefined8 *)(puVar2 + 0x90) = 0;
          *(undefined4 *)(puVar2 + 0x98) = 0;
          *puVar2 = 1;
          uVar4 = *(undefined4 *)(lVar20 + 0x34);
          *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(lVar20 + 0x2c);
          *(undefined4 *)(puVar2 + 0x18) = uVar4;
          *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(lVar20 + 0x20);
          *(undefined4 *)(puVar2 + 0xc) = *(undefined4 *)(lVar20 + 0x28);
          if (((undefined8 *)(lVar20 + 0x48) != (undefined8 *)(puVar2 + 0x20)) &&
             (*(char *)(lVar20 + 0x78) == '\x01')) {
            uVar5 = *(undefined8 *)(lVar20 + 0x48);
            uVar8 = *(undefined8 *)(lVar20 + 0x50);
            uVar9 = *(undefined8 *)(lVar20 + 0x58);
            uVar10 = *(undefined8 *)(lVar20 + 0x60);
            uVar11 = *(undefined8 *)(lVar20 + 0x70);
            *(undefined8 *)(puVar2 + 0x40) = *(undefined8 *)(lVar20 + 0x68);
            *(undefined8 *)(puVar2 + 0x48) = uVar11;
            *(undefined8 *)(puVar2 + 0x30) = uVar9;
            *(undefined8 *)(puVar2 + 0x38) = uVar10;
            *(undefined8 *)(puVar2 + 0x20) = uVar5;
            *(undefined8 *)(puVar2 + 0x28) = uVar8;
            *(undefined1 *)((longlong)_Dst + 0x50) = 1;
          }
          uVar5 = *(undefined8 *)(lVar20 + 0x38);
          plVar6 = *(longlong **)(lVar20 + 0x40);
          if (plVar6 == (longlong *)0x0) {
            *(undefined8 *)((longlong)_Dst + 0x58) = uVar5;
          }
          else {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
            *(undefined8 *)((longlong)_Dst + 0x58) = uVar5;
            plVar7 = *(longlong **)((longlong)_Dst + 0x60);
            if (plVar6 == plVar7) {
              LOCK();
              plVar7 = plVar6 + 1;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)*plVar7 == 0) {
                (**(code **)*plVar6)(plVar6);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar19 = *piVar1;
                UNLOCK();
                plVar7 = plVar6;
joined_r0x00014108176c:
                if (iVar19 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                }
              }
            }
            else {
              *(longlong **)((longlong)_Dst + 0x60) = plVar6;
              if (plVar7 != (longlong *)0x0) {
                LOCK();
                plVar6 = plVar7 + 1;
                *(int *)plVar6 = (int)*plVar6 + -1;
                UNLOCK();
                if ((int)*plVar6 == 0) {
                  (**(code **)*plVar7)(plVar7);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar7 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  iVar19 = *piVar1;
                  UNLOCK();
                  goto joined_r0x00014108176c;
                }
              }
            }
          }
          iVar19 = *(int *)(lVar20 + 0x88);
          if ((longlong)iVar19 != 0) {
            lVar20 = *(longlong *)(lVar20 + 0x80);
            lVar25 = 0;
            do {
              plVar6 = *(longlong **)(lVar20 + lVar25);
              (**(code **)(*plVar6 + 0x28))(plVar6,local_b8);
              lVar25 = lVar25 + 0x10;
            } while ((longlong)iVar19 * 0x10 != lVar25);
          }
          uVar24 = uVar24 & ~(uint)uVar21;
          puVar13 = *(uint **)(local_80 + 0x30);
          if (*(uint **)(local_80 + 0x30) == (uint *)0x0) {
            puVar13 = local_70;
          }
          uVar17 = *(uint *)(local_80 + 0x38);
          iVar19 = (int)uVar23;
          lVar20 = (longlong)iVar19;
          uVar12 = puVar13[lVar20] & uVar24;
          if (uVar12 == 0) {
            iVar14 = uVar17 + 0x1e;
            if (-1 < (int)(uVar17 - 1)) {
              iVar14 = uVar17 - 1;
            }
            iVar14 = iVar14 >> 5;
            iVar18 = iVar18 + 0x20;
            iVar15 = iVar14;
            if (iVar14 < iVar19) {
              iVar15 = iVar19;
            }
            if (iVar19 < iVar14) {
              lVar25 = 0;
              do {
                uVar12 = puVar13[lVar20 + lVar25 + 1];
                if (uVar12 != 0) {
                  uVar23 = (ulonglong)(iVar19 + (int)lVar25 + 1);
                  uVar24 = 0xffffffff;
                  goto LAB_141081563;
                }
                iVar18 = iVar18 + 0x20;
                lVar25 = lVar25 + 1;
              } while (iVar15 - lVar20 != lVar25);
              uVar24 = 0xffffffff;
              iVar19 = iVar15;
            }
            uVar23 = (ulonglong)(iVar19 + 1);
            uVar12 = uVar17;
          }
          else {
LAB_141081563:
            uVar21 = (ulonglong)(-uVar12 & uVar12);
            uVar3 = uVar21 * 2 + 1;
            lVar20 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            uVar12 = (iVar18 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
            if ((int)uVar17 <= (int)uVar12) {
              uVar12 = uVar17;
            }
          }
          param_2 = local_b8;
        } while (uVar12 != (uint)local_88);
      }
LAB_14108159c:
      uVar12 = local_9c & ~(uint)local_90;
      lVar20 = *(longlong *)(local_98 + 0x10);
      if (*(longlong *)(local_98 + 0x10) == 0) {
        lVar20 = local_98;
      }
      iVar19 = *(int *)(local_98 + 0x18);
      iVar18 = (int)local_78;
      lVar25 = (longlong)iVar18;
      uVar17 = *(uint *)(lVar20 + lVar25 * 4) & uVar12;
      uVar21 = local_78;
      iVar14 = local_bc;
      if (uVar17 == 0) {
        iVar15 = iVar19 + 0x1e;
        if (-1 < iVar19 + -1) {
          iVar15 = iVar19 + -1;
        }
        iVar15 = iVar15 >> 5;
        iVar14 = local_bc + 0x20;
        iVar16 = iVar15;
        if (iVar15 < iVar18) {
          iVar16 = iVar18;
        }
        if (iVar18 < iVar15) {
          lVar22 = 0;
          do {
            uVar17 = *(uint *)(lVar20 + lVar25 * 4 + 4 + lVar22 * 4);
            if (uVar17 != 0) {
              uVar12 = 0xffffffff;
              uVar21 = (ulonglong)(iVar18 + (int)lVar22 + 1);
              goto LAB_14108162c;
            }
            iVar14 = iVar14 + 0x20;
            lVar22 = lVar22 + 1;
          } while (iVar16 - lVar25 != lVar22);
          uVar12 = 0xffffffff;
          iVar18 = iVar16;
        }
        uVar21 = (ulonglong)(iVar18 + 1);
        uVar23 = local_90;
        iVar18 = iVar19;
      }
      else {
LAB_14108162c:
        uVar23 = (ulonglong)(-uVar17 & uVar17);
        uVar3 = uVar23 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar18 = (iVar14 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if (iVar19 <= iVar18) {
          iVar18 = iVar19;
        }
      }
      iVar19 = local_c0;
      plVar6 = local_b8;
      lVar20 = local_b0;
      lVar25 = local_98;
    } while (iVar18 != local_c0 || local_98 != local_b0);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410817f4 FUN_1410817f4 body=111 status=ok
// SIG undefined FUN_1410817f4(void)

void FUN_1410817f4(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  
  cVar4 = FUN_141081864();
  if (cVar4 == '\0') {
    iVar1 = *(int *)(param_1 + 0xe8);
    *(uint *)(param_1 + 0xe8) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0xec) < iVar1 + 1U) {
      FUN_1457ecf04((longlong *)(param_1 + 0xe0),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0xe0);
    *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = *param_2;
    lVar3 = param_2[1];
    *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 141081864 FUN_141081864 body=2749 status=ok
// SIG undefined FUN_141081864(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_141081864(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong *plVar3;
  void *_Dst;
  longlong *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  longlong *plVar16;
  longlong *plVar17;
  int iVar18;
  int iVar19;
  undefined1 auStack_1088 [32];
  longlong local_1068;
  longlong local_1060;
  undefined8 local_1058;
  longlong *local_1050;
  undefined2 local_1048;
  undefined8 local_1044;
  undefined4 local_103c;
  char local_1038;
  undefined4 local_1034;
  longlong local_1030;
  undefined4 local_1028;
  char local_1024;
  longlong local_1020;
  undefined4 local_1018;
  char local_1014;
  undefined4 local_1010;
  undefined4 uStack_100c;
  undefined4 uStack_1008;
  undefined4 uStack_1004;
  undefined4 local_1000;
  undefined1 local_ff8 [816];
  undefined1 local_cc8;
  undefined4 local_cc0;
  char local_cb8;
  undefined4 local_cb0;
  undefined1 local_ca8 [816];
  undefined1 local_978;
  undefined4 local_970;
  char local_968;
  undefined1 local_960 [816];
  undefined1 local_630;
  undefined4 local_628;
  char local_620;
  longlong local_618;
  undefined1 local_610 [816];
  undefined1 local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d0;
  longlong local_2c8;
  longlong lStack_2c0;
  longlong local_2b8;
  char local_2b0;
  longlong local_2a8;
  longlong lStack_2a0;
  longlong local_298;
  char local_290;
  undefined4 local_288;
  char local_280;
  undefined4 local_278;
  undefined4 local_270;
  longlong local_268;
  longlong lStack_260;
  longlong local_258;
  char local_250;
  longlong local_248;
  longlong lStack_240;
  longlong local_238;
  char local_230;
  undefined4 local_228;
  char local_220;
  undefined4 local_218;
  longlong local_210;
  longlong lStack_208;
  longlong local_200;
  char local_1f8;
  longlong local_1f0;
  longlong lStack_1e8;
  longlong local_1e0;
  char local_1d8;
  undefined4 local_1d0;
  char local_1c8;
  longlong local_1c0;
  undefined4 local_1b8;
  longlong local_1b0;
  longlong lStack_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  longlong lStack_188;
  longlong local_180;
  char local_178;
  undefined4 local_170;
  longlong local_168;
  longlong lStack_160;
  longlong local_158;
  longlong lStack_150;
  longlong local_148;
  longlong lStack_140;
  longlong local_138;
  longlong lStack_130;
  char local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  char local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  longlong local_c0;
  longlong lStack_b8;
  longlong local_b0;
  longlong lStack_a8;
  longlong local_a0;
  longlong lStack_98;
  char local_90;
  longlong local_88 [9];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1088;
  uVar13 = 0;
  uVar7 = FUN_1409a8112(*param_2,0);
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    uVar13 = 0;
    FUN_140574f3e(*(longlong *)(param_1 + 0xf0),&local_1068,uVar7,0);
    if (local_1068 != 0) {
      memset(&local_1060,0,0x1020);
      plVar3 = local_1050;
      local_1058 = *param_2;
      plVar4 = (longlong *)param_2[1];
      if (plVar4 == (longlong *)0x0) {
        local_1050 = (longlong *)0x0;
        plVar4 = local_1050;
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        if (local_1050 != (longlong *)0x0) {
          LOCK();
          plVar16 = local_1050 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
            puVar5 = (undefined8 *)*local_1050;
            local_1050 = plVar4;
            (*(code *)*puVar5)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar4 = local_1050;
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
              plVar4 = local_1050;
            }
          }
        }
      }
      local_1050 = plVar4;
      local_1060 = local_1068;
      plVar4 = (longlong *)(param_1 + 0x90);
      if (*(int *)(param_1 + 0xc4) == 0) {
        iVar19 = *(int *)(param_1 + 0x98);
        *(int *)(param_1 + 0x98) = iVar19 + 1;
        if (*(int *)(param_1 + 0x9c) == iVar19) {
          FUN_1457ece6c(plVar4,iVar19);
        }
        iVar18 = *(int *)(param_1 + 0xb8);
        if (iVar18 == 0) {
          iVar10 = -1;
        }
        else {
          iVar10 = iVar18 + 0x1e;
          if (-1 < iVar18 + -1) {
            iVar10 = iVar18 + -1;
          }
          iVar10 = iVar10 >> 5;
        }
        lVar12 = param_1 + 0xa0;
        iVar11 = iVar18 + 1;
        iVar15 = iVar18 + 0x1f;
        if (-1 < iVar18) {
          iVar15 = iVar18;
        }
        if (iVar15 >> 5 == iVar10) {
          *(int *)(param_1 + 0xb8) = iVar11;
        }
        else {
          if (*(int *)(param_1 + 0xbc) <= iVar18) {
            if (iVar18 + 0x20U < 0xa0) {
              iVar11 = 0x80;
              iVar10 = iVar18;
            }
            else {
              uVar6 = iVar18 + 0x20U >> 5;
              if (*(int *)(param_1 + 0xbc) + 0x1fU < 0xa0) {
                uVar14 = 4;
                if (4 < uVar6) {
                  uVar14 = uVar6;
                }
              }
              else {
                uVar14 = (uVar6 * 3 >> 3) + uVar6 + 0x10;
              }
              uVar13 = FUN_144a3809e(uVar14 << 2,0);
              iVar10 = (int)(uVar13 >> 2);
              iVar11 = -0x20;
              if ((int)uVar6 <= iVar10) {
                iVar11 = iVar10 << 5;
              }
              iVar10 = *(int *)(param_1 + 0xb8);
            }
            *(int *)(param_1 + 0xbc) = iVar11;
            FUN_1446efbd8(lVar12,iVar10);
            iVar11 = *(int *)(param_1 + 0xb8) + 1;
          }
          iVar10 = iVar11 + 0x1f;
          if (-1 < iVar11) {
            iVar10 = iVar11;
          }
          *(int *)(param_1 + 0xb8) = iVar11;
          if (iVar11 % 0x20 != 0) {
            lVar8 = *(longlong *)(param_1 + 0xb0);
            if (*(longlong *)(param_1 + 0xb0) == 0) {
              lVar8 = lVar12;
            }
            bVar9 = -(char)(iVar11 % 0x20);
            *(uint *)(lVar8 + (longlong)(iVar10 >> 5) * 4) =
                 (uint)(*(int *)(lVar8 + (longlong)(iVar10 >> 5) * 4) << (bVar9 & 0x1f)) >>
                 (bVar9 & 0x1f);
          }
        }
        lVar8 = (longlong)iVar19;
        if (*(longlong *)(param_1 + 0xb0) != 0) {
          lVar12 = *(longlong *)(param_1 + 0xb0);
        }
        bVar9 = (byte)iVar18 & 0x1f;
        puVar2 = (uint *)(lVar12 + (longlong)(iVar15 >> 5) * 4);
        *puVar2 = *puVar2 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
      }
      else {
        iVar19 = *(int *)(param_1 + 0xc0);
        lVar8 = (longlong)iVar19;
        iVar18 = *(int *)(*(longlong *)(param_1 + 0x90) + 4 + lVar8 * 0x1030);
        *(int *)(param_1 + 0xc0) = iVar18;
        iVar10 = *(int *)(param_1 + 0xc4) + -1;
        *(int *)(param_1 + 0xc4) = iVar10;
        if (iVar10 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar18 * 0x1030) = 0xffffffff;
        }
      }
      lVar12 = param_1 + 0xa0;
      if (*(longlong *)(param_1 + 0xb0) != 0) {
        lVar12 = *(longlong *)(param_1 + 0xb0);
      }
      iVar18 = iVar19 + 0x1f;
      if (-1 < iVar19) {
        iVar18 = iVar19;
      }
      puVar2 = (uint *)(lVar12 + (longlong)(iVar18 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)iVar19 & 0x1f);
      lVar12 = *(longlong *)(param_1 + 0x90);
      lVar8 = lVar8 * 0x1030;
      plVar3 = (longlong *)(lVar12 + lVar8);
      *(longlong *)(lVar12 + lVar8) = local_1068;
      *(longlong *)(lVar12 + 8 + lVar8) = local_1060;
      *(undefined8 *)(lVar12 + 0x10 + lVar8) = local_1058;
      *(longlong **)(lVar12 + 0x18 + lVar8) = local_1050;
      if (local_1050 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1050 + 1) = (int)local_1050[1] + 1;
        UNLOCK();
      }
      *(undefined2 *)(plVar3 + 4) = local_1048;
      *(char *)(plVar3 + 6) = local_1038;
      if (local_1038 == '\x01') {
        *(undefined4 *)((longlong)plVar3 + 0x2c) = local_103c;
        *(undefined8 *)((longlong)plVar3 + 0x24) = local_1044;
      }
      *(undefined4 *)((longlong)plVar3 + 0x34) = local_1034;
      *(char *)((longlong)plVar3 + 0x44) = local_1024;
      if (local_1024 == '\x01') {
        *(undefined4 *)(plVar3 + 8) = local_1028;
        plVar3[7] = local_1030;
      }
      *(char *)((longlong)plVar3 + 0x54) = local_1014;
      if (local_1014 == '\x01') {
        *(undefined4 *)(plVar3 + 10) = local_1018;
        plVar3[9] = local_1020;
      }
      *(undefined4 *)(plVar3 + 0xd) = local_1000;
      *(undefined4 *)(plVar3 + 0xb) = local_1010;
      *(undefined4 *)((longlong)plVar3 + 0x5c) = uStack_100c;
      *(undefined4 *)(plVar3 + 0xc) = uStack_1008;
      *(undefined4 *)((longlong)plVar3 + 100) = uStack_1004;
      *(char *)(plVar3 + 0x76) = local_cb8;
      if (local_cb8 == '\x01') {
        *(undefined1 *)(plVar3 + 0x73) = 0xff;
        FUN_1449496c6(plVar3 + 0xe,local_ff8);
        *(undefined1 *)(plVar3 + 0x74) = local_cc8;
        *(undefined4 *)(plVar3 + 0x75) = local_cc0;
      }
      *(undefined4 *)(plVar3 + 0x77) = local_cb0;
      *(char *)(plVar3 + 0xe0) = local_968;
      if (local_968 == '\x01') {
        *(undefined1 *)(plVar3 + 0xdd) = 0xff;
        FUN_1449496c6(plVar3 + 0x78,local_ca8);
        *(undefined1 *)(plVar3 + 0xde) = local_978;
        *(undefined4 *)(plVar3 + 0xdf) = local_970;
      }
      *(char *)(plVar3 + 0x149) = local_620;
      if (local_620 == '\x01') {
        *(undefined1 *)(plVar3 + 0x146) = 0xff;
        FUN_1449496c6(plVar3 + 0xe1,local_960);
        *(undefined1 *)(plVar3 + 0x147) = local_630;
        *(undefined4 *)(plVar3 + 0x148) = local_628;
      }
      plVar3[0x14a] = local_618;
      *(undefined1 *)(plVar3 + 0x1b0) = 0xff;
      FUN_1449496c6(plVar3 + 0x14b,local_610);
      *(undefined1 *)(plVar3 + 0x1b1) = local_2e0;
      *(undefined4 *)(plVar3 + 0x1b2) = local_2d8;
      *(char *)(plVar3 + 0x1bd) = local_280;
      if (local_280 == '\x01') {
        *(undefined4 *)(plVar3 + 0x1b3) = local_2d0;
        *(char *)(plVar3 + 0x1b7) = local_2b0;
        if (local_2b0 == '\x01') {
          plVar3[0x1b6] = local_2b8;
          plVar3[0x1b4] = local_2c8;
          plVar3[0x1b5] = lStack_2c0;
        }
        *(char *)(plVar3 + 0x1bb) = local_290;
        if (local_290 == '\x01') {
          plVar3[0x1ba] = local_298;
          plVar3[0x1b8] = local_2a8;
          plVar3[0x1b9] = lStack_2a0;
        }
        *(undefined4 *)(plVar3 + 0x1bc) = local_288;
      }
      *(undefined4 *)(plVar3 + 0x1be) = local_278;
      *(char *)(plVar3 + 0x1c9) = local_220;
      if (local_220 == '\x01') {
        *(undefined4 *)(plVar3 + 0x1bf) = local_270;
        *(char *)(plVar3 + 0x1c3) = local_250;
        if (local_250 == '\x01') {
          plVar3[0x1c2] = local_258;
          plVar3[0x1c0] = local_268;
          plVar3[0x1c1] = lStack_260;
        }
        *(char *)(plVar3 + 0x1c7) = local_230;
        if (local_230 == '\x01') {
          plVar3[0x1c6] = local_238;
          plVar3[0x1c4] = local_248;
          plVar3[0x1c5] = lStack_240;
        }
        *(undefined4 *)(plVar3 + 0x1c8) = local_228;
      }
      *(char *)(plVar3 + 0x1d4) = local_1c8;
      if (local_1c8 == '\x01') {
        *(undefined4 *)(plVar3 + 0x1ca) = local_218;
        *(char *)(plVar3 + 0x1ce) = local_1f8;
        if (local_1f8 == '\x01') {
          plVar3[0x1cd] = local_200;
          plVar3[0x1cb] = local_210;
          plVar3[0x1cc] = lStack_208;
        }
        *(char *)(plVar3 + 0x1d2) = local_1d8;
        if (local_1d8 == '\x01') {
          plVar3[0x1d1] = local_1e0;
          plVar3[0x1cf] = local_1f0;
          plVar3[0x1d0] = lStack_1e8;
        }
        *(undefined4 *)(plVar3 + 0x1d3) = local_1d0;
      }
      plVar3[0x1d5] = local_1c0;
      *(undefined4 *)(plVar3 + 0x1d6) = local_1b8;
      *(char *)(plVar3 + 0x1da) = local_198;
      if (local_198 == '\x01') {
        plVar3[0x1d9] = local_1a0;
        plVar3[0x1d7] = local_1b0;
        plVar3[0x1d8] = lStack_1a8;
      }
      *(char *)(plVar3 + 0x1de) = local_178;
      if (local_178 == '\x01') {
        plVar3[0x1dd] = local_180;
        plVar3[0x1db] = local_190;
        plVar3[0x1dc] = lStack_188;
      }
      *(undefined4 *)(plVar3 + 0x1df) = local_170;
      *(char *)(plVar3 + 0x1e8) = local_128;
      if (local_128 == '\x01') {
        plVar3[0x1e6] = local_138;
        plVar3[0x1e7] = lStack_130;
        plVar3[0x1e4] = local_148;
        plVar3[0x1e5] = lStack_140;
        plVar3[0x1e2] = local_158;
        plVar3[0x1e3] = lStack_150;
        plVar3[0x1e0] = local_168;
        plVar3[0x1e1] = lStack_160;
      }
      *(undefined4 *)(plVar3 + 0x1e9) = local_120;
      *(char *)(plVar3 + 0x1f2) = local_d8;
      if (local_d8 == '\x01') {
        plVar3[0x1f0] = local_e8;
        plVar3[0x1f1] = lStack_e0;
        plVar3[0x1ee] = local_f8;
        plVar3[0x1ef] = lStack_f0;
        plVar3[0x1ec] = local_108;
        plVar3[0x1ed] = lStack_100;
        *(undefined4 *)(plVar3 + 0x1ea) = local_118;
        *(undefined4 *)((longlong)plVar3 + 0xf54) = uStack_114;
        *(undefined4 *)(plVar3 + 0x1eb) = uStack_110;
        *(undefined4 *)((longlong)plVar3 + 0xf5c) = uStack_10c;
      }
      *(char *)(plVar3 + 0x1fb) = local_90;
      if (local_90 == '\x01') {
        plVar3[0x1f9] = local_a0;
        plVar3[0x1fa] = lStack_98;
        plVar3[0x1f7] = local_b0;
        plVar3[0x1f8] = lStack_a8;
        plVar3[0x1f5] = local_c0;
        plVar3[0x1f6] = lStack_b8;
        *(undefined4 *)(plVar3 + 499) = local_d0;
        *(undefined4 *)((longlong)plVar3 + 0xf9c) = uStack_cc;
        *(undefined4 *)(plVar3 + 500) = uStack_c8;
        *(undefined4 *)((longlong)plVar3 + 0xfa4) = uStack_c4;
      }
      plVar16 = local_88;
      plVar17 = plVar3 + 0x1fc;
      for (lVar12 = 9; lVar12 != 0; lVar12 = lVar12 + -1) {
        *plVar17 = *plVar16;
        plVar16 = plVar16 + 1;
        plVar17 = plVar17 + 1;
      }
      *(undefined4 *)(plVar3 + 0x205) = 0xffffffff;
      lVar12 = *plVar3;
      uVar6 = (int)((ulonglong)lVar12 >> 0x20) * 0x17 + (int)lVar12;
      uVar14 = *(int *)(param_1 + 0x98) - *(int *)(param_1 + 0xc4);
      if ((uVar14 != 0) && (uVar14 != 1)) {
        lVar8 = param_1 + 200;
        if (*(longlong *)(param_1 + 0xd0) != 0) {
          lVar8 = *(longlong *)(param_1 + 0xd0);
        }
        iVar18 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0xd8) - 1U & uVar6) * 4);
        if (iVar18 != -1) {
          do {
            _Dst = (void *)(*plVar4 + (longlong)iVar18 * 0x1030);
            if (*(longlong *)(*plVar4 + (longlong)iVar18 * 0x1030) == lVar12) {
              FUN_141082322((longlong)_Dst + 8);
              memmove(_Dst,plVar3,0x1028);
              FUN_141021698(plVar4,iVar19);
              goto LAB_141081d1f;
            }
            iVar18 = *(int *)((longlong)_Dst + 0x1028);
          } while (iVar18 != -1);
        }
      }
      if (uVar14 < 4) {
        iVar18 = 1;
      }
      else {
        uVar13 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
        lVar12 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar18 = 1 << ((byte)lVar12 & 0x1f);
      }
      if (((int)uVar14 < 1) || (iVar18 <= *(int *)(param_1 + 0xd8))) {
        uVar6 = *(int *)(param_1 + 0xd8) - 1U & uVar6;
        *(uint *)((longlong)plVar3 + 0x102c) = uVar6;
        lVar12 = *(longlong *)(param_1 + 0xd0);
        if (*(longlong *)(param_1 + 0xd0) == 0) {
          lVar12 = param_1 + 200;
        }
        *(undefined4 *)(plVar3 + 0x205) =
             *(undefined4 *)
              (lVar12 + ((longlong)*(int *)(param_1 + 0xd8) - 1U & (longlong)(int)uVar6) * 4);
        lVar12 = *(longlong *)(param_1 + 0xd0);
        if (*(longlong *)(param_1 + 0xd0) == 0) {
          lVar12 = param_1 + 200;
        }
        *(int *)(lVar12 + ((longlong)*(int *)(param_1 + 0xd8) - 1U & (longlong)(int)uVar6) * 4) =
             iVar19;
      }
      else {
        *(int *)(param_1 + 0xd8) = iVar18;
        FUN_14108253e(plVar4);
      }
LAB_141081d1f:
      FUN_141082322(&local_1060);
      uVar13 = CONCAT71((int7)((ulonglong)plVar17 >> 8),1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_1088) == DAT_14c707940) {
    return uVar13 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141082322 FUN_141082322 body=540 status=ok
// SIG undefined FUN_141082322(void)

void FUN_141082322(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0xfd0) == '\x01') {
    *(undefined1 *)(param_1 + 0xfd0) = 0;
  }
  if (*(char *)(param_1 + 0xf88) == '\x01') {
    *(undefined1 *)(param_1 + 0xf88) = 0;
  }
  if (*(char *)(param_1 + 0xf38) == '\x01') {
    *(undefined1 *)(param_1 + 0xf38) = 0;
  }
  if (*(char *)(param_1 + 0xee8) == '\x01') {
    *(undefined1 *)(param_1 + 0xee8) = 0;
  }
  if (*(char *)(param_1 + 0xec8) == '\x01') {
    *(undefined1 *)(param_1 + 0xec8) = 0;
  }
  if (*(char *)(param_1 + 0xe98) == '\x01') {
    if (*(char *)(param_1 + 0xe88) == '\x01') {
      *(undefined1 *)(param_1 + 0xe88) = 0;
    }
    if (*(char *)(param_1 + 0xe68) == '\x01') {
      *(undefined1 *)(param_1 + 0xe68) = 0;
    }
    *(undefined1 *)(param_1 + 0xe98) = 0;
  }
  if (*(char *)(param_1 + 0xe40) == '\x01') {
    if (*(char *)(param_1 + 0xe30) == '\x01') {
      *(undefined1 *)(param_1 + 0xe30) = 0;
    }
    if (*(char *)(param_1 + 0xe10) == '\x01') {
      *(undefined1 *)(param_1 + 0xe10) = 0;
    }
    *(undefined1 *)(param_1 + 0xe40) = 0;
  }
  if (*(char *)(param_1 + 0xde0) == '\x01') {
    if (*(char *)(param_1 + 0xdd0) == '\x01') {
      *(undefined1 *)(param_1 + 0xdd0) = 0;
    }
    if (*(char *)(param_1 + 0xdb0) == '\x01') {
      *(undefined1 *)(param_1 + 0xdb0) = 0;
    }
    *(undefined1 *)(param_1 + 0xde0) = 0;
  }
  FUN_1449493b2(param_1 + 0xa50);
  if (*(char *)(param_1 + 0xa40) == '\x01') {
    FUN_1449493b2(param_1 + 0x700);
    *(undefined1 *)(param_1 + 0xa40) = 0;
  }
  if (*(char *)(param_1 + 0x6f8) == '\x01') {
    FUN_1449493b2(param_1 + 0x3b8);
    *(undefined1 *)(param_1 + 0x6f8) = 0;
  }
  if (*(char *)(param_1 + 0x3a8) == '\x01') {
    FUN_1449493b2(param_1 + 0x68);
    *(undefined1 *)(param_1 + 0x3a8) = 0;
  }
  if (*(char *)(param_1 + 0x4c) == '\x01') {
    *(undefined1 *)(param_1 + 0x4c) = 0;
  }
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    *(undefined1 *)(param_1 + 0x3c) = 0;
  }
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *(undefined1 *)(param_1 + 0x28) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014108253a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14108253e FUN_14108253e body=569 status=ok
// SIG undefined FUN_14108253e(void)

void FUN_14108253e(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x1030;
        uVar13 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar11 + lVar10) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar11 + lVar10)) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x102c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x1028 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_141082732;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_141082732:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141082778 FUN_141082778 body=670 status=ok
// SIG undefined FUN_141082778(void)

void FUN_141082778(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149f3ae80;
  puVar1 = (undefined8 *)param_1[0x41];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_141082b5c(param_1 + 0x3e,0);
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_14117c696(param_1 + 0x3b,0);
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  FUN_141082c26(param_1 + 0x38,0);
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x35) == '\x01') {
    FUN_141082b5c(param_1 + 0x33,0);
    if (param_1[0x33] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x35) = 0;
  }
  FUN_141082a16(param_1 + 0x30,0);
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  FUN_141082b5c(param_1 + 0x2c,0);
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_14117c696(param_1 + 0x29,0);
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_141082a16(param_1 + 0x26,0);
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_141082ade(param_1 + 0x17);
  if (*(char *)(param_1 + 0x16) == '\x01') {
    FUN_146c409ee(param_1 + 0x14,0);
    if (param_1[0x14] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  if (*(char *)(param_1 + 0x12) == '\x01') {
    FUN_146c40926(param_1 + 0x10,0);
    if (param_1[0x10] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    FUN_146c40926(param_1 + 0xc,0);
    if (param_1[0xc] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  FUN_141082b5c(param_1 + 8,0);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_14117c696(param_1 + 5,0);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 2,0);
  if (param_1[2] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141082a16 FUN_141082a16 body=104 status=ok
// SIG undefined FUN_141082a16(void)

void FUN_141082a16(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  if (0 < (longlong)(int)lVar1) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*param_1 + lVar2 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar1 != lVar2);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_141082a7e(param_1,param_2);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 141082a7e FUN_141082a7e body=96 status=ok
// SIG undefined FUN_141082a7e(void)

void FUN_141082a7e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
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



// FUNCTION 141082ade FUN_141082ade body=125 status=ok
// SIG undefined FUN_141082ade(void)

void FUN_141082ade(longlong param_1)

{
  FUN_141082b5c(param_1 + 0x58,0);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_141082b5c(param_1 + 0x38,0);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_141082b5c(param_1 + 0x20,0);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_141082b5c(param_1 + 8,0);
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141082b5c FUN_141082b5c body=104 status=ok
// SIG undefined FUN_141082b5c(void)

void FUN_141082b5c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  if (0 < (longlong)(int)lVar1) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*param_1 + lVar2 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar1 != lVar2);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_141082bc6(param_1,param_2);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 141082bc6 FUN_141082bc6 body=96 status=ok
// SIG undefined FUN_141082bc6(void)

void FUN_141082bc6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
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



// FUNCTION 141082c26 FUN_141082c26 body=104 status=ok
// SIG undefined FUN_141082c26(void)

void FUN_141082c26(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  if (0 < (longlong)(int)lVar1) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*param_1 + lVar2 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar1 != lVar2);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_141082c8e(param_1,param_2);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 141082c8e FUN_141082c8e body=96 status=ok
// SIG undefined FUN_141082c8e(void)

void FUN_141082c8e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
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



// FUNCTION 141082d0a FUN_141082d0a body=113 status=ok
// SIG undefined FUN_141082d0a(void)

void FUN_141082d0a(longlong param_1)

{
  switch(*(undefined1 *)(param_1 + 100)) {
  case 0:
    if (*(char *)(param_1 + 0x58) != '\0') {
      FUN_1407c9f6e(param_1,0);
      FUN_1418d9830(param_1 + 0x20);
      return;
    }
    break;
  case 1:
    FUN_140351c8e(param_1);
    return;
  case 2:
    FUN_1440ca32a(param_1);
    return;
  case 3:
    FUN_140a3257a(param_1);
    return;
  }
  return;
}



// FUNCTION 141082d7c FUN_141082d7c body=446 status=ok
// SIG undefined FUN_141082d7c(void)

void FUN_141082d7c(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar1 = param_1 + -0x58;
  uVar3 = (**(code **)(*(longlong *)(param_1 + -0x58) + 0x180))(lVar1);
  plVar4 = (longlong *)FUN_14007a5e6(uVar3);
  if (plVar4 != (longlong *)0x0) {
    local_b8 = 0;
    local_b0 = 0x8000000000;
    uStack_a8 = 0xffffffff;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0xf;
    local_58 = 1;
    local_54 = 0;
    uStack_4c = 0;
    cVar2 = (**(code **)(*plVar4 + 0x70))(plVar4,*param_2);
    if (cVar2 != '\0') {
      lVar5 = FUN_14087dee0(&local_118);
      if (lVar5 != 0) {
        lVar5 = FUN_141082f3c(lVar5);
        FUN_140368b56(&local_118);
        if (lVar5 != 0) {
          lVar6 = FUN_14060e84c(lVar1);
          if (lVar6 != 0) {
            lVar7 = (**(code **)(*plVar4 + 0xb0))(plVar4,*param_2);
            cVar2 = (**(code **)(*plVar4 + 0xa8))(plVar4,*param_2);
            if ((lVar7 == lVar6) || (cVar2 == '\0')) {
              puVar8 = (undefined4 *)FUN_1457ed868(param_1 + 8);
              *puVar8 = *param_2;
              uVar3 = (**(code **)(*plVar4 + 0x78))(plVar4);
              FUN_1458d9134(&local_118,uVar3);
              puVar8[2] = (undefined4)local_118;
              puVar8[3] = local_118._4_4_;
              puVar8[4] = (undefined4)uStack_110;
              puVar8[5] = uStack_110._4_4_;
              *(longlong *)(puVar8 + 6) = lVar5;
              FUN_1457ed93e(lVar1);
            }
          }
        }
        goto LAB_141082e83;
      }
    }
    FUN_140368b56(&local_118);
  }
LAB_141082e83:
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141082f3c FUN_141082f3c body=151 status=ok
// SIG undefined FUN_141082f3c(void)

longlong FUN_141082f3c(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x1f8);
  if (lVar4 == 0) {
    uVar3 = FUN_14050c9fe();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x1f8) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x200) == 0) {
    if ((*(longlong *)(param_1 + 0x1f0) != 0) && (lVar4 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        lVar4 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x1f0));
      }
      *(longlong *)(param_1 + 0x200) = lVar4;
      return lVar4;
    }
    return 0;
  }
  return *(longlong *)(param_1 + 0x200);
}



// FUNCTION 141082fd4 FUN_141082fd4 body=49 status=ok
// SIG undefined FUN_141082fd4(void)

void FUN_141082fd4(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140d7486c(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000141082fe9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  uVar2 = FUN_141083022(&DAT_14cb88f10);
  FUN_1410ccd0a(uVar2);
  return;
}



// FUNCTION 141083006 FUN_141083006 body=28 status=ok
// SIG undefined FUN_141083006(void)

void FUN_141083006(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141083022(&DAT_14cb88f10);
  FUN_1410ccd0a(uVar1);
  return;
}



// FUNCTION 141083022 FUN_141083022 body=96 status=ok
// SIG undefined FUN_141083022(void)

void FUN_141083022(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x1480,0);
    lVar4 = 0xf;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 0x29;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x10;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 141083082 FUN_141083082 body=458 status=ok
// SIG undefined FUN_141083082(void)

undefined8 * FUN_141083082(undefined8 *param_1)

{
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined1 local_48 [8];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1410832cc();
  *param_1 = &PTR_FUN_14bc2a4f0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  FUN_14020fad6(param_1 + 0x24,L"SubPath");
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  FUN_14020fad6(param_1 + 0x26,L"LevelUid");
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  FUN_14020fad6(param_1 + 0x28,L"ReferenceObject");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0c1b0) {
    FUN_144b3d300(&DAT_14cc0c1b0);
    if (DAT_14cc0c1b0 == -1) {
      FUN_140056680(&DAT_14cc0c1a0,L"__BaseNodeFactoryDependencies__");
      atexit((_func_5014 *)&LAB_1444bba26);
      _Init_thread_footer(&DAT_14cc0c1b0);
    }
  }
  FUN_1410835a0(param_1 + 0xc,param_1 + 5,&DAT_14cc0c1a0);
  local_49 = 0;
  FUN_14108324e();
  FUN_1410837a0(param_1,local_48,&DAT_14cc0c1b8,&local_49);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14108324e FUN_14108324e body=125 status=ok
// SIG undefined FUN_14108324e(void)

undefined8 * FUN_14108324e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0c1c8) {
    FUN_144b3d300(&DAT_14cc0c1c8);
    if (DAT_14cc0c1c8 == -1) {
      DAT_14cc0c1b8 = 0;
      uRam000000014cc0c1c0 = 0;
      FUN_14020fad6(&DAT_14cc0c1b8,L"__Reimport_Strategy_Flags_Key__");
      atexit((_func_5014 *)&LAB_1444bba37);
      _Init_thread_footer(&DAT_14cc0c1c8);
    }
  }
  return &DAT_14cc0c1b8;
}



// FUNCTION 1410832cc FUN_1410832cc body=722 status=ok
// SIG undefined FUN_1410832cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1410832cc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  longlong local_70;
  undefined1 local_60 [8];
  longlong local_58;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bc277c0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  plVar3 = (longlong *)FUN_14001cc68(0xb0);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14bc2f720;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0xa0);
  FUN_141083640(plVar4);
  if (plVar3 == (longlong *)0x0) {
    param_1[5] = 0x10;
    plVar4 = (longlong *)param_1[6];
    if (plVar4 == (longlong *)0x0) goto LAB_141083388;
    param_1[6] = 0;
LAB_14108351d:
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
    if (plVar3 == (longlong *)0x0) goto LAB_141083388;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    param_1[5] = plVar4;
    plVar4 = (longlong *)param_1[6];
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
      param_1[6] = plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_14108351d;
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
LAB_141083388:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc0bfe0) && (FUN_144b3d300(&DAT_14cc0bfe0), DAT_14cc0bfe0 == -1)) {
    DAT_14cc0bfd0 = (void *)0x0;
    _DAT_14cc0bfd8 = 0;
    FUN_14020fad6(&DAT_14cc0bfd0,L"__TARGET_ASSET_IDS_");
    atexit((_func_5014 *)&LAB_1444ba910);
    _Init_thread_footer(&DAT_14cc0bfe0);
  }
  _Src = DAT_14cc0bfd0;
  local_48 = (void *)0x0;
  lVar5 = (longlong)DAT_14cc0bfd8;
  local_40 = DAT_14cc0bfd8;
  if (lVar5 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,_DAT_14cc0bfd8 & 0xffffffff,0);
    memcpy(local_48,_Src,lVar5 * 2);
  }
  FUN_1410835a0(param_1 + 8,param_1 + 5,&local_48);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_48 = (void *)CONCAT71(local_48._1_7_,1);
  FUN_1410836a4();
  FUN_14108389e(param_1,local_60,&DAT_14cc0bfb8,&local_48);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_48 = (void *)((ulonglong)local_48 & 0xffffffffffffff00);
  FUN_141083722();
  FUN_1410837a0(param_1,local_78,&DAT_14cc0c018,&local_48);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1410835a0 FUN_1410835a0 body=159 status=ok
// SIG undefined FUN_1410835a0(void)

void FUN_1410835a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  void *_Src;
  longlong *plVar5;
  
  *param_1 = *param_2;
  plVar4 = (longlong *)param_2[1];
  plVar5 = (longlong *)param_1[1];
  if (plVar5 != plVar4) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = (longlong *)param_1[1];
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    param_1[1] = plVar4;
  }
  puVar2 = param_1 + 2;
  if (puVar2 != param_3) {
    iVar3 = *(int *)(param_3 + 1);
    _Src = (void *)*param_3;
    *(int *)(param_1 + 3) = iVar3;
    if (iVar3 == 0 && *(int *)((longlong)param_1 + 0x1c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    else {
      FUN_1446dd670(puVar2,iVar3);
      if (iVar3 != 0) {
        memcpy((void *)*puVar2,_Src,(longlong)iVar3 * 2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141083640 FUN_141083640 body=100 status=ok
// SIG undefined FUN_141083640(void)

undefined8 * FUN_141083640(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3dcccccd;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xf),4000);
  return param_1;
}



// FUNCTION 1410836a4 FUN_1410836a4 body=125 status=ok
// SIG undefined FUN_1410836a4(void)

undefined8 * FUN_1410836a4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0bfc8) {
    FUN_144b3d300(&DAT_14cc0bfc8);
    if (DAT_14cc0bfc8 == -1) {
      DAT_14cc0bfb8 = 0;
      uRam000000014cc0bfc0 = 0;
      FUN_14020fad6(&DAT_14cc0bfb8,L"__IS_NBLD_");
      atexit((_func_5014 *)&LAB_1444ba8ff);
      _Init_thread_footer(&DAT_14cc0bfc8);
    }
  }
  return &DAT_14cc0bfb8;
}



// FUNCTION 141083722 FUN_141083722 body=125 status=ok
// SIG undefined FUN_141083722(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141083722(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0c028) {
    FUN_144b3d300(&DAT_14cc0c028);
    if (DAT_14cc0c028 == -1) {
      DAT_14cc0c018 = 0;
      _DAT_14cc0c020 = 0;
      FUN_14020fad6(&DAT_14cc0c018,L"__Node_Container_Type_Key__");
      atexit((_func_5014 *)&LAB_1444ba943);
      _Init_thread_footer(&DAT_14cc0c028);
    }
  }
  return &DAT_14cc0c018;
}



// FUNCTION 1410837a0 FUN_1410837a0 body=250 status=ok
// SIG undefined FUN_1410837a0(void)

undefined8 *
FUN_1410837a0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_140c54a24(*(undefined8 *)(param_1 + 0x28),param_3,param_4,0);
  if ((uVar1 & 1) != 0) {
    FUN_1444be556(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar2 * 2);
  }
  FUN_140056680(local_48,L"RegisterAttribute");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14108389e FUN_14108389e body=250 status=ok
// SIG undefined FUN_14108389e(void)

undefined8 *
FUN_14108389e(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_14112c19a(*(undefined8 *)(param_1 + 0x28),param_3,param_4,0);
  if ((uVar1 & 1) != 0) {
    FUN_1444be324(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar2 * 2);
  }
  FUN_140056680(local_48,L"RegisterAttribute");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14108399b FUN_14108399b body=73 status=ok
// SIG undefined FUN_14108399b(void)

void FUN_14108399b(longlong param_1,int param_2)

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



// FUNCTION 1410839ec FUN_1410839ec body=147 status=ok
// SIG undefined FUN_1410839ec(void)

void FUN_1410839ec(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b3cd4d0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0x45eacbb4;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x5a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  param_1[0xe] = 0x40000000;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0x4000000043000000;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x12] = 0x441600003f800000;
  *(undefined4 *)(param_1 + 0x13) = 0x3d4ccccd;
  *(byte *)((longlong)param_1 + 0x8d) = *(byte *)((longlong)param_1 + 0x8d) & 0xfe;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x43480000;
  *(undefined4 *)(param_1 + 0xf) = 0x43480000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x43480000;
  return;
}



// FUNCTION 141083a7f FUN_141083a7f body=231 status=ok
// SIG undefined FUN_141083a7f(void)

void FUN_141083a7f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_141083b66(puVar1);
  *puVar1 = &PTR_FUN_14b0a8b60;
  puVar1[0x1e] = 0;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x104) = 0;
  puVar1[0x22] = 0;
  *(undefined4 *)(puVar1 + 0x23) = 0;
  puVar1[0x28] = 0;
  *(undefined4 *)(puVar1 + 0x29) = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x154) = 0;
  puVar1[0x2c] = 0;
  *(undefined4 *)(puVar1 + 0x2d) = 0;
  puVar1[0x32] = 0;
  *(undefined4 *)(puVar1 + 0x33) = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x19c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x1a4) = 0;
  puVar1[0x36] = 0;
  *(undefined4 *)(puVar1 + 0x37) = 0;
  puVar1[0x3c] = 0;
  *(undefined4 *)(puVar1 + 0x3d) = 0;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 500) = 0;
  puVar1[0x40] = 0;
  *(undefined4 *)(puVar1 + 0x41) = 0;
  return;
}



// FUNCTION 141083b66 FUN_141083b66 body=102 status=ok
// SIG undefined FUN_141083b66(void)

undefined8 * FUN_141083b66(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1402309ae(param_1,uVar1);
  *param_1 = &PTR_FUN_14ae31510;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
  param_1[0xe] = 0x3ff0000000000000;
  param_1[0xf] = 0x3ff0000000000000;
  param_1[0x10] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  return param_1;
}



// FUNCTION 141083bcc FUN_141083bcc body=9 status=ok
// SIG undefined FUN_141083bcc(void)

void FUN_141083bcc(longlong param_1)

{
  FUN_141083bd6(param_1 + 0x10);
  return;
}



// FUNCTION 141083bd6 FUN_141083bd6 body=332 status=ok
// SIG undefined FUN_141083bd6(void)

void FUN_141083bd6(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14afff0c0;
  plVar4 = param_1 + 0x21;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x25) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar4;
    if (0x18 < *(ushort *)(param_1 + 0x24)) {
      plVar3 = (longlong *)*plVar4;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x24)) {
    FUN_1400020a8(*plVar4);
  }
  plVar4 = (longlong *)param_1[0x1d];
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
  FUN_1403d9da7(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    plVar4 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar4 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  *param_1 = &PTR_FUN_14afff080;
  FUN_1403d9eef(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141083d30 FUN_141083d30 body=132 status=ok
// SIG undefined FUN_141083d30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141083d30(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141083db4 FUN_141083db4 body=387 status=ok
// SIG undefined FUN_141083db4(void)

void FUN_141083db4(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x5b0) == '\x01') {
    FUN_1410e95c4(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x558) = 0;
  if (*(int *)(param_1 + 0x55c) != 0) {
    FUN_140254dde(param_1 + 0x540,0);
  }
  *(undefined1 *)(param_1 + 0x538) = 0;
  *(undefined4 *)(param_1 + 0x580) = 0;
  if (*(int *)(param_1 + 0x584) != 0) {
    FUN_140254dde(param_1 + 0x568,0);
  }
  *(undefined1 *)(param_1 + 0x560) = 0;
  *(undefined4 *)(param_1 + 0x5a8) = 0;
  if (*(int *)(param_1 + 0x5ac) != 0) {
    FUN_140254dde(param_1 + 0x590,0);
  }
  *(undefined1 *)(param_1 + 0x588) = 0;
  *(undefined4 *)(param_1 + 0x5d0) = 0;
  if (*(int *)(param_1 + 0x5d4) != 0) {
    FUN_140254dde(param_1 + 0x5b8,0);
  }
  *(undefined1 *)(param_1 + 0x5b0) = 0;
  if (((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0x1c))) &&
       (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (*plVar2 != 0)))) {
      FUN_141083f38(*plVar2,param_1 + 0x30,CONCAT71((int7)((ulonglong)DAT_14c9647c8 >> 8),2));
    }
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x3c) < 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_146551c6e(param_1 + 0x30,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(param_1 + 0x2c) < 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    FUN_148a1b840(param_1 + 0x20);
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x510) = 0x7f7fffff;
  *(undefined1 *)(param_1 + 0x519) = 0;
  *(undefined8 *)(param_1 + 0x520) = 0;
  return;
}



// FUNCTION 141083f38 FUN_141083f38 body=373 status=ok
// SIG undefined FUN_141083f38(void)

void FUN_141083f38(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  iVar5 = *(int *)(param_1 + 0xbf0);
  if (0 < iVar5) {
    iVar9 = 0;
    uVar8 = 0;
    do {
      uVar7 = uVar8 & 0xff;
      if (((int)uVar7 < iVar5) &&
         (lVar1 = *(longlong *)
                   (*(longlong *)(param_1 + 0xbe8) + 8 +
                   (ulonglong)(uVar7 << 7) + (ulonglong)uVar7 * 8), lVar1 != 0)) {
        if (param_3 == '\x02') {
          lVar3 = param_2[1];
          if ((longlong)(int)lVar3 != 0) {
            lVar2 = *param_2;
            lVar6 = 0;
            do {
              if ((*(longlong *)(lVar2 + lVar6) != 0) &&
                 (cVar4 = FUN_14480f766(lVar1 + 0x70), cVar4 != '\0')) {
                *(undefined8 *)(lVar2 + lVar6) = 0;
                iVar9 = iVar9 + 1;
              }
              lVar6 = lVar6 + 8;
            } while ((longlong)(int)lVar3 * 8 != lVar6);
          }
        }
        else if (param_3 == '\x01') {
          lVar3 = param_2[1];
          if ((longlong)(int)lVar3 != 0) {
            lVar2 = *param_2;
            lVar6 = 0;
            do {
              if ((*(longlong *)(lVar2 + lVar6) != 0) &&
                 (cVar4 = FUN_14480f766(lVar1 + 0x88), cVar4 != '\0')) {
                *(undefined8 *)(lVar2 + lVar6) = 0;
                iVar9 = iVar9 + 1;
              }
              lVar6 = lVar6 + 8;
            } while ((longlong)(int)lVar3 * 8 != lVar6);
          }
        }
        else if ((param_3 == '\0') && (lVar3 = param_2[1], (longlong)(int)lVar3 != 0)) {
          lVar2 = *param_2;
          lVar6 = 0;
          do {
            if ((*(longlong *)(lVar2 + lVar6) != 0) &&
               (cVar4 = FUN_14480f766(lVar1 + 0x58), cVar4 != '\0')) {
              *(undefined8 *)(lVar2 + lVar6) = 0;
              iVar9 = iVar9 + 1;
            }
            lVar6 = lVar6 + 8;
          } while ((longlong)(int)lVar3 * 8 != lVar6);
        }
        if (iVar9 == (int)param_2[1]) {
          return;
        }
        iVar5 = *(int *)(param_1 + 0xbf0);
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar5);
  }
  return;
}



// FUNCTION 1410840ae FUN_1410840ae body=202 status=ok
// SIG undefined FUN_1410840ae(void)

undefined8 * FUN_1410840ae(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int local_60;
  undefined2 local_58 [2];
  undefined8 local_54;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_3 == 0) {
    *(undefined4 *)(param_2 + 1) = DAT_14c948620;
    *param_2 = DAT_14c948618;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
  }
  local_58[0] = 0xb;
  local_54 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_68 = *(undefined8 *)param_3;
  local_60 = param_3[2];
  FUN_144928d62(&local_48,0,&local_68);
  FUN_14108417c(param_1,param_2,local_58);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14108417c FUN_14108417c body=274 status=ok
// SIG undefined FUN_14108417c(void)

undefined8 * FUN_14108417c(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  int *piVar5;
  undefined1 auStack_78 [32];
  char local_58 [16];
  int local_48 [6];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_141084290(param_1,local_58);
  piVar5 = local_48;
  if (local_58[0] == '\v') {
LAB_1410841b8:
    bVar2 = false;
    lVar4 = 0;
  }
  else {
    if (local_58[0] == '\f') {
      lVar4 = 1;
    }
    else {
      if (local_58[0] != '\x01') {
        piVar5 = (int *)(param_3 + 0x10);
        goto LAB_1410841b8;
      }
      lVar4 = 4;
    }
    bVar2 = true;
  }
  if (((*piVar5 != 0) && (iVar1 = piVar5[1], iVar1 != 0)) && (*piVar5 != DAT_14c948000)) {
    if ((iVar1 < 2) && (piVar5[9] < 1)) {
      piVar5 = piVar5 + 2;
    }
    else {
      piVar5 = *(int **)(piVar5 + 6);
    }
    if ((!bVar2 || iVar1 != 1) && ((int)lVar4 < iVar1)) {
      *(int *)(param_2 + 1) = piVar5[lVar4 * 3 + 2];
      uVar3 = *(undefined8 *)(piVar5 + lVar4 * 3);
      goto LAB_141084216;
    }
  }
  *(undefined4 *)(param_2 + 1) = DAT_14c948620;
  uVar3 = DAT_14c948618;
LAB_141084216:
  *param_2 = uVar3;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141084290 FUN_141084290 body=261 status=ok
// SIG undefined FUN_141084290(void)

undefined8 * FUN_141084290(longlong *param_1,undefined8 *param_2,char *param_3)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 == '\v') {
    if ((((*(int *)(param_3 + 0x10) == 0) || (iVar1 = *(int *)(param_3 + 0x14), iVar1 == 0)) ||
        (*(int *)(param_3 + 0x10) == DAT_14c948000)) || (iVar1 < 1)) {
      local_20 = DAT_14c948620;
      local_28 = DAT_14c948618;
    }
    else {
      pcVar3 = param_3 + 0x18;
      if (0 < *(int *)(param_3 + 0x34)) {
        pcVar3 = *(char **)(param_3 + 0x28);
      }
      if (iVar1 != 1) {
        pcVar3 = *(char **)(param_3 + 0x28);
      }
      local_20 = *(undefined4 *)(pcVar3 + 8);
      local_28 = *(undefined8 *)pcVar3;
    }
    lVar2 = (**(code **)(*param_1 + 0x60))(param_1,&local_28);
    if (lVar2 != 0) {
      FUN_14096c63a(lVar2 + 0x10,param_2);
      FUN_140b7a557(param_2,param_3);
      goto LAB_14108432f;
    }
  }
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = *(undefined8 *)param_3;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 8);
  FUN_1447715ec(param_2 + 2,param_3 + 0x10);
LAB_14108432f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410843a4 FUN_1410843a4 body=64 status=ok
// SIG undefined FUN_1410843a4(void)

undefined8 * FUN_1410843a4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410843e4 FUN_1410843e4 body=1 status=ok
// SIG undefined FUN_1410843e4(void)

void FUN_1410843e4(void)

{
  return;
}



// FUNCTION 1410843e6 FUN_1410843e6 body=330 status=ok
// SIG undefined FUN_1410843e6(void)

void FUN_1410843e6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = (uint)((ulonglong)param_2 >> 0x10);
  uVar4 = (uint)param_2 & 0xffff;
  uVar4 = (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar4) +
          (uVar4 >> 4) + (uVar1 << 0x13 | uVar1 & 0xffff);
  uVar1 = (uint)((ulonglong)param_3 >> 0x10);
  uVar5 = (uint)param_3 & 0xffff;
  local_28 = param_2;
  local_20 = param_3;
  plVar2 = (longlong *)
           FUN_141084532(param_1 + 0x740,
                         uVar4 ^ ((uint)param_3 << 0x10 | uVar5) + (int)((ulonglong)param_3 >> 0x20)
                                 + (uVar5 >> 4) + (uVar1 << 0x13 | uVar1 & 0xffff) + uVar4 * 0x40 +
                                 (uVar4 >> 2) + 0x9e3779b9,&local_28);
  if (*plVar2 == 0) {
    lVar3 = FUN_14001cc68(0xb8,0x10);
    *(undefined4 *)(lVar3 + 0x70) = 0;
    *(undefined8 *)(lVar3 + 0x98) = 0;
    *(undefined4 *)(lVar3 + 0xa0) = 0;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    *(undefined8 *)(lVar3 + 0x1c) = 0;
    *(undefined8 *)(lVar3 + 0x24) = 0;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    *(undefined8 *)(lVar3 + 0x38) = 0;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    *(undefined8 *)(lVar3 + 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x50) = 0;
    *(undefined8 *)(lVar3 + 0x58) = 0;
    *(undefined8 *)(lVar3 + 0x5c) = 0;
    *(undefined8 *)(lVar3 + 100) = 0;
    *(undefined8 *)(lVar3 + 0x78) = 0;
    *(undefined8 *)(lVar3 + 0x80) = 0;
    *(undefined8 *)(lVar3 + 0xa4) = 0xffffffff00000002;
    *(undefined4 *)(lVar3 + 0xac) = 0xffffffff;
    *(undefined1 *)(lVar3 + 0xb0) = 0;
    *(undefined8 **)(lVar3 + 8) = &DAT_14cb3db48;
    *plVar2 = lVar3;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141084532 FUN_141084532 body=129 status=ok
// SIG undefined FUN_141084532(void)

longlong FUN_141084532(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1410845b4();
  if (lVar1 == 0) {
    local_38 = 0;
    local_30 = param_3;
    FUN_141084616(param_1,&local_24,param_2);
    lVar1 = (longlong)local_24 * 0x20 + *param_1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 0x10;
}



// FUNCTION 1410845b4 FUN_1410845b4 body=98 status=ok
// SIG undefined FUN_1410845b4(void)

longlong FUN_1410845b4(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      while( true ) {
        lVar4 = (longlong)iVar3 * 0x20;
        if ((*(longlong *)(lVar1 + lVar4) == *param_3) &&
           (*(longlong *)(lVar1 + 8 + lVar4) == param_3[1])) break;
        iVar3 = *(int *)(lVar1 + lVar4 + 0x18);
        if (iVar3 == -1) {
          return 0;
        }
      }
      return lVar1 + lVar4;
    }
  }
  return 0;
}



// FUNCTION 141084616 FUN_141084616 body=845 status=ok
// SIG undefined FUN_141084616(void)

int * FUN_141084616(longlong *param_1,int *param_2,uint param_3,longlong *param_4,char *param_5)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  char cVar15;
  int iVar16;
  longlong *plVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar18 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar18 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar18) {
      FUN_1447711aa(param_1,iVar18);
    }
    iVar16 = (int)param_1[5];
    if (iVar16 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar7 = iVar16 + -1;
      }
      iVar7 = iVar7 >> 5;
    }
    plVar17 = param_1 + 2;
    iVar12 = iVar16 + 1;
    iVar20 = iVar16 + 0x1f;
    if (-1 < iVar16) {
      iVar20 = iVar16;
    }
    if (iVar20 >> 5 == iVar7) {
      *(int *)(param_1 + 5) = iVar12;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar16) {
        if (iVar16 + 0x20U < 0xa0) {
          iVar12 = 0x80;
          iVar7 = iVar16;
        }
        else {
          uVar8 = iVar16 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar13 = 4;
            if (4 < uVar8) {
              uVar13 = uVar8;
            }
          }
          else {
            uVar13 = (uVar8 * 3 >> 3) + uVar8 + 0x10;
          }
          uVar14 = FUN_144a3809e(uVar13 << 2,0);
          iVar7 = (int)(uVar14 >> 2);
          iVar12 = -0x20;
          if ((int)uVar8 <= iVar7) {
            iVar12 = iVar7 << 5;
          }
          iVar7 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar12;
        FUN_1446efbd8(plVar17,iVar7);
        iVar12 = (int)param_1[5] + 1;
      }
      iVar7 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar7 = iVar12;
      }
      *(int *)(param_1 + 5) = iVar12;
      if (iVar12 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar17;
        }
        bVar11 = -(char)(iVar12 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar7 >> 5) * 4) << (bVar11 & 0x1f)) >>
             (bVar11 & 0x1f);
      }
    }
    lVar9 = (longlong)iVar18;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar17 = (longlong *)param_1[4];
    }
    bVar11 = (byte)iVar16 & 0x1f;
    puVar1 = (uint *)((longlong)plVar17 + (longlong)(iVar20 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
  }
  else {
    iVar18 = (int)param_1[6];
    lVar9 = (longlong)iVar18;
    iVar16 = *(int *)(*param_1 + 4 + lVar9 * 0x20);
    *(int *)(param_1 + 6) = iVar16;
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar16 * 0x20) = 0xffffffff;
    }
  }
  plVar17 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar17 = (longlong *)param_1[4];
  }
  iVar16 = iVar18 + 0x1f;
  if (-1 < iVar18) {
    iVar16 = iVar18;
  }
  puVar1 = (uint *)((longlong)plVar17 + (longlong)(iVar16 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar18 & 0x1f);
  lVar19 = *param_1;
  lVar9 = lVar9 * 0x20;
  plVar17 = (longlong *)(lVar19 + lVar9);
  puVar3 = (undefined4 *)*param_4;
  uVar4 = puVar3[1];
  uVar5 = puVar3[2];
  uVar6 = puVar3[3];
  puVar2 = (undefined4 *)(lVar19 + lVar9);
  *puVar2 = *puVar3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  *(undefined8 *)(lVar19 + 0x10 + lVar9) = 0;
  *(undefined4 *)(lVar19 + 0x18 + lVar9) = 0xffffffff;
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar16 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
    if (iVar16 != -1) {
      lVar9 = *param_1;
      do {
        lVar19 = (longlong)iVar16 * 0x20;
        puVar2 = (undefined4 *)(lVar9 + lVar19);
        if ((*(longlong *)(lVar9 + lVar19) == *plVar17) &&
           (*(longlong *)(lVar9 + 8 + lVar19) == plVar17[1])) {
          lVar9 = *plVar17;
          uVar4 = *(undefined4 *)((longlong)plVar17 + 4);
          lVar19 = plVar17[1];
          uVar5 = *(undefined4 *)((longlong)plVar17 + 0xc);
          *(longlong *)(puVar2 + 4) = plVar17[2];
          *puVar2 = (int)lVar9;
          puVar2[1] = uVar4;
          puVar2[2] = (int)lVar19;
          puVar2[3] = uVar5;
          FUN_1481f7fd2(param_1,iVar18);
          cVar15 = '\x01';
          break;
        }
        iVar16 = puVar2[6];
        cVar15 = '\0';
      } while (iVar16 != -1);
      goto LAB_141084729;
    }
  }
  cVar15 = '\0';
LAB_141084729:
  if (param_5 != (char *)0x0) {
    *param_5 = cVar15;
  }
  if (cVar15 == '\0') {
    uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    iVar16 = 1;
    if (3 < uVar8) {
      uVar14 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar16 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar16 <= (int)param_1[9])) {
      param_3 = (int)param_1[9] - 1U & param_3;
      *(uint *)((longlong)plVar17 + 0x1c) = param_3;
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      *(undefined4 *)(plVar17 + 3) =
           *(undefined4 *)
            ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4);
      plVar17 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar17 = param_1 + 7;
      }
      *(int *)((longlong)plVar17 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
           iVar18;
    }
    else {
      *(int *)(param_1 + 9) = iVar16;
      FUN_141084964(param_1);
    }
  }
  *param_2 = iVar18;
  return param_2;
}



// FUNCTION 141084964 FUN_141084964 body=787 status=ok
// SIG undefined FUN_141084964(void)

void FUN_141084964(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  ulonglong uVar18;
  uint uVar19;
  
  plVar7 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar7,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 == 1) {
    if (*plVar7 != 0) {
      FUN_1446efa72(plVar7,0,0,4);
    }
  }
  else {
    if (uVar14 == 0) {
      return;
    }
    FUN_1446efa72(plVar7,0,uVar14,4);
    if ((int)uVar14 < 1) goto LAB_1410849ca;
  }
  uVar4 = 0;
  do {
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = plVar1;
    }
    *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
         0xffffffff;
    uVar4 = uVar4 + 1;
  } while (uVar14 != uVar4);
LAB_1410849ca:
  iVar12 = (int)param_1[5];
  if (iVar12 == 0) {
    uVar5 = 0;
    uVar18 = 1;
    iVar8 = 0;
    iVar6 = 0;
  }
  else {
    puVar17 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar17 = (uint *)(param_1 + 2);
    }
    uVar14 = *puVar17;
    if (uVar14 == 0) {
      iVar8 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar8 = iVar12 + -1;
      }
      uVar5 = 0;
      uVar18 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar18 = uVar5;
      }
      iVar6 = 0;
      do {
        if (uVar18 == uVar5) {
          return;
        }
        iVar6 = iVar6 + 0x20;
        uVar14 = puVar17[uVar5 + 1];
        uVar5 = uVar5 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar5 = 0;
      iVar6 = 0;
    }
    uVar18 = (ulonglong)(-uVar14 & uVar14);
    uVar13 = uVar18 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar8 = (iVar6 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar12 <= iVar8) {
      iVar8 = iVar12;
    }
  }
  if (iVar8 < iVar12) {
    uVar14 = 0xffffffff;
    do {
      lVar10 = *param_1;
      lVar9 = (longlong)iVar8 * 0x20;
      uVar2 = *(undefined8 *)(lVar10 + lVar9);
      uVar3 = *(undefined8 *)(lVar10 + 8 + lVar9);
      uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar11 = (uint)uVar2 & 0xffff;
      uVar19 = ((uint)uVar2 << 0x10 | uVar11) + (int)((ulonglong)uVar2 >> 0x20) +
               (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar11 >> 4);
      uVar4 = (uint)((ulonglong)uVar3 >> 0x10);
      uVar11 = (uint)uVar3 & 0xffff;
      uVar13 = (longlong)
               (int)((uVar19 >> 2) +
                     ((uint)uVar3 << 0x10 | uVar11) + (int)((ulonglong)uVar3 >> 0x20) +
                     (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar11 >> 4) + uVar19 * 0x40 + 0x9e3779b9 ^
                    uVar19) & (longlong)(int)param_1[9] - 1U;
      iVar12 = (int)uVar13;
      *(int *)(lVar10 + 0x1c + lVar9) = iVar12;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined4 *)(lVar10 + 0x18 + lVar9) =
           *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar8;
      uVar14 = ~(uint)uVar18 & uVar14;
      puVar17 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar17 = (uint *)(param_1 + 2);
      }
      iVar12 = (int)param_1[5];
      iVar8 = (int)uVar5;
      lVar10 = (longlong)iVar8;
      uVar4 = puVar17[lVar10] & uVar14;
      if (uVar4 == 0) {
        iVar15 = iVar12 + 0x1e;
        if (-1 < iVar12 + -1) {
          iVar15 = iVar12 + -1;
        }
        iVar15 = iVar15 >> 5;
        iVar16 = iVar15;
        if (iVar15 < iVar8) {
          iVar16 = iVar8;
        }
        if (iVar15 <= iVar8) {
          return;
        }
        lVar9 = 0;
        while( true ) {
          iVar6 = iVar6 + 0x20;
          uVar4 = puVar17[lVar10 + lVar9 + 1];
          if (uVar4 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar16 - lVar10 == lVar9) {
            return;
          }
        }
        uVar5 = (ulonglong)(iVar8 + (int)lVar9 + 1);
        uVar14 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-uVar4 & uVar4);
      uVar13 = uVar18 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar8 = (iVar6 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar12);
  }
  return;
}



// FUNCTION 141084c78 FUN_141084c78 body=139 status=ok
// SIG undefined FUN_141084c78(void)

void FUN_141084c78(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 **local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_141084d04();
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x1238) + 0x10))(param_1 + 0x1238);
  local_40 = &local_20;
  local_20 = 0;
  local_28 = &local_40;
  local_30 = FUN_142b51bba;
  local_38 = param_2;
  FUN_1408d6bd2(uVar1,DAT_14c9abbf8);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141084d04 FUN_141084d04 body=271 status=ok
// SIG undefined FUN_141084d04(void)

void FUN_141084d04(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [104];
  undefined8 local_70;
  undefined1 *local_68;
  code *local_60;
  undefined8 *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar1 = *(int *)(param_1 + 0xce0);
  if (((longlong)iVar1 != -1) && (iVar1 < *(int *)(param_1 + 0xd78))) {
    FUN_1447f067c(*(undefined8 *)(*(longlong *)(param_1 + 0xd70) + (longlong)iVar1 * 8),local_d8,1,0
                 );
    if (0 < *(int *)(param_1 + 0xd78)) {
      lVar2 = 0;
      do {
        local_60 = FUN_143622336;
        local_70 = param_2;
        local_68 = &local_49;
        local_58 = &local_70;
        local_49 = param_3;
        FUN_144966906(*(longlong *)(*(longlong *)(param_1 + 0xd70) + lVar2 * 8) + 0x138,&local_60);
        lVar2 = lVar2 + 1;
      } while (lVar2 < *(int *)(param_1 + 0xd78));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141084e22 FUN_141084e22 body=40 status=ok
// SIG undefined FUN_141084e22(void)

undefined8 FUN_141084e22(undefined8 param_1,int param_2)

{
  FUN_141084e4a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141084e4a FUN_141084e4a body=409 status=ok
// SIG undefined FUN_141084e4a(void)

void FUN_141084e4a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a43cb70;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  param_1[0x2c] = &DAT_14a176f00;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  param_1[0x2c] = &PTR_FUN_14a177080;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if (*(int *)((longlong)param_1 + 0x174) != 0) {
    FUN_14472eb64(param_1 + 0x2d,0);
  }
  param_1[0x33] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x32) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x194)) {
    *(undefined4 *)((longlong)param_1 + 0x194) = 0x80;
    FUN_1446efbd8(param_1 + 0x2f,0);
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141084fe4 FUN_141084fe4 body=40 status=ok
// SIG undefined FUN_141084fe4(void)

undefined8 FUN_141084fe4(undefined8 param_1,int param_2)

{
  FUN_14108500c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14108500c FUN_14108500c body=231 status=ok
// SIG undefined FUN_14108500c(void)

void FUN_14108500c(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0aff90;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x13;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x17) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x16)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x16)) {
    FUN_1400020a8(*plVar1);
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 7;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xb) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 10)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 10)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1410850f4 FUN_1410850f4 body=290 status=ok
// SIG undefined FUN_1410850f4(void)

undefined4 *
FUN_1410850f4(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  int *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_141085336(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  iVar4 = *(int *)*param_3;
  *local_48 = iVar4;
  *(undefined8 *)(local_48 + 2) = *puVar1;
  local_48[4] = -1;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar3 = FUN_14108528c(param_1,iVar4,local_48);
  uVar2 = local_54;
  if (cVar3 == '\0') {
    cVar3 = FUN_141085218(param_1,*(int *)(param_1 + 0x1808) - *(int *)(param_1 + 0x1844),0);
    if (cVar3 == '\0') {
      uVar5 = (longlong)*(int *)(param_1 + 0x1a50) - 1U & (longlong)iVar4;
      iVar4 = (int)uVar5;
      local_48[5] = iVar4;
      lVar6 = *(longlong *)(param_1 + 0x1a48);
      if (*(longlong *)(param_1 + 0x1a48) == 0) {
        lVar6 = param_1 + 0x1848;
      }
      local_48[4] = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x1a50) - 1U & uVar5) * 4);
      lVar6 = *(longlong *)(param_1 + 0x1a48);
      if (*(longlong *)(param_1 + 0x1a48) == 0) {
        lVar6 = param_1 + 0x1848;
      }
      *(undefined4 *)(lVar6 + ((longlong)iVar4 & (longlong)*(int *)(param_1 + 0x1a50) - 1U) * 4) =
           uVar2;
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141085218 FUN_141085218 body=115 status=ok
// SIG undefined FUN_141085218(void)

undefined8 FUN_141085218(longlong param_1,uint param_2,char param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar1 = (ulonglong)(((param_2 >> 1) - 1) + (uint)(param_2 >> 1 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar4 = 1 << ((byte)lVar2 & 0x1f);
  if ((uint)lVar2 < 7) {
    iVar4 = 0x80;
  }
  if (param_2 < 4) {
    iVar4 = 0x80;
  }
  if ((((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0x1a50))) &&
     ((param_3 != '\x01' || (*(int *)(param_1 + 0x1a50) <= iVar4)))) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0x1a50) = iVar4;
    FUN_141085464(param_1);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 14108528c FUN_14108528c body=170 status=ok
// SIG undefined FUN_14108528c(void)

void FUN_14108528c(longlong param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  longlong lVar7;
  int iVar8;
  
  if ((*(int *)(param_1 + 0x1808) - *(int *)(param_1 + 0x1844) != 1) &&
     (*(int *)(param_1 + 0x1808) != *(int *)(param_1 + 0x1844))) {
    lVar7 = param_1 + 0x1848;
    if (*(longlong *)(param_1 + 0x1a48) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x1a48);
    }
    iVar8 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x1a50) - 1U & param_2) * 4);
    if (iVar8 != -1) {
      lVar7 = *(longlong *)(param_1 + 0x1800);
      if (*(longlong *)(param_1 + 0x1800) == 0) {
        lVar7 = param_1;
      }
      do {
        piVar1 = (int *)(lVar7 + (longlong)iVar8 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1459af472(iVar2,*param_4);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_141085310;
        }
        iVar8 = piVar1[4];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_141085310:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 141085336 FUN_141085336 body=302 status=ok
// SIG undefined FUN_141085336(void)

int * FUN_141085336(longlong param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0x1844) == 0) {
    iVar6 = *(int *)(param_1 + 0x1808);
    *(int *)(param_1 + 0x1808) = iVar6 + 1;
    if (*(int *)(param_1 + 0x180c) == iVar6) {
      FUN_145be01b0(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_14013140c(param_1 + 0x1810,1);
    lVar5 = *(longlong *)(param_1 + 0x1830);
    if (*(longlong *)(param_1 + 0x1830) == 0) {
      lVar5 = param_1 + 0x1810;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x1800);
    if (*(longlong *)(param_1 + 0x1800) == 0) {
      lVar5 = param_1;
    }
    iVar6 = *(int *)(param_1 + 0x1840);
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(lVar5 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 0x1840) = iVar3;
    iVar4 = *(int *)(param_1 + 0x1844) + -1;
    *(int *)(param_1 + 0x1844) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  lVar5 = param_1 + 0x1810;
  if (*(longlong *)(param_1 + 0x1830) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x1830);
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)(lVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  lVar5 = *(longlong *)(param_1 + 0x1800);
  if (*(longlong *)(param_1 + 0x1800) == 0) {
    lVar5 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar5 + lVar7 * 0x18;
  return param_2;
}



// FUNCTION 141085464 FUN_141085464 body=482 status=ok
// SIG undefined FUN_141085464(void)

void FUN_141085464(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x1a48) != 0) {
    FUN_1446efa72(param_1 + 0x1a48,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 0x1a50);
  uVar3 = local_58;
  if (uVar2 != 0) {
    lVar1 = param_1 + 0x1848;
    uVar7 = 0;
    FUN_145eec79a(lVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x1a48);
        if (*(longlong *)(param_1 + 0x1a48) == 0) {
          lVar6 = lVar1;
        }
        *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x1a50) + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = param_1 + 0x1810;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x1838) != 0) {
      FUN_144a844ac(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < *(int *)(local_40 + 0x28)) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar6 = *(longlong *)(local_70 + 0x1800);
        if (*(longlong *)(local_70 + 0x1800) == 0) {
          lVar6 = local_70;
        }
        lVar5 = (longlong)iVar4;
        uVar10 = (longlong)*(int *)(param_1 + 0x1a50) - 1U &
                 (longlong)*(int *)(lVar6 + lVar5 * 0x18);
        iVar9 = (int)uVar10;
        *(int *)(lVar6 + 0x14 + lVar5 * 0x18) = iVar9;
        lVar8 = *(longlong *)(param_1 + 0x1a48);
        if (*(longlong *)(param_1 + 0x1a48) == 0) {
          lVar8 = lVar1;
        }
        *(undefined4 *)(lVar6 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x1a50) - 1U & uVar10) * 4);
        lVar6 = *(longlong *)(param_1 + 0x1a48);
        if (*(longlong *)(param_1 + 0x1a48) == 0) {
          lVar6 = lVar1;
        }
        *(int *)(lVar6 + ((longlong)iVar9 & (longlong)*(int *)(param_1 + 0x1a50) - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_144a844ac(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < *(int *)(local_60 + 0x28));
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14108565c FUN_14108565c body=137 status=ok
// SIG undefined FUN_14108565c(void)

undefined8 * FUN_14108565c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149e12c10;
  plVar1 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_141085684;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_141085684:
  *param_1 = &PTR_LAB_149e12740;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410856e6 FUN_1410856e6 body=95 status=ok
// SIG undefined FUN_1410856e6(void)

ulonglong FUN_1410856e6(longlong param_1)

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
LAB_141085728:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_141085728;
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



// FUNCTION 141085762 FUN_141085762 body=109 status=ok
// SIG undefined FUN_141085762(void)

void FUN_141085762(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1410857d0();
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x160) == '\x01')) {
    *(undefined1 *)(param_1 + 0x160) = 0;
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      FUN_14480f766(lVar1 + 0x90);
    }
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      FUN_14480f766(lVar1 + 0xa8);
    }
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 1410857d0 FUN_1410857d0 body=653 status=ok
// SIG undefined FUN_1410857d0(void)

undefined8 FUN_1410857d0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  
  puVar1 = (uint *)(param_1 + 0x98);
  if ((((((*(int *)(param_1 + 0x9c) == 0) || (uVar2 = *puVar1, (int)uVar2 < 0)) ||
        (DAT_14c9647dc <= (int)uVar2)) ||
       ((lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar11 == 0 ||
        (*(int *)(lVar11 + 0x10) != *(int *)(param_1 + 0x9c))))) ||
      ((*(uint *)(lVar11 + 8) & 0x10200000) != 0)) &&
     (plVar5 = (longlong *)FUN_14479d2ce(param_1 + 0x70), plVar5 != (longlong *)0x0)) {
    uVar6 = FUN_140f5697c();
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar6);
    if (plVar5 != (longlong *)0x0) {
      uVar6 = FUN_140f5697c();
      plVar7 = (longlong *)FUN_144718840(plVar5,uVar6);
      if ((plVar5 != plVar7) && (plVar7 != (longlong *)0x0)) {
        lVar11 = *(longlong *)(param_1 + 0x58);
        lVar8 = *(longlong *)(lVar11 + 0xb0);
        if (lVar8 == 0) {
          uVar6 = FUN_140e2014e();
          lVar8 = FUN_14477b664(uVar6);
          *(longlong *)(lVar11 + 0xb0) = lVar8;
        }
        if (*(longlong *)(lVar11 + 0xb8) == 0) {
          if ((lVar8 == 0) || (*(longlong *)(lVar11 + 0xa8) == 0)) goto LAB_141085834;
          plVar5 = *(longlong **)(lVar8 + 0xb8);
          if ((plVar5 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar3 == '\0')) {
            *(undefined8 *)(lVar11 + 0xb8) = 0;
            goto LAB_141085834;
          }
          uVar6 = (**(code **)(*plVar5 + 0x110))(plVar5);
          lVar8 = FUN_144aff482(uVar6,(longlong *)(lVar11 + 0xa8));
          *(longlong *)(lVar11 + 0xb8) = lVar8;
          if (lVar8 == 0) goto LAB_141085834;
        }
        uVar6 = (**(code **)(*plVar7 + 0x10))(plVar7);
        lVar11 = *(longlong *)(param_1 + 0x58);
        lVar8 = *(longlong *)(lVar11 + 0xb0);
        if (lVar8 == 0) {
          uVar9 = FUN_140e2014e();
          lVar8 = FUN_14477b664(uVar9);
          *(longlong *)(lVar11 + 0xb0) = lVar8;
        }
        lVar10 = *(longlong *)(lVar11 + 0xb8);
        if (((lVar10 == 0) && (lVar10 = 0, lVar8 != 0)) && (*(longlong *)(lVar11 + 0xa8) != 0)) {
          plVar5 = *(longlong **)(lVar8 + 0xb8);
          if ((plVar5 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar3 == '\0')) {
            lVar10 = 0;
          }
          else {
            uVar9 = (**(code **)(*plVar5 + 0x110))(plVar5);
            lVar10 = FUN_144aff482(uVar9,(longlong *)(lVar11 + 0xa8));
          }
          *(longlong *)(lVar11 + 0xb8) = lVar10;
        }
        uVar6 = FUN_141085a5e(uVar6,lVar10,0);
        FUN_14485c47a(puVar1,uVar6);
      }
    }
  }
LAB_141085834:
  if (*(int *)(param_1 + 0x9c) != 0) {
    uVar2 = *puVar1;
    if ((int)uVar2 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar2) {
      return 0;
    }
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((puVar4 != (undefined8 *)0x0) && (*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x9c))) &&
       ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)) {
      return *puVar4;
    }
  }
  return 0;
}



// FUNCTION 141085a5e FUN_141085a5e body=119 status=ok
// SIG undefined FUN_141085a5e(void)

longlong FUN_141085a5e(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xb0);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if ((lVar3 != 0) && (lVar4 = FUN_1401cd362(lVar3), lVar4 == param_2)) {
        if (param_3 == 0) {
          return lVar3;
        }
        lVar4 = FUN_1457ee3be(lVar3);
        if (lVar4 == param_3) {
          return lVar3;
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return 0;
}



// FUNCTION 141085ad6 FUN_141085ad6 body=397 status=ok
// SIG undefined FUN_141085ad6(void)

void FUN_141085ad6(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x160) != '\0') goto LAB_141085bc1;
  lVar1 = FUN_1410857d0();
  if (lVar1 == 0) goto LAB_141085bc1;
  *(undefined1 *)(param_1 + 0x160) = 1;
  FUN_141085e00(&local_38,param_1,&LAB_145ec1ccc);
  FUN_141085c64(lVar1 + 0x90,&local_40,&local_38);
  if (local_30 == 0) {
LAB_141085b4f:
    if (local_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
    goto LAB_141085b4f;
  }
  *(undefined8 *)(param_1 + 0xa0) = local_40;
  FUN_141085e00(&local_38,param_1,&LAB_148dcf962);
  FUN_141085c64(lVar1 + 0xa8,&local_40,&local_38);
  if (local_30 == 0) {
LAB_141085b9f:
    if (local_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
    goto LAB_141085b9f;
  }
  *(undefined8 *)(param_1 + 0xa8) = local_40;
  FUN_141086048(param_1);
LAB_141085bc1:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141085c64 FUN_141085c64 body=370 status=ok
// SIG undefined FUN_141085c64(void)

undefined8 * FUN_141085c64(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141085e00 FUN_141085e00 body=477 status=ok
// SIG undefined FUN_141085e00(void)

longlong * FUN_141085e00(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar4 = (undefined8 *)*param_1;
  FUN_141085fe4(param_2,&local_40);
  plVar2 = local_38;
  if (local_38 == (longlong *)0x0) {
    *puVar4 = &PTR_LAB_14b99aa80;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b99aa10;
    puVar4[3] = local_40;
    puVar4[4] = 0;
    puVar4[5] = param_3;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    *puVar4 = &PTR_LAB_14b99aa80;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b99aa10;
    puVar4[3] = local_40;
    puVar4[4] = local_38;
    LOCK();
    *(int *)((longlong)local_38 + 0xc) = *(int *)((longlong)local_38 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = param_3;
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)local_38 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141085fe4 FUN_141085fe4 body=99 status=ok
// SIG undefined FUN_141085fe4(void)

undefined8 * FUN_141085fe4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
LAB_141086026:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_141086026;
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
    *param_2 = *(undefined8 *)(param_1 + 0x20);
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



// FUNCTION 141086048 FUN_141086048 body=679 status=ok
// SIG undefined FUN_141086048(void)

void FUN_141086048(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((((*(int *)((longlong)param_1 + 0x7c) == 0) ||
         (uVar10 = *(uint *)(param_1 + 0xf), (int)uVar10 < 0)) || (DAT_14c9647dc <= (int)uVar10)) ||
       ((plVar4 = (longlong *)
                  ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
        plVar4 == (longlong *)0x0 || ((int)plVar4[2] != *(int *)((longlong)param_1 + 0x7c))))) ||
      (((*(uint *)(plVar4 + 1) & 0x10200000) != 0 ||
       ((*plVar4 == 0 || (cVar3 = FUN_1403ca7ae(), cVar3 == '\0')))))) &&
     ((*(int *)((longlong)param_1 + 0x9c) != 0 &&
      ((((uVar10 = *(uint *)(param_1 + 0x13), -1 < (int)uVar10 && ((int)uVar10 < DAT_14c9647dc)) &&
        (plVar4 = (longlong *)
                  ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
        plVar4 != (longlong *)0x0)) &&
       ((((int)plVar4[2] == *(int *)((longlong)param_1 + 0x9c) &&
         ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) &&
        ((lVar6 = *plVar4, lVar6 != 0 && (lVar9 = param_1[0xb], lVar9 != 0)))))))))) {
    local_58 = 0;
    uStack_50 = 0;
    lVar1 = lVar9 + 0xa8;
    local_68 = 0;
    uStack_60 = 0;
    if ((longlong)*(int *)(lVar6 + 0x140) != 0) {
      lVar5 = *(longlong *)(lVar6 + 0x138);
      lVar6 = (longlong)*(int *)(lVar6 + 0x140) * 0xa8 + lVar5;
      do {
        cVar3 = FUN_1410862f0(lVar5);
        if (cVar3 != '\0') {
          iVar8 = *(int *)(lVar9 + 200);
          if ((longlong)iVar8 != 0) {
            lVar7 = 0;
            uVar10 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar9 + 0xc0) + 4 + lVar7) ==
                  *(longlong *)(lVar5 + 0x48)) {
                if (((int)uVar10 < 0) || (iVar8 <= (int)uVar10)) break;
                cVar3 = *(char *)(*(longlong *)(lVar9 + 0xc0) +
                                 (ulonglong)(uVar10 & 0x7fffffff) * 0x40);
                if (cVar3 == '\x01') {
                  iVar8 = (int)uStack_60;
                  uVar2 = (int)uStack_60 + 1;
                  uStack_60 = CONCAT44(uStack_60._4_4_,uVar2);
                  if (uStack_60._4_4_ < uVar2) {
                    plVar4 = &local_68;
LAB_141086223:
                    FUN_1446f48e2(plVar4,iVar8);
                  }
                  else {
                    plVar4 = &local_68;
                  }
                }
                else {
                  if (cVar3 != '\0') break;
                  iVar8 = (int)uStack_50;
                  uVar2 = (int)uStack_50 + 1;
                  uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
                  if (uStack_50._4_4_ < uVar2) {
                    plVar4 = &local_58;
                    goto LAB_141086223;
                  }
                  plVar4 = &local_58;
                }
                *(uint *)(*plVar4 + (longlong)iVar8 * 4) = uVar10;
                break;
              }
              uVar10 = uVar10 + 1;
              lVar7 = lVar7 + 0x40;
            } while ((longlong)iVar8 << 6 != lVar7);
          }
        }
        lVar5 = lVar5 + 0xa8;
      } while (lVar5 != lVar6);
      lVar9 = param_1[0xb];
    }
    local_78 = lVar9 + 0x118;
    FUN_14108635e(param_1,lVar1,param_1 + 0x16,&local_58);
    local_78 = param_1[0xb] + 0x130;
    FUN_14108635e(param_1,lVar1,param_1 + 0x18,&local_68);
    (**(code **)(*param_1 + 0x88))(param_1);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410862f0 FUN_1410862f0 body=109 status=ok
// SIG undefined FUN_1410862f0(void)

undefined8 FUN_1410862f0(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x5c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x58);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0x5c))) &&
       ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar2;
      }
      else {
        lVar3 = 0;
      }
      if (*(char *)(lVar3 + 0x180) == '\x01') {
        return CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(param_1 + 0x91));
      }
    }
  }
  return 0;
}



// FUNCTION 14108635e FUN_14108635e body=931 status=ok
// SIG undefined FUN_14108635e(void)

void FUN_14108635e(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  int *piVar19;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  int *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((((*(int *)(param_1 + 0x84) == 0) || (uVar1 = *(uint *)(param_1 + 0x80), (int)uVar1 < 0)) ||
      (DAT_14c9647dc <= (int)uVar1)) ||
     (((lVar16 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar16 == 0 ||
       (*(int *)(lVar16 + 0x10) != *(int *)(param_1 + 0x84))) ||
      ((*(uint *)(lVar16 + 8) & 0x10200000) != 0)))) goto LAB_1410865e1;
  local_70 = param_1;
  local_68 = param_2;
  local_60 = param_1;
  if ((longlong)(int)param_4[1] != 0) {
    piVar19 = (int *)*param_4;
    piVar12 = piVar19 + (int)param_4[1];
    do {
      iVar10 = *piVar19;
      iVar2 = (int)param_3[1];
      lVar16 = (longlong)iVar2;
      if (lVar16 != 0) {
        piVar3 = (int *)*param_3;
        lVar17 = 0;
LAB_141086439:
        local_88 = piVar12;
        local_80 = param_4;
        if (*(int *)((longlong)piVar3 + lVar17) != iVar10) goto LAB_1410866dd;
        iVar18 = 0;
        iVar13 = 0;
        bVar11 = *piVar3 == iVar10;
        do {
          local_90 = (longlong)iVar13;
          iVar14 = iVar13;
          lVar17 = local_90;
          iVar4 = iVar13 + 1;
          if (iVar13 + 1 < iVar2) {
            iVar4 = iVar2;
          }
          do {
            lVar17 = lVar17 + 1;
            iVar15 = iVar4;
            if (lVar16 <= lVar17) break;
            iVar15 = iVar14 + 1;
            iVar14 = iVar15;
          } while (bVar11 == (piVar3[lVar17] == iVar10));
          if (bVar11 == false) {
            local_78 = param_3;
            if (iVar18 != iVar13) {
              piVar12 = piVar3 + local_90;
              local_90 = CONCAT44(iVar13 >> 0x1f,iVar10);
              memmove(piVar3 + iVar18,piVar12,(longlong)(iVar15 - iVar13) << 2);
              iVar10 = (int)local_90;
            }
            iVar18 = iVar18 + (iVar15 - iVar13);
            param_3 = local_78;
          }
          iVar13 = iVar15;
          bVar11 = (bool)(bVar11 ^ 1);
        } while (lVar17 < lVar16);
        *(int *)(param_3 + 1) = iVar18;
        piVar12 = local_88;
        param_4 = local_80;
      }
LAB_1410864ee:
      FUN_141086702(&local_68,iVar10,1);
      piVar19 = piVar19 + 1;
    } while (piVar19 != piVar12);
  }
  lVar16 = param_3[1];
  if ((longlong)(int)lVar16 != 0) {
    lVar17 = *param_3;
    lVar9 = 0;
    do {
      FUN_141086702(&local_68,*(undefined4 *)(lVar17 + lVar9),0);
      lVar9 = lVar9 + 4;
    } while ((longlong)(int)lVar16 * 4 != lVar9);
  }
  if (*(int *)(local_70 + 0x84) == 0) {
LAB_141086694:
    lVar16 = 0;
  }
  else {
    uVar1 = *(uint *)(local_70 + 0x80);
    lVar16 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar8 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar8 == (longlong *)0x0) ||
         (((int)plVar8[2] != *(int *)(local_70 + 0x84) ||
          ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))) goto LAB_141086694;
      lVar16 = *plVar8;
    }
  }
  lVar9 = param_4[1];
  lVar17 = param_5[1];
  if (lVar17 == 0) {
    uVar6 = FUN_14110242a();
    lVar17 = FUN_14477b664(uVar6);
    param_5[1] = lVar17;
  }
  lVar7 = param_5[2];
  if (((lVar7 == 0) && (lVar7 = 0, lVar17 != 0)) && (*param_5 != 0)) {
    plVar8 = *(longlong **)(lVar17 + 0xb8);
    if ((plVar8 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar5 == '\0')) {
      lVar7 = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar8 + 0x110))(plVar8);
      lVar7 = FUN_144aff482(uVar6,param_5);
    }
    param_5[2] = lVar7;
  }
  cVar5 = FUN_14109961a(lVar16 + 0x48,lVar7,(int)lVar9 == 0,0);
  if (cVar5 != '\0') {
    FUN_1447f69b6(lVar16 + 0x1f0);
  }
  lVar16 = *param_3;
  lVar17 = param_3[1];
  lVar9 = param_4[1];
  *param_3 = *param_4;
  param_3[1] = lVar9;
  local_58._0_4_ = (undefined4)lVar16;
  local_58._4_4_ = (undefined4)((ulonglong)lVar16 >> 0x20);
  uStack_50._0_4_ = (undefined4)lVar17;
  uStack_50._4_4_ = (undefined4)((ulonglong)lVar17 >> 0x20);
  *(undefined4 *)param_4 = (undefined4)local_58;
  *(undefined4 *)((longlong)param_4 + 4) = local_58._4_4_;
  *(undefined4 *)(param_4 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_4 + 0xc) = uStack_50._4_4_;
  local_58 = lVar16;
  uStack_50 = lVar17;
LAB_1410865e1:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1410866dd:
  lVar17 = lVar17 + 4;
  if (lVar16 * 4 - lVar17 == 0) goto LAB_1410864ee;
  goto LAB_141086439;
}



// FUNCTION 141086702 FUN_141086702 body=1039 status=ok
// SIG undefined FUN_141086702(void)

void FUN_141086702(longlong *param_1,uint param_2,undefined4 param_3)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  
  if ((int)param_2 < 0) {
    return;
  }
  if (*(int *)(*param_1 + 0x20) <= (int)param_2) {
    return;
  }
  lVar12 = (ulonglong)param_2 * 0x40 + *(longlong *)(*param_1 + 0x18);
  if (lVar12 == 0) {
    return;
  }
  lVar9 = param_1[1];
  lVar5 = *(longlong *)(lVar12 + 0x18);
  if (lVar5 == 0) {
    uVar4 = FUN_14110242a();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar12 + 0x18) = lVar5;
  }
  plVar1 = (longlong *)(lVar12 + 0x10);
  lVar7 = *(longlong *)(lVar12 + 0x20);
  if (lVar7 == 0) {
    if ((lVar5 != 0) && (*plVar1 != 0)) {
      plVar10 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar10 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar3 == '\0')) {
        *(undefined8 *)(lVar12 + 0x20) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar10 + 0x110))(plVar10);
        lVar7 = FUN_144aff482(uVar4,plVar1);
        *(longlong *)(lVar12 + 0x20) = lVar7;
        if (lVar7 != 0) goto LAB_141086766;
      }
    }
  }
  else {
LAB_141086766:
    if (*(int *)(lVar9 + 0x84) == 0) {
LAB_141086a88:
      lVar5 = 0;
    }
    else {
      uVar2 = *(uint *)(lVar9 + 0x80);
      lVar5 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        plVar10 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar10 == (longlong *)0x0) ||
           (((int)plVar10[2] != *(int *)(lVar9 + 0x84) ||
            ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_141086a88;
        lVar5 = *plVar10;
      }
    }
    if (*(longlong *)(lVar12 + 0x18) == 0) {
      uVar4 = FUN_14110242a();
      lVar6 = FUN_14477b664(uVar4);
      *(longlong *)(lVar12 + 0x18) = lVar6;
      lVar7 = *(longlong *)(lVar12 + 0x20);
      if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
        plVar10 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar10 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar3 == '\0')) {
          lVar7 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar10 + 0x110))(plVar10);
          lVar7 = FUN_144aff482(uVar4,plVar1);
        }
        *(longlong *)(lVar12 + 0x20) = lVar7;
      }
    }
    cVar3 = FUN_14109961a(lVar5 + 0x48,lVar7,param_3,0);
    if (cVar3 != '\0') {
      FUN_1447f69b6(lVar5 + 0x1f0);
    }
  }
  lVar5 = *(longlong *)(lVar12 + 0x30);
  if (lVar5 == 0) {
    uVar4 = FUN_140e391b0();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar12 + 0x30) = lVar5;
  }
  plVar1 = (longlong *)(lVar12 + 0x28);
  lVar7 = *(longlong *)(lVar12 + 0x38);
  if (lVar7 == 0) {
    if ((lVar5 == 0) || (*plVar1 == 0)) {
      return;
    }
    plVar10 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar10 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar3 == '\0')) {
      *(undefined8 *)(lVar12 + 0x38) = 0;
      return;
    }
    uVar4 = (**(code **)(*plVar10 + 0x110))(plVar10);
    lVar7 = FUN_144aff482(uVar4,plVar1);
    *(longlong *)(lVar12 + 0x38) = lVar7;
    if (lVar7 == 0) {
      return;
    }
  }
  if (*(int *)(lVar9 + 0x84) != 0) {
    uVar2 = *(uint *)(lVar9 + 0x80);
    uVar4 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1410868e7;
    puVar11 = (undefined8 *)
              ((ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((puVar11 != (undefined8 *)0x0) &&
       ((*(int *)(puVar11 + 2) == *(int *)(lVar9 + 0x84) &&
        ((*(uint *)(puVar11 + 1) & 0x10200000) == 0)))) {
      uVar4 = *puVar11;
      goto LAB_1410868e7;
    }
  }
  uVar4 = 0;
LAB_1410868e7:
  if ((char)param_3 == '\0') {
    if (*(longlong *)(lVar12 + 0x30) == 0) {
      uVar8 = FUN_140e391b0();
      lVar9 = FUN_14477b664(uVar8);
      *(longlong *)(lVar12 + 0x30) = lVar9;
      lVar7 = *(longlong *)(lVar12 + 0x38);
      if (lVar7 == 0) {
        if (lVar9 == 0 || *plVar1 == 0) {
          lVar7 = 0;
        }
        else {
          plVar10 = *(longlong **)(lVar9 + 0xb8);
          if ((plVar10 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar3 == '\0')) {
            lVar7 = 0;
          }
          else {
            uVar8 = (**(code **)(*plVar10 + 0x110))(plVar10);
            lVar7 = FUN_144aff482(uVar8,plVar1);
          }
          *(longlong *)(lVar12 + 0x38) = lVar7;
        }
      }
    }
    FUN_148973f94(uVar4,lVar7);
    return;
  }
  if (*(longlong *)(lVar12 + 0x30) == 0) {
    uVar8 = FUN_140e391b0();
    lVar9 = FUN_14477b664(uVar8);
    *(longlong *)(lVar12 + 0x30) = lVar9;
    lVar7 = *(longlong *)(lVar12 + 0x38);
    if (lVar7 == 0) {
      if (lVar9 == 0 || *plVar1 == 0) {
        lVar7 = 0;
      }
      else {
        plVar10 = *(longlong **)(lVar9 + 0xb8);
        if ((plVar10 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar3 == '\0')) {
          lVar7 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar10 + 0x110))(plVar10);
          lVar7 = FUN_144aff482(uVar8,plVar1);
        }
        *(longlong *)(lVar12 + 0x38) = lVar7;
      }
    }
  }
  FUN_1410b135e(uVar4,lVar7);
  return;
}



// FUNCTION 141086b12 FUN_141086b12 body=21 status=ok
// SIG undefined FUN_141086b12(void)

undefined8 FUN_141086b12(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 141086b28 FUN_141086b28 body=456 status=ok
// SIG undefined FUN_141086b28(void)

void FUN_141086b28(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  uint local_30;
  int local_2c;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    if (DAT_14cac6e60 == 0) {
      local_50 = &local_28;
      local_28 = FUN_144a7958c;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_142b47bc4;
      local_58 = &LAB_1478989f1;
      local_60 = &LAB_146391124;
      local_68 = L"Engine";
      local_70 = 0x10000000000;
      local_78 = 0x10000005;
      local_80 = 0x10;
      local_88 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
    if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) {
      local_2c = 0;
      local_30 = *(uint *)(param_2 + 0xc);
      if ((int)local_30 < DAT_14c9647dc) {
        lVar2 = (ulonglong)((local_30 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_30 >> 0x10) * 8);
      }
      else {
        lVar2 = 0;
      }
      iVar1 = *(int *)(lVar2 + 0x10);
      if (*(int *)(lVar2 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        iVar3 = DAT_14c964868 + 1;
        bVar4 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar4) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar3);
        }
        LOCK();
        iVar1 = *(int *)(lVar2 + 0x10);
        bVar4 = iVar1 == 0;
        if (bVar4) {
          *(int *)(lVar2 + 0x10) = iVar3;
          iVar1 = 0;
        }
        UNLOCK();
        if (bVar4) {
          iVar1 = iVar3;
        }
      }
      local_28 = (code *)&local_30;
      local_2c = iVar1;
      FUN_141086cf2(param_1 + 0x28);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141086cf2 FUN_141086cf2 body=275 status=ok
// SIG undefined FUN_141086cf2(void)

int FUN_141086cf2(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  
  iVar7 = (int)param_1[1];
  lVar8 = (longlong)iVar7;
  if (lVar8 == 0) {
    iVar7 = 0;
  }
  else {
    lVar1 = *param_1;
    bVar3 = FUN_1404853da(lVar1,*param_2);
    iVar9 = 0;
    iVar10 = 0;
    do {
      lVar6 = (longlong)iVar10;
      iVar2 = iVar10 + 1;
      if (iVar10 + 1 < iVar7) {
        iVar2 = iVar7;
      }
      lVar13 = lVar1 + 8 + lVar6 * 8;
      iVar11 = iVar10;
      lVar5 = lVar6;
      do {
        lVar5 = lVar5 + 1;
        iVar12 = iVar2;
        if (lVar8 <= lVar5) break;
        bVar4 = FUN_1404853da(lVar13,*param_2);
        iVar11 = iVar11 + 1;
        lVar13 = lVar13 + 8;
        iVar12 = iVar11;
      } while ((bVar3 & 1) == bVar4);
      if ((bVar3 & 1) == 0) {
        if (iVar9 != iVar10) {
          memmove((void *)(lVar1 + (longlong)iVar9 * 8),(void *)(lVar1 + lVar6 * 8),
                  (longlong)(iVar12 - iVar10) << 3);
        }
        iVar9 = iVar9 + (iVar12 - iVar10);
      }
      iVar10 = iVar12;
      bVar3 = bVar3 ^ 1;
    } while (lVar5 < lVar8);
    *(int *)(param_1 + 1) = iVar9;
    iVar7 = iVar7 - iVar9;
  }
  return iVar7;
}



// FUNCTION 141086e06 FUN_141086e06 body=1203 status=ok
// SIG undefined FUN_141086e06(void)

void FUN_141086e06(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  longlong local_68;
  uint *local_60;
  code *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_68 = param_1;
  if (param_2 != 0) {
    if (DAT_14cac6e60 == 0) {
      local_80 = &local_50;
      local_50 = FUN_144a7958c;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_142b47bc4;
      local_88 = &LAB_1478989f1;
      local_90 = &LAB_146391124;
      local_98 = L"Engine";
      local_a0 = 0x10000000000;
      local_a8 = 0x10000005;
      local_b0 = 0x10;
      local_b8 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
    if (((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) &&
       ((*(byte *)(param_2 + 0x2e4) & 1) == 0)) {
      if (DAT_14cadbf38 == '\0') {
        FUN_1457ee456();
      }
      if (DAT_14cadbf48 != DAT_14cadbf74) {
        if (DAT_14cadbf38 == '\0') {
          FUN_1457ee456(&DAT_14cadbf20);
        }
        local_58 = (code *)0x0;
        FUN_14485c47a(&local_58,*(undefined8 *)(param_2 + 0x10));
        local_50 = local_58;
        iVar11 = FUN_1457ee8c4();
        if (iVar11 == -1) goto LAB_1410870d2;
      }
      lVar13 = *(longlong *)(param_2 + 0x10);
      if (lVar13 != 0) {
        if (DAT_14cadbfa8 == '\0') {
          FUN_1457ee456();
        }
        if (DAT_14cadbfd8 == 0) {
          uVar10 = 1;
          uVar2 = 0;
          iVar11 = 0;
          iVar3 = 0;
        }
        else {
          puVar8 = &DAT_14cadbfc0;
          if (DAT_14cadbfd0 != (uint *)0x0) {
            puVar8 = DAT_14cadbfd0;
          }
          uVar4 = *puVar8;
          if (uVar4 == 0) {
            iVar11 = DAT_14cadbfd8 + 0x1e;
            if (-1 < DAT_14cadbfd8 + -1) {
              iVar11 = DAT_14cadbfd8 + -1;
            }
            uVar2 = 0;
            uVar10 = (ulonglong)(uint)(iVar11 >> 5);
            if (iVar11 >> 5 < 1) {
              uVar10 = uVar2;
            }
            iVar3 = 0;
            do {
              if (uVar10 == uVar2) goto LAB_141087076;
              iVar3 = iVar3 + 0x20;
              uVar4 = puVar8[uVar2 + 1];
              uVar2 = uVar2 + 1;
            } while (uVar4 == 0);
          }
          else {
            uVar2 = 0;
            iVar3 = 0;
          }
          uVar10 = (ulonglong)(-uVar4 & uVar4);
          uVar1 = uVar10 * 2 + 1;
          lVar7 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          iVar11 = (iVar3 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
          if (DAT_14cadbfd8 <= iVar11) {
            iVar11 = DAT_14cadbfd8;
          }
        }
        if (iVar11 != DAT_14cadbfd8) {
          puVar8 = &DAT_14cadbfc0;
          if (DAT_14cadbfd0 != (uint *)0x0) {
            puVar8 = DAT_14cadbfd0;
          }
          iVar9 = DAT_14cadbfd8 + 0x1e;
          if (-1 < DAT_14cadbfd8 + -1) {
            iVar9 = DAT_14cadbfd8 + -1;
          }
          iVar9 = iVar9 >> 5;
          local_60 = puVar8 + 1;
          uVar4 = 0xffffffff;
          do {
            iVar5 = *(int *)(DAT_14cadbfb0 + 4 + (longlong)iVar11 * 0x10);
            if (((((iVar5 != 0) &&
                  (uVar12 = *(uint *)((longlong)iVar11 * 0x10 + DAT_14cadbfb0), -1 < (int)uVar12))
                 && (((int)uVar12 < DAT_14c9647dc &&
                     ((plVar14 = (longlong *)
                                 ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
                      plVar14 != (longlong *)0x0 && ((int)plVar14[2] == iVar5)))))) &&
                ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)) &&
               (((lVar7 = *plVar14, lVar7 != 0 &&
                 (*(int *)(lVar7 + 0x38) <= *(int *)(lVar13 + 0x38))) &&
                (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
                 == lVar7 + 0x30)))) goto LAB_1410870d2;
            uVar4 = uVar4 & ~(uint)uVar10;
            iVar11 = (int)uVar2;
            lVar7 = (longlong)iVar11;
            uVar12 = puVar8[lVar7] & uVar4;
            if (uVar12 == 0) {
              iVar5 = iVar9;
              if (iVar9 < iVar11) {
                iVar5 = iVar11;
              }
              if (iVar9 <= iVar11) break;
              lVar6 = 0;
              while( true ) {
                iVar3 = iVar3 + 0x20;
                uVar12 = local_60[lVar7 + lVar6];
                if (uVar12 != 0) break;
                lVar6 = lVar6 + 1;
                if (iVar5 - lVar7 == lVar6) goto LAB_141087076;
              }
              uVar2 = (ulonglong)(iVar11 + (int)lVar6 + 1);
              uVar4 = 0xffffffff;
            }
            uVar10 = (ulonglong)(-uVar12 & uVar12);
            uVar1 = uVar10 * 2 + 1;
            lVar7 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            iVar11 = (iVar3 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
          } while (iVar11 < DAT_14cadbfd8);
        }
      }
LAB_141087076:
      uVar4 = *(uint *)(param_2 + 0xc);
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar13 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar13 = 0;
      }
      iVar11 = *(int *)(lVar13 + 0x10);
      if (*(int *)(lVar13 + 0x10) == 0) {
        LOCK();
        iVar11 = DAT_14c964868 + 1;
        UNLOCK();
        iVar3 = DAT_14c964868 + 1;
        bVar15 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar11;
        if (bVar15) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar3);
        }
        LOCK();
        iVar11 = *(int *)(lVar13 + 0x10);
        bVar15 = iVar11 == 0;
        if (bVar15) {
          *(int *)(lVar13 + 0x10) = iVar3;
          iVar11 = 0;
        }
        UNLOCK();
        if (bVar15) {
          iVar11 = iVar3;
        }
      }
      plVar14 = (longlong *)(local_68 + 0x28);
      iVar3 = *(int *)(local_68 + 0x30);
      *(uint *)(local_68 + 0x30) = iVar3 + 1U;
      if (*(uint *)(local_68 + 0x34) < iVar3 + 1U) {
        FUN_1410872ba(plVar14,iVar3);
      }
      *(ulonglong *)(*plVar14 + (longlong)iVar3 * 8) = CONCAT44(iVar11,uVar4);
    }
  }
LAB_1410870d2:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410872ba FUN_1410872ba body=353 status=ok
// SIG undefined FUN_1410872ba(void)

void FUN_1410872ba(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14108733f;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_14108733f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}


