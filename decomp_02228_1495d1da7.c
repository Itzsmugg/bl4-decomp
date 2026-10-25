// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1495d1da7 FUN_1495d1da7 body=102 status=ok
// SIG undefined FUN_1495d1da7(void)

void FUN_1495d1da7(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 9) & 0x20) == 0) {
    plVar1 = (longlong *)FUN_1495596e1(param_1,0x10);
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x10);
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_149559090(*plVar1);
    lVar2 = FUN_149558fb1(*param_3);
    *plVar1 = lVar2;
    if (lVar2 == 0) {
      FUN_14955960a(param_1);
      return;
    }
    *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
  }
  return;
}



// FUNCTION 1495d1e0d FUN_1495d1e0d body=86 status=ok
// SIG undefined FUN_1495d1e0d(void)

void FUN_1495d1e0d(undefined8 *param_1)

{
  longlong *plVar1;
  
  if ((*(byte *)(param_1[2] + 9) & 0x20) == 0) {
    plVar1 = (longlong *)FUN_1495596e1(param_1,0x10);
  }
  else {
    plVar1 = *(longlong **)(param_1[2] + 0x10);
  }
  if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
    FUN_1495594c1(*param_1);
    FUN_149559090(*plVar1);
    *plVar1 = 0;
  }
  return;
}



// FUNCTION 1495d1e63 FUN_1495d1e63 body=66 status=ok
// SIG undefined FUN_1495d1e63(void)

void FUN_1495d1e63(undefined8 *param_1)

{
  longlong *plVar1;
  
  if ((*(byte *)(param_1[2] + 9) & 0x20) == 0) {
    plVar1 = (longlong *)FUN_1495596e1(param_1,0);
  }
  else {
    plVar1 = *(longlong **)(param_1[2] + 0x10);
  }
  if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
    FUN_1495594c1(*param_1);
    return;
  }
  return;
}



// FUNCTION 1495d1ea5 FUN_1495d1ea5 body=67 status=ok
// SIG undefined FUN_1495d1ea5(void)

void FUN_1495d1ea5(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 9) & 0x20) == 0) {
    puVar2 = (undefined8 *)FUN_1495596e1(param_1,0x10);
  }
  else {
    puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0x10);
  }
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_149559090(*puVar2);
      *puVar2 = 0;
    }
  }
  return;
}



// FUNCTION 1495d1ee8 FUN_1495d1ee8 body=315 status=ok
// SIG undefined FUN_1495d1ee8(void)

void FUN_1495d1ee8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  double *pdVar1;
  longlong lVar2;
  double dVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  double dVar7;
  
  if ((*(byte *)(param_1[2] + 9) & 0x20) == 0) {
    plVar6 = (longlong *)FUN_1495596e1(param_1,0x10);
  }
  else {
    plVar6 = *(longlong **)(param_1[2] + 0x10);
  }
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  lVar5 = param_3[1];
  uVar4 = (ulonglong)(*(ushort *)(lVar5 + 8) & 0x3f);
  if ((0x4000400040004U >> uVar4 & 1) != 0) {
    FUN_149559f51(lVar5,0);
    uVar4 = (ulonglong)(*(ushort *)(lVar5 + 8) & 0x3f);
  }
  if ((&DAT_14bd40030)[uVar4] == '\x02') {
    pdVar1 = (double *)param_3[1];
    dVar3 = pdVar1[1];
    if (((ulonglong)dVar3 & 8) == 0) {
      if (((ulonglong)dVar3 & 0x24) == 0) {
        dVar7 = 0.0;
        if (((ulonglong)dVar3 & 0x12) != 0) {
          dVar7 = (double)FUN_14956c08d();
        }
      }
      else {
        dVar7 = (double)(longlong)*pdVar1;
      }
    }
    else {
      dVar7 = *pdVar1;
    }
    lVar5 = (longlong)dVar7;
    if ((dVar7 != (double)lVar5) || (NAN(dVar7) || NAN((double)lVar5))) goto LAB_1495d1fa7;
  }
  else {
    if ((&DAT_14bd40030)[uVar4] != '\x01') goto LAB_1495d1fa7;
    lVar5 = FUN_149558f85(param_3[1]);
  }
  if (0 < lVar5) {
    lVar2 = *plVar6;
    *plVar6 = lVar2 + 1;
    if (lVar5 != lVar2 + 1) {
      return;
    }
    lVar5 = FUN_149558fb1(*param_3);
    plVar6[1] = lVar5;
    if (lVar5 != 0) {
      return;
    }
    FUN_14955960a(param_1);
    return;
  }
LAB_1495d1fa7:
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  FUN_14955916b(*param_1,"second argument to nth_value must be a positive integer",0xffffffff,1,
                0xffffffffffffffff);
  return;
}



// FUNCTION 1495d2023 FUN_1495d2023 body=86 status=ok
// SIG undefined FUN_1495d2023(void)

void FUN_1495d2023(undefined8 *param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1[2] + 9) & 0x20) == 0) {
    lVar1 = FUN_1495596e1(param_1,0);
  }
  else {
    lVar1 = *(longlong *)(param_1[2] + 0x10);
  }
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
    FUN_1495594c1(*param_1);
    FUN_149559090(*(undefined8 *)(lVar1 + 8));
    *(undefined8 *)(lVar1 + 8) = 0;
  }
  return;
}



// FUNCTION 1495d207a FUN_1495d207a body=97 status=ok
// SIG undefined FUN_1495d207a(void)

void FUN_1495d207a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 9) & 0x20) == 0) {
    lVar1 = FUN_1495596e1(param_1,0x10);
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
  }
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) == 0)) {
    lVar2 = FUN_149558fb1(*param_3);
    *(longlong *)(lVar1 + 8) = lVar2;
    if (lVar2 == 0) {
      FUN_14955960a(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1495d20db FUN_1495d20db body=89 status=ok
// SIG undefined FUN_1495d20db(void)

void FUN_1495d20db(undefined8 *param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1[2] + 9) & 0x20) == 0) {
    lVar1 = FUN_1495596e1(param_1,0x10);
  }
  else {
    lVar1 = *(longlong *)(param_1[2] + 0x10);
  }
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
    FUN_1495594c1(*param_1);
    FUN_149559090(*(undefined8 *)(lVar1 + 8));
    *(undefined8 *)(lVar1 + 8) = 0;
  }
  return;
}



// FUNCTION 1495d2134 FUN_1495d2134 body=185 status=ok
// SIG undefined FUN_1495d2134(void)

void FUN_1495d2134(longlong *param_1)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  undefined1 auStack_88 [40];
  longlong local_60 [6];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar3 = FUN_1495d298b();
  if (iVar3 == 0) {
    FUN_1495d369c(local_60);
    dVar2 = (double)local_60[0] / 86400000.0;
    pdVar1 = (double *)*param_1;
    if ((*(byte *)((longlong)pdVar1 + 9) & 0x24) == 0) {
      *(undefined2 *)(pdVar1 + 1) = 1;
    }
    else {
      FUN_14956b5ca(pdVar1);
    }
    if ((~(ulonglong)dVar2 & 0x7ff0000000000000) != 0 || ((ulonglong)dVar2 & 0xfffffffffffff) == 0)
    {
      *pdVar1 = dVar2;
      *(undefined2 *)(pdVar1 + 1) = 8;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d21ee FUN_1495d21ee body=166 status=ok
// SIG undefined FUN_1495d21ee(void)

void FUN_1495d21ee(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar1 = FUN_1495d298b();
  if (iVar1 == 0) {
    FUN_1495d3e41(local_b8);
    local_c0 = local_a8;
    local_c8 = CONCAT44(local_c8._4_4_,local_ac);
    FUN_14955591f(100,local_88,"%04d-%02d-%02d",local_b0);
    local_c8 = 0xffffffffffffffff;
    FUN_1495590c8(param_1,local_88,0xffffffff,1);
  }
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d2295 FUN_1495d2295 body=168 status=ok
// SIG undefined FUN_1495d2295(void)

void FUN_1495d2295(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  int local_c0;
  undefined1 local_b8 [20];
  undefined4 local_a4;
  undefined4 local_a0;
  double local_98;
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar1 = FUN_1495d298b();
  if (iVar1 == 0) {
    FUN_1495d3f85(local_b8);
    local_c0 = (int)local_98;
    local_c8 = CONCAT44(local_c8._4_4_,local_a0);
    FUN_14955591f(100,local_88,"%02d:%02d:%02d",local_a4);
    local_c8 = 0xffffffffffffffff;
    FUN_1495590c8(param_1,local_88,0xffffffff,1);
  }
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d233e FUN_1495d233e body=207 status=ok
// SIG undefined FUN_1495d233e(void)

void FUN_1495d233e(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  int local_c8;
  undefined1 local_b8 [8];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  double local_98;
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar1 = FUN_1495d298b();
  if (iVar1 == 0) {
    FUN_1495d3e41(local_b8);
    FUN_1495d3f85(local_b8);
    local_c8 = (int)local_98;
    local_d0 = local_a0;
    local_d8 = local_a4;
    local_e0 = local_a8;
    local_e8 = CONCAT44(local_e8._4_4_,local_ac);
    FUN_14955591f(100,local_88,"%04d-%02d-%02d %02d:%02d:%02d",local_b0);
    local_e8 = 0xffffffffffffffff;
    FUN_1495590c8(param_1,local_88,0xffffffff,1);
  }
  if ((local_18 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d240e FUN_1495d240e body=1374 status=ok
// SIG undefined FUN_1495d240e(void)

void FUN_1495d240e(longlong *param_1,int param_2,undefined8 *param_3)

{
  char cVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  double dVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  size_t sVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  char *pcVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_168 [32];
  undefined *local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  int iStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  int iStack_fc;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [104];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (((param_2 == 0) || (lVar7 = FUN_149558f28(*param_3), lVar7 == 0)) ||
     (iVar5 = FUN_1495d298b(param_1,param_2 + -1,param_3 + 1,&local_108), iVar5 != 0))
  goto switchD_1495d252a_caseD_65;
  lVar13 = *(longlong *)(*param_1 + 0x28);
  uVar12 = 1;
  for (lVar14 = 0; *(char *)(lVar7 + lVar14) == '%'; lVar14 = lVar14 + 1) {
    bVar2 = *(byte *)(lVar7 + 1 + lVar14);
    lVar14 = lVar14 + 1;
    if (bVar2 < 100) {
      if (bVar2 < 0x4d) {
        if (bVar2 == 0x25) goto LAB_1495d24e5;
        if (bVar2 != 0x48) {
          if (bVar2 == 0x4a) goto LAB_1495d2573;
          goto switchD_1495d252a_caseD_65;
        }
      }
      else if (bVar2 < 0x57) {
        if ((bVar2 != 0x4d) && (bVar2 != 0x53)) goto switchD_1495d252a_caseD_65;
      }
      else if (bVar2 != 0x57) {
        if (bVar2 == 0x59) goto switchD_1495d252a_caseD_66;
        goto switchD_1495d252a_caseD_65;
      }
switchD_1495d252a_caseD_64:
      uVar12 = uVar12 + 1;
    }
    else {
      switch(bVar2) {
      case 100:
      case 0x6d:
        goto switchD_1495d252a_caseD_64;
      case 0x65:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6b:
      case 0x6c:
        goto switchD_1495d252a_caseD_65;
      case 0x66:
switchD_1495d252a_caseD_66:
        uVar12 = uVar12 + 8;
        break;
      case 0x6a:
        uVar12 = uVar12 + 3;
        break;
      default:
        if (bVar2 == 0x73) {
LAB_1495d2573:
          uVar12 = uVar12 + 0x32;
        }
        else if (bVar2 != 0x77) goto switchD_1495d252a_caseD_65;
      }
    }
LAB_1495d24e5:
    uVar12 = uVar12 + 1;
  }
  if (*(char *)(lVar7 + lVar14) != '\0') goto LAB_1495d24e5;
  if (uVar12 < 100) {
    puVar9 = local_d8;
  }
  else {
    if ((ulonglong)(longlong)*(int *)(lVar13 + 0x7c) < uVar12) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0x12;
      local_148 = (undefined *)0x0;
      FUN_14955916b(*param_1,"string or blob too big",0xffffffff,0x14bd4b101);
      goto switchD_1495d252a_caseD_65;
    }
    puVar9 = (undefined1 *)FUN_14955d750(lVar13,(longlong)(int)uVar12);
    if (puVar9 == (undefined1 *)0x0) {
      FUN_14955960a(param_1);
      goto switchD_1495d252a_caseD_65;
    }
  }
  FUN_1495d369c(&local_108);
  FUN_1495d3e41(&local_108);
  FUN_1495d3f85(&local_108);
  lVar13 = 0;
  for (lVar14 = 0; cVar1 = *(char *)(lVar7 + lVar14), cVar1 == '%'; lVar14 = lVar14 + 1) {
    bVar2 = *(byte *)(lVar7 + 1 + lVar14);
    lVar14 = lVar14 + 1;
    if (0x72 < bVar2) {
      if (bVar2 == 0x77) {
        lVar11 = (CONCAT44(uStack_104,local_108) + 0x7b98a00) / 86400000;
        auVar3 = SEXT816(lVar11) * SEXT816(0x4924924924924925);
        puVar9[lVar13] = (char)lVar11 + ((char)(auVar3._8_4_ >> 1) - (auVar3[0xf] >> 7)) * -7 + '0';
        goto LAB_1495d25f2;
      }
      if (bVar2 != 0x73) goto switchD_1495d26aa_caseD_65;
      FUN_14955591f(0x1e,puVar9 + lVar13,&DAT_149e1d7c3,
                    CONCAT44(uStack_104,local_108) / 1000 + -0x3118a36940);
LAB_1495d2830:
      if (puVar9 + lVar13 == (char *)0x0) {
        uVar12 = 0;
      }
      else {
        sVar8 = strlen(puVar9 + lVar13);
        uVar12 = (ulonglong)((uint)sVar8 & 0x3fffffff);
      }
LAB_1495d2842:
      lVar13 = lVar13 + uVar12;
      goto LAB_1495d25f5;
    }
    if (bVar2 < 0x57) {
      if (bVar2 < 0x4d) {
        iVar5 = iStack_f4;
        if (bVar2 != 0x48) {
          if (bVar2 == 0x4a) {
            dVar4 = (double)CONCAT44(uStack_104,local_108) / 86400000.0;
            uVar10 = 0x14;
            pcVar15 = "%.16g";
            goto LAB_1495d2826;
          }
          goto switchD_1495d26aa_caseD_65;
        }
      }
      else {
        iVar5 = iStack_f0;
        if (bVar2 != 0x4d) {
          if (bVar2 != 0x53) goto switchD_1495d26aa_caseD_65;
          iVar5 = (int)(double)CONCAT44(uStack_e4,local_e8);
        }
      }
      goto LAB_1495d2853;
    }
    switch(bVar2) {
    case 100:
      iVar5 = local_f8;
      goto LAB_1495d2853;
    case 0x66:
      uVar16 = 0x3b645a1d;
      uVar17 = 0x404dffdf;
      if ((double)CONCAT44(uStack_e4,local_e8) <= 59.999) {
        uVar16 = local_e8;
        uVar17 = uStack_e4;
      }
      dVar4 = (double)CONCAT44(uVar17,uVar16);
      uVar10 = 7;
      pcVar15 = "%06.3f";
LAB_1495d2826:
      FUN_14955591f(uVar10,puVar9 + lVar13,pcVar15,dVar4);
      goto LAB_1495d2830;
    case 0x6a:
switchD_1495d26aa_caseD_6a:
      local_118 = local_e8;
      uStack_114 = uStack_e4;
      uStack_10c = uStack_dc;
      local_138 = local_108;
      uStack_134 = uStack_104;
      uStack_130 = uStack_100;
      iStack_124 = iStack_f4;
      iStack_120 = iStack_f0;
      uStack_11c = uStack_ec;
      uStack_110 = uStack_e0 & 0xffffff00;
      uStack_12c = 1;
      local_128 = 1;
      FUN_1495d369c(&local_138);
      lVar11 = CONCAT44(uStack_104,local_108) + 43200000;
      auVar3 = SEXT816(lVar11 - CONCAT44(uStack_134,local_138)) * SEXT816(0x636ba875fd33dc87);
      iVar5 = (int)(auVar3._8_8_ >> 0x19) - (auVar3._12_4_ >> 0x1f);
      if (bVar2 == 0x57) {
        lVar11 = lVar11 / 86400000;
        auVar3 = SEXT816(lVar11) * SEXT816(0x4924924924924925);
        iVar6 = ((int)(auVar3._8_8_ >> 1) - (auVar3._12_4_ >> 0x1f)) * 7 - (int)lVar11;
        iVar5 = (int)((ulonglong)((longlong)(iVar5 + iVar6 + 7) * -0x6db6db6d) >> 0x20) +
                iVar6 + iVar5 + 7;
        FUN_14955591f(3,puVar9 + lVar13,&DAT_14bd49b56,(iVar5 >> 2) - (iVar5 >> 0x1f));
        uVar12 = 2;
      }
      else {
        FUN_14955591f(4,puVar9 + lVar13,&DAT_149e01564,iVar5 + 1);
        uVar12 = 3;
      }
      goto LAB_1495d2842;
    case 0x6d:
      iVar5 = iStack_fc;
LAB_1495d2853:
      FUN_14955591f(3,puVar9 + lVar13,&DAT_14bd49b56,iVar5);
      lVar13 = lVar13 + 2;
      break;
    default:
      if (bVar2 == 0x57) goto switchD_1495d26aa_caseD_6a;
      if (bVar2 == 0x59) {
        FUN_14955591f(5,puVar9 + lVar13,&DAT_14bd49b62,uStack_100);
        goto LAB_1495d2830;
      }
    case 0x65:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6b:
    case 0x6c:
switchD_1495d26aa_caseD_65:
      puVar9[lVar13] = 0x25;
LAB_1495d25f2:
      lVar13 = lVar13 + 1;
    }
LAB_1495d25f5:
  }
  if (cVar1 != '\0') {
    puVar9[lVar13] = cVar1;
    goto LAB_1495d25f2;
  }
  puVar9[lVar13] = 0;
  local_148 = (undefined *)0xffffffffffffffff;
  if (puVar9 != local_d8) {
    local_148 = &DAT_1495539b4;
  }
  FUN_1495590c8(param_1,puVar9,0xffffffff,1);
switchD_1495d252a_caseD_65:
  if ((local_70 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495d298b FUN_1495d298b body=3235 status=ok
// SIG undefined FUN_1495d298b(void)

bool FUN_1495d298b(undefined8 param_1,uint param_2,undefined8 *param_3,ulonglong *param_4)

{
  double dVar1;
  ushort uVar2;
  double *pdVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  double dVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  byte *pbVar10;
  size_t sVar11;
  longlong lVar12;
  char *pcVar13;
  byte bVar14;
  ulonglong *puVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  uint uVar19;
  ulonglong uVar20;
  char cVar21;
  uint uVar22;
  char *pcVar23;
  byte *pbVar24;
  ulonglong uVar25;
  undefined1 auStack_178 [32];
  undefined4 *local_158;
  ulonglong *local_150;
  undefined8 local_148;
  undefined8 *local_140;
  ulonglong local_138;
  undefined4 local_12c;
  double local_128 [7];
  double local_f0;
  int local_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  param_4[4] = 0;
  param_4[5] = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  *param_4 = 0;
  param_4[1] = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_e0 ^ (ulonglong)auStack_178);
  }
  pdVar3 = (double *)*param_3;
  uVar2 = *(ushort *)(pdVar3 + 1);
  local_148 = param_1;
  if ((byte)(&DAT_14bd40030)[uVar2 & 0x3f] - 1 < 2) {
    if ((uVar2 & 8) == 0) {
      if ((uVar2 & 0x24) == 0) {
        dVar1 = 0.0;
        if ((uVar2 & 0x12) != 0) {
          dVar1 = (double)FUN_14956c08d();
        }
      }
      else {
        dVar1 = (double)(longlong)*pdVar3;
      }
    }
    else {
      dVar1 = *pdVar3;
    }
    goto LAB_1495d2a72;
  }
  pcVar13 = (char *)FUN_149558f28();
  bVar18 = true;
  if (pcVar13 == (char *)0x0) goto LAB_1495d3027;
  cVar8 = *pcVar13;
  uVar25 = (ulonglong)(cVar8 == '-');
  local_158 = &local_12c;
  iVar9 = FUN_1495d3b47(pcVar13 + uVar25,"40f-21a-21d",&local_f0,&local_e4);
  if (iVar9 == 3) {
    pcVar23 = pcVar13 + uVar25 + 9;
    do {
      do {
        pbVar10 = (byte *)(pcVar23 + 1);
        pcVar23 = pcVar23 + 1;
      } while ((ulonglong)*pbVar10 == 0x54);
    } while (((&DAT_14bd400b0)[*pbVar10] & 1) != 0);
    iVar9 = FUN_1495d38ba(pcVar23,param_4);
    if (iVar9 != 0) {
      if (*pcVar23 != '\0') goto LAB_1495d3484;
      *(undefined1 *)((longlong)param_4 + 0x2b) = 0;
    }
    *(undefined1 *)(param_4 + 5) = 0;
    *(undefined1 *)((longlong)param_4 + 0x2a) = 1;
    iVar9 = -local_f0._0_4_;
    if (cVar8 != '-') {
      iVar9 = local_f0._0_4_;
    }
    *(int *)(param_4 + 1) = iVar9;
    *(int *)((longlong)param_4 + 0xc) = local_e4;
    *(undefined4 *)(param_4 + 2) = local_12c;
    if (*(char *)((longlong)param_4 + 0x2c) != '\0') {
      FUN_1495d369c(param_4);
    }
  }
  else {
LAB_1495d3484:
    iVar9 = FUN_1495d38ba(pcVar13,param_4);
    uVar4 = local_148;
    if (iVar9 != 0) {
      lVar12 = 0;
      do {
        bVar7 = pcVar13[lVar12];
        if (bVar7 == (&DAT_14bd4996b)[lVar12]) {
          if ((ulonglong)bVar7 == 0) goto LAB_1495d3581;
        }
        else if ((&DAT_14bd3ff30)[bVar7] != (&DAT_14bd3ff30)[(byte)(&DAT_14bd4996b)[lVar12]])
        goto LAB_1495d3591;
        lVar12 = lVar12 + 1;
      } while( true );
    }
  }
LAB_1495d2ab0:
  if ((int)param_2 < 2) {
LAB_1495d2ed7:
    FUN_1495d369c(param_4);
    bVar18 = true;
    if (*(char *)((longlong)param_4 + 0x2e) == '\0') {
      bVar18 = 0x1a6401072fdff < *param_4;
    }
LAB_1495d3027:
    if ((local_e0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return bVar18;
  }
  local_138 = (ulonglong)param_2;
  uVar25 = 1;
  local_140 = param_3;
LAB_1495d2b16:
  puVar5 = local_140;
  pbVar10 = (byte *)FUN_149558f28(local_140[uVar25]);
  FUN_149558f55(puVar5[uVar25]);
  bVar18 = true;
  if (pbVar10 == (byte *)0x0) goto LAB_1495d3027;
  local_e4 = 1;
  bVar7 = *pbVar10;
  bVar14 = (&DAT_14bd3ff30)[bVar7];
  if (0x72 < bVar14) {
    if (bVar14 == 0x73) {
      if (bVar7 == 0) {
        cVar8 = '\0';
        pcVar13 = "start of ";
      }
      else {
        lVar12 = 0;
        do {
          cVar8 = (&DAT_14bd3ff30)[bVar7];
          if (cVar8 != (&DAT_14bd3ff30)[(byte)"start of "[lVar12]]) goto LAB_1495d30a9;
          if (lVar12 == 8) goto LAB_1495d2e45;
          bVar7 = pbVar10[lVar12 + 1];
          lVar12 = lVar12 + 1;
        } while (bVar7 != 0);
        cVar8 = '\0';
LAB_1495d30a9:
        pcVar13 = "start of " + lVar12;
      }
      if (cVar8 == (&DAT_14bd3ff30)[(byte)*pcVar13]) {
LAB_1495d2e45:
        if ((((char)param_4[5] != '\0') || (*(char *)((longlong)param_4 + 0x2a) != '\0')) ||
           (*(char *)((longlong)param_4 + 0x2b) != '\0')) {
          FUN_1495d3e41(param_4);
          *(undefined2 *)((longlong)param_4 + 0x2b) = 1;
          *(undefined8 *)((longlong)param_4 + 0x14) = 0;
          param_4[4] = 0;
          *(undefined2 *)(param_4 + 5) = 0;
          lVar12 = 0;
          do {
            bVar7 = pbVar10[lVar12 + 9];
            if (bVar7 == "month"[lVar12]) {
              if ((ulonglong)bVar7 == 0) goto LAB_1495d34d8;
            }
            else if ((&DAT_14bd3ff30)[bVar7] != (&DAT_14bd3ff30)[(byte)"month"[lVar12]]) {
              lVar12 = 0;
              goto LAB_1495d2bc3;
            }
            lVar12 = lVar12 + 1;
          } while( true );
        }
      }
      goto LAB_1495d2eb6;
    }
    if (bVar14 != 0x77) {
      if (bVar14 == 0x75) {
        lVar12 = 0;
        bVar14 = bVar7;
        do {
          if (bVar14 == "unixepoch"[lVar12]) {
            if (bVar14 == 0) goto LAB_1495d2f1f;
          }
          else if ((&DAT_14bd3ff30)[bVar14] != (&DAT_14bd3ff30)[(byte)"unixepoch"[lVar12]])
          goto LAB_1495d2e77;
          bVar14 = pbVar10[lVar12 + 1];
          lVar12 = lVar12 + 1;
        } while( true );
      }
      goto LAB_1495d2eb6;
    }
    if (bVar7 == 0) {
      cVar8 = '\0';
      pbVar24 = &DAT_14bd49a07;
    }
    else {
      lVar12 = 0;
      do {
        cVar8 = (&DAT_14bd3ff30)[bVar7];
        if (cVar8 != (&DAT_14bd3ff30)[(byte)(&DAT_14bd49a07)[lVar12]]) goto LAB_1495d2ea0;
        if (lVar12 == 7) goto LAB_1495d31f7;
        bVar7 = pbVar10[lVar12 + 1];
        lVar12 = lVar12 + 1;
      } while (bVar7 != 0);
      cVar8 = '\0';
LAB_1495d2ea0:
      pbVar24 = &DAT_14bd49a07 + lVar12;
    }
    if (cVar8 != (&DAT_14bd3ff30)[*pbVar24]) goto LAB_1495d2eb6;
LAB_1495d31f7:
    sVar11 = strlen((char *)(pbVar10 + 8));
    iVar9 = FUN_14956c0e2(pbVar10 + 8,&local_f0,(uint)sVar11 & 0x3fffffff,1);
    if (((iVar9 < 1) || (7.0 <= local_f0)) ||
       ((uVar22 = (uint)local_f0, (int)uVar22 < 0 ||
        ((local_f0 != (double)(int)local_f0 || (NAN(local_f0) || NAN((double)(int)local_f0)))))))
    goto LAB_1495d2eb6;
    FUN_1495d3e41(param_4);
    FUN_1495d3f85(param_4);
    *(undefined1 *)((longlong)param_4 + 0x2c) = 0;
    *(undefined1 *)(param_4 + 5) = 0;
    FUN_1495d369c(param_4);
    lVar12 = (longlong)(*param_4 + 0x7b98a00) / 86400000;
    lVar16 = (lVar12 / 7) * -7 + -7 + lVar12;
    if (lVar12 % 7 <= (longlong)(ulonglong)uVar22) {
      lVar16 = lVar12 % 7;
    }
    *param_4 = ((ulonglong)uVar22 - lVar16) * 86400000 + *param_4;
    *(undefined2 *)((longlong)param_4 + 0x2a) = 0;
    *(undefined1 *)((longlong)param_4 + 0x2c) = 0;
    goto LAB_1495d2ec9;
  }
  if (bVar14 < 0x6c) {
    if (((9 < bVar14 - 0x30) && (bVar14 != 0x2b)) && (bVar14 != 0x2d)) goto LAB_1495d2eb6;
    lVar12 = 1;
    pbVar24 = pbVar10;
    while( true ) {
      bVar14 = pbVar10[lVar12];
      if (((bVar14 == 0) || (bVar14 == 0x3a)) || (((&DAT_14bd400b0)[bVar14] & 1) != 0)) break;
      lVar12 = lVar12 + 1;
      pbVar24 = pbVar24 + 1;
    }
    local_150 = param_4;
    iVar9 = FUN_14956c0e2(pbVar10,&local_f0,lVar12,1);
    param_4 = local_150;
    if (iVar9 < 1) goto LAB_1495d35c0;
    if (bVar14 == 0x3a) {
      local_128[4] = 0.0;
      local_128[5] = 0.0;
      local_128[2] = 0.0;
      local_128[3] = 0.0;
      local_128[0] = 0.0;
      local_128[1] = 0.0;
      iVar9 = FUN_1495d38ba(pbVar10 + ((ulonglong)bVar7 - 0x3a < 0xfffffffffffffff6),local_128);
      param_4 = local_150;
      if (iVar9 == 0) {
        FUN_1495d369c(local_128);
        lVar16 = ((longlong)local_128[0] + -43200000) % 86400000;
        lVar12 = -lVar16;
        if (*pbVar10 != 0x2d) {
          lVar12 = lVar16;
        }
        FUN_1495d369c(param_4);
        *(undefined2 *)((longlong)param_4 + 0x2a) = 0;
        *(undefined1 *)((longlong)param_4 + 0x2c) = 0;
        *param_4 = *param_4 + lVar12;
        local_e4 = 0;
      }
    }
    else {
      do {
        pbVar10 = pbVar24 + 1;
        pbVar24 = pbVar24 + 1;
      } while (((&DAT_14bd400b0)[*pbVar10] & 1) != 0);
      if (pbVar24 != (byte *)0x0) {
        sVar11 = strlen((char *)pbVar24);
        uVar22 = (uint)sVar11 & 0x3fffffff;
        if (0xfffffff7 < uVar22 - 0xb) {
          if ((pbVar24[uVar22 - 1] & 0xdf) == 0x53) {
            uVar22 = uVar22 - 1;
          }
          FUN_1495d369c(param_4);
          dVar6 = local_f0;
          puVar15 = local_150;
          local_e4 = 1;
          dVar1 = (double)(&DAT_14aa1ecb0)[local_f0 < 0.0];
          lVar12 = 0;
          do {
            lVar16 = lVar12 * 0x20;
            if (uVar22 == (byte)(&DAT_14bd49a31)[lVar16]) {
              if ((&PTR_s_second_14bd49a38)[lVar12 * 4] != (undefined *)0x0) {
                lVar17 = 0;
                uVar19 = uVar22 + 1;
                do {
                  uVar20 = (ulonglong)(byte)(&PTR_s_second_14bd49a38)[lVar12 * 4][lVar17];
                  if (uVar20 == 0) {
                    cVar21 = (&DAT_14bd3ff30)[pbVar24[lVar17]];
                    cVar8 = '\0';
LAB_1495d2d1e:
                    if (cVar8 != cVar21) goto LAB_1495d2d43;
                    break;
                  }
                  cVar8 = (&DAT_14bd3ff30)[uVar20];
                  cVar21 = (&DAT_14bd3ff30)[pbVar24[lVar17]];
                  if (cVar8 != cVar21) goto LAB_1495d2d1e;
                  uVar19 = uVar19 - 1;
                  lVar17 = lVar17 + 1;
                } while (1 < uVar19);
                if ((-(double)(&DAT_14bd49a40)[lVar12 * 4] < local_f0) &&
                   (local_f0 < (double)(&DAT_14bd49a40)[lVar12 * 4])) {
                  if ((&DAT_14bd49a30)[lVar16] == '\x02') {
                    iVar9 = (int)local_f0;
                    FUN_1495d3e41(local_150);
                    FUN_1495d3f85(puVar15);
                    *(int *)(puVar15 + 1) = (int)puVar15[1] + iVar9;
                    *(undefined1 *)(puVar15 + 5) = 0;
LAB_1495d3601:
                    local_f0 = dVar6 - (double)(int)dVar6;
                    param_4 = puVar15;
                  }
                  else {
                    param_4 = local_150;
                    if ((&DAT_14bd49a30)[lVar16] == '\x01') {
                      FUN_1495d3e41(local_150);
                      FUN_1495d3f85(puVar15);
                      iVar9 = *(int *)((longlong)puVar15 + 0xc) + (int)dVar6;
                      if (iVar9 == 0 ||
                          SCARRY4(*(int *)((longlong)puVar15 + 0xc),(int)dVar6) != iVar9 < 0) {
                        uVar22 = -((0xcU - iVar9) / 0xc);
                      }
                      else {
                        uVar22 = (iVar9 - 1U) / 0xc;
                      }
                      *(uint *)(local_150 + 1) = (int)local_150[1] + uVar22;
                      *(uint *)((longlong)local_150 + 0xc) = iVar9 + uVar22 * -0xc;
                      *(undefined1 *)(local_150 + 5) = 0;
                      puVar15 = local_150;
                      goto LAB_1495d3601;
                    }
                  }
                  dVar6 = local_f0;
                  FUN_1495d369c(param_4);
                  *param_4 = *param_4 +
                             (longlong)(dVar6 * *(double *)(&UNK_14bd49a48 + lVar16) + dVar1);
                  local_e4 = 0;
                  break;
                }
              }
            }
LAB_1495d2d43:
            lVar12 = lVar12 + 1;
          } while (lVar12 != 6);
          *(undefined2 *)((longlong)param_4 + 0x2a) = 0;
          *(undefined1 *)((longlong)param_4 + 0x2c) = 0;
        }
      }
    }
  }
  else if (bVar14 == 0x6c) {
    lVar12 = 0;
    do {
      if (bVar7 == "localtime"[lVar12]) {
        if (bVar7 == 0) goto LAB_1495d30b8;
      }
      else if ((&DAT_14bd3ff30)[bVar7] != (&DAT_14bd3ff30)[(byte)"localtime"[lVar12]]) break;
      bVar7 = pbVar10[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while( true );
  }
  goto LAB_1495d2eb6;
LAB_1495d3581:
  iVar9 = FUN_1495d3aa9(local_148);
  if (iVar9 == 0) {
LAB_1495d3591:
    sVar11 = strlen(pcVar13);
    iVar9 = FUN_14956c0e2(pcVar13,local_128,(uint)sVar11 & 0x3fffffff,1);
    dVar1 = local_128[0];
    if (iVar9 < 1) {
LAB_1495d35c0:
      bVar18 = true;
      goto LAB_1495d3027;
    }
LAB_1495d2a72:
    param_4[4] = (ulonglong)dVar1;
    *(undefined1 *)((longlong)param_4 + 0x29) = 1;
    if ((0.0 <= dVar1) && (dVar1 < 5373484.5)) {
      *param_4 = (longlong)(dVar1 * 86400000.0 + 0.5);
      *(undefined1 *)(param_4 + 5) = 1;
    }
  }
  else {
    iVar9 = FUN_1495d3807(uVar4,param_4);
    bVar18 = true;
    if (iVar9 != 0) goto LAB_1495d3027;
  }
  goto LAB_1495d2ab0;
LAB_1495d2bc3:
  bVar7 = pbVar10[lVar12 + 9];
  if (bVar7 == (&DAT_14bd49a20)[lVar12]) {
    if ((ulonglong)bVar7 == 0) goto LAB_1495d34e4;
  }
  else if ((&DAT_14bd3ff30)[bVar7] != (&DAT_14bd3ff30)[(byte)(&DAT_14bd49a20)[lVar12]]) {
    lVar12 = 0;
    goto LAB_1495d2bed;
  }
  lVar12 = lVar12 + 1;
  goto LAB_1495d2bc3;
LAB_1495d2bed:
  bVar7 = pbVar10[lVar12 + 9];
  if (bVar7 == (&DAT_14bd49a25)[lVar12]) {
    if ((ulonglong)bVar7 == 0) goto LAB_1495d2ec9;
  }
  else if ((&DAT_14bd3ff30)[bVar7] != (&DAT_14bd3ff30)[(byte)(&DAT_14bd49a25)[lVar12]])
  goto LAB_1495d2eb6;
  lVar12 = lVar12 + 1;
  goto LAB_1495d2bed;
LAB_1495d34e4:
  *(undefined1 **)((longlong)param_4 + 0xc) = &DAT_100000001;
  goto LAB_1495d2ec9;
LAB_1495d34d8:
  *(undefined4 *)(param_4 + 2) = 1;
  goto LAB_1495d2ec9;
LAB_1495d2f1f:
  if (*(char *)((longlong)param_4 + 0x29) == '\0') {
LAB_1495d2e77:
    lVar12 = 0;
    do {
      if (bVar7 == (&DAT_14bd49a03)[lVar12]) {
        if (bVar7 == 0) goto LAB_1495d3369;
      }
      else if ((&DAT_14bd3ff30)[bVar7] != (&DAT_14bd3ff30)[(byte)(&DAT_14bd49a03)[lVar12]])
      goto LAB_1495d2eb6;
      bVar7 = pbVar10[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while( true );
  }
  dVar1 = (double)param_4[4] * 1000.0 + 210866760000000.0;
  if ((0.0 <= dVar1) && (dVar1 < 464269060800000.0)) {
    *(undefined1 *)((longlong)param_4 + 0x2c) = 0;
    *param_4 = (longlong)(dVar1 + 0.5);
    *(undefined4 *)(param_4 + 5) = 1;
    goto LAB_1495d2ec9;
  }
LAB_1495d2eb6:
  bVar18 = true;
  if (local_e4 != 0) goto LAB_1495d3027;
LAB_1495d2ec9:
  uVar25 = uVar25 + 1;
  if (uVar25 == local_138) goto LAB_1495d2ed7;
  goto LAB_1495d2b16;
LAB_1495d3369:
  iVar9 = FUN_1495d3aa9(local_148);
  if (iVar9 != 0) {
    if (*(char *)((longlong)param_4 + 0x2d) != '\0') goto LAB_1495d2ec9;
    FUN_1495d369c(param_4);
    lVar12 = FUN_1495d3c65(param_4,local_148,&local_e4);
    if (local_e4 == 0) {
      *param_4 = *param_4 - lVar12;
      *(undefined2 *)((longlong)param_4 + 0x2a) = 0;
      *(undefined1 *)((longlong)param_4 + 0x2c) = 0;
      lVar16 = FUN_1495d3c65(param_4,local_148,&local_e4);
      *param_4 = *param_4 + (lVar12 - lVar16);
    }
    *(undefined1 *)((longlong)param_4 + 0x2d) = 1;
  }
  goto LAB_1495d2eb6;
LAB_1495d30b8:
  iVar9 = FUN_1495d3aa9(local_148);
  if (iVar9 != 0) {
    FUN_1495d369c(param_4);
    lVar12 = FUN_1495d3c65(param_4,local_148,&local_e4);
    *param_4 = *param_4 + lVar12;
    *(undefined2 *)((longlong)param_4 + 0x2a) = 0;
    *(undefined1 *)((longlong)param_4 + 0x2c) = 0;
  }
  goto LAB_1495d2eb6;
}



// FUNCTION 1495d369c FUN_1495d369c body=363 status=ok
// SIG undefined FUN_1495d369c(void)

void FUN_1495d369c(longlong *param_1)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((char)param_1[5] == '\0') {
    if (*(char *)((longlong)param_1 + 0x2a) == '\0') {
      iVar6 = 1;
      iVar4 = 2000;
      iVar2 = 1;
    }
    else {
      iVar4 = (int)param_1[1];
      if (iVar4 - 10000U < 0xffffc687) goto LAB_1495d36d8;
      iVar6 = *(int *)((longlong)param_1 + 0xc);
      iVar2 = (int)param_1[2];
    }
    if (*(char *)((longlong)param_1 + 0x29) != '\0') {
LAB_1495d36d8:
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)((longlong)param_1 + 0x2e) = 1;
      return;
    }
    iVar5 = iVar6 + 0xc;
    if (2 < iVar6) {
      iVar5 = iVar6;
    }
    iVar4 = iVar4 - (uint)(iVar6 < 3);
    iVar6 = (int)(short)iVar4;
    sVar1 = (short)((uint)(iVar6 * -0x147b) >> 0x10);
    lVar3 = (longlong)
            (((double)(int)(iVar2 + (iVar4 * 0x8ead + 0xa445afcU) / 100 +
                            (iVar5 * 0x4ab51 + 0x4ab51) / 10000 +
                           iVar6 / 400 + (int)(short)(((sVar1 >> 3) - (sVar1 >> 0xf)) + 2)) +
             -1524.5) * 86400000.0);
    *param_1 = lVar3;
    *(undefined1 *)(param_1 + 5) = 1;
    if (*(char *)((longlong)param_1 + 0x2b) != '\0') {
      lVar3 = (longlong)((double)param_1[4] * 1000.0) +
              (longlong)(int)param_1[3] * 60000 +
              (longlong)*(int *)((longlong)param_1 + 0x14) * 3600000 + lVar3;
      *param_1 = lVar3;
      if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
        *param_1 = lVar3 + (longlong)*(int *)((longlong)param_1 + 0x1c) * -60000;
        *(undefined2 *)((longlong)param_1 + 0x2a) = 0;
        *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
      }
    }
  }
  return;
}



// FUNCTION 1495d3807 FUN_1495d3807 body=178 status=ok
// SIG undefined FUN_1495d3807(void)

undefined8 FUN_1495d3807(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [32];
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_1[3] + 0x48);
  if (lVar3 == 0) {
    plVar5 = (longlong *)(param_1[3] + 0x48);
    piVar1 = (int *)**(undefined8 **)(*param_1 + 0x28);
    if ((*piVar1 < 2) || (*(code **)(piVar1 + 0x22) == (code *)0x0)) {
      iVar2 = (**(code **)(piVar1 + 0x1e))(piVar1,&local_28);
      *plVar5 = (longlong)(local_28 * 86400000.0);
    }
    else {
      iVar2 = (**(code **)(piVar1 + 0x22))(piVar1,plVar5);
    }
    if (iVar2 == 0) {
      lVar3 = *plVar5;
      goto LAB_1495d382d;
    }
    *plVar5 = 0;
    *param_2 = 0;
  }
  else {
LAB_1495d382d:
    *param_2 = lVar3;
    if (0 < lVar3) {
      *(undefined1 *)(param_2 + 5) = 1;
      uVar4 = 0;
      goto LAB_1495d3893;
    }
  }
  uVar4 = 1;
LAB_1495d3893:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d38ba FUN_1495d38ba body=494 status=ok
// SIG undefined FUN_1495d38ba(void)

undefined8 FUN_1495d38ba(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  byte *pbVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_68 [36];
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = FUN_1495d3b47(param_1,"20c:20e",&local_3c,&local_40);
  uVar6 = 1;
  if (iVar2 != 2) goto LAB_1495d39a9;
  if (*(char *)(param_1 + 5) == ':') {
    iVar2 = FUN_1495d3b47(param_1 + 6,&DAT_14bd49990,&local_44);
    if (iVar2 != 1) goto LAB_1495d39a9;
    pbVar7 = (byte *)(param_1 + 8);
    dVar8 = 0.0;
    if ((*(char *)(param_1 + 8) == '.') &&
       (uVar4 = (ulonglong)*(byte *)(param_1 + 9), 0xfffffffffffffff5 < uVar4 - 0x3a)) {
      pbVar7 = (byte *)(param_1 + 9);
      dVar9 = 1.0;
      do {
        dVar8 = dVar8 * 10.0 + (double)(int)(char)uVar4 + -48.0;
        dVar9 = dVar9 * 10.0;
        uVar4 = (ulonglong)pbVar7[1];
        pbVar7 = pbVar7 + 1;
      } while (0xfffffffffffffff5 < uVar4 - 0x3a);
      dVar8 = dVar8 / dVar9;
    }
  }
  else {
    pbVar7 = (byte *)(param_1 + 5);
    local_44 = 0;
    dVar8 = 0.0;
  }
  *(undefined2 *)(param_2 + 0x28) = 0;
  *(undefined1 *)(param_2 + 0x2b) = 1;
  *(undefined4 *)(param_2 + 0x14) = local_3c;
  *(undefined4 *)(param_2 + 0x18) = local_40;
  *(double *)(param_2 + 0x20) = (double)local_44 + dVar8;
  do {
    pbVar5 = pbVar7;
    pbVar7 = pbVar5 + 1;
  } while (((&DAT_14bd400b0)[*pbVar5] & 1) != 0);
  *(undefined4 *)(param_2 + 0x1c) = 0;
  bVar1 = *pbVar5;
  if (bVar1 == 0x2d) {
    iVar2 = -1;
LAB_1495d3a6f:
    iVar3 = FUN_1495d3b47(pbVar7,"20b:20e",&local_34,&local_38);
    if (iVar3 != 2) goto LAB_1495d39a9;
    iVar2 = (local_34 * 0x3c + local_38) * iVar2;
    *(int *)(param_2 + 0x1c) = iVar2;
    pbVar7 = pbVar5 + 6;
LAB_1495d3982:
    do {
      pbVar5 = pbVar7;
      pbVar7 = pbVar5 + 1;
    } while (((&DAT_14bd400b0)[*pbVar5] & 1) != 0);
    *(undefined1 *)(param_2 + 0x2d) = 1;
    if (*pbVar5 != 0) goto LAB_1495d39a9;
  }
  else {
    if (bVar1 == 0x2b) {
      iVar2 = 1;
      goto LAB_1495d3a6f;
    }
    iVar2 = 0;
    if ((bVar1 & 0xdf) == 0x5a) goto LAB_1495d3982;
    if (bVar1 != 0) goto LAB_1495d39a9;
    iVar2 = 0;
  }
  *(bool *)(param_2 + 0x2c) = iVar2 != 0;
  uVar6 = 0;
LAB_1495d39a9:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1495d3aa9 FUN_1495d3aa9 body=158 status=ok
// SIG undefined FUN_1495d3aa9(void)

undefined8 FUN_1495d3aa9(undefined8 *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  
  uVar2 = 1;
  if (*(char *)(*(longlong *)(param_1[3] + 0x88) + (longlong)*(int *)(param_1 + 4) * 0x18) == '?') {
    uVar1 = *(ushort *)
             (*(longlong *)(param_1[3] + 0x88) + (longlong)*(int *)(param_1 + 4) * 0x18 + 2);
    pcVar3 = "a generated column";
    if ((uVar1 & 8) == 0) {
      pcVar3 = "an index";
    }
    pcVar4 = "a CHECK constraint";
    if ((uVar1 & 4) == 0) {
      pcVar4 = pcVar3;
    }
    uVar2 = FUN_1495558d3("non-deterministic use of %s() in %s",*(undefined8 *)(param_1[1] + 0x38),
                          pcVar4);
    *(undefined4 *)((longlong)param_1 + 0x24) = 1;
    FUN_14955916b(*param_1,uVar2,0xffffffff,1,0xffffffffffffffff);
    FUN_145e3b961(uVar2);
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1495d3b47 FUN_1495d3b47 body=285 status=ok
// SIG undefined FUN_1495d3b47(void)

int FUN_1495d3b47(byte *param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  longlong lVar5;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = 0;
  local_40 = &local_res18;
  while( true ) {
    bVar1 = *param_2;
    if (bVar1 == 0x30) {
      iVar3 = 0;
      pbVar4 = param_1;
    }
    else {
      pbVar4 = param_1 + (ulonglong)(bVar1 - 0x31 & 0xff) + 1;
      lVar5 = 0;
      iVar3 = 0;
      do {
        if ((ulonglong)param_1[lVar5] - 0x3a < 0xfffffffffffffff6) goto LAB_1495d3c40;
        iVar3 = (int)(char)param_1[lVar5] + iVar3 * 10 + -0x30;
        lVar5 = lVar5 + 1;
      } while ((byte)(bVar1 - 0x30) != (char)lVar5);
    }
    if ((iVar3 < (char)(param_2[1] - 0x30)) ||
       ((int)(uint)*(ushort *)("sqlite_rename_test" + (longlong)(char)param_2[2] * 2 + 10) < iVar3))
    goto LAB_1495d3c40;
    if (param_2[3] == 0) break;
    if (param_2[3] != *pbVar4) goto LAB_1495d3c40;
    *(int *)*local_40 = iVar3;
    param_1 = pbVar4 + 1;
    iVar2 = iVar2 + 1;
    param_2 = param_2 + 4;
    local_40 = local_40 + 1;
  }
  *(int *)*local_40 = iVar3;
  iVar2 = iVar2 + 1;
  local_40 = local_40 + 1;
LAB_1495d3c40:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
    local_res18 = param_3;
    local_res20 = param_4;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar2;
}



// FUNCTION 1495d3c65 FUN_1495d3c65 body=475 status=ok
// SIG undefined FUN_1495d3c65(void)

longlong FUN_1495d3c65(undefined4 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  errno_t eVar2;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  tm local_b8;
  longlong local_90;
  longlong local_88;
  int local_80;
  int local_7c;
  int local_78;
  ulonglong local_74;
  double local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_5a;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8.tm_mon = 0;
  local_b8.tm_year = 0;
  local_b8.tm_wday = 0;
  local_b8.tm_yday = 0;
  local_b8.tm_sec = 0;
  local_b8.tm_min = 0;
  local_b8.tm_hour = 0;
  local_b8.tm_mday = 0;
  local_b8.tm_isdst = 0;
  local_58 = *param_1;
  uStack_54 = param_1[1];
  iStack_50 = param_1[2];
  uStack_4c = param_1[3];
  local_48 = param_1[4];
  uStack_44 = param_1[5];
  uStack_40 = param_1[6];
  uStack_3c = param_1[7];
  local_38 = *(double *)(param_1 + 8);
  uStack_30 = param_1[10];
  uStack_2c = param_1[0xb];
  FUN_1495d3e41(&local_58);
  FUN_1495d3f85(&local_58);
  if (iStack_50 - 0x7f6U < 0xffffffbd) {
    iStack_50 = 2000;
    uStack_4c = 1;
    local_48 = 1;
    uStack_44 = 0;
    uStack_40 = 0;
    local_38 = 0.0;
  }
  else {
    local_38 = (double)(int)(local_38 + 0.5);
  }
  uStack_3c = 0;
  uStack_30 = uStack_30 & 0xffffff00;
  FUN_1495d369c(&local_58);
  lVar1 = CONCAT44(uStack_54,local_58);
  local_90 = lVar1 / 1000 + -0x3118a36940;
  if (DAT_14c765e90 == 0) {
    eVar2 = _localtime64_s(&local_b8,&local_90);
    if (eVar2 == 0) {
      local_80 = local_b8.tm_year + 0x76c;
      local_7c = local_b8.tm_mon + 1;
      local_78 = local_b8.tm_mday;
      local_74 = CONCAT44(local_b8.tm_hour,local_b8.tm_min) << 0x20 |
                 (ulonglong)(uint)local_b8.tm_hour;
      local_68 = (double)local_b8.tm_sec;
      local_60 = 0x1010000;
      local_5c = 0;
      local_5a = 0;
      FUN_1495d369c(&local_88);
      *param_3 = 0;
      local_88 = local_88 - lVar1;
      goto LAB_1495d3e1c;
    }
  }
  *(undefined4 *)((longlong)param_2 + 0x24) = 1;
  local_c8 = 0xffffffffffffffff;
  FUN_14955916b(*param_2,"local time unavailable",0xffffffff,1);
  *param_3 = 1;
  local_88 = 0;
LAB_1495d3e1c:
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return local_88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d3e41 FUN_1495d3e41 body=324 status=ok
// SIG undefined FUN_1495d3e41(void)

void FUN_1495d3e41(ulonglong *param_1)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  
  if (*(char *)((longlong)param_1 + 0x2a) != '\0') {
    return;
  }
  if ((char)param_1[5] == '\0') {
    param_1[1] = 0x1000007d0;
    iVar7 = 1;
    lVar4 = 0x10;
  }
  else {
    if (0x1a6401072fdff < *param_1) {
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      puVar5 = (undefined1 *)((longlong)param_1 + 0x2e);
      goto LAB_1495d3e97;
    }
    iVar6 = (int)((*param_1 + 43200000) / 86400000);
    iVar2 = (int)(((double)iVar6 + -1867216.25) / 36524.25);
    iVar7 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar7 = iVar2;
    }
    iVar7 = ((iVar6 + iVar2) - (iVar7 >> 2)) + 0x5f5;
    uVar3 = (uint)(((double)iVar7 + -122.1) / 365.25);
    iVar7 = iVar7 - ((uVar3 & 0x7fff) * 0x8ead) / 100;
    dVar1 = (double)iVar7 / 30.6001;
    iVar2 = (int)dVar1;
    *(int *)(param_1 + 2) = iVar7 - (int)((double)(int)dVar1 * 30.6001);
    iVar2 = (-(uint)(iVar2 < 0xe) | 0xfffffff3) + iVar2;
    *(int *)((longlong)param_1 + 0xc) = iVar2;
    iVar7 = (2 < iVar2 ^ 0xffffed95) + uVar3;
    lVar4 = 8;
  }
  *(int *)((longlong)param_1 + lVar4) = iVar7;
  puVar5 = (undefined1 *)((longlong)param_1 + 0x2a);
LAB_1495d3e97:
  *puVar5 = 1;
  return;
}



// FUNCTION 1495d3f85 FUN_1495d3f85 body=197 status=ok
// SIG undefined FUN_1495d3f85(void)

void FUN_1495d3f85(longlong *param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  double dVar3;
  
  if (*(char *)((longlong)param_1 + 0x2b) == '\0') {
    FUN_1495d369c();
    auVar1 = SEXT816(*param_1 + 43200000) * SEXT816(0x636ba875fd33dc87);
    dVar3 = (double)((int)(*param_1 + 43200000) +
                    ((int)(auVar1._8_8_ >> 0x19) - (auVar1._12_4_ >> 0x1f)) * -86400000) / 1000.0;
    *(int *)((longlong)param_1 + 0x14) = (int)dVar3 / 0xe10;
    iVar2 = (int)dVar3 % 0xe10;
    *(int *)(param_1 + 3) = iVar2 / 0x3c;
    param_1[4] = (longlong)((double)(iVar2 % 0x3c) + (dVar3 - (double)(int)dVar3));
    *(undefined1 *)((longlong)param_1 + 0x29) = 0;
    *(undefined1 *)((longlong)param_1 + 0x2b) = 1;
  }
  return;
}



// FUNCTION 1495d40a7 FUN_1495d40a7 body=35 status=ok
// SIG undefined FUN_1495d40a7(void)

undefined8
FUN_1495d40a7(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_14955591f(param_3,param_4,&DAT_149dfbe46,param_2);
  return 0;
}



// FUNCTION 1495d4139 FUN_1495d4139 body=249 status=ok
// SIG undefined FUN_1495d4139(void)

undefined8 * FUN_1495d4139(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 *_Dst;
  size_t _Size;
  undefined8 *puVar2;
  
  _Size = (size_t)(DAT_14cc1edd4 * 0x50 + 0x58);
  _Dst = (undefined8 *)FUN_145e3bd67(_Size);
  if (_Dst != (undefined8 *)0x0) {
    memset(_Dst,0,_Size);
    if (DAT_14cc1edd4 == 0) {
      puVar2 = (undefined8 *)&DAT_14cc1ed80;
    }
    else {
      puVar2 = _Dst + 0xb;
      *(undefined4 *)(_Dst + 0xd) = 10;
    }
    if (*(short *)((longlong)puVar2 + 0x2e) == 0) {
      *(undefined2 *)((longlong)puVar2 + 0x2e) = 1;
      puVar2[8] = puVar2 + 3;
      puVar2[9] = puVar2 + 3;
    }
    *_Dst = puVar2;
    *(int *)(_Dst + 2) = param_1;
    *(int *)((longlong)_Dst + 0x14) = param_2;
    *(int *)(_Dst + 3) = param_1 + param_2 + 0x38;
    *(uint *)((longlong)_Dst + 0x1c) = (uint)(param_3 != 0);
    FUN_1495d440b(_Dst);
    if (param_3 == 0) {
      puVar2 = _Dst + 6;
    }
    else {
      *(undefined4 *)(_Dst + 4) = 10;
      iVar1 = *(int *)((longlong)puVar2 + 0xc);
      *(int *)((longlong)puVar2 + 0xc) = iVar1 + 10;
      *(int *)(puVar2 + 2) = *(int *)(puVar2 + 1) - iVar1;
      puVar2 = (undefined8 *)((longlong)puVar2 + 0x14);
    }
    _Dst[1] = puVar2;
    if (*(int *)((longlong)_Dst + 0x3c) != 0) {
      return _Dst;
    }
    FUN_1495d4383(_Dst);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1495d4360 FUN_1495d4360 body=35 status=ok
// SIG undefined FUN_1495d4360(void)

void FUN_1495d4360(longlong param_1,uint param_2)

{
  if (param_2 <= *(uint *)(param_1 + 0x2c)) {
    FUN_1495d486e();
    *(uint *)(param_1 + 0x2c) = param_2 - 1;
  }
  return;
}



// FUNCTION 1495d4383 FUN_1495d4383 body=94 status=ok
// SIG undefined FUN_1495d4383(void)

void FUN_1495d4383(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *param_1;
  if ((int)param_1[7] != 0) {
    FUN_1495d486e(param_1,0);
  }
  iVar2 = *(int *)(lVar1 + 8) - *(int *)((longlong)param_1 + 0x24);
  *(int *)(lVar1 + 8) = iVar2;
  iVar3 = *(int *)(lVar1 + 0xc) - (int)param_1[4];
  *(int *)(lVar1 + 0xc) = iVar3;
  *(int *)(lVar1 + 0x10) = (iVar2 - iVar3) + 10;
  FUN_1495d44b1(param_1);
  FUN_145e3b961(param_1[10]);
  FUN_145e3b961(param_1[8]);
  FUN_145e3b961(param_1);
  return;
}



// FUNCTION 1495d43e1 FUN_1495d43e1 body=42 status=ok
// SIG undefined FUN_1495d43e1(void)

void FUN_1495d43e1(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    lVar2 = *param_1;
    uVar1 = *(undefined4 *)(lVar2 + 8);
    *(undefined4 *)(lVar2 + 8) = 0;
    FUN_1495d44b1();
    *(undefined4 *)(lVar2 + 8) = uVar1;
  }
  return;
}



// FUNCTION 1495d440b FUN_1495d440b body=166 status=ok
// SIG undefined FUN_1495d440b(void)

void FUN_1495d440b(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  void *_Dst;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar3 = *(int *)(param_1 + 0x3c) * 2;
  uVar6 = 0x100;
  if (0x100 < uVar3) {
    uVar6 = (ulonglong)uVar3;
  }
  _Dst = (void *)FUN_145e3bd67(uVar6 * 8);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,uVar6 * 8);
    uVar3 = *(uint *)(param_1 + 0x3c);
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x40) + uVar4 * 8);
        if (lVar5 != 0) {
          do {
            uVar2 = (ulonglong)*(uint *)(lVar5 + 0x10) % uVar6;
            lVar1 = *(longlong *)(lVar5 + 0x18);
            *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)((longlong)_Dst + uVar2 * 8);
            *(longlong *)((longlong)_Dst + uVar2 * 8) = lVar5;
            lVar5 = lVar1;
          } while (lVar1 != 0);
          uVar3 = *(uint *)(param_1 + 0x3c);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
    }
    FUN_145e3b961(*(undefined8 *)(param_1 + 0x40));
    *(void **)(param_1 + 0x40) = _Dst;
    *(int *)(param_1 + 0x3c) = (int)uVar6;
  }
  return;
}



// FUNCTION 1495d44b1 FUN_1495d44b1 body=109 status=ok
// SIG undefined FUN_1495d44b1(void)

void FUN_1495d44b1(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  while ((*(uint *)(lVar2 + 8) < *(uint *)(lVar2 + 0x14) &&
         (lVar3 = *(longlong *)(lVar2 + 0x48), *(short *)(lVar3 + 0x16) == 0))) {
    lVar4 = *(longlong *)(lVar3 + 0x28);
    *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x28) = lVar4;
    *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(lVar3 + 0x28) = 0;
    piVar1 = (int *)(*(longlong *)(lVar3 + 0x20) + 0x34);
    *piVar1 = *piVar1 + -1;
    FUN_1495d451e();
  }
  if (((int)param_1[7] == 0) && (param_1[10] != 0)) {
    FUN_145e3b961();
    param_1[9] = 0;
    param_1[10] = 0;
  }
  return;
}



// FUNCTION 1495d451e FUN_1495d451e body=96 status=ok
// SIG undefined FUN_1495d451e(void)

void FUN_1495d451e(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = param_1[4];
  plVar3 = (longlong *)
           (((ulonglong)*(uint *)(param_1 + 2) % (ulonglong)*(uint *)(lVar1 + 0x3c)) * 8 +
           *(longlong *)(lVar1 + 0x40));
  do {
    plVar4 = plVar3;
    puVar2 = (undefined8 *)*plVar4;
    plVar3 = puVar2 + 3;
  } while (puVar2 != param_1);
  *plVar4 = *plVar3;
  *(int *)(lVar1 + 0x38) = *(int *)(lVar1 + 0x38) + -1;
  lVar1 = param_1[4];
  if (*(short *)((longlong)param_1 + 0x14) == 0) {
    FUN_14956234e(*param_1);
  }
  else {
    param_1[3] = *(undefined8 *)(lVar1 + 0x48);
    *(undefined8 **)(lVar1 + 0x48) = param_1;
  }
  **(int **)(lVar1 + 8) = **(int **)(lVar1 + 8) + -1;
  return;
}



// FUNCTION 1495d457e FUN_1495d457e body=752 status=ok
// SIG undefined FUN_1495d457e(void)

undefined8 * FUN_1495d457e(longlong *param_1,uint param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  int *piVar10;
  
  lVar3 = *param_1;
  if (param_3 == 1) {
    uVar6 = *(uint *)(param_1 + 7) - *(uint *)((longlong)param_1 + 0x34);
    if (*(uint *)(lVar3 + 0x10) <= uVar6) {
      return (undefined8 *)0x0;
    }
    if (*(uint *)(param_1 + 5) <= uVar6) {
      return (undefined8 *)0x0;
    }
    if ((DAT_14cc1ede0 == 0) ||
       (DAT_14cc1eddc < *(int *)((longlong)param_1 + 0x14) + (int)param_1[2])) {
      piVar10 = &DAT_14cc1ebb0;
    }
    else {
      piVar10 = &DAT_14cc1ee0c;
    }
    if (*piVar10 != 0 && *(uint *)((longlong)param_1 + 0x34) < uVar6) {
      return (undefined8 *)0x0;
    }
  }
  if (*(uint *)((longlong)param_1 + 0x3c) <= *(uint *)(param_1 + 7)) {
    FUN_1495d440b(param_1);
  }
  if ((*(int *)((longlong)param_1 + 0x1c) != 0) &&
     (puVar5 = *(undefined8 **)(lVar3 + 0x48), *(short *)((longlong)puVar5 + 0x16) == 0)) {
    if ((int)param_1[7] + 1U < *(uint *)((longlong)param_1 + 0x24)) {
      if ((DAT_14cc1ede0 == 0) ||
         (DAT_14cc1eddc < *(int *)((longlong)param_1 + 0x14) + (int)param_1[2])) {
        piVar10 = &DAT_14cc1ebb0;
      }
      else {
        piVar10 = &DAT_14cc1ee0c;
      }
      if (*piVar10 == 0) goto LAB_1495d4609;
    }
    lVar8 = puVar5[4];
    plVar9 = (longlong *)
             (((ulonglong)*(uint *)(puVar5 + 2) % (ulonglong)*(uint *)(lVar8 + 0x3c)) * 8 +
             *(longlong *)(lVar8 + 0x40));
    do {
      plVar7 = plVar9;
      puVar1 = (undefined8 *)*plVar7;
      plVar9 = puVar1 + 3;
    } while (puVar1 != puVar5);
    *plVar7 = *plVar9;
    *(int *)(lVar8 + 0x38) = *(int *)(lVar8 + 0x38) + -1;
    lVar8 = puVar5[5];
    *(longlong *)(puVar5[6] + 0x28) = lVar8;
    *(undefined8 *)(lVar8 + 0x30) = puVar5[6];
    puVar5[5] = 0;
    *(int *)(puVar5[4] + 0x34) = *(int *)(puVar5[4] + 0x34) + -1;
    lVar8 = puVar5[4];
    if (*(int *)(lVar8 + 0x18) == (int)param_1[3]) {
      *(int *)(lVar3 + 0x14) =
           *(int *)(lVar3 + 0x14) + (*(int *)((longlong)param_1 + 0x1c) - *(int *)(lVar8 + 0x1c));
      if (puVar5 != (undefined8 *)0x0) goto LAB_1495d462c;
    }
    else {
      if (*(short *)((longlong)puVar5 + 0x14) == 0) {
        FUN_14956234e(*puVar5);
      }
      else {
        puVar5[3] = *(undefined8 *)(lVar8 + 0x48);
        *(undefined8 **)(lVar8 + 0x48) = puVar5;
      }
      **(int **)(lVar8 + 8) = **(int **)(lVar8 + 8) + -1;
    }
  }
LAB_1495d4609:
  puVar5 = (undefined8 *)param_1[9];
  if (puVar5 == (undefined8 *)0x0) {
    if ((DAT_14cc1edd8 != 0 && (int)param_1[7] == 0) &&
       (2 < (ulonglong)*(uint *)((longlong)param_1 + 0x24))) {
      if ((int)DAT_14cc1edd8 < 1) {
        lVar8 = (longlong)(int)DAT_14cc1edd8 * -0x400;
        lVar3 = (longlong)(int)param_1[3];
      }
      else {
        lVar3 = (longlong)(int)param_1[3];
        lVar8 = (ulonglong)DAT_14cc1edd8 * lVar3;
      }
      lVar3 = lVar3 * (ulonglong)*(uint *)((longlong)param_1 + 0x24);
      if (lVar8 < lVar3) {
        lVar3 = lVar8;
      }
      lVar3 = FUN_145e3bd67(lVar3);
      param_1[10] = lVar3;
      if (lVar3 == 0) {
        puVar5 = (undefined8 *)param_1[9];
      }
      else {
        iVar2 = (*DAT_14c765d30)(lVar3);
        uVar4 = (longlong)iVar2 / (longlong)(int)param_1[3] & 0xffffffff;
        do {
          puVar5 = (undefined8 *)(lVar3 + (int)param_1[2]);
          plVar9 = (longlong *)((int)param_1[2] + lVar3);
          *plVar9 = lVar3;
          plVar9[1] = (longlong)(plVar9 + 7);
          *(undefined4 *)((longlong)plVar9 + 0x14) = 1;
          plVar9[3] = param_1[9];
          plVar9[6] = 0;
          param_1[9] = (longlong)puVar5;
          lVar3 = lVar3 + (int)param_1[3];
          uVar6 = (int)uVar4 - 1;
          uVar4 = (ulonglong)uVar6;
        } while (uVar6 != 0);
      }
      if (puVar5 != (undefined8 *)0x0) goto LAB_1495d4616;
    }
    lVar3 = FUN_149565030((int)param_1[3]);
    if (lVar3 != 0) {
      lVar8 = (longlong)(int)param_1[2];
      *(longlong *)(lVar3 + lVar8) = lVar3;
      puVar5 = (undefined8 *)(lVar3 + lVar8);
      *(longlong *)(lVar3 + 8 + lVar8) = lVar3 + lVar8 + 0x38;
      *(undefined4 *)(lVar3 + 0x14 + lVar8) = 0;
      *(int *)param_1[1] = *(int *)param_1[1] + 1;
      if (puVar5 != (undefined8 *)0x0) goto LAB_1495d462c;
    }
    return (undefined8 *)0x0;
  }
LAB_1495d4616:
  param_1[9] = puVar5[3];
  puVar5[3] = 0;
  *(int *)param_1[1] = *(int *)param_1[1] + 1;
LAB_1495d462c:
  uVar4 = (ulonglong)param_2 % (ulonglong)*(uint *)((longlong)param_1 + 0x3c);
  *(int *)(param_1 + 7) = (int)param_1[7] + 1;
  *(uint *)(puVar5 + 2) = param_2;
  puVar5[3] = *(undefined8 *)(param_1[8] + uVar4 * 8);
  puVar5[4] = param_1;
  puVar5[5] = 0;
  *(undefined8 *)puVar5[1] = 0;
  *(undefined8 **)(param_1[8] + uVar4 * 8) = puVar5;
  if (*(uint *)((longlong)param_1 + 0x2c) < param_2) {
    *(uint *)((longlong)param_1 + 0x2c) = param_2;
  }
  return puVar5;
}



// FUNCTION 1495d486e FUN_1495d486e body=233 status=ok
// SIG undefined FUN_1495d486e(void)

void FUN_1495d486e(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  uVar1 = *(uint *)(param_1 + 0x3c);
  if (*(uint *)(param_1 + 0x2c) - param_2 < uVar1) {
    uVar4 = (ulonglong)param_2 % (ulonglong)uVar1;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x2c) % (ulonglong)uVar1;
  }
  else {
    uVar5 = (ulonglong)((uVar1 >> 1) - 1);
    uVar4 = (ulonglong)(uVar1 >> 1);
  }
  while( true ) {
    puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x40) + uVar4 * 8);
    if (puVar3 != (undefined8 *)0x0) {
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0x40) + uVar4 * 8);
      do {
        if (*(uint *)(puVar3 + 2) < param_2) {
          plVar6 = puVar3 + 3;
        }
        else {
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          *plVar6 = puVar3[3];
          if (puVar3[5] != 0) {
            *(undefined8 *)(puVar3[6] + 0x28) = puVar3[5];
            *(undefined8 *)(puVar3[5] + 0x30) = puVar3[6];
            puVar3[5] = 0;
            *(int *)(puVar3[4] + 0x34) = *(int *)(puVar3[4] + 0x34) + -1;
          }
          lVar2 = puVar3[4];
          if (*(short *)((longlong)puVar3 + 0x14) == 0) {
            FUN_14956234e(*puVar3);
          }
          else {
            puVar3[3] = *(undefined8 *)(lVar2 + 0x48);
            *(undefined8 **)(lVar2 + 0x48) = puVar3;
          }
          **(int **)(lVar2 + 8) = **(int **)(lVar2 + 8) + -1;
        }
        puVar3 = (undefined8 *)*plVar6;
      } while (puVar3 != (undefined8 *)0x0);
    }
    if ((int)uVar4 == (int)uVar5) break;
    uVar4 = (ulonglong)((int)uVar4 + 1) % (ulonglong)*(uint *)(param_1 + 0x3c);
  }
  return;
}



// FUNCTION 1495d4984 FUN_1495d4984 body=139 status=ok
// SIG undefined FUN_1495d4984(void)

void FUN_1495d4984(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1495d4a10(&local_28);
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



// FUNCTION 1495d4a10 FUN_1495d4a10 body=194 status=ok
// SIG undefined FUN_1495d4a10(void)

undefined8 * FUN_1495d4a10(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446ddc76(&local_30,"Analytics",1);
  plVar3 = local_30;
  uVar2 = FUN_144a52528();
  plVar3 = (longlong *)FUN_1402c9134(uVar2,plVar3,local_1c,1);
  (**(code **)(*plVar3 + 0x50))(plVar3,&local_30);
  if (local_30 == (longlong *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    (**(code **)(*local_30 + 0x10))(local_30,param_1);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d4ad4 FUN_1495d4ad4 body=139 status=ok
// SIG undefined FUN_1495d4ad4(void)

void FUN_1495d4ad4(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1495d4b60(&local_28);
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



// FUNCTION 1495d4b60 FUN_1495d4b60 body=194 status=ok
// SIG undefined FUN_1495d4b60(void)

undefined8 * FUN_1495d4b60(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446ddc76(&local_30,"Analytics",1);
  plVar3 = local_30;
  uVar2 = FUN_144a52528();
  plVar3 = (longlong *)FUN_1402c9134(uVar2,plVar3,local_1c,1);
  (**(code **)(*plVar3 + 0x50))(plVar3,&local_30);
  if (local_30 == (longlong *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    (**(code **)(*local_30 + 0x30))(local_30,param_1);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d4c24 FUN_1495d4c24 body=436 status=ok
// SIG undefined FUN_1495d4c24(void)

void FUN_1495d4c24(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  void *local_68;
  ulonglong uStack_60;
  void *local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18));
  }
  pvVar1 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = (void *)0x0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  lVar3 = (longlong)(int)uStack_30;
  uStack_60 = uStack_30 & 0xffffffff;
  iVar4 = 0;
  if (lVar3 != 0) {
    FUN_1446dd670(&local_68,uStack_30 & 0xffffffff,0);
    memcpy(local_68,pvVar1,lVar3 * 2);
    iVar4 = uStack_50._4_4_;
  }
  pvVar1 = local_48;
  iVar2 = (int)uStack_40;
  lVar3 = (longlong)(int)uStack_40;
  uStack_50 = CONCAT44(uStack_50._4_4_,(int)uStack_40);
  if ((int)uStack_40 == 0 && iVar4 == 0) {
    uStack_50 = uStack_40 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&local_58,uStack_40 & 0xffffffff);
    if (iVar2 != 0) {
      memcpy(local_58,pvVar1,lVar3 * 2);
    }
  }
  FUN_1495d4dda(param_3,&local_68);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d4dda FUN_1495d4dda body=111 status=ok
// SIG undefined FUN_1495d4dda(void)

longlong * FUN_1495d4dda(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  return param_1;
}



// FUNCTION 1495d4e4a FUN_1495d4e4a body=251 status=ok
// SIG undefined FUN_1495d4e4a(void)

void FUN_1495d4e4a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_144546ea4(local_28,local_2c);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d4f46 FUN_1495d4f46 body=347 status=ok
// SIG undefined FUN_1495d4f46(void)

void FUN_1495d4f46(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  undefined4 local_2c;
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
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144546fdc(local_28,local_2c,plVar1);
  FUN_1495d6a2d(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
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



// FUNCTION 1495d50a2 FUN_1495d50a2 body=542 status=ok
// SIG undefined FUN_1495d50a2(void)

void FUN_1495d50a2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_68 [3];
  undefined4 local_4c;
  longlong local_48 [3];
  undefined4 local_2c;
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
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
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_68;
  FUN_144547158(local_28,local_2c,local_48,local_4c);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d52c2 FUN_1495d52c2 body=163 status=ok
// SIG undefined FUN_1495d52c2(void)

void FUN_1495d52c2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1445472bc(local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d5366 FUN_1495d5366 body=273 status=ok
// SIG undefined FUN_1495d5366(void)

void FUN_1495d5366(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445473ee(local_28,plVar1);
  FUN_1495d6a2d(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d5478 FUN_1495d5478 body=163 status=ok
// SIG undefined FUN_1495d5478(void)

void FUN_1495d5478(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_14454755c(local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d551c FUN_1495d551c body=364 status=ok
// SIG undefined FUN_1495d551c(void)

void FUN_1495d551c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48 [7];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[4] = 0;
  local_48[5] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 4);
  }
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14454768c(local_48 + 4,local_48 + 2,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if (local_48[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d568a FUN_1495d568a body=273 status=ok
// SIG undefined FUN_1495d568a(void)

void FUN_1495d568a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14454785a(local_28,plVar1);
  FUN_1495d6a2d(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d579c FUN_1495d579c body=431 status=ok
// SIG undefined FUN_1495d579c(void)

void FUN_1495d579c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38 [5];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
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
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445479c6(local_38 + 2,local_38,local_3c,local_40);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d594c FUN_1495d594c body=267 status=ok
// SIG undefined FUN_1495d594c(void)

void FUN_1495d594c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38 [5];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144547b16(local_38 + 2,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d5a58 FUN_1495d5a58 body=363 status=ok
// SIG undefined FUN_1495d5a58(void)

void FUN_1495d5a58(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144547c50(local_38 + 2,local_38,plVar1);
  FUN_1495d6a2d(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d5bc4 FUN_1495d5bc4 body=395 status=ok
// SIG undefined FUN_1495d5bc4(void)

void FUN_1495d5bc4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong uStack_50;
  longlong local_48;
  ulonglong uStack_40;
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
  plVar1 = &local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = &local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144547dce(local_38,plVar1,plVar2);
  FUN_1495d6a2d(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d5d50 FUN_1495d5d50 body=251 status=ok
// SIG undefined FUN_1495d5d50(void)

void FUN_1495d5d50(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_144547f4c(local_28,local_2c);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d5e4c FUN_1495d5e4c body=347 status=ok
// SIG undefined FUN_1495d5e4c(void)

void FUN_1495d5e4c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  undefined4 local_2c;
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
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144548084(local_28,local_2c,plVar1);
  FUN_1495d6a2d(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
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



// FUNCTION 1495d5fa8 FUN_1495d5fa8 body=251 status=ok
// SIG undefined FUN_1495d5fa8(void)

void FUN_1495d5fa8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_144548200(local_28,local_2c);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d60a4 FUN_1495d60a4 body=347 status=ok
// SIG undefined FUN_1495d60a4(void)

void FUN_1495d60a4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  undefined4 local_2c;
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
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144548336(local_28,local_2c,plVar1);
  FUN_1495d6a2d(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
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



// FUNCTION 1495d6200 FUN_1495d6200 body=146 status=ok
// SIG undefined FUN_1495d6200(void)

void FUN_1495d6200(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445484b2(local_14);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d6294 FUN_1495d6294 body=163 status=ok
// SIG undefined FUN_1495d6294(void)

void FUN_1495d6294(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1445485de(local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d6338 FUN_1495d6338 body=163 status=ok
// SIG undefined FUN_1495d6338(void)

void FUN_1495d6338(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_14454870c(local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d63dc FUN_1495d63dc body=163 status=ok
// SIG undefined FUN_1495d63dc(void)

void FUN_1495d63dc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_14454883a(local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d6480 FUN_1495d6480 body=163 status=ok
// SIG undefined FUN_1495d6480(void)

void FUN_1495d6480(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_144548968(local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d6524 FUN_1495d6524 body=163 status=ok
// SIG undefined FUN_1495d6524(void)

void FUN_1495d6524(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_144548a96(local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d65cc FUN_1495d65cc body=37 status=ok
// SIG undefined FUN_1495d65cc(void)

void FUN_1495d65cc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_144548bc4();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1495d65f8 FUN_1495d65f8 body=190 status=ok
// SIG undefined FUN_1495d65f8(void)

void FUN_1495d65f8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_144548cf4(plVar2);
  *param_3 = uVar1;
  FUN_1495d6a2d(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d66ba FUN_1495d66ba body=97 status=ok
// SIG undefined FUN_1495d66ba(void)

undefined4 FUN_1495d66ba(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  uVar1 = (**(code **)*param_1)(0,&local_28);
  FUN_146b17e4e(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d671c FUN_1495d671c body=92 status=ok
// SIG undefined FUN_1495d671c(void)

void FUN_1495d671c(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  (**(code **)(*param_1 + 0x78))(0,param_2,&local_28);
  FUN_146b17e4e(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d677a FUN_1495d677a body=179 status=ok
// SIG undefined FUN_1495d677a(void)

void FUN_1495d677a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong *local_68;
  longlong local_60;
  undefined4 local_58;
  longlong local_50 [2];
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_146b17d12(local_50,param_3);
  local_68 = &local_20;
  local_70 = local_50;
  FUN_146b28a2e(&local_60);
  (**(code **)(*param_1 + 0x78))(param_1,param_2,&local_60);
  FUN_146b17e4e(local_60,local_58);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d682e FUN_1495d682e body=95 status=ok
// SIG undefined FUN_1495d682e(void)

void FUN_1495d682e(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  (**(code **)(*param_1 + 0x80))();
  FUN_146b17e4e(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d68aa FUN_1495d68aa body=47 status=ok
// SIG undefined FUN_1495d68aa(void)

void FUN_1495d68aa(undefined8 param_1,longlong *param_2)

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



// FUNCTION 1495d68f0 FUN_1495d68f0 body=67 status=ok
// SIG undefined FUN_1495d68f0(void)

undefined1 FUN_1495d68f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 1495d695c FUN_1495d695c body=59 status=ok
// SIG undefined FUN_1495d695c(void)

undefined8 FUN_1495d695c(longlong *param_1)

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



// FUNCTION 1495d69fa FUN_1495d69fa body=51 status=ok
// SIG undefined FUN_1495d69fa(void)

void FUN_1495d69fa(longlong *param_1)

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



// FUNCTION 1495d6a2d FUN_1495d6a2d body=61 status=ok
// SIG undefined FUN_1495d6a2d(void)

void FUN_1495d6a2d(longlong param_1,int param_2)

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



// FUNCTION 1495d6a6a FUN_1495d6a6a body=36 status=ok
// SIG undefined FUN_1495d6a6a(void)

undefined8 FUN_1495d6a6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1495d6aaa FUN_1495d6aaa body=93 status=ok
// SIG undefined FUN_1495d6aaa(void)

void FUN_1495d6aaa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bd4d7e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1495d6b08 FUN_1495d6b08 body=123 status=ok
// SIG undefined FUN_1495d6b08(void)

void FUN_1495d6b08(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_14bd4d7e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1495d6b84 FUN_1495d6b84 body=21 status=ok
// SIG undefined FUN_1495d6b84(void)

undefined8 FUN_1495d6b84(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1495d6ba4 FUN_1495d6ba4 body=31 status=ok
// SIG undefined FUN_1495d6ba4(void)

undefined8 FUN_1495d6ba4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1495d6be0 FUN_1495d6be0 body=93 status=ok
// SIG undefined FUN_1495d6be0(void)

void FUN_1495d6be0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bd4dca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1495d6c3e FUN_1495d6c3e body=126 status=ok
// SIG undefined FUN_1495d6c3e(void)

void FUN_1495d6c3e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bd4dca0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001495d6cad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1495d6cbc FUN_1495d6cbc body=21 status=ok
// SIG undefined FUN_1495d6cbc(void)

undefined8 FUN_1495d6cbc(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1495d6cd8 FUN_1495d6cd8 body=270 status=ok
// SIG undefined FUN_1495d6cd8(void)

void FUN_1495d6cd8(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar2 = &local_3c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1495d6f70(local_38,param_1 + 0x68,puVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d6dee FUN_1495d6dee body=384 status=ok
// SIG undefined FUN_1495d6dee(void)

void FUN_1495d6dee(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  longlong local_48;
  ulonglong uStack_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  plVar2 = &local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_4c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar3 = &local_4c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1495d6f70(local_38,plVar2,puVar3);
  *param_3 = uVar1;
  FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d6f70 FUN_1495d6f70 body=432 status=ok
// SIG undefined FUN_1495d6f70(void)

ulonglong FUN_1495d6f70(longlong *param_1,longlong *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  ulonglong uVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  int local_70;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar3 = FUN_144a075de(param_2,param_1);
  *param_3 = iVar3;
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (iVar3 == -1) {
    local_70 = (int)param_1[1] + -1;
    if ((int)param_1[1] == 0) {
      local_70 = 0;
    }
    local_70 = local_70 + -1;
    local_78 = 1;
    iVar3 = FUN_1447ee042(param_1,&DAT_149e0635c,1,1);
    if (iVar3 == -1) {
      lVar2 = param_2[1];
      iVar3 = (int)param_1[1] + -1;
      if ((int)param_1[1] == 0) {
        iVar3 = 0;
      }
      if ((int)lVar2 != 0) {
        local_60 = (longlong)iVar3;
        iVar12 = 0;
        do {
          iVar1 = *(int *)(*param_2 + 8 + (longlong)iVar12 * 0x10);
          iVar4 = iVar1 + -1;
          if (iVar1 == 0) {
            iVar4 = 0;
          }
          if (iVar3 < iVar4) {
            plVar11 = (longlong *)(*param_2 + (longlong)iVar12 * 0x10);
            FUN_144a63a7c(plVar11,&local_58,0,iVar3);
            if (local_50 == (int)param_1[1]) {
              if (1 < local_50) {
                lVar8 = 0;
                while( true ) {
                  uVar5 = *(ushort *)(local_58 + lVar8);
                  uVar6 = (ulonglong)uVar5;
                  uVar9 = *(ushort *)(*param_1 + lVar8);
                  if (uVar5 != uVar9) break;
                  if (uVar5 == 0) goto LAB_1495d70cf;
LAB_1495d709b:
                  lVar8 = lVar8 + 2;
                }
                if ((uVar9 | uVar5) < 0x80) {
                  uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
                  uVar10 = (ulonglong)uVar9;
                  uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                  if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar10]) goto LAB_1495d709b;
                }
                if (uVar5 != uVar9) goto LAB_1495d710b;
              }
LAB_1495d70cf:
              bVar13 = *(short *)(*plVar11 + local_60 * 2) == 0x2e;
            }
            else {
              if ((int)param_1[1] + local_50 == 1) goto LAB_1495d70cf;
LAB_1495d710b:
              bVar13 = false;
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if (bVar13) {
              *param_3 = iVar12;
              goto LAB_1495d6fad;
            }
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 != (int)lVar2);
      }
    }
    uVar7 = 0;
  }
LAB_1495d6fad:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1495d7128 FUN_1495d7128 body=267 status=ok
// SIG undefined FUN_1495d7128(void)

void FUN_1495d7128(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_68 [36];
  undefined1 local_44 [16];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_44);
  }
  puVar3 = &local_34;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  puVar4 = local_44;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1495d7234(param_1,puVar3,puVar4);
  *param_3 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d7234 FUN_1495d7234 body=325 status=ok
// SIG undefined FUN_1495d7234(void)

void FUN_1495d7234(longlong param_1,int *param_2,float *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 *local_60;
  int local_50;
  undefined1 local_4a;
  undefined1 local_49;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = DAT_14c846520;
  local_48 = (undefined4)DAT_14c846510;
  uStack_44 = DAT_14c846510._4_4_;
  uStack_40 = (undefined4)DAT_14c846518;
  uStack_3c = DAT_14c846518._4_4_;
  local_49 = 0;
  local_4a = 0;
  iVar1 = *(int *)(param_1 + 200);
  local_50 = -1;
  if (((5 < iVar1) && (iVar3 = *(int *)(*(longlong *)(param_1 + 0xc0) + 0x14), -1 < iVar3)) &&
     (local_50 = -1, iVar3 < *(int *)(param_1 + 0x3c))) {
    local_50 = iVar3;
  }
  local_60 = &local_49;
  local_68 = &local_4a;
  cVar2 = FUN_1495dbdb0(param_1,param_2,&local_50,&local_48);
  if (cVar2 != '\0') {
    iVar3 = -1;
    if (((6 < iVar1) && (iVar1 = *(int *)(*(longlong *)(param_1 + 0xc0) + 0x18), -1 < iVar1)) &&
       (iVar3 = -1, iVar1 < *(int *)(param_1 + 0x3c))) {
      iVar3 = iVar1;
    }
    iVar1 = *param_2;
    fVar5 = 1.0;
    if (((-1 < iVar1) && (-1 < iVar3 && iVar1 < *(int *)(param_1 + 0x38))) &&
       ((iVar3 < *(int *)(param_1 + 0x3c) &&
        (uVar4 = *(int *)(param_1 + 0x38) * iVar3 + iVar1, (int)uVar4 < *(int *)(param_1 + 0x88)))))
    {
      fVar5 = *(float *)(*(longlong *)(param_1 + 0x80) + (ulonglong)uVar4 * 4);
    }
    *param_3 = (float)(double)CONCAT44(uStack_44,local_48);
    param_3[1] = (float)(double)CONCAT44(uStack_3c,uStack_40);
    param_3[2] = (float)local_38;
    param_3[3] = fVar5;
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d73a0 FUN_1495d73a0 body=447 status=ok
// SIG undefined FUN_1495d73a0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1495d73a0(longlong param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  int local_40 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40 + 1);
  }
  piVar7 = local_40 + 1;
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar7 = *(int **)(param_2 + 0x38);
  }
  local_40[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  piVar6 = local_40;
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar6 = *(int **)(param_2 + 0x38);
  }
  local_44 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar4 = &local_44;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = *piVar7;
  if ((((iVar1 < 0) || (*(int *)(param_1 + 0x38) <= iVar1)) || (iVar2 = *piVar6, iVar2 < 0)) ||
     ((*(int *)(param_1 + 0x3c) <= iVar2 ||
      (uVar5 = iVar2 * *(int *)(param_1 + 0x38) + iVar1, *(int *)(param_1 + 0x88) <= (int)uVar5))))
  {
    uVar3 = 0;
  }
  else {
    *puVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x80) + (ulonglong)uVar5 * 4);
    uVar3 = 1;
  }
  *param_3 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d7560 FUN_1495d7560 body=67 status=ok
// SIG undefined FUN_1495d7560(void)

undefined8 FUN_1495d7560(longlong param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  iVar1 = *param_2;
  if ((((iVar1 < 0) || (*(int *)(param_1 + 0x38) <= iVar1)) || (iVar2 = *param_3, iVar2 < 0)) ||
     ((*(int *)(param_1 + 0x3c) <= iVar2 ||
      (uVar5 = iVar2 * *(int *)(param_1 + 0x38) + iVar1, *(int *)(param_1 + 0x88) <= (int)uVar5))))
  {
    uVar4 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x80);
    *param_4 = *(undefined4 *)(lVar3 + (ulonglong)uVar5 * 4);
    uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  }
  return uVar4;
}



// FUNCTION 1495d75aa FUN_1495d75aa body=369 status=ok
// SIG undefined FUN_1495d75aa(void)

void FUN_1495d75aa(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  longlong local_48 [2];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  puVar3 = &local_34;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_4c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar2 = &local_4c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1495d771c(param_1,puVar3,local_48,puVar2);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d771c FUN_1495d771c body=155 status=ok
// SIG undefined FUN_1495d771c(void)

undefined8 FUN_1495d771c(longlong param_1,int *param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = -1;
  cVar3 = FUN_1495d6f70(param_3,param_1 + 0x68);
  if ((((cVar3 == '\0') || (iVar1 = *param_2, iVar1 < 0)) || (*(int *)(param_1 + 0x38) <= iVar1)) ||
     (((local_24 < 0 || (*(int *)(param_1 + 0x3c) <= local_24)) ||
      (uVar5 = local_24 * *(int *)(param_1 + 0x38) + iVar1, *(int *)(param_1 + 0x88) <= (int)uVar5))
     )) {
    uVar4 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x80);
    *param_4 = *(undefined4 *)(lVar2 + (ulonglong)uVar5 * 4);
    uVar4 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d77be FUN_1495d77be body=275 status=ok
// SIG undefined FUN_1495d77be(void)

void FUN_1495d77be(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  uVar1 = FUN_1495d78d2(param_1,puVar2,puVar3);
  *param_3 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d78d2 FUN_1495d78d2 body=112 status=ok
// SIG undefined FUN_1495d78d2(void)

undefined8 FUN_1495d78d2(longlong param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  
  iVar3 = -1;
  if (((9 < *(int *)(param_1 + 200)) &&
      (iVar1 = *(int *)(*(longlong *)(param_1 + 0xc0) + 0x24), -1 < iVar1)) &&
     (iVar3 = -1, iVar1 < *(int *)(param_1 + 0x3c))) {
    iVar3 = iVar1;
  }
  iVar1 = *param_2;
  if (((iVar1 < 0) || (iVar3 < 0 || *(int *)(param_1 + 0x38) <= iVar1)) ||
     ((*(int *)(param_1 + 0x3c) <= iVar3 ||
      (uVar5 = *(int *)(param_1 + 0x38) * iVar3 + iVar1, *(int *)(param_1 + 0x88) <= (int)uVar5))))
  {
    uVar4 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x80);
    *param_3 = *(undefined4 *)(lVar2 + (ulonglong)uVar5 * 4);
    uVar4 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return uVar4;
}



// FUNCTION 1495d7948 FUN_1495d7948 body=275 status=ok
// SIG undefined FUN_1495d7948(void)

void FUN_1495d7948(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  uVar1 = FUN_1495d7a5c(param_1,puVar2,puVar3);
  *param_3 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d7a5c FUN_1495d7a5c body=103 status=ok
// SIG undefined FUN_1495d7a5c(void)

undefined8 FUN_1495d7a5c(longlong param_1,float *param_2,int *param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar3 = *(int *)(param_1 + 0x40);
  if ((iVar3 < 1) || (*(int *)(param_1 + 0x98) < iVar3)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    pfVar1 = (float *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(iVar3 - 1) * 4);
    if (*param_2 < *pfVar1 || *param_2 == *pfVar1) {
      *param_3 = -1;
      if (*(int *)(param_1 + 0x40) < 1) {
        return 1;
      }
      lVar5 = 0;
      do {
        fVar2 = *(float *)(*(longlong *)(param_1 + 0x90) + lVar5 * 4);
        if (*param_2 <= fVar2 && fVar2 != *param_2) {
          return 1;
        }
        *param_3 = (int)lVar5;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(param_1 + 0x40));
      return 1;
    }
  }
  *param_3 = iVar3 + -1;
  return uVar4;
}



// FUNCTION 1495d7aca FUN_1495d7aca body=275 status=ok
// SIG undefined FUN_1495d7aca(void)

void FUN_1495d7aca(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  uVar1 = FUN_1495d7bde(param_1,puVar2,puVar3);
  *param_3 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d7bde FUN_1495d7bde body=290 status=ok
// SIG undefined FUN_1495d7bde(void)

undefined8 FUN_1495d7bde(longlong param_1,float *param_2,int *param_3)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_78 [40];
  int local_50;
  float local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(int *)(param_1 + 200) < 3) ||
      (iVar3 = *(int *)(*(longlong *)(param_1 + 0xc0) + 8), iVar3 < 0)) ||
     (*(int *)(param_1 + 0x3c) <= iVar3)) {
    *param_3 = *(int *)(param_1 + 0x38) + -1;
    uVar2 = 0;
    goto LAB_1495d7c28;
  }
  local_4c = 0.0;
  iVar3 = *(int *)(param_1 + 0x38) + -1;
  local_50 = iVar3;
  cVar1 = FUN_1495db67e(param_1);
  if ((cVar1 == '\0') || (*param_2 <= local_4c)) {
    *param_3 = -1;
    local_50 = 0;
    iVar3 = *(int *)(param_1 + 0x38);
    if (iVar3 < 1) {
LAB_1495d7cf6:
      iVar3 = iVar3 + -1;
      goto LAB_1495d7cf8;
    }
    iVar6 = -1;
    iVar4 = -1;
    do {
      iVar5 = iVar4 + 1;
      cVar1 = FUN_1495db67e(param_1,&local_50,&local_4c);
      if (cVar1 != '\0') {
        if ((local_4c != *param_2) || (NAN(local_4c) || NAN(*param_2))) {
          if (*param_2 <= local_4c && local_4c != *param_2) {
            *param_3 = iVar4;
            goto LAB_1495d7cfa;
          }
        }
        else {
          *param_3 = iVar5;
          iVar3 = *(int *)(param_1 + 0x38);
          iVar6 = iVar5;
        }
      }
      local_50 = iVar4 + 2;
      iVar4 = iVar5;
    } while (local_50 < iVar3);
    if (iVar6 == -1) goto LAB_1495d7cf6;
  }
  else {
LAB_1495d7cf8:
    *param_3 = iVar3;
  }
LAB_1495d7cfa:
  uVar2 = 1;
LAB_1495d7c28:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d7d28 FUN_1495d7d28 body=267 status=ok
// SIG undefined FUN_1495d7d28(void)

void FUN_1495d7d28(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [40];
  undefined1 local_50 [28];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar3 = &local_34;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  puVar4 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1495d7e34(param_1,puVar3,puVar4);
  *param_3 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d7e34 FUN_1495d7e34 body=182 status=ok
// SIG undefined FUN_1495d7e34(void)

void FUN_1495d7e34(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 *local_40;
  int local_30;
  undefined1 local_2a;
  undefined1 local_29;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = DAT_14c8464f0;
  local_28 = (undefined4)DAT_14c8464e0;
  uStack_24 = DAT_14c8464e0._4_4_;
  uStack_20 = (undefined4)DAT_14c8464e8;
  uStack_1c = DAT_14c8464e8._4_4_;
  local_29 = 0;
  local_2a = 1;
  local_30 = -1;
  if (((1 < *(int *)(param_1 + 200)) &&
      (iVar1 = *(int *)(*(longlong *)(param_1 + 0xc0) + 4), -1 < iVar1)) &&
     (local_30 = -1, iVar1 < *(int *)(param_1 + 0x3c))) {
    local_30 = iVar1;
  }
  local_40 = &local_29;
  local_48 = &local_2a;
  cVar2 = FUN_1495dbdb0();
  if (cVar2 != '\0') {
    *(undefined8 *)(param_3 + 4) = local_18;
    *param_3 = local_28;
    param_3[1] = uStack_24;
    param_3[2] = uStack_20;
    param_3[3] = uStack_1c;
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d7f04 FUN_1495d7f04 body=4 status=ok
// SIG undefined FUN_1495d7f04(void)

undefined4 FUN_1495d7f04(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



// FUNCTION 1495d7f4c FUN_1495d7f4c body=48 status=ok
// SIG undefined FUN_1495d7f4c(void)

undefined4 FUN_1495d7f4c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = 0x40;
  if ((3 < *(int *)(param_1 + 200)) &&
     (iVar1 = *(int *)(*(longlong *)(param_1 + 0xc0) + 0xc), -1 < iVar1)) {
    lVar2 = (ulonglong)(*(int *)(param_1 + 0x3c) <= iVar1) * 8 + 0x38;
  }
  return *(undefined4 *)(param_1 + lVar2);
}



// FUNCTION 1495d7f94 FUN_1495d7f94 body=4 status=ok
// SIG undefined FUN_1495d7f94(void)

undefined4 FUN_1495d7f94(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



// FUNCTION 1495d7f9e FUN_1495d7f9e body=405 status=ok
// SIG undefined FUN_1495d7f9e(void)

void FUN_1495d7f9e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
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
  local_38 = &local_30;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    local_38 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1495d8134(param_1,local_24,local_28,local_2c);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d8134 FUN_1495d8134 body=258 status=ok
// SIG undefined FUN_1495d8134(void)

undefined8
FUN_1495d8134(longlong param_1,undefined4 param_2,int param_3,undefined4 param_4,float *param_5)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 auStack_68 [32];
  uint *local_48;
  float *local_40;
  float local_2c;
  uint local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = -1;
  local_48 = &local_28;
  local_28 = 0xffffffff;
  local_40 = &local_2c;
  local_2c = 1.0;
  local_20 = param_2;
  local_1c = param_4;
  cVar2 = FUN_1495db2ee(param_1,&local_20);
  if ((((cVar2 != '\0') && (-1 < local_24)) &&
      (uVar5 = *(uint *)(param_1 + 0x38), -1 < param_3 && local_24 < (int)uVar5)) &&
     (param_3 < *(int *)(param_1 + 0x3c))) {
    uVar3 = local_24 + param_3 * uVar5;
    if ((((int)uVar3 < (int)*(uint *)(param_1 + 0x88)) && (local_28 < uVar5 && -1 < (int)local_28))
       && (uVar5 = local_28 + param_3 * uVar5, uVar5 < *(uint *)(param_1 + 0x88))) {
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x80) + (ulonglong)uVar3 * 4);
      *param_5 = (*(float *)(*(longlong *)(param_1 + 0x80) + (ulonglong)uVar5 * 4) - fVar1) *
                 local_2c + fVar1;
      uVar4 = 1;
      goto LAB_1495d8219;
    }
  }
  uVar4 = 0;
LAB_1495d8219:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d823e FUN_1495d823e body=757 status=ok
// SIG undefined FUN_1495d823e(void)

void FUN_1495d823e(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  undefined8 local_78;
  undefined1 *local_70;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_4c = 0;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  local_78 = param_1;
  local_70 = param_3;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
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
  puVar5 = *(undefined4 **)(param_2 + 0x38);
  local_54 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  puVar6 = *(undefined4 **)(param_2 + 0x38);
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
  puVar7 = *(undefined4 **)(param_2 + 0x38);
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
  puVar3 = *(undefined4 **)(param_2 + 0x38);
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
  puVar4 = *(undefined4 **)(param_2 + 0x38);
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
  local_88 = &local_60;
  if (puVar4 != (undefined4 *)0x0) {
    local_88 = puVar4;
  }
  local_90 = &local_5c;
  if (puVar3 != (undefined4 *)0x0) {
    local_90 = puVar3;
  }
  local_98 = &local_58;
  if (puVar7 != (undefined4 *)0x0) {
    local_98 = puVar7;
  }
  puVar7 = &local_54;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = puVar6;
  }
  puVar6 = &local_50;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = puVar5;
  }
  puVar5 = &local_4c;
  if (puVar2 != (undefined4 *)0x0) {
    puVar5 = puVar2;
  }
  local_80 = &local_64;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    local_80 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1495d8534(local_78,puVar5,puVar6,puVar7);
  *local_70 = 1;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d8534 FUN_1495d8534 body=349 status=ok
// SIG undefined FUN_1495d8534(void)

undefined8
FUN_1495d8534(longlong param_1,float *param_2,uint *param_3,uint *param_4,int *param_5,uint *param_6
             ,float *param_7,float *param_8)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar6 = *(uint *)(param_1 + 0x40);
  if (((int)uVar6 < 1) || (*(int *)(param_1 + 0x98) < (int)uVar6)) {
    *param_3 = 0;
    *param_4 = uVar6 - 1;
    *param_5 = uVar6 - *param_3;
  }
  else {
    uVar5 = uVar6 - 1;
    pfVar3 = *(float **)(param_1 + 0x90);
    fVar1 = *param_2;
    uVar7 = uVar5;
    if ((fVar1 < pfVar3[uVar5] || fVar1 == pfVar3[uVar5]) && (uVar7 = 0xffffffff, *pfVar3 <= fVar1))
    {
      lVar8 = 0;
      do {
        uVar7 = uVar5;
        if ((ulonglong)uVar6 - 1 == lVar8) goto LAB_1495d8597;
        lVar4 = lVar8 + 1;
        lVar8 = lVar8 + 1;
      } while (pfVar3[lVar4] <= fVar1);
      uVar7 = (int)lVar8 - 1;
    }
LAB_1495d8597:
    uVar6 = *param_6;
    if ((((int)uVar7 < (int)uVar6) || (fVar1 <= *param_7)) || (fVar1 <= *param_8)) {
      *param_6 = 0xffffffff;
      uVar6 = 0xffffffff;
    }
    if ((int)uVar7 < 0) {
      *param_6 = 0xffffffff;
      *param_3 = uVar7;
      *param_4 = uVar7;
    }
    else {
      lVar8 = 0x40;
      if ((3 < *(int *)(param_1 + 200)) &&
         (iVar2 = *(int *)(*(longlong *)(param_1 + 0xc0) + 0xc), -1 < iVar2)) {
        lVar8 = (ulonglong)(*(int *)(param_1 + 0x3c) <= iVar2) * 8 + 0x38;
      }
      uVar7 = uVar7 - (*(int *)(param_1 + lVar8) <= (int)uVar7);
      if (uVar7 != uVar6) {
        *param_3 = uVar6 + 1;
        *param_4 = uVar7;
        *param_5 = (uVar7 - *param_3) + 1;
        *param_6 = *param_4;
        *param_7 = *param_2;
        goto LAB_1495d8568;
      }
      *param_3 = uVar6;
      *param_4 = uVar6;
    }
    *param_5 = 0;
  }
LAB_1495d8568:
  *param_8 = *param_2;
  return 1;
}



// FUNCTION 1495d8698 FUN_1495d8698 body=405 status=ok
// SIG undefined FUN_1495d8698(void)

void FUN_1495d8698(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
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
  local_38 = &local_30;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    local_38 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1495d882e(param_1,local_24,local_28,local_2c);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d882e FUN_1495d882e body=216 status=ok
// SIG undefined FUN_1495d882e(void)

undefined8
FUN_1495d882e(longlong param_1,undefined4 param_2,int param_3,undefined4 param_4,int *param_5)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined1 *local_40;
  undefined1 local_2c [4];
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = -1;
  local_48 = &local_28;
  local_28 = 0xffffffff;
  local_40 = local_2c;
  local_20 = param_2;
  local_1c = param_4;
  cVar2 = FUN_1495db2ee(param_1,&local_20);
  if ((((cVar2 == '\0') || (local_24 < 0)) || (param_3 < 0 || *(int *)(param_1 + 0x38) <= local_24))
     || ((*(int *)(param_1 + 0x3c) <= param_3 ||
         (uVar3 = *(int *)(param_1 + 0x38) * param_3 + local_24,
         *(int *)(param_1 + 0x88) <= (int)uVar3)))) {
    uVar5 = 0;
  }
  else {
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x80) + (ulonglong)uVar3 * 4);
    iVar4 = (int)ROUND(fVar1 + fVar1 + -0.5);
    *param_5 = iVar4 >> 1;
    uVar5 = CONCAT71((uint7)(uint3)(iVar4 >> 9),1);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d890e FUN_1495d890e body=327 status=ok
// SIG undefined FUN_1495d890e(void)

void FUN_1495d890e(longlong param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  piVar4 = &local_34;
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar4 = *(int **)(param_2 + 0x38);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = *piVar4;
  uVar5 = 0xbf800000;
  if (((longlong)iVar1 < 0) || (*(int *)(param_1 + 0xa8) <= iVar1)) {
    uVar2 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar1 * 4);
    uVar2 = 1;
  }
  puVar3 = &local_38;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  *puVar3 = uVar5;
  *param_3 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d8a56 FUN_1495d8a56 body=48 status=ok
// SIG undefined FUN_1495d8a56(void)

undefined8 FUN_1495d8a56(longlong param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  iVar1 = *param_2;
  uVar3 = 0xbf800000;
  if (((longlong)iVar1 < 0) || (*(int *)(param_1 + 0xa8) <= iVar1)) {
    uVar2 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar1 * 4);
    uVar2 = CONCAT71((int7)(int3)((uint)iVar1 >> 8),1);
  }
  *param_3 = uVar3;
  return uVar2;
}



// FUNCTION 1495d8a8c FUN_1495d8a8c body=414 status=ok
// SIG undefined FUN_1495d8a8c(void)

void FUN_1495d8a8c(longlong param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  piVar4 = &local_34;
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar4 = *(int **)(param_2 + 0x38);
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
  local_3c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = *piVar4;
  uVar5 = 0xbf800000;
  if ((((longlong)iVar1 < 0) || (*(int *)(param_1 + 0x98) <= iVar1)) ||
     (*(int *)(param_1 + 0xa8) <= iVar1)) {
    uVar2 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar1 * 4);
    uVar2 = 1;
  }
  puVar3 = &local_3c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  *puVar3 = uVar5;
  *param_3 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d8c2c FUN_1495d8c2c body=56 status=ok
// SIG undefined FUN_1495d8c2c(void)

undefined8 FUN_1495d8c2c(longlong param_1,int *param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  iVar1 = *param_2;
  uVar3 = 0xbf800000;
  if ((((longlong)iVar1 < 0) || (*(int *)(param_1 + 0x98) <= iVar1)) ||
     (*(int *)(param_1 + 0xa8) <= iVar1)) {
    uVar2 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar1 * 4);
    uVar2 = CONCAT71((int7)(int3)((uint)iVar1 >> 8),1);
  }
  *param_4 = uVar3;
  return uVar2;
}



// FUNCTION 1495d8c6a FUN_1495d8c6a body=359 status=ok
// SIG undefined FUN_1495d8c6a(void)

void FUN_1495d8c6a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
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
  puVar3 = *(undefined4 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar4 = &local_40;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = puVar3;
  }
  puVar3 = &local_3c;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  puVar5 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1495d8dd2(param_1,puVar3,puVar4,puVar5);
  *param_3 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d8dd2 FUN_1495d8dd2 body=163 status=ok
// SIG undefined FUN_1495d8dd2(void)

void FUN_1495d8dd2(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = DAT_14c8464f0;
  local_28 = (undefined4)DAT_14c8464e0;
  uStack_24 = DAT_14c8464e0._4_4_;
  uStack_20 = (undefined4)DAT_14c8464e8;
  uStack_1c = DAT_14c8464e8._4_4_;
  iVar3 = -1;
  if (((0 < *(int *)(param_1 + 200)) && (iVar1 = **(int **)(param_1 + 0xc0), -1 < iVar1)) &&
     (iVar3 = -1, iVar1 < *(int *)(param_1 + 0x3c))) {
    iVar3 = iVar1;
  }
  local_38 = 1;
  local_40 = 1;
  local_48 = &local_28;
  cVar2 = FUN_1495da4a6((undefined4)DAT_14c8464e0,*param_2,iVar3,*param_3);
  if (cVar2 != '\0') {
    *(undefined8 *)(param_4 + 4) = local_18;
    *param_4 = local_28;
    param_4[1] = uStack_24;
    param_4[2] = uStack_20;
    param_4[3] = uStack_1c;
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d8e82 FUN_1495d8e82 body=482 status=ok
// SIG undefined FUN_1495d8e82(void)

void FUN_1495d8e82(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined1 local_70;
  int local_5c;
  undefined1 local_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
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
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_5c != 0;
  local_78 = local_58;
  if (puVar1 != (undefined1 *)0x0) {
    local_78 = puVar1;
  }
  uVar2 = FUN_1495d9066(param_1,local_2c,local_30,local_34);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d9066 FUN_1495d9066 body=399 status=ok
// SIG undefined FUN_1495d9066(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1495d9066(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             ulonglong *param_5,undefined1 param_6)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar6;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_c8 [32];
  float *local_a8;
  float *local_a0;
  undefined1 local_98 [32];
  undefined1 local_78 [36];
  float local_54 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_39;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_39 = param_6;
  local_54[2] = -NAN;
  local_a8 = local_54 + 1;
  local_54[1] = -NAN;
  local_a0 = local_54;
  local_54[0] = 1.0;
  local_54[3] = (float)param_2;
  local_44 = param_3;
  local_40 = param_4;
  cVar1 = FUN_1495db2ee(param_1,local_54 + 3,&local_40);
  if (cVar1 != '\0') {
    local_a8 = (float *)&local_39;
    cVar1 = FUN_1495dad00(param_1,local_54 + 2,&local_44,local_78);
    if (cVar1 != '\0') {
      local_a8 = (float *)&local_39;
      cVar1 = FUN_1495dad00(param_1,local_54 + 1,&local_44,local_98);
      if (cVar1 != '\0') {
        FUN_144a44da6(&local_38,local_78,local_98,(double)local_54[0]);
        dVar3 = local_28 * local_28 + local_38 * local_38;
        dVar6 = dStack_20 * dStack_20 + dStack_30 * dStack_30;
        auVar4._0_8_ = dVar3 + dVar6;
        auVar4._8_8_ = dVar3 + dVar6;
        auVar5 = sqrtpd(auVar4,auVar4);
        auVar7 = divpd(_DAT_149934d80,auVar5);
        auVar8._0_8_ = auVar7._0_8_ * local_28;
        auVar8._8_8_ = auVar7._8_8_ * dStack_20;
        auVar5._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar4._8_8_);
        auVar5._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar4._0_8_);
        auVar5 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar8,auVar5);
        *param_5 = (ulonglong)(local_38 * auVar7._0_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar4._0_8_);
        param_5[1] = (ulonglong)(dStack_30 * auVar7._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar4._8_8_);
        *(undefined1 (*) [16])(param_5 + 2) = auVar5;
        uVar2 = 1;
        goto LAB_1495d90ee;
      }
    }
  }
  uVar2 = 0;
LAB_1495d90ee:
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d9202 FUN_1495d9202 body=584 status=ok
// SIG undefined FUN_1495d9202(void)

void FUN_1495d9202(longlong param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined1 local_a0;
  int local_8c;
  undefined1 local_88 [44];
  undefined4 local_5c;
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
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
  local_5c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
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
  puVar6 = local_88;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  local_8c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  uVar3 = local_48;
  uVar2 = local_5c;
  iVar1 = local_8c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_44 = 0xffffffff;
  cVar4 = FUN_1495d6f70(local_58,param_1 + 0x68);
  if (cVar4 == '\0') {
    uVar5 = 0;
  }
  else {
    local_a0 = iVar1 != 0;
    local_a8 = puVar6;
    uVar5 = FUN_1495d9066(param_1,uVar3,local_44,uVar2);
  }
  *param_3 = uVar5;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d944c FUN_1495d944c body=120 status=ok
// SIG undefined FUN_1495d944c(void)

undefined8 FUN_1495d944c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0xffffffff;
  cVar1 = FUN_1495d6f70(param_3,param_1 + 0x68);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d94e8 FUN_1495d94e8 body=321 status=ok
// SIG undefined FUN_1495d94e8(void)

void FUN_1495d94e8(longlong param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  piVar5 = &local_34;
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar5 = *(int **)(param_2 + 0x38);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = *piVar5;
  uVar2 = 0xffffffff;
  if (((longlong)iVar1 < 0) || (*(int *)(param_1 + 0xb8) <= iVar1)) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar1 * 4);
    uVar3 = 1;
  }
  puVar4 = &local_38;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *puVar4 = uVar2;
  *param_3 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d962a FUN_1495d962a body=41 status=ok
// SIG undefined FUN_1495d962a(void)

undefined8 FUN_1495d962a(longlong param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  iVar1 = *param_2;
  uVar3 = 0xffffffff;
  if (((longlong)iVar1 < 0) || (*(int *)(param_1 + 0xb8) <= iVar1)) {
    uVar2 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar1 * 4);
    uVar2 = CONCAT71((int7)(int3)((uint)iVar1 >> 8),1);
  }
  *param_3 = uVar3;
  return uVar2;
}



// FUNCTION 1495d967a FUN_1495d967a body=464 status=ok
// SIG undefined FUN_1495d967a(void)

void FUN_1495d967a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  puVar2 = *(undefined4 **)(param_2 + 0x38);
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
  puVar5 = *(undefined4 **)(param_2 + 0x38);
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
  puVar6 = &local_4c;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = puVar5;
  }
  puVar5 = &local_48;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = puVar4;
  }
  puVar4 = &local_44;
  if (puVar2 != (undefined4 *)0x0) {
    puVar4 = puVar2;
  }
  local_58 = &local_50;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    local_58 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = FUN_1495d984c(param_1,puVar4,puVar5,puVar6);
  *param_3 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d984c FUN_1495d984c body=244 status=ok
// SIG undefined FUN_1495d984c(void)

undefined8
FUN_1495d984c(longlong param_1,undefined8 param_2,int *param_3,undefined8 param_4,float *param_5)

{
  float fVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auStack_58 [32];
  uint *local_38;
  float *local_30;
  float local_24;
  uint local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = -1;
  local_38 = &local_20;
  local_20 = 0xffffffff;
  local_30 = &local_24;
  local_24 = 1.0;
  cVar3 = FUN_1495db2ee(param_1,param_2,param_4);
  if ((((cVar3 != '\0') && (-1 < local_1c)) &&
      (uVar6 = *(uint *)(param_1 + 0x38), local_1c < (int)uVar6)) &&
     ((iVar2 = *param_3, -1 < iVar2 && (iVar2 < *(int *)(param_1 + 0x3c))))) {
    uVar4 = local_1c + iVar2 * uVar6;
    if (((int)uVar4 < (int)*(uint *)(param_1 + 0x88)) &&
       ((local_20 < uVar6 && -1 < (int)local_20 &&
        (uVar6 = local_20 + iVar2 * uVar6, uVar6 < *(uint *)(param_1 + 0x88))))) {
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x80) + (ulonglong)uVar4 * 4);
      *param_5 = (*(float *)(*(longlong *)(param_1 + 0x80) + (ulonglong)uVar6 * 4) - fVar1) *
                 local_24 + fVar1;
      uVar5 = 1;
      goto LAB_1495d9923;
    }
  }
  uVar5 = 0;
LAB_1495d9923:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d9948 FUN_1495d9948 body=504 status=ok
// SIG undefined FUN_1495d9948(void)

void FUN_1495d9948(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58 [3];
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  puVar4 = &local_40;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
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
  local_5c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  puVar5 = &local_5c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar5 = *(undefined4 **)(param_2 + 0x38);
  }
  local_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_3c = 0xffffffff;
  cVar2 = FUN_1495d6f70(local_58,param_1 + 0x68);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    local_68 = &local_60;
    if (puVar1 != (undefined4 *)0x0) {
      local_68 = puVar1;
    }
    uVar3 = FUN_1495d984c(param_1,puVar4,&local_3c,puVar5);
  }
  *param_3 = uVar3;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d9b42 FUN_1495d9b42 body=128 status=ok
// SIG undefined FUN_1495d9b42(void)

undefined8
FUN_1495d9b42(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0xffffffff;
  cVar1 = FUN_1495d6f70(param_3,param_1 + 0x68);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    local_38 = param_5;
    uVar2 = FUN_1495d984c(param_1,param_2,&local_24,param_4);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d9be4 FUN_1495d9be4 body=95 status=ok
// SIG undefined FUN_1495d9be4(void)

undefined8 * FUN_1495d9be4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145da8853(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1495ddc46(param_1,iVar1);
      FUN_1495ddca8(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1495d9c4a FUN_1495d9c4a body=426 status=ok
// SIG undefined FUN_1495d9c4a(void)

void FUN_1495d9c4a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
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
  local_68 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    local_68 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1495d9df6(param_1,local_24,local_28,local_2c);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d9df6 FUN_1495d9df6 body=463 status=ok
// SIG undefined FUN_1495d9df6(void)

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_1495d9df6(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             double *param_5)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [32];
  float *local_b8;
  float *local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  double local_70;
  float local_68 [4];
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_68[2] = -NAN;
  local_b8 = local_68 + 1;
  local_68[1] = -NAN;
  local_b0 = local_68;
  local_68[0] = 1.0;
  local_68[3] = (float)param_2;
  local_58 = param_3;
  local_54 = param_4;
  cVar2 = FUN_1495db2ee(param_1,local_68 + 3,&local_54);
  if (cVar2 != '\0') {
    local_88 = 0.0;
    dStack_80 = 0.0;
    uVar3 = 0;
    local_78 = 0.0;
    local_70 = 1.0;
    local_98 = 0.0;
    local_a8 = 0.0;
    dStack_a0 = 0.0;
    local_90 = 1.0;
    cVar2 = FUN_1495db898(param_1,local_68 + 2,&local_58);
    if (cVar2 == '\0') goto LAB_1495d9e88;
    cVar2 = FUN_1495db898(param_1,local_68 + 1,&local_58,&local_a8);
    if (cVar2 != '\0') {
      dVar1 = (double)local_68[0];
      *param_5 = (local_a8 - local_88) * dVar1 + local_88;
      param_5[1] = (dStack_a0 - dStack_80) * dVar1 + dStack_80;
      param_5[2] = (local_98 - local_78) * dVar1 + local_78;
      param_5[3] = (local_90 - local_70) * dVar1 + local_70;
      uVar3 = 1;
      goto LAB_1495d9e88;
    }
  }
  uVar3 = 0;
LAB_1495d9e88:
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d9fcc FUN_1495d9fcc body=506 status=ok
// SIG undefined FUN_1495d9fcc(void)

void FUN_1495d9fcc(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_5c;
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
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
  local_5c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
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
  uVar3 = local_48;
  uVar2 = local_5c;
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_44 = 0xffffffff;
  cVar4 = FUN_1495d6f70(local_58,param_1 + 0x68);
  if (cVar4 == '\0') {
    uVar5 = 0;
  }
  else {
    local_98 = &local_88;
    if (puVar1 != (undefined8 *)0x0) {
      local_98 = puVar1;
    }
    uVar5 = FUN_1495d9df6(param_1,uVar3,local_44,uVar2);
  }
  *param_3 = uVar5;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495da1c8 FUN_1495da1c8 body=120 status=ok
// SIG undefined FUN_1495da1c8(void)

undefined8 FUN_1495da1c8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0xffffffff;
  cVar1 = FUN_1495d6f70(param_3,param_1 + 0x68);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495da270 FUN_1495da270 body=565 status=ok
// SIG undefined FUN_1495da270(void)

void FUN_1495da270(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined1 local_70;
  undefined1 local_68;
  int local_60;
  int local_5c;
  undefined1 local_58 [28];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a7452c();
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  iVar2 = local_5c;
  local_60 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_60 != 0;
  local_78 = local_58;
  if (puVar1 != (undefined1 *)0x0) {
    local_78 = puVar1;
  }
  local_70 = iVar2 != 0;
  uVar3 = FUN_1495da4a6(param_1,local_34,local_38,local_3c);
  *param_3 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495da4a6 FUN_1495da4a6 body=398 status=ok
// SIG undefined FUN_1495da4a6(void)

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_1495da4a6(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             double *param_5,undefined1 param_6,undefined1 param_7)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  float *local_98;
  float *local_90;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  float local_4c [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_32;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_31 = param_7;
  local_32 = param_6;
  local_4c[2] = -NAN;
  local_98 = local_4c + 1;
  local_4c[1] = -NAN;
  local_90 = local_4c;
  local_4c[0] = 1.0;
  local_4c[3] = (float)param_2;
  local_3c = param_3;
  local_38 = param_4;
  cVar2 = FUN_1495db2ee(param_1,local_4c + 3,&local_38);
  if (cVar2 != '\0') {
    local_98 = (float *)&local_32;
    local_90 = (float *)&local_31;
    cVar2 = FUN_1495dbdb0(param_1,local_4c + 2,&local_3c,&local_68);
    if (cVar2 != '\0') {
      local_98 = (float *)&local_32;
      local_90 = (float *)&local_31;
      cVar2 = FUN_1495dbdb0(param_1,local_4c + 1,&local_3c,&local_80);
      if (cVar2 != '\0') {
        dVar1 = (double)local_4c[0];
        *param_5 = (local_80 - local_68) * dVar1 + local_68;
        param_5[1] = (local_78 - local_60) * dVar1 + local_60;
        param_5[2] = (local_70 - local_58) * dVar1 + local_58;
        uVar3 = 1;
        goto LAB_1495da53f;
      }
    }
  }
  uVar3 = 0;
LAB_1495da53f:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495da648 FUN_1495da648 body=647 status=ok
// SIG undefined FUN_1495da648(void)

void FUN_1495da648(longlong param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  int local_90;
  int local_8c;
  undefined1 local_88 [28];
  undefined4 local_6c;
  longlong local_68 [2];
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_6c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
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
  puVar7 = local_88;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_2 + 0x38);
  }
  local_8c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  iVar2 = local_8c;
  local_90 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  uVar4 = local_58;
  uVar3 = local_6c;
  iVar1 = local_90;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_54 = 0xffffffff;
  cVar5 = FUN_1495d6f70(local_68,param_1 + 0x68);
  if (cVar5 == '\0') {
    uVar6 = 0;
  }
  else {
    local_98 = iVar1 != 0;
    local_a0 = iVar2 != 0;
    local_a8 = puVar7;
    uVar6 = FUN_1495da4a6(param_1,uVar4,local_54,uVar3);
  }
  *param_3 = uVar6;
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495da8d0 FUN_1495da8d0 body=120 status=ok
// SIG undefined FUN_1495da8d0(void)

undefined8 FUN_1495da8d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0xffffffff;
  cVar1 = FUN_1495d6f70(param_3,param_1 + 0x68);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495da96c FUN_1495da96c body=267 status=ok
// SIG undefined FUN_1495da96c(void)

void FUN_1495da96c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [40];
  undefined1 local_50 [28];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar3 = &local_34;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  puVar4 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1495daa78(param_1,puVar3,puVar4);
  *param_3 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495daa78 FUN_1495daa78 body=181 status=ok
// SIG undefined FUN_1495daa78(void)

void FUN_1495daa78(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 *local_40;
  int local_30;
  undefined1 local_2a;
  undefined1 local_29;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = DAT_14c8464f0;
  local_28 = (undefined4)DAT_14c8464e0;
  uStack_24 = DAT_14c8464e0._4_4_;
  uStack_20 = (undefined4)DAT_14c8464e8;
  uStack_1c = DAT_14c8464e8._4_4_;
  local_29 = 1;
  local_2a = 1;
  local_30 = -1;
  if (((0 < *(int *)(param_1 + 200)) && (iVar1 = **(int **)(param_1 + 0xc0), -1 < iVar1)) &&
     (local_30 = -1, iVar1 < *(int *)(param_1 + 0x3c))) {
    local_30 = iVar1;
  }
  local_40 = &local_29;
  local_48 = &local_2a;
  cVar2 = FUN_1495dbdb0();
  if (cVar2 != '\0') {
    *(undefined8 *)(param_3 + 4) = local_18;
    *param_3 = local_28;
    param_3[1] = uStack_24;
    param_3[2] = uStack_20;
    param_3[3] = uStack_1c;
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495dab3a FUN_1495dab3a body=453 status=ok
// SIG undefined FUN_1495dab3a(void)

void FUN_1495dab3a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined1 local_69;
  undefined1 local_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
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
  puVar2 = *(undefined4 **)(param_2 + 0x38);
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
  puVar5 = *(undefined4 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_69 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_69);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_69);
  }
  puVar7 = local_68;
  if (puVar3 != (undefined1 *)0x0) {
    puVar7 = puVar3;
  }
  puVar6 = &local_48;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = puVar5;
  }
  puVar5 = &local_44;
  if (puVar2 != (undefined4 *)0x0) {
    puVar5 = puVar2;
  }
  local_78 = &local_69;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_78 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_1495dad00(param_1,puVar5,puVar6,puVar7);
  *param_3 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495dad00 FUN_1495dad00 body=315 status=ok
// SIG undefined FUN_1495dad00(void)

undefined8 FUN_1495dad00(longlong param_1,int *param_2,int *param_3,double *param_4,char *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  iVar5 = *param_2;
  if ((((-1 < iVar5) && (iVar6 = *(int *)(param_1 + 0x38), iVar5 < iVar6)) &&
      (iVar7 = *param_3, -1 < iVar7)) && (uVar10 = *(uint *)(param_1 + 0x3c), iVar7 < (int)uVar10))
  {
    uVar13 = iVar7 * iVar6 + iVar5;
    uVar8 = *(uint *)(param_1 + 0x88);
    if ((((((int)uVar13 < (int)uVar8) && (iVar7 + 1U < uVar10)) &&
         ((uVar14 = (iVar7 + 1U) * iVar6 + iVar5, uVar14 < uVar8 &&
          ((iVar7 + 2U < uVar10 && (uVar12 = (iVar7 + 2U) * iVar6 + iVar5, uVar12 < uVar8)))))) &&
        (iVar7 + 3U < uVar10)) && (uVar10 = (iVar7 + 3U) * iVar6 + iVar5, uVar10 < uVar8)) {
      lVar9 = *(longlong *)(param_1 + 0x80);
      fVar1 = *(float *)(lVar9 + (ulonglong)uVar13 * 4);
      fVar2 = *(float *)(lVar9 + (ulonglong)uVar14 * 4);
      fVar3 = *(float *)(lVar9 + (ulonglong)uVar12 * 4);
      fVar4 = *(float *)(lVar9 + (ulonglong)uVar10 * 4);
      *param_4 = (double)fVar1;
      param_4[1] = (double)fVar2;
      param_4[2] = (double)fVar3;
      param_4[3] = (double)fVar4;
      uVar11 = CONCAT71((uint7)(uint3)(uVar10 >> 8),1);
      if (*param_5 != '\x01') {
        return uVar11;
      }
      *param_4 = (double)-fVar1;
      param_4[1] = (double)-fVar3;
      param_4[2] = (double)-fVar2;
      return uVar11;
    }
  }
  return 0;
}



// FUNCTION 1495dae48 FUN_1495dae48 body=493 status=ok
// SIG undefined FUN_1495dae48(void)

void FUN_1495dae48(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined1 local_79;
  undefined1 local_78 [32];
  longlong local_58 [3];
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
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
  puVar4 = &local_40;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar5 = local_78;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_79 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_79);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_79);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_3c = 0xffffffff;
  cVar2 = FUN_1495d6f70(local_58,param_1 + 0x68);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    local_88 = &local_79;
    if (puVar1 != (undefined1 *)0x0) {
      local_88 = puVar1;
    }
    uVar3 = FUN_1495dad00(param_1,puVar4,&local_3c,puVar5);
  }
  *param_3 = uVar3;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495db036 FUN_1495db036 body=128 status=ok
// SIG undefined FUN_1495db036(void)

undefined8
FUN_1495db036(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0xffffffff;
  cVar1 = FUN_1495d6f70(param_3,param_1 + 0x68);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    local_38 = param_5;
    uVar2 = FUN_1495dad00(param_1,param_2,&local_24,param_4);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495db0be FUN_1495db0be body=559 status=ok
// SIG undefined FUN_1495db0be(void)

void FUN_1495db0be(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined4 *local_70;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_4c = 0;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
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
  puVar4 = *(undefined4 **)(param_2 + 0x38);
  local_54 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  puVar5 = *(undefined4 **)(param_2 + 0x38);
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
  puVar6 = *(undefined4 **)(param_2 + 0x38);
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
  local_78 = &local_58;
  if (puVar6 != (undefined4 *)0x0) {
    local_78 = puVar6;
  }
  puVar6 = &local_54;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = puVar5;
  }
  puVar5 = &local_50;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = puVar4;
  }
  puVar4 = &local_4c;
  if (puVar2 != (undefined4 *)0x0) {
    puVar4 = puVar2;
  }
  local_70 = &local_5c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    local_70 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = FUN_1495db2ee(param_1,puVar4,puVar5,puVar6);
  *param_3 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495db2ee FUN_1495db2ee body=564 status=ok
// SIG undefined FUN_1495db2ee(void)

undefined8
FUN_1495db2ee(longlong param_1,int *param_2,float *param_3,int *param_4,int *param_5,float *param_6)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_d8 [32];
  float local_b8;
  int local_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar7 = *param_2;
  if ((((-1 < (longlong)iVar7) && (iVar7 < *(int *)(param_1 + 0x40))) &&
      (iVar7 < *(int *)(param_1 + 0xd8))) &&
     (plVar4 = (longlong *)((longlong)iVar7 * 0x10 + *(longlong *)(param_1 + 0xd0)),
     plVar4 != (longlong *)0x0)) {
    lVar2 = plVar4[1];
    fVar9 = -3.4028235e+38;
    if ((longlong)(int)lVar2 != 0) {
      lVar1 = *plVar4;
      fVar10 = *param_3;
      fVar9 = -3.4028235e+38;
      lVar6 = 0;
      do {
        iVar7 = *(int *)(lVar1 + lVar6);
        local_b8 = -3.4028235e+38;
        local_b4 = iVar7;
        cVar3 = FUN_1495db67e(param_1,&local_b4,&local_b8);
        fVar8 = local_b8;
        if (cVar3 == '\0') {
          fVar8 = 0.0;
        }
        if (ABS(fVar8 - fVar10) <= 1e-08) {
          *param_4 = iVar7;
          *param_5 = iVar7;
          *param_6 = 1.0;
          goto LAB_1495db4c6;
        }
        if (fVar10 <= fVar8) {
          *param_5 = iVar7;
          goto LAB_1495db444;
        }
        if ((ABS(fVar9 + 3.4028235e+38) <= 1e-08) || (fVar9 < fVar8)) {
          *param_4 = iVar7;
          fVar10 = *param_3;
          fVar9 = fVar8;
        }
        lVar6 = lVar6 + 4;
      } while ((longlong)(int)lVar2 * 4 != lVar6);
    }
    iVar7 = *param_5;
    fVar8 = -3.4028235e+38;
LAB_1495db444:
    if ((-1 < *param_4) || (-1 < iVar7)) {
      if (*param_4 < 0) {
        *param_6 = 0.0;
        *param_4 = *param_5;
      }
      else if (iVar7 < 0) {
        *param_6 = 1.0;
        *param_5 = *param_4;
      }
      else {
        *param_6 = (*param_3 - fVar9) / (fVar8 - fVar9);
      }
LAB_1495db4c6:
      uVar5 = 1;
      goto LAB_1495db451;
    }
  }
  uVar5 = 0;
LAB_1495db451:
  if ((local_b0 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1495db56a FUN_1495db56a body=275 status=ok
// SIG undefined FUN_1495db56a(void)

void FUN_1495db56a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  uVar1 = FUN_1495db67e(param_1,puVar2,puVar3);
  *param_3 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495db67e FUN_1495db67e body=112 status=ok
// SIG undefined FUN_1495db67e(void)

undefined8 FUN_1495db67e(longlong param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  
  iVar3 = -1;
  if (((2 < *(int *)(param_1 + 200)) &&
      (iVar1 = *(int *)(*(longlong *)(param_1 + 0xc0) + 8), -1 < iVar1)) &&
     (iVar3 = -1, iVar1 < *(int *)(param_1 + 0x3c))) {
    iVar3 = iVar1;
  }
  iVar1 = *param_2;
  if (((iVar1 < 0) || (iVar3 < 0 || *(int *)(param_1 + 0x38) <= iVar1)) ||
     ((*(int *)(param_1 + 0x3c) <= iVar3 ||
      (uVar5 = *(int *)(param_1 + 0x38) * iVar3 + iVar1, *(int *)(param_1 + 0x88) <= (int)uVar5))))
  {
    uVar4 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x80);
    *param_3 = *(undefined4 *)(lVar2 + (ulonglong)uVar5 * 4);
    uVar4 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return uVar4;
}



// FUNCTION 1495db712 FUN_1495db712 body=388 status=ok
// SIG undefined FUN_1495db712(void)

void FUN_1495db712(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_3c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
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
  puVar3 = *(undefined4 **)(param_2 + 0x38);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar4 = &local_40;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = puVar3;
  }
  puVar3 = &local_3c;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  puVar5 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1495db898(param_1,puVar3,puVar4,puVar5);
  *param_3 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495db898 FUN_1495db898 body=194 status=ok
// SIG undefined FUN_1495db898(void)

undefined8 FUN_1495db898(longlong param_1,int *param_2,int *param_3,double *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  iVar4 = *param_2;
  if ((((-1 < iVar4) && (iVar5 = *(int *)(param_1 + 0x38), iVar4 < iVar5)) &&
      (iVar6 = *param_3, -1 < iVar6)) && (uVar9 = *(uint *)(param_1 + 0x3c), iVar6 < (int)uVar9)) {
    uVar11 = iVar6 * iVar5 + iVar4;
    uVar7 = *(uint *)(param_1 + 0x88);
    if ((((((int)uVar11 < (int)uVar7) && (iVar6 + 1U < uVar9)) &&
         ((uVar12 = (iVar6 + 1U) * iVar5 + iVar4, uVar12 < uVar7 &&
          ((iVar6 + 2U < uVar9 && (uVar10 = (iVar6 + 2U) * iVar5 + iVar4, uVar10 < uVar7)))))) &&
        (iVar6 + 3U < uVar9)) && (uVar9 = (iVar6 + 3U) * iVar5 + iVar4, uVar9 < uVar7)) {
      lVar8 = *(longlong *)(param_1 + 0x80);
      fVar1 = *(float *)(lVar8 + (ulonglong)uVar12 * 4);
      fVar2 = *(float *)(lVar8 + (ulonglong)uVar10 * 4);
      fVar3 = *(float *)(lVar8 + (ulonglong)uVar9 * 4);
      *param_4 = (double)*(float *)(lVar8 + (ulonglong)uVar11 * 4);
      param_4[1] = (double)fVar1;
      param_4[2] = (double)fVar2;
      param_4[3] = (double)fVar3;
      return CONCAT71((uint7)(uint3)(uVar9 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 1495db960 FUN_1495db960 body=423 status=ok
// SIG undefined FUN_1495db960(void)

void FUN_1495db960(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  puVar5 = &local_38;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar5 = *(undefined4 **)(param_2 + 0x38);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_34 = 0xffffffff;
  cVar2 = FUN_1495d6f70(local_48,param_1 + 0x68);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    puVar4 = &local_68;
    if (puVar1 != (undefined8 *)0x0) {
      puVar4 = puVar1;
    }
    uVar3 = FUN_1495db898(param_1,puVar5,&local_34,puVar4);
  }
  *param_3 = uVar3;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495dbb08 FUN_1495dbb08 body=115 status=ok
// SIG undefined FUN_1495dbb08(void)

undefined8 FUN_1495dbb08(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  cVar1 = FUN_1495d6f70(param_3,param_1 + 0x68);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1495db898(param_1,param_2,&local_24,param_4);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495dbb8e FUN_1495dbb8e body=545 status=ok
// SIG undefined FUN_1495dbb8e(void)

void FUN_1495dbb8e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_68 [24];
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_4c = 0;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
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
  puVar5 = *(undefined4 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_69 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_69);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_69);
  }
  puVar7 = *(undefined1 **)(param_2 + 0x38);
  local_6a = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6a);
  }
  local_88 = &local_69;
  if (puVar7 != (undefined1 *)0x0) {
    local_88 = puVar7;
  }
  puVar7 = local_68;
  if (puVar3 != (undefined1 *)0x0) {
    puVar7 = puVar3;
  }
  puVar6 = &local_50;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = puVar5;
  }
  puVar5 = &local_4c;
  if (puVar2 != (undefined4 *)0x0) {
    puVar5 = puVar2;
  }
  local_80 = &local_6a;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_80 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_1495dbdb0(param_1,puVar5,puVar6,puVar7);
  *param_3 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495dbdb0 FUN_1495dbdb0 body=245 status=ok
// SIG undefined FUN_1495dbdb0(void)

undefined8
FUN_1495dbdb0(longlong param_1,int *param_2,int *param_3,double *param_4,char *param_5,char *param_6
             )

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar1 = *param_2;
  if ((((-1 < iVar1) && (iVar2 = *(int *)(param_1 + 0x38), iVar1 < iVar2)) &&
      (iVar3 = *param_3, -1 < iVar3)) && (uVar6 = *(uint *)(param_1 + 0x3c), iVar3 < (int)uVar6)) {
    uVar8 = iVar3 * iVar2 + iVar1;
    uVar4 = *(uint *)(param_1 + 0x88);
    if ((((int)uVar8 < (int)uVar4) && (iVar3 + 1U < uVar6)) &&
       ((uVar9 = (iVar3 + 1U) * iVar2 + iVar1, uVar9 < uVar4 &&
        ((iVar3 + 2U < uVar6 && (uVar6 = (iVar3 + 2U) * iVar2 + iVar1, uVar6 < uVar4)))))) {
      lVar5 = *(longlong *)(param_1 + 0x80);
      fVar10 = *(float *)(lVar5 + (ulonglong)uVar8 * 4);
      fVar11 = *(float *)(lVar5 + (ulonglong)uVar9 * 4);
      fVar12 = *(float *)(lVar5 + (ulonglong)uVar6 * 4);
      if (*param_6 != '\0') {
        fVar10 = fVar10 * 100.0;
        fVar11 = fVar11 * 100.0;
        fVar12 = fVar12 * 100.0;
      }
      *param_4 = (double)fVar10;
      param_4[1] = (double)fVar11;
      param_4[2] = (double)fVar12;
      uVar7 = CONCAT71((uint7)(uint3)(uVar6 >> 8),1);
      if (*param_5 != '\x01') {
        return uVar7;
      }
      param_4[1] = (double)fVar12;
      param_4[2] = (double)fVar11;
      return uVar7;
    }
  }
  return 0;
}



// FUNCTION 1495dbeb8 FUN_1495dbeb8 body=588 status=ok
// SIG undefined FUN_1495dbeb8(void)

void FUN_1495dbeb8(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70 [24];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
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
  puVar1 = (undefined8 *)(param_2 + 0x38);
  puVar6 = &local_48;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar6 = *(undefined4 **)(param_2 + 0x38);
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
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  puVar7 = local_70;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_2 + 0x38);
  }
  local_71 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_71);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_71);
  }
  puVar5 = &local_71;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_72 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_72);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_72);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_44 = 0xffffffff;
  cVar3 = FUN_1495d6f70(local_58,param_1 + 0x68);
  if (cVar3 == '\0') {
    uVar4 = 0;
  }
  else {
    local_80 = &local_72;
    if (puVar2 != (undefined1 *)0x0) {
      local_80 = puVar2;
    }
    local_88 = puVar5;
    uVar4 = FUN_1495dbdb0(param_1,puVar6,&local_44,puVar7);
  }
  *param_3 = uVar4;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495dc106 FUN_1495dc106 body=141 status=ok
// SIG undefined FUN_1495dc106(void)

undefined8
FUN_1495dc106(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0xffffffff;
  cVar1 = FUN_1495d6f70(param_3,param_1 + 0x68);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    local_30 = param_6;
    local_38 = param_5;
    uVar2 = FUN_1495dbdb0(param_1,param_2,&local_24,param_4);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495dc19a FUN_1495dc19a body=267 status=ok
// SIG undefined FUN_1495dc19a(void)

void FUN_1495dc19a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [40];
  undefined1 local_50 [28];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar3 = &local_34;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  puVar4 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1495dc2a6(param_1,puVar3,puVar4);
  *param_3 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495dc2a6 FUN_1495dc2a6 body=182 status=ok
// SIG undefined FUN_1495dc2a6(void)

void FUN_1495dc2a6(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 *local_40;
  int local_30;
  undefined1 local_2a;
  undefined1 local_29;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = DAT_14c8464f0;
  local_28 = (undefined4)DAT_14c8464e0;
  uStack_24 = DAT_14c8464e0._4_4_;
  uStack_20 = (undefined4)DAT_14c8464e8;
  uStack_1c = DAT_14c8464e8._4_4_;
  local_29 = 0;
  local_2a = 1;
  local_30 = -1;
  if (((7 < *(int *)(param_1 + 200)) &&
      (iVar1 = *(int *)(*(longlong *)(param_1 + 0xc0) + 0x1c), -1 < iVar1)) &&
     (local_30 = -1, iVar1 < *(int *)(param_1 + 0x3c))) {
    local_30 = iVar1;
  }
  local_40 = &local_29;
  local_48 = &local_2a;
  cVar2 = FUN_1495dbdb0();
  if (cVar2 != '\0') {
    *(undefined8 *)(param_3 + 4) = local_18;
    *param_3 = local_28;
    param_3[1] = uStack_24;
    param_3[2] = uStack_20;
    param_3[3] = uStack_1c;
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495dc362 FUN_1495dc362 body=154 status=ok
// SIG undefined FUN_1495dc362(void)

void FUN_1495dc362(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0xe0) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495dc410 FUN_1495dc410 body=43 status=ok
// SIG undefined FUN_1495dc410(void)

int FUN_1495dc410(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  iVar2 = -1;
  if ((((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 200))) &&
      (iVar1 = *(int *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar1 * 4), -1 < iVar1)) &&
     (iVar2 = -1, iVar1 < *(int *)(param_1 + 0x3c))) {
    iVar2 = iVar1;
  }
  return iVar2;
}



// FUNCTION 1495dc43c FUN_1495dc43c body=221 status=ok
// SIG undefined FUN_1495dc43c(void)

int FUN_1495dc43c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0xd8);
  if ((longlong)iVar1 == 0) {
    iVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0xd0);
    lVar6 = 0;
    iVar3 = 0;
    do {
      local_58 = (void *)0x0;
      local_50 = *(int *)(lVar2 + 8 + lVar6);
      lVar5 = (longlong)local_50;
      _Src = *(void **)(lVar2 + lVar6);
      if (lVar5 == 0) {
        if (iVar3 < 1) {
          iVar3 = 0;
        }
      }
      else {
        FUN_144a06ca8(&local_58,local_50,0);
        memcpy(local_58,_Src,lVar5 << 2);
        iVar4 = local_50;
        if (local_50 < iVar3) {
          iVar4 = iVar3;
        }
        iVar3 = iVar4;
        if (local_58 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 1495dc51a FUN_1495dc51a body=2981 status=ok
// SIG undefined FUN_1495dc51a(void)

void FUN_1495dc51a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  float fVar9;
  undefined1 auStack_338 [40];
  longlong local_310;
  undefined8 local_308;
  undefined1 local_300 [8];
  undefined8 local_2f8;
  undefined8 local_2f0;
  void *local_2e8;
  int local_2e0;
  undefined4 local_2dc;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  void *local_2c0;
  int local_2b8;
  undefined4 local_2b4;
  undefined8 local_2b0;
  longlong local_2a8 [4];
  longlong local_288 [2];
  longlong local_278 [2];
  void *local_268;
  ulonglong uStack_260;
  undefined8 local_250;
  undefined8 local_248;
  void *local_240;
  int local_238;
  undefined4 local_234;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_338;
  FUN_1446ddc76(&local_88,"Source FileName",1);
  local_80 = local_88;
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_1 + 0x30);
  lVar6 = (longlong)local_70;
  pvVar2 = *(void **)(param_1 + 0x28);
  local_310 = param_1;
  if (lVar6 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,pvVar2,lVar6 * 2);
  }
  local_68 = 1;
  FUN_1407c67d8(param_2);
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  FUN_144a83b10(&local_b8,*(undefined4 *)(local_310 + 0x38));
  FUN_1446ddc76(&local_c0,"Number of Samples",1);
  local_a8 = local_c0;
  local_a0 = (undefined4)local_b8;
  uStack_9c = local_b8._4_4_;
  uStack_98 = (int)uStack_b0;
  uStack_94 = uStack_b0._4_4_;
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  local_90 = 2;
  FUN_1407c67d8(param_2);
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  FUN_144a83b10(&local_b8,*(undefined4 *)(local_310 + 0x3c));
  FUN_1446ddc76(&local_e8,"Number of Attributes",1);
  local_e0 = local_e8;
  local_d8 = (undefined4)local_b8;
  uStack_d4 = local_b8._4_4_;
  uStack_d0 = (int)uStack_b0;
  uStack_cc = uStack_b0._4_4_;
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  local_c8 = 2;
  FUN_1407c67d8(param_2);
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  FUN_144a83b10(&local_b8,*(undefined4 *)(local_310 + 0x40));
  FUN_1446ddc76(&local_110,"Number of Points",1);
  local_108 = local_110;
  local_100 = (undefined4)local_b8;
  uStack_fc = local_b8._4_4_;
  uStack_f8 = (int)uStack_b0;
  uStack_f4 = uStack_b0._4_4_;
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  local_f0 = 2;
  FUN_1407c67d8(param_2);
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  FUN_144a83b10(&local_b8,*(undefined4 *)(local_310 + 0x44));
  FUN_1446ddc76(&local_138,"Number of Frames (as exported)",1);
  local_130 = local_138;
  local_128 = (undefined4)local_b8;
  uStack_124 = local_b8._4_4_;
  uStack_120 = (int)uStack_b0;
  uStack_11c = uStack_b0._4_4_;
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  local_118 = 2;
  FUN_1407c67d8(param_2);
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  FUN_144a83b10(&local_b8,(int)*(float *)(local_310 + 0x48));
  FUN_1446ddc76(&local_160,"First Frame (as exported)",1);
  local_158 = local_160;
  local_150 = (undefined4)local_b8;
  uStack_14c = local_b8._4_4_;
  uStack_148 = (int)uStack_b0;
  uStack_144 = uStack_b0._4_4_;
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  local_140 = 2;
  FUN_1407c67d8(param_2);
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  FUN_144a83b10(&local_b8,(int)*(float *)(local_310 + 0x4c));
  FUN_1446ddc76(&local_188,"Last Frame (as exported)",1);
  local_180 = local_188;
  local_178 = (undefined4)local_b8;
  uStack_174 = local_b8._4_4_;
  uStack_170 = (int)uStack_b0;
  uStack_16c = uStack_b0._4_4_;
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  local_168 = 2;
  FUN_1407c67d8(param_2);
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_b8,L"%.4f",(double)*(float *)(local_310 + 0x50));
  FUN_1446ddc76(&local_1b0,"Minimum Sample Time (seconds)",1);
  local_1a8 = local_1b0;
  local_1a0 = (undefined4)local_b8;
  uStack_19c = local_b8._4_4_;
  uStack_198 = (int)uStack_b0;
  uStack_194 = uStack_b0._4_4_;
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  local_190 = 2;
  FUN_1407c67d8(param_2);
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_b8,L"%.4f",(double)*(float *)(local_310 + 0x54));
  FUN_1446ddc76(&local_1d8,"Maximum Sample Time (seconds)",1);
  local_1d0 = local_1d8;
  local_1c8 = (undefined4)local_b8;
  uStack_1c4 = local_b8._4_4_;
  uStack_1c0 = (int)uStack_b0;
  uStack_1bc = uStack_b0._4_4_;
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  local_1b8 = 2;
  FUN_1407c67d8(param_2);
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*(int *)(local_310 + 0x98) < 1) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = **(float **)(local_310 + 0x90);
  }
  FUN_140002266(&local_b8,L"%.4f",(double)fVar9);
  FUN_1446ddc76(&local_200,"Minimum Spawn Time (seconds)",1);
  local_1f8 = local_200;
  local_1f0 = (longlong)local_b8;
  uStack_1e8 = uStack_b0;
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  local_1e0 = 2;
  FUN_1407c67d8(param_2);
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((longlong)*(int *)(local_310 + 0x98) < 1) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = *(float *)(*(longlong *)(local_310 + 0x90) + -4 +
                      (longlong)*(int *)(local_310 + 0x98) * 4);
  }
  FUN_140002266(&local_b8,L"%.4f",(double)fVar9);
  FUN_1446ddc76(&local_228,"Maximum Spawn Time (seconds)",1);
  local_220 = local_228;
  local_218 = (longlong)local_b8;
  uStack_210 = uStack_b0;
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  local_208 = 2;
  FUN_1407c67d8(param_2);
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1446ddc76(&local_250,"Original Title Row",1);
  local_248 = local_250;
  local_240 = (void *)0x0;
  local_238 = *(int *)(local_310 + 0x60);
  lVar6 = (longlong)local_238;
  pvVar2 = *(void **)(local_310 + 0x58);
  if (lVar6 == 0) {
    local_234 = 0;
  }
  else {
    FUN_1446dd670(&local_240,local_238,0);
    memcpy(local_240,pvVar2,lVar6 * 2);
  }
  local_230 = 1;
  local_308 = param_2;
  FUN_1407c67d8(param_2);
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  if (0 < *(int *)(local_310 + 0x70)) {
    lVar7 = 0;
    uVar8 = 0;
    lVar6 = local_310;
    do {
      lVar6 = *(longlong *)(lVar6 + 0x68);
      local_2a8[0] = 0;
      local_2a8[1] = 0;
      FUN_144a83b10(local_2a8,uVar8 & 0xffffffff);
      FUN_140ba7826(local_2a8 + 2,&DAT_149e06140,local_2a8);
      FUN_144a882a8(local_288,local_2a8 + 2,&DAT_14aaf97b8);
      FUN_144a7dea0(local_278,local_288,lVar6 + lVar7);
      FUN_144a882a8(&local_268,local_278,&DAT_149e001d8);
      iVar4 = (int)uStack_260 + -1;
      if ((int)uStack_260 == 0) {
        iVar4 = 0;
      }
      FUN_1400020e8(&local_b8,local_268,iVar4);
      if (local_268 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_278[0] != 0) {
        FUN_1400020a8();
      }
      lVar6 = local_310;
      if (local_288[0] != 0) {
        FUN_1400020a8();
      }
      if (local_2a8[2] != 0) {
        FUN_1400020a8();
      }
      if (local_2a8[0] != 0) {
        FUN_1400020a8();
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((longlong)uVar8 < (longlong)*(int *)(lVar6 + 0x70));
  }
  FUN_1446ddc76(&local_2d0,"Parsed Attribute Names",1);
  pvVar2 = local_b8;
  local_2c8 = local_2d0;
  local_2c0 = (void *)0x0;
  lVar6 = (longlong)(int)uStack_b0;
  local_2b8 = (int)uStack_b0;
  if (lVar6 == 0) {
    local_2b4 = 0;
  }
  else {
    FUN_1446dd670(&local_2c0,uStack_b0 & 0xffffffff,0);
    memcpy(local_2c0,pvVar2,lVar6 * 2);
  }
  uVar3 = local_308;
  local_2b0 = 1;
  FUN_1407c67d8(local_308);
  lVar6 = local_310;
  local_268 = (void *)0x0;
  uStack_260 = 0;
  iVar4 = *(int *)(local_310 + 200);
  if (iVar4 < 4) {
LAB_1495dcd80:
    if (iVar4 < 1) goto LAB_1495dcf7c;
    piVar5 = *(int **)(lVar6 + 0xc0);
  }
  else {
    iVar1 = *(int *)(*(longlong *)(local_310 + 0xc0) + 0xc);
    if ((-1 < iVar1) && (iVar1 < *(int *)(local_310 + 0x3c))) {
      FUN_1400020e8(&local_268,&DAT_14bd53a5a,3);
      iVar4 = *(int *)(lVar6 + 200);
    }
    if (iVar4 < 9) goto LAB_1495dcd80;
    piVar5 = *(int **)(lVar6 + 0xc0);
    if ((-1 < piVar5[8]) && (piVar5[8] < *(int *)(lVar6 + 0x3c))) {
      FUN_1400020e8(&local_268,L"Type ",5);
      iVar4 = *(int *)(lVar6 + 200);
      goto LAB_1495dcd80;
    }
  }
  if ((-1 < *piVar5) && (*piVar5 < *(int *)(lVar6 + 0x3c))) {
    FUN_1400020e8(&local_268,L"Position ",9);
    iVar4 = *(int *)(lVar6 + 200);
  }
  if (iVar4 < 2) goto LAB_1495dcf7c;
  iVar1 = *(int *)(*(longlong *)(lVar6 + 0xc0) + 4);
  if ((-1 < iVar1) && (iVar1 < *(int *)(lVar6 + 0x3c))) {
    FUN_1400020e8(&local_268,L"Normal ",7);
    iVar4 = *(int *)(lVar6 + 200);
  }
  if (iVar4 < 10) {
LAB_1495dce2e:
    if (7 < iVar4) {
      lVar7 = *(longlong *)(lVar6 + 0xc0);
      goto LAB_1495dce3a;
    }
LAB_1495dce66:
    if (iVar4 < 3) goto LAB_1495dcf7c;
    lVar7 = *(longlong *)(lVar6 + 0xc0);
  }
  else {
    lVar7 = *(longlong *)(lVar6 + 0xc0);
    if ((-1 < *(int *)(lVar7 + 0x24)) && (*(int *)(lVar7 + 0x24) < *(int *)(lVar6 + 0x3c))) {
      FUN_1400020e8(&local_268,L"Impulse ",8);
      iVar4 = *(int *)(lVar6 + 200);
      goto LAB_1495dce2e;
    }
LAB_1495dce3a:
    if ((-1 < *(int *)(lVar7 + 0x1c)) && (*(int *)(lVar7 + 0x1c) < *(int *)(lVar6 + 0x3c))) {
      FUN_1400020e8(&local_268,L"Velocity ",9);
      iVar4 = *(int *)(lVar6 + 200);
      goto LAB_1495dce66;
    }
  }
  if ((-1 < *(int *)(lVar7 + 8)) && (*(int *)(lVar7 + 8) < *(int *)(lVar6 + 0x3c))) {
    FUN_1400020e8(&local_268,L"Time ",5);
    iVar4 = *(int *)(lVar6 + 200);
  }
  if (iVar4 < 6) {
LAB_1495dcf12:
    if (iVar4 < 5) goto LAB_1495dcf7c;
    lVar7 = *(longlong *)(lVar6 + 0xc0);
  }
  else {
    iVar1 = *(int *)(*(longlong *)(lVar6 + 0xc0) + 0x14);
    if ((-1 < iVar1) && (iVar1 < *(int *)(lVar6 + 0x3c))) {
      FUN_1400020e8(&local_268,L"Color ",6);
      iVar4 = *(int *)(lVar6 + 200);
    }
    if (iVar4 < 7) goto LAB_1495dcf12;
    lVar7 = *(longlong *)(lVar6 + 0xc0);
    if ((-1 < *(int *)(lVar7 + 0x18)) && (*(int *)(lVar7 + 0x18) < *(int *)(lVar6 + 0x3c))) {
      FUN_1400020e8(&local_268,L"Alpha ",6);
      iVar4 = *(int *)(lVar6 + 200);
      goto LAB_1495dcf12;
    }
  }
  if ((-1 < *(int *)(lVar7 + 0x10)) && (*(int *)(lVar7 + 0x10) < *(int *)(lVar6 + 0x3c))) {
    FUN_1400020e8(&local_268,L"Life ",5);
    iVar4 = *(int *)(lVar6 + 200);
  }
  if (((10 < iVar4) && (iVar4 = *(int *)(*(longlong *)(lVar6 + 0xc0) + 0x28), -1 < iVar4)) &&
     (iVar4 < *(int *)(lVar6 + 0x3c))) {
    FUN_1400020e8(&local_268,L"Age ",4);
  }
LAB_1495dcf7c:
  FUN_1446ddc76(&local_2f8,"Special Attributes",1);
  pvVar2 = local_268;
  local_2f0 = local_2f8;
  local_2e8 = (void *)0x0;
  lVar6 = (longlong)(int)uStack_260;
  local_2e0 = (int)uStack_260;
  if (lVar6 == 0) {
    local_2dc = 0;
  }
  else {
    FUN_1446dd670(&local_2e8,uStack_260 & 0xffffffff,0);
    memcpy(local_2e8,pvVar2,lVar6 * 2);
  }
  local_2d8 = 1;
  FUN_1407c67d8(uVar3);
  FUN_1427dc336(local_300,uVar3);
  switchD_143c3d4dc::caseD_3d(local_310,local_300);
  if (local_268 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495dd0c0 FUN_1495dd0c0 body=65 status=ok
// SIG undefined FUN_1495dd0c0(void)

void FUN_1495dd0c0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(param_1 + 0x150);
  if (plVar2 != param_2) {
    lVar1 = *plVar2;
    *plVar2 = *param_2;
    *param_2 = 0;
    if (lVar1 != 0) {
      FUN_1495ddbc4(lVar1);
      FUN_1400020a8(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1495dd102 FUN_1495dd102 body=1877 status=ok
// SIG undefined FUN_1495dd102(void)

void FUN_1495dd102(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  void *pvVar5;
  
  if (*(longlong *)(param_1 + 0x150) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x150) + 8);
    if (iVar2 != 0) {
      FUN_1407f1458(param_1 + 0x10);
      FUN_1407fe5c2(param_1 + 0x10,param_2,L"HoudiniGPUBufferFloat",4,iVar2,0xd,0x400,1,0);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      cVar1 = *(char *)(param_2 + 0x69);
      if (cVar1 == '\0') {
        FUN_14002049c(param_2,1);
      }
      pvVar5 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))
                                 (DAT_14ca83900,param_2,uVar3,0,iVar2 << 2,1);
      if (cVar1 == '\0') {
        FUN_14002049c(param_2,0);
      }
      memcpy(pvVar5,(void *)**(undefined8 **)(param_1 + 0x150),(ulonglong)(uint)(iVar2 << 2));
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      if (*(char *)(param_2 + 0x69) == '\0') {
        FUN_14002049c(param_2,1);
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar3);
        FUN_14002049c(param_2,0);
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar3);
      }
    }
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x150) + 0x48);
    if (iVar2 != 0) {
      FUN_1407f1458(param_1 + 0x40);
      FUN_1407fe5c2(param_1 + 0x40,param_2,L"HoudiniGPUBufferSpecialAttributeIndexes",4,iVar2,0x1d,
                    0x400,1,0);
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      cVar1 = *(char *)(param_2 + 0x69);
      if (cVar1 == '\0') {
        FUN_14002049c(param_2,1);
      }
      pvVar5 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))
                                 (DAT_14ca83900,param_2,uVar3,0,iVar2 << 2,1);
      if (cVar1 == '\0') {
        FUN_14002049c(param_2,0);
      }
      memcpy(pvVar5,*(void **)(*(longlong *)(param_1 + 0x150) + 0x40),(ulonglong)(uint)(iVar2 << 2))
      ;
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      if (*(char *)(param_2 + 0x69) == '\0') {
        FUN_14002049c(param_2,1);
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar3);
        FUN_14002049c(param_2,0);
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar3);
      }
    }
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x150) + 0x18);
    if (iVar2 != 0) {
      FUN_1407f1458(param_1 + 0x70);
      FUN_1407fe5c2(param_1 + 0x70,param_2,L"HoudiniGPUBufferSpawnTimes",4,iVar2,0xd,0x400,1,0);
      uVar3 = *(undefined8 *)(param_1 + 0x70);
      cVar1 = *(char *)(param_2 + 0x69);
      if (cVar1 == '\0') {
        FUN_14002049c(param_2,1);
      }
      pvVar5 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))
                                 (DAT_14ca83900,param_2,uVar3,0,iVar2 << 2,1);
      if (cVar1 == '\0') {
        FUN_14002049c(param_2,0);
      }
      memcpy(pvVar5,*(void **)(*(longlong *)(param_1 + 0x150) + 0x10),(ulonglong)(uint)(iVar2 << 2))
      ;
      uVar3 = *(undefined8 *)(param_1 + 0x70);
      if (*(char *)(param_2 + 0x69) == '\0') {
        FUN_14002049c(param_2,1);
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar3);
        FUN_14002049c(param_2,0);
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar3);
      }
    }
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x150) + 0x28);
    if (iVar2 != 0) {
      FUN_1407f1458(param_1 + 0xa0);
      FUN_1407fe5c2(param_1 + 0xa0,param_2,L"HoudiniGPUBufferLifeValues",4,iVar2,0xd,0x400,1,0);
      uVar3 = *(undefined8 *)(param_1 + 0xa0);
      cVar1 = *(char *)(param_2 + 0x69);
      if (cVar1 == '\0') {
        FUN_14002049c(param_2,1);
      }
      pvVar5 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))
                                 (DAT_14ca83900,param_2,uVar3,0,iVar2 << 2,1);
      if (cVar1 == '\0') {
        FUN_14002049c(param_2,0);
      }
      memcpy(pvVar5,*(void **)(*(longlong *)(param_1 + 0x150) + 0x20),(ulonglong)(uint)(iVar2 << 2))
      ;
      uVar3 = *(undefined8 *)(param_1 + 0xa0);
      if (*(char *)(param_2 + 0x69) == '\0') {
        FUN_14002049c(param_2,1);
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar3);
        FUN_14002049c(param_2,0);
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar3);
      }
    }
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x150) + 0x38);
    if (iVar2 != 0) {
      FUN_1407f1458(param_1 + 0xd0);
      FUN_1407fe5c2(param_1 + 0xd0,param_2,L"HoudiniGPUBufferPointTypes",4,iVar2,0x1d,0x400,1,0);
      uVar3 = *(undefined8 *)(param_1 + 0xd0);
      cVar1 = *(char *)(param_2 + 0x69);
      if (cVar1 == '\0') {
        FUN_14002049c(param_2,1);
      }
      pvVar5 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))
                                 (DAT_14ca83900,param_2,uVar3,0,iVar2 << 2,1);
      if (cVar1 == '\0') {
        FUN_14002049c(param_2,0);
      }
      memcpy(pvVar5,*(void **)(*(longlong *)(param_1 + 0x150) + 0x30),(ulonglong)(uint)(iVar2 << 2))
      ;
      uVar3 = *(undefined8 *)(param_1 + 0xd0);
      if (*(char *)(param_2 + 0x69) == '\0') {
        FUN_14002049c(param_2,1);
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar3);
        FUN_14002049c(param_2,0);
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar3);
      }
    }
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x150) + 0x58);
    if (iVar2 != 0) {
      FUN_1407f1458(param_1 + 0x100);
      FUN_1407fe5c2(param_1 + 0x100,param_2,L"HoudiniGPUBufferPointValuesIndexes",4,iVar2,0x1d,0x400
                    ,1,0);
      uVar3 = *(undefined8 *)(param_1 + 0x100);
      cVar1 = *(char *)(param_2 + 0x69);
      if (cVar1 == '\0') {
        FUN_14002049c(param_2,1);
      }
      pvVar5 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))
                                 (DAT_14ca83900,param_2,uVar3,0,iVar2 << 2,1);
      if (cVar1 == '\0') {
        FUN_14002049c(param_2,0);
      }
      memcpy(pvVar5,*(void **)(*(longlong *)(param_1 + 0x150) + 0x50),(ulonglong)(uint)(iVar2 << 2))
      ;
      uVar3 = *(undefined8 *)(param_1 + 0x100);
      if (*(char *)(param_2 + 0x69) == '\0') {
        FUN_14002049c(param_2,1);
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar3);
        FUN_14002049c(param_2,0);
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar3);
      }
    }
    if (*(int *)(*(longlong *)(param_1 + 0x150) + 0x68) == 0) {
      FUN_1447a1747(*(undefined8 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x148));
      *(undefined4 *)(param_1 + 0x148) = 0;
      if (*(int *)(param_1 + 0x14c) != 0) {
        FUN_1408be2c4(param_1 + 0x140,0);
      }
    }
    else {
      FUN_140bee9ec(param_1 + 0x140,*(longlong *)(param_1 + 0x150) + 0x60);
    }
    lVar4 = *(longlong *)(param_1 + 0x150);
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(lVar4 + 0x70);
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(lVar4 + 0x74);
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(lVar4 + 0x78);
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(lVar4 + 0x7c);
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + 0x150) = 0;
      FUN_1495ddbc4(lVar4);
      FUN_1400020a8(lVar4);
      return;
    }
  }
  return;
}



// FUNCTION 1495dd858 FUN_1495dd858 body=79 status=ok
// SIG undefined FUN_1495dd858(void)

void FUN_1495dd858(longlong param_1)

{
  FUN_1407f1458(param_1 + 0x10);
  FUN_1407f1458(param_1 + 0x40);
  FUN_1407f1458(param_1 + 0x70);
  FUN_1407f1458(param_1 + 0xa0);
  FUN_1407f1458(param_1 + 0xd0);
  FUN_1407f1458(param_1 + 0x100);
  return;
}



// FUNCTION 1495dd8e0 FUN_1495dd8e0 body=54 status=ok
// SIG undefined FUN_1495dd8e0(void)

undefined1 FUN_1495dd8e0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14054c6c4(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1495dd93e FUN_1495dd93e body=59 status=ok
// SIG undefined FUN_1495dd93e(void)

undefined8 FUN_1495dd93e(longlong *param_1)

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



// FUNCTION 1495dd984 FUN_1495dd984 body=37 status=ok
// SIG undefined FUN_1495dd984(void)

void FUN_1495dd984(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1495ddad2 FUN_1495ddad2 body=39 status=ok
// SIG undefined FUN_1495ddad2(void)

undefined8 FUN_1495ddad2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1495ddb22 FUN_1495ddb22 body=59 status=ok
// SIG undefined FUN_1495ddb22(void)

undefined8 FUN_1495ddb22(longlong *param_1)

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



// FUNCTION 1495ddbc4 FUN_1495ddbc4 body=129 status=ok
// SIG undefined FUN_1495ddbc4(void)

void FUN_1495ddbc4(longlong *param_1)

{
  FUN_1447a1747(param_1[0xc],(int)param_1[0xd]);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 1495ddc46 FUN_1495ddc46 body=98 status=ok
// SIG undefined FUN_1495ddc46(void)

void FUN_1495ddc46(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1495ddca8 FUN_1495ddca8 body=119 status=ok
// SIG undefined FUN_1495ddca8(void)

void FUN_1495ddca8(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar2;
      _Src = *(void **)(piVar2 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_144a06ca8(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1495ddd20 FUN_1495ddd20 body=31 status=ok
// SIG undefined FUN_1495ddd20(void)

undefined8 FUN_1495ddd20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1495ddd5c FUN_1495ddd5c body=93 status=ok
// SIG undefined FUN_1495ddd5c(void)

void FUN_1495ddd5c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bd540c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1495dddba FUN_1495dddba body=126 status=ok
// SIG undefined FUN_1495dddba(void)

void FUN_1495dddba(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bd540c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001495dde29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1495dde38 FUN_1495dde38 body=21 status=ok
// SIG undefined FUN_1495dde38(void)

undefined8 FUN_1495dde38(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1495dde4e FUN_1495dde4e body=38 status=ok
// SIG undefined FUN_1495dde4e(void)

undefined8 FUN_1495dde4e(undefined8 param_1,int param_2)

{
  FUN_1495dde94();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1495dde74 FUN_1495dde74 body=32 status=ok
// SIG undefined FUN_1495dde74(void)

undefined8 FUN_1495dde74(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FHoudiniPointCacheResource");
  return param_2;
}



// FUNCTION 1495dde94 FUN_1495dde94 body=164 status=ok
// SIG undefined FUN_1495dde94(void)

void FUN_1495dde94(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14bd541d0;
  lVar1 = param_1[0x2a];
  if (lVar1 != 0) {
    FUN_1495ddbc4(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_1447a1747(param_1[0x28],*(undefined4 *)(param_1 + 0x29));
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_14476820c(param_1 + 0x20);
  FUN_14476820c(param_1 + 0x1a);
  FUN_14476820c(param_1 + 0x14);
  FUN_14476820c(param_1 + 0xe);
  FUN_14476820c(param_1 + 8);
  FUN_14476820c(param_1 + 2);
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 1495ddf38 FUN_1495ddf38 body=37 status=ok
// SIG undefined FUN_1495ddf38(void)

void FUN_1495ddf38(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae(param_1);
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 1495ddf62 FUN_1495ddf62 body=52 status=ok
// SIG undefined FUN_1495ddf62(void)

void FUN_1495ddf62(longlong *param_1)

{
  uint uVar1;
  
  FUN_1400bb2d8();
  uVar1 = *(uint *)(param_1 + 6);
  *(uint *)(param_1 + 6) = uVar1 | 1;
  if ((~uVar1 & 4) == 0) {
    (**(code **)(*param_1 + 0x428))(param_1);
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  }
  return;
}



// FUNCTION 1495ddf96 FUN_1495ddf96 body=109 status=ok
// SIG undefined FUN_1495ddf96(void)

ulonglong FUN_1495ddf96(longlong param_1,longlong *param_2)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  
  bVar2 = FUN_1414db5a0();
  bVar2 = param_2 != (longlong *)0x0 & bVar2;
  if (bVar2 == 1) {
    lVar3 = *(longlong *)(param_1 + 0x38);
    if (DAT_14c950c29 == '\x01') {
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_14689c22e();
        lVar3 = *(longlong *)(param_1 + 0x38);
      }
    }
    param_2[7] = lVar3;
    uVar1 = *(uint *)(param_2 + 6);
    *(uint *)(param_2 + 6) = uVar1 | 1;
    if ((~uVar1 & 4) == 0) {
      (**(code **)(*param_2 + 0x428))(param_2);
      *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfe;
    }
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar2) & 0xffffffff;
}



// FUNCTION 1495de004 FUN_1495de004 body=106 status=ok
// SIG undefined FUN_1495de004(void)

undefined8 FUN_1495de004(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  undefined8 uVar7;
  bool bVar8;
  
  cVar4 = FUN_1481192e4();
  uVar7 = 0;
  if ((param_2 != 0) && (cVar4 != '\0')) {
    lVar2 = *(longlong *)(param_2 + 0x38);
    if ((lVar2 == 0) || (lVar3 = *(longlong *)(param_1 + 0x38), lVar3 == 0)) {
      uVar7 = 0;
    }
    else {
      iVar5 = *(int *)(lVar2 + 0x30);
      iVar1 = *(int *)(lVar3 + 0x30);
      if (iVar5 == iVar1) {
        if (iVar5 < 2) {
          return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
        }
        iVar5 = wcscmp(*(wchar_t **)(lVar2 + 0x28),*(wchar_t **)(lVar3 + 0x28));
        uVar6 = CONCAT44(extraout_var,iVar5);
        bVar8 = iVar5 == 0;
      }
      else {
        uVar6 = (ulonglong)(uint)(iVar1 + iVar5);
        bVar8 = iVar1 + iVar5 == 1;
      }
      uVar7 = CONCAT71((int7)(uVar6 >> 8),bVar8);
    }
  }
  return uVar7;
}



// FUNCTION 1495de06e FUN_1495de06e body=43616 status=ok
// SIG undefined FUN_1495de06e(void)

/* WARNING: Removing unreachable block (ram,0x0001495e88b6) */
/* WARNING: Removing unreachable block (ram,0x0001495e8521) */
/* WARNING: Removing unreachable block (ram,0x0001495e8205) */
/* WARNING: Removing unreachable block (ram,0x0001495e809b) */
/* WARNING: Removing unreachable block (ram,0x0001495e7d7f) */
/* WARNING: Removing unreachable block (ram,0x0001495e7a63) */
/* WARNING: Removing unreachable block (ram,0x0001495e78f9) */
/* WARNING: Removing unreachable block (ram,0x0001495e75dd) */
/* WARNING: Removing unreachable block (ram,0x0001495e72c1) */
/* WARNING: Removing unreachable block (ram,0x0001495e6fa5) */
/* WARNING: Removing unreachable block (ram,0x0001495e6e3b) */
/* WARNING: Removing unreachable block (ram,0x0001495e6b1f) */
/* WARNING: Removing unreachable block (ram,0x0001495e67c9) */
/* WARNING: Removing unreachable block (ram,0x0001495e665f) */
/* WARNING: Removing unreachable block (ram,0x0001495e6343) */
/* WARNING: Removing unreachable block (ram,0x0001495e61d9) */
/* WARNING: Removing unreachable block (ram,0x0001495e5e83) */
/* WARNING: Removing unreachable block (ram,0x0001495e5d19) */
/* WARNING: Removing unreachable block (ram,0x0001495e5baf) */
/* WARNING: Removing unreachable block (ram,0x0001495e589a) */
/* WARNING: Removing unreachable block (ram,0x0001495e5730) */
/* WARNING: Removing unreachable block (ram,0x0001495e55c6) */
/* WARNING: Removing unreachable block (ram,0x0001495e5270) */
/* WARNING: Removing unreachable block (ram,0x0001495e4f54) */
/* WARNING: Removing unreachable block (ram,0x0001495e4dea) */
/* WARNING: Removing unreachable block (ram,0x0001495e4a94) */
/* WARNING: Removing unreachable block (ram,0x0001495e492a) */
/* WARNING: Removing unreachable block (ram,0x0001495e460e) */
/* WARNING: Removing unreachable block (ram,0x0001495e44a4) */
/* WARNING: Removing unreachable block (ram,0x0001495e414e) */
/* WARNING: Removing unreachable block (ram,0x0001495e3e32) */
/* WARNING: Removing unreachable block (ram,0x0001495e3cc8) */
/* WARNING: Removing unreachable block (ram,0x0001495e39ac) */
/* WARNING: Removing unreachable block (ram,0x0001495e3842) */
/* WARNING: Removing unreachable block (ram,0x0001495e340b) */
/* WARNING: Removing unreachable block (ram,0x0001495e2e24) */
/* WARNING: Removing unreachable block (ram,0x0001495e2cba) */
/* WARNING: Removing unreachable block (ram,0x0001495e2b50) */
/* WARNING: Removing unreachable block (ram,0x0001495e2834) */
/* WARNING: Removing unreachable block (ram,0x0001495e2518) */
/* WARNING: Removing unreachable block (ram,0x0001495e2058) */
/* WARNING: Removing unreachable block (ram,0x0001495e1d43) */
/* WARNING: Removing unreachable block (ram,0x0001495e1a27) */
/* WARNING: Removing unreachable block (ram,0x0001495e170b) */
/* WARNING: Removing unreachable block (ram,0x0001495e13ef) */
/* WARNING: Removing unreachable block (ram,0x0001495e10d3) */
/* WARNING: Removing unreachable block (ram,0x0001495e0d2c) */
/* WARNING: Removing unreachable block (ram,0x0001495e0a10) */
/* WARNING: Removing unreachable block (ram,0x0001495e06ba) */
/* WARNING: Removing unreachable block (ram,0x0001495e039e) */
/* WARNING: Removing unreachable block (ram,0x0001495e0234) */
/* WARNING: Removing unreachable block (ram,0x0001495dfee5) */
/* WARNING: Removing unreachable block (ram,0x0001495dfbc9) */
/* WARNING: Removing unreachable block (ram,0x0001495dfa5f) */
/* WARNING: Removing unreachable block (ram,0x0001495df709) */
/* WARNING: Removing unreachable block (ram,0x0001495df59f) */
/* WARNING: Removing unreachable block (ram,0x0001495df283) */
/* WARNING: Removing unreachable block (ram,0x0001495df119) */
/* WARNING: Removing unreachable block (ram,0x0001495dedc3) */
/* WARNING: Removing unreachable block (ram,0x0001495deaa7) */
/* WARNING: Removing unreachable block (ram,0x0001495de93d) */
/* WARNING: Removing unreachable block (ram,0x0001495de5e7) */
/* WARNING: Removing unreachable block (ram,0x0001495de2c4) */
/* WARNING: Removing unreachable block (ram,0x0001495de20f) */
/* WARNING: Removing unreachable block (ram,0x0001495de379) */
/* WARNING: Removing unreachable block (ram,0x0001495de69c) */
/* WARNING: Removing unreachable block (ram,0x0001495de9f2) */
/* WARNING: Removing unreachable block (ram,0x0001495ded0e) */
/* WARNING: Removing unreachable block (ram,0x0001495df064) */
/* WARNING: Removing unreachable block (ram,0x0001495df1ce) */
/* WARNING: Removing unreachable block (ram,0x0001495df338) */
/* WARNING: Removing unreachable block (ram,0x0001495df654) */
/* WARNING: Removing unreachable block (ram,0x0001495df7be) */
/* WARNING: Removing unreachable block (ram,0x0001495dfb14) */
/* WARNING: Removing unreachable block (ram,0x0001495dfe30) */
/* WARNING: Removing unreachable block (ram,0x0001495e017f) */
/* WARNING: Removing unreachable block (ram,0x0001495e02e9) */
/* WARNING: Removing unreachable block (ram,0x0001495e0605) */
/* WARNING: Removing unreachable block (ram,0x0001495e076f) */
/* WARNING: Removing unreachable block (ram,0x0001495e0ac5) */
/* WARNING: Removing unreachable block (ram,0x0001495e0de1) */
/* WARNING: Removing unreachable block (ram,0x0001495e1188) */
/* WARNING: Removing unreachable block (ram,0x0001495e14a4) */
/* WARNING: Removing unreachable block (ram,0x0001495e17c0) */
/* WARNING: Removing unreachable block (ram,0x0001495e1adc) */
/* WARNING: Removing unreachable block (ram,0x0001495e1df8) */
/* WARNING: Removing unreachable block (ram,0x0001495e22b8) */
/* WARNING: Removing unreachable block (ram,0x0001495e277f) */
/* WARNING: Removing unreachable block (ram,0x0001495e2a9b) */
/* WARNING: Removing unreachable block (ram,0x0001495e2c05) */
/* WARNING: Removing unreachable block (ram,0x0001495e2d6f) */
/* WARNING: Removing unreachable block (ram,0x0001495e3356) */
/* WARNING: Removing unreachable block (ram,0x0001495e34c0) */
/* WARNING: Removing unreachable block (ram,0x0001495e38f7) */
/* WARNING: Removing unreachable block (ram,0x0001495e3c13) */
/* WARNING: Removing unreachable block (ram,0x0001495e3d7d) */
/* WARNING: Removing unreachable block (ram,0x0001495e4099) */
/* WARNING: Removing unreachable block (ram,0x0001495e4203) */
/* WARNING: Removing unreachable block (ram,0x0001495e4559) */
/* WARNING: Removing unreachable block (ram,0x0001495e46c3) */
/* WARNING: Removing unreachable block (ram,0x0001495e49df) */
/* WARNING: Removing unreachable block (ram,0x0001495e4d35) */
/* WARNING: Removing unreachable block (ram,0x0001495e4e9f) */
/* WARNING: Removing unreachable block (ram,0x0001495e51bb) */
/* WARNING: Removing unreachable block (ram,0x0001495e5325) */
/* WARNING: Removing unreachable block (ram,0x0001495e567b) */
/* WARNING: Removing unreachable block (ram,0x0001495e57e5) */
/* WARNING: Removing unreachable block (ram,0x0001495e594f) */
/* WARNING: Removing unreachable block (ram,0x0001495e5c64) */
/* WARNING: Removing unreachable block (ram,0x0001495e5dce) */
/* WARNING: Removing unreachable block (ram,0x0001495e6124) */
/* WARNING: Removing unreachable block (ram,0x0001495e628e) */
/* WARNING: Removing unreachable block (ram,0x0001495e63f8) */
/* WARNING: Removing unreachable block (ram,0x0001495e6714) */
/* WARNING: Removing unreachable block (ram,0x0001495e687e) */
/* WARNING: Removing unreachable block (ram,0x0001495e6bd4) */
/* WARNING: Removing unreachable block (ram,0x0001495e6ef0) */
/* WARNING: Removing unreachable block (ram,0x0001495e720c) */
/* WARNING: Removing unreachable block (ram,0x0001495e7528) */
/* WARNING: Removing unreachable block (ram,0x0001495e7692) */
/* WARNING: Removing unreachable block (ram,0x0001495e79ae) */
/* WARNING: Removing unreachable block (ram,0x0001495e7cca) */
/* WARNING: Removing unreachable block (ram,0x0001495e7e34) */
/* WARNING: Removing unreachable block (ram,0x0001495e8150) */
/* WARNING: Removing unreachable block (ram,0x0001495e846c) */
/* WARNING: Removing unreachable block (ram,0x0001495e85d6) */
/* WARNING: Removing unreachable block (ram,0x0001495e8964) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1495de06e(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_158 [40];
  wchar_t ***local_130;
  undefined2 local_128;
  undefined1 local_126;
  undefined4 local_124;
  wchar_t ***local_120;
  wchar_t ****local_118;
  undefined4 local_110 [2];
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  longlong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  uint local_c8;
  undefined4 local_c4;
  undefined2 local_c0;
  undefined8 local_bc;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f358;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"SampleIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"AttributeIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Value",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd547f6;
  local_110[0] = 0x22;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Returns the float value in the point cache for a given Sample Index and Attribute Index.\n"
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f360;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"SampleIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Value",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1446ddc76(&local_130,"Attribute",1);
  local_118 = &local_130;
  FUN_1495f1164(&local_b0,&local_120,&local_118);
  local_118 = (wchar_t ****)0x14bd54926;
  local_110[0] = 0x2a;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Returns the float value in the point cache for a given Sample Index and Attribute name.\n"
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f368;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"SampleIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"AttributeIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Value",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb42140);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd54ac0;
  local_110[0] = 0x23;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Returns a Vector3 in the point cache for a given Sample Index and Attribute Index.\nThe returned Vector is converted from Houdini\'s coordinate system to Unreal\'s."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f370;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"SampleIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Value",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb42140);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1446ddc76(&local_130,"Attribute",1);
  local_118 = &local_130;
  FUN_1495f1164(&local_b0,&local_120,&local_118);
  local_118 = (wchar_t ****)0x14bd54c4a;
  local_110[0] = 0x2b;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Returns a Vector3 in the point cache for a given Sample Index and Attribute name.\nThe returned Vector is converted from Houdini\'s coordinate system to Unreal\'s."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f378;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"SampleIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"AttributeIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"DoSwap",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420e0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"DoScale",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420e0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Value",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb42140);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd54f2e;
  local_110[0] = 0x25;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Returns a Vector3 in the point cache for a given Sample Index and Attribute Index.\nThe DoSwap parameter indicates if the vector should be converted from Houdini*s coordinate system to Unreal\'s.\nThe DoScale parameter decides if the Vector value should be converted from meters (Houdini) to centimeters (Unreal)."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f380;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"SampleIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"DoSwap",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420e0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"DoScale",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420e0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Value",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb42140);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1446ddc76(&local_130,"Attribute",1);
  local_118 = &local_130;
  FUN_1495f1164(&local_b0,&local_120,&local_118);
  local_118 = (wchar_t ****)0x14bd551e6;
  local_110[0] = 0x2d;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Returns a Vector3 in the point cache for a given Sample Index and Attribute name.\nThe DoSwap parameter indicates if the vector should be converted from Houdini*s coordinate system to Unreal\'s.\nThe DoScale parameter decides if the Vector value should be converted from meters (Houdini) to centimeters (Unreal)."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f388;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"SampleIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"AttributeIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Value",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb42160);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd54ac0;
  local_110[0] = 0x23;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Returns a Vector4 in the point cache for a given Sample Index and Attribute Index.\nThe returned Vector is converted from Houdini\'s coordinate system to Unreal\'s."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f390;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"SampleIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Value",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb42160);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1446ddc76(&local_130,"Attribute",1);
  local_118 = &local_130;
  FUN_1495f1164(&local_b0,&local_120,&local_118);
  local_118 = (wchar_t ****)0x14bd54c4a;
  local_110[0] = 0x2b;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Returns a Vector4 in the point cache for a given Sample Index and Attribute name.\nThe returned Vector is converted from Houdini\'s coordinate system to Unreal\'s."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f398;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"SampleIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"AttributeIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"DoHoudiniToUnrealConversion",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420e0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Value",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb42190);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd556a8;
  local_110[0] = 0x21;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Returns a Quat in the point cache for a given Sample Index and Attribute Index.\nThe DoHoudiniToUnrealConversion parameter indicates if the vector should be converted from Houdini*s coordinate system to Unreal\'s."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f3a0;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"SampleIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"DoHoudiniToUnrealConversion",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420e0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Value",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb42190);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1446ddc76(&local_130,"Attribute",1);
  local_118 = &local_130;
  FUN_1495f1164(&local_b0,&local_120,&local_118);
  local_118 = (wchar_t ****)0x14bd5588e;
  local_110[0] = 0x29;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Returns a Quat in the point cache for a given Sample Index and Attribute name.\nThe DoHoudiniToUnrealConversion parameter indicates if the quat should be converted from Houdini*s coordinate system to Unreal\'s."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f3a8;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"SampleIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Position",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb42140);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd55a50;
  local_110[0] = 0x20;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Helper function returning the position value for a given sample index in the point cache file.\nThe returned Position vector is converted from Houdini\'s coordinate system to Unreal\'s."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f3d8;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"SampleIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Position",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb42140);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_130,L"Time",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd55c0a;
  local_110[0] = 0x27;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Helper function returning the position and time values for a given Sample Index in the point cache.\nThe returned Position vector is converted from Houdini\'s coordinate system to Unreal\'s."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f3b0;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"SampleIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Normal",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb42140);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd55db6;
  local_110[0] = 0x1e;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Helper function returning the normal value for a given Sample Index in the point cache.\nThe returned Normal vector is converted from Houdini\'s coordinate system to Unreal\'s."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f3b8;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"SampleIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Time",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd55ea2;
  local_110[0] = 0x1c;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Helper function returning the time value for a given Sample Index in the point cache.\n"
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f3c0;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"SampleIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Velocity",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb42140);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd56040;
  local_110[0] = 0x20;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Helper function returning the velocity value for a given Sample Index in the point cache.\nThe returned velocity vector is converted from Houdini\'s coordinate system to Unreal\'s."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f3c8;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"SampleIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Color",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb42180);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd56130;
  local_110[0] = 0x1d;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Helper function returning the color value for a given Sample Index in the point cache."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f3d0;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"SampleIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Impulse",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd56220;
  local_110[0] = 0x1f;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Helper function returning the impulse value for a given Sample Index in the point cache.\n"
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f3e0;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"NumberOfPoints",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd562fa;
  local_110[0] = 0x26;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Returns the number of points (with different id values) in the point cache.\n");
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f3e8;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"NumberOfSamples",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd563cc;
  local_110[0] = 0x27;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Returns the number of samples in the point cache.");
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f3f0;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"NumberOfAttributes",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd564ac;
  local_110[0] = 0x2a;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Returns the number of attributes in the point cache.");
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f3f8;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Time",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"LastSampleIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd5660c;
  local_110[0] = 0x2d;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Returns the index of the last sample in the point cache that has a time value lesser or equal to the Time parameter."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f400;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Time",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"LastSpawnTime",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"LastSpawnTimeRequest",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"LastSpawnedPointID",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"ResetSpawnState",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420e0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"MinID",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_130,L"MaxID",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_130,L"Count",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_130,L"LastSpawnTime",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_130,L"LastSpawnTimeRequest",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_130,L"LastSpawnedPointID",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd567bc;
  local_110[0] = 0x2d;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Returns the count and point IDs of the points that should spawn for a given time value."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f408;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"PointID",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Time",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"PreviousSampleIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_130,L"NextSampleIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_130,L"PrevWeight",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd569a8;
  local_110[0] = 0x33;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Returns the sample indexes for a given point at a given time.\nThe previous index, next index and weight can then be used to Lerp between values."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f410;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"PointID",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Time",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Position",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb42140);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd56b80;
  local_110[0] = 0x2b;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Helper function returning the linearly interpolated position for a given point at a given time.\nThe returned Position vector is converted from Houdini\'s coordinate system to Unreal\'s."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f418;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"PointID",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"AttributeIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Time",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Value",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd56ca4;
  local_110[0] = 0x28;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Returns the linearly interpolated value in the specified attribute for a given point at a given time."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f420;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"PointID",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Time",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Value",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1446ddc76(&local_130,"Attribute",1);
  local_118 = &local_130;
  FUN_1495f1164(&local_b0,&local_120,&local_118);
  local_118 = (wchar_t ****)0x14bd56dd6;
  local_110[0] = 0x30;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Returns the linearly interpolated value in the specified attribute (by name) for a given point at a given time."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f428;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"PointID",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"AttributeIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Time",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Value",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb42140);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd56fe0;
  local_110[0] = 0x2e;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Helper function returning the linearly interpolated Vector value in the specified Attribute Index for a given point at a given time.\nThe returned Vector is converted from Houdini\'s coordinate system to Unreal\'s."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f430;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"PointID",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Time",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Value",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb42140);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1446ddc76(&local_130,"Attribute",1);
  local_118 = &local_130;
  FUN_1495f1164(&local_b0,&local_120,&local_118);
  local_118 = (wchar_t ****)0x14bd571ee;
  local_110[0] = 0x36;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Helper function returning the linearly interpolated Vector value in the specified attribute (by name) for a given point at a given time.\nThe returned Vector is converted from Houdini\'s coordinate system to Unreal\'s."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f438;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"PointID",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"AttributeIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Time",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Value",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb42160);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd57406;
  local_110[0] = 0x2f;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Helper function returning the linearly interpolated Vector4 value in the specified Attribute Index for a given point at a given time.\nThe returned Vector is converted from Houdini\'s coordinate system to Unreal\'s."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f440;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"PointID",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Time",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Value",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb42160);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1446ddc76(&local_130,"Attribute",1);
  local_118 = &local_130;
  FUN_1495f1164(&local_b0,&local_120,&local_118);
  local_118 = (wchar_t ****)0x14bd57618;
  local_110[0] = 0x37;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Helper function returning the linearly interpolated Vector4 value in the specified attribute (by name) for a given point at a given time.\nThe returned Vector is converted from Houdini\'s coordinate system to Unreal\'s."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f448;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"PointID",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"AttributeIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Time",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"DoSwap",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420e0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"DoScale",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420e0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Value",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb42140);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd56fe0;
  local_110[0] = 0x2e;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Helper function returning the linearly interpolated Vector value in the specified attribute index for a given point at a given time.\nThe DoSwap parameter indicates if the vector should be converted from Houdini*s coordinate system to Unreal\'s.\nThe DoScale parameter decides if the Vector value should be converted from meters (Houdini) to centimeters (Unreal)."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f450;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"PointID",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Time",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"DoSwap",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420e0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"DoScale",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420e0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Value",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb42140);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1446ddc76(&local_130,"Attribute",1);
  local_118 = &local_130;
  FUN_1495f1164(&local_b0,&local_120,&local_118);
  local_118 = (wchar_t ****)0x14bd571ee;
  local_110[0] = 0x36;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Helper function returning the linearly interpolated Vector value in the specified attribute (by name) for a given point at a given time.\nThe DoSwap parameter indicates if the vector should be converted from Houdini*s coordinate system to Unreal\'s.\nThe DoScale parameter decides if the Vector value should be converted from meters (Houdini) to centimeters (Unreal)."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f458;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"PointID",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"AttributeIndex",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Time",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"DoHoudiniToUnrealConversion",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420e0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Value",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb42190);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd57e46;
  local_110[0] = 0x2c;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Helper function returning the linearly interpolated Quat value in the specified attribute index for a given point at a given time.\nThe DoHoudiniToUnrealConversion parameter indicates if the vector4 should be converted from Houdini*s coordinate system to Unreal\'s.\n"
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f460;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"PointID",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Time",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"DoHoudiniToUnrealConversion",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420e0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Value",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb42190);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1446ddc76(&local_130,"Attribute",1);
  local_118 = &local_130;
  FUN_1495f1164(&local_b0,&local_120,&local_118);
  local_118 = (wchar_t ****)0x14bd580b8;
  local_110[0] = 0x34;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Helper function returning the linearly interpolated Quat value in the specified attribute (by name) for a given point at a given time.\nThe DoHoudiniToUnrealConversion parameter indicates if the vector should be converted from Houdini*s coordinate system to Unreal\'s.\n"
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f468;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"PointID",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Life",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd58288;
  local_110[0] = 0x21;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Helper function returning the life value for a given point when spawned.\nThe life value is either calculated from the alive attribute or is the life attribute at spawn time."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f470;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"PointID",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Time",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Life",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd58392;
  local_110[0] = 0x27;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Helper function returning the remaining life for a given point in the point cache at a given time."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f478;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"PointID",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Type",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd58476;
  local_110[0] = 0x21;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Helper function returning the type value for a given point when spawned.\n");
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f480;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"PointID",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Time",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Normal",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb42140);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd58614;
  local_110[0] = 0x29;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Helper function returning the linearly interpolated normal for a given point at a given time.\nThe returned vector is converted from Houdini\'s coordinate system to Unreal\'s."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f488;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"PointID",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Time",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Color",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb42140);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd58722;
  local_110[0] = 0x28;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Helper function returning the linearly interpolated color for a given point at a given time."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f490;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"PointID",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Time",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Alpha",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd5882e;
  local_110[0] = 0x28;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Helper function returning the linearly interpolated alpha for a given point at a given time."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f498;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"PointID",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Time",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Velocity",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb42140);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd589de;
  local_110[0] = 0x2b;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Helper function returning the linearly interpolated velocity for a given point at a given time.\nThe returned vector is converted from Houdini\'s coordinate system to Unreal\'s."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f4a0;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"PointID",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Time",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Impulse",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd58af4;
  local_110[0] = 0x2a;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Helper function returning the linearly interpolated impulse for a given point at a given time."
               );
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cc1f4a8;
  local_c8 = local_c8 & 0xfffff800 | 0x34;
  FUN_1446f470e(&local_120,L"PointCache",1);
  local_130 = *(wchar_t ****)(param_1 + 0x10);
  if ((local_130 != (wchar_t ***)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = (wchar_t ****)local_120;
  local_110[0] = FUN_144830b78(local_110);
  local_108 = 0;
  uStack_100 = 0;
  uStack_e8._0_4_ = 1;
  FUN_146469efe(&local_f0,0);
  *(undefined4 *)(local_f0 + 1) = local_110[0];
  *local_f0 = local_118;
  local_f0[2] = 0;
  local_f0[2] = local_108;
  local_108 = 0;
  *(undefined4 *)(local_f0 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + 0x1c) = uStack_100._4_4_;
  FUN_1446f470e(&local_130,L"PointID",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  iVar1 = (int)uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,iVar1);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Time",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_e8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_e8;
  uVar3 = (int)uStack_e8 + 1;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  if (uStack_e8._4_4_ < uVar3) {
    FUN_146469efe(&local_f0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_f0 + lVar4 * 4 + 1) = local_110[0];
  local_f0[lVar4 * 4] = local_118;
  local_f0[lVar4 * 4 + 2] = 0;
  local_f0[lVar4 * 4 + 2] = local_108;
  *(undefined4 *)(local_f0 + lVar4 * 4 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_f0 + lVar4 * 0x20 + 0x1c) = uStack_100._4_4_;
  uStack_100 = 0;
  local_108 = 0;
  FUN_1446f470e(&local_130,L"Type",1);
  local_118 = (wchar_t ****)local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
  uVar2 = uStack_d8;
  local_108 = 0;
  uStack_100 = 0;
  lVar4 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar4 * 0xc) = local_110[0];
  *(wchar_t *****)(local_e0 + lVar4 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_118 = (wchar_t ****)0x14bd58be6;
  local_110[0] = 0x27;
  FUN_1446e940c(&local_130,&local_118);
  local_118 = (wchar_t ****)0x14bd5483c;
  local_110[0] = 0x1b;
  FUN_1446e940c(&local_120,&local_118);
  FUN_140208bae(&local_118,&local_120,&local_130,
                L"Helper function returning the integer type for a given point at a given time.");
  if (local_118 != (wchar_t ****)0x0) {
    (*(code *)(*local_118)[2])();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495e8b66 FUN_1495e8b66 body=235 status=ok
// SIG undefined FUN_1495e8b66(void)

void FUN_1495e8b66(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = (void *)0x0;
  local_38 = (int)param_3[1];
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_3;
  local_48 = param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  local_58 = 0;
  local_50 = 0;
  uVar1 = FUN_144a72ab6(0x30,&local_58);
  FUN_1495f12b4(uVar1,&local_48);
  FUN_144a450dc(param_2,&local_58);
  FUN_1449db362(&local_58);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495e8ce8 FUN_1495e8ce8 body=235 status=ok
// SIG undefined FUN_1495e8ce8(void)

void FUN_1495e8ce8(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = (void *)0x0;
  local_38 = (int)param_3[1];
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_3;
  local_48 = param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  local_58 = 0;
  local_50 = 0;
  uVar1 = FUN_144a72ab6(0x30,&local_58);
  FUN_1495f14be(uVar1,&local_48);
  FUN_144a450dc(param_2,&local_58);
  FUN_1449db362(&local_58);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495e8e6a FUN_1495e8e6a body=235 status=ok
// SIG undefined FUN_1495e8e6a(void)

void FUN_1495e8e6a(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = (void *)0x0;
  local_38 = (int)param_3[1];
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_3;
  local_48 = param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  local_58 = 0;
  local_50 = 0;
  uVar1 = FUN_144a72ab6(0x30,&local_58);
  FUN_1495f16c8(uVar1,&local_48);
  FUN_144a450dc(param_2,&local_58);
  FUN_1449db362(&local_58);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495e8fec FUN_1495e8fec body=235 status=ok
// SIG undefined FUN_1495e8fec(void)

void FUN_1495e8fec(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = (void *)0x0;
  local_38 = (int)param_3[1];
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_3;
  local_48 = param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  local_58 = 0;
  local_50 = 0;
  uVar1 = FUN_144a72ab6(0x30,&local_58);
  FUN_1495f18d2(uVar1,&local_48);
  FUN_144a450dc(param_2,&local_58);
  FUN_1449db362(&local_58);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495e916e FUN_1495e916e body=235 status=ok
// SIG undefined FUN_1495e916e(void)

void FUN_1495e916e(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = (void *)0x0;
  local_38 = (int)param_3[1];
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_3;
  local_48 = param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  local_58 = 0;
  local_50 = 0;
  uVar1 = FUN_144a72ab6(0x30,&local_58);
  FUN_1495f1adc(uVar1,&local_48);
  FUN_144a450dc(param_2,&local_58);
  FUN_1449db362(&local_58);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495e9674 FUN_1495e9674 body=113 status=ok
// SIG undefined FUN_1495e9674(void)

undefined8 * FUN_1495e9674(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  puVar1 = (undefined8 *)FUN_144a72ab6(0x28,param_1);
  *puVar1 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bd59c80;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_2);
  puVar1[4] = param_3;
  return param_1;
}



// FUNCTION 1495e96e6 FUN_1495e96e6 body=86 status=ok
// SIG undefined FUN_1495e96e6(void)

void FUN_1495e96e6(longlong param_1)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined4 *local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a76cd4(local_20);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1495d7f4c();
  }
  *local_20[0] = uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495e973e FUN_1495e973e body=86 status=ok
// SIG undefined FUN_1495e973e(void)

void FUN_1495e973e(longlong param_1)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined4 *local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a76cd4(local_20);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1495d7f94();
  }
  *local_20[0] = uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495e9796 FUN_1495e9796 body=86 status=ok
// SIG undefined FUN_1495e9796(void)

void FUN_1495e9796(longlong param_1)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined4 *local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a76cd4(local_20);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1495d7f04();
  }
  *local_20[0] = uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495e9adc FUN_1495e9adc body=235 status=ok
// SIG undefined FUN_1495e9adc(void)

void FUN_1495e9adc(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = (void *)0x0;
  local_38 = (int)param_3[1];
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_3;
  local_48 = param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  local_58 = 0;
  local_50 = 0;
  uVar1 = FUN_144a72ab6(0x30,&local_58);
  FUN_1495f1efe(uVar1,&local_48);
  FUN_144a450dc(param_2,&local_58);
  FUN_1449db362(&local_58);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495e9c5e FUN_1495e9c5e body=235 status=ok
// SIG undefined FUN_1495e9c5e(void)

void FUN_1495e9c5e(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = (void *)0x0;
  local_38 = (int)param_3[1];
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_3;
  local_48 = param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  local_58 = 0;
  local_50 = 0;
  uVar1 = FUN_144a72ab6(0x30,&local_58);
  FUN_1495f2108(uVar1,&local_48);
  FUN_144a450dc(param_2,&local_58);
  FUN_1449db362(&local_58);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495e9de0 FUN_1495e9de0 body=235 status=ok
// SIG undefined FUN_1495e9de0(void)

void FUN_1495e9de0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = (void *)0x0;
  local_38 = (int)param_3[1];
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_3;
  local_48 = param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  local_58 = 0;
  local_50 = 0;
  uVar1 = FUN_144a72ab6(0x30,&local_58);
  FUN_1495f2312(uVar1,&local_48);
  FUN_144a450dc(param_2,&local_58);
  FUN_1449db362(&local_58);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495e9f62 FUN_1495e9f62 body=235 status=ok
// SIG undefined FUN_1495e9f62(void)

void FUN_1495e9f62(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = (void *)0x0;
  local_38 = (int)param_3[1];
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_3;
  local_48 = param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  local_58 = 0;
  local_50 = 0;
  uVar1 = FUN_144a72ab6(0x30,&local_58);
  FUN_1495f251c(uVar1,&local_48);
  FUN_144a450dc(param_2,&local_58);
  FUN_1449db362(&local_58);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495ea0e4 FUN_1495ea0e4 body=235 status=ok
// SIG undefined FUN_1495ea0e4(void)

void FUN_1495ea0e4(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = (void *)0x0;
  local_38 = (int)param_3[1];
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_3;
  local_48 = param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  local_58 = 0;
  local_50 = 0;
  uVar1 = FUN_144a72ab6(0x30,&local_58);
  FUN_1495f2726(uVar1,&local_48);
  FUN_144a450dc(param_2,&local_58);
  FUN_1449db362(&local_58);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495ea716 FUN_1495ea716 body=347 status=ok
// SIG undefined FUN_1495ea716(void)

void FUN_1495ea716(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_c8 [36];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 *local_98;
  int local_90;
  undefined4 *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined4 *local_68;
  undefined8 uStack_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar2 = 0;
  local_58 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 0;
  FUN_144a98d08();
  local_78 = 0;
  local_88 = (undefined4 *)0x0;
  uStack_80 = 0;
  FUN_144a98d08(&local_88,param_2);
  FUN_144a76c20(&local_98,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    do {
      local_9c = *local_68;
      local_a0 = *local_88;
      local_a4 = 0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_1495d7560(*(longlong *)(param_1 + 0x38),&local_9c,&local_a0,&local_a4);
      }
      *local_98 = local_a4;
      local_68 = local_68 + local_58;
      local_88 = local_88 + local_78;
      local_98 = local_98 + local_90;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495ea872 FUN_1495ea872 body=534 status=ok
// SIG undefined FUN_1495ea872(void)

void FUN_1495ea872(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 local_ea;
  undefined1 local_e9;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  float *local_c8;
  int local_c0;
  float *local_b8;
  int local_b0;
  float *local_a8;
  int local_a0;
  undefined4 *local_98;
  undefined8 uStack_90;
  int local_88;
  undefined4 *local_78;
  undefined8 uStack_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  iVar2 = 0;
  local_68 = 0;
  local_78 = (undefined4 *)0x0;
  uStack_70 = 0;
  FUN_144a98d08();
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  uStack_90 = 0;
  FUN_144a98d08(&local_98,param_2);
  FUN_144a76c20(&local_a8,param_2);
  FUN_144a76c20(&local_b8,param_2);
  FUN_144a76c20(&local_c8,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    do {
      local_cc = *local_78;
      local_d0 = *local_98;
      local_d8 = DAT_14c8464f0;
      local_e8 = (undefined4)DAT_14c8464e0;
      uStack_e4 = DAT_14c8464e0._4_4_;
      uStack_e0 = (undefined4)DAT_14c8464e8;
      uStack_dc = DAT_14c8464e8._4_4_;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        local_e9 = 1;
        local_ea = 1;
        local_100 = &local_e9;
        local_108 = &local_ea;
        FUN_1495dbdb0(*(longlong *)(param_1 + 0x38),&local_cc,&local_d0,&local_e8);
      }
      *local_a8 = (float)(double)CONCAT44(uStack_e4,local_e8);
      *local_b8 = (float)(double)CONCAT44(uStack_dc,uStack_e0);
      *local_c8 = (float)local_d8;
      local_78 = local_78 + local_68;
      local_98 = local_98 + local_88;
      local_a8 = local_a8 + local_a0;
      local_b8 = local_b8 + local_b0;
      local_c8 = local_c8 + local_c0;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495eaa8a FUN_1495eaa8a body=457 status=ok
// SIG undefined FUN_1495eaa8a(void)

void FUN_1495eaa8a(longlong param_1,char *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 local_ba;
  undefined1 local_b9;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  undefined4 local_9c;
  float *local_98;
  int local_90;
  float *local_88;
  int local_80;
  float *local_78;
  int local_70;
  undefined4 *local_68;
  undefined8 uStack_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_144a98d08();
  FUN_144a76c20(&local_78,param_2);
  FUN_144a76c20(&local_88,param_2);
  FUN_144a76c20(&local_98,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    iVar2 = 0;
    do {
      local_9c = *local_68;
      local_a8 = DAT_14c8464f0;
      local_b8 = (undefined4)DAT_14c8464e0;
      uStack_b4 = DAT_14c8464e0._4_4_;
      uStack_b0 = (undefined4)DAT_14c8464e8;
      uStack_ac = DAT_14c8464e8._4_4_;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        local_b9 = 1;
        local_ba = 1;
        local_d0 = &local_b9;
        local_d8 = &local_ba;
        FUN_1495dc106(*(longlong *)(param_1 + 0x38),&local_9c,param_3,&local_b8);
      }
      *local_78 = (float)(double)CONCAT44(uStack_b4,local_b8);
      *local_88 = (float)(double)CONCAT44(uStack_ac,uStack_b0);
      *local_98 = (float)local_a8;
      local_68 = local_68 + local_58;
      local_78 = local_78 + local_70;
      local_88 = local_88 + local_80;
      local_98 = local_98 + local_90;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495eac54 FUN_1495eac54 body=655 status=ok
// SIG undefined FUN_1495eac54(void)

void FUN_1495eac54(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  undefined1 local_112;
  undefined1 local_111;
  undefined4 local_110;
  undefined4 local_10c;
  float *local_108;
  int local_100;
  float *local_f8;
  int local_f0;
  float *local_e8;
  int local_e0;
  int *local_d8;
  undefined8 uStack_d0;
  int local_c8;
  int *local_b8;
  undefined8 uStack_b0;
  int local_a8;
  undefined4 *local_98;
  undefined8 uStack_90;
  int local_88;
  undefined4 *local_78;
  undefined8 uStack_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  iVar2 = 0;
  local_68 = 0;
  local_78 = (undefined4 *)0x0;
  uStack_70 = 0;
  FUN_144a98d08();
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  uStack_90 = 0;
  FUN_144a98d08(&local_98,param_2);
  local_a8 = 0;
  local_b8 = (int *)0x0;
  uStack_b0 = 0;
  FUN_144a76d88(&local_b8,param_2);
  local_c8 = 0;
  local_d8 = (int *)0x0;
  uStack_d0 = 0;
  FUN_144a76d88(&local_d8,param_2);
  FUN_144a76c20(&local_e8,param_2);
  FUN_144a76c20(&local_f8,param_2);
  FUN_144a76c20(&local_108,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    do {
      local_10c = *local_78;
      local_110 = *local_98;
      local_111 = *local_b8 != 0;
      local_112 = *local_d8 != 0;
      local_128 = DAT_14c8464f0;
      local_138 = (undefined4)DAT_14c8464e0;
      uStack_134 = DAT_14c8464e0._4_4_;
      uStack_130 = (undefined4)DAT_14c8464e8;
      uStack_12c = DAT_14c8464e8._4_4_;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        local_140 = &local_112;
        local_148 = &local_111;
        FUN_1495dbdb0(*(longlong *)(param_1 + 0x38),&local_10c,&local_110,&local_138);
      }
      *local_e8 = (float)(double)CONCAT44(uStack_134,local_138);
      *local_f8 = (float)(double)CONCAT44(uStack_12c,uStack_130);
      *local_108 = (float)local_128;
      local_78 = local_78 + local_68;
      local_98 = local_98 + local_88;
      local_b8 = local_b8 + local_a8;
      local_d8 = local_d8 + local_c8;
      local_e8 = local_e8 + local_e0;
      local_f8 = local_f8 + local_f0;
      local_108 = local_108 + local_100;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495eaee4 FUN_1495eaee4 body=576 status=ok
// SIG undefined FUN_1495eaee4(void)

void FUN_1495eaee4(longlong param_1,char *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  undefined1 *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  undefined1 local_ee;
  undefined1 local_ed;
  undefined4 local_ec;
  float *local_e8;
  int local_e0;
  float *local_d8;
  int local_d0;
  float *local_c8;
  int local_c0;
  int *local_b8;
  undefined8 uStack_b0;
  int local_a8;
  int *local_98;
  undefined8 uStack_90;
  int local_88;
  undefined4 *local_78;
  undefined8 uStack_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar2 = 0;
  local_68 = 0;
  local_78 = (undefined4 *)0x0;
  uStack_70 = 0;
  FUN_144a98d08();
  local_88 = 0;
  local_98 = (int *)0x0;
  uStack_90 = 0;
  FUN_144a76d88(&local_98,param_2);
  local_a8 = 0;
  local_b8 = (int *)0x0;
  uStack_b0 = 0;
  FUN_144a76d88(&local_b8,param_2);
  FUN_144a76c20(&local_c8,param_2);
  FUN_144a76c20(&local_d8,param_2);
  FUN_144a76c20(&local_e8,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    do {
      local_ec = *local_78;
      local_ed = *local_98 != 0;
      local_ee = *local_b8 != 0;
      local_f8 = DAT_14c8464f0;
      local_108 = (undefined4)DAT_14c8464e0;
      uStack_104 = DAT_14c8464e0._4_4_;
      uStack_100 = (undefined4)DAT_14c8464e8;
      uStack_fc = DAT_14c8464e8._4_4_;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        local_110 = &local_ee;
        local_118 = &local_ed;
        FUN_1495dc106(*(longlong *)(param_1 + 0x38),&local_ec,param_3,&local_108);
      }
      *local_c8 = (float)(double)CONCAT44(uStack_104,local_108);
      *local_d8 = (float)(double)CONCAT44(uStack_fc,uStack_100);
      *local_e8 = (float)local_f8;
      local_78 = local_78 + local_68;
      local_98 = local_98 + local_88;
      local_b8 = local_b8 + local_a8;
      local_c8 = local_c8 + local_c0;
      local_d8 = local_d8 + local_d0;
      local_e8 = local_e8 + local_e0;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495eb126 FUN_1495eb126 body=554 status=ok
// SIG undefined FUN_1495eb126(void)

void FUN_1495eb126(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_118 [32];
  double local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  double local_e0;
  undefined4 local_d0;
  undefined4 local_cc;
  float *local_c8;
  int local_c0;
  float *local_b8;
  int local_b0;
  float *local_a8;
  int local_a0;
  float *local_98;
  int local_90;
  undefined4 *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined4 *local_68;
  undefined8 uStack_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar2 = 0;
  local_58 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 0;
  FUN_144a98d08();
  local_78 = 0;
  local_88 = (undefined4 *)0x0;
  uStack_80 = 0;
  FUN_144a98d08(&local_88,param_2);
  FUN_144a76c20(&local_98,param_2);
  FUN_144a76c20(&local_a8,param_2);
  FUN_144a76c20(&local_b8,param_2);
  FUN_144a76c20(&local_c8,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    do {
      local_cc = *local_68;
      local_d0 = *local_88;
      local_f8 = DAT_14c8464e0;
      local_f0 = (undefined4)DAT_14c8464e8;
      uStack_ec = DAT_14c8464e8._4_4_;
      uStack_e8 = (undefined4)DAT_14c8464f0;
      uStack_e4 = DAT_14c8464f0._4_4_;
      local_e0 = 0.0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_1495db898(*(longlong *)(param_1 + 0x38),&local_cc,&local_d0,&local_f8);
      }
      *local_98 = (float)local_f8;
      *local_a8 = (float)(double)CONCAT44(uStack_ec,local_f0);
      *local_b8 = (float)(double)CONCAT44(uStack_e4,uStack_e8);
      *local_c8 = (float)local_e0;
      local_68 = local_68 + local_58;
      local_98 = local_98 + local_90;
      local_88 = local_88 + local_78;
      local_a8 = local_a8 + local_a0;
      local_b8 = local_b8 + local_b0;
      local_c8 = local_c8 + local_c0;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495eb352 FUN_1495eb352 body=477 status=ok
// SIG undefined FUN_1495eb352(void)

void FUN_1495eb352(longlong param_1,char *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  double local_b0;
  undefined4 local_9c;
  float *local_98;
  int local_90;
  float *local_88;
  int local_80;
  float *local_78;
  int local_70;
  float *local_68;
  int local_60;
  undefined4 *local_58;
  undefined8 uStack_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = (undefined4 *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08();
  FUN_144a76c20(&local_68,param_2);
  FUN_144a76c20(&local_78,param_2);
  FUN_144a76c20(&local_88,param_2);
  FUN_144a76c20(&local_98,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    iVar2 = 0;
    do {
      local_9c = *local_58;
      uVar3 = (undefined4)DAT_14c8464e0;
      uVar4 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
      local_c8 = DAT_14c8464e0;
      local_c0 = (undefined4)DAT_14c8464e8;
      uStack_bc = DAT_14c8464e8._4_4_;
      uStack_b8 = (undefined4)DAT_14c8464f0;
      uStack_b4 = DAT_14c8464f0._4_4_;
      local_b0 = 0.0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_1495dbb08(*(longlong *)(param_1 + 0x38),&local_9c,param_3,&local_c8);
        uVar3 = (undefined4)local_c8;
        uVar4 = (undefined4)((ulonglong)local_c8 >> 0x20);
      }
      *local_68 = (float)(double)CONCAT44(uVar4,uVar3);
      *local_78 = (float)(double)CONCAT44(uStack_bc,local_c0);
      *local_88 = (float)(double)CONCAT44(uStack_b4,uStack_b8);
      *local_98 = (float)local_b0;
      local_68 = local_68 + local_60;
      local_58 = local_58 + local_48;
      local_78 = local_78 + local_70;
      local_88 = local_88 + local_80;
      local_98 = local_98 + local_90;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495eb530 FUN_1495eb530 body=636 status=ok
// SIG undefined FUN_1495eb530(void)

void FUN_1495eb530(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_158 [32];
  undefined1 *local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined1 local_101;
  undefined4 local_100;
  undefined4 local_fc;
  float *local_f8;
  int local_f0;
  float *local_e8;
  int local_e0;
  float *local_d8;
  int local_d0;
  float *local_c8;
  int local_c0;
  int *local_b8;
  undefined8 uStack_b0;
  int local_a8;
  undefined4 *local_98;
  undefined8 uStack_90;
  int local_88;
  undefined4 *local_78;
  undefined8 uStack_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  iVar2 = 0;
  local_68 = 0;
  local_78 = (undefined4 *)0x0;
  uStack_70 = 0;
  FUN_144a98d08();
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  uStack_90 = 0;
  FUN_144a98d08(&local_98,param_2);
  local_a8 = 0;
  local_b8 = (int *)0x0;
  uStack_b0 = 0;
  FUN_144a76d88(&local_b8,param_2);
  FUN_144a76c20(&local_c8,param_2);
  FUN_144a76c20(&local_d8,param_2);
  FUN_144a76c20(&local_e8,param_2);
  FUN_144a76c20(&local_f8,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    do {
      local_fc = *local_78;
      local_100 = *local_98;
      local_101 = *local_b8 != 0;
      local_118 = 0.0;
      dStack_110 = 0.0;
      local_128 = 0.0;
      dStack_120 = 0.0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        local_138 = &local_101;
        FUN_1495dad00(*(longlong *)(param_1 + 0x38),&local_fc,&local_100,&local_128);
      }
      *local_c8 = (float)local_128;
      *local_d8 = (float)dStack_120;
      *local_e8 = (float)local_118;
      *local_f8 = (float)dStack_110;
      local_78 = local_78 + local_68;
      local_98 = local_98 + local_88;
      local_c8 = local_c8 + local_c0;
      local_b8 = local_b8 + local_a8;
      local_d8 = local_d8 + local_d0;
      local_e8 = local_e8 + local_e0;
      local_f8 = local_f8 + local_f0;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495eb7ae FUN_1495eb7ae body=569 status=ok
// SIG undefined FUN_1495eb7ae(void)

void FUN_1495eb7ae(longlong param_1,char *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_dd;
  undefined4 local_dc;
  float *local_d8;
  int local_d0;
  float *local_c8;
  int local_c0;
  float *local_b8;
  int local_b0;
  float *local_a8;
  int local_a0;
  int *local_98;
  undefined8 uStack_90;
  int local_88;
  undefined4 *local_78;
  undefined8 uStack_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar2 = 0;
  local_68 = 0;
  local_78 = (undefined4 *)0x0;
  uStack_70 = 0;
  FUN_144a98d08();
  local_88 = 0;
  local_98 = (int *)0x0;
  uStack_90 = 0;
  FUN_144a76d88(&local_98,param_2);
  FUN_144a76c20(&local_a8,param_2);
  FUN_144a76c20(&local_b8,param_2);
  FUN_144a76c20(&local_c8,param_2);
  FUN_144a76c20(&local_d8,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    do {
      local_dc = *local_78;
      local_dd = *local_98 != 0;
      local_f8 = 0.0;
      dStack_f0 = 0.0;
      local_108 = 0.0;
      dStack_100 = 0.0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        local_118 = &local_dd;
        FUN_1495db036(*(longlong *)(param_1 + 0x38),&local_dc,param_3,&local_108);
      }
      *local_a8 = (float)local_108;
      *local_b8 = (float)dStack_100;
      *local_c8 = (float)local_f8;
      *local_d8 = (float)dStack_f0;
      local_78 = local_78 + local_68;
      local_a8 = local_a8 + local_a0;
      local_98 = local_98 + local_88;
      local_b8 = local_b8 + local_b0;
      local_c8 = local_c8 + local_c0;
      local_d8 = local_d8 + local_d0;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495eb9e8 FUN_1495eb9e8 body=275 status=ok
// SIG undefined FUN_1495eb9e8(void)

void FUN_1495eb9e8(longlong param_1,char *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 *local_68;
  int local_60;
  undefined4 *local_58;
  undefined8 uStack_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = (undefined4 *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08();
  FUN_144a76c20(&local_68,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    iVar2 = 0;
    do {
      local_6c = *local_58;
      local_70 = 0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_1495d771c(*(longlong *)(param_1 + 0x38),&local_6c,param_3,&local_70);
      }
      *local_68 = local_70;
      local_58 = local_58 + local_48;
      local_68 = local_68 + local_60;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495ebafc FUN_1495ebafc body=386 status=ok
// SIG undefined FUN_1495ebafc(void)

void FUN_1495ebafc(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  undefined4 local_8c;
  float *local_88;
  int local_80;
  float *local_78;
  int local_70;
  float *local_68;
  int local_60;
  undefined4 *local_58;
  undefined8 uStack_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = (undefined4 *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08();
  FUN_144a76c20(&local_68,param_2);
  FUN_144a76c20(&local_78,param_2);
  FUN_144a76c20(&local_88,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    iVar2 = 0;
    do {
      local_8c = *local_58;
      local_98 = DAT_14c8464f0;
      local_a8 = (undefined4)DAT_14c8464e0;
      uStack_a4 = DAT_14c8464e0._4_4_;
      uStack_a0 = (undefined4)DAT_14c8464e8;
      uStack_9c = DAT_14c8464e8._4_4_;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_1495daa78(*(longlong *)(param_1 + 0x38),&local_8c,&local_a8);
      }
      *local_68 = (float)(double)CONCAT44(uStack_a4,local_a8);
      *local_78 = (float)(double)CONCAT44(uStack_9c,uStack_a0);
      *local_88 = (float)local_98;
      local_58 = local_58 + local_48;
      local_68 = local_68 + local_60;
      local_78 = local_78 + local_70;
      local_88 = local_88 + local_80;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495ebc80 FUN_1495ebc80 body=386 status=ok
// SIG undefined FUN_1495ebc80(void)

void FUN_1495ebc80(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  undefined4 local_8c;
  float *local_88;
  int local_80;
  float *local_78;
  int local_70;
  float *local_68;
  int local_60;
  undefined4 *local_58;
  undefined8 uStack_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = (undefined4 *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08();
  FUN_144a76c20(&local_68,param_2);
  FUN_144a76c20(&local_78,param_2);
  FUN_144a76c20(&local_88,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    iVar2 = 0;
    do {
      local_8c = *local_58;
      local_98 = DAT_14c8464f0;
      local_a8 = (undefined4)DAT_14c8464e0;
      uStack_a4 = DAT_14c8464e0._4_4_;
      uStack_a0 = (undefined4)DAT_14c8464e8;
      uStack_9c = DAT_14c8464e8._4_4_;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_1495d7e34(*(longlong *)(param_1 + 0x38),&local_8c,&local_a8);
      }
      *local_68 = (float)(double)CONCAT44(uStack_a4,local_a8);
      *local_78 = (float)(double)CONCAT44(uStack_9c,uStack_a0);
      *local_88 = (float)local_98;
      local_58 = local_58 + local_48;
      local_68 = local_68 + local_60;
      local_78 = local_78 + local_70;
      local_88 = local_88 + local_80;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495ebe04 FUN_1495ebe04 body=265 status=ok
// SIG undefined FUN_1495ebe04(void)

void FUN_1495ebe04(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 *local_68;
  int local_60;
  undefined4 *local_58;
  undefined8 uStack_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = (undefined4 *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08();
  FUN_144a76c20(&local_68,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    iVar2 = 0;
    do {
      local_6c = *local_58;
      local_70 = 0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_1495db67e(*(longlong *)(param_1 + 0x38),&local_6c,&local_70);
      }
      *local_68 = local_70;
      local_58 = local_58 + local_48;
      local_68 = local_68 + local_60;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495ebf0e FUN_1495ebf0e body=386 status=ok
// SIG undefined FUN_1495ebf0e(void)

void FUN_1495ebf0e(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  undefined4 local_8c;
  float *local_88;
  int local_80;
  float *local_78;
  int local_70;
  float *local_68;
  int local_60;
  undefined4 *local_58;
  undefined8 uStack_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = (undefined4 *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08();
  FUN_144a76c20(&local_68,param_2);
  FUN_144a76c20(&local_78,param_2);
  FUN_144a76c20(&local_88,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    iVar2 = 0;
    do {
      local_8c = *local_58;
      local_98 = DAT_14c8464f0;
      local_a8 = (undefined4)DAT_14c8464e0;
      uStack_a4 = DAT_14c8464e0._4_4_;
      uStack_a0 = (undefined4)DAT_14c8464e8;
      uStack_9c = DAT_14c8464e8._4_4_;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_1495dc2a6(*(longlong *)(param_1 + 0x38),&local_8c,&local_a8);
      }
      *local_68 = (float)(double)CONCAT44(uStack_a4,local_a8);
      *local_78 = (float)(double)CONCAT44(uStack_9c,uStack_a0);
      *local_88 = (float)local_98;
      local_58 = local_58 + local_48;
      local_68 = local_68 + local_60;
      local_78 = local_78 + local_70;
      local_88 = local_88 + local_80;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495ec092 FUN_1495ec092 body=462 status=ok
// SIG undefined FUN_1495ec092(void)

void FUN_1495ec092(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_bc;
  undefined4 *local_b8;
  int local_b0;
  undefined4 *local_a8;
  int local_a0;
  undefined4 *local_98;
  int local_90;
  undefined4 *local_88;
  int local_80;
  undefined4 *local_78;
  undefined8 uStack_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_78 = (undefined4 *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_144a98d08();
  FUN_144a76c20(&local_88,param_2);
  FUN_144a76c20(&local_98,param_2);
  FUN_144a76c20(&local_a8,param_2);
  FUN_144a76c20(&local_b8,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    iVar2 = 0;
    do {
      local_bc = *local_78;
      local_d8 = &DAT_3f8000003f800000;
      uStack_d0 = &DAT_3f8000003f800000;
      uVar3 = 0x3f800000;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_1495d7234(*(longlong *)(param_1 + 0x38),&local_bc,&local_d8);
        uVar3 = (undefined4)local_d8;
      }
      *local_88 = uVar3;
      *local_98 = local_d8._4_4_;
      *local_a8 = (undefined4)uStack_d0;
      *local_b8 = uStack_d0._4_4_;
      local_88 = local_88 + local_80;
      local_78 = local_78 + local_68;
      local_98 = local_98 + local_90;
      local_a8 = local_a8 + local_a0;
      local_b8 = local_b8 + local_b0;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495ec262 FUN_1495ec262 body=265 status=ok
// SIG undefined FUN_1495ec262(void)

void FUN_1495ec262(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 *local_68;
  int local_60;
  undefined4 *local_58;
  undefined8 uStack_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = (undefined4 *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08();
  FUN_144a76c20(&local_68,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    iVar2 = 0;
    do {
      local_6c = *local_58;
      local_70 = 0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_1495d78d2(*(longlong *)(param_1 + 0x38),&local_6c,&local_70);
      }
      *local_68 = local_70;
      local_58 = local_58 + local_48;
      local_68 = local_68 + local_60;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495ec36c FUN_1495ec36c body=263 status=ok
// SIG undefined FUN_1495ec36c(void)

void FUN_1495ec36c(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 *local_68;
  int local_60;
  undefined4 *local_58;
  undefined8 uStack_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = (undefined4 *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98dce();
  FUN_144a76cd4(&local_68,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    iVar2 = 0;
    do {
      local_6c = *local_58;
      local_70 = 0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_1495d7bde(*(longlong *)(param_1 + 0x38),&local_6c,&local_70);
      }
      *local_68 = local_70;
      local_58 = local_58 + local_48;
      local_68 = local_68 + local_60;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495ec474 FUN_1495ec474 body=783 status=ok
// SIG undefined FUN_1495ec474(void)

void FUN_1495ec474(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  undefined4 *local_190;
  undefined4 *local_188;
  undefined4 *local_180;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 *local_158;
  int local_150;
  undefined4 *local_148;
  int local_140;
  undefined4 *local_138;
  int local_130;
  undefined4 *local_128;
  int local_120;
  undefined4 *local_118;
  int local_110;
  undefined4 *local_108;
  int local_100;
  char *local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 *local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 *local_78;
  undefined8 uStack_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  iVar2 = 0;
  local_68 = 0;
  local_78 = (undefined4 *)0x0;
  uStack_70 = 0;
  FUN_144a98dce();
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  uStack_90 = 0;
  FUN_144a98dce(&local_98,param_2);
  local_a8 = 0;
  local_b8 = (undefined4 *)0x0;
  uStack_b0 = 0;
  FUN_144a98dce(&local_b8,param_2);
  local_c8 = 0;
  local_d8 = (undefined4 *)0x0;
  uStack_d0 = 0;
  FUN_144a98d08(&local_d8,param_2);
  local_e8 = 0;
  local_f8 = (char *)0x0;
  uStack_f0 = 0;
  FUN_1481c49be(&local_f8,param_2);
  FUN_144a76cd4(&local_108,param_2);
  FUN_144a76cd4(&local_118,param_2);
  FUN_144a76cd4(&local_128,param_2);
  FUN_144a76c20(&local_138,param_2);
  FUN_144a76c20(&local_148,param_2);
  FUN_144a76cd4(&local_158,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    do {
      local_15c = *local_78;
      local_160 = *local_98;
      local_164 = *local_b8;
      local_168 = *local_d8;
      if (*local_f8 == '\x01') {
        local_160 = 0xff7fffff;
        local_164 = 0xff7fffff;
        local_168 = 0xffffffff;
      }
      local_16c = 0;
      local_170 = 0;
      local_174 = 0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        local_180 = &local_164;
        local_188 = &local_160;
        local_190 = &local_168;
        local_198 = &local_174;
        FUN_1495d8534(*(longlong *)(param_1 + 0x38),&local_15c,&local_16c,&local_170);
      }
      *local_108 = local_16c;
      *local_118 = local_170;
      *local_128 = local_174;
      *local_138 = local_160;
      *local_148 = local_164;
      *local_158 = local_168;
      local_108 = local_108 + local_100;
      local_118 = local_118 + local_110;
      local_128 = local_128 + local_120;
      local_78 = local_78 + local_68;
      local_138 = local_138 + local_130;
      local_148 = local_148 + local_140;
      local_158 = local_158 + local_150;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495ec784 FUN_1495ec784 body=472 status=ok
// SIG undefined FUN_1495ec784(void)

void FUN_1495ec784(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 *local_98;
  int local_90;
  float *local_88;
  int local_80;
  float *local_78;
  int local_70;
  float *local_68;
  int local_60;
  undefined4 *local_58;
  undefined8 uStack_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58 = (undefined4 *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08();
  FUN_144a76c20(&local_68,param_2);
  FUN_144a76c20(&local_78,param_2);
  FUN_144a76c20(&local_88,param_2);
  FUN_144a76c20(&local_98,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    iVar2 = 0;
    do {
      local_9c = *local_58;
      local_a0 = 0;
      local_a8 = DAT_14c8464f0;
      local_b8 = (undefined4)DAT_14c8464e0;
      uStack_b4 = DAT_14c8464e0._4_4_;
      uStack_b0 = (undefined4)DAT_14c8464e8;
      uStack_ac = DAT_14c8464e8._4_4_;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_1495db67e(*(longlong *)(param_1 + 0x38),&local_9c,&local_a0);
        FUN_1495daa78(*(undefined8 *)(param_1 + 0x38),&local_9c,&local_b8);
      }
      *local_68 = (float)(double)CONCAT44(uStack_b4,local_b8);
      *local_78 = (float)(double)CONCAT44(uStack_ac,uStack_b0);
      *local_88 = (float)local_a8;
      *local_98 = local_a0;
      local_68 = local_68 + local_60;
      local_58 = local_58 + local_48;
      local_78 = local_78 + local_70;
      local_88 = local_88 + local_80;
      local_98 = local_98 + local_90;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495ec95e FUN_1495ec95e body=486 status=ok
// SIG undefined FUN_1495ec95e(void)

void FUN_1495ec95e(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  undefined4 *local_f0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 *local_c8;
  int local_c0;
  undefined4 *local_b8;
  int local_b0;
  undefined4 *local_a8;
  int local_a0;
  undefined4 *local_98;
  undefined8 uStack_90;
  int local_88;
  undefined4 *local_78;
  undefined8 uStack_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar2 = 0;
  local_68 = 0;
  local_78 = (undefined4 *)0x0;
  uStack_70 = 0;
  FUN_144a98d08();
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  uStack_90 = 0;
  FUN_144a98dce(&local_98,param_2);
  FUN_144a76cd4(&local_a8,param_2);
  FUN_144a76cd4(&local_b8,param_2);
  FUN_144a76c20(&local_c8,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    do {
      local_cc = *local_78;
      local_d0 = *local_98;
      local_d4 = 0;
      local_d8 = 0;
      local_dc = 0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        local_f0 = &local_d4;
        local_f8 = &local_dc;
        FUN_1495db2ee(*(longlong *)(param_1 + 0x38),&local_cc,&local_d0,&local_d8);
      }
      *local_a8 = local_d8;
      *local_b8 = local_dc;
      *local_c8 = local_d4;
      local_78 = local_78 + local_68;
      local_98 = local_98 + local_88;
      local_a8 = local_a8 + local_a0;
      local_b8 = local_b8 + local_b0;
      local_c8 = local_c8 + local_c0;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495ecb46 FUN_1495ecb46 body=477 status=ok
// SIG undefined FUN_1495ecb46(void)

void FUN_1495ecb46(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  float *local_b8;
  int local_b0;
  float *local_a8;
  int local_a0;
  float *local_98;
  int local_90;
  undefined4 *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined4 *local_68;
  undefined8 uStack_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar2 = 0;
  local_58 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 0;
  FUN_144a98d08();
  local_78 = 0;
  local_88 = (undefined4 *)0x0;
  uStack_80 = 0;
  FUN_144a98dce(&local_88,param_2);
  FUN_144a76c20(&local_98,param_2);
  FUN_144a76c20(&local_a8,param_2);
  FUN_144a76c20(&local_b8,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    do {
      local_bc = *local_68;
      local_c0 = *local_88;
      local_c8 = DAT_14c8464f0;
      local_d8 = (undefined4)DAT_14c8464e0;
      uStack_d4 = DAT_14c8464e0._4_4_;
      uStack_d0 = (undefined4)DAT_14c8464e8;
      uStack_cc = DAT_14c8464e8._4_4_;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_1495d8dd2(*(longlong *)(param_1 + 0x38),&local_bc,&local_c0,&local_d8);
      }
      *local_98 = (float)(double)CONCAT44(uStack_d4,local_d8);
      *local_a8 = (float)(double)CONCAT44(uStack_cc,uStack_d0);
      *local_b8 = (float)local_c8;
      local_68 = local_68 + local_58;
      local_88 = local_88 + local_78;
      local_98 = local_98 + local_90;
      local_a8 = local_a8 + local_a0;
      local_b8 = local_b8 + local_b0;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495ecd24 FUN_1495ecd24 body=443 status=ok
// SIG undefined FUN_1495ecd24(void)

void FUN_1495ecd24(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 *local_c8;
  int local_c0;
  undefined4 *local_b8;
  undefined8 uStack_b0;
  int local_a8;
  undefined4 *local_98;
  undefined8 uStack_90;
  int local_88;
  undefined4 *local_78;
  undefined8 uStack_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar2 = 0;
  local_68 = 0;
  local_78 = (undefined4 *)0x0;
  uStack_70 = 0;
  FUN_144a98d08();
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  uStack_90 = 0;
  FUN_144a98dce(&local_98,param_2);
  local_a8 = 0;
  local_b8 = (undefined4 *)0x0;
  uStack_b0 = 0;
  FUN_144a98d08(&local_b8,param_2);
  FUN_144a76c20(&local_c8,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    do {
      local_cc = *local_78;
      local_d0 = *local_b8;
      local_d4 = *local_98;
      local_d8 = 0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        local_e8 = &local_d8;
        FUN_1495d984c(*(longlong *)(param_1 + 0x38),&local_cc,&local_d0,&local_d4);
      }
      *local_c8 = local_d8;
      local_78 = local_78 + local_68;
      local_b8 = local_b8 + local_a8;
      local_98 = local_98 + local_88;
      local_c8 = local_c8 + local_c0;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495ecee0 FUN_1495ecee0 body=372 status=ok
// SIG undefined FUN_1495ecee0(void)

void FUN_1495ecee0(longlong param_1,char *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 *local_a8;
  int local_a0;
  undefined4 *local_98;
  undefined8 uStack_90;
  int local_88;
  undefined4 *local_78;
  undefined8 uStack_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar2 = 0;
  local_68 = 0;
  local_78 = (undefined4 *)0x0;
  uStack_70 = 0;
  FUN_144a98d08();
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  uStack_90 = 0;
  FUN_144a98dce(&local_98,param_2);
  FUN_144a76c20(&local_a8,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    do {
      local_ac = *local_78;
      local_b0 = *local_98;
      local_b4 = 0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        local_c8 = &local_b4;
        FUN_1495d9b42(*(longlong *)(param_1 + 0x38),&local_ac,param_3,&local_b0);
      }
      *local_a8 = local_b4;
      local_78 = local_78 + local_68;
      local_98 = local_98 + local_88;
      local_a8 = local_a8 + local_a0;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495ed056 FUN_1495ed056 body=548 status=ok
// SIG undefined FUN_1495ed056(void)

void FUN_1495ed056(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  undefined1 local_110;
  undefined1 local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  float *local_d8;
  int local_d0;
  float *local_c8;
  int local_c0;
  float *local_b8;
  int local_b0;
  undefined4 *local_a8;
  undefined8 uStack_a0;
  int local_98;
  undefined4 *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined4 *local_68;
  undefined8 uStack_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar2 = 0;
  local_58 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 0;
  FUN_144a98d08();
  local_78 = 0;
  local_88 = (undefined4 *)0x0;
  uStack_80 = 0;
  FUN_144a98d08(&local_88,param_2);
  local_98 = 0;
  local_a8 = (undefined4 *)0x0;
  uStack_a0 = 0;
  FUN_144a98dce(&local_a8,param_2);
  FUN_144a76c20(&local_b8,param_2);
  FUN_144a76c20(&local_c8,param_2);
  FUN_144a76c20(&local_d8,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    do {
      local_e8 = DAT_14c8464f0;
      local_f8 = (undefined4)DAT_14c8464e0;
      uStack_f4 = DAT_14c8464e0._4_4_;
      uStack_f0 = (undefined4)DAT_14c8464e8;
      uStack_ec = DAT_14c8464e8._4_4_;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        local_108 = 1;
        local_110 = 1;
        local_118 = &local_f8;
        FUN_1495da4a6(*(longlong *)(param_1 + 0x38),*local_68,*local_88,*local_a8);
      }
      *local_b8 = (float)(double)CONCAT44(uStack_f4,local_f8);
      *local_c8 = (float)(double)CONCAT44(uStack_ec,uStack_f0);
      *local_d8 = (float)local_e8;
      local_68 = local_68 + local_58;
      local_88 = local_88 + local_78;
      local_a8 = local_a8 + local_98;
      local_b8 = local_b8 + local_b0;
      local_c8 = local_c8 + local_c0;
      local_d8 = local_d8 + local_d0;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495ed27c FUN_1495ed27c body=496 status=ok
// SIG undefined FUN_1495ed27c(void)

void FUN_1495ed27c(longlong param_1,char *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  float *local_b8;
  int local_b0;
  float *local_a8;
  int local_a0;
  float *local_98;
  int local_90;
  undefined4 *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined4 *local_68;
  undefined8 uStack_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar2 = 0;
  local_58 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 0;
  FUN_144a98d08();
  local_78 = 0;
  local_88 = (undefined4 *)0x0;
  uStack_80 = 0;
  FUN_144a98dce(&local_88,param_2);
  FUN_144a76c20(&local_98,param_2);
  FUN_144a76c20(&local_a8,param_2);
  FUN_144a76c20(&local_b8,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    do {
      local_c8 = DAT_14c8464f0;
      local_d8 = (undefined4)DAT_14c8464e0;
      uStack_d4 = DAT_14c8464e0._4_4_;
      uStack_d0 = (undefined4)DAT_14c8464e8;
      uStack_cc = DAT_14c8464e8._4_4_;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        local_e8 = 1;
        local_f0 = 1;
        local_f8 = &local_d8;
        FUN_1495da8d0(*(longlong *)(param_1 + 0x38),*local_68,param_3,*local_88);
      }
      *local_98 = (float)(double)CONCAT44(uStack_d4,local_d8);
      *local_a8 = (float)(double)CONCAT44(uStack_cc,uStack_d0);
      *local_b8 = (float)local_c8;
      local_68 = local_68 + local_58;
      local_88 = local_88 + local_78;
      local_98 = local_98 + local_90;
      local_a8 = local_a8 + local_a0;
      local_b8 = local_b8 + local_b0;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495ed46e FUN_1495ed46e body=670 status=ok
// SIG undefined FUN_1495ed46e(void)

void FUN_1495ed46e(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_168 [32];
  undefined4 *local_148;
  undefined1 local_140;
  undefined1 local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  float *local_108;
  int local_100;
  float *local_f8;
  int local_f0;
  float *local_e8;
  int local_e0;
  int *local_d8;
  undefined8 uStack_d0;
  int local_c8;
  int *local_b8;
  undefined8 uStack_b0;
  int local_a8;
  undefined4 *local_98;
  undefined8 uStack_90;
  int local_88;
  undefined4 *local_78;
  undefined8 uStack_70;
  int local_68;
  undefined4 *local_58;
  undefined8 uStack_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  iVar2 = 0;
  local_48 = 0;
  local_58 = (undefined4 *)0x0;
  uStack_50 = 0;
  FUN_144a98d08();
  local_68 = 0;
  local_78 = (undefined4 *)0x0;
  uStack_70 = 0;
  FUN_144a98d08(&local_78,param_2);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  uStack_90 = 0;
  FUN_144a98dce(&local_98,param_2);
  local_a8 = 0;
  local_b8 = (int *)0x0;
  uStack_b0 = 0;
  FUN_144a76d88(&local_b8,param_2);
  local_c8 = 0;
  local_d8 = (int *)0x0;
  uStack_d0 = 0;
  FUN_144a76d88(&local_d8,param_2);
  FUN_144a76c20(&local_e8,param_2);
  FUN_144a76c20(&local_f8,param_2);
  FUN_144a76c20(&local_108,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    do {
      local_118 = DAT_14c8464f0;
      local_128 = (undefined4)DAT_14c8464e0;
      uStack_124 = DAT_14c8464e0._4_4_;
      uStack_120 = (undefined4)DAT_14c8464e8;
      uStack_11c = DAT_14c8464e8._4_4_;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        local_138 = *local_d8 != 0;
        local_140 = *local_b8 != 0;
        local_148 = &local_128;
        FUN_1495da4a6(*(longlong *)(param_1 + 0x38),*local_58,*local_78,*local_98);
      }
      *local_e8 = (float)(double)CONCAT44(uStack_124,local_128);
      *local_f8 = (float)(double)CONCAT44(uStack_11c,uStack_120);
      *local_108 = (float)local_118;
      local_58 = local_58 + local_48;
      local_78 = local_78 + local_68;
      local_98 = local_98 + local_88;
      local_b8 = local_b8 + local_a8;
      local_d8 = local_d8 + local_c8;
      local_e8 = local_e8 + local_e0;
      local_f8 = local_f8 + local_f0;
      local_108 = local_108 + local_100;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495ed70e FUN_1495ed70e body=616 status=ok
// SIG undefined FUN_1495ed70e(void)

void FUN_1495ed70e(longlong param_1,char *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  undefined1 local_130;
  undefined1 local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  float *local_f8;
  int local_f0;
  float *local_e8;
  int local_e0;
  float *local_d8;
  int local_d0;
  int *local_c8;
  undefined8 uStack_c0;
  int local_b8;
  int *local_a8;
  undefined8 uStack_a0;
  int local_98;
  undefined4 *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined4 *local_68;
  undefined8 uStack_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  iVar2 = 0;
  local_58 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 0;
  FUN_144a98d08();
  local_78 = 0;
  local_88 = (undefined4 *)0x0;
  uStack_80 = 0;
  FUN_144a98dce(&local_88,param_2);
  local_98 = 0;
  local_a8 = (int *)0x0;
  uStack_a0 = 0;
  FUN_144a76d88(&local_a8,param_2);
  local_b8 = 0;
  local_c8 = (int *)0x0;
  uStack_c0 = 0;
  FUN_144a76d88(&local_c8,param_2);
  FUN_144a76c20(&local_d8,param_2);
  FUN_144a76c20(&local_e8,param_2);
  FUN_144a76c20(&local_f8,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    do {
      local_108 = DAT_14c8464f0;
      local_118 = (undefined4)DAT_14c8464e0;
      uStack_114 = DAT_14c8464e0._4_4_;
      uStack_110 = (undefined4)DAT_14c8464e8;
      uStack_10c = DAT_14c8464e8._4_4_;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        local_128 = *local_c8 != 0;
        local_130 = *local_a8 != 0;
        local_138 = &local_118;
        FUN_1495da8d0(*(longlong *)(param_1 + 0x38),*local_68,param_3,*local_88);
      }
      *local_d8 = (float)(double)CONCAT44(uStack_114,local_118);
      *local_e8 = (float)(double)CONCAT44(uStack_10c,uStack_110);
      *local_f8 = (float)local_108;
      local_68 = local_68 + local_58;
      local_88 = local_88 + local_78;
      local_a8 = local_a8 + local_98;
      local_c8 = local_c8 + local_b8;
      local_d8 = local_d8 + local_d0;
      local_e8 = local_e8 + local_e0;
      local_f8 = local_f8 + local_f0;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495ed978 FUN_1495ed978 body=590 status=ok
// SIG undefined FUN_1495ed978(void)

void FUN_1495ed978(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_128 [32];
  double *local_108;
  double local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  double local_e0;
  float *local_d8;
  int local_d0;
  float *local_c8;
  int local_c0;
  float *local_b8;
  int local_b0;
  float *local_a8;
  int local_a0;
  undefined4 *local_98;
  undefined8 uStack_90;
  int local_88;
  undefined4 *local_78;
  undefined8 uStack_70;
  int local_68;
  undefined4 *local_58;
  undefined8 uStack_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  iVar2 = 0;
  local_48 = 0;
  local_58 = (undefined4 *)0x0;
  uStack_50 = 0;
  FUN_144a98d08();
  local_68 = 0;
  local_78 = (undefined4 *)0x0;
  uStack_70 = 0;
  FUN_144a98d08(&local_78,param_2);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  uStack_90 = 0;
  FUN_144a98dce(&local_98,param_2);
  FUN_144a76c20(&local_a8,param_2);
  FUN_144a76c20(&local_b8,param_2);
  FUN_144a76c20(&local_c8,param_2);
  FUN_144a76c20(&local_d8,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    do {
      local_f8 = DAT_14c8464e0;
      local_f0 = (undefined4)DAT_14c8464e8;
      uStack_ec = DAT_14c8464e8._4_4_;
      uStack_e8 = (undefined4)DAT_14c8464f0;
      uStack_e4 = DAT_14c8464f0._4_4_;
      local_e0 = 0.0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        local_108 = &local_f8;
        FUN_1495d9df6(*(longlong *)(param_1 + 0x38),*local_58,*local_78,*local_98);
      }
      *local_a8 = (float)local_f8;
      *local_b8 = (float)(double)CONCAT44(uStack_ec,local_f0);
      *local_c8 = (float)(double)CONCAT44(uStack_e4,uStack_e8);
      *local_d8 = (float)local_e0;
      local_58 = local_58 + local_48;
      local_78 = local_78 + local_68;
      local_a8 = local_a8 + local_a0;
      local_98 = local_98 + local_88;
      local_b8 = local_b8 + local_b0;
      local_c8 = local_c8 + local_c0;
      local_d8 = local_d8 + local_d0;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495edbc8 FUN_1495edbc8 body=536 status=ok
// SIG undefined FUN_1495edbc8(void)

void FUN_1495edbc8(longlong param_1,char *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_118 [32];
  double *local_f8;
  double local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  double local_d0;
  float *local_c8;
  int local_c0;
  float *local_b8;
  int local_b0;
  float *local_a8;
  int local_a0;
  float *local_98;
  int local_90;
  undefined4 *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined4 *local_68;
  undefined8 uStack_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar2 = 0;
  local_58 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 0;
  FUN_144a98d08();
  local_78 = 0;
  local_88 = (undefined4 *)0x0;
  uStack_80 = 0;
  FUN_144a98dce(&local_88,param_2);
  FUN_144a76c20(&local_98,param_2);
  FUN_144a76c20(&local_a8,param_2);
  FUN_144a76c20(&local_b8,param_2);
  FUN_144a76c20(&local_c8,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    do {
      local_e8 = DAT_14c8464e0;
      local_e0 = (undefined4)DAT_14c8464e8;
      uStack_dc = DAT_14c8464e8._4_4_;
      uStack_d8 = (undefined4)DAT_14c8464f0;
      uStack_d4 = DAT_14c8464f0._4_4_;
      local_d0 = 0.0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        local_f8 = &local_e8;
        FUN_1495da1c8(*(longlong *)(param_1 + 0x38),*local_68,param_3,*local_88);
      }
      *local_98 = (float)local_e8;
      *local_a8 = (float)(double)CONCAT44(uStack_dc,local_e0);
      *local_b8 = (float)(double)CONCAT44(uStack_d4,uStack_d8);
      *local_c8 = (float)local_d0;
      local_68 = local_68 + local_58;
      local_98 = local_98 + local_90;
      local_88 = local_88 + local_78;
      local_a8 = local_a8 + local_a0;
      local_b8 = local_b8 + local_b0;
      local_c8 = local_c8 + local_c0;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495edde2 FUN_1495edde2 body=647 status=ok
// SIG undefined FUN_1495edde2(void)

void FUN_1495edde2(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_148 [32];
  double *local_128;
  undefined1 local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  float *local_f8;
  int local_f0;
  float *local_e8;
  int local_e0;
  float *local_d8;
  int local_d0;
  float *local_c8;
  int local_c0;
  int *local_b8;
  undefined8 uStack_b0;
  int local_a8;
  undefined4 *local_98;
  undefined8 uStack_90;
  int local_88;
  undefined4 *local_78;
  undefined8 uStack_70;
  int local_68;
  undefined4 *local_58;
  undefined8 uStack_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar2 = 0;
  local_48 = 0;
  local_58 = (undefined4 *)0x0;
  uStack_50 = 0;
  FUN_144a98d08();
  local_68 = 0;
  local_78 = (undefined4 *)0x0;
  uStack_70 = 0;
  FUN_144a98d08(&local_78,param_2);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  uStack_90 = 0;
  FUN_144a98dce(&local_98,param_2);
  local_a8 = 0;
  local_b8 = (int *)0x0;
  uStack_b0 = 0;
  FUN_144a76d88(&local_b8,param_2);
  FUN_144a76c20(&local_c8,param_2);
  FUN_144a76c20(&local_d8,param_2);
  FUN_144a76c20(&local_e8,param_2);
  FUN_144a76c20(&local_f8,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    do {
      local_108 = 0.0;
      dStack_100 = 0.0;
      local_118 = 0.0;
      dStack_110 = 0.0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        local_120 = *local_b8 != 0;
        local_128 = &local_118;
        FUN_1495d9066(*(longlong *)(param_1 + 0x38),*local_58,*local_78,*local_98);
      }
      *local_c8 = (float)local_118;
      *local_d8 = (float)dStack_110;
      *local_e8 = (float)local_108;
      *local_f8 = (float)dStack_100;
      local_58 = local_58 + local_48;
      local_78 = local_78 + local_68;
      local_98 = local_98 + local_88;
      local_c8 = local_c8 + local_c0;
      local_b8 = local_b8 + local_a8;
      local_d8 = local_d8 + local_d0;
      local_e8 = local_e8 + local_e0;
      local_f8 = local_f8 + local_f0;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495ee06a FUN_1495ee06a body=593 status=ok
// SIG undefined FUN_1495ee06a(void)

void FUN_1495ee06a(longlong param_1,char *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_138 [32];
  double *local_118;
  undefined1 local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  float *local_e8;
  int local_e0;
  float *local_d8;
  int local_d0;
  float *local_c8;
  int local_c0;
  float *local_b8;
  int local_b0;
  int *local_a8;
  undefined8 uStack_a0;
  int local_98;
  undefined4 *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined4 *local_68;
  undefined8 uStack_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar2 = 0;
  local_58 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 0;
  FUN_144a98d08();
  local_78 = 0;
  local_88 = (undefined4 *)0x0;
  uStack_80 = 0;
  FUN_144a98dce(&local_88,param_2);
  local_98 = 0;
  local_a8 = (int *)0x0;
  uStack_a0 = 0;
  FUN_144a76d88(&local_a8,param_2);
  FUN_144a76c20(&local_b8,param_2);
  FUN_144a76c20(&local_c8,param_2);
  FUN_144a76c20(&local_d8,param_2);
  FUN_144a76c20(&local_e8,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    do {
      local_f8 = 0.0;
      dStack_f0 = 0.0;
      local_108 = 0.0;
      dStack_100 = 0.0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        local_110 = *local_a8 != 0;
        local_118 = &local_108;
        FUN_1495d944c(*(longlong *)(param_1 + 0x38),*local_68,param_3,*local_88);
      }
      *local_b8 = (float)local_108;
      *local_c8 = (float)dStack_100;
      *local_d8 = (float)local_f8;
      *local_e8 = (float)dStack_f0;
      local_68 = local_68 + local_58;
      local_88 = local_88 + local_78;
      local_b8 = local_b8 + local_b0;
      local_a8 = local_a8 + local_98;
      local_c8 = local_c8 + local_c0;
      local_d8 = local_d8 + local_d0;
      local_e8 = local_e8 + local_e0;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_50 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495ee2bc FUN_1495ee2bc body=265 status=ok
// SIG undefined FUN_1495ee2bc(void)

void FUN_1495ee2bc(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 *local_68;
  int local_60;
  undefined4 *local_58;
  undefined8 uStack_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = (undefined4 *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08();
  FUN_144a76c20(&local_68,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    iVar2 = 0;
    do {
      local_6c = *local_58;
      local_70 = 0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_1495d8a56(*(longlong *)(param_1 + 0x38),&local_6c,&local_70);
      }
      *local_68 = local_70;
      local_58 = local_58 + local_48;
      local_68 = local_68 + local_60;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495ee3c6 FUN_1495ee3c6 body=351 status=ok
// SIG undefined FUN_1495ee3c6(void)

void FUN_1495ee3c6(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_c8 [36];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 *local_98;
  int local_90;
  undefined4 *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined4 *local_68;
  undefined8 uStack_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar2 = 0;
  local_58 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 0;
  FUN_144a98d08();
  local_78 = 0;
  local_88 = (undefined4 *)0x0;
  uStack_80 = 0;
  FUN_144a98dce(&local_88,param_2);
  FUN_144a76c20(&local_98,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    do {
      local_9c = *local_68;
      local_a0 = *local_88;
      local_a4 = 0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_1495d8c2c(*(longlong *)(param_1 + 0x38),&local_9c,&local_a0,&local_a4);
      }
      *local_98 = local_a4;
      local_68 = local_68 + local_58;
      local_88 = local_88 + local_78;
      local_98 = local_98 + local_90;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495ee526 FUN_1495ee526 body=255 status=ok
// SIG undefined FUN_1495ee526(void)

void FUN_1495ee526(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 *local_68;
  int local_60;
  undefined4 *local_58;
  undefined8 uStack_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = (undefined4 *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08();
  FUN_144a76cd4(&local_68,param_2);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    iVar2 = 0;
    do {
      local_6c = *local_58;
      local_70 = 0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_1495d962a(*(longlong *)(param_1 + 0x38),&local_6c,&local_70);
      }
      *local_68 = local_70;
      local_58 = local_58 + local_48;
      local_68 = local_68 + local_60;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495ee626 FUN_1495ee626 body=543 status=ok
// SIG undefined FUN_1495ee626(void)

void FUN_1495ee626(longlong param_1,undefined4 param_2,char *param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  undefined1 local_110;
  undefined1 local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  float *local_d8;
  int local_d0;
  float *local_c8;
  int local_c0;
  float *local_b8;
  int local_b0;
  undefined4 *local_a8;
  undefined8 uStack_a0;
  int local_98;
  undefined4 *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar5 = 0;
  local_78 = 0;
  local_88 = (undefined4 *)0x0;
  uStack_80 = 0;
  local_64 = param_2;
  FUN_144a98d08(&local_88,param_3);
  local_98 = 0;
  local_a8 = (undefined4 *)0x0;
  uStack_a0 = 0;
  FUN_144a98dce(&local_a8,param_3);
  FUN_144a76c20(&local_b8,param_3);
  FUN_144a76c20(&local_c8,param_3);
  FUN_144a76c20(&local_d8,param_3);
  piVar4 = (int *)(*(longlong *)(param_3 + 0x80) + 0x40);
  if (*param_3 != '\0') {
    piVar4 = (int *)(param_3 + 0x3c);
  }
  if (0 < *piVar4) {
    do {
      uVar2 = *local_88;
      uVar1 = *local_a8;
      local_e8 = DAT_14c8464f0;
      local_f8 = (undefined4)DAT_14c8464e0;
      uStack_f4 = DAT_14c8464e0._4_4_;
      uStack_f0 = (undefined4)DAT_14c8464e8;
      uStack_ec = DAT_14c8464e8._4_4_;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        uVar3 = FUN_1495dc410(*(longlong *)(param_1 + 0x38),&local_64);
        local_108 = param_5;
        local_118 = &local_f8;
        local_110 = param_4;
        FUN_1495da4a6(*(undefined8 *)(param_1 + 0x38),uVar2,uVar3,uVar1);
      }
      *local_b8 = (float)(double)CONCAT44(uStack_f4,local_f8);
      *local_c8 = (float)(double)CONCAT44(uStack_ec,uStack_f0);
      *local_d8 = (float)local_e8;
      local_88 = local_88 + local_78;
      local_a8 = local_a8 + local_98;
      local_b8 = local_b8 + local_b0;
      local_c8 = local_c8 + local_c0;
      local_d8 = local_d8 + local_d0;
      iVar5 = iVar5 + 1;
      piVar4 = (int *)(*(longlong *)(param_3 + 0x80) + 0x40);
      if (*param_3 != '\0') {
        piVar4 = (int *)(param_3 + 0x3c);
      }
    } while (iVar5 < *piVar4);
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495ee846 FUN_1495ee846 body=381 status=ok
// SIG undefined FUN_1495ee846(void)

void FUN_1495ee846(longlong param_1,undefined4 param_2,char *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 local_ac;
  undefined4 *local_a8;
  int local_a0;
  undefined4 *local_98;
  undefined8 uStack_90;
  int local_88;
  undefined4 *local_78;
  undefined8 uStack_70;
  int local_68;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar5 = 0;
  local_68 = 0;
  local_78 = (undefined4 *)0x0;
  uStack_70 = 0;
  local_54 = param_2;
  FUN_144a98d08(&local_78,param_3);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  uStack_90 = 0;
  FUN_144a98dce(&local_98,param_3);
  FUN_144a76c20(&local_a8,param_3);
  piVar4 = (int *)(*(longlong *)(param_3 + 0x80) + 0x40);
  if (*param_3 != '\0') {
    piVar4 = (int *)(param_3 + 0x3c);
  }
  if (0 < *piVar4) {
    do {
      uVar2 = *local_78;
      uVar1 = *local_98;
      local_ac = 0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        uVar3 = FUN_1495dc410(*(longlong *)(param_1 + 0x38),&local_54);
        local_b8 = &local_ac;
        FUN_1495d8134(*(undefined8 *)(param_1 + 0x38),uVar2,uVar3,uVar1);
      }
      *local_a8 = local_ac;
      local_78 = local_78 + local_68;
      local_98 = local_98 + local_88;
      local_a8 = local_a8 + local_a0;
      iVar5 = iVar5 + 1;
      piVar4 = (int *)(*(longlong *)(param_3 + 0x80) + 0x40);
      if (*param_3 != '\0') {
        piVar4 = (int *)(param_3 + 0x3c);
      }
    } while (iVar5 < *piVar4);
  }
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495ee9c4 FUN_1495ee9c4 body=373 status=ok
// SIG undefined FUN_1495ee9c4(void)

void FUN_1495ee9c4(longlong param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 local_ac;
  undefined4 *local_a8;
  int local_a0;
  undefined4 *local_98;
  undefined8 uStack_90;
  int local_88;
  undefined4 *local_78;
  undefined8 uStack_70;
  int local_68;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_54 = 8;
  iVar5 = 0;
  local_68 = 0;
  local_78 = (undefined4 *)0x0;
  uStack_70 = 0;
  FUN_144a98d08();
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  uStack_90 = 0;
  FUN_144a98dce(&local_98,param_2);
  FUN_144a76cd4(&local_a8,param_2);
  piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar4 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar4) {
    do {
      uVar2 = *local_78;
      uVar1 = *local_98;
      local_ac = 0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        uVar3 = FUN_1495dc410(*(longlong *)(param_1 + 0x38),&local_54);
        local_b8 = &local_ac;
        FUN_1495d882e(*(undefined8 *)(param_1 + 0x38),uVar2,uVar3,uVar1);
      }
      *local_a8 = local_ac;
      local_78 = local_78 + local_68;
      local_98 = local_98 + local_88;
      local_a8 = local_a8 + local_a0;
      iVar5 = iVar5 + 1;
      piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar4 = (int *)(param_2 + 0x3c);
      }
    } while (iVar5 < *piVar4);
  }
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495eeb5c FUN_1495eeb5c body=294 status=ok
// SIG undefined FUN_1495eeb5c(void)

void FUN_1495eeb5c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  
  lVar1 = *(longlong *)(param_2 + 0x48);
  uVar4 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  FUN_1495f29c8();
  *(uint *)(param_2 + 0x50) = DAT_14cc1f55c + uVar4;
  puVar5 = (undefined8 *)((ulonglong)uVar4 + *(longlong *)(param_2 + 0x38));
  lVar2 = *(longlong *)(lVar1 + 0x10);
  if (lVar2 == 0) {
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 2) = 0xffffffff;
    *(undefined1 **)((longlong)puVar5 + 0x14) = &DAT_ff7fffffff7fffff;
    uVar3 = FUN_144b36954();
    puVar5[4] = uVar3;
    uVar3 = FUN_144b36964();
    puVar5[5] = uVar3;
    uVar3 = FUN_144b36954();
    puVar5[6] = uVar3;
    uVar3 = FUN_144b36954();
    puVar5[7] = uVar3;
    uVar3 = FUN_144b36964();
    puVar5[8] = uVar3;
    uVar3 = FUN_144b36964();
    puVar5[9] = uVar3;
  }
  else {
    *(undefined4 *)puVar5 = *(undefined4 *)(lVar2 + 0x134);
    *(undefined4 *)((longlong)puVar5 + 4) = *(undefined4 *)(lVar2 + 0x138);
    *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(lVar2 + 0x13c);
    *(undefined4 *)((longlong)puVar5 + 0xc) = *(undefined4 *)(lVar2 + 0x130);
    *(undefined4 *)(puVar5 + 2) = 0xffffffff;
    *(undefined1 **)((longlong)puVar5 + 0x14) = &DAT_ff7fffffff7fffff;
    puVar5[4] = *(undefined8 *)(lVar2 + 0x20);
    puVar5[5] = *(undefined8 *)(lVar2 + 0x50);
    puVar5[6] = *(undefined8 *)(lVar2 + 0x80);
    puVar5[7] = *(undefined8 *)(lVar2 + 0xb0);
    puVar5[8] = *(undefined8 *)(lVar2 + 0xe0);
    puVar5[9] = *(undefined8 *)(lVar2 + 0x110);
    FUN_14454b582(lVar1,*(undefined8 *)(param_2 + 0x40));
    if (*(int *)(lVar1 + 0x48) != 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x40);
      goto LAB_1495eec76;
    }
  }
  uVar3 = FUN_144b36964();
LAB_1495eec76:
  puVar5[10] = uVar3;
  return;
}



// FUNCTION 1495eec82 FUN_1495eec82 body=274 status=ok
// SIG undefined FUN_1495eec82(void)

ulonglong * FUN_1495eec82(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar4 = (ulonglong *)FUN_14001cc68(0x10,0x10);
  *puVar4 = 0;
  puVar4[1] = 0;
  FUN_1495eed96(puVar4,*(undefined4 *)(param_2 + 0x30));
  FUN_1446ddc76(&local_38,"Attribute");
  if ((longlong)*(int *)(param_2 + 0x30) != 0) {
    lVar6 = *(longlong *)(param_2 + 0x28);
    lVar8 = (longlong)*(int *)(param_2 + 0x30) * 0x50 + lVar6;
    do {
      if ((longlong)*(int *)(lVar6 + 0x20) != 0) {
        lVar7 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar6 + 0x18) + lVar7) == local_38) {
            uVar2 = *(undefined8 *)(*(longlong *)(lVar6 + 0x18) + 8 + lVar7);
            iVar1 = (int)puVar4[1];
            *(uint *)(puVar4 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)puVar4 + 0xc) < iVar1 + 1U) {
              FUN_14816c94e(puVar4,iVar1);
            }
            uVar3 = *puVar4;
            uVar5 = ((longlong)uVar3 >> 0x18) + (longlong)puVar4;
            if ((uVar3 & 1) == 0) {
              uVar5 = uVar3;
            }
            *(undefined8 *)(uVar5 + (longlong)iVar1 * 8) = uVar2;
            break;
          }
          lVar7 = lVar7 + 0x10;
        } while ((longlong)*(int *)(lVar6 + 0x20) * 0x10 != lVar7);
      }
      lVar6 = lVar6 + 0x50;
    } while (lVar6 != lVar8);
  }
  if (*(int *)((longlong)puVar4 + 0xc) != (int)puVar4[1]) {
    FUN_148171a8c(puVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar4;
}



// FUNCTION 1495eed96 FUN_1495eed96 body=41 status=ok
// SIG undefined FUN_1495eed96(void)

void FUN_1495eed96(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  FUN_148171a8c();
  return;
}



// FUNCTION 1495eedc0 FUN_1495eedc0 body=21 status=ok
// SIG undefined FUN_1495eedc0(void)

undefined * FUN_1495eedc0(void)

{
  FUN_1460792da();
  return &DAT_14cc1f208;
}



// FUNCTION 1495eedda FUN_1495eedda body=29 status=ok
// SIG undefined FUN_1495eedda(void)

undefined8 FUN_1495eedda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1495eee0c FUN_1495eee0c body=60 status=ok
// SIG undefined FUN_1495eee0c(void)

void FUN_1495eee0c(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd58d30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1495eee48 FUN_1495eee48 body=60 status=ok
// SIG undefined FUN_1495eee48(void)

void FUN_1495eee48(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd58d30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1495eee84 FUN_1495eee84 body=97 status=ok
// SIG undefined FUN_1495eee84(void)

void FUN_1495eee84(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 *puVar1;
  
  EnterCriticalSection(param_2);
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,param_2 + 1);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd58d30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1495eeef0 FUN_1495eeef0 body=20 status=ok
// SIG undefined FUN_1495eeef0(void)

undefined1 FUN_1495eeef0(longlong param_1)

{
  FUN_1495ea716(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1495eef04 FUN_1495eef04 body=29 status=ok
// SIG undefined FUN_1495eef04(void)

undefined8 FUN_1495eef04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1495eef36 FUN_1495eef36 body=60 status=ok
// SIG undefined FUN_1495eef36(void)

void FUN_1495eef36(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd58da0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1495eef72 FUN_1495eef72 body=60 status=ok
// SIG undefined FUN_1495eef72(void)

void FUN_1495eef72(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd58da0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1495eefae FUN_1495eefae body=97 status=ok
// SIG undefined FUN_1495eefae(void)

void FUN_1495eefae(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 *puVar1;
  
  EnterCriticalSection(param_2);
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,param_2 + 1);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd58da0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1495ef01a FUN_1495ef01a body=20 status=ok
// SIG undefined FUN_1495ef01a(void)

undefined1 FUN_1495ef01a(longlong param_1)

{
  FUN_1495ea872(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1495ef02e FUN_1495ef02e body=29 status=ok
// SIG undefined FUN_1495ef02e(void)

undefined8 FUN_1495ef02e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1495ef060 FUN_1495ef060 body=60 status=ok
// SIG undefined FUN_1495ef060(void)

void FUN_1495ef060(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd58e10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1495ef09c FUN_1495ef09c body=60 status=ok
// SIG undefined FUN_1495ef09c(void)

void FUN_1495ef09c(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd58e10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1495ef0d8 FUN_1495ef0d8 body=97 status=ok
// SIG undefined FUN_1495ef0d8(void)

void FUN_1495ef0d8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 *puVar1;
  
  EnterCriticalSection(param_2);
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,param_2 + 1);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd58e10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1495ef144 FUN_1495ef144 body=20 status=ok
// SIG undefined FUN_1495ef144(void)

undefined1 FUN_1495ef144(longlong param_1)

{
  FUN_1495eac54(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1495ef158 FUN_1495ef158 body=29 status=ok
// SIG undefined FUN_1495ef158(void)

undefined8 FUN_1495ef158(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1495ef18a FUN_1495ef18a body=60 status=ok
// SIG undefined FUN_1495ef18a(void)

void FUN_1495ef18a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd58e80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1495ef1c6 FUN_1495ef1c6 body=60 status=ok
// SIG undefined FUN_1495ef1c6(void)

void FUN_1495ef1c6(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd58e80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}


