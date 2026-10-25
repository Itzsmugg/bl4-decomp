// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1457bfdb8 FUN_1457bfdb8 body=94 status=ok
// SIG undefined FUN_1457bfdb8(void)

void FUN_1457bfdb8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449e6b18(param_1 + 0x3c);
  FUN_1449e6b18(param_1 + 0x30);
  FUN_1449e6b18(param_1 + 0x24);
  FUN_1449e6b18(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001457bfe12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1457bfebe FUN_1457bfebe body=155 status=ok
// SIG undefined FUN_1457bfebe(void)

void FUN_1457bfebe(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = DAT_14cb81ca8;
  if (param_1 <= (int)DAT_14cb81ca8) {
    if (DAT_14cb81cac == 0) {
      uVar2 = 4;
      if (4 < DAT_14cb81ca8) {
        uVar2 = DAT_14cb81ca8;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)DAT_14cb81ca8 * 3) >> 3) + (longlong)(int)DAT_14cb81ca8 +
              0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x60,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    DAT_14cb81cac = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cb81ca0,param_1,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457bff5a FUN_1457bff5a body=40 status=ok
// SIG undefined FUN_1457bff5a(void)

undefined8 FUN_1457bff5a(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457bff82 FUN_1457bff82 body=288 status=ok
// SIG undefined FUN_1457bff82(void)

void FUN_1457bff82(longlong *param_1,longlong param_2)

{
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
  if (*(int *)(param_2 + 8) != *(int *)(param_2 + 0x34)) {
    FUN_145779f24(param_2);
    FUN_148812ff8(param_2);
  }
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_60 = local_40;
  local_58 = local_38;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_140f8d6d8(param_2,&local_40,(longlong)iStack_4c * 0x48 + *local_68,0);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c00a4 FUN_1457c00a4 body=151 status=ok
// SIG undefined FUN_1457c00a4(void)

void FUN_1457c00a4(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x158 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x158) = param_2;
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
      puVar7 = puVar7 + 0x56;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1457c013c FUN_1457c013c body=385 status=ok
// SIG undefined FUN_1457c013c(void)

void FUN_1457c013c(undefined8 param_1)

{
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = 2;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1446ddc76(&local_60,"BorderImage",1);
  local_98 = local_58;
  FUN_14134b99c(param_1,local_70,local_60,0x268);
  FUN_1449db362(&local_50);
  local_58[0] = 2;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1446ddc76(&local_78,"BorderBackgroundColor",1);
  local_98 = local_58;
  FUN_14134b99c(param_1,local_70,local_78,0x270);
  FUN_1449db362(&local_50);
  local_58[0] = 1;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1446ddc76(&local_80,"DesiredSizeScale",1);
  local_98 = local_58;
  FUN_14134b99c(param_1,local_70,local_80,0x288);
  FUN_1449db362(&local_50);
  local_58[0] = 2;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1446ddc76(&local_88,"ShowDisabledEffect",1);
  local_98 = local_58;
  FUN_14134b99c(param_1,local_70,local_88,0x298);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c02e6 FUN_1457c02e6 body=164 status=ok
// SIG undefined FUN_1457c02e6(void)

longlong * FUN_1457c02e6(longlong *param_1)

{
  int iVar1;
  undefined1 auStack_58 [36];
  int local_34;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  param_1[2] = -1;
  FUN_1457c038b(&local_2c,&local_30,&local_34);
  iVar1 = 0x8000;
  if (0 < local_2c) {
    iVar1 = local_2c;
  }
  *param_1 = (longlong)iVar1;
  iVar1 = 0x40000;
  if (0 < local_30) {
    iVar1 = local_30;
  }
  param_1[1] = (longlong)iVar1;
  iVar1 = 0x200000;
  if (0 < local_34) {
    iVar1 = local_34;
  }
  param_1[2] = (longlong)iVar1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c038b FUN_1457c038b body=264 status=ok
// SIG undefined FUN_1457c038b(void)

/* WARNING: Removing unreachable block (ram,0x0001457c0428) */
/* WARNING: Removing unreachable block (ram,0x0001457c040a) */
/* WARNING: Removing unreachable block (ram,0x0001457c03f4) */
/* WARNING: Removing unreachable block (ram,0x0001457c04b3) */
/* WARNING: Removing unreachable block (ram,0x0001475092dd) */
/* WARNING: Removing unreachable block (ram,0x0001457c039a) */

uint * FUN_1457c038b(uint *param_1,uint *param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_48 [32];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  piVar1 = (int *)cpuid_basic_info(0);
  iVar5 = piVar1[1];
  iVar7 = piVar1[2];
  iVar8 = piVar1[3];
  if ((((iVar5 != 0x756e6547) || (iVar7 != 0x49656e69)) || (iVar8 != 0x6c65746e)) &&
     ((iVar8 == 0x444d4163 && (iVar7 == 0x69746e65 && iVar5 == 0x68747541) ||
      (((iVar5 == 0x69444d41 && (iVar7 == 0x74656273)) && (iVar8 == 0x21726574)))))) {
    puVar2 = (uint *)cpuid(0x80000000);
    uVar11 = *puVar2;
    if (uVar11 < 0x80000006) {
      *param_3 = 0;
      *param_2 = 0;
      *param_1 = 0;
    }
    else {
      lVar13 = cpuid(0x80000005);
      *param_1 = *(int *)(lVar13 + 0xc) >> 0xe & 0xfffffc00;
      puVar2 = (uint *)cpuid(0x80000006);
      uVar11 = *puVar2;
      uVar4 = puVar2[2];
      *param_2 = (int)puVar2[3] >> 6 & 0xfffffc00;
      *param_3 = uVar4 * 2 & 0x1ff80000;
    }
    return (uint *)(ulonglong)uVar11;
  }
  if (3 < *piVar1) {
    uVar11 = 0;
    *param_3 = 0;
    *param_2 = 0;
    *param_1 = 0;
    do {
      puVar2 = (uint *)cpuid_Deterministic_Cache_Parameters_info(4);
      uVar4 = *puVar2;
      uVar6 = puVar2[1];
      if (((uVar4 & 0xd) == 1) &&
         (((uVar10 = uVar4 >> 5 & 7, puVar9 = param_1, uVar10 == 1 ||
           (puVar9 = param_3, uVar10 == 3)) || (puVar9 = param_2, uVar10 == 2)))) {
        *puVar9 = (puVar2[3] + 1) * ((uVar6 >> 0x16) + 1) *
                  ((uVar6 & 0xfff) + 1) * ((uVar6 >> 0xc & 0x3ff) + 1);
      }
      bVar16 = (uVar4 & 0xf) != 0;
      bVar15 = uVar11 < 0xf;
      uVar11 = uVar11 + 1;
    } while (bVar16 && bVar15);
    return (uint *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar16);
  }
  if (*piVar1 < 2) {
    *param_3 = 0;
    *param_2 = 0;
    *param_1 = 0;
    return (uint *)0x0;
  }
  puVar3 = (undefined4 *)cpuid_cache_tlb_info(2);
  uStack_28 = *puVar3;
  uStack_24 = puVar3[1];
  uStack_1c = puVar3[2];
  uStack_20 = puVar3[3];
  uVar12 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar13 = 0;
  *param_3 = 0;
  *param_2 = 0;
  *param_1 = 0;
  bVar15 = false;
LAB_147509316:
  lVar14 = lVar13 + -0xe;
  do {
    switch((&stack0xffffffffffffffe8)[lVar14]) {
    case 10:
    case 0x66:
      *param_1 = 8;
      break;
    case 0xc:
    case 0x10:
    case 0x15:
    case 0x60:
    case 0x67:
      *param_1 = 0x10;
      break;
    case 0xe:
      *param_1 = 0x18;
      break;
    case 0x1a:
      *param_2 = 0x60;
      break;
    case 0x22:
      *param_3 = 0x200;
      break;
    case 0x23:
      *param_3 = 0x400;
      break;
    case 0x25:
    case 0x88:
      *param_3 = 0x800;
      break;
    case 0x29:
    case 0x46:
    case 0x89:
      goto switchD_147509332_caseD_29;
    case 0x2c:
    case 0x30:
    case 0x68:
      *param_1 = 0x20;
      break;
    case 0x39:
    case 0x3b:
    case 0x41:
    case 0x79:
    case 0x81:
      *param_2 = 0x80;
      break;
    case 0x3a:
      *param_2 = 0xc0;
      break;
    case 0x3c:
    case 0x42:
    case 0x7a:
    case 0x7e:
    case 0x82:
      *param_2 = 0x100;
      break;
    case 0x3d:
      *param_2 = 0x180;
      break;
    case 0x3e:
    case 0x43:
    case 0x7b:
    case 0x7f:
    case 0x80:
    case 0x83:
    case 0x86:
      *param_2 = 0x200;
      break;
    case 0x40:
      *param_2 = 0;
      break;
    case 0x44:
    case 0x78:
    case 0x7c:
    case 0x84:
    case 0x87:
      *param_2 = 0x400;
      break;
    case 0x45:
    case 0x7d:
    case 0x85:
      *param_2 = 0x800;
      break;
    case 0x47:
    case 0x4b:
    case 0x8a:
      *param_3 = 0x2000;
      break;
    case 0x48:
      *param_2 = 0xc00;
      break;
    case 0x49:
      if (*param_2 == 0) goto LAB_147509475;
switchD_147509332_caseD_29:
      *param_3 = 0x1000;
      break;
    case 0x4a:
      *param_3 = 0x1800;
      break;
    case 0x4c:
      *param_3 = 0x3000;
      break;
    case 0x4d:
      *param_3 = 0x4000;
      break;
    case 0x4e:
      *param_2 = 0x1800;
      break;
    case 0x8d:
      *param_3 = 0xc00;
    }
    lVar14 = lVar14 + 1;
    if (lVar14 == 0) {
      if (!bVar15) goto LAB_14750944c;
      uVar11 = *param_3;
      goto LAB_147509440;
    }
  } while( true );
LAB_147509475:
  uVar11 = 0x1000;
  *param_2 = 0x1000;
  *param_3 = 0x1000;
  lVar13 = lVar14 + 0xf;
  bVar15 = true;
  if (lVar14 == -1) {
LAB_147509440:
    if (*param_2 == uVar11) {
      *param_3 = 0;
    }
LAB_14750944c:
    *param_1 = *param_1 << 10;
    *param_2 = *param_2 << 10;
    *param_3 = *param_3 << 10;
    if ((uVar12 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return &switchD_147509332::switchdataD_14a44d720;
  }
  goto LAB_147509316;
}



// FUNCTION 1457c0493 FUN_1457c0493 body=149 status=ok
// SIG undefined FUN_1457c0493(void)

/* WARNING: Removing unreachable block (ram,0x0001457c04b3) */

void FUN_1457c0493(int *param_1,int *param_2,int *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar6 = 0;
  *param_3 = 0;
  *param_2 = 0;
  *param_1 = 0;
  do {
    puVar1 = (uint *)cpuid_Deterministic_Cache_Parameters_info(4);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    if (((uVar2 & 0xd) == 1) &&
       (((uVar5 = uVar2 >> 5 & 7, piVar4 = param_1, uVar5 == 1 || (piVar4 = param_3, uVar5 == 3)) ||
        (piVar4 = param_2, uVar5 == 2)))) {
      *piVar4 = (puVar1[3] + 1) * ((uVar3 >> 0x16) + 1) *
                ((uVar3 & 0xfff) + 1) * ((uVar3 >> 0xc & 0x3ff) + 1);
    }
    bVar7 = uVar6 < 0xf;
    uVar6 = uVar6 + 1;
  } while ((uVar2 & 0xf) != 0 && bVar7);
  return;
}



// FUNCTION 1457c0528 FUN_1457c0528 body=2040 status=ok
// SIG undefined FUN_1457c0528(void)

void FUN_1457c0528(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4,
                  float param_5,longlong param_6,longlong param_7,longlong param_8,longlong param_9,
                  longlong param_10,longlong param_11,undefined8 param_12,longlong param_13,
                  longlong param_14,longlong param_15,longlong param_16,longlong param_17)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  longlong lVar67;
  longlong lVar68;
  longlong lVar69;
  longlong lVar70;
  longlong lVar71;
  float *pfVar72;
  longlong lVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  ulonglong local_140;
  
  if (param_6 < param_7) {
    lVar1 = param_3 + param_10 * 0x10;
    param_3 = param_10 * 0x10 + param_8 * param_6 * 4 + param_3;
    lVar68 = param_11 * 0x10 + param_4;
    do {
      if (0 < param_17) {
        local_140 = 0;
        lVar67 = lVar68;
        do {
          lVar73 = *param_2;
          lVar69 = param_2[1];
          pfVar2 = (float *)(lVar73 + lVar69 * local_140 * 4 + param_6 * 4);
          pfVar72 = (float *)(lVar73 + (local_140 | 1) * lVar69 * 4 + param_6 * 4);
          pfVar3 = (float *)(lVar73 + (local_140 | 2) * lVar69 * 4 + param_6 * 4);
          pfVar4 = (float *)(lVar73 + (local_140 | 3) * lVar69 * 4 + param_6 * 4);
          if (param_13 < 1) {
            lVar73 = lVar68 + local_140 * param_9 * 4;
            fVar78 = 0.0;
            fVar79 = 0.0;
            fVar80 = 0.0;
            fVar81 = 0.0;
            fVar86 = 0.0;
            fVar87 = 0.0;
            fVar88 = 0.0;
            fVar89 = 0.0;
            fVar82 = 0.0;
            fVar83 = 0.0;
            fVar84 = 0.0;
            fVar85 = 0.0;
            fVar74 = 0.0;
            fVar75 = 0.0;
            fVar76 = 0.0;
            fVar77 = 0.0;
            lVar69 = lVar1 + param_6 * param_8 * 4;
          }
          else {
            fVar78 = 0.0;
            fVar79 = 0.0;
            fVar80 = 0.0;
            fVar81 = 0.0;
            lVar69 = 0;
            lVar73 = 0;
            fVar86 = 0.0;
            fVar87 = 0.0;
            fVar88 = 0.0;
            fVar89 = 0.0;
            fVar82 = 0.0;
            fVar83 = 0.0;
            fVar84 = 0.0;
            fVar85 = 0.0;
            fVar74 = 0.0;
            fVar75 = 0.0;
            fVar76 = 0.0;
            fVar77 = 0.0;
            fVar94 = 0.0;
            fVar95 = 0.0;
            fVar96 = 0.0;
            fVar97 = 0.0;
            fVar102 = 0.0;
            fVar103 = 0.0;
            fVar104 = 0.0;
            fVar105 = 0.0;
            fVar98 = 0.0;
            fVar99 = 0.0;
            fVar100 = 0.0;
            fVar101 = 0.0;
            fVar90 = 0.0;
            fVar91 = 0.0;
            fVar92 = 0.0;
            fVar93 = 0.0;
            do {
              pfVar5 = (float *)(lVar67 + lVar69);
              fVar11 = *pfVar5;
              fVar12 = pfVar5[1];
              fVar13 = pfVar5[2];
              fVar14 = pfVar5[3];
              pfVar5 = (float *)(param_3 + lVar69);
              fVar15 = *pfVar5;
              fVar16 = pfVar5[1];
              fVar17 = pfVar5[2];
              fVar18 = pfVar5[3];
              pfVar5 = (float *)(lVar67 + 0x10 + lVar69);
              fVar19 = *pfVar5;
              fVar20 = pfVar5[1];
              fVar21 = pfVar5[2];
              fVar22 = pfVar5[3];
              pfVar5 = (float *)(param_3 + 0x10 + lVar69);
              fVar23 = *pfVar5;
              fVar24 = pfVar5[1];
              fVar25 = pfVar5[2];
              fVar26 = pfVar5[3];
              pfVar5 = (float *)(lVar67 + 0x20 + lVar69);
              fVar27 = *pfVar5;
              fVar28 = pfVar5[1];
              fVar29 = pfVar5[2];
              fVar30 = pfVar5[3];
              pfVar5 = (float *)(param_3 + 0x20 + lVar69);
              fVar31 = *pfVar5;
              fVar32 = pfVar5[1];
              fVar33 = pfVar5[2];
              fVar34 = pfVar5[3];
              pfVar5 = (float *)(lVar67 + 0x30 + lVar69);
              fVar35 = *pfVar5;
              fVar36 = pfVar5[1];
              fVar37 = pfVar5[2];
              fVar38 = pfVar5[3];
              pfVar5 = (float *)(param_3 + 0x30 + lVar69);
              fVar39 = *pfVar5;
              fVar40 = pfVar5[1];
              fVar41 = pfVar5[2];
              fVar42 = pfVar5[3];
              pfVar5 = (float *)(lVar67 + 0x40 + lVar69);
              fVar43 = *pfVar5;
              fVar44 = pfVar5[1];
              fVar45 = pfVar5[2];
              fVar46 = pfVar5[3];
              pfVar5 = (float *)(param_3 + 0x40 + lVar69);
              fVar47 = *pfVar5;
              fVar48 = pfVar5[1];
              fVar49 = pfVar5[2];
              fVar50 = pfVar5[3];
              pfVar5 = (float *)(lVar67 + 0x50 + lVar69);
              fVar51 = *pfVar5;
              fVar52 = pfVar5[1];
              fVar53 = pfVar5[2];
              fVar54 = pfVar5[3];
              pfVar5 = (float *)(param_3 + 0x50 + lVar69);
              fVar55 = *pfVar5;
              fVar56 = pfVar5[1];
              fVar57 = pfVar5[2];
              fVar58 = pfVar5[3];
              pfVar5 = (float *)(lVar67 + 0x60 + lVar69);
              fVar59 = *pfVar5;
              fVar60 = pfVar5[1];
              fVar61 = pfVar5[2];
              fVar62 = pfVar5[3];
              pfVar5 = (float *)(param_3 + 0x60 + lVar69);
              fVar63 = *pfVar5;
              fVar64 = pfVar5[1];
              fVar65 = pfVar5[2];
              fVar66 = pfVar5[3];
              fVar78 = fVar59 * fVar63 +
                       fVar43 * fVar47 + fVar27 * fVar31 + fVar11 * fVar15 + fVar78;
              fVar79 = fVar59 * fVar64 +
                       fVar43 * fVar48 + fVar27 * fVar32 + fVar11 * fVar16 + fVar79;
              fVar80 = fVar59 * fVar65 +
                       fVar43 * fVar49 + fVar27 * fVar33 + fVar11 * fVar17 + fVar80;
              fVar81 = fVar59 * fVar66 +
                       fVar43 * fVar50 + fVar27 * fVar34 + fVar11 * fVar18 + fVar81;
              fVar86 = fVar60 * fVar63 +
                       fVar44 * fVar47 + fVar28 * fVar31 + fVar12 * fVar15 + fVar86;
              fVar87 = fVar60 * fVar64 +
                       fVar44 * fVar48 + fVar28 * fVar32 + fVar12 * fVar16 + fVar87;
              fVar88 = fVar60 * fVar65 +
                       fVar44 * fVar49 + fVar28 * fVar33 + fVar12 * fVar17 + fVar88;
              fVar89 = fVar60 * fVar66 +
                       fVar44 * fVar50 + fVar28 * fVar34 + fVar12 * fVar18 + fVar89;
              fVar82 = fVar61 * fVar63 +
                       fVar45 * fVar47 + fVar29 * fVar31 + fVar13 * fVar15 + fVar82;
              fVar83 = fVar61 * fVar64 +
                       fVar45 * fVar48 + fVar29 * fVar32 + fVar13 * fVar16 + fVar83;
              fVar84 = fVar61 * fVar65 +
                       fVar45 * fVar49 + fVar29 * fVar33 + fVar13 * fVar17 + fVar84;
              fVar85 = fVar61 * fVar66 +
                       fVar45 * fVar50 + fVar29 * fVar34 + fVar13 * fVar18 + fVar85;
              pfVar5 = (float *)(lVar67 + 0x70 + lVar69);
              fVar11 = *pfVar5;
              fVar12 = pfVar5[1];
              fVar13 = pfVar5[2];
              fVar27 = pfVar5[3];
              pfVar5 = (float *)(param_3 + 0x70 + lVar69);
              fVar28 = *pfVar5;
              fVar29 = pfVar5[1];
              fVar43 = pfVar5[2];
              fVar44 = pfVar5[3];
              fVar74 = fVar62 * fVar63 +
                       fVar46 * fVar47 + fVar30 * fVar31 + fVar14 * fVar15 + fVar74;
              fVar75 = fVar62 * fVar64 +
                       fVar46 * fVar48 + fVar30 * fVar32 + fVar14 * fVar16 + fVar75;
              fVar76 = fVar62 * fVar65 +
                       fVar46 * fVar49 + fVar30 * fVar33 + fVar14 * fVar17 + fVar76;
              fVar77 = fVar62 * fVar66 +
                       fVar46 * fVar50 + fVar30 * fVar34 + fVar14 * fVar18 + fVar77;
              fVar94 = fVar11 * fVar28 +
                       fVar51 * fVar55 + fVar35 * fVar39 + fVar19 * fVar23 + fVar94;
              fVar95 = fVar11 * fVar29 +
                       fVar51 * fVar56 + fVar35 * fVar40 + fVar19 * fVar24 + fVar95;
              fVar96 = fVar11 * fVar43 +
                       fVar51 * fVar57 + fVar35 * fVar41 + fVar19 * fVar25 + fVar96;
              fVar97 = fVar11 * fVar44 +
                       fVar51 * fVar58 + fVar35 * fVar42 + fVar19 * fVar26 + fVar97;
              fVar102 = fVar12 * fVar28 +
                        fVar52 * fVar55 + fVar36 * fVar39 + fVar20 * fVar23 + fVar102;
              fVar103 = fVar12 * fVar29 +
                        fVar52 * fVar56 + fVar36 * fVar40 + fVar20 * fVar24 + fVar103;
              fVar104 = fVar12 * fVar43 +
                        fVar52 * fVar57 + fVar36 * fVar41 + fVar20 * fVar25 + fVar104;
              fVar105 = fVar12 * fVar44 +
                        fVar52 * fVar58 + fVar36 * fVar42 + fVar20 * fVar26 + fVar105;
              fVar98 = fVar13 * fVar28 +
                       fVar53 * fVar55 + fVar37 * fVar39 + fVar21 * fVar23 + fVar98;
              fVar99 = fVar13 * fVar29 +
                       fVar53 * fVar56 + fVar37 * fVar40 + fVar21 * fVar24 + fVar99;
              fVar100 = fVar13 * fVar43 +
                        fVar53 * fVar57 + fVar37 * fVar41 + fVar21 * fVar25 + fVar100;
              fVar101 = fVar13 * fVar44 +
                        fVar53 * fVar58 + fVar37 * fVar42 + fVar21 * fVar26 + fVar101;
              fVar90 = fVar27 * fVar28 +
                       fVar54 * fVar55 + fVar38 * fVar39 + fVar22 * fVar23 + fVar90;
              fVar91 = fVar27 * fVar29 +
                       fVar54 * fVar56 + fVar38 * fVar40 + fVar22 * fVar24 + fVar91;
              fVar92 = fVar27 * fVar43 +
                       fVar54 * fVar57 + fVar38 * fVar41 + fVar22 * fVar25 + fVar92;
              fVar93 = fVar27 * fVar44 +
                       fVar54 * fVar58 + fVar38 * fVar42 + fVar22 * fVar26 + fVar93;
              lVar73 = lVar73 + param_14;
              lVar69 = lVar69 + param_14 * 0x10;
            } while (lVar73 < param_13);
            fVar78 = fVar78 + fVar94;
            fVar79 = fVar79 + fVar95;
            fVar80 = fVar80 + fVar96;
            fVar81 = fVar81 + fVar97;
            fVar86 = fVar86 + fVar102;
            fVar87 = fVar87 + fVar103;
            fVar88 = fVar88 + fVar104;
            fVar89 = fVar89 + fVar105;
            fVar82 = fVar82 + fVar98;
            fVar83 = fVar83 + fVar99;
            fVar84 = fVar84 + fVar100;
            fVar85 = fVar85 + fVar101;
            fVar74 = fVar74 + fVar90;
            fVar75 = fVar75 + fVar91;
            fVar76 = fVar76 + fVar92;
            fVar77 = fVar77 + fVar93;
            lVar73 = lVar69 + lVar67;
            lVar69 = lVar69 + param_3;
          }
          if (param_13 < param_16) {
            lVar71 = 0;
            lVar70 = param_16 - param_13;
            do {
              pfVar5 = (float *)(lVar69 + lVar71);
              fVar90 = *pfVar5;
              fVar91 = pfVar5[1];
              fVar92 = pfVar5[2];
              fVar93 = pfVar5[3];
              pfVar5 = (float *)(lVar73 + lVar71);
              fVar94 = *pfVar5;
              fVar95 = pfVar5[1];
              fVar96 = pfVar5[2];
              fVar97 = pfVar5[3];
              fVar78 = fVar78 + fVar94 * fVar90;
              fVar79 = fVar79 + fVar94 * fVar91;
              fVar80 = fVar80 + fVar94 * fVar92;
              fVar81 = fVar81 + fVar94 * fVar93;
              fVar86 = fVar86 + fVar95 * fVar90;
              fVar87 = fVar87 + fVar95 * fVar91;
              fVar88 = fVar88 + fVar95 * fVar92;
              fVar89 = fVar89 + fVar95 * fVar93;
              fVar82 = fVar82 + fVar96 * fVar90;
              fVar83 = fVar83 + fVar96 * fVar91;
              fVar84 = fVar84 + fVar96 * fVar92;
              fVar85 = fVar85 + fVar96 * fVar93;
              fVar74 = fVar74 + fVar97 * fVar90;
              fVar75 = fVar75 + fVar97 * fVar91;
              fVar76 = fVar76 + fVar97 * fVar92;
              fVar77 = fVar77 + fVar97 * fVar93;
              lVar71 = lVar71 + 0x10;
              lVar70 = lVar70 + -1;
            } while (lVar70 != 0);
          }
          fVar90 = *pfVar72;
          fVar91 = pfVar72[1];
          fVar92 = pfVar72[2];
          fVar93 = pfVar72[3];
          *pfVar2 = fVar78 * param_5 + *pfVar2;
          pfVar2[1] = fVar79 * param_5 + pfVar2[1];
          pfVar2[2] = fVar80 * param_5 + pfVar2[2];
          pfVar2[3] = fVar81 * param_5 + pfVar2[3];
          *pfVar72 = fVar86 * param_5 + fVar90;
          pfVar72[1] = fVar87 * param_5 + fVar91;
          pfVar72[2] = fVar88 * param_5 + fVar92;
          pfVar72[3] = fVar89 * param_5 + fVar93;
          fVar78 = *pfVar4;
          fVar79 = pfVar4[1];
          fVar80 = pfVar4[2];
          fVar81 = pfVar4[3];
          *pfVar3 = fVar82 * param_5 + *pfVar3;
          pfVar3[1] = fVar83 * param_5 + pfVar3[1];
          pfVar3[2] = fVar84 * param_5 + pfVar3[2];
          pfVar3[3] = fVar85 * param_5 + pfVar3[3];
          *pfVar4 = fVar74 * param_5 + fVar78;
          pfVar4[1] = fVar75 * param_5 + fVar79;
          pfVar4[2] = fVar76 * param_5 + fVar80;
          pfVar4[3] = fVar77 * param_5 + fVar81;
          local_140 = local_140 + 4;
          lVar67 = lVar67 + param_9 * 0x10;
        } while ((longlong)local_140 < param_17);
      }
      if (param_17 < param_15) {
        pfVar2 = (float *)(lVar1 + param_6 * param_8 * 4);
        lVar67 = param_11 * 4 + param_17 * param_9 * 4 + param_4;
        lVar73 = param_17;
        do {
          pfVar72 = pfVar2;
          if (param_13 < 1) {
            lVar69 = param_4 + param_11 * 4 + lVar73 * param_9 * 4;
            fVar74 = 0.0;
            fVar75 = 0.0;
            fVar76 = 0.0;
            fVar77 = 0.0;
          }
          else {
            fVar74 = 0.0;
            fVar75 = 0.0;
            fVar76 = 0.0;
            fVar77 = 0.0;
            lVar70 = 0;
            lVar69 = 0;
            do {
              lVar71 = lVar69;
              fVar78 = *(float *)(lVar67 + lVar71);
              fVar79 = *(float *)(lVar67 + 4 + lVar71);
              fVar80 = *(float *)(lVar67 + 8 + lVar71);
              fVar81 = *(float *)(lVar67 + 0xc + lVar71);
              pfVar10 = (float *)(param_3 + lVar71 * 4);
              pfVar3 = (float *)(param_3 + 0x10 + lVar71 * 4);
              pfVar4 = (float *)(param_3 + 0x20 + lVar71 * 4);
              pfVar5 = (float *)(param_3 + 0x30 + lVar71 * 4);
              pfVar6 = (float *)(param_3 + 0x40 + lVar71 * 4);
              fVar82 = *(float *)(lVar67 + 0x10 + lVar71);
              pfVar7 = (float *)(param_3 + 0x50 + lVar71 * 4);
              fVar83 = *(float *)(lVar67 + 0x14 + lVar71);
              pfVar8 = (float *)(param_3 + 0x60 + lVar71 * 4);
              fVar84 = *(float *)(lVar67 + 0x18 + lVar71);
              pfVar9 = (float *)(param_3 + 0x70 + lVar71 * 4);
              fVar85 = *(float *)(lVar67 + 0x1c + lVar71);
              fVar74 = fVar85 * *pfVar9 +
                       fVar84 * *pfVar8 +
                       fVar83 * *pfVar7 +
                       fVar82 * *pfVar6 +
                       fVar81 * *pfVar5 +
                       fVar80 * *pfVar4 + fVar79 * *pfVar3 + *pfVar10 * fVar78 + fVar74;
              fVar75 = fVar85 * pfVar9[1] +
                       fVar84 * pfVar8[1] +
                       fVar83 * pfVar7[1] +
                       fVar82 * pfVar6[1] +
                       fVar81 * pfVar5[1] +
                       fVar80 * pfVar4[1] + fVar79 * pfVar3[1] + pfVar10[1] * fVar78 + fVar75;
              fVar76 = fVar85 * pfVar9[2] +
                       fVar84 * pfVar8[2] +
                       fVar83 * pfVar7[2] +
                       fVar82 * pfVar6[2] +
                       fVar81 * pfVar5[2] +
                       fVar80 * pfVar4[2] + fVar79 * pfVar3[2] + pfVar10[2] * fVar78 + fVar76;
              fVar77 = fVar85 * pfVar9[3] +
                       fVar84 * pfVar8[3] +
                       fVar83 * pfVar7[3] +
                       fVar82 * pfVar6[3] +
                       fVar81 * pfVar5[3] +
                       fVar80 * pfVar4[3] + fVar79 * pfVar3[3] + pfVar10[3] * fVar78 + fVar77;
              pfVar72 = pfVar72 + param_14 * 4;
              lVar70 = lVar70 + param_14;
              lVar69 = lVar71 + param_14 * 4;
            } while (lVar70 < param_13);
            lVar69 = lVar71 + lVar67 + param_14 * 4;
          }
          lVar70 = param_2[1] * lVar73 * 4 + *param_2;
          if (param_13 < param_16) {
            lVar71 = 0;
            do {
              fVar78 = *(float *)(lVar69 + lVar71 * 4);
              fVar74 = fVar74 + fVar78 * *pfVar72;
              fVar75 = fVar75 + fVar78 * pfVar72[1];
              fVar76 = fVar76 + fVar78 * pfVar72[2];
              fVar77 = fVar77 + fVar78 * pfVar72[3];
              pfVar72 = pfVar72 + 4;
              lVar71 = lVar71 + 1;
            } while (param_16 - param_13 != lVar71);
          }
          pfVar72 = (float *)(lVar70 + param_6 * 4);
          fVar78 = pfVar72[1];
          fVar79 = pfVar72[2];
          fVar80 = pfVar72[3];
          pfVar3 = (float *)(lVar70 + param_6 * 4);
          *pfVar3 = fVar74 * param_5 + *pfVar72;
          pfVar3[1] = fVar75 * param_5 + fVar78;
          pfVar3[2] = fVar76 * param_5 + fVar79;
          pfVar3[3] = fVar77 * param_5 + fVar80;
          lVar73 = lVar73 + 1;
          lVar67 = lVar67 + param_9 * 4;
        } while (lVar73 != param_15);
      }
      param_6 = param_6 + 4;
      param_3 = param_3 + param_8 * 0x10;
    } while (param_6 < param_7);
  }
  return;
}



// FUNCTION 1457c0d20 FUN_1457c0d20 body=21 status=ok
// SIG undefined FUN_1457c0d20(void)

undefined8 FUN_1457c0d20(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1457c0d40 FUN_1457c0d40 body=125 status=ok
// SIG undefined FUN_1457c0d40(void)

void FUN_1457c0d40(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  if ((*(char *)(param_1 + 0x178) != '\x03') && (lVar1 = *(longlong *)(param_1 + 0x168), lVar1 != 0)
     ) {
    lVar5 = FUN_144a2f878();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      iVar2 = FUN_14042831e(lVar1);
      iVar3 = FUN_1403ae46b();
      if (iVar2 == iVar3) {
        uVar4 = FUN_146229be8(lVar1);
        FUN_141020220(lVar1,uVar4);
      }
    }
  }
  FUN_140ebc690(param_1,param_2);
  return;
}



// FUNCTION 1457c0dbe FUN_1457c0dbe body=40 status=ok
// SIG undefined FUN_1457c0dbe(void)

undefined8 FUN_1457c0dbe(undefined8 param_1,int param_2)

{
  FUN_1457c0de6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457c0de6 FUN_1457c0de6 body=156 status=ok
// SIG undefined FUN_1457c0de6(void)

void FUN_1457c0de6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab26d80;
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_1457c0f52(param_1 + 0x1d);
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_1457c0f88(param_1 + 0x12);
  FUN_140ebe7a0(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1457c0e82(param_1);
  return;
}



// FUNCTION 1457c0e82 FUN_1457c0e82 body=63 status=ok
// SIG undefined FUN_1457c0e82(void)

void FUN_1457c0e82(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab24880;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1457c0ec2(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1457c0ec2 FUN_1457c0ec2 body=53 status=ok
// SIG undefined FUN_1457c0ec2(void)

void FUN_1457c0ec2(longlong *param_1)

{
  FUN_1457c0ef8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457c0ef8 FUN_1457c0ef8 body=90 status=ok
// SIG undefined FUN_1457c0ef8(void)

void FUN_1457c0ef8(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
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



// FUNCTION 1457c0f52 FUN_1457c0f52 body=53 status=ok
// SIG undefined FUN_1457c0f52(void)

void FUN_1457c0f52(longlong *param_1)

{
  FUN_1457c0fbe();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457c0f88 FUN_1457c0f88 body=53 status=ok
// SIG undefined FUN_1457c0f88(void)

void FUN_1457c0f88(longlong *param_1)

{
  FUN_1457c1018();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457c0fbe FUN_1457c0fbe body=90 status=ok
// SIG undefined FUN_1457c0fbe(void)

void FUN_1457c0fbe(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 1457c1018 FUN_1457c1018 body=90 status=ok
// SIG undefined FUN_1457c1018(void)

void FUN_1457c1018(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 1457c1072 FUN_1457c1072 body=32 status=ok
// SIG undefined FUN_1457c1072(void)

undefined8 FUN_1457c1072(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 0x858) == 0) ||
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x858) + 0x13c8), lVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x56));
  }
  return uVar2;
}



// FUNCTION 1457c1092 FUN_1457c1092 body=94 status=ok
// SIG undefined FUN_1457c1092(void)

undefined8 * FUN_1457c1092(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x80);
  FUN_140841c04(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b455d40;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  return puVar1;
}



// FUNCTION 1457c10f0 FUN_1457c10f0 body=315 status=ok
// SIG undefined FUN_1457c10f0(void)

void FUN_1457c10f0(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = *param_2;
    if ((uVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar6);
    }
    uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
    iVar5 = *(int *)((longlong)plVar4 + uVar6 * 4);
    if (iVar5 != -1) {
      puVar8 = (ulonglong *)((longlong)plVar4 + uVar6 * 4);
      bVar2 = DAT_14c950c29;
      do {
        puVar7 = (ulonglong *)((longlong)iVar5 * 0x18 + *param_1);
        uVar6 = *param_2;
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        uVar1 = *puVar7;
        if (((bVar2 & 1) != 0) && (uVar1 != 0)) {
          FUN_1456cec3c(uVar1);
          bVar2 = DAT_14c950c29;
        }
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        if (uVar1 == uVar6) {
          FUN_1488c0054(param_1,(int)*puVar8);
          return;
        }
        iVar5 = (int)puVar7[2];
        puVar8 = puVar7 + 2;
      } while (iVar5 != -1);
    }
  }
  return;
}



// FUNCTION 1457c122c FUN_1457c122c body=310 status=ok
// SIG undefined FUN_1457c122c(void)

undefined8 FUN_1457c122c(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != 0) {
    FUN_1456cec3c(param_2);
  }
  local_20 = param_2;
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != 0) {
    FUN_1456cec3c(param_2);
  }
  if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  iVar3 = FUN_143d9870a((longlong *)(param_1 + 0xf8),uVar2 >> 0x10 ^ uVar2,&local_20);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)(param_1 + 0xf8);
    if ((lVar1 + (longlong)iVar3 * 0x18 + 8U & 0xfffffffffffffff7) != 0) {
      lVar1 = lVar1 + (longlong)iVar3 * 0x18;
      uVar4 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(int *)(lVar1 + 0xc) == 0);
      goto LAB_1457c12f2;
    }
  }
  uVar4 = 0;
LAB_1457c12f2:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c1364 FUN_1457c1364 body=234 status=ok
// SIG undefined FUN_1457c1364(void)

longlong * FUN_1457c1364(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b418a90;
  plVar1 = plVar4 + 2;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b418ab0;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1457c1452(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c1452 FUN_1457c1452 body=162 status=ok
// SIG undefined FUN_1457c1452(void)

void FUN_1457c1452(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1457c1491;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1457c1491;
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
LAB_1457c1491:
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
                    /* WARNING: Could not recover jumptable at 0x0001457c14f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1457c14f4 FUN_1457c14f4 body=144 status=ok
// SIG undefined FUN_1457c14f4(void)

void FUN_1457c14f4(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    uVar1 = FUN_140ec3c88(param_1);
    plVar2 = (longlong *)FUN_140ec3c65(uVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x78))(plVar2,param_1 + 0x88,*(undefined8 *)(param_1 + 0xc0));
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
  }
  local_20 = 0;
  local_18 = 0;
  FUN_1457c1586(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c1586 FUN_1457c1586 body=586 status=ok
// SIG undefined FUN_1457c1586(void)

void FUN_1457c1586(longlong param_1,longlong *param_2)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68 [32];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = (undefined1 *)0x0;
  local_40 = 0x400000000;
  if ((longlong)(int)param_2[1] != 0) {
    lVar7 = *param_2;
    lVar4 = (longlong)(int)param_2[1] << 3;
    do {
      lVar6 = FUN_14479d2ce(lVar7);
      if (lVar6 == 0) {
LAB_1457c1645:
        lVar6 = FUN_14479d2ce(lVar7);
        if (lVar6 != 0) {
          lVar3 = FUN_144a78d6a();
          if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
             (lVar6 = *(longlong *)(lVar6 + 0xa8), lVar6 != 0)) goto LAB_1457c167a;
        }
      }
      else {
        lVar3 = FUN_144a6c4d8();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) goto LAB_1457c1645;
LAB_1457c167a:
        lVar3 = (longlong)(int)local_40;
        uVar2 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,uVar2);
        if (local_40._4_4_ < uVar2) {
          FUN_14885072a(local_68);
        }
        puVar5 = local_48;
        if (local_48 == (undefined1 *)0x0) {
          puVar5 = local_68;
        }
        *(longlong *)(puVar5 + lVar3 * 8) = lVar6;
      }
      lVar7 = lVar7 + 8;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
    lVar7 = (longlong)(int)local_40;
    puVar5 = local_68;
    if (local_48 != (undefined1 *)0x0) {
      puVar5 = local_48;
    }
    if (lVar7 != 0) {
      lVar4 = 0;
      do {
        if (*(longlong *)(puVar5 + lVar4) != 0) {
          FUN_140929c72();
        }
        FUN_1488fc576(param_1);
        lVar4 = lVar4 + 8;
      } while (lVar7 * 8 != lVar4);
    }
  }
  if (0 < (longlong)*(int *)(param_1 + 0x80)) {
    lVar7 = (longlong)*(int *)(param_1 + 0x80);
    do {
      lVar4 = FUN_14479d2ce(lVar7 * 8 + -8 + *(longlong *)(param_1 + 0x78));
      if (lVar4 != 0) {
        puVar5 = local_48;
        if (local_48 == (undefined1 *)0x0) {
          puVar5 = local_68;
        }
        if ((longlong)(int)local_40 != 0) {
          lVar6 = 0;
          do {
            if (*(longlong *)(puVar5 + lVar6) == lVar4) goto LAB_1457c1760;
            lVar6 = lVar6 + 8;
          } while ((longlong)(int)local_40 * 8 != lVar6);
        }
        FUN_140929c72();
      }
      FUN_1488fc724(param_1);
LAB_1457c1760:
      bVar1 = 1 < lVar7;
      lVar7 = lVar7 + -1;
    } while (bVar1);
  }
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c17d2 FUN_1457c17d2 body=567 status=ok
// SIG undefined FUN_1457c17d2(void)

void FUN_1457c17d2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined *local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)(param_1 + 0xa0);
  cVar5 = FUN_1457c1a1c(param_1,plVar3);
  if (cVar5 != '\0') {
    lVar7 = *(longlong *)(param_1 + 0xa0);
    if (DAT_14c950c29 == '\x01') {
      if (lVar7 == 0) {
        lVar7 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar7 = *plVar3;
      }
    }
    *(longlong *)(param_1 + 0x30) = lVar7;
    local_48 = (longlong *)0x0;
    uStack_40 = 0;
    lVar7 = FUN_14001cc68(0x10,0x10);
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    FUN_1457c1a0a(lVar7,DAT_14c892f44);
    plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_14b988f30;
    plVar8[2] = lVar7;
    uStack_40 = CONCAT44(uStack_40._4_4_,1);
    FUN_1457c1ac4(&local_48,0);
    *local_48 = lVar7;
    local_48[1] = (longlong)plVar8;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
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
    lVar7 = FUN_14001cc68(0x18,0x10);
    local_58 = &DAT_14b982510;
    local_50 = 0x20;
    FUN_1457c1a62(lVar7);
    plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
    uVar4 = uStack_40;
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_14b988f50;
    plVar8[2] = lVar7;
    lVar9 = (longlong)(int)uStack_40;
    uVar6 = (int)uStack_40 + 1;
    uStack_40 = CONCAT44(uStack_40._4_4_,uVar6);
    if (uStack_40._4_4_ < uVar6) {
      FUN_1457c1ac4(&local_48,uVar4 & 0xffffffff);
    }
    local_48[lVar9 * 2] = lVar7;
    local_48[lVar9 * 2 + 1] = (longlong)plVar8;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
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
    FUN_1457c1bfa(*plVar3,&local_48);
    FUN_140b4032f(local_48,uStack_40 & 0xffffffff);
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c1a0a FUN_1457c1a0a body=18 status=ok
// SIG undefined FUN_1457c1a0a(void)

void FUN_1457c1a0a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_14ae37b40;
  param_1[1] = param_2;
  return;
}



// FUNCTION 1457c1a1c FUN_1457c1a1c body=69 status=ok
// SIG undefined FUN_1457c1a1c(void)

ulonglong FUN_1457c1a1c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  
  if (*param_2 == 0) {
    lVar1 = FUN_1457c1b48();
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar1 != 0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *param_2 = lVar1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1457c1a62 FUN_1457c1a62 body=98 status=ok
// SIG undefined FUN_1457c1a62(void)

undefined8 * FUN_1457c1a62(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &PTR_FUN_14ae37b20;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1);
  }
  return param_1;
}



// FUNCTION 1457c1ac4 FUN_1457c1ac4 body=132 status=ok
// SIG undefined FUN_1457c1ac4(void)

void FUN_1457c1ac4(longlong param_1,int param_2)

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



// FUNCTION 1457c1b48 FUN_1457c1b48 body=177 status=ok
// SIG undefined FUN_1457c1b48(void)

undefined8 FUN_1457c1b48(undefined8 param_1)

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
  local_b8 = FUN_14130c5c8();
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



// FUNCTION 1457c1bfa FUN_1457c1bfa body=202 status=ok
// SIG undefined FUN_1457c1bfa(void)

void FUN_1457c1bfa(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  FUN_140ec5332(param_1 + 0x238);
  uVar2 = *(uint *)(param_1 + 0x240);
  uVar6 = (ulonglong)uVar2;
  if (-1 < (int)uVar2) {
    plVar1 = (longlong *)(param_1 + 0x248);
    if (*(int *)(param_1 + 0x254) < (int)uVar2) {
      FUN_1457c1cc6(plVar1);
      uVar6 = (ulonglong)*(uint *)(param_1 + 0x240);
    }
    if (0 < (int)uVar6) {
      uVar8 = uVar6 + 1;
      lVar7 = uVar6 * 0x10 + -8;
      do {
        lVar4 = *(longlong *)(param_1 + 0x238);
        iVar3 = *(int *)(param_1 + 0x250);
        *(uint *)(param_1 + 0x250) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x254) < iVar3 + 1U) {
          FUN_1457c1ac4(plVar1,iVar3);
        }
        lVar5 = *plVar1;
        *(undefined8 *)(lVar5 + (longlong)iVar3 * 0x10) = *(undefined8 *)(lVar4 + -8 + lVar7);
        lVar4 = *(longlong *)(lVar4 + lVar7);
        *(longlong *)(lVar5 + 8 + (longlong)iVar3 * 0x10) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        uVar8 = uVar8 - 1;
        lVar7 = lVar7 + -0x10;
      } while (1 < uVar8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar6);
}



// FUNCTION 1457c1cc6 FUN_1457c1cc6 body=95 status=ok
// SIG undefined FUN_1457c1cc6(void)

void FUN_1457c1cc6(longlong param_1,uint param_2)

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



// FUNCTION 1457c1d26 FUN_1457c1d26 body=40 status=ok
// SIG undefined FUN_1457c1d26(void)

undefined8 FUN_1457c1d26(undefined8 param_1,int param_2)

{
  FUN_1457c1d4e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457c1d4e FUN_1457c1d4e body=116 status=ok
// SIG undefined FUN_1457c1d4e(void)

void FUN_1457c1d4e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b841860;
  param_1[6] = &PTR_FUN_14b841b20;
  param_1[7] = &PTR_LAB_14b841bb0;
  param_1[9] = &PTR_FUN_14b841c00;
  FUN_1408bd9b6(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140bf96d8(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1457c1dc2(param_1);
  return;
}



// FUNCTION 1457c1dc2 FUN_1457c1dc2 body=30 status=ok
// SIG undefined FUN_1457c1dc2(void)

void FUN_1457c1dc2(longlong param_1)

{
  FUN_140af926c(param_1 + 0x38);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1457c1de0 thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 1457c1de6 FUN_1457c1de6 body=276 status=ok
// SIG undefined FUN_1457c1de6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457c1de6(void)

{
  FUN_1457c1efa();
  _DAT_14caa09d0 = L"BufferIndex";
  DAT_14caa09fa = FUN_140850cc5();
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
  _DAT_14caa09d8 = &DAT_14ca84cb0;
  _DAT_14caa09e8 = &LAB_14682652b;
  _DAT_14caa09f0 = 0x100000000;
  _DAT_14caa09f8 = 0;
  _DAT_14caa09e0 = DAT_14ca9ee68;
  DAT_14ca9ee68 = &DAT_14caa09d0;
  return;
}



// FUNCTION 1457c1efa FUN_1457c1efa body=276 status=ok
// SIG undefined FUN_1457c1efa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457c1efa(void)

{
  FUN_1457c200e();
  _DAT_14caa0a00 = L"BaseIndex";
  DAT_14caa0a2a = FUN_140850cc5();
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
  _DAT_14caa0a08 = &DAT_14ca84cb0;
  _DAT_14caa0a18 = &LAB_14682652b;
  _DAT_14caa0a20 = &DAT_100000002;
  _DAT_14caa0a28 = 0;
  _DAT_14caa0a10 = DAT_14ca9ee68;
  DAT_14ca9ee68 = &DAT_14caa0a00;
  return;
}



// FUNCTION 1457c200e FUN_1457c200e body=271 status=ok
// SIG undefined FUN_1457c200e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457c200e(void)

{
  _DAT_14caa0a30 = L"NumBytes";
  DAT_14caa0a5a = FUN_140850cc5();
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
  _DAT_14caa0a38 = &DAT_14ca84cb0;
  _DAT_14caa0a48 = &LAB_14682652b;
  _DAT_14caa0a50 = &DAT_100000004;
  _DAT_14caa0a58 = 0;
  _DAT_14caa0a40 = DAT_14ca9ee68;
  DAT_14ca9ee68 = &DAT_14caa0a30;
  return;
}



// FUNCTION 1457c211e FUN_1457c211e body=200 status=ok
// SIG undefined FUN_1457c211e(void)

void FUN_1457c211e(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_1457c21e6(param_1 + 0x4f);
  lVar1 = param_1[0x4d];
  if (lVar1 != 0) {
    lVar4 = FUN_1401242c6();
    if ((((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)) && (param_1[0x4d] != 0)) {
      param_1[0x4c] = 0;
    }
  }
  uVar3 = FUN_14042356a(param_3);
  cVar2 = FUN_1409a445e(param_1,param_3,uVar3);
  if (cVar2 != '\0') {
    FUN_1409a42f6(param_1,param_2);
  }
  FUN_1457c2314(param_1,param_2,param_3);
  uVar3 = (**(code **)(*param_1 + 0x100))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001457c21a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))(param_1,param_3,uVar3,*(code **)(*param_1 + 0xf0));
  return;
}



// FUNCTION 1457c21e6 FUN_1457c21e6 body=68 status=ok
// SIG undefined FUN_1457c21e6(void)

void FUN_1457c21e6(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1491c6420();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1457c222a FUN_1457c222a body=192 status=ok
// SIG undefined FUN_1457c222a(void)

void FUN_1457c222a(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_1457c22ea(param_1 + 0x40,*(undefined4 *)(param_1 + 0x20));
  FUN_1457c22ea(param_1 + 0x50,*(undefined4 *)(param_1 + 0x20));
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar3 = 0;
    do {
      uVar2 = FUN_144a8e29b(*(undefined8 *)(param_2 + 0x10),
                            *(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8),3);
      iVar1 = *(int *)(param_1 + 0x48);
      *(uint *)(param_1 + 0x48) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
        FUN_140001000(param_1 + 0x40,iVar1);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar1 * 8) = uVar2;
      iVar1 = *(int *)(param_1 + 0x58);
      *(uint *)(param_1 + 0x58) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x5c) < iVar1 + 1U) {
        FUN_140001000(param_1 + 0x50,iVar1);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar1 * 8) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 1457c22ea FUN_1457c22ea body=41 status=ok
// SIG undefined FUN_1457c22ea(void)

void FUN_1457c22ea(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_140005516();
  return;
}



// FUNCTION 1457c2314 FUN_1457c2314 body=579 status=ok
// SIG undefined FUN_1457c2314(void)

void FUN_1457c2314(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140ec6c7a();
  iVar2 = (**(code **)(*DAT_14cc06908 + 0xb0))();
  *(bool *)((longlong)param_1 + 0x252) = iVar2 != 0;
  local_38 = 0;
  FUN_14485c47a(&local_38,param_3);
  param_1[0x4b] = local_38;
  if (*(char *)((longlong)param_1 + 0x252) != '\x01') goto LAB_1457c2380;
  lVar3 = FUN_14001cc68(400,0x10);
  FUN_1491993d4(lVar3);
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14bb76010;
  plVar7[2] = lVar3;
  if ((lVar3 != 0) &&
     (((*(longlong *)(lVar3 + 8) == 0 || (*(longlong *)(lVar3 + 0x10) == 0)) ||
      (*(int *)(*(longlong *)(lVar3 + 0x10) + 8) < 1)))) {
    if (plVar7 == (longlong *)0x0) {
      *(longlong *)(lVar3 + 8) = lVar3;
      plVar8 = *(longlong **)(lVar3 + 0x10);
      if (plVar8 != (longlong *)0x0) {
LAB_1457c24a9:
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
        *(longlong **)(lVar3 + 0x10) = plVar7;
        if (plVar7 != (longlong *)0x0) goto LAB_1457c24d8;
      }
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      *(longlong *)(lVar3 + 8) = lVar3;
      if (*(longlong **)(lVar3 + 0x10) != plVar7) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar8 = *(longlong **)(lVar3 + 0x10);
        if (plVar8 != (longlong *)0x0) goto LAB_1457c24a9;
        *(longlong **)(lVar3 + 0x10) = plVar7;
      }
LAB_1457c24d8:
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
  }
  param_1[0x45] = lVar3;
  plVar8 = (longlong *)param_1[0x46];
  if (plVar7 == plVar8) {
    if (plVar7 == (longlong *)0x0) goto LAB_1457c2380;
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_1457c2380;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar8 = plVar7;
  }
  else {
    param_1[0x46] = (longlong)plVar7;
    if (plVar8 == (longlong *)0x0) goto LAB_1457c2380;
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_1457c2380;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
LAB_1457c2380:
  lVar3 = FUN_144a49ec8(param_3);
  lVar4 = (**(code **)(*param_1 + 0x108))(param_1);
  if (((lVar3 != 0) && (lVar3 = FUN_144a81888(lVar3), lVar4 != 0)) && (lVar3 != 0)) {
    uVar5 = FUN_140ec6e36(lVar4);
    uVar6 = FUN_144a49ec8(param_3);
    FUN_1457c25c2(uVar5,&DAT_14cc06918,uVar6);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c256e FUN_1457c256e body=84 status=ok
// SIG undefined FUN_1457c256e(void)

undefined8 * FUN_1457c256e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0xa0);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1491c0ce4(param_2,iVar1,0);
    FUN_1491c0d46(*param_2,uVar2,iVar1);
  }
  return param_2;
}



// FUNCTION 1457c25c2 FUN_1457c25c2 body=257 status=ok
// SIG undefined FUN_1457c25c2(void)

undefined8 FUN_1457c25c2(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  undefined8 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457c2c1a();
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    lVar4 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x68);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x70) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x28);
      do {
        if (*(longlong *)(lVar4 + (longlong)iVar6 * 0x18) == lVar1) {
          uVar3 = 0;
          goto LAB_1457c2628;
        }
        iVar6 = *(int *)(lVar4 + (longlong)iVar6 * 0x18 + 0x10);
      } while (iVar6 != -1);
    }
  }
  local_48 = 0;
  FUN_14485c47a(&local_48,param_3);
  local_40 = param_2;
  local_38 = &local_48;
  FUN_1457c277e((longlong *)(param_1 + 0x28),local_2c);
  uVar3 = 1;
LAB_1457c2628:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1457c26c4 FUN_1457c26c4 body=184 status=ok
// SIG undefined FUN_1457c26c4(void)

undefined8 FUN_1457c26c4(undefined8 param_1)

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
  local_b8 = FUN_145908e24();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 0x40;
  local_90 = 0;
  uStack_88 = 0;
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



// FUNCTION 1457c277e FUN_1457c277e body=332 status=ok
// SIG undefined FUN_1457c277e(void)

undefined4 * FUN_1457c277e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457c294e(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_1457c28cc(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1457c2a36(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c28cc FUN_1457c28cc body=130 status=ok
// SIG undefined FUN_1457c28cc(void)

undefined8 FUN_1457c28cc(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14691225c((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1457c294e FUN_1457c294e body=231 status=ok
// SIG undefined FUN_1457c294e(void)

int * FUN_1457c294e(longlong *param_1,int *param_2)

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
      FUN_1403951a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1457c2a36 FUN_1457c2a36 body=482 status=ok
// SIG undefined FUN_1457c2a36(void)

void FUN_1457c2a36(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 1457c2c1a FUN_1457c2c1a body=512 status=ok
// SIG undefined FUN_1457c2c1a(void)

void FUN_1457c2c1a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = 0;
  uStack_60 = 0;
  plVar1 = (longlong *)(param_1 + 0x28);
  local_48 = param_1 + 0x38;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_1449c0562(&local_50);
  }
  local_90 = local_40;
  iStack_8c = iStack_3c;
  local_88 = local_38;
  local_84 = local_34;
  local_a0 = local_50;
  local_98 = local_48;
  local_70 = 0;
  local_a8 = plVar1;
  local_80 = plVar1;
  local_78 = plVar1;
  if (iStack_3c < *(int *)(local_48 + 0x18)) {
    do {
      cVar4 = FUN_144729dda(*local_a8 + (longlong)iStack_8c * 0x18 + 8);
      uVar3 = uStack_60;
      if (cVar4 == '\0') {
        lVar6 = (longlong)iStack_8c;
        lVar2 = *local_a8;
        lVar7 = (longlong)(int)uStack_60;
        uVar5 = (int)uStack_60 + 1;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar5);
        if (uStack_60._4_4_ < uVar5) {
          FUN_1446f84a2(&local_68,uVar3 & 0xffffffff);
        }
        *(undefined8 *)(local_68 + lVar7 * 8) = *(undefined8 *)(lVar6 * 0x18 + lVar2);
      }
      local_90 = local_90 & ~local_a0._4_4_;
      FUN_1449c0562(&local_a0);
    } while (iStack_8c < *(int *)(local_98 + 0x18));
    if (((local_70 & 1) != 0) && (local_70._1_1_ == '\x01')) {
      FUN_1469122ce(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
    }
  }
  lVar2 = local_68;
  lVar6 = (longlong)(int)uStack_60;
  if (lVar6 != 0) {
    lVar7 = 0;
    do {
      FUN_146912312(plVar1,*(undefined8 *)(lVar2 + lVar7));
      lVar7 = lVar7 + 8;
    } while (lVar6 * 8 != lVar7);
  }
  if (local_68 != 0) {
    FUN_1400020a8(local_68);
  }
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457c2e1c FUN_1457c2e1c body=14 status=ok
// SIG undefined FUN_1457c2e1c(void)

void FUN_1457c2e1c(undefined8 *param_1)

{
  *param_1 = DAT_14cb76310;
  return;
}



// FUNCTION 1457c2e2a FUN_1457c2e2a body=448 status=ok
// SIG undefined FUN_1457c2e2a(void)

void FUN_1457c2e2a(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x80;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x7c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x78 + lVar7) =
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



// FUNCTION 1457c2fec FUN_1457c2fec body=40 status=ok
// SIG undefined FUN_1457c2fec(void)

undefined8 FUN_1457c2fec(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457c3014 FUN_1457c3014 body=48 status=ok
// SIG undefined FUN_1457c3014(void)

void FUN_1457c3014(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xd8);
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b603260;
  return;
}



// FUNCTION 1457c304a FUN_1457c304a body=118 status=ok
// SIG undefined FUN_1457c304a(void)

void FUN_1457c304a(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x14d0))();
  if (plVar1 != (longlong *)0x0) {
    local_28[0] = 0;
    local_28[1] = 0;
    (**(code **)(*plVar1 + 0x80))(plVar1,local_28);
    FUN_1457c30c2(param_1,local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c30c2 FUN_1457c30c2 body=119 status=ok
// SIG undefined FUN_1457c30c2(void)

void FUN_1457c30c2(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a787a6(local_28);
  uVar1 = FUN_14477b072(param_1,DAT_14cb61cb0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c3158 FUN_1457c3158 body=40 status=ok
// SIG undefined FUN_1457c3158(void)

undefined8 FUN_1457c3158(undefined8 param_1,int param_2)

{
  FUN_1457c3180();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457c3180 FUN_1457c3180 body=99 status=ok
// SIG undefined FUN_1457c3180(void)

void FUN_1457c3180(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b9014b0;
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
  FUN_140ed3acd(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140fa3ec8(param_1);
  return;
}



// FUNCTION 1457c31e4 FUN_1457c31e4 body=54 status=ok
// SIG undefined FUN_1457c31e4(void)

void FUN_1457c31e4(void)

{
  FUN_140ed4f64();
  if (DAT_14cb3a3a8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb3a388 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457c321a FUN_1457c321a body=112 status=ok
// SIG undefined FUN_1457c321a(void)

void FUN_1457c321a(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x1c0,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 6;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x1c0,8);
  }
  return;
}



// FUNCTION 1457c328a FUN_1457c328a body=149 status=ok
// SIG undefined FUN_1457c328a(void)

void FUN_1457c328a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x170,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x170)) {
      uVar5 = uVar4 / 0x170 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x170,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457c3320 FUN_1457c3320 body=297 status=ok
// SIG undefined FUN_1457c3320(void)

undefined4 * FUN_1457c3320(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  FUN_1457c3778(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(uint *)*param_3;
  FUN_1457c34f4(local_40 + 2,uVar1);
  local_40[0x52] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_1457c344a(param_1,uVar5,local_40,&local_4c);
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
      local_40[0x53] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[0x52] =
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
      FUN_1457c3c64(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c344a FUN_1457c344a body=169 status=ok
// SIG undefined FUN_1457c344a(void)

undefined8 FUN_1457c344a(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x150);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x150) == *param_3) {
          FUN_140a31f9c((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x148);
          FUN_14579c2ac(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x148);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1457c34f4 FUN_1457c34f4 body=200 status=ok
// SIG undefined FUN_1457c34f4(void)

undefined4 * FUN_1457c34f4(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  *(undefined8 *)(param_2 + 4) = 0;
  FUN_1457c36bc(param_1 + 6,param_2 + 6);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  param_1[0x20] = param_2[0x20];
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_2 + 0x22) = 0;
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  *(undefined8 *)(param_2 + 0x24) = 0;
  FUN_1457c35bc(param_1 + 0x26,param_2 + 0x26);
  FUN_1457c363c(param_1 + 0x3a,param_2 + 0x3a);
  *(undefined1 *)(param_1 + 0x4e) = *(undefined1 *)(param_2 + 0x4e);
  return param_1;
}



// FUNCTION 1457c35bc FUN_1457c35bc body=127 status=ok
// SIG undefined FUN_1457c35bc(void)

undefined8 * FUN_1457c35bc(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1457c38f6();
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



// FUNCTION 1457c363c FUN_1457c363c body=127 status=ok
// SIG undefined FUN_1457c363c(void)

undefined8 * FUN_1457c363c(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1457c3aac();
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



// FUNCTION 1457c36bc FUN_1457c36bc body=188 status=ok
// SIG undefined FUN_1457c36bc(void)

void FUN_1457c36bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[4] = 0;
  param_1[4] = param_2[4];
  param_2[4] = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_2[5] = 0;
  param_1[6] = 0;
  param_1[6] = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  param_2[7] = 0;
  *param_2 = 2;
  param_2[1] = 2;
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0xffffffff;
  param_1[8] = 0;
  param_1[8] = param_2[8];
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  param_2[9] = 0;
  param_1[10] = 0;
  param_1[10] = param_2[10];
  param_2[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  param_2[0xb] = 0;
  return;
}



// FUNCTION 1457c3778 FUN_1457c3778 body=236 status=ok
// SIG undefined FUN_1457c3778(void)

int * FUN_1457c3778(longlong *param_1,int *param_2)

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
      FUN_1457c3864(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x150);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x150) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x150 + *param_1;
  return param_2;
}



// FUNCTION 1457c3864 FUN_1457c3864 body=146 status=ok
// SIG undefined FUN_1457c3864(void)

void FUN_1457c3864(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x150,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0xc30c30c30c30c31),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x150,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457c38f6 FUN_1457c38f6 body=436 status=ok
// SIG undefined FUN_1457c38f6(void)

longlong * FUN_1457c38f6(longlong *param_1,longlong *param_2)

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
          FUN_145765194(*local_78 + (longlong)iVar6 * 0x100 + 8);
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



// FUNCTION 1457c3aac FUN_1457c3aac body=439 status=ok
// SIG undefined FUN_1457c3aac(void)

longlong * FUN_1457c3aac(longlong *param_1,longlong *param_2)

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
        local_60 = uVar5;
        if (*(longlong *)(*local_78 + 0x10 + (longlong)iVar6 * 0x28) != 0) {
          FUN_1400020a8();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (((local_60._4_4_ != iVar7) || (local_68 != plVar1)) || (local_78 != param_1));
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



// FUNCTION 1457c3c64 FUN_1457c3c64 body=441 status=ok
// SIG undefined FUN_1457c3c64(void)

void FUN_1457c3c64(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x150;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x148 + lVar7) =
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



// FUNCTION 1457c3e40 FUN_1457c3e40 body=502 status=ok
// SIG undefined FUN_1457c3e40(void)

double * FUN_1457c3e40(double *param_1,longlong *param_2,longlong param_3)

{
  double dVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 **ppuVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  undefined8 *local_50;
  longlong local_48;
  double *local_40;
  undefined8 **local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[2] = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar7 = (undefined4)DAT_14c8464e8;
  uVar6 = DAT_14c8464e0._4_4_;
  *(undefined4 *)param_1 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 4) = uVar6;
  *(undefined4 *)(param_1 + 1) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  if ((param_2 != (longlong *)0x0) && (*(char *)((longlong)param_2 + 0x1fb) == '\x02')) {
    if (param_3 != 0) {
      ppuVar5 = (undefined8 **)(**(code **)(*param_2 + 0x7b8))(param_2,param_3,1,0xffffffff);
      if (ppuVar5 != (undefined8 **)0x0) {
        param_1[2] = DAT_14c8464f0;
        uVar3 = DAT_14c8464e8._4_4_;
        uVar7 = (undefined4)DAT_14c8464e8;
        uVar6 = DAT_14c8464e0._4_4_;
        *(undefined4 *)param_1 = (undefined4)DAT_14c8464e0;
        *(undefined4 *)((longlong)param_1 + 4) = uVar6;
        *(undefined4 *)(param_1 + 1) = uVar7;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
        uStack_60 = &local_40;
        local_68 = &LAB_143620340;
        local_40 = param_1;
        local_38 = ppuVar5;
        FUN_1448e6002(ppuVar5 + 0x27);
        goto LAB_1457c3f4a;
      }
    }
    (**(code **)(*param_2 + 0x4e0))(param_2,param_1);
    dVar9 = *param_1;
    dVar8 = param_1[1];
    dVar1 = param_1[2];
    uVar6 = SUB84(dVar1,0);
    uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
    if ((((dVar9 == 0.0) && (!NAN(dVar9))) && (dVar8 == 0.0)) &&
       (((!NAN(dVar8) && (dVar1 == 0.0)) &&
        ((!NAN(dVar1) && (plVar2 = (longlong *)param_2[0x15], plVar2 != (longlong *)0x0)))))) {
      (**(code **)(*plVar2 + 0x328))(plVar2,&local_68);
      param_1[2] = local_58;
      *param_1 = (double)local_68;
      param_1[1] = (double)uStack_60;
      dVar9 = *param_1;
      dVar8 = param_1[1];
      uVar6 = SUB84(param_1[2],0);
      uVar7 = (undefined4)((ulonglong)param_1[2] >> 0x20);
    }
    if (((dVar9 == 0.0) && (!NAN(dVar9))) &&
       ((dVar8 == 0.0 &&
        (((!NAN(dVar8) && ((double)CONCAT44(uVar7,uVar6) == 0.0)) &&
         (!NAN((double)CONCAT44(uVar7,uVar6)))))))) {
      lVar4 = (**(code **)(*param_2 + 0x7b8))(param_2,0,1,0xffffffff);
      if (lVar4 != 0) {
        local_50 = &local_68;
        local_68 = (undefined1 *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_60 = (double **)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_58 = DAT_14c8464f0;
        local_38 = &local_50;
        local_40 = (double *)&LAB_143620340;
        local_48 = lVar4;
        FUN_1448e6002(lVar4 + 0x138);
        param_1[2] = local_58;
        *(undefined4 *)param_1 = (undefined4)local_68;
        *(undefined4 *)((longlong)param_1 + 4) = local_68._4_4_;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_60._4_4_;
      }
    }
  }
LAB_1457c3f4a:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c4038 FUN_1457c4038 body=55 status=ok
// SIG undefined FUN_1457c4038(void)

void FUN_1457c4038(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab1d60 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab1d60 = FUN_140002ddd(FUN_1463393e8,uVar1,L"MovieSceneEmptyStruct");
  }
  return;
}



// FUNCTION 1457c4070 FUN_1457c4070 body=21 status=ok
// SIG undefined FUN_1457c4070(void)

undefined8 FUN_1457c4070(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1457c4086 FUN_1457c4086 body=39 status=ok
// SIG undefined FUN_1457c4086(void)

void FUN_1457c4086(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x58,0x10);
  FUN_1457c431a(uVar1,param_2);
  return;
}



// FUNCTION 1457c40ae FUN_1457c40ae body=66 status=ok
// SIG undefined FUN_1457c40ae(void)

void FUN_1457c40ae(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140da6e0e(param_2);
  if (lVar1 != 0) {
    FUN_1457c40f0(lVar1,param_2);
    FUN_1457c4140(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 1457c40f0 FUN_1457c40f0 body=79 status=ok
// SIG undefined FUN_1457c40f0(void)

void FUN_1457c40f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1457a9b24(param_1);
  }
  lVar1 = FUN_140636f1e(param_2);
  if (lVar1 != 0) {
    lVar1 = FUN_140636f1e(param_2);
    FUN_140457ffc(lVar1 + 0x7b8,param_1);
  }
  FUN_1457c41b2(param_2);
  return;
}



// FUNCTION 1457c4140 FUN_1457c4140 body=113 status=ok
// SIG undefined FUN_1457c4140(void)

void FUN_1457c4140(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  while (0 < (int)uVar1) {
    FUN_14580676a(param_1,*(undefined8 *)(*(longlong *)(param_1 + 8) + -8 + (ulonglong)uVar1 * 8));
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  }
  FUN_140ee70ed(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457c41b2 FUN_1457c41b2 body=232 status=ok
// SIG undefined FUN_1457c41b2(void)

void FUN_1457c41b2(ulonglong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  int *piVar6;
  longlong lVar7;
  
  if (DAT_14cb99578 != DAT_14cb995a4) {
    uVar3 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    puVar5 = &DAT_14cb995a8;
    if (DAT_14cb995b0 != (undefined *)0x0) {
      puVar5 = DAT_14cb995b0;
    }
    for (iVar2 = *(int *)(puVar5 + ((longlong)(int)(uVar3 >> 0x10 ^ uVar3) &
                                   (longlong)DAT_14cb995b8 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb99570 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(ulonglong *)(DAT_14cb99570 + (longlong)iVar2 * 0x18) == param_1) {
        puVar5 = &DAT_14cb995a8;
        if (DAT_14cb995b0 != (undefined *)0x0) {
          puVar5 = DAT_14cb995b0;
        }
        lVar1 = DAT_14cb99570 + (longlong)iVar2 * 0x18;
        lVar7 = (longlong)*(int *)(lVar1 + 0x14);
        iVar4 = *(int *)(puVar5 + lVar7 * 4);
        if (iVar4 == iVar2) {
          piVar6 = (int *)(puVar5 + lVar7 * 4);
        }
        else {
          do {
            piVar6 = (int *)(DAT_14cb99570 + (longlong)iVar4 * 0x18 + 0x10);
            iVar4 = *piVar6;
          } while (iVar4 != iVar2);
        }
        *piVar6 = *(int *)(lVar1 + 0x10);
        FUN_1457c429a();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1457c429a FUN_1457c429a body=128 status=ok
// SIG undefined FUN_1457c429a(void)

void FUN_1457c429a(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb99570;
  if (DAT_14cb995a4 != 0) {
    *(int *)(DAT_14cb99570 + (longlong)DAT_14cb995a0 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb995a4) {
    iVar4 = DAT_14cb995a0;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14cb995a4 = DAT_14cb995a4 + 1;
  puVar3 = &DAT_14cb99580;
  if (DAT_14cb99590 != (undefined *)0x0) {
    puVar3 = DAT_14cb99590;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb995a0 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1457c431a FUN_1457c431a body=186 status=ok
// SIG undefined FUN_1457c431a(void)

undefined8 * FUN_1457c431a(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 **local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  local_30 = param_2;
  if (DAT_14cb995c0 == '\0') {
    DAT_14cb995c0 = '\x01';
    FUN_1458517e8(&DAT_14cb10980,&local_28,FUN_145839301);
    FUN_14576a192(&DAT_14cb10a20,&local_28,FUN_140da6de8);
  }
  local_20 = &local_38;
  local_28 = &local_30;
  local_38 = param_1;
  FUN_1457c43d6(local_14);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c43d6 FUN_1457c43d6 body=335 status=ok
// SIG undefined FUN_1457c43d6(void)

undefined4 * FUN_1457c43d6(undefined4 *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457c45b8(local_40);
  puVar1 = (ulonglong *)param_2[1];
  uVar8 = *(ulonglong *)*param_2;
  *local_38 = uVar8;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar5 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  cVar4 = FUN_1457c4526(uVar5,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar6 = DAT_14cb99578 - DAT_14cb995a4;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb995b8)) {
      uVar5 = DAT_14cb995b8 - 1U & uVar5;
      *(uint *)((longlong)local_38 + 0x14) = uVar5;
      puVar7 = DAT_14cb995b0;
      if (DAT_14cb995b0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb995a8;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb995b8 - 1U & (longlong)(int)uVar5) * 4);
      puVar7 = DAT_14cb995b0;
      if (DAT_14cb995b0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb995a8;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb995b8 - 1U & (longlong)(int)uVar5) * 4) = local_44
      ;
    }
    else {
      DAT_14cb995b8 = iVar9;
      FUN_1457c46c0();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c4526 FUN_1457c4526 body=145 status=ok
// SIG undefined FUN_1457c4526(void)

undefined8 FUN_1457c4526(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb99578 - DAT_14cb995a4 != 1) && (DAT_14cb99578 != DAT_14cb995a4)) {
    puVar6 = &DAT_14cb995a8;
    if (DAT_14cb995b0 != (undefined *)0x0) {
      puVar6 = DAT_14cb995b0;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb995b8 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb99570 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_1457c429a(*param_3);
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



// FUNCTION 1457c45b8 FUN_1457c45b8 body=263 status=ok
// SIG undefined FUN_1457c45b8(void)

int * FUN_1457c45b8(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb995a0;
  iVar4 = DAT_14cb99578;
  if (DAT_14cb995a4 == 0) {
    iVar2 = DAT_14cb99578 + 1;
    bVar7 = DAT_14cb9957c == DAT_14cb99578;
    DAT_14cb99578 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb99570,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cb99580,1);
    puVar3 = DAT_14cb99590;
    if (DAT_14cb99590 == (undefined *)0x0) {
      puVar3 = &DAT_14cb99580;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14cb995a0;
    DAT_14cb995a0 = *(int *)(DAT_14cb99570 + 4 + lVar6 * 0x18);
    DAT_14cb995a4 = DAT_14cb995a4 + -1;
    iVar4 = iVar2;
    if (DAT_14cb995a4 != 0) {
      *(undefined4 *)(DAT_14cb99570 + (longlong)DAT_14cb995a0 * 0x18) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cb99580;
  if (DAT_14cb99590 != (undefined *)0x0) {
    puVar3 = DAT_14cb99590;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb99570;
  return param_1;
}



// FUNCTION 1457c46c0 FUN_1457c46c0 body=524 status=ok
// SIG undefined FUN_1457c46c0(void)

void FUN_1457c46c0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  uint uVar6;
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
  if (DAT_14cb995b0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb995b0,0,0,4);
  }
  uVar7 = DAT_14cb995b8;
  uVar2 = local_50;
  if (DAT_14cb995b8 != 0) {
    uVar6 = 0;
    FUN_144a1cbf0(&DAT_14cb995a8,0,DAT_14cb995b8,4);
    if (0 < (int)uVar7) {
      do {
        puVar5 = DAT_14cb995b0;
        if (DAT_14cb995b0 == (undefined *)0x0) {
          puVar5 = &DAT_14cb995a8;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cb995b8 + 0x7fffffff & uVar6) * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb99580;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb99598 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb99570;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar3 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar4 = (longlong)iVar3;
        uVar9 = *(ulonglong *)(lVar1 + lVar4 * 0x18);
        uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar9 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)DAT_14cb995b8 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar4 * 0x18) = iVar8;
        puVar5 = DAT_14cb995b0;
        if (DAT_14cb995b0 == (undefined *)0x0) {
          puVar5 = &DAT_14cb995a8;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14cb995b8 - 1U & uVar9) * 4);
        puVar5 = DAT_14cb995b0;
        if (DAT_14cb995b0 == (undefined *)0x0) {
          puVar5 = &DAT_14cb995a8;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14cb995b8 - 1U) * 4) = iVar3;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar3 = local_50._4_4_;
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



// FUNCTION 1457c48ce FUN_1457c48ce body=100 status=ok
// SIG undefined FUN_1457c48ce(void)

void FUN_1457c48ce(longlong param_1)

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
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x0001457c491a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001457c4927. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1457c4932 FUN_1457c4932 body=28 status=ok
// SIG undefined FUN_1457c4932(void)

void FUN_1457c4932(undefined8 *param_1,byte param_2)

{
  *param_1 = *(undefined8 *)((longlong)&DAT_14c9a8508 + (ulonglong)((uint)param_2 * 0x120));
  return;
}



// FUNCTION 1457c494e FUN_1457c494e body=231 status=ok
// SIG undefined FUN_1457c494e(void)

void FUN_1457c494e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
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
  *local_30 = &PTR_FUN_14b9760c0;
  local_30[3] = param_1;
  local_38 = param_1 + 0x88;
  local_30[4] = FUN_140cd8822;
  FUN_14107bdda(param_2,&local_30,1,0);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c4a36 FUN_1457c4a36 body=226 status=ok
// SIG undefined FUN_1457c4a36(void)

void FUN_1457c4a36(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  
  if (0 < *(int *)(param_1 + 0x90)) {
    plVar1 = (longlong *)(param_1 + 0x88);
    FUN_141083f38(param_2,plVar1,1);
    iVar4 = *(int *)(param_1 + 0x90);
    if (0 < iVar4) {
      lVar8 = 0;
      bVar5 = false;
      do {
        uVar6 = (uint)lVar8;
        lVar8 = (longlong)(int)uVar6;
        lVar2 = *plVar1 + lVar8 * 8;
        lVar10 = 0;
        while (*(longlong *)(lVar2 + lVar10 * 8) != 0) {
          lVar3 = lVar8 + lVar10;
          lVar10 = lVar10 + 1;
          if ((longlong)iVar4 <= lVar3 + 1) {
            if (!bVar5) {
              return;
            }
            goto LAB_1457c4ae0;
          }
        }
        iVar9 = (int)lVar10;
        if (~uVar6 + iVar4 != iVar9) {
          iVar7 = (~uVar6 + iVar4) - iVar9;
          if (0 < iVar7) {
            iVar7 = 1;
          }
          memmove((void *)(lVar2 + lVar10 * 8),(void *)(*plVar1 + (longlong)(iVar4 - iVar7) * 8),
                  (longlong)iVar7 << 3);
          iVar4 = *(int *)(param_1 + 0x90);
        }
        lVar8 = lVar8 + lVar10;
        iVar4 = iVar4 + -1;
        *(int *)(param_1 + 0x90) = iVar4;
        bVar5 = true;
      } while ((int)(uVar6 + iVar9) < iVar4);
LAB_1457c4ae0:
      FUN_1457c4b18(plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1457c4b18 FUN_1457c4b18 body=62 status=ok
// SIG undefined FUN_1457c4b18(void)

void FUN_1457c4b18(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1457c4b56(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1457c4b56 FUN_1457c4b56 body=89 status=ok
// SIG undefined FUN_1457c4b56(void)

ulonglong FUN_1457c4b56(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
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



// FUNCTION 1457c4bb0 FUN_1457c4bb0 body=232 status=ok
// SIG undefined FUN_1457c4bb0(void)

void FUN_1457c4bb0(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14cbc32f8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)DAT_14cbc32f8 >> 0x10);
    uVar3 = (uint)DAT_14cbc32f8 & 0xffff;
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)DAT_14cbc32f8 >> 0x20) + ((uint)DAT_14cbc32f8 << 0x10 | uVar3)
                    + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x10) == DAT_14cbc32f8) goto LAB_1457c4c0b;
        iVar4 = *(int *)((longlong)iVar4 * 0x10 + *param_1 + 8);
      } while (iVar4 != -1);
    }
  }
  FUN_144a13f80(param_1,local_2c,&local_28,0);
  FUN_1457c4c99(param_1[10] + 0x30,&local_28,param_2);
LAB_1457c4c0b:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457c4c99 FUN_1457c4c99 body=123 status=ok
// SIG undefined FUN_1457c4c99(void)

longlong * FUN_1457c4c99(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)uVar4 < 1) {
    FUN_140d7698c(param_1,1);
    uVar4 = *(uint *)((longlong)param_1 + 0xc);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (uVar4 < iVar1 + 1U) {
    FUN_140eed74c(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar5 = (longlong)iVar1 * 0x30;
  uVar3 = *param_3;
  *(undefined1 *)(lVar2 + 0x20 + lVar5) = 0;
  FUN_14101bd16(lVar2 + lVar5,uVar3);
  *(undefined8 *)(lVar2 + 0x28 + lVar5) = *param_2;
  return param_1;
}



// FUNCTION 1457c4d14 FUN_1457c4d14 body=122 status=ok
// SIG undefined FUN_1457c4d14(void)

void FUN_1457c4d14(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x90);
  *(uint *)(param_1 + 0x90) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x94) < iVar1 + 1U) {
    FUN_146979934(param_1 + 8,iVar1);
  }
  lVar3 = param_1 + 8;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x88);
  }
  lVar2 = (longlong)iVar1 * 0x20;
  *(undefined8 *)(lVar3 + lVar2) = param_2;
  *(undefined8 *)(lVar3 + 8 + lVar2) = *param_3;
  *param_3 = 0;
  *(undefined8 *)(lVar3 + 0x10 + lVar2) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar2) = 0xffffffff;
  return;
}



// FUNCTION 1457c4d8e FUN_1457c4d8e body=67 status=ok
// SIG undefined FUN_1457c4d8e(void)

undefined8 * FUN_1457c4d8e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a81c450;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457c4dd2 FUN_1457c4dd2 body=147 status=ok
// SIG undefined FUN_1457c4dd2(void)

void FUN_1457c4dd2(longlong param_1,int param_2)

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



// FUNCTION 1457c4e66 FUN_1457c4e66 body=226 status=ok
// SIG undefined FUN_1457c4e66(void)

longlong * FUN_1457c4e66(longlong *param_1)

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
  pcVar13 = FUN_14647186a;
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



// FUNCTION 1457c4f4a FUN_1457c4f4a body=138 status=ok
// SIG undefined FUN_1457c4f4a(void)

code * FUN_1457c4f4a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AcquireTagRegisterIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c00000018;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481873ce;
}



// FUNCTION 1457c4fd4 FUN_1457c4fd4 body=138 status=ok
// SIG undefined FUN_1457c4fd4(void)

code * FUN_1457c4fd4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputFloatBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000001b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148187344;
}



// FUNCTION 1457c505e FUN_1457c505e body=138 status=ok
// SIG undefined FUN_1457c505e(void)

code * FUN_1457c505e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ParticleStrideInt";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000015;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481874e2;
}



// FUNCTION 1457c50e8 FUN_1457c50e8 body=45 status=ok
// SIG undefined FUN_1457c50e8(void)

void FUN_1457c50e8(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 1457c5116 FUN_1457c5116 body=80 status=ok
// SIG undefined FUN_1457c5116(void)

void FUN_1457c5116(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1457c523e(param_1,iVar1);
  }
  if (param_2 != 0) {
    memset((void *)((longlong)iVar1 * 0x78 + *param_1),0,(ulonglong)param_2 * 0x78);
    return;
  }
  return;
}



// FUNCTION 1457c5166 FUN_1457c5166 body=98 status=ok
// SIG undefined FUN_1457c5166(void)

void FUN_1457c5166(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1457c51c8 FUN_1457c51c8 body=118 status=ok
// SIG undefined FUN_1457c51c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1457c51c8(longlong param_1)

{
  undefined *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbca5d8) {
    FUN_144b3d300(&DAT_14cbca5d8);
    if (DAT_14cbca5d8 == -1) {
      _DAT_14cbca5d0 = 0;
      _Init_thread_footer(&DAT_14cbca5d8);
    }
  }
  puVar1 = &DAT_14cbca5d0;
  if (*(longlong *)(param_1 + 0x208) != 0) {
    puVar1 = (undefined *)(*(longlong *)(param_1 + 0x208) + 0x18);
  }
  return puVar1;
}



// FUNCTION 1457c523e FUN_1457c523e body=143 status=ok
// SIG undefined FUN_1457c523e(void)

void FUN_1457c523e(longlong param_1,int param_2)

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



// FUNCTION 1457c52ce FUN_1457c52ce body=299 status=ok
// SIG undefined FUN_1457c52ce(void)

longlong FUN_1457c52ce(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  uVar3 = DAT_14c951640;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    lVar5 = *(longlong *)(param_1 + 0x60);
    if (lVar5 != 0) goto LAB_1457c5327;
    if (1 < *(int *)(param_1 + 0x50)) {
      uVar7 = *(undefined8 *)(param_1 + 0x48);
      uVar4 = FUN_14129a444();
      lVar5 = FUN_140277b32(uVar4,uVar3,uVar7,0);
      if (lVar5 != 0) goto LAB_1457c5327;
    }
    local_28 = *(undefined8 *)(param_1 + 0x18);
    FUN_1400021e4();
    puVar6 = &DAT_149dfb77a;
    if (local_30 != 0) {
      puVar6 = local_38;
    }
    lVar5 = 0;
    while( true ) {
      uVar1 = *(ushort *)((longlong)puVar6 + lVar5);
      uVar8 = (uint)uVar1;
      uVar2 = *(ushort *)((longlong)L"GlobalDefaults" + lVar5);
      uVar10 = (uint)uVar2;
      if (uVar1 != uVar2) {
        if ((uVar2 | uVar1) < 0x80) {
          uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1457c5394;
        }
        iVar9 = uVar8 - uVar10;
        goto LAB_1457c53bf;
      }
      if (uVar1 == 0) break;
LAB_1457c5394:
      lVar5 = lVar5 + 2;
    }
    iVar9 = 0;
LAB_1457c53bf:
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar3 = DAT_14c951640;
    if (iVar9 != 0) {
      uVar7 = FUN_14129a444();
      lVar5 = FUN_140277b32(uVar7,uVar3,L"GlobalDefaults",0);
      goto LAB_1457c5327;
    }
  }
  lVar5 = 0;
LAB_1457c5327:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c53fa FUN_1457c53fa body=24 status=ok
// SIG undefined FUN_1457c53fa(void)

bool FUN_1457c53fa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1457c5412 FUN_1457c5412 body=35 status=ok
// SIG undefined FUN_1457c5412(void)

void FUN_1457c5412(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140efea2e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcee900;
  return;
}



// FUNCTION 1457c5436 FUN_1457c5436 body=63 status=ok
// SIG undefined FUN_1457c5436(void)

longlong FUN_1457c5436(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1464eba60(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x90 + *param_1;
  thunk_FUN_14584b72c(lVar2);
  return lVar2;
}



// FUNCTION 1457c5476 FUN_1457c5476 body=112 status=ok
// SIG undefined FUN_1457c5476(void)

void FUN_1457c5476(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((ulonglong)param_2 * 0x90 + lVar1);
  FUN_14584550a(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x90),(longlong)iVar3 * 0x90);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1457c54e6 FUN_1457c54e6 body=132 status=ok
// SIG undefined FUN_1457c54e6(void)

void FUN_1457c54e6(longlong param_1,int param_2)

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



// FUNCTION 1457c556c FUN_1457c556c body=333 status=ok
// SIG undefined FUN_1457c556c(void)

undefined4 * FUN_1457c556c(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_1457c5750(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[8] = 0;
  local_40[9] = 0;
  local_40[10] = 0;
  local_40[0xb] = 0x3ff0000000000000;
  local_40[0xc] = 0;
  local_40[0xd] = 0;
  local_40[0xe] = 0;
  local_40[0xf] = 0;
  local_40[0x10] = 0;
  local_40[0x11] = 0;
  *(undefined1 *)(local_40 + 0x12) = 0;
  *(undefined4 *)(local_40 + 0x14) = 0xffffffff;
  cVar1 = FUN_1457c56ba(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0xa4) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x14) =
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
      FUN_1457c583c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c56ba FUN_1457c56ba body=149 status=ok
// SIG undefined FUN_1457c56ba(void)

undefined8 FUN_1457c56ba(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0xb0);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0xb0) == *param_3) {
          memmove(_Dst,param_3,0xa0);
          FUN_145708bde(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0xa0);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1457c5750 FUN_1457c5750 body=235 status=ok
// SIG undefined FUN_1457c5750(void)

int * FUN_1457c5750(longlong *param_1,int *param_2)

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
      FUN_1456d14a2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xb0);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xb0) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xb0 + *param_1;
  return param_2;
}



// FUNCTION 1457c583c FUN_1457c583c body=492 status=ok
// SIG undefined FUN_1457c583c(void)

void FUN_1457c583c(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0xb0;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xa4 + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0xa0 + lVar6) =
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



// FUNCTION 1457c5a2a FUN_1457c5a2a body=1031 status=ok
// SIG undefined FUN_1457c5a2a(void)

void FUN_1457c5a2a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_108 [32];
  undefined2 *local_e8;
  byte local_e0;
  longlong *local_d0;
  longlong *local_c8;
  undefined2 local_c0 [2];
  undefined4 local_bc;
  longlong *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((param_1[0x163] != 0) && ((longlong *)param_1[0x164] != (longlong *)0x0)) {
    cVar3 = (**(code **)(*(longlong *)param_1[0x164] + 0x68))();
    if (cVar3 != '\0') {
      *(undefined1 *)((longlong)param_1 + 0xd46) = 1;
    }
  }
  if (*(char *)((longlong)param_1 + 0xd46) != '\x01') {
    fVar11 = *(float *)(param_1 + 0x173);
    if ((param_1[0x163] == 0) || ((longlong *)param_1[0x164] == (longlong *)0x0)) {
      plVar7 = (longlong *)0x0;
      uVar5 = 0;
      if (*(char *)((longlong)param_1 + 0xd46) == '\0') {
        uVar5 = DAT_14cb94e08;
      }
    }
    else {
      fVar10 = (float)(**(code **)(*(longlong *)param_1[0x164] + 0x40))();
      plVar7 = (longlong *)0x0;
      uVar5 = 0;
      if (*(char *)((longlong)param_1 + 0xd46) == '\0') {
        uVar5 = DAT_14cb94e08;
      }
      fVar11 = fVar11 * fVar10;
      if (param_1[0x163] != 0) {
        plVar7 = (longlong *)param_1[0x164];
      }
    }
    uVar4 = (**(code **)(*plVar7 + 0x18))();
    local_e0 = FUN_140f076ee(uVar4);
    local_e0 = local_e0 ^ 1;
    local_e8 = (undefined2 *)((ulonglong)local_e8 & 0xffffffffffffff00);
    cVar3 = FUN_140dd024a(param_1,uVar5,0x3f800000,fVar11);
    *(char *)(param_1 + 0x175) = cVar3;
    if (((cVar3 != '\0') && (param_1[0x167] != 0)) &&
       ((longlong *)param_1[0x168] != (longlong *)0x0)) {
      uVar5 = (**(code **)(*(longlong *)param_1[0x168] + 8))();
      lVar6 = FUN_1407ca824(uVar5);
      if (lVar6 != 0) {
        FUN_140dc01da(lVar6,&local_b8,(char)param_1[0x175]);
        plVar7 = local_b8;
        if (local_b8 != (longlong *)0x0) {
          if ((param_1[0x163] != 0) && ((longlong *)param_1[0x164] != (longlong *)0x0)) {
            uVar5 = (**(code **)(*(longlong *)param_1[0x164] + 0x18))();
            local_d0 = plVar7;
            plVar7 = (longlong *)CONCAT44(uStack_ac,local_b0);
            local_c8 = plVar7;
            if (plVar7 == (longlong *)0x0) {
              FUN_140ebccae(uVar5,*(undefined1 *)((longlong)param_1 + 0xd44),&local_d0);
            }
            else {
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
              FUN_140ebccae(uVar5,*(undefined1 *)((longlong)param_1 + 0xd44));
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
          }
          if (fVar11 <= 0.0) {
            fVar11 = (float)(**(code **)(*local_b8 + 0x28))();
          }
        }
        plVar7 = (longlong *)CONCAT44(uStack_ac,local_b0);
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
    }
    uVar5 = FUN_1401b4c98(param_1);
    fVar10 = *(float *)((longlong)param_1 + 0x74);
    uVar9 = -(uint)(0.0001 < fVar10);
    local_d0 = (longlong *)0x0;
    local_c8._0_4_ = 0;
    FUN_1446efa72(&local_d0,0,3,0x10);
    plVar7 = local_d0;
    local_c8 = (longlong *)CONCAT44(local_c8._4_4_,3);
    *local_d0 = (longlong)&PTR_LAB_14a1c8830;
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
    local_d0[2] = lVar8;
    *local_d0 = (longlong)&PTR_FUN_14b4ab980;
    local_d0[3] = 0;
    FUN_14485c47a(local_d0 + 3,param_1);
    *(undefined4 *)(plVar7 + 5) = 0;
    plVar7[4] = (longlong)&LAB_1418be8ec;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    FUN_14487d8d8(&local_b8,&local_d0);
    local_78 = 1;
    local_e8 = local_c0;
    local_c0[0] = 0;
    local_bc = 0xbf800000;
    FUN_1406f4044(uVar5,param_1 + 0x174,&local_b8,
                  (float)(~uVar9 & 0x3f800000 | (uint)(1.0 / fVar10) & uVar9) * fVar11);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
    FUN_1449db362(&local_d0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_108);
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001457c5da6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x870))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c5e5a FUN_1457c5e5a body=1727 status=ok
// SIG undefined FUN_1457c5e5a(void)

undefined4 FUN_1457c5e5a(int param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  if (param_1 == 6) {
    lVar3 = FUN_14050c909();
    lVar6 = *(longlong *)(lVar3 + 0x5e8);
    if (lVar6 == 0) {
      uVar4 = FUN_145cd6228();
      lVar6 = FUN_14477b664(uVar4);
      *(longlong *)(lVar3 + 0x5e8) = lVar6;
    }
    lVar5 = *(longlong *)(lVar3 + 0x5f0);
    if (lVar5 == 0) {
      if (lVar6 == 0) {
        return 0;
      }
      if (*(longlong *)(lVar3 + 0x5e0) == 0) {
        return 0;
      }
      plVar1 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        lVar5 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar3 + 0x5e0));
      }
      *(longlong *)(lVar3 + 0x5f0) = lVar5;
      goto LAB_1457c603b;
    }
  }
  else {
    switch(param_1) {
    case 0:
      lVar3 = FUN_14050c909();
      lVar6 = *(longlong *)(lVar3 + 0x558);
      if (lVar6 == 0) {
        uVar4 = FUN_145cd6228();
        lVar6 = FUN_14477b664(uVar4);
        *(longlong *)(lVar3 + 0x558) = lVar6;
      }
      lVar5 = *(longlong *)(lVar3 + 0x560);
      if (lVar5 == 0) {
        if (lVar6 == 0) {
          return 0;
        }
        if (*(longlong *)(lVar3 + 0x550) == 0) {
          return 0;
        }
        plVar1 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
          lVar5 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar3 + 0x550));
        }
        *(longlong *)(lVar3 + 0x560) = lVar5;
LAB_1457c603b:
        if (lVar5 == 0) {
          return 0;
        }
      }
      break;
    case 1:
      lVar3 = FUN_14050c909();
      lVar6 = *(longlong *)(lVar3 + 0x570);
      if (lVar6 == 0) {
        uVar4 = FUN_145cd6228();
        lVar6 = FUN_14477b664(uVar4);
        *(longlong *)(lVar3 + 0x570) = lVar6;
      }
      lVar5 = *(longlong *)(lVar3 + 0x578);
      if (lVar5 == 0) {
        if (lVar6 == 0) {
          return 0;
        }
        if (*(longlong *)(lVar3 + 0x568) == 0) {
          return 0;
        }
        plVar1 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
          lVar5 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar3 + 0x568));
        }
        *(longlong *)(lVar3 + 0x578) = lVar5;
        goto LAB_1457c603b;
      }
      break;
    case 2:
      lVar3 = FUN_14050c909();
      lVar6 = *(longlong *)(lVar3 + 0x588);
      if (lVar6 == 0) {
        uVar4 = FUN_145cd6228();
        lVar6 = FUN_14477b664(uVar4);
        *(longlong *)(lVar3 + 0x588) = lVar6;
      }
      lVar5 = *(longlong *)(lVar3 + 0x590);
      if (lVar5 == 0) {
        if (lVar6 == 0) {
          return 0;
        }
        if (*(longlong *)(lVar3 + 0x580) == 0) {
          return 0;
        }
        plVar1 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
          lVar5 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar3 + 0x580));
        }
        *(longlong *)(lVar3 + 0x590) = lVar5;
        goto LAB_1457c603b;
      }
      break;
    case 3:
      lVar3 = FUN_14050c909();
      lVar6 = *(longlong *)(lVar3 + 0x5a0);
      if (lVar6 == 0) {
        uVar4 = FUN_145cd6228();
        lVar6 = FUN_14477b664(uVar4);
        *(longlong *)(lVar3 + 0x5a0) = lVar6;
      }
      lVar5 = *(longlong *)(lVar3 + 0x5a8);
      if (lVar5 == 0) {
        if (lVar6 == 0) {
          return 0;
        }
        if (*(longlong *)(lVar3 + 0x598) == 0) {
          return 0;
        }
        plVar1 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
          lVar5 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar3 + 0x598));
        }
        *(longlong *)(lVar3 + 0x5a8) = lVar5;
        goto LAB_1457c603b;
      }
      break;
    case 4:
      lVar3 = FUN_14050c909();
      lVar6 = *(longlong *)(lVar3 + 0x5b8);
      if (lVar6 == 0) {
        uVar4 = FUN_145cd6228();
        lVar6 = FUN_14477b664(uVar4);
        *(longlong *)(lVar3 + 0x5b8) = lVar6;
      }
      lVar5 = *(longlong *)(lVar3 + 0x5c0);
      if (lVar5 == 0) {
        if (lVar6 == 0) {
          return 0;
        }
        if (*(longlong *)(lVar3 + 0x5b0) == 0) {
          return 0;
        }
        plVar1 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
          lVar5 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar3 + 0x5b0));
        }
        *(longlong *)(lVar3 + 0x5c0) = lVar5;
        goto LAB_1457c603b;
      }
      break;
    case 5:
      lVar3 = FUN_14050c909();
      lVar6 = *(longlong *)(lVar3 + 0x5d0);
      if (lVar6 == 0) {
        uVar4 = FUN_145cd6228();
        lVar6 = FUN_14477b664(uVar4);
        *(longlong *)(lVar3 + 0x5d0) = lVar6;
      }
      lVar5 = *(longlong *)(lVar3 + 0x5d8);
      if (lVar5 == 0) {
        if (lVar6 == 0) {
          return 0;
        }
        if (*(longlong *)(lVar3 + 0x5c8) == 0) {
          return 0;
        }
        plVar1 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
          lVar5 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar3 + 0x5c8));
        }
        *(longlong *)(lVar3 + 0x5d8) = lVar5;
        goto LAB_1457c603b;
      }
      break;
    default:
      goto switchD_1457c5eb6_caseD_6;
    case 7:
      lVar3 = FUN_14050c909();
      lVar6 = *(longlong *)(lVar3 + 0x600);
      if (lVar6 == 0) {
        uVar4 = FUN_145cd6228();
        lVar6 = FUN_14477b664(uVar4);
        *(longlong *)(lVar3 + 0x600) = lVar6;
      }
      lVar5 = *(longlong *)(lVar3 + 0x608);
      if (lVar5 == 0) {
        if (lVar6 == 0) {
          return 0;
        }
        if (*(longlong *)(lVar3 + 0x5f8) == 0) {
          return 0;
        }
        plVar1 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
          lVar5 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar3 + 0x5f8));
        }
        *(longlong *)(lVar3 + 0x608) = lVar5;
        goto LAB_1457c603b;
      }
      break;
    case 8:
      lVar3 = FUN_14050c909();
      lVar6 = *(longlong *)(lVar3 + 0x618);
      if (lVar6 == 0) {
        uVar4 = FUN_145cd6228();
        lVar6 = FUN_14477b664(uVar4);
        *(longlong *)(lVar3 + 0x618) = lVar6;
      }
      lVar5 = *(longlong *)(lVar3 + 0x620);
      if (lVar5 == 0) {
        if (lVar6 == 0) {
          return 0;
        }
        if (*(longlong *)(lVar3 + 0x610) == 0) {
          return 0;
        }
        plVar1 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
          lVar5 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar3 + 0x610));
        }
        *(longlong *)(lVar3 + 0x620) = lVar5;
        goto LAB_1457c603b;
      }
      break;
    case 9:
      lVar3 = FUN_14050c909();
      lVar6 = *(longlong *)(lVar3 + 0x630);
      if (lVar6 == 0) {
        uVar4 = FUN_145cd6228();
        lVar6 = FUN_14477b664(uVar4);
        *(longlong *)(lVar3 + 0x630) = lVar6;
      }
      lVar5 = *(longlong *)(lVar3 + 0x638);
      if (lVar5 == 0) {
        if (lVar6 == 0) {
          return 0;
        }
        if (*(longlong *)(lVar3 + 0x628) == 0) {
          return 0;
        }
        plVar1 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
          lVar5 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar3 + 0x628));
        }
        *(longlong *)(lVar3 + 0x638) = lVar5;
        goto LAB_1457c603b;
      }
    }
  }
  uVar7 = *(undefined4 *)(lVar5 + 0x18);
switchD_1457c5eb6_caseD_6:
  return uVar7;
}



// FUNCTION 1457c651a FUN_1457c651a body=109 status=ok
// SIG undefined FUN_1457c651a(void)

longlong * FUN_1457c651a(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_145921b3e();
  FUN_14123d74c(uVar2,param_1,1,0x30,uVar1 | 0x90200000);
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



// FUNCTION 1457c6588 FUN_1457c6588 body=40 status=ok
// SIG undefined FUN_1457c6588(void)

undefined8 FUN_1457c6588(undefined8 param_1,int param_2)

{
  FUN_1457c65b0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457c65b0 FUN_1457c65b0 body=119 status=ok
// SIG undefined FUN_1457c65b0(void)

void FUN_1457c65b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14accdc70;
  param_1[6] = &PTR_FUN_14accdf30;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  FUN_1457c6628(param_1 + 0x33);
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  FUN_1457c665e(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1457c6628 FUN_1457c6628 body=53 status=ok
// SIG undefined FUN_1457c6628(void)

void FUN_1457c6628(longlong *param_1)

{
  FUN_1457c6872();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457c665e FUN_1457c665e body=189 status=ok
// SIG undefined FUN_1457c665e(void)

void FUN_1457c665e(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14acd0650;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_140f0c3ca(param_1 + 0x1f);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1457c671c(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1457c6752(param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1457c6788(param_1 + 1);
  return;
}



// FUNCTION 1457c671c FUN_1457c671c body=53 status=ok
// SIG undefined FUN_1457c671c(void)

void FUN_1457c671c(longlong *param_1)

{
  FUN_1457c67be();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457c6752 FUN_1457c6752 body=53 status=ok
// SIG undefined FUN_1457c6752(void)

void FUN_1457c6752(longlong *param_1)

{
  FUN_1457c69ea();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457c6788 FUN_1457c6788 body=53 status=ok
// SIG undefined FUN_1457c6788(void)

void FUN_1457c6788(longlong *param_1)

{
  FUN_1457c6818();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457c67be FUN_1457c67be body=90 status=ok
// SIG undefined FUN_1457c67be(void)

void FUN_1457c67be(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 1457c6818 FUN_1457c6818 body=90 status=ok
// SIG undefined FUN_1457c6818(void)

void FUN_1457c6818(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
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



// FUNCTION 1457c6872 FUN_1457c6872 body=375 status=ok
// SIG undefined FUN_1457c6872(void)

void FUN_1457c6872(longlong *param_1)

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
      if (*(longlong *)(lVar2 + 0x38 + lVar3 * 0x50) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar3 * 0x50 + 0x28) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e9549c(param_1,0);
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



// FUNCTION 1457c69ea FUN_1457c69ea body=382 status=ok
// SIG undefined FUN_1457c69ea(void)

void FUN_1457c69ea(longlong *param_1)

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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x60);
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
    FUN_1448fc38a(param_1,0);
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



// FUNCTION 1457c6b6a FUN_1457c6b6a body=132 status=ok
// SIG undefined FUN_1457c6b6a(void)

void FUN_1457c6b6a(longlong param_1,int param_2)

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



// FUNCTION 1457c6bf8 FUN_1457c6bf8 body=113 status=ok
// SIG undefined FUN_1457c6bf8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457c6bf8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cbe6c00;
  if (DAT_14cbe6c00 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x1d00,0);
    lVar4 = 0xf;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x3a;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cbe6c00;
    DAT_14cbe6c08 = DAT_14cbe6c08 + 0x10;
  }
  DAT_14cbe6c00 = (undefined8 *)*puVar2;
  _DAT_14cbe6c0c = _DAT_14cbe6c0c + 1;
  return;
}



// FUNCTION 1457c6c6a FUN_1457c6c6a body=41 status=ok
// SIG undefined FUN_1457c6c6a(void)

void FUN_1457c6c6a(undefined8 param_1,undefined8 param_2)

{
  FUN_1457c6c94(param_1,1);
  FUN_1457c6eee(param_1,param_2);
  return;
}



// FUNCTION 1457c6c94 FUN_1457c6c94 body=601 status=ok
// SIG undefined FUN_1457c6c94(void)

void FUN_1457c6c94(longlong param_1,char param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined4 *puVar22;
  longlong lVar23;
  
  plVar16 = *(longlong **)(param_1 + 0x20);
  if (plVar16 != (longlong *)0x0) {
    lVar14 = FUN_1402095ca();
    if ((*(int *)(lVar14 + 0x38) <= *(int *)(plVar16[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar16[2] + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) ==
        lVar14 + 0x30)) {
      uVar15 = FUN_144a7b040();
      plVar16 = (longlong *)(**(code **)(*plVar16 + 0x288))(plVar16,uVar15);
      if (plVar16 != (longlong *)0x0) {
        uVar15 = FUN_144a7b040();
        plVar17 = (longlong *)FUN_144718840(plVar16,uVar15);
        if (((plVar16 != plVar17) && (plVar17 != (longlong *)0x0)) &&
           (lVar14 = (**(code **)(*plVar17 + 0x10))(plVar17), lVar14 != 0)) {
          iVar2 = *(int *)(lVar14 + 0x40);
          lVar23 = (longlong)iVar2;
          if (0 < lVar23) {
            *(undefined1 *)(param_1 + 0x130) = 0;
            *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(lVar14 + 0x58);
            *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(lVar14 + 0x5c);
            plVar16 = (longlong *)(param_1 + 0x60);
            uVar20 = (ulonglong)*(uint *)(param_1 + 0x68);
            if (iVar2 < (int)*(uint *)(param_1 + 0x68)) {
              lVar19 = uVar20 * 0x58 + -0x48;
              do {
                uVar20 = uVar20 - 1;
                FUN_140f0fae4(*plVar16 + lVar19);
                lVar19 = lVar19 + -0x58;
              } while (lVar23 < (longlong)uVar20);
            }
            FUN_140f0fb1e(plVar16,iVar2,1);
            lVar21 = 0x30;
            lVar19 = 0x10;
            do {
              lVar3 = *plVar16;
              lVar4 = *(longlong *)(lVar14 + 0x38);
              if (param_2 == '\0') {
                cVar13 = FUN_14486ea84(lVar3 + lVar19);
                if (((cVar13 == '\0') ||
                    (lVar5 = *(longlong *)(lVar3 + -0x10 + lVar19),
                    lVar18 = FUN_1409d448e(lVar21 + -0x18 + lVar4), lVar5 != lVar18)) ||
                   (cVar13 = FUN_140f0fad4(lVar3 + lVar19,lVar4 + lVar21), cVar13 != '\0'))
                goto LAB_1457c6d9c;
              }
              else {
LAB_1457c6d9c:
                FUN_140f0fae4(lVar3 + lVar19);
                puVar22 = (undefined4 *)(lVar4 + lVar21);
                uVar15 = FUN_1409d448e(puVar22 + -6);
                *(undefined8 *)(lVar3 + -0x10 + lVar19) = uVar15;
                uVar6 = puVar22[1];
                uVar7 = puVar22[2];
                uVar8 = puVar22[3];
                uVar9 = puVar22[4];
                uVar10 = puVar22[5];
                uVar11 = puVar22[6];
                uVar12 = puVar22[7];
                puVar1 = (undefined4 *)(lVar3 + lVar19);
                *puVar1 = *puVar22;
                puVar1[1] = uVar6;
                puVar1[2] = uVar7;
                puVar1[3] = uVar8;
                puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar19);
                *puVar1 = uVar9;
                puVar1[1] = uVar10;
                puVar1[2] = uVar11;
                puVar1[3] = uVar12;
                cVar13 = FUN_1403ae288(lVar3 + lVar19);
                if (cVar13 == '\0') {
                  *(undefined1 *)(param_1 + 0x130) = 1;
                }
              }
              lVar21 = lVar21 + 0x88;
              lVar19 = lVar19 + 0x58;
              lVar23 = lVar23 + -1;
              if (lVar23 == 0) {
                return;
              }
            } while( true );
          }
        }
      }
    }
  }
  if (0 < *(int *)(param_1 + 0x68)) {
    lVar23 = 0x10;
    lVar14 = 0;
    do {
      FUN_140f0fae4(*(longlong *)(param_1 + 0x60) + lVar23);
      lVar14 = lVar14 + 1;
      lVar23 = lVar23 + 0x58;
    } while (lVar14 < *(int *)(param_1 + 0x68));
  }
  iVar2 = *(int *)(param_1 + 0x6c);
  FUN_1408bd9b6(*(undefined8 *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0x68) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x6c) != 0)) {
    FUN_148e6796a(param_1 + 0x60,0);
  }
  *(undefined8 *)(param_1 + 0x134) = 0xffffffffffffffff;
  return;
}



// FUNCTION 1457c6eee FUN_1457c6eee body=417 status=ok
// SIG undefined FUN_1457c6eee(void)

void FUN_1457c6eee(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [8];
  undefined8 *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 6;
  cVar3 = (**(code **)(param_1[6] + 0x10))(plVar1);
  if (cVar3 == '\0') {
    lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar4 != 0) {
      if (*(longlong *)(lVar4 + 0x1f0) == 0) {
        puVar5 = (undefined8 *)(lVar4 + 0x458);
      }
      else {
        puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
      }
      uVar2 = *puVar5;
      local_88 = (undefined8 *)0x0;
      local_80 = 0;
      FUN_1446efa72(&local_88,0,3,0x10);
      puVar5 = local_88;
      local_80 = 3;
      *local_88 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_88[2] = lVar6;
      *local_88 = &PTR_FUN_14b9a6ac0;
      local_88[3] = 0;
      FUN_14485c47a(local_88 + 3,param_1);
      puVar5[4] = param_1;
      local_78 = 0;
      local_70 = 0;
      FUN_14487d8d8(&local_78,&local_88);
      local_38 = 1;
      FUN_14016fdb0(uVar2,local_90,&local_78);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_38])(&local_78);
      FUN_1449db362(&local_88);
    }
  }
  else {
    (**(code **)(param_1[6] + 0x38))(plVar1);
    (**(code **)(param_1[6] + 0x30))(plVar1);
    (**(code **)(param_1[6] + 0x20))(plVar1);
    (**(code **)(param_1[6] + 0x18))(plVar1);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c70a0 FUN_1457c70a0 body=334 status=ok
// SIG undefined FUN_1457c70a0(void)

undefined8 * FUN_1457c70a0(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14007ca06();
  FUN_140ea0e34(param_1,uVar1);
  *param_1 = &PTR_FUN_14a504d30;
  param_1[5] = &PTR_FUN_14a505030;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_1457c71ee(param_1 + 0x30);
  FUN_1457c724e(param_1 + 0xe4);
  FUN_1412cd7de(param_1 + 0x24e);
  *(undefined4 *)(param_1 + 0x318) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x18c4) = 0;
  *(undefined4 *)(param_1 + 0x319) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x18cc) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x31a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1904) = 0;
  param_1[0x322] = 0;
  param_1[0x323] = 0;
  param_1[0x324] = 0;
  param_1[0x325] = 0;
  param_1[0x326] = 0;
  param_1[0x327] = 0;
  param_1[0x328] = 0;
  param_1[0x329] = 0;
  lVar2 = FUN_140bcc93a();
  FUN_1457c735e(param_1 + 0x30,lVar2 + 0xd70);
  lVar2 = FUN_140bcc93a();
  FUN_1457c74aa(param_1 + 0xe4,lVar2 + 0x39e0);
  lVar2 = FUN_140bcc93a();
  FUN_1412cc8ca(param_1 + 0x24e,lVar2 + 0x2740);
  *(undefined8 *)((longlong)param_1 + 0x18d4) = 0x4000000040800000;
  *(undefined8 *)((longlong)param_1 + 0x18dc) = 0x4000000040800000;
  param_1[0x318] = param_1[0x1da];
  param_1[0x319] = param_1[0x1db];
  *(undefined4 *)(param_1 + 0x31a) = *(undefined4 *)(param_1 + 0x1dc);
  *(undefined4 *)((longlong)param_1 + 0x18e4) = 0x43e10000;
  *(undefined2 *)(param_1 + 0x31d) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x18ea) = 1;
  return param_1;
}



// FUNCTION 1457c71ee FUN_1457c71ee body=95 status=ok
// SIG undefined FUN_1457c71ee(void)

undefined8 * FUN_1457c71ee(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149ee32c0;
  FUN_140f13d18(param_1 + 2);
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0x4000000040800000;
  param_1[0xb1] = 0x4000000040800000;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xa2] = &DAT_3f8000003f800000;
  param_1[0xa3] = &DAT_3f8000003f800000;
  return param_1;
}



// FUNCTION 1457c724e FUN_1457c724e body=271 status=ok
// SIG undefined FUN_1457c724e(void)

undefined8 * FUN_1457c724e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149eeb4d0;
  FUN_140ca8f8e(param_1 + 2);
  FUN_140ca8f8e(param_1 + 0x18);
  FUN_140ca8f8e(param_1 + 0x2e);
  FUN_140ca8f8e(param_1 + 0x44);
  FUN_140ca8f8e(param_1 + 0x5a);
  *(undefined1 *)(param_1 + 0x70) = 0;
  FUN_140ca8f8e(param_1 + 0x72);
  FUN_140ca8f8e(param_1 + 0x88);
  FUN_140ca8f8e(param_1 + 0x9e);
  FUN_140ca8f8e(param_1 + 0xb4);
  FUN_140ca8f8e(param_1 + 0xca);
  FUN_140ca8f8e(param_1 + 0xe0);
  param_1[0xf6] = 0x3f800000;
  param_1[0xf7] = &DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 0xf8) = 2;
  *(undefined4 *)((longlong)param_1 + 0x7c4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf9) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x7cc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xfa) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x7d4) = 0;
  FUN_140ca8f8e(param_1 + 0xfc);
  FUN_140ca8f8e(param_1 + 0x112);
  FUN_140ca8f8e(param_1 + 0x128);
  FUN_140ca8f8e(param_1 + 0x13e);
  FUN_140ca8f8e(param_1 + 0x154);
  return param_1;
}



// FUNCTION 1457c735e FUN_1457c735e body=332 status=ok
// SIG undefined FUN_1457c735e(void)

longlong FUN_1457c735e(longlong param_1,longlong param_2)

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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  byte bVar15;
  longlong lVar16;
  
  FUN_141254448(param_1 + 0x20,param_2 + 0x20);
  FUN_140f13d9e(param_1 + 0x390,param_2 + 0x390);
  uVar1 = *(undefined4 *)(param_2 + 0x444);
  uVar2 = *(undefined4 *)(param_2 + 0x448);
  uVar3 = *(undefined4 *)(param_2 + 0x44c);
  *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(param_2 + 0x440);
  *(undefined4 *)(param_1 + 0x444) = uVar1;
  *(undefined4 *)(param_1 + 0x448) = uVar2;
  *(undefined4 *)(param_1 + 0x44c) = uVar3;
  *(undefined8 *)(param_1 + 0x450) = *(undefined8 *)(param_2 + 0x450);
  FUN_140f13d9e(param_1 + 0x460,param_2 + 0x460);
  *(undefined1 *)(param_1 + 0x540) = *(undefined1 *)(param_2 + 0x540);
  uVar1 = *(undefined4 *)(param_2 + 0x510);
  uVar2 = *(undefined4 *)(param_2 + 0x514);
  uVar3 = *(undefined4 *)(param_2 + 0x518);
  uVar4 = *(undefined4 *)(param_2 + 0x51c);
  uVar5 = *(undefined4 *)(param_2 + 0x520);
  uVar6 = *(undefined4 *)(param_2 + 0x524);
  uVar7 = *(undefined4 *)(param_2 + 0x528);
  uVar8 = *(undefined4 *)(param_2 + 0x52c);
  uVar9 = *(undefined4 *)(param_2 + 0x534);
  uVar10 = *(undefined4 *)(param_2 + 0x538);
  uVar11 = *(undefined4 *)(param_2 + 0x53c);
  *(undefined4 *)(param_1 + 0x530) = *(undefined4 *)(param_2 + 0x530);
  *(undefined4 *)(param_1 + 0x534) = uVar9;
  *(undefined4 *)(param_1 + 0x538) = uVar10;
  *(undefined4 *)(param_1 + 0x53c) = uVar11;
  *(undefined4 *)(param_1 + 0x520) = uVar5;
  *(undefined4 *)(param_1 + 0x524) = uVar6;
  *(undefined4 *)(param_1 + 0x528) = uVar7;
  *(undefined4 *)(param_1 + 0x52c) = uVar8;
  *(undefined4 *)(param_1 + 0x510) = uVar1;
  *(undefined4 *)(param_1 + 0x514) = uVar2;
  *(undefined4 *)(param_1 + 0x518) = uVar3;
  *(undefined4 *)(param_1 + 0x51c) = uVar4;
  lVar16 = *(longlong *)(param_2 + 0x550);
  if (DAT_14c950c29 == 1) {
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar16 = *(longlong *)(param_2 + 0x550);
    }
  }
  bVar15 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x550) = lVar16;
  *(undefined8 *)(param_1 + 0x558) = *(undefined8 *)(param_2 + 0x558);
  *(undefined8 *)(param_1 + 0x560) = *(undefined8 *)(param_2 + 0x560);
  lVar16 = *(longlong *)(param_2 + 0x568);
  if ((bVar15 & 1) != 0) {
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar16 = *(longlong *)(param_2 + 0x568);
    }
  }
  *(longlong *)(param_1 + 0x568) = lVar16;
  *(undefined8 *)(param_1 + 0x570) = *(undefined8 *)(param_2 + 0x570);
  *(undefined8 *)(param_1 + 0x578) = *(undefined8 *)(param_2 + 0x578);
  uVar12 = *(undefined8 *)(param_2 + 0x588);
  uVar13 = *(undefined8 *)(param_2 + 0x590);
  uVar14 = *(undefined8 *)(param_2 + 0x598);
  *(undefined8 *)(param_1 + 0x580) = *(undefined8 *)(param_2 + 0x580);
  *(undefined8 *)(param_1 + 0x588) = uVar12;
  *(undefined8 *)(param_1 + 0x590) = uVar13;
  *(undefined8 *)(param_1 + 0x598) = uVar14;
  return param_1;
}



// FUNCTION 1457c74aa FUN_1457c74aa body=347 status=ok
// SIG undefined FUN_1457c74aa(void)

longlong FUN_1457c74aa(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_140f13d9e(param_1 + 0x10,param_2 + 0x10);
  FUN_140f13d9e(param_1 + 0xc0,param_2 + 0xc0);
  FUN_140f13d9e(param_1 + 0x170,param_2 + 0x170);
  FUN_140f13d9e(param_1 + 0x220,param_2 + 0x220);
  FUN_140f13d9e(param_1 + 0x2d0,param_2 + 0x2d0);
  *(undefined1 *)(param_1 + 0x380) = *(undefined1 *)(param_2 + 0x380);
  FUN_140f13d9e(param_1 + 0x390,param_2 + 0x390);
  FUN_140f13d9e(param_1 + 0x440,param_2 + 0x440);
  FUN_140f13d9e(param_1 + 0x4f0,param_2 + 0x4f0);
  FUN_140f13d9e(param_1 + 0x5a0,param_2 + 0x5a0);
  FUN_140f13d9e(param_1 + 0x650,param_2 + 0x650);
  FUN_140f13d9e(param_1 + 0x700,param_2 + 0x700);
  uVar1 = *(undefined4 *)(param_2 + 0x7b4);
  uVar2 = *(undefined4 *)(param_2 + 0x7b8);
  uVar3 = *(undefined4 *)(param_2 + 0x7bc);
  uVar4 = *(undefined4 *)(param_2 + 0x7c0);
  uVar5 = *(undefined4 *)(param_2 + 0x7c4);
  uVar6 = *(undefined4 *)(param_2 + 0x7c8);
  uVar7 = *(undefined4 *)(param_2 + 0x7cc);
  *(undefined4 *)(param_1 + 0x7b0) = *(undefined4 *)(param_2 + 0x7b0);
  *(undefined4 *)(param_1 + 0x7b4) = uVar1;
  *(undefined4 *)(param_1 + 0x7b8) = uVar2;
  *(undefined4 *)(param_1 + 0x7bc) = uVar3;
  *(undefined4 *)(param_1 + 0x7c0) = uVar4;
  *(undefined4 *)(param_1 + 0x7c4) = uVar5;
  *(undefined4 *)(param_1 + 0x7c8) = uVar6;
  *(undefined4 *)(param_1 + 0x7cc) = uVar7;
  *(undefined8 *)(param_1 + 2000) = *(undefined8 *)(param_2 + 2000);
  FUN_140f13d9e(param_1 + 0x7e0,param_2 + 0x7e0);
  FUN_140f13d9e(param_1 + 0x890,param_2 + 0x890);
  FUN_140f13d9e(param_1 + 0x940,param_2 + 0x940);
  FUN_140f13d9e(param_1 + 0x9f0,param_2 + 0x9f0);
  FUN_140f13d9e(param_1 + 0xaa0,param_2 + 0xaa0);
  return param_1;
}



// FUNCTION 1457c7606 FUN_1457c7606 body=238 status=ok
// SIG undefined FUN_1457c7606(void)

void FUN_1457c7606(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  FUN_140f14872(&DAT_14c82ba00,1);
  FUN_14141661e(&DAT_14c833608);
  FUN_140f1461e(DAT_14c8335c8,DAT_14c8335d0);
  if (DAT_14c8335c8 != 0) {
    FUN_1400020a8();
  }
  FUN_140f14798(DAT_14c8335b8,DAT_14c8335c0);
  if (DAT_14c8335b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1411ee667(DAT_14c8335a8,DAT_14c8335b0);
  if (DAT_14c8335a8 != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c833580);
  lVar3 = 0x4900;
  do {
    FUN_1457c76f4(&DAT_14c82ba00 + lVar3);
    lVar3 = lVar3 + -0x1200;
  } while (lVar3 != -0x1100);
  plVar2 = &DAT_14c82bab0;
  lVar3 = -0x100;
  do {
    if (plVar2[-4] != 0) {
      plVar1 = (longlong *)plVar2[-2];
      if ((longlong *)plVar2[-2] == (longlong *)0x0) {
        plVar1 = plVar2;
      }
      (**(code **)(*plVar1 + 0x10))();
    }
    plVar2 = plVar2 + -0x10;
    lVar3 = lVar3 + 0x80;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 1457c76f4 FUN_1457c76f4 body=54 status=ok
// SIG undefined FUN_1457c76f4(void)

void FUN_1457c76f4(longlong *param_1)

{
  longlong lVar1;
  
  do {
    lVar1 = FUN_1457c772a(param_1);
  } while (lVar1 != 0);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  FUN_140f14648(param_1 + 0x20);
  return;
}



// FUNCTION 1457c772a FUN_1457c772a body=105 status=ok
// SIG undefined FUN_1457c772a(void)

void FUN_1457c772a(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_1;
  puVar1 = (undefined8 *)FUN_144a75d72(param_1 + 0x100);
  local_28 = puVar1;
  FUN_1457c7794(param_1,&local_30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0xffffffffffffffff;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c7794 FUN_1457c7794 body=269 status=ok
// SIG undefined FUN_1457c7794(void)

longlong FUN_1457c7794(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined **local_30;
  int *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  do {
    while( true ) {
      do {
        puVar3 = (undefined8 *)param_2[1];
        *puVar3 = *(undefined8 *)*param_2;
        LOCK();
        local_30 = (undefined **)CONCAT44(local_30._4_4_,(int)local_30 + 1);
        UNLOCK();
        piVar4 = (int *)*puVar3;
      } while (piVar4 != *(int **)*param_2);
      if ((piVar4[0x802] <= *piVar4) && (lVar5 = 0, *(longlong *)(piVar4 + 0x804) == 0))
      goto LAB_1457c77e5;
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + 1;
      UNLOCK();
      if (iVar1 < 0x400) break;
      if (*(longlong *)(piVar4 + 0x804) == 0) {
        lVar5 = 0;
        goto LAB_1457c77e5;
      }
      LOCK();
      piVar2 = (int *)*param_1;
      if (piVar4 == piVar2) {
        *param_1 = *(longlong *)(piVar4 + 0x804);
      }
      UNLOCK();
      if ((piVar4 == piVar2) && (*(undefined8 *)param_2[1] = 0, piVar4 != (int *)0x0)) {
        local_30 = &PTR_LAB_149dffa38;
        local_28 = piVar4;
        FUN_140665d24(param_1 + 0x20,&local_30,0xffffffff);
      }
    }
    LOCK();
    lVar5 = *(longlong *)(piVar4 + (longlong)iVar1 * 2 + 2);
    *(longlong *)(piVar4 + (longlong)iVar1 * 2 + 2) = -1;
    UNLOCK();
  } while (lVar5 == 0);
LAB_1457c77e5:
  *(undefined8 *)param_2[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 1457c78a2 FUN_1457c78a2 body=156 status=ok
// SIG undefined FUN_1457c78a2(void)

void FUN_1457c78a2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140f14c6a();
  *(undefined8 *)(param_1 + 0x5d8) = 0;
  plVar3 = *(longlong **)(param_1 + 0x5e0);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x5e0) = 0;
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
  *(undefined8 *)(param_1 + 0x5c8) = 0;
  plVar3 = *(longlong **)(param_1 + 0x5d0);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x5d0) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001457c793a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1457c793e FUN_1457c793e body=148 status=ok
// SIG undefined FUN_1457c793e(void)

void FUN_1457c793e(longlong param_1,int param_2)

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
    uVar4 = lVar3 << 3;
    if (DAT_14c872d28 != (longlong *)0x0) {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 3)) {
      uVar5 = uVar4 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457c79da FUN_1457c79da body=132 status=ok
// SIG undefined FUN_1457c79da(void)

void FUN_1457c79da(longlong param_1,int param_2)

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



// FUNCTION 1457c7a60 FUN_1457c7a60 body=55 status=ok
// SIG undefined FUN_1457c7a60(void)

void FUN_1457c7a60(longlong *param_1)

{
  FUN_140f17940(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457c7a98 FUN_1457c7a98 body=181 status=ok
// SIG undefined FUN_1457c7a98(void)

void FUN_1457c7a98(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  lVar3 = (**(code **)(*param_1 + 0x180))();
  FUN_140457ffc(lVar3 + 0x570,param_1);
  lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  FUN_140457ffc(lVar3 + 0x588,param_1);
  lVar3 = param_1[5];
  lVar2 = param_1[6];
  uVar4 = 0;
  if ((longlong)(int)lVar2 != 0) {
    lVar5 = 0;
    do {
      uVar1 = *(undefined8 *)(lVar3 + lVar5);
      FUN_1459a5ee4(uVar1);
      FUN_1459a5fd4(uVar1);
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar5);
    uVar4 = (undefined4)param_1[6];
    lVar3 = param_1[5];
  }
  FUN_14589b487(lVar3,uVar4);
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    return;
  }
  FUN_147dbc264(param_1 + 5);
  return;
}



// FUNCTION 1457c7b4e FUN_1457c7b4e body=142 status=ok
// SIG undefined FUN_1457c7b4e(void)

void FUN_1457c7b4e(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x700);
  if ((uVar1 & 1) == 0) {
    plVar2 = (longlong *)FUN_144a75eb4();
    lVar3 = plVar2[0x22];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      lVar3 = plVar2[0x22];
    }
    *(undefined1 *)(param_1 + 0x421) = *(undefined1 *)(lVar3 + 0x421);
    uVar1 = *(uint *)(param_1 + 0x700);
  }
  if ((uVar1 & 2) == 0) {
    plVar2 = (longlong *)FUN_144a75eb4();
    lVar3 = plVar2[0x22];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      lVar3 = plVar2[0x22];
    }
    *(undefined1 *)(param_1 + 0x422) = *(undefined1 *)(lVar3 + 0x422);
  }
  return;
}



// FUNCTION 1457c7bdc FUN_1457c7bdc body=40 status=ok
// SIG undefined FUN_1457c7bdc(void)

undefined8 FUN_1457c7bdc(undefined8 param_1,int param_2)

{
  thunk_FUN_14006e79a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457c7c04 thunk_FUN_14006e79a body=5 status=ok
// SIG undefined thunk_FUN_14006e79a(void)

void thunk_FUN_14006e79a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a73f970;
  param_1[5] = &PTR_FUN_14a73ff50;
  param_1[6] = &PTR_LAB_14a73ff90;
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x40],*(undefined4 *)(param_1 + 0x41));
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 1457c7c0a thunk_FUN_14006e79a body=5 status=ok
// SIG undefined thunk_FUN_14006e79a(void)

void thunk_FUN_14006e79a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a73f970;
  param_1[5] = &PTR_FUN_14a73ff50;
  param_1[6] = &PTR_LAB_14a73ff90;
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x40],*(undefined4 *)(param_1 + 0x41));
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 1457c7c10 thunk_FUN_14006e79a body=5 status=ok
// SIG undefined thunk_FUN_14006e79a(void)

void thunk_FUN_14006e79a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a73f970;
  param_1[5] = &PTR_FUN_14a73ff50;
  param_1[6] = &PTR_LAB_14a73ff90;
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x40],*(undefined4 *)(param_1 + 0x41));
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 1457c7c16 FUN_1457c7c16 body=321 status=ok
// SIG undefined FUN_1457c7c16(void)

void FUN_1457c7c16(longlong param_1,float param_2,char param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(byte *)(param_1 + 0xd8) & 1) != 0) {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (lVar5 != 0) {
    lVar4 = FUN_144a7a5f4();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) goto LAB_1457c7c6d;
  }
  lVar5 = 0;
LAB_1457c7c6d:
  if ((((param_3 != '\0') && (*(char *)(lVar5 + 0x178) == '\x03')) &&
      (*(longlong **)(lVar5 + 0x1b0) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(lVar5 + 0x1b0) + 0x700))(), cVar2 == '\0')) {
    uVar3 = FUN_141177592(lVar5,param_1);
    FUN_1457c7d58(lVar5,uVar3,param_2);
  }
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  bVar1 = *(byte *)(lVar5 + 0xbd8);
  if (((int)(uint)bVar1 < *(int *)(lVar5 + 0xbf0)) &&
     (lVar5 = *(longlong *)
               (*(longlong *)(lVar5 + 0xbe8) + 0x40 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8
               ), lVar5 != 0)) {
    param_2 = *(float *)(lVar5 + 0xa0) - param_2;
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    *(float *)(lVar5 + 0xa0) = param_2;
    *(undefined4 *)(lVar5 + 0xbc) = 0;
    if ((*(byte *)(lVar5 + 0x28) & 1) == 0) {
      *(byte *)(lVar5 + 0x28) = *(byte *)(lVar5 + 0x28) | 1;
      if (*(longlong *)(lVar5 + 0x30) != 0) {
        FUN_140b8222c(*(longlong *)(lVar5 + 0x30),lVar5,1);
        return;
      }
    }
    return;
  }
  return;
}



// FUNCTION 1457c7d58 FUN_1457c7d58 body=96 status=ok
// SIG undefined FUN_1457c7d58(void)

void FUN_1457c7d58(longlong *param_1,undefined1 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [4];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20[0] = param_2;
  local_1c = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cbbd460);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c7dba FUN_1457c7dba body=480 status=ok
// SIG undefined FUN_1457c7dba(void)

void FUN_1457c7dba(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1457c7f9c();
  local_58 = 0;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  local_68 = 1;
  FUN_1446f470e(&local_70,L"Generation",1);
  uVar1 = FUN_140f1f93e();
  FUN_140f1f93e();
  uVar1 = FUN_140f1fabf(uVar1,local_70);
  FUN_140f1fa23(uVar1,param_2,&local_68);
  local_58 = 0;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  local_68 = 1;
  FUN_1446f470e(&local_70,L"FullFuseTime",1);
  uVar1 = FUN_140f1f93e();
  FUN_140f1f93e();
  uVar1 = FUN_140f1fabf(uVar1,local_70);
  FUN_140f1fa23(uVar1,param_2,&local_68);
  local_58 = 0;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  local_68 = 1;
  FUN_1446f470e(&local_70,L"Identity",1);
  uVar1 = FUN_140f1f93e();
  FUN_140f1f93e();
  uVar1 = FUN_140f1fabf(uVar1,local_70);
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"GenericPayload",1);
  uVar1 = FUN_140f1f93e();
  FUN_140f1f93e();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"RepPayloadPostExploded",1);
  uVar1 = FUN_140f1f93e();
  FUN_140f1f93e();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c7f9c FUN_1457c7f9c body=226 status=ok
// SIG undefined FUN_1457c7f9c(void)

void FUN_1457c7f9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457c8080();
  FUN_1446f470e(&local_58,L"GrappleableState",1);
  uVar1 = FUN_14071731e();
  FUN_14071731e();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"bGrappleableEnabled",1);
  uVar1 = FUN_14071731e();
  FUN_14071731e();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c8080 FUN_1457c8080 body=2096 status=ok
// SIG undefined FUN_1457c8080(void)

void FUN_1457c8080(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140c2c6fa();
  local_58 = 0;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  local_68 = 1;
  FUN_1446f470e(&local_78,L"Damage",1);
  uVar1 = FUN_140d12354();
  FUN_140d12354();
  uVar1 = FUN_140f1fabf(uVar1,local_78);
  FUN_140f1fa23(uVar1,param_2,&local_68);
  local_58 = 0;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  local_68 = 1;
  FUN_1446f470e(&local_78,L"ImpactForce",1);
  uVar1 = FUN_140d12354();
  FUN_140d12354();
  uVar1 = FUN_140f1fabf(uVar1,local_78);
  FUN_140f1fa23(uVar1,param_2,&local_68);
  local_58 = 0;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  local_68 = 1;
  FUN_1446f470e(&local_78,L"DamageSource",1);
  uVar1 = FUN_140d12354();
  FUN_140d12354();
  uVar1 = FUN_140f1fabf(uVar1,local_78);
  FUN_140f1fa23(uVar1,param_2,&local_68);
  local_58 = 0;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  local_68 = 1;
  FUN_1446f470e(&local_78,L"SpawnSpeedScale",1);
  uVar1 = FUN_140d12354();
  FUN_140d12354();
  uVar1 = FUN_140f1fabf(uVar1,local_78);
  FUN_140f1fa23(uVar1,param_2,&local_68);
  local_58 = 0;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  local_68 = 1;
  FUN_1446f470e(&local_78,L"SourceActor",1);
  uVar1 = FUN_140d12354();
  FUN_140d12354();
  uVar1 = FUN_140f1fabf(uVar1,local_78);
  FUN_140f1fa23(uVar1,param_2,&local_68);
  local_58 = 0;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  local_68 = 8;
  FUN_1446f470e(&local_78,L"HealthState",1);
  uVar1 = FUN_140d12354();
  FUN_140d12354();
  uVar1 = FUN_140f1fabf(uVar1,local_78);
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"DamageType",1);
  uVar1 = FUN_140d12354();
  FUN_140d12354();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"DamageRadius",1);
  uVar1 = FUN_140d12354();
  FUN_140d12354();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"GbxActorData",1);
  uVar1 = FUN_140d12354();
  FUN_140d12354();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"ReplicatedGestaltParts",1);
  uVar1 = FUN_140d12354();
  FUN_140d12354();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"ResourcePoolManager",1);
  uVar1 = FUN_140d12354();
  FUN_140d12354();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"DamageModifierFlags",1);
  uVar1 = FUN_140d12354();
  FUN_140d12354();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"ReplicatedVelocity",1);
  uVar1 = FUN_140d12354();
  FUN_140d12354();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"CustomGravityScale",1);
  uVar1 = FUN_140d12354();
  FUN_140d12354();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"RepExploded",1);
  uVar1 = FUN_140d12354();
  FUN_140d12354();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"bWaitingToBeDestroyed",1);
  uVar1 = FUN_140d12354();
  FUN_140d12354();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"bIsHoming",1);
  uVar1 = FUN_140d12354();
  FUN_140d12354();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"HomingTarget",1);
  uVar1 = FUN_140d12354();
  FUN_140d12354();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"DrunkenMovementSeed",1);
  uVar1 = FUN_140d12354();
  FUN_140d12354();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"bInFlight",1);
  uVar1 = FUN_140d12354();
  FUN_140d12354();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"bThrown",1);
  uVar1 = FUN_140d12354();
  FUN_140d12354();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"bDropped",1);
  uVar1 = FUN_140d12354();
  FUN_140d12354();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"GameStage",1);
  uVar1 = FUN_140d12354();
  FUN_140d12354();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"RepAttachedState",1);
  uVar1 = FUN_140d12354();
  FUN_140d12354();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"FuseTime",1);
  uVar1 = FUN_140d12354();
  FUN_140d12354();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"HomingTurnSpeedScale",1);
  uVar1 = FUN_140d12354();
  FUN_140d12354();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = CONCAT71(uStack_60._1_7_,1);
  local_78 = L"FactsConduit";
  local_70 = 0x25;
  local_6c = 1;
  FUN_140c2c993(&local_78,param_2,&local_68);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c88b1 FUN_1457c88b1 body=100 status=ok
// SIG undefined FUN_1457c88b1(void)

void FUN_1457c88b1(void)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (DAT_14ca84d88 == '\x01') {
    uVar2 = (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2);
    if (*(longlong *)(&DAT_14ca8c1f0 + uVar2 * 8) != 0) {
      FUN_140f206bc();
      lVar1 = *(longlong *)(&DAT_14ca8c1f0 + uVar2 * 8);
      if (lVar1 != 0) {
        FUN_1457c8916(lVar1);
        FUN_1400020a8(lVar1);
      }
      *(undefined8 *)(&DAT_14ca8c1f0 + uVar2 * 8) = 0;
    }
  }
  return;
}



// FUNCTION 1457c8916 FUN_1457c8916 body=49 status=ok
// SIG undefined FUN_1457c8916(void)

void FUN_1457c8916(longlong param_1)

{
  FUN_140f206bc();
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1457c8948(param_1);
  return;
}



// FUNCTION 1457c8948 FUN_1457c8948 body=53 status=ok
// SIG undefined FUN_1457c8948(void)

void FUN_1457c8948(longlong *param_1)

{
  FUN_1457c89be();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457c897e FUN_1457c897e body=63 status=ok
// SIG undefined FUN_1457c897e(void)

void FUN_1457c897e(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1457c89be(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_140ec7af2(param_1);
    return;
  }
  FUN_1457c8a16(param_1);
  FUN_1457c89be(param_1);
  return;
}



// FUNCTION 1457c89be FUN_1457c89be body=88 status=ok
// SIG undefined FUN_1457c89be(void)

void FUN_1457c89be(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 1457c8a16 FUN_1457c8a16 body=325 status=ok
// SIG undefined FUN_1457c8a16(void)

void FUN_1457c8a16(longlong *param_1)

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



// FUNCTION 1457c8b5c FUN_1457c8b5c body=47 status=ok
// SIG undefined FUN_1457c8b5c(void)

void FUN_1457c8b5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac00f80;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1457c8b8c thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 1457c8b92 FUN_1457c8b92 body=76 status=ok
// SIG undefined FUN_1457c8b92(void)

void FUN_1457c8b92(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar3 = 1;
  }
  else {
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
  FUN_140f2b3b6(param_1);
  return;
}



// FUNCTION 1457c8bde FUN_1457c8bde body=87 status=ok
// SIG undefined FUN_1457c8bde(void)

undefined8 FUN_1457c8bde(longlong param_1,uint param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 < 4) {
    iVar4 = 1;
  }
  else {
    uVar3 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) &&
     ((param_3 != '\x01' || (*(int *)(param_1 + 0x48) <= iVar4)))) {
    uVar2 = 0;
  }
  else {
    *(int *)(param_1 + 0x48) = iVar4;
    FUN_1409bd292(param_1);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1457c8c36 FUN_1457c8c36 body=204 status=ok
// SIG undefined FUN_1457c8c36(void)

void FUN_1457c8c36(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar6 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)(int)uVar6 * 0x20;
        if (iVar3 < (int)uVar6) {
          iVar5 = *(int *)(lVar2 + lVar7);
          iVar1 = *(int *)(lVar2 + 4 + lVar7);
          uVar6 = (ulonglong)iVar1;
          if (uVar6 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar6 * 0x20) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x20) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar6 = (ulonglong)*(uint *)(lVar2 + 4 + lVar7);
        }
      } while ((int)uVar6 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) != iVar5) {
    FUN_1446f4a44(param_1,iVar5);
    return;
  }
  return;
}



// FUNCTION 1457c8d02 FUN_1457c8d02 body=74 status=ok
// SIG undefined FUN_1457c8d02(void)

undefined8 * FUN_1457c8d02(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140c99534(param_1,iVar1);
    FUN_140da7c4d(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1457c8d4c FUN_1457c8d4c body=353 status=ok
// SIG undefined FUN_1457c8d4c(void)

undefined4 * FUN_1457c8d4c(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457c900a(param_1,local_48);
  FUN_1457c8eae(param_3,local_40);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  if ((uVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar5);
  }
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_1457c8f42(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
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
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x1c) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1457c90f8(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c8eae FUN_1457c8eae body=70 status=ok
// SIG undefined FUN_1457c8eae(void)

longlong * FUN_1457c8eae(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = param_1[1];
  lVar2 = *(longlong *)*param_1;
  *param_2 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1457c8ef4(param_2 + 1,uVar1);
  return param_2;
}



// FUNCTION 1457c8ef4 FUN_1457c8ef4 body=77 status=ok
// SIG undefined FUN_1457c8ef4(void)

undefined8 * FUN_1457c8ef4(undefined8 *param_1,undefined8 *param_2)

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
    FUN_140c99534(param_1,iVar1,0);
    FUN_140c994e3(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1457c8f42 FUN_1457c8f42 body=198 status=ok
// SIG undefined FUN_1457c8f42(void)

undefined8 FUN_1457c8f42(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar6 = FUN_1456c4ed6(param_1,param_2,&local_38);
    if (iVar6 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x20) != 0) {
        FUN_1400020a8();
      }
      lVar4 = *param_3;
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      lVar5 = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(longlong *)(puVar1 + 4) = param_3[2];
      *puVar1 = (int)lVar4;
      puVar1[1] = uVar2;
      puVar1[2] = (int)lVar5;
      puVar1[3] = uVar3;
      FUN_145c1592e(param_1,*param_4);
      *param_4 = iVar6;
      uVar7 = 1;
      goto LAB_1457c8f68;
    }
  }
  uVar7 = 0;
LAB_1457c8f68:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c900a FUN_1457c900a body=238 status=ok
// SIG undefined FUN_1457c900a(void)

int * FUN_1457c900a(longlong *param_1,int *param_2)

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



// FUNCTION 1457c90f8 FUN_1457c90f8 body=517 status=ok
// SIG undefined FUN_1457c90f8(void)

void FUN_1457c90f8(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
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
  uVar3 = *(uint *)(param_1 + 9);
  uVar2 = local_70;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
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
    uVar2 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar8 = local_70._4_4_;
      local_70 = uVar2;
      do {
        lVar9 = *local_88;
        uVar6 = *(ulonglong *)(lVar9 + (longlong)iVar8 * 0x20);
        if ((DAT_14c950c29 == '\x01') && (uVar6 != 0)) {
          FUN_1456cec3c(uVar6);
        }
        lVar9 = lVar9 + (longlong)iVar8 * 0x20;
        uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar9 + 0x1c) = iVar5;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar9 + 0x18) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar8;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar8 = local_70._4_4_;
        uVar2 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457c92fe FUN_1457c92fe body=80 status=ok
// SIG undefined FUN_1457c92fe(void)

longlong * FUN_1457c92fe(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140cf30cb(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 1457c934e FUN_1457c934e body=80 status=ok
// SIG undefined FUN_1457c934e(void)

void FUN_1457c934e(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((DAT_14cad09b8 == 1) &&
     (((lVar2 = *(longlong *)(param_1 + 0xb0), lVar2 != 0 ||
       (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)) && (*(longlong *)(lVar2 + 0x260) != 0)))) {
    uVar1 = FUN_1479c8e48(*(undefined8 *)(*(longlong *)(lVar2 + 0x260) + 0x38));
    *(undefined8 *)(param_1 + 0x208) = uVar1;
  }
  return;
}



// FUNCTION 1457c939e FUN_1457c939e body=324 status=ok
// SIG undefined FUN_1457c939e(void)

void FUN_1457c939e(longlong param_1)

{
  undefined1 uVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  
  if (((((*(byte *)(param_1 + 0x41a5) & 4) == 0) || (*(char *)(param_1 + 0x178) != '\x03')) ||
      (lVar3 = FUN_1447210f0(param_1), lVar3 == 0)) ||
     ((lVar3 = FUN_1405e677a(DAT_14cb0d2b0,lVar3), *(char *)(lVar3 + 0x88) != '\0' ||
      (*(char *)(param_1 + 0x5d30) != '\0')))) {
    return;
  }
  *(undefined1 *)(param_1 + 0x5d30) = 1;
  uVar5 = *(ulonglong *)(param_1 + 0x28);
  FUN_144a62f0c(param_1,uVar5,0x2c);
  FUN_140fbbe26(param_1);
  if (*(longlong *)(&DAT_00006850 + param_1) == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = FUN_144a80e0c();
    uVar5 = 0;
    thunk_FUN_141105774(*(undefined8 *)(&DAT_00006850 + param_1),0,3);
  }
  if (((*(char *)(param_1 + 0x178) == '\x03') &&
      (lVar3 = (**(code **)(*(longlong *)(param_1 + 0x3c20) + 0x18))(param_1 + 0x3c20), lVar3 != 0))
     && (*(longlong *)(lVar3 + 0x20) != 0)) {
    uVar1 = *(undefined1 *)(param_1 + 0x5d31);
    uVar5 = CONCAT71((int7)(uVar5 >> 8),4);
    FUN_1458ae910(*(longlong *)(lVar3 + 0x20),uVar5,0);
    *(undefined1 *)(param_1 + 0x5d31) = uVar1;
  }
  if ((*(byte *)(param_1 + 0x73e8) & 4) == 0) {
    return;
  }
  bVar4 = *(char *)(param_1 + 0x5d31) - 2;
  if (bVar4 < 5) {
    bVar4 = 0x17 >> (bVar4 & 0x1f);
    uVar5 = CONCAT71((int7)(uVar5 >> 8),bVar4);
    if (((~bVar2 | bVar4) & 1) != 0) goto LAB_1457c94a7;
  }
  else if (bVar2 == 0) {
    uVar5 = 0;
    goto LAB_1457c94a7;
  }
  uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
LAB_1457c94a7:
  FUN_140f330f4(param_1 + 0x71a8,uVar5 & 0xffffffffffffff01);
  return;
}



// FUNCTION 1457c94e2 thunk_FUN_141105774 body=5 status=ok
// SIG undefined thunk_FUN_141105774(void)

void thunk_FUN_141105774(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x600))();
  if (cVar1 != '\0') {
    if (param_1[0x62e] == 0) {
      if ((char)param_1[0x696] != '\x01') {
        return;
      }
      param_1 = param_1 + 0x642;
    }
    else {
      param_1 = (longlong *)(param_1[0x62e] + 0xd8);
    }
    cVar1 = FUN_1411057e8(param_1,param_2);
    if (cVar1 != '\0') {
      FUN_141105826(param_1,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 1457c94f8 FUN_1457c94f8 body=110 status=ok
// SIG undefined FUN_1457c94f8(void)

undefined8 * FUN_1457c94f8(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  if (param_2 != param_1) {
    if (*(char *)(param_1 + 4) == '\x01') {
      FUN_140e0f122(param_1);
    }
    *param_1 = &PTR_LAB_14b42aff0;
    param_1[1] = param_2[1];
    *param_1 = &PTR_LAB_14b222b90;
    param_1[2] = param_2[2];
    lVar1 = param_2[3];
    param_1[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *param_1 = &PTR_FUN_14b42afd0;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return param_1;
}



// FUNCTION 1457c9566 FUN_1457c9566 body=105 status=ok
// SIG undefined FUN_1457c9566(void)

ulonglong FUN_1457c9566(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_1457c959e;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14050b866(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 8) = *param_2;
LAB_1457c959e:
  return uVar4 & 0xffffffff;
}



// FUNCTION 1457c95d0 FUN_1457c95d0 body=154 status=ok
// SIG undefined FUN_1457c95d0(void)

int FUN_1457c95d0(longlong *param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = (int)param_1[1];
  iVar4 = iVar1;
  if (0 < iVar1) {
    uVar5 = 0;
    bVar3 = 0;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + (longlong)(int)uVar5 * 8) == *param_2) {
        iVar7 = ~uVar5 + iVar4;
        if (iVar7 != 0) {
          iVar6 = 1;
          if (iVar7 < 1) {
            iVar6 = iVar7;
          }
          memmove((void *)(lVar2 + (longlong)(int)uVar5 * 8),
                  (void *)(lVar2 + (longlong)(iVar4 - iVar6) * 8),(longlong)iVar6 << 3);
          iVar4 = (int)param_1[1];
        }
        uVar5 = uVar5 - 1;
        iVar4 = iVar4 + -1;
        *(int *)(param_1 + 1) = iVar4;
        bVar3 = 1;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar4);
    if ((bool)(param_3 == '\x01' & bVar3)) {
      FUN_1457c966a(param_1);
      iVar4 = (int)param_1[1];
    }
  }
  return iVar1 - iVar4;
}



// FUNCTION 1457c966a FUN_1457c966a body=62 status=ok
// SIG undefined FUN_1457c966a(void)

void FUN_1457c966a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1457c96a8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1457c96a8 FUN_1457c96a8 body=89 status=ok
// SIG undefined FUN_1457c96a8(void)

ulonglong FUN_1457c96a8(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
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



// FUNCTION 1457c9702 FUN_1457c9702 body=138 status=ok
// SIG undefined FUN_1457c9702(void)

code * FUN_1457c9702(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CachedHeightTextureUvScaleBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2d00000006e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148182780;
}



// FUNCTION 1457c978c FUN_1457c978c body=138 status=ok
// SIG undefined FUN_1457c978c(void)

code * FUN_1457c978c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CachedHeightTextureEnabled";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2380000006a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14818291e;
}



// FUNCTION 1457c9816 FUN_1457c9816 body=138 status=ok
// SIG undefined FUN_1457c9816(void)

code * FUN_1457c9816(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NormalVirtualTextureWorldToUvTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a000000061;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148182d6e;
}



// FUNCTION 1457c98a0 FUN_1457c98a0 body=113 status=ok
// SIG undefined FUN_1457c98a0(void)

void FUN_1457c98a0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 1457c9912 FUN_1457c9912 body=88 status=ok
// SIG undefined FUN_1457c9912(void)

undefined8 * FUN_1457c9912(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140ce2904(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1457c996a FUN_1457c996a body=127 status=ok
// SIG undefined FUN_1457c996a(void)

void FUN_1457c996a(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_140457ffc(*(longlong *)(param_1 + 0xd0) + 0x168,param_1);
  }
  *(longlong *)(param_1 + 0xd0) = param_2;
  if (param_2 != 0) {
    FUN_1457c9aaa(param_2 + 0x168,local_20,param_1,&LAB_140d0617a);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c99ea FUN_1457c99ea body=190 status=ok
// SIG undefined FUN_1457c99ea(void)

longlong FUN_1457c99ea(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
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
        lVar2 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar2 != 0) goto LAB_1457c9a39;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1457c9bfe(param_1,&local_1c,param_2);
  lVar2 = (longlong)local_1c * 0x20 + *param_1;
LAB_1457c9a39:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + 8;
}



// FUNCTION 1457c9aaa FUN_1457c9aaa body=228 status=ok
// SIG undefined FUN_1457c9aaa(void)

undefined8
FUN_1457c9aaa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  *local_40 = &PTR_LAB_149e020b0;
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
  *local_40 = &PTR_FUN_14b41b700;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_1448b6402(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c9b90 FUN_1457c9b90 body=109 status=ok
// SIG undefined FUN_1457c9b90(void)

void FUN_1457c9b90(longlong *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  
  uVar1 = *(uint *)((longlong)param_2 + 0x28);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140f54fb6(param_1,iVar2);
    }
    _Src = *(void **)((longlong)param_2 + 0x20);
    if (*(void **)((longlong)param_2 + 0x20) == (void *)0x0) {
      _Src = param_2;
    }
    memcpy((void *)((longlong)iVar2 * 8 + *param_1),_Src,(longlong)(int)uVar1 << 3);
    return;
  }
  return;
}



// FUNCTION 1457c9bfe FUN_1457c9bfe body=274 status=ok
// SIG undefined FUN_1457c9bfe(void)

undefined4 * FUN_1457c9bfe(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_1457c9dba(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_1457c9d12(param_1,param_3,local_40,local_48);
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
      FUN_140f4492c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457c9d12 FUN_1457c9d12 body=168 status=ok
// SIG undefined FUN_1457c9d12(void)

undefined8 FUN_1457c9d12(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_14891829c(param_1,*param_4);
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



// FUNCTION 1457c9dba FUN_1457c9dba body=230 status=ok
// SIG undefined FUN_1457c9dba(void)

int * FUN_1457c9dba(longlong *param_1,int *param_2)

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



// FUNCTION 1457c9ea0 FUN_1457c9ea0 body=221 status=ok
// SIG undefined FUN_1457c9ea0(void)

void FUN_1457c9ea0(longlong *param_1,undefined8 *param_2)

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
  longlong lVar10;
  bool bVar11;
  
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar5 = 0;
    bVar11 = *plVar2 == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      lVar10 = (longlong)iVar7;
      iVar8 = iVar7;
      lVar6 = lVar10;
      iVar3 = iVar7 + 1;
      if (iVar7 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar3;
        if (lVar4 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar11 == (plVar2[lVar6] == *(longlong *)*param_2));
      if (bVar11 == false) {
        if (iVar5 != iVar7) {
          memmove(plVar2 + iVar5,plVar2 + lVar10,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar5 = iVar5 + (iVar9 - iVar7);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar4);
    *(int *)(param_1 + 1) = iVar5;
  }
  return;
}



// FUNCTION 1457c9f7e FUN_1457c9f7e body=164 status=ok
// SIG undefined FUN_1457c9f7e(void)

void FUN_1457c9f7e(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0xe0);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar2) < uVar1) {
      FUN_140f54fb6(param_2,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 8 + *param_2),*(void **)(param_1 + 0xd8),
           (longlong)(int)uVar1 << 3);
  }
  if ((param_3 == '\0') && (iVar2 = *(int *)(param_1 + 0xe0), (longlong)iVar2 != 0)) {
    lVar3 = *(longlong *)(param_1 + 0xd8);
    lVar4 = 0;
    do {
      FUN_1457c9f7e(*(undefined8 *)(lVar3 + lVar4),param_2,0);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar2 * 8 != lVar4);
  }
  return;
}



// FUNCTION 1457ca022 FUN_1457ca022 body=78 status=ok
// SIG undefined FUN_1457ca022(void)

void FUN_1457ca022(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x1f0) == '\x01') {
    FUN_1433eddd8(param_1 + 0x210,param_2);
  }
  if (*(char *)(param_1 + 0x120) != '\x01') {
    return;
  }
  FUN_1433eddd8(param_1 + 0x140,param_2);
  return;
}



// FUNCTION 1457ca070 FUN_1457ca070 body=132 status=ok
// SIG undefined FUN_1457ca070(void)

void FUN_1457ca070(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 3) {
      uVar5 = 2;
    }
    else {
      if (*(uint *)(param_1 + 0x1c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar4 = (longlong)(int)uVar2;
      }
      else {
        lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 >> 3)) {
        uVar5 = uVar3 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x1c) = (int)uVar5;
    FUN_1457ca0f4(param_1,param_2,uVar5,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457ca0f4 FUN_1457ca0f4 body=133 status=ok
// SIG undefined FUN_1457ca0f4(void)

void FUN_1457ca0f4(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,param_4);
  return;
}



// FUNCTION 1457ca17a FUN_1457ca17a body=28 status=ok
// SIG undefined FUN_1457ca17a(void)

void FUN_1457ca17a(undefined8 param_1)

{
  FUN_144a63f30();
  FUN_140f44cf4(param_1,1);
  return;
}



// FUNCTION 1457ca196 FUN_1457ca196 body=89 status=ok
// SIG undefined FUN_1457ca196(void)

undefined8 * FUN_1457ca196(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1457ca2ac(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 1457ca1f0 FUN_1457ca1f0 body=93 status=ok
// SIG undefined FUN_1457ca1f0(void)

undefined8 * FUN_1457ca1f0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1457e927f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147da29e2(param_1,iVar1);
      FUN_147da2a55(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1457ca24e FUN_1457ca24e body=93 status=ok
// SIG undefined FUN_1457ca24e(void)

undefined8 * FUN_1457ca24e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1457e92cc(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147da2aa0(param_1,iVar1);
      FUN_147da2b13(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1457ca2ac FUN_1457ca2ac body=115 status=ok
// SIG undefined FUN_1457ca2ac(void)

void FUN_1457ca2ac(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,4);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1457ca320 FUN_1457ca320 body=54 status=ok
// SIG undefined FUN_1457ca320(void)

void FUN_1457ca320(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2ba5b0;
  param_1[6] = &PTR_LAB_14b2ba8a0;
  FUN_14079c464(param_1 + 0x1b);
  FUN_1408ee338(param_1);
  return;
}



// FUNCTION 1457ca364 FUN_1457ca364 body=40 status=ok
// SIG undefined FUN_1457ca364(void)

undefined8 FUN_1457ca364(undefined8 param_1,int param_2)

{
  FUN_1457ca38c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457ca38c FUN_1457ca38c body=77 status=ok
// SIG undefined FUN_1457ca38c(void)

void FUN_1457ca38c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b676be0;
  if ((longlong *)param_1[0xc] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc] + 0x10))();
  }
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[10] + 0x10))();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_140f4522c(param_1);
  return;
}



// FUNCTION 1457ca3da FUN_1457ca3da body=70 status=ok
// SIG undefined FUN_1457ca3da(void)

longlong FUN_1457ca3da(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446dd912(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xc + *param_1;
  FUN_1446dd7a8(lVar2,1);
  return lVar2;
}



// FUNCTION 1457ca420 FUN_1457ca420 body=9 status=ok
// SIG undefined FUN_1457ca420(void)

void FUN_1457ca420(longlong param_1)

{
  FUN_1457ca42a(param_1 + 0x10);
  return;
}



// FUNCTION 1457ca42a FUN_1457ca42a body=92 status=ok
// SIG undefined FUN_1457ca42a(void)

void FUN_1457ca42a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0x10;
  do {
    lVar1 = *(longlong *)((longlong)param_1 + lVar2);
    if (lVar1 != 0) {
      FUN_1457ca42a(lVar1);
      FUN_1400020a8(lVar1);
    }
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x30);
  FUN_140f46efe(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1457ca486 FUN_1457ca486 body=40 status=ok
// SIG undefined FUN_1457ca486(void)

undefined8 FUN_1457ca486(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457ca4ae FUN_1457ca4ae body=324 status=ok
// SIG undefined FUN_1457ca4ae(void)

undefined4 * FUN_1457ca4ae(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457ca684(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar6 = *(uint *)*param_3;
  *local_40 = uVar6;
  local_40[2] = *puVar1;
  *(uint **)(local_40 + 6) = local_40 + 8;
  *(uint **)(local_40 + 4) = local_40 + 0xc;
  uVar2 = (*(undefined8 **)(puVar1 + 4))[1];
  *(undefined8 *)(local_40 + 8) = **(undefined8 **)(puVar1 + 4);
  *(undefined8 *)(local_40 + 10) = uVar2;
  memcpy(local_40 + 0xc,*(void **)(puVar1 + 2),0x44);
  local_40[0x1e] = 0xffffffff;
  local_4c = local_48[0];
  cVar4 = FUN_1457ca5f4(param_1,uVar6,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar5) {
      uVar7 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      local_40[0x1f] = uVar6;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_40[0x1e] =
           *(uint *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1457ca76a(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457ca5f4 FUN_1457ca5f4 body=143 status=ok
// SIG undefined FUN_1457ca5f4(void)

undefined8 FUN_1457ca5f4(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x80);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x80) == *param_3) {
          memmove(_Dst,param_3,0x78);
          FUN_1489d6ff2(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x78);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1457ca684 FUN_1457ca684 body=230 status=ok
// SIG undefined FUN_1457ca684(void)

int * FUN_1457ca684(longlong *param_1,int *param_2)

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
      FUN_140eca382(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x80);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x80) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x80 + *param_1;
  return param_2;
}



// FUNCTION 1457ca76a FUN_1457ca76a body=431 status=ok
// SIG undefined FUN_1457ca76a(void)

void FUN_1457ca76a(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x80;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x7c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x78 + lVar7) =
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



// FUNCTION 1457ca91a FUN_1457ca91a body=62 status=ok
// SIG undefined FUN_1457ca91a(void)

void FUN_1457ca91a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1457ca958(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1457ca958 FUN_1457ca958 body=89 status=ok
// SIG undefined FUN_1457ca958(void)

ulonglong FUN_1457ca958(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
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



// FUNCTION 1457ca9b2 FUN_1457ca9b2 body=121 status=ok
// SIG undefined FUN_1457ca9b2(void)

void FUN_1457ca9b2(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_2 + 8) = 0xffffffff;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x250));
  local_28 = param_2;
  FUN_140e680e8(param_1 + 0x278,local_2c,&local_28,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x250));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457caa2c FUN_1457caa2c body=49 status=ok
// SIG undefined FUN_1457caa2c(void)

undefined8 FUN_1457caa2c(undefined8 param_1,int param_2)

{
  FUN_1457caa5e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x240,0x40);
  }
  return param_1;
}



// FUNCTION 1457caa5e FUN_1457caa5e body=219 status=ok
// SIG undefined FUN_1457caa5e(void)

void FUN_1457caa5e(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14a1c9cf0;
  if (*(int *)(param_1 + 2) != 0) {
    FUN_140f4877a(param_1 + 8);
    FUN_140f4877a(param_1 + 0x18);
    FUN_140f4877a(param_1 + 0x28);
    while( true ) {
      lVar3 = FUN_140bf6712(param_1 + 0x38);
      if (lVar3 == 0) break;
      if (*(longlong *)(lVar3 + 0x18) != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)(lVar3 + 0x18) + 0x10);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      FUN_140bf6920(lVar3);
    }
  }
  lVar3 = 0x240;
  do {
    puVar4 = (undefined8 *)((longlong)param_1 + lVar3 + -0x80);
    lVar3 = lVar3 + -0x80;
    do {
      lVar2 = FUN_140bf6712(puVar4);
    } while (lVar2 != 0);
    FUN_1447d080c((uint)*puVar4 & 0x3ffffff);
  } while (lVar3 != 0x40);
  *param_1 = &PTR_LAB_14a1c91e0;
  lVar3 = DAT_14c9a7d48;
  if (DAT_14c9a7d48 != 0) {
    FUN_1457cab3a(DAT_14c9a7d48,param_1);
    FUN_140f91434(lVar3,param_1);
    return;
  }
  return;
}



// FUNCTION 1457cab3a FUN_1457cab3a body=64 status=ok
// SIG undefined FUN_1457cab3a(void)

void FUN_1457cab3a(longlong param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x250));
  FUN_140e67d96(param_1 + 0x278,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001457cab73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x250));
  return;
}



// FUNCTION 1457cab7a FUN_1457cab7a body=132 status=ok
// SIG undefined FUN_1457cab7a(void)

void FUN_1457cab7a(longlong param_1,int param_2)

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



// FUNCTION 1457cac00 FUN_1457cac00 body=93 status=ok
// SIG undefined FUN_1457cac00(void)

undefined8 * FUN_1457cac00(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14580f9d0(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1457cacbc(param_1,iVar1);
      FUN_1457cac5d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1457cac5d FUN_1457cac5d body=95 status=ok
// SIG undefined FUN_1457cac5d(void)

void FUN_1457cac5d(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_140f4ad0c(param_1,param_2);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    FUN_140f4aa92(param_1 + 0x68,param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
    param_1 = param_1 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return;
}



// FUNCTION 1457cacbc FUN_1457cacbc body=118 status=ok
// SIG undefined FUN_1457cacbc(void)

void FUN_1457cacbc(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x88,8);
    iVar2 = (int)(uVar1 / 0x88);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x88,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1457cad32 FUN_1457cad32 body=53 status=ok
// SIG undefined FUN_1457cad32(void)

void FUN_1457cad32(undefined8 param_1,undefined8 *param_2)

{
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  thunk_FUN_140f4ae1c(param_2 + 4);
  *(undefined1 *)(param_2 + 0xb) = 1;
  return;
}



// FUNCTION 1457cad68 thunk_FUN_140f4ae1c body=5 status=ok
// SIG undefined thunk_FUN_140f4ae1c(void)

undefined8 * thunk_FUN_140f4ae1c(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  return param_1;
}



// FUNCTION 1457cad6e FUN_1457cad6e body=152 status=ok
// SIG undefined FUN_1457cad6e(void)

void FUN_1457cad6e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined8 local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 != 0) {
    local_58[0] = *param_2;
    local_48[0] = 0;
    if (local_58[0] != 0) {
      plVar2 = param_2 + 4;
      if ((longlong *)param_2[2] != (longlong *)0x0) {
        plVar2 = (longlong *)param_2[2];
      }
      (**(code **)*plVar2)(plVar2,local_48);
    }
    FUN_140f4df68(lVar1,local_58);
  }
  if (*param_2 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457cae08 FUN_1457cae08 body=254 status=ok
// SIG undefined FUN_1457cae08(void)

undefined8
FUN_1457cae08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e020b0;
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
  *local_48 = &PTR_FUN_14b3e7570;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457caf08 FUN_1457caf08 body=213 status=ok
// SIG undefined FUN_1457caf08(void)

void FUN_1457caf08(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  longlong lVar5;
  
  if (DAT_14cb25a58 != DAT_14cb25a84) {
    puVar3 = &DAT_14cb25a88;
    if (DAT_14cb25a90 != (undefined *)0x0) {
      puVar3 = DAT_14cb25a90;
    }
    for (iVar1 = *(int *)(puVar3 + ((longlong)
                                    ((int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) &
                                   (longlong)DAT_14cb25a98 - 1U) * 4); iVar1 != -1;
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + DAT_14cb25a50 + 0x18)) {
      if (*(longlong *)(DAT_14cb25a50 + (longlong)iVar1 * 0x20) == param_1) {
        puVar3 = &DAT_14cb25a88;
        if (DAT_14cb25a90 != (undefined *)0x0) {
          puVar3 = DAT_14cb25a90;
        }
        lVar5 = (longlong)*(int *)(DAT_14cb25a50 + 0x1c + (longlong)iVar1 * 0x20);
        iVar2 = *(int *)(puVar3 + lVar5 * 4);
        if (iVar2 == iVar1) {
          piVar4 = (int *)(puVar3 + lVar5 * 4);
        }
        else {
          do {
            piVar4 = (int *)(DAT_14cb25a50 + (longlong)iVar2 * 0x20 + 0x18);
            iVar2 = *piVar4;
          } while (iVar2 != iVar1);
        }
        *piVar4 = *(int *)(DAT_14cb25a50 + (longlong)iVar1 * 0x20 + 0x18);
        FUN_1457cafde();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1457cafde FUN_1457cafde body=76 status=ok
// SIG undefined FUN_1457cafde(void)

void FUN_1457cafde(int param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(DAT_14cb25a50 + 0x10 + (longlong)param_1 * 0x20);
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
  FUN_1457cb02a(param_1);
  return;
}



// FUNCTION 1457cb02a FUN_1457cb02a body=128 status=ok
// SIG undefined FUN_1457cb02a(void)

void FUN_1457cb02a(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb25a50;
  if (DAT_14cb25a84 != 0) {
    *(int *)(DAT_14cb25a50 + (longlong)DAT_14cb25a80 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb25a84) {
    iVar4 = DAT_14cb25a80;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14cb25a84 = DAT_14cb25a84 + 1;
  puVar3 = &DAT_14cb25a60;
  if (DAT_14cb25a70 != (undefined *)0x0) {
    puVar3 = DAT_14cb25a70;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb25a80 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1457cb0b8 FUN_1457cb0b8 body=69 status=ok
// SIG undefined FUN_1457cb0b8(void)

undefined8 * FUN_1457cb0b8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b006d20;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_140f4e84a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457cb0fe FUN_1457cb0fe body=190 status=ok
// SIG undefined FUN_1457cb0fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457cb0fe(void)

{
  _DAT_14cc1c7d8 = &PTR_LAB_149e668b0;
  _DAT_14cc1c7e0 = 0;
  FUN_1405bceb4(&DAT_14cc1c7d8);
  _DAT_14cc1c7d8 = &PTR_FUN_14bd10450;
  DAT_14cc1c808 = 0;
  DAT_14cc1c810 = 0;
  DAT_14cc1c7e8 = 0;
  _DAT_14cc1c7f0 = 0;
  _DAT_14cc1c814 = 0xffffffff00000080;
  DAT_14cc1c81c = 0;
  DAT_14cc1c828 = 0;
  DAT_14cc1c830 = 0;
  _DAT_14cc1c868 = 0;
  DAT_14cc1c870 = 0;
  DAT_14cc1c838 = 0;
  _DAT_14cc1c840 = 0;
  DAT_14cc1c848 = 0;
  uRam000000014cc1c850 = 0;
  _DAT_14cc1c874 = 0xffffffff00000080;
  _DAT_14cc1c87c = 0;
  _DAT_14cc1c888 = 0;
  _DAT_14cc1c890 = 0;
  _DAT_14cc1c898 = 0;
  uRam000000014cc1c8a0 = 0;
  _DAT_14cc1c8a8 = 2;
  return;
}



// FUNCTION 1457cb1bc FUN_1457cb1bc body=430 status=ok
// SIG undefined FUN_1457cb1bc(void)

void FUN_1457cb1bc(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
    if (param_2 == 0) {
      FUN_14485c47a(param_1 + 0x3a,param_3);
      param_1[0x3b] = param_4;
      (**(code **)(*param_1 + 0xb8))(param_1,0,param_3,param_4);
      param_1[0x3c] = 0;
    }
    else {
      lVar2 = FUN_144a78b9e();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
        FUN_1457cb55a(local_50,param_1);
        FUN_140f506ce(param_2 + 0x410,&local_58,local_50);
        FUN_1449db362(local_50);
        param_1[0x38] = local_58;
        FUN_1457cb748(local_50,param_1);
        FUN_140c6314c(param_2 + 0x11d0,&local_58,local_50);
        FUN_1449db362(local_50);
      }
      FUN_14485c47a(param_1 + 0x3a,param_3);
      param_1[0x3b] = param_4;
      (**(code **)(*param_1 + 0xb8))(param_1,param_2,param_3,param_4);
      FUN_14485c47a(param_1 + 0x3c,param_2);
      uVar3 = FUN_1401b0f18();
      plVar4 = (longlong *)FUN_144718840(param_2,uVar3);
      if (plVar4 != (longlong *)0x0) {
        lVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
        FUN_1457cb36c(local_50,param_1);
        FUN_1448b6402(lVar2 + 0x28,&local_58,local_50);
        FUN_1449db362(local_50);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457cb36c FUN_1457cb36c body=487 status=ok
// SIG undefined FUN_1457cb36c(void)

longlong * FUN_1457cb36c(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar4 = (undefined8 *)*param_1;
  FUN_14045cb56(param_2,&local_38);
  plVar2 = local_30;
  if (local_30 == (longlong *)0x0) {
    *puVar4 = &PTR_LAB_149e020b0;
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
    *puVar4 = &PTR_FUN_14b405860;
    puVar4[3] = local_38;
    puVar4[4] = 0;
    puVar4[5] = &LAB_145a589c0;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *puVar4 = &PTR_LAB_149e020b0;
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
    *puVar4 = &PTR_FUN_14b405860;
    puVar4[3] = local_38;
    puVar4[4] = local_30;
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = &LAB_145a589c0;
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
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
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar3 = (int *)((longlong)local_30 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457cb55a FUN_1457cb55a body=487 status=ok
// SIG undefined FUN_1457cb55a(void)

longlong * FUN_1457cb55a(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar4 = (undefined8 *)*param_1;
  FUN_14045cb56(param_2,&local_38);
  plVar2 = local_30;
  if (local_30 == (longlong *)0x0) {
    *puVar4 = &PTR_LAB_14b405f40;
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
    *puVar4 = &PTR_FUN_14b405780;
    puVar4[3] = local_38;
    puVar4[4] = 0;
    puVar4[5] = FUN_140ca1fa2;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *puVar4 = &PTR_LAB_14b405f40;
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
    *puVar4 = &PTR_FUN_14b405780;
    puVar4[3] = local_38;
    puVar4[4] = local_30;
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = FUN_140ca1fa2;
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
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
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar3 = (int *)((longlong)local_30 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457cb748 FUN_1457cb748 body=487 status=ok
// SIG undefined FUN_1457cb748(void)

longlong * FUN_1457cb748(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar4 = (undefined8 *)*param_1;
  FUN_14045cb56(param_2,&local_38);
  plVar2 = local_30;
  if (local_30 == (longlong *)0x0) {
    *puVar4 = &PTR_LAB_149e06450;
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
    *puVar4 = &PTR_FUN_14b4057f0;
    puVar4[3] = local_38;
    puVar4[4] = 0;
    puVar4[5] = &LAB_141121d56;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *puVar4 = &PTR_LAB_149e06450;
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
    *puVar4 = &PTR_FUN_14b4057f0;
    puVar4[3] = local_38;
    puVar4[4] = local_30;
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = &LAB_141121d56;
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
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
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar3 = (int *)((longlong)local_30 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457cb936 FUN_1457cb936 body=33 status=ok
// SIG undefined FUN_1457cb936(void)

void FUN_1457cb936(longlong param_1)

{
  FUN_1457cb958(param_1 + -0x30);
  FUN_145acb64c(param_1 + -0x30);
  return;
}


