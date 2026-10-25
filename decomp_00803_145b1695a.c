// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145b1695a FUN_145b1695a body=339 status=ok
// SIG undefined FUN_145b1695a(void)

void FUN_145b1695a(undefined8 param_1,longlong param_2,int param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  int *local_50;
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    iVar1 = FUN_141007d7a(param_2,1,
                          CONCAT31((int3)((uint)param_3 >> 8),*(undefined1 *)(param_2 + 0x147)) ^ 1)
    ;
    if (param_4[1] == 0 || iVar1 != *param_4) {
      *param_4 = iVar1;
      param_4[1] = param_4[1] + 1;
    }
    if (param_4[3] == 0 || param_4[2] != param_3) {
      param_4[2] = param_3;
      param_4[3] = param_4[3] + 1;
    }
    iVar3 = 0;
    if (0 < iVar1 - param_3) {
      iVar3 = iVar1 - param_3;
    }
    if (param_4[5] == 0 || iVar3 != param_4[4]) {
      param_4[4] = iVar3;
      param_4[5] = param_4[5] + 1;
    }
    iVar1 = param_4[0xf];
    FUN_141286eab(*(undefined8 *)(param_4 + 0xc),param_4[0xe]);
    param_4[0xe] = 0;
    if ((iVar1 < 0) && (param_4[0xf] != 0)) {
      FUN_148e23880(param_4 + 0xc);
    }
    param_4[0x10] = param_4[0x10] + 1;
    local_68 = 0;
    local_58 = &PTR_LAB_14b9a6fb0;
    local_78 = FUN_14424a634;
    local_50 = param_4 + 0xc;
    local_48 = param_1;
    FUN_14100973a(param_2);
    lVar2 = FUN_14011c349();
    if (*(longlong *)(param_2 + 0xb8) == *(longlong *)(lVar2 + 0x48)) {
      FUN_140d8e082(param_1);
    }
    FUN_14148862c(param_4);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b16aae FUN_145b16aae body=236 status=ok
// SIG undefined FUN_145b16aae(void)

void FUN_145b16aae(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  plVar4 = (longlong *)FUN_141008fe0();
  lVar1 = *plVar4;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x1478));
  *(int *)(lVar1 + 0x1470) = *(int *)(lVar1 + 0x1470) + 1;
  plVar4 = (longlong *)FUN_145b16c8e();
  FUN_145b16bec(lVar1 + 0x1458,(int)plVar4[1]);
  *(int *)(lVar1 + 0x1468) = *(int *)(lVar1 + 0x1468) + 1;
  lVar3 = plVar4[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *plVar4;
    lVar7 = 0;
    iVar6 = 0;
    do {
      *(int *)(lVar1 + 0x1468) = *(int *)(lVar1 + 0x1468) + 1;
      plVar4 = (longlong *)FUN_145b16b9a(lVar1 + 0x1458);
      if ((int)plVar4[1] == 0 || *(longlong *)(lVar2 + lVar7) != *plVar4) {
        *plVar4 = *(longlong *)(lVar2 + lVar7);
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      }
      if ((iVar6 != *(int *)((longlong)plVar4 + 0xc)) || ((int)plVar4[2] == 0)) {
        *(int *)((longlong)plVar4 + 0xc) = iVar6;
        *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
      }
      iVar5 = *(int *)(lVar2 + 8 + lVar7);
      if ((iVar5 != *(int *)((longlong)plVar4 + 0x14)) || ((int)plVar4[3] == 0)) {
        *(int *)((longlong)plVar4 + 0x14) = iVar5;
        *(int *)(plVar4 + 3) = (int)plVar4[3] + 1;
        iVar5 = *(int *)(lVar2 + 8 + lVar7);
      }
      iVar6 = iVar6 + iVar5;
      lVar7 = lVar7 + 0x38;
    } while ((longlong)(int)lVar3 * 0x38 - lVar7 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x000145b16b93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x1478));
  return;
}



// FUNCTION 145b16b9a FUN_145b16b9a body=70 status=ok
// SIG undefined FUN_145b16b9a(void)

longlong FUN_145b16b9a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148e24b7e(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x1c + *param_1;
  FUN_145b16be0(lVar2);
  return lVar2;
}



// FUNCTION 145b16be0 FUN_145b16be0 body=11 status=ok
// SIG undefined FUN_145b16be0(void)

void FUN_145b16be0(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 145b16bec FUN_145b16bec body=42 status=ok
// SIG undefined FUN_145b16bec(void)

void FUN_145b16bec(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_145b16c18();
    return;
  }
  return;
}



// FUNCTION 145b16c18 FUN_145b16c18 body=118 status=ok
// SIG undefined FUN_145b16c18(void)

void FUN_145b16c18(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x1c,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x1c)) {
      uVar2 = uVar1 / 0x1c & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x1c,4);
  }
  return;
}



// FUNCTION 145b16c8e FUN_145b16c8e body=250 status=ok
// SIG undefined FUN_145b16c8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145b16c8e(void)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbcc660) {
    FUN_144b3d300(&DAT_14cbcc660);
    if (DAT_14cbcc660 == -1) {
      DAT_14cbcc650 = 0;
      _DAT_14cbcc658 = 0;
      atexit(FUN_144182310);
      _Init_thread_footer(&DAT_14cbcc660);
    }
  }
  lVar3 = FUN_14011c349();
  lVar5 = *(longlong *)(lVar3 + 0x28);
  if (lVar5 == 0) {
    uVar6 = FUN_145d8612a();
    lVar5 = FUN_14477b664(uVar6);
    *(longlong *)(lVar3 + 0x28) = lVar5;
  }
  lVar7 = *(longlong *)(lVar3 + 0x30);
  if (((lVar7 != 0) || (lVar7 = 0, lVar5 == 0)) || (*(longlong *)(lVar3 + 0x20) == 0))
  goto LAB_145b16d07;
  plVar1 = *(longlong **)(lVar5 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_145b16d84:
    lVar7 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_145b16d84;
    uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar7 = FUN_144aff482(uVar6,(longlong *)(lVar3 + 0x20));
  }
  *(longlong *)(lVar3 + 0x30) = lVar7;
LAB_145b16d07:
  puVar4 = &DAT_14cbcc650;
  if (lVar7 != 0) {
    puVar4 = (undefined8 *)(lVar7 + 0x18);
  }
  return puVar4;
}



// FUNCTION 145b16d88 FUN_145b16d88 body=588 status=ok
// SIG undefined FUN_145b16d88(void)

void FUN_145b16d88(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  ushort uVar11;
  ulonglong uVar12;
  ushort uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  
  lVar3 = param_1[4];
  if (lVar3 == 0) {
    return;
  }
  lVar7 = FUN_144a5dd5e();
  if (*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) {
    return;
  }
  if (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
      lVar7 + 0x30) {
    return;
  }
  lVar7 = FUN_144a5dd5e();
  if (*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) {
    return;
  }
  if (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
      lVar7 + 0x30) {
    return;
  }
  lVar7 = (**(code **)(*param_1 + 0x2b8))(param_1);
  if (lVar7 == 0) {
    return;
  }
  lVar8 = FUN_144a2f878();
  if (*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) {
    return;
  }
  if (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
      lVar8 + 0x30) {
    return;
  }
  iVar4 = FUN_140d8dbd3();
  plVar9 = (longlong *)FUN_141008fe0(param_1);
  lVar8 = *plVar9;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 0x1478));
  *(int *)(lVar8 + 0x1470) = *(int *)(lVar8 + 0x1470) + 1;
  if (iVar4 == *(int *)(lVar8 + 0x1450)) {
    if (*(int *)(lVar8 + 0x1454) != 0) goto LAB_145b16e87;
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)(lVar8 + 0x1454) + 1;
  }
  *(int *)(lVar8 + 0x1450) = iVar4;
  *(int *)(lVar8 + 0x1454) = iVar5;
LAB_145b16e87:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar8 + 0x1478));
  plVar9 = (longlong *)FUN_141008fe0(param_1);
  lVar8 = *plVar9;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 0x1478));
  *(int *)(lVar8 + 0x1470) = *(int *)(lVar8 + 0x1470) + 1;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar8 + 0x1478));
  uVar6 = FUN_140d8dbd3();
  if (uVar6 == 0) {
    DAT_14cbd5918 = 1;
    return;
  }
  uVar16 = 0;
LAB_145b16edb:
  iVar4 = FUN_140d8dbd3();
  if ((longlong)uVar16 < (longlong)iVar4) {
    lVar15 = uVar16 * 0x68;
    lVar1 = lVar15 + lVar8;
    piVar2 = (int *)(lVar8 + 0x60 + lVar15);
    *piVar2 = *piVar2 + 1;
    FUN_141009055(lVar1,uVar16 & 0xffffffff,lVar3,lVar7);
    if (*(int *)(lVar8 + 0x38 + lVar15) < 2) {
      DAT_14cbd5918 = 0;
      return;
    }
    plVar9 = (longlong *)(lVar15 + lVar8 + 0x30);
    lVar15 = 0;
    do {
      uVar11 = *(ushort *)(*plVar9 + lVar15);
      uVar12 = (ulonglong)uVar11;
      uVar13 = *(ushort *)((longlong)&DAT_149e62e78 + lVar15);
      if (uVar11 == uVar13) {
        if (uVar11 == 0) {
          DAT_14cbd5918 = 0;
          return;
        }
      }
      else {
        if (0x7f < (uVar13 | uVar11)) goto LAB_145b16f62;
        uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
        uVar14 = (ulonglong)uVar13;
        uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
        if ((&DAT_149e05da0)[uVar12] != (&DAT_149e05da0)[uVar14]) goto LAB_145b16f62;
      }
      lVar15 = lVar15 + 2;
    } while( true );
  }
  goto LAB_145b16f90;
LAB_145b16f62:
  if (uVar11 == uVar13) {
    DAT_14cbd5918 = 0;
    return;
  }
  uVar10 = FUN_140d8e3ae(param_1);
  iVar5 = FUN_14100960f(uVar10,plVar9);
  iVar4 = *(int *)(lVar1 + 0x4c);
  if (iVar5 == *(int *)(lVar1 + 0x48)) {
    if (iVar4 != 0) goto LAB_145b16f90;
    iVar4 = 0;
  }
  *(int *)(lVar1 + 0x48) = iVar5;
  *(int *)(lVar1 + 0x4c) = iVar4 + 1;
LAB_145b16f90:
  uVar16 = uVar16 + 1;
  if (uVar16 == uVar6) {
    DAT_14cbd5918 = 1;
    return;
  }
  goto LAB_145b16edb;
}



// FUNCTION 145b16fd4 FUN_145b16fd4 body=584 status=ok
// SIG undefined FUN_145b16fd4(void)

void FUN_145b16fd4(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
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
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  local_60 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  uVar2 = local_5c;
  uVar1 = local_60;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_58;
  uVar3 = FUN_14477b664(uStack_50);
  local_70 = FUN_14477b664(uVar3);
  local_68 = local_48;
  local_88 = uVar1;
  FUN_1414c1656(local_38,local_40,&local_78,uVar2);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1721e FUN_145b1721e body=154 status=ok
// SIG undefined FUN_145b1721e(void)

bool FUN_145b1721e(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 145b172f0 FUN_145b172f0 body=300 status=ok
// SIG undefined FUN_145b172f0(void)

undefined4 * FUN_145b172f0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145b174de(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_38 = uVar5;
  *(undefined8 *)(local_38 + 2) = *puVar1;
  lVar8 = puVar1[1];
  *(longlong *)(local_38 + 4) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    uVar5 = *local_38;
  }
  local_38[6] = 0xffffffff;
  local_44 = local_40[0];
  cVar3 = FUN_145b1741e(param_1,uVar5,local_38,&local_44);
  uVar2 = local_44;
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
      local_38[7] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_38[6] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145b175c4(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1741e FUN_145b1741e body=191 status=ok
// SIG undefined FUN_145b1741e(void)

undefined8 FUN_145b1741e(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        piVar3 = (int *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(piVar3 + 4);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
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
          iVar4 = *param_3;
          iVar5 = param_3[1];
          iVar6 = param_3[2];
          iVar7 = param_3[3];
          *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar3 = iVar4;
          piVar3[1] = iVar5;
          piVar3[2] = iVar6;
          piVar3[3] = iVar7;
          FUN_14574e6b0(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = piVar3[6];
      } while (iVar9 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145b174de FUN_145b174de body=229 status=ok
// SIG undefined FUN_145b174de(void)

int * FUN_145b174de(longlong *param_1,int *param_2)

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



// FUNCTION 145b175c4 FUN_145b175c4 body=431 status=ok
// SIG undefined FUN_145b175c4(void)

void FUN_145b175c4(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 145b17780 FUN_145b17780 body=221 status=ok
// SIG undefined FUN_145b17780(void)

longlong FUN_145b17780(void)

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
  if (DAT_14c99d7d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146ff03c3;
    local_40 = &LAB_14624fa67;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x1478;
    FUN_14081cfa3(L"/Script/AssetRegistry",L"AssetRegistryImpl",&DAT_14c99d7d8,&DAT_146ff03c2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99d7d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1786a FUN_145b1786a body=221 status=ok
// SIG undefined FUN_145b1786a(void)

longlong FUN_145b1786a(void)

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
  if (DAT_14caf2800 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147be3c55;
    local_40 = FUN_1463ed704;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/Engine",L"NetworkMetricsConfig",&DAT_14caf2800,&DAT_147be3c54);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf2800;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b17960 FUN_145b17960 body=221 status=ok
// SIG undefined FUN_145b17960(void)

longlong FUN_145b17960(void)

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
  if (DAT_14cb8e570 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1489bf23d;
    local_40 = FUN_146564617;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/CoherentRenderingPlugin",L"CoherentRenderingSettings",&DAT_14cb8e570,
                  &DAT_1489bf23c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb8e570;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b17a44 FUN_145b17a44 body=221 status=ok
// SIG undefined FUN_145b17a44(void)

longlong FUN_145b17a44(void)

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
  if (DAT_14cb96510 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148a57c9f;
    local_40 = &LAB_145934039;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x110;
    FUN_14081cfa3(L"/Script/Shift",L"ShiftService",&DAT_14cb96510,&DAT_148a57c9e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb96510;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b17b2e FUN_145b17b2e body=38 status=ok
// SIG undefined FUN_145b17b2e(void)

undefined8 FUN_145b17b2e(undefined8 param_1,int param_2)

{
  FUN_145b17b54();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b17b54 FUN_145b17b54 body=83 status=ok
// SIG undefined FUN_145b17b54(void)

void FUN_145b17b54(undefined8 *param_1)

{
  *param_1 = FUsdSchemasModule::vftable;
  FUN_145b17ba7(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_145b17bd4(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145b17ba7 FUN_145b17ba7 body=45 status=ok
// SIG undefined FUN_145b17ba7(void)

void FUN_145b17ba7(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 145b17bd4 FUN_145b17bd4 body=61 status=ok
// SIG undefined FUN_145b17bd4(void)

void FUN_145b17bd4(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x10;
    do {
      FUN_14944ade6(param_1);
      if (*(longlong *)(param_1 + -0x10) != 0) {
        FUN_1400020a8();
      }
      param_1 = param_1 + 0x90;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145b17c18 FUN_145b17c18 body=221 status=ok
// SIG undefined FUN_145b17c18(void)

longlong FUN_145b17c18(void)

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
  if (DAT_14cc267d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1497d9605;
    local_40 = &LAB_145cc763f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xd0;
    FUN_14081cfa3(L"/Script/AutomationTest",L"AutomationTestExcludelist",&DAT_14cc267d0,
                  &DAT_1497d9604);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc267d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b17d02 FUN_145b17d02 body=221 status=ok
// SIG undefined FUN_145b17d02(void)

longlong FUN_145b17d02(void)

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
  if (DAT_14cc322c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1498f0217;
    local_40 = &LAB_145ce11c0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0xb8;
    FUN_14081cfa3(L"/Script/UdpMessaging",L"UdpMessagingSettings",&DAT_14cc322c8,&DAT_1498f0216);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc322c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b17de0 FUN_145b17de0 body=24 status=ok
// SIG undefined FUN_145b17de0(void)

void FUN_145b17de0(void)

{
  FUN_145b17df8();
  FUN_145b17edb();
  FUN_145b17e15();
  return;
}



// FUNCTION 145b17df8 FUN_145b17df8 body=29 status=ok
// SIG undefined FUN_145b17df8(void)

void FUN_145b17df8(void)

{
  FUN_145b19a04();
  FUN_145b19c92();
  FUN_145b19f20();
  FUN_145b1a1ae();
  return;
}



// FUNCTION 145b17e15 FUN_145b17e15 body=74 status=ok
// SIG undefined FUN_145b17e15(void)

void FUN_145b17e15(void)

{
  FUN_145b18004();
  FUN_145b18204();
  FUN_145b18404();
  FUN_145b18604();
  FUN_145b18804();
  FUN_145b18a04();
  FUN_145b18c04();
  FUN_145b18e04();
  FUN_145b19004();
  FUN_145b19204();
  FUN_145b19404();
  FUN_145b19604();
  FUN_145b19804();
  return;
}



// FUNCTION 145b17e60 FUN_145b17e60 body=123 status=ok
// SIG undefined FUN_145b17e60(void)

void FUN_145b17e60(undefined8 *param_1)

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
  return;
}



// FUNCTION 145b17edb FUN_145b17edb body=296 status=ok
// SIG undefined FUN_145b17edb(void)

void FUN_145b17edb(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145b1a43c();
  FUN_145b1a6ca();
  FUN_145b1a958();
  FUN_145b1abe6();
  FUN_145b1ae74();
  FUN_145b1b102();
  FUN_145b1b390();
  FUN_145b1b61e();
  FUN_145b1b8ac();
  FUN_145b1bb3a();
  FUN_145b1bdc8();
  FUN_145b1c056();
  FUN_145b1c2e4();
  FUN_145b1c572();
  FUN_145b1c800();
  FUN_145b1ca8e();
  FUN_145b1cd1c();
  FUN_145b1cfaa();
  FUN_145b1d238();
  FUN_145b1d4c6();
  FUN_145b1d754();
  FUN_145b1d9e2();
  FUN_145b1dc70();
  FUN_145b1defe();
  FUN_145b1e18c();
  FUN_145b1e41a();
  FUN_145b1e6a8();
  FUN_145b1e936();
  FUN_145b1ebc4();
  FUN_145b1ee52();
  FUN_145b1f0e0();
  FUN_145b1f36e();
  FUN_145b1f5fc();
  FUN_145b1f88a();
  uVar1 = FUN_1415ac724();
  local_40 = 0x3ecccccd00000000;
  uStack_38 = 0x3f8000003f4ccccd;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0x3f000000;
  FUN_1446ddc76(local_48,&DAT_149faf950,1);
  FUN_1415ac798(uVar1,local_48,&local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b18004 FUN_145b18004 body=453 status=ok
// SIG undefined FUN_145b18004(void)

void FUN_145b18004(void)

{
  undefined8 uVar1;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined8 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FDataflowVectorMakeVec2Node",1);
  FUN_1446ddc76(&local_e0,"MakeVector2",1);
  FUN_1446ddc76(&local_e8,"Math|Vectors",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"MakeVector2",1);
  FUN_1446ddc76(local_118,"FDataflowVectorMakeVec2Node",1);
  FUN_145b181ca();
  local_108 = 0;
  uStack_100 = 0;
  FUN_145b181ca();
  FUN_145b181ca();
  FUN_1446ddc76(local_128,"FDataflowVectorMakeVec2Node",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_140 = 0;
  local_148 = 0;
  local_158 = local_f8;
  local_150 = &local_108;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar1 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_149fbc360;
  local_60 = FUN_146fdb37e;
  local_88 = FUN_146fdb42e;
  FUN_1411d7a02(uVar1,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b181ca FUN_145b181ca body=57 status=ok
// SIG undefined FUN_145b181ca(void)

void FUN_145b181ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cc70 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cc70 = FUN_140002ddd(FUN_14629199e,uVar1,L"DataflowVectorMakeVec2Node");
  }
  return;
}



// FUNCTION 145b18204 FUN_145b18204 body=453 status=ok
// SIG undefined FUN_145b18204(void)

void FUN_145b18204(void)

{
  undefined8 uVar1;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined8 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FDataflowVectorMakeVec3Node",1);
  FUN_1446ddc76(&local_e0,"MakeVector3",1);
  FUN_1446ddc76(&local_e8,"Math|Vectors",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"MakeVector3",1);
  FUN_1446ddc76(local_118,"FDataflowVectorMakeVec3Node",1);
  FUN_145b183ca();
  local_108 = 0;
  uStack_100 = 0;
  FUN_145b183ca();
  FUN_145b183ca();
  FUN_1446ddc76(local_128,"FDataflowVectorMakeVec3Node",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_140 = 0;
  local_148 = 0;
  local_158 = local_f8;
  local_150 = &local_108;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar1 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_149fbc380;
  local_60 = FUN_146fdb466;
  local_88 = FUN_146fdb516;
  FUN_1411d7a02(uVar1,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b183ca FUN_145b183ca body=57 status=ok
// SIG undefined FUN_145b183ca(void)

void FUN_145b183ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cc88 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cc88 = FUN_140002ddd(FUN_1462919fe,uVar1,L"DataflowVectorMakeVec3Node");
  }
  return;
}



// FUNCTION 145b18404 FUN_145b18404 body=453 status=ok
// SIG undefined FUN_145b18404(void)

void FUN_145b18404(void)

{
  undefined8 uVar1;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined8 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FDataflowVectorMakeVec4Node",1);
  FUN_1446ddc76(&local_e0,"MakeVector4",1);
  FUN_1446ddc76(&local_e8,"Math|Vectors",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"MakeVector4",1);
  FUN_1446ddc76(local_118,"FDataflowVectorMakeVec4Node",1);
  FUN_145b185ca();
  local_108 = 0;
  uStack_100 = 0;
  FUN_145b185ca();
  FUN_145b185ca();
  FUN_1446ddc76(local_128,"FDataflowVectorMakeVec4Node",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_140 = 0;
  local_148 = 0;
  local_158 = local_f8;
  local_150 = &local_108;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar1 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_149fbc3a0;
  local_60 = FUN_146fdb54e;
  local_88 = FUN_146fdb5fe;
  FUN_1411d7a02(uVar1,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b185ca FUN_145b185ca body=57 status=ok
// SIG undefined FUN_145b185ca(void)

void FUN_145b185ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cca0 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cca0 = FUN_140002ddd(FUN_146291a5e,uVar1,L"DataflowVectorMakeVec4Node");
  }
  return;
}



// FUNCTION 145b18604 FUN_145b18604 body=453 status=ok
// SIG undefined FUN_145b18604(void)

void FUN_145b18604(void)

{
  undefined8 uVar1;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined8 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FDataflowVectorBreakNode",1);
  FUN_1446ddc76(&local_e0,"BreakVector",1);
  FUN_1446ddc76(&local_e8,"Math|Vectors",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"BreakVector",1);
  FUN_1446ddc76(local_118,"FDataflowVectorBreakNode",1);
  FUN_145b187ca();
  local_108 = 0;
  uStack_100 = 0;
  FUN_145b187ca();
  FUN_145b187ca();
  FUN_1446ddc76(local_128,"FDataflowVectorBreakNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_140 = 0;
  local_148 = 0;
  local_158 = local_f8;
  local_150 = &local_108;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar1 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_149fbc3c0;
  local_60 = FUN_146fdb636;
  local_88 = FUN_146fdb6e6;
  FUN_1411d7a02(uVar1,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b187ca FUN_145b187ca body=57 status=ok
// SIG undefined FUN_145b187ca(void)

void FUN_145b187ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99ccb8 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99ccb8 = FUN_140002ddd(FUN_146291abe,uVar1,L"DataflowVectorBreakNode");
  }
  return;
}



// FUNCTION 145b18804 FUN_145b18804 body=453 status=ok
// SIG undefined FUN_145b18804(void)

void FUN_145b18804(void)

{
  undefined8 uVar1;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined8 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FDataflowVectorAddNode",1);
  FUN_1446ddc76(&local_e0,"AddVector",1);
  FUN_1446ddc76(&local_e8,"Math|Vectors",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"AddVector",1);
  FUN_1446ddc76(local_118,"FDataflowVectorAddNode",1);
  FUN_145b189ca();
  local_108 = 0;
  uStack_100 = 0;
  FUN_145b189ca();
  FUN_145b189ca();
  FUN_1446ddc76(local_128,"FDataflowVectorAddNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_140 = 0;
  local_148 = 0;
  local_158 = local_f8;
  local_150 = &local_108;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar1 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_149fbc3e0;
  local_60 = FUN_146fdb71e;
  local_88 = FUN_146fdb7ce;
  FUN_1411d7a02(uVar1,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b189ca FUN_145b189ca body=57 status=ok
// SIG undefined FUN_145b189ca(void)

void FUN_145b189ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99ccd0 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99ccd0 = FUN_140002ddd(FUN_146291b1e,uVar1,L"DataflowVectorAddNode");
  }
  return;
}



// FUNCTION 145b18a04 FUN_145b18a04 body=453 status=ok
// SIG undefined FUN_145b18a04(void)

void FUN_145b18a04(void)

{
  undefined8 uVar1;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined8 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FDataflowVectorSubtractNode",1);
  FUN_1446ddc76(&local_e0,"SubtractVector",1);
  FUN_1446ddc76(&local_e8,"Math|Vectors",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"SubtractVector",1);
  FUN_1446ddc76(local_118,"FDataflowVectorSubtractNode",1);
  FUN_145b18bca();
  local_108 = 0;
  uStack_100 = 0;
  FUN_145b18bca();
  FUN_145b18bca();
  FUN_1446ddc76(local_128,"FDataflowVectorSubtractNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_140 = 0;
  local_148 = 0;
  local_158 = local_f8;
  local_150 = &local_108;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar1 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_149fbc400;
  local_60 = FUN_146fdb806;
  local_88 = FUN_146fdb8b6;
  FUN_1411d7a02(uVar1,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b18bca FUN_145b18bca body=57 status=ok
// SIG undefined FUN_145b18bca(void)

void FUN_145b18bca(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cce8 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cce8 = FUN_140002ddd(FUN_146291b7e,uVar1,L"DataflowVectorSubtractNode");
  }
  return;
}



// FUNCTION 145b18c04 FUN_145b18c04 body=453 status=ok
// SIG undefined FUN_145b18c04(void)

void FUN_145b18c04(void)

{
  undefined8 uVar1;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined8 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FDataflowVectorDotProductNode",1);
  FUN_1446ddc76(&local_e0,"VectorDotProduct",1);
  FUN_1446ddc76(&local_e8,"Math|Vectors",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"VectorDotProduct",1);
  FUN_1446ddc76(local_118,"FDataflowVectorDotProductNode",1);
  FUN_145b18dca();
  local_108 = 0;
  uStack_100 = 0;
  FUN_145b18dca();
  FUN_145b18dca();
  FUN_1446ddc76(local_128,"FDataflowVectorDotProductNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_140 = 0;
  local_148 = 0;
  local_158 = local_f8;
  local_150 = &local_108;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar1 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_149fbc420;
  local_60 = FUN_146fdb8ee;
  local_88 = FUN_146fdb99e;
  FUN_1411d7a02(uVar1,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b18dca FUN_145b18dca body=57 status=ok
// SIG undefined FUN_145b18dca(void)

void FUN_145b18dca(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cd00 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cd00 = FUN_140002ddd(FUN_146291bde,uVar1,L"DataflowVectorDotProductNode");
  }
  return;
}



// FUNCTION 145b18e04 FUN_145b18e04 body=453 status=ok
// SIG undefined FUN_145b18e04(void)

void FUN_145b18e04(void)

{
  undefined8 uVar1;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined8 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FDataflowVectorLengthNode",1);
  FUN_1446ddc76(&local_e0,"VectorLength",1);
  FUN_1446ddc76(&local_e8,"Math|Vectors",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"VectorLength",1);
  FUN_1446ddc76(local_118,"FDataflowVectorLengthNode",1);
  FUN_145b18fca();
  local_108 = 0;
  uStack_100 = 0;
  FUN_145b18fca();
  FUN_145b18fca();
  FUN_1446ddc76(local_128,"FDataflowVectorLengthNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_140 = 0;
  local_148 = 0;
  local_158 = local_f8;
  local_150 = &local_108;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar1 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_149fbc440;
  local_60 = FUN_146fdb9d6;
  local_88 = FUN_146fdba86;
  FUN_1411d7a02(uVar1,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b18fca FUN_145b18fca body=57 status=ok
// SIG undefined FUN_145b18fca(void)

void FUN_145b18fca(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cd18 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cd18 = FUN_140002ddd(FUN_146291c3e,uVar1,L"DataflowVectorLengthNode");
  }
  return;
}



// FUNCTION 145b19004 FUN_145b19004 body=453 status=ok
// SIG undefined FUN_145b19004(void)

void FUN_145b19004(void)

{
  undefined8 uVar1;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined8 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FDataflowVectorSquaredLengthNode",1);
  FUN_1446ddc76(&local_e0,"VectorSquaredLength",1);
  FUN_1446ddc76(&local_e8,"Math|Vectors",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"VectorSquaredLength",1);
  FUN_1446ddc76(local_118,"FDataflowVectorSquaredLengthNode",1);
  FUN_145b191ca();
  local_108 = 0;
  uStack_100 = 0;
  FUN_145b191ca();
  FUN_145b191ca();
  FUN_1446ddc76(local_128,"FDataflowVectorSquaredLengthNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_140 = 0;
  local_148 = 0;
  local_158 = local_f8;
  local_150 = &local_108;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar1 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_149fbc460;
  local_60 = FUN_146fdbabe;
  local_88 = FUN_146fdbb6e;
  FUN_1411d7a02(uVar1,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b191ca FUN_145b191ca body=57 status=ok
// SIG undefined FUN_145b191ca(void)

void FUN_145b191ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cd30 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cd30 = FUN_140002ddd(FUN_146291c9e,uVar1,L"DataflowVectorSquaredLengthNode");
  }
  return;
}



// FUNCTION 145b19204 FUN_145b19204 body=453 status=ok
// SIG undefined FUN_145b19204(void)

void FUN_145b19204(void)

{
  undefined8 uVar1;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined8 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FDataflowVectorDistanceNode",1);
  FUN_1446ddc76(&local_e0,"VectorDistance",1);
  FUN_1446ddc76(&local_e8,"Math|Vectors",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"VectorDistance",1);
  FUN_1446ddc76(local_118,"FDataflowVectorDistanceNode",1);
  FUN_145b193ca();
  local_108 = 0;
  uStack_100 = 0;
  FUN_145b193ca();
  FUN_145b193ca();
  FUN_1446ddc76(local_128,"FDataflowVectorDistanceNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_140 = 0;
  local_148 = 0;
  local_158 = local_f8;
  local_150 = &local_108;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar1 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_149fbc480;
  local_60 = FUN_146fdbba6;
  local_88 = FUN_146fdbc56;
  FUN_1411d7a02(uVar1,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b193ca FUN_145b193ca body=57 status=ok
// SIG undefined FUN_145b193ca(void)

void FUN_145b193ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cd48 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cd48 = FUN_140002ddd(FUN_146291cfe,uVar1,L"DataflowVectorDistanceNode");
  }
  return;
}



// FUNCTION 145b19404 FUN_145b19404 body=453 status=ok
// SIG undefined FUN_145b19404(void)

void FUN_145b19404(void)

{
  undefined8 uVar1;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined8 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FDataflowVectorCrossProductNode",1);
  FUN_1446ddc76(&local_e0,"VectorCrossProduct",1);
  FUN_1446ddc76(&local_e8,"Math|Vectors",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"VectorCrossProduct",1);
  FUN_1446ddc76(local_118,"FDataflowVectorCrossProductNode",1);
  FUN_145b195ca();
  local_108 = 0;
  uStack_100 = 0;
  FUN_145b195ca();
  FUN_145b195ca();
  FUN_1446ddc76(local_128,"FDataflowVectorCrossProductNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_140 = 0;
  local_148 = 0;
  local_158 = local_f8;
  local_150 = &local_108;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar1 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_149fbc4a0;
  local_60 = FUN_146fdbc8e;
  local_88 = FUN_146fdbd3e;
  FUN_1411d7a02(uVar1,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b195ca FUN_145b195ca body=57 status=ok
// SIG undefined FUN_145b195ca(void)

void FUN_145b195ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cd60 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cd60 = FUN_140002ddd(FUN_146291d5e,uVar1,L"DataflowVectorCrossProductNode");
  }
  return;
}



// FUNCTION 145b19604 FUN_145b19604 body=453 status=ok
// SIG undefined FUN_145b19604(void)

void FUN_145b19604(void)

{
  undefined8 uVar1;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined8 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FDataflowVectorScaleNode",1);
  FUN_1446ddc76(&local_e0,"ScaleVector",1);
  FUN_1446ddc76(&local_e8,"Math|Vectors",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"ScaleVector",1);
  FUN_1446ddc76(local_118,"FDataflowVectorScaleNode",1);
  FUN_145b197ca();
  local_108 = 0;
  uStack_100 = 0;
  FUN_145b197ca();
  FUN_145b197ca();
  FUN_1446ddc76(local_128,"FDataflowVectorScaleNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_140 = 0;
  local_148 = 0;
  local_158 = local_f8;
  local_150 = &local_108;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar1 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_149fbc4c0;
  local_60 = FUN_146fdbd76;
  local_88 = FUN_146fdbe26;
  FUN_1411d7a02(uVar1,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b197ca FUN_145b197ca body=57 status=ok
// SIG undefined FUN_145b197ca(void)

void FUN_145b197ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cd78 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cd78 = FUN_140002ddd(FUN_146291dbe,uVar1,L"DataflowVectorScaleNode");
  }
  return;
}



// FUNCTION 145b19804 FUN_145b19804 body=453 status=ok
// SIG undefined FUN_145b19804(void)

void FUN_145b19804(void)

{
  undefined8 uVar1;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined8 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FDataflowVectorNormalize",1);
  FUN_1446ddc76(&local_e0,"NormalizeVector",1);
  FUN_1446ddc76(&local_e8,"Math|Vectors",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"NormalizeVector",1);
  FUN_1446ddc76(local_118,"FDataflowVectorNormalize",1);
  FUN_145b199ca();
  local_108 = 0;
  uStack_100 = 0;
  FUN_145b199ca();
  FUN_145b199ca();
  FUN_1446ddc76(local_128,"FDataflowVectorNormalize",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_140 = 0;
  local_148 = 0;
  local_158 = local_f8;
  local_150 = &local_108;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar1 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_149fbc4e0;
  local_60 = FUN_146fdbe5e;
  local_88 = FUN_146fdbf0e;
  FUN_1411d7a02(uVar1,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b199ca FUN_145b199ca body=57 status=ok
// SIG undefined FUN_145b199ca(void)

void FUN_145b199ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cd90 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cd90 = FUN_140002ddd(FUN_146291e1e,uVar1,L"DataflowVectorNormalize");
  }
  return;
}



// FUNCTION 145b19a04 FUN_145b19a04 body=653 status=ok
// SIG undefined FUN_145b19a04(void)

void FUN_145b19a04(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowReRouteNode",1);
  FUN_1446ddc76(&local_d0,"ReRouteNode",1);
  FUN_1446ddc76(&local_d8,&DAT_149e3b481,1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"ReRouteNode",1);
  FUN_1446ddc76(local_108,"FDataflowReRouteNode",1);
  if (DAT_14c99c898 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c898 = FUN_140002ddd(FUN_146290261,uVar3,L"DataflowReRouteNode");
  }
  FUN_1406751de(local_f8,DAT_14c99c898,local_108,local_100);
  if (DAT_14c99c898 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c898 = FUN_140002ddd(FUN_146290261,uVar3,L"DataflowReRouteNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99c898);
  if (DAT_14c99c898 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c898 = FUN_140002ddd(FUN_146290261,uVar3,L"DataflowReRouteNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99c898);
  FUN_1446ddc76(local_118,"FDataflowReRouteNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb83a0;
  local_50 = FUN_146fc9f4a;
  local_78 = FUN_146fc9ffa;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b19c92 FUN_145b19c92 body=653 status=ok
// SIG undefined FUN_145b19c92(void)

void FUN_145b19c92(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowBranchNode",1);
  FUN_1446ddc76(&local_d0,"Branch",1);
  FUN_1446ddc76(&local_d8,"FlowControl",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Branch",1);
  FUN_1446ddc76(local_108,"FDataflowBranchNode",1);
  if (DAT_14c99c8b0 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c8b0 = FUN_140002ddd(FUN_1462902f7,uVar3,L"DataflowBranchNode");
  }
  FUN_1406751de(local_f8,DAT_14c99c8b0,local_108,local_100);
  if (DAT_14c99c8b0 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c8b0 = FUN_140002ddd(FUN_1462902f7,uVar3,L"DataflowBranchNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99c8b0);
  if (DAT_14c99c8b0 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c8b0 = FUN_140002ddd(FUN_1462902f7,uVar3,L"DataflowBranchNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99c8b0);
  FUN_1446ddc76(local_118,"FDataflowBranchNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb83f0;
  local_50 = FUN_146fca032;
  local_78 = FUN_146fca0e2;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b19f20 FUN_145b19f20 body=653 status=ok
// SIG undefined FUN_145b19f20(void)

void FUN_145b19f20(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowSelectNode",1);
  FUN_1446ddc76(&local_d0,"Select",1);
  FUN_1446ddc76(&local_d8,"FlowControl",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Select",1);
  FUN_1446ddc76(local_108,"FDataflowSelectNode",1);
  if (DAT_14c99c8c8 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c8c8 = FUN_140002ddd(FUN_14629038d,uVar3,L"DataflowSelectNode");
  }
  FUN_1406751de(local_f8,DAT_14c99c8c8,local_108,local_100);
  if (DAT_14c99c8c8 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c8c8 = FUN_140002ddd(FUN_14629038d,uVar3,L"DataflowSelectNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99c8c8);
  if (DAT_14c99c8c8 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c8c8 = FUN_140002ddd(FUN_14629038d,uVar3,L"DataflowSelectNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99c8c8);
  FUN_1446ddc76(local_118,"FDataflowSelectNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8430;
  local_50 = FUN_146fca11a;
  local_78 = FUN_146fca1ca;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1a1ae FUN_145b1a1ae body=653 status=ok
// SIG undefined FUN_145b1a1ae(void)

void FUN_145b1a1ae(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowPrintNode",1);
  FUN_1446ddc76(&local_d0,"Print",1);
  FUN_1446ddc76(&local_d8,&DAT_149e3b481,1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Print",1);
  FUN_1446ddc76(local_108,"FDataflowPrintNode",1);
  if (DAT_14c99c8e0 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c8e0 = FUN_140002ddd(FUN_146290423,uVar3,L"DataflowPrintNode");
  }
  FUN_1406751de(local_f8,DAT_14c99c8e0,local_108,local_100);
  if (DAT_14c99c8e0 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c8e0 = FUN_140002ddd(FUN_146290423,uVar3,L"DataflowPrintNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99c8e0);
  if (DAT_14c99c8e0 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c8e0 = FUN_140002ddd(FUN_146290423,uVar3,L"DataflowPrintNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99c8e0);
  FUN_1446ddc76(local_118,"FDataflowPrintNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8470;
  local_50 = FUN_146fca202;
  local_78 = FUN_146fca2b2;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1a43c FUN_145b1a43c body=653 status=ok
// SIG undefined FUN_145b1a43c(void)

void FUN_145b1a43c(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathAbsNode",1);
  FUN_1446ddc76(&local_d0,&DAT_149fb8500,1);
  FUN_1446ddc76(&local_d8,"Math|Scalar",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_149fb8500,1);
  FUN_1446ddc76(local_108,"FDataflowMathAbsNode",1);
  if (DAT_14c99ca48 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99ca48 = FUN_140002ddd(FUN_146290cc1,uVar3,L"DataflowMathAbsNode");
  }
  FUN_1406751de(local_f8,DAT_14c99ca48,local_108,local_100);
  if (DAT_14c99ca48 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99ca48 = FUN_140002ddd(FUN_146290cc1,uVar3,L"DataflowMathAbsNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99ca48);
  if (DAT_14c99ca48 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99ca48 = FUN_140002ddd(FUN_146290cc1,uVar3,L"DataflowMathAbsNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99ca48);
  FUN_1446ddc76(local_118,"FDataflowMathAbsNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8510;
  local_50 = FUN_146fce324;
  local_78 = FUN_146fce3fc;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1a6ca FUN_145b1a6ca body=653 status=ok
// SIG undefined FUN_145b1a6ca(void)

void FUN_145b1a6ca(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathAddNode",1);
  FUN_1446ddc76(&local_d0,&DAT_149ebc865,1);
  FUN_1446ddc76(&local_d8,"Math|Scalar",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_149ebc865,1);
  FUN_1446ddc76(local_108,"FDataflowMathAddNode",1);
  if (DAT_14c99c928 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c928 = FUN_140002ddd(FUN_1462905b9,uVar3,L"DataflowMathAddNode");
  }
  FUN_1406751de(local_f8,DAT_14c99c928,local_108,local_100);
  if (DAT_14c99c928 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c928 = FUN_140002ddd(FUN_1462905b9,uVar3,L"DataflowMathAddNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99c928);
  if (DAT_14c99c928 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c928 = FUN_140002ddd(FUN_1462905b9,uVar3,L"DataflowMathAddNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99c928);
  FUN_1446ddc76(local_118,"FDataflowMathAddNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8550;
  local_50 = FUN_146fce434;
  local_78 = FUN_146fce50c;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1a958 FUN_145b1a958 body=653 status=ok
// SIG undefined FUN_145b1a958(void)

void FUN_145b1a958(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathCeilNode",1);
  FUN_1446ddc76(&local_d0,&DAT_149fb8586,1);
  FUN_1446ddc76(&local_d8,"Math|Scalar",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_149fb8586,1);
  FUN_1446ddc76(local_108,"FDataflowMathCeilNode",1);
  if (DAT_14c99ca78 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99ca78 = FUN_140002ddd(FUN_146290ded,uVar3,L"DataflowMathCeilNode");
  }
  FUN_1406751de(local_f8,DAT_14c99ca78,local_108,local_100);
  if (DAT_14c99ca78 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99ca78 = FUN_140002ddd(FUN_146290ded,uVar3,L"DataflowMathCeilNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99ca78);
  if (DAT_14c99ca78 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99ca78 = FUN_140002ddd(FUN_146290ded,uVar3,L"DataflowMathCeilNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99ca78);
  FUN_1446ddc76(local_118,"FDataflowMathCeilNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8590;
  local_50 = FUN_146fce544;
  local_78 = FUN_146fce612;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1abe6 FUN_145b1abe6 body=653 status=ok
// SIG undefined FUN_145b1abe6(void)

void FUN_145b1abe6(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathConstantNode",1);
  FUN_1446ddc76(&local_d0,"Constants",1);
  FUN_1446ddc76(&local_d8,"Math|Scalar",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Constants",1);
  FUN_1446ddc76(local_108,"FDataflowMathConstantNode",1);
  if (DAT_14c99cb80 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cb80 = FUN_140002ddd(FUN_1462913f9,uVar3,L"DataflowMathConstantNode");
  }
  FUN_1406751de(local_f8,DAT_14c99cb80,local_108,local_100);
  if (DAT_14c99cb80 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cb80 = FUN_140002ddd(FUN_1462913f9,uVar3,L"DataflowMathConstantNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99cb80);
  if (DAT_14c99cb80 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cb80 = FUN_140002ddd(FUN_1462913f9,uVar3,L"DataflowMathConstantNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99cb80);
  FUN_1446ddc76(local_118,"FDataflowMathConstantNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb85e0;
  local_50 = FUN_146fce64a;
  local_78 = FUN_146fce6fa;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1ae74 FUN_145b1ae74 body=653 status=ok
// SIG undefined FUN_145b1ae74(void)

void FUN_145b1ae74(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathCubeNode",1);
  FUN_1446ddc76(&local_d0,&DAT_149fb8616,1);
  FUN_1446ddc76(&local_d8,"Math|Scalar",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_149fb8616,1);
  FUN_1446ddc76(local_108,"FDataflowMathCubeNode",1);
  if (DAT_14c99c9e8 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c9e8 = FUN_140002ddd(FUN_146290a69,uVar3,L"DataflowMathCubeNode");
  }
  FUN_1406751de(local_f8,DAT_14c99c9e8,local_108,local_100);
  if (DAT_14c99c9e8 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c9e8 = FUN_140002ddd(FUN_146290a69,uVar3,L"DataflowMathCubeNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99c9e8);
  if (DAT_14c99c9e8 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c9e8 = FUN_140002ddd(FUN_146290a69,uVar3,L"DataflowMathCubeNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99c9e8);
  FUN_1446ddc76(local_118,"FDataflowMathCubeNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8620;
  local_50 = FUN_146fce732;
  local_78 = FUN_146fce800;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1b102 FUN_145b1b102 body=653 status=ok
// SIG undefined FUN_145b1b102(void)

void FUN_145b1b102(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathDivideNode",1);
  FUN_1446ddc76(&local_d0,"Divide",1);
  FUN_1446ddc76(&local_d8,"Math|Scalar",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Divide",1);
  FUN_1446ddc76(local_108,"FDataflowMathDivideNode",1);
  if (DAT_14c99c970 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c970 = FUN_140002ddd(FUN_14629077b,uVar3,L"DataflowMathDivideNode");
  }
  FUN_1406751de(local_f8,DAT_14c99c970,local_108,local_100);
  if (DAT_14c99c970 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c970 = FUN_140002ddd(FUN_14629077b,uVar3,L"DataflowMathDivideNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99c970);
  if (DAT_14c99c970 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c970 = FUN_140002ddd(FUN_14629077b,uVar3,L"DataflowMathDivideNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99c970);
  FUN_1446ddc76(local_118,"FDataflowMathDivideNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8660;
  local_50 = FUN_146fce838;
  local_78 = FUN_146fce8e8;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1b390 FUN_145b1b390 body=653 status=ok
// SIG undefined FUN_145b1b390(void)

void FUN_145b1b390(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathExpNode",1);
  FUN_1446ddc76(&local_d0,&DAT_149fb8695,1);
  FUN_1446ddc76(&local_d8,"Math|Scalar",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_149fb8695,1);
  FUN_1446ddc76(local_108,"FDataflowMathExpNode",1);
  if (DAT_14c99cb20 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cb20 = FUN_140002ddd(FUN_146291207,uVar3,L"DataflowMathExpNode");
  }
  FUN_1406751de(local_f8,DAT_14c99cb20,local_108,local_100);
  if (DAT_14c99cb20 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cb20 = FUN_140002ddd(FUN_146291207,uVar3,L"DataflowMathExpNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99cb20);
  if (DAT_14c99cb20 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cb20 = FUN_140002ddd(FUN_146291207,uVar3,L"DataflowMathExpNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99cb20);
  FUN_1446ddc76(local_118,"FDataflowMathExpNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb86a0;
  local_50 = FUN_146fce920;
  local_78 = FUN_146fce9ee;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1b61e FUN_145b1b61e body=653 status=ok
// SIG undefined FUN_145b1b61e(void)

void FUN_145b1b61e(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathFloorNode",1);
  FUN_1446ddc76(&local_d0,"Floor",1);
  FUN_1446ddc76(&local_d8,"Math|Scalar",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Floor",1);
  FUN_1446ddc76(local_108,"FDataflowMathFloorNode",1);
  if (DAT_14c99ca60 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99ca60 = FUN_140002ddd(FUN_146290d57,uVar3,L"DataflowMathFloorNode");
  }
  FUN_1406751de(local_f8,DAT_14c99ca60,local_108,local_100);
  if (DAT_14c99ca60 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99ca60 = FUN_140002ddd(FUN_146290d57,uVar3,L"DataflowMathFloorNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99ca60);
  if (DAT_14c99ca60 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99ca60 = FUN_140002ddd(FUN_146290d57,uVar3,L"DataflowMathFloorNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99ca60);
  FUN_1446ddc76(local_118,"FDataflowMathFloorNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb86e0;
  local_50 = FUN_146fcea26;
  local_78 = FUN_146fceaf4;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1b8ac FUN_145b1b8ac body=653 status=ok
// SIG undefined FUN_145b1b8ac(void)

void FUN_145b1b8ac(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathFracNode",1);
  FUN_1446ddc76(&local_d0,&DAT_149fb8716,1);
  FUN_1446ddc76(&local_d8,"Math|Scalar",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_149fb8716,1);
  FUN_1446ddc76(local_108,"FDataflowMathFracNode",1);
  if (DAT_14c99cac0 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cac0 = FUN_140002ddd(FUN_146290faf,uVar3,L"DataflowMathFracNode");
  }
  FUN_1406751de(local_f8,DAT_14c99cac0,local_108,local_100);
  if (DAT_14c99cac0 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cac0 = FUN_140002ddd(FUN_146290faf,uVar3,L"DataflowMathFracNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99cac0);
  if (DAT_14c99cac0 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cac0 = FUN_140002ddd(FUN_146290faf,uVar3,L"DataflowMathFracNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99cac0);
  FUN_1446ddc76(local_118,"FDataflowMathFracNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8720;
  local_50 = FUN_146fceb2c;
  local_78 = FUN_146fcebfa;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1bb3a FUN_145b1bb3a body=653 status=ok
// SIG undefined FUN_145b1bb3a(void)

void FUN_145b1bb3a(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathInverseSquareRootNode",1);
  FUN_1446ddc76(&local_d0,"InverseSquareRoot",1);
  FUN_1446ddc76(&local_d8,"Math|Scalar",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"InverseSquareRoot",1);
  FUN_1446ddc76(local_108,"FDataflowMathInverseSquareRootNode",1);
  if (DAT_14c99ca18 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99ca18 = FUN_140002ddd(FUN_146290b95,uVar3,L"DataflowMathInverseSquareRootNode");
  }
  FUN_1406751de(local_f8,DAT_14c99ca18,local_108,local_100);
  if (DAT_14c99ca18 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99ca18 = FUN_140002ddd(FUN_146290b95,uVar3,L"DataflowMathInverseSquareRootNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99ca18);
  if (DAT_14c99ca18 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99ca18 = FUN_140002ddd(FUN_146290b95,uVar3,L"DataflowMathInverseSquareRootNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99ca18);
  FUN_1446ddc76(local_118,"FDataflowMathInverseSquareRootNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8780;
  local_50 = FUN_146fcec32;
  local_78 = FUN_146fcece2;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1bdc8 FUN_145b1bdc8 body=653 status=ok
// SIG undefined FUN_145b1bdc8(void)

void FUN_145b1bdc8(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathLogNode",1);
  FUN_1446ddc76(&local_d0,&DAT_149fb87b5,1);
  FUN_1446ddc76(&local_d8,"Math|Scalar",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_149fb87b5,1);
  FUN_1446ddc76(local_108,"FDataflowMathLogNode",1);
  if (DAT_14c99cb08 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cb08 = FUN_140002ddd(FUN_146291171,uVar3,L"DataflowMathLogNode");
  }
  FUN_1406751de(local_f8,DAT_14c99cb08,local_108,local_100);
  if (DAT_14c99cb08 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cb08 = FUN_140002ddd(FUN_146291171,uVar3,L"DataflowMathLogNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99cb08);
  if (DAT_14c99cb08 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cb08 = FUN_140002ddd(FUN_146291171,uVar3,L"DataflowMathLogNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99cb08);
  FUN_1446ddc76(local_118,"FDataflowMathLogNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb87c0;
  local_50 = FUN_146fced1a;
  local_78 = FUN_146fcede8;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1c056 FUN_145b1c056 body=653 status=ok
// SIG undefined FUN_145b1c056(void)

void FUN_145b1c056(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathLogXNode",1);
  FUN_1446ddc76(&local_d0,&DAT_149fb87f6,1);
  FUN_1446ddc76(&local_d8,"Math|Scalar",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_149fb87f6,1);
  FUN_1446ddc76(local_108,"FDataflowMathLogXNode",1);
  if (DAT_14c99caf0 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99caf0 = FUN_140002ddd(FUN_1462910db,uVar3,L"DataflowMathLogXNode");
  }
  FUN_1406751de(local_f8,DAT_14c99caf0,local_108,local_100);
  if (DAT_14c99caf0 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99caf0 = FUN_140002ddd(FUN_1462910db,uVar3,L"DataflowMathLogXNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99caf0);
  if (DAT_14c99caf0 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99caf0 = FUN_140002ddd(FUN_1462910db,uVar3,L"DataflowMathLogXNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99caf0);
  FUN_1446ddc76(local_118,"FDataflowMathLogXNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8800;
  local_50 = FUN_146fcee20;
  local_78 = FUN_146fceed0;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1c2e4 FUN_145b1c2e4 body=653 status=ok
// SIG undefined FUN_145b1c2e4(void)

void FUN_145b1c2e4(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathMaximumNode",1);
  FUN_1446ddc76(&local_d0,"Maximum",1);
  FUN_1446ddc76(&local_d8,"Math|Scalar",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Maximum",1);
  FUN_1446ddc76(local_108,"FDataflowMathMaximumNode",1);
  if (DAT_14c99c9a0 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c9a0 = FUN_140002ddd(FUN_1462908a7,uVar3,L"DataflowMathMaximumNode");
  }
  FUN_1406751de(local_f8,DAT_14c99c9a0,local_108,local_100);
  if (DAT_14c99c9a0 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c9a0 = FUN_140002ddd(FUN_1462908a7,uVar3,L"DataflowMathMaximumNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99c9a0);
  if (DAT_14c99c9a0 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c9a0 = FUN_140002ddd(FUN_1462908a7,uVar3,L"DataflowMathMaximumNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99c9a0);
  FUN_1446ddc76(local_118,"FDataflowMathMaximumNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8840;
  local_50 = FUN_146fcef08;
  local_78 = FUN_146fcefe0;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1c572 FUN_145b1c572 body=653 status=ok
// SIG undefined FUN_145b1c572(void)

void FUN_145b1c572(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathMinimumNode",1);
  FUN_1446ddc76(&local_d0,"Minimum",1);
  FUN_1446ddc76(&local_d8,"Math|Scalar",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Minimum",1);
  FUN_1446ddc76(local_108,"FDataflowMathMinimumNode",1);
  if (DAT_14c99c988 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c988 = FUN_140002ddd(FUN_146290811,uVar3,L"DataflowMathMinimumNode");
  }
  FUN_1406751de(local_f8,DAT_14c99c988,local_108,local_100);
  if (DAT_14c99c988 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c988 = FUN_140002ddd(FUN_146290811,uVar3,L"DataflowMathMinimumNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99c988);
  if (DAT_14c99c988 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c988 = FUN_140002ddd(FUN_146290811,uVar3,L"DataflowMathMinimumNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99c988);
  FUN_1446ddc76(local_118,"FDataflowMathMinimumNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8880;
  local_50 = FUN_146fcf018;
  local_78 = FUN_146fcf0f0;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1c800 FUN_145b1c800 body=653 status=ok
// SIG undefined FUN_145b1c800(void)

void FUN_145b1c800(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathMultiplyNode",1);
  FUN_1446ddc76(&local_d0,"Multiply",1);
  FUN_1446ddc76(&local_d8,"Math|Scalar",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Multiply",1);
  FUN_1446ddc76(local_108,"FDataflowMathMultiplyNode",1);
  if (DAT_14c99c958 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c958 = FUN_140002ddd(FUN_1462906e5,uVar3,L"DataflowMathMultiplyNode");
  }
  FUN_1406751de(local_f8,DAT_14c99c958,local_108,local_100);
  if (DAT_14c99c958 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c958 = FUN_140002ddd(FUN_1462906e5,uVar3,L"DataflowMathMultiplyNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99c958);
  if (DAT_14c99c958 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c958 = FUN_140002ddd(FUN_1462906e5,uVar3,L"DataflowMathMultiplyNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99c958);
  FUN_1446ddc76(local_118,"FDataflowMathMultiplyNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb88c0;
  local_50 = FUN_146fcf128;
  local_78 = FUN_146fcf200;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1ca8e FUN_145b1ca8e body=653 status=ok
// SIG undefined FUN_145b1ca8e(void)

void FUN_145b1ca8e(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathNegateNode",1);
  FUN_1446ddc76(&local_d0,"Negate",1);
  FUN_1446ddc76(&local_d8,"Math|Scalar",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Negate",1);
  FUN_1446ddc76(local_108,"FDataflowMathNegateNode",1);
  if (DAT_14c99ca30 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99ca30 = FUN_140002ddd(FUN_146290c2b,uVar3,L"DataflowMathNegateNode");
  }
  FUN_1406751de(local_f8,DAT_14c99ca30,local_108,local_100);
  if (DAT_14c99ca30 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99ca30 = FUN_140002ddd(FUN_146290c2b,uVar3,L"DataflowMathNegateNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99ca30);
  if (DAT_14c99ca30 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99ca30 = FUN_140002ddd(FUN_146290c2b,uVar3,L"DataflowMathNegateNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99ca30);
  FUN_1446ddc76(local_118,"FDataflowMathNegateNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8900;
  local_50 = FUN_146fcf238;
  local_78 = FUN_146fcf310;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1cd1c FUN_145b1cd1c body=653 status=ok
// SIG undefined FUN_145b1cd1c(void)

void FUN_145b1cd1c(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathOneMinusNode",1);
  FUN_1446ddc76(&local_d0,"OneMinus",1);
  FUN_1446ddc76(&local_d8,"Math|Scalar",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"OneMinus",1);
  FUN_1446ddc76(local_108,"FDataflowMathOneMinusNode",1);
  if (DAT_14c99cb50 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cb50 = FUN_140002ddd(FUN_146291333,uVar3,L"DataflowMathOneMinusNode");
  }
  FUN_1406751de(local_f8,DAT_14c99cb50,local_108,local_100);
  if (DAT_14c99cb50 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cb50 = FUN_140002ddd(FUN_146291333,uVar3,L"DataflowMathOneMinusNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99cb50);
  if (DAT_14c99cb50 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cb50 = FUN_140002ddd(FUN_146291333,uVar3,L"DataflowMathOneMinusNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99cb50);
  FUN_1446ddc76(local_118,"FDataflowMathOneMinusNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8950;
  local_50 = FUN_146fcf348;
  local_78 = FUN_146fcf416;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1cfaa FUN_145b1cfaa body=653 status=ok
// SIG undefined FUN_145b1cfaa(void)

void FUN_145b1cfaa(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathPowNode",1);
  FUN_1446ddc76(&local_d0,&DAT_149fb8985,1);
  FUN_1446ddc76(&local_d8,"Math|Scalar",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_149fb8985,1);
  FUN_1446ddc76(local_108,"FDataflowMathPowNode",1);
  if (DAT_14c99cad8 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cad8 = FUN_140002ddd(FUN_146291045,uVar3,L"DataflowMathPowNode");
  }
  FUN_1406751de(local_f8,DAT_14c99cad8,local_108,local_100);
  if (DAT_14c99cad8 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cad8 = FUN_140002ddd(FUN_146291045,uVar3,L"DataflowMathPowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99cad8);
  if (DAT_14c99cad8 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cad8 = FUN_140002ddd(FUN_146291045,uVar3,L"DataflowMathPowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99cad8);
  FUN_1446ddc76(local_118,"FDataflowMathPowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8990;
  local_50 = FUN_146fcf44e;
  local_78 = FUN_146fcf526;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1d238 FUN_145b1d238 body=653 status=ok
// SIG undefined FUN_145b1d238(void)

void FUN_145b1d238(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathReciprocalNode",1);
  FUN_1446ddc76(&local_d0,"Reciprocal",1);
  FUN_1446ddc76(&local_d8,"Math|Scalar",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Reciprocal",1);
  FUN_1446ddc76(local_108,"FDataflowMathReciprocalNode",1);
  if (DAT_14c99c9b8 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c9b8 = FUN_140002ddd(FUN_14629093d,uVar3,L"DataflowMathReciprocalNode");
  }
  FUN_1406751de(local_f8,DAT_14c99c9b8,local_108,local_100);
  if (DAT_14c99c9b8 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c9b8 = FUN_140002ddd(FUN_14629093d,uVar3,L"DataflowMathReciprocalNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99c9b8);
  if (DAT_14c99c9b8 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c9b8 = FUN_140002ddd(FUN_14629093d,uVar3,L"DataflowMathReciprocalNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99c9b8);
  FUN_1446ddc76(local_118,"FDataflowMathReciprocalNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb89e0;
  local_50 = FUN_146fcf55e;
  local_78 = FUN_146fcf60e;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1d4c6 FUN_145b1d4c6 body=653 status=ok
// SIG undefined FUN_145b1d4c6(void)

void FUN_145b1d4c6(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathRoundNode",1);
  FUN_1446ddc76(&local_d0,"Round",1);
  FUN_1446ddc76(&local_d8,"Math|Scalar",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Round",1);
  FUN_1446ddc76(local_108,"FDataflowMathRoundNode",1);
  if (DAT_14c99ca90 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99ca90 = FUN_140002ddd(FUN_146290e83,uVar3,L"DataflowMathRoundNode");
  }
  FUN_1406751de(local_f8,DAT_14c99ca90,local_108,local_100);
  if (DAT_14c99ca90 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99ca90 = FUN_140002ddd(FUN_146290e83,uVar3,L"DataflowMathRoundNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99ca90);
  if (DAT_14c99ca90 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99ca90 = FUN_140002ddd(FUN_146290e83,uVar3,L"DataflowMathRoundNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99ca90);
  FUN_1446ddc76(local_118,"FDataflowMathRoundNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8a20;
  local_50 = FUN_146fcf646;
  local_78 = FUN_146fcf714;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1d754 FUN_145b1d754 body=653 status=ok
// SIG undefined FUN_145b1d754(void)

void FUN_145b1d754(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathSignNode",1);
  FUN_1446ddc76(&local_d0,&DAT_149fb8a56,1);
  FUN_1446ddc76(&local_d8,"Math|Scalar",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_149fb8a56,1);
  FUN_1446ddc76(local_108,"FDataflowMathSignNode",1);
  if (DAT_14c99cb38 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cb38 = FUN_140002ddd(FUN_14629129d,uVar3,L"DataflowMathSignNode");
  }
  FUN_1406751de(local_f8,DAT_14c99cb38,local_108,local_100);
  if (DAT_14c99cb38 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cb38 = FUN_140002ddd(FUN_14629129d,uVar3,L"DataflowMathSignNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99cb38);
  if (DAT_14c99cb38 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cb38 = FUN_140002ddd(FUN_14629129d,uVar3,L"DataflowMathSignNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99cb38);
  FUN_1446ddc76(local_118,"FDataflowMathSignNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8a60;
  local_50 = FUN_146fcf74c;
  local_78 = FUN_146fcf81a;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1d9e2 FUN_145b1d9e2 body=653 status=ok
// SIG undefined FUN_145b1d9e2(void)

void FUN_145b1d9e2(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathSquareNode",1);
  FUN_1446ddc76(&local_d0,"Square",1);
  FUN_1446ddc76(&local_d8,"Math|Scalar",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Square",1);
  FUN_1446ddc76(local_108,"FDataflowMathSquareNode",1);
  if (DAT_14c99c9d0 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c9d0 = FUN_140002ddd(FUN_1462909d3,uVar3,L"DataflowMathSquareNode");
  }
  FUN_1406751de(local_f8,DAT_14c99c9d0,local_108,local_100);
  if (DAT_14c99c9d0 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c9d0 = FUN_140002ddd(FUN_1462909d3,uVar3,L"DataflowMathSquareNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99c9d0);
  if (DAT_14c99c9d0 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c9d0 = FUN_140002ddd(FUN_1462909d3,uVar3,L"DataflowMathSquareNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99c9d0);
  FUN_1446ddc76(local_118,"FDataflowMathSquareNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8aa0;
  local_50 = FUN_146fcf852;
  local_78 = FUN_146fcf920;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1dc70 FUN_145b1dc70 body=653 status=ok
// SIG undefined FUN_145b1dc70(void)

void FUN_145b1dc70(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathSquareRootNode",1);
  FUN_1446ddc76(&local_d0,"SquareRoot",1);
  FUN_1446ddc76(&local_d8,"Math|Scalar",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"SquareRoot",1);
  FUN_1446ddc76(local_108,"FDataflowMathSquareRootNode",1);
  if (DAT_14c99ca00 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99ca00 = FUN_140002ddd(FUN_146290aff,uVar3,L"DataflowMathSquareRootNode");
  }
  FUN_1406751de(local_f8,DAT_14c99ca00,local_108,local_100);
  if (DAT_14c99ca00 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99ca00 = FUN_140002ddd(FUN_146290aff,uVar3,L"DataflowMathSquareRootNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99ca00);
  if (DAT_14c99ca00 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99ca00 = FUN_140002ddd(FUN_146290aff,uVar3,L"DataflowMathSquareRootNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99ca00);
  FUN_1446ddc76(local_118,"FDataflowMathSquareRootNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8af0;
  local_50 = FUN_146fcf958;
  local_78 = FUN_146fcfa26;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1defe FUN_145b1defe body=653 status=ok
// SIG undefined FUN_145b1defe(void)

void FUN_145b1defe(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathSubtractNode",1);
  FUN_1446ddc76(&local_d0,"Subtract",1);
  FUN_1446ddc76(&local_d8,"Math|Scalar",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Subtract",1);
  FUN_1446ddc76(local_108,"FDataflowMathSubtractNode",1);
  if (DAT_14c99c940 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c940 = FUN_140002ddd(FUN_14629064f,uVar3,L"DataflowMathSubtractNode");
  }
  FUN_1406751de(local_f8,DAT_14c99c940,local_108,local_100);
  if (DAT_14c99c940 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c940 = FUN_140002ddd(FUN_14629064f,uVar3,L"DataflowMathSubtractNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99c940);
  if (DAT_14c99c940 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99c940 = FUN_140002ddd(FUN_14629064f,uVar3,L"DataflowMathSubtractNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99c940);
  FUN_1446ddc76(local_118,"FDataflowMathSubtractNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8b30;
  local_50 = FUN_146fcfa5e;
  local_78 = FUN_146fcfb36;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1e18c FUN_145b1e18c body=653 status=ok
// SIG undefined FUN_145b1e18c(void)

void FUN_145b1e18c(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathTruncNode",1);
  FUN_1446ddc76(&local_d0,"Trunc",1);
  FUN_1446ddc76(&local_d8,"Math|Scalar",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Trunc",1);
  FUN_1446ddc76(local_108,"FDataflowMathTruncNode",1);
  if (DAT_14c99caa8 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99caa8 = FUN_140002ddd(FUN_146290f19,uVar3,L"DataflowMathTruncNode");
  }
  FUN_1406751de(local_f8,DAT_14c99caa8,local_108,local_100);
  if (DAT_14c99caa8 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99caa8 = FUN_140002ddd(FUN_146290f19,uVar3,L"DataflowMathTruncNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99caa8);
  if (DAT_14c99caa8 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99caa8 = FUN_140002ddd(FUN_146290f19,uVar3,L"DataflowMathTruncNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99caa8);
  FUN_1446ddc76(local_118,"FDataflowMathTruncNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8b70;
  local_50 = FUN_146fcfb6e;
  local_78 = FUN_146fcfc3c;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1e41a FUN_145b1e41a body=653 status=ok
// SIG undefined FUN_145b1e41a(void)

void FUN_145b1e41a(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathCosNode",1);
  FUN_1446ddc76(&local_d0,&DAT_149fb8ba5,1);
  FUN_1446ddc76(&local_d8,"Math|Trig",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_149fb8ba5,1);
  FUN_1446ddc76(local_108,"FDataflowMathCosNode",1);
  if (DAT_14c99cbb0 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cbb0 = FUN_140002ddd(FUN_146291525,uVar3,L"DataflowMathCosNode");
  }
  FUN_1406751de(local_f8,DAT_14c99cbb0,local_108,local_100);
  if (DAT_14c99cbb0 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cbb0 = FUN_140002ddd(FUN_146291525,uVar3,L"DataflowMathCosNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99cbb0);
  if (DAT_14c99cbb0 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cbb0 = FUN_140002ddd(FUN_146291525,uVar3,L"DataflowMathCosNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99cbb0);
  FUN_1446ddc76(local_118,"FDataflowMathCosNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8bc0;
  local_50 = FUN_146fcfc74;
  local_78 = FUN_146fcfd42;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1e6a8 FUN_145b1e6a8 body=653 status=ok
// SIG undefined FUN_145b1e6a8(void)

void FUN_145b1e6a8(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathSinNode",1);
  FUN_1446ddc76(&local_d0,&DAT_149fb8bf5,1);
  FUN_1446ddc76(&local_d8,"Math|Trig",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_149fb8bf5,1);
  FUN_1446ddc76(local_108,"FDataflowMathSinNode",1);
  if (DAT_14c99cb98 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cb98 = FUN_140002ddd(FUN_14629148f,uVar3,L"DataflowMathSinNode");
  }
  FUN_1406751de(local_f8,DAT_14c99cb98,local_108,local_100);
  if (DAT_14c99cb98 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cb98 = FUN_140002ddd(FUN_14629148f,uVar3,L"DataflowMathSinNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99cb98);
  if (DAT_14c99cb98 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cb98 = FUN_140002ddd(FUN_14629148f,uVar3,L"DataflowMathSinNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99cb98);
  FUN_1446ddc76(local_118,"FDataflowMathSinNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8c00;
  local_50 = FUN_146fcfd7a;
  local_78 = FUN_146fcfe48;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1e936 FUN_145b1e936 body=653 status=ok
// SIG undefined FUN_145b1e936(void)

void FUN_145b1e936(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathTanNode",1);
  FUN_1446ddc76(&local_d0,&DAT_149fb8c35,1);
  FUN_1446ddc76(&local_d8,"Math|Trig",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_149fb8c35,1);
  FUN_1446ddc76(local_108,"FDataflowMathTanNode",1);
  if (DAT_14c99cbc8 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cbc8 = FUN_140002ddd(FUN_1462915bb,uVar3,L"DataflowMathTanNode");
  }
  FUN_1406751de(local_f8,DAT_14c99cbc8,local_108,local_100);
  if (DAT_14c99cbc8 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cbc8 = FUN_140002ddd(FUN_1462915bb,uVar3,L"DataflowMathTanNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99cbc8);
  if (DAT_14c99cbc8 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cbc8 = FUN_140002ddd(FUN_1462915bb,uVar3,L"DataflowMathTanNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99cbc8);
  FUN_1446ddc76(local_118,"FDataflowMathTanNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8c40;
  local_50 = FUN_146fcfe80;
  local_78 = FUN_146fcff4e;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1ebc4 FUN_145b1ebc4 body=653 status=ok
// SIG undefined FUN_145b1ebc4(void)

void FUN_145b1ebc4(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathArcCosNode",1);
  FUN_1446ddc76(&local_d0,"ArcCos",1);
  FUN_1446ddc76(&local_d8,"Math|Trig",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"ArcCos",1);
  FUN_1446ddc76(local_108,"FDataflowMathArcCosNode",1);
  if (DAT_14c99cbf8 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cbf8 = FUN_140002ddd(FUN_1462916e7,uVar3,L"DataflowMathArcCosNode");
  }
  FUN_1406751de(local_f8,DAT_14c99cbf8,local_108,local_100);
  if (DAT_14c99cbf8 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cbf8 = FUN_140002ddd(FUN_1462916e7,uVar3,L"DataflowMathArcCosNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99cbf8);
  if (DAT_14c99cbf8 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cbf8 = FUN_140002ddd(FUN_1462916e7,uVar3,L"DataflowMathArcCosNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99cbf8);
  FUN_1446ddc76(local_118,"FDataflowMathArcCosNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8c80;
  local_50 = FUN_146fcff86;
  local_78 = FUN_146fd0054;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1ee52 FUN_145b1ee52 body=653 status=ok
// SIG undefined FUN_145b1ee52(void)

void FUN_145b1ee52(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathArcSinNode",1);
  FUN_1446ddc76(&local_d0,"ArcSin",1);
  FUN_1446ddc76(&local_d8,"Math|Trig",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"ArcSin",1);
  FUN_1446ddc76(local_108,"FDataflowMathArcSinNode",1);
  if (DAT_14c99cbe0 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cbe0 = FUN_140002ddd(FUN_146291651,uVar3,L"DataflowMathArcSinNode");
  }
  FUN_1406751de(local_f8,DAT_14c99cbe0,local_108,local_100);
  if (DAT_14c99cbe0 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cbe0 = FUN_140002ddd(FUN_146291651,uVar3,L"DataflowMathArcSinNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99cbe0);
  if (DAT_14c99cbe0 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cbe0 = FUN_140002ddd(FUN_146291651,uVar3,L"DataflowMathArcSinNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99cbe0);
  FUN_1446ddc76(local_118,"FDataflowMathArcSinNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8cc0;
  local_50 = FUN_146fd008c;
  local_78 = FUN_146fd015a;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1f0e0 FUN_145b1f0e0 body=653 status=ok
// SIG undefined FUN_145b1f0e0(void)

void FUN_145b1f0e0(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathArcTanNode",1);
  FUN_1446ddc76(&local_d0,"ArcTan",1);
  FUN_1446ddc76(&local_d8,"Math|Trig",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"ArcTan",1);
  FUN_1446ddc76(local_108,"FDataflowMathArcTanNode",1);
  if (DAT_14c99cc10 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cc10 = FUN_140002ddd(FUN_14629177d,uVar3,L"DataflowMathArcTanNode");
  }
  FUN_1406751de(local_f8,DAT_14c99cc10,local_108,local_100);
  if (DAT_14c99cc10 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cc10 = FUN_140002ddd(FUN_14629177d,uVar3,L"DataflowMathArcTanNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99cc10);
  if (DAT_14c99cc10 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cc10 = FUN_140002ddd(FUN_14629177d,uVar3,L"DataflowMathArcTanNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99cc10);
  FUN_1446ddc76(local_118,"FDataflowMathArcTanNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8d00;
  local_50 = FUN_146fd0192;
  local_78 = FUN_146fd0260;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1f36e FUN_145b1f36e body=653 status=ok
// SIG undefined FUN_145b1f36e(void)

void FUN_145b1f36e(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathArcTan2Node",1);
  FUN_1446ddc76(&local_d0,"ArcTan2",1);
  FUN_1446ddc76(&local_d8,"Math|Trig",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"ArcTan2",1);
  FUN_1446ddc76(local_108,"FDataflowMathArcTan2Node",1);
  if (DAT_14c99cc28 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cc28 = FUN_140002ddd(FUN_146291813,uVar3,L"DataflowMathArcTan2Node");
  }
  FUN_1406751de(local_f8,DAT_14c99cc28,local_108,local_100);
  if (DAT_14c99cc28 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cc28 = FUN_140002ddd(FUN_146291813,uVar3,L"DataflowMathArcTan2Node");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99cc28);
  if (DAT_14c99cc28 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cc28 = FUN_140002ddd(FUN_146291813,uVar3,L"DataflowMathArcTan2Node");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99cc28);
  FUN_1446ddc76(local_118,"FDataflowMathArcTan2Node",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8d50;
  local_50 = FUN_146fd0298;
  local_78 = FUN_146fd0370;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1f5fc FUN_145b1f5fc body=653 status=ok
// SIG undefined FUN_145b1f5fc(void)

void FUN_145b1f5fc(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathDegToRadNode",1);
  FUN_1446ddc76(&local_d0,"DegToRad",1);
  FUN_1446ddc76(&local_d8,"Math|Trig",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"DegToRad",1);
  FUN_1446ddc76(local_108,"FDataflowMathDegToRadNode",1);
  if (DAT_14c99cc40 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cc40 = FUN_140002ddd(FUN_1462918a9,uVar3,L"DataflowMathDegToRadNode");
  }
  FUN_1406751de(local_f8,DAT_14c99cc40,local_108,local_100);
  if (DAT_14c99cc40 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cc40 = FUN_140002ddd(FUN_1462918a9,uVar3,L"DataflowMathDegToRadNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99cc40);
  if (DAT_14c99cc40 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cc40 = FUN_140002ddd(FUN_1462918a9,uVar3,L"DataflowMathDegToRadNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99cc40);
  FUN_1446ddc76(local_118,"FDataflowMathDegToRadNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8da0;
  local_50 = FUN_146fd03a8;
  local_78 = FUN_146fd0476;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1f88a FUN_145b1f88a body=653 status=ok
// SIG undefined FUN_145b1f88a(void)

void FUN_145b1f88a(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDataflowMathRadToDegNode",1);
  FUN_1446ddc76(&local_d0,"RadToDeg",1);
  FUN_1446ddc76(&local_d8,"Math|Trig",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"RadToDeg",1);
  FUN_1446ddc76(local_108,"FDataflowMathRadToDegNode",1);
  if (DAT_14c99cc58 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cc58 = FUN_140002ddd(FUN_14629193f,uVar3,L"DataflowMathRadToDegNode");
  }
  FUN_1406751de(local_f8,DAT_14c99cc58,local_108,local_100);
  if (DAT_14c99cc58 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cc58 = FUN_140002ddd(FUN_14629193f,uVar3,L"DataflowMathRadToDegNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14c99cc58);
  if (DAT_14c99cc58 == 0) {
    uVar3 = FUN_140d02f86();
    DAT_14c99cc58 = FUN_140002ddd(FUN_14629193f,uVar3,L"DataflowMathRadToDegNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14c99cc58);
  FUN_1446ddc76(local_118,"FDataflowMathRadToDegNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_149fb8df0;
  local_50 = FUN_146fd04ae;
  local_78 = FUN_146fd057c;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1fb18 FUN_145b1fb18 body=37 status=ok
// SIG undefined FUN_145b1fb18(void)

void FUN_145b1fb18(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x378);
  FUN_145b1fb3e(param_2);
  return;
}



// FUNCTION 145b1fb3e FUN_145b1fb3e body=479 status=ok
// SIG undefined FUN_145b1fb3e(void)

undefined8 * FUN_145b1fb3e(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *param_1 = &PTR_FUN_14ac708c0;
  param_1[8] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[9] = &PTR_FUN_14a1a0a60;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0xc] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0xd] = uVar1;
  param_1[0xe] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  param_1[0x14] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_1[0x12] = DAT_14c8464f8;
  param_1[0x13] = uVar1;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x1a] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x18] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x19] = uVar1;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1c] = &PTR_FUN_14a1a0a60;
  param_1[0x21] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x1f] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x20] = uVar1;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  uVar1 = DAT_14c846500;
  param_1[0x25] = DAT_14c8464f8;
  param_1[0x26] = uVar1;
  param_1[0x27] = DAT_14c846508;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2d] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x2b) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x164) = uVar4;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  FUN_1414c243c(param_1 + 0x2f);
  param_1[0x5c] = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  param_1[0x5b] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x5e) = 0x447a0000;
  FUN_140ef4e54(param_1 + 0x5f);
  param_1[0x68] = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  param_1[0x67] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x6c] = 0;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  param_1[0x6b] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  return param_1;
}



// FUNCTION 145b1fd1e FUN_145b1fd1e body=38 status=ok
// SIG undefined FUN_145b1fd1e(void)

undefined8 FUN_145b1fd1e(undefined8 param_1,int param_2)

{
  FUN_1414c25c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b1fd44 FUN_145b1fd44 body=144 status=ok
// SIG undefined FUN_145b1fd44(void)

code * FUN_145b1fd44(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145b1fdd4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"VolumeShadowingShaderParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FVolumeShadowingShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xc000000159;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462cf76c;
}



// FUNCTION 145b1fdd4 FUN_145b1fdd4 body=265 status=ok
// SIG undefined FUN_145b1fdd4(void)

undefined * FUN_145b1fdd4(void)

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
              0x110) < DAT_14c9e1e20) {
    FUN_144b3d300(&DAT_14c9e1e20);
    if (DAT_14c9e1e20 == -1) {
      FUN_145b1fede(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FVolumeShadowingShaderParameters";
      local_38 = 0;
      local_50 = 0x2c0;
      local_58 = 0x10;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e1da0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ca0e99);
      _Init_thread_footer(&DAT_14c9e1e20);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9e1da0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b1fede FUN_145b1fede body=226 status=ok
// SIG undefined FUN_145b1fede(void)

longlong * FUN_145b1fede(longlong *param_1)

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
  pcVar13 = FUN_1462cf7fc;
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



// FUNCTION 145b1ffc6 FUN_145b1ffc6 body=132 status=ok
// SIG undefined FUN_145b1ffc6(void)

undefined1 * FUN_145b1ffc6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TranslatedWorldToShadowMatrix";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145b1ffc2;
}



// FUNCTION 145b2004a FUN_145b2004a body=138 status=ok
// SIG undefined FUN_145b2004a(void)

code * FUN_145b2004a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowmapMinMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000012;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145b1ffc6;
}



// FUNCTION 145b200d4 FUN_145b200d4 body=144 status=ok
// SIG undefined FUN_145b200d4(void)

code * FUN_145b200d4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145b20164();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ReflectionsCompositeParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"LumenReflections::FCompositeParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000000ae;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1471c62fe;
}



// FUNCTION 145b20164 FUN_145b20164 body=265 status=ok
// SIG undefined FUN_145b20164(void)

undefined * FUN_145b20164(void)

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
              0x110) < DAT_14c9e72e0) {
    FUN_144b3d300(&DAT_14c9e72e0);
    if (DAT_14c9e72e0 == -1) {
      FUN_145b2026e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FCompositeParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x1f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e7260,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ccd928);
      _Init_thread_footer(&DAT_14c9e72e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9e7260;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2026e FUN_145b2026e body=226 status=ok
// SIG undefined FUN_145b2026e(void)

longlong * FUN_145b2026e(longlong *param_1)

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
  pcVar13 = FUN_1462d3630;
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



// FUNCTION 145b20356 FUN_145b20356 body=132 status=ok
// SIG undefined FUN_145b20356(void)

undefined1 * FUN_145b20356(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxRoughnessToTrace";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145b20352;
}



// FUNCTION 145b203da FUN_145b203da body=138 status=ok
// SIG undefined FUN_145b203da(void)

code * FUN_145b203da(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxRoughnessToTraceForFoliage";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145b20356;
}



// FUNCTION 145b20464 FUN_145b20464 body=517 status=ok
// SIG undefined FUN_145b20464(void)

void FUN_145b20464(undefined8 param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = (longlong *)FUN_14001cc68(0x120);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba3efd0;
  plVar6 = plVar5 + 2;
  memset(plVar6,0,0x110);
  FUN_145b20dba(plVar6);
  FUN_145b2066a(plVar6,param_2);
  if (plVar5 == (longlong *)0x0) {
    *(undefined8 *)(param_4 + 0x100) = 0x10;
    plVar6 = *(longlong **)(param_4 + 0x108);
    if (plVar6 == (longlong *)0x0) goto LAB_145b20510;
    *(undefined8 *)(param_4 + 0x108) = 0;
LAB_145b205fd:
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_145b20510;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(longlong **)(param_4 + 0x100) = plVar6;
    plVar6 = *(longlong **)(param_4 + 0x108);
    if (plVar5 != plVar6) {
      *(longlong **)(param_4 + 0x108) = plVar5;
      if (plVar6 == (longlong *)0x0) goto LAB_145b20510;
      goto LAB_145b205fd;
    }
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_145b20510;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar6 = plVar5;
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_145b20510:
  FUN_1414c2ee8(param_1,param_3 + 0x18,param_4);
  bVar4 = *(byte *)(param_3 + 0x10);
  local_68[0] = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  FUN_140c3a2ac(local_68);
  local_68[0] = 1;
  local_60 = CONCAT44(local_60._4_4_,(uint)bVar4);
  local_48 = 0;
  local_44 = 0xffffffff;
  FUN_1446f470e(&local_70,L"CUSTOMSEARCHINT1",1);
  FUN_145b2079c(param_4 + 0x28,local_70,local_68);
  FUN_140c3a2ac(local_68);
  *(undefined4 *)(param_4 + 0x30) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(param_4 + 0x34) = 0;
  *(int *)(param_4 + 0x114) = *(int *)(param_3 + 8) - *(int *)(param_3 + 0x28);
  *(undefined4 *)(param_4 + 0x110) = 0;
  if (plVar5 != (longlong *)0x0) {
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
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2066a FUN_145b2066a body=131 status=ok
// SIG undefined FUN_145b2066a(void)

void FUN_145b2066a(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong *local_30;
  code *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 0xd8) = param_2;
  local_48[0] = 0;
  local_48[1] = 0;
  local_20 = &local_30;
  local_28 = FUN_143efb77c;
  local_30 = local_48;
  bifrost::messaging::getRoomJID(param_2);
  FUN_145b206ee(param_1,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b206ee FUN_145b206ee body=173 status=ok
// SIG undefined FUN_145b206ee(void)

void FUN_145b206ee(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446f470e(&local_50,L"SHIFT",1);
  FUN_1414c2d8e(&local_48,param_2,local_50);
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  plVar4 = *(longlong **)(param_1 + 0xe8);
  *(ulonglong *)(param_1 + 0xe0) = CONCAT44(uStack_44,local_48);
  *(ulonglong *)(param_1 + 0xe8) = CONCAT44(uStack_3c,uStack_40);
  local_38._0_4_ = (undefined4)uVar3;
  local_38._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_30._0_4_ = SUB84(plVar4,0);
  uStack_30._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
  local_48 = (undefined4)local_38;
  uStack_44 = local_38._4_4_;
  uStack_40 = (undefined4)uStack_30;
  uStack_3c = uStack_30._4_4_;
  local_38 = uVar3;
  uStack_30 = plVar4;
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2079c FUN_145b2079c body=280 status=ok
// SIG undefined FUN_145b2079c(void)

void FUN_145b2079c(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar5 = (uint)param_2 & 0xffff;
    lVar4 = param_1 + 0x70;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x78);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x80) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar3 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x38);
      do {
        lVar1 = lVar4 + (longlong)iVar3 * 0x38;
        if (*(longlong *)(lVar4 + (longlong)iVar3 * 0x38) == param_2) {
          if (lVar1 + 8 != 0 && lVar1 != 0) {
            FUN_1489b74b6(lVar1 + 8,param_3);
            *(undefined1 *)(lVar1 + 0x28) = *(undefined1 *)(param_3 + 0x20);
            goto LAB_145b207e8;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x30);
      } while (iVar3 != -1);
    }
  }
  local_30 = &local_38;
  local_28 = param_3;
  FUN_145b208b6((longlong *)(param_1 + 0x38),local_1c,&local_30,0);
LAB_145b207e8:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145b208b6 FUN_145b208b6 body=368 status=ok
// SIG undefined FUN_145b208b6(void)

undefined4 *
FUN_145b208b6(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145b20af2(param_1,local_48);
  lVar6 = param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  FUN_140c3a11c(local_40 + 1,lVar6);
  local_40[5] = *(undefined8 *)(lVar6 + 0x20);
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = param_4;
  cVar2 = FUN_145b20a28(param_1,uVar7,local_40);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x34) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_145b20bd6(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b20a28 FUN_145b20a28 body=201 status=ok
// SIG undefined FUN_145b20a28(void)

void FUN_145b20a28(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 uVar13;
  longlong *plVar14;
  int iVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar15 * 0x38);
        if (*(longlong *)(*param_1 + (longlong)iVar15 * 0x38) == *param_3) {
          FUN_140c3a2ac(puVar1 + 2);
          lVar8 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar9 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar10 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar11 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar12 = param_3[5];
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x2c);
          puVar1[8] = (int)param_3[4];
          puVar1[9] = uVar6;
          puVar1[10] = (int)lVar12;
          puVar1[0xb] = uVar7;
          puVar1[4] = (int)lVar10;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar11;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar8;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar9;
          puVar1[3] = uVar3;
          FUN_1489bc290(param_1,*param_4,1);
          *param_4 = iVar15;
          uVar13 = 1;
          break;
        }
        iVar15 = puVar1[0xc];
        uVar13 = 0;
      } while (iVar15 != -1);
      goto LAB_145b20a56;
    }
  }
  uVar13 = 0;
LAB_145b20a56:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar13;
  }
  return;
}



// FUNCTION 145b20af2 FUN_145b20af2 body=227 status=ok
// SIG undefined FUN_145b20af2(void)

int * FUN_145b20af2(longlong *param_1,int *param_2)

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



// FUNCTION 145b20bd6 FUN_145b20bd6 body=482 status=ok
// SIG undefined FUN_145b20bd6(void)

void FUN_145b20bd6(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 145b20dba FUN_145b20dba body=194 status=ok
// SIG undefined FUN_145b20dba(void)

undefined8 * FUN_145b20dba(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14ba3d850;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
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
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_145b20e7c();
  param_1[0x1c] = DAT_14cbf4b68;
  lVar2 = DAT_14cbf4b70;
  param_1[0x1d] = DAT_14cbf4b70;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)((longlong)param_1 + 0xf9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x101) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  return param_1;
}



// FUNCTION 145b20e7c FUN_145b20e7c body=176 status=ok
// SIG undefined FUN_145b20e7c(void)

void FUN_145b20e7c(void)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf4b78) {
    FUN_144b3d300(&DAT_14cbf4b78);
    if (DAT_14cbf4b78 == -1) {
      local_28[0] = 0;
      local_28[1] = 0;
      FUN_145b20f2e(&DAT_14cbf4b68,local_28,DAT_14cbf4978);
      if (local_28[0] != 0) {
        FUN_1400020a8();
      }
      atexit(FUN_14438be56);
      _Init_thread_footer(&DAT_14cbf4b78);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b20f2e FUN_145b20f2e body=245 status=ok
// SIG undefined FUN_145b20f2e(void)

undefined8 * FUN_145b20f2e(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_14b4ce010;
  puVar3[3] = *param_2;
  *param_2 = 0;
  *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)puVar3 + 0x24) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  puVar3[5] = param_3;
  *param_1 = puVar3;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b4ce060;
  plVar4[2] = (longlong)puVar3;
  param_1[1] = plVar4;
  if (puVar3 != (undefined8 *)0x0) {
    if (plVar4 == (longlong *)0x0) {
      puVar3[1] = puVar3;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      puVar3[1] = puVar3;
      if ((longlong *)puVar3[2] != plVar4) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar2 = (longlong *)puVar3[2];
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
        puVar3[2] = plVar4;
      }
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  return param_1;
}



// FUNCTION 145b21024 FUN_145b21024 body=29 status=ok
// SIG undefined FUN_145b21024(void)

undefined8 FUN_145b21024(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0xb0))();
  (**(code **)(*plVar1 + 0x30))(plVar1);
  return 0;
}



// FUNCTION 145b21042 FUN_145b21042 body=72 status=ok
// SIG undefined FUN_145b21042(void)

void FUN_145b21042(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = FUN_145b2108c();
  FUN_145b21116(uVar1,local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2108c FUN_145b2108c body=138 status=ok
// SIG undefined FUN_145b2108c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145b2108c(void)

{
  undefined8 *puVar1;
  
  if (DAT_14c9a1ab0 == 0) {
    puVar1 = &DAT_14c9a18b8;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c9a18d0) {
      FUN_144b3d300(&DAT_14c9a18d0);
      if (DAT_14c9a18d0 == -1) {
        DAT_14c9a18b8 = 0;
        _DAT_14c9a18c0 = 0;
        _DAT_14c9a18c8 = 2;
        atexit(FUN_142b27e18);
        _Init_thread_footer(&DAT_14c9a18d0);
      }
    }
  }
  else {
    puVar1 = (undefined8 *)(DAT_14c9a1ab0 + 0x28);
  }
  return puVar1;
}



// FUNCTION 145b21116 FUN_145b21116 body=244 status=ok
// SIG undefined FUN_145b21116(void)

undefined8 FUN_145b21116(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_FUN_14a1791a0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_1470a130a;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2120c FUN_145b2120c body=64 status=ok
// SIG undefined FUN_145b2120c(void)

void FUN_145b2120c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a299f30;
  FUN_144725486();
  *param_1 = &PTR_FUN_14a299f60;
  FUN_1414c31c2(param_1 + 5);
  FUN_1414c31c2(param_1 + 2);
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 145b21254 FUN_145b21254 body=161 status=ok
// SIG undefined FUN_145b21254(void)

undefined8 * FUN_145b21254(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1400ead26(param_1,uVar1);
  *param_1 = &PTR_FUN_14a411280;
  param_1[5] = &PTR_FUN_14a411860;
  param_1[6] = &PTR_LAB_14a4118a0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  FUN_145b212f6(param_1 + 0x60);
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xf1 | 6;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3e800000;
  return param_1;
}



// FUNCTION 145b212f6 FUN_145b212f6 body=135 status=ok
// SIG undefined FUN_145b212f6(void)

void FUN_145b212f6(undefined8 *param_1)

{
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = DAT_14caa99a8;
  *(undefined1 *)((longlong)param_1 + 0xd1) = DAT_14c760f6c;
  *(undefined1 *)((longlong)param_1 + 0xd2) = 0;
  return;
}



// FUNCTION 145b21388 FUN_145b21388 body=65 status=ok
// SIG undefined FUN_145b21388(void)

undefined8 * FUN_145b21388(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 3;
  *param_1 = &PTR_FUN_14a5df870;
  param_1[5] = &PTR_LAB_14a5dfb40;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 145b213d4 FUN_145b213d4 body=65 status=ok
// SIG undefined FUN_145b213d4(void)

undefined8 * FUN_145b213d4(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 3;
  *param_1 = &PTR_FUN_14a5e0bd0;
  param_1[5] = &PTR_LAB_14a5e0eb0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 145b21420 FUN_145b21420 body=65 status=ok
// SIG undefined FUN_145b21420(void)

undefined8 * FUN_145b21420(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 3;
  *param_1 = &PTR_FUN_14a5e1fd0;
  param_1[5] = &PTR_LAB_14a5e22b0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 145b2146c FUN_145b2146c body=65 status=ok
// SIG undefined FUN_145b2146c(void)

undefined8 * FUN_145b2146c(undefined8 *param_1)

{
  FUN_1459a5684();
  *param_1 = &PTR_FUN_14a6d6220;
  param_1[0xc] = 0;
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xf0 | 4;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) | 0xc;
  return param_1;
}



// FUNCTION 145b214b8 FUN_145b214b8 body=65 status=ok
// SIG undefined FUN_145b214b8(void)

undefined8 * FUN_145b214b8(undefined8 *param_1)

{
  FUN_1459a5724();
  *param_1 = &PTR_FUN_14a6e6ca0;
  param_1[0xc] = 0;
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xf0 | 4;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) | 0xc;
  return param_1;
}



// FUNCTION 145b21504 FUN_145b21504 body=65 status=ok
// SIG undefined FUN_145b21504(void)

undefined8 * FUN_145b21504(undefined8 *param_1)

{
  FUN_1459a56d4();
  *param_1 = &PTR_FUN_14a6e7140;
  param_1[0xc] = 0;
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xf0 | 4;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) | 0xc;
  return param_1;
}



// FUNCTION 145b2154a FUN_145b2154a body=71 status=ok
// SIG undefined FUN_145b2154a(void)

void FUN_145b2154a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e0d752(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab1bb70;
  *(undefined1 *)(puVar1 + 0x7a) = 0;
  puVar1[0x72] = 0;
  puVar1[0x73] = 0;
  FUN_1403121a6(puVar1,0);
  FUN_1405e47c6(puVar1,0);
  return;
}



// FUNCTION 145b21592 FUN_145b21592 body=71 status=ok
// SIG undefined FUN_145b21592(void)

undefined8 * FUN_145b21592(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14abcbda0;
  FUN_1401f9f5c(param_1 + 8);
  FUN_1401f9f5c(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b215da thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 145b215e0 FUN_145b215e0 body=40 status=ok
// SIG undefined FUN_145b215e0(void)

undefined8 FUN_145b215e0(undefined8 param_1,int param_2)

{
  FUN_145b21608();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b21608 FUN_145b21608 body=180 status=ok
// SIG undefined FUN_145b21608(void)

void FUN_145b21608(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae53a30;
  param_1[5] = &PTR_FUN_14ae53fd0;
  param_1[0x2d] = &PTR_FUN_14ae54010;
  FUN_1401b9920(param_1[0x280],*(undefined4 *)(param_1 + 0x281));
  if (param_1[0x280] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x27c],*(undefined4 *)(param_1 + 0x27d));
  if (param_1[0x27c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x278] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x276);
  FUN_1414c321a(param_1);
  return;
}



// FUNCTION 145b216c4 FUN_145b216c4 body=68 status=ok
// SIG undefined FUN_145b216c4(void)

undefined8 * FUN_145b216c4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_145894f8e(param_1,uVar1);
  *param_1 = &PTR_FUN_14b08dac0;
  param_1[10] = &PTR_FUN_14b08dda0;
  param_1[0x16] = &PTR_FUN_14b08ddc0;
  return param_1;
}



// FUNCTION 145b21708 FUN_145b21708 body=66 status=ok
// SIG undefined FUN_145b21708(void)

undefined8 FUN_145b21708(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined4 *)(param_1 + 8);
  uStack_14 = *(undefined4 *)(param_1 + 0xc);
  uStack_10 = *(undefined4 *)(param_1 + 0x10);
  uStack_c = *(undefined4 *)(param_1 + 0x14);
  (**(code **)(param_1 + 0x20))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2174b FUN_145b2174b body=198 status=ok
// SIG undefined FUN_145b2174b(void)

void FUN_145b2174b(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 8) != 0) {
    cVar3 = FUN_144729dda();
    if ((cVar3 != '\0') && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
      FUN_140b38f58(uVar4,&local_68);
      if (local_68 != 0) {
        local_48 = 0;
        local_38 = &PTR_LAB_14b3e7310;
        local_30 = local_68;
        local_58 = FUN_143c9a01c;
        FUN_145774382(uVar4);
      }
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)local_60 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_60 + 0x10))(local_60);
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b21812 FUN_145b21812 body=84 status=ok
// SIG undefined FUN_145b21812(void)

void FUN_145b21812(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_145b21868(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b21868 FUN_145b21868 body=67 status=ok
// SIG undefined FUN_145b21868(void)

void FUN_145b21868(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[0xc]);
  if (*(char *)(param_2 + 0x19) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x18]);
    return;
  }
  return;
}



// FUNCTION 145b218b6 FUN_145b218b6 body=162 status=ok
// SIG undefined FUN_145b218b6(void)

void FUN_145b218b6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b427ba0;
  param_1[4] = &PTR_FUN_14b427be0;
  if (param_1[0x18] != 0) {
    plVar3 = param_1 + 0x1c;
    if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x1a];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
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
  *param_1 = &PTR_FUN_14b427bf0;
  param_1[4] = &PTR_LAB_14b427c30;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2f66a(param_1);
  return;
}



// FUNCTION 145b21958 FUN_145b21958 body=63 status=ok
// SIG undefined FUN_145b21958(void)

void FUN_145b21958(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145b21998(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1404540f6(param_1);
    return;
  }
  FUN_1489c1a38(param_1);
  FUN_145b21998(param_1);
  return;
}



// FUNCTION 145b21998 FUN_145b21998 body=89 status=ok
// SIG undefined FUN_145b21998(void)

void FUN_145b21998(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 145b219f2 FUN_145b219f2 body=9 status=ok
// SIG undefined FUN_145b219f2(void)

void FUN_145b219f2(longlong param_1)

{
  FUN_145b219fc(param_1 + 0x10);
  return;
}



// FUNCTION 145b219fc FUN_145b219fc body=105 status=ok
// SIG undefined FUN_145b219fc(void)

void FUN_145b219fc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4f3110;
  param_1[4] = &PTR_FUN_14b4f3138;
  FUN_1449db362(param_1 + 0x2e);
  FUN_14124efea(param_1 + 9);
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
  FUN_1411ebb9a(param_1);
  return;
}



// FUNCTION 145b21a66 FUN_145b21a66 body=9 status=ok
// SIG undefined FUN_145b21a66(void)

void FUN_145b21a66(longlong param_1)

{
  FUN_145b21a70(param_1 + 0x10);
  return;
}



// FUNCTION 145b21a70 FUN_145b21a70 body=100 status=ok
// SIG undefined FUN_145b21a70(void)

void FUN_145b21a70(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b506540;
  plVar3 = (longlong *)param_1[0x4f];
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
  FUN_1449db362(param_1 + 0x4c);
  FUN_1449db362(param_1 + 0x4a);
  FUN_1414c34ce(param_1);
  return;
}



// FUNCTION 145b21ad4 FUN_145b21ad4 body=63 status=ok
// SIG undefined FUN_145b21ad4(void)

void FUN_145b21ad4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145b21b14(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b7e2e10;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  return;
}



// FUNCTION 145b21b14 FUN_145b21b14 body=89 status=ok
// SIG undefined FUN_145b21b14(void)

undefined8 * FUN_145b21b14(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14b1ed4f0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 5;
  return param_1;
}



// FUNCTION 145b21b6e FUN_145b21b6e body=71 status=ok
// SIG undefined FUN_145b21b6e(void)

undefined8 * FUN_145b21b6e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b927d00;
  FUN_144a2da94(param_1 + 0xf);
  FUN_144a2da94(param_1 + 8);
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b21bb6 thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 145b21bbc FUN_145b21bbc body=152 status=ok
// SIG undefined FUN_145b21bbc(void)

void FUN_145b21bbc(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xe8);
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x6c) = 0;
  param_2[0xf] = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0xcc) = 0;
  param_2[0x1b] = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  return;
}



// FUNCTION 145b21c56 FUN_145b21c56 body=56 status=ok
// SIG undefined FUN_145b21c56(void)

void FUN_145b21c56(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x000145b21c83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145b21c98 FUN_145b21c98 body=87 status=ok
// SIG undefined FUN_145b21c98(void)

void FUN_145b21c98(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_145aea6a4(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_1457f6ad1(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145b21cf0 FUN_145b21cf0 body=147 status=ok
// SIG undefined FUN_145b21cf0(void)

void FUN_145b21cf0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xa0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xa0)) {
      uVar5 = uVar4 / 0xa0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xa0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145b21d84 FUN_145b21d84 body=85 status=ok
// SIG undefined FUN_145b21d84(void)

void FUN_145b21d84(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x210))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,1);
    FUN_145b21dd9(plVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x000145b21dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x58))(plVar1);
    return;
  }
  return;
}



// FUNCTION 145b21dd9 FUN_145b21dd9 body=181 status=ok
// SIG undefined FUN_145b21dd9(void)

void FUN_145b21dd9(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  cVar2 = (**(code **)(*param_1 + 0x158))
                    (param_1,param_2,FUN_148e7941b,FUN_148e79475,&LAB_148e79470,&LAB_148e79408);
  if (cVar2 == '\0') {
    (**(code **)(*param_1 + 0x160))(param_1,(longlong)(int)param_2[1]);
    if (0 < (int)param_2[1]) {
      lVar4 = 0;
      iVar3 = 0;
      do {
        lVar1 = *param_2;
        (**(code **)(*param_1 + 0x28))(param_1);
        FUN_141257f3d(param_1,lVar1 + lVar4);
        (**(code **)(*param_1 + 0x48))(param_1,lVar1 + lVar4);
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + 0x80;
      } while (iVar3 < (int)param_2[1]);
    }
                    /* WARNING: Could not recover jumptable at 0x000145b21e7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x168))(param_1);
    return;
  }
  return;
}



// FUNCTION 145b21e8e FUN_145b21e8e body=71 status=ok
// SIG undefined FUN_145b21e8e(void)

void FUN_145b21e8e(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x40))();
  if ((longlong)(int)param_1[6] != 0) {
    lVar3 = param_1[5];
    lVar2 = (longlong)(int)param_1[6] * 0x18;
    do {
      FUN_1494497ce(uVar1,lVar3);
      lVar3 = lVar3 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 145b21ed6 FUN_145b21ed6 body=5 status=ok
// SIG undefined FUN_145b21ed6(void)

longlong FUN_145b21ed6(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 145b21eec FUN_145b21eec body=154 status=ok
// SIG undefined FUN_145b21eec(void)

undefined8 * FUN_145b21eec(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_140ea0e34();
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *param_1 = &PTR_FUN_14a502b90;
  param_1[5] = &PTR_FUN_14a502eb0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  FUN_1414c3a06(param_1 + 0x34);
  param_1[0x15f] = 0;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  lVar1 = FUN_140bcc93a();
  FUN_1414c3ed0(param_1 + 0x34,lVar1 + 0x370);
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x15e) = 0;
  *(undefined1 *)((longlong)param_1 + 0xaf4) = 1;
  return param_1;
}



// FUNCTION 145b21f86 FUN_145b21f86 body=154 status=ok
// SIG undefined FUN_145b21f86(void)

bool FUN_145b21f86(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 145b22030 FUN_145b22030 body=250 status=ok
// SIG undefined FUN_145b22030(void)

void FUN_145b22030(longlong *param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if (lVar3 != 0) {
    iVar2 = FUN_14490d72a(lVar3);
    if (iVar2 == 3) goto LAB_145b22074;
  }
  if (*(char *)((longlong)param_1 + 0xa7) == '\x01') {
    plVar4 = (longlong *)FUN_1414dac37();
    bVar1 = (**(code **)(*plVar4 + 0x48))(plVar4);
    LOCK();
    *(uint *)((longlong)param_1 + 0xec) = (uint)bVar1;
    UNLOCK();
  }
LAB_145b22074:
  *(undefined1 *)((longlong)param_1 + 0xa7) = 0;
  LOCK();
  *(undefined4 *)(param_1 + 0x1d) = 1;
  UNLOCK();
  if (param_2 == 0) {
    local_38 = 0;
    uStack_30 = 0;
    uStack_30._0_4_ = 0;
  }
  else {
    FUN_1410908dc(param_2,&local_38,1);
  }
  iVar2 = (int)uStack_30 + -1;
  if ((int)uStack_30 == 0) {
    iVar2 = 0;
  }
  FUN_1402980a2(param_1 + 0x1b,local_38,iVar2);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((char)param_1[0x21] == '\0') {
    (**(code **)(*param_1 + 0x2d0))(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2212c FUN_145b2212c body=40 status=ok
// SIG undefined FUN_145b2212c(void)

undefined8 FUN_145b2212c(undefined8 param_1,int param_2)

{
  FUN_145b22154();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b22154 FUN_145b22154 body=161 status=ok
// SIG undefined FUN_145b22154(void)

void FUN_145b22154(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4c6af0;
  FUN_145b221f5(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_145b22242(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145b2226a(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145b221f5 FUN_145b221f5 body=77 status=ok
// SIG undefined FUN_145b221f5(void)

void FUN_145b221f5(longlong param_1,int param_2)

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



// FUNCTION 145b22242 FUN_145b22242 body=40 status=ok
// SIG undefined FUN_145b22242(void)

void FUN_145b22242(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1458da114(param_1);
    param_1 = param_1 + 0x58;
  }
  return;
}



// FUNCTION 145b2226a FUN_145b2226a body=63 status=ok
// SIG undefined FUN_145b2226a(void)

void FUN_145b2226a(longlong param_1,int param_2)

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



// FUNCTION 145b222aa FUN_145b222aa body=20 status=ok
// SIG undefined FUN_145b222aa(void)

ulonglong FUN_145b222aa(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x2a0))();
  return uVar1 ^ 1;
}



// FUNCTION 145b222be FUN_145b222be body=322 status=ok
// SIG undefined FUN_145b222be(void)

void FUN_145b222be(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 8);
  lVar6 = *(longlong *)(lVar2 + 1000);
  if (lVar6 == 0) {
    uVar5 = FUN_1406eea5e();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(lVar2 + 1000) = lVar6;
  }
  if (*(longlong *)(lVar2 + 0x3f0) == 0) {
    if ((lVar6 == 0) || (*(longlong *)(lVar2 + 0x3e0) == 0)) goto LAB_145b2233d;
    plVar3 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
      *(undefined8 *)(lVar2 + 0x3f0) = 0;
      goto LAB_145b2233d;
    }
    uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar2 + 0x3e0));
    *(longlong *)(lVar2 + 0x3f0) = lVar6;
    if (lVar6 == 0) goto LAB_145b2233d;
  }
  uVar5 = FUN_14479d2ce(param_1 + 0x290);
  FUN_1412cbf9c(&local_38,uVar5);
  if (local_38 != 0) {
    FUN_1414c5044(local_38,*(longlong *)(param_1 + 8) + 0x3e0);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
LAB_145b2233d:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145b22402 FUN_145b22402 body=40 status=ok
// SIG undefined FUN_145b22402(void)

undefined8 FUN_145b22402(undefined8 param_1,int param_2)

{
  FUN_145b2242a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b2242a FUN_145b2242a body=225 status=ok
// SIG undefined FUN_145b2242a(void)

void FUN_145b2242a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5f0670;
  param_1[5] = &PTR_FUN_14b5f0910;
  param_1[6] = &PTR_LAB_14b5f0930;
  FUN_145b2250b(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145b2250b FUN_145b2250b body=40 status=ok
// SIG undefined FUN_145b2250b(void)

void FUN_145b2250b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14583d64e(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 145b22534 FUN_145b22534 body=226 status=ok
// SIG undefined FUN_145b22534(void)

longlong * FUN_145b22534(longlong *param_1)

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
  pcVar13 = FUN_1463040f0;
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



// FUNCTION 145b22618 FUN_145b22618 body=132 status=ok
// SIG undefined FUN_145b22618(void)

undefined1 * FUN_145b22618(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PositionHighAndRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x323;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0x155;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472cd16e;
}



// FUNCTION 145b2269c FUN_145b2269c body=136 status=ok
// SIG undefined FUN_145b2269c(void)

code * FUN_145b2269c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PositionLow";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x155000000325;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0x155;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145b22618;
}



// FUNCTION 145b22724 FUN_145b22724 body=138 status=ok
// SIG undefined FUN_145b22724(void)

code * FUN_145b22724(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CaptureProperties";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2aa000000327;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0x155;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145b2269c;
}



// FUNCTION 145b227ae FUN_145b227ae body=99 status=ok
// SIG undefined FUN_145b227ae(void)

void FUN_145b227ae(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1414c5176();
  if (param_2 != 0) {
    lVar1 = FUN_145b2289a(param_2);
    if (lVar1 != 0) {
      lVar2 = FUN_145b22812(param_1);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x448) != 0)) {
        FUN_140d895f4(lVar1 + 0xfb0,lVar2 + 0x448);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145b22812 FUN_145b22812 body=78 status=ok
// SIG undefined FUN_145b22812(void)

longlong * FUN_145b22812(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_145b22860();
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



// FUNCTION 145b22860 FUN_145b22860 body=57 status=ok
// SIG undefined FUN_145b22860(void)

void FUN_145b22860(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaee20 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaee20 = FUN_140002ddd(FUN_1465edad4,uVar1,L"OakSpawnerBehaviorMod");
  }
  return;
}



// FUNCTION 145b2289a FUN_145b2289a body=102 status=ok
// SIG undefined FUN_145b2289a(void)

void FUN_145b2289a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1407fbe78();
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



// FUNCTION 145b22902 FUN_145b22902 body=21 status=ok
// SIG undefined FUN_145b22902(void)

undefined8 FUN_145b22902(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145b22918 FUN_145b22918 body=188 status=ok
// SIG undefined FUN_145b22918(void)

void FUN_145b22918(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    FUN_1410908dc(param_2,local_58,0);
    FUN_14094a6a4(&local_48,local_58,0);
    iVar1 = local_40 + -1;
    if (local_40 == 0) {
      iVar1 = 0;
    }
    FUN_1446f82e2(&local_38,iVar1,local_48,1);
    (**(code **)(*param_1 + 0x18))(param_1,local_38,param_2);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b229d6 FUN_145b229d6 body=169 status=ok
// SIG undefined FUN_145b229d6(void)

bool FUN_145b229d6(longlong param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 145b22a80 FUN_145b22a80 body=40 status=ok
// SIG undefined FUN_145b22a80(void)

undefined8 FUN_145b22a80(undefined8 param_1,int param_2)

{
  FUN_145b22aa8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b22aa8 FUN_145b22aa8 body=59 status=ok
// SIG undefined FUN_145b22aa8(void)

void FUN_145b22aa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5875b0;
  FUN_145b22ae3(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_14582be54(param_1);
  return;
}



// FUNCTION 145b22ae3 FUN_145b22ae3 body=54 status=ok
// SIG undefined FUN_145b22ae3(void)

void FUN_145b22ae3(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 145b22b24 FUN_145b22b24 body=142 status=ok
// SIG undefined FUN_145b22b24(void)

undefined8 * FUN_145b22b24(undefined8 *param_1)

{
  FUN_14480568a();
  *param_1 = &PTR_FUN_14a76fbe0;
  param_1[5] = &PTR_FUN_14a7705e0;
  param_1[6] = &PTR_LAB_14a770620;
  param_1[0x55] = &PTR_FUN_14a770670;
  param_1[0x56] = &PTR_FUN_14a7706f0;
  param_1[0x57] = &PTR_FUN_14a770700;
  param_1[0xc4] = 0;
  FUN_1400ea934(param_1,DAT_14cad0f30,1);
  *(byte *)((longlong)param_1 + 0x1f9) = *(byte *)((longlong)param_1 + 0x1f9) | 8;
  *(undefined4 *)(param_1 + 0xc5) = 0x3f800000;
  return param_1;
}



// FUNCTION 145b22bb2 FUN_145b22bb2 body=40 status=ok
// SIG undefined FUN_145b22bb2(void)

undefined8 FUN_145b22bb2(undefined8 param_1,int param_2)

{
  FUN_145b22bda();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b22bda FUN_145b22bda body=68 status=ok
// SIG undefined FUN_145b22bda(void)

void FUN_145b22bda(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a9eaca0;
  FUN_145b22c1e(param_1[0x72],*(undefined4 *)(param_1 + 0x73));
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145b22c1e FUN_145b22c1e body=45 status=ok
// SIG undefined FUN_145b22c1e(void)

void FUN_145b22c1e(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 145b22c4c FUN_145b22c4c body=40 status=ok
// SIG undefined FUN_145b22c4c(void)

undefined8 FUN_145b22c4c(undefined8 param_1,int param_2)

{
  FUN_145b22c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b22c74 FUN_145b22c74 body=84 status=ok
// SIG undefined FUN_145b22c74(void)

void FUN_145b22c74(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14ba84890;
  puVar1 = (undefined8 *)param_1[7];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[7] = 0;
  *param_1 = &PTR_FUN_14ba84140;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145b22cc8 FUN_145b22cc8 body=29 status=ok
// SIG undefined FUN_145b22cc8(void)

undefined8 FUN_145b22cc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b22ce6 FUN_145b22ce6 body=40 status=ok
// SIG undefined FUN_145b22ce6(void)

undefined8 FUN_145b22ce6(undefined8 param_1,int param_2)

{
  FUN_145b22d0e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b22d0e FUN_145b22d0e body=65 status=ok
// SIG undefined FUN_145b22d0e(void)

void FUN_145b22d0e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc6d330;
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_145b22d50(param_1);
  return;
}



// FUNCTION 145b22d50 FUN_145b22d50 body=48 status=ok
// SIG undefined FUN_145b22d50(void)

void FUN_145b22d50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc7e840;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_140fed55c(param_1);
  return;
}



// FUNCTION 145b22d80 FUN_145b22d80 body=1285 status=ok
// SIG undefined FUN_145b22d80(void)

void FUN_145b22d80(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a1;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  uint local_84;
  undefined4 local_80;
  longlong local_7c;
  undefined8 local_74;
  undefined2 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = *(longlong *)(param_1 + 0xa24);
  local_c8 = L"Lumen.SceneAlbedo";
  local_c0 = param_4;
  uVar4 = FUN_145b2329a(param_2,lVar1,*(undefined1 *)(param_1 + 0xa2c),1);
  *(undefined8 *)(param_3 + 0x28) = uVar4;
  local_c8 = L"Lumen.SceneOpacity";
  uVar4 = FUN_145b2329a(param_2,lVar1,*(undefined1 *)(param_1 + 0xa2c),2);
  *(undefined8 *)(param_3 + 0x30) = uVar4;
  local_c8 = L"Lumen.SceneDepth";
  uVar4 = FUN_145b2329a(param_2,lVar1,*(undefined1 *)(param_1 + 0xa2c),0);
  *(undefined8 *)(param_3 + 0x48) = uVar4;
  local_c8 = L"Lumen.SceneNormal";
  uVar4 = FUN_145b2329a(param_2,lVar1,*(undefined1 *)(param_1 + 0xa2c),3);
  *(undefined8 *)(param_3 + 0x38) = uVar4;
  local_c8 = L"Lumen.SceneEmissive";
  uVar4 = FUN_145b2329a(param_2,lVar1,*(undefined1 *)(param_1 + 0xa2c),4);
  *(undefined8 *)(param_3 + 0x40) = uVar4;
  local_88 = DAT_14ca83a40;
  local_98 = DAT_14ca83a30;
  uStack_94 = DAT_14ca83a34;
  uStack_90 = CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
  uVar2 = FUN_145b23286();
  local_a0 = 0x20009;
  local_84 = -1 << ((byte)DAT_14c760da4 & 0x1f) ^ 0xffffffff;
  local_80 = 0;
  local_74 = CONCAT17(uVar2,0x10100010001);
  local_6c = 0xff00;
  local_7c = lVar1;
  uVar4 = FUN_14472bf7a(param_2,&local_a0,L"Lumen.SceneDirectLighting",0);
  *(undefined8 *)(param_3 + 0x50) = uVar4;
  local_58 = DAT_14ca83a40;
  local_68._0_4_ = DAT_14ca83a30;
  local_68._4_4_ = DAT_14ca83a34;
  uStack_60 = DAT_14ca83a38;
  uStack_5c = DAT_14ca83a3c;
  uVar2 = FUN_1414c57e4();
  FUN_1414c57d6(param_1,&local_b0);
  local_a0 = 0x20009;
  local_98 = (undefined4)local_68;
  uStack_94 = local_68._4_4_;
  uStack_90 = CONCAT44(uStack_5c,uStack_60);
  local_88 = local_58;
  local_84 = -1 << ((byte)DAT_14c760da4 & 0x1f) ^ 0xffffffff;
  local_80 = 0;
  local_7c = local_b0;
  local_74 = CONCAT17(uVar2,0x10100010001);
  local_6c = 0xff00;
  uVar4 = FUN_14472bf7a(param_2,&local_a0,L"Lumen.SceneIndirectLighting",0);
  *(undefined8 *)(param_3 + 0x58) = uVar4;
  local_58 = DAT_14ca83a40;
  local_68._0_4_ = DAT_14ca83a30;
  local_68._4_4_ = DAT_14ca83a34;
  uStack_60 = DAT_14ca83a38;
  uStack_5c = DAT_14ca83a3c;
  FUN_1414c57d6(param_1,&local_b8);
  local_a0 = 0x20009;
  local_88 = local_58;
  local_98 = (undefined4)local_68;
  uStack_94 = local_68._4_4_;
  uStack_90 = CONCAT44(uStack_5c,uStack_60);
  local_84 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_80 = 0;
  local_7c = local_b8;
  local_74 = 0x4700010100010001;
  local_6c = 0xff00;
  uVar4 = FUN_14472bf7a(param_2,&local_a0,L"Lumen.SceneNumFramesAccumulatedAtlas",0);
  *(undefined8 *)(param_3 + 0x60) = uVar4;
  local_a0 = 0x20009;
  local_98 = DAT_14ca83a30;
  uStack_94 = DAT_14ca83a34;
  uStack_90 = CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
  local_88 = DAT_14ca83a40;
  local_84 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_80 = 0;
  local_74 = CONCAT17((*(int *)(DAT_14c9ecd08 + 4) == 0) << 4,0x10100010001) | 0xa00000000000000;
  local_6c = 0xff00;
  local_7c = lVar1;
  uVar4 = FUN_14472bf7a(param_2,&local_a0,L"Lumen.SceneFinalLighting",0);
  uVar6 = (uint)lVar1;
  uVar7 = uVar6 + 7;
  if (-1 < (int)uVar6) {
    uVar7 = uVar6;
  }
  uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar5 = uVar6 + 7;
  if (-1 < lVar1) {
    uVar5 = uVar6;
  }
  *(undefined8 *)(param_3 + 0x68) = uVar4;
  uVar6 = (uVar5 >> 3) * (uVar7 >> 3) * 8;
  local_c8 = (wchar_t *)&local_a1;
  local_68 = L"Lumen.TileShadowDownsampleFactorAtlas";
  uVar7 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar7 = DAT_14ca84e48;
  }
  local_a1 = 0;
  local_98 = 0x4109;
  if (DAT_14ca84e48 <= uVar6) {
    uVar6 = DAT_14ca84e48;
  }
  uStack_90 = 0;
  local_a0 = CONCAT44(uVar6 + (uVar6 == 0),uVar7 + (uVar7 == 0));
  uVar4 = FUN_144738de6(param_2 + 0x188,param_2 + 0x70,&local_68,&local_a0);
  *(undefined8 *)(param_3 + 0x70) = uVar4;
  cVar3 = FUN_1414c57f8(local_c0);
  if (cVar3 != '\0') {
    local_88 = DAT_14ca83a40;
    local_98 = DAT_14ca83a30;
    uStack_94 = DAT_14ca83a34;
    uStack_90 = CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
    local_a0 = 0x20009;
    local_84 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_80 = 0;
    local_74 = 0xa00010100010001;
    local_6c = 0xff00;
    local_7c = lVar1;
    uVar4 = FUN_14472bf7a(param_2,&local_a0,
                          L"Lumen.SceneDirectLighting.DiffuseLightingAndSecondMomentHistory",0);
    *(undefined8 *)(param_3 + 0x78) = uVar4;
    local_88 = DAT_14ca83a40;
    local_98 = DAT_14ca83a30;
    uStack_94 = DAT_14ca83a34;
    uStack_90 = CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
    local_a0 = 0x20009;
    local_84 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_80 = 0;
    local_74 = 0x300010100010001;
    local_6c = 0xff00;
    local_7c = lVar1;
    uVar4 = FUN_14472bf7a(param_2,&local_a0,L"Lumen.SceneDirectLighting.NumFramesAccumulatedHistory"
                          ,0);
    *(undefined8 *)(param_3 + 0x80) = uVar4;
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b23286 FUN_145b23286 body=20 status=ok
// SIG undefined FUN_145b23286(void)

ulonglong FUN_145b23286(void)

{
  return CONCAT71((int7)((ulonglong)DAT_14c9ecd08 >> 8),(*(int *)(DAT_14c9ecd08 + 4) == 0) << 4) |
         10;
}



// FUNCTION 145b2329a FUN_145b2329a body=268 status=ok
// SIG undefined FUN_145b2329a(void)

void FUN_145b2329a(undefined8 param_1,undefined8 param_2,char param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined2 local_28;
  undefined1 local_26;
  char local_25;
  undefined2 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_1414c583a(param_4);
  local_25 = *(char *)(lVar1 + 9);
  bVar2 = local_25 != '\0';
  local_58 = (ulonglong)(bVar2 && param_3 != '\0') ^ 0x4000009;
  if (!bVar2 || param_3 == '\0') {
    local_25 = (char)*(undefined4 *)(lVar1 + 8);
  }
  local_40 = DAT_14ca85098;
  local_50 = DAT_14ca85088;
  uStack_4c = DAT_14ca8508c;
  uStack_48 = DAT_14ca85090;
  uStack_44 = DAT_14ca85094;
  local_3c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_38 = 0;
  local_2c = 0x10001;
  local_28 = 0x101;
  local_26 = 0;
  local_24 = 0xff00;
  if (param_3 == '\x01' && bVar2) {
    local_58 = local_58 | 0x20000;
    local_24 = CONCAT11(0xff,*(undefined1 *)(lVar1 + 10));
  }
  local_34 = param_2;
  FUN_14472bf7a(param_1,&local_58,param_5,0);
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145b233b6 FUN_145b233b6 body=40 status=ok
// SIG undefined FUN_145b233b6(void)

undefined8 FUN_145b233b6(undefined8 param_1,int param_2)

{
  FUN_145b233de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b233de FUN_145b233de body=305 status=ok
// SIG undefined FUN_145b233de(void)

void FUN_145b233de(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14b774fa0;
  if (param_1[0xfb] != 0) {
    FUN_1400020a8();
  }
  FUN_141003128(param_1 + 0xd6);
  lVar1 = 0x5a0;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)((longlong)param_1 + lVar1 + -0x10) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0xd8;
  } while (lVar1 != 0x3f0);
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x57) = 0;
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  FUN_145b23510(param_1 + 0x4e);
  param_1[0x43] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x46) = 0;
  if (*(int *)((longlong)param_1 + 0x234) != 0) {
    FUN_140115c12(param_1 + 0x45,0);
  }
  param_1[0x44] = 0;
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145b23510 FUN_145b23510 body=55 status=ok
// SIG undefined FUN_145b23510(void)

void FUN_145b23510(longlong *param_1)

{
  FUN_145b23548(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145b23548 FUN_145b23548 body=121 status=ok
// SIG undefined FUN_145b23548(void)

void FUN_145b23548(longlong param_1,int param_2)

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



// FUNCTION 145b235c2 FUN_145b235c2 body=1243 status=ok
// SIG undefined FUN_145b235c2(void)

void FUN_145b235c2(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_5a8 [32];
  undefined4 local_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined8 local_578;
  undefined4 local_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 local_520;
  undefined4 local_518;
  undefined8 local_514;
  undefined4 local_50c;
  undefined8 local_500;
  undefined4 local_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4d0;
  undefined4 local_4c8;
  undefined8 local_4c4;
  undefined4 local_4bc;
  undefined8 local_4b0;
  undefined4 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_470;
  undefined4 local_468;
  undefined8 local_464;
  undefined4 local_45c;
  undefined8 local_450;
  undefined4 local_448;
  undefined1 local_440;
  undefined4 local_418;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_350;
  undefined4 local_348;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_294;
  undefined4 local_28c;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_244;
  undefined4 local_23c;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c0;
  undefined4 local_198;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_5a8;
  local_2a0 = 0;
  local_298 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2b8 = 0;
  local_294 = 0xffffffff00000080;
  local_28c = 0;
  local_280 = 0;
  local_278 = 0;
  local_250 = 0;
  local_248 = 0;
  local_270 = 0;
  uStack_268 = 0;
  local_244 = 0xffffffff00000080;
  local_23c = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0xffffffff00000000;
  local_1f0 = 0;
  local_1e8 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_1e4 = 0xffffffff00000080;
  local_1dc = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_198 = 0;
  local_170 = 0;
  local_168 = 0x200000000;
  local_158 = 0;
  local_150 = 0x2000000000;
  uStack_148 = 0xffffffff;
  local_138 = 0;
  local_130 = 0;
  local_108 = 0;
  local_100 = 0x200000000;
  local_f0 = 0;
  local_e8 = 0x2000000000;
  uStack_e0 = 0xffffffff;
  local_d0 = 0;
  local_c8 = 0;
  local_a0 = 0;
  local_98 = 0x200000000;
  local_88 = 0;
  local_80 = 0x2000000000;
  uStack_78 = 0xffffffff;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c8);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_520 = 0;
  local_518 = 0;
  local_548 = 0;
  uStack_540 = 0;
  local_538 = 0;
  local_514 = 0xffffffff00000080;
  local_50c = 0;
  local_500 = 0;
  local_4f8 = 0;
  local_4d0 = 0;
  local_4c8 = 0;
  local_4f0 = 0;
  uStack_4e8 = 0;
  local_4c4 = 0xffffffff00000080;
  local_4bc = 0;
  local_4b0 = 0;
  local_4a8 = 0;
  local_4a0 = 0;
  local_498 = 0xffffffff00000000;
  local_470 = 0;
  local_468 = 0;
  local_490 = 0;
  uStack_488 = 0;
  local_464 = 0xffffffff00000080;
  local_45c = 0;
  local_450 = 0;
  local_448 = 0;
  local_440 = 0;
  local_418 = 0;
  local_3f0 = 0;
  local_3e8 = 0x200000000;
  local_3d8 = 0;
  local_3d0 = 0x2000000000;
  uStack_3c8 = 0xffffffff;
  local_3b8 = 0;
  local_3b0 = 0;
  local_388 = 0;
  local_380 = 0x200000000;
  local_370 = 0;
  local_368 = 0x2000000000;
  uStack_360 = 0xffffffff;
  local_350 = 0;
  local_348 = 0;
  local_320 = 0;
  local_318 = 0x200000000;
  local_308 = 0;
  local_300 = 0x2000000000;
  uStack_2f8 = 0xffffffff;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_548);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_548);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_550 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_550);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_550);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_568);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_568);
  }
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = &local_548;
  }
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = &local_2c8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_578 = local_558;
  local_588 = local_568;
  uStack_584 = uStack_564;
  uStack_580 = uStack_560;
  uStack_57c = uStack_55c;
  FUN_145b23a9e(puVar2,puVar1,local_550);
  local_548 = 0;
  FUN_14076ba36(&uStack_540);
  local_2c8 = 0;
  FUN_14076ba36(&uStack_2c0);
  if ((local_50 ^ (ulonglong)auStack_5a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b23a9e FUN_145b23a9e body=103 status=ok
// SIG undefined FUN_145b23a9e(void)

void FUN_145b23a9e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14054d68c(param_2,param_1);
  local_28 = *(undefined8 *)(param_4 + 4);
  local_38 = *param_4;
  uStack_34 = param_4[1];
  uStack_30 = param_4[2];
  uStack_2c = param_4[3];
  FUN_1414c5988(param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b23b06 FUN_145b23b06 body=156 status=ok
// SIG undefined FUN_145b23b06(void)

bool FUN_145b23b06(longlong param_1,undefined4 param_2)

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



// FUNCTION 145b23ba4 FUN_145b23ba4 body=73 status=ok
// SIG undefined FUN_145b23ba4(void)

void FUN_145b23ba4(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x1460) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x1458);
    lVar2 = (longlong)*(int *)(param_1 + 0x1460) * 0x88;
    do {
      FUN_140f2f85c(lVar1,param_2);
      lVar1 = lVar1 + 0x88;
      lVar2 = lVar2 + -0x88;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 145b23bee FUN_145b23bee body=565 status=ok
// SIG undefined FUN_145b23bee(void)

void FUN_145b23bee(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_40;
  undefined4 local_2c;
  undefined1 local_26;
  undefined1 local_25;
  undefined4 local_24;
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
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  local_26 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_26);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_26);
  }
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
  local_40 = local_2c;
  local_48 = local_26;
  cVar1 = (**(code **)(*param_1 + 0xab0))(param_1,local_20,local_24,local_25);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerSetCurrentWeapon_Validate");
  }
  else {
    local_40 = local_2c;
    local_48 = local_26;
    (**(code **)(*param_1 + 0xab8))(param_1,local_20,local_24,local_25);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b23e28 FUN_145b23e28 body=210 status=ok
// SIG undefined FUN_145b23e28(void)

void FUN_145b23e28(float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  
  if (param_1[0x44] == param_1[0x4d]) {
    return;
  }
  fVar2 = *param_2;
  pfVar3 = param_1 + 0x4e;
  if (*(float **)(param_1 + 0x56) != (float *)0x0) {
    pfVar3 = *(float **)(param_1 + 0x56);
  }
  fVar4 = pfVar3[(int)param_1[0x58] - 1U & (uint)fVar2];
  if (fVar4 == -NAN) {
    return;
  }
  fVar5 = fVar4;
  pfVar3 = *(float **)(param_1 + 0x42);
  if (*(float **)(param_1 + 0x42) == (float *)0x0) {
    pfVar3 = param_1 + 2;
  }
  while (pfVar1 = pfVar3 + (longlong)(int)fVar5 * 4, pfVar3[(longlong)(int)fVar5 * 4] != fVar2) {
    fVar5 = pfVar1[2];
    if (pfVar1[2] == -NAN) {
      return;
    }
  }
  if (pfVar1 == (float *)0x0) {
    return;
  }
  if (pfVar1 == (float *)0xfffffffffffffffc) {
    return;
  }
  do {
    if (pfVar3[(longlong)(int)fVar4 * 4] == fVar2) goto LAB_145b23eae;
    fVar4 = pfVar3[(longlong)(int)fVar4 * 4 + 2];
  } while (fVar4 != -NAN);
  fVar4 = -NAN;
LAB_145b23eae:
  fVar2 = pfVar3[(longlong)(int)fVar4 * 4 + 1];
  FUN_145b23efa();
  *param_1 = *param_1 - fVar2;
  return;
}



// FUNCTION 145b23efa FUN_145b23efa body=112 status=ok
// SIG undefined FUN_145b23efa(void)

void FUN_145b23efa(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar1 = param_1;
  }
  lVar3 = param_1 + 0x130;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x150);
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar2 = *(int *)(lVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)(lVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x10 + 8);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_145b23f6a(param_1,param_2,1);
  return;
}



// FUNCTION 145b23f6a FUN_145b23f6a body=177 status=ok
// SIG undefined FUN_145b23f6a(void)

void FUN_145b23f6a(longlong param_1,int param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar6 = param_1;
  }
  if (param_3 != 0) {
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar6 + 4);
    do {
      if (*(int *)(param_1 + 300) != 0) {
        *(int *)(lVar6 + (longlong)*(int *)(param_1 + 0x128) * 0x10) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)(param_1 + 300) < 1) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x128);
      }
      *puVar7 = uVar3;
      *(int *)(param_1 + 0x128) = param_2;
      *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
      lVar4 = *(longlong *)(param_1 + 0x118);
      if (*(longlong *)(param_1 + 0x118) == 0) {
        lVar4 = param_1 + 0x110;
      }
      iVar5 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar5 = param_2;
      }
      bVar2 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)(lVar4 + (longlong)(iVar5 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 145b2401c FUN_145b2401c body=138 status=ok
// SIG undefined FUN_145b2401c(void)

code * FUN_145b2401c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CustomStencilTextureArray";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DArray<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x580000003d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf436c;
}



// FUNCTION 145b240a6 FUN_145b240a6 body=138 status=ok
// SIG undefined FUN_145b240a6(void)

code * FUN_145b240a6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneDepthTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000036;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf461e;
}



// FUNCTION 145b24130 FUN_145b24130 body=138 status=ok
// SIG undefined FUN_145b24130(void)

code * FUN_145b24130(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScenePartialDepthTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000038;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf4594;
}



// FUNCTION 145b241ba FUN_145b241ba body=372 status=ok
// SIG undefined FUN_145b241ba(void)

undefined4 * FUN_145b241ba(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145b24428(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  lVar9 = param_3[1];
  *local_40 = *puVar1;
  local_40[1] = puVar1[1];
  lVar2 = puVar1[2];
  local_40[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  FUN_145b24330(local_40 + 3,lVar9);
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = *local_40;
  uVar10 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar6 = (uint)uVar3 & 0xffff;
  uVar10 = ((uint)uVar3 << 0x10 | uVar6) + (int)((ulonglong)uVar3 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_145b2437e(param_1,uVar10,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar5 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar10 = *(int *)(param_1 + 0x48) - 1U & uVar10;
      *(uint *)((longlong)local_40 + 0x2c) = uVar10;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar10) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar10) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_145b24518(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b24330 FUN_145b24330 body=77 status=ok
// SIG undefined FUN_145b24330(void)

undefined8 * FUN_145b24330(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1405b853a(param_1,iVar1,0);
    FUN_1405b83ac(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 145b2437e FUN_145b2437e body=169 status=ok
// SIG undefined FUN_145b2437e(void)

undefined8 FUN_145b2437e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x30);
        if (*(longlong *)(*param_1 + (longlong)iVar11 * 0x30) == *param_3) {
          FUN_1457e8b12(puVar1);
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
          FUN_1489f2694(param_1,*param_4);
          *param_4 = iVar11;
          return 1;
        }
        iVar11 = puVar1[10];
      } while (iVar11 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145b24428 FUN_145b24428 body=239 status=ok
// SIG undefined FUN_145b24428(void)

int * FUN_145b24428(longlong *param_1,int *param_2)

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



// FUNCTION 145b24518 FUN_145b24518 body=486 status=ok
// SIG undefined FUN_145b24518(void)

void FUN_145b24518(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 145b24700 FUN_145b24700 body=423 status=ok
// SIG undefined FUN_145b24700(void)

void FUN_145b24700(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_128 [32];
  undefined8 **local_108;
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong *local_b8;
  longlong local_a8 [4];
  longlong local_88;
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  cVar2 = FUN_1414c623e(param_3);
  if (cVar2 == '\0') {
    local_f8 = (undefined8 *)0x0;
    local_f0 = 0;
    FUN_1446efa72(&local_f8,0,3,0x10);
    local_f0 = 3;
    *local_f8 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_f8[2] = lVar6;
    *local_f8 = &PTR_FUN_14b41cc10;
    local_f8[3] = param_1;
    local_f8[4] = FUN_1457b7554;
    local_b8 = (longlong *)0x0;
    local_88 = 0;
    local_78 = (longlong *)0x0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    (**(code **)(*param_1 + 0x28))(param_1,&local_e8);
    uVar3 = FUN_140672052(param_1[1]);
    uVar4 = FUN_140d84280(param_3);
    local_108 = &local_f8;
    FUN_140d84456(uVar4,param_2,uVar3,&local_e8);
    FUN_140d82b92(param_1[1],param_1);
    if (local_88 != 0) {
      plVar5 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar5 = local_68;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if (local_c8 != 0) {
      plVar5 = local_b8;
      if (local_b8 == (longlong *)0x0) {
        plVar5 = local_a8;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    FUN_1449db362(&local_f8);
  }
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b248a8 FUN_145b248a8 body=189 status=ok
// SIG undefined FUN_145b248a8(void)

void FUN_145b248a8(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
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
  cVar1 = (**(code **)(*param_1 + 0x798))(param_1,local_19);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerSendAmmoState_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x7a0))(param_1,local_19);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2496a FUN_145b2496a body=115 status=ok
// SIG undefined FUN_145b2496a(void)

void FUN_145b2496a(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = (int)(param_2 & 0xff);
  if (iVar3 < *(int *)(param_1 + 0xbf0)) {
    plVar1 = *(longlong **)
              (*(longlong *)(param_1 + 0xbe8) + 0x10 +
              (ulonglong)(uint)(iVar3 << 7) + (param_2 & 0xff) * 8);
    if ((plVar1 != (longlong *)0x0) && (*(longlong **)(param_1 + 0x1b0) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x700))();
      if (cVar2 == '\0') {
        uVar4 = (**(code **)(*plVar1 + 0x2c0))(plVar1);
        FUN_145b249de(param_1,param_2 & 0xffffffff,uVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145b249de FUN_145b249de body=95 status=ok
// SIG undefined FUN_145b249de(void)

void FUN_145b249de(longlong *param_1,undefined1 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [4];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20[0] = param_2;
  local_1c = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cb93828);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b24a3e FUN_145b24a3e body=8 status=ok
// SIG undefined FUN_145b24a3e(void)

void FUN_145b24a3e(undefined8 param_1)

{
  DAT_14c846570 = param_1;
  return;
}



// FUNCTION 145b24a52 FUN_145b24a52 body=610 status=ok
// SIG undefined FUN_145b24a52(void)

undefined8 * FUN_145b24a52(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1406ed334();
  *param_1 = &PTR_FUN_14a4aaf00;
  param_1[0x1f] = &PTR_LAB_14a4ab270;
  lVar4 = 0x100;
  do {
    FUN_1406ed1bc();
    lVar4 = lVar4 + 0x118;
  } while (lVar4 != 0x448);
  *(undefined2 *)(param_1 + 0xb) = 0x201;
  *(undefined2 *)(param_1 + 0x1b) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0xda) = 1;
  *(undefined1 *)(param_1 + 0x30) = 1;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x53) = 1;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x76) = 1;
  param_1[0x75] = 0;
  local_40 = 0;
  local_38 = 0x100000000;
  FUN_145b24cb6(&local_58,param_1 + 0x20);
  FUN_145b24cb6(&local_58,param_1 + 0x43);
  FUN_145b24cb6(&local_58,param_1 + 0x66);
  local_60 = (longlong *)FUN_14001cc68(0x60,0x10);
  local_60[1] = (longlong)&DAT_100000001;
  *local_60 = (longlong)&PTR_FUN_14a492060;
  local_68 = local_60 + 2;
  local_60[2] = 0;
  local_60[3] = 0;
  local_60[4] = 0;
  local_60[5] = 0;
  local_60[6] = 2;
  if (local_40 == 0) {
    local_60[9] = local_48;
    *(undefined4 *)(local_60 + 7) = local_58;
    *(undefined4 *)((longlong)local_60 + 0x3c) = uStack_54;
    *(undefined4 *)(local_60 + 8) = uStack_50;
    *(undefined4 *)((longlong)local_60 + 0x44) = uStack_4c;
  }
  local_60[10] = local_40;
  local_40 = 0;
  *(undefined4 *)(local_60 + 0xb) = (undefined4)local_38;
  *(undefined4 *)((longlong)local_60 + 0x5c) = local_38._4_4_;
  local_38 = 0x100000000;
  FUN_140aec6f8(&local_68);
  plVar1 = local_60;
  if (local_60 == (longlong *)0x0) {
    param_1[0x1c] = local_68;
    plVar5 = (longlong *)param_1[0x1d];
    if (plVar5 == (longlong *)0x0) goto LAB_145b24bf4;
    param_1[0x1d] = 0;
LAB_145b24c56:
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_145b24bf4;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar5;
  }
  else {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
    param_1[0x1c] = local_68;
    plVar5 = (longlong *)param_1[0x1d];
    if (local_60 != plVar5) {
      param_1[0x1d] = local_60;
      if (plVar5 == (longlong *)0x0) goto LAB_145b24bf4;
      goto LAB_145b24c56;
    }
    LOCK();
    plVar5 = local_60 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_145b24bf4;
    (**(code **)*local_60)(local_60);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_145b24bf4:
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_60 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  FUN_1404dbc0c(&local_58);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b24cb6 FUN_145b24cb6 body=321 status=ok
// SIG undefined FUN_145b24cb6(void)

uint FUN_145b24cb6(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined8 uStack_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = FUN_145b24df8();
  local_50 = *(longlong *)(lVar5 + 0x18);
  uVar7 = *(uint *)(param_1 + 0x20);
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar5 = param_1;
  }
  uVar8 = 0;
  if (0 < (int)uVar7) {
    do {
      uVar1 = uVar8 + (uVar7 >> 1);
      local_68 = *(longlong *)(lVar5 + (ulonglong)uVar1 * 0x18);
      iVar4 = FUN_144a78538(&local_68,&local_50);
      uVar1 = (uVar7 & 1) + uVar1;
      if (-1 < iVar4) {
        uVar1 = uVar8;
      }
      uVar8 = uVar1;
      bVar3 = 1 < uVar7;
      uVar7 = uVar7 >> 1;
    } while (bVar3);
    uVar7 = *(uint *)(param_1 + 0x20);
  }
  if ((int)uVar8 < (int)uVar7) {
    lVar5 = *(longlong *)(param_1 + 0x18);
    lVar6 = lVar5;
    if (lVar5 == 0) {
      lVar6 = param_1;
    }
    if (*(longlong *)(lVar6 + (ulonglong)uVar8 * 0x18) == local_50) goto LAB_145b24d65;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_68 = local_50;
  FUN_140f93936(param_1,&local_68,uVar8);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
LAB_145b24d65:
  if (lVar5 != 0) {
    param_1 = lVar5;
  }
  plVar2 = (longlong *)(param_1 + 8 + (ulonglong)uVar8 * 0x18);
  iVar4 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar4 + 1U) {
    FUN_140aec898(plVar2,iVar4);
  }
  *(undefined8 *)(*plVar2 + (longlong)iVar4 * 8) = param_2;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b24df8 FUN_145b24df8 body=57 status=ok
// SIG undefined FUN_145b24df8(void)

void FUN_145b24df8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab23b0 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab23b0 = FUN_140002ddd(FUN_14179c8a2,uVar1,L"MovieSceneDoubleChannel");
  }
  return;
}



// FUNCTION 145b24e32 FUN_145b24e32 body=40 status=ok
// SIG undefined FUN_145b24e32(void)

undefined8 FUN_145b24e32(undefined8 param_1,int param_2)

{
  FUN_145b24e5a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b24e5a FUN_145b24e5a body=59 status=ok
// SIG undefined FUN_145b24e5a(void)

void FUN_145b24e5a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a70a980;
  FUN_145b24e95(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145b24e95 FUN_145b24e95 body=55 status=ok
// SIG undefined FUN_145b24e95(void)

void FUN_145b24e95(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0xf0);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x2b;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145b24ecc FUN_145b24ecc body=427 status=ok
// SIG undefined FUN_145b24ecc(void)

void FUN_145b24ecc(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 unaff_RDI;
  ulonglong uVar8;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  undefined7 uVar9;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_1[0x16] != 0) || (lVar6 = FUN_1448abda6(param_1), lVar6 != 0)) {
    uVar7 = 0;
    cVar3 = FUN_145b25082(0);
    uVar9 = (undefined7)((ulonglong)unaff_RDI >> 8);
    uVar8 = CONCAT71(uVar9,1);
    if ((char)param_1[0x206] == '\0') {
      cVar4 = (**(code **)(*param_1 + 0xa40))(param_1);
      if ((cVar4 == '\x03') || (param_1[0x205] != 0)) {
        bVar11 = false;
      }
      else {
        bVar11 = param_1[0x1e6] != 0;
      }
      uVar7 = 0;
      if ((!bVar11) && (cVar3 == '\x01')) {
        uVar7 = ((ulonglong)*(byte *)(param_1 + 0x3f) & 0xffffffffffffff20) >> 5;
        uVar8 = CONCAT71(uVar9,*(undefined1 *)((longlong)param_1 + 0x1f9)) & 0xffffffffffffff08;
        uVar8 = CONCAT71((int7)(uVar8 >> 8),(byte)uVar8 >> 3);
      }
    }
    (**(code **)(*param_1 + 0xa30))(param_1,&local_58);
    lVar6 = local_58;
    if ((longlong)local_50 != 0) {
      lVar10 = 0;
      do {
        uVar1 = *(undefined8 *)(lVar6 + lVar10);
        FUN_14045627c(uVar1,uVar7,1);
        FUN_1449e3cec(uVar1,uVar8 & 0xffffffff,1);
        lVar10 = lVar10 + 8;
      } while ((longlong)local_50 * 8 != lVar10);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
    if ((param_2 != '\0') && (lVar6 = FUN_140297002(param_1 + 0x212), lVar6 != 0)) {
      bVar5 = (**(code **)(*param_1 + 0xa00))(param_1);
      cVar3 = (**(code **)(*param_1 + 0xa08))(param_1);
      iVar2 = (uint)bVar5 * 4 + 2;
      if (cVar3 == '\0') {
        iVar2 = (uint)bVar5 * 4;
      }
      FUN_140aab22c(param_1,iVar2,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145b25082 FUN_145b25082 body=24 status=ok
// SIG undefined FUN_145b25082(void)

undefined8 FUN_145b25082(char param_1)

{
  int *piVar1;
  
  piVar1 = DAT_14cb49688;
  if (param_1 != '\0') {
    piVar1 = DAT_14cb49688 + 1;
  }
  return CONCAT71((int7)((ulonglong)piVar1 >> 8),*piVar1 != 0);
}



// FUNCTION 145b2509a FUN_145b2509a body=72 status=ok
// SIG undefined FUN_145b2509a(void)

undefined8 * FUN_145b2509a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3d20a0;
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1402ef4ac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b250e2 thunk_FUN_1402ef4ac body=5 status=ok
// SIG undefined thunk_FUN_1402ef4ac(void)

void thunk_FUN_1402ef4ac(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_14a77e150;
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x6a],*(undefined4 *)(param_1 + 0x6b));
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x66],*(undefined4 *)(param_1 + 0x67));
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[99],*(undefined4 *)(param_1 + 100));
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x60],*(undefined4 *)(param_1 + 0x61));
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5d],*(undefined4 *)(param_1 + 0x5e));
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)param_1[0x56];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x51) = 0;
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  FUN_1407903ca(param_1 + 0x48);
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_140115fde(param_1[0x44],*(undefined4 *)(param_1 + 0x45));
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  lVar5 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0xe) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar6 = *(int *)(param_1 + 0xe) + -1;
      lVar4 = (longlong)iVar6 * 0x88;
      lVar2 = DAT_14c9a3d60 + lVar4;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar4),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar4));
      if (*(longlong *)(lVar5 + 0x70 + lVar4) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar6,1);
    }
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  FUN_144760f98(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145b250e8 FUN_145b250e8 body=76 status=ok
// SIG undefined FUN_145b250e8(void)

void FUN_145b250e8(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1458c7f24();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x88))(param_1);
    FUN_145d7c4e6(param_1);
    return;
  }
  uVar2 = FUN_143f2ac96(param_1,0x17);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000145b2512d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1);
  return;
}



// FUNCTION 145b25136 FUN_145b25136 body=156 status=ok
// SIG undefined FUN_145b25136(void)

bool FUN_145b25136(longlong param_1,undefined4 param_2)

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



// FUNCTION 145b251d4 FUN_145b251d4 body=506 status=ok
// SIG undefined FUN_145b251d4(void)

void FUN_145b251d4(longlong param_1,byte param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58 [3];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((param_2 == 0) || (*(longlong *)(param_1 + 0xf48) == 0)) ||
     (*(longlong *)(*(longlong *)(param_1 + 0xf48) + 0x3f70) == 0)) goto LAB_145b251f2;
  lVar2 = FUN_1447210f0(param_1);
  local_60 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xf48) + 0x3f70) + 0xeb0);
  FUN_1446dcdd4(local_58);
  lVar3 = FUN_14058c610(local_58);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((lVar2 == 0) || (lVar3 == 0)) goto LAB_145b251f2;
  if (*(int *)(lVar3 + 0x40) != *(int *)(lVar3 + 0x6c)) {
    lVar5 = lVar3 + 0x70;
    if (*(longlong *)(lVar3 + 0x78) != 0) {
      lVar5 = *(longlong *)(lVar3 + 0x78);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar3 + 0x80) - 1U & (uint)param_2) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(lVar3 + 0x38);
      iVar6 = iVar4;
      do {
        if (*(byte *)(lVar5 + (longlong)iVar6 * 0x30) == param_2) goto LAB_145b252e0;
        iVar6 = *(int *)((longlong)iVar6 * 0x30 + lVar5 + 0x28);
      } while (iVar6 != -1);
    }
  }
  puVar7 = (undefined8 *)(lVar3 + 0x18);
  goto LAB_145b252fc;
  while (iVar4 = *(int *)(lVar3 + 0x28), iVar4 != -1) {
LAB_145b252e0:
    lVar3 = lVar5 + (longlong)iVar4 * 0x30;
    if (*(byte *)(lVar5 + (longlong)iVar4 * 0x30) == param_2) goto LAB_145b252f8;
  }
  lVar3 = 0;
LAB_145b252f8:
  puVar7 = (undefined8 *)(lVar3 + 8);
LAB_145b252fc:
  lVar3 = FUN_144a79778(lVar2);
  if (lVar3 == 0) {
    bVar8 = true;
  }
  else {
    bVar8 = (*(byte *)(lVar3 + 0x2d) & 2) == 0;
  }
  cVar1 = FUN_144a80e00(lVar2);
  if (((cVar1 != '\0') || (bVar8)) || (*(char *)(puVar7 + 3) == '\0')) {
    local_58[0] = *puVar7;
    if ((longlong)*(int *)(param_1 + 0x31d8) != 0) {
      lVar2 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x31d0) + 8 + lVar2) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x31d0) + lVar2) != 0)) {
          FUN_145b253d0(param_1 + 0x31d0,local_58,0xbf800000);
          break;
        }
        lVar2 = lVar2 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x31d8) * 0x10 != lVar2);
    }
  }
LAB_145b251f2:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145b253d0 FUN_145b253d0 body=183 status=ok
// SIG undefined FUN_145b253d0(void)

void FUN_145b253d0(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_145b2546d;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145b2546d:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145b25490 FUN_145b25490 body=91 status=ok
// SIG undefined FUN_145b25490(void)

undefined8 * FUN_145b25490(undefined8 *param_1)

{
  FUN_145b254ec();
  *param_1 = &PTR_FUN_14bc404f0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_14020fad6(param_1 + 0xe,L"DiffuseTexturePath");
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_14020fad6(param_1 + 0x10,L"NormalTexturePath");
  return param_1;
}



// FUNCTION 145b254ec FUN_145b254ec body=55 status=ok
// SIG undefined FUN_145b254ec(void)

undefined8 * FUN_145b254ec(undefined8 *param_1)

{
  FUN_1410832cc();
  *param_1 = &PTR_FUN_14bc53600;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_14020fad6(param_1 + 0xc,L"ShaderType");
  return param_1;
}



// FUNCTION 145b2552c FUN_145b2552c body=69 status=ok
// SIG undefined FUN_145b2552c(void)

undefined8 * FUN_145b2552c(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_1400841f8();
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_14bee3640;
  param_1[7] = 0;
  lVar1 = FUN_141221a30();
  if (*(longlong *)(lVar1 + 0x110) == 0) {
    FUN_140aa6c08(lVar1);
  }
  return param_1;
}



// FUNCTION 145b2557a FUN_145b2557a body=531 status=ok
// SIG undefined FUN_145b2557a(void)

undefined8 * FUN_145b2557a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1412202b0();
  *param_1 = &PTR_FUN_14af08490;
  param_1[6] = &PTR_FUN_14af08770;
  param_1[7] = &PTR_FUN_14af08790;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0x200000000;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x119) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0x200000003;
  *(undefined2 *)((longlong)param_1 + 0x124) = 0x100;
  FUN_145b2578e(param_1 + 0x26);
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0;
  param_1[0x9b] = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xaa] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xa8] = DAT_14c8464e0;
  param_1[0xa9] = uVar1;
  param_1[0xad] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xae] = 0x3ff0000000000000;
  *(undefined2 *)(param_1 + 0xaf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x57c) = 1;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x584) = 2;
  param_1[0xbe] = 0;
  param_1[0xc0] = 0;
  *(undefined1 *)(param_1 + 0xb3) = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  *(undefined4 *)(param_1 + 0xc6) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xce) = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  return param_1;
}



// FUNCTION 145b2578e FUN_145b2578e body=271 status=ok
// SIG undefined FUN_145b2578e(void)

undefined8 * FUN_145b2578e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_145b2589e();
  *param_1 = &PTR_FUN_14af12bd0;
  *(undefined1 *)(param_1 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_1 + 500) = 0x8c00000096;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0xb0000000a;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x48] = DAT_14c8464e0;
  param_1[0x49] = uVar1;
  param_1[0x4a] = DAT_14c8464f0;
  param_1[0x4d] = DAT_14c8463b0;
  uVar1 = DAT_14c8463a8;
  param_1[0x4b] = DAT_14c8463a0;
  param_1[0x4c] = uVar1;
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
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x37] = DAT_14c8464e0;
  param_1[0x38] = uVar1;
  param_1[0x39] = DAT_14c8464f0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0x3ff0000000000000;
  return param_1;
}



// FUNCTION 145b2589e FUN_145b2589e body=501 status=ok
// SIG undefined FUN_145b2589e(void)

undefined8 * FUN_145b2589e(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = &PTR_FUN_14af12b50;
  param_1[2] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[0xc] = 0x3fe0000000000000;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  param_1[0x27] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x25] = DAT_14c8464e0;
  param_1[0x26] = uVar1;
  uVar1 = DAT_14c8463a8;
  param_1[0x28] = DAT_14c8463a0;
  param_1[0x29] = uVar1;
  param_1[0x2a] = DAT_14c8463b0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  local_98 = param_1[2];
  uStack_50 = param_1[3];
  local_88 = (longlong *)param_1[4];
  uStack_40 = param_1[5];
  local_38 = param_1[6];
  uStack_30 = param_1[7];
  local_28 = param_1[8];
  uStack_20 = param_1[9];
  uVar3 = local_28;
  uVar4 = uStack_20;
  local_48 = local_88;
  uVar2 = uStack_40;
  local_58 = local_98;
  uVar1 = uStack_50;
  param_1[8] = CONCAT44(uStack_64,local_68);
  param_1[9] = CONCAT44(uStack_5c,uStack_60);
  param_1[6] = &PTR_LAB_14af1a340;
  param_1[7] = &LAB_143ba7ed2;
  param_1[4] = 0;
  param_1[5] = CONCAT44(uStack_7c,uStack_80);
  param_1[2] = &LAB_14855bf22;
  param_1[3] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = local_38;
  uStack_70 = uStack_30;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_50 = uVar1;
  uStack_40 = uVar2;
  local_28 = uVar3;
  uStack_20 = uVar4;
  if (local_98 != 0) {
    plVar5 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar5 = &local_78;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  param_1[10] = 0x3ff0000000000000;
  FUN_145b25a94(param_1);
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b25a94 FUN_145b25a94 body=137 status=ok
// SIG undefined FUN_145b25a94(void)

void FUN_145b25a94(longlong *param_1)

{
  if (*(int *)((longlong)param_1 + 0x74) < 0) {
    *(undefined4 *)(param_1 + 0xe) = 0;
    FUN_14855bf4c(param_1 + 0xd);
  }
  else {
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x84) < 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_14855bf7c(param_1 + 0xf);
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x94) < 0) {
    *(undefined4 *)(param_1 + 0x12) = 0;
    FUN_14855bfac(param_1 + 0x11);
  }
  else {
    *(undefined4 *)(param_1 + 0x12) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000145b25ada. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))(param_1);
  return;
}



// FUNCTION 145b25b1e FUN_145b25b1e body=7 status=ok
// SIG undefined FUN_145b25b1e(void)

void FUN_145b25b1e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145b25b21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))();
  return;
}



// FUNCTION 145b25b2e FUN_145b25b2e body=240 status=ok
// SIG undefined FUN_145b25b2e(void)

longlong * FUN_145b25b2e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar5 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b4291f0;
  plVar1 = plVar5 + 2;
  cVar3 = *(char *)(param_1 + 0x10);
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[2] = (longlong)&PTR_FUN_14b421610;
  plVar5[5] = 0;
  *(undefined4 *)(plVar5 + 6) = 0;
  *(char *)(plVar5 + 7) = cVar3 * '\x02';
  local_38 = plVar1;
  local_30 = plVar5;
  FUN_145b25c22(&local_38,plVar1);
  plVar4 = local_30;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b25c22 FUN_145b25c22 body=162 status=ok
// SIG undefined FUN_145b25c22(void)

void FUN_145b25c22(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145b25c61;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145b25c61;
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
LAB_145b25c61:
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
                    /* WARNING: Could not recover jumptable at 0x000145b25cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145b25cc4 FUN_145b25cc4 body=83 status=ok
// SIG undefined FUN_145b25cc4(void)

ulonglong FUN_145b25cc4(undefined8 param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_2 + 0x38))) {
    lVar1 = FUN_1408d7900((ulonglong)param_3 * 0x18 + *(longlong *)(param_2 + 0x30));
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_145b25d18(param_1,param_2,lVar1 + 0xe0);
      uVar2 = uVar2 ^ 1;
    }
  }
  return uVar2;
}



// FUNCTION 145b25d18 FUN_145b25d18 body=191 status=ok
// SIG undefined FUN_145b25d18(void)

ulonglong FUN_145b25d18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_140114204(param_3);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    FUN_1414c6652();
    lVar1 = local_38;
    if ((longlong)local_30 == 0) {
      uVar3 = 0;
    }
    else {
      lVar4 = 0;
      do {
        if ((*(longlong *)(lVar1 + lVar4) != 0) &&
           (cVar2 = FUN_14493b798(*(longlong *)(lVar1 + lVar4) + 0xe0,param_3), cVar2 != '\0')) {
          uVar3 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
          goto LAB_145b25d9b;
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)local_30 * 8 != lVar4);
      uVar3 = 0;
    }
LAB_145b25d9b:
    if (local_38 != 0) {
      FUN_1400020a8(local_38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}


