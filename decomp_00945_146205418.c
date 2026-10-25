// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146205418 FUN_146205418 body=40 status=ok
// SIG undefined FUN_146205418(void)

undefined8 FUN_146205418(undefined8 param_1,int param_2)

{
  FUN_14164ae34();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146205440 FUN_146205440 body=642 status=ok
// SIG undefined FUN_146205440(void)

void FUN_146205440(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cbf65b8 == (undefined8 *)0x0) {
    DAT_14cbf65b8 = (undefined8 *)FUN_14494321d(0x50);
    DAT_14cbf65b8[2] = 0;
    DAT_14cbf65b8[3] = 0;
    DAT_14cbf65b8[4] = 0;
    DAT_14cbf65b8[5] = 0;
    DAT_14cbf65b8[6] = 0;
    DAT_14cbf65b8[7] = 0;
    DAT_14cbf65b8[8] = 0;
    DAT_14cbf65b8[9] = 0;
    *DAT_14cbf65b8 = 0;
    DAT_14cbf65b8[1] = 0;
    *(undefined4 *)(DAT_14cbf65b8 + 2) = 2;
    *(undefined8 *)((longlong)DAT_14cbf65b8 + 0x14) = 0;
    *(undefined8 *)((longlong)DAT_14cbf65b8 + 0x1c) = 0;
    *(undefined8 *)((longlong)DAT_14cbf65b8 + 0x24) = 0x200000000;
    *(undefined8 *)((longlong)DAT_14cbf65b8 + 0x2c) = 0;
    *(undefined8 *)((longlong)DAT_14cbf65b8 + 0x34) = 0;
    *(undefined4 *)((longlong)DAT_14cbf65b8 + 0x3c) = 0;
    *(undefined4 *)(DAT_14cbf65b8 + 8) = 2;
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  puVar3 = DAT_14cbf65b8;
  plVar2 = DAT_14c8407a8;
  plVar6 = (longlong *)(param_1 + 8);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar4 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_149e001f0;
  uVar5 = FUN_144a3f946();
  puVar4[2] = uVar5;
  *puVar4 = &PTR_FUN_14ba702f0;
  puVar4[3] = puVar3;
  puVar4[4] = FUN_144400914;
  local_58 = 0;
  uVar5 = (**(code **)(*plVar2 + 0xa8))
                    (plVar2,L"RewindDebugger.StartRecording",
                     L"Starts making a rewind debugger recording.",&local_50);
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1462056c4(plVar6,iVar1);
  }
  *(undefined8 *)(*plVar6 + (longlong)iVar1 * 8) = uVar5;
  FUN_1449db362(&local_50);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  puVar3 = DAT_14cbf65b8;
  plVar2 = DAT_14c8407a8;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar4 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_149e020b0;
  uVar5 = FUN_144a3f946();
  puVar4[2] = uVar5;
  *puVar4 = &PTR_FUN_14ba70360;
  puVar4[3] = puVar3;
  puVar4[4] = FUN_144400c10;
  local_58 = 0;
  uVar5 = (**(code **)(*plVar2 + 0xb0))
                    (plVar2,L"RewindDebugger.StopRecording",
                     L"Stops the current rewind debugger recording.",&local_50);
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1462056c4(plVar6,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8) = uVar5;
  FUN_1449db362(&local_50);
  plVar6 = (longlong *)FUN_1448c2e86();
  (**(code **)(*plVar6 + 0x28))(plVar6,DAT_14cbf65a0,param_1 + 0x20);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462056c4 FUN_1462056c4 body=132 status=ok
// SIG undefined FUN_1462056c4(void)

void FUN_1462056c4(longlong param_1,int param_2)

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



// FUNCTION 146205748 FUN_146205748 body=539 status=ok
// SIG undefined FUN_146205748(void)

undefined8 * FUN_146205748(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(&local_40,param_1);
  puVar4 = DAT_14cb53158;
  if (DAT_14cb53158 != (undefined8 *)0x0) goto LAB_14620581f;
  puVar5 = local_40;
  if (local_38 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  iVar3 = FUN_144a80a00(puVar5,&DAT_14a3502a2);
  if (iVar3 == 0) {
    puVar4 = (undefined8 *)FUN_14494321d(0x70);
    *puVar4 = &PTR_LAB_14afcbf20;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    *(undefined1 *)(puVar4 + 7) = 0;
    FUN_140056680(puVar4 + 8,param_1);
    *puVar4 = &PTR_FUN_14afcc1f0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
LAB_1462057f3:
    puVar2 = DAT_14cb53158;
    puVar1 = DAT_14cb53158;
    if ((DAT_14cb53158 != puVar4) && (puVar1 = puVar4, DAT_14cb53158 != (undefined8 *)0x0)) {
      puVar1 = (undefined8 *)*DAT_14cb53158;
      DAT_14cb53158 = puVar4;
      (*(code *)*puVar1)(puVar2,1);
      puVar1 = DAT_14cb53158;
    }
  }
  else {
    puVar5 = local_40;
    if (local_38 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    iVar3 = FUN_144a80a00(puVar5,&DAT_14a343172);
    if (iVar3 == 0) {
      puVar4 = (undefined8 *)FUN_14494321d(0x68);
      *puVar4 = &PTR_LAB_14afcbf20;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      *(undefined1 *)(puVar4 + 7) = 0;
      FUN_140056680(puVar4 + 8,param_1);
      *puVar4 = &PTR_FUN_14afcc210;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[0xc] = 0;
      goto LAB_1462057f3;
    }
    puVar5 = local_40;
    if (local_38 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    iVar3 = FUN_144a80a00(puVar5,&DAT_14a3588aa);
    puVar1 = DAT_14cb53158;
    if (iVar3 == 0) {
      puVar4 = (undefined8 *)FUN_14494321d(0x78);
      *puVar4 = &PTR_LAB_14afcbf20;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      *(undefined1 *)(puVar4 + 7) = 0;
      FUN_140056680(puVar4 + 8,param_1);
      *puVar4 = &PTR_FUN_14afcc230;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[0xc] = 0;
      puVar4[0xd] = 0;
      puVar4[0xe] = 0;
      goto LAB_1462057f3;
    }
  }
  DAT_14cb53158 = puVar1;
  if (DAT_14cb53158 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    FUN_14164ba26(DAT_14cb53158);
    puVar4 = DAT_14cb53158;
  }
LAB_14620581f:
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar4;
}



// FUNCTION 146205964 FUN_146205964 body=348 status=ok
// SIG undefined FUN_146205964(void)

void FUN_146205964(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong **)(param_1 + 0x30) == (longlong *)0x0) ||
     (plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))(),
     plVar3 == (longlong *)0x0)) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
    if (local_38 != (longlong *)0x0) {
      if (*(longlong *)(param_1 + 0x30) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x10);
      }
      lVar4 = (**(code **)(*local_38 + 0x20))(local_38,uVar5);
      plVar3 = local_38;
      if ((lVar4 != 0) && ((*(int *)(lVar4 + 0x148) == 2 || (*(int *)(lVar4 + 0x148) == 6)))) {
        local_58 = FUN_1460687bc;
        local_50 = 0;
        FUN_146205ac2(local_48,param_1);
        (**(code **)(*plVar3 + 0x78))(plVar3,&local_58,local_48);
        *(code **)(param_1 + 0x50) = local_58;
        FUN_1449db362(local_48);
        if (*(longlong *)(param_1 + 0x30) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x10);
        }
        (**(code **)(*local_38 + 0x70))(local_38,uVar5);
        goto LAB_146205a4f;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_146205a4f:
  plVar3 = plStack_30;
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
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146205ac2 FUN_146205ac2 body=428 status=ok
// SIG undefined FUN_146205ac2(void)

longlong * FUN_146205ac2(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_146205ba2:
    *puVar5 = &PTR_LAB_149eae4d0;
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
    *puVar5 = &PTR_FUN_14b4f3350;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146205ba2;
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
    *puVar5 = &PTR_LAB_149eae4d0;
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
    *puVar5 = &PTR_FUN_14b4f3350;
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



// FUNCTION 146205c6e FUN_146205c6e body=50 status=ok
// SIG undefined FUN_146205c6e(void)

void FUN_146205c6e(undefined8 param_1)

{
  FUN_141499196();
  FUN_14164bb12(param_1);
  if (DAT_14cb86da8 != 0) {
    FUN_144a14752();
    return;
  }
  return;
}



// FUNCTION 146205ca0 FUN_146205ca0 body=167 status=ok
// SIG undefined FUN_146205ca0(void)

bool FUN_146205ca0(longlong param_1,undefined4 param_2,undefined8 param_3)

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
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146205d48 FUN_146205d48 body=610 status=ok
// SIG undefined FUN_146205d48(void)

void FUN_146205d48(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 local_168;
  undefined7 uStack_167;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 local_138;
  undefined1 local_130 [108];
  undefined4 local_c4;
  undefined4 local_c0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  cVar4 = FUN_140ae5f1a(param_2);
  if (cVar4 == '\0') goto LAB_146205e52;
  lVar5 = (**(code **)(*param_1 + 0x2b8))(param_1);
  if (lVar5 == 0) goto LAB_146205e52;
  lVar6 = FUN_144a2f878();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
      lVar6 + 0x30)) goto LAB_146205e52;
  FUN_1449027d0(param_1);
  lVar5 = *(longlong *)(CONCAT71(uStack_167,local_168) + 0x220);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x1b8));
  *(int *)(lVar5 + 0x1b0) = *(int *)(lVar5 + 0x1b0) + 1;
  plVar3 = (longlong *)CONCAT44(uStack_15c,local_160);
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
  if ((param_2 < 0) || (*(int *)(lVar5 + 400) <= param_2)) {
    memset(&local_168,0,0x120);
    local_168 = 1;
    FUN_1400b22c2(&local_178,&DAT_149e62dd2);
    local_160 = local_178;
    uStack_15c = uStack_174;
    uStack_158 = uStack_170;
    uStack_154 = uStack_16c;
    local_150 = 0;
    FUN_1400b22c2(&local_178);
    local_138 = 0;
    memset(local_130,0,0xd8);
    local_c4 = 0x80;
    local_c0 = 0xffffffff;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_78 = 0xf;
    local_70 = 1;
    local_58 = 0;
    local_50 = 0;
    local_6c = 0;
    uStack_64 = 0;
    iVar8 = FUN_145883eec(lVar5 + 0x188,&local_168,param_2);
    if (iVar8 != -1) {
      *(int *)(lVar5 + 0x198) = *(int *)(lVar5 + 0x198) + 1;
    }
    FUN_145846e1a(&local_168);
  }
  *(int *)(lVar5 + 0x198) = *(int *)(lVar5 + 0x198) + 1;
  lVar6 = *(longlong *)(lVar5 + 0x188);
  lVar7 = (longlong)param_2 * 0x120;
  iVar8 = *(int *)(lVar6 + 4 + lVar7);
  if (*(char *)(lVar6 + lVar7) == '\0') {
    if (iVar8 == 0) {
      iVar8 = 1;
      goto LAB_146205e40;
    }
  }
  else {
    iVar8 = iVar8 + 1;
LAB_146205e40:
    *(undefined1 *)(lVar6 + lVar7) = 0;
    *(int *)((undefined1 *)(lVar6 + lVar7) + 4) = iVar8;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x1b8));
LAB_146205e52:
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146205fac FUN_146205fac body=197 status=ok
// SIG undefined FUN_146205fac(void)

undefined8 FUN_146205fac(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  double *pdVar2;
  float fVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  
  lVar1 = FUN_14485cccc(param_2 + 0xc0);
  if ((lVar1 != 0) && (0.0 < *(float *)(param_4 + 8))) {
    lVar1 = *(longlong *)(lVar1 + 0x1c8);
    if (lVar1 == 0) {
      pdVar2 = (double *)&DAT_14c8464e0;
      dVar6 = DAT_14c8464f0;
    }
    else {
      pdVar2 = (double *)(lVar1 + 0x260);
      dVar6 = *(double *)(lVar1 + 0x270);
    }
    dVar6 = *(double *)(param_4 + 0x30) - dVar6;
    dVar7 = *(double *)(param_4 + 0x28) - pdVar2[1];
    dVar4 = *(double *)(param_4 + 0x20) - *pdVar2;
    dVar6 = SQRT(dVar6 * dVar6 + dVar4 * dVar4 + dVar7 * dVar7);
    fVar3 = (float)dVar6 / *(float *)(param_4 + 8);
    if (1.0 <= fVar3) {
      fVar3 = 1.0;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    uVar5 = FUN_146206072(CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar3),
                          *(undefined8 *)(param_3 + 0x40));
    return uVar5;
  }
  return 0x3f800000;
}



// FUNCTION 146206072 FUN_146206072 body=193 status=ok
// SIG undefined FUN_146206072(void)

float FUN_146206072(float param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (param_2 == 0) {
    fVar4 = 1.0;
    fVar2 = 0.0;
    fVar1 = 1.0;
  }
  else {
    fVar2 = *(float *)(param_2 + 0x3c);
    fVar4 = *(float *)(param_2 + 0x40);
    fVar1 = *(float *)(param_2 + 0x48);
  }
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    fVar3 = 0.0;
    if (0.0 <= fVar2) {
      fVar3 = fVar2;
    }
    fVar2 = 0.0;
    if (0.0 <= param_1) {
      fVar2 = param_1;
    }
    if (fVar3 < fVar2) {
      if (fVar4 <= fVar3) {
        fVar4 = fVar3;
      }
      fVar2 = (fVar2 - fVar3) / (fVar4 - fVar3);
      if (1.0 <= fVar2) {
        fVar2 = 1.0;
      }
      fVar4 = 0.0;
      if (fVar2 <= 0.0) {
        fVar2 = 0.0;
      }
      fVar1 = powf(1.0 - fVar2,fVar1);
      fVar2 = 0.0;
      if (0.0 <= fVar1) {
        fVar2 = fVar1;
      }
      if (param_2 != 0) {
        fVar4 = *(float *)(param_2 + 0x44);
      }
      return fVar2 * (1.0 - fVar4) + fVar4;
    }
  }
  return 1.0;
}



// FUNCTION 146206134 FUN_146206134 body=601 status=ok
// SIG undefined FUN_146206134(void)

void FUN_146206134(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined1 auStackY_d8 [32];
  char local_69;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_50 [2];
  longlong local_40 [2];
  DWORD local_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStackY_d8;
  if (DAT_14c967a60 == (HANDLE)0x0) {
    uVar2 = FUN_14118da1c();
    cVar1 = FUN_14054d46e(uVar2,L"NOSPLASH");
    if (cVar1 == '\0') {
      FUN_140056680(&local_30,&DAT_14c764000);
      FUN_140233b1a(local_50,&local_30);
      if (CONCAT44(uStack_2c,local_30) != 0) {
        FUN_1400020a8();
      }
      local_68 = 0;
      uStack_60 = 0;
      cVar1 = FUN_14620638e(L"Splash",&local_68,&local_69);
      if (cVar1 != '\0') {
        if (local_69 == '\0') {
          puVar3 = (undefined8 *)FUN_1447a1f4a(local_50);
          iVar5 = *(int *)(puVar3 + 1);
          puVar4 = (undefined2 *)*puVar3;
          cVar1 = FUN_144a7c5f6(&DAT_14c9679c0);
          if (cVar1 != '\0') {
            if (iVar5 == 0) {
              puVar4 = &DAT_149dfb77a;
            }
            FUN_140056680(local_40,puVar4);
            FUN_140233b1a(&local_30,local_40);
            FUN_140008f88(&DAT_14c9679c0,&local_30);
            if ((longlong *)CONCAT44(uStack_2c,local_30) != (longlong *)0x0) {
              (**(code **)(*(longlong *)CONCAT44(uStack_2c,local_30) + 0x10))();
            }
            if (local_40[0] != 0) {
              FUN_1400020a8();
            }
          }
        }
        DAT_14c967a68 =
             CreateWindowExW(0,L"STATIC",L"SplashScreenGuard",0,0,0,0,0,(HWND)0xfffffffffffffffd,
                             (HMENU)0x0,DAT_14c8c26f8,(LPVOID)0x0);
        if (DAT_14c967a68 != (HWND)0x0) {
          ShowWindow(DAT_14c967a68,5);
        }
        DAT_14c75ed18 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
        iVar5 = (int)uStack_60 + -1;
        if ((int)uStack_60 == 0) {
          iVar5 = 0;
        }
        FUN_1402980a2(&DAT_14c967968,local_68,iVar5);
        local_30 = 0;
        DAT_14c967a60 =
             CreateThread((LPSECURITY_ATTRIBUTES)0x0,0x20000,FUN_141697bbe,(LPVOID)0x0,0x10000,
                          &local_30);
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_50[0] != (longlong *)0x0) {
        (**(code **)(*local_50[0] + 0x10))();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStackY_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620638e FUN_14620638e body=652 status=ok
// SIG undefined FUN_14620638e(void)

ulonglong FUN_14620638e(undefined8 param_1,longlong *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined8 unaff_RBP;
  undefined7 uVar5;
  ulonglong uVar4;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58;
  undefined8 local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140056680(&local_58,L"Splash/");
  FUN_144a882a8(local_48,&local_58,param_1);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  uVar5 = (undefined7)((ulonglong)unaff_RBP >> 8);
  if (DAT_14c9670c0 < 2) {
    FUN_1410f2562(local_78);
    FUN_14620661b(local_68,local_78,local_48);
    FUN_140aa5ef8(&local_58,local_68);
    if (&local_58 == param_2) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_58;
      local_58 = 0;
      *(undefined4 *)(param_2 + 1) = (undefined4)local_50;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_50._4_4_;
      local_50 = 0;
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    *param_3 = 1;
    plVar1 = (longlong *)FUN_14054d1d4();
    if ((int)param_2[1] == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    lVar2 = (**(code **)(*plVar1 + 0x108))(plVar1,puVar3);
    uVar4 = CONCAT71(uVar5,1);
    if (lVar2 != -1) goto LAB_1462064a9;
    FUN_1414927bc(local_78);
    FUN_14620661b(local_68,local_78,local_48);
    FUN_140aa5ef8(&local_58,local_68);
    if (&local_58 == param_2) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_58;
      local_58 = 0;
      *(undefined4 *)(param_2 + 1) = (undefined4)local_50;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_50._4_4_;
      local_50 = 0;
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    *param_3 = 0;
    plVar1 = (longlong *)FUN_14054d1d4();
    if ((int)param_2[1] == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    lVar2 = (**(code **)(*plVar1 + 0x108))(plVar1,puVar3);
  }
  else {
    FUN_1402980a2(param_2,DAT_14c9670b8,DAT_14c9670c0 + -1);
    *param_3 = 1;
    plVar1 = (longlong *)FUN_14054d1d4();
    if ((int)param_2[1] == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    lVar2 = (**(code **)(*plVar1 + 0x108))(plVar1,puVar3);
  }
  uVar4 = CONCAT71(uVar5,1);
  if (lVar2 == -1) {
    uVar4 = 0;
  }
LAB_1462064a9:
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620661b FUN_14620661b body=305 status=ok
// SIG undefined FUN_14620661b(void)

longlong * FUN_14620661b(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = 0;
  uVar2 = (ulonglong)(*(int *)(param_3 + 1) - 1);
  if (*(int *)(param_3 + 1) == 0) {
    uVar2 = uVar3;
  }
  local_88 = (int)uVar2 + 1 + (uint)(*(int *)(param_2 + 1) == 0);
  local_50[0] = 0;
  FUN_14125bce8(local_50,*param_2,*(int *)(param_2 + 1),0);
  FUN_1401aebe8(local_50,*param_3,uVar2);
  local_68 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  do {
    if (uVar3 == 0x10) {
      FUN_1449b8608(param_1,local_50,L".bmp");
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      goto LAB_146206715;
    }
    FUN_1449b8608(&local_78,local_50,*(undefined8 *)((longlong)&PTR_DAT_149ec5bc0 + uVar3));
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    local_68 = CONCAT44(uStack_74,local_78);
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    cVar1 = FUN_1415258a0(&local_68);
    uVar3 = uVar3 + 8;
  } while (cVar1 == '\0');
  *param_1 = local_68;
  *(undefined4 *)(param_1 + 1) = uStack_60;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_5c;
LAB_146206715:
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620674e FUN_14620674e body=63 status=ok
// SIG undefined FUN_14620674e(void)

void FUN_14620674e(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145ae94cc(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_14164bdec(param_1);
    return;
  }
  FUN_1467d7378(param_1);
  FUN_145ae94cc(param_1);
  return;
}



// FUNCTION 14620678e FUN_14620678e body=272 status=ok
// SIG undefined FUN_14620678e(void)

void FUN_14620678e(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xf0) + 0x140);
  if (lVar1 != 0) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar2 = local_30;
    local_28 = 3;
    *local_30 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_30[2] = lVar4;
    *local_30 = &PTR_FUN_14aa1daf0;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    puVar2[4] = FUN_141663d36;
    *(undefined4 *)(puVar2 + 5) = 0;
    FUN_1462068a8(lVar1,&local_30);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_141663d36(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462068a8 FUN_1462068a8 body=109 status=ok
// SIG undefined FUN_1462068a8(void)

void FUN_1462068a8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 2;
  FUN_14009d848(param_1 + 0x20);
  lVar3 = (longlong)*(int *)(param_1 + 0x1b0);
  if (0 < lVar3) {
    uVar2 = lVar3 + 1;
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x1a8) + lVar3 * 0x10);
    do {
      plVar4 = plVar4 + -2;
      plVar1 = (longlong *)*plVar4;
      if (((char)plVar1[3] == '\x01') && (*(char *)((longlong)plVar1 + 0x1b) == '\0')) {
        (**(code **)(*plVar1 + 0x58))();
        break;
      }
      uVar2 = uVar2 - 1;
    } while (1 < uVar2);
  }
  FUN_1449db362(param_2);
  return;
}



// FUNCTION 146206916 FUN_146206916 body=96 status=ok
// SIG undefined FUN_146206916(void)

ulonglong FUN_146206916(longlong param_1)

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
LAB_146206959:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146206959;
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



// FUNCTION 14620697c FUN_14620697c body=251 status=ok
// SIG undefined FUN_14620697c(void)

void FUN_14620697c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = *(int *)(param_1 + 0x168);
  if (iVar3 != 0) {
    FUN_145a182aa(param_1 + 0x168);
    uVar5 = FUN_140d80fb0(param_1);
    FUN_145d55fd2(&local_30,uVar5);
    if (local_30 != 0) {
      FUN_146206a78(local_30,iVar3);
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_28 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  *(undefined8 *)(param_1 + 0x170) = 0;
  plVar4 = *(longlong **)(param_1 + 0x178);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x178) = 0;
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
  lVar6 = FUN_140f7f142(param_1);
  if (lVar6 != 0) {
    *(float *)(param_1 + 400) = (float)*(double *)(lVar6 + 0x6d0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146206a78 FUN_146206a78 body=761 status=ok
// SIG undefined FUN_146206a78(void)

void FUN_146206a78(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  void *_Dst;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *plStack_a0;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar10 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x70);
    }
    iVar9 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        lVar10 = *(longlong *)(param_1 + 0x30) + (longlong)iVar9 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar9 * 0x20) == param_2) {
          if ((lVar10 != 0) && (lVar10 != -8)) {
            plVar5 = *(longlong **)(lVar10 + 8);
            puVar6 = *(undefined8 **)(lVar10 + 0x10);
            if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
            }
            LOCK();
            *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
            UNLOCK();
            (**(code **)(*plVar5 + 0x68))(plVar5);
            LOCK();
            piVar1 = (int *)(puVar6 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            uVar8 = local_78;
            if (*piVar1 == 0) {
              (**(code **)*puVar6)(puVar6);
              LOCK();
              piVar1 = (int *)((longlong)puVar6 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              uVar8 = local_78;
              if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
              }
            }
            goto LAB_146206b1a;
          }
          break;
        }
        iVar9 = *(int *)(lVar10 + 0x18);
      } while (iVar9 != -1);
    }
  }
  plVar5 = (longlong *)(param_1 + 0xa8);
  uVar3 = param_1 + 0xb8;
  local_68 = (longlong *)&DAT_100000000;
  local_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_60 = uVar3;
  if (*(int *)(param_1 + 0xd0) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar9 = *(int *)(param_1 + 0xd0);
  }
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (int)uStack_60;
  uStack_7c = uStack_60._4_4_;
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  uVar8 = local_78;
  local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
  local_90 = plVar5;
  if ((local_78._4_4_ != iVar9) || (uStack_60 != uVar3)) {
    iVar12 = local_78._4_4_;
    local_78 = uVar8;
    do {
      lVar10 = (longlong)*(int *)(*local_90 + 0x40 + (longlong)iVar12 * 0x50);
      if (0 < lVar10) {
        lVar4 = *local_90 + (longlong)iVar12 * 0x50;
        lVar7 = *(longlong *)(lVar4 + 0x38);
        iVar12 = 1;
        lVar11 = 0;
        do {
          if (*(uint *)(lVar7 + lVar11) == param_2) {
            local_68 = (longlong *)0x0;
            uStack_60 = uStack_60 & 0xffffffff00000000;
            FUN_1488a599e(&local_68,lVar7 + lVar11 + 0x10);
            lVar10 = *(longlong *)(lVar4 + 0x38);
            _Dst = (void *)(lVar10 + lVar11);
            FUN_145d5707e(_Dst,1);
            iVar9 = *(int *)(lVar4 + 0x40);
            if (iVar9 - iVar12 != 0) {
              memmove(_Dst,(void *)(lVar10 + lVar11 + 0x28),(longlong)(iVar9 - iVar12) * 0x28);
              iVar9 = *(int *)(lVar4 + 0x40);
            }
            *(int *)(lVar4 + 0x40) = iVar9 + -1;
            local_a8 = 0;
            plStack_a0 = (longlong *)0x0;
            if ((local_68 != (longlong *)0x0 && (int)uStack_60 != 0) &&
               ((**(code **)(*local_68 + 0x60))(local_68,param_2,&local_a8), plVar5 = plStack_a0,
               plStack_a0 != (longlong *)0x0)) {
              LOCK();
              plVar2 = plStack_a0 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plStack_a0)(plStack_a0);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar5 + 0x10))(plVar5);
                }
              }
            }
            FUN_1449db362(&local_68);
            uVar8 = local_78;
            goto LAB_146206b1a;
          }
          lVar11 = lVar11 + 0x28;
          iVar12 = iVar12 + 1;
        } while (lVar10 * 0x28 != lVar11);
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
      FUN_1449c0562(&local_88);
      iVar12 = local_78._4_4_;
      uVar8 = local_78;
    } while (local_90 != plVar5 ||
             (CONCAT44(uStack_7c,uStack_80) != uVar3 || local_78._4_4_ != iVar9));
  }
LAB_146206b1a:
  local_78 = uVar8;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146206dac FUN_146206dac body=341 status=ok
// SIG undefined FUN_146206dac(void)

undefined4 FUN_146206dac(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 *puStack_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong **)(param_2 + 8) == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(**(longlong **)(param_2 + 8) + 0x10))();
  }
  lVar7 = *(longlong *)(param_1 + 0x28);
  if (lVar7 == 0) {
    uVar5 = FUN_140c52150();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x28) = lVar7;
  }
  lVar6 = *(longlong *)(param_1 + 0x30);
  if (lVar6 == 0) {
    uVar3 = 0;
    if ((lVar7 == 0) || (*(longlong *)(param_1 + 0x20) == 0)) goto LAB_146206e61;
    plVar1 = *(longlong **)(lVar7 + 0xb8);
    if (plVar1 == (longlong *)0x0) {
LAB_146206efe:
      lVar6 = 0;
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 == '\0') goto LAB_146206efe;
      uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar6 = FUN_144aff482(uVar5,(longlong *)(param_1 + 0x20));
    }
    *(longlong *)(param_1 + 0x30) = lVar6;
  }
  uVar3 = 0;
  if ((lVar4 != 0) && (lVar6 != 0)) {
    local_58 = 0;
    local_48 = 0;
    puStack_50 = &DAT_3f800000ffffffff;
    local_40 = 0;
    uStack_38 = 0;
    local_70 = lVar6 + 0x18;
    local_60 = 0;
    local_68 = lVar6;
    uVar3 = FUN_14164c0ba(lVar4,&local_70,&local_58);
    lVar4 = local_40;
    FUN_140de863f(local_40,uStack_38 & 0xffffffff);
    if (lVar4 != 0) {
      FUN_1400020a8(lVar4);
    }
  }
LAB_146206e61:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146206f02 FUN_146206f02 body=115 status=ok
// SIG undefined FUN_146206f02(void)

void FUN_146206f02(longlong param_1)

{
  undefined1 auStack_48 [45];
  byte local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x240) & 1) != 0) {
    FUN_14164c272(param_1,2);
    local_1a = FUN_140843f56(param_1);
    local_1b = *(byte *)(param_1 + 0x240) & 1;
    local_19 = 1;
    FUN_1447cd2ec(param_1 + 0x138);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146206f76 FUN_146206f76 body=158 status=ok
// SIG undefined FUN_146206f76(void)

bool FUN_146206f76(longlong param_1,undefined8 param_2)

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



// FUNCTION 146207016 FUN_146207016 body=37 status=ok
// SIG undefined FUN_146207016(void)

void FUN_146207016(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  FUN_14142540c();
  FUN_1406a3c7a(param_1);
  return;
}



// FUNCTION 14620703c FUN_14620703c body=179 status=ok
// SIG undefined FUN_14620703c(void)

void FUN_14620703c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = param_1[0x35];
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x198))) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 400) + lVar4 * 8);
      if (lVar2 != 0) {
        lVar3 = *(longlong *)(lVar2 + 0xf0);
        if (lVar3 != 0) {
          if (param_1[0x1e] != 0) {
            (**(code **)(*param_1 + 0x3a0))(param_1);
            lVar3 = *(longlong *)(lVar2 + 0xf0);
          }
          FUN_1462070f0(param_1,*(undefined8 *)(lVar3 + 0x10));
          FUN_1457a0228(param_1 + 0xaf,*(undefined8 *)(lVar2 + 0xf0));
        }
        if (*(longlong *)(lVar2 + 0x2b0) != 0) {
          (**(code **)(*param_1 + 0x3a0))(param_1);
        }
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < *(int *)(lVar1 + 0x198));
  }
  return;
}



// FUNCTION 1462070f0 FUN_1462070f0 body=331 status=ok
// SIG undefined FUN_1462070f0(void)

void FUN_1462070f0(longlong param_1,longlong param_2)

{
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  longlong local_48;
  longlong lStack_40;
  undefined4 local_38;
  undefined2 uStack_34;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_30 = 0;
  FUN_14485c47a(&local_30);
  FUN_14620723c(param_1 + 0x528,local_30);
  if (param_2 == 0) {
    lStack_40 = 0;
  }
  else {
    lStack_40 = *(longlong *)(param_2 + 0x48);
  }
  local_38 = 0xffffffff;
  uStack_34 = 0x100;
  uStack_32 = 0;
  local_48 = param_2;
  FUN_14164c386(&local_48);
  local_58 = CONCAT17(uStack_31,CONCAT16(uStack_32,CONCAT24(uStack_34,local_38)));
  local_68 = local_48;
  lStack_60 = lStack_40;
  local_88 = 0;
  lStack_80 = 0;
  local_78 = 0xffffffff;
  local_74 = 0x101;
  local_72 = 0;
  FUN_14164c386(&local_88);
  if (lStack_60 != lStack_80) {
    do {
      if (lStack_60 == 0) {
        lStack_60 = 0;
      }
      else if ((*(byte *)(lStack_60 + 0xb0) & 0x40) != 0) {
        local_90 = 0;
        FUN_14485c47a(&local_90);
        FUN_14620723c(param_1 + 0x528,local_90);
      }
      lStack_60 = *(longlong *)(lStack_60 + 0x28);
      FUN_14164c386(&local_68);
    } while (lStack_60 != lStack_80);
  }
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14620723c FUN_14620723c body=91 status=ok
// SIG undefined FUN_14620723c(void)

void FUN_14620723c(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_145717f28(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146207298 FUN_146207298 body=149 status=ok
// SIG undefined FUN_146207298(void)

longlong * FUN_146207298(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = FUN_14001cc68(0x500,0x10);
  FUN_14620732e(lVar3,param_3,1);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14be8c7a0;
  plVar4[2] = lVar3;
  *param_2 = lVar3;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
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
  }
  return param_2;
}



// FUNCTION 14620732e FUN_14620732e body=636 status=ok
// SIG undefined FUN_14620732e(void)

undefined8 * FUN_14620732e(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 *_Dst;
  
  *param_1 = &PTR_FUN_14be8c640;
  *(undefined1 *)((longlong)param_1 + 10) = param_3;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  memset(param_1 + 0x86,0,0xc0);
  param_1[0x9e] = *param_2;
  lVar1 = param_2[1];
  param_1[0x9f] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  _Dst = param_1 + 5;
  lVar1 = 0;
  do {
    memset(_Dst,0,0x100);
    *(int *)((longlong)_Dst + 0xe4) = (int)lVar1;
    lVar1 = lVar1 + 1;
    _Dst = _Dst + 0x20;
  } while (lVar1 != 4);
  *(undefined2 *)(param_1 + 1) = 1;
  param_1[0x85] = 0x3dcccccd3e4ccccd;
  FUN_14153841e(DAT_14c872ce0,L"/Script/Engine.InputSettings",L"InitialButtonRepeatDelay",
                param_1 + 0x85,&DAT_14c872ae8);
  FUN_14153841e(DAT_14c872ce0,L"/Script/Engine.InputSettings",L"ButtonRepeatDelay",
                (longlong)param_1 + 0x42c,&DAT_14c872ae8);
  *(undefined8 *)((longlong)param_1 + 0xb) = 0x607050403020100;
  *(undefined8 *)((longlong)param_1 + 0x13) = 0xf0e0d0c0b0a0908;
  *(undefined8 *)((longlong)param_1 + 0x1b) = 0x1716151413121110;
  param_1[0x86] = DAT_14c967838;
  param_1[0x87] = DAT_14c967840;
  param_1[0x88] = DAT_14c967848;
  param_1[0x89] = DAT_14c967850;
  param_1[0x8a] = DAT_14c967858;
  param_1[0x8b] = DAT_14c967860;
  param_1[0x8c] = DAT_14c967868;
  param_1[0x8d] = DAT_14c967870;
  param_1[0x8e] = DAT_14c967878;
  param_1[0x8f] = DAT_14c967880;
  param_1[0x90] = DAT_14c967888;
  param_1[0x91] = DAT_14c967890;
  param_1[0x92] = DAT_14c967898;
  param_1[0x93] = DAT_14c9678a0;
  param_1[0x94] = DAT_14c9678a8;
  param_1[0x95] = DAT_14c9678b0;
  param_1[0x96] = DAT_14c9678b8;
  param_1[0x97] = DAT_14c9678c0;
  param_1[0x98] = DAT_14c9678c8;
  param_1[0x99] = DAT_14c9678d0;
  param_1[0x9a] = DAT_14c9678d8;
  param_1[0x9b] = DAT_14c9678e0;
  param_1[0x9c] = DAT_14c9678e8;
  param_1[0x9d] = DAT_14c9678f0;
  return param_1;
}



// FUNCTION 1462075aa FUN_1462075aa body=163 status=ok
// SIG undefined FUN_1462075aa(void)

bool FUN_1462075aa(longlong param_1,undefined4 param_2,undefined4 param_3)

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
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146207654 FUN_146207654 body=412 status=ok
// SIG undefined FUN_146207654(void)

void FUN_146207654(undefined8 param_1,undefined4 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1459ca5e2(param_1,&local_38,param_2);
  if (local_38 != 0) {
    *(undefined8 *)(local_38 + 0x48) = 0;
    plVar3 = *(longlong **)(local_38 + 0x50);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(local_38 + 0x50) = 0;
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
    plVar3 = local_30;
    local_48 = local_38;
    local_40 = local_30;
    if (local_30 == (longlong *)0x0) {
      cVar4 = FUN_146207804(param_1,&local_48);
    }
    else {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
      cVar4 = FUN_146207804(param_1);
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
    if (cVar4 != '\0') goto LAB_146207729;
  }
  if (param_3 == '\0') {
    if (local_38 != 0) {
      FUN_143f45d7e(param_1);
    }
  }
  else {
    FUN_14164c43e(param_1);
    if (local_38 != 0) {
      *(undefined8 *)(local_38 + 0xc0) = 0;
    }
  }
  FUN_1458eaba4(param_1);
  FUN_146207904(param_1);
LAB_146207729:
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146207804 FUN_146207804 body=255 status=ok
// SIG undefined FUN_146207804(void)

ulonglong FUN_146207804(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = *(char *)(*param_2 + 0xaa);
  if (cVar1 == '\x01') {
    *(undefined1 *)(*param_2 + 0xaa) = 0;
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    FUN_1446efa72(&local_38,0,3,0x10);
    puVar2 = local_38;
    local_30 = 3;
    *local_38 = &PTR_LAB_149e35290;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_38[2] = lVar4;
    *local_38 = &PTR_FUN_14b4f67b0;
    local_38[3] = 0;
    FUN_14485c47a(local_38 + 3,param_1);
    puVar2[4] = FUN_148aab8e4;
    FUN_1458eae66(param_1,param_2,&local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146207904 FUN_146207904 body=267 status=ok
// SIG undefined FUN_146207904(void)

void FUN_146207904(longlong param_1)

{
  longlong lVar1;
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
  local_30 = param_1 + 0xf8;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (*(int *)(param_1 + 0x110) != 0) {
    FUN_1449c0562(&local_38);
  }
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_58 = local_38;
  local_50 = local_30;
  local_60 = (longlong *)(param_1 + 0xe8);
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      lVar1 = *(longlong *)(*local_60 + 0x10 + (longlong)iStack_44 * 0x28);
      if (*(int *)(lVar1 + 0x30) == -1) {
        FUN_1414df638(param_1,lVar1 + 0x18);
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < *(int *)(local_50 + 0x18));
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146207a10 FUN_146207a10 body=228 status=ok
// SIG undefined FUN_146207a10(void)

undefined8 FUN_146207a10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14b3eddf0;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14b3edd80;
  local_38[3] = param_3;
  local_38[4] = FUN_1413f1ce4;
  FUN_146207af6(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146207af6 FUN_146207af6 body=216 status=ok
// SIG undefined FUN_146207af6(void)

undefined8 * FUN_146207af6(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 146207be0 FUN_146207be0 body=91 status=ok
// SIG undefined FUN_146207be0(void)

undefined8 FUN_146207be0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x398) != 0) {
    lVar2 = FUN_144a7b4ca();
    if ((((*(longlong *)(param_1 + 0x398) != 0) && (lVar2 != 0)) &&
        (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x398) + 0x10), lVar1 != 0)) &&
       ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)))) {
      uVar3 = FUN_146207c3c();
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 146207c3c FUN_146207c3c body=186 status=ok
// SIG undefined FUN_146207c3c(void)

byte FUN_146207c3c(undefined8 param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [44];
  short local_2c [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_1447210f0();
  if (lVar2 != 0) {
    lVar3 = FUN_1400f6f32(lVar2);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(lVar3 + 0x68);
    }
    lVar2 = FUN_1400f6f32(lVar2);
    if (lVar2 != 0) {
      bVar1 = 0;
      if ((lVar3 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x30), lVar2 != 0)) {
        FUN_14042af24(lVar3,local_2c,param_1);
        bVar1 = (byte)lVar3;
        if (-1 < local_2c[0]) {
          bVar1 = FUN_14164cd70(lVar2,local_2c);
        }
        bVar1 = -1 < local_2c[0] & bVar1;
      }
      goto LAB_146207ccc;
    }
  }
  bVar1 = 0;
LAB_146207ccc:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar1;
}



// FUNCTION 146207d00 FUN_146207d00 body=526 status=ok
// SIG undefined FUN_146207d00(void)

void FUN_146207d00(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_158 [40];
  longlong local_130;
  longlong local_128;
  longlong *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108 [12];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_130 = param_1 + 0x10;
  cVar5 = FUN_144729dda();
  if (cVar5 != '\0') {
    cVar5 = FUN_144729dda(param_1 + 0x18);
    if (cVar5 != '\0') {
      uVar7 = FUN_14479d2ce(param_1 + 0x18);
      uVar7 = FUN_1447210f0(uVar7);
      FUN_14132b09a(&local_128,uVar7);
      if (local_120 != (longlong *)0x0) {
        iVar6 = (int)local_120[1];
        do {
          if (iVar6 == 0) {
            plVar13 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar4 = (int)local_120[1];
          bVar14 = iVar6 == iVar4;
          if (bVar14) {
            *(int *)(local_120 + 1) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
          plVar13 = local_120;
        } while (!bVar14);
        LOCK();
        piVar1 = (int *)((longlong)local_120 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_120 + 0x10))();
        }
        lVar3 = local_128;
        if (plVar13 != (longlong *)0x0) {
          if (local_128 != 0) {
            FUN_14132cab0(local_128);
            if ((longlong)(int)param_2[1] != 0) {
              lVar12 = *param_2;
              lVar9 = (longlong)(int)param_2[1] * 0xc0;
              do {
                if (*(char *)(lVar12 + 0x90) == '\x01') {
                  local_128 = DAT_14caa8578;
                  local_120 = (longlong *)0x0;
                  uStack_118 = 0;
                  local_110 = 0;
                  puVar10 = &DAT_14c846480;
                  puVar11 = local_108;
                  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
                    *puVar11 = *puVar10;
                    puVar10 = puVar10 + 1;
                    puVar11 = puVar11 + 1;
                  }
                  local_a8 = 0;
                  uStack_a0 = 0;
                  local_98 = 0;
                  uStack_80 = 0;
                  uStack_7c = 0;
                  uStack_90 = 0;
                  uStack_88 = 0;
                  local_84 = 0;
                  FUN_145989806(&uStack_80,param_1 + 0xe8);
                  lVar8 = FUN_14479d2ce(local_130);
                  FUN_146207f10(lVar12,*(undefined8 *)(lVar8 + 0x398),&local_128);
                  FUN_14144ff90(lVar3,&local_128);
                  FUN_145a1457c(&local_128);
                }
                lVar12 = lVar12 + 0xc0;
                lVar9 = lVar9 + -0xc0;
              } while (lVar9 != 0);
            }
          }
          LOCK();
          plVar2 = plVar13 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146207f10 FUN_146207f10 body=460 status=ok
// SIG undefined FUN_146207f10(void)

void FUN_146207f10(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_3 = *(undefined8 *)(param_1 + 0x70);
  if ((*(char *)(param_1 + 0x90) == '\0') && (*(char *)(param_1 + 0x91) == '\x01')) {
    FUN_147479f48(param_1 + 0x70,&local_38);
    *param_3 = local_38;
  }
  puVar6 = (undefined8 *)(param_1 + 0x10);
  puVar7 = param_3 + 4;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  if (*(char *)(param_1 + 0x91) == '\x01') {
    lVar5 = *(longlong *)(param_1 + 0xa0);
    if (lVar5 == 0) {
      uVar3 = FUN_140927942();
      lVar5 = FUN_14477b664(uVar3);
      *(longlong *)(param_1 + 0xa0) = lVar5;
    }
    lVar4 = *(longlong *)(param_1 + 0xa8);
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      lVar4 = 0;
      if ((lVar5 != 0) && (lVar4 = 0, *(longlong *)(param_1 + 0x98) != 0)) {
        plVar1 = *(longlong **)(lVar5 + 0xb8);
        if (plVar1 == (longlong *)0x0) {
LAB_1462080d9:
          lVar4 = 0;
        }
        else {
          cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
          if (cVar2 == '\0') goto LAB_1462080d9;
          uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x98));
        }
        *(longlong *)(param_1 + 0xa8) = lVar4;
      }
    }
LAB_1462080d0:
    param_3[2] = lVar4;
  }
  else {
    if (param_2 == 0) {
      lVar4 = *(longlong *)(param_1 + 0xb0);
      goto LAB_1462080d0;
    }
    param_3[3] = param_2;
  }
  lVar5 = *(longlong *)(param_1 + 0x80);
  if (lVar5 == 0) {
    uVar3 = FUN_1458f96d4();
    lVar5 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x80) = lVar5;
  }
  lVar4 = *(longlong *)(param_1 + 0x88);
  if (((lVar4 != 0) || (lVar4 = 0, lVar5 == 0)) || (*(longlong *)(param_1 + 0x78) == 0))
  goto LAB_146207fd9;
  plVar1 = *(longlong **)(lVar5 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_146208000:
    lVar4 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_146208000;
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x78));
  }
  *(longlong *)(param_1 + 0x88) = lVar4;
LAB_146207fd9:
  param_3[1] = lVar4;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462080de FUN_1462080de body=289 status=ok
// SIG undefined FUN_1462080de(void)

undefined4 FUN_1462080de(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)0x0;
  plVar6 = *(longlong **)(param_3 + 0x10);
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
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
  }
  uVar7 = 0;
  if (plVar6 != (longlong *)0x0) {
    uVar7 = *(undefined8 *)(param_3 + 8);
  }
  uStack_40 = 1;
  FUN_1413eac7e(&local_48,0);
  *local_48 = uVar7;
  local_48[1] = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  uVar5 = (**(code **)(*param_1 + 0x3c8))(param_1,param_2,&local_48);
  FUN_14127b1cd(local_48,uStack_40 & 0xffffffff);
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146208200 FUN_146208200 body=457 status=ok
// SIG undefined FUN_146208200(void)

undefined8 FUN_146208200(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  PSRWLOCK SRWLock;
  longlong *plVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)(param_2 + 0x2600);
  lVar9 = (**(code **)(*(longlong *)(param_2 + 0x2600) + 0x20))(plVar1);
  if ((((*(longlong *)(lVar9 + 0x18) != 0) && (*(longlong *)(lVar9 + 0x20) != 0)) ||
      (lVar9 = (**(code **)(*plVar1 + 0x28))(plVar1), lVar9 == 0)) ||
     (*(char *)(lVar9 + 0x4c1) != '\x01')) {
    uVar10 = 0;
    goto LAB_146208246;
  }
  FUN_1412e07b8(param_1,0);
  FUN_140d128b6(param_1,&local_50);
  lVar7 = local_50;
  SRWLock = (PSRWLOCK)(local_50 + 0x638);
  AcquireSRWLockExclusive(SRWLock);
  plVar1 = plStack_48;
  *(int *)(lVar7 + 0x630) = *(int *)(lVar7 + 0x630) + 1;
  if (plStack_48 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_48 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  FUN_1462084d0(lVar7,lVar9);
  FUN_1462083ca(&local_50,param_2);
  *(longlong *)(param_1 + 0x50) = local_50;
  *(longlong **)(param_1 + 0x58) = plStack_48;
  *(undefined8 *)(param_1 + 0x60) = local_40;
  dVar4 = *(double *)(param_1 + 0x50);
  dVar5 = *(double *)(param_1 + 0x58);
  dVar6 = *(double *)(param_1 + 0x60);
  if (((((dVar4 != *(double *)(lVar7 + 0x440)) || (NAN(dVar4) || NAN(*(double *)(lVar7 + 0x440))))
       || ((dVar5 != *(double *)(lVar7 + 0x448) ||
           ((NAN(dVar5) || NAN(*(double *)(lVar7 + 0x448)) || (dVar6 != *(double *)(lVar7 + 0x450)))
           )))) || (NAN(dVar6) || NAN(*(double *)(lVar7 + 0x450)))) ||
     (*(int *)(lVar7 + 0x458) == 0)) {
    *(double *)(lVar7 + 0x440) = dVar4;
    *(double *)(lVar7 + 0x448) = dVar5;
    *(double *)(lVar7 + 0x450) = dVar6;
    *(int *)(lVar7 + 0x458) = *(int *)(lVar7 + 0x458) + 1;
  }
  if (*(char *)(lVar7 + 0x4d8) == '\0') {
    if (*(int *)(lVar7 + 0x4dc) == 0) {
      iVar8 = 1;
      goto LAB_1462083b8;
    }
  }
  else {
    iVar8 = *(int *)(lVar7 + 0x4dc) + 1;
LAB_1462083b8:
    *(undefined1 *)(lVar7 + 0x4d8) = 0;
    *(int *)(lVar7 + 0x4dc) = iVar8;
  }
  *(undefined1 *)(param_1 + 0x220) = 0;
  ReleaseSRWLockExclusive(SRWLock);
  uVar10 = 1;
LAB_146208246:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 1462083ca FUN_1462083ca body=158 status=ok
// SIG undefined FUN_1462083ca(void)

undefined8 * FUN_1462083ca(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_140849bbe(param_2);
  if (((plVar4 != (longlong *)0x0) ||
      (plVar4 = (longlong *)FUN_146208468(param_2), plVar4 != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(*plVar4 + 0x4c8))(plVar4,DAT_14cbd6bb8), cVar3 != '\0')) {
    (**(code **)(*plVar4 + 0x4b0))(plVar4,param_1,DAT_14cbd6bb8);
    return param_1;
  }
  lVar1 = *(longlong *)(param_2 + 0x1c8);
  if (lVar1 == 0) {
    param_1[2] = DAT_14c8464f0;
    uVar2 = DAT_14c8464e8;
    *param_1 = DAT_14c8464e0;
    param_1[1] = uVar2;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x268);
    *param_1 = *(undefined8 *)(lVar1 + 0x260);
    param_1[1] = uVar2;
    param_1[2] = *(undefined8 *)(lVar1 + 0x270);
  }
  return param_1;
}



// FUNCTION 146208468 FUN_146208468 body=102 status=ok
// SIG undefined FUN_146208468(void)

void FUN_146208468(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_144a7a726();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462084d0 FUN_1462084d0 body=577 status=ok
// SIG undefined FUN_1462084d0(void)

void FUN_1462084d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  undefined1 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) goto LAB_146208690;
  FUN_145d18174();
  if (*(char *)(param_1 + 0x430) == '\0') {
    iVar4 = *(int *)(param_1 + 0x434) + 1;
LAB_146208515:
    *(undefined1 *)(param_1 + 0x430) = 1;
    *(int *)(param_1 + 0x434) = iVar4;
  }
  else {
    iVar4 = 1;
    if (*(int *)(param_1 + 0x434) == 0) goto LAB_146208515;
  }
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
  FUN_14620877e(param_2,param_1 + 0xb8);
  plVar1 = (longlong *)(param_1 + 0x500);
  local_41 = 9;
  local_40 = &local_41;
  FUN_1457807f0(plVar1,local_34);
  if (*(int *)(param_1 + 0x508) != *(int *)(param_1 + 0x534)) {
    lVar2 = param_1 + 0x538;
    if (*(longlong *)(param_1 + 0x540) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x540);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x548) - 1U & 9) * 4);
    if (iVar4 != -1) {
      lVar2 = *plVar1;
      iVar6 = iVar4;
      do {
        if (*(char *)(lVar2 + (longlong)iVar6 * 0x28) == '\t') goto LAB_1462085ac;
        iVar6 = *(int *)(lVar2 + (longlong)iVar6 * 0x28 + 0x20);
      } while (iVar6 != -1);
    }
  }
  goto LAB_1462085ee;
  while (iVar4 = *(int *)(pcVar5 + 0x20), iVar4 != -1) {
LAB_146208654:
    pcVar5 = (char *)(lVar2 + (longlong)iVar4 * 0x28);
    if (*pcVar5 == '\x05') goto LAB_146208668;
  }
  pcVar5 = (char *)0x0;
LAB_146208668:
  *(int *)(pcVar5 + 0x18) = *(int *)(pcVar5 + 0x18) + 1;
  lVar2 = FUN_146208712(pcVar5 + 8);
  *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
  FUN_140390f7a(param_2 + 0x4d8,lVar2 + 0x20);
  goto LAB_14620868a;
  while (iVar4 = *(int *)(pcVar5 + 0x20), iVar4 != -1) {
LAB_1462085ac:
    pcVar5 = (char *)(lVar2 + (longlong)iVar4 * 0x28);
    if (*pcVar5 == '\t') goto LAB_1462085c0;
  }
  pcVar5 = (char *)0x0;
LAB_1462085c0:
  *(int *)(pcVar5 + 0x18) = *(int *)(pcVar5 + 0x18) + 1;
  lVar2 = FUN_146208712(pcVar5 + 8);
  uVar3 = FUN_1447a1f4a(param_2 + 0x4c8);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  FUN_144a787a6(lVar2 + 8,uVar3);
LAB_1462085ee:
  local_41 = 5;
  local_40 = &local_41;
  FUN_1457807f0(plVar1,local_34);
  if (*(int *)(param_1 + 0x508) != *(int *)(param_1 + 0x534)) {
    lVar2 = param_1 + 0x538;
    if (*(longlong *)(param_1 + 0x540) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x540);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x548) - 1U & 5) * 4);
    if (iVar4 != -1) {
      lVar2 = *plVar1;
      iVar6 = iVar4;
      do {
        if (*(char *)(lVar2 + (longlong)iVar6 * 0x28) == '\x05') goto LAB_146208654;
        iVar6 = *(int *)(lVar2 + (longlong)iVar6 * 0x28 + 0x20);
      } while (iVar6 != -1);
    }
  }
LAB_14620868a:
  *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + 1;
LAB_146208690:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146208712 FUN_146208712 body=67 status=ok
// SIG undefined FUN_146208712(void)

longlong FUN_146208712(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14577ff56(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xe0 + *param_1;
  FUN_146208755(lVar2,1);
  return lVar2;
}



// FUNCTION 146208755 FUN_146208755 body=41 status=ok
// SIG undefined FUN_146208755(void)

void FUN_146208755(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14164d09a(param_1);
    param_1 = param_1 + 0xe0;
  }
  return;
}



// FUNCTION 14620877e FUN_14620877e body=226 status=ok
// SIG undefined FUN_14620877e(void)

undefined8 FUN_14620877e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x398);
  if (lVar5 == 0) {
    uVar3 = FUN_1465f8d32();
    lVar5 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x398) = lVar5;
  }
  lVar4 = *(longlong *)(param_1 + 0x3a0);
  if (lVar4 == 0) {
    if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x390) != 0)) {
      plVar1 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        *(undefined8 *)(param_1 + 0x3a0) = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x390));
        *(longlong *)(param_1 + 0x3a0) = lVar4;
        if (lVar4 != 0) goto LAB_146208801;
      }
    }
    FUN_14020fad6(param_2,L"Missing UX Name");
    return 0;
  }
LAB_146208801:
  uVar3 = FUN_1447a1f4a(lVar4 + 0x18);
  FUN_144a787a6(param_2,uVar3);
  FUN_140cac572(param_2);
  return 1;
}



// FUNCTION 14620886c FUN_14620886c body=781 status=ok
// SIG undefined FUN_14620886c(void)

undefined8 * FUN_14620886c(undefined8 *param_1)

{
  FUN_14064ffa8();
  param_1[0x4c0] = 0;
  param_1[0x4c1] = 0;
  param_1[0x4c2] = 2;
  *param_1 = &PTR_FUN_14b6858e0;
  param_1[0x72] = &PTR_FUN_14b685f60;
  param_1[0x73] = &PTR_FUN_14b685f80;
  param_1[0x74] = &PTR_FUN_14b685fb0;
  param_1[0x75] = &PTR_FUN_14b685fc0;
  param_1[0x76] = &PTR_FUN_14b686030;
  param_1[0x77] = &PTR_FUN_14b686060;
  param_1[0x78] = &PTR_FUN_14b686090;
  param_1[0x7f] = &PTR_FUN_14b686140;
  param_1[0x80] = &PTR_FUN_14b6861b0;
  param_1[0x81] = &PTR_FUN_14b686220;
  param_1[0x82] = &PTR_FUN_14b686250;
  param_1[0x83] = &PTR_FUN_14b686290;
  param_1[0x84] = &PTR_FUN_14b686330;
  param_1[0x85] = &PTR_FUN_14b686350;
  param_1[0x89] = &PTR_FUN_14b686370;
  param_1[0x8a] = &PTR_FUN_14b686430;
  param_1[0x8b] = &PTR_FUN_14b6864b0;
  param_1[0x8c] = &PTR_FUN_14b686500;
  param_1[0x8d] = &PTR_FUN_14b686540;
  param_1[0x8e] = &PTR_FUN_14b686560;
  param_1[0x8f] = &PTR_FUN_14b686580;
  param_1[0x90] = &PTR_FUN_14b6865a0;
  param_1[0x91] = &PTR_FUN_14b6865c0;
  param_1[0x92] = &PTR_FUN_14b6865e0;
  param_1[0x93] = &PTR_FUN_14b686600;
  param_1[0x94] = &PTR_FUN_14b686620;
  param_1[0x95] = &PTR_FUN_14b686640;
  param_1[0x96] = &PTR_FUN_14b686660;
  param_1[0x34b] = &PTR_FUN_14b686680;
  param_1[0x352] = &PTR_FUN_14b686690;
  param_1[0x353] = &PTR_FUN_14b6866d0;
  param_1[0x354] = &PTR_FUN_14b686710;
  param_1[0x355] = &PTR_FUN_14b686760;
  param_1[0x356] = &PTR_FUN_14b686790;
  param_1[0x359] = &PTR_FUN_14b6867d0;
  param_1[0x35a] = &PTR_FUN_14b6867e0;
  param_1[0x35b] = &PTR_FUN_14b686810;
  param_1[0x35c] = &PTR_FUN_14b6868b0;
  param_1[0x4bf] = &PTR_FUN_14b6868d0;
  FUN_140f23ff6(param_1 + 0x4c5);
  param_1[0x4e7] = 0;
  param_1[0x4e8] = 0;
  param_1[0x4e9] = 0;
  FUN_145967814(param_1 + 0x4ea,param_1 + 0x4c5,param_1,0);
  param_1[0x517] = 0;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc1920) {
    FUN_144b3d300(&DAT_14cbc1920);
    if (DAT_14cbc1920 == -1) {
      FUN_1446f470e(&DAT_14cbc1918,L"Container",1);
      _Init_thread_footer(&DAT_14cbc1920);
    }
  }
  param_1[0x501] = DAT_14cbc1918;
  return param_1;
}



// FUNCTION 146208b82 FUN_146208b82 body=785 status=ok
// SIG undefined FUN_146208b82(void)

undefined8 * FUN_146208b82(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_140fe66fa();
  *param_1 = &PTR_FUN_14bd80030;
  param_1[5] = &PTR_FUN_14bd80410;
  param_1[0x13] = &PTR_FUN_14bd80430;
  param_1[0x14] = &PTR_FUN_14bd80470;
  param_1[0x15] = &PTR_FUN_14bd804a0;
  param_1[0x16] = &PTR_FUN_14bd804b0;
  param_1[0x17] = &PTR_FUN_14bd804f0;
  memset(param_1 + 0x18,0,0x89);
  param_1[0x2a] = 0x7fefffffffffffff;
  param_1[0x2b] = 0x7fefffffffffffff;
  param_1[0x2c] = 0x7fefffffffffffff;
  param_1[0x2d] = 0xffefffffffffffff;
  param_1[0x2e] = 0xffefffffffffffff;
  param_1[0x2f] = 0xffefffffffffffff;
  param_1[0x30] = 0x7fefffffffffffff;
  param_1[0x31] = 0x7fefffffffffffff;
  param_1[0x32] = 0x7fefffffffffffff;
  param_1[0x33] = 0xffefffffffffffff;
  param_1[0x34] = 0xffefffffffffffff;
  param_1[0x35] = 0xffefffffffffffff;
  *(undefined1 *)(param_1 + 0x36) = 1;
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0x7fefffffffffffff;
  param_1[0x39] = 0x7fefffffffffffff;
  param_1[0x3a] = 0x7fefffffffffffff;
  param_1[0x3b] = 0xffefffffffffffff;
  param_1[0x3c] = 0xffefffffffffffff;
  param_1[0x3d] = 0xffefffffffffffff;
  param_1[0x3e] = 0x7fefffffffffffff;
  param_1[0x3f] = 0x7fefffffffffffff;
  param_1[0x40] = 0x7fefffffffffffff;
  param_1[0x41] = 0xffefffffffffffff;
  param_1[0x42] = 0xffefffffffffffff;
  param_1[0x43] = 0xffefffffffffffff;
  *(undefined1 *)(param_1 + 0x44) = 1;
  *(undefined1 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0x7fefffffffffffff;
  param_1[0x47] = 0x7fefffffffffffff;
  param_1[0x48] = 0x7fefffffffffffff;
  param_1[0x49] = 0xffefffffffffffff;
  param_1[0x4a] = 0xffefffffffffffff;
  param_1[0x4b] = 0xffefffffffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x4f] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x4d] = DAT_14c8464e0;
  param_1[0x4e] = uVar1;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0x3ff0000000000000;
  uVar1 = DAT_14c8464e8;
  param_1[0x5f] = DAT_14c8464e0;
  param_1[0x60] = uVar1;
  param_1[0x61] = DAT_14c8464f0;
  uVar4 = DAT_14c846518._4_4_;
  uVar3 = (undefined4)DAT_14c846518;
  uVar2 = DAT_14c846510._4_4_;
  *(undefined4 *)(param_1 + 0x62) = (undefined4)DAT_14c846510;
  *(undefined4 *)((longlong)param_1 + 0x314) = uVar2;
  *(undefined4 *)(param_1 + 99) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x31c) = uVar4;
  param_1[100] = DAT_14c846520;
  param_1[0x6a] = 0;
  param_1[0x6d] = 0x400000000;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x70] = 0x400000000;
  *(undefined1 *)(param_1 + 0x76) = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x7a] = 0;
  FUN_141300fc0(param_1 + 0x86);
  param_1[0xb0] = 0;
  *(undefined4 *)(param_1 + 0xb1) = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  *(undefined8 *)((longlong)param_1 + 0x58c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x594) = 0;
  param_1[0xb4] = 0;
  *(undefined4 *)(param_1 + 0xb5) = 0;
  param_1[0xbc] = 0;
  *(undefined4 *)(param_1 + 0xbd) = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5f4) = 0;
  param_1[0xc0] = 0;
  *(undefined4 *)(param_1 + 0xc1) = 0;
  *(undefined2 *)(param_1 + 0xc2) = 0;
  return param_1;
}



// FUNCTION 146208eac FUN_146208eac body=1325 status=ok
// SIG undefined FUN_146208eac(void)

longlong * FUN_146208eac(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  ulonglong local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
  }
  local_48 = (longlong *)FUN_14001cc68(0xd0,0x10);
  local_48[1] = (longlong)&DAT_100000001;
  *local_48 = (longlong)&PTR_FUN_14b99e810;
  plVar7 = local_48 + 2;
  local_48[3] = 0;
  local_48[4] = 0;
  *(undefined1 *)(local_48 + 5) = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  local_48[8] = 0;
  local_48[9] = 0;
  local_48[10] = 0;
  local_48[0xb] = 0;
  local_48[0xc] = 0;
  local_48[0xd] = 0;
  *(undefined8 *)((longlong)local_48 + 0x69) = 0;
  *(undefined8 *)((longlong)local_48 + 0x71) = 0;
  local_48[2] = (longlong)&PTR_FUN_14b99e830;
  local_48[0x10] = lVar3;
  *(undefined4 *)(local_48 + 0x11) = 0;
  *(undefined2 *)((longlong)local_48 + 0x8c) = 0;
  local_48[0x12] = 0;
  local_48[0x13] = 0;
  local_48[0x14] = 0;
  local_48[0x15] = 0;
  local_48[0x16] = 0;
  local_48[0x17] = 0;
  local_48[0x18] = 0;
  local_48[0x19] = 0;
  local_50 = plVar7;
  FUN_146209508(&local_50,plVar7);
  if ((*(char *)(param_1 + 0x10) == '\x01') && (uVar4 = *(ulonglong *)(param_1 + 0x18), uVar4 != 0))
  {
    plVar5 = *(longlong **)(param_1 + 0x20);
    if (plVar5 == (longlong *)0x0) {
      local_78 = (undefined1 *)*param_3;
      local_68 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      local_78 = (undefined1 *)*param_3;
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      plVar7 = local_50;
      local_68 = plVar5;
    }
    local_70 = uVar4;
    FUN_140f360c6(uVar4,&local_60,&local_78);
    plVar1 = local_58;
    if (plVar7 + 0x14 != &local_60) {
      plVar7[0x14] = local_60;
      local_60 = 0;
      plVar6 = (longlong *)plVar7[0x15];
      if (local_58 != plVar6) {
        local_58 = (longlong *)0x0;
        plVar7[0x15] = (longlong)plVar1;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar6 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
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
    }
    plVar7 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    plVar7 = local_68;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_68 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    plVar7 = local_50;
    if (local_50[0x14] != 0) {
      local_78 = &LAB_1457b8dbe;
      local_70 = local_70 & 0xffffffff00000000;
      FUN_1462093dc(local_50[0x14] + 0x18,&local_50);
    }
  }
  uVar4 = *(ulonglong *)(param_1 + 0x30);
  if (uVar4 != 0) {
    plVar5 = *(longlong **)(param_1 + 0x38);
    if (plVar5 == (longlong *)0x0) {
      local_78 = (undefined1 *)*param_3;
      local_68 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      local_78 = (undefined1 *)*param_3;
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      plVar7 = local_50;
      local_68 = plVar5;
    }
    local_70 = uVar4;
    FUN_140f360c6(uVar4,&local_60,&local_78);
    plVar1 = local_58;
    if (plVar7 + 0x16 != &local_60) {
      plVar7[0x16] = local_60;
      local_60 = 0;
      plVar6 = (longlong *)plVar7[0x17];
      if (local_58 != plVar6) {
        local_58 = (longlong *)0x0;
        plVar7[0x17] = (longlong)plVar1;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar6 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
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
    }
    plVar7 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    plVar7 = local_68;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_68 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    plVar7 = local_50;
    if (local_50[0x16] != 0) {
      local_78 = &LAB_140e673c8;
      local_70 = local_70 & 0xffffffff00000000;
      FUN_1462093dc(local_50[0x16] + 0x18,&local_50);
    }
  }
  plVar5 = local_48;
  *param_2 = (longlong)plVar7;
  param_2[1] = (longlong)local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_48 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462093dc FUN_1462093dc body=300 status=ok
// SIG undefined FUN_1462093dc(void)

void FUN_1462093dc(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

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
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b99e8e0;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b99e8e0;
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
                    /* WARNING: Could not recover jumptable at 0x0001462094f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146209508 FUN_146209508 body=162 status=ok
// SIG undefined FUN_146209508(void)

void FUN_146209508(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x20) != 0) && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x28) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x20) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x20) = param_2;
    if (*(longlong **)(param_2 + 0x28) == plVar2) goto LAB_146209547;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x28) = plVar2;
      goto LAB_146209547;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x28) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_146209547:
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
                    /* WARNING: Could not recover jumptable at 0x0001462095a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1462095aa FUN_1462095aa body=319 status=ok
// SIG undefined FUN_1462095aa(void)

void FUN_1462095aa(longlong param_1)

{
  undefined8 *puVar1;
  
  if (((*(uint *)(param_1 + 8) & 0x10) == 0) &&
     ((((0 < *(int *)(param_1 + 0x100) && (**(longlong **)(param_1 + 0xf8) != 0)) &&
       (*(int *)(**(longlong **)(param_1 + 0xf8) + 0x134) != 1)) ||
      ((*(char *)(param_1 + 0xcbe) != '\0' ||
       ((*(longlong *)(param_1 + 0xf0) != 0 &&
        (*(int *)(*(longlong *)(param_1 + 0xf0) + 0x134) != 1)))))))) {
    FUN_1434bc188(param_1);
  }
  FUN_14164d430(param_1,1);
  FUN_140457ffc(&DAT_14c9647a0,param_1);
  if (*(int *)(param_1 + 0xb48) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0xb40);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72((longlong *)(param_1 + 0xb40),0,0,0x10);
      *(undefined4 *)(param_1 + 0xb48) = 0;
    }
  }
  if (*(int *)(param_1 + 0xb58) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0xb50);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72((longlong *)(param_1 + 0xb50),0,0,0x10);
      *(undefined4 *)(param_1 + 0xb58) = 0;
    }
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1417f9c30(*(longlong *)(param_1 + 0x1a8),*(undefined8 *)(param_1 + 0xb00));
  }
  FUN_145d5dfbc(param_1);
  return;
}



// FUNCTION 146209706 FUN_146209706 body=171 status=ok
// SIG undefined FUN_146209706(void)

void FUN_146209706(longlong *param_1,undefined4 param_2,undefined8 param_3)

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
        goto LAB_14620979b;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14620979b:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1462097b2 FUN_1462097b2 body=587 status=ok
// SIG undefined FUN_1462097b2(void)

void FUN_1462097b2(longlong param_1)

{
  int *piVar1;
  float fVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  double dVar14;
  undefined1 auStack_108 [40];
  undefined8 local_e0 [16];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar6 = (longlong *)FUN_1411d67c8();
  if (plVar6 != (longlong *)0x0) {
    lVar7 = FUN_1447210f0(plVar6);
    if (lVar7 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x38);
      plVar4 = *(longlong **)(param_1 + 0x40);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if (lVar3 != 0) {
        lVar8 = FUN_1411d6a18(param_1);
        if (lVar8 != 0) {
          lVar9 = FUN_14018aa1e(lVar3 + 0x60);
          if (lVar9 != 0) {
            uVar10 = FUN_1407ca880();
            plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar10);
            if (plVar6 != (longlong *)0x0) {
              uVar10 = FUN_1407ca880();
              plVar11 = (longlong *)FUN_144718840(plVar6,uVar10);
              if ((plVar6 != plVar11) && (plVar11 != (longlong *)0x0)) {
                lVar12 = (**(code **)(*plVar11 + 0x58))(plVar11,&DAT_14cb8d438);
                if (lVar12 != 0) {
                  if (*(longlong **)(lVar7 + 0x178) == (longlong *)0x0) {
                    dVar14 = *(double *)(lVar7 + 0x6d0);
                  }
                  else {
                    dVar14 = (double)(**(code **)(**(longlong **)(lVar7 + 0x178) + 0x640))();
                  }
                  fVar2 = *(float *)(lVar8 + 0x84);
                  if (*(longlong *)(lVar12 + 0xae8) == 0) {
                    iVar5 = FUN_14164d60e(lVar12);
                    if (iVar5 != 1) {
                      FUN_14073397e(lVar12,1,1);
                    }
                  }
                  iVar5 = FUN_14164d60e(lVar12);
                  if (iVar5 == 1) {
                    uVar13 = -(uint)(fVar2 < 0.0);
                    FUN_14164d696(lVar12,lVar9);
                    FUN_14164d616(lVar12,uVar13 & 0x7f7fffff |
                                         ~uVar13 & (uint)((float)dVar14 - fVar2),1);
                    FUN_14164d71c(lVar12,*(undefined1 *)(lVar3 + 0x88));
                  }
                  else if (iVar5 == 0) {
                    FUN_148942ec4(local_e0);
                    local_e0[0] = DAT_14cb8d430;
                    if (DAT_14c950c29 == '\x01') {
                      FUN_1456cec3c(lVar9);
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar4 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146209a03 FUN_146209a03 body=792 status=ok
// SIG undefined FUN_146209a03(void)

void FUN_146209a03(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
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
  *local_30 = &PTR_FUN_14a183330;
  FUN_1448b6402(&DAT_14c867390,local_38,&local_30);
  FUN_1449db362(&local_30);
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
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
  *local_30 = &PTR_FUN_14a1834a0;
  FUN_1448b6402(&DAT_14c872b90,local_38,&local_30);
  FUN_1449db362(&local_30);
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
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
  *local_30 = &PTR_FUN_14a183520;
  FUN_1448b6402(&DAT_14c872c10,local_38,&local_30);
  FUN_1449db362(&local_30);
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
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
  *local_30 = &PTR_FUN_14a1835a0;
  FUN_1448b6402(&DAT_14c867518,local_38,&local_30);
  FUN_1449db362(&local_30);
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
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
  *local_30 = &PTR_FUN_14a183620;
  FUN_1448b6402(&DAT_14c872bf8,local_38,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146209d1c FUN_146209d1c body=116 status=ok
// SIG undefined FUN_146209d1c(void)

void FUN_146209d1c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = FUN_14487fd02(param_1 + -0xe48);
  if ((iVar3 == 3) && (*(longlong *)(param_1 + -0xab0) != 0)) {
    lVar4 = FUN_140082f10();
    lVar1 = *(longlong *)(param_1 + -0xab0);
    if (((lVar1 != 0) &&
        (((lVar4 != 0 && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
         (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38))))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      FUN_146209d90(lVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 146209d90 FUN_146209d90 body=289 status=ok
// SIG undefined FUN_146209d90(void)

void FUN_146209d90(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 ***_Src;
  undefined1 auStack_78 [44];
  short local_4c [2];
  undefined8 **local_48 [2];
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_14497e828();
  if (lVar3 != 0) {
    lVar4 = FUN_144a79464();
    if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) && (lVar3 = *(longlong *)(lVar3 + 0x1e0), lVar3 != 0)) &&
       ((*(longlong *)(lVar3 + 0x68) != 0 && (lVar4 = *(longlong *)(lVar3 + 0x30), lVar4 != 0)))) {
      FUN_14042af24(*(longlong *)(lVar3 + 0x68),local_4c,param_1);
      if (-1 < local_4c[0]) {
        *(undefined1 *)(param_1 + 0x4c1) = 1;
        FUN_146209eb2(lVar4,local_48,local_4c,1);
        *(undefined1 *)(param_1 + 0x4c1) = 0;
        iVar1 = *(int *)(param_2 + 1);
        uVar2 = (uint)(local_38 + 1U);
        *(uint *)(param_2 + 1) = iVar1 + uVar2;
        if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar1) < uVar2) {
          FUN_1447403be(param_2);
        }
        _Src = local_48;
        if (0xf < local_30) {
          _Src = (undefined8 ***)local_48[0];
        }
        memcpy((void *)*param_2,_Src,local_38 + 1U);
        FUN_1401d9a90(local_48);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146209eb2 FUN_146209eb2 body=831 status=ok
// SIG undefined FUN_146209eb2(void)

undefined8 * FUN_146209eb2(undefined1 *param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_128 [32];
  longlong *local_108;
  longlong *local_100;
  undefined2 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong *plStack_e0;
  longlong local_d8;
  ulonglong uStack_d0;
  longlong local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [24];
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0xffff;
  lVar4 = FUN_140b9fe48(param_1,param_3);
  if (lVar4 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
  }
  else {
    local_b8 = 0;
    uStack_b0 = 0;
    if ((param_4 != '\0') && (*(int *)(lVar4 + 0x2c) == 0)) {
      *(undefined4 *)(lVar4 + 0x2c) = 1;
      FUN_14164d7a6(param_1,&local_a8,lVar4);
    }
    if (((*(int *)(lVar4 + 0x2c) == 1) && (*(longlong *)(param_1 + 0x1b0) != 0)) &&
       (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x1e0), lVar5 != 0)) {
      lVar5 = (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x10))(lVar5 + 0x28);
      if (lVar5 != 0) {
        FUN_1447a97f4(local_78,lVar5 + 0x80);
        local_108 = (longlong *)param_1;
        FUN_1414e7168(&local_b8,lVar4,&DAT_14cb8dbd0,local_78);
        if (local_60 != 0) {
          FUN_1400020a8();
        }
      }
    }
    local_c8 = 0;
    plStack_c0 = (longlong *)0x0;
    FUN_14009b010(&local_c8,3,0);
    local_100 = &local_d8;
    local_d8 = 0;
    uStack_d0 = 0;
    local_108 = &local_c8;
    FUN_14164d87e(&local_a8,lVar4,2,lVar4 + 0x68);
    if (0 < (int)uStack_d0) {
      FUN_143e5f94d(lVar4,&local_a8,2,&local_d8);
    }
    local_e8 = 0;
    plStack_e0 = (longlong *)0x0;
    FUN_14009b010(&local_e8,3,0);
    local_80 = DAT_14cb8db20;
    local_88 = DAT_14cb8db18;
    FUN_1448075d0(local_78);
    if (local_c8 != 0) {
      local_108 = (longlong *)((ulonglong)local_108 & 0xffffffffffffff00);
      FUN_14014191c(local_c8,local_78,&local_e8,0);
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    FUN_1447325ac(&DAT_14c9485f0,local_78,1);
    local_108 = (longlong *)local_78;
    FUN_14620a1f2(param_1,&local_a8,lVar4,&local_c8);
    param_2[2] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[3] = 0xf;
    local_f8 = 0;
    local_f4 = 0;
    local_f0 = 0;
    FUN_140c1c83a(local_c8,param_2);
    plVar3 = plStack_e0;
    if (plStack_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_e0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_e0)(plStack_e0);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    FUN_14164d856(local_d8,uStack_d0 & 0xffffffff);
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    plVar3 = plStack_c0;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_c0)(plStack_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    FUN_1414e70fc(&local_b8);
  }
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620a1f2 FUN_14620a1f2 body=918 status=ok
// SIG undefined FUN_14620a1f2(void)

void FUN_14620a1f2(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  longlong local_98;
  longlong *plStack_90;
  longlong local_88;
  longlong *plStack_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_78 = 0;
  uStack_70 = 0;
  iVar7 = *(int *)(param_1 + 0x1f8);
  local_b0 = param_4;
  if (iVar7 < 1) {
    uVar8 = 0;
  }
  else {
    lVar11 = 0;
    lVar10 = 0;
    lVar9 = 0;
    local_c0 = param_2;
    do {
      lVar3 = *(longlong *)(param_1 + 0x1f0);
      if (*(longlong *)(lVar3 + 0xc + lVar11) == *param_5) {
        local_b8 = lVar3 + lVar11;
        lVar4 = *(longlong *)(param_3 + 0x78);
        local_88 = 0;
        plStack_80 = (longlong *)0x0;
        FUN_14009b010(&local_88,3,0);
        uVar5 = local_c0;
        if ((byte)(*(char *)(lVar3 + 8 + lVar11) - 1U) < 2) {
          iVar7 = *(int *)(lVar4 + 0x10 + lVar10);
          if (((iVar7 != 0) && (*(int *)(lVar4 + 0x14 + lVar10) != 0)) && (iVar7 != DAT_14c948000))
          {
            lVar12 = lVar4 + lVar10 + 0x10;
            local_98 = 0;
            plStack_90 = (longlong *)0x0;
            FUN_14009b010(&local_98,1,0);
            if (local_98 != 0) {
              FUN_1402afb64(local_98,lVar12);
            }
            if (*local_b0 != 0) {
              local_d8 = (longlong *)((ulonglong)local_d8 & 0xffffffffffffff00);
              FUN_14014191c(*local_b0,lVar11 + 0x28 + lVar3,&local_98,0);
            }
            local_a8 = 0;
            plStack_a0 = (longlong *)0x0;
            FUN_14009b010(&local_a8,3,0);
            FUN_14131a8f2(&local_a8,lVar12);
            uVar5 = local_c0;
            local_c8 = &local_78;
            local_d8 = &local_a8;
            local_d0 = (int)lVar9;
            FUN_14164dd40(local_c0,param_3,2,lVar4 + lVar10 + 0x60);
            if (local_88 != 0) {
              local_d8 = (longlong *)((ulonglong)local_d8 & 0xffffffffffffff00);
              FUN_14014191c(local_88,lVar12,&local_a8,0);
            }
            local_d8 = (longlong *)local_b8;
            FUN_14620a1f2(param_1,uVar5);
            plVar6 = plStack_a0;
            if (plStack_a0 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_a0 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_a0)(plStack_a0);
                LOCK();
                piVar2 = (int *)((longlong)plVar6 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                }
              }
            }
            plVar6 = plStack_90;
            if (plStack_90 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_90 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_90)(plStack_90);
                LOCK();
                piVar2 = (int *)((longlong)plVar6 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                }
              }
            }
            goto LAB_14620a3f0;
          }
        }
        else {
          local_c8 = &local_78;
          local_d8 = &local_88;
          local_d0 = (int)lVar9;
          FUN_14164dd40(local_c0,param_3,2,lVar4 + lVar10);
          local_d8 = (longlong *)local_b8;
          FUN_14620a1f2(param_1,uVar5,param_3,&local_88);
LAB_14620a3f0:
          if (0 < (int)uStack_70) {
            FUN_143e5f94d(param_3,local_c0);
          }
          if (*local_b0 != 0) {
            local_d8 = (longlong *)((ulonglong)local_d8 & 0xffffffffffffff00);
            FUN_140516f2a(*local_b0,local_b8);
          }
        }
        plVar6 = plStack_80;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_80 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_80)(plStack_80);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        iVar7 = *(int *)(param_1 + 0x1f8);
      }
      lVar9 = lVar9 + 1;
      lVar10 = lVar10 + 0x70;
      lVar11 = lVar11 + 0x50;
    } while (lVar9 < iVar7);
    uVar8 = uStack_70 & 0xffffffff;
  }
  FUN_14164d856(local_78,uVar8);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620a58c FUN_14620a58c body=95 status=ok
// SIG undefined FUN_14620a58c(void)

void FUN_14620a58c(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_140e44844();
  lVar3 = FUN_14620a5eb();
  uVar1 = *(undefined4 *)(lVar3 + 0x20);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_141526668(lVar2);
  }
  FUN_14164e3a2(param_1 + 0x28,param_2,param_3,uVar4,uVar1,0);
  return;
}



// FUNCTION 14620a5eb FUN_14620a5eb body=291 status=ok
// SIG undefined FUN_14620a5eb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14620a5eb(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbe6258 == (longlong *)0x0) {
    _DAT_14cbe62b0 = 0;
    uRam000000014cbe62b8 = 0;
    _DAT_14cbe62a0 = 0;
    uRam000000014cbe62a8 = 0;
    _DAT_14cbe6290 = 0;
    uRam000000014cbe6298 = 0;
    _DAT_14cbe6280 = 0;
    uRam000000014cbe6288 = 0;
    _DAT_14cbe6270 = 0;
    uRam000000014cbe6278 = 0;
    _DAT_14cbe6260 = 0;
    DAT_14cbe6268 = 0;
    FUN_1414f3d1e(&DAT_14cbe6260);
    DAT_14cbe6258 = (longlong *)&DAT_14cbe6260;
  }
  plVar1 = DAT_14cbe6258;
  plVar3 = DAT_14cbe6258 + 1;
  if ((char)DAT_14cbe6258[2] == '\0') {
LAB_14620a61c:
    if (*plVar3 == 0) goto LAB_14620a6b0;
    cVar2 = FUN_1449e3c20(DAT_14cbe6258);
    if (cVar2 == '\0') goto LAB_14620a636;
  }
  else {
    if ((char)DAT_14cbe6258[2] == '\x02') {
      plVar3 = (longlong *)(*plVar3 + 0x30);
      goto LAB_14620a61c;
    }
LAB_14620a6b0:
    lVar4 = FUN_140162146();
    if (lVar4 == 0) goto LAB_14620a636;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_vault_cards",0);
    FUN_140024ada(&local_48,plVar1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_14620a636:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620a710 FUN_14620a710 body=25 status=ok
// SIG undefined FUN_14620a710(void)

undefined8 FUN_14620a710(undefined8 param_1,undefined8 param_2)

{
  FUN_14620a72a(param_2);
  return param_2;
}



// FUNCTION 14620a72a FUN_14620a72a body=377 status=ok
// SIG undefined FUN_14620a72a(void)

undefined8 * FUN_14620a72a(undefined8 *param_1)

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
  if ((DAT_14cb24678 == (longlong *)0x0 || DAT_14cb24680 == 0) ||
     (cVar3 = (**(code **)(*DAT_14cb24678 + 0x30))(), cVar3 == '\0')) {
    puVar4 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &PTR_FUN_14ac8d630;
    puVar4[4] = 0;
    puVar4[5] = 0;
    *(undefined4 *)((longlong)puVar4 + 0x4c) = 0x80;
    *(undefined4 *)(puVar4 + 10) = 0xffffffff;
    plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14ac8d650;
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
    plVar5 = DAT_14cb24678;
    if (DAT_14cb24680 == 0) {
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



// FUNCTION 14620a8a4 FUN_14620a8a4 body=80 status=ok
// SIG undefined FUN_14620a8a4(void)

void FUN_14620a8a4(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cb12c30;
  DAT_14cb12c28 = 0;
  if (DAT_14cb12c30 != (longlong *)0x0) {
    DAT_14cb12c30 = (longlong *)0x0;
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
                    /* WARNING: Could not recover jumptable at 0x00014620a8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14620a8f4 FUN_14620a8f4 body=9 status=ok
// SIG undefined FUN_14620a8f4(void)

void FUN_14620a8f4(longlong param_1)

{
  FUN_14620a8fe(param_1 + 0x10);
  return;
}



// FUNCTION 14620a8fe FUN_14620a8fe body=334 status=ok
// SIG undefined FUN_14620a8fe(void)

void FUN_14620a8fe(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *(undefined1 *)(param_1 + 0x180) = 1;
  FUN_14164e6d6();
  *(undefined4 *)(param_1 + 0x178) = 0;
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_1400020a8();
  }
  FUN_14620aa4c(param_1 + 0x130);
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0xe0);
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
  puVar4 = *(undefined8 **)(param_1 + 0xd0);
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  puVar4 = *(undefined8 **)(param_1 + 0xa8);
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014620aa48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14620aa4c FUN_14620aa4c body=53 status=ok
// SIG undefined FUN_14620aa4c(void)

void FUN_14620aa4c(longlong *param_1)

{
  FUN_14620aa82();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14620aa82 FUN_14620aa82 body=333 status=ok
// SIG undefined FUN_14620aa82(void)

void FUN_14620aa82(longlong *param_1)

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
      FUN_147e0e83e((longlong)iStack_4c * 0x20 + *local_68);
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



// FUNCTION 14620abd0 FUN_14620abd0 body=104 status=ok
// SIG undefined FUN_14620abd0(void)

undefined8 FUN_14620abd0(longlong param_1,undefined4 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = &local_9;
  local_18 = *(undefined8 *)(param_1 + 0x30);
  local_20 = param_4;
  local_10 = param_2;
  local_9 = param_3;
  FUN_14620ac3a(param_1 + 8,param_1 + 0x38,&local_18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620ac3a FUN_14620ac3a body=245 status=ok
// SIG undefined FUN_14620ac3a(void)

void FUN_14620ac3a(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined4 *param_4,
                  undefined1 *param_5,undefined8 param_6)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  void **local_70;
  undefined8 local_68;
  longlong local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)(param_2 + 1);
  pcVar2 = (code *)*param_2;
  lVar3 = *param_3;
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_1 + 3);
  lVar4 = (longlong)local_50;
  _Src = (void *)param_1[2];
  if (lVar4 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar4 * 2);
  }
  local_68 = *param_1;
  local_60 = param_1[1];
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  local_70 = &local_58;
  local_78 = &local_68;
  (*pcVar2)(lVar3 + iVar1,*param_4,*param_5,param_6);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620ad30 FUN_14620ad30 body=585 status=ok
// SIG undefined FUN_14620ad30(void)

undefined8 FUN_14620ad30(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 *local_88;
  ulonglong uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  longlong local_68 [3];
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  FUN_140056680(&local_50,&DAT_14c846b20);
  local_68[0] = 0;
  local_68[1] = 0;
  puVar3 = local_50;
  if (local_48 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  cVar2 = FUN_14620af7a(puVar3,local_68);
  if (cVar2 != '\0') {
    uVar7 = 0;
    goto LAB_14620aee9;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_98 = &DAT_14c872af8;
  FUN_14105aa76(DAT_14c872ce0,L"/Script/MoviePlayer.MoviePlayerSettings",
                L"UseDefaultStartupMoviesIfParam");
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  local_98 = &DAT_14c872af8;
  FUN_14105aa76(DAT_14c872ce0,L"/Script/MoviePlayer.MoviePlayerSettings",
                L"UseAltStartupMoviesIfParam",&local_88);
  lVar1 = local_78;
  lVar4 = (longlong)(int)uStack_80;
  if (lVar4 == 0) {
LAB_14620af2d:
    uVar7 = 0;
  }
  else {
    lVar6 = (longlong)(int)uStack_70;
    if (lVar6 != 0) {
      lVar4 = 0;
      do {
        if (1 < *(int *)(lVar1 + 8 + lVar4)) {
          puVar3 = &DAT_149dfb77a;
          if (local_48 != 0) {
            puVar3 = local_50;
          }
          cVar2 = FUN_14054d46e(puVar3,*(undefined8 *)(lVar1 + lVar4));
          if (cVar2 != '\0') goto LAB_14620af2d;
        }
        lVar4 = lVar4 + 0x10;
      } while (lVar6 * 0x10 != lVar4);
      lVar4 = (longlong)(int)uStack_80;
      if (lVar4 == 0) goto LAB_14620af2d;
    }
    puVar5 = local_88 + lVar4 * 2;
    uVar7 = 0;
    puVar8 = local_88;
    do {
      if (1 < *(int *)(puVar8 + 1)) {
        puVar3 = &DAT_149dfb77a;
        if (local_48 != 0) {
          puVar3 = local_50;
        }
        cVar2 = FUN_14054d46e(puVar3,*puVar8);
        if (cVar2 != '\0') {
          FUN_14020fad6(param_1,L"AltStartupMovies");
          uVar7 = 1;
          break;
        }
      }
      puVar8 = puVar8 + 2;
    } while (puVar8 != puVar5);
  }
  FUN_1447a1747(local_88,uStack_80 & 0xffffffff);
  if (local_88 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
LAB_14620aee9:
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14620af7a FUN_14620af7a body=224 status=ok
// SIG undefined FUN_14620af7a(void)

undefined8 FUN_14620af7a(short *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  short *local_48;
  int local_40;
  short *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = param_1;
  if (*param_1 == 0) {
    uVar2 = 0;
  }
  else {
    do {
      FUN_14619c2be(&local_48,&local_38,0);
      uVar1 = 0;
      if (1 < local_40) {
        if (*local_48 == 0x2d) {
          local_58 = 0;
          uVar1 = FUN_14063337c(local_48,L"-map=",param_2,1);
          uVar1 = uVar1 & 0xff;
        }
        else {
          FUN_1402980a2(param_2);
          uVar1 = 1;
        }
      }
      if (local_48 != (short *)0x0) {
        FUN_1400020a8();
      }
      if ((uVar1 & 1) != 0) {
        uVar2 = 1;
        break;
      }
      uVar2 = 0;
    } while (*local_38 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14620b05c FUN_14620b05c body=704 status=ok
// SIG undefined FUN_14620b05c(void)

void FUN_14620b05c(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  code *pcVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar2 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar2 != 0) {
    lVar9 = *(longlong *)(param_1 + 0x38);
    lVar6 = 0;
    do {
      *(undefined2 *)(lVar9 + 0x10 + lVar6) = 0x100;
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar2 * 0x18 != lVar6);
  }
  plVar1 = (longlong *)(param_1 + 0x38);
  if ((longlong)(int)param_2[1] != 0) {
    lVar9 = *param_2;
    local_68 = lVar9 + (longlong)(int)param_2[1] * 8;
    local_70 = param_4 + 4;
    do {
      iVar2 = *(int *)(param_1 + 0x40);
      local_58 = lVar9;
      local_50 = param_3;
      if ((longlong)iVar2 != 0) {
        lVar6 = *(longlong *)(param_1 + 0x38);
        lVar8 = 0;
        do {
          cVar3 = FUN_148d178e6(&local_58,lVar8 + lVar6);
          if (cVar3 != '\0') {
            uVar7 = (int)(lVar8 >> 3) * -0x55555555;
            if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(param_1 + 0x40))) {
              *(undefined1 *)(*plVar1 + 0x11 + (ulonglong)(uVar7 & 0x7fffffff) * 0x18) = 0;
              if ((*param_5 == 0) ||
                 (lVar6 = *(longlong *)(*plVar1 + (ulonglong)(uVar7 & 0x7fffffff) * 0x18),
                 lVar6 == 0)) goto LAB_14620b1be;
              lVar8 = FUN_145b8aeac();
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) goto LAB_14620b1be;
              pcVar10 = (code *)*param_5;
              plVar5 = param_5 + 4;
              if ((longlong *)param_5[2] != (longlong *)0x0) {
                plVar5 = (longlong *)param_5[2];
              }
              goto LAB_14620b25e;
            }
            break;
          }
          lVar8 = lVar8 + 0x18;
        } while ((longlong)iVar2 * 0x18 != lVar8);
      }
      plVar5 = (longlong *)FUN_1404e9402(plVar1);
      *(undefined2 *)(plVar5 + 2) = 1;
      uVar4 = FUN_145b8aeac();
      FUN_1404e95e0(param_1,&local_60,uVar4);
      if ((*plVar5 != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      lVar6 = local_60;
      *plVar5 = local_60;
      if (local_60 != 0) {
        lVar8 = FUN_145b8aeac();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) &&
           (pcVar10 = (code *)*param_4, pcVar10 != (code *)0x0)) {
          plVar5 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar5 = local_70;
          }
LAB_14620b25e:
          uVar4 = (**(code **)(*plVar5 + 8))();
          (*pcVar10)(uVar4,lVar6,lVar9);
        }
      }
LAB_14620b1be:
      lVar9 = lVar9 + 8;
    } while (lVar9 != local_68);
  }
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar9 = (longlong)*(int *)(param_1 + 0x40) * 0x18;
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
    do {
      if ((char)plVar5[1] == '\x01') {
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar6 = 0;
        }
        else {
          FUN_140a97e96(*(longlong *)(param_1 + 0x30),&local_60,plVar5[-1]);
          lVar6 = local_60;
        }
        *plVar5 = lVar6;
      }
      else if (*(char *)((longlong)plVar5 + 9) == '\x01') {
        if (*(longlong *)(param_1 + 0x30) != 0) {
          FUN_140993b54(*(longlong *)(param_1 + 0x30),plVar5);
        }
        FUN_1404e9462(param_1,plVar5 + -1);
      }
      plVar5 = plVar5 + 3;
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != 0);
  }
  FUN_14620b31e(plVar1);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14620b31e FUN_14620b31e body=106 status=ok
// SIG undefined FUN_14620b31e(void)

void FUN_14620b31e(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < 1) {
    return;
  }
  uVar4 = 0;
  bVar1 = false;
  do {
    uVar4 = (ulonglong)(int)uVar4;
    lVar3 = uVar4 * 0x18 + 0x11;
    while (*(char *)(*param_1 + lVar3) == '\0') {
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x18;
      if ((longlong)iVar2 <= (longlong)uVar4) {
        if (!bVar1) {
          return;
        }
        goto LAB_14620b37a;
      }
    }
    FUN_1404ec6d4(param_1,uVar4 & 0xffffffff);
    iVar2 = (int)param_1[1];
    bVar1 = true;
  } while ((int)uVar4 < iVar2);
LAB_14620b37a:
  FUN_141089ae6(param_1);
  return;
}



// FUNCTION 14620b388 FUN_14620b388 body=259 status=ok
// SIG undefined FUN_14620b388(void)

int FUN_14620b388(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = *param_1;
  iVar2 = (int)param_1[1];
  lVar9 = (longlong)iVar2;
  if (lVar9 != 0) {
    uVar7 = 0;
    do {
      if (*param_2 == *(longlong *)(lVar8 + uVar7)) {
        iVar6 = (int)(uVar7 >> 5) * -0x55555555;
        if (iVar6 != -1) {
          return iVar6;
        }
        break;
      }
      uVar7 = uVar7 + 0x60;
    } while (lVar9 * 0x60 != uVar7);
  }
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_14620b48c(param_1,iVar2);
    lVar8 = *param_1;
  }
  lVar9 = lVar9 * 0x60;
  lVar3 = *param_2;
  lVar4 = param_2[1];
  lVar5 = param_2[3];
  plVar1 = (longlong *)(lVar8 + 0x10 + lVar9);
  *plVar1 = param_2[2];
  plVar1[1] = lVar5;
  *(longlong *)(lVar8 + lVar9) = lVar3;
  ((longlong *)(lVar8 + lVar9))[1] = lVar4;
  *(longlong *)(lVar8 + 0x20 + lVar9) = param_2[4];
  lVar3 = param_2[6];
  plVar1 = (longlong *)(lVar8 + 0x28 + lVar9);
  *plVar1 = param_2[5];
  plVar1[1] = lVar3;
  *(undefined8 *)(lVar8 + 0x38 + lVar9) = 0;
  *(longlong *)(lVar8 + 0x38 + lVar9) = param_2[7];
  param_2[7] = 0;
  *(int *)(lVar8 + 0x40 + lVar9) = (int)param_2[8];
  *(undefined4 *)(lVar8 + 0x44 + lVar9) = *(undefined4 *)((longlong)param_2 + 0x44);
  param_2[8] = 0;
  *(undefined8 *)(lVar8 + 0x48 + lVar9) = 0;
  *(longlong *)(lVar8 + 0x48 + lVar9) = param_2[9];
  param_2[9] = 0;
  *(int *)(lVar8 + 0x50 + lVar9) = (int)param_2[10];
  *(undefined4 *)(lVar8 + 0x54 + lVar9) = *(undefined4 *)((longlong)param_2 + 0x54);
  param_2[10] = 0;
  *(undefined1 *)(lVar8 + 0x5c + lVar9) = *(undefined1 *)((longlong)param_2 + 0x5c);
  *(int *)(lVar8 + 0x58 + lVar9) = (int)param_2[0xb];
  return iVar2;
}



// FUNCTION 14620b48c FUN_14620b48c body=147 status=ok
// SIG undefined FUN_14620b48c(void)

void FUN_14620b48c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14620b520 FUN_14620b520 body=287 status=ok
// SIG undefined FUN_14620b520(void)

void FUN_14620b520(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  int local_64;
  
  iVar1 = (int)param_1[1];
  lVar9 = (longlong)iVar1;
  if (lVar9 != 0) {
    lVar2 = *param_1;
    bVar3 = FUN_14620b640(param_2,lVar2);
    local_64 = 0;
    iVar6 = 0;
    do {
      lVar5 = (longlong)iVar6;
      iVar11 = iVar6 + 1;
      if (iVar6 + 1 < iVar1) {
        iVar11 = iVar1;
      }
      lVar10 = lVar5 * 0x20;
      lVar12 = lVar2 + 0x20 + lVar10;
      iVar8 = iVar6;
      do {
        lVar5 = lVar5 + 1;
        iVar7 = iVar11;
        if (lVar9 <= lVar5) break;
        bVar4 = FUN_14620b640(param_2,lVar12);
        iVar8 = iVar8 + 1;
        lVar12 = lVar12 + 0x20;
        iVar7 = iVar8;
      } while ((bVar3 & 1) == bVar4);
      iVar11 = iVar7 - iVar6;
      if ((bVar3 & 1) == 0) {
        if (local_64 != iVar6) {
          memmove((void *)((longlong)local_64 * 0x20 + lVar2),(void *)(lVar10 + lVar2),
                  (longlong)iVar11 << 5);
        }
        local_64 = local_64 + iVar11;
      }
      else {
        FUN_140d9afb1(lVar10 + lVar2,iVar11);
      }
      iVar6 = iVar7;
      bVar3 = bVar3 ^ 1;
    } while (lVar5 < lVar9);
    *(int *)(param_1 + 1) = local_64;
  }
  return;
}



// FUNCTION 14620b640 FUN_14620b640 body=123 status=ok
// SIG undefined FUN_14620b640(void)

undefined8 FUN_14620b640(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar2 = &DAT_14c9485f0;
  if (*(undefined4 **)(*param_2 + 8) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(*param_2 + 8);
  }
  FUN_1447325ac(puVar2,&local_28,1);
  if (local_28 == *param_1) {
    uVar1 = FUN_1409d2f40(param_2 + 2,param_1[3]);
  }
  else {
    uVar1 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620b6bc FUN_14620b6bc body=288 status=ok
// SIG undefined FUN_14620b6bc(void)

void FUN_14620b6bc(longlong param_1)

{
  undefined1 auStack_118 [32];
  code *local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong local_e0;
  code *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined *local_88;
  longlong local_80 [8];
  code *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e8 = 0;
  FUN_14485c47a(&local_e8,param_1);
  local_40 = FUN_143ef25e4;
  local_38 = &LAB_143ef27b8;
  local_30 = &LAB_143ef27c0;
  local_28 = &DAT_143ef27c8;
  local_80[0] = local_e8;
  bifrost::session::onAutoLogout(*(undefined8 *)(param_1 + 0x2b8),local_80);
  FUN_14164e968(param_1);
  FUN_14620b8ab(param_1);
  FUN_14620b7de(param_1);
  local_f8 = FUN_143efedf4;
  local_f0 = local_80;
  local_80[0] = param_1;
  bifrost::account::get(*(undefined8 *)(param_1 + 0x2b8));
  local_a0 = FUN_143efeffa;
  local_98 = &LAB_143eff122;
  local_90 = &LAB_143eff12a;
  local_88 = &DAT_143eff132;
  local_e0 = param_1;
  bifrost::experimental::onAuthToken(*(undefined8 *)(param_1 + 0x2b8));
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620b7de FUN_14620b7de body=204 status=ok
// SIG undefined FUN_14620b7de(void)

void FUN_14620b7de(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar2 = bifrost::wallet::getEnabled(*(User **)(param_1 + 0x2b8));
  if (bVar2) {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14b4daf00;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar3;
    *local_28 = &PTR_FUN_14b4daca0;
    FUN_148a628ae(param_1,&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620b8ab FUN_14620b8ab body=232 status=ok
// SIG undefined FUN_14620b8ab(void)

void FUN_14620b8ab(undefined8 param_1)

{
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  code *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined *local_88;
  undefined8 local_80;
  code *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = 0;
  FUN_14485c47a(&local_e8,param_1);
  local_40 = FUN_143ef5366;
  local_38 = &LAB_143ef568a;
  local_30 = &LAB_143ef5692;
  local_28 = &DAT_143ef569a;
  local_80 = local_e8;
  bifrost::rewards::onOffer();
  local_e8 = 0;
  FUN_14485c47a(&local_e8,param_1);
  local_a0 = FUN_143ef569c;
  local_98 = &LAB_143ef5a84;
  local_90 = &LAB_143ef5a8c;
  local_88 = &DAT_143ef5a94;
  local_e0 = local_e8;
  bifrost::rewards::onEntitlement();
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620b994 FUN_14620b994 body=1457 status=ok
// SIG undefined FUN_14620b994(void)

/* WARNING: Removing unreachable block (ram,0x00014620bf3c) */
/* WARNING: Removing unreachable block (ram,0x00014620bf32) */

void FUN_14620b994(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1407cbc56();
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    local_60 = (longlong *)(param_1 + 0x160);
    FUN_14620bf84(lVar3);
    iVar2 = *(int *)(lVar3 + 0xae0);
    *(uint *)(lVar3 + 0xae0) = iVar2 + 1U;
    if (*(uint *)(lVar3 + 0xae4) < iVar2 + 1U) {
      FUN_1457fc94e((longlong *)(lVar3 + 0xad8),iVar2);
    }
    lVar14 = *(longlong *)(lVar3 + 0xad8);
    lVar13 = (longlong)iVar2 * 0x40;
    *(undefined1 **)(lVar14 + lVar13) = &LAB_1442ecc18;
    *(undefined8 *)(lVar14 + 0x10 + lVar13) = 0;
    *(undefined ***)(lVar14 + 0x20 + lVar13) = &PTR_LAB_14b9cc090;
    *(longlong *)(lVar14 + 0x28 + lVar13) = param_1;
    plVar1 = (longlong *)(param_1 + 0x2d0);
    FUN_14620bf46(plVar1,*(undefined4 *)(param_1 + 0x2d8));
    if (*(longlong *)(param_1 + 0x160) == 0) {
      puVar8 = &DAT_14c9a1308;
    }
    else {
      puVar8 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbde780);
    }
    plVar9 = (longlong *)FUN_1407cbaec(puVar8);
    if ((longlong)(int)plVar9[2] != 0) {
      lVar14 = *plVar9;
      lVar13 = (longlong)(int)plVar9[2] << 4;
      uVar10 = local_58;
      uVar6 = local_50;
      do {
        local_50 = uVar6;
        local_58 = uVar10;
        FUN_144a7cdd6(lVar14,0);
        FUN_1400b22c2(&local_58);
        iVar2 = *(int *)(param_1 + 0x2d8);
        uVar7 = iVar2 + 1;
        *(uint *)(param_1 + 0x2d8) = uVar7;
        if (*(uint *)(param_1 + 0x2dc) < uVar7) {
          FUN_1447a1bd6(plVar1);
        }
        lVar4 = *plVar1;
        lVar12 = (longlong)iVar2 * 0x10;
        *(undefined8 *)(lVar4 + lVar12) = 0;
        *(undefined8 *)(lVar4 + lVar12) = local_58;
        local_58 = 0;
        uVar10 = local_58;
        *(undefined4 *)(lVar4 + 8 + lVar12) = (undefined4)local_50;
        *(undefined4 *)(lVar4 + 0xc + lVar12) = local_50._4_4_;
        local_50 = 0;
        uVar6 = local_50;
        local_50 = 0;
        local_58 = 0;
        lVar14 = lVar14 + 0x10;
        lVar13 = lVar13 + -0x10;
      } while (lVar13 != 0);
    }
    plVar1 = (longlong *)(param_1 + 0x2e0);
    FUN_14620bf46(plVar1,*(undefined4 *)(param_1 + 0x2e8));
    if (*(longlong *)(param_1 + 0x160) == 0) {
      puVar8 = &DAT_14c9a1308;
    }
    else {
      puVar8 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbde778);
    }
    plVar9 = (longlong *)FUN_1407cbaec(puVar8);
    if ((longlong)(int)plVar9[2] != 0) {
      lVar14 = *plVar9;
      lVar13 = (longlong)(int)plVar9[2] << 4;
      uVar10 = local_58;
      uVar6 = local_50;
      do {
        local_50 = uVar6;
        local_58 = uVar10;
        FUN_144a7cdd6(lVar14,0);
        FUN_1400b22c2(&local_58);
        iVar2 = *(int *)(param_1 + 0x2e8);
        uVar7 = iVar2 + 1;
        *(uint *)(param_1 + 0x2e8) = uVar7;
        if (*(uint *)(param_1 + 0x2ec) < uVar7) {
          FUN_1447a1bd6(plVar1);
        }
        lVar4 = *plVar1;
        lVar12 = (longlong)iVar2 * 0x10;
        *(undefined8 *)(lVar4 + lVar12) = 0;
        *(undefined8 *)(lVar4 + lVar12) = local_58;
        local_58 = 0;
        uVar10 = local_58;
        *(undefined4 *)(lVar4 + 8 + lVar12) = (undefined4)local_50;
        *(undefined4 *)(lVar4 + 0xc + lVar12) = local_50._4_4_;
        local_50 = 0;
        uVar6 = local_50;
        local_50 = 0;
        local_58 = 0;
        lVar14 = lVar14 + 0x10;
        lVar13 = lVar13 + -0x10;
      } while (lVar13 != 0);
    }
    puVar11 = &DAT_14c9a1308;
    puVar8 = &DAT_14c9a1308;
    if (*local_60 != 0) {
      puVar8 = (undefined8 *)FUN_1446e60f4(*local_60,&DAT_14cbddd18);
    }
    uVar10 = FUN_140625082(puVar8,&DAT_14c9a12e0);
    FUN_1447325ac(uVar10,&local_58,1);
    *(undefined8 *)(param_1 + 0x308) = local_58;
    puVar8 = &DAT_14c9a1308;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      puVar8 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbddd20);
    }
    uVar10 = FUN_140625082(puVar8,&DAT_14c9a12e0);
    FUN_1447325ac(uVar10,&local_58,1);
    *(undefined8 *)(param_1 + 0x310) = local_58;
    puVar8 = &DAT_14c9a1308;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      puVar8 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbddd30);
    }
    uVar10 = FUN_140625082(puVar8,&DAT_14c9a12e0);
    FUN_1447325ac(uVar10,&local_58,1);
    *(undefined8 *)(param_1 + 0x318) = local_58;
    puVar8 = &DAT_14c9a1308;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      puVar8 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbddd28);
    }
    uVar10 = FUN_140625082(puVar8,&DAT_14c9a12e0);
    FUN_1447325ac(uVar10,&local_58,1);
    *(undefined8 *)(param_1 + 800) = local_58;
    puVar8 = &DAT_14c9a1308;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      puVar8 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbddcf0);
    }
    uVar10 = FUN_140625082(puVar8,&DAT_14c9a12e0);
    FUN_1447325ac(uVar10,&local_58,1);
    *(undefined8 *)(param_1 + 0x328) = local_58;
    puVar8 = &DAT_14c9a1308;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      puVar8 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbddcf8);
    }
    uVar10 = FUN_140625082(puVar8,&DAT_14c9a12e0);
    FUN_1447325ac(uVar10,&local_58,1);
    *(undefined8 *)(param_1 + 0x330) = local_58;
    puVar8 = &DAT_14c9a1308;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      puVar8 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbddd00);
    }
    uVar10 = FUN_140625082(puVar8,&DAT_14c9a12e0);
    FUN_1447325ac(uVar10,&local_58,1);
    *(undefined8 *)(param_1 + 0x338) = local_58;
    puVar8 = &DAT_14c9a1308;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      puVar8 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbddd08);
    }
    uVar10 = FUN_140625082(puVar8,&DAT_14c9a12e0);
    FUN_1447325ac(uVar10,&local_58,1);
    *(undefined8 *)(param_1 + 0x340) = local_58;
    puVar8 = &DAT_14c9a1308;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      puVar8 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbde788);
    }
    uVar10 = FUN_140625082(puVar8,&DAT_14c9a12e0);
    FUN_1447325ac(uVar10,&local_58,1);
    *(undefined8 *)(param_1 + 0x348) = local_58;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      puVar11 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbde790);
    }
    uVar10 = FUN_140625082(puVar11,&DAT_14c9a12e0);
    FUN_1447325ac(uVar10,&local_58,1);
    *(undefined8 *)(param_1 + 0x350) = local_58;
    *(byte *)(lVar3 + 0x330) = *(byte *)(lVar3 + 0x330) | 0x20;
    puVar5 = *(ushort **)(lVar3 + 0x80);
    if (puVar5 != (ushort *)0x0) {
      *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620bf46 FUN_14620bf46 body=61 status=ok
// SIG undefined FUN_14620bf46(void)

void FUN_14620bf46(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)((longlong)param_1 + 0xc)) {
    FUN_1447a1747(*param_1,*(undefined4 *)(param_1 + 1));
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  FUN_1408be27e(param_1);
  return;
}



// FUNCTION 14620bf84 FUN_14620bf84 body=332 status=ok
// SIG undefined FUN_14620bf84(void)

void FUN_14620bf84(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1457fc9d2();
  FUN_14579b5c4(param_1 + 0x2c0);
  if (*param_2 == 0) {
    puVar2 = &DAT_14c9a1308;
  }
  else {
    puVar2 = (undefined8 *)FUN_1408db3b0(*param_2,&DAT_14b81bd00);
  }
  puVar2 = (undefined8 *)FUN_1407cbaec(puVar2);
  if ((longlong)*(int *)(puVar2 + 2) != 0) {
    plVar4 = (longlong *)*puVar2;
    lVar5 = (longlong)*(int *)(puVar2 + 2) << 4;
    do {
      puVar2 = &DAT_14c9a1308;
      if (*plVar4 != 0) {
        puVar2 = (undefined8 *)FUN_1408db3b0(*plVar4,&DAT_14b9d548c);
      }
      pbVar1 = (byte *)*puVar2;
      if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(pbVar1 + 8);
      }
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      FUN_1446ddda2(&local_88,uVar3,0);
      FUN_140625082(plVar4,&DAT_14c9a12e0);
      FUN_1407cbbb2(param_1 + 0x2c0);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      plVar4 = plVar4 + 2;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14620c0d2 FUN_14620c0d2 body=26 status=ok
// SIG undefined FUN_14620c0d2(void)

undefined8 FUN_14620c0d2(longlong param_1,undefined8 param_2)

{
  FUN_14620c0ec(param_1 + 0x18);
  return param_2;
}



// FUNCTION 14620c0ec FUN_14620c0ec body=422 status=ok
// SIG undefined FUN_14620c0ec(void)

longlong * FUN_14620c0ec(undefined8 param_1,longlong *param_2)

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
  if ((DAT_14cbc3eb8 != (longlong *)0x0 && DAT_14cbc3ec0 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cbc3eb8 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cbc3eb8;
    if (DAT_14cbc3ec0 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_38);
    goto LAB_14620c1bd;
  }
  lVar3 = FUN_14001cc68(0x170,0x10);
  FUN_14620c294(lVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b961310;
  plVar4[2] = lVar3;
  local_30 = plVar4;
  if (lVar3 == 0) {
    local_38 = 0;
    goto LAB_14620c1bd;
  }
  local_38 = lVar3;
  if (((*(longlong *)(lVar3 + 0x10) != 0) && (*(longlong *)(lVar3 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar3 + 0x18) + 8))) goto LAB_14620c1bd;
  if (plVar4 == (longlong *)0x0) {
    *(longlong *)(lVar3 + 0x10) = lVar3;
    plVar5 = *(longlong **)(lVar3 + 0x18);
    if (plVar5 != (longlong *)0x0) {
LAB_14620c238:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      *(longlong **)(lVar3 + 0x18) = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_14620c1b3;
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
      if (plVar5 != (longlong *)0x0) goto LAB_14620c238;
      *(longlong **)(lVar3 + 0x18) = plVar4;
    }
LAB_14620c1b3:
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
LAB_14620c1bd:
  *param_2 = local_38;
  param_2[1] = (longlong)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14620c294 FUN_14620c294 body=375 status=ok
// SIG undefined FUN_14620c294(void)

undefined8 * FUN_14620c294(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b960420;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 2;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)((longlong)param_1 + 0x52) & 0x80 | 8;
  *(undefined1 *)((longlong)param_1 + 0x53) = 1;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[9] = &PTR_FUN_14a1b6cf0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
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
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  FUN_1446efa72(param_1 + 0xe,0,3,0x10);
  *(undefined4 *)(param_1 + 0xf) = 3;
  puVar1 = (undefined8 *)param_1[0xe];
  *puVar1 = &PTR_LAB_149e01f80;
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
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14b961540;
  puVar1[3] = param_1;
  puVar1[4] = FUN_140b01ce6;
  *(undefined4 *)(puVar1 + 5) = 0;
  return param_1;
}



// FUNCTION 14620c40c FUN_14620c40c body=138 status=ok
// SIG undefined FUN_14620c40c(void)

code * FUN_14620c40c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWShadowMaskTiles";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000035a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14720bfd4;
}



// FUNCTION 14620c496 FUN_14620c496 body=138 status=ok
// SIG undefined FUN_14620c496(void)

code * FUN_14620c496(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TranslatedWorldToShadow";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x21000000365;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462e28fc;
}



// FUNCTION 14620c520 FUN_14620c520 body=138 status=ok
// SIG undefined FUN_14620c520(void)

code * FUN_14620c520(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DummyZeroForFixingShaderCompilerBug";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa800000361;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14720bec0;
}



// FUNCTION 14620c5aa FUN_14620c5aa body=63 status=ok
// SIG undefined FUN_14620c5aa(void)

undefined1 FUN_14620c5aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14620c5ea(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 14620c5ea FUN_14620c5ea body=144 status=ok
// SIG undefined FUN_14620c5ea(void)

longlong * FUN_14620c5ea(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  if ((param_1[1] != param_2[1]) || ((int)param_1[2] != (int)param_2[2])) {
    param_1[1] = param_2[1];
    *(int *)(param_1 + 2) = (int)param_2[2];
    param_1[3] = 0;
  }
  FUN_14118c70e(param_1 + 4,param_2 + 4);
  (**(code **)(param_1[0xc] + 0x20))(param_1 + 0xc,0);
  param_1[0xd] = param_2[0xd];
  FUN_1406022fe(param_1 + 0xe,param_2 + 0xe);
  return param_1;
}



// FUNCTION 14620c67a FUN_14620c67a body=66 status=ok
// SIG undefined FUN_14620c67a(void)

void FUN_14620c67a(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_1405f1eac();
  lVar1 = FUN_1403ca102(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_140d27a2a(lVar1);
    FUN_14620c6fa(uVar2,param_1);
  }
  FUN_14620c6bc(param_1);
  FUN_14620c794(param_1);
  return;
}



// FUNCTION 14620c6bc FUN_14620c6bc body=61 status=ok
// SIG undefined FUN_14620c6bc(void)

void FUN_14620c6bc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    lVar1 = FUN_14011c706(lVar1);
    if (lVar1 != 0) {
      FUN_14011c8a2(lVar1,param_1 + 0x390);
      return;
    }
  }
  return;
}



// FUNCTION 14620c6fa FUN_14620c6fa body=154 status=ok
// SIG undefined FUN_14620c6fa(void)

void FUN_14620c6fa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 100;
  cVar2 = FUN_144729dda(lVar1);
  if (cVar2 != '\0') {
    lVar4 = FUN_14479d2ce(lVar1);
    if (((*(longlong *)(lVar4 + 0x30) != 0) &&
        (*(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x360) != 0)) &&
       (cVar2 = FUN_144a80e00(), cVar2 == '\0')) {
      plVar5 = (longlong *)FUN_14479d2ce(lVar1);
      bVar3 = (**(code **)(*plVar5 + 0x498))(plVar5);
      if (bVar3 < 6) {
        return;
      }
      uVar6 = FUN_14479d2ce(lVar1);
      cVar2 = FUN_141886314(uVar6);
      if (cVar2 != '\0') {
        return;
      }
    }
  }
  FUN_14485c47a(param_1 + 0x6c,param_2);
  if (param_2 == 0) {
    return;
  }
  FUN_148d7f182(param_2,param_1);
  return;
}



// FUNCTION 14620c794 FUN_14620c794 body=179 status=ok
// SIG undefined FUN_14620c794(void)

void FUN_14620c794(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [40];
  longlong local_40;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    lVar1 = FUN_1447210f0();
    if (lVar1 != 0) {
      lVar1 = FUN_140995560(lVar1);
      if (lVar1 != 0) {
        FUN_14620c8ce(local_68,*(undefined8 *)(param_1 + 0x470));
        FUN_14620c86e(param_1 + 0x400,local_68);
        if ((local_30 == '\x01') && (local_40 != 0)) {
          FUN_1400020a8();
        }
        if (*(char *)(param_1 + 0x438) == '\x01') {
          FUN_14620c848(lVar1,param_1 + 0x400,0);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620c848 FUN_14620c848 body=37 status=ok
// SIG undefined FUN_14620c848(void)

void FUN_14620c848(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14148624c();
  FUN_14620c9b0(uVar1,param_2,param_3);
  return;
}



// FUNCTION 14620c86e FUN_14620c86e body=96 status=ok
// SIG undefined FUN_14620c86e(void)

longlong FUN_14620c86e(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x38) == '\x01') {
      if ((*(char *)(param_1 + 0x38) != '\0') && (*(longlong *)(param_1 + 0x28) != 0)) {
        FUN_1400020a8();
      }
      FUN_14014e938(param_1,param_2);
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x38) == '\0') {
        return param_1;
      }
      if (*(longlong *)(param_1 + 0x28) != 0) {
        FUN_1400020a8();
      }
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x38) = uVar1;
  }
  return param_1;
}



// FUNCTION 14620c8ce FUN_14620c8ce body=225 status=ok
// SIG undefined FUN_14620c8ce(void)

longlong FUN_14620c8ce(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  undefined1 *local_88;
  int local_6c;
  undefined1 local_59;
  undefined1 **local_58;
  code *local_50;
  undefined8 **local_48;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != 0) {
    local_88 = &local_59;
    local_58 = &local_90;
    local_90 = &LAB_1441aecf6;
    local_48 = &local_58;
    local_50 = FUN_14662dfd4;
    lVar1 = FUN_1458bdeca(*(undefined8 *)(param_2 + 0x30));
    if (lVar1 != 0) {
      FUN_140c591d2(lVar1 + 0x90,&local_90);
      if (local_6c != 0) {
        FUN_1409c4e4e(&local_90,&local_50);
        FUN_14014e938(param_1,&local_50);
        *(undefined1 *)(param_1 + 0x38) = 1;
        if (local_28 != 0) {
          FUN_1400020a8();
        }
        goto LAB_14620c97c;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
LAB_14620c97c:
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620c9b0 FUN_14620c9b0 body=264 status=ok
// SIG undefined FUN_14620c9b0(void)

void FUN_14620c9b0(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  int local_58 [6];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_14014e996(param_2,local_58,1,0);
    lVar2 = *(longlong *)(param_1 + 0x6c8);
    iVar1 = *(int *)(param_1 + 0x6d0);
    lVar4 = (longlong)iVar1;
    if (lVar4 != 0) {
      lVar3 = 0;
      do {
        if (*(int *)(lVar2 + lVar3) == local_58[0]) goto LAB_14620ca50;
        lVar3 = lVar3 + 0x28;
      } while (lVar4 * 0x28 != lVar3);
    }
    *(uint *)(param_1 + 0x6d0) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x6d4) < iVar1 + 1U) {
      FUN_14014a81a((longlong *)(param_1 + 0x6c8),iVar1);
      lVar2 = *(longlong *)(param_1 + 0x6c8);
    }
    FUN_1447a97f4(lVar2 + lVar4 * 0x28,local_58);
    if (param_3 != '\0') {
      FUN_14148645c(param_1,param_2);
    }
    FUN_14620caba(param_1,local_58);
LAB_14620ca50:
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14620caba FUN_14620caba body=261 status=ok
// SIG undefined FUN_14620caba(void)

void FUN_14620caba(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [16];
  longlong local_70;
  undefined1 local_68 [40];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1409c5062(local_68);
  lVar1 = FUN_14620cfe0(param_1,local_68);
  if (lVar1 == 0) {
    plVar2 = (longlong *)FUN_14620cc76(param_1 + 0x728,*param_2,param_2);
    if (*plVar2 == 0) {
      uVar3 = FUN_1447210f0(param_1);
      lVar1 = FUN_140149a73(uVar3,0);
      if (lVar1 != 0) {
        plVar4 = (longlong *)FUN_1401499e8(lVar1);
        if (plVar4 != (longlong *)0x0) {
          FUN_14620cbc0(local_80,param_1,param_2);
          (**(code **)(*plVar4 + 0x70))(plVar4,&local_70,local_68,local_80);
          *plVar2 = local_70;
          FUN_1449db362(local_80);
        }
      }
    }
  }
  else {
    FUN_148951732(param_1,lVar1,param_2);
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620cbc0 FUN_14620cbc0 body=182 status=ok
// SIG undefined FUN_14620cbc0(void)

longlong * FUN_14620cbc0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,5,0x10);
  *(undefined4 *)(param_1 + 1) = 5;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_14b4247c0;
  FUN_1447a97f4(puVar1 + 1,param_3);
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
  puVar1[6] = lVar3;
  *puVar1 = &PTR_FUN_14b424750;
  puVar1[7] = 0;
  FUN_14485c47a(puVar1 + 7,param_2);
  puVar1[8] = FUN_1489518be;
  return param_1;
}



// FUNCTION 14620cc76 FUN_14620cc76 body=189 status=ok
// SIG undefined FUN_14620cc76(void)

longlong FUN_14620cc76(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *param_1 + (longlong)iVar1 * 0x38;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x38) == *param_3) {
          if (lVar2 != 0) goto LAB_14620ccc5;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x30);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14620cd34(param_1,&local_1c,param_2);
  lVar2 = (longlong)local_1c * 0x38 + *param_1;
LAB_14620ccc5:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + 0x28;
}



// FUNCTION 14620cd34 FUN_14620cd34 body=277 status=ok
// SIG undefined FUN_14620cd34(void)

undefined4 * FUN_14620cd34(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14620cefc(param_1,local_48);
  FUN_1447a97f4(local_40,*param_4);
  *(undefined8 *)(local_40 + 0x28) = 0;
  *(undefined4 *)(local_40 + 0x30) = 0xffffffff;
  cVar1 = FUN_14620ce4a(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x34) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x30) =
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
      FUN_14620d0fe(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620ce4a FUN_14620ce4a body=178 status=ok
// SIG undefined FUN_14620ce4a(void)

undefined8 FUN_14620ce4a(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
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
          FUN_145be5514(param_1,*param_4);
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



// FUNCTION 14620cefc FUN_14620cefc body=227 status=ok
// SIG undefined FUN_14620cefc(void)

int * FUN_14620cefc(longlong *param_1,int *param_2)

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



// FUNCTION 14620cfe0 FUN_14620cfe0 body=284 status=ok
// SIG undefined FUN_14620cfe0(void)

longlong FUN_14620cfe0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined1 local_60 [40];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = FUN_1447210f0();
  lVar4 = 0;
  lVar2 = FUN_140149a73(uVar1,0);
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_1401499e8(lVar2);
    if ((plVar3 != (longlong *)0x0) &&
       (lVar2 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2), lVar2 != 0)) {
      lVar6 = *(longlong *)(lVar2 + 0x10);
      if (*(longlong *)(lVar2 + 0x10) == 0) {
        lVar6 = lVar2;
      }
      if ((longlong)*(int *)(lVar2 + 0x18) != 0) {
        lVar2 = (longlong)*(int *)(lVar2 + 0x18) << 3;
        do {
          lVar4 = FUN_14479d2ce(lVar6);
          if (lVar4 != 0) {
            lVar5 = FUN_141349952();
            if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
              (**(code **)(*(longlong *)(lVar4 + 0x448) + 0x50))(lVar4 + 0x448,local_60);
              FUN_14493b798(local_60,param_2);
              if (local_38 != 0) {
                FUN_1400020a8();
              }
              break;
            }
          }
          lVar6 = lVar6 + 8;
          lVar4 = 0;
          lVar2 = lVar2 + -8;
        } while (lVar2 != 0);
        goto LAB_14620d0bc;
      }
    }
    lVar4 = 0;
  }
LAB_14620d0bc:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 14620d0fe FUN_14620d0fe body=428 status=ok
// SIG undefined FUN_14620d0fe(void)

void FUN_14620d0fe(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x38;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x34 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar7) =
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



// FUNCTION 14620d2ac FUN_14620d2ac body=27 status=ok
// SIG undefined FUN_14620d2ac(void)

void FUN_14620d2ac(longlong param_1)

{
  FUN_141237e82();
  FUN_14620d2c8(param_1 + -0x30);
  return;
}



// FUNCTION 14620d2c8 FUN_14620d2c8 body=113 status=ok
// SIG undefined FUN_14620d2c8(void)

void FUN_14620d2c8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      plVar3 = (longlong *)FUN_14071752e(lVar1);
      if (plVar3 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar3 + 0x30))(plVar3);
        uVar4 = FUN_1408a1fe2(uVar4);
        FUN_14164f9fc(param_1,uVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14620d33a FUN_14620d33a body=103 status=ok
// SIG undefined FUN_14620d33a(void)

ulonglong FUN_14620d33a(longlong param_1)

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
LAB_14620d384:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14620d384;
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



// FUNCTION 14620d3a1 FUN_14620d3a1 body=37 status=ok
// SIG undefined FUN_14620d3a1(void)

undefined * FUN_14620d3a1(void)

{
  if (DAT_14cacef48 == '\0') {
    FUN_14620d3c6(&DAT_14cacee68);
  }
  return &DAT_14cacee68;
}



// FUNCTION 14620d3c6 FUN_14620d3c6 body=1527 status=ok
// SIG undefined FUN_14620d3c6(void)

void FUN_14620d3c6(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong **pplVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStack_168 [32];
  ulonglong local_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined8 local_130;
  longlong *local_120;
  longlong *local_118;
  undefined8 uStack_110;
  longlong *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_d9;
  longlong *local_d8;
  undefined4 local_d0;
  undefined2 *local_c8;
  undefined8 uStack_c0;
  undefined2 *local_b8;
  undefined8 uStack_b0;
  longlong *local_a0;
  undefined8 local_98;
  longlong **local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  longlong **local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((char)param_1[0x1c] == '\0') {
    cVar1 = FUN_144a9cb75();
    if (cVar1 != '\0') {
      plVar3 = (longlong *)
               FUN_140d6a126(DAT_14c872ce0,L"Engine.BufferVisualizationMaterials",0,&DAT_14c872ce8);
      plVar5 = local_88;
      if (plVar3 != (longlong *)0x0) {
        uStack_110 = (longlong **)(plVar3 + 2);
        local_118 = (longlong *)&DAT_100000000;
        local_108 = (longlong *)&DAT_ffffffff;
        uStack_100 = uStack_100 & 0xffffffff00000000;
        if ((int)plVar3[5] != 0) {
          FUN_1449c0562(&local_118);
        }
        local_98 = local_118;
        local_90 = uStack_110;
        local_88 = local_108;
        plVar5 = local_88;
        local_80 = (undefined4)uStack_100;
        local_7c = uStack_100._4_4_;
        local_88._4_4_ = (int)((ulonglong)local_108 >> 0x20);
        local_a0 = plVar3;
        if (local_88._4_4_ < *(int *)(uStack_110 + 3)) {
          local_120 = param_1 + 10;
          iVar2 = local_88._4_4_;
          local_88 = plVar5;
          do {
            local_b8 = (undefined2 *)0x0;
            uStack_b0 = 0;
            lVar7 = *local_a0;
            lVar4 = (longlong)iVar2 * 0x40;
            uVar12 = *(int *)(lVar7 + 0x28 + lVar4) - 2;
            uVar11 = (ulonglong)(uVar12 < 0x7fffffff) * 0x10;
            puVar9 = &DAT_149dfb77a;
            if (*(int *)(uVar11 + 0x18 + lVar7 + lVar4) != 0) {
              puVar9 = *(undefined2 **)(lVar4 + lVar7 + 8 + (uVar11 | 8));
            }
            local_148 = 0;
            cVar1 = FUN_14063337c(puVar9,L"Display=",&local_b8,
                                  CONCAT71((uint7)(uint3)(uVar12 >> 8),1));
            if (cVar1 == '\0') {
LAB_14620d5f4:
              local_c8 = (undefined2 *)0x0;
              uStack_c0 = 0;
              lVar7 = *local_a0;
              lVar4 = (longlong)local_88._4_4_ * 0x40;
              uVar12 = *(int *)(lVar7 + 0x28 + lVar4) - 2;
              uVar11 = (ulonglong)(uVar12 < 0x7fffffff) * 0x10;
              puVar9 = &DAT_149dfb77a;
              if (*(int *)(uVar11 + 0x18 + lVar7 + lVar4) != 0) {
                puVar9 = *(undefined2 **)(lVar4 + lVar7 + 8 + (uVar11 | 8));
              }
              local_148 = 0;
              cVar1 = FUN_14063337c(puVar9,L"Material=",&local_c8,
                                    CONCAT71((uint7)(uint3)(uVar12 >> 8),1));
              if (cVar1 != '\0') {
                puVar9 = &DAT_149dfb77a;
                if ((int)uStack_c0 != 0) {
                  puVar9 = local_c8;
                }
                uVar6 = FUN_1402d2740();
                local_130 = 0;
                local_140 = 0;
                local_138 = 1;
                local_148 = local_148 & 0xffffffff00000000;
                lVar7 = FUN_1412ecd05(uVar6,0,puVar9,0);
                if (lVar7 != 0) {
                  FUN_144a5dc74(&local_d8);
                  lVar4 = *local_a0;
                  lVar8 = (longlong)local_88._4_4_ * 0x40;
                  uVar11 = (ulonglong)(*(int *)(lVar4 + 0x28 + lVar8) - 2U < 0x7fffffff) * 0x10;
                  puVar9 = &DAT_149dfb77a;
                  if (*(int *)(uVar11 + 0x18 + lVar4 + lVar8) != 0) {
                    puVar9 = *(undefined2 **)(lVar8 + lVar4 + 8 + (uVar11 | 8));
                  }
                  FUN_146816b2c(puVar9,L"Name=",&local_d8,L"Engine.BufferVisualizationMaterials");
                  local_d9 = 0;
                  lVar4 = *local_a0;
                  lVar8 = (longlong)local_88._4_4_ * 0x40;
                  uVar11 = (ulonglong)(*(int *)(lVar4 + 0x28 + lVar8) - 2U < 0x7fffffff) * 0x10;
                  puVar9 = &DAT_149dfb77a;
                  if (*(int *)(uVar11 + 0x18 + lVar4 + lVar8) != 0) {
                    puVar9 = *(undefined2 **)(lVar8 + lVar4 + 8 + (uVar11 | 8));
                  }
                  FUN_140751e3e(puVar9,L"ApplyAutoExposure=",&local_d9);
                  uVar12 = *(uint *)(lVar7 + 0xc);
                  if ((int)uVar12 < DAT_14c9647dc) {
                    lVar4 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
                  }
                  else {
                    lVar4 = 0;
                  }
                  FUN_1447f71cc(lVar4,0x40000000);
                  local_f8 = 0;
                  uStack_f0 = 0;
                  local_108 = (longlong *)0x0;
                  uStack_100 = 0;
                  local_118 = (longlong *)0x0;
                  uStack_110 = (longlong **)0x0;
                  FUN_144a5dc74(&local_108);
                  local_78 = (longlong)local_88._4_4_ * 0x40 + *local_a0;
                  local_70 = &local_118;
                  FUN_1479ad1ce(param_1,&local_64,&local_78);
                  lVar8 = (longlong)local_64;
                  lVar4 = *param_1;
                  if (local_108 != (longlong *)0x0) {
                    (**(code **)(*local_108 + 0x10))();
                  }
                  if (local_118 != (longlong *)0x0) {
                    FUN_1400020a8();
                  }
                  lVar4 = lVar4 + lVar8 * 0x40;
                  pplVar10 = (longlong **)(lVar4 + 8);
                  FUN_14029eeae((longlong)local_88._4_4_ * 0x40 + *local_a0,&local_118);
                  if (pplVar10 != &local_118) {
                    if (*pplVar10 != (longlong *)0x0) {
                      FUN_1400020a8();
                    }
                    *pplVar10 = local_118;
                    local_118 = (longlong *)0x0;
                    *(undefined4 *)(lVar4 + 0x10) = (undefined4)uStack_110;
                    *(undefined4 *)(lVar4 + 0x14) = uStack_110._4_4_;
                    uStack_110 = (longlong **)0x0;
                  }
                  if (local_118 != (longlong *)0x0) {
                    FUN_1400020a8();
                  }
                  *(longlong *)(lVar4 + 0x28) = lVar7;
                  *(undefined1 *)(lVar4 + 0x30) = local_d9;
                  plVar5 = *(longlong **)(lVar4 + 0x18);
                  if (plVar5 != local_d8) {
                    *(longlong **)(lVar4 + 0x18) = local_d8;
                    if (local_d8 != (longlong *)0x0) {
                      (**(code **)(*local_d8 + 8))();
                    }
                    if (plVar5 != (longlong *)0x0) {
                      (**(code **)(*plVar5 + 0x10))(plVar5);
                    }
                  }
                  *(undefined4 *)(lVar4 + 0x20) = local_d0;
                  local_78 = *(longlong *)(lVar7 + 0x18);
                  local_118 = &local_78;
                  uStack_110 = pplVar10;
                  FUN_1479ad5f2(local_120,&local_64,&local_118);
                  if (local_d8 != (longlong *)0x0) {
                    (**(code **)(*local_d8 + 0x10))();
                  }
                }
              }
              if (local_c8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
            }
            else {
              if (DAT_14c8407a8 == (longlong *)0x0) {
                FUN_1414b00ea();
              }
              puVar9 = &DAT_149dfb77a;
              if ((int)uStack_b0 != 0) {
                puVar9 = local_b8;
              }
              plVar5 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar9,1);
              if ((plVar5 == (longlong *)0x0) ||
                 (cVar1 = (**(code **)(*plVar5 + 0xa8))(plVar5), cVar1 != '\0')) goto LAB_14620d5f4;
            }
            if (local_b8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            local_88 = (longlong *)CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
            FUN_1449c0562(&local_98);
            iVar2 = local_88._4_4_;
            plVar5 = local_88;
          } while (local_88._4_4_ < *(int *)(local_90 + 3));
        }
      }
      local_88 = plVar5;
      FUN_14798ba30(param_1);
    }
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14620d9be FUN_14620d9be body=631 status=ok
// SIG undefined FUN_14620d9be(void)

void FUN_14620d9be(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == 0) goto LAB_14620dbd0;
  lVar5 = FUN_140f50f54();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
      != lVar5 + 0x30)) goto LAB_14620dbd0;
  lVar5 = FUN_14620dc68(param_1);
  if (lVar5 == 0) goto LAB_14620dbd0;
  local_78 = &LAB_148d7b42c;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  FUN_14620de84(&local_60,param_1);
  FUN_14620dd82(param_2 + 0x2618,&local_78,&local_60);
  FUN_1449db362(&local_60);
  local_78 = (undefined1 *)0x0;
  uStack_70 = 0;
  local_68 = *(undefined1 *)(lVar5 + 0x48);
  FUN_141068c44(param_1,&local_60);
  uVar6 = FUN_141068cca(param_1);
  FUN_140f4ea62(lVar5 + 0x18,&local_90,uVar6,&local_60);
  if (local_80 == 0) {
    if ((local_90 != 0) && (local_88 != 0)) {
      plVar1 = *(longlong **)(local_88 + 0xb8);
      if (plVar1 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1);
        if (cVar3 != '\0') {
          uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
          local_80 = FUN_144aff482(uVar6,&local_90);
          if (local_80 != 0) goto LAB_14620db24;
          goto LAB_14620db76;
        }
      }
      local_80 = 0;
    }
  }
  else {
LAB_14620db24:
    FUN_1411f1bdc(&local_60,&local_90);
    uVar2 = uStack_70;
    lVar7 = (longlong)(int)uStack_70;
    uVar4 = (int)uStack_70 + 1;
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
    if (uStack_70._4_4_ < uVar4) {
      FUN_14620dcee(&local_78,uVar2 & 0xffffffff);
    }
    *(undefined8 *)(local_78 + lVar7 * 0x18) = local_60;
    *(undefined4 *)(local_78 + lVar7 * 0x18 + 8) = local_58;
    *(undefined8 *)(local_78 + lVar7 * 0x18 + 0x10) = 0;
  }
LAB_14620db76:
  FUN_1410d9770(param_1,&local_60);
  FUN_1447325ac(&local_60,&local_98,1);
  FUN_14620e030(param_2,local_98,&local_78);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  lVar7 = FUN_14620dc36(param_2,0);
  if (lVar7 != 0) {
    if (*(char *)(lVar5 + 0x49) == '\x01') {
      FUN_140aeefbc(lVar7,0,1);
    }
    else {
      FUN_140170a76(param_1,&DAT_14cbcd4e0);
    }
  }
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_14620dbd0:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620dc36 FUN_14620dc36 body=49 status=ok
// SIG undefined FUN_14620dc36(void)

undefined8 FUN_14620dc36(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 0x2658) != 0) &&
     (((*(char *)(*(longlong *)(param_1 + 0x2658) + 0x468) != '\x01' ||
       (*(char *)(param_1 + 0x2790) != '\0')) || (param_2 != '\0')))) {
    uVar1 = FUN_14479d2ce(param_1 + 0x2720);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14620dc68 FUN_14620dc68 body=78 status=ok
// SIG undefined FUN_14620dc68(void)

longlong * FUN_14620dc68(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_14620dcb6();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 14620dcb6 FUN_14620dcb6 body=55 status=ok
// SIG undefined FUN_14620dcb6(void)

void FUN_14620dcb6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f3d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f3d0 = FUN_140002ddd(FUN_1465a373c,uVar1,L"BinderBehaviorMod_OakCarryableContainer");
  }
  return;
}



// FUNCTION 14620dcee FUN_14620dcee body=147 status=ok
// SIG undefined FUN_14620dcee(void)

void FUN_14620dcee(longlong param_1,int param_2)

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



// FUNCTION 14620dd82 FUN_14620dd82 body=216 status=ok
// SIG undefined FUN_14620dd82(void)

undefined8 * FUN_14620dd82(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14620de84 FUN_14620de84 body=428 status=ok
// SIG undefined FUN_14620de84(void)

longlong * FUN_14620de84(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14620df64:
    *puVar5 = &PTR_LAB_14b97cb60;
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
    *puVar5 = &PTR_FUN_14b97caf0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14620df64;
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
    *puVar5 = &PTR_LAB_14b97cb60;
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
    *puVar5 = &PTR_FUN_14b97caf0;
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



// FUNCTION 14620e030 FUN_14620e030 body=446 status=ok
// SIG undefined FUN_14620e030(void)

void FUN_14620e030(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auStack_a8 [40];
  longlong local_80 [3];
  byte local_68;
  longlong local_60 [3];
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) goto LAB_14620e145;
  iVar8 = *(int *)(param_1 + 0x27c0);
  if ((longlong)iVar8 == 0) {
LAB_14620e070:
    local_48 = '\0';
    uVar7 = 0;
    uVar6 = 0;
  }
  else {
    puVar2 = *(ulonglong **)(param_1 + 0x27b8);
    lVar4 = 0;
    do {
      if (*(longlong *)((longlong)puVar2 + lVar4) == param_2) {
        if (lVar4 + (longlong)puVar2 != 0) goto LAB_14620e145;
        break;
      }
      lVar4 = lVar4 + 0x20;
    } while ((longlong)iVar8 << 5 != lVar4);
    if (iVar8 < 1) goto LAB_14620e070;
    uVar6 = *puVar2 & 0xffffffff00000000;
    uVar7 = *puVar2 & 0xffffffff;
    FUN_14584f588(local_60,puVar2 + 1);
    iVar8 = *(int *)(param_1 + 0x27c0);
    local_48 = '\x01';
  }
  *(uint *)(param_1 + 0x27c0) = iVar8 + 1U;
  if (*(uint *)(param_1 + 0x27c4) < iVar8 + 1U) {
    FUN_14620e240((longlong *)(param_1 + 0x27b8),iVar8);
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x27b8) + (longlong)iVar8 * 0x20);
  plVar1[1] = 0;
  plVar1[2] = 0;
  plVar1[3] = 0;
  *(undefined1 *)(plVar1 + 3) = 1;
  *plVar1 = param_2;
  FUN_14620e1f0(plVar1 + 1,param_3);
  *(undefined1 *)(plVar1 + 3) = *(undefined1 *)(param_3 + 0x10);
  bVar3 = *(int *)(param_1 + 0x27c0) < 1;
  if (bVar3) {
    uVar5 = 0;
  }
  else {
    puVar2 = *(ulonglong **)(param_1 + 0x27b8);
    uVar5 = *puVar2;
    FUN_14584f588(local_80,puVar2 + 1);
  }
  local_68 = !bVar3;
  if ((uVar6 | uVar7) != uVar5) {
    FUN_14584f6b2(param_1,local_80,local_60);
  }
  if (((local_68 & 1) != 0) && (local_80[0] != 0)) {
    FUN_1400020a8();
  }
  if ((local_48 == '\x01') && (local_60[0] != 0)) {
    FUN_1400020a8();
  }
LAB_14620e145:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14620e1f0 FUN_14620e1f0 body=79 status=ok
// SIG undefined FUN_14620e1f0(void)

undefined8 * FUN_14620e1f0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14584f60e(param_1,iVar1);
      FUN_14584f5e2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14620e240 FUN_14620e240 body=132 status=ok
// SIG undefined FUN_14620e240(void)

void FUN_14620e240(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14620e2c4 FUN_14620e2c4 body=62 status=ok
// SIG undefined FUN_14620e2c4(void)

void FUN_14620e2c4(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_144a7757c();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  if ((*(longlong *)(lVar2 + 0x30) != 0) &&
     (*(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x2b8) != 0)) {
    FUN_141651a7e();
    return;
  }
  return;
}



// FUNCTION 14620e30a FUN_14620e30a body=830 status=ok
// SIG undefined FUN_14620e30a(void)

longlong * FUN_14620e30a(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14585467a();
  *param_1 = (longlong)&PTR_FUN_14bd67200;
  param_1[5] = (longlong)&PTR_FUN_14bd675d0;
  param_1[0x13] = (longlong)&PTR_FUN_14bd675f0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0x3ff0000000000000;
  param_1[0x32] = DAT_14c8464f0;
  lVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x30] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x31] = lVar1;
  param_1[0x35] = DAT_14c846520;
  lVar1 = DAT_14c846518;
  param_1[0x33] = DAT_14c846510;
  param_1[0x34] = lVar1;
  lVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x36] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x37] = lVar1;
  param_1[0x38] = DAT_14c8464f0;
  param_1[0x3b] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3c] = 0x3ff0000000000000;
  param_1[0x3f] = DAT_14c8464f0;
  lVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x3d] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x3e] = lVar1;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0x3ff0000000000000;
  lVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x44] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x45] = lVar1;
  param_1[0x46] = DAT_14c8464f0;
  param_1[0x49] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x4a] = 0x3ff0000000000000;
  lVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x4b] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x4c] = lVar1;
  param_1[0x4d] = DAT_14c8464f0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0x3ff0000000000000;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x52) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x294) = uVar2;
  *(undefined4 *)(param_1 + 0x53) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x29c) = uVar4;
  param_1[0x54] = DAT_14c8464f0;
  param_1[0x57] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x58] = 0x3ff0000000000000;
  local_68 = 0;
  FUN_1411b354a(param_1 + 0x5c,0,0,0);
  param_1[0xa6] = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x53c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x544) = 0;
  param_1[0xaa] = 0;
  *(undefined4 *)(param_1 + 0xab) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xad] = 0;
  local_68 = 0;
  FUN_1411b354a(param_1 + 0xae,0,0,0);
  param_1[0xf8] = 0;
  *(undefined4 *)(param_1 + 0xf9) = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7d4) = 0;
  param_1[0xfc] = 0;
  *(undefined4 *)(param_1 + 0xfd) = 0;
  param_1[0x102] = 0;
  *(undefined4 *)(param_1 + 0x103) = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  *(undefined8 *)((longlong)param_1 + 0x81c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x824) = 0;
  param_1[0x106] = 0;
  *(undefined4 *)(param_1 + 0x107) = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  local_50 = L"ToolName";
  local_48 = 8;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"UOffsetMeshSelectionTool";
  local_48 = 0x18;
  FUN_1446e940c(local_58,&local_50);
  FUN_140208bae(&local_50,local_58,local_54,L"Offset Selection");
  (**(code **)(*param_1 + 0x370))(param_1,&local_50);
  if (local_50 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_50 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620e654 FUN_14620e654 body=1040 status=ok
// SIG undefined FUN_14620e654(void)

undefined8 * FUN_14620e654(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = L"AreaComponent";
  local_48 = 0xd;
  FUN_145abb12c(param_2);
  local_60 = L"AreaComponent";
  local_58 = 0xd;
  FUN_145abb20c(param_2 + 0x20,&local_60,0);
  FUN_145abb52c(param_1,param_2);
  *param_1 = &PTR_FUN_14b5e00d0;
  param_1[0x72] = &PTR_FUN_14b5e0770;
  param_1[0x73] = &PTR_FUN_14b5e0790;
  param_1[0x74] = &PTR_FUN_14b5e07c0;
  param_1[0x75] = &PTR_FUN_14b5e07d0;
  param_1[0x76] = &PTR_FUN_14b5e0840;
  param_1[0x77] = &PTR_FUN_14b5e0870;
  param_1[0x78] = &PTR_FUN_14b5e08a0;
  param_1[0x7f] = &PTR_FUN_14b5e0950;
  param_1[0x80] = &PTR_FUN_14b5e09c0;
  param_1[0x81] = &PTR_FUN_14b5e0a30;
  param_1[0x82] = &PTR_FUN_14b5e0a60;
  param_1[0x83] = &PTR_FUN_14b5e0aa0;
  param_1[0x84] = &PTR_FUN_14b5e0b40;
  param_1[0x85] = &PTR_FUN_14b5e0b60;
  param_1[0x89] = &PTR_FUN_14b5e0b80;
  param_1[0x8a] = &PTR_FUN_14b5e0c40;
  param_1[0x8b] = &PTR_FUN_14b5e0cc0;
  param_1[0x8c] = &PTR_FUN_14b5e0d10;
  param_1[0x8d] = &PTR_FUN_14b5e0d50;
  param_1[0x8e] = &PTR_FUN_14b5e0d70;
  param_1[0x8f] = &PTR_FUN_14b5e0d90;
  param_1[0x90] = &PTR_FUN_14b5e0db0;
  param_1[0x91] = &PTR_FUN_14b5e0dd0;
  param_1[0x92] = &PTR_FUN_14b5e0df0;
  param_1[0x93] = &PTR_FUN_14b5e0e10;
  param_1[0x94] = &PTR_FUN_14b5e0e30;
  param_1[0x95] = &PTR_FUN_14b5e0e50;
  param_1[0x96] = &PTR_FUN_14b5e0e70;
  param_1[0x34b] = &PTR_FUN_14b5e0e90;
  param_1[0x352] = &PTR_FUN_14b5e0ea0;
  param_1[0x353] = &PTR_FUN_14b5e0ee0;
  param_1[0x354] = &PTR_FUN_14b5e0f20;
  param_1[0x355] = &PTR_FUN_14b5e0f70;
  param_1[0x356] = &PTR_FUN_14b5e0fa0;
  param_1[0x359] = &PTR_FUN_14b5e0fe0;
  param_1[0x35a] = &PTR_FUN_14b5e0ff0;
  param_1[0x35b] = &PTR_FUN_14b5e1020;
  param_1[0x35c] = &PTR_FUN_14b5e10c0;
  param_1[0x4bf] = &PTR_FUN_14b5e10e0;
  param_1[0x4df] = &PTR_LAB_14b5e10f0;
  param_1[0x4e3] = &PTR_FUN_14b5e1110;
  FUN_1411c3dfa(param_1 + 0x4e4);
  param_1[0x4e4] = &PTR_FUN_14b5e94b0;
  *(undefined4 *)((longlong)param_1 + 0x299c) = 0;
  param_1[0x534] = 0;
  param_1[0x528] = 0;
  param_1[0x529] = 0;
  param_1[0x52a] = 0;
  param_1[0x52b] = 0;
  param_1[0x52c] = 0;
  param_1[0x52d] = 0;
  param_1[0x52e] = 0;
  param_1[0x52f] = 0;
  param_1[0x530] = 0;
  param_1[0x531] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2989) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2991) = 0;
  FUN_144894d4c(param_1 + 0x536);
  param_1[0x64e] = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x64f) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x327c) = uVar1;
  *(undefined4 *)(param_1 + 0x650) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3284) = uVar3;
  param_1[0x651] = DAT_14c8464f0;
  param_1[0x652] = 0;
  *(undefined4 *)(param_1 + 0x653) = 0;
  param_1[0x4ce] = 0;
  param_1[0x654] = 0;
  param_1[0x655] = 0;
  param_1[0x656] = 0;
  param_1[0x657] = 0;
  FUN_1446ddc76(&local_68,"CharacterSelectCameraComponent",1);
  uVar4 = FUN_145abb046();
  local_70 = 0;
  local_78 = 1;
  lVar5 = FUN_14048696c(param_1,local_68,uVar4,uVar4);
  if ((lVar5 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x534] = lVar5;
    if (lVar5 == 0) goto LAB_14620ea2c;
  }
  else {
    FUN_1456cec3c(lVar5);
    param_1[0x534] = lVar5;
  }
  if (param_1[0x39] != 0) {
    FUN_140486fc4(lVar5,param_1[0x39],0);
    (**(code **)(*(longlong *)param_1[0x534] + 0x588))((longlong *)param_1[0x534],2);
  }
LAB_14620ea2c:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620ea66 FUN_14620ea66 body=247 status=ok
// SIG undefined FUN_14620ea66(void)

void FUN_14620ea66(undefined8 param_1,longlong param_2)

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
  FUN_14620eb5e(param_1,iVar1 != 0,local_28 != 0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620eb5e FUN_14620eb5e body=174 status=ok
// SIG undefined FUN_14620eb5e(void)

void FUN_14620eb5e(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == '\0') goto LAB_14620ebc4;
  FUN_1449027d0(param_1,&local_30);
  pcVar3 = *(char **)(local_30 + 0x100);
  AcquireSRWLockExclusive((PSRWLOCK)(pcVar3 + 0x58));
  *(int *)(pcVar3 + 0x50) = *(int *)(pcVar3 + 0x50) + 1;
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
  if (*pcVar3 == '\0') {
    if (*(int *)(pcVar3 + 4) == 0) {
      iVar4 = 1;
      goto LAB_14620ec05;
    }
  }
  else {
    iVar4 = *(int *)(pcVar3 + 4) + 1;
LAB_14620ec05:
    *pcVar3 = '\0';
    *(int *)(pcVar3 + 4) = iVar4;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(pcVar3 + 0x58));
LAB_14620ebc4:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620ec0e FUN_14620ec0e body=9 status=ok
// SIG undefined FUN_14620ec0e(void)

void FUN_14620ec0e(longlong param_1)

{
  FUN_141651ffc(param_1 + 0x10);
  return;
}



// FUNCTION 14620ec20 FUN_14620ec20 body=837 status=ok
// SIG undefined FUN_14620ec20(void)

longlong * FUN_14620ec20(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14585467a();
  *param_1 = (longlong)&PTR_FUN_14bd5e490;
  param_1[5] = (longlong)&PTR_FUN_14bd5e860;
  param_1[0x13] = (longlong)&PTR_FUN_14bd5e880;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0x3ff0000000000000;
  param_1[0x32] = DAT_14c8464f0;
  lVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x30] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x31] = lVar1;
  param_1[0x35] = DAT_14c846520;
  lVar1 = DAT_14c846518;
  param_1[0x33] = DAT_14c846510;
  param_1[0x34] = lVar1;
  lVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x36] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x37] = lVar1;
  param_1[0x38] = DAT_14c8464f0;
  param_1[0x3b] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3c] = 0x3ff0000000000000;
  param_1[0x3f] = DAT_14c8464f0;
  lVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x3d] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x3e] = lVar1;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0x3ff0000000000000;
  lVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x44] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x45] = lVar1;
  param_1[0x46] = DAT_14c8464f0;
  param_1[0x49] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x4a] = 0x3ff0000000000000;
  lVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x4b] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x4c] = lVar1;
  param_1[0x4d] = DAT_14c8464f0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0x3ff0000000000000;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x52) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x294) = uVar2;
  *(undefined4 *)(param_1 + 0x53) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x29c) = uVar4;
  param_1[0x54] = DAT_14c8464f0;
  param_1[0x57] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x58] = 0x3ff0000000000000;
  local_68 = 0;
  FUN_1411b354a(param_1 + 0x5c,0,0,0);
  param_1[0xa6] = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x53c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x544) = 0;
  param_1[0xaa] = 0;
  *(undefined4 *)(param_1 + 0xab) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xad] = 0;
  local_68 = 0;
  FUN_1411b354a(param_1 + 0xae,0,0,0);
  param_1[0xf8] = 0;
  *(undefined4 *)(param_1 + 0xf9) = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7d4) = 0;
  param_1[0xfc] = 0;
  *(undefined4 *)(param_1 + 0xfd) = 0;
  param_1[0x102] = 0;
  *(undefined4 *)(param_1 + 0x103) = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  *(undefined8 *)((longlong)param_1 + 0x81c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x824) = 0;
  param_1[0x106] = 0;
  *(undefined4 *)(param_1 + 0x107) = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  local_50 = L"ToolName";
  local_48 = 8;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"UExtrudeMeshSelectionTool";
  local_48 = 0x19;
  FUN_1446e940c(local_58,&local_50);
  FUN_140208bae(&local_50,local_58,local_54,L"Extrude Selection");
  (**(code **)(*param_1 + 0x370))(param_1,&local_50);
  if (local_50 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_50 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620ef66 FUN_14620ef66 body=360 status=ok
// SIG undefined FUN_14620ef66(void)

undefined4 * FUN_14620ef66(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145d03ad2(param_1,local_40);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  *local_38 = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_38 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_38 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_38[2] = *puVar2;
  lVar11 = puVar2[1];
  local_38[3] = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_38 + 4) = 0xffffffff;
  local_44 = local_40[0];
  iVar9 = *(int *)(local_38 + 1);
  if (iVar9 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (undefined2 *)*local_38;
  }
  iVar3 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar3 = 0;
  }
  uVar6 = FUN_144a49b4a(iVar3,puVar10);
  cVar5 = FUN_145d03a64(param_1,uVar6,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_38 + 0x24) = uVar6;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 4) =
           *(undefined4 *)
            (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_14620f0d0(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620f0d0 FUN_14620f0d0 body=485 status=ok
// SIG undefined FUN_14620f0d0(void)

void FUN_14620f0d0(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar7 = (longlong)iVar12;
        iVar6 = *(int *)(lVar3 + 8 + lVar7 * 0x28);
        puVar10 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar10 = *(undefined2 **)(lVar3 + lVar7 * 0x28);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar10);
        uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar3 + 0x24 + lVar7 * 0x28) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar7 * 0x28) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620f2b6 FUN_14620f2b6 body=138 status=ok
// SIG undefined FUN_14620f2b6(void)

void FUN_14620f2b6(longlong *param_1,undefined4 param_2)

{
  undefined1 auStack_a8 [40];
  undefined1 local_80 [96];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14165273a(local_80);
  FUN_1416524e8(param_1,param_2);
  (**(code **)(*param_1 + 0x2a8))(param_1);
  FUN_1416525c2(local_80);
  FUN_1447cd2ec(param_1 + 0x27,0);
  (**(code **)(*param_1 + 0x2e8))(param_1);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620f342 FUN_14620f342 body=277 status=ok
// SIG undefined FUN_14620f342(void)

undefined8 * FUN_14620f342(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c990978) {
    FUN_144b3d300(&DAT_14c990978);
    if (DAT_14c990978 == -1) {
      FUN_14620f458(&local_38);
      uVar3 = FUN_1416530ca(&local_38);
      DAT_14c990968 = uVar3;
      DAT_14c990970 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      DAT_14c990970[1] = &DAT_100000001;
      *DAT_14c990970 = &PTR_LAB_149f23210;
      DAT_14c990970[2] = uVar3;
      FUN_1447a1747(local_38,local_30);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      atexit(FUN_14291144d);
      _Init_thread_footer(&DAT_14c990978);
    }
  }
  *param_2 = DAT_14c990968;
  puVar2 = DAT_14c990970;
  param_2[1] = DAT_14c990970;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620f458 FUN_14620f458 body=582 status=ok
// SIG undefined FUN_14620f458(void)

/* WARNING: Removing unreachable block (ram,0x00014620f637) */

undefined8 * FUN_14620f458(undefined8 *param_1)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_88 [32];
  undefined8 local_68;
  double local_58;
  undefined8 local_50;
  longlong local_48 [3];
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48[2] = 0;
  uStack_30 = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  uVar5 = FUN_14118da1c();
  local_68 = 0;
  cVar2 = FUN_14063337c(uVar5,L"-FileHostIP=",local_48,1);
  if (cVar2 == '\0') {
    uVar5 = FUN_14118da1c();
    cVar2 = FUN_14054d46e(uVar5,L"CookOnTheFly");
    if (cVar2 != '\0') {
      uVar5 = FUN_14118da1c();
      local_68 = 0;
      FUN_14063337c(uVar5,L"-ZenStoreHost=",local_48,1);
    }
  }
  iVar3 = FUN_1403de9f2(local_48,local_48 + 2,&DAT_149e06124,1);
  if (iVar3 < 1) {
    lVar7 = 0;
  }
  else {
    local_58 = 0.0;
    uVar5 = FUN_14118da1c();
    FUN_140c2d9be(uVar5,L"-CookOnTheFlyServerWaitTime=",&local_58);
    auVar8._0_8_ = local_58 * 10000000.0 + 0.5;
    auVar8._8_8_ = 0;
    auVar8 = roundpd(auVar8,auVar8,1);
    lVar7 = (longlong)auVar8._0_8_;
  }
  uVar5 = FUN_14118da1c();
  cVar2 = FUN_14054d46e(uVar5,L"ZenPlatformProtocol");
  if (cVar2 != '\0') {
    FUN_1400b22c2(&local_58,"platform://");
    uVar1 = uStack_30;
    lVar6 = (longlong)(int)uStack_30;
    uVar4 = (int)uStack_30 + 1;
    uStack_30 = CONCAT44(uStack_30._4_4_,uVar4);
    if (uStack_30._4_4_ < uVar4) {
      FUN_1447a1bd6(local_48 + 2,uVar1 & 0xffffffff);
    }
    lVar6 = lVar6 * 0x10;
    *(undefined8 *)(local_48[2] + lVar6) = 0;
    *(double *)(local_48[2] + lVar6) = local_58;
    local_58 = 0.0;
    *(undefined4 *)(local_48[2] + 8 + lVar6) = (undefined4)local_50;
    *(undefined4 *)(local_48[2] + 0xc + lVar6) = local_50._4_4_;
    local_50 = 0;
  }
  uVar1 = uStack_30;
  lVar6 = local_48[2];
  *param_1 = 0;
  *(int *)(param_1 + 1) = (int)uStack_30;
  if ((int)uStack_30 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140b856de(param_1,uStack_30 & 0xffffffff,0);
    FUN_140b8566a(*param_1,lVar6,uVar1 & 0xffffffff);
  }
  param_1[2] = lVar7;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_48[2],uStack_30 & 0xffffffff);
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14620f6a0 FUN_14620f6a0 body=844 status=ok
// SIG undefined FUN_14620f6a0(void)

void FUN_14620f6a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  size_t sVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined4 uVar9;
  wchar_t *_Str;
  undefined1 auStack_e8 [44];
  undefined1 local_bc [4];
  undefined2 *local_b8;
  int local_b0;
  wchar_t *local_a8;
  int local_a0;
  longlong local_98 [2];
  wchar_t *local_88;
  int local_80;
  wchar_t *local_78;
  int local_70;
  wchar_t *local_68;
  int local_60;
  wchar_t *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  wchar_t *local_48;
  undefined4 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar4 = (longlong *)FUN_144a8054c();
  (**(code **)(*plVar4 + 0x68))(plVar4,&local_58,"GbxDiscord");
  (**(code **)(*(longlong *)local_58 + 0x20))(local_58,&local_68);
  plVar4 = (longlong *)CONCAT44(uStack_4c,local_50);
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
  local_58 = local_68;
  if (local_60 == 0) {
    local_58 = L"";
  }
  if (local_58 == (wchar_t *)0x0) {
    local_50 = 0;
  }
  else {
    sVar5 = wcslen(local_58);
    local_50 = (int)sVar5;
  }
  local_48 = L"Binaries";
  local_40 = 8;
  local_38 = L"discord";
  local_30 = 7;
  FUN_140bee87a(&local_78,&local_58,3);
  local_58 = local_78;
  if (local_70 == 0) {
    local_58 = L"";
  }
  if (local_58 == (wchar_t *)0x0) {
    local_50 = 0;
  }
  else {
    sVar5 = wcslen(local_58);
    local_50 = (int)sVar5;
  }
  local_48 = L"x86_64";
  local_40 = 6;
  FUN_140bee87a(&local_88,&local_58,2);
  uVar6 = FUN_14620f9ee();
  FUN_140056680(local_98,uVar6);
  FUN_140b1283a(&local_a8,L"discord_game_sdk.",local_98);
  _Str = L"";
  if (local_a0 != 0) {
    _Str = local_a8;
  }
  local_58 = L"";
  if (local_80 != 0) {
    local_58 = local_88;
  }
  uVar9 = 0;
  uVar3 = 0;
  if (local_58 != (wchar_t *)0x0) {
    sVar5 = wcslen(local_58);
    uVar3 = (int)sVar5;
  }
  local_50 = uVar3;
  local_48 = _Str;
  if (_Str != (wchar_t *)0x0) {
    sVar5 = wcslen(_Str);
    uVar9 = (int)sVar5;
  }
  local_40 = uVar9;
  FUN_140bee87a(&local_b8,&local_58,2);
  puVar8 = local_b8;
  if (local_b0 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  lVar7 = FUN_14155261e(puVar8);
  *(longlong *)(param_1 + 8) = lVar7;
  if (local_b8 != (undefined2 *)0x0) {
    FUN_1400020a8();
    lVar7 = *(longlong *)(param_1 + 8);
  }
  if (lVar7 == 0) {
    local_58 = L"ThirdPartyLibraryError";
    local_50 = 0x16;
    FUN_1446e940c(&local_b8,&local_58);
    local_58 = L"FDiscordRpcModule";
    local_50 = 0x11;
    FUN_1446e940c(local_bc,&local_58);
    FUN_140208bae(&local_58,local_bc,&local_b8,L"Failed to load discord_game_sdk library");
    FUN_14681545c(0,&local_58);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    FreeLibrary(*(HMODULE *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (local_a8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14620f9ee FUN_14620f9ee body=8 status=ok
// SIG undefined FUN_14620f9ee(void)

undefined * FUN_14620f9ee(void)

{
  return &DAT_149e3fd76;
}



// FUNCTION 14620f9f6 FUN_14620f9f6 body=25 status=ok
// SIG undefined FUN_14620f9f6(void)

undefined8 FUN_14620f9f6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14620fa16 FUN_14620fa16 body=195 status=ok
// SIG undefined FUN_14620fa16(void)

void FUN_14620fa16(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FUN_14479d2ce(param_1 + 8);
  if (param_2 == (longlong *)0x0) goto LAB_14620fa74;
  lVar2 = (**(code **)(*param_2 + 8))(param_2);
  if (lVar2 == 0) {
LAB_14620fa88:
    lVar2 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar2 == 0) goto LAB_14620fa74;
    lVar3 = FUN_144a78d6a();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_14620fa74;
    lVar3 = *(longlong *)(lVar2 + 0xb0);
    if (lVar3 == 0) {
      lVar3 = FUN_1448abda6(lVar2);
    }
  }
  else {
    lVar3 = FUN_144a6c4d8();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_14620fa88;
    lVar3 = FUN_1447210f0(lVar2);
  }
  if (lVar3 != lVar1) {
    return;
  }
LAB_14620fa74:
  FUN_140d397ce(param_1,param_2);
  return;
}



// FUNCTION 14620fada FUN_14620fada body=415 status=ok
// SIG undefined FUN_14620fada(void)

void FUN_14620fada(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(longlong *)(param_1 + 0x200) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x200) + 0xa0) & 1) == 0)) {
    FUN_14009fd82(DAT_14c82b500,param_1 + 0x200,0xff);
  }
  plVar2 = (longlong *)(param_1 + 0x80);
  lVar3 = param_1 + 0x90;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar6 = 0;
  local_50 = lVar3;
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_1449c0562(&local_58);
    iVar6 = *(int *)(param_1 + 0xa8);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = plVar2;
  if ((iStack_44 != iVar6) || (local_50 != lVar3)) {
    do {
      plVar4 = *(longlong **)(*local_80 + 8 + (longlong)iStack_64 * 0x20);
      plVar5 = *(longlong **)(*local_80 + 0x10 + (longlong)iStack_64 * 0x20);
      if (plVar5 == (longlong *)0x0) {
        (**(code **)(*plVar4 + 0xb0))(plVar4,param_2);
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        (**(code **)(*plVar4 + 0xb0))(plVar4,param_2);
        LOCK();
        plVar4 = plVar5 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (((iStack_64 != iVar6) || (local_70 != lVar3)) || (local_80 != plVar2));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14620fc7a FUN_14620fc7a body=396 status=ok
// SIG undefined FUN_14620fc7a(void)

undefined4 * FUN_14620fc7a(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined *puVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14620fec0(local_40);
  puVar1 = (undefined4 *)*param_2;
  lVar2 = param_2[1];
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  *(undefined4 *)local_38 = *puVar1;
  *(undefined4 *)((longlong)local_38 + 4) = uVar5;
  *(undefined4 *)(local_38 + 1) = uVar6;
  *(undefined4 *)((longlong)local_38 + 0xc) = uVar7;
  FUN_14620ffd4(local_38 + 2,lVar2);
  *(undefined4 *)(local_38 + 0x12) = 0xffffffff;
  local_44 = local_40[0];
  uVar3 = *local_38;
  uVar4 = local_38[1];
  uVar10 = (uint)((ulonglong)uVar4 >> 0x10);
  uVar15 = (uint)uVar4 & 0xffff;
  uVar9 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar14 = (uint)uVar3 & 0xffff;
  uVar9 = ((uint)uVar3 << 0x10 | uVar14) + (int)((ulonglong)uVar3 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar14 >> 4);
  uVar9 = (uVar9 >> 2) +
          ((uint)uVar4 << 0x10 | uVar15) + (int)((ulonglong)uVar4 >> 0x20) +
          (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar15 >> 4) + uVar9 * 0x40 + 0x9e3779b9 ^ uVar9;
  cVar8 = FUN_14620fe08(uVar9,local_38,&local_44);
  uVar5 = local_44;
  if (cVar8 == '\0') {
    uVar10 = DAT_14cb720c0 - DAT_14cb720ec;
    iVar12 = 1;
    if (3 < uVar10) {
      uVar11 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar12 <= DAT_14cb72100)) {
      uVar9 = DAT_14cb72100 - 1U & uVar9;
      *(uint *)((longlong)local_38 + 0x94) = uVar9;
      puVar13 = &DAT_14cb720f0;
      if (DAT_14cb720f8 != (undefined *)0x0) {
        puVar13 = DAT_14cb720f8;
      }
      *(undefined4 *)(local_38 + 0x12) = *(undefined4 *)(puVar13 + (longlong)(int)uVar9 * 4);
      *(undefined4 *)(puVar13 + (longlong)(int)uVar9 * 4) = local_44;
    }
    else {
      DAT_14cb72100 = iVar12;
      FUN_146210254();
    }
  }
  *param_1 = uVar5;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620fe08 FUN_14620fe08 body=184 status=ok
// SIG undefined FUN_14620fe08(void)

undefined8 FUN_14620fe08(uint param_1,longlong *param_2,int *param_3)

{
  void *_Dst;
  longlong lVar1;
  undefined *puVar2;
  int iVar3;
  
  if (1 < (uint)(DAT_14cb720c0 - DAT_14cb720ec)) {
    puVar2 = &DAT_14cb720f0;
    if (DAT_14cb720f8 != (undefined *)0x0) {
      puVar2 = DAT_14cb720f8;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)(DAT_14cb72100 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      while( true ) {
        lVar1 = (longlong)iVar3 * 0x98;
        _Dst = (void *)(DAT_14cb720b8 + lVar1);
        if ((*(longlong *)(DAT_14cb720b8 + lVar1) == *param_2) &&
           (*(longlong *)(DAT_14cb720b8 + 8 + lVar1) == param_2[1])) break;
        iVar3 = *(int *)((longlong)_Dst + 0x90);
        if (iVar3 == -1) {
          return 0;
        }
      }
      FUN_145fce7e8((longlong)_Dst + 0x10);
      memmove(_Dst,param_2,0x90);
      FUN_1487d7da4(*param_3);
      *param_3 = iVar3;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14620fec0 FUN_14620fec0 body=275 status=ok
// SIG undefined FUN_14620fec0(void)

int * FUN_14620fec0(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb720e8;
  iVar3 = DAT_14cb720c0;
  if (DAT_14cb720ec == 0) {
    iVar2 = DAT_14cb720c0 + 1;
    bVar7 = DAT_14cb720c4 == DAT_14cb720c0;
    DAT_14cb720c0 = iVar2;
    if (bVar7) {
      FUN_14125fb0c(&DAT_14cb720b8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb720c8,1);
    puVar4 = DAT_14cb720d8;
    if (DAT_14cb720d8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb720c8;
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
    lVar6 = (longlong)DAT_14cb720e8;
    DAT_14cb720e8 = *(int *)(DAT_14cb720b8 + 4 + lVar6 * 0x98);
    DAT_14cb720ec = DAT_14cb720ec + -1;
    if (DAT_14cb720ec != 0) {
      *(undefined4 *)(DAT_14cb720b8 + (longlong)DAT_14cb720e8 * 0x98) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb720c8;
  if (DAT_14cb720d8 != (undefined *)0x0) {
    puVar4 = DAT_14cb720d8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x98 + DAT_14cb720b8;
  return param_1;
}



// FUNCTION 14620ffd4 FUN_14620ffd4 body=639 status=ok
// SIG undefined FUN_14620ffd4(void)

undefined8 * FUN_14620ffd4(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
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
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if (param_2 == 0) {
    param_1[10] = 0;
    param_1[0xb] = 0;
    uVar5 = 0;
    param_1[0xc] = 0;
    param_1[0xf] = 0;
  }
  else {
    FUN_1400bbfc4(&local_50,param_2);
    *(undefined4 *)(param_1 + 0xb) = (undefined4)local_50;
    *(undefined4 *)((longlong)param_1 + 0x5c) = local_50._4_4_;
    *(undefined4 *)(param_1 + 0xc) = uStack_48;
    *(undefined4 *)((longlong)param_1 + 100) = uStack_44;
    if (param_1 + 0xb == &local_50) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0xd] != 0) {
        FUN_1400020a8();
      }
      param_1[0xd] = local_40;
      local_40 = 0;
      *(undefined4 *)(param_1 + 0xe) = local_38;
      *(undefined4 *)((longlong)param_1 + 0x74) = local_34;
    }
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if (cVar2 == '\0') {
LAB_146210094:
      FUN_14485c47a(param_1 + 10,param_2);
    }
    else {
      uVar1 = *(uint *)(param_2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) goto LAB_146210094;
      param_1[10] = 0;
    }
    param_1[0xf] = 0;
    lVar3 = *(longlong *)(param_2 + 0x20);
    if (lVar3 == 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      if (*(longlong *)(lVar3 + 0x20) == 0) {
        uVar5 = *(undefined8 *)(lVar3 + 0x18);
        uVar6 = *(undefined8 *)(param_2 + 0x18);
        goto LAB_1462100c7;
      }
      uVar5 = 0;
    }
  }
  uVar6 = 0;
LAB_1462100c7:
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  local_58 = 3;
  *local_60 = &PTR_LAB_14b3eded0;
  local_60[1] = uVar5;
  local_60[2] = uVar6;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_60[3] = lVar4;
  *local_60 = &PTR_FUN_14b3ede60;
  local_60[4] = &LAB_1487d5cf2;
  local_50 = 0;
  uStack_48 = 0;
  FUN_14009d848(&local_50,&local_60);
  FUN_1448b6402(param_2 + 0x2d8,&local_68,&local_50);
  FUN_1449db362(&local_50);
  param_1[0xf] = local_68;
  FUN_1449db362(&local_60);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146210254 FUN_146210254 body=641 status=ok
// SIG undefined FUN_146210254(void)

void FUN_146210254(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14cb720f8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb720f8,0,0,4);
  }
  uVar4 = DAT_14cb72100;
  uVar2 = local_78;
  if (DAT_14cb72100 != 0) {
    uVar8 = 0;
    FUN_144a1cbf0(&DAT_14cb720f0,0,DAT_14cb72100,4);
    if (0 < (int)uVar4) {
      do {
        puVar6 = DAT_14cb720f8;
        if (DAT_14cb720f8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb720f0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb72100 + 0x7fffffff & uVar8) * 4) = 0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar4 != uVar8);
    }
    local_68 = 0x100000000;
    local_60 = &DAT_14cb720c8;
    local_58 = 0xffffffff;
    local_50 = 0;
    if (DAT_14cb720e0 != 0) {
      FUN_1449c0562(&local_68);
    }
    local_90 = &DAT_14cb720b8;
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar2 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    if (local_78._4_4_ < *(int *)(local_60 + 0x18)) {
      iVar5 = local_78._4_4_;
      local_78 = uVar2;
      do {
        lVar1 = *local_90;
        lVar7 = (longlong)iVar5 * 0x98;
        uVar2 = *(undefined8 *)(lVar1 + lVar7);
        uVar3 = *(undefined8 *)(lVar1 + 8 + lVar7);
        uVar4 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar9 = (uint)uVar3 & 0xffff;
        uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar12 = (uint)uVar2 & 0xffff;
        uVar8 = ((uint)uVar2 << 0x10 | uVar12) + (int)((ulonglong)uVar2 >> 0x20) +
                (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar12 >> 4);
        uVar11 = (longlong)
                 (int)(((uint)uVar3 << 0x10 | uVar9) + (int)((ulonglong)uVar3 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4) + uVar8 * 0x40 + (uVar8 >> 2)
                       + 0x9e3779b9 ^ uVar8) & (longlong)(int)DAT_14cb72100 - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar1 + 0x94 + lVar7) = iVar10;
        puVar6 = DAT_14cb720f8;
        if (DAT_14cb720f8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb720f0;
        }
        *(undefined4 *)(lVar1 + 0x90 + lVar7) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb72100 - 1U & uVar11) * 4);
        puVar6 = DAT_14cb720f8;
        if (DAT_14cb720f8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb720f0;
        }
        *(int *)(puVar6 + ((longlong)iVar10 & (longlong)(int)DAT_14cb72100 - 1U) * 4) = iVar5;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar5 = local_78._4_4_;
        uVar2 = local_78;
      } while (local_78._4_4_ < *(int *)(local_80 + 0x18));
    }
  }
  local_78 = uVar2;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1462104d6 FUN_1462104d6 body=585 status=ok
// SIG undefined FUN_1462104d6(void)

int * FUN_1462104d6(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((*param_1 == -1) || (param_1[1] == -1)) ||
     (cVar4 = FUN_146210720(param_1,param_3), cVar4 == '\0')) {
    *param_2 = -1;
    goto LAB_14621067d;
  }
  plVar5 = (longlong *)FUN_146210790(param_1,param_7,param_8,param_9);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x38);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x4c);
  FUN_140dba9e6(local_70,*param_1);
  FUN_140dba9e6(local_70,param_1[1]);
  local_b8 = &local_b0;
  local_c0 = &LAB_146194b8e;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 8;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar5 + 2;
  local_c8 = plVar5;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c71394(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_146210650;
    }
  }
  else {
LAB_146210650:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
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
LAB_14621067d:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146210720 FUN_146210720 body=112 status=ok
// SIG undefined FUN_146210720(void)

undefined8 FUN_146210720(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4);
}



// FUNCTION 146210790 FUN_146210790 body=158 status=ok
// SIG undefined FUN_146210790(void)

undefined8 *
FUN_146210790(undefined8 *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar5[1] = &DAT_100000001;
  *puVar5 = &PTR_LAB_14a4d8920;
  puVar5[2] = &PTR_FUN_14a4d8938;
  lVar2 = *param_2;
  lVar3 = *param_4;
  puVar5[3] = *param_3;
  lVar6 = FUN_14009d2a0();
  uVar1 = *(ushort *)(lVar3 + 0x12);
  puVar5[4] = (ulonglong)*(ushort *)(lVar3 + 0x10) * 4 + *(longlong *)(lVar6 + 0x10);
  *(uint *)(puVar5 + 5) = (uint)uVar1;
  puVar5[6] = *(undefined8 *)(lVar2 + 0x248);
  *(undefined4 *)(puVar5 + 7) = *(undefined4 *)(lVar3 + 0xc);
  uVar4 = param_1[1];
  puVar5[8] = *param_1;
  puVar5[9] = uVar4;
  return puVar5;
}



// FUNCTION 14621082e FUN_14621082e body=28 status=ok
// SIG undefined FUN_14621082e(void)

void FUN_14621082e(undefined8 param_1)

{
  FUN_1416534da(param_1,1);
  FUN_140872622(param_1);
  return;
}



// FUNCTION 14621084a FUN_14621084a body=28 status=ok
// SIG undefined FUN_14621084a(void)

void FUN_14621084a(undefined8 param_1)

{
  FUN_141653816(param_1,1);
  FUN_140872622(param_1);
  return;
}



// FUNCTION 146210866 FUN_146210866 body=336 status=ok
// SIG undefined FUN_146210866(void)

void FUN_146210866(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1462109b8();
  if (param_2 == 0) goto LAB_146210982;
  lVar3 = FUN_144a2f878();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
      != lVar3 + 0x30)) goto LAB_146210982;
  lVar3 = *(longlong *)(param_1 + 0x1118);
  if (lVar3 == 0) {
    uVar4 = FUN_140da11f2();
    lVar3 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x1118) = lVar3;
  }
  if (*(longlong *)(param_1 + 0x1120) == 0) {
    if ((lVar3 == 0) || (*(longlong *)(param_1 + 0x1110) == 0)) goto LAB_146210982;
    plVar1 = *(longlong **)(lVar3 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 != '\0') {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar3 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x1110));
        *(longlong *)(param_1 + 0x1120) = lVar3;
        if (lVar3 == 0) goto LAB_146210982;
        lVar3 = *(longlong *)(param_1 + 0x1118);
        goto LAB_14621094c;
      }
    }
    *(undefined8 *)(param_1 + 0x1120) = 0;
  }
  else {
LAB_14621094c:
    if (lVar3 == 0) {
      lVar3 = FUN_140da11f2();
    }
    local_40 = *(undefined8 *)(param_1 + 0x1110);
    local_38 = FUN_14477b664(lVar3);
    local_30 = *(undefined8 *)(param_1 + 0x1120);
    FUN_146210ace(param_2,&local_40);
  }
LAB_146210982:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462109b8 FUN_1462109b8 body=277 status=ok
// SIG undefined FUN_1462109b8(void)

void FUN_1462109b8(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x908);
  if (lVar3 == 0) {
    uVar2 = FUN_14043db3a();
    lVar3 = FUN_14477b664(uVar2);
    *(longlong *)(param_1 + 0x908) = lVar3;
  }
  plVar4 = (longlong *)(param_1 + 0x900);
  if (*(longlong *)(param_1 + 0x910) == 0) {
    if ((lVar3 == 0) || (*plVar4 == 0)) goto LAB_146210a58;
    plVar5 = *(longlong **)(lVar3 + 0xb8);
    if (plVar5 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar5 + 0x108))(plVar5);
      if (cVar1 != '\0') {
        uVar2 = (**(code **)(*plVar5 + 0x110))(plVar5);
        lVar3 = FUN_144aff482(uVar2,plVar4);
        *(longlong *)(param_1 + 0x910) = lVar3;
        if (lVar3 == 0) goto LAB_146210a58;
        goto LAB_146210a4a;
      }
    }
    *(undefined8 *)(param_1 + 0x910) = 0;
  }
  else {
LAB_146210a4a:
    FUN_146210b66(param_2,plVar4,0);
  }
LAB_146210a58:
  if ((*(char *)(param_1 + 0x800) == '\x01') && (param_2 != (longlong *)0x0)) {
    uVar2 = FUN_14098e156();
    plVar4 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar2);
    if (plVar4 != (longlong *)0x0) {
      uVar2 = FUN_14098e156();
      plVar5 = (longlong *)FUN_144718840(plVar4,uVar2);
      if (plVar5 != (longlong *)0x0 && plVar4 != plVar5) {
                    /* WARNING: Could not recover jumptable at 0x000146210abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146210ace FUN_146210ace body=151 status=ok
// SIG undefined FUN_146210ace(void)

void FUN_146210ace(longlong param_1)

{
  byte bVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_140373168(param_1 + 0x7f38);
    bVar1 = *(byte *)(param_1 + 0x9017);
    FUN_1411200cc(param_1,local_40);
    FUN_140373168(param_1 + 0x7f68,local_40);
    *(uint *)(param_1 + 0x7f80) = (uint)bVar1;
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0x47);
    FUN_140da0d80(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146210b66 FUN_146210b66 body=304 status=ok
// SIG undefined FUN_146210b66(void)

undefined8 FUN_146210b66(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    plVar2 = (longlong *)FUN_14017698e(param_1);
    if (plVar2 == (longlong *)0x0) {
LAB_146210c77:
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
    }
    else {
      lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2);
      if (lVar4 == 0) goto LAB_146210c77;
      local_48 = *(undefined8 *)(lVar4 + 0x148);
      uVar1 = FUN_14477b664(*(undefined8 *)(lVar4 + 0x150));
      uStack_40 = FUN_14477b664(uVar1);
      local_38 = *(undefined8 *)(lVar4 + 0x158);
    }
    FUN_140e7795e(param_3,&local_48);
  }
  if (param_1 == (longlong *)0x0) {
LAB_146210c03:
    plVar3 = (longlong *)FUN_14017698e(param_1);
    if (plVar3 == (longlong *)0x0) {
      uVar1 = 0;
      goto LAB_146210be0;
    }
    lVar4 = 0x30;
  }
  else {
    uVar1 = FUN_144a8703e();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 == (longlong *)0x0) goto LAB_146210c03;
    uVar1 = FUN_144a8703e();
    plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
    if ((plVar2 == plVar3) || (plVar3 == (longlong *)0x0)) goto LAB_146210c03;
    lVar4 = 0x18;
  }
  (**(code **)(*plVar3 + lVar4))(plVar3,param_2);
  uVar1 = 1;
LAB_146210be0:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146210c98 FUN_146210c98 body=1588 status=ok
// SIG undefined FUN_146210c98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_146210c98(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte bVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  void *_Dst;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14a34d2b0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar5 = 0;
  param_1[9] = puVar5;
  param_1[8] = puVar5;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 10),4000);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xf),4000);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x14),4000);
  param_1[0x33] = 0;
  param_1[0x34] = 0x1800000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  iVar8 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 0x37) = iVar8;
  if (iVar8 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
    plVar7 = (longlong *)0x0;
  }
  else {
    puVar5 = param_1 + 0x36;
    FUN_1462112f4(puVar5,iVar8);
    FUN_1462112cc(*puVar5,uVar2,iVar8);
    plVar7 = (longlong *)*puVar5;
  }
  *(undefined1 *)(param_1 + 0x38) = param_3;
  uVar9 = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0xffffffffffffffff;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  DAT_14ca77418 = param_1;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = *(undefined4 *)(*plVar7 + 0x20c);
  lVar3 = DAT_14ca770a0;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  uVar6 = 0;
  if (*piVar1 != 0x40000002) {
    bVar4 = FUN_144a61b4f();
    uVar6 = (ulonglong)(bVar4 ^ 1);
  }
  iVar8 = *(int *)(lVar3 + uVar6 * 4);
  if (iVar8 < 1) {
    iVar8 = 0;
  }
  *(int *)(param_1 + 0x3d) = iVar8 << 0x14;
  _Dst = (void *)FUN_14001cc68();
  param_1[0x3c] = _Dst;
  memset(_Dst,0,(ulonglong)*(uint *)(param_1 + 0x3d));
  _DAT_14ca84d97 = 0x101;
  DAT_14ca84e2b = 1;
  DAT_14ca84d99 = 1;
  DAT_14c760db0 = DAT_14c760dac & 0xfffff3ff;
  DAT_14ca84ed0 = 0;
  DAT_14ca84ec8 = 0;
  FUN_1414d73b6(DAT_14c872ce0,L"TextureStreaming",L"PoolSizeVRAMPercentage",&DAT_14ca84ed0,
                &DAT_14c872ce8);
  lVar3 = DAT_14ca77088;
  _DAT_14ca84ab0 = 0x270;
  DAT_14ca84ab8 = 8;
  DAT_14c873434 = 0;
  DAT_14c873464 = 2;
  _DAT_14c873494 = 0x5a;
  _DAT_14c8734c4 = 0x3d;
  _DAT_14c8734f4 = 0x38;
  _DAT_14c873524 = 0x46;
  _DAT_14c873554 = 0x49;
  _DAT_14c873584 = 0x4c;
  _DAT_14c873b84 = 0x50;
  _DAT_14c8735b4 = 0;
  if (*piVar1 != 0x40000002) {
    bVar4 = FUN_144a61b4f();
    uVar9 = (ulonglong)(bVar4 ^ 1);
  }
  if (*(int *)(lVar3 + uVar9 * 4) == 0) {
    DAT_14c873648 = (DAT_14c873648 & 0xfc) + 1;
    _DAT_14c873c74 = 0x16;
    _DAT_14c873638 = 5;
    _DAT_14c873644 = 0x13;
  }
  else {
    DAT_14c873648 = DAT_14c873648 | 3;
    _DAT_14c873c74 = 0x2f;
    _DAT_14c873638 = 4;
    _DAT_14c873644 = 0x2c;
  }
  _DAT_14c873c68 = _DAT_14c873638;
  DAT_14c873c78 = DAT_14c873c78 | 1;
  _DAT_14c873674 = 0x35;
  _DAT_14c873668 = 2;
  DAT_14c873678 = DAT_14c873678 | 1;
  DAT_14c8736a4 = 0x29;
  _DAT_14c8736d4 = 0x23;
  _DAT_14c873704 = 0x22;
  _DAT_14c873734 = 0x22;
  _DAT_14c873764 = 0x10;
  DAT_14c873794 = 0x18;
  DAT_14c8737c4 = 0xb;
  _DAT_14c8737f4 = 0x2c;
  DAT_14c873824 = 0x36;
  _DAT_14c873854 = 0x36;
  _DAT_14c8735e4 = 0x1a;
  _DAT_14c8735d8 = 4;
  DAT_14c873614 = 10;
  DAT_14c873608 = 8;
  _DAT_14c873914 = 0x1a;
  DAT_14c873918 = DAT_14c873918 | 1;
  DAT_14c873908 = 4;
  _DAT_14c8738b4 = 0x33;
  _DAT_14c873884 = 0x53;
  _DAT_14c8738e4 = 0x42;
  _DAT_14c873944 = 0x41;
  _DAT_14c873974 = 0x2a;
  _DAT_14c8739a4 = 0x2b;
  _DAT_14c873a34 = 0x39;
  _DAT_14c873a64 = 0x3b;
  _DAT_14c873a94 = 0xc;
  _DAT_14c873ac4 = 0xe;
  _DAT_14c873af4 = 0x55;
  DAT_14c873af8 = DAT_14c873af8 | 1;
  _DAT_14c8741b4 = 0x56;
  DAT_14c8741b8 = DAT_14c8741b8 | 1;
  _DAT_14c873b24 = 0x1b;
  _DAT_14c873f74 = 0x1e;
  _DAT_14c873fa4 = 0x1f;
  _DAT_14c873bb4 = 0x31;
  _DAT_14c873d34 = 3;
  _DAT_14c873d64 = 0x24;
  _DAT_14c874574 = 0x26;
  DAT_14c8740f4 = 0x11;
  _DAT_14c873e84 = 0x5f;
  _DAT_14c873eb4 = 0x61;
  _DAT_14c873ee4 = 0x3e;
  _DAT_14c874184 = 0x3d;
  _DAT_14c873fd4 = 0xb;
  _DAT_14c874004 = 0xd;
  _DAT_14c8740c4 = 0x67;
  DAT_14c8740c8 = DAT_14c8740c8 | 1;
  _DAT_14c8742d4 = 0x25;
  _DAT_14c874304 = 0x32;
  _DAT_14c874334 = 7;
  _DAT_14c874364 = 8;
  _DAT_14c874394 = 6;
  _DAT_14c8743c4 = 0x40;
  _DAT_14c874424 = 0x43;
  _DAT_14c874454 = 0x68;
  DAT_14c874458 = DAT_14c874458 | 1;
  DAT_14ca84e16 = 1;
  DAT_14ca84e40 = 0x4000;
  DAT_14ca84e64 = 0x4000;
  DAT_14ca84e6c = 0x800;
  DAT_14ca84f20 = 1;
  DAT_14ca84d90 = 0xf;
  _DAT_14ca84e38 = 0x400000004000;
  DAT_14ca84f58 = 1;
  _DAT_14ca84e70 = (uint)(1 < *(int *)(*(longlong *)param_1[0x36] + 0x214)) * 0x10 + 0x10;
  _DAT_14ca84f24 = 0xffff0000ffff;
  DAT_14ca84f2c = 0xffff;
  _DAT_14ca84f1d = 0x101;
  DAT_14ca84f1f = 1;
  DAT_14ca84e69 = 1;
  DAT_14ca84e01 = 1;
  DAT_14ca84e25 = 1;
  DAT_14ca84ef8 = 1;
  _DAT_14ca84f59 = 0x101;
  DAT_14ca84f68 = 1;
  _DAT_14ca84e02 = 0x101;
  DAT_14ca8507b = 1;
  DAT_14ca84df9 = 1;
  return param_1;
}



// FUNCTION 1462112cc FUN_1462112cc body=40 status=ok
// SIG undefined FUN_1462112cc(void)

void FUN_1462112cc(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 1462112f4 FUN_1462112f4 body=88 status=ok
// SIG undefined FUN_1462112f4(void)

void FUN_1462112f4(longlong param_1,int param_2)

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



// FUNCTION 14621134c FUN_14621134c body=43 status=ok
// SIG undefined FUN_14621134c(void)

undefined8 FUN_14621134c(undefined8 param_1,int param_2)

{
  FUN_141653b52();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 146211378 FUN_146211378 body=9 status=ok
// SIG undefined FUN_146211378(void)

void FUN_146211378(longlong param_1)

{
  FUN_146211382(param_1 + 0x10);
  return;
}



// FUNCTION 146211382 FUN_146211382 body=207 status=ok
// SIG undefined FUN_146211382(void)

void FUN_146211382(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b2426c0;
  param_1[10] = &PTR_FUN_14b242710;
  plVar3 = (longlong *)param_1[0x18];
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
  plVar3 = (longlong *)param_1[0x13];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0xf];
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
  param_1[10] = &PTR_LAB_14b242fd0;
  plVar3 = (longlong *)param_1[0xc];
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
  FUN_140d8c2c6(param_1);
  return;
}



// FUNCTION 146211452 FUN_146211452 body=9 status=ok
// SIG undefined FUN_146211452(void)

void FUN_146211452(longlong param_1)

{
  FUN_141653e82(param_1 + 0x10);
  return;
}



// FUNCTION 14621145c FUN_14621145c body=78 status=ok
// SIG undefined FUN_14621145c(void)

undefined8 * FUN_14621145c(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_1462114aa();
  *param_2 = plVar3 + 2;
  param_2[1] = plVar3;
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



// FUNCTION 1462114aa FUN_1462114aa body=138 status=ok
// SIG undefined FUN_1462114aa(void)

void FUN_1462114aa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b99bac0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[2] = &PTR_FUN_14b7f25a0;
  puVar1[7] = 0x4059000000000000;
  puVar1[8] = 0x4049000000000000;
  puVar1[9] = 0x3ff0000000000000;
  *(undefined1 *)(puVar1 + 10) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x51) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x53) = 0;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 2;
  return;
}



// FUNCTION 146211534 FUN_146211534 body=226 status=ok
// SIG undefined FUN_146211534(void)

longlong * FUN_146211534(longlong *param_1)

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
  pcVar13 = FUN_1462c1ba6;
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



// FUNCTION 146211618 FUN_146211618 body=138 status=ok
// SIG undefined FUN_146211618(void)

code * FUN_146211618(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshSDFIndirectArgs";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d00000010b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14621172e;
}



// FUNCTION 1462116a2 FUN_1462116a2 body=140 status=ok
// SIG undefined FUN_1462116a2(void)

undefined1 * FUN_1462116a2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_141588750();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb18;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FShadowObjectCullVS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x109;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9c8a70;
  return &LAB_147156ce8;
}



// FUNCTION 14621172e FUN_14621172e body=146 status=ok
// SIG undefined FUN_14621172e(void)

code * FUN_14621172e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14153d5fc();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb1e;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FShadowObjectCullPS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb00000010a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9c8af8;
  return FUN_1462116a2;
}



// FUNCTION 1462117c0 FUN_1462117c0 body=226 status=ok
// SIG undefined FUN_1462117c0(void)

longlong * FUN_1462117c0(longlong *param_1)

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
  pcVar13 = FUN_1462db0f0;
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



// FUNCTION 1462118a4 FUN_1462118a4 body=138 status=ok
// SIG undefined FUN_1462118a4(void)

code * FUN_1462118a4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshSDFIndirectArgs";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x21000000102;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462119ba;
}



// FUNCTION 14621192e FUN_14621192e body=140 status=ok
// SIG undefined FUN_14621192e(void)

undefined1 * FUN_14621192e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14156b52c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb18;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FMeshSDFObjectCullVS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9f06f8;
  return &LAB_1471e89c2;
}



// FUNCTION 1462119ba FUN_1462119ba body=146 status=ok
// SIG undefined FUN_1462119ba(void)

code * FUN_1462119ba(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_141587c7e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb1e;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FMeshSDFObjectCullPS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000101;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9f0780;
  return FUN_14621192e;
}



// FUNCTION 146211a4c FUN_146211a4c body=115 status=ok
// SIG undefined FUN_146211a4c(void)

void FUN_146211a4c(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)FUN_145a79c8c();
  lVar3 = plVar1[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar3 = plVar1[0x22];
  }
  FUN_141653f51(lVar3);
  if ((longlong)DAT_14cb43f50 != 0) {
    lVar4 = (longlong)DAT_14cb43f50 << 3;
    lVar3 = DAT_14cb43f48;
    do {
      lVar2 = FUN_14479d2ce(lVar3);
      if (lVar2 != 0) {
        FUN_141653f51(lVar2);
      }
      lVar3 = lVar3 + 8;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 146211ac0 FUN_146211ac0 body=173 status=ok
// SIG undefined FUN_146211ac0(void)

void FUN_146211ac0(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_146211b57;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_146211b57:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 146211b6e FUN_146211b6e body=153 status=ok
// SIG undefined FUN_146211b6e(void)

bool FUN_146211b6e(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
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



// FUNCTION 146211c08 FUN_146211c08 body=108 status=ok
// SIG undefined FUN_146211c08(void)

void FUN_146211c08(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if (lVar1 == param_2) {
    if (*(longlong *)(param_2 + 0x108) != 0) {
      FUN_147a62f22(*(longlong *)(param_2 + 0x108),param_3);
    }
    lVar1 = FUN_14479d2ce((longlong)param_1 + 0x34);
    if (lVar1 != 0) {
      FUN_147cdda4a(lVar1 + 0x1df0,param_2,param_3,lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 146211c74 FUN_146211c74 body=155 status=ok
// SIG undefined FUN_146211c74(void)

longlong * FUN_146211c74(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_14001cc68(0xa0,0x10);
  FUN_146211d10(lVar1,param_1);
  *param_2 = lVar1 + 0x10;
  param_2[1] = lVar1;
  FUN_146211d8a(param_2);
  local_40 = *param_2;
  local_58 = 0;
  local_48 = &PTR_LAB_14b42a330;
  local_68 = FUN_143e2dbfc;
  FUN_14103f5f0();
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146211d10 FUN_146211d10 body=121 status=ok
// SIG undefined FUN_146211d10(void)

void FUN_146211d10(undefined8 *param_1,longlong param_2)

{
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b42a470;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x34) = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x94) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xf8;
  return;
}



// FUNCTION 146211d8a FUN_146211d8a body=159 status=ok
// SIG undefined FUN_146211d8a(void)

void FUN_146211d8a(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_146211dc7;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_146211dc7;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_146211dc7:
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
                    /* WARNING: Could not recover jumptable at 0x000146211e25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146211e2a FUN_146211e2a body=72 status=ok
// SIG undefined FUN_146211e2a(void)

void FUN_146211e2a(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146211e72(param_1,iVar1);
  }
  FUN_1414460ee((longlong)iVar1 * 0x130 + *param_1,param_2);
  if (iVar1 != -1) {
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}



// FUNCTION 146211e72 FUN_146211e72 body=146 status=ok
// SIG undefined FUN_146211e72(void)

void FUN_146211e72(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x130,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x130)) {
      uVar5 = uVar4 / 0x130 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x130,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146211f04 FUN_146211f04 body=151 status=ok
// SIG undefined FUN_146211f04(void)

int * FUN_146211f04(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined1 param_6)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined8 *local_38;
  undefined8 local_2c;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = &local_2c;
  local_2c = 0;
  local_40 = param_6;
  local_48 = param_5;
  FUN_146211f9c(param_1,&local_24);
  if (local_24 == -1) {
    local_24 = -1;
  }
  else {
    FUN_1412099d2(param_1,&DAT_14cbd6ef8);
  }
  *param_2 = local_24;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146211f9c FUN_146211f9c body=283 status=ok
// SIG undefined FUN_146211f9c(void)

undefined8
FUN_146211f9c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
             longlong *param_5,undefined1 param_6,undefined8 *param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_188 [40];
  undefined1 local_160 [4];
  undefined8 local_15c;
  undefined1 local_154;
  longlong *local_150;
  undefined4 local_148;
  longlong *local_140;
  undefined4 local_138;
  undefined1 local_e4;
  undefined8 local_d4;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_14125b7f0(local_160);
  plVar2 = local_150;
  local_15c = *param_3;
  plVar1 = (longlong *)*param_4;
  if (local_150 != plVar1) {
    local_150 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  plVar2 = local_140;
  local_148 = (undefined4)param_4[1];
  plVar1 = (longlong *)*param_5;
  if (local_140 != plVar1) {
    local_140 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  local_138 = (undefined4)param_5[1];
  local_e4 = 0;
  local_154 = param_6;
  local_d4 = *param_7;
  FUN_14120969a(param_1,param_2,local_160);
  FUN_140989dc4(local_160);
  if ((local_40 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462120be FUN_1462120be body=360 status=ok
// SIG undefined FUN_1462120be(void)

void FUN_1462120be(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  size_t sVar3;
  undefined1 auStack_228 [32];
  longlong local_208;
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  char local_1e0;
  undefined1 local_1d8 [256];
  undefined1 local_d8 [128];
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1410ea50c();
  if (*(char *)(param_1 + 0x38c) == '\0') {
    cVar1 = FUN_144729dda(param_1 + 0x30);
    if (cVar1 != '\0') {
      uVar2 = FUN_14479d2ce(param_1 + 0x30);
      local_1f8 = local_1d8;
      local_1e0 = '\0';
      local_1e8 = local_d8;
      local_1f0 = local_1f8;
      _Str = (wchar_t *)FUN_140c7f682(param_1,L"CrosshairColorSettingsUpdate",&local_1f8);
      local_58 = 0;
      if (_Str == (wchar_t *)0x0) {
        local_50 = 0;
        local_48 = 0;
      }
      else {
        sVar3 = wcslen(_Str);
        FUN_1446fe5a4(local_d8,_Str,sVar3 & 0xffffffff,1);
      }
      local_208 = param_1 + 0x378;
      FUN_146212228(uVar2,local_50,param_1 + 0x350,param_1 + 0x364);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (local_1e0 == '\x01') {
        FUN_1400020a8(local_1f8);
      }
    }
    *(undefined1 *)(param_1 + 0x38c) = 1;
  }
  if ((local_40 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146212228 FUN_146212228 body=512 status=ok
// SIG undefined FUN_146212228(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014621241e */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_146212228(longlong param_1,char *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined4 *param_5)

{
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  undefined1 auStack_1f8 [40];
  longlong local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined1 local_190 [256];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 *local_78;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_90 = 0;
  if (param_2 == (char *)0x0) {
    local_88 = 0;
    local_80 = 0;
  }
  else {
    sVar1 = strlen(param_2);
    FUN_1446e6fe8(local_190,param_2,sVar1 & 0xffffffff,1);
  }
  FUN_140056680(&local_1d0,local_88);
  local_1c0 = *param_3;
  uStack_1b8 = param_3[1];
  local_1b0 = *param_4;
  uStack_1a8 = param_4[1];
  local_1a0 = *param_5;
  uStack_19c = param_5[1];
  uStack_198 = param_5[2];
  uStack_194 = param_5[3];
  puVar5 = (undefined1 *)0x0;
  local_78 = (undefined1 *)0x0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x48,8);
  *puVar2 = &PTR_FUN_14b9c0a00;
  plVar6 = puVar2 + 1;
  *plVar6 = local_1d0;
  local_1d0 = 0;
  *(undefined4 *)(puVar2 + 2) = (undefined4)local_1c8;
  *(undefined4 *)((longlong)puVar2 + 0x14) = local_1c8._4_4_;
  local_1c8 = 0;
  *(undefined4 *)(puVar2 + 7) = local_1a0;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = uStack_19c;
  *(undefined4 *)(puVar2 + 8) = uStack_198;
  *(undefined4 *)((longlong)puVar2 + 0x44) = uStack_194;
  *(undefined4 *)(puVar2 + 5) = (undefined4)local_1b0;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = local_1b0._4_4_;
  *(undefined4 *)(puVar2 + 6) = (undefined4)uStack_1a8;
  *(undefined4 *)((longlong)puVar2 + 0x34) = uStack_1a8._4_4_;
  *(undefined4 *)(puVar2 + 3) = (undefined4)local_1c0;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = local_1c0._4_4_;
  *(undefined4 *)(puVar2 + 4) = (undefined4)uStack_1b8;
  *(undefined4 *)((longlong)puVar2 + 0x24) = uStack_1b8._4_4_;
  if (plVar6 != (longlong *)0x0) {
    puVar5 = &LAB_145d340a0;
    local_78 = &LAB_145d340a0;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar3 = 0;
  puVar3[2] = puVar5;
  puVar3[4] = puVar2;
  local_68 = 0;
  *(undefined4 *)(puVar3 + 8) = local_48;
  *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_44;
  *(undefined4 *)(puVar3 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_3c;
  *(undefined4 *)(puVar3 + 6) = local_58;
  *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_54;
  *(undefined4 *)(puVar3 + 7) = uStack_50;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_4c;
  if (plVar6 != (longlong *)0x0) {
    local_78 = (undefined1 *)0x0;
  }
  uVar4 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    UNLOCK();
    LOCK();
    uVar4 = *puVar2;
    *puVar2 = puVar3;
    UNLOCK();
    if (local_78 != (undefined1 *)0x0) {
      uVar4 = (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  if (local_1d0 != 0) {
    uVar4 = FUN_1400020a8();
  }
  if (local_90 != 0) {
    uVar4 = FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14621242a FUN_14621242a body=36 status=ok
// SIG undefined FUN_14621242a(void)

void FUN_14621242a(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_14621244e();
  if (cVar1 != '\0') {
    return;
  }
  FUN_1459d1ac0(param_1);
  return;
}



// FUNCTION 14621244e FUN_14621244e body=838 status=ok
// SIG undefined FUN_14621244e(void)

ulonglong FUN_14621244e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 *local_70;
  undefined4 local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1446f470e(&local_50,L"SHIFT",1);
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x180))();
  local_60 = local_50;
  plVar9 = (longlong *)FUN_1401e3228();
  if (plVar9 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar9 + 0x80))(plVar9,&local_48);
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x110))(local_48,&local_60,*(undefined4 *)(param_1 + 0x30));
      plVar1 = local_48;
      plVar9 = local_58;
      lVar5 = local_60;
      if (local_60 != 0) {
        if (local_58 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_58 + 1) = (int)local_58[1] + 1;
          UNLOCK();
        }
        local_70 = (undefined8 *)0x0;
        local_68 = 0;
        FUN_1446efa72(&local_70,0,4,0x10);
        local_68 = 4;
        plVar3 = *(longlong **)(param_1 + 0x10);
        if (plVar3 == (longlong *)0x0) {
LAB_146212649:
          *local_70 = &PTR_LAB_14b4e4c90;
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 1;
          lVar7 = DAT_14c758608 + 1;
          if (lVar11 == 0) {
            LOCK();
            UNLOCK();
            lVar11 = DAT_14c758608 + 2;
            lVar7 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar7;
          local_70[2] = lVar11;
          *local_70 = &PTR_FUN_14b4ecb70;
          local_70[3] = 0;
          local_70[4] = 0;
          local_70[5] = param_1;
          local_70[6] = lVar5;
          local_70[7] = plVar9;
        }
        else {
          iVar8 = (int)plVar3[1];
          do {
            if (iVar8 == 0) goto LAB_146212649;
            LOCK();
            iVar6 = (int)plVar3[1];
            bVar12 = iVar8 == iVar6;
            if (bVar12) {
              *(int *)(plVar3 + 1) = iVar8 + 1;
              iVar6 = iVar8;
            }
            iVar8 = iVar6;
            UNLOCK();
          } while (!bVar12);
          uVar4 = *(undefined8 *)(param_1 + 8);
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          *local_70 = &PTR_LAB_14b4e4c90;
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 1;
          lVar7 = DAT_14c758608 + 1;
          if (lVar11 == 0) {
            LOCK();
            UNLOCK();
            lVar11 = DAT_14c758608 + 2;
            lVar7 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar7;
          local_70[2] = lVar11;
          *local_70 = &PTR_FUN_14b4ecb70;
          local_70[3] = uVar4;
          local_70[4] = plVar3;
          LOCK();
          *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
          UNLOCK();
          local_70[5] = param_1;
          local_70[6] = lVar5;
          local_70[7] = plVar9;
          LOCK();
          plVar9 = plVar3 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
          LOCK();
          plVar9 = plVar3 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
          LOCK();
          plVar9 = plVar3 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
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
        local_78 = 0;
        (**(code **)(*plVar1 + 0x170))(plVar1,local_60,1,&local_70);
        FUN_1449db362(&local_70);
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_58 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
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
        uVar10 = CONCAT71((int7)((ulonglong)local_58 >> 8),1);
        goto LAB_146212610;
      }
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_58 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
  }
  uVar10 = 0;
LAB_146212610:
  plVar9 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 146212796 FUN_146212796 body=44 status=ok
// SIG undefined FUN_146212796(void)

void FUN_146212796(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1457f66cc(param_2);
  if (lVar1 != 0) {
    FUN_1462127c2(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 1462127c2 FUN_1462127c2 body=434 status=ok
// SIG undefined FUN_1462127c2(void)

void FUN_1462127c2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar5 = FUN_144a8940a(param_1 + 0x28,(undefined8 *)(param_2 + 0x10));
  if (cVar5 != '\0') {
    iVar3 = *(int *)(param_1 + 0xf0);
    *(uint *)(param_1 + 0xf0) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0xf4) < iVar3 + 1U) {
      FUN_148915198((longlong *)(param_1 + 0xe8),iVar3);
    }
    lVar4 = *(longlong *)(param_1 + 0xe8);
    lVar6 = (longlong)iVar3 * 0x68;
    *(undefined ***)(lVar4 + lVar6) = &PTR_FUN_14b3ca180;
    *(undefined1 *)(lVar4 + 8 + lVar6) = *(undefined1 *)(param_2 + 8);
    *(undefined ***)(lVar4 + lVar6) = &PTR_FUN_14b3caae0;
    *(undefined4 *)(lVar4 + 0x18 + lVar6) = *(undefined4 *)(param_2 + 0x18);
    *(undefined8 *)(lVar4 + 0x10 + lVar6) = *(undefined8 *)(param_2 + 0x10);
    *(undefined4 *)(lVar4 + 0x24 + lVar6) = *(undefined4 *)(param_2 + 0x24);
    *(undefined8 *)(lVar4 + 0x1c + lVar6) = *(undefined8 *)(param_2 + 0x1c);
    *(undefined4 *)(lVar4 + 0x30 + lVar6) = *(undefined4 *)(param_2 + 0x30);
    *(undefined8 *)(lVar4 + 0x28 + lVar6) = *(undefined8 *)(param_2 + 0x28);
    *(undefined4 *)(lVar4 + 0x3c + lVar6) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined8 *)(lVar4 + 0x34 + lVar6) = *(undefined8 *)(param_2 + 0x34);
    *(undefined4 *)(lVar4 + 0x48 + lVar6) = *(undefined4 *)(param_2 + 0x48);
    *(undefined8 *)(lVar4 + 0x40 + lVar6) = *(undefined8 *)(param_2 + 0x40);
    *(undefined4 *)(lVar4 + 0x54 + lVar6) = *(undefined4 *)(param_2 + 0x54);
    *(undefined8 *)(lVar4 + 0x4c + lVar6) = *(undefined8 *)(param_2 + 0x4c);
    *(undefined4 *)(lVar4 + 0x60 + lVar6) = *(undefined4 *)(param_2 + 0x60);
    *(undefined8 *)(lVar4 + 0x58 + lVar6) = *(undefined8 *)(param_2 + 0x58);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
  }
  local_60 = *(undefined4 *)(param_2 + 0x24);
  local_68 = *(undefined8 *)(param_2 + 0x1c);
  local_5c = *(undefined8 *)(param_2 + 0x28);
  local_54 = *(undefined4 *)(param_2 + 0x30);
  local_50 = *(undefined8 *)(param_2 + 0x34);
  local_48 = *(undefined4 *)(param_2 + 0x3c);
  local_44 = 0;
  FUN_140d7f1a8(param_1,&local_40);
  FUN_14621297a(local_40,param_2);
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
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14621297a FUN_14621297a body=410 status=ok
// SIG undefined FUN_14621297a(void)

void FUN_14621297a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  int local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_14117fc02(param_1);
  }
  *(undefined1 *)(param_1 + 0xb0) = 1;
  uVar1 = *(undefined4 *)(param_2 + 0x44);
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  uVar3 = *(undefined4 *)(param_2 + 0x4c);
  uVar4 = *(undefined4 *)(param_2 + 0x50);
  uVar5 = *(undefined4 *)(param_2 + 0x54);
  uVar6 = *(undefined4 *)(param_2 + 0x58);
  uVar7 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0xb8) = uVar1;
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  *(undefined4 *)(param_1 + 0xc0) = uVar3;
  *(undefined4 *)(param_1 + 0xc4) = uVar4;
  *(undefined4 *)(param_1 + 200) = uVar5;
  *(undefined4 *)(param_1 + 0xcc) = uVar6;
  *(undefined4 *)(param_1 + 0xd0) = uVar7;
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0x60);
  uVar8 = FUN_140d80bda(param_1);
  plVar9 = (longlong *)FUN_140ec3c65(uVar8);
  if (plVar9 != (longlong *)0x0) {
    FUN_14105743e(local_60,param_1 + 0xb4);
    FUN_1458228e2(param_1,&local_6c);
    if (local_6c == 0) {
      local_80 = DAT_14cb7bba0;
      local_88 = DAT_14cb7bb98;
    }
    else {
      local_80 = local_64;
      local_88 = CONCAT44(uStack_68,local_6c);
    }
    FUN_144928d62(local_50,1,&local_88);
    FUN_146212b16(&local_88,param_1);
    (**(code **)(*plVar9 + 0x70))(plVar9,&local_78,local_60,&local_88);
    *(undefined8 *)(param_1 + 0xd8) = local_78;
    FUN_1449db362(&local_88);
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      lVar10 = (**(code **)(*plVar9 + 0x60))(plVar9,local_60);
      if (lVar10 != 0) {
        local_98 = *(longlong *)(lVar10 + 0x10);
        if (*(longlong *)(lVar10 + 0x10) == 0) {
          local_98 = lVar10;
        }
        local_90 = *(undefined4 *)(lVar10 + 0x18);
        FUN_14582385e(param_1);
      }
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146212b16 FUN_146212b16 body=423 status=ok
// SIG undefined FUN_146212b16(void)

longlong * FUN_146212b16(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_146212bed:
    *puVar3 = &PTR_LAB_14b3fc100;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41af30;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_146178a36;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_146212bed;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b3fc100;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41af30;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_146178a36;
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
  return param_1;
}



// FUNCTION 146212cbe FUN_146212cbe body=612 status=ok
// SIG undefined FUN_146212cbe(void)

longlong FUN_146212cbe(void)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38;
  ulonglong uStack_30;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cace0c0 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caced84) {
      FUN_144b3d300(&DAT_14caced84);
      if (DAT_14caced84 == -1) {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        cVar1 = FUN_14054d46e(&DAT_14c846b20,L"nosound");
        if (cVar1 == '\0') {
          DAT_14caced80 = 0;
        }
        else {
          if (DAT_14c846b14 == '\0') {
            FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                          L"Attempting to get the command line but it hasn\'t been initialized yet."
                         );
          }
          bVar2 = FUN_14054d46e(&DAT_14c846b20,L"enablesound");
          DAT_14caced80 = bVar2 ^ 1;
        }
        _Init_thread_footer(&DAT_14caced84);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caced8c) {
      FUN_144b3d300(&DAT_14caced8c);
      if (DAT_14caced8c == -1) {
        if (DAT_14c866ff0 == '\0') {
          if (DAT_14c872bf0 == '\x01') {
            DAT_14caced88 = DAT_14c872bc0 ^ 1;
          }
          else {
            DAT_14caced88 = 0;
          }
        }
        else {
          DAT_14caced88 = 1;
        }
        _Init_thread_footer(&DAT_14caced8c);
      }
    }
    if ((DAT_14caced88 == 0) && ((DAT_14caced80 & 1) == 0)) {
      lVar3 = FUN_14001cc68(0x198,0x10);
      FUN_141655958(lVar3);
      DAT_14cace0c0 = lVar3;
    }
    else if (DAT_14cace0e4 == '\0') {
      local_38 = 0;
      uStack_30 = 0;
      FUN_140056680(local_48,L"AllAudioDisabled");
      if (DAT_14cad8288 != 0) {
        plVar4 = (longlong *)FUN_147a89392();
        FUN_140ba7826(local_28,L"Audio.Usage.",local_48);
        (**(code **)(*plVar4 + 0xf0))(plVar4,local_28,&local_38);
        if (local_28[0] != 0) {
          FUN_1400020a8();
        }
      }
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
      FUN_146b17e4e(local_38,uStack_30 & 0xffffffff);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      DAT_14cace0e4 = '\x01';
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return DAT_14cace0c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146212f24 FUN_146212f24 body=21 status=ok
// SIG undefined FUN_146212f24(void)

undefined8 FUN_146212f24(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146212f3a FUN_146212f3a body=158 status=ok
// SIG undefined FUN_146212f3a(void)

bool FUN_146212f3a(longlong param_1,undefined8 param_2)

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



// FUNCTION 146212fe8 FUN_146212fe8 body=285 status=ok
// SIG undefined FUN_146212fe8(void)

void FUN_146212fe8(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  FUN_146213186(param_2,&local_58);
  lVar2 = local_58;
  lVar6 = (longlong)(int)uStack_50;
  if (lVar6 != 0) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar2 + lVar5);
      if (plVar1 != (longlong *)0x0) {
        lVar3 = (**(code **)(*plVar1 + 8))(plVar1);
        lVar4 = FUN_145c45a7c();
        if (((lVar4 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
            lVar4 + 0x30)) {
          lVar3 = (**(code **)(*plVar1 + 8))(plVar1);
          lVar4 = FUN_145c9f2cc();
          if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
              lVar4 + 0x30)) {
            FUN_141655c06(param_1,plVar1);
          }
        }
        else {
          FUN_1416564c0(param_1,plVar1);
        }
      }
      lVar5 = lVar5 + 8;
    } while (lVar6 * 8 != lVar5);
  }
  FUN_146213106(param_1,param_2);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146213106 FUN_146213106 body=128 status=ok
// SIG undefined FUN_146213106(void)

void FUN_146213106(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_2 + 0xb8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 0xb0);
    lVar5 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar2 + lVar5);
      cVar4 = FUN_140fcc58c(uVar3);
      if (cVar4 == '\0') {
        cVar4 = FUN_140fcc600(uVar3);
        if (cVar4 != '\0') {
          FUN_140fcc71e(param_1,param_2,uVar3);
        }
      }
      else {
        FUN_140fcd36a(param_1,param_2,uVar3);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 146213186 FUN_146213186 body=245 status=ok
// SIG undefined FUN_146213186(void)

void FUN_146213186(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  lVar8 = *(longlong *)(param_1 + 0x130);
  if ((lVar8 != 0) && ((longlong)*(int *)(lVar8 + 0x38) != 0)) {
    plVar7 = *(longlong **)(lVar8 + 0x30);
    lVar8 = (longlong)*(int *)(lVar8 + 0x38) * 0x18;
    do {
      lVar5 = plVar7[1];
      if (lVar5 == 0) {
        uVar4 = FUN_145c20674();
        lVar5 = FUN_14477b664(uVar4);
        plVar7[1] = lVar5;
      }
      lVar6 = plVar7[2];
      if (lVar6 == 0) {
        if (lVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = 0;
          if (*plVar7 != 0) {
            plVar2 = *(longlong **)(lVar5 + 0xb8);
            if (plVar2 == (longlong *)0x0) {
LAB_14621325d:
              lVar6 = 0;
            }
            else {
              cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
              if (cVar3 == '\0') goto LAB_14621325d;
              uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
              lVar6 = FUN_144aff482(uVar4,plVar7);
            }
            plVar7[2] = lVar6;
          }
        }
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14621327c(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar6;
      plVar7 = plVar7 + 3;
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 14621327c FUN_14621327c body=132 status=ok
// SIG undefined FUN_14621327c(void)

void FUN_14621327c(longlong param_1,int param_2)

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



// FUNCTION 146213300 FUN_146213300 body=641 status=ok
// SIG undefined FUN_146213300(void)

/* WARNING: Removing unreachable block (ram,0x00014621356e) */
/* WARNING: Removing unreachable block (ram,0x00014621353b) */
/* WARNING: Removing unreachable block (ram,0x000146213554) */
/* WARNING: Removing unreachable block (ram,0x000146213578) */

void FUN_146213300(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = (longlong *)(param_1 + 0x18);
  FUN_140056680(&local_38,L"Linux");
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,&DAT_14a37f8b8);
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,L"Windows");
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  local_38 = 0xd2b54f625636fbc1;
  uStack_30 = 0xb184b45aac8e7d4f;
  FUN_146213582(param_1 + -8);
  FUN_140056680(&local_38,&DAT_14a53f718);
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1447a1bd6((longlong *)(param_1 + 0x28),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_1446ddc76(&local_40,"Media",1);
  uVar3 = FUN_144a52528();
  plVar4 = (longlong *)FUN_1405f3750(uVar3,local_40,0);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x80))(plVar4,param_1 + -8);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146213582 FUN_146213582 body=240 status=ok
// SIG undefined FUN_146213582(void)

/* WARNING: Removing unreachable block (ram,0x000146213669) */

void FUN_146213582(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446ddc76(&local_28,"Media",1);
  plVar3 = (longlong *)FUN_1447c1074(local_28);
  if ((plVar3 != (longlong *)0x0) &&
     ((**(code **)(*plVar3 + 0x40))(plVar3,&local_30,param_2), local_30 != 0)) {
    FUN_1400021e4(&local_30,&local_40);
    iVar1 = *(int *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
      FUN_1447a1bd6((longlong *)(param_1 + 0x20),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar4) = 0;
    *(undefined8 *)(lVar2 + lVar4) = local_40;
    local_40 = 0;
    *(undefined4 *)(lVar2 + 8 + lVar4) = (undefined4)local_38;
    *(undefined4 *)(lVar2 + 0xc + lVar4) = local_38._4_4_;
    local_38 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146213674 FUN_146213674 body=312 status=ok
// SIG undefined FUN_146213674(void)

void FUN_146213674(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = param_1 + -0x30;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    lVar2 = FUN_140059518(param_1 + 0x14);
    if (lVar2 != 0) {
      lVar2 = FUN_14120f7e6(lVar2);
      if (lVar2 != 0) {
        FUN_1458008a0(lVar1,param_1 + 0x90,lVar2);
      }
    }
    FUN_1457ffece(lVar1,0);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  lVar2 = FUN_140059518(param_1 + 0x14);
  if (lVar2 != 0) {
    lVar2 = FUN_14120f7e6(lVar2);
    if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x78) != 0)) {
      FUN_14480f766(lVar2 + 0xb0);
    }
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    lVar2 = FUN_140059518(param_1 + 0x14);
    if (lVar2 != 0) {
      lVar2 = FUN_1400b6e86(lVar2);
      if (lVar2 != 0) {
        lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x30) + 0x18))(lVar2 + 0x30);
        if (lVar2 != 0) {
          lVar3 = FUN_1410c44e8();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            FUN_1401073f6(lVar2 + 0x120,lVar1);
          }
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  FUN_1462137ac(lVar1);
  return;
}



// FUNCTION 1462137ac FUN_1462137ac body=572 status=ok
// SIG undefined FUN_1462137ac(void)

void FUN_1462137ac(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  lVar2 = DAT_14c98e618;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x15c) == '\x01') {
    lVar3 = *(longlong *)(param_1 + 0x128);
    if (lVar3 != 0) {
      if (DAT_14c98e618 != 0) {
        local_28 = *(longlong *)(param_1 + 0x130);
        if (local_28 != 0) {
          LOCK();
          *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
          UNLOCK();
        }
        local_30 = lVar3;
        FUN_145a3846a(lVar2,&local_30);
      }
      if (*(longlong *)(param_1 + 0x140) != 0) {
        FUN_14480f766(*(longlong *)(param_1 + 0x128) + 0x20);
        *(undefined8 *)(param_1 + 0x140) = 0;
      }
      if (*(longlong *)(param_1 + 0x148) != 0) {
        plVar4 = (longlong *)(param_1 + 0x128);
        goto LAB_1462139a1;
      }
    }
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x118);
    if (lVar3 != 0) {
      if (DAT_14c98e618 != 0) {
        local_38 = *(longlong *)(param_1 + 0x120);
        if (local_38 != 0) {
          LOCK();
          *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
          UNLOCK();
        }
        local_40 = lVar3;
        FUN_145a3846a(lVar2,&local_40);
      }
      if (*(longlong *)(param_1 + 0x140) != 0) {
        FUN_14480f766(*(longlong *)(param_1 + 0x118) + 0x20);
        *(undefined8 *)(param_1 + 0x140) = 0;
      }
      if (*(longlong *)(param_1 + 0x148) != 0) {
        plVar4 = (longlong *)(param_1 + 0x118);
LAB_1462139a1:
        FUN_14480f766(*plVar4 + 8);
        *(undefined8 *)(param_1 + 0x148) = 0;
      }
    }
  }
  lVar2 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar2 == 0) goto LAB_146213894;
  lVar3 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) goto LAB_146213894;
  FUN_140c125e6(lVar2 + 0xd98,&DAT_14cbd96f8);
  FUN_1402815f4(param_1,&local_50);
  lVar2 = *(longlong *)(local_50 + 0x360);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x20));
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if (*(char *)(lVar2 + 0x10) == '\0') {
    iVar5 = 1;
    if (*(int *)(lVar2 + 0x14) == 0) goto LAB_146213884;
  }
  else {
    iVar5 = *(int *)(lVar2 + 0x14) + 1;
LAB_146213884:
    *(undefined1 *)(lVar2 + 0x10) = 0;
    *(int *)(lVar2 + 0x14) = iVar5;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x20));
LAB_146213894:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462139ea FUN_1462139ea body=117 status=ok
// SIG undefined FUN_1462139ea(void)

longlong * FUN_1462139ea(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146213a60(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 146213a60 FUN_146213a60 body=2089 status=ok
// SIG undefined FUN_146213a60(void)

void FUN_146213a60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  longlong local_180;
  int local_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  undefined1 *local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 local_148;
  float local_140;
  undefined1 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_2 + 0x1a8);
  lVar1 = *(longlong *)(param_2 + 0x1b0);
  *(longlong *)(param_1 + 0x498) = lVar1;
  *(longlong *)(param_1 + 0x4a0) = lVar1 + 0x1480;
  FUN_14133824c(param_1 + 0x308,param_2 + 0x1b8);
  FUN_14133824c(param_1 + 0x330,param_2 + 0x270);
  *(undefined1 *)(param_1 + 0x358) = *(undefined1 *)(param_2 + 0x1e0);
  *(undefined4 *)(param_1 + 0x364) = *(undefined4 *)(param_2 + 0x1f8);
  *(undefined4 *)(param_1 + 0x35c) = *(undefined4 *)(param_2 + 0x1fc);
  bVar3 = *(byte *)(param_1 + 0x368) & 0xef | *(char *)(param_2 + 0x200) << 4;
  *(byte *)(param_1 + 0x368) = bVar3;
  bVar4 = *(char *)(param_2 + 0x201) << 5;
  *(byte *)(param_1 + 0x368) = bVar3 & 0xdf | bVar4;
  *(undefined1 *)(param_1 + 0x360) = *(undefined1 *)(param_2 + 0x202);
  bVar3 = bVar3 & 0xdd | bVar4 | *(char *)(param_2 + 0x203) * '\x02';
  *(byte *)(param_1 + 0x368) = bVar3;
  bVar3 = bVar3 & 0xfb | *(char *)(param_2 + 0x204) << 2;
  *(byte *)(param_1 + 0x368) = bVar3;
  *(byte *)(param_1 + 0x368) = bVar3 & 0x7f | *(char *)(param_2 + 0x205) << 7;
  bVar3 = *(byte *)(param_1 + 0x369) & 0xfe | *(byte *)(param_2 + 0x20c);
  *(byte *)(param_1 + 0x369) = bVar3;
  bVar3 = bVar3 & 0xfb | *(char *)(param_2 + 0x20d) << 2;
  *(byte *)(param_1 + 0x369) = bVar3;
  bVar3 = bVar3 & 0xf7 | *(char *)(param_2 + 0x20f) << 3;
  *(byte *)(param_1 + 0x369) = bVar3;
  bVar3 = bVar3 & 0xef | *(char *)(param_2 + 0x20e) << 4;
  *(byte *)(param_1 + 0x369) = bVar3;
  bVar4 = (*(char *)(param_2 + 0x202) == '\x02' & ~*(byte *)(param_2 + 0x203)) << 5;
  *(byte *)(param_1 + 0x369) = bVar3 & 0xdf | bVar4;
  *(byte *)(param_1 + 0x36a) = *(byte *)(param_1 + 0x36a) & 0xfe | *(byte *)(param_2 + 0x210);
  *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(param_2 + 0x208);
  uVar2 = *(undefined8 *)(param_2 + 0x240);
  *(undefined8 *)(param_1 + 0x640) = *(undefined8 *)(param_2 + 0x238);
  *(undefined8 *)(param_1 + 0x648) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x250);
  *(undefined8 *)(param_1 + 0x650) = *(undefined8 *)(param_2 + 0x248);
  *(undefined8 *)(param_1 + 0x658) = uVar2;
  *(byte *)(param_1 + 0x369) = bVar3 & 0xdd | bVar4;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  if (*(char *)(param_2 + 0x218) == '\x01') {
    local_138 = (ulonglong)CONCAT14(1,*(undefined4 *)(param_2 + 0x214));
  }
  if (*(char *)(param_2 + 0x220) == '\x01') {
    uStack_130 = (ulonglong)CONCAT14(1,*(undefined4 *)(param_2 + 0x21c));
  }
  if (*(char *)(param_2 + 0x228) == '\x01') {
    local_128 = (ulonglong)CONCAT14(1,*(undefined4 *)(param_2 + 0x224));
  }
  if (*(char *)(param_2 + 0x230) == '\x01') {
    uStack_120 = (ulonglong)CONCAT14(1,*(undefined4 *)(param_2 + 0x22c));
  }
  FUN_14621428a(param_1 + 0x4ec,&local_138);
  *(byte *)(param_1 + 0x36a) = *(byte *)(param_1 + 0x36a) & 0xfb | *(char *)(param_2 + 600) << 2;
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xfb;
  FUN_144a88240(param_1 + 0x18,param_1);
  bVar3 = 0;
  if ((*(char *)(param_2 + 0x234) == '\x01') && ((*(byte *)(param_1 + 0x368) & 2) == 0)) {
    if (*(int *)(param_1 + 0x304) == 4) {
      bVar3 = 0;
    }
    else {
      bVar3 = *(byte *)(param_1 + 0x369) ^ 1;
    }
  }
  *(byte *)(param_1 + 0x368) = *(byte *)(param_1 + 0x368) & 0xfe | bVar3 & 1;
  fVar8 = *(float *)(param_2 + 0x1e4);
  fVar9 = *(float *)(param_2 + 0x1e8);
  if ((*(char *)(param_2 + 500) == '\x01') &&
     ((((fVar8 != 0.0 || (NAN(fVar8))) || (fVar9 != 0.0)) || (NAN(fVar9))))) {
    fVar6 = (float)FUN_145788320(fVar8,fVar9);
    fVar8 = fVar8 * fVar6;
    fVar9 = fVar9 * fVar6;
  }
  *(undefined1 *)(param_1 + 0x361) = *(undefined1 *)(param_2 + 0x1e1);
  local_110 = 0;
  uStack_108 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_146118180(DAT_14c968098);
  if (*(char *)(param_1 + 0x361) == '\x01') {
    local_178 = (int)uStack_120;
    iStack_174 = uStack_120._4_4_;
    iStack_170 = (int)uStack_118;
    iStack_16c = uStack_118._4_4_;
  }
  else {
    local_148 = (double)fVar9;
    local_150 = (double)fVar8;
    FUN_14691334c(&local_138,&local_178);
  }
  if (((local_178 == 0) && (iStack_174 == 0)) && ((iStack_170 == 0 && (iStack_16c == 0)))) {
    local_178 = (int)local_110;
    iStack_174 = local_110._4_4_;
    iStack_170 = (int)uStack_108;
    iStack_16c = uStack_108._4_4_;
  }
  if ((*(byte *)(param_1 + 0x368) & 2) != 0) {
    if (*(char *)(param_1 + 0x500) == '\0') {
      *(float *)(param_1 + 0x4fc) = (float)(iStack_170 - local_178);
      *(undefined1 *)(param_1 + 0x500) = 1;
    }
    if (*(char *)(param_1 + 0x508) == '\0') {
      *(float *)(param_1 + 0x504) = (float)(iStack_16c - iStack_174);
      *(undefined1 *)(param_1 + 0x508) = 1;
    }
  }
  if (*(char *)(param_1 + 0x361) == '\x02') {
LAB_146214256:
    (**(code **)(*DAT_14c968098 + 0xe8))(DAT_14c968098,&local_150);
    fVar6 = (float)local_150;
    fVar7 = local_150._4_4_;
    fVar12 = local_148._4_4_;
    fVar13 = (float)local_148;
  }
  else {
    if (*(char *)(param_1 + 0x361) == '\0') {
      if ((*(char *)(param_2 + 0x235) != '\x01') ||
         ((((float)(int)local_110 <= fVar8 && (fVar8 < (float)(int)uStack_108)) &&
          (((float)local_110._4_4_ <= fVar9 && (fVar9 < (float)uStack_108._4_4_)))))) {
        local_140 = (float)FUN_145788320(fVar8,fVar9);
        fVar6 = 0.0;
        fVar7 = 0.0;
        fVar13 = 0.0;
        fVar12 = 0.0;
        goto LAB_146213e26;
      }
      *(undefined1 *)(param_1 + 0x361) = 2;
      goto LAB_146214256;
    }
    fVar6 = (float)local_178;
    fVar7 = (float)iStack_174;
    fVar12 = (float)iStack_16c;
    fVar13 = (float)iStack_170;
  }
  local_140 = (float)FUN_145788320(fVar6,fVar7);
LAB_146213e26:
  if (*(char *)(param_2 + 500) == '\x01') {
    fVar11 = *(float *)(param_2 + 0x1f0) * local_140;
    fVar10 = *(float *)(param_2 + 0x1ec) * local_140;
  }
  else {
    fVar10 = *(float *)(param_2 + 0x1ec);
    fVar11 = *(float *)(param_2 + 0x1f0);
  }
  local_13c = 1;
  FUN_1402bad2e(param_1,&local_150,CONCAT44(fVar11,fVar10));
  fVar10 = (float)local_150;
  fVar11 = local_150._4_4_;
  if (*(char *)(param_1 + 0x361) == '\0') {
    if (*(char *)(param_2 + 0x235) != '\0') {
      fVar6 = (float)((int)uStack_108 - (int)local_110) -
              (float)(((int)local_138 - iStack_170) + local_178);
      fVar7 = (float)(uStack_108._4_4_ - local_110._4_4_) -
              (float)((local_138._4_4_ - iStack_16c) + iStack_174);
      if (fVar6 <= (float)local_150) {
        fVar10 = fVar6;
      }
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      if (fVar7 <= local_150._4_4_) {
        fVar11 = fVar7;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
    }
  }
  else {
    if (*(char *)(param_2 + 0x235) != '\0') {
      if (fVar13 - fVar6 <= (float)local_150) {
        fVar10 = fVar13 - fVar6;
      }
      if (fVar12 - fVar7 <= local_150._4_4_) {
        fVar11 = fVar12 - fVar7;
      }
    }
    fVar9 = ((fVar12 - fVar7) - fVar11) * 0.5 + fVar7;
    fVar8 = ((fVar13 - fVar6) - fVar10) * 0.5 + fVar6;
    if (fVar8 <= fVar6) {
      fVar8 = fVar6;
    }
    if (fVar9 <= fVar7) {
      fVar9 = fVar7;
    }
  }
  *(float *)(param_1 + 0x370) = fVar8;
  *(float *)(param_1 + 0x374) = fVar9;
  *(float *)(param_1 + 0x378) = fVar10;
  *(float *)(param_1 + 0x37c) = fVar11;
  plVar5 = DAT_14c968098 + 0x1e;
  local_160 = &LAB_14287bc4e;
  local_158 = 0;
  FUN_146214314(&local_150,param_1);
  FUN_140c6314c(plVar5,&local_160,&local_150);
  FUN_1449db362(&local_150);
  FUN_1402baeb8(param_1,CONCAT44(fVar11,fVar10));
  FUN_1407659d4(param_1);
  local_188 = *(undefined8 *)(param_2 + 0x260);
  local_180 = *(longlong *)(param_2 + 0x268);
  if (local_180 != 0) {
    LOCK();
    *(int *)(local_180 + 8) = *(int *)(local_180 + 8) + 1;
    UNLOCK();
  }
  FUN_140763be6(param_1,&local_188);
  FUN_140ecb711(uStack_130,local_128 & 0xffffffff);
  if (uStack_130 != 0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14621428a FUN_14621428a body=137 status=ok
// SIG undefined FUN_14621428a(void)

void FUN_14621428a(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  
  if (param_2 == param_1) {
    return;
  }
  if (*(char *)(param_2 + 1) == '\x01') {
    *param_1 = *param_2;
    uVar1 = 1;
  }
  else {
    if (*(char *)(param_1 + 1) != '\x01') goto LAB_1462142a5;
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
LAB_1462142a5:
  if (*(char *)(param_2 + 3) == '\x01') {
    param_1[2] = param_2[2];
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (*(char *)(param_2 + 5) == '\x01') {
    param_1[4] = param_2[4];
    *(undefined1 *)(param_1 + 5) = 1;
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if (*(char *)(param_2 + 7) != '\x01') {
    if (*(char *)(param_1 + 7) == '\x01') {
      *(undefined1 *)(param_1 + 7) = 0;
    }
    return;
  }
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = 1;
  return;
}



// FUNCTION 146214314 FUN_146214314 body=314 status=ok
// SIG undefined FUN_146214314(void)

longlong * FUN_146214314(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1462143d1:
    *puVar5 = &PTR_LAB_149e06450;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149ef1600;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_1462143d1;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e06450;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149ef1600;
    puVar5[3] = uVar10;
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



// FUNCTION 14621444e FUN_14621444e body=145 status=ok
// SIG undefined FUN_14621444e(void)

void FUN_14621444e(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x152);
  if ((((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
      (*(longlong *)(param_1 + 0x30) != 0)) &&
     (((lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2b0), lVar2 != 0 &&
       (lVar2 = *(longlong *)(lVar2 + 0x3f0), lVar2 != 0)) && (*(longlong *)(lVar2 + 0xf0) != 0))))
  {
    FUN_1412f3774(param_1,*(longlong *)(lVar2 + 0xf0),0,1);
    plVar3 = *(longlong **)(lVar2 + 0xf0);
    uVar4 = FUN_1409ffe1d();
    (**(code **)(*plVar3 + 0x170))(plVar3,0,uVar4,0x30);
    *(undefined8 *)(lVar2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 1462144e0 FUN_1462144e0 body=111 status=ok
// SIG undefined FUN_1462144e0(void)

void FUN_1462144e0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x2cc) == *(int *)(param_1 + 0x2d0)) {
    iVar2 = 1;
    if (*(int *)(param_1 + 0x2d4) != 0) goto LAB_146214515;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2d4) + 1;
  }
  *(int *)(param_1 + 0x2d0) = *(int *)(param_1 + 0x2cc);
  *(int *)(param_1 + 0x2d4) = iVar2;
LAB_146214515:
  uVar1 = FUN_14001cc68(0x40,0x10);
  FUN_146214550(uVar1,param_1 + 0x2d0);
  FUN_140391314(param_1,uVar1);
  return;
}



// FUNCTION 146214550 FUN_146214550 body=111 status=ok
// SIG undefined FUN_146214550(void)

void FUN_146214550(undefined8 *param_1,undefined4 *param_2)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14b9d1488;
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_2[1];
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x2c) = param_2[3];
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x34) = param_2[5];
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_2[7];
  return;
}



// FUNCTION 1462145c0 FUN_1462145c0 body=162 status=ok
// SIG undefined FUN_1462145c0(void)

bool FUN_1462145c0(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))
              (*(int *)(param_1 + 0x28) + lVar2,param_2,*(undefined8 *)(param_1 + 8));
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



// FUNCTION 146214664 FUN_146214664 body=102 status=ok
// SIG undefined FUN_146214664(void)

void FUN_146214664(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_3;
  uVar2 = FUN_14479d2ce();
  cVar1 = FUN_141657e86(uVar2,param_2);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146214a6a FUN_146214a6a body=267 status=ok
// SIG undefined FUN_146214a6a(void)

void FUN_146214a6a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auStack_198 [36];
  undefined1 local_174 [11];
  undefined1 local_169;
  longlong local_168;
  ulonglong *local_160;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar2 = **(longlong **)(param_1 + 0x13f0);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x30) & 2) == 0)) {
    FUN_145acdc08(&local_168,lVar2,0);
    local_169 = 1;
    puVar1 = (undefined1 *)*local_160 + 1;
    if ((undefined1 *)local_160[1] < puVar1) {
      (**(code **)(local_168 + 0x170))(&local_168,&local_169,1);
    }
    else {
      local_169 = *(undefined1 *)*local_160;
      *local_160 = (ulonglong)puVar1;
    }
    FUN_14021219d(&local_168,param_2);
    FUN_14021219d(&local_168,param_3);
    FUN_14021219d(&local_168,param_4);
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x13f0) + 0x308))
              ((longlong *)**(undefined8 **)(param_1 + 0x13f0),local_174,&local_168,1);
    FUN_1449daebe(&local_168);
  }
  if ((local_30 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146214b76 FUN_146214b76 body=294 status=ok
// SIG undefined FUN_146214b76(void)

void FUN_146214b76(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auStack_1a8 [44];
  undefined1 local_17c [11];
  undefined1 local_171;
  longlong local_170;
  ulonglong *local_168;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar2 = **(longlong **)(param_1 + 0x13f0);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x30) & 2) == 0)) {
    FUN_145acdc08(&local_170,lVar2,0);
    local_171 = 5;
    puVar1 = (undefined1 *)*local_168 + 1;
    if ((undefined1 *)local_168[1] < puVar1) {
      (**(code **)(local_170 + 0x170))(&local_170,&local_171,1);
    }
    else {
      local_171 = *(undefined1 *)*local_168;
      *local_168 = (ulonglong)puVar1;
    }
    FUN_14021219d(&local_170,param_2);
    FUN_14021219d(&local_170,param_3);
    FUN_146214c9d(&local_170,param_4);
    FUN_14021219d(&local_170,param_5);
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x13f0) + 0x308))
              ((longlong *)**(undefined8 **)(param_1 + 0x13f0),local_17c,&local_170,1);
    FUN_1449daebe(&local_170);
  }
  if ((local_38 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146214c9d FUN_146214c9d body=593 status=ok
// SIG undefined FUN_146214c9d(void)

longlong * FUN_146214c9d(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  ulonglong *puVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(byte *)((longlong)param_1 + 0x29) & 1) == 0) ||
     (*(char *)((longlong)param_1 + 0x2b) < '\0')) {
    FUN_1414f4bba(param_2,param_1,&local_48);
    goto LAB_146214cd7;
  }
  if ((&DAT_149fc1b6e)[*(byte *)(param_2 + 3)] == '\x01') {
    iVar6 = 0;
    if (((longlong *)param_2[1] != (longlong *)0x0) &&
       (cVar5 = (**(code **)(*(longlong *)param_2[1] + 0x28))(), cVar5 != '\0')) {
LAB_146214d31:
      plVar7 = (longlong *)FUN_1408e4caa(param_2);
      iVar6 = (**(code **)(*plVar7 + 0x20))(plVar7);
    }
  }
  else {
    if ((*(uint *)(param_2 + 1) & 0xffffff) != 0) goto LAB_146214d31;
    iVar6 = 0;
  }
  puVar4 = (ulonglong *)param_1[1];
  piVar2 = (int *)*puVar4 + 1;
  if ((int *)puVar4[1] < piVar2) {
    local_2c = iVar6;
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar4;
    *puVar4 = (ulonglong)piVar2;
  }
  bVar3 = *(byte *)(param_1 + 5);
  if (local_2c < 1) {
    if ((bVar3 & 1) != 0) {
      local_48 = 0;
      plStack_40 = (longlong *)0x0;
      (**(code **)(*param_2 + 8))(param_2,&local_48);
      plVar7 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_40 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_40)(plStack_40);
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
    goto LAB_146214cd7;
  }
  if ((bVar3 & 4) == 0) {
    if ((bVar3 & 1) == 0) goto LAB_146214cd7;
    local_38 = 0;
    (**(code **)(*param_1 + 0x160))(param_1,&local_38);
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    FUN_14021219d(param_1,&local_48);
    FUN_1463edf88(param_2,local_38,&local_48);
  }
  else {
    if ((&DAT_149fc1b6e)[*(byte *)(param_2 + 3)] == '\x01') {
      if (((longlong *)param_2[1] == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*(longlong *)param_2[1] + 0x28))(), cVar5 == '\0'))
      goto LAB_146214e5f;
LAB_146214ec4:
      plVar7 = (longlong *)FUN_1408e4caa(param_2);
      (**(code **)(*plVar7 + 0x10))(plVar7,&local_38);
    }
    else {
      if ((*(uint *)(param_2 + 1) & 0xffffff) != 0) goto LAB_146214ec4;
LAB_146214e5f:
      local_38 = 0;
    }
    (**(code **)(*param_1 + 0x160))(param_1,&local_38);
    plVar7 = (longlong *)FUN_1408e4caa(param_2);
    (**(code **)(*plVar7 + 0x30))(plVar7,&local_48);
    FUN_14021219d(param_1,&local_48);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_146214cd7:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146214ef0 FUN_146214ef0 body=244 status=ok
// SIG undefined FUN_146214ef0(void)

undefined8 *
FUN_146214ef0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = 1;
  *puVar4 = &PTR_FUN_14b5afc70;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_145f8a6a4(puVar4 + 4);
  local_48 = uVar3;
  local_40 = uVar1;
  FUN_146214fe6(uVar5,param_3);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146214fe6 FUN_146214fe6 body=423 status=ok
// SIG undefined FUN_146214fe6(void)

void FUN_146214fe6(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1462150bc:
    *puVar5 = &PTR_LAB_14b5afcc0;
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
    *puVar5 = &PTR_FUN_14b9c6810;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1462150bc;
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
    *puVar5 = &PTR_LAB_14b5afcc0;
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
    *puVar5 = &PTR_FUN_14b9c6810;
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
                    /* WARNING: Could not recover jumptable at 0x000146215175. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14621518e FUN_14621518e body=835 status=ok
// SIG undefined FUN_14621518e(void)

void FUN_14621518e(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78 [2];
  longlong *local_68;
  longlong local_60;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1407cbc56();
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    cVar1 = *(char *)(lVar2 + 0x338);
    uVar4 = FUN_1462154d2();
    FUN_144a2e342(lVar2,(longlong *)(param_1 + 0x160),uVar4);
    local_78[0] = 0;
    local_68 = (longlong *)0x0;
    if (*(longlong *)(param_1 + 0x160) == 0) {
      puVar5 = &DAT_14c9a1308;
    }
    else {
      puVar5 = (undefined8 *)FUN_1408db3b0(*(longlong *)(param_1 + 0x160),"sort_list_config");
    }
    FUN_1410d10d8(lVar2 + 0xd0,puVar5,local_78);
    if (local_78[0] != 0) {
      plVar7 = local_68;
      if (local_68 == (longlong *)0x0) {
        plVar7 = local_58;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    local_78[0] = 0;
    local_68 = (longlong *)0x0;
    lVar10 = *(longlong *)(param_1 + 0x160);
    if (lVar10 == 0) {
      puVar5 = &DAT_14c9a1308;
    }
    else {
      puVar5 = (undefined8 *)FUN_1408db3b0(lVar10,"filter_list_config");
    }
    FUN_1410d10d8(lVar2 + 0x150,puVar5,local_78);
    if (local_78[0] != 0) {
      plVar7 = local_68;
      if (local_68 == (longlong *)0x0) {
        plVar7 = local_58;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    uVar3 = (uint)((ulonglong)DAT_14cbdfdf8 >> 0x10);
    uVar8 = (uint)DAT_14cbdfdf8 & 0xffff;
    iVar6 = ((uint)DAT_14cbdfdf8 << 0x10 | uVar8) + (uVar8 >> 4) + (uVar3 << 0x13 | uVar3 & 0xffff);
    iVar9 = (int)((ulonglong)DAT_14cbdfdf8 >> 0x20);
    if (*(char *)(lVar2 + 0x338) == '\x01') {
      if (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c)) {
        lVar10 = param_1 + 0x110;
        if (*(longlong *)(param_1 + 0x118) != 0) {
          lVar10 = *(longlong *)(param_1 + 0x118);
        }
        iVar6 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x120) - 1U & iVar6 + iVar9) * 4);
        if (iVar6 != -1) {
          do {
            plVar7 = (longlong *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar6 * 0x18);
            if (*plVar7 == DAT_14cbdfdf8) {
              if (plVar7 + 1 != (longlong *)0x0 && plVar7 != (longlong *)0x0) {
                local_80 = 0;
                FUN_14485c47a(&local_80,plVar7[1]);
                FUN_14143058a(param_1,local_80,10);
              }
              break;
            }
            iVar6 = (int)plVar7[2];
          } while (iVar6 != -1);
        }
      }
    }
    else if (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c)) {
      lVar10 = param_1 + 0x110;
      if (*(longlong *)(param_1 + 0x118) != 0) {
        lVar10 = *(longlong *)(param_1 + 0x118);
      }
      iVar6 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x120) - 1U & iVar6 + iVar9) * 4);
      if (iVar6 != -1) {
        do {
          plVar7 = (longlong *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar6 * 0x18);
          if (*plVar7 == DAT_14cbdfdf8) {
            if ((plVar7 != (longlong *)0x0) && (plVar7 + 1 != (longlong *)0x0)) {
              local_88 = 0;
              FUN_14485c47a(&local_88,plVar7[1]);
              FUN_1412e3bcc(param_1,local_88);
            }
            break;
          }
          iVar6 = (int)plVar7[2];
        } while (iVar6 != -1);
      }
    }
    if (cVar1 != *(char *)(lVar2 + 0x338)) {
      FUN_148eaeb6c(lVar2 + 0x358);
      FUN_1416ae7dc(param_1);
    }
    if (1 < *(int *)(lVar2 + 0x310)) {
      FUN_14000bbd8(local_78,lVar2 + 0x308,0);
      FUN_140ac6a88(local_78,lVar2 + 0x308);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1462154d2 FUN_1462154d2 body=55 status=ok
// SIG undefined FUN_1462154d2(void)

void FUN_1462154d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbac50 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbac50 = FUN_140002ddd(FUN_146607819,uVar1,L"OakWidgetData_MissionLog");
  }
  return;
}



// FUNCTION 14621550a FUN_14621550a body=225 status=ok
// SIG undefined FUN_14621550a(void)

void FUN_14621550a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x3b0);
  if ((lVar1 == 0) || ((*(byte *)(*(longlong *)(param_1 + 0x298) + 99) & 2) != 0)) {
    local_60 = 0;
    local_58 = 0;
    FUN_14487d8d8(&local_60,param_2);
    FUN_1462155ec(param_1 + 0x3b8,&local_60);
  }
  else {
    local_50 = 0;
    local_48 = 0;
    FUN_14487d8d8(&local_50,param_2);
    local_40 = 0;
    local_38 = 0;
    FUN_14487d8d8(&local_40,&local_50);
    FUN_1462155ec(lVar1 + 0x80,&local_40);
    FUN_1449db362(&local_50);
  }
  FUN_1449db362(param_2);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462155ec FUN_1462155ec body=88 status=ok
// SIG undefined FUN_1462155ec(void)

void FUN_1462155ec(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146215644(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined4 *)(lVar2 + 8 + lVar3) = 0;
  FUN_14487d8d8(lVar2 + lVar3,param_2);
  FUN_1449db362(param_2);
  return;
}



// FUNCTION 146215644 FUN_146215644 body=132 status=ok
// SIG undefined FUN_146215644(void)

void FUN_146215644(longlong param_1,int param_2)

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



// FUNCTION 1462156c8 FUN_1462156c8 body=375 status=ok
// SIG undefined FUN_1462156c8(void)

void FUN_1462156c8(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 unaff_RBP;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0) {
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1f0) != 0)) {
      lVar4 = FUN_14591aa10();
      if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x30), lVar4 != 0)) {
        iVar3 = *(int *)(param_1 + 0x38);
        uVar5 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d0))();
        plVar6 = (longlong *)FUN_14001cc68(0x88,0x10);
        plVar6[1] = (longlong)&DAT_100000001;
        *plVar6 = (longlong)&PTR_FUN_14b989780;
        plVar1 = plVar6 + 2;
        FUN_148aaaa9a(plVar1,uVar5,DAT_14cbcdf30,
                      CONCAT71((int7)((ulonglong)unaff_RBP >> 8),iVar3 == 2) & 0xffffffff);
        local_60 = plVar1;
        local_58 = plVar6;
        FUN_148d9b626(&local_60,plVar1);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        local_50 = plVar1;
        local_48 = plVar6;
        FUN_143f45a56(lVar4,&local_50);
        plVar1 = local_48;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_48 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        plVar1 = local_58;
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_58 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_58)(local_58);
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
    }
  }
  FUN_146215840(param_1,param_2);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146215840 FUN_146215840 body=71 status=ok
// SIG undefined FUN_146215840(void)

void FUN_146215840(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 == 0) {
    FUN_1414f3fa8(*(undefined8 *)(param_1 + 0x30));
  }
  if ((*(int *)(param_1 + 0xd0) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 200), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014621587c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 146215888 FUN_146215888 body=155 status=ok
// SIG undefined FUN_146215888(void)

void FUN_146215888(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((byte *)*param_4 != (byte *)0x0) && ((*(byte *)*param_4 & 3) != 0)) {
    lVar1 = (**(code **)(*param_1 + 0x180))();
    if (lVar1 != 0) {
      lVar1 = FUN_1400f6f32(lVar1);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x68) != 0)) {
        lVar1 = FUN_140d1732e(*(longlong *)(lVar1 + 0x68),param_2 + 0x18);
        if (lVar1 != 0) {
          lVar2 = FUN_144a5dd5e();
          if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
            lVar1 = FUN_1410f7aa2(lVar1);
            if (lVar1 != 0) {
              FUN_141657fc4(lVar1,param_4);
              return;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 146215924 FUN_146215924 body=276 status=ok
// SIG undefined FUN_146215924(void)

void FUN_146215924(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar1 = DAT_14c8407a8;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,2,0x10);
  local_20 = 2;
  *local_28 = &PTR_LAB_149e020b0;
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
  local_28[2] = lVar3;
  *local_28 = &PTR_FUN_149e062c0;
  local_28[3] = FUN_143233afb;
  (**(code **)(*plVar1 + 0x58))(plVar1,local_30,&local_28);
  FUN_1449db362(&local_28);
  FUN_1416582a7();
  FUN_14123f5ce(&DAT_14c86a918,&local_28,&LAB_143203cc8);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146215a3a FUN_146215a3a body=878 status=ok
// SIG undefined FUN_146215a3a(void)

void FUN_146215a3a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined1 *local_80;
  undefined8 *local_70;
  undefined4 local_68;
  undefined1 local_59;
  undefined8 local_58;
  longlong *local_50;
  undefined4 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_145911512();
  local_48 = (undefined4 *)0x0;
  uStack_40 = 0;
  uVar13 = 0;
  if ((*(longlong *)(param_1 + 0x30) != 0) && (*(int *)(*(longlong *)(param_1 + 0x30) + 0x120) != 3)
     ) {
    lVar11 = FUN_14073fae1(0,0);
    if (*(longlong *)(lVar11 + 0xf8) != 0) {
      uStack_40 = CONCAT44(uStack_40._4_4_,1);
      FUN_1406f071e(&local_48,0);
      uVar7 = *(undefined4 *)(lVar11 + 0xfc);
      uVar8 = *(undefined4 *)(lVar11 + 0x100);
      uVar9 = *(undefined4 *)(lVar11 + 0x104);
      *local_48 = *(undefined4 *)(lVar11 + 0xf8);
      local_48[1] = uVar7;
      local_48[2] = uVar8;
      local_48[3] = uVar9;
      *(undefined8 *)(local_48 + 4) = 0;
      iVar4 = *(int *)(lVar11 + 0x110);
      pvVar5 = *(void **)(lVar11 + 0x108);
      local_48[6] = iVar4;
      if ((longlong)iVar4 == 0) {
        local_48[7] = 0;
      }
      else {
        puVar14 = (undefined8 *)(local_48 + 4);
        FUN_1446dd670(puVar14,iVar4,0);
        memcpy((void *)*puVar14,pvVar5,(longlong)iVar4 * 2);
      }
    }
    lVar11 = FUN_14073fae1();
    uVar13 = uStack_40;
    if (*(longlong *)(lVar11 + 0x120) != 0) {
      lVar15 = (longlong)(int)uStack_40;
      uVar10 = (int)uStack_40 + 1;
      uStack_40 = CONCAT44(uStack_40._4_4_,uVar10);
      if (uStack_40._4_4_ < uVar10) {
        FUN_1406f071e(&local_48,uVar13 & 0xffffffff);
      }
      uVar7 = *(undefined4 *)(lVar11 + 0x124);
      uVar8 = *(undefined4 *)(lVar11 + 0x128);
      uVar9 = *(undefined4 *)(lVar11 + 300);
      puVar3 = local_48 + lVar15 * 8;
      *puVar3 = *(undefined4 *)(lVar11 + 0x120);
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
      *(undefined8 *)(local_48 + lVar15 * 8 + 4) = 0;
      iVar4 = *(int *)(lVar11 + 0x138);
      pvVar5 = *(void **)(lVar11 + 0x130);
      local_48[lVar15 * 8 + 6] = iVar4;
      if ((longlong)iVar4 == 0) {
        local_48[lVar15 * 8 + 7] = 0;
      }
      else {
        puVar14 = (undefined8 *)(local_48 + lVar15 * 8 + 4);
        FUN_1446dd670(puVar14,iVar4,0);
        memcpy((void *)*puVar14,pvVar5,(longlong)iVar4 * 2);
      }
    }
    uVar13 = uStack_40 & 0xffffffff;
    if (0 < (int)uStack_40) {
      lVar15 = FUN_14050fd64();
      local_70 = (undefined8 *)0x0;
      local_68 = 0;
      FUN_1446efa72(&local_70,0,3,0x10);
      puVar14 = local_70;
      local_68 = 3;
      *local_70 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      local_70[2] = lVar12;
      *local_70 = &PTR_FUN_14b3fb0d0;
      local_70[3] = 0;
      FUN_14485c47a(local_70 + 3,param_1);
      puVar14[4] = FUN_14603bae2;
      local_80 = &local_59;
      local_88 = 0;
      local_90 = 0;
      local_98 = 0;
      FUN_1457028c8(lVar15 + 0x1e8,&local_58,&local_48,&local_70);
      plVar1 = local_50;
      if ((undefined8 *)(param_1 + 0x58) != &local_58) {
        *(undefined8 *)(param_1 + 0x58) = local_58;
        local_58 = 0;
        plVar6 = *(longlong **)(param_1 + 0x60);
        if (local_50 != plVar6) {
          local_50 = (longlong *)0x0;
          *(longlong **)(param_1 + 0x60) = plVar1;
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
      }
      plVar1 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_50 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      FUN_1449db362(&local_70);
      uVar13 = uStack_40 & 0xffffffff;
    }
  }
  FUN_140861e20(local_48,uVar13);
  if (local_48 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146215daa(&local_48,param_1);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146215daa FUN_146215daa body=239 status=ok
// SIG undefined FUN_146215daa(void)

undefined8 FUN_146215daa(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_LAB_14b3fc170;
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
  *local_30 = &PTR_FUN_14b3fb140;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = &LAB_14882e8e8;
  FUN_1406f6466(&DAT_14cb7df38,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146215e9a FUN_146215e9a body=969 status=ok
// SIG undefined FUN_146215e9a(void)

void FUN_146215e9a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined8 local_190 [12];
  undefined8 local_130 [9];
  undefined1 local_e1;
  undefined8 local_e0;
  int local_d8;
  int local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined2 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_88[0] = 0;
  local_88._4_8_ = 0;
  local_78 = 0;
  local_70 = DAT_14c8464f8;
  uStack_68 = DAT_14c846500;
  local_60 = DAT_14c846508;
  local_58 = 0;
  local_54 = 0;
  local_48 = 0;
  local_40 = (undefined4)DAT_14c8464e0;
  uStack_3c = DAT_14c8464e0._4_4_;
  uStack_38 = (undefined4)DAT_14c8464e8;
  uStack_34 = DAT_14c8464e8._4_4_;
  local_30 = DAT_14c8464f0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_d0._0_4_ = 0;
  local_d0._4_1_ = 0;
  local_c8 = 0xbf80000000000000;
  local_c0 = 0xc4750000;
  local_bc = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  local_d4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d4);
  }
  iVar2 = local_d4;
  local_d8 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  iVar1 = local_d8;
  local_e0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  local_e1 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e1);
  }
  local_1a0 = local_e0;
  local_198 = local_e1;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = &local_d0;
  puVar5 = local_130;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = (undefined8 *)local_88;
  puVar5 = local_190;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_1a8 = iVar1 != 0;
  FUN_146216264(local_28,local_190,local_130,iVar2 != 0);
  if ((local_20 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146216264 FUN_146216264 body=386 status=ok
// SIG undefined FUN_146216264(void)

void FUN_146216264(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined1 param_5,longlong param_6,byte param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  uint local_104;
  undefined8 local_100 [12];
  undefined8 local_a0 [9];
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_1 != 0) {
    local_58 = (longlong *)0x0;
    uStack_50 = 0;
    FUN_141031670(0,&local_58);
    if ((longlong)(int)uStack_50 != 0) {
      plVar1 = local_58 + (int)uStack_50;
      local_104 = (uint)param_7;
      plVar6 = local_58;
      do {
        plVar2 = (longlong *)*plVar6;
        if (plVar2 == (longlong *)0x0) goto LAB_14621634e;
        if (param_6 == 0) {
LAB_146216306:
          puVar4 = param_3;
          puVar5 = local_a0;
          for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar4 = param_2;
          puVar5 = local_100;
          for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          local_118 = param_5;
          (**(code **)(*plVar2 + 0x628))(plVar2,local_100,local_a0,param_4);
        }
        else if (param_7 == 0) {
          lVar3 = *(longlong *)((longlong)plVar2 + 0x34c);
joined_r0x0001462163dc:
          if (lVar3 == param_6) goto LAB_146216306;
        }
        else if (local_104 == 2) {
          if ((longlong)(int)plVar2[0xf] != 0) {
            lVar3 = 0;
            do {
              if (*(longlong *)(plVar2[0xe] + lVar3) == param_6) goto LAB_146216306;
              lVar3 = lVar3 + 8;
            } while ((longlong)(int)plVar2[0xf] * 8 != lVar3);
          }
        }
        else if (local_104 == 1) {
          lVar3 = plVar2[0x25];
          goto joined_r0x0001462163dc;
        }
LAB_14621634e:
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar1);
    }
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462163f2 FUN_1462163f2 body=894 status=ok
// SIG undefined FUN_1462163f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1462163f2(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14aaede40;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 0xe0;
  *(byte *)((longlong)param_1 + 0x49) = *(byte *)((longlong)param_1 + 0x49) & 0xf0 | 0xe;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0x102;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  lVar3 = FUN_140415bba();
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  if (lVar3 == 0) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
  }
  else {
    FUN_1400bbfae(&local_60,lVar3);
    *(undefined4 *)(param_1 + 0x19) = local_60;
    *(undefined4 *)((longlong)param_1 + 0xcc) = uStack_5c;
    *(undefined4 *)(param_1 + 0x1a) = uStack_58;
    *(undefined4 *)((longlong)param_1 + 0xd4) = uStack_54;
    if (param_1 + 0x19 == (undefined8 *)&local_60) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x1b] != 0) {
        FUN_1400020a8();
      }
      param_1[0x1b] = local_50;
      local_50 = 0;
      *(undefined4 *)(param_1 + 0x1c) = local_48;
      *(undefined4 *)((longlong)param_1 + 0xe4) = local_44;
    }
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if (cVar2 != '\0') {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) != 0) {
        param_1[0x18] = 0;
        goto LAB_146216517;
      }
    }
    FUN_14485c47a(param_1 + 0x18,lVar3);
  }
LAB_146216517:
  lVar3 = FUN_141262dda();
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if (lVar3 == 0) {
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
  }
  else {
    FUN_1400bbfae(&local_60,lVar3);
    *(undefined4 *)(param_1 + 0x1e) = local_60;
    *(undefined4 *)((longlong)param_1 + 0xf4) = uStack_5c;
    *(undefined4 *)(param_1 + 0x1f) = uStack_58;
    *(undefined4 *)((longlong)param_1 + 0xfc) = uStack_54;
    if (param_1 + 0x1e == (undefined8 *)&local_60) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x20] != 0) {
        FUN_1400020a8();
      }
      param_1[0x20] = local_50;
      local_50 = 0;
      *(undefined4 *)(param_1 + 0x21) = local_48;
      *(undefined4 *)((longlong)param_1 + 0x10c) = local_44;
    }
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if (cVar2 != '\0') {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) != 0) {
        param_1[0x1d] = 0;
        goto LAB_1462165c8;
      }
    }
    FUN_14485c47a(param_1 + 0x1d,lVar3);
  }
LAB_1462165c8:
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  local_78 = (undefined4)DAT_14c964d70;
  uStack_74 = DAT_14c964d70._4_4_;
  uStack_70 = _DAT_14c964d78;
  uStack_6c = uRam000000014c964d7c;
  local_68 = DAT_14c964d80;
  if (DAT_14c964d80 != 0) {
    LOCK();
    *(int *)(DAT_14c964d80 + 8) = *(int *)(DAT_14c964d80 + 8) + 1;
    UNLOCK();
  }
  FUN_140d66a10(param_1 + 0x28,&local_78,1);
  local_80 = FUN_140313bfe();
  if ((local_80 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_80);
  }
  FUN_145a0fd3e(param_1 + 7,&local_80);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146216772 FUN_146216772 body=232 status=ok
// SIG undefined FUN_146216772(void)

undefined8 FUN_146216772(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (((*(char *)(param_1 + 0x178) == '\x03') && (*(longlong *)(param_1 + 0xa90) == 0)) &&
     (*(longlong **)(param_1 + 0x608) != (longlong *)0x0)) {
    plVar3 = (longlong *)(param_1 + 0x608);
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x608) + 0x2b8))();
    if (lVar1 != 0) {
      lVar1 = (**(code **)(*(longlong *)*plVar3 + 0x2b8))();
      plVar3 = (longlong *)(lVar1 + 0x1de8);
    }
    if (*plVar3 != 0) {
      lVar1 = FUN_141364a4a(*plVar3,&DAT_14cb82320,2,0xffffffff);
      if (lVar1 != 0) {
        lVar2 = FUN_1459b9f18();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar1);
          }
          *(longlong *)(param_1 + 0xa90) = lVar1;
          FUN_14621685a(lVar1,param_1);
          goto LAB_14621679a;
        }
      }
      *(undefined8 *)(param_1 + 0xa90) = 0;
    }
  }
LAB_14621679a:
  return *(undefined8 *)(param_1 + 0xa90);
}



// FUNCTION 14621685a FUN_14621685a body=220 status=ok
// SIG undefined FUN_14621685a(void)

void FUN_14621685a(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_2b8 [32];
  undefined8 local_298;
  undefined1 local_290 [312];
  longlong local_158 [39];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  plVar1 = param_1 + 0xd;
  local_298 = param_2;
  FUN_14485c47a(plVar1);
  cVar2 = FUN_144729dda(plVar1);
  if (cVar2 != '\0') {
    lVar3 = FUN_14479d2ce(plVar1);
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x178) == '\x03')) {
      FUN_1413dbc9a(local_158);
      FUN_145d0c43a(param_1,local_290,0);
      FUN_140f991ea(local_158,local_290);
      FUN_1449daebe(local_290);
      (**(code **)(local_158[0] + 0x150))(local_158,&local_298);
      (**(code **)(*param_1 + 0x308))(param_1,local_290,local_158,0);
      FUN_1449daebe(local_158);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146216938 FUN_146216938 body=155 status=ok
// SIG undefined FUN_146216938(void)

void FUN_146216938(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((byte *)*param_4 != (byte *)0x0) && ((*(byte *)*param_4 & 3) != 0)) {
    lVar1 = (**(code **)(*param_1 + 0x180))();
    if (lVar1 != 0) {
      lVar1 = FUN_1400f6f32(lVar1);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x68) != 0)) {
        lVar1 = FUN_140d1732e(*(longlong *)(lVar1 + 0x68),param_2 + 0x18);
        if (lVar1 != 0) {
          lVar2 = FUN_144a5dd5e();
          if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
            lVar1 = FUN_140fab352(lVar1);
            if (lVar1 != 0) {
              FUN_141658512(lVar1,param_4);
              return;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1462169da FUN_1462169da body=133 status=ok
// SIG undefined FUN_1462169da(void)

void FUN_1462169da(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x40);
  if (lVar1 != 0) {
    local_38 = &LAB_148a89c70;
    local_30 = 0;
    FUN_146216bbe(local_28);
    FUN_1459564ca(lVar1,local_28);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_146216a68(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146216a68 FUN_146216a68 body=341 status=ok
// SIG undefined FUN_146216a68(void)

void FUN_146216a68(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  undefined1 *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x48))
            (*(longlong **)(param_1 + 0x20),&local_30,*(undefined1 *)(param_1 + 0x28));
  plVar5 = (longlong *)CONCAT44(uStack_24,local_28);
  if (plVar5 == (longlong *)0x0) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    *(undefined1 **)(lVar3 + 0x40) = local_30;
    plVar6 = *(longlong **)(lVar3 + 0x48);
    if (plVar6 == (longlong *)0x0) goto LAB_146216acd;
    *(undefined8 *)(lVar3 + 0x48) = 0;
LAB_146216b53:
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_146216acd;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar5 = plVar6;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    lVar3 = *(longlong *)(param_1 + 0x20);
    *(undefined1 **)(lVar3 + 0x40) = local_30;
    plVar6 = *(longlong **)(lVar3 + 0x48);
    if (plVar5 != plVar6) {
      *(longlong **)(lVar3 + 0x48) = plVar5;
      if (plVar6 == (longlong *)0x0) goto LAB_146216acd;
      goto LAB_146216b53;
    }
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_146216acd;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_146216acd:
  plVar5 = (longlong *)CONCAT44(uStack_24,local_28);
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
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x40);
  local_30 = &LAB_145f8bbda;
  local_28 = 0;
  FUN_146216bbe(local_40,param_1);
  FUN_141543d2a(uVar4,local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146216bbe FUN_146216bbe body=428 status=ok
// SIG undefined FUN_146216bbe(void)

longlong * FUN_146216bbe(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_146216c9e:
    *puVar5 = &PTR_LAB_149e06450;
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
    *puVar5 = &PTR_FUN_14b4ea3f0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146216c9e;
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
    *puVar5 = &PTR_LAB_149e06450;
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
    *puVar5 = &PTR_FUN_14b4ea3f0;
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



// FUNCTION 146216d6a FUN_146216d6a body=261 status=ok
// SIG undefined FUN_146216d6a(void)

undefined8 *
FUN_146216d6a(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_5 + 1);
  uVar3 = *param_5;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = param_3;
  *puVar4 = &PTR_FUN_14b5afc70;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_145f8a6a4(puVar4 + 4);
  local_50 = uVar3;
  local_48 = uVar1;
  FUN_146216e70(uVar5,param_4);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146216e70 FUN_146216e70 body=423 status=ok
// SIG undefined FUN_146216e70(void)

void FUN_146216e70(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146216f46:
    *puVar5 = &PTR_LAB_14b5afcc0;
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
    *puVar5 = &PTR_FUN_14b9c6140;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146216f46;
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
    *puVar5 = &PTR_LAB_14b5afcc0;
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
    *puVar5 = &PTR_FUN_14b9c6140;
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
                    /* WARNING: Could not recover jumptable at 0x000146216fff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146217018 FUN_146217018 body=261 status=ok
// SIG undefined FUN_146217018(void)

undefined8 *
FUN_146217018(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_5 + 1);
  uVar3 = *param_5;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = param_3;
  *puVar4 = &PTR_FUN_14b47b110;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063f168(puVar4 + 4);
  local_50 = uVar3;
  local_48 = uVar1;
  FUN_14621711e(uVar5,param_4);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14621711e FUN_14621711e body=423 status=ok
// SIG undefined FUN_14621711e(void)

void FUN_14621711e(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1462171f4:
    *puVar5 = &PTR_LAB_14b47b160;
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
    *puVar5 = &PTR_FUN_14b9c6680;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1462171f4;
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
    *puVar5 = &PTR_LAB_14b47b160;
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
    *puVar5 = &PTR_FUN_14b9c6680;
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
                    /* WARNING: Could not recover jumptable at 0x0001462172ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1462172c6 FUN_1462172c6 body=261 status=ok
// SIG undefined FUN_1462172c6(void)

undefined8 *
FUN_1462172c6(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_5 + 1);
  uVar3 = *param_5;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = param_3;
  *puVar4 = &PTR_FUN_14b47b110;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063f168(puVar4 + 4);
  local_50 = uVar3;
  local_48 = uVar1;
  FUN_1462173cc(uVar5,param_4);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462173cc FUN_1462173cc body=423 status=ok
// SIG undefined FUN_1462173cc(void)

void FUN_1462173cc(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1462174a2:
    *puVar5 = &PTR_LAB_14b47b160;
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
    *puVar5 = &PTR_FUN_14b9c68f0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1462174a2;
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
    *puVar5 = &PTR_LAB_14b47b160;
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
    *puVar5 = &PTR_FUN_14b9c68f0;
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
                    /* WARNING: Could not recover jumptable at 0x00014621755b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146217574 FUN_146217574 body=71 status=ok
// SIG undefined FUN_146217574(void)

void FUN_146217574(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_3;
  if (lVar1 != 0) {
    lVar2 = param_3[1];
    FUN_140b5f80c(param_1 + 0x10,lVar1,(int)lVar2);
    FUN_1462175bc(param_1 + 0x28,lVar1,(int)lVar2);
    return;
  }
  return;
}



// FUNCTION 1462175bc FUN_1462175bc body=158 status=ok
// SIG undefined FUN_1462175bc(void)

void FUN_1462175bc(short *param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *param_1) goto LAB_1462175ef;
      plVar8 = plVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1462175ef:
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  lVar6 = *plVar8;
  lVar7 = (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar8 + 0x1c);
  *(undefined4 *)(lVar6 + 0x10 + lVar7) = *(undefined4 *)(param_1 + 10);
  uVar3 = *(undefined4 *)(param_1 + 4);
  uVar4 = *(undefined4 *)(param_1 + 6);
  uVar5 = *(undefined4 *)(param_1 + 8);
  puVar1 = (undefined4 *)(lVar6 + lVar7);
  *puVar1 = *(undefined4 *)(param_1 + 2);
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  if ((char)param_1[0xc] == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000146217649. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14621765a FUN_14621765a body=153 status=ok
// SIG undefined FUN_14621765a(void)

bool FUN_14621765a(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
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



// FUNCTION 1462176f4 FUN_1462176f4 body=304 status=ok
// SIG undefined FUN_1462176f4(void)

void FUN_1462176f4(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if (lVar3 != param_2) {
    return;
  }
  if ((longlong)*(int *)(param_2 + 0x1a8) != 0) {
    pcVar5 = *(char **)(param_2 + 0x1a0);
    lVar3 = (longlong)*(int *)(param_2 + 0x1a8) * 0x78;
    do {
      if (*pcVar5 == '\0') goto LAB_146217746;
      pcVar5 = pcVar5 + 0x78;
      lVar3 = lVar3 + -0x78;
    } while (lVar3 != 0);
  }
  pcVar5 = (char *)0x0;
LAB_146217746:
  plVar1 = *(longlong **)(param_2 + 0x108);
  if ((longlong)*(int *)(param_3 + 0x1a8) != 0) {
    pcVar4 = *(char **)(param_3 + 0x1a0);
    lVar3 = (longlong)*(int *)(param_3 + 0x1a8) * 0x78;
    do {
      if (*pcVar4 == '\0') goto LAB_146217778;
      pcVar4 = pcVar4 + 0x78;
      lVar3 = lVar3 + -0x78;
    } while (lVar3 != 0);
  }
  pcVar4 = (char *)0x0;
LAB_146217778:
  if ((plVar1 == (longlong *)0x0) ||
     ((cVar2 = FUN_147a5faf8(plVar1), cVar2 == '\0' &&
      (*(char *)((longlong)plVar1 + 0xcc3) != '\x01')))) {
    FUN_145ed9f54(param_1,param_2,0);
    lVar3 = 0x10;
    if (pcVar5 == (char *)0x0) {
      return;
    }
  }
  else {
    *(undefined8 *)(param_2 + 0x108) = 0;
    (**(code **)(*plVar1 + 0x3d8))(plVar1,param_3);
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(plVar1);
    }
    *(longlong **)(param_3 + 0x108) = plVar1;
    if (pcVar4 == (char *)0x0 || pcVar5 == (char *)0x0) {
      return;
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(plVar1);
    }
    *(longlong **)(pcVar4 + 0x18) = plVar1;
    lVar3 = 0x18;
  }
  pcVar5 = pcVar5 + lVar3;
  pcVar5[0] = '\0';
  pcVar5[1] = '\0';
  pcVar5[2] = '\0';
  pcVar5[3] = '\0';
  pcVar5[4] = '\0';
  pcVar5[5] = '\0';
  pcVar5[6] = '\0';
  pcVar5[7] = '\0';
  return;
}



// FUNCTION 146217830 FUN_146217830 body=904 status=ok
// SIG undefined FUN_146217830(void)

undefined8 * FUN_146217830(undefined8 *param_1)

{
  undefined1 auStack_68 [40];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140da6ea8();
  *param_1 = &PTR_FUN_14babf3c0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x1010101;
  *(undefined2 *)((longlong)param_1 + 0x94) = 0x201;
  *(undefined4 *)((longlong)param_1 + 0x96) = 0x1010101;
  *(undefined2 *)((longlong)param_1 + 0x9a) = 0x202;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  local_40 = L"/USDCore/USDDefaultAttenuation.USDDefaultAttenuation";
  local_38 = 0x34;
  FUN_14475bf92(param_1 + 0x14,&local_40);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  local_40 = L"/Engine/EngineMaterials/SparseVolumeMaterial.SparseVolumeMaterial";
  local_38 = 0x41;
  FUN_14475bf92(param_1 + 0x18,&local_40);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  local_40 = L"/USDCore/Materials/CardTextureMaterial.CardTextureMaterial";
  local_38 = 0x3a;
  FUN_14475bf92(param_1 + 0x1c,&local_40);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  local_40 = L"/USDCore/Materials/UsdPreviewSurface.UsdPreviewSurface";
  local_38 = 0x36;
  FUN_14475bf92(param_1 + 0x20,&local_40);
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  local_40 = L"/USDCore/Materials/UsdPreviewSurfaceTranslucent.UsdPreviewSurfaceTranslucent";
  local_38 = 0x4c;
  FUN_14475bf92(param_1 + 0x24,&local_40);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  local_40 = L"/USDCore/Materials/UsdPreviewSurfaceTwoSided.UsdPreviewSurfaceTwoSided";
  local_38 = 0x46;
  FUN_14475bf92(param_1 + 0x28,&local_40);
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  local_40 = 
  L"/USDCore/Materials/UsdPreviewSurfaceTranslucentTwoSided.UsdPreviewSurfaceTranslucentTwoSided";
  local_38 = 0x5c;
  FUN_14475bf92(param_1 + 0x2c,&local_40);
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  local_40 = L"/USDCore/Materials/UsdPreviewSurfaceVT.UsdPreviewSurfaceVT";
  local_38 = 0x3a;
  FUN_14475bf92(param_1 + 0x30,&local_40);
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  local_40 = L"/USDCore/Materials/UsdPreviewSurfaceTranslucentVT.UsdPreviewSurfaceTranslucentVT";
  local_38 = 0x50;
  FUN_14475bf92(param_1 + 0x34,&local_40);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  local_40 = L"/USDCore/Materials/UsdPreviewSurfaceTwoSidedVT.UsdPreviewSurfaceTwoSidedVT";
  local_38 = 0x4a;
  FUN_14475bf92(param_1 + 0x38,&local_40);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  local_40 = 
  L"/USDCore/Materials/UsdPreviewSurfaceTranslucentTwoSidedVT.UsdPreviewSurfaceTranslucentTwoSidedVT"
  ;
  local_38 = 0x60;
  FUN_14475bf92(param_1 + 0x3c,&local_40);
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  local_40 = L"/USDCore/Materials/DisplayColor.DisplayColor";
  local_38 = 0x2c;
  FUN_14475bf92(param_1 + 0x40,&local_40);
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  local_40 = L"/USDCore/Materials/DisplayColorAndOpacity.DisplayColorAndOpacity";
  local_38 = 0x40;
  FUN_14475bf92(param_1 + 0x44,&local_40);
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  local_40 = L"/USDCore/Materials/DisplayColorTwoSided.DisplayColorTwoSided";
  local_38 = 0x3c;
  FUN_14475bf92(param_1 + 0x48,&local_40);
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  local_40 = L"/USDCore/Materials/DisplayColorAndOpacityTwoSided.DisplayColorAndOpacityTwoSided";
  local_38 = 0x50;
  FUN_14475bf92(param_1 + 0x4c,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146217bba FUN_146217bba body=185 status=ok
// SIG undefined FUN_146217bba(void)

bool FUN_146217bba(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar3 = local_48;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146217c74 FUN_146217c74 body=566 status=ok
// SIG undefined FUN_146217c74(void)

void FUN_146217c74(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined1 local_78 [4];
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined2 local_60 [2];
  undefined8 local_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_60[0] = 0;
  local_5c = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar2 = local_60;
  if (*(undefined2 **)(param_2 + 0x38) != (undefined2 *)0x0) {
    puVar2 = *(undefined2 **)(param_2 + 0x38);
  }
  local_78[0] = 0;
  local_74 = 0;
  local_6c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar1 = local_78;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  local_80 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  plVar3 = &local_80;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141659bec(local_68,puVar2,puVar1,plVar3);
  if ((DAT_14c950c29 == '\x01') && (*plVar3 != 0)) {
    FUN_1456cec3c();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146217eac FUN_146217eac body=175 status=ok
// SIG undefined FUN_146217eac(void)

bool FUN_146217eac(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


