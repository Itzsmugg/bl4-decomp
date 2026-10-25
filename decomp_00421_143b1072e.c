// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143b1072e FUN_143b1072e body=31 status=ok
// SIG undefined FUN_143b1072e(void)

void FUN_143b1072e(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 0x60)) {
    *(undefined4 *)(param_1 + 100) = 4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 143b1074e FUN_143b1074e body=484 status=ok
// SIG undefined FUN_143b1074e(void)

undefined8 FUN_143b1074e(undefined8 *param_1,uint *param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  uVar8 = *param_2;
  uVar9 = (ulonglong)uVar8;
  if (((-1 < (int)uVar8) &&
      (lVar10 = *(longlong *)*param_1,
      (int)uVar8 < *(int *)(lVar10 + 0x20) * 0x200 + *(int *)(lVar10 + 0x24))) &&
     (uVar8 = *(ushort *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x28) + (ulonglong)(uVar8 >> 9) * 8) +
               (ulonglong)(uVar8 & 0x1ff) * 2) - 1, uVar9 = (ulonglong)uVar8, (ushort)uVar8 < 0xfffe
     )) {
    if ((int)param_3[1] == 0) {
      puVar6 = (undefined8 *)param_1[1];
      uVar19 = (undefined4)*puVar6;
      uVar20 = (undefined4)((ulonglong)*puVar6 >> 0x20);
      uVar21 = (undefined4)puVar6[1];
      uVar22 = (undefined4)((ulonglong)puVar6[1] >> 0x20);
      uVar17 = (undefined4)puVar6[2];
      uVar18 = (undefined4)((ulonglong)puVar6[2] >> 0x20);
      dVar15 = 0.0;
      dVar14 = 0.0;
      dVar13 = 0.0;
    }
    else {
      pdVar4 = (double *)param_1[1];
      dVar1 = pdVar4[2];
      uVar17 = SUB84(dVar1,0);
      uVar18 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar2 = *pdVar4;
      uVar19 = SUB84(dVar2,0);
      uVar20 = (undefined4)((ulonglong)dVar2 >> 0x20);
      dVar3 = pdVar4[1];
      uVar21 = SUB84(dVar3,0);
      uVar22 = (undefined4)((ulonglong)dVar3 >> 0x20);
      dVar13 = 0.0;
      iVar11 = 1;
      lVar12 = 0;
      dVar14 = 0.0;
      dVar15 = 0.0;
      do {
        lVar5 = *(longlong *)
                 (*(longlong *)(lVar10 + 0x10) + (ulonglong)(*(uint *)(*param_3 + lVar12) >> 9) * 8)
        ;
        uVar9 = (ulonglong)(*(uint *)(*param_3 + lVar12) & 0x1ff);
        dVar16 = 1.0 / (double)iVar11;
        dVar15 = dVar16 * ((*(double *)(lVar5 + uVar9 * 0x18) - dVar2) - dVar15) + dVar15;
        dVar14 = ((*(double *)(lVar5 + 8 + uVar9 * 0x18) - dVar3) - dVar14) * dVar16 + dVar14;
        dVar13 = ((*(double *)(lVar5 + 0x10 + uVar9 * 0x18) - dVar1) - dVar13) * dVar16 + dVar13;
        iVar11 = iVar11 + 1;
        lVar12 = lVar12 + 4;
      } while ((longlong)(int)param_3[1] * 4 != lVar12);
    }
    puVar7 = (ulonglong *)param_1[2];
    iVar11 = (int)puVar7[1];
    lVar10 = (longlong)iVar11;
    *(uint *)(puVar7 + 1) = iVar11 + 1U;
    if (*(uint *)((longlong)puVar7 + 0xc) < iVar11 + 1U) {
      FUN_1403e3958(puVar7,iVar11);
    }
    uVar9 = *puVar7;
    *(double *)(uVar9 + lVar10 * 0x18) = (double)CONCAT44(uVar20,uVar19) + dVar15;
    *(double *)(uVar9 + 8 + lVar10 * 0x18) = (double)CONCAT44(uVar22,uVar21) + dVar14;
    *(double *)(uVar9 + 0x10 + lVar10 * 0x18) = (double)CONCAT44(uVar18,uVar17) + dVar13;
  }
  return CONCAT71((int7)(uVar9 >> 8),1);
}



// FUNCTION 143b10958 FUN_143b10958 body=346 status=ok
// SIG undefined FUN_143b10958(void)

void FUN_143b10958(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143b109ea;
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
LAB_143b109ea:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 143b10b02 FUN_143b10b02 body=803 status=ok
// SIG undefined FUN_143b10b02(void)

void FUN_143b10b02(undefined8 *param_1,int *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auStack_188 [32];
  undefined1 **local_168;
  undefined1 **local_160;
  ulonglong local_150;
  int local_148 [4];
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  uint local_100;
  longlong local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  int local_d8 [4];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined8 *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar2 = param_1[2];
  uVar4 = *(uint *)(*(longlong *)*param_1 + (longlong)*param_2 * 4);
  local_150 = (ulonglong)uVar4;
  local_120 = *(longlong *)param_1[1];
  lVar5 = *(longlong *)(*(longlong *)(local_120 + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
  uVar3 = (ulonglong)(uVar4 & 0x1ff);
  local_128 = *(double *)(lVar5 + 0x10 + uVar3 * 0x18);
  uStack_a0 = *(double *)(lVar5 + 8 + uVar3 * 0x18);
  local_a8 = *(double *)(lVar5 + uVar3 * 0x18);
  dVar6 = (local_128 - *(double *)(lVar2 + 0x20)) * *(double *)(lVar2 + 0x58) +
          (local_a8 - *(double *)(lVar2 + 0x10)) * *(double *)(lVar2 + 0x48) +
          (uStack_a0 - *(double *)(lVar2 + 0x18)) * *(double *)(lVar2 + 0x50);
  dVar6 = dVar6 + dVar6;
  local_128 = local_128 - *(double *)(lVar2 + 0x58) * dVar6;
  uStack_a0 = uStack_a0 - *(double *)(lVar2 + 0x50) * dVar6;
  local_a8 = local_a8 - dVar6 * *(double *)(lVar2 + 0x48);
  local_f0 = (longlong *)param_1[3];
  lVar5 = (longlong)(int)uVar4;
  local_108 = *(undefined8 *)(*local_f0 + 0x10 + lVar5 * 0x18);
  puVar1 = (undefined8 *)(*local_f0 + lVar5 * 0x18);
  local_118 = *puVar1;
  uStack_110 = puVar1[1];
  local_e8 = 0x3e45798ee2308c3a;
  local_80 = &LAB_143b10e26;
  local_90 = &LAB_143b10e8e;
  local_168 = &local_90;
  local_160 = &local_80;
  local_100 = uVar4;
  local_f8 = lVar2;
  local_c8 = local_118;
  uStack_c0 = uStack_110;
  local_b8 = local_108;
  local_98 = local_128;
  local_88 = &local_138;
  local_78 = &local_118;
  local_138 = local_a8;
  uStack_130 = uStack_a0;
  FUN_146c80058(param_1[4],local_d8,&local_a8,*(undefined8 *)param_1[5]);
  if ((longlong)local_d8[0] == -1) {
    if (*(double *)(*(longlong *)(lVar2 + 0x60) + lVar5 * 0x10) < *(double *)param_1[6])
    goto LAB_143b10d07;
    local_108 = local_b8;
    local_118 = local_c8;
    uStack_110 = uStack_c0;
    uVar4 = (uint)local_150;
    local_f0 = (longlong *)param_1[3];
    local_e8 = 0x3e45798ee2308c3a;
    local_128 = local_98;
    local_138._0_4_ = (undefined4)local_a8;
    local_138._4_4_ = local_a8._4_4_;
    uStack_130._0_4_ = (undefined4)uStack_a0;
    uStack_130._4_4_ = uStack_a0._4_4_;
    local_120 = *(longlong *)param_1[1];
    local_80 = &LAB_143b10ee2;
    local_90 = &LAB_143b10efe;
    local_168 = &local_90;
    local_160 = &local_80;
    local_100 = uVar4;
    local_f8 = lVar2;
    local_88 = &local_138;
    local_78 = &local_118;
    FUN_146c80058(param_1[4],local_148,&local_a8,*(undefined8 *)param_1[5]);
    if ((longlong)local_148[0] == -1) goto LAB_143b10d07;
    *(uint *)(*(longlong *)(lVar2 + 0x60) + 0xc + (longlong)local_148[0] * 0x10) = uVar4;
    lVar2 = *(longlong *)(lVar2 + 0x60);
    local_d8[0] = local_148[0];
  }
  else {
    *(uint *)(*(longlong *)(lVar2 + 0x60) + 0xc + (longlong)local_d8[0] * 0x10) = uVar4;
    lVar2 = *(longlong *)(lVar2 + 0x60);
  }
  *(int *)(lVar2 + 0xc + lVar5 * 0x10) = local_d8[0];
LAB_143b10d07:
  if ((local_70 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b10f52 FUN_143b10f52 body=346 status=ok
// SIG undefined FUN_143b10f52(void)

void FUN_143b10f52(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143b10fe4;
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
LAB_143b10fe4:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 143b110e6 FUN_143b110e6 body=29 status=ok
// SIG undefined FUN_143b110e6(void)

undefined8 FUN_143b110e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b1116c FUN_143b1116c body=29 status=ok
// SIG undefined FUN_143b1116c(void)

undefined8 FUN_143b1116c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b1118a FUN_143b1118a body=129 status=ok
// SIG undefined FUN_143b1118a(void)

void FUN_143b1118a(undefined8 *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  iVar1 = *param_2;
  pcVar2 = *(char **)*param_1;
  if (pcVar2 != (char *)0x0) {
    if (*pcVar2 != '\0') {
      return;
    }
    pcVar3 = *(code **)(pcVar2 + 0x70);
    plVar6 = (longlong *)(pcVar2 + 0x90);
    if (*(longlong **)(pcVar2 + 0x80) != (longlong *)0x0) {
      plVar6 = *(longlong **)(pcVar2 + 0x80);
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    cVar4 = (*pcVar3)(uVar5);
    *pcVar2 = cVar4;
    if (cVar4 != '\0') {
      return;
    }
  }
  if (*(char *)(*(longlong *)param_1[1] + (longlong)iVar1) != '\x01') {
    return;
  }
  FUN_14833cf7a(param_1[2],(longlong)iVar1 * 0x10 + *(longlong *)param_1[3]);
  return;
}



// FUNCTION 143b11210 FUN_143b11210 body=120 status=ok
// SIG undefined FUN_143b11210(void)

bool FUN_143b11210(undefined8 *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  uVar1 = *param_3;
  plVar2 = (longlong *)*param_1;
  puVar3 = (undefined8 *)*plVar2;
  lVar6 = puVar3[1];
  if (lVar6 == 0) {
    iVar4 = FUN_146bc96d4(*puVar3);
    puVar3 = (undefined8 *)*plVar2;
    lVar6 = puVar3[1];
    if (lVar6 == 0) {
      iVar5 = FUN_146bc96d4(*puVar3,uVar1);
      goto LAB_143b11253;
    }
    lVar6 = *(longlong *)(lVar6 + 0x20);
  }
  else {
    lVar6 = *(longlong *)(lVar6 + 0x20);
    iVar4 = *(int *)(*(longlong *)(lVar6 + (ulonglong)(*param_2 >> 9) * 8) +
                    (ulonglong)(*param_2 & 0x1ff) * 4);
  }
  iVar5 = *(int *)(*(longlong *)(lVar6 + (ulonglong)(uVar1 >> 9) * 8) +
                  (ulonglong)(uVar1 & 0x1ff) * 4);
LAB_143b11253:
  return iVar4 == iVar5;
}



// FUNCTION 143b1128c FUN_143b1128c body=233 status=ok
// SIG undefined FUN_143b1128c(void)

void FUN_143b1128c(longlong *param_1,int *param_2)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_b8 [152];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar5 = (longlong)*param_2;
  plVar6 = (longlong *)*param_1;
  if ((-1 < lVar5) && (*param_2 < (int)plVar6[1])) {
    if (*(char *)(*plVar6 + lVar5 * 0x30) != '\0') {
      plVar6 = (longlong *)(*plVar6 + lVar5 * 0x30 + 8);
      goto LAB_143b112db;
    }
  }
  plVar6 = plVar6 + 6;
LAB_143b112db:
  local_c8 = *(undefined8 *)((undefined4 *)param_1[3] + 2);
  FUN_143b11376(local_b8,param_1[2],plVar6,*(undefined4 *)param_1[3]);
  memcpy((void *)(lVar5 * 0x98 + *(longlong *)param_1[1]),local_b8,0x98);
  pcVar1 = *(char **)param_1[4];
  if ((pcVar1 != (char *)0x0) && (*pcVar1 == '\0')) {
    pcVar2 = *(code **)(pcVar1 + 0x70);
    plVar6 = (longlong *)(pcVar1 + 0x90);
    if (*(longlong **)(pcVar1 + 0x80) != (longlong *)0x0) {
      plVar6 = *(longlong **)(pcVar1 + 0x80);
    }
    uVar4 = (**(code **)(*plVar6 + 8))();
    cVar3 = (*pcVar2)(uVar4);
    *pcVar1 = cVar3;
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b11376 FUN_143b11376 body=3845 status=ok
// SIG undefined FUN_143b11376(void)

double * FUN_143b11376(double *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  double *pdVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  bool bVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  double dVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auStack_a08 [32];
  undefined1 *local_9e8;
  double *local_9e0;
  double local_9d8;
  double local_9d0;
  double local_9c8;
  double local_9c0;
  double local_9b8;
  double local_9b0;
  double local_9a8;
  double local_9a0;
  double local_998;
  double local_990;
  uint local_984;
  undefined4 local_980;
  undefined4 local_97c;
  undefined8 local_978;
  double local_970;
  double local_968;
  double local_960;
  double local_958;
  undefined8 uStack_950;
  double local_948;
  undefined8 uStack_940;
  undefined8 local_938;
  undefined4 local_930;
  double local_928;
  undefined1 local_920 [24];
  double local_908;
  double local_900;
  double local_8f8;
  undefined8 local_8f0;
  longlong local_8e8;
  undefined8 uStack_8e0;
  undefined1 local_8d8 [24];
  undefined1 local_8c0 [24];
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_898;
  longlong local_888;
  undefined8 uStack_880;
  longlong local_878;
  undefined8 uStack_870;
  double local_868 [6];
  undefined1 local_838 [8];
  undefined1 local_830;
  uint local_6e0;
  undefined1 local_6d0 [8];
  undefined1 local_6c8 [32];
  int local_6a8;
  int local_6a4;
  undefined8 *local_6a0;
  longlong local_598;
  int local_588;
  int local_584;
  undefined8 *local_580;
  longlong local_548;
  longlong local_508;
  int local_4f8;
  int local_4f4;
  undefined8 *local_4f0;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_a08;
  local_9e8 = (undefined1 *)((ulonglong)local_9e8 & 0xffffffffffffff00);
  FUN_1482e14f4(local_6d0,param_2,param_3,0);
  FUN_146c38c5e(local_6c8,0);
  if (0 < param_4) {
    FUN_146c38cd0(local_6c8,param_4);
  }
  local_878 = 0;
  uStack_870 = 0;
  local_888 = 0;
  uStack_880 = 0;
  iVar10 = local_6a8 * 0x200 + local_6a4;
  if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar10);
  }
  if (iVar10 != 0) {
    FUN_14475e67c(&local_888,iVar10);
    do {
      uVar18 = uStack_880;
      lVar16 = (longlong)(int)uStack_880;
      uVar4 = (int)uStack_880 + 1;
      uStack_880 = CONCAT44(uStack_880._4_4_,uVar4);
      if (uStack_880._4_4_ < uVar4) {
        FUN_1401c3474(&local_888,uVar18 & 0xffffffff);
      }
      *(undefined1 *)(local_888 + lVar16) = 0;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  uVar11 = local_4f8 * 0x200 + local_4f4;
  uVar4 = 0;
  if ((uVar11 != 0) && (uVar4 = 0, 0xfffd < (ushort)(*(short *)*local_4f0 - 1U))) {
    uVar5 = 1;
    uVar8 = 1;
    if (1 < (int)uVar11) {
      uVar5 = uVar11;
    }
    do {
      uVar4 = uVar5;
      if (uVar5 == uVar8) break;
      uVar7 = uVar8 >> 9;
      uVar12 = uVar8 & 0x1ff;
      uVar4 = uVar8;
      uVar8 = uVar8 + 1;
    } while (0xfffd < (ushort)(*(short *)(local_4f0[uVar7] + (ulonglong)uVar12 * 2) - 1U));
  }
  local_9e0 = param_1;
  if (uVar4 != uVar11) {
    do {
      lVar16 = *(longlong *)(local_508 + (ulonglong)(uVar4 >> 9) * 8);
      if (*(int *)(lVar16 + 0xc + (ulonglong)((uVar4 & 0x1ff) << 4)) == -1) {
        uVar18 = (ulonglong)((uVar4 & 0x1ff) << 4);
        iVar10 = *(int *)(lVar16 + 4 + uVar18);
        iVar14 = *(int *)(lVar16 + uVar18);
        bVar3 = true;
        do {
          bVar15 = bVar3;
          uVar18 = uStack_870;
          if (*(char *)(local_888 + iVar14) == '\0') {
            *(undefined1 *)(local_888 + iVar14) = 1;
            lVar16 = (longlong)(int)uStack_870;
            uVar5 = (int)uStack_870 + 1;
            uStack_870 = CONCAT44(uStack_870._4_4_,uVar5);
            if (uStack_870._4_4_ < uVar5) {
              FUN_14489624a(&local_878,uVar18 & 0xffffffff);
            }
            *(double *)(local_878 + lVar16 * 0x10) = (double)iVar14;
            *(undefined8 *)(local_878 + 8 + lVar16 * 0x10) = 0;
          }
          iVar14 = iVar10;
          bVar3 = false;
        } while (bVar15);
      }
      uVar5 = uVar4 + 1;
      if ((int)(uVar4 + 1) < (int)uVar11) {
        uVar5 = uVar11;
      }
      do {
        uVar8 = uVar5;
        if (uVar5 - 1 == uVar4) break;
        uVar4 = uVar4 + 1;
        uVar8 = uVar4;
      } while (0xfffd < (ushort)(*(short *)(local_4f0[uVar4 >> 9] + (ulonglong)(uVar4 & 0x1ff) * 2)
                                - 1U));
      uVar4 = uVar8;
    } while (uVar4 != uVar11);
  }
  pdVar6 = local_9e0;
  local_8a8 = 0;
  uStack_8a0 = 0;
  local_898 = 0;
  uVar4 = 0;
  uVar11 = local_6a8 * 0x200 + local_6a4;
  if ((uVar11 != 0) && (uVar4 = 0, 0xfffd < (ushort)(*(short *)*local_6a0 - 1U))) {
    uVar5 = 1;
    if ((int)uVar11 < 2) {
      uVar11 = 1;
    }
    do {
      uVar8 = uVar5;
      uVar4 = uVar11;
      if (uVar11 == uVar8) break;
      uVar5 = uVar8 + 1;
      uVar4 = uVar8;
    } while (0xfffd < (ushort)(*(short *)(local_6a0[uVar8 >> 9] + (ulonglong)(uVar8 & 0x1ff) * 2) -
                              1U));
  }
  if ((int)uStack_870 < 1) goto LAB_143b1179a;
  FUN_1483387d2(local_838,local_6c8);
  FUN_148338a7e(local_838,&local_878);
  uVar11 = local_6a8 * 0x200 + local_6a4;
  if (((int)local_6e0 < 0) || ((int)uVar11 <= (int)local_6e0)) {
    if (uVar11 != 0) goto LAB_143b1173c;
LAB_143b1174a:
    uVar4 = 0;
  }
  else {
    uVar4 = local_6e0;
    if (0xfffd < (ushort)(*(short *)(local_6a0[local_6e0 >> 9] + (ulonglong)(local_6e0 & 0x1ff) * 2)
                         - 1U)) {
LAB_143b1173c:
      if ((ushort)(*(short *)*local_6a0 - 1U) < 0xfffe) goto LAB_143b1174a;
      uVar5 = 1;
      if ((int)uVar11 < 2) {
        uVar11 = 1;
      }
      do {
        uVar4 = uVar11;
        if (uVar11 == uVar5) break;
        uVar8 = uVar5 >> 9;
        uVar7 = uVar5 & 0x1ff;
        uVar4 = uVar5;
        uVar5 = uVar5 + 1;
      } while (0xfffd < (ushort)(*(short *)(local_6a0[uVar8] + (ulonglong)uVar7 * 2) - 1U));
    }
  }
  FUN_148338d34(local_838);
LAB_143b1179a:
  local_9e8 = (undefined1 *)CONCAT71(local_9e8._1_7_,1);
  FUN_146c393d4(local_8d8,local_6c8,uVar4,1);
  local_9e8 = local_8d8;
  FUN_146c14204(local_6c8,local_8c0,uVar4,0);
  FUN_1483301a8(local_838,local_6c8);
  local_830 = 3;
  FUN_1483302ca(local_838,uVar4,local_8c0,0x47efffffe0000000);
  pdVar6[3] = DAT_14c8464f0;
  dVar22 = DAT_14c8464e8;
  pdVar6[1] = DAT_14c8464e0;
  pdVar6[2] = dVar22;
  pdVar6[4] = 1.0;
  pdVar6[0x12] = 1.0;
  local_8e8 = 0;
  uStack_8e0 = 0;
  local_8f0 = 0x8000000080;
  local_868[0] = 0.0;
  FUN_146bfae00();
  uVar11 = local_588 * 0x200 + local_584;
  uVar4 = 0;
  if ((uVar11 != 0) && (uVar4 = 0, 0xfffd < (ushort)(*(short *)*local_580 - 1U))) {
    uVar5 = 1;
    uVar8 = 1;
    if (1 < (int)uVar11) {
      uVar5 = uVar11;
    }
    do {
      uVar4 = uVar5;
      if (uVar5 == uVar8) break;
      uVar7 = uVar8 >> 9;
      uVar12 = uVar8 & 0x1ff;
      uVar4 = uVar8;
      uVar8 = uVar8 + 1;
    } while (0xfffd < (ushort)(*(short *)(local_580[uVar7] + (ulonglong)uVar12 * 2) - 1U));
  }
  if (uVar4 == uVar11) {
    local_9d8 = local_9e0[3];
    uVar21 = 0xffffffff;
    uVar33 = 0x7fefffff;
    uVar20 = 0xffffffff;
    uVar19 = 0xffefffff;
    dVar23 = 0.0;
    dVar25 = 1.79769313486232e+308;
    dVar27 = 0.0;
    dVar24 = 0.0;
    dVar22 = 0.0;
    dVar30 = 1.79769313486232e+308;
    uVar34 = uVar21;
    uVar35 = uVar33;
    uVar39 = uVar21;
    uVar40 = uVar33;
    uVar41 = uVar20;
    uVar42 = uVar19;
    dVar29 = -1.79769313486232e+308;
    dVar28 = -1.79769313486232e+308;
    dVar38 = -1.79769313486232e+308;
    dVar1 = local_9e0[2];
    dVar26 = pdVar6[1];
  }
  else {
    local_998 = local_9e0[2];
    local_9d8 = local_9e0[3];
    uVar20 = 0xffffffff;
    uVar19 = 0xffefffff;
    uVar39 = 0xffffffff;
    uVar40 = 0x7fefffff;
    dVar22 = 0.0;
    local_9b0 = 0.0;
    local_9d0 = 1.79769313486232e+308;
    local_9c8 = 1.79769313486232e+308;
    local_9c0 = -1.79769313486232e+308;
    local_9b8 = -1.79769313486232e+308;
    dVar27 = 0.0;
    local_9a0 = 1.79769313486232e+308;
    local_9a8 = -1.79769313486232e+308;
    dVar23 = 0.0;
    uVar21 = uVar39;
    uVar33 = uVar40;
    uVar34 = uVar39;
    uVar35 = uVar40;
    uVar41 = uVar20;
    uVar42 = uVar19;
    local_990 = pdVar6[1];
    local_984 = uVar11;
    do {
      local_958 = (double)CONCAT44(uVar42,uVar41);
      uStack_950 = 0;
      local_968 = (double)CONCAT44(uVar35,uVar34);
      local_948 = (double)CONCAT44(uVar19,uVar20);
      uStack_940 = 0;
      lVar16 = *(longlong *)(local_598 + (ulonglong)(uVar4 >> 9) * 8);
      uVar18 = (ulonglong)(uVar4 & 0x1ff);
      uVar20 = *(undefined4 *)(lVar16 + uVar18 * 0xc);
      local_980 = *(undefined4 *)(lVar16 + 4 + uVar18 * 0xc);
      local_97c = *(undefined4 *)(lVar16 + 8 + uVar18 * 0xc);
      local_9e8 = local_920;
      local_970 = dVar22;
      local_960 = dVar27;
      FUN_146c1477c(local_6c8,uVar4,&local_908,&local_928);
      dVar24 = local_928;
      dVar22 = local_8f8 * local_928;
      dVar27 = local_900 * local_928;
      dVar38 = local_908 * local_928;
      FUN_146c14aac(local_6c8,local_868);
      dVar25 = local_928;
      if (local_868[0] <= (double)CONCAT44(uVar33,uVar21)) {
        uVar21 = SUB84(local_868[0],0);
        uVar33 = (undefined4)((ulonglong)local_868[0] >> 0x20);
      }
      local_978 = CONCAT44(uVar33,uVar21);
      uVar19 = SUB84(local_9d0,0);
      uVar21 = (undefined4)((ulonglong)local_9d0 >> 0x20);
      if (local_868[1] <= local_9d0) {
        uVar19 = SUB84(local_868[1],0);
        uVar21 = (undefined4)((ulonglong)local_868[1] >> 0x20);
      }
      local_9d0 = (double)CONCAT44(uVar21,uVar19);
      uVar19 = SUB84(local_9c8,0);
      uVar21 = (undefined4)((ulonglong)local_9c8 >> 0x20);
      if (local_868[2] <= local_9c8) {
        uVar19 = SUB84(local_868[2],0);
        uVar21 = (undefined4)((ulonglong)local_868[2] >> 0x20);
      }
      local_9c8 = (double)CONCAT44(uVar21,uVar19);
      uVar19 = SUB84(local_9a8,0);
      uVar21 = (undefined4)((ulonglong)local_9a8 >> 0x20);
      if (local_9a8 <= local_868[3]) {
        uVar19 = SUB84(local_868[3],0);
        uVar21 = (undefined4)((ulonglong)local_868[3] >> 0x20);
      }
      local_9a8 = (double)CONCAT44(uVar21,uVar19);
      uVar19 = SUB84(local_9c0,0);
      uVar21 = (undefined4)((ulonglong)local_9c0 >> 0x20);
      if (local_9c0 <= local_868[4]) {
        uVar19 = SUB84(local_868[4],0);
        uVar21 = (undefined4)((ulonglong)local_868[4] >> 0x20);
      }
      local_9c0 = (double)CONCAT44(uVar21,uVar19);
      uVar19 = SUB84(local_9b8,0);
      uVar21 = (undefined4)((ulonglong)local_9b8 >> 0x20);
      if (local_9b8 <= local_868[5]) {
        uVar19 = SUB84(local_868[5],0);
        uVar21 = (undefined4)((ulonglong)local_868[5] >> 0x20);
      }
      local_9b8 = (double)CONCAT44(uVar21,uVar19);
      iVar10 = FUN_148375e1c((longlong)&local_8f0 + 4,&local_908);
      *(double *)(local_8e8 + (longlong)iVar10 * 8) =
           dVar25 + *(double *)(local_8e8 + (longlong)iVar10 * 8);
      lVar16 = FUN_1483741d2(local_838,uVar20);
      uVar21 = uVar39;
      uVar33 = uVar40;
      uVar34 = uVar39;
      uVar35 = uVar40;
      if (lVar16 != 0) {
        uVar21 = 0xffffffff;
        uVar33 = 0x7fefffff;
        uVar34 = 0xffffffff;
        uVar35 = 0x7fefffff;
        if (*(char *)(lVar16 + 0x20) == '\x01') {
          uVar34 = (undefined4)*(undefined8 *)(lVar16 + 0x10);
          uVar35 = (undefined4)((ulonglong)*(undefined8 *)(lVar16 + 0x10) >> 0x20);
          uVar21 = (undefined4)*(undefined8 *)(lVar16 + 0x18);
          uVar33 = (undefined4)((ulonglong)*(undefined8 *)(lVar16 + 0x18) >> 0x20);
        }
      }
      local_868[0] = (double)CONCAT44(uVar35,uVar34);
      local_868[1] = (double)CONCAT44(uVar33,uVar21);
      lVar16 = FUN_1483741d2(local_838,local_980);
      uVar31 = uVar39;
      uVar32 = uVar40;
      uVar36 = uVar39;
      uVar37 = uVar40;
      if (lVar16 != 0) {
        uVar31 = 0xffffffff;
        uVar32 = 0x7fefffff;
        uVar36 = 0xffffffff;
        uVar37 = 0x7fefffff;
        if (*(char *)(lVar16 + 0x20) == '\x01') {
          uVar36 = (undefined4)*(undefined8 *)(lVar16 + 0x10);
          uVar37 = (undefined4)((ulonglong)*(undefined8 *)(lVar16 + 0x10) >> 0x20);
          uVar31 = (undefined4)*(undefined8 *)(lVar16 + 0x18);
          uVar32 = (undefined4)((ulonglong)*(undefined8 *)(lVar16 + 0x18) >> 0x20);
        }
      }
      local_868[2] = (double)CONCAT44(uVar37,uVar36);
      local_868[3] = (double)CONCAT44(uVar32,uVar31);
      lVar16 = FUN_1483741d2(local_838,local_97c);
      local_868[4] = 1.79769313486232e+308;
      uVar20 = uVar39;
      uVar19 = uVar40;
      if (lVar16 != 0) {
        uVar20 = 0xffffffff;
        uVar19 = 0x7fefffff;
        local_868[4] = 1.79769313486232e+308;
        if (*(char *)(lVar16 + 0x20) == '\x01') {
          local_868[4] = *(double *)(lVar16 + 0x10);
          uVar20 = (undefined4)*(undefined8 *)(lVar16 + 0x18);
          uVar19 = (undefined4)((ulonglong)*(undefined8 *)(lVar16 + 0x18) >> 0x20);
        }
      }
      local_990 = local_990 + dVar38;
      local_998 = local_998 + dVar27;
      local_9d8 = local_9d8 + dVar22;
      dVar24 = local_9b0 + dVar24;
      dVar22 = (double)CONCAT44(uVar33,uVar21);
      dVar38 = (double)CONCAT44(uVar35,uVar34);
      dVar1 = (double)CONCAT44(uVar35,uVar34);
      dVar25 = (double)CONCAT44(uVar33,uVar21);
      dVar27 = ((double)CONCAT44(uVar19,uVar20) - (double)CONCAT44(uVar33,uVar21)) *
               ((double)CONCAT44(uVar37,uVar36) - (double)CONCAT44(uVar35,uVar34)) -
               (local_868[4] - (double)CONCAT44(uVar35,uVar34)) *
               ((double)CONCAT44(uVar32,uVar31) - (double)CONCAT44(uVar33,uVar21));
      uVar17 = -(ulonglong)(-dVar27 <= dVar27);
      dVar27 = (double)(~uVar17 & (ulonglong)-dVar27 | (ulonglong)dVar27 & uVar17) * 0.5;
      dVar26 = (double)CONCAT44(uVar35,uVar34);
      if (local_9a0 <= (double)CONCAT44(uVar35,uVar34)) {
        dVar26 = local_9a0;
      }
      if ((double)CONCAT44(uVar35,uVar34) <= local_958) {
        uVar34 = SUB84(local_958,0);
        uVar35 = (undefined4)((ulonglong)local_958 >> 0x20);
      }
      dVar30 = (double)CONCAT44(uVar33,uVar21);
      if (local_968 <= (double)CONCAT44(uVar33,uVar21)) {
        dVar30 = local_968;
      }
      if ((double)CONCAT44(uVar33,uVar21) <= local_948) {
        uVar21 = SUB84(local_948,0);
        uVar33 = (undefined4)((ulonglong)local_948 >> 0x20);
      }
      dVar29 = (double)CONCAT44(uVar37,uVar36);
      if (dVar26 <= (double)CONCAT44(uVar37,uVar36)) {
        dVar29 = dVar26;
      }
      dVar26 = (double)CONCAT44(uVar32,uVar31);
      if (dVar30 <= (double)CONCAT44(uVar32,uVar31)) {
        dVar26 = dVar30;
      }
      dVar30 = local_928;
      if (local_928 <= dVar27) {
        dVar30 = dVar27;
      }
      dVar28 = local_928;
      if (dVar27 <= local_928) {
        dVar28 = dVar27;
      }
      dVar2 = dVar30 / dVar28;
      if (100.0 <= dVar30 / dVar28) {
        dVar2 = 100.0;
      }
      uVar17 = -(ulonglong)
                (0.0 < ((local_868[4] * dVar25 - dVar1 * (double)CONCAT44(uVar19,uVar20)) +
                       ((double)CONCAT44(uVar37,uVar36) * (double)CONCAT44(uVar19,uVar20) -
                       local_868[4] * (double)CONCAT44(uVar32,uVar31)) +
                       (dVar38 * (double)CONCAT44(uVar32,uVar31) -
                       (double)CONCAT44(uVar37,uVar36) * dVar22)) * 0.5);
      dVar22 = (double)(uVar17 & 0x4059000000000000 | ~uVar17 & (ulonglong)dVar2);
      local_868[5] = (double)CONCAT44(uVar19,uVar20);
      lVar16 = *(longlong *)(local_548 + (ulonglong)(uVar4 >> 9) * 8);
      local_938 = *(undefined8 *)(lVar16 + uVar18 * 0xc);
      local_930 = *(undefined4 *)(lVar16 + 8 + uVar18 * 0xc);
      pdVar6 = local_868 + 1;
      lVar16 = 0;
      do {
        uVar11 = *(uint *)((longlong)&local_938 + lVar16 * 4);
        lVar9 = lVar16 + 1;
        if (*(int *)(*(longlong *)(local_508 + (ulonglong)(uVar11 >> 9) * 8) + 0xc +
                    (ulonglong)((uVar11 & 0x1ff) << 4)) == -1) {
          lVar13 = lVar9;
          if (lVar16 == 2) {
            lVar13 = 0;
          }
          dVar23 = dVar23 + SQRT((local_868[lVar13 * 2] - pdVar6[-1]) *
                                 (local_868[lVar13 * 2] - pdVar6[-1]) +
                                 (local_868[lVar13 * 2 + 1] - *pdVar6) *
                                 (local_868[lVar13 * 2 + 1] - *pdVar6));
        }
        pdVar6 = pdVar6 + 2;
        lVar16 = lVar9;
      } while (lVar9 != 3);
      if ((double)CONCAT44(uVar37,uVar36) <= (double)CONCAT44(uVar35,uVar34)) {
        uVar36 = uVar34;
        uVar37 = uVar35;
      }
      if ((double)CONCAT44(uVar32,uVar31) <= (double)CONCAT44(uVar33,uVar21)) {
        uVar31 = uVar21;
        uVar32 = uVar33;
      }
      dVar27 = local_960 + dVar27;
      dVar25 = local_868[4];
      if (dVar29 <= local_868[4]) {
        dVar25 = dVar29;
      }
      uVar41 = SUB84(local_868[4],0);
      uVar42 = (int)((ulonglong)local_868[4] >> 0x20);
      if (local_868[4] <= (double)CONCAT44(uVar37,uVar36)) {
        uVar41 = uVar36;
        uVar42 = uVar37;
      }
      uVar34 = uVar20;
      uVar35 = uVar19;
      if (dVar26 <= (double)CONCAT44(uVar19,uVar20)) {
        uVar34 = SUB84(dVar26,0);
        uVar35 = (undefined4)((ulonglong)dVar26 >> 0x20);
      }
      if ((double)CONCAT44(uVar19,uVar20) <= (double)CONCAT44(uVar32,uVar31)) {
        uVar20 = uVar31;
        uVar19 = uVar32;
      }
      dVar22 = local_970 + local_928 * dVar22 * dVar22;
      uVar11 = uVar4 + 1;
      if ((int)(uVar4 + 1) < (int)local_984) {
        uVar11 = local_984;
      }
      uVar21 = (undefined4)local_978;
      uVar33 = (undefined4)((ulonglong)local_978 >> 0x20);
      do {
        uVar5 = uVar11;
        if (uVar11 - 1 == uVar4) break;
        uVar4 = uVar4 + 1;
        uVar5 = uVar4;
      } while (0xfffd < (ushort)(*(short *)(local_580[uVar4 >> 9] + (ulonglong)(uVar4 & 0x1ff) * 2)
                                - 1U));
      uVar4 = uVar5;
      local_9b0 = dVar24;
      local_9a0 = dVar25;
    } while (uVar4 != local_984);
    local_9e0[2] = local_998;
    local_9e0[3] = local_9d8;
    uVar39 = SUB84(local_9d0,0);
    uVar40 = (undefined4)((ulonglong)local_9d0 >> 0x20);
    dVar30 = local_9c8;
    dVar29 = local_9a8;
    dVar28 = local_9c0;
    dVar38 = local_9b8;
    dVar1 = local_998;
    dVar26 = local_990;
  }
  pdVar6 = local_9e0;
  local_9e0[1] = dVar26;
  local_9e0[0xf] = dVar24;
  local_9e0[9] = (double)CONCAT44(uVar33,uVar21);
  local_9e0[10] = (double)CONCAT44(uVar40,uVar39);
  local_9e0[0xb] = dVar30;
  local_9e0[0xc] = dVar29;
  local_9e0[0xd] = dVar28;
  local_9e0[0xe] = dVar38;
  local_9e0[0x10] = dVar27;
  local_9e0[5] = dVar25;
  local_9e0[7] = (double)CONCAT44(uVar42,uVar41);
  local_9e0[6] = (double)CONCAT44(uVar35,uVar34);
  local_9e0[8] = (double)CONCAT44(uVar19,uVar20);
  local_9e0[0x11] = dVar23;
  if (dVar22 < 0.0) {
    sqrt(dVar22);
  }
  *pdVar6 = dVar22 / dVar24;
  dVar22 = local_9d8 * local_9d8 + dVar26 * dVar26 + dVar1 * dVar1;
  if (9.99999993922529e-09 < dVar22) {
    dVar22 = 1.0 / SQRT(dVar22);
    pdVar6[1] = dVar26 * dVar22;
    pdVar6[2] = dVar1 * dVar22;
    pdVar6[3] = local_9d8 * dVar22;
  }
  lVar16 = (longlong)(int)local_8f0;
  dVar22 = 0.0;
  if (0 < lVar16) {
    lVar9 = 0;
    iVar10 = 0;
    dVar23 = 0.0;
    do {
      dVar22 = *(double *)(local_8e8 + lVar9 * 8);
      if (0.0 < dVar22) {
        dVar23 = dVar23 + dVar22;
      }
      iVar10 = iVar10 + (uint)(0.0 < dVar22);
      lVar9 = lVar9 + 1;
    } while (lVar16 != lVar9);
    dVar22 = 0.0;
    lVar9 = 0;
    do {
      dVar24 = *(double *)(local_8e8 + lVar9 * 8);
      uVar18 = -(ulonglong)(0.0 < dVar24);
      dVar22 = (double)(~uVar18 & (ulonglong)dVar22 |
                       (ulonglong)((dVar24 / dVar23) / (double)iVar10 + dVar22) & uVar18);
      lVar9 = lVar9 + 1;
    } while (lVar16 != lVar9);
  }
  pdVar6[4] = 1.0 / dVar22;
  if (dVar27 < 0.0) {
    dVar27 = sqrt(dVar27);
  }
  else {
    dVar27 = SQRT(dVar27);
  }
  dVar25 = (double)CONCAT44(uVar42,uVar41) - dVar25;
  dVar22 = (double)CONCAT44(uVar19,uVar20) - (double)CONCAT44(uVar35,uVar34);
  dVar22 = (double)(-(ulonglong)(0.0 <= dVar22) & (ulonglong)dVar22) *
           (double)(-(ulonglong)(0.0 <= dVar25) & (ulonglong)dVar25);
  dVar22 = (double)(-(ulonglong)(dVar22 <= dVar27) & (ulonglong)dVar27 |
                   ~-(ulonglong)(dVar22 <= dVar27) & (ulonglong)dVar22) /
           (double)(-(ulonglong)(dVar27 <= dVar22) & (ulonglong)dVar27 |
                   ~-(ulonglong)(dVar27 <= dVar22) & (ulonglong)dVar22);
  if (dVar22 < 0.0) {
    dVar22 = sqrt(dVar22);
  }
  else {
    dVar22 = SQRT(dVar22);
  }
  pdVar6[0x12] = dVar22;
  if (local_8e8 != 0) {
    FUN_1400020a8();
  }
  FUN_148330418(local_838);
  if (local_888 != 0) {
    FUN_1400020a8();
  }
  if (local_878 != 0) {
    FUN_1400020a8();
  }
  FUN_1482e1868(local_6d0);
  if ((local_f0 ^ (ulonglong)auStack_a08) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pdVar6;
}



// FUNCTION 143b1227e FUN_143b1227e body=363 status=ok
// SIG undefined FUN_143b1227e(void)

void FUN_143b1227e(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143b12314;
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
LAB_143b12314:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 143b123ea FUN_143b123ea body=265 status=ok
// SIG undefined FUN_143b123ea(void)

void FUN_143b123ea(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0xa0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
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



// FUNCTION 143b124f4 FUN_143b124f4 body=483 status=ok
// SIG undefined FUN_143b124f4(void)

void FUN_143b124f4(undefined8 *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  code *pcVar5;
  ulonglong uVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_e0 [152];
  void *local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar11 = (longlong *)param_1[1];
  lVar1 = *(longlong *)*param_1 + (longlong)*param_2 * 0xa0;
  iVar2 = *(int *)(*(longlong *)*param_1 + (longlong)*param_2 * 0xa0);
  if (((longlong)iVar2 < 0) || ((int)plVar11[1] <= iVar2)) {
LAB_143b1255c:
    plVar10 = plVar11 + 6;
  }
  else {
    lVar8 = (longlong)iVar2 * 0x30;
    if (*(char *)(*plVar11 + lVar8) == '\0') goto LAB_143b1255c;
    plVar10 = (longlong *)(*plVar11 + lVar8 + 8);
  }
  iVar2 = *(int *)(lVar1 + 4);
  if ((-1 < (longlong)iVar2) && (iVar2 < (int)plVar11[1])) {
    lVar8 = (longlong)iVar2 * 0x30;
    if (*(char *)(*plVar11 + lVar8) != '\0') {
      plVar11 = (longlong *)(*plVar11 + lVar8 + 8);
      goto LAB_143b1258e;
    }
  }
  plVar11 = plVar11 + 6;
LAB_143b1258e:
  local_48 = (void *)0x0;
  uStack_40 = 0;
  uVar3 = *(uint *)(plVar10 + 1);
  if ((longlong)(int)uVar3 != 0) {
    uStack_40 = (ulonglong)uVar3;
    FUN_1446f48e2(&local_48,0);
    memcpy(local_48,(void *)*plVar10,(longlong)(int)uVar3 << 2);
  }
  uVar6 = uStack_40;
  uVar3 = *(uint *)(plVar11 + 1);
  if ((longlong)(int)uVar3 != 0) {
    iVar2 = (int)uStack_40;
    lVar8 = (longlong)(int)uStack_40;
    uStack_40 = CONCAT44(uStack_40._4_4_,(int)uStack_40 + uVar3);
    if ((uint)(uStack_40._4_4_ - iVar2) < uVar3) {
      FUN_1446f48e2(&local_48,uVar6 & 0xffffffff);
    }
    memcpy((void *)(lVar8 * 4 + (longlong)local_48),(void *)*plVar11,(longlong)(int)uVar3 << 2);
  }
  local_e8 = *(undefined8 *)((undefined4 *)param_1[3] + 2);
  FUN_143b11376(local_e0,param_1[2],&local_48,*(undefined4 *)param_1[3]);
  memcpy((void *)(lVar1 + 8),local_e0,0x98);
  pcVar4 = *(char **)param_1[4];
  if ((pcVar4 != (char *)0x0) && (*pcVar4 == '\0')) {
    pcVar5 = *(code **)(pcVar4 + 0x70);
    plVar11 = (longlong *)(pcVar4 + 0x90);
    if (*(longlong **)(pcVar4 + 0x80) != (longlong *)0x0) {
      plVar11 = *(longlong **)(pcVar4 + 0x80);
    }
    uVar9 = (**(code **)(*plVar11 + 8))();
    cVar7 = (*pcVar5)(uVar9);
    *pcVar4 = cVar7;
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b126d8 FUN_143b126d8 body=260 status=ok
// SIG undefined FUN_143b126d8(void)

double FUN_143b126d8(undefined8 *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar1 = *(longlong *)*param_1;
  lVar2 = (longlong)param_2[1] * 0x98;
  lVar3 = (longlong)*param_2 * 0x98;
  dVar5 = *(double *)(lVar1 + 0x18 + lVar3) * *(double *)(lVar1 + 0x18 + lVar2) +
          *(double *)(lVar1 + 8 + lVar3) * *(double *)(lVar1 + 8 + lVar2) +
          *(double *)(lVar1 + 0x10 + lVar3) * *(double *)(lVar1 + 0x10 + lVar2);
  dVar7 = 1.0;
  if (dVar5 <= 1.0) {
    dVar7 = dVar5;
  }
  dVar5 = acos((double)(-(ulonglong)(dVar5 < -1.0) & 0xbff0000000000000 |
                       ~-(ulonglong)(dVar5 < -1.0) & (ulonglong)dVar7));
  dVar7 = *(double *)(param_2 + 2) - *(double *)(*(longlong *)*param_1 + (longlong)*param_2 * 0x98);
  uVar4 = -(ulonglong)(-dVar7 <= dVar7);
  dVar7 = (double)(~uVar4 & (ulonglong)-dVar7 | (ulonglong)dVar7 & uVar4);
  dVar6 = *(double *)(param_2 + 2) -
          *(double *)(*(longlong *)*param_1 + (longlong)param_2[1] * 0x98);
  uVar4 = -(ulonglong)(-dVar6 <= dVar6);
  dVar6 = (double)(~uVar4 & (ulonglong)-dVar6 | (ulonglong)dVar6 & uVar4);
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  return dVar5 * 10.0 + dVar7;
}



// FUNCTION 143b12872 FUN_143b12872 body=29 status=ok
// SIG undefined FUN_143b12872(void)

undefined8 FUN_143b12872(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b128cc FUN_143b128cc body=29 status=ok
// SIG undefined FUN_143b128cc(void)

undefined8 FUN_143b128cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b128e9 FUN_143b128e9 body=98 status=ok
// SIG undefined FUN_143b128e9(void)

void FUN_143b128e9(void)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = 0;
  local_18 = 0;
  FUN_14078dbce(&DAT_14cb46750,L"modeling.DisableAutoUVAreaDensitySampling",&local_c,
                L"If set, return the behavior of AutoUV\'s PatchBuilder algorithm to the legacy behavior."
               );
  atexit(FUN_143b0a2bc);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b1294c FUN_143b1294c body=92 status=ok
// SIG undefined FUN_143b1294c(void)

ulonglong FUN_143b1294c(int *param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *param_1;
  uVar2 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  if ((*(int *)(param_2 + 0x4c) != iVar1 && *(int *)(param_2 + 0x48) != iVar1) &&
      (*(int *)(param_2 + 0x44) != iVar1 && *(int *)(param_2 + 0x40) != iVar1)) {
    iVar1 = param_1[1];
    uVar2 = (ulonglong)
            CONCAT31((int3)((uint)iVar1 >> 8),
                     (*(int *)(param_2 + 0x4c) == iVar1 || *(int *)(param_2 + 0x48) == iVar1) ||
                     (*(int *)(param_2 + 0x44) == iVar1 || *(int *)(param_2 + 0x40) == iVar1));
  }
  return uVar2;
}



// FUNCTION 143b129a8 FUN_143b129a8 body=3887 status=ok
// SIG undefined FUN_143b129a8(void)

/* WARNING: Removing unreachable block (ram,0x000143b12ae2) */
/* WARNING: Removing unreachable block (ram,0x000143b12aed) */
/* WARNING: Removing unreachable block (ram,0x000143b12af1) */
/* WARNING: Removing unreachable block (ram,0x000143b12bfb) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffdc8 : 0x000143b12bff */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_143b129a8(code *param_1,int param_2,int param_3,longlong *param_4,undefined1 *param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  void *_Src;
  double dVar4;
  double dVar5;
  code **ppcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  uint *puVar17;
  undefined1 **ppuVar18;
  int iVar19;
  longlong *plVar20;
  uint uVar21;
  undefined8 *puVar22;
  code *pcVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  undefined1 uVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  ulonglong uVar34;
  ulonglong *puVar35;
  longlong lVar36;
  ulonglong uVar37;
  uint uVar38;
  uint uVar39;
  undefined1 auStack_578 [32];
  int *local_558;
  undefined1 *local_550;
  code *local_540;
  int local_534;
  longlong *local_530;
  ulonglong local_528;
  undefined8 uStack_520;
  undefined8 *local_518;
  ulonglong uStack_510;
  longlong *local_508;
  undefined8 uStack_500;
  undefined1 *local_4f8;
  longlong local_4e8;
  int local_4e0;
  longlong local_4d8;
  ulonglong uStack_4d0;
  longlong local_4c0 [2];
  ulonglong uStack_4b0;
  longlong local_4a8;
  undefined8 uStack_4a0;
  code *local_498;
  code **local_490;
  undefined1 local_485;
  int local_484;
  undefined1 local_480 [7];
  undefined1 local_479;
  undefined8 local_478;
  undefined8 local_468;
  code *local_438;
  code **ppcStack_430;
  undefined1 **local_428;
  longlong *plStack_420;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined8 *local_3f8;
  int iStack_3f0;
  uint uStack_3ec;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined1 local_3a8;
  code *local_398;
  code **ppcStack_390;
  undefined1 **local_388;
  longlong *plStack_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  longlong local_2b8;
  code *local_298 [2];
  undefined8 local_288 [6];
  undefined1 *local_258;
  int iStack_250;
  uint uStack_24c;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined **local_238;
  undefined1 *puStack_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  code *local_f8;
  int iStack_f0;
  uint uStack_ec;
  longlong *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong local_70;
  
  puStack_230 = uStack_d0;
  local_238 = local_d8;
  uVar11 = uStack_21c;
  uVar10 = uStack_220;
  uVar9 = uStack_224;
  uVar8 = local_228;
  uVar7 = uStack_23c;
  uVar2 = uStack_240;
  uVar39 = uStack_24c;
  iVar15 = iStack_250;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_578;
  iVar29 = *(int *)(*(longlong *)param_1 + 0x50);
  if (param_2 < *(int *)(*(longlong *)param_1 + 0x50)) {
    iVar29 = param_2;
  }
  local_3d8 = (undefined4)local_d8;
  uStack_3d4 = local_d8._4_4_;
  uStack_3d0 = (undefined4)uStack_d0;
  uStack_3cc = uStack_d0._4_4_;
  local_228 = local_c8;
  uStack_224 = uStack_c4;
  uStack_220 = uStack_c0;
  uStack_21c = uStack_bc;
  local_3c8 = local_c8;
  uStack_3c4 = uStack_c4;
  uStack_3c0 = uStack_c0;
  uStack_3bc = uStack_bc;
  uStack_240 = uStack_e0;
  uStack_23c = uStack_dc;
  local_3e8 = 0;
  uStack_3e4 = 0;
  uStack_3e0 = uStack_e0;
  uStack_3dc = uStack_dc;
  iStack_250 = iStack_f0;
  uStack_24c = uStack_ec;
  local_3f8 = (undefined8 *)0x0;
  iStack_3f0 = iStack_f0;
  uStack_3ec = uStack_ec;
  local_e8 = (longlong *)0x0;
  local_f8 = (code *)&LAB_1483b0cce;
  local_d8 = &PTR_LAB_14ae75360;
  uStack_d0 = &LAB_143b1aab2;
  local_258 = (undefined1 *)0x0;
  local_248 = 0;
  uStack_bc = uVar11;
  uStack_c0 = uVar10;
  uStack_c4 = uVar9;
  local_c8 = uVar8;
  uStack_dc = uVar7;
  uStack_e0 = uVar2;
  uStack_ec = uVar39;
  iStack_f0 = iVar15;
  uStack_d0 = &LAB_143b1aab2;
  local_d8 = &PTR_LAB_14ae75360;
  local_e8 = (longlong *)0x0;
  local_f8 = (code *)&LAB_1483b0cce;
  local_248 = 0;
  local_258 = (undefined1 *)0x0;
  uStack_3bc = uStack_21c;
  uStack_3c0 = uStack_220;
  uStack_3c4 = uStack_224;
  local_3c8 = local_228;
  uStack_3dc = uStack_23c;
  uStack_3e0 = uStack_240;
  uStack_3e4 = 0;
  local_3e8 = 0;
  uStack_3ec = uStack_24c;
  iStack_3f0 = iStack_250;
  local_3f8 = (undefined8 *)0x0;
  local_540 = param_1;
  local_534 = param_3;
  if (param_5 != (undefined1 *)0x0) {
    local_3c8 = uVar8;
    uStack_3c4 = uVar9;
    uStack_3c0 = uVar10;
    uStack_3bc = uVar11;
    local_3d8 = 0x4ae75360;
    uStack_3d4 = 1;
    uStack_3d0 = 0x43b1aab2;
    uStack_3cc = 1;
    local_3e8 = 0;
    uStack_3e4 = 0;
    uStack_3e0 = uVar2;
    uStack_3dc = uVar7;
    local_3f8 = (undefined8 *)&LAB_1483b0cce;
    iStack_3f0 = iVar15;
    uStack_3ec = uVar39;
    local_c8 = local_228;
    uStack_c4 = uStack_224;
    uStack_c0 = uStack_220;
    uStack_bc = uStack_21c;
    local_f8 = FUN_143b1aab6;
    iStack_f0 = iStack_250;
    uStack_ec = uStack_24c;
    local_e8 = (longlong *)0x0;
    uStack_e0 = uStack_240;
    uStack_dc = uStack_23c;
    local_d8 = &PTR_LAB_14ae75420;
    uStack_d0 = param_5;
    local_258 = &LAB_1483b0cce;
    local_238 = &PTR_LAB_14ae75360;
    puStack_230 = &LAB_143b1aab2;
    local_248 = 0;
    iStack_250 = iVar15;
    uStack_24c = uVar39;
    uStack_240 = uVar2;
    uStack_23c = uVar7;
    local_228 = uVar8;
    uStack_224 = uVar9;
    uStack_220 = uVar10;
    uStack_21c = uVar11;
    (*(code *)&LAB_1483b0cfa)(&local_238);
  }
  lVar26 = *(longlong *)local_540;
  uVar28 = *(int *)(lVar26 + 0x140) * 0x200 + *(int *)(lVar26 + 0x144);
  uVar39 = 0;
  if ((uVar28 != 0) &&
     (uVar39 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar26 + 0x148) - 1U))) {
    uVar14 = 1;
    uVar38 = 1;
    if (1 < (int)uVar28) {
      uVar14 = uVar28;
    }
    do {
      uVar39 = uVar14;
      if (uVar14 == uVar38) break;
      uVar21 = uVar38 >> 9;
      uVar30 = uVar38 & 0x1ff;
      uVar39 = uVar38;
      uVar38 = uVar38 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar26 + 0x148))[uVar21] +
                                         (ulonglong)uVar30 * 2) - 1U));
  }
  dVar5 = 0.0;
LAB_143b12c7d:
  if (uVar39 != uVar28) {
    dVar4 = (double)FUN_146c14650(lVar26,uVar39);
    dVar5 = dVar4 + dVar5;
    uVar14 = uVar39 + 1;
    if ((int)(uVar39 + 1) < (int)uVar28) {
      uVar14 = uVar28;
    }
    uVar38 = uVar39;
    do {
      uVar39 = uVar14;
      if (uVar14 - 1 == uVar38) break;
      uVar39 = uVar38 + 1;
      uVar38 = uVar39;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar26 + 0x148) +
                                           (ulonglong)(uVar39 >> 9) * 8) +
                                         (ulonglong)(uVar39 & 0x1ff) * 2) - 1U));
    goto LAB_143b12c7d;
  }
  FUN_14837a7a2(&local_258);
  pcVar23 = local_540;
  local_490 = &local_f8;
  local_498 = FUN_146c90f06;
  FUN_14837a7f0(*(longlong *)local_540,&local_258);
  local_4a8 = 0;
  uStack_4a0 = 0;
  local_4c0[0] = *(longlong *)pcVar23;
  local_4c0[1] = 0;
  uStack_4b0 = 0;
  local_298[0] = local_f8;
  local_288[0] = 0;
  if (local_f8 != (code *)0x0) {
    plVar20 = local_e8;
    if (local_e8 == (longlong *)0x0) {
      plVar20 = &local_d8;
    }
    (**(code **)*plVar20)(plVar20,local_288);
  }
  FUN_142984024(local_4c0,local_298);
  iVar15 = (int)uStack_4b0;
  uVar37 = uStack_4b0 & 0xffffffff;
  local_4d8 = 0;
  uStack_4d0 = 0;
  local_530 = param_4;
  if ((int)uStack_4b0 < 1) {
    if ((int)uStack_4b0 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar37);
    }
    uStack_4d0._0_4_ = 0;
  }
  else {
    uStack_4d0 = uStack_4b0 & 0xffffffff;
    FUN_143b1abae(&local_4d8);
    FUN_143b1aba0(local_4d8,uVar37);
  }
  ppcStack_430 = (code **)(dVar5 / (double)iVar29);
  local_438 = local_540;
  pcVar23 = local_540;
  local_4e8 = local_4d8;
  local_4e0 = (int)uStack_4d0;
  local_428 = &local_258;
  plStack_420 = local_4c0;
  if (iVar15 != 0) {
    cVar12 = FUN_1447e0190();
    if (iVar15 == 1 || cVar12 != '\x01') {
      iVar29 = 0;
    }
    else {
      iVar29 = DAT_14c8335d8;
      if (iVar15 <= DAT_14c8335d8) {
        iVar29 = iVar15;
      }
    }
    lVar26 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar29 = (uint)(*(undefined **)(lVar26 + 0x2c0) != &DAT_14c82ba00 ||
                   *(int *)(lVar26 + 0x2c8) == 0) + iVar29;
    if (DAT_14c8c27ac < 1) {
      memset(&local_3f8,0,0x82);
      local_508 = (longlong *)((ulonglong)local_508 & 0xffffffff00000000);
      local_518 = (undefined8 *)((ulonglong)local_518 & 0xffffffff00000000);
      local_528 = local_528 & 0xffffffff00000000;
      FUN_140e55932(&local_3f8,&local_508,&local_518,&local_528);
      iVar31 = (int)local_528;
      local_550 = &local_485;
      local_558 = &local_484;
      FUN_1457b80ec((ulonglong)local_518 & 0xffffffff,local_528 & 0xffffffff,&local_479,local_480);
      DAT_14c8c27ac = iVar31;
      if ((0 < local_484) && (DAT_14c8c27ac = iVar31, local_484 <= iVar31)) {
        DAT_14c8c27ac = local_484;
      }
    }
    iVar31 = DAT_14c8c27ac;
    if (iVar29 < DAT_14c8c27ac) {
      iVar31 = iVar29;
    }
    uVar34 = 1;
    if (iVar31 < 2) {
      iVar31 = 1;
    }
    iVar29 = local_4e0;
    if (iVar31 < local_4e0) {
      iVar29 = iVar31;
    }
    if (local_4e0 == 0) {
      iVar29 = iVar31;
    }
    if (1 < iVar29) {
      iVar31 = iVar29 * 6;
      iVar19 = iVar15 + iVar31 + -1;
      iVar32 = -6;
      iVar13 = iVar15;
      do {
        if (iVar31 <= iVar15) {
          uVar34 = (longlong)iVar19 / (longlong)iVar31 & 0xffffffff;
          iVar33 = (int)((longlong)iVar19 / (longlong)iVar31);
          iVar13 = (iVar33 + iVar15 + -1) / iVar33;
          if (iVar29 <= iVar13) break;
        }
        iVar33 = (int)uVar34;
        iVar19 = iVar19 - iVar29;
        iVar31 = iVar31 - iVar29;
        iVar32 = iVar32 + 1;
      } while (iVar32 != 0);
      iVar29 = iVar29 + -1;
      lVar26 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      uVar27 = 6;
      if ((*(byte *)(lVar26 + 0xc60) & 0x37) != 0) {
        uVar27 = 0;
      }
      FUN_144a85b52(&local_508,1);
      puVar3 = (undefined8 *)(lVar26 + 0x308);
      puVar17 = (uint *)*puVar3;
      if (puVar17 != (uint *)0x0) goto LAB_143b12ff5;
      do {
        uVar39 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar39 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar39 | 1;
          __tlregdtor(&LAB_143b194e9);
        }
        lVar26 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar16 = *(undefined4 **)(lVar26 + 0x310);
        *(undefined8 *)(lVar26 + 0x310) = 0;
        if (puVar16 == (undefined4 *)0x0) {
          puVar16 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar16 = 0xffffffff;
        *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
        puVar16[0x12] = 0;
        *puVar3 = puVar16;
        FUN_140217a48(puVar3);
        puVar17 = (uint *)*puVar3;
LAB_143b12ff5:
        uVar34 = *(longlong *)(puVar17 + 0x10) + 0x3f;
        uVar39 = puVar17[0x12];
        while( true ) {
          puVar22 = (undefined8 *)(uVar34 & 0xffffffffffffffc0);
          if (puVar22 + 0x10 <= puVar17 + 0x4000) {
            *(undefined8 **)(puVar17 + 0x10) = puVar22 + 0x10;
            puVar17[0x12] = uVar39 + 1;
            *puVar22 = &PTR_FUN_149e002e8;
            *(undefined4 *)(puVar22 + 1) = 0;
            *puVar22 = &PTR_FUN_14ae75440;
            puVar22[3] = L"ParallelFor Task";
            *(undefined4 *)(puVar22 + 4) = 0;
            *(undefined4 *)(puVar22 + 5) = 0;
            *(int *)((longlong)puVar22 + 0x2c) = iVar15;
            *(int *)(puVar22 + 6) = iVar33;
            *(int *)((longlong)puVar22 + 0x34) = iVar13;
            puVar22[7] = &local_4e8;
            puVar22[8] = &local_438;
            puVar22[9] = &local_508;
            *(undefined1 *)(puVar22 + 10) = uVar27;
            puVar22[0xb] = 0;
            puVar22[0xc] = 0;
            *(int *)((longlong)puVar22 + 0x24) = iVar13;
            *(int *)(puVar22 + 0xc) = iVar29;
            FUN_143b1b5ba(puVar22 + 0xb);
            FUN_143b1b584(puVar22[0xb],iVar29);
            if (puVar22 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
              UNLOCK();
            }
            local_518 = puVar22;
            FUN_143b1af5e(&local_518);
            uStack_3ec = uStack_3ec & 0xffffff00;
            local_3f8 = puVar22;
            iStack_3f0 = iVar29;
            cVar12 = FUN_143b1afdc(&local_3f8,1);
            if (cVar12 == '\0') {
              (**(code **)(*local_508 + 0x20))(local_508,0xffffffff,0);
            }
            FUN_143b1b388(&local_3f8);
            FUN_144a75412(&local_508);
            goto LAB_143b1315f;
          }
          *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
          LOCK();
          uVar28 = *puVar17;
          *puVar17 = *puVar17 + uVar39 + 1;
          UNLOCK();
          if ((uVar28 ^ uVar39) != 0xffffffff) break;
          puVar17 = (uint *)*puVar3;
          *puVar17 = 0xffffffff;
          *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
          puVar17[0x12] = 0;
          *puVar3 = puVar17;
          uVar34 = (longlong)puVar17 + 0x97;
          uVar39 = 0;
        }
      } while( true );
    }
    iVar29 = 0;
    do {
      FUN_143b1aca1(&local_438,&local_4e8,0,iVar29);
      iVar29 = iVar29 + 1;
    } while (iVar15 != iVar29);
LAB_143b1315f:
    pcVar23 = local_540;
    if (0 < iVar15) {
      lVar26 = 0;
      do {
        uVar34 = uStack_4a0;
        lVar24 = local_4d8;
        uVar39 = *(uint *)(local_4d8 + 8 + lVar26);
        if ((longlong)(int)uVar39 != 0) {
          iVar15 = (int)uStack_4a0;
          lVar36 = (longlong)(int)uStack_4a0;
          uStack_4a0 = CONCAT44(uStack_4a0._4_4_,uVar39 + (int)uStack_4a0);
          if ((uint)(uStack_4a0._4_4_ - iVar15) < uVar39) {
            FUN_1446f48e2(&local_4a8,uVar34 & 0xffffffff);
          }
          memcpy((void *)(lVar36 * 4 + local_4a8),*(void **)(lVar24 + lVar26),
                 (longlong)(int)uVar39 << 2);
        }
        lVar26 = lVar26 + 0x10;
      } while (uVar37 << 4 != lVar26);
    }
  }
  FUN_14837af4a(&local_3f8,&local_258);
  if (local_534 == 1) {
    local_3a8 = 1;
    local_4f8 = (undefined1 *)local_530[2];
    local_508 = (longlong *)*local_530;
    uStack_500 = (undefined1 *)local_530[1];
    local_438 = (code *)0x0;
    local_428 = (undefined1 **)0x0;
    ppuVar18 = (undefined1 **)FUN_14001cc68(0x30,8);
    plVar20 = plStack_380;
    local_428 = local_388;
    ppcVar6 = ppcStack_390;
    pcVar1 = local_398;
    *ppuVar18 = (undefined1 *)&PTR_LAB_14ae754d0;
    ppuVar18[1] = pcVar23;
    ppuVar18[4] = local_4f8;
    ppuVar18[2] = (undefined1 *)local_508;
    ppuVar18[3] = uStack_500;
    ppuVar18[5] = (undefined1 *)&local_258;
    if (ppuVar18 + 1 != (undefined1 **)0x0) {
      local_438 = FUN_143b1bd8e;
    }
    local_398 = local_438;
    ppcStack_390 = ppcStack_430;
    local_388 = ppuVar18;
    plStack_380 = plStack_420;
    local_438 = pcVar1;
    ppcStack_430 = ppcVar6;
    plStack_420 = plVar20;
    local_418 = local_378;
    uStack_414 = uStack_374;
    uStack_410 = uStack_370;
    uStack_40c = uStack_36c;
    local_408 = local_368;
    uStack_404 = uStack_364;
    uStack_400 = uStack_360;
    uStack_3fc = uStack_35c;
    if (pcVar1 != (code *)0x0) {
      ppuVar18 = local_428;
      if (local_428 == (undefined1 **)0x0) {
        ppuVar18 = (undefined1 **)&local_418;
      }
      (**(code **)(*ppuVar18 + 0x10))();
    }
  }
  local_508 = (longlong *)0x0;
  uStack_500 = (undefined1 *)0x0;
  if (0 < (int)uStack_4a0) {
    lVar26 = 0;
    do {
      uVar37 = (ulonglong)uStack_500;
      uVar2 = *(undefined4 *)(local_4a8 + lVar26 * 4);
      lVar24 = (longlong)(int)uStack_500;
      uVar39 = (int)uStack_500 + 1;
      uStack_500 = (undefined1 *)CONCAT44(uStack_500._4_4_,uVar39);
      if (uStack_500._4_4_ < uVar39) {
        FUN_1483b1600(&local_508,uVar37 & 0xffffffff);
      }
      *(int *)(local_508 + lVar24 * 2) = (int)lVar26;
      *(undefined4 *)((longlong)local_508 + lVar24 * 0x10 + 4) = uVar2;
      local_508[lVar24 * 2 + 1] = 0;
      lVar26 = lVar26 + 1;
    } while (lVar26 < (int)uStack_4a0);
  }
  FUN_14837b1f6(&local_3f8,&local_508);
  local_518 = (undefined8 *)0x0;
  uStack_510 = 0;
  FUN_140bfc200(&local_518,uStack_4a0 & 0xffffffff,1);
  local_528 = 0;
  uStack_520 = 0;
  lVar26 = *(longlong *)local_540;
  uVar28 = *(int *)(lVar26 + 0x140) * 0x200 + *(int *)(lVar26 + 0x144);
  uVar39 = 0;
  if ((uVar28 != 0) &&
     (uVar39 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar26 + 0x148) - 1U))) {
    uVar14 = 1;
    uVar38 = 1;
    if (1 < (int)uVar28) {
      uVar14 = uVar28;
    }
    do {
      uVar39 = uVar14;
      if (uVar14 == uVar38) break;
      uVar21 = uVar38 >> 9;
      uVar30 = uVar38 & 0x1ff;
      uVar39 = uVar38;
      uVar38 = uVar38 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar26 + 0x148))[uVar21] +
                                         (ulonglong)uVar30 * 2) - 1U));
  }
  if (uVar39 != uVar28) {
    do {
      lVar24 = FUN_1483b1d08(&local_3f8,uVar39);
      if (((lVar24 == 0) || (*(char *)(lVar24 + 0x18) == '\0')) ||
         (lVar24 = (longlong)*(int *)(local_2b8 + (longlong)*(int *)(lVar24 + 8) * 0x10), lVar24 < 0
         )) {
        iVar15 = (int)uStack_520;
        uVar37 = uStack_520 & 0xffffffff;
        uVar14 = (int)uStack_520 + 1;
        uStack_520 = CONCAT44(uStack_520._4_4_,uVar14);
        puVar35 = &local_528;
        if (uStack_520._4_4_ < uVar14) {
          FUN_1446f48e2(&local_528,uVar37);
        }
      }
      else {
        puVar35 = local_518 + lVar24 * 2;
        iVar15 = *(int *)(local_518 + lVar24 * 2 + 1);
        *(uint *)(local_518 + lVar24 * 2 + 1) = iVar15 + 1U;
        if (*(uint *)((longlong)local_518 + lVar24 * 0x10 + 0xc) < iVar15 + 1U) {
          FUN_1446f48e2(puVar35,iVar15);
        }
      }
      *(uint *)(*puVar35 + (longlong)iVar15 * 4) = uVar39;
      uVar14 = uVar39 + 1;
      if ((int)(uVar39 + 1) < (int)uVar28) {
        uVar14 = uVar28;
      }
      do {
        uVar38 = uVar14;
        if (uVar14 - 1 == uVar39) break;
        uVar39 = uVar39 + 1;
        uVar38 = uVar39;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar26 + 0x148) +
                                             (ulonglong)(uVar39 >> 9) * 8) +
                                           (ulonglong)(uVar39 & 0x1ff) * 2) - 1U));
      uVar39 = uVar38;
    } while (uVar39 != uVar28);
  }
  pcVar23 = local_540;
  if (0 < (int)uStack_510) {
    pcVar1 = local_540 + 0x18;
    lVar26 = 0xc;
    lVar24 = 0;
    iVar15 = (int)uStack_510;
    do {
      puVar3 = local_518;
      if (0 < *(int *)((longlong)local_518 + lVar26 + -4)) {
        iVar15 = *(int *)(pcVar23 + 0x20);
        *(uint *)(pcVar23 + 0x20) = iVar15 + 1U;
        if (*(uint *)(pcVar23 + 0x24) < iVar15 + 1U) {
          FUN_140bfc2d4(pcVar1,iVar15);
        }
        lVar36 = *(longlong *)pcVar1;
        lVar25 = (longlong)iVar15 * 0x10;
        *(undefined8 *)(lVar36 + lVar25) = 0;
        *(undefined8 *)(lVar36 + lVar25) = *(undefined8 *)((longlong)puVar3 + lVar26 + -0xc);
        *(undefined8 *)((longlong)puVar3 + lVar26 + -0xc) = 0;
        *(undefined4 *)(lVar36 + 8 + lVar25) = *(undefined4 *)((longlong)puVar3 + lVar26 + -4);
        *(undefined4 *)(lVar36 + 0xc + lVar25) = *(undefined4 *)((longlong)puVar3 + lVar26);
        *(undefined8 *)((longlong)puVar3 + lVar26 + -4) = 0;
        iVar15 = (int)uStack_510;
      }
      lVar24 = lVar24 + 1;
      lVar26 = lVar26 + 0x10;
    } while (lVar24 < iVar15);
  }
  if (0 < (int)uStack_520) {
    local_438 = *(code **)pcVar23;
    ppcStack_430 = (code **)0x0;
    local_428 = (undefined1 **)0x0;
    local_478 = 0;
    local_468 = 0;
    FUN_142984384(&local_438,&local_528);
    ppcVar6 = ppcStack_430;
    lVar26 = (longlong)(int)local_428;
    if (lVar26 != 0) {
      pcVar23 = local_540 + 0x18;
      lVar24 = 0;
      do {
        puVar3 = *(undefined8 **)((longlong)ppcVar6 + lVar24);
        iVar15 = *(int *)(local_540 + 0x20);
        *(uint *)(local_540 + 0x20) = iVar15 + 1U;
        if (*(uint *)(local_540 + 0x24) < iVar15 + 1U) {
          FUN_140bfc2d4(pcVar23,iVar15);
        }
        lVar36 = *(longlong *)pcVar23;
        lVar25 = (longlong)iVar15 * 0x10;
        puVar22 = (undefined8 *)(lVar36 + lVar25);
        *(undefined8 *)(lVar36 + lVar25) = 0;
        iVar15 = *(int *)(puVar3 + 1);
        _Src = (void *)*puVar3;
        *(int *)(lVar36 + 8 + lVar25) = iVar15;
        if ((longlong)iVar15 == 0) {
          *(undefined4 *)((longlong)puVar22 + 0xc) = 0;
        }
        else {
          FUN_144a06ca8(puVar22,iVar15,0);
          memcpy((void *)*puVar22,_Src,(longlong)iVar15 << 2);
        }
        lVar24 = lVar24 + 8;
      } while (lVar26 * 8 != lVar24);
    }
    FUN_146be9400(&ppcStack_430);
    pcVar23 = local_540;
  }
  if ((pcVar23[8] == (code)0x1) && (1 < *(int *)(pcVar23 + 0xc))) {
    local_438 = FUN_146c90f06;
    ppcStack_430 = &local_f8;
    FUN_14837b596(pcVar23);
  }
  if (pcVar23[0x10] == (code)0x1) {
    FUN_148376f96(pcVar23);
  }
  iVar15 = *(int *)(pcVar23 + 0x20);
  if (local_528 != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(local_518,uStack_510 & 0xffffffff);
  if (local_518 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_508 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_14837b3f4(&local_3f8);
  FUN_143b1ab75(local_4d8,uStack_4d0 & 0xffffffff);
  if (local_4d8 != 0) {
    FUN_1400020a8();
  }
  FUN_146be9400(local_4c0 + 1);
  if (local_4a8 != 0) {
    FUN_1400020a8();
  }
  FUN_14837b538(&local_258);
  if (local_f8 != (code *)0x0) {
    plVar20 = local_e8;
    if (local_e8 == (longlong *)0x0) {
      plVar20 = &local_d8;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if ((local_70 ^ (ulonglong)auStack_578) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0 < iVar15;
}



// FUNCTION 143b138d8 FUN_143b138d8 body=178 status=ok
// SIG undefined FUN_143b138d8(void)

void FUN_143b138d8(longlong *param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1 = (longlong *)*param_1;
  uVar1 = *(ulonglong *)
           (*(longlong *)(*(longlong *)(param_1[1] + 0x1c0) + (ulonglong)(param_2 >> 9) * 8) +
           (ulonglong)((param_2 & 0x1ff) << 4));
  FUN_146c12888(param_1[1],&local_28,param_2);
  uVar2 = (**(code **)(*param_1 + 0x68))(param_1,param_2);
  if (uVar2 < 3) {
    FUN_1482cf8b8(param_1,uVar1 & 0xffffffff);
    FUN_1482cf8b8(param_1,uVar1 >> 0x20);
    FUN_1482cf8b8(param_1,local_28);
    FUN_1482cf8b8(param_1,local_24);
    *(int *)((longlong)param_1 + 0x254) = *(int *)((longlong)param_1 + 0x254) + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b1398c FUN_143b1398c body=540 status=ok
// SIG undefined FUN_143b1398c(void)

void FUN_143b1398c(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [39];
  char local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1[1] + 0x170) != 0) {
    (**(code **)(*param_1 + 200))();
    (**(code **)(*param_1 + 0xd8))(param_1);
    *(undefined4 *)((longlong)param_1 + 0x254) = 0;
    uVar3 = (**(code **)(*param_1 + 0x58))(param_1);
    local_31 = '\0';
    iVar5 = 0;
    uVar6 = 0;
    do {
      if (((-1 < (int)uVar3) &&
          (lVar1 = param_1[1],
          (int)uVar3 < *(int *)(lVar1 + 0x1d0) * 0x200 + *(int *)(lVar1 + 0x1d4))) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar1 + 0x1d8) + (ulonglong)(uVar3 >> 9) * 8) +
                             (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        uVar4 = (**(code **)(*param_1 + 0x68))(param_1,uVar3);
        if (uVar4 < 3) {
          *(int *)((longlong)param_1 + 0x254) = *(int *)((longlong)param_1 + 0x254) + 1;
        }
      }
      if ((int)(uVar6 / 1000) * 1000 + iVar5 == 0) {
        cVar2 = (**(code **)(*param_1 + 8))(param_1);
        if (cVar2 != '\0') goto LAB_143b13b87;
      }
      uVar3 = (**(code **)(*param_1 + 0x60))(param_1,uVar3,&local_31);
      iVar5 = iVar5 + -1;
      uVar6 = (ulonglong)((int)uVar6 + 1);
    } while (local_31 == '\0');
    (**(code **)(*param_1 + 0xe0))(param_1);
    cVar2 = (**(code **)(*param_1 + 8))(param_1);
    if (cVar2 == '\0') {
      (**(code **)(*param_1 + 0xe8))(param_1);
      if ((*(char *)((longlong)param_1 + 0x153) == '\x01') &&
         ((0.0 < (double)param_1[0x2f] || (param_1[0x3a] != 0)))) {
        if (*(char *)((longlong)param_1 + 0x252) == '\0') {
          (**(code **)(*param_1 + 0x88))(param_1,*(undefined1 *)((longlong)param_1 + 0x251));
        }
        (**(code **)(*param_1 + 0x28))(param_1,0);
      }
      (**(code **)(*param_1 + 0xf0))(param_1);
      cVar2 = (**(code **)(*param_1 + 8))(param_1);
      if (cVar2 == '\0') {
        (**(code **)(*param_1 + 0xf8))(param_1);
        if ((param_1[0x1a] != 0) && ((char)param_1[0x27] == '\x01')) {
          (**(code **)(*param_1 + 0xa8))(param_1,(char)param_1[0x4a]);
          (**(code **)(*param_1 + 0x28))(param_1,0);
        }
        (**(code **)(*param_1 + 0x100))(param_1);
        (**(code **)(*param_1 + 0x28))(param_1,1);
        cVar2 = (**(code **)(*param_1 + 8))(param_1);
        if (cVar2 == '\0') {
          (**(code **)(*param_1 + 0xd0))(param_1);
        }
      }
    }
  }
LAB_143b13b87:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b13ba9 FUN_143b13ba9 body=249 status=ok
// SIG undefined FUN_143b13ba9(void)

double * FUN_143b13ba9(double *param_1,longlong param_2,uint param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(param_3 >> 9) * 8);
  uVar6 = (ulonglong)(param_3 & 0x1ff);
  dVar5 = 1.0 - param_4;
  dVar1 = *(double *)(lVar4 + 0x10 + uVar6 * 0x18);
  dVar2 = *(double *)(lVar4 + 8 + uVar6 * 0x18);
  dVar3 = *(double *)(lVar4 + uVar6 * 0x18);
  FUN_1482cb2a2(&local_78,param_2,param_3,0x47efffffe0000000);
  *param_1 = param_4 * local_78 + dVar5 * dVar3;
  param_1[1] = local_70 * param_4 + dVar2 * dVar5;
  param_1[2] = local_68 * param_4 + dVar1 * dVar5;
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b13ca3 FUN_143b13ca3 body=241 status=ok
// SIG undefined FUN_143b13ca3(void)

double * FUN_143b13ca3(double *param_1,longlong param_2,uint param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(param_3 >> 9) * 8);
  uVar6 = (ulonglong)(param_3 & 0x1ff);
  dVar5 = 1.0 - param_4;
  dVar1 = *(double *)(lVar4 + 0x10 + uVar6 * 0x18);
  dVar2 = *(double *)(lVar4 + 8 + uVar6 * 0x18);
  dVar3 = *(double *)(lVar4 + uVar6 * 0x18);
  FUN_1482cb936(&local_78);
  *param_1 = param_4 * local_78 + dVar5 * dVar3;
  param_1[1] = local_70 * param_4 + dVar2 * dVar5;
  param_1[2] = local_68 * param_4 + dVar1 * dVar5;
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b13d95 FUN_143b13d95 body=247 status=ok
// SIG undefined FUN_143b13d95(void)

double * FUN_143b13d95(double *param_1,longlong param_2,uint param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(param_3 >> 9) * 8);
  uVar6 = (ulonglong)(param_3 & 0x1ff);
  dVar5 = 1.0 - param_4;
  dVar1 = *(double *)(lVar4 + 0x10 + uVar6 * 0x18);
  dVar2 = *(double *)(lVar4 + 8 + uVar6 * 0x18);
  dVar3 = *(double *)(lVar4 + uVar6 * 0x18);
  FUN_146c14004(param_2,param_3,&local_78);
  *param_1 = param_4 * local_78 + dVar5 * dVar3;
  param_1[1] = local_70 * param_4 + dVar2 * dVar5;
  param_1[2] = local_68 * param_4 + dVar1 * dVar5;
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b13eb0 FUN_143b13eb0 body=4208 status=ok
// SIG undefined FUN_143b13eb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b13eb0(longlong *param_1)

{
  LARGE_INTEGER *pLVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  code *pcVar17;
  longlong *plVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  LARGE_INTEGER LVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong *plVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  undefined1 auVar31 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_478 [32];
  undefined8 *local_458;
  uint local_450;
  undefined8 *local_448;
  longlong *local_438;
  longlong *local_430;
  longlong *local_428;
  undefined8 local_420;
  LARGE_INTEGER local_418;
  longlong *local_410;
  undefined4 local_404;
  LARGE_INTEGER local_400;
  ulonglong *local_3f8;
  longlong *local_3f0;
  longlong *local_3e8;
  ulonglong *local_3e0;
  longlong **local_3d8;
  longlong **local_3d0;
  longlong *local_3c8;
  LARGE_INTEGER *local_3c0;
  ulonglong local_3b8;
  longlong local_3b0;
  ulonglong uStack_3a8;
  undefined4 local_3a0;
  longlong *local_398;
  longlong **local_390;
  longlong *local_388;
  longlong *local_380;
  longlong local_378;
  ulonglong uStack_370;
  longlong local_368;
  ulonglong uStack_360;
  ulonglong local_358;
  int local_350;
  int local_34c;
  undefined8 local_348;
  longlong local_340;
  int local_338;
  int local_334;
  undefined4 local_330;
  undefined8 local_328;
  longlong local_320;
  undefined8 local_318;
  int local_310;
  longlong *local_308;
  code *local_300;
  undefined8 *local_2f8;
  undefined8 local_2f0;
  longlong local_2e8;
  byte *local_2e0;
  int *local_2d8;
  int local_2d0;
  byte local_2c9;
  code *local_2c8;
  LARGE_INTEGER *local_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  LARGE_INTEGER local_2a8;
  LARGE_INTEGER LStack_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_284;
  undefined4 local_27c;
  undefined8 local_278;
  undefined2 local_270;
  undefined1 local_26e;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_478;
  param_1[0x2a] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  LOCK();
  param_1[0x2b] = 0;
  UNLOCK();
  LOCK();
  param_1[0x2c] = 0;
  UNLOCK();
  QueryPerformanceCounter(&local_2a8);
  LVar24 = local_2a8;
  dVar4 = DAT_14c83f420;
  iVar21 = (int)param_1[0x9b];
  plVar27 = (longlong *)(longlong)iVar21;
  if ((plVar27 == (longlong *)0x0) || (param_1[1] == 0)) goto LAB_143b13f49;
  local_438 = param_1 + 0x9c;
  FUN_14837fd34(local_438,iVar21);
  local_430 = param_1 + 0xa4;
  iVar7 = iVar21 + 1;
  iVar15 = (int)param_1[0xa5];
  local_418.s = LVar24.s;
  if (iVar21 < iVar15) {
    if (iVar21 < -1) goto LAB_143b14f1a;
    if (iVar7 < iVar15) {
      *(int *)(param_1 + 0xa5) = iVar7;
      FUN_14479f406(local_430);
    }
  }
  else {
    *(int *)(param_1 + 0xa5) = iVar7;
    if ((uint)(*(int *)((longlong)param_1 + 0x52c) - iVar15) < (uint)(iVar7 - iVar15)) {
      FUN_1446f48e2(local_430);
    }
  }
  FUN_140bfc200(param_1 + 0x9e,2,1);
  *(undefined4 *)(param_1 + 0x99) = 0;
  uVar29 = 0;
  local_428 = plVar27;
  if (0 < iVar21) {
    plVar27 = (longlong *)0x0;
    uVar29 = 0;
    do {
      plVar18 = *(longlong **)(param_1[0x9a] + (longlong)plVar27 * 0x10);
      lVar22 = (longlong)plVar27 * 0x40;
      (**(code **)(*plVar18 + 8))(plVar18,param_1,param_1[0x9c] + lVar22);
      iVar21 = *(int *)(param_1[0x9c] + 0x38 + lVar22);
      if (0 < (longlong)iVar21) {
        iVar7 = (int)param_1[0x99];
        lVar19 = 0;
        do {
          iVar7 = iVar7 + *(int *)(*(longlong *)(param_1[0x9c] + lVar22 + 0x30) + lVar19 * 4);
          *(int *)(param_1 + 0x99) = iVar7;
          lVar19 = lVar19 + 1;
        } while (iVar21 != lVar19);
      }
      *(uint *)(*local_430 + (longlong)plVar27 * 4) = uVar29;
      lVar19 = param_1[0x9e];
      lVar22 = (longlong)*(int *)(*local_438 + 0x28 + lVar22) * 0x10;
      iVar7 = *(int *)(lVar19 + 8 + lVar22);
      *(uint *)(lVar19 + 8 + lVar22) = iVar7 + 1U;
      if (*(uint *)(lVar19 + 0xc + lVar22) < iVar7 + 1U) {
        FUN_1446f48e2((longlong *)(lVar19 + lVar22),iVar7);
      }
      uVar29 = iVar21 + uVar29;
      *(int *)(*(longlong *)(lVar19 + lVar22) + (longlong)iVar7 * 4) = (int)plVar27;
      plVar27 = (longlong *)((longlong)plVar27 + 1);
    } while (plVar27 != local_428);
  }
  plVar27 = local_428;
  *(uint *)(param_1[0xa4] + (longlong)local_428 * 4) = uVar29;
  local_410 = param_1 + 0xa8;
  FUN_14837fdae(local_410,uVar29);
  iVar7 = uVar29 + 1;
  iVar21 = (int)param_1[0xa7];
  local_438 = param_1;
  if ((int)uVar29 < iVar21) {
    if ((int)uVar29 < -1) {
LAB_143b14f1a:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    if (iVar7 < iVar21) {
      *(int *)(param_1 + 0xa7) = iVar7;
      FUN_14479f406();
    }
  }
  else {
    *(int *)(param_1 + 0xa7) = iVar7;
    if ((uint)(*(int *)((longlong)param_1 + 0x53c) - iVar21) < (uint)(iVar7 - iVar21)) {
      FUN_1446f48e2(param_1 + 0xa6);
    }
  }
  iVar21 = 0;
  if (0 < (int)plVar27) {
    lVar22 = local_438[0x9c];
    plVar27 = (longlong *)0x0;
    iVar21 = 0;
    do {
      lVar19 = (longlong)*(int *)(lVar22 + 0x38 + (longlong)plVar27 * 0x40);
      if (0 < lVar19) {
        lVar28 = 0;
        do {
          iVar7 = *(int *)(*local_430 + (longlong)plVar27 * 4);
          puVar11 = (undefined8 *)FUN_14001cc68(0x30,0x10);
          lVar23 = (longlong)(iVar7 + (int)lVar28);
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
          puVar11[3] = 0;
          puVar11[4] = 0;
          puVar11[5] = 0;
          lVar22 = *(longlong *)(*local_410 + lVar23 * 8);
          *(undefined8 **)(*local_410 + lVar23 * 8) = puVar11;
          if (lVar22 != 0) {
            if (*(longlong *)(lVar22 + 8) != 0) {
              FUN_1400020a8();
            }
            FUN_1400020a8(lVar22);
          }
          plVar5 = local_438;
          lVar22 = local_438[0x92];
          plVar18 = *(longlong **)(local_438[0xa8] + lVar23 * 8);
          *plVar18 = lVar22;
          plVar18[4] = (longlong)(int)lVar22;
          plVar18[5] = lVar22 >> 0x20;
          FUN_1483b251e(plVar18 + 1,(lVar22 >> 0x20) * (longlong)(int)lVar22,
                        CONCAT71((int7)(int3)((ulonglong)lVar22 >> 8),1));
          *(int *)(plVar5[0xa6] + lVar23 * 4) = iVar21;
          lVar22 = plVar5[0x9c];
          iVar21 = iVar21 + *(int *)(*(longlong *)(lVar22 + 0x30 + (longlong)plVar27 * 0x40) +
                                    lVar28 * 4);
          lVar28 = lVar28 + 1;
        } while (lVar19 != lVar28);
      }
      plVar27 = (longlong *)((longlong)plVar27 + 1);
    } while (plVar27 != local_428);
  }
  plVar27 = local_438;
  *(int *)(local_438[0xa6] + (longlong)(int)uVar29 * 4) = iVar21;
  FUN_14837fe6a();
  if (0 < (int)uVar29) {
    uVar16 = 0;
    do {
      lVar22 = *(longlong *)(plVar27[0xa8] + uVar16 * 8);
      pLVar1 = (LARGE_INTEGER *)(plVar27[0xa2] + uVar16 * 0x10);
      local_2a8 = *pLVar1;
      LStack_2a0 = pLVar1[1];
      lVar19 = *(longlong *)(lVar22 + 0x28) * *(longlong *)(lVar22 + 0x20);
      if (0 < lVar19) {
        lVar28 = 0;
        do {
          pLVar1 = (LARGE_INTEGER *)(*(longlong *)(lVar22 + 8) + lVar28);
          *pLVar1 = local_2a8;
          pLVar1[1] = LStack_2a0;
          lVar28 = lVar28 + 0x10;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar29);
  }
  *(int *)((longlong)plVar27 + 0x4ac) = (int)plVar27[0x95];
  switch((int)plVar27[0x96]) {
  case 0:
    *(undefined4 *)((longlong)plVar27 + 0x4ac) = 0;
    puVar12 = &LAB_1483804c0;
    pcVar17 = (code *)&LAB_1483804b6;
    break;
  case 1:
    puVar12 = &LAB_14838050c;
    pcVar17 = (code *)&LAB_1483804c4;
    break;
  case 2:
    puVar12 = &LAB_1483805c0;
    pcVar17 = FUN_14838054e;
    break;
  case 3:
    puVar12 = &LAB_14838069c;
    pcVar17 = FUN_14838062a;
    break;
  default:
    goto switchD_143b14372_default;
  }
  plVar27[0x97] = (longlong)pcVar17;
  plVar27[0x98] = (longlong)puVar12;
switchD_143b14372_default:
  if (plVar27[0xaa] == 0) {
    lVar22 = plVar27[1];
LAB_143b143eb:
    plVar27 = local_438 + 0xab;
    FUN_14837ffba(lVar22,plVar27);
    local_438[0xaa] = (longlong)plVar27;
    lVar22 = local_438[1];
    plVar27 = local_438;
  }
  else {
    lVar22 = plVar27[1];
    if (*(int *)(plVar27[0xaa] + 8) != *(int *)(lVar22 + 0x170)) goto LAB_143b143eb;
  }
  lVar19 = *(longlong *)(lVar22 + 0x208);
  iVar21 = (int)plVar27[4];
  lVar28 = 0;
  if ((-1 < (longlong)iVar21) && (iVar21 < *(int *)(lVar19 + 0x28))) {
    lVar28 = *(longlong *)(*(longlong *)(lVar19 + 0x20) + (longlong)iVar21 * 8);
  }
  if (*(int *)(lVar19 + 0x38) < 1) {
    local_420 = 0;
  }
  else {
    local_420 = **(undefined8 **)(lVar19 + 0x30);
  }
  local_458 = (undefined8 *)CONCAT71(local_458._1_7_,1);
  FUN_1411b354a(&local_2a8,0,0,0);
  local_428 = local_438 + 0x2e;
  FUN_146c00942(local_428,&local_2a8);
  FUN_141082778(&local_2a8);
  plVar27 = local_428;
  uVar26 = *(int *)(lVar22 + 0x140) * 0x200 + *(int *)(lVar22 + 0x144);
  uVar29 = 0;
  if ((uVar26 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar22 + 0x148) - 1U))) {
    uVar30 = 1;
    uVar8 = 1;
    if (1 < (int)uVar26) {
      uVar30 = uVar26;
    }
    do {
      uVar14 = uVar8;
      uVar29 = uVar30;
      if (uVar30 == uVar14) break;
      uVar8 = uVar14 + 1;
      uVar29 = uVar14;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar22 + 0x148))[uVar14 >> 9] +
                                         (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
  }
joined_r0x000143b14500:
  uVar30 = uVar29;
  if (uVar30 != uVar26) {
    if (-1 < *(int *)(*(longlong *)(*(longlong *)(lVar28 + 0x78) + (ulonglong)(uVar30 * 3 >> 9) * 8)
                     + (ulonglong)(uVar30 * 3 & 0x1ff) * 4)) {
      local_458 = &local_2f0;
      FUN_146c35244(lVar28,uVar30,&local_400,&local_348);
      LStack_2a0 = (LARGE_INTEGER)(double)(float)local_400.s.HighPart;
      local_2a8 = (LARGE_INTEGER)(double)(float)local_400.s.LowPart;
      local_298 = 0;
      local_288 = DAT_14c846338;
      local_290 = DAT_14c846330;
      local_27c = DAT_14c846338;
      local_284 = DAT_14c846330;
      local_278 = DAT_14c84635c;
      local_270 = 0;
      local_26e = 0;
      uVar9 = FUN_146c02208(plVar27,&local_2a8);
      LStack_2a0 = (LARGE_INTEGER)(double)local_348._4_4_;
      local_2a8 = (LARGE_INTEGER)(double)(float)local_348;
      local_430 = (longlong *)CONCAT44(local_430._4_4_,uVar9);
      local_298 = 0;
      local_288 = DAT_14c846338;
      local_290 = DAT_14c846330;
      local_27c = DAT_14c846338;
      local_284 = DAT_14c846330;
      local_278 = DAT_14c84635c;
      local_270 = 0;
      local_26e = 0;
      uVar9 = FUN_146c02208(plVar27,&local_2a8);
      LStack_2a0 = (LARGE_INTEGER)(double)local_2f0._4_4_;
      in_XMM1._0_8_ = (LARGE_INTEGER)(double)(float)local_2f0;
      in_XMM1._8_8_ = 0;
      local_298 = 0;
      local_288 = DAT_14c846338;
      local_290 = DAT_14c846330;
      local_27c = DAT_14c846338;
      local_284 = DAT_14c846330;
      local_278 = DAT_14c84635c;
      local_270 = 0;
      local_26e = 0;
      local_2a8 = in_XMM1._0_8_;
      uVar10 = FUN_146c02208(plVar27,&local_2a8);
      local_2a8.s.HighPart = uVar9;
      local_2a8.s.LowPart = (int)local_430;
      LStack_2a0.s.LowPart = uVar10;
      FUN_146c01152(plVar27,&local_2a8,uVar30);
    }
    uVar8 = uVar30 + 1;
    if ((int)(uVar30 + 1) < (int)uVar26) {
      uVar8 = uVar26;
    }
    do {
      uVar29 = uVar8;
      if (uVar8 - 1 == uVar30) break;
      uVar30 = uVar30 + 1;
      uVar29 = uVar30;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar22 + 0x148) +
                                           (ulonglong)(uVar30 >> 9) * 8) +
                                         (ulonglong)(uVar30 & 0x1ff) * 2) - 1U));
    goto joined_r0x000143b14500;
  }
  FUN_146ba21d6(&local_2a8,local_428,1);
  iVar21 = (int)local_438[6];
  local_2e0 = &local_2c9;
  local_2c9 = 1;
  local_2d8 = &local_2d0;
  local_2d0 = 0;
  local_2f8 = &local_2f0;
  local_2f0 = local_438;
  local_300 = FUN_143b1d6ba;
  local_2e8 = lVar22;
  (**(code **)(*(longlong *)local_438[7] + 8))();
  plVar27 = local_438;
  if (iVar21 == 3) {
    iVar21 = (uint)(local_2d0 == 1 & local_2c9) * 2 + 1;
  }
  local_318 = local_420;
  local_308 = local_438;
  local_438[0x73] = lVar22;
  local_438[0x74] = lVar28;
  *(undefined1 *)(local_438 + 0x75) = 1;
  local_338 = (int)local_438[0x92];
  local_334 = *(int *)((longlong)local_438 + 0x494);
  local_340 = local_438[0x92];
  local_348 = 0;
  lVar19 = (longlong)(int)local_438[0x99] + 1;
  local_330 = (undefined4)lVar19;
  local_320 = lVar22;
  local_310 = iVar21;
  local_328 = FUN_14153c902((local_338 * local_334) * lVar19 * 4,0);
  iVar21 = *(int *)((longlong)plVar27 + 0x4a4);
  local_358 = plVar27[0x92];
  iVar7 = (int)local_358;
  local_350 = 1;
  if (1 < iVar7) {
    local_350 = iVar7;
  }
  if (iVar21 < local_350) {
    local_350 = iVar21;
  }
  if (local_350 < 2) {
    local_350 = 1;
  }
  iVar15 = (int)(local_358 >> 0x20);
  local_34c = 1;
  if (1 < iVar15) {
    local_34c = iVar15;
  }
  if (iVar21 < local_34c) {
    local_34c = iVar21;
  }
  if (local_34c < 2) {
    local_34c = 1;
  }
  uVar16 = (ulonglong)(uint)(iVar7 >> 0x1f) << 0x20 | local_358 & 0xffffffff;
  iVar7 = ((int)((longlong)uVar16 / (longlong)local_350) + 1) -
          (uint)((int)((longlong)uVar16 % (longlong)local_350) == 0);
  uVar16 = (ulonglong)(uint)(iVar15 >> 0x1f) << 0x20 | local_358 >> 0x20;
  iVar21 = (((int)((longlong)uVar16 / (longlong)local_34c) + 1) -
           (uint)((int)((longlong)uVar16 % (longlong)local_34c) == 0)) * iVar7;
  local_368 = 0;
  uStack_360 = 0;
  local_378 = 0;
  uStack_370 = 0;
  FUN_1483800f8(&local_368,iVar21,CONCAT71((uint7)(uint3)((uint)iVar7 >> 8),1));
  FUN_1483800f8(&local_378,iVar21);
  local_3d8 = &local_388;
  local_388 = plVar27;
  local_398 = plVar27;
  uVar16 = (ulonglong)iVar21;
  local_3b0 = 0;
  uStack_3a8 = 0;
  local_3a0 = 0;
  lVar22 = -1;
  if (-1 < iVar21) {
    lVar22 = uVar16 * 0x40 + (ulonglong)(uVar16 * 0x40 == 0);
  }
  local_3b8 = uVar16;
  local_390 = local_3d8;
  local_380 = &local_348;
  local_3b0 = FUN_14001cc68(lVar22,0x40);
  param_1 = local_438;
  auVar3 = _DAT_149931e80;
  if (iVar21 != 0) {
    uVar20 = uVar16 + 0x3ffffffffffffff & 0x3ffffffffffffff;
    auVar31._8_4_ = (int)uVar20;
    auVar31._0_8_ = uVar20;
    auVar31._12_4_ = (int)(uVar20 >> 0x20);
    puVar11 = (undefined8 *)(local_3b0 + 0x40);
    uVar25 = 0;
    auVar32 = pmovsxbq(in_XMM1,0x100);
    auVar31 = auVar31 | _DAT_149931e80;
    do {
      if ((bool)(~(auVar31._0_8_ < (longlong)(uVar25 ^ auVar3._0_8_)) & 1)) {
        puVar11[-8] = 0;
      }
      auVar33._8_4_ = (int)uVar25;
      auVar33._0_8_ = uVar25;
      auVar33._12_4_ = (int)(uVar25 >> 0x20);
      if ((longlong)((auVar33._8_8_ | auVar32._8_8_) ^ auVar3._8_8_) <= auVar31._8_8_) {
        *puVar11 = 0;
      }
      uVar25 = uVar25 + 2;
      puVar11 = puVar11 + 0x10;
    } while ((uVar20 - ((uint)(uVar16 + 0x3ffffffffffffff) & 1)) + 2 != uVar25);
    lVar22 = 0;
    uVar16 = 0;
    do {
      LOCK();
      *(undefined8 *)(local_3b0 + lVar22) = 0;
      UNLOCK();
      uVar16 = uVar16 + 1;
      lVar22 = lVar22 + 0x40;
    } while (uVar16 < local_3b8);
  }
  local_450 = *(byte *)(local_438 + 0x2d) ^ 1;
  local_2c0 = &local_400;
  local_400.QuadPart = (LONGLONG)local_438;
  local_3e8 = &local_378;
  local_3e0 = &local_3b8;
  local_3d0 = &local_398;
  local_3c8 = &local_320;
  local_2b8 = 0;
  local_2b0 = 0;
  local_2c8 = FUN_143b1d70c;
  local_448 = &local_2b8;
  local_3f8 = &local_358;
  local_3f0 = &local_368;
  local_3c0 = &local_2a8;
  FUN_1401f8d10(L"ParallelFor Task",iVar21,1);
  pcVar17 = (code *)param_1[8];
  plVar27 = param_1 + 0xc;
  plVar18 = (longlong *)param_1[10];
  if ((longlong *)param_1[10] == (longlong *)0x0) {
    plVar18 = plVar27;
  }
  uVar13 = (**(code **)(*plVar18 + 8))();
  cVar6 = (*pcVar17)(uVar13);
  LVar24 = local_418;
  if (cVar6 == '\0') {
    FUN_143b14f22(&local_398,&local_3b8);
    pcVar17 = (code *)param_1[8];
    plVar18 = (longlong *)param_1[10];
    if ((longlong *)param_1[10] == (longlong *)0x0) {
      plVar18 = plVar27;
    }
    uVar13 = (**(code **)(*plVar18 + 8))();
    cVar6 = (*pcVar17)(uVar13);
    LVar24 = local_418;
    if (cVar6 == '\0') {
      QueryPerformanceCounter(&local_400);
      dVar2 = (double)local_400.QuadPart * DAT_14c83f420;
      local_450 = *(byte *)(param_1 + 0x2d) ^ 1;
      local_400.QuadPart = (LONGLONG)param_1;
      local_2b8 = 0;
      local_2b0 = 0;
      local_2c8 = FUN_143b1f30e;
      local_448 = &local_2b8;
      local_3f8 = &local_358;
      local_3f0 = &local_348;
      local_2c0 = &local_400;
      FUN_1401f8d10(L"ParallelFor Task",iVar21,1);
      QueryPerformanceCounter(&local_400);
      param_1[0x29] =
           (longlong)
           ((((double)local_400.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar2 + 16777216.0)) +
           (double)param_1[0x29]);
      pcVar17 = (code *)param_1[8];
      plVar18 = (longlong *)param_1[10];
      if ((longlong *)param_1[10] == (longlong *)0x0) {
        plVar18 = plVar27;
      }
      uVar13 = (**(code **)(*plVar18 + 8))();
      cVar6 = (*pcVar17)(uVar13);
      LVar24 = local_418;
      if (cVar6 == '\0') {
        pcVar17 = (code *)param_1[0x10];
        plVar18 = param_1 + 0x14;
        if ((longlong *)param_1[0x12] != (longlong *)0x0) {
          plVar18 = (longlong *)param_1[0x12];
        }
        uVar13 = (**(code **)(*plVar18 + 8))();
        (*pcVar17)(uVar13,local_410);
        pcVar17 = (code *)param_1[8];
        if ((longlong *)param_1[10] != (longlong *)0x0) {
          plVar27 = (longlong *)param_1[10];
        }
        uVar13 = (**(code **)(*plVar27 + 8))(plVar27);
        cVar6 = (*pcVar17)(uVar13);
        LVar24 = local_418;
        if ((cVar6 == '\0') && ((char)param_1[0x93] == '\x01')) {
          QueryPerformanceCounter(&local_400);
          dVar2 = (double)local_400.QuadPart * DAT_14c83f420;
          local_404 = (undefined4)param_1[0xa9];
          local_3f8 = (ulonglong *)&local_404;
          local_450 = *(byte *)(param_1 + 0x2d) ^ 1;
          local_400.QuadPart = (LONGLONG)param_1;
          local_3e8 = &local_378;
          local_2b8 = 0;
          local_2b0 = 0;
          local_2c8 = FUN_143b1f6c6;
          local_448 = &local_2b8;
          local_3f0 = &local_368;
          local_2c0 = &local_400;
          FUN_1401f8d10(L"ParallelFor Task",iVar21,1);
          QueryPerformanceCounter(&local_400);
          param_1[0x2a] =
               (longlong)
               ((((double)local_400.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar2 + 16777216.0)) +
               (double)param_1[0x2a]);
          LVar24 = local_418;
        }
      }
    }
  }
  else if (uStack_3a8 < local_3b8) {
    do {
      lVar22 = *(longlong *)(local_3b0 + uStack_3a8 * 0x40);
      if (lVar22 == 0) {
        uStack_3a8 = uStack_3a8 + 1;
      }
      else {
        *(undefined8 *)(local_3b0 + uStack_3a8 * 0x40) = 0;
        uStack_3a8 = uStack_3a8 + 1;
        FUN_1400020a8(*(undefined8 *)(lVar22 + 0x20));
        FUN_1400020a8(lVar22);
      }
    } while (uStack_3a8 < local_3b8);
  }
  if (local_3b8 != 0) {
    uVar16 = 0;
    do {
      uVar16 = uVar16 + 1;
    } while (uVar16 < local_3b8);
  }
  if (local_3b0 != 0) {
    FUN_1400020a8();
  }
  FUN_1483b270e(local_378,uStack_370 & 0xffffffff);
  if (local_378 != 0) {
    FUN_1400020a8();
  }
  FUN_1483b270e(local_368,uStack_360 & 0xffffffff);
  if (local_368 != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(local_328);
  FUN_1457e5b52(&local_2a8);
LAB_143b13f49:
  QueryPerformanceCounter(&local_2a8);
  param_1[0x28] =
       (longlong)
       ((((double)local_2a8.QuadPart * DAT_14c83f420 + 16777216.0) -
        ((double)LVar24.QuadPart * dVar4 + 16777216.0)) + (double)param_1[0x28]);
  if ((local_80 ^ (ulonglong)auStack_478) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b14f22 FUN_143b14f22 body=714 status=ok
// SIG undefined FUN_143b14f22(void)

void FUN_143b14f22(longlong *param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  code *pcVar15;
  longlong lVar16;
  longlong lVar17;
  char cVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  longlong lVar21;
  int *piVar22;
  ulonglong uVar23;
  longlong *plVar24;
  int *piVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong local_88;
  
  if ((param_2[2] < *param_2) &&
     (lVar11 = *param_1, *(longlong *)(param_2[1] + param_2[2] * 0x40) != 0)) {
    LOCK();
    uVar19 = param_2[3];
    *(int *)(param_2 + 3) = 1;
    UNLOCK();
    if ((int)uVar19 == 0) {
      if ((param_2[2] < *param_2) &&
         (piVar25 = *(int **)(param_2[1] + param_2[2] * 0x40), piVar25 != (int *)0x0)) {
        uVar19 = param_2[1];
        uVar23 = param_2[2];
        do {
          param_2[2] = uVar23 + 1;
          *(undefined8 *)(uVar19 + uVar23 * 0x40) = 0;
          iVar3 = piVar25[5];
          if (0 < iVar3) {
            puVar12 = *(undefined8 **)(lVar11 + 0x4f0);
            iVar4 = piVar25[4];
            plVar13 = (longlong *)param_1[1];
            lVar14 = *plVar13;
            local_88 = 0;
            do {
              if (0 < iVar4) {
                lVar33 = 0;
                do {
                  pcVar15 = *(code **)(lVar14 + 0x40);
                  plVar24 = *(longlong **)(lVar14 + 0x50);
                  if (*(longlong **)(lVar14 + 0x50) == (longlong *)0x0) {
                    plVar24 = (longlong *)(lVar14 + 0x60);
                  }
                  uVar20 = (**(code **)(*plVar24 + 8))();
                  cVar18 = (*pcVar15)(uVar20);
                  if (cVar18 != '\0') goto LAB_143b15193;
                  iVar5 = piVar25[1];
                  iVar6 = *piVar25;
                  iVar7 = *(int *)(lVar14 + 0x490);
                  lVar21 = plVar13[1];
                  iVar8 = piVar25[4];
                  lVar16 = *(longlong *)(piVar25 + 8);
                  iVar9 = piVar25[6];
                  lVar17 = *(longlong *)(lVar21 + 0x20);
                  lVar29 = (longlong)*(int *)(lVar21 + 0x18);
                  lVar21 = (((longlong)iVar5 + (longlong)(int)local_88) * (longlong)iVar7 +
                           (longlong)iVar6 + (longlong)(int)lVar33) * lVar29;
                  *(float *)(lVar17 + lVar21 * 4) =
                       *(float *)(lVar16 + (longlong)((int)lVar33 + iVar8 * (int)local_88) *
                                           (longlong)iVar9 * 4) + *(float *)(lVar17 + lVar21 * 4);
                  lVar21 = (longlong)*(int *)(puVar12 + 1);
                  if (lVar21 != 0) {
                    piVar22 = (int *)*puVar12;
                    piVar1 = piVar22 + lVar21;
                    do {
                      lVar21 = *(longlong *)(lVar14 + 0x4e0);
                      lVar26 = (longlong)*piVar22 * 0x40;
                      lVar31 = (longlong)*(int *)(lVar21 + 0x38 + lVar26);
                      if (0 < lVar31) {
                        iVar10 = *(int *)(*(longlong *)(lVar14 + 0x520) + (longlong)*piVar22 * 4);
                        lVar30 = 0;
                        do {
                          lVar32 = (longlong)
                                   *(int *)(*(longlong *)(lVar21 + lVar26 + 0x30) + lVar30 * 4);
                          if (0 < lVar32) {
                            lVar27 = (longlong)
                                     *(int *)(lVar30 * 4 + *(longlong *)(lVar14 + 0x530) +
                                             (longlong)iVar10 * 4);
                            lVar2 = lVar17 + (iVar6 + lVar33 + (iVar5 + local_88) * (longlong)iVar7)
                                             * lVar29 * 4 + 4 + lVar27 * 4;
                            lVar28 = 0;
                            do {
                              *(float *)(lVar2 + lVar28 * 4) =
                                   *(float *)(lVar16 + (iVar8 * (int)local_88 + lVar33) *
                                                       (longlong)iVar9 * 4 + 4 + lVar27 * 4 +
                                             lVar28 * 4) + *(float *)(lVar2 + lVar28 * 4);
                              lVar28 = lVar28 + 1;
                            } while (lVar32 != lVar28);
                          }
                          lVar30 = lVar30 + 1;
                        } while (lVar30 != lVar31);
                      }
                      piVar22 = piVar22 + 1;
                    } while (piVar22 != piVar1);
                  }
                  lVar33 = lVar33 + 1;
                } while ((int)lVar33 != iVar4);
              }
              local_88 = local_88 + 1;
            } while ((int)local_88 != iVar3);
          }
LAB_143b15193:
          FUN_1400020a8(*(undefined8 *)(piVar25 + 8));
          FUN_1400020a8(piVar25);
          if ((*param_2 <= param_2[2]) ||
             (piVar25 = *(int **)(param_2[1] + param_2[2] * 0x40), piVar25 == (int *)0x0)) break;
          uVar19 = param_2[1];
          uVar23 = param_2[2];
        } while( true );
      }
      *(undefined4 *)(param_2 + 3) = 0;
    }
  }
  return;
}



// FUNCTION 143b151ec FUN_143b151ec body=723 status=ok
// SIG undefined FUN_143b151ec(void)

void FUN_143b151ec(longlong *param_1,undefined8 *param_2,longlong param_3,float param_4)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_d8 [36];
  int local_b4;
  longlong local_b0;
  longlong local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *param_1;
  iVar4 = *(int *)(lVar2 + 0x490);
  iVar6 = *(int *)(lVar2 + 0x494);
  iVar10 = *(int *)param_1[1];
  iVar12 = ((int *)param_1[1])[1];
  iVar1 = *(int *)(lVar2 + 0x4ac);
  local_b4 = iVar12 - iVar1;
  if (iVar6 <= local_b4) {
    local_b4 = iVar6;
  }
  if (local_b4 < 1) {
    local_b4 = 0;
  }
  iVar15 = iVar10 - iVar1;
  if (iVar4 <= iVar15) {
    iVar15 = iVar4;
  }
  if (iVar15 < 1) {
    iVar15 = 0;
  }
  iVar12 = iVar12 + iVar1 + 1;
  if (iVar12 < iVar6) {
    iVar6 = iVar12;
  }
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  iVar10 = iVar10 + iVar1 + 1;
  if (iVar10 < iVar4) {
    iVar4 = iVar10;
  }
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  iVar6 = (iVar6 - local_b4) * (iVar4 - iVar15);
  if (0 < iVar6) {
    local_a8 = (longlong)iVar6;
    local_b0 = (longlong)(iVar4 - iVar15);
    lVar16 = 0;
    do {
      iVar4 = (int)(lVar16 / local_b0) + local_b4;
      iVar6 = (int)(lVar16 % local_b0) + iVar15;
      lVar7 = param_1[5];
      fVar19 = 1.0;
      if ((int)param_1[6] !=
          *(int *)(*(longlong *)(lVar7 + 0x88) +
                  (longlong)
                  ((iVar4 - *(int *)(lVar7 + 0xc)) * *(int *)(lVar7 + 0x18) +
                  (iVar6 - *(int *)(lVar7 + 8))) * 4)) {
        fVar19 = 0.0;
      }
      piVar3 = (int *)param_1[3];
      lVar7 = *(longlong *)(param_1[4] + 0x20);
      lVar8 = (longlong)*(int *)(param_1[4] + 0x18) *
              (longlong)((iVar4 - piVar3[1]) * piVar3[4] + (iVar6 - *piVar3));
      local_a0 = (((double)iVar6 + 0.5) / (double)*(int *)(lVar2 + 0x490) - *(double *)param_1[2]) *
                 (double)*(int *)(lVar2 + 0x490);
      local_98 = (((double)iVar4 + 0.5) / (double)*(int *)(lVar2 + 0x494) -
                 ((double *)param_1[2])[1]) * (double)*(int *)(lVar2 + 0x494);
      fVar18 = (float)(**(code **)(lVar2 + 0x4b8))(&local_a0);
      fVar18 = fVar18 * fVar19 * param_4;
      *(float *)(lVar7 + lVar8 * 4) = *(float *)(lVar7 + lVar8 * 4) + fVar18;
      if ((longlong)*(int *)(param_2 + 1) != 0) {
        piVar5 = (int *)*param_2;
        piVar3 = piVar5 + *(int *)(param_2 + 1);
        lVar7 = lVar7 + lVar8 * 4 + 4;
        do {
          lVar8 = *(longlong *)(lVar2 + 0x4e0);
          lVar13 = (longlong)*piVar5 * 0x40;
          lVar11 = (longlong)*(int *)(lVar8 + 0x38 + lVar13);
          if (0 < lVar11) {
            iVar4 = *(int *)(*(longlong *)(lVar2 + 0x520) + (longlong)*piVar5 * 4);
            lVar14 = 0;
            do {
              lVar17 = (longlong)*(int *)(*(longlong *)(lVar8 + lVar13 + 0x30) + lVar14 * 4);
              if (0 < lVar17) {
                lVar9 = (longlong)
                        *(int *)(lVar14 * 4 + *(longlong *)(lVar2 + 0x530) + (longlong)iVar4 * 4);
                lVar17 = lVar17 + lVar9;
                do {
                  *(float *)(lVar7 + lVar9 * 4) =
                       *(float *)(param_3 + lVar9 * 4) * fVar18 + *(float *)(lVar7 + lVar9 * 4);
                  lVar9 = lVar9 + 1;
                } while (lVar9 < lVar17);
              }
              lVar14 = lVar14 + 1;
            } while (lVar14 != lVar11);
          }
          piVar5 = piVar5 + 1;
        } while (piVar5 != piVar3);
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != local_a8);
  }
  if ((local_90 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b154c0 FUN_143b154c0 body=208 status=ok
// SIG undefined FUN_143b154c0(void)

void FUN_143b154c0(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    piVar8 = (int *)param_1[2];
    iVar1 = *(int *)param_1[1];
    iVar2 = ((int *)param_1[1])[1];
    iVar3 = piVar8[1];
    iVar4 = *piVar8;
    iVar5 = piVar8[4];
    lVar9 = *(longlong *)(param_1[3] + 0x20);
    iVar6 = *(int *)(param_1[3] + 0x18);
    piVar12 = (int *)*param_2;
    piVar8 = piVar12 + *(int *)(param_2 + 1);
    lVar10 = *param_1;
    do {
      lVar11 = *(longlong *)(lVar10 + 0x4e0);
      lVar14 = (longlong)*piVar12 * 0x40;
      lVar16 = (longlong)*(int *)(lVar11 + 0x38 + lVar14);
      if (0 < lVar16) {
        iVar7 = *(int *)(*(longlong *)(lVar10 + 0x520) + (longlong)*piVar12 * 4);
        lVar15 = 0;
        do {
          lVar13 = (longlong)*(int *)(*(longlong *)(lVar11 + lVar14 + 0x30) + lVar15 * 4);
          if (0 < lVar13) {
            lVar17 = (longlong)
                     *(int *)(lVar15 * 4 + *(longlong *)(lVar10 + 0x530) + (longlong)iVar7 * 4);
            lVar13 = lVar13 + lVar17;
            do {
              *(undefined4 *)
               (lVar9 + (longlong)iVar6 * (longlong)((iVar2 - iVar3) * iVar5 + (iVar1 - iVar4)) * 4
                + 4 + lVar17 * 4) = *(undefined4 *)(param_3 + lVar17 * 4);
              lVar17 = lVar17 + 1;
            } while (lVar17 < lVar13);
          }
          lVar15 = lVar15 + 1;
        } while (lVar15 != lVar16);
      }
      piVar12 = piVar12 + 1;
    } while (piVar12 != piVar8);
  }
  return;
}



// FUNCTION 143b15618 FUN_143b15618 body=1147 status=ok
// SIG undefined FUN_143b15618(void)

void FUN_143b15618(longlong *param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  longlong lVar4;
  double *pdVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
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
  undefined1 auStack_158 [32];
  double local_138;
  double dStack_130;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  uint local_e4;
  ulonglong local_e0;
  double dVar3;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar14 = (longlong)*(int *)(*(longlong *)(*param_1 + 0x70) + 0x28 + (longlong)param_2 * 0x50);
  if (lVar14 != 0) {
    lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x70) + 0x20 + (longlong)param_2 * 0x50);
    lVar13 = 0;
    do {
      local_e4 = *(uint *)(lVar4 + lVar13);
      pdVar5 = (double *)param_1[2];
      lVar6 = *(longlong *)(param_1[1] + 0x10);
      uVar12 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(param_1[1] + 0x1c0) + (ulonglong)(local_e4 >> 9) * 8) +
                (ulonglong)((local_e4 & 0x1ff) << 4));
      lVar7 = *(longlong *)(lVar6 + (uVar12 >> 9 & 0x7fffff) * 8);
      pdVar1 = (double *)(lVar7 + (uVar12 & 0x1ff) * 0x18);
      dVar15 = *pdVar1;
      dVar16 = pdVar1[1];
      dVar23 = *(double *)(lVar7 + 0x10 + (uVar12 & 0x1ff) * 0x18);
      lVar6 = *(longlong *)(lVar6 + (uVar12 >> 0x29) * 8);
      uVar12 = uVar12 >> 0x20 & 0x1ff;
      pdVar1 = (double *)(lVar6 + uVar12 * 0x18);
      dVar17 = *pdVar1;
      dVar18 = pdVar1[1];
      dVar25 = *(double *)(lVar6 + 0x10 + uVar12 * 0x18);
      if (pdVar5 != (double *)0x0) {
        dVar15 = dVar15 * pdVar5[8];
        dVar16 = dVar16 * pdVar5[9];
        dVar23 = dVar23 * pdVar5[10];
        dVar2 = pdVar5[3];
        dVar3 = pdVar5[3];
        dVar9 = *pdVar5;
        dVar10 = pdVar5[1];
        dVar11 = pdVar5[2];
        local_138 = pdVar5[4];
        dStack_130 = pdVar5[5];
        dVar19 = dVar16 * dVar9 - dVar15 * dVar10;
        dVar8 = dVar23 * dVar10 - dVar16 * dVar11;
        dVar24 = dVar15 * dVar11 - dVar23 * dVar9;
        dVar8 = dVar8 + dVar8;
        dVar24 = dVar24 + dVar24;
        dVar19 = dVar19 + dVar19;
        dVar17 = dVar17 * pdVar5[8];
        dVar18 = dVar18 * pdVar5[9];
        dVar25 = dVar25 * pdVar5[10];
        dVar20 = dVar18 * dVar9 - dVar17 * dVar10;
        dVar21 = dVar25 * dVar10 - dVar18 * dVar11;
        dVar22 = dVar17 * dVar11 - dVar9 * dVar25;
        dVar21 = dVar21 + dVar21;
        dVar22 = dVar22 + dVar22;
        dVar20 = dVar20 + dVar20;
        dVar15 = (dVar19 * dVar10 - dVar24 * dVar11) + dVar2 * dVar8 + dVar15 + local_138;
        dVar16 = (dVar11 * dVar8 - dVar9 * dVar19) + dVar3 * dVar24 + dVar16 + dStack_130;
        dVar23 = dVar19 * dVar2 + dVar23 + (dVar24 * dVar9 - dVar8 * dVar10) + pdVar5[6];
        dVar17 = (dVar20 * dVar10 - dVar22 * dVar11) + dVar2 * dVar21 + dVar17 + local_138;
        dVar18 = (dVar11 * dVar21 - dVar9 * dVar20) + dVar3 * dVar22 + dVar18 + dStack_130;
        dVar25 = dVar20 * dVar2 + dVar25 + (dVar22 * dVar9 - dVar21 * dVar10) + pdVar5[6];
      }
      local_110 = (dVar25 + dVar23) * 0.5;
      local_118 = (dVar18 + dVar16) * 0.5;
      local_120 = (dVar17 + dVar15) * 0.5;
      dVar25 = dVar25 - dVar23;
      dVar18 = dVar18 - dVar16;
      dVar17 = dVar17 - dVar15;
      dVar23 = SQRT(dVar25 * dVar25 + dVar17 * dVar17 + dVar18 * dVar18);
      local_108 = 0.0;
      local_100 = 0.0;
      local_f8 = 0.0;
      local_f0 = 0.0;
      if (0.0 < dVar23) {
        local_f8 = 1.0 / dVar23;
        local_108 = dVar17 * local_f8;
        local_100 = dVar18 * local_f8;
        local_f8 = dVar25 * local_f8;
        local_f0 = dVar23 * 0.5;
      }
      (**(code **)param_1[3])(((undefined8 *)param_1[3])[1],&local_e4,&local_120);
      lVar13 = lVar13 + 4;
    } while (lVar14 * 4 != lVar13);
  }
  if ((local_e0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b15a94 FUN_143b15a94 body=24 status=ok
// SIG undefined FUN_143b15a94(void)

undefined1 FUN_143b15a94(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  FUN_147371fc4(param_4 + 8,param_3 + 8);
  return 1;
}



// FUNCTION 143b15aac FUN_143b15aac body=1210 status=ok
// SIG undefined FUN_143b15aac(void)

undefined8 FUN_143b15aac(longlong param_1,undefined8 param_2,int *param_3,uint *param_4,int param_5)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auStack_128 [32];
  uint *local_108;
  longlong local_100;
  code *local_f8;
  code **local_f0;
  uint *local_e8;
  undefined8 uStack_e0;
  longlong local_d0;
  undefined8 *local_c8;
  uint *local_c0;
  undefined8 local_b8;
  uint *local_b0;
  code *local_a8;
  uint **local_a0;
  code *local_98;
  longlong *plStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_c8 = &local_b8;
  local_d0 = param_1;
  local_c0 = param_4;
  local_b8 = param_2;
  if (param_5 == 0) {
    if (param_3[1] != 1) {
      if (param_3[1] != 2) goto LAB_143b15f04;
LAB_143b15b2c:
      plStack_90 = &local_d0;
      local_98 = FUN_143b19510;
      FUN_148387bce(param_3,param_1,param_2);
      goto LAB_143b15f04;
    }
    if (*param_3 == 1) {
      uVar16 = 0;
      local_78 = 0;
      local_70 = 0;
      local_98 = (code *)0x0;
      plStack_90 = (longlong *)0x0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_e8 = (uint *)0x0;
      uStack_e0 = 0;
      iVar4 = param_3[0xc];
      if (iVar4 == 0) {
        uVar14 = 1;
        iVar15 = 0;
        iVar3 = 0;
      }
      else {
        puVar5 = *(uint **)(param_3 + 10);
        if (*(uint **)(param_3 + 10) == (uint *)0x0) {
          puVar5 = (uint *)(param_3 + 6);
        }
        uVar6 = *puVar5;
        if (uVar6 == 0) {
          iVar3 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar3 = iVar4 + -1;
          }
          uVar16 = 0;
          uVar14 = (ulonglong)(uint)(iVar3 >> 5);
          if (iVar3 >> 5 < 1) {
            uVar14 = uVar16;
          }
          iVar15 = 0;
          do {
            if (uVar14 == uVar16) goto LAB_143b15eda;
            iVar15 = iVar15 + 0x20;
            uVar6 = puVar5[uVar16 + 1];
            uVar16 = uVar16 + 1;
          } while (uVar6 == 0);
        }
        else {
          uVar16 = 0;
          iVar15 = 0;
        }
        uVar14 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar14 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar3 = (iVar15 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar3) {
          iVar3 = iVar4;
        }
      }
      if (iVar3 != iVar4) {
        local_100 = param_1 + 0xb8;
        uVar6 = 0xffffffff;
        local_108 = (uint *)(param_3 + 6);
        do {
          local_b0 = *(uint **)(*(longlong *)(param_3 + 2) + (longlong)iVar3 * 0x10);
          FUN_1403458a2(&local_98,&local_a8,&local_b0,0);
          local_a8 = (code *)&local_d0;
          local_a0 = &local_e8;
          local_f8 = FUN_143b1956c;
          local_f0 = &local_a8;
          FUN_146bd7d34(local_100,(ulonglong)local_b0 & 0xffffffff,&local_f8);
          uVar6 = ~(uint)uVar14 & uVar6;
          puVar5 = *(uint **)(param_3 + 10);
          if (*(uint **)(param_3 + 10) == (uint *)0x0) {
            puVar5 = local_108;
          }
          iVar2 = param_3[0xc];
          iVar3 = (int)uVar16;
          lVar12 = (longlong)iVar3;
          uVar10 = puVar5[lVar12] & uVar6;
          if (uVar10 == 0) {
            iVar7 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar7 = iVar2 + -1;
            }
            iVar7 = iVar7 >> 5;
            iVar15 = iVar15 + 0x20;
            iVar8 = iVar7;
            if (iVar7 < iVar3) {
              iVar8 = iVar3;
            }
            if (iVar3 < iVar7) {
              lVar13 = 0;
              do {
                uVar10 = puVar5[lVar12 + lVar13 + 1];
                if (uVar10 != 0) {
                  uVar16 = (ulonglong)(iVar3 + (int)lVar13 + 1);
                  uVar6 = 0xffffffff;
                  goto LAB_143b15d40;
                }
                iVar15 = iVar15 + 0x20;
                lVar13 = lVar13 + 1;
              } while (iVar8 - lVar12 != lVar13);
              uVar6 = 0xffffffff;
              iVar3 = iVar8;
            }
            uVar16 = (ulonglong)(iVar3 + 1);
            iVar3 = iVar2;
          }
          else {
LAB_143b15d40:
            uVar14 = (ulonglong)(-uVar10 & uVar10);
            uVar1 = uVar14 * 2 + 1;
            lVar12 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            iVar3 = (iVar15 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
            if (iVar2 <= iVar3) {
              iVar3 = iVar2;
            }
          }
        } while (iVar3 != iVar4);
        if ((longlong)(int)uStack_e0 != 0) {
          puVar5 = local_e8 + (int)uStack_e0;
          puVar9 = local_e8;
          do {
            if ((int)plStack_90 != local_64) {
              uVar6 = *puVar9;
              lVar12 = *(longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar6 >> 9) * 8)
                        + (ulonglong)((uVar6 & 0x1ff) << 4));
              iVar4 = (int)lVar12;
              puVar11 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                puVar11 = local_60;
              }
              for (iVar3 = *(int *)(puVar11 +
                                   (ulonglong)((iVar4 >> 0x1f) * 0x17 + iVar4 & local_50 - 1U) * 4);
                  iVar3 != -1; iVar3 = *(int *)(local_98 + (longlong)iVar3 * 0x10 + 8)) {
                if (*(longlong *)(local_98 + (longlong)iVar3 * 0x10) == (longlong)iVar4) {
                  iVar4 = (int)((ulonglong)lVar12 >> 0x20);
                  iVar4 = *(int *)(puVar11 +
                                  (ulonglong)(local_50 - 1U & (iVar4 >> 0x1f) * 0x17 + iVar4) * 4);
                  goto LAB_143b15e7e;
                }
              }
            }
LAB_143b15e50:
            puVar9 = puVar9 + 1;
          } while (puVar9 != puVar5);
        }
        if (local_e8 != (uint *)0x0) {
          FUN_1400020a8(local_e8);
        }
      }
LAB_143b15eda:
      local_50 = 0;
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_140345f8a(&local_98);
      goto LAB_143b15f04;
    }
  }
  else {
    if (param_5 != 1) goto LAB_143b15f04;
    if (param_3[1] == 2) goto LAB_143b15b2c;
    if (param_3[1] != 1) goto LAB_143b15f04;
  }
  plStack_90 = &local_d0;
  local_98 = FUN_143b19510;
  FUN_1483869dc(param_3,param_1);
LAB_143b15f04:
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143b15e7e:
  if (iVar4 == -1) goto LAB_143b15e50;
  if (*(longlong *)(local_98 + (longlong)iVar4 * 0x10) == lVar12 >> 0x20) {
    local_b0 = local_c0;
    local_a0 = &local_b0;
    local_a8 = FUN_143b195a0;
    FUN_14838980a(local_d0,uVar6,&local_a8);
    goto LAB_143b15e50;
  }
  iVar4 = *(int *)(local_98 + (longlong)iVar4 * 0x10 + 8);
  goto LAB_143b15e7e;
}



// FUNCTION 143b15f68 FUN_143b15f68 body=2397 status=ok
// SIG undefined FUN_143b15f68(void)

undefined8 FUN_143b15f68(longlong param_1,undefined8 param_2,int *param_3,uint *param_4,int param_5)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  uint *puVar21;
  undefined1 auStack_138 [40];
  uint *local_110;
  ulonglong local_108;
  undefined1 local_fc [4];
  code *local_f8;
  uint ***local_f0;
  uint *local_e8;
  undefined8 uStack_e0;
  longlong local_d0 [3];
  uint **local_b8;
  uint **ppuStack_b0;
  undefined1 local_a8 [16];
  longlong local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 uStack_88;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_d0[1] = 0;
  local_d0[2] = 0xffffffff;
  local_d0[0] = param_1;
  FUN_148376a28();
  if (param_5 == 0) {
    if ((param_3[1] != 2) && ((param_3[1] != 1 || (*param_3 != 4)))) {
      local_b8 = &local_e8;
      local_e8 = (uint *)0x0;
      uStack_e0 = 0;
      local_f0 = &local_b8;
      local_f8 = FUN_143b1968c;
      FUN_148385b4a(param_3,param_1,&local_f8,local_d0);
      iVar17 = *param_3;
      if (iVar17 == 2) {
        iVar17 = 0;
        local_98 = 0;
        local_90 = 0;
        local_b8 = (uint **)0x0;
        ppuStack_b0 = (uint **)0x0;
        local_8c = 0x80;
        uStack_88 = 0xffffffff;
        local_84 = 0;
        local_78 = (undefined1 *)0x0;
        local_70 = 0;
        uVar8 = param_3[0xc];
        if (uVar8 == 0) {
          uVar18 = 1;
          uVar20 = 0;
          uVar4 = 0;
        }
        else {
          puVar6 = *(uint **)(param_3 + 10);
          if (*(uint **)(param_3 + 10) == (uint *)0x0) {
            puVar6 = (uint *)(param_3 + 6);
          }
          uVar4 = *puVar6;
          if (uVar4 == 0) {
            iVar17 = uVar8 + 0x1e;
            if (-1 < (int)(uVar8 - 1)) {
              iVar17 = uVar8 - 1;
            }
            uVar20 = 0;
            uVar18 = (ulonglong)(uint)(iVar17 >> 5);
            if (iVar17 >> 5 < 1) {
              uVar18 = uVar20;
            }
            iVar17 = 0;
            do {
              if (uVar18 == uVar20) goto LAB_143b1617f;
              iVar17 = iVar17 + 0x20;
              uVar4 = puVar6[uVar20 + 1];
              uVar20 = uVar20 + 1;
            } while (uVar4 == 0);
          }
          else {
            iVar17 = 0;
            uVar20 = 0;
          }
          uVar18 = (ulonglong)(-uVar4 & uVar4);
          uVar1 = uVar18 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          uVar4 = (iVar17 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if ((int)uVar8 <= (int)uVar4) {
            uVar4 = uVar8;
          }
        }
        if (uVar4 != uVar8) {
          uVar14 = 0xffffffff;
          local_110 = (uint *)(ulonglong)uVar8;
          do {
            uVar1 = *(ulonglong *)(*(longlong *)(param_3 + 2) + (longlong)(int)uVar4 * 0x10);
            uVar8 = (uint)uVar1;
            uVar4 = uVar8 & 0xfffffff;
            uVar12 = 0xffffffff;
            if ((int)uVar4 < *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144)) {
              uVar9 = (ulonglong)(uVar4 >> 9);
              uVar8 = uVar8 & 0x1ff;
              uVar12 = 0xffffffff;
              if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x148) + uVar9 * 8) +
                                     (ulonglong)uVar8 * 2) - 1U) < 0xfffe) {
                uVar12 = *(undefined4 *)
                          ((ulonglong)uVar8 * 0xc +
                           *(longlong *)(*(longlong *)(param_1 + 0x180) + uVar9 * 8) +
                          (ulonglong)((uint)(uVar1 >> 0x1e) & 3) * 4);
              }
            }
            local_108 = CONCAT44(local_108._4_4_,uVar12);
            FUN_1447cbafe(&local_b8,local_fc,&local_108,0);
            uVar14 = uVar14 & ~(uint)uVar18;
            puVar6 = *(uint **)(param_3 + 10);
            if (*(uint **)(param_3 + 10) == (uint *)0x0) {
              puVar6 = (uint *)(param_3 + 6);
            }
            uVar8 = param_3[0xc];
            iVar5 = (int)uVar20;
            lVar15 = (longlong)iVar5;
            uVar4 = puVar6[lVar15] & uVar14;
            if (uVar4 == 0) {
              iVar19 = uVar8 + 0x1e;
              if (-1 < (int)(uVar8 - 1)) {
                iVar19 = uVar8 - 1;
              }
              iVar19 = iVar19 >> 5;
              iVar17 = iVar17 + 0x20;
              iVar7 = iVar19;
              if (iVar19 < iVar5) {
                iVar7 = iVar5;
              }
              if (iVar5 < iVar19) {
                lVar16 = 0;
                do {
                  uVar4 = puVar6[lVar15 + lVar16 + 1];
                  if (uVar4 != 0) {
                    uVar20 = (ulonglong)(iVar5 + (int)lVar16 + 1);
                    uVar14 = 0xffffffff;
                    goto LAB_143b16534;
                  }
                  iVar17 = iVar17 + 0x20;
                  lVar16 = lVar16 + 1;
                } while (iVar7 - lVar15 != lVar16);
                uVar14 = 0xffffffff;
                iVar5 = iVar7;
              }
              uVar20 = (ulonglong)(iVar5 + 1);
              uVar4 = uVar8;
            }
            else {
LAB_143b16534:
              uVar18 = (ulonglong)(-uVar4 & uVar4);
              uVar1 = uVar18 * 2 + 1;
              lVar15 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                }
              }
              uVar4 = (iVar17 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
              if ((int)uVar8 <= (int)uVar4) {
                uVar4 = uVar8;
              }
            }
          } while (uVar4 != (uint)local_110);
        }
LAB_143b1617f:
        if ((longlong)(int)uStack_e0 != 0) {
          puVar21 = local_e8 + (int)uStack_e0;
          puVar6 = local_e8;
          do {
            if ((int)ppuStack_b0 != local_84) {
              uVar8 = *puVar6;
              lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x180) + (ulonglong)(uVar8 >> 9) * 8);
              uVar18 = (ulonglong)(uVar8 & 0x1ff);
              uVar4 = *(uint *)(lVar15 + uVar18 * 0xc);
              puVar13 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar13 = local_80;
              }
              uVar14 = local_70 - 1;
              iVar17 = *(int *)(puVar13 + (ulonglong)(uVar14 & uVar4) * 4);
              if (iVar17 != -1) {
                uVar2 = *(uint *)(lVar15 + 4 + uVar18 * 0xc);
                uVar3 = *(uint *)(lVar15 + 8 + uVar18 * 0xc);
                do {
                  if (*(uint *)((longlong)local_b8 + (longlong)iVar17 * 0xc) == uVar4) {
                    iVar17 = *(int *)(puVar13 + (ulonglong)(uVar14 & uVar2) * 4);
                    goto LAB_143b1624d;
                  }
                  iVar17 = *(int *)((longlong)local_b8 + (longlong)iVar17 * 0xc + 4);
                } while (iVar17 != -1);
              }
            }
LAB_143b16234:
            puVar6 = puVar6 + 1;
          } while (puVar6 != puVar21);
        }
        local_70 = 0;
        if (local_78 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        uVar18 = (ulonglong)ppuStack_b0 >> 0x20;
        ppuStack_b0 = (uint **)((ulonglong)ppuStack_b0 & 0xffffffff00000000);
        if ((int)uVar18 != 0) {
          FUN_1447a08a2(&local_b8,0);
        }
        uStack_88 = 0xffffffff;
        local_84 = 0;
        local_90 = 0;
        if (0x80 < local_8c) {
          local_8c = 0x80;
          FUN_1446efbd8(local_a8,0);
        }
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        if (local_b8 != (uint **)0x0) {
          FUN_1400020a8();
        }
        iVar17 = *param_3;
      }
      if (iVar17 == 1) {
        uVar18 = 0;
        local_98 = 0;
        local_90 = 0;
        local_b8 = (uint **)0x0;
        ppuStack_b0 = (uint **)0x0;
        local_8c = 0x80;
        uStack_88 = 0xffffffff;
        local_84 = 0;
        local_78 = (undefined1 *)0x0;
        local_70 = 0;
        local_110 = (uint *)(param_3 + 6);
        iVar17 = param_3[0xc];
        if (iVar17 == 0) {
          uVar20 = 1;
          iVar19 = 0;
          iVar5 = 0;
        }
        else {
          puVar6 = *(uint **)(param_3 + 10);
          if (*(uint **)(param_3 + 10) == (uint *)0x0) {
            puVar6 = local_110;
          }
          uVar8 = *puVar6;
          if (uVar8 == 0) {
            iVar5 = iVar17 + 0x1e;
            if (-1 < iVar17 + -1) {
              iVar5 = iVar17 + -1;
            }
            uVar18 = 0;
            uVar20 = (ulonglong)(uint)(iVar5 >> 5);
            if (iVar5 >> 5 < 1) {
              uVar20 = uVar18;
            }
            iVar19 = 0;
            do {
              if (uVar20 == uVar18) goto LAB_143b1658f;
              iVar19 = iVar19 + 0x20;
              uVar8 = puVar6[uVar18 + 1];
              uVar18 = uVar18 + 1;
            } while (uVar8 == 0);
          }
          else {
            uVar18 = 0;
            iVar19 = 0;
          }
          uVar20 = (ulonglong)(-uVar8 & uVar8);
          uVar1 = uVar20 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar5 = (iVar19 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if (iVar17 <= iVar5) {
            iVar5 = iVar17;
          }
        }
        if (iVar5 != iVar17) {
          uVar8 = 0xffffffff;
          do {
            local_108 = CONCAT44(local_108._4_4_,
                                 *(undefined4 *)
                                  (*(longlong *)(param_3 + 2) + (longlong)iVar5 * 0x10));
            FUN_144984904(&local_b8,local_fc,&local_108,0);
            uVar8 = ~(uint)uVar20 & uVar8;
            puVar6 = *(uint **)(param_3 + 10);
            if (*(uint **)(param_3 + 10) == (uint *)0x0) {
              puVar6 = local_110;
            }
            iVar7 = param_3[0xc];
            iVar5 = (int)uVar18;
            lVar15 = (longlong)iVar5;
            uVar4 = puVar6[lVar15] & uVar8;
            if (uVar4 == 0) {
              iVar10 = iVar7 + 0x1e;
              if (-1 < iVar7 + -1) {
                iVar10 = iVar7 + -1;
              }
              iVar10 = iVar10 >> 5;
              iVar19 = iVar19 + 0x20;
              iVar11 = iVar10;
              if (iVar10 < iVar5) {
                iVar11 = iVar5;
              }
              if (iVar5 < iVar10) {
                lVar16 = 0;
                do {
                  uVar4 = puVar6[lVar15 + lVar16 + 1];
                  if (uVar4 != 0) {
                    uVar18 = (ulonglong)(iVar5 + (int)lVar16 + 1);
                    uVar8 = 0xffffffff;
                    goto LAB_143b16808;
                  }
                  iVar19 = iVar19 + 0x20;
                  lVar16 = lVar16 + 1;
                } while (iVar11 - lVar15 != lVar16);
                uVar8 = 0xffffffff;
                lVar15 = (longlong)iVar11;
              }
              uVar18 = lVar15 + 1U & 0xffffffff;
              iVar5 = iVar7;
            }
            else {
LAB_143b16808:
              uVar20 = (ulonglong)(-uVar4 & uVar4);
              uVar1 = uVar20 * 2 + 1;
              lVar15 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                }
              }
              iVar5 = (iVar19 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
              if (iVar7 <= iVar5) {
                iVar5 = iVar7;
              }
            }
          } while (iVar5 != iVar17);
        }
LAB_143b1658f:
        if ((longlong)(int)uStack_e0 != 0) {
          puVar6 = local_e8 + (int)uStack_e0;
          puVar21 = local_e8;
          do {
            if ((int)ppuStack_b0 != local_84) {
              uVar8 = *puVar21;
              lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar8 >> 9) * 8);
              uVar18 = (ulonglong)(uVar8 & 0x1ff);
              uVar4 = *(uint *)(lVar15 + uVar18 * 0xc);
              puVar13 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar13 = local_80;
              }
              uVar14 = local_70 - 1;
              iVar17 = *(int *)(puVar13 + (ulonglong)(uVar14 & uVar4) * 4);
              if (iVar17 != -1) {
                uVar2 = *(uint *)(lVar15 + 4 + uVar18 * 0xc);
                uVar3 = *(uint *)(lVar15 + 8 + uVar18 * 0xc);
                do {
                  if (*(uint *)((longlong)local_b8 + (longlong)iVar17 * 0xc) == uVar4) {
                    iVar17 = *(int *)(puVar13 + (ulonglong)(uVar14 & uVar2) * 4);
                    goto LAB_143b1665c;
                  }
                  iVar17 = *(int *)((longlong)local_b8 + (longlong)iVar17 * 0xc + 4);
                } while (iVar17 != -1);
              }
            }
LAB_143b16643:
            puVar21 = puVar21 + 1;
          } while (puVar21 != puVar6);
        }
        local_70 = 0;
        if (local_78 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        uVar18 = (ulonglong)ppuStack_b0 >> 0x20;
        ppuStack_b0 = (uint **)((ulonglong)ppuStack_b0 & 0xffffffff00000000);
        if ((int)uVar18 != 0) {
          FUN_1447a08a2(&local_b8,0);
        }
        uStack_88 = 0xffffffff;
        local_84 = 0;
        local_90 = 0;
        if (0x80 < local_8c) {
          local_8c = 0x80;
          FUN_1446efbd8(local_a8,0);
        }
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        if (local_b8 != (uint **)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_e8 != (uint *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143b15fcc;
    }
    local_b8 = (uint **)FUN_143b1963e;
  }
  else {
    if (param_5 != 1) goto LAB_143b15fcc;
    local_b8 = (uint **)FUN_143b195f0;
  }
  ppuStack_b0 = &local_e8;
  local_e8 = param_4;
  FUN_148385b4a(param_3,param_1,&local_b8,local_d0);
LAB_143b15fcc:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
LAB_143b1624d:
  if (iVar17 == -1) goto LAB_143b16234;
  if (*(uint *)((longlong)local_b8 + (longlong)iVar17 * 0xc) == uVar2) {
    iVar17 = *(int *)(puVar13 + (ulonglong)(uVar14 & uVar3) * 4);
    goto LAB_143b16271;
  }
  iVar17 = *(int *)((longlong)local_b8 + (longlong)iVar17 * 0xc + 4);
  goto LAB_143b1624d;
LAB_143b16271:
  if (iVar17 == -1) goto LAB_143b16234;
  if (*(uint *)((longlong)local_b8 + (longlong)iVar17 * 0xc) == uVar3) {
    local_108 = (ulonglong)uVar8;
    FUN_1483b983a(param_4 + 2,local_fc,&local_108,0);
    goto LAB_143b16234;
  }
  iVar17 = *(int *)((longlong)local_b8 + (longlong)iVar17 * 0xc + 4);
  goto LAB_143b16271;
LAB_143b1665c:
  if (iVar17 == -1) goto LAB_143b16643;
  if (*(uint *)((longlong)local_b8 + (longlong)iVar17 * 0xc) == uVar2) {
    iVar17 = *(int *)(puVar13 + (ulonglong)(uVar14 & uVar3) * 4);
    goto LAB_143b16680;
  }
  iVar17 = *(int *)((longlong)local_b8 + (longlong)iVar17 * 0xc + 4);
  goto LAB_143b1665c;
LAB_143b16680:
  if (iVar17 == -1) goto LAB_143b16643;
  if (*(uint *)((longlong)local_b8 + (longlong)iVar17 * 0xc) == uVar3) {
    local_108 = (ulonglong)uVar8;
    FUN_1483b983a(param_4 + 2,local_fc,&local_108,0);
    goto LAB_143b16643;
  }
  iVar17 = *(int *)((longlong)local_b8 + (longlong)iVar17 * 0xc + 4);
  goto LAB_143b16680;
}



// FUNCTION 143b168c6 FUN_143b168c6 body=278 status=ok
// SIG undefined FUN_143b168c6(void)

code FUN_143b168c6(undefined1 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  code **ppcVar3;
  undefined1 auStack_e8 [32];
  code **local_c8;
  undefined1 *local_b8;
  undefined8 *local_b0;
  code *local_a8;
  code **local_a0;
  code *local_48;
  undefined1 **local_40;
  undefined1 local_31;
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_31 = (code)0x0;
  local_30 = param_1;
  local_28 = param_2;
  local_20 = param_4;
  if (*(int *)(param_3 + 4) == 2) {
    puVar2 = &DAT_14c846480;
    ppcVar3 = &local_a8;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *ppcVar3 = (code *)*puVar2;
      puVar2 = puVar2 + 1;
      ppcVar3 = ppcVar3 + 1;
    }
    local_b8 = &local_31;
    local_40 = &local_b8;
    local_b0 = &local_30;
    local_c8 = &local_48;
    local_48 = FUN_143b1977a;
    FUN_148384fd1(param_3,param_1,param_2);
  }
  else if (*(int *)(param_3 + 4) == 1) {
    local_48 = (code *)&local_31;
    local_a0 = &local_48;
    local_40 = &local_30;
    local_a8 = FUN_143b196c0;
    FUN_1483842c4(param_3,param_1,0);
  }
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return local_31;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b169de FUN_143b169de body=181 status=ok
// SIG undefined FUN_143b169de(void)

undefined1 FUN_143b169de(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_68 [32];
  code *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined1 local_11;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = &local_10;
  local_20 = &local_11;
  local_11 = 0;
  local_38 = param_1;
  local_28 = param_4;
  local_10 = param_2;
  if (*(int *)(param_3 + 4) == 2) {
    local_40 = &local_38;
    local_48 = FUN_143b19834;
    FUN_148387bce(param_3,param_1,param_2);
  }
  else if (*(int *)(param_3 + 4) == 1) {
    local_40 = &local_38;
    local_48 = FUN_143b19834;
    FUN_1483869dc(param_3,param_1,&local_48);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b16a94 FUN_143b16a94 body=157 status=ok
// SIG undefined FUN_143b16a94(void)

undefined8
FUN_143b16a94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 *local_68;
  code *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  local_40 = 0xffffffff;
  local_50 = param_1;
  local_38 = param_2;
  FUN_148376a28(&local_50);
  local_58 = &local_70;
  local_60 = FUN_143b199d0;
  local_70 = param_4;
  local_68 = &local_38;
  FUN_148385b4a(param_3,param_1,&local_60,&local_50);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b16b32 FUN_143b16b32 body=198 status=ok
// SIG undefined FUN_143b16b32(void)

undefined8 FUN_143b16b32(undefined8 param_1,undefined8 param_2,longlong param_3,code *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  code **ppcVar4;
  undefined1 auStack_b8 [32];
  code **local_98;
  code *local_90;
  code *local_88;
  undefined8 *local_80;
  code *local_78;
  code **local_70;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_3 + 4) == 2) {
    puVar3 = &DAT_14c846480;
    ppcVar4 = &local_78;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *ppcVar4 = (code *)*puVar3;
      puVar3 = puVar3 + 1;
      ppcVar4 = ppcVar4 + 1;
    }
    local_80 = &local_90;
    local_98 = &local_88;
    local_88 = FUN_143b19b06;
    local_90 = param_4;
    uVar1 = FUN_148384fd1(param_3,param_1,param_2,&local_78);
  }
  else {
    uVar1 = 1;
    if (*(int *)(param_3 + 4) == 1) {
      local_70 = &local_88;
      local_78 = FUN_143b19ab8;
      local_88 = param_4;
      uVar1 = FUN_1483842c4(param_3,param_1,0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b16bf9 FUN_143b16bf9 body=2034 status=ok
// SIG undefined FUN_143b16bf9(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_143b16bf9(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  longlong lVar26;
  undefined8 *puVar27;
  longlong lVar28;
  bool bVar29;
  float fVar30;
  double dVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auStack_3d8 [32];
  longlong local_3b8;
  longlong local_3b0;
  undefined4 local_3a8 [188];
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  if (0 < (int)param_1[1]) {
    lVar26 = 0x18;
    lVar28 = 0;
    do {
      dVar2 = *(double *)(*param_1 + lVar26);
      lVar13 = param_2[1];
      uVar10 = (int)lVar13 + 1;
      *(uint *)(param_2 + 1) = uVar10;
      if (*(uint *)((longlong)param_2 + 0xc) < uVar10) {
        FUN_1483ab8d0(param_2);
      }
      lVar3 = *param_2;
      lVar13 = (longlong)(int)lVar13 * 0x10;
      *(undefined4 *)(lVar3 + lVar13) = 2;
      *(int *)(lVar3 + 4 + lVar13) = (int)lVar28;
      *(double *)(lVar3 + 8 + lVar13) = dVar2 * 4.1887902047863905 * dVar2 * dVar2;
      lVar28 = lVar28 + 1;
      lVar26 = lVar26 + 0x20;
    } while (lVar28 < (int)param_1[1]);
  }
  if (0 < (int)param_1[3]) {
    lVar26 = 0x48;
    lVar28 = 0;
    do {
      lVar13 = param_1[2];
      uVar32 = 0;
      uVar33 = 0;
      dVar2 = *(double *)(lVar13 + -0x10 + lVar26);
      if (0.0 <= dVar2) {
        uVar32 = SUB84(dVar2,0);
        uVar33 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      uVar34 = 0;
      uVar35 = 0;
      dVar2 = *(double *)(lVar13 + -8 + lVar26);
      if (0.0 <= dVar2) {
        uVar34 = SUB84(dVar2,0);
        uVar35 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      uVar36 = 0;
      uVar37 = 0;
      dVar2 = *(double *)(lVar13 + lVar26);
      if (0.0 <= dVar2) {
        uVar36 = SUB84(dVar2,0);
        uVar37 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      lVar13 = param_2[1];
      uVar10 = (int)lVar13 + 1;
      *(uint *)(param_2 + 1) = uVar10;
      if (*(uint *)((longlong)param_2 + 0xc) < uVar10) {
        FUN_1483ab8d0(param_2);
      }
      lVar3 = *param_2;
      lVar13 = (longlong)(int)lVar13 * 0x10;
      *(undefined4 *)(lVar3 + lVar13) = 4;
      *(int *)(lVar3 + 4 + lVar13) = (int)lVar28;
      *(double *)(lVar3 + 8 + lVar13) =
           (double)CONCAT44(uVar33,uVar32) * 8.0 * (double)CONCAT44(uVar35,uVar34) *
           (double)CONCAT44(uVar37,uVar36);
      lVar28 = lVar28 + 1;
      lVar26 = lVar26 + 0x50;
    } while (lVar28 < (int)param_1[3]);
  }
  if (0 < (int)param_1[5]) {
    lVar26 = 0x38;
    lVar28 = 0;
    do {
      dVar2 = *(double *)(param_1[4] + -8 + lVar26);
      dVar31 = *(double *)(param_1[4] + lVar26);
      dVar4 = dVar31 * 3.141592653589793 * dVar31;
      lVar13 = param_2[1];
      uVar10 = (int)lVar13 + 1;
      *(uint *)(param_2 + 1) = uVar10;
      if (*(uint *)((longlong)param_2 + 0xc) < uVar10) {
        FUN_1483ab8d0(param_2);
      }
      lVar3 = *param_2;
      lVar13 = (longlong)(int)lVar13 * 0x10;
      *(undefined4 *)(lVar3 + lVar13) = 8;
      *(int *)(lVar3 + 4 + lVar13) = (int)lVar28;
      *(double *)(lVar3 + 8 + lVar13) =
           dVar4 * (dVar2 + dVar2) + dVar31 * dVar4 * 1.3333333333333333;
      lVar28 = lVar28 + 1;
      lVar26 = lVar26 + 0x40;
    } while (lVar28 < (int)param_1[5]);
  }
  if (0 < (int)param_1[7]) {
    lVar26 = 0;
    do {
      FUN_1482e1672(&local_3b8);
      lVar13 = local_3b8;
      lVar28 = param_2[1];
      uVar10 = (int)lVar28 + 1;
      *(uint *)(param_2 + 1) = uVar10;
      if (*(uint *)((longlong)param_2 + 0xc) < uVar10) {
        FUN_1483ab8d0(param_2);
      }
      lVar3 = *param_2;
      lVar28 = (longlong)(int)lVar28 * 0x10;
      *(undefined4 *)(lVar3 + lVar28) = 0x10;
      *(int *)(lVar3 + 4 + lVar28) = (int)lVar26;
      *(longlong *)(lVar3 + 8 + lVar28) = lVar13;
      lVar26 = lVar26 + 1;
    } while (lVar26 < (int)param_1[7]);
  }
  if (0 < (int)param_1[9]) {
    lVar26 = 0x80;
    lVar28 = 0;
    do {
      lVar13 = param_1[8];
      iVar20 = *(int *)(lVar13 + -8 + lVar26);
      iVar23 = *(int *)(lVar13 + -0xc + lVar26);
      dVar31 = (double)*(float *)(lVar13 + lVar26) * 0.5;
      dVar2 = (double)*(int *)(lVar13 + -0x10 + lVar26) * dVar31;
      dVar4 = 0.0;
      if (0.0 <= dVar2) {
        dVar4 = dVar2;
      }
      lVar13 = param_2[1];
      uVar10 = (int)lVar13 + 1;
      *(uint *)(param_2 + 1) = uVar10;
      if (*(uint *)((longlong)param_2 + 0xc) < uVar10) {
        FUN_1483ab8d0(param_2);
      }
      dVar2 = (double)iVar20 * dVar31;
      dVar31 = (double)iVar23 * dVar31;
      dVar5 = 0.0;
      if (0.0 <= dVar31) {
        dVar5 = dVar31;
      }
      dVar31 = 0.0;
      if (0.0 <= dVar2) {
        dVar31 = dVar2;
      }
      lVar3 = *param_2;
      lVar13 = (longlong)(int)lVar13 * 0x10;
      *(undefined4 *)(lVar3 + lVar13) = 0x20;
      *(int *)(lVar3 + 4 + lVar13) = (int)lVar28;
      *(double *)(lVar3 + 8 + lVar13) = dVar31 * dVar5 * dVar4 * 8.0;
      lVar28 = lVar28 + 1;
      lVar26 = lVar26 + 0x90;
    } while (lVar28 < (int)param_1[9]);
  }
  iVar20 = (int)param_2[1];
  if (1 < (longlong)iVar20) {
    lVar26 = *param_2;
    memset(local_3a8,0,0x2f0);
    local_3b0 = (longlong)iVar20 * 0x10 + lVar26 + -0x10;
    local_3b8 = lVar26;
    fVar30 = logf((float)iVar20);
    local_3a8[0] = (int)(longlong)(fVar30 + fVar30);
    plVar11 = &local_3b8;
    do {
      puVar12 = (undefined8 *)*plVar11;
      puVar15 = (undefined8 *)plVar11[1];
      iVar20 = (int)plVar11[2];
      iVar23 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar12) >> 4);
      uVar10 = iVar23 + 1;
      puVar16 = puVar12;
      puVar14 = puVar12;
      puVar18 = puVar15;
      if (iVar20 != 0) {
LAB_143b16fe4:
        if (8 < (int)uVar10) {
          uVar6 = puVar14[(ulonglong)(uVar10 >> 1) * 2];
          uVar7 = (puVar14 + (ulonglong)(uVar10 >> 1) * 2)[1];
          uVar8 = puVar14[1];
          puVar14[(ulonglong)(uVar10 >> 1) * 2] = *puVar14;
          (puVar14 + (ulonglong)(uVar10 >> 1) * 2)[1] = uVar8;
          *puVar14 = uVar6;
          puVar14[1] = uVar7;
          puVar24 = puVar18 + 2;
          puVar12 = puVar14;
          do {
            puVar9 = puVar12 + 2;
            puVar19 = puVar12 + 2;
            do {
              puVar12 = puVar19;
              puVar27 = puVar9;
              if (puVar18 < puVar12) break;
              puVar9 = puVar27 + 2;
              puVar19 = puVar12 + 2;
            } while ((double)puVar14[1] < (double)puVar12[1] ||
                     (double)puVar14[1] == (double)puVar12[1]);
            puVar9 = puVar24 + -4;
            do {
              puVar19 = puVar24;
              puVar25 = puVar9;
              puVar24 = puVar19 + -2;
              if (puVar24 <= puVar14) break;
              puVar9 = puVar25 + -2;
            } while ((double)puVar19[-1] < (double)puVar14[1] ||
                     (double)puVar19[-1] == (double)puVar14[1]);
            if (puVar24 < puVar12) goto LAB_143b1709b;
            uVar6 = *puVar12;
            uVar7 = puVar12[1];
            uVar8 = puVar19[-1];
            *puVar12 = *puVar24;
            puVar12[1] = uVar8;
            *puVar24 = uVar6;
            puVar19[-1] = uVar7;
          } while( true );
        }
        for (; puVar15 = puVar14, puVar12 = puVar14, puVar14 < puVar18; puVar18 = puVar18 + -2) {
          while (puVar16 = puVar15, puVar12 = puVar12 + 2, puVar12 <= puVar18) {
            puVar15 = puVar12;
            if ((double)puVar16[1] < (double)puVar12[1] || (double)puVar16[1] == (double)puVar12[1])
            {
              puVar15 = puVar16;
            }
          }
          local_b8 = *puVar16;
          uStack_b0 = puVar16[1];
          uVar7 = local_b8;
          uVar8 = uStack_b0;
          uVar6 = puVar18[1];
          *puVar16 = *puVar18;
          puVar16[1] = uVar6;
          local_b8._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
          uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
          *(undefined4 *)puVar18 = (undefined4)local_b8;
          *(undefined4 *)((longlong)puVar18 + 4) = local_b8._4_4_;
          *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_b0;
          *(undefined4 *)((longlong)puVar18 + 0xc) = uStack_b0._4_4_;
          local_b8 = uVar7;
          uStack_b0 = uVar8;
        }
        goto LAB_143b17380;
      }
LAB_143b17145:
      if (uVar10 != 0) {
        iVar20 = (iVar23 - (iVar23 + -1 >> 0x1f)) + -1 >> 1;
        iVar23 = iVar20;
joined_r0x000143b1716c:
        do {
          iVar22 = iVar20 * 2 + 1;
          if (iVar22 < (int)uVar10) {
            iVar21 = iVar20 * 2 + 2;
            if ((iVar21 < (int)uVar10) &&
               ((double)puVar12[(longlong)iVar21 * 2 + 1] <
                (double)puVar12[(longlong)iVar22 * 2 + 1] ||
                (double)puVar12[(longlong)iVar21 * 2 + 1] ==
                (double)puVar12[(longlong)iVar22 * 2 + 1])) {
              iVar22 = iVar21;
            }
            if ((double)puVar12[(longlong)iVar22 * 2 + 1] <=
                (double)puVar12[(longlong)iVar20 * 2 + 1] &&
                (double)puVar12[(longlong)iVar20 * 2 + 1] !=
                (double)puVar12[(longlong)iVar22 * 2 + 1]) {
              puVar18 = puVar12 + (longlong)iVar20 * 2;
              puVar15 = puVar12 + (longlong)iVar22 * 2;
              local_b8 = *puVar18;
              uStack_b0 = puVar18[1];
              uVar7 = local_b8;
              uVar8 = uStack_b0;
              uVar6 = puVar15[1];
              *puVar18 = *puVar15;
              puVar18[1] = uVar6;
              local_b8._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
              uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
              *(undefined4 *)puVar15 = (undefined4)local_b8;
              *(undefined4 *)((longlong)puVar15 + 4) = local_b8._4_4_;
              *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_b0;
              *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_b0._4_4_;
              iVar20 = iVar22;
              local_b8 = uVar7;
              uStack_b0 = uVar8;
              goto joined_r0x000143b1716c;
            }
          }
          bVar29 = iVar23 != 0;
          iVar20 = iVar23 + -1;
          iVar23 = iVar20;
        } while (bVar29);
        if (1 < (int)uVar10) {
          uVar17 = (ulonglong)uVar10 - 1;
          local_b8 = *puVar12;
          uStack_b0 = puVar12[1];
          uVar7 = local_b8;
          uVar8 = uStack_b0;
          uVar6 = (puVar12 + uVar17 * 2)[1];
          *puVar12 = puVar12[uVar17 * 2];
          puVar12[1] = uVar6;
          local_b8._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
          uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
          puVar18 = puVar12 + uVar17 * 2;
          *(undefined4 *)puVar18 = (undefined4)local_b8;
          *(undefined4 *)((longlong)puVar18 + 4) = local_b8._4_4_;
          *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_b0;
          *(undefined4 *)((longlong)puVar18 + 0xc) = uStack_b0._4_4_;
          local_b8 = uVar7;
          uStack_b0 = uVar8;
          if (uVar10 != 2) {
            do {
              iVar20 = 0;
              iVar22 = 1;
              iVar23 = 0;
              do {
                iVar20 = iVar20 + 2;
                iVar21 = iVar22;
                if (((longlong)iVar20 < (longlong)uVar17) &&
                   ((double)puVar12[(longlong)iVar20 * 2 + 1] <
                    (double)puVar12[(longlong)iVar22 * 2 + 1] ||
                    (double)puVar12[(longlong)iVar20 * 2 + 1] ==
                    (double)puVar12[(longlong)iVar22 * 2 + 1])) {
                  iVar21 = iVar20;
                }
                if ((double)puVar12[(longlong)iVar23 * 2 + 1] <
                    (double)puVar12[(longlong)iVar21 * 2 + 1] ||
                    (double)puVar12[(longlong)iVar23 * 2 + 1] ==
                    (double)puVar12[(longlong)iVar21 * 2 + 1]) break;
                puVar18 = puVar12 + (longlong)iVar23 * 2;
                puVar15 = puVar12 + (longlong)iVar21 * 2;
                uVar6 = *puVar18;
                uVar7 = puVar18[1];
                uVar8 = puVar15[1];
                *puVar18 = *puVar15;
                puVar18[1] = uVar8;
                *puVar15 = uVar6;
                puVar15[1] = uVar7;
                iVar20 = iVar21 * 2;
                iVar22 = iVar21 * 2 + 1;
                iVar23 = iVar21;
              } while ((longlong)iVar22 < (longlong)uVar17);
              uVar1 = uVar17 - 1;
              local_b8 = *puVar12;
              uStack_b0 = puVar12[1];
              uVar7 = local_b8;
              uVar8 = uStack_b0;
              uVar6 = (puVar12 + uVar1 * 2)[1];
              *puVar12 = puVar12[uVar1 * 2];
              puVar12[1] = uVar6;
              local_b8._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
              uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
              puVar18 = puVar12 + uVar1 * 2;
              *(undefined4 *)puVar18 = (undefined4)local_b8;
              *(undefined4 *)((longlong)puVar18 + 4) = local_b8._4_4_;
              *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_b0;
              *(undefined4 *)((longlong)puVar18 + 0xc) = uStack_b0._4_4_;
              bVar29 = 2 < uVar17;
              uVar17 = uVar1;
              local_b8 = uVar7;
              uStack_b0 = uVar8;
            } while (bVar29);
          }
        }
      }
LAB_143b17380:
      plVar11 = plVar11 + -3;
    } while (&local_3b8 <= plVar11);
  }
  if ((local_a0 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143b1709b:
  local_b8 = *puVar14;
  uStack_b0 = puVar14[1];
  uVar7 = local_b8;
  uVar8 = uStack_b0;
  uVar6 = puVar19[-1];
  *puVar14 = *puVar24;
  puVar14[1] = uVar6;
  local_b8._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
  uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
  *(undefined4 *)puVar24 = (undefined4)local_b8;
  *(undefined4 *)((longlong)puVar19 + -0xc) = local_b8._4_4_;
  *(undefined4 *)(puVar19 + -1) = (undefined4)uStack_b0;
  *(undefined4 *)((longlong)puVar19 + -4) = uStack_b0._4_4_;
  iVar20 = iVar20 + -1;
  puVar19 = puVar19 + -4;
  local_b8 = uVar7;
  uStack_b0 = uVar8;
  if ((longlong)puVar25 - (longlong)puVar16 < (longlong)puVar15 - (longlong)puVar27) {
    if (puVar12 < puVar18) {
      *plVar11 = (longlong)puVar12;
      plVar11[1] = (longlong)puVar18;
      *(int *)(plVar11 + 2) = iVar20;
      plVar11 = plVar11 + 3;
    }
    puVar12 = puVar14;
    puVar15 = puVar25;
    if (puVar24 <= puVar14 + 2) goto LAB_143b17380;
  }
  else {
    if (puVar14 + 2 < puVar24) {
      *plVar11 = (longlong)puVar14;
      plVar11[1] = (longlong)puVar19;
      *(int *)(plVar11 + 2) = iVar20;
      plVar11 = plVar11 + 3;
    }
    puVar14 = puVar27;
    puVar19 = puVar18;
    puVar15 = puVar18;
    if (puVar18 <= puVar12) goto LAB_143b17380;
  }
  iVar23 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar14) >> 4);
  uVar10 = iVar23 + 1;
  puVar16 = puVar14;
  puVar14 = puVar12;
  puVar18 = puVar19;
  if (iVar20 == 0) goto LAB_143b17145;
  goto LAB_143b16fe4;
}



// FUNCTION 143b173ec FUN_143b173ec body=1458 status=ok
// SIG undefined FUN_143b173ec(void)

void FUN_143b173ec(double *param_1,double *param_2)

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
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_178 [40];
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  double local_100;
  double local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  dVar17 = param_1[6];
  local_140 = param_1[2];
  local_150 = *param_1;
  local_148 = param_1[1];
  dVar12 = (local_150 - dVar17 * param_1[3]) * param_2[8];
  dVar13 = (local_148 - param_1[4] * dVar17) * param_2[9];
  dVar14 = (local_140 - param_1[5] * dVar17) * param_2[10];
  dVar2 = *param_2;
  dVar3 = param_2[1];
  dVar9 = param_2[2];
  dVar4 = dVar13 * dVar2 - dVar12 * dVar3;
  dVar7 = dVar14 * dVar3 - dVar13 * dVar9;
  dVar8 = dVar12 * dVar9 - dVar14 * dVar2;
  dVar7 = dVar7 + dVar7;
  dVar8 = dVar8 + dVar8;
  dVar1 = param_2[3];
  dVar6 = param_2[3];
  dVar4 = dVar4 + dVar4;
  dVar10 = (dVar17 * param_1[3] + local_150) * param_2[8];
  dVar11 = (param_1[4] * dVar17 + local_148) * param_2[9];
  dVar5 = (param_1[5] * dVar17 + local_140) * param_2[10];
  dVar15 = dVar11 * dVar2 - dVar10 * dVar3;
  dVar16 = dVar5 * dVar3 - dVar11 * dVar9;
  dVar17 = dVar10 * dVar9 - dVar2 * dVar5;
  dVar16 = dVar16 + dVar16;
  dVar17 = dVar17 + dVar17;
  dVar15 = dVar15 + dVar15;
  dVar12 = (dVar4 * dVar3 - dVar8 * dVar9) + dVar1 * dVar7 + dVar12 + param_2[4];
  dVar13 = (dVar9 * dVar7 - dVar2 * dVar4) + dVar6 * dVar8 + dVar13 + param_2[5];
  dVar10 = (dVar15 * dVar3 - dVar17 * dVar9) + dVar1 * dVar16 + dVar10 + param_2[4];
  dVar9 = (dVar9 * dVar16 - dVar2 * dVar15) + dVar6 * dVar17 + dVar11 + param_2[5];
  dVar5 = dVar15 * dVar1 + dVar5 + (dVar17 * dVar2 - dVar16 * dVar3) + param_2[6];
  dVar17 = dVar4 * dVar1 + dVar14 + (dVar8 * dVar2 - dVar7 * dVar3) + param_2[6];
  dVar6 = dVar10 - dVar12;
  *param_1 = (dVar12 + dVar10) * 0.5;
  param_1[1] = (dVar13 + dVar9) * 0.5;
  dVar12 = dVar5 - dVar17;
  dVar9 = dVar9 - dVar13;
  dVar1 = SQRT(dVar12 * dVar12 + dVar6 * dVar6 + dVar9 * dVar9);
  dVar4 = 0.0;
  param_1[2] = (dVar17 + dVar5) * 0.5;
  dVar17 = 0.0;
  dVar8 = 0.0;
  uVar18 = 0;
  uVar19 = 0;
  if (0.0 < dVar1) {
    dVar8 = 1.0 / dVar1;
    dVar4 = dVar6 * dVar8;
    dVar17 = dVar9 * dVar8;
    dVar8 = dVar12 * dVar8;
    uVar18 = SUB84(dVar1 * 0.5,0);
    uVar19 = (undefined4)((ulonglong)(dVar1 * 0.5) >> 0x20);
  }
  param_1[3] = dVar4;
  param_1[4] = dVar17;
  param_1[5] = dVar8;
  param_1[6] = (double)CONCAT44(uVar19,uVar18);
  dVar17 = param_1[7];
  local_110 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_108 = 0x3ff0000000000000;
  local_138 = *param_1;
  dStack_130 = param_1[1];
  local_128 = param_1[2];
  local_d8 = DAT_14c8463c8;
  local_e8 = (undefined4)DAT_14c8463b8;
  uStack_e4 = DAT_14c8463b8._4_4_;
  uStack_e0 = (undefined4)DAT_14c8463c0;
  uStack_dc = DAT_14c8463c0._4_4_;
  FUN_146bfb7f2(&local_120,&local_e8,param_1 + 3);
  local_f0 = 0;
  local_100 = dVar17;
  local_f8 = dVar17;
  FUN_146bed047(&local_e8,&local_120);
  dVar1 = (local_d8 + local_128) - local_128;
  dVar7 = ((double)CONCAT44(uStack_dc,uStack_e0) + dStack_130) - dStack_130;
  dVar9 = ((double)CONCAT44(uStack_e4,local_e8) + local_138) - local_138;
  dVar5 = dVar9 * param_2[8];
  dVar10 = dVar7 * param_2[9];
  dVar4 = dVar1 * param_2[10];
  dVar13 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  dVar17 = param_2[3];
  dVar6 = dVar10 * dVar13 - dVar5 * dVar2;
  dVar8 = dVar4 * dVar2 - dVar10 * dVar3;
  dVar12 = dVar5 * dVar3 - dVar13 * dVar4;
  dVar8 = dVar8 + dVar8;
  dVar12 = dVar12 + dVar12;
  dVar6 = dVar6 + dVar6;
  dVar4 = dVar6 * dVar17 + dVar4 + (dVar12 * dVar13 - dVar8 * dVar2);
  dVar17 = (dVar6 * dVar2 - dVar12 * dVar3) + dVar17 * dVar8 + dVar5;
  dVar6 = (dVar3 * dVar8 - dVar13 * dVar6) + param_2[3] * dVar12 + dVar10;
  param_1[7] = (SQRT(dVar4 * dVar4 + dVar17 * dVar17 + dVar6 * dVar6) /
               SQRT(dVar1 * dVar1 + dVar9 * dVar9 + dVar7 * dVar7)) * param_1[7];
  if ((local_d0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b1799f FUN_143b1799f body=5302 status=ok
// SIG undefined FUN_143b1799f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b1799f(double *param_1,double *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  double dVar44;
  undefined1 auVar45 [16];
  double dVar47;
  undefined1 auVar46 [16];
  undefined1 auStack_328 [32];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  double local_2c8;
  undefined8 uStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  undefined8 uStack_290;
  double local_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  undefined1 local_188 [16];
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  double *pdVar4;
  
  dVar39 = DAT_14c846520;
  dVar37 = DAT_14c846518;
  dVar32 = DAT_14c846510;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  dVar16 = (double)*(float *)(param_1 + 0x10) * -0.5;
  local_2e8._0_8_ = (double)*(float *)(param_1 + 0x10) * 0.5;
  local_308 = *(undefined1 (*) [16])(param_1 + 8);
  dVar42 = local_308._0_8_;
  dVar6 = local_308._8_8_;
  auVar33 = *(undefined1 (*) [16])(param_1 + 10);
  dVar35 = auVar33._0_8_;
  auVar7 = minpd(local_308,_DAT_149934d80);
  auVar8 = ZEXT816(0x3ff0000000000000);
  auVar14 = minpd(auVar33,auVar8);
  auVar40._8_8_ = -(ulonglong)(auVar7._8_8_ < 0.0);
  auVar40._0_8_ = -(ulonglong)(auVar7._0_8_ < 0.0);
  iVar1 = movmskpd((int)local_d0,auVar40);
  auVar7._8_8_ = -(ulonglong)(auVar14._8_8_ < 0.0);
  auVar7._0_8_ = -(ulonglong)(auVar14._0_8_ < 0.0);
  uVar2 = movmskpd((int)param_1,auVar7);
  if ((uVar2 & 0x3fffffff) == 0 && iVar1 == 0) {
    dVar42 = param_1[4];
    dVar6 = param_1[5];
    dVar13 = *param_1 * 0.0;
    dVar26 = param_1[1] * 0.0;
    dVar41 = param_1[2] * 0.0;
    dVar17 = param_1[3] * 0.0;
    dVar18 = dVar17 * 1.0;
    dVar22 = dVar41 * -1.0;
    dVar15 = dVar26 * -1.0 + *param_1 + dVar18 + dVar41;
    dVar17 = dVar13 * 1.0 + param_1[1] + dVar22 + dVar17;
    local_2f8._8_8_ = ((dVar13 * -1.0 + param_1[3]) - dVar26) + dVar22;
    local_2f8._0_8_ = ((dVar26 * 1.0 + param_1[2]) - dVar13) + dVar18;
    dVar26 = param_1[6] * 1.0;
    dVar41 = param_1[7] * 0.0;
    dVar18 = dVar6 * 0.0 - dVar42 * 0.0;
    dVar22 = dVar26 * 0.0 - dVar6 * 0.0;
    dVar30 = dVar42 * 0.0 - dVar26 * 0.0;
    dVar36 = dVar41 * 1.0 - dVar41 * 1.0;
    dVar22 = dVar22 + dVar22;
    dVar30 = dVar30 + dVar30;
    dVar18 = dVar18 + dVar18;
    dVar36 = dVar36 + dVar36;
    dVar13 = dVar16 * DAT_14c846510 + (dVar18 * 0.0 - dVar30 * 0.0) + dVar42 + dVar22;
    dVar6 = DAT_14c846518 * dVar16 + (dVar22 * 0.0 - dVar18 * 0.0) + dVar6 + dVar30;
    dVar42 = DAT_14c846520 * dVar16 + (dVar30 * 0.0 - dVar22 * 0.0) + dVar26 + dVar18;
    dVar16 = (dVar36 * 1.0 - dVar36 * 1.0) + dVar41 + dVar36 + 0.0;
    auVar33._8_8_ = auVar33._8_8_ * 0.0;
    auVar33._0_8_ = dVar35 * 1.0;
    uVar3 = 0;
  }
  else {
    local_1c8 = 0.0;
    uStack_1c0 = 0;
    local_2f8 = ZEXT816(0x3ff0000000000000) << 0x40;
    local_1b8 = 0.0;
    dStack_1b0 = 1.0;
    local_1a8 = 0.0;
    uStack_1a0 = 0;
    local_198 = 0.0;
    dStack_190 = 0.0;
    uStack_160 = 0x3ff0000000000000;
    dVar26 = *param_1;
    dVar41 = param_1[1];
    dVar13 = param_1[2];
    dVar15 = dVar41 + dVar41;
    dVar17 = dVar13 + dVar13;
    dVar30 = dVar26 * (dVar26 + dVar26);
    local_258 = (1.0 - (dVar13 * dVar17 + dVar41 * dVar15)) * dVar42;
    dStack_230 = (1.0 - (dVar13 * dVar17 + dVar30)) * dVar6;
    dVar13 = param_1[3];
    dVar18 = dVar17 * dVar13;
    dVar22 = (dVar26 + dVar26) * param_1[3];
    dVar13 = dVar15 * dVar13;
    local_238 = (dVar15 * dVar26 - dVar18) * dVar6;
    dStack_210 = (dVar17 * dVar41 - dVar22) * dVar35;
    local_218 = (dVar13 + *param_1 * dVar17) * dVar35;
    dStack_250 = (dVar15 * dVar26 + dVar18) * dVar42;
    local_228 = (dVar17 * dVar41 + dVar22) * dVar6;
    local_248 = (*param_1 * dVar17 - dVar13) * dVar42;
    uStack_240 = 0;
    uStack_220 = 0;
    local_208 = (1.0 - (dVar30 + dVar41 * dVar15)) * dVar35;
    uStack_200 = 0;
    local_1f8 = param_1[4];
    dStack_1f0 = param_1[5];
    local_1e8 = param_1[6];
    uStack_1e0 = 0x3ff0000000000000;
    local_2d8._8_8_ = auVar33._8_8_ * 0.0;
    local_2d8._0_8_ = dVar35 * 1.0;
    local_1d8 = auVar8;
    local_188 = auVar8;
    local_178 = dVar16 * DAT_14c846510;
    dStack_170 = DAT_14c846518 * dVar16;
    local_168 = DAT_14c846520 * dVar16;
    FUN_1447fea8d(&local_158);
    auVar33 = local_2d8;
    auVar7 = _DAT_149934d80;
    local_298 = local_148;
    local_2b8 = dVar32;
    dStack_2b0 = 0.0;
    dVar42 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
    local_2a8 = local_138;
    local_280 = local_128;
    dVar35 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
    dVar6 = local_108 * local_108 + local_118 * local_118 + local_110 * local_110;
    local_2c8 = dVar39;
    uStack_2c0 = 0;
    uVar5 = -(ulonglong)(0.0 <= dVar42 + -9.99999993922529e-09);
    dVar42 = (double)(~uVar5 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar42)) & uVar5);
    uVar5 = -(ulonglong)(0.0 <= dVar35 + -9.99999993922529e-09);
    dVar35 = (double)(~uVar5 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar35)) & uVar5);
    uVar5 = -(ulonglong)(0.0 <= dVar6 + -9.99999993922529e-09);
    dVar6 = (double)(~uVar5 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar6)) & uVar5);
    auVar14._8_8_ = -(ulonglong)(0.0 <= (double)local_308._8_8_);
    auVar14._0_8_ = -(ulonglong)(0.0 <= (double)local_308._0_8_);
    auVar40 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar14);
    uVar5 = -(ulonglong)(0.0 <= local_2d8._0_8_);
    dVar16 = (double)(~uVar5 & 0xbff0000000000000 | uVar5 & 0x3ff0000000000000);
    dVar13 = auVar40._0_8_;
    local_158 = local_158 * dVar42 * dVar13;
    local_150 = local_150 * dVar42 * dVar13;
    local_148 = dVar42 * local_148 * dVar13;
    dVar42 = auVar40._8_8_;
    local_128 = dVar35 * local_128 * dVar42;
    local_130 = local_130 * dVar35 * dVar42;
    local_138 = dVar42 * local_138 * dVar35;
    local_108 = dVar6 * local_108 * dVar16;
    local_110 = local_110 * dVar6 * dVar16;
    local_118 = dVar16 * local_118 * dVar6;
    pdVar4 = &local_278;
    iVar1 = FUN_14481fd10(pdVar4,&local_158);
    uVar3 = SUB84(pdVar4,0);
    dVar42 = local_268 * local_268 + local_278 * local_278;
    dVar35 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar19._0_8_ = dVar42 + dVar35;
    auVar19._8_8_ = dVar42 + dVar35;
    auVar8._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_);
    auVar8._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_);
    auVar40 = sqrtpd(auVar19,auVar19);
    auVar7 = divpd(auVar7,auVar40);
    auVar23._0_8_ = auVar7._0_8_ * local_268;
    auVar23._8_8_ = auVar7._8_8_ * dStack_260;
    dVar15 = (double)((ulonglong)(local_278 * auVar7._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_));
    dVar17 = (double)((ulonglong)(dStack_270 * auVar7._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_));
    local_2f8 = blendvpd(local_2f8,auVar23,auVar8);
    dVar16 = 0.0;
    dVar42 = local_e8;
    dVar13 = local_f8;
    dVar6 = dStack_f0;
  }
  local_2c8 = dVar39 * (double)local_2e8._0_8_;
  uStack_2c0 = 0;
  local_298 = dVar37 * (double)local_2e8._0_8_;
  uStack_290 = 0;
  local_2b8 = dVar32 * (double)local_2e8._0_8_;
  dStack_2b0 = 0.0;
  dVar26 = *param_2;
  dVar41 = param_2[1];
  dVar18 = param_2[2];
  dVar22 = param_2[3];
  local_2a8 = param_2[4];
  dStack_2a0 = param_2[5];
  auVar7 = *(undefined1 (*) [16])(param_2 + 8);
  dVar35 = auVar7._0_8_;
  dVar37 = auVar7._8_8_;
  auVar40 = *(undefined1 (*) [16])(param_2 + 10);
  dVar32 = auVar40._0_8_;
  dVar39 = auVar40._8_8_;
  auVar7 = minpd(local_308,auVar7);
  dVar30 = auVar33._0_8_;
  auVar40 = minpd(auVar33,auVar40);
  auVar31._8_8_ = -(ulonglong)(auVar7._8_8_ < 0.0);
  auVar31._0_8_ = -(ulonglong)(auVar7._0_8_ < 0.0);
  iVar1 = movmskpd(iVar1,auVar31);
  auVar34._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
  auVar34._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
  uVar2 = movmskpd(uVar3,auVar34);
  if ((uVar2 & 0x3fffffff) == 0 && iVar1 == 0) {
    dVar38 = dVar17 * dVar18 * -1.0 +
             (double)local_2f8._0_8_ * dVar41 +
             (double)local_2f8._8_8_ * dVar26 * 1.0 + dVar15 * dVar22;
    dVar44 = dVar15 * dVar18 * 1.0 +
             (double)local_2f8._8_8_ * dVar41 +
             (double)local_2f8._0_8_ * dVar26 * -1.0 + dVar17 * dVar22;
    auVar43._8_8_ =
         (double)local_2f8._0_8_ * dVar18 * -1.0 +
         ((dVar26 * dVar15 * -1.0 + (double)local_2f8._8_8_ * dVar22) - dVar41 * dVar17);
    auVar43._0_8_ =
         (double)local_2f8._8_8_ * dVar18 * 1.0 +
         ((dVar26 * dVar17 * 1.0 + (double)local_2f8._0_8_ * dVar22) - dVar41 * dVar15);
    dVar13 = dVar13 * dVar35;
    dVar6 = dVar6 * dVar37;
    dVar42 = dVar42 * dVar32;
    dVar16 = dVar16 * dVar39;
    dVar15 = dVar6 * dVar26 - dVar41 * dVar13;
    dVar17 = dVar42 * dVar41 - dVar18 * dVar6;
    dVar36 = dVar13 * dVar18 - dVar26 * dVar42;
    dVar47 = dVar16 * dVar22 - dVar22 * dVar16;
    dVar17 = dVar17 + dVar17;
    dVar36 = dVar36 + dVar36;
    dVar15 = dVar15 + dVar15;
    dVar47 = dVar47 + dVar47;
    dVar13 = local_2a8 + (dVar15 * dVar41 - dVar18 * dVar36) + dVar22 * dVar17 + dVar13;
    dVar6 = dStack_2a0 + (dVar17 * dVar18 - dVar15 * dVar26) + dVar22 * dVar36 + dVar6;
    dVar42 = param_2[6] + (dVar36 * dVar26 - dVar41 * dVar17) + dVar22 * dVar15 + dVar42;
    dVar16 = param_2[7] + (dVar47 * dVar22 - dVar47 * dVar22) + dVar22 * dVar47 + dVar16;
    auVar46._0_8_ = (double)local_308._0_8_ * dVar35;
    auVar46._8_8_ = (double)local_308._8_8_ * dVar37;
    dVar30 = dVar30 * dVar32;
    dVar39 = auVar33._8_8_ * dVar39;
    uVar3 = 0;
    local_2d8 = auVar33;
  }
  else {
    dVar16 = dVar41 + dVar41;
    dVar36 = dVar18 + dVar18;
    dVar44 = dVar26 * (dVar26 + dVar26);
    dVar38 = (dVar26 + dVar26) * dVar22;
    local_2d8._8_8_ = auVar33._8_8_ * dVar39;
    local_2d8._0_8_ = dVar30 * dVar32;
    local_198 = (dVar16 * dVar22 + dVar26 * dVar36) * dVar32;
    local_1b8 = (dVar16 * dVar26 - dVar36 * dVar22) * dVar37;
    dStack_190 = (dVar36 * dVar41 - dVar38) * dVar32;
    local_2e8._8_8_ = (double)local_308._8_8_ * dVar37;
    local_2e8._0_8_ = (double)local_308._0_8_ * dVar35;
    dStack_1b0 = (1.0 - (dVar18 * dVar36 + dVar44)) * dVar37;
    local_1a8 = (dVar36 * dVar41 + dVar38) * dVar37;
    local_1c8 = (dVar26 * dVar36 - dVar16 * dVar22) * dVar35;
    local_1d8._8_8_ = (dVar16 * dVar26 + dVar36 * dVar22) * dVar35;
    local_1d8._0_8_ = (1.0 - (dVar18 * dVar36 + dVar41 * dVar16)) * dVar35;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_188._8_8_ = 0;
    local_188._0_8_ = (1.0 - (dVar44 + dVar41 * dVar16)) * dVar32;
    uStack_160 = 0x3ff0000000000000;
    dVar35 = dVar17 + dVar17;
    dVar37 = (double)local_2f8._0_8_ + (double)local_2f8._0_8_;
    dVar32 = dVar15 * (dVar15 + dVar15);
    local_208 = (1.0 - (dVar32 + dVar17 * dVar35)) * dVar30;
    dVar39 = (dVar15 + dVar15) * (double)local_2f8._8_8_;
    local_218 = (dVar15 * dVar37 + dVar35 * (double)local_2f8._8_8_) * dVar30;
    local_238 = (dVar35 * dVar15 - dVar37 * (double)local_2f8._8_8_) * (double)local_308._8_8_;
    dStack_210 = (dVar37 * dVar17 - dVar39) * dVar30;
    local_258 = (1.0 - ((double)local_2f8._0_8_ * dVar37 + dVar17 * dVar35)) *
                (double)local_308._0_8_;
    dStack_230 = (1.0 - ((double)local_2f8._0_8_ * dVar37 + dVar32)) * (double)local_308._8_8_;
    dStack_250 = (dVar35 * dVar15 + dVar37 * (double)local_2f8._8_8_) * (double)local_308._0_8_;
    local_228 = (dVar37 * dVar17 + dVar39) * (double)local_308._8_8_;
    local_248 = (dVar15 * dVar37 - dVar35 * (double)local_2f8._8_8_) * (double)local_308._0_8_;
    uStack_240 = 0;
    uStack_220 = 0;
    uStack_200 = 0;
    uStack_1e0 = 0x3ff0000000000000;
    local_1f8 = dVar13;
    dStack_1f0 = dVar6;
    local_1e8 = dVar42;
    local_178 = local_2a8;
    dStack_170 = dStack_2a0;
    local_168 = param_2[6];
    FUN_1447fea8d(&local_158);
    auVar46 = local_2e8;
    local_308._0_8_ = local_148;
    dVar42 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
    dVar6 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
    dVar32 = local_108 * local_108 + local_118 * local_118 + local_110 * local_110;
    uVar5 = -(ulonglong)(0.0 <= dVar42 + -9.99999993922529e-09);
    dVar35 = (double)(~uVar5 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar42)) & uVar5);
    uVar5 = -(ulonglong)(0.0 <= dVar6 + -9.99999993922529e-09);
    dVar6 = (double)(~uVar5 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar6)) & uVar5);
    uVar5 = -(ulonglong)(0.0 <= dVar32 + -9.99999993922529e-09);
    dVar32 = (double)(~uVar5 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar32)) & uVar5);
    auVar9._8_8_ = -(ulonglong)(0.0 <= local_2e8._8_8_);
    auVar9._0_8_ = -(ulonglong)(0.0 <= local_2e8._0_8_);
    auVar33 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar9);
    dVar30 = (double)local_2d8._0_8_;
    dVar39 = (double)local_2d8._8_8_;
    dVar42 = (double)(~-(ulonglong)(0.0 <= (double)local_2d8._0_8_) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= (double)local_2d8._0_8_) & 0x3ff0000000000000);
    dVar37 = auVar33._0_8_;
    local_158 = local_158 * dVar35 * dVar37;
    local_150 = local_150 * dVar35 * dVar37;
    local_148 = dVar35 * local_148 * dVar37;
    dVar35 = auVar33._8_8_;
    local_128 = dVar6 * local_128 * dVar35;
    local_130 = local_130 * dVar6 * dVar35;
    local_138 = dVar35 * local_138 * dVar6;
    local_108 = dVar32 * local_108 * dVar42;
    local_110 = local_110 * dVar32 * dVar42;
    local_118 = dVar42 * local_118 * dVar32;
    pdVar4 = &local_278;
    iVar1 = FUN_14481fd10(pdVar4,&local_158);
    uVar3 = SUB84(pdVar4,0);
    dVar42 = local_268 * local_268 + local_278 * local_278;
    dVar35 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar20._0_8_ = dVar42 + dVar35;
    auVar20._8_8_ = dVar42 + dVar35;
    auVar10._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_);
    auVar10._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_);
    auVar33 = sqrtpd(auVar20,auVar20);
    auVar33 = divpd(_DAT_149934d80,auVar33);
    auVar24._0_8_ = auVar33._0_8_ * local_268;
    auVar24._8_8_ = auVar33._8_8_ * dStack_260;
    dVar38 = (double)((ulonglong)(local_278 * auVar33._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_));
    dVar44 = (double)((ulonglong)(dStack_270 * auVar33._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_));
    auVar43 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar24,auVar10);
    dVar16 = 0.0;
    dVar42 = local_e8;
    dVar13 = local_f8;
    dVar6 = dStack_f0;
  }
  dVar37 = auVar46._0_8_;
  dVar26 = auVar46._8_8_;
  auVar33 = minpd(auVar46,_DAT_149934d80);
  auVar27._8_8_ = dVar39;
  auVar27._0_8_ = dVar30;
  auVar40 = ZEXT816(0x3ff0000000000000);
  auVar7 = minpd(auVar27,auVar40);
  auVar25._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
  auVar25._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
  iVar1 = movmskpd(iVar1,auVar25);
  auVar28._8_8_ = -(ulonglong)(auVar7._8_8_ < 0.0);
  auVar28._0_8_ = -(ulonglong)(auVar7._0_8_ < 0.0);
  uVar2 = movmskpd(uVar3,auVar28);
  dVar35 = auVar43._0_8_;
  dVar32 = auVar43._8_8_;
  if ((uVar2 & 0x3fffffff) == 0 && iVar1 == 0) {
    dVar41 = dVar38 * 0.0;
    dVar15 = dVar44 * 0.0;
    dVar17 = dVar32 * 0.0 * 1.0;
    dVar18 = dVar35 * 0.0 * -1.0;
    dVar37 = dVar15 * -1.0 + dVar38 + dVar17 + dVar35 * 0.0;
    dVar26 = dVar41 * 1.0 + dVar44 + dVar18 + dVar32 * 0.0;
    auVar45._0_8_ = ((dVar15 * 1.0 + dVar35) - dVar41) + dVar17;
    auVar45._8_8_ = ((dVar41 * -1.0 + dVar32) - dVar15) + dVar18;
    dVar42 = dVar42 * 1.0;
    dVar16 = dVar16 * 0.0;
    dVar35 = dVar6 * 0.0 - dVar13 * 0.0;
    dVar32 = dVar42 * 0.0 - dVar6 * 0.0;
    dVar41 = dVar13 * 0.0 - dVar42 * 0.0;
    dVar15 = dVar16 * 1.0 - dVar16 * 1.0;
    dVar32 = dVar32 + dVar32;
    dVar41 = dVar41 + dVar41;
    dVar35 = dVar35 + dVar35;
    dVar15 = dVar15 + dVar15;
    local_f8 = local_2b8 + (dVar35 * 0.0 - dVar41 * 0.0) + dVar13 + dVar32;
    dStack_f0 = local_298 + (dVar32 * 0.0 - dVar35 * 0.0) + dVar6 + dVar41;
    local_e8 = local_2c8 + (dVar41 * 0.0 - dVar32 * 0.0) + dVar42 + dVar35;
    dVar42 = (dVar15 * 1.0 - dVar15 * 1.0) + dVar16 + dVar15 + 0.0;
    dVar30 = dVar30 * 1.0;
    dVar39 = dVar39 * 0.0;
  }
  else {
    dStack_2b0 = dVar39 * 0.0;
    local_1c8 = 0.0;
    uStack_1c0 = 0;
    local_308 = ZEXT816(0x3ff0000000000000) << 0x40;
    local_1b8 = 0.0;
    dStack_1b0 = 1.0;
    local_1a8 = 0.0;
    uStack_1a0 = 0;
    local_198 = 0.0;
    dStack_190 = 0.0;
    local_178 = local_2b8;
    dStack_170 = local_298;
    local_168 = local_2c8;
    uStack_160 = 0x3ff0000000000000;
    dVar39 = dVar44 + dVar44;
    dVar41 = dVar35 + dVar35;
    dVar16 = dVar38 * (dVar38 + dVar38);
    local_208 = (1.0 - (dVar16 + dVar44 * dVar39)) * dVar30;
    dVar15 = (dVar38 + dVar38) * dVar32;
    local_218 = (dVar38 * dVar41 + dVar39 * dVar32) * dVar30;
    local_238 = (dVar39 * dVar38 - dVar41 * dVar32) * dVar26;
    dStack_210 = (dVar41 * dVar44 - dVar15) * dVar30;
    local_258 = (1.0 - (dVar35 * dVar41 + dVar44 * dVar39)) * dVar37;
    dStack_230 = (1.0 - (dVar35 * dVar41 + dVar16)) * dVar26;
    dStack_250 = (dVar39 * dVar38 + dVar41 * dVar32) * dVar37;
    local_228 = (dVar41 * dVar44 + dVar15) * dVar26;
    local_248 = (dVar38 * dVar41 - dVar39 * dVar32) * dVar37;
    uStack_240 = 0;
    uStack_220 = 0;
    uStack_200 = 0;
    uStack_1e0 = 0x3ff0000000000000;
    local_2b8 = dVar30 * 1.0;
    local_1f8 = dVar13;
    dStack_1f0 = dVar6;
    local_1e8 = dVar42;
    local_1d8 = auVar40;
    local_188 = auVar40;
    FUN_1447fea8d(&local_158);
    dVar39 = dStack_2b0;
    dVar30 = local_2b8;
    auVar7 = local_308;
    auVar33 = _DAT_149934d80;
    local_2c8 = local_148;
    dVar35 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
    dVar6 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
    local_2f8._0_8_ = local_108;
    dVar42 = local_108 * local_108 + local_118 * local_118 + local_110 * local_110;
    uVar5 = -(ulonglong)(0.0 <= dVar35 + -9.99999993922529e-09);
    dVar35 = (double)(~uVar5 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar35)) & uVar5);
    uVar5 = -(ulonglong)(0.0 <= dVar6 + -9.99999993922529e-09);
    dVar6 = (double)(~uVar5 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar6)) & uVar5);
    uVar5 = -(ulonglong)(0.0 <= dVar42 + -9.99999993922529e-09);
    dVar32 = (double)(~uVar5 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar42)) & uVar5);
    auVar11._8_8_ = -(ulonglong)(0.0 <= dVar26);
    auVar11._0_8_ = -(ulonglong)(0.0 <= dVar37);
    auVar40 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar11);
    dVar42 = (double)(~-(ulonglong)(0.0 <= local_2b8) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= local_2b8) & 0x3ff0000000000000);
    dVar37 = auVar40._0_8_;
    local_158 = local_158 * dVar35 * dVar37;
    local_150 = local_150 * dVar35 * dVar37;
    local_148 = dVar35 * local_148 * dVar37;
    dVar35 = auVar40._8_8_;
    local_128 = dVar6 * local_128 * dVar35;
    local_130 = local_130 * dVar6 * dVar35;
    local_138 = dVar35 * local_138 * dVar6;
    local_108 = dVar32 * local_108 * dVar42;
    local_110 = local_110 * dVar32 * dVar42;
    local_118 = dVar42 * local_118 * dVar32;
    local_2e8 = auVar46;
    FUN_14481fd10(&local_278,&local_158);
    dVar42 = local_268 * local_268 + local_278 * local_278;
    dVar35 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar21._0_8_ = dVar42 + dVar35;
    auVar21._8_8_ = dVar42 + dVar35;
    auVar12._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_);
    auVar12._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_);
    auVar40 = sqrtpd(auVar21,auVar21);
    auVar33 = divpd(auVar33,auVar40);
    auVar29._0_8_ = auVar33._0_8_ * local_268;
    auVar29._8_8_ = auVar33._8_8_ * dStack_260;
    dVar37 = (double)((ulonglong)(local_278 * auVar33._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_));
    dVar26 = (double)((ulonglong)(dStack_270 * auVar33._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_));
    auVar45 = blendvpd(auVar7,auVar29,auVar12);
    dVar42 = 0.0;
  }
  *param_1 = dVar37;
  param_1[1] = dVar26;
  *(undefined1 (*) [16])(param_1 + 2) = auVar45;
  param_1[4] = local_f8;
  param_1[5] = dStack_f0;
  param_1[6] = local_e8;
  param_1[7] = dVar42;
  *(undefined1 (*) [16])(param_1 + 8) = auVar46;
  param_1[10] = dVar30;
  param_1[0xb] = dVar39;
  if ((local_d0 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b18e56 FUN_143b18e56 body=173 status=ok
// SIG undefined FUN_143b18e56(void)

void FUN_143b18e56(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_143b23964(plVar3,iVar1);
  }
  *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8) = param_4;
  FUN_1483adaae(param_1[2],param_2);
  plVar3 = (longlong *)param_1[3];
  uVar2 = *(undefined4 *)(param_2 + 8);
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_1446f48e2(plVar3,iVar1);
  }
  *(undefined4 *)(*plVar3 + (longlong)iVar1 * 4) = uVar2;
  plVar3 = (longlong *)param_1[1];
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_144941252(plVar3,iVar1);
  }
  *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8) = param_3;
  return;
}



// FUNCTION 143b18f04 FUN_143b18f04 body=349 status=ok
// SIG undefined FUN_143b18f04(void)

void FUN_143b18f04(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  undefined8 local_98;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 local_4e;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = *(longlong *)*param_1;
  if (lVar3 != 0) {
    iVar5 = *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24);
    iVar2 = *(int *)(param_2 + 0x10);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_2 + 8);
      lVar6 = 0;
      do {
        local_98 = *(undefined8 *)(lVar3 + 0x10 + lVar6);
        piVar1 = (int *)(lVar3 + lVar6);
        local_a8 = *piVar1;
        iStack_a4 = piVar1[1];
        iStack_a0 = piVar1[2];
        iStack_9c = piVar1[3];
        local_68 = DAT_14c846338;
        local_70 = DAT_14c846330;
        local_5c = DAT_14c846338;
        local_64 = DAT_14c846330;
        local_58 = DAT_14c84635c;
        local_50 = 0;
        local_4e = 0;
        local_88 = local_a8;
        iStack_84 = iStack_a4;
        iStack_80 = iStack_a0;
        iStack_7c = iStack_9c;
        local_78 = local_98;
        FUN_146c02208(*(undefined8 *)*param_1,&local_88);
        lVar6 = lVar6 + 0x18;
      } while ((longlong)iVar2 * 0x18 != lVar6);
    }
    if ((longlong)*(int *)(param_2 + 0x60) != 0) {
      piVar4 = *(int **)(param_2 + 0x58);
      piVar1 = piVar4 + (longlong)*(int *)(param_2 + 0x60) * 3;
      do {
        iStack_80 = piVar4[2] + iVar5;
        iStack_84 = piVar4[1] + iVar5;
        local_88 = *piVar4 + iVar5;
        FUN_146c01152(*(undefined8 *)*param_1,&local_88,0);
        piVar4 = piVar4 + 3;
      } while (piVar4 != piVar1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b19062 FUN_143b19062 body=1158 status=ok
// SIG undefined FUN_143b19062(void)

/* WARNING: Removing unreachable block (ram,0x000143b19229) */
/* WARNING: Removing unreachable block (ram,0x000143b19238) */
/* WARNING: Removing unreachable block (ram,0x000143b1923c) */

ulonglong FUN_143b19062(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  void *_Src;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_258 [32];
  void *local_238;
  longlong lStack_230;
  undefined1 local_228 [8];
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined1 local_1e0 [8];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  longlong lStack_190;
  undefined8 local_188;
  longlong lStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  code *local_158;
  undefined8 uStack_150;
  ulonglong local_148;
  longlong lStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  void *local_88;
  longlong lStack_80;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_1e0[0] = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  FUN_146de45bc(local_1e0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
  FUN_14839dc08(local_1e0);
  local_158 = (code *)((ulonglong)local_158 & 0xffffffffffffff00);
  local_148 = local_148 & 0xffffffffffffff00;
  local_138 = (undefined **)uStack_1d0;
  uStack_130 = local_1d8;
  local_128 = 0x3e45798ee2308c3a;
  local_228[0] = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  uStack_150 = param_2;
  uStack_120 = local_1e0;
  FUN_1483dac90(local_228,&local_158);
  local_168 = local_128;
  uStack_170 = uStack_130;
  local_178 = local_138;
  lStack_80 = lStack_140;
  lVar2 = uStack_150;
  local_118 = 0;
  local_108 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_78 = (uint)local_138;
  uStack_74 = local_138._4_4_;
  uStack_70 = (undefined4)uStack_130;
  uStack_6c = uStack_130._4_4_;
  local_68 = (undefined4)local_128;
  uStack_64 = local_128._4_4_;
  uStack_60 = (undefined4)uStack_120;
  uStack_5c = uStack_120._4_4_;
  local_88 = (void *)0x0;
  uStack_8c = uStack_150._4_4_;
  local_98 = 0;
  uStack_90 = (undefined4)uStack_150;
  local_148 = 0;
  lStack_140 = lStack_180;
  local_128 = param_4;
  local_138 = &PTR_LAB_14ae759b0;
  uStack_130 = param_3;
  local_158 = FUN_143b258b0;
  uStack_150 = lStack_190;
  uStack_160 = (undefined4)uStack_120;
  uStack_15c = uStack_120._4_4_;
  local_88 = (void *)0x0;
  local_c8 = 0;
  local_d8 = 0;
  local_108 = 0;
  local_118 = 0;
  local_138 = &PTR_LAB_14ae759b0;
  local_148 = 0;
  local_158 = FUN_143b258b0;
  lStack_180 = lStack_80;
  local_188 = 0;
  lStack_190 = lVar2;
  local_198 = 0;
  uStack_90 = 1000;
  local_78 = local_78 & 0xffffff00;
  local_98 = 0x3ddb7cdfd9d7bdbb;
  if ((*(int *)(param_1 + 0xa4) == -1) ||
     (*(int *)(param_1 + 0xa0) !=
      *(int *)(*(longlong *)(param_1 + 0x88) + 0x20) * 0x200 +
      *(int *)(*(longlong *)(param_1 + 0x88) + 0x24))) {
    if (*(char *)(param_1 + 0xb0) != '\x01') goto LAB_143b193c8;
    lStack_180 = param_1 + 0xa8;
    lStack_190 = (longlong)*(int *)(param_1 + 0x68) * 2;
    local_238 = (void *)0x0;
    lStack_230 = 0;
    FUN_1483c1947(&local_238);
    local_88 = (void *)FUN_146de3b53(lStack_230);
    lStack_80 = lStack_230;
    if (lStack_230 != 0) {
      memcpy(local_88,local_238,lStack_230 << 3);
    }
    _Src = local_238;
  }
  else {
    lVar7 = (longlong)*(int *)(param_1 + 0x68);
    lVar2 = lVar7 * 2;
    lStack_80 = lVar2;
    if (lVar7 == 0) {
      local_88 = (void *)FUN_146de3b53(0);
      _Src = (void *)0x0;
    }
    else {
      if (*(int *)(param_1 + 0x68) < 1) {
        _Src = (void *)0x0;
      }
      else {
        _Src = (void *)FUN_146de3b53();
        lVar5 = 0;
        do {
          lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x60) + lVar5 * 4) * 0x10;
          *(undefined8 *)((longlong)_Src + lVar5 * 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x98) + lVar6);
          *(undefined8 *)((longlong)_Src + lVar5 * 8 + lVar7 * 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 8 + lVar6);
          lVar5 = lVar5 + 1;
        } while (lVar7 != lVar5);
      }
      local_88 = (void *)FUN_146de3b53(lVar2);
      memcpy(local_88,_Src,lVar7 << 4);
    }
  }
  local_78 = CONCAT31(local_78._1_3_,1);
  FUN_1400020a8(_Src);
LAB_143b193c8:
  local_198 = CONCAT62(local_198._2_6_,0x101);
  plVar4 = (longlong *)FUN_14001cc68(0x1e0,0x10);
  FUN_1483db4a6(plVar4,&local_98);
  *plVar4 = (longlong)&PTR_FUN_14ae759d0;
  FUN_1483a0796(local_228,&local_198,plVar4 + 2);
  plVar1 = plVar4 + 0x1a;
  if ((char)plVar4[0x32] == '\x01') {
    FUN_14839fcde(plVar1);
  }
  FUN_1483db772(plVar1,&local_158);
  *(undefined1 *)(plVar4 + 0x32) = 1;
  uVar3 = (**(code **)(*plVar4 + 8))(plVar4,&local_198,param_5,0);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)*plVar4)(plVar4,1);
  }
  if ((char)local_78 == '\x01') {
    FUN_1400020a8(local_88);
  }
  FUN_14839fcde(&local_158);
  FUN_146de5508(local_228);
  FUN_146de5508(local_1e0);
  if ((local_50 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)plVar1 >> 8),uVar3 < 2) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b19510 FUN_143b19510 body=90 status=ok
// SIG undefined FUN_143b19510(void)

void FUN_143b19510(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1[2];
  local_10 = &local_20;
  local_18 = FUN_143b195a0;
  FUN_14838980a(*param_1,*param_2);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b1956c FUN_143b1956c body=52 status=ok
// SIG undefined FUN_143b1956c(void)

void FUN_143b1956c(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  
  uVar1 = *param_2;
  plVar3 = *(longlong **)(param_1 + 8);
  iVar2 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
    FUN_1446f48e2(plVar3,iVar2);
  }
  *(undefined4 *)(*plVar3 + (longlong)iVar2 * 4) = uVar1;
  return;
}



// FUNCTION 143b195a0 FUN_143b195a0 body=79 status=ok
// SIG undefined FUN_143b195a0(void)

void FUN_143b195a0(longlong *param_1,uint *param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = (ulonglong)(*param_2 << 0x1e | *param_2 >> 2);
  FUN_1483b983a(*param_1 + 8,local_14,&local_10,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b195f0 FUN_143b195f0 body=76 status=ok
// SIG undefined FUN_143b195f0(void)

void FUN_143b195f0(longlong *param_1,uint *param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = (ulonglong)*param_2;
  FUN_1483b983a(*param_1 + 8,local_14,&local_10,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b1963e FUN_143b1963e body=76 status=ok
// SIG undefined FUN_143b1963e(void)

void FUN_143b1963e(longlong *param_1,uint *param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = (ulonglong)*param_2;
  FUN_1483b983a(*param_1 + 8,local_14,&local_10,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b1968c FUN_143b1968c body=51 status=ok
// SIG undefined FUN_143b1968c(void)

void FUN_143b1968c(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1446f48e2(param_1,iVar2);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar2 * 4) = uVar1;
  return;
}



// FUNCTION 143b196c0 FUN_143b196c0 body=184 status=ok
// SIG undefined FUN_143b196c0(void)

void FUN_143b196c0(undefined8 *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_2;
  uVar6 = (uint)uVar1;
  if (-1 < (int)uVar6) {
    plVar2 = (longlong *)param_1[1];
    lVar3 = *plVar2;
    if (((int)uVar6 < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24)) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar3 + 0x28) +
                             (ulonglong)((uint)(uVar1 >> 6) & 0x1fffff8)) +
                           (ulonglong)(uVar6 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      puVar4 = (undefined1 *)*param_1;
      iVar5 = FUN_1482abbb8(plVar2[1],uVar1 & 0xffffffff);
      if (iVar5 != -1) {
        *puVar4 = 1;
        local_28 = CONCAT44(iVar5,uVar6) & 0xffffffff7fffffff;
        FUN_1483b983a(plVar2[2] + 8,local_2c,&local_28,0);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b1977a FUN_143b1977a body=184 status=ok
// SIG undefined FUN_143b1977a(void)

void FUN_143b1977a(undefined8 *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_2;
  uVar6 = (uint)uVar1;
  if (-1 < (int)uVar6) {
    plVar2 = (longlong *)param_1[1];
    lVar3 = *plVar2;
    if (((int)uVar6 < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24)) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar3 + 0x28) +
                             (ulonglong)((uint)(uVar1 >> 6) & 0x1fffff8)) +
                           (ulonglong)(uVar6 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      puVar4 = (undefined1 *)*param_1;
      iVar5 = FUN_1482abbb8(plVar2[1],uVar1 & 0xffffffff);
      if (iVar5 != -1) {
        *puVar4 = 1;
        local_28 = CONCAT44(iVar5,uVar6) & 0xffffffff7fffffff;
        FUN_1483b983a(plVar2[2] + 8,local_2c,&local_28,0);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b19834 FUN_143b19834 body=315 status=ok
// SIG undefined FUN_143b19834(void)

void FUN_143b19834(longlong *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [40];
  longlong local_70;
  int *local_68;
  code *local_60;
  longlong *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *param_2;
  uVar5 = *(ulonglong *)
           (*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(uVar1 >> 9) * 8) + 8 +
           (ulonglong)((uVar1 & 0x1ff) << 4)) >> 0x20;
  if (uVar5 == 0xffffffff) {
    *(undefined1 *)param_1[3] = 1;
  }
  iVar3 = (**(code **)(**(longlong **)param_1[1] + 0x18))();
  iVar4 = (**(code **)(**(longlong **)param_1[1] + 0x18))(*(longlong **)param_1[1],uVar5);
  *(byte *)param_1[3] = *(byte *)param_1[3] | iVar3 != iVar4;
  if (iVar3 != iVar4) {
    local_4c = FUN_1482abca2(*(undefined8 *)param_1[1],uVar1);
    lVar6 = (longlong)
            *(int *)(*(longlong *)(*(longlong *)param_1[1] + 0x70) + 0x28 +
                    (longlong)local_4c * 0x50);
    if (lVar6 != 0) {
      lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)param_1[1] + 0x70) + 0x20 + (longlong)local_4c * 0x50);
      lVar7 = 0;
      do {
        local_70 = param_1[2];
        local_60 = FUN_143b19970;
        local_68 = &local_4c;
        local_58 = &local_70;
        FUN_14838980a(*param_1,*(undefined4 *)(lVar2 + lVar7),&local_60);
        lVar7 = lVar7 + 4;
      } while (lVar6 * 4 != lVar7);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b19970 FUN_143b19970 body=95 status=ok
// SIG undefined FUN_143b19970(void)

void FUN_143b19970(longlong *param_1,uint *param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = CONCAT44(*(undefined4 *)param_1[1],*param_2 << 0x1e | *param_2 >> 2);
  FUN_1483b983a(*param_1 + 8,local_14,&local_10,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b199d0 FUN_143b199d0 body=230 status=ok
// SIG undefined FUN_143b199d0(void)

void FUN_143b199d0(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = (**(code **)(**(longlong **)param_1[1] + 0x18))(*(longlong **)param_1[1],*param_2);
  lVar1 = *(longlong *)param_1[1];
  if ((((int)uVar2 < 0) || (*(int *)(lVar1 + 0x98) <= (int)uVar2)) ||
     (lVar4 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x90) + (ulonglong)uVar2 * 4), lVar4 == -1))
  {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar4 * 0x38 + *(longlong *)(lVar1 + 0x60);
  }
  plVar3 = (longlong *)(lVar1 + 0xc0);
  if (lVar4 != 0) {
    plVar3 = (longlong *)(lVar4 + 8);
  }
  lVar1 = plVar3[1];
  if ((longlong)(int)lVar1 != 0) {
    lVar4 = *plVar3;
    lVar5 = 0;
    do {
      local_48 = CONCAT44(uVar2,*(undefined4 *)(lVar4 + lVar5));
      FUN_1483b983a(*param_1 + 8,local_4c,&local_48,0);
      lVar5 = lVar5 + 4;
    } while ((longlong)(int)lVar1 * 4 != lVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b19ab8 FUN_143b19ab8 body=76 status=ok
// SIG undefined FUN_143b19ab8(void)

void FUN_143b19ab8(longlong *param_1,uint *param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = (ulonglong)*param_2;
  FUN_1483b983a(*param_1 + 8,local_14,&local_10,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b19b06 FUN_143b19b06 body=76 status=ok
// SIG undefined FUN_143b19b06(void)

void FUN_143b19b06(longlong *param_1,uint *param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = (ulonglong)*param_2;
  FUN_1483b983a(*param_1 + 8,local_14,&local_10,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b19b53 FUN_143b19b53 body=1766 status=ok
// SIG undefined FUN_143b19b53(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143b19b53(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  uint uVar12;
  undefined1 *_Dst;
  undefined1 *puVar13;
  undefined1 *puVar14;
  longlong lVar15;
  undefined1 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 auStack_d8 [8];
  longlong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  char local_71;
  ulonglong local_70;
  undefined1 local_58 [24];
  
  local_70 = DAT_14c707940 ^ (ulonglong)local_58;
  local_80 = *(ulonglong *)(param_1 + 0x10);
  local_b8 = *(longlong *)(param_2 + 8);
  local_b0 = param_2;
  local_88 = param_3;
  local_71 = param_4;
  if (local_80 < 0x20001) {
    lVar17 = -(local_80 + 0x1e & 0xfffffffffffffff0);
    puVar16 = auStack_d8 + lVar17;
    _Dst = auStack_d8 + lVar17;
  }
  else {
    _Dst = (undefined1 *)FUN_14001cc68();
    if (_Dst == (void *)0x0) {
      FUN_14001cc68(0xffffffffffffffff);
    }
    puVar16 = auStack_d8;
    if (local_80 >> 0x3d != 0) {
      FUN_14001cc68(0xffffffffffffffff);
      puVar16 = auStack_d8;
      bVar11 = true;
      goto LAB_143b19c23;
    }
  }
  bVar11 = false;
LAB_143b19c23:
  uVar22 = local_80 * 8;
  if (uVar22 < 0x20001) {
    *(undefined8 *)(puVar16 + -8) = 0x143b19c41;
    lVar17 = -(uVar22 + 0x1e & 0xfffffffffffffff0);
    puVar13 = puVar16 + lVar17;
    puVar16 = puVar16 + lVar17;
  }
  else {
    *(undefined8 *)(puVar16 + -0x28) = 0x143b19c5a;
    puVar13 = (undefined1 *)FUN_14001cc68(uVar22);
    if (puVar13 == (undefined1 *)0x0) {
      *(undefined8 *)(puVar16 + -0x28) = 0x143b19c7b;
      FUN_14001cc68(0xffffffffffffffff);
      puVar13 = (undefined1 *)0x0;
    }
  }
  if (bVar11) {
    *(undefined8 *)(puVar16 + -0x28) = 0x143b19c9c;
    FUN_14001cc68(0xffffffffffffffff);
  }
  local_c0 = uVar22;
  if (uVar22 < 0x20001) {
    *(undefined8 *)(puVar16 + -8) = 0x143b19cba;
    lVar17 = -(uVar22 + 0x1e & 0xfffffffffffffff0);
    puVar14 = puVar16 + lVar17;
    puVar16 = puVar16 + lVar17;
  }
  else {
    *(undefined8 *)(puVar16 + -0x28) = 0x143b19cd3;
    puVar14 = (undefined1 *)FUN_14001cc68(uVar22);
    if (puVar14 == (undefined1 *)0x0) {
      *(undefined8 *)(puVar16 + -0x28) = 0x143b19cf4;
      FUN_14001cc68(0xffffffffffffffff);
      puVar14 = (undefined1 *)0x0;
    }
  }
  uVar22 = local_80;
  *(undefined8 *)(puVar16 + -0x28) = 0x143b19d0d;
  memset(_Dst,0,uVar22);
  lVar17 = local_b0;
  plVar6 = *(longlong **)(param_1 + 0x20);
  if (plVar6 == (longlong *)0x0) {
    lVar24 = (*(longlong **)(param_1 + 0x18))[*(longlong *)(param_1 + 8)] -
             **(longlong **)(param_1 + 0x18);
  }
  else {
    lVar23 = *(longlong *)(param_1 + 8);
    if (lVar23 == 0) {
      lVar24 = 0;
    }
    else {
      lVar24 = *plVar6;
      if (1 < lVar23) {
        lVar15 = 1;
        do {
          lVar24 = lVar24 + plVar6[lVar15];
          lVar15 = lVar15 + 1;
        } while (lVar23 != lVar15);
      }
    }
  }
  *(undefined8 *)(puVar16 + -0x28) = 0x143b19d64;
  lVar15 = FUN_146de5690(lVar17);
  lVar23 = local_88;
  *(undefined8 *)(local_88 + 0x38) = 0;
  lVar17 = *(longlong *)(local_88 + 8);
  pvVar7 = *(void **)(local_88 + 0x18);
  *(undefined8 *)(puVar16 + -0x28) = 0x143b19d95;
  memset(pvVar7,0,lVar17 * 4 + 4);
  pvVar7 = *(void **)(lVar23 + 0x20);
  if (pvVar7 != (void *)0x0) {
    lVar17 = *(longlong *)(lVar23 + 8);
    *(undefined8 *)(puVar16 + -0x28) = 0x143b19db8;
    memset(pvVar7,0,lVar17 << 2);
    lVar23 = local_88;
  }
  lVar17 = lVar15 + lVar24 + *(longlong *)(lVar23 + 0x38);
  if (*(longlong *)(lVar23 + 0x40) < lVar17) {
    *(undefined8 *)(puVar16 + -0x28) = 0x143b1a231;
    FUN_146de55aa(lVar23 + 0x28,lVar17);
    lVar23 = local_88;
  }
  uVar22 = local_80;
  if (0 < local_b8) {
    local_a8 = lVar23 + 0x28;
    local_d0 = (longlong)local_80 / 0xb;
    if (199 < local_d0) {
      local_d0 = 200;
    }
    local_c8 = (longlong)(local_80 * 100) / 0x8b;
    lVar17 = 0;
    do {
      *(undefined4 *)(*(longlong *)(lVar23 + 0x18) + 4 + lVar17 * 4) =
           *(undefined4 *)(*(longlong *)(lVar23 + 0x18) + lVar17 * 4);
      lVar24 = (longlong)*(int *)(*(longlong *)(local_b0 + 0x18) + lVar17 * 4);
      if (*(longlong *)(local_b0 + 0x20) == 0) {
        lVar15 = (longlong)*(int *)(*(longlong *)(local_b0 + 0x18) + 4 + lVar17 * 4);
      }
      else {
        lVar15 = *(int *)(*(longlong *)(local_b0 + 0x20) + lVar17 * 4) + lVar24;
      }
      local_90 = lVar17;
      if (lVar24 < lVar15) {
        lVar17 = *(longlong *)(local_b0 + 0x28);
        lVar23 = *(longlong *)(local_b0 + 0x30);
        uVar18 = 0;
        do {
          lVar21 = (longlong)*(int *)(lVar23 + lVar24 * 4);
          lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar21 * 8);
          if (*(longlong *)(param_1 + 0x20) == 0) {
            lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar21 * 8);
          }
          else {
            lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar21 * 8) + lVar20;
          }
          if (lVar20 < lVar21) {
            dVar1 = *(double *)(lVar17 + lVar24 * 8);
            lVar8 = *(longlong *)(param_1 + 0x28);
            lVar9 = *(longlong *)(param_1 + 0x30);
            do {
              lVar10 = *(longlong *)(lVar9 + lVar20 * 8);
              dVar2 = *(double *)(lVar8 + lVar20 * 8);
              if (*(char *)((longlong)_Dst + lVar10) == '\0') {
                *(undefined1 *)((longlong)_Dst + lVar10) = 1;
                *(double *)(puVar13 + lVar10 * 8) = dVar2 * dVar1;
                *(longlong *)(puVar14 + uVar18 * 8) = lVar10;
                uVar18 = uVar18 + 1;
              }
              else {
                *(double *)(puVar13 + lVar10 * 8) =
                     dVar2 * dVar1 + *(double *)(puVar13 + lVar10 * 8);
              }
              lVar20 = lVar20 + 1;
            } while (lVar21 != lVar20);
          }
          lVar24 = lVar24 + 1;
        } while (lVar24 != lVar15);
        uVar22 = local_80;
        lVar23 = local_88;
        if (local_71 == '\0') {
          lVar17 = local_90;
          if (0 < (longlong)uVar18) {
            uVar19 = 0;
            do {
              lVar15 = local_a8;
              local_a0 = *(longlong *)(puVar14 + uVar19 * 8);
              uVar3 = *(undefined8 *)(puVar13 + *(longlong *)(puVar14 + uVar19 * 8) * 8);
              iVar4 = *(int *)(*(longlong *)(lVar23 + 0x18) + 4 + lVar17 * 4);
              local_98 = (longlong)iVar4;
              *(int *)(*(longlong *)(lVar23 + 0x18) + 4 + lVar17 * 4) = iVar4 + 1;
              lVar24 = *(longlong *)(lVar23 + 0x38);
              *(undefined8 *)(puVar16 + -0x28) = 0x143b1a067;
              FUN_146de554a(lVar15,lVar24 + 1,0);
              uVar22 = local_80;
              lVar23 = local_88;
              lVar17 = local_90;
              *(undefined8 *)(*(longlong *)(local_88 + 0x28) + lVar24 * 8) = 0;
              *(int *)(*(longlong *)(local_88 + 0x30) + lVar24 * 4) = (int)local_a0;
              *(undefined8 *)(*(longlong *)(local_88 + 0x28) + local_98 * 8) = uVar3;
              *(undefined1 *)((longlong)_Dst + local_a0) = 0;
              uVar19 = uVar19 + 1;
            } while (uVar18 != uVar19);
          }
        }
        else {
LAB_143b19f38:
          lVar17 = local_90;
          if (((longlong)uVar18 < local_d0) ||
             (uVar12 = (uint)(uVar18 >> 1) & 0x7fffffff | (uint)uVar18,
             uVar12 = uVar12 >> 2 | uVar12, uVar12 = uVar12 >> 4 | uVar12,
             uVar12 = uVar12 >> 8 | uVar12,
             (longlong)
             ((longlong)
              *(int *)(&DAT_14ae74970 +
                      (ulonglong)((uVar12 >> 0x10 | uVar12) * 0x7c4acdd >> 0x1b) * 4) * uVar18) <
             local_c8)) {
            if ((longlong)uVar18 < 2) {
              if (uVar18 != 1) goto LAB_143b1a124;
            }
            else {
              *(undefined8 *)(puVar16 + -0x28) = 0x143b1a146;
              FUN_14836bf00(puVar14,puVar14 + uVar18 * 8,uVar18);
              lVar23 = local_88;
            }
            uVar19 = 0;
            lVar17 = local_90;
            do {
              lVar15 = local_a8;
              local_a0 = *(longlong *)(puVar14 + uVar19 * 8);
              uVar3 = *(undefined8 *)(puVar13 + *(longlong *)(puVar14 + uVar19 * 8) * 8);
              iVar4 = *(int *)(*(longlong *)(lVar23 + 0x18) + 4 + lVar17 * 4);
              local_98 = (longlong)iVar4;
              *(int *)(*(longlong *)(lVar23 + 0x18) + 4 + lVar17 * 4) = iVar4 + 1;
              lVar24 = *(longlong *)(lVar23 + 0x38);
              *(undefined8 *)(puVar16 + -0x28) = 0x143b19fd3;
              FUN_146de554a(lVar15,lVar24 + 1,0);
              uVar22 = local_80;
              lVar23 = local_88;
              lVar17 = local_90;
              *(undefined8 *)(*(longlong *)(local_88 + 0x28) + lVar24 * 8) = 0;
              *(int *)(*(longlong *)(local_88 + 0x30) + lVar24 * 4) = (int)local_a0;
              *(undefined8 *)(*(longlong *)(local_88 + 0x28) + local_98 * 8) = uVar3;
              *(undefined1 *)((longlong)_Dst + local_a0) = 0;
              uVar19 = uVar19 + 1;
            } while (uVar18 != uVar19);
          }
          else if (0 < (longlong)uVar22) {
            uVar18 = 0;
            do {
              if (*(char *)((longlong)_Dst + uVar18) == '\x01') {
                *(undefined1 *)((longlong)_Dst + uVar18) = 0;
                lVar24 = local_a8;
                uVar3 = *(undefined8 *)(puVar13 + uVar18 * 8);
                iVar4 = *(int *)(*(longlong *)(lVar23 + 0x18) + 4 + lVar17 * 4);
                *(int *)(*(longlong *)(lVar23 + 0x18) + 4 + lVar17 * 4) = iVar4 + 1;
                lVar17 = *(longlong *)(lVar23 + 0x38);
                *(undefined8 *)(puVar16 + -0x28) = 0x143b1a0f5;
                FUN_146de554a(lVar24,lVar17 + 1,0);
                *(undefined8 *)(*(longlong *)(local_88 + 0x28) + lVar17 * 8) = 0;
                *(int *)(*(longlong *)(local_88 + 0x30) + lVar17 * 4) = (int)uVar18;
                *(undefined8 *)(*(longlong *)(local_88 + 0x28) + (longlong)iVar4 * 8) = uVar3;
                lVar17 = local_90;
                uVar22 = local_80;
                lVar23 = local_88;
              }
              uVar18 = uVar18 + 1;
            } while (uVar22 != uVar18);
          }
        }
      }
      else if (local_71 != '\0') {
        uVar18 = 0;
        goto LAB_143b19f38;
      }
LAB_143b1a124:
      lVar17 = lVar17 + 1;
    } while (lVar17 != local_b8);
  }
  if ((*(longlong *)(lVar23 + 0x20) == 0) && (lVar17 = *(longlong *)(lVar23 + 8), -1 < lVar17)) {
    uVar5 = *(undefined4 *)(lVar23 + 0x38);
    lVar24 = lVar17;
    do {
      if (*(int *)(*(longlong *)(lVar23 + 0x18) + lVar24 * 4) != 0) goto LAB_143b1a202;
      bVar11 = 0 < lVar24;
      lVar24 = lVar24 + -1;
    } while (bVar11);
    lVar24 = -1;
LAB_143b1a202:
    if (lVar24 < lVar17) {
      do {
        *(undefined4 *)(*(longlong *)(lVar23 + 0x18) + 4 + lVar24 * 4) = uVar5;
        lVar24 = lVar24 + 1;
      } while (lVar24 < *(longlong *)(lVar23 + 8));
    }
  }
  if (0x20000 < local_c0) {
    *(undefined8 *)(puVar16 + -0x28) = 0x143b1a174;
    FUN_1400020a8(puVar14);
    *(undefined8 *)(puVar16 + -0x28) = 0x143b1a17c;
    FUN_1400020a8(puVar13);
    uVar22 = local_80;
  }
  if (0x20000 < uVar22) {
    *(undefined8 *)(puVar16 + -0x28) = 0x143b1a199;
    FUN_1400020a8(_Dst);
  }
  if ((local_70 ^ (ulonglong)local_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar16 + -0x28) = &UNK_143b1a1cf;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b1a278 FUN_143b1a278 body=29 status=ok
// SIG undefined FUN_143b1a278(void)

undefined8 FUN_143b1a278(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b1a2ce FUN_143b1a2ce body=29 status=ok
// SIG undefined FUN_143b1a2ce(void)

undefined8 FUN_143b1a2ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b1a2ec FUN_143b1a2ec body=94 status=ok
// SIG undefined FUN_143b1a2ec(void)

bool FUN_143b1a2ec(undefined8 *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_48 [36];
  int local_24;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *param_3;
  FUN_146c03f0e(*(undefined8 *)*param_1,&local_24,*param_2);
  bVar2 = true;
  if ((local_24 != iVar1) && (local_20 != iVar1)) {
    bVar2 = local_1c == iVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b1a376 FUN_143b1a376 body=29 status=ok
// SIG undefined FUN_143b1a376(void)

undefined8 FUN_143b1a376(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b1a393 FUN_143b1a393 body=92 status=ok
// SIG undefined FUN_143b1a393(void)

void FUN_143b1a393(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  do {
    lVar4 = 0;
    do {
      *(undefined8 *)(param_1 + lVar4) = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 8 + lVar4) = 0xffffffff;
      uVar3 = DAT_14c8463f8;
      puVar1 = (undefined8 *)(param_1 + 0x10 + lVar4);
      *puVar1 = DAT_14c8463f0;
      puVar1[1] = uVar3;
      puVar2 = (undefined4 *)(param_1 + 0x20 + lVar4);
      *puVar2 = 0xffffffff;
      puVar2[1] = 0xffffffff;
      puVar2[2] = 0xffffffff;
      puVar2[3] = 0xffffffff;
      puVar2 = (undefined4 *)(param_1 + 0x30 + lVar4);
      *puVar2 = 0xffffffff;
      puVar2[1] = 0xffffffff;
      puVar2[2] = 0xffffffff;
      puVar2[3] = 0xffffffff;
      puVar2 = (undefined4 *)(param_1 + 0x40 + lVar4);
      *puVar2 = 0xffffffff;
      puVar2[1] = 0xffffffff;
      puVar2[2] = 0xffffffff;
      puVar2[3] = 0xffffffff;
      *(undefined4 *)(param_1 + 0x50 + lVar4) = 0xffffffff;
      lVar4 = lVar4 + 0x58;
    } while (lVar4 != 0x108);
    param_1 = param_1 + 0x108;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 143b1a3f0 FUN_143b1a3f0 body=359 status=ok
// SIG undefined FUN_143b1a3f0(void)

void FUN_143b1a3f0(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar6 = (ulonglong)uVar3;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar6 = 4;
    if (4 < uVar3) {
      uVar6 = (ulonglong)uVar3;
    }
  }
  else {
    uVar6 = uVar6 + (uVar6 * 3 >> 3) + 0x10;
  }
  uVar5 = uVar6 * 0x108;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar5 + 0xf;
      if (uVar6 < 0x7d) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_143b1a480;
            lVar1 = uVar6 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar1 != 0x33);
        }
        uVar6 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar6 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar6 & ((uVar4 & 0xfffffffffffffff0) + uVar6) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_143b1a480:
  uVar6 = 0x7fffffff;
  if ((int)uVar3 <= (int)(uVar5 / 0x108)) {
    uVar6 = uVar5 / 0x108 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar6;
  FUN_1446f8d3c(param_1,0,uVar6,0x108,8);
  return;
}



// FUNCTION 143b1a558 FUN_143b1a558 body=363 status=ok
// SIG undefined FUN_143b1a558(void)

void FUN_143b1a558(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143b1a5ee;
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
LAB_143b1a5ee:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 143b1a6c4 FUN_143b1a6c4 body=48 status=ok
// SIG undefined FUN_143b1a6c4(void)

void FUN_143b1a6c4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x58,8);
  }
  return;
}



// FUNCTION 143b1a6f4 FUN_143b1a6f4 body=359 status=ok
// SIG undefined FUN_143b1a6f4(void)

void FUN_143b1a6f4(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
  uVar5 = lVar4 * 0x58;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143b1a786;
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
LAB_143b1a786:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x58)) {
    uVar7 = uVar5 / 0x58 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x58,8);
  return;
}



// FUNCTION 143b1a860 FUN_143b1a860 body=120 status=ok
// SIG undefined FUN_143b1a860(void)

bool FUN_143b1a860(longlong *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  uVar1 = *param_3;
  lVar4 = ((undefined8 *)*param_1)[1];
  if (lVar4 == 0) {
    iVar2 = FUN_146bc96d4(*(undefined8 *)*param_1);
    lVar4 = ((undefined8 *)*param_1)[1];
    if (lVar4 == 0) {
      iVar3 = FUN_146bc96d4(*(undefined8 *)*param_1,uVar1);
      goto LAB_143b1a8a3;
    }
    lVar4 = *(longlong *)(lVar4 + 0x20);
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x20);
    iVar2 = *(int *)(*(longlong *)(lVar4 + (ulonglong)(*param_2 >> 9) * 8) +
                    (ulonglong)(*param_2 & 0x1ff) * 4);
  }
  iVar3 = *(int *)(*(longlong *)(lVar4 + (ulonglong)(uVar1 >> 9) * 8) +
                  (ulonglong)(uVar1 & 0x1ff) * 4);
LAB_143b1a8a3:
  return iVar2 == iVar3;
}



// FUNCTION 143b1a902 FUN_143b1a902 body=29 status=ok
// SIG undefined FUN_143b1a902(void)

undefined8 FUN_143b1a902(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b1a920 FUN_143b1a920 body=331 status=ok
// SIG undefined FUN_143b1a920(void)

double FUN_143b1a920(longlong param_1,undefined8 param_2,int *param_3,int *param_4,double *param_5)

{
  double dVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  
  dVar1 = *param_5;
  iVar2 = *param_4;
  iVar3 = *param_3;
  uVar8 = iVar3 * 3 + 2;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x130);
  uVar5 = iVar3 * 3 + 1;
  uVar7 = iVar2 * 3 + 2;
  uVar6 = iVar2 * 3 + 1;
  dVar9 = *(double *)
           (*(longlong *)(lVar4 + (ulonglong)(uVar8 >> 9) * 8) + (ulonglong)(uVar8 & 0x1ff) * 8) *
          *(double *)
           (*(longlong *)(lVar4 + (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 8) +
          *(double *)
           (*(longlong *)(lVar4 + (ulonglong)((uint)(iVar3 * 3) >> 9) * 8) +
           (ulonglong)(iVar3 * 3 & 0x1ff) * 8) *
          *(double *)
           (*(longlong *)(lVar4 + (ulonglong)((uint)(iVar2 * 3) >> 9) * 8) +
           (ulonglong)(iVar2 * 3 & 0x1ff) * 8) +
          *(double *)
           (*(longlong *)(lVar4 + (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 8) *
          *(double *)
           (*(longlong *)(lVar4 + (ulonglong)(uVar6 >> 9) * 8) + (ulonglong)(uVar6 & 0x1ff) * 8);
  if (0.001 < *(double *)(param_1 + 8)) {
    dVar9 = pow(dVar9,*(double *)(param_1 + 8));
  }
  dVar10 = 1.0 - dVar9 * dVar9;
  dVar9 = 1.0;
  if (dVar10 <= 1.0) {
    dVar9 = dVar10;
  }
  dVar9 = (double)(~-(ulonglong)(dVar10 < 0.0) & (ulonglong)dVar9);
  dVar9 = dVar9 * dVar9 * dVar9;
  dVar10 = 1.0;
  if (dVar9 <= 1.0) {
    dVar10 = dVar9;
  }
  return dVar1 * (double)(-(ulonglong)(dVar9 < 0.001) & 0x3f50624dd2f1a9fc |
                         ~-(ulonglong)(dVar9 < 0.001) & (ulonglong)dVar10);
}



// FUNCTION 143b1aa76 FUN_143b1aa76 body=29 status=ok
// SIG undefined FUN_143b1aa76(void)

void FUN_143b1aa76(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143b1aa94 FUN_143b1aa94 body=29 status=ok
// SIG undefined FUN_143b1aa94(void)

undefined8 FUN_143b1aa94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b1aab6 FUN_143b1aab6 body=120 status=ok
// SIG undefined FUN_143b1aab6(void)

bool FUN_143b1aab6(longlong *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  uVar1 = *param_3;
  lVar4 = ((undefined8 *)*param_1)[1];
  if (lVar4 == 0) {
    iVar2 = FUN_146bc96d4(*(undefined8 *)*param_1);
    lVar4 = ((undefined8 *)*param_1)[1];
    if (lVar4 == 0) {
      iVar3 = FUN_146bc96d4(*(undefined8 *)*param_1,uVar1);
      goto LAB_143b1aaf9;
    }
    lVar4 = *(longlong *)(lVar4 + 0x20);
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x20);
    iVar2 = *(int *)(*(longlong *)(lVar4 + (ulonglong)(*param_2 >> 9) * 8) +
                    (ulonglong)(*param_2 & 0x1ff) * 4);
  }
  iVar3 = *(int *)(*(longlong *)(lVar4 + (ulonglong)(uVar1 >> 9) * 8) +
                  (ulonglong)(uVar1 & 0x1ff) * 4);
LAB_143b1aaf9:
  return iVar2 == iVar3;
}



// FUNCTION 143b1ab58 FUN_143b1ab58 body=29 status=ok
// SIG undefined FUN_143b1ab58(void)

undefined8 FUN_143b1ab58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b1ab75 FUN_143b1ab75 body=43 status=ok
// SIG undefined FUN_143b1ab75(void)

void FUN_143b1ab75(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 143b1aba0 FUN_143b1aba0 body=14 status=ok
// SIG undefined FUN_143b1aba0(void)

void FUN_143b1aba0(void *param_1,uint param_2)

{
  memset(param_1,0,(ulonglong)param_2 << 4);
  return;
}



// FUNCTION 143b1abae FUN_143b1abae body=243 status=ok
// SIG undefined FUN_143b1abae(void)

void FUN_143b1abae(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  if (-1 < (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = (ulonglong)uVar1;
      }
    }
    else {
      uVar3 = uVar3 + (uVar3 * 3 >> 3) + 0x10;
    }
    uVar2 = uVar3 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x800) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3]];
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
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar2 >> 4)) {
      uVar3 = uVar2 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar3);
}



// FUNCTION 143b1aca1 FUN_143b1aca1 body=699 status=ok
// SIG undefined FUN_143b1aca1(void)

void FUN_143b1aca1(undefined8 *param_1,longlong *param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  double dVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  undefined1 auStack_1a8 [32];
  int *local_188;
  undefined4 local_180;
  int *local_178;
  undefined8 uStack_170;
  undefined1 local_168 [264];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  plVar8 = (longlong *)((longlong)param_3 * 0x10 + *param_2);
  local_178 = (int *)0x0;
  uStack_170 = 0;
  puVar1 = *(undefined8 **)(*(longlong *)(param_1[3] + 8) + (longlong)param_4 * 8);
  piVar2 = (int *)*puVar1;
  lVar11 = (longlong)*(int *)(puVar1 + 1);
  if (lVar11 == 0) {
    dVar4 = 0.0;
  }
  else {
    uVar3 = *(undefined8 *)*param_1;
    dVar4 = 0.0;
    lVar10 = 0;
    do {
      dVar12 = (double)FUN_146c14650(uVar3,*(undefined4 *)((longlong)piVar2 + lVar10));
      dVar4 = dVar4 + dVar12;
      lVar10 = lVar10 + 4;
    } while (lVar11 * 4 != lVar10);
  }
  iVar7 = (int)ROUND(-0.5 - (dVar4 / (double)param_1[1] + dVar4 / (double)param_1[1])) >> 1;
  iVar9 = -iVar7;
  if (iVar9 < 2) {
    iVar9 = 1;
  }
  uStack_170 = CONCAT44(uStack_170._4_4_,1);
  FUN_1446f48e2(&local_178,0);
  *local_178 = *piVar2;
  if (-2 < iVar7) {
    lVar11 = (longlong)(int)(uint)uStack_170;
    if (lVar11 != 0) {
      iVar9 = (int)plVar8[1];
      *(uint *)(plVar8 + 1) = iVar9 + (uint)uStack_170;
      if ((uint)(*(int *)((longlong)plVar8 + 0xc) - iVar9) < (uint)uStack_170) {
        FUN_1446f48e2(plVar8,iVar9);
      }
      memcpy((void *)((longlong)iVar9 * 4 + *plVar8),local_178,lVar11 << 2);
    }
    goto LAB_143b1adc4;
  }
  iVar7 = *local_178;
  FUN_14837aae2(local_168,param_1[2]);
  local_188 = (int *)0x0;
  local_180 = 1;
  FUN_1483b1434(&local_188);
  *local_188 = iVar7;
  local_188[1] = iVar7;
  local_188[2] = 0;
  local_188[3] = 0;
  FUN_14837aca2(local_168,&local_188);
  if (local_188 != (int *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = (uint)uStack_170;
  if ((int)(uint)uStack_170 < iVar9) {
    iVar7 = FUN_14837ae7a(local_168);
    if (-1 < iVar7) {
      do {
        local_188 = (int *)0x0;
        local_180 = 1;
        FUN_1483b1434(&local_188);
        *local_188 = iVar7;
        local_188[1] = iVar7;
        local_188[2] = 0;
        local_188[3] = 0;
        FUN_14837aca2(local_168,&local_188);
        if (local_188 != (int *)0x0) {
          FUN_1400020a8();
        }
        uVar5 = uStack_170;
        lVar11 = (longlong)(int)(uint)uStack_170;
        uVar6 = (uint)uStack_170 + 1;
        uStack_170 = CONCAT44(uStack_170._4_4_,uVar6);
        if (uStack_170._4_4_ < uVar6) {
          FUN_1446f48e2(&local_178,uVar5 & 0xffffffff);
        }
        local_178[lVar11] = iVar7;
        uVar6 = (uint)uStack_170;
      } while (((int)(uint)uStack_170 < iVar9) && (iVar7 = FUN_14837ae7a(local_168), -1 < iVar7));
    }
    if (uVar6 != 0) goto LAB_143b1af14;
  }
  else {
LAB_143b1af14:
    iVar9 = (int)plVar8[1];
    *(uint *)(plVar8 + 1) = iVar9 + uVar6;
    if ((uint)(*(int *)((longlong)plVar8 + 0xc) - iVar9) < uVar6) {
      FUN_1446f48e2(plVar8,iVar9);
    }
    memcpy((void *)((longlong)iVar9 * 4 + *plVar8),local_178,(longlong)(int)uVar6 << 2);
  }
  FUN_14837b4ae(local_168);
LAB_143b1adc4:
  if (local_178 != (int *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b1af5e FUN_143b1af5e body=125 status=ok
// SIG undefined FUN_143b1af5e(void)

void FUN_143b1af5e(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar3 = *param_1;
  LOCK();
  piVar1 = (int *)(lVar3 + 0x28);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if ((iVar2 != -1) && (iVar2 < *(int *)(lVar3 + 0x60))) {
    local_18 = (undefined8 *)*param_1;
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = *(int *)(local_18 + 1) + 1;
      UNLOCK();
    }
    FUN_143b1b886(&local_18);
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_18 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_18)(local_18,1);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b1afdc FUN_143b1afdc body=939 status=ok
// SIG undefined FUN_143b1afdc(void)

ulonglong FUN_143b1afdc(longlong *param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD dwTlsIndex;
  DWORD DVar7;
  LPVOID lpTlsValue;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_108 [38];
  byte local_e2;
  byte local_e1;
  longlong local_e0;
  int local_d4;
  longlong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  char local_98;
  undefined8 local_90;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dwTlsIndex = DAT_14c7585d0;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar7 = 0xffffffff;
    LOCK();
    bVar14 = DAT_14c7585d0 != 0xffffffff;
    DVar6 = dwTlsIndex;
    if (bVar14) {
      DVar7 = DAT_14c7585d0;
      DVar6 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar6;
    UNLOCK();
    if (bVar14) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar7;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_b0);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_b0 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_a8 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_a0 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_98 = '\0';
  local_90 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_b0;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  local_d0 = -0x8000000000000000;
  lVar8 = *param_1;
  if (param_2 == 0) {
    lVar8 = *param_1;
    uVar11 = (ulonglong)*(uint *)(lVar8 + 0x34);
    if (*(int *)(lVar8 + 0x20) + 2 <= (int)*(uint *)(lVar8 + 0x34)) {
      FUN_143b1af5e(param_1);
      lVar8 = *param_1;
    }
    uVar13 = 0;
    if ('\x02' < *(char *)(lVar8 + 0x50)) {
      QueryPerformanceCounter(&local_88);
      auVar17._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar17._8_8_ = 0;
      auVar17 = roundpd(auVar17,auVar17,1);
      local_d0 = (longlong)auVar17._0_8_;
      if (0 < (int)DAT_14c7585cc) {
        uVar13 = (ulonglong)DAT_14c7585cc;
      }
      auVar15._0_8_ = (double)(int)uVar13 * 10000.0 + 0.5;
      auVar15._8_8_ = 0;
      auVar17 = roundpd(auVar15,auVar15,1);
      local_e0 = (longlong)auVar17._0_8_;
      lVar8 = *param_1;
      local_c0 = CONCAT71((int7)(uVar13 >> 8),1);
      goto LAB_143b1b162;
    }
  }
  else {
    uVar11 = (ulonglong)*(uint *)(lVar8 + 0x34);
  }
  local_c0 = 0;
  local_e0 = 0;
LAB_143b1b162:
  iVar2 = *(int *)(lVar8 + 0x2c);
  local_b8 = (ulonglong)*(uint *)(lVar8 + 0x30);
  uVar3 = *(undefined8 *)(lVar8 + 0x38);
  uVar4 = *(undefined8 *)(lVar8 + 0x40);
  local_d4 = (int)uVar11 + -1;
  local_e1 = param_2 ^ 1;
  local_c0 = local_c0 ^ 1;
  local_e2 = param_2;
  local_c8 = uVar11;
  do {
    LOCK();
    piVar1 = (int *)(lVar8 + 0x20);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((int)local_c8 < iVar2) {
      bVar14 = local_d4 <= iVar9;
      if (local_d4 <= iVar9) {
        iVar9 = local_d4;
      }
      if ((local_e1 & bVar14) != 0) goto LAB_143b1b2ae;
    }
    iVar9 = iVar9 * (int)local_b8;
    iVar12 = iVar9 + (int)local_b8;
    iVar5 = iVar2;
    if (iVar12 < iVar2) {
      iVar5 = iVar12;
    }
    iVar10 = iVar9;
    if (iVar9 < iVar5) {
      do {
        FUN_143b1aca1(uVar4,uVar3,(int)param_1[1],iVar10);
        iVar10 = iVar10 + 1;
      } while (iVar5 != iVar10);
    }
    if (iVar9 < iVar2) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x24);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar11 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        if (local_e2 == 0) {
          (**(code **)(*(longlong *)**(undefined8 **)(*param_1 + 0x48) + 0x10))();
        }
        goto LAB_143b1b2b0;
      }
    }
    if (iVar12 < iVar2 && (char)local_c0 == '\0') {
      QueryPerformanceCounter(&local_88);
      auVar16._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar16._8_8_ = 0;
      auVar17 = roundpd(auVar16,auVar16,1);
      if (local_e0 < (longlong)auVar17._0_8_ - local_d0) {
        *(undefined1 *)((longlong)param_1 + 0xc) = 1;
LAB_143b1b2ae:
        uVar11 = 0;
LAB_143b1b2b0:
        if (local_98 == '\0') {
          local_98 = '\x01';
          *(int *)(local_b0 + 4) = *(int *)(local_b0 + 4) + -1;
          if (local_a0 != local_b0[2]) {
            FUN_14004673c();
          }
          *local_b0 = local_a8;
          local_b0[3] = local_90;
        }
        if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return uVar11 & 0xffffffff;
      }
    }
    else if (iVar2 <= iVar12) goto LAB_143b1b2ae;
    lVar8 = *param_1;
  } while( true );
}



// FUNCTION 143b1b388 FUN_143b1b388 body=73 status=ok
// SIG undefined FUN_143b1b388(void)

void FUN_143b1b388(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
      FUN_143b1b886(param_1,(int)param_1[1]);
      puVar2 = (undefined8 *)*param_1;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
    }
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143b1b3c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 143b1b3d2 FUN_143b1b3d2 body=434 status=ok
// SIG undefined FUN_143b1b3d2(void)

undefined8 * FUN_143b1b3d2(undefined8 *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 uVar4;
  longlong lVar5;
  int *piVar6;
  
  *param_1 = &PTR_FUN_14ae75440;
  lVar2 = param_1[0xb];
  if ((longlong)*(int *)(param_1 + 0xc) == 0) {
    uVar4 = 0;
  }
  else {
    lVar5 = 0;
    do {
      param_3 = *(longlong *)(lVar2 + 0x40 + lVar5);
      if (param_3 != -1) {
        param_3 = *(longlong *)(lVar2 + 0x40 + lVar5);
      }
      lVar5 = lVar5 + 0x48;
    } while ((longlong)*(int *)(param_1 + 0xc) * 0x48 != lVar5);
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    lVar2 = param_1[0xb];
  }
  FUN_143b1b856(lVar2,uVar4,param_3);
  if (param_1[0xb] != 0) {
    piVar6 = (int *)(param_1[0xb] & 0xffffffffffff0000);
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      piVar3 = piVar6;
      if (*(longlong *)(piVar6 + 0x10) - (longlong)piVar6 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143b194e9);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        piVar3 = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar6;
        if (piVar3 == (int *)0x0) goto LAB_143b1b49c;
      }
      _aligned_free(piVar3);
    }
  }
LAB_143b1b49c:
  *param_1 = &PTR_FUN_149e002e8;
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar6 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      piVar3 = piVar6;
      if (*(longlong *)(piVar6 + 0x10) - (longlong)piVar6 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143b194e9);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        piVar3 = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar6;
        if (piVar3 == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(piVar3);
    }
  }
  return param_1;
}



// FUNCTION 143b1b584 FUN_143b1b584 body=53 status=ok
// SIG undefined FUN_143b1b584(void)

void FUN_143b1b584(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x40);
  do {
    puVar1[-3] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
    puVar1[-2] = 0;
    puVar1[-1] = 0xe800000000000020;
    *puVar1 = 0xffffffffffffffff;
    puVar1 = puVar1 + 9;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 143b1b5ba FUN_143b1b5ba body=667 status=ok
// SIG undefined FUN_143b1b5ba(void)

void FUN_143b1b5ba(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *_Src;
  longlong lVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *_Memory;
  uint *puVar9;
  int *piVar10;
  void *_Dst;
  
  uVar7 = *(uint *)(param_1 + 1);
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar7) {
      uVar3 = uVar7;
    }
  }
  else {
    uVar3 = (int)((ulonglong)uVar7 * 3 >> 3) + uVar7 + 0x10;
  }
  uVar8 = 0x7fffffff;
  if ((int)uVar7 <= (int)uVar3) {
    uVar8 = (ulonglong)uVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar8,0x48);
  }
  uVar8 = uVar8 * 0x48;
  _Src = (void *)*param_1;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar5 = (uint *)*puVar1;
  if (puVar5 != (uint *)0x0) goto LAB_143b1b6b5;
  while( true ) {
    uVar7 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar7 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar7 | 1;
      __tlregdtor(&LAB_143b194e9);
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar4 = *(undefined4 **)(lVar2 + 0x310);
    *(undefined8 *)(lVar2 + 0x310) = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar4 = 0xffffffff;
    *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    FUN_140217a48(puVar1);
    puVar5 = (uint *)*puVar1;
LAB_143b1b6b5:
    _Dst = (void *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
    puVar9 = (uint *)((longlong)_Dst + uVar8);
    uVar7 = puVar5[0x12];
    if (puVar9 <= puVar5 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
      LOCK();
      uVar3 = *puVar5;
      *puVar5 = *puVar5 + uVar7 + 1;
      UNLOCK();
      if ((uVar3 ^ uVar7) != 0xffffffff) break;
      puVar5 = (uint *)*puVar1;
      *puVar5 = 0xffffffff;
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar1 = puVar5;
      _Dst = (void *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
      puVar9 = (uint *)((longlong)_Dst + uVar8);
      uVar7 = 0;
      if (puVar9 <= puVar5 + 0x4000) {
        uVar7 = 1;
        goto LAB_143b1b72f;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_143b1b72f:
  *(uint **)(puVar5 + 0x10) = puVar9;
  puVar5[0x12] = uVar7;
  uVar6 = ((longlong)_Src + 0xffffU & 0xffffffffffff0000) - (longlong)_Src;
  if (uVar6 == 0 || _Src == (void *)0x0) {
    if (_Src == (void *)0x0) goto LAB_143b1b7d6;
  }
  else {
    if (uVar6 < uVar8) {
      uVar8 = uVar6;
    }
    memcpy(_Dst,_Src,uVar8);
  }
  piVar10 = (int *)((ulonglong)_Src & 0xffffffffffff0000);
  LOCK();
  *piVar10 = *piVar10 + -1;
  UNLOCK();
  if (*piVar10 == 0) {
    _Memory = piVar10;
    if (*(longlong *)(piVar10 + 0x10) - (longlong)piVar10 == 0x10000) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_143b194e9);
      }
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      _Memory = *(int **)(lVar2 + 0x310);
      *(int **)(lVar2 + 0x310) = piVar10;
      if (_Memory == (int *)0x0) goto LAB_143b1b7d6;
    }
    _aligned_free(_Memory);
  }
LAB_143b1b7d6:
  *param_1 = _Dst;
  return;
}



// FUNCTION 143b1b856 FUN_143b1b856 body=47 status=ok
// SIG undefined FUN_143b1b856(void)

void FUN_143b1b856(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar1 + -5);
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143b1b886 FUN_143b1b886 body=369 status=ok
// SIG undefined FUN_143b1b886(void)

void FUN_143b1b886(longlong *param_1,int param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  undefined1 local_4c;
  undefined8 local_48;
  int local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)(*(longlong *)(*param_1 + 0x58) + (longlong)param_2 * 0x48);
  uVar4 = *(ulonglong *)(*param_1 + 0x18);
  bVar3 = *(byte *)(*param_1 + 0x50);
  uVar6 = (ulonglong)bVar3;
  LOCK();
  plVar2[8] = -1;
  UNLOCK();
  lVar5 = *param_1;
  *param_1 = 0;
  local_4c = 0;
  local_58 = 0;
  local_3c = 0;
  local_50 = param_2;
  local_40 = param_2;
  (**(code **)(plVar2[5] + 0x18))(plVar2 + 5,plVar2);
  plVar2[5] = (longlong)&PTR_FUN_14ae75450;
  *plVar2 = lVar5;
  local_48 = 0;
  *(undefined1 *)((longlong)plVar2 + 0xc) = local_4c;
  *(int *)(plVar2 + 1) = local_50;
  FUN_143b1b388(&local_48);
  lVar5 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar5 == 0) {
    uVar6 = 1;
    if (bVar3 != 6) {
      uVar6 = (ulonglong)bVar3;
    }
    lVar5 = 0;
  }
  else {
    if (bVar3 == 6) {
      uVar6 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
    }
    lVar5 = *(longlong *)(lVar5 + 0x30);
  }
  plVar2[6] = lVar5;
  plVar2[7] = uVar6 << 0x3b | (uVar4 & 0x1fffffffffffff) << 6 | 0xc000000000000000;
  FUN_143b1b388(&local_58);
  LOCK();
  puVar1 = (ulonglong *)(plVar2 + 7);
  uVar4 = *puVar1;
  *puVar1 = *puVar1 | 2;
  UNLOCK();
  if ((uVar4 >> 1 & 1) != 0) {
    if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 143b1ba16 FUN_143b1ba16 body=450 status=ok
// SIG undefined FUN_143b1ba16(void)

void FUN_143b1ba16(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint *puVar8;
  
  if (((ulonglong)param_3 & 7) == 0 && 0xf < param_5) {
    *param_2 = &PTR_FUN_14ae75450;
    puVar6 = param_3;
  }
  else {
    *param_2 = &PTR_LAB_14ae75490;
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x330
             );
    puVar5 = (uint *)*puVar1;
    if (puVar5 != (uint *)0x0) goto LAB_143b1baf3;
    while( true ) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_143b194e9);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar4 = *(undefined4 **)(lVar3 + 0x310);
      *(undefined8 *)(lVar3 + 0x310) = 0;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar4 = 0xffffffff;
      *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
      puVar4[0x12] = 0;
      *puVar1 = puVar4;
      FUN_1467aa772(puVar1);
      puVar5 = (uint *)*puVar1;
LAB_143b1baf3:
      puVar6 = (undefined8 *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar8 = (uint *)(puVar6 + 2);
      uVar7 = puVar5[0x12];
      if (puVar8 <= puVar5 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
        LOCK();
        uVar2 = *puVar5;
        *puVar5 = *puVar5 + uVar7 + 1;
        UNLOCK();
        if ((uVar2 ^ uVar7) != 0xffffffff) break;
        puVar5 = (uint *)*puVar1;
        *puVar5 = 0xffffffff;
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
        puVar5[0x12] = 0;
        *puVar1 = puVar5;
        puVar6 = (undefined8 *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
        puVar8 = (uint *)(puVar6 + 2);
        uVar7 = 0;
        if (puVar8 <= puVar5 + 0x4000) {
          uVar7 = 1;
          goto LAB_143b1bb6d;
        }
      }
    }
    uVar7 = uVar7 + 1;
LAB_143b1bb6d:
    *(uint **)(puVar5 + 0x10) = puVar8;
    puVar5[0x12] = uVar7;
    *param_3 = puVar6;
  }
  *puVar6 = *param_4;
  *param_4 = 0;
  *(undefined1 *)((longlong)puVar6 + 0xc) = *(undefined1 *)((longlong)param_4 + 0xc);
  *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_4 + 1);
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return;
}



// FUNCTION 143b1bbd8 FUN_143b1bbd8 body=26 status=ok
// SIG undefined FUN_143b1bbd8(void)

undefined8 FUN_143b1bbd8(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_143b1afdc(param_2,0);
  }
  return 0;
}



// FUNCTION 143b1bbf2 FUN_143b1bbf2 body=72 status=ok
// SIG undefined FUN_143b1bbf2(void)

undefined8
FUN_143b1bbf2(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,char param_5
             )

{
  if (param_5 != '\0') {
    FUN_143b1afdc(param_3,0);
  }
  FUN_143b1ba16(param_1,param_2 + 0x28,param_2,param_3,param_4);
  return 0;
}



// FUNCTION 143b1bc6c FUN_143b1bc6c body=26 status=ok
// SIG undefined FUN_143b1bc6c(void)

undefined8 FUN_143b1bc6c(undefined8 param_1,undefined8 *param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_143b1afdc(*param_2,0);
  }
  return 0;
}



// FUNCTION 143b1bc86 FUN_143b1bc86 body=70 status=ok
// SIG undefined FUN_143b1bc86(void)

undefined8
FUN_143b1bc86(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             char param_5)

{
  if (param_5 != '\0') {
    FUN_143b1afdc(*param_3,0);
  }
  param_2[5] = &PTR_LAB_14ae75490;
  *param_2 = *param_3;
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return 0;
}



// FUNCTION 143b1bccc FUN_143b1bccc body=179 status=ok
// SIG undefined FUN_143b1bccc(void)

void FUN_143b1bccc(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *_Memory;
  int *piVar4;
  
  uVar2 = *param_2;
  FUN_143b1b388(uVar2);
  if (uVar2 != 0) {
    piVar4 = (int *)(uVar2 & 0xffffffffffff0000);
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 == 0) {
      _Memory = piVar4;
      if (*(longlong *)(piVar4 + 0x10) - (longlong)piVar4 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143b194e9);
        }
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar3 + 0x310);
        *(int **)(lVar3 + 0x310) = piVar4;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000143b1bd47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 143b1bd8e FUN_143b1bd8e body=331 status=ok
// SIG undefined FUN_143b1bd8e(void)

double FUN_143b1bd8e(longlong param_1,undefined8 param_2,int *param_3,int *param_4,double *param_5)

{
  double dVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  
  dVar1 = *param_5;
  iVar2 = *param_4;
  iVar3 = *param_3;
  uVar8 = iVar3 * 3 + 2;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x130);
  uVar5 = iVar3 * 3 + 1;
  uVar7 = iVar2 * 3 + 2;
  uVar6 = iVar2 * 3 + 1;
  dVar9 = *(double *)
           (*(longlong *)(lVar4 + (ulonglong)(uVar8 >> 9) * 8) + (ulonglong)(uVar8 & 0x1ff) * 8) *
          *(double *)
           (*(longlong *)(lVar4 + (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 8) +
          *(double *)
           (*(longlong *)(lVar4 + (ulonglong)((uint)(iVar3 * 3) >> 9) * 8) +
           (ulonglong)(iVar3 * 3 & 0x1ff) * 8) *
          *(double *)
           (*(longlong *)(lVar4 + (ulonglong)((uint)(iVar2 * 3) >> 9) * 8) +
           (ulonglong)(iVar2 * 3 & 0x1ff) * 8) +
          *(double *)
           (*(longlong *)(lVar4 + (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 8) *
          *(double *)
           (*(longlong *)(lVar4 + (ulonglong)(uVar6 >> 9) * 8) + (ulonglong)(uVar6 & 0x1ff) * 8);
  if (0.001 < *(double *)(param_1 + 8)) {
    dVar9 = pow(dVar9,*(double *)(param_1 + 8));
  }
  dVar10 = 1.0 - dVar9 * dVar9;
  dVar9 = 1.0;
  if (dVar10 <= 1.0) {
    dVar9 = dVar10;
  }
  dVar9 = (double)(~-(ulonglong)(dVar10 < 0.0) & (ulonglong)dVar9);
  dVar9 = dVar9 * dVar9 * dVar9;
  dVar10 = 1.0;
  if (dVar9 <= 1.0) {
    dVar10 = dVar9;
  }
  return dVar1 * (double)(-(ulonglong)(dVar9 < 0.001) & 0x3f50624dd2f1a9fc |
                         ~-(ulonglong)(dVar9 < 0.001) & (ulonglong)dVar10);
}



// FUNCTION 143b1bee4 FUN_143b1bee4 body=29 status=ok
// SIG undefined FUN_143b1bee4(void)

void FUN_143b1bee4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143b1bf02 FUN_143b1bf02 body=29 status=ok
// SIG undefined FUN_143b1bf02(void)

undefined8 FUN_143b1bf02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b1bfc2 FUN_143b1bfc2 body=511 status=ok
// SIG undefined FUN_143b1bfc2(void)

void FUN_143b1bfc2(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint *in_stack_00000028;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  uint local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined8 local_98;
  uint local_90;
  undefined1 local_88 [4];
  uint local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar4 = *in_stack_00000028;
  lVar5 = *param_1;
  lVar9 = *(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 8) + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
  uVar8 = (ulonglong)(uVar4 & 0x1ff);
  dVar1 = *(double *)(lVar9 + uVar8 * 0x18);
  dVar2 = *(double *)(lVar9 + 8 + uVar8 * 0x18);
  dVar3 = *(double *)(lVar9 + 0x10 + uVar8 * 0x18);
  lVar9 = *(longlong *)(lVar5 + 8) + 0xb8;
  FUN_146be983e(&local_b0,lVar9,uVar4,0);
  if ((((local_b0 != lVar9) || (local_a8 != uVar4)) || ((int)local_98 != -1)) ||
     (local_98._4_4_ != -1)) {
    do {
      uVar8 = *(ulonglong *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 8) + 0x1c0) + (ulonglong)(local_90 >> 9) * 8)
               + (ulonglong)((local_90 & 0x1ff) << 4));
      uVar7 = uVar8 >> 0x20;
      if (uVar4 != (uint)uVar8) {
        uVar7 = uVar8;
      }
      lVar6 = *(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 8) + 0x10) + ((uVar7 & 0xffffffff) >> 9) * 8);
      uVar8 = (ulonglong)((uint)uVar7 & 0x1ff);
      dVar10 = dVar1 - *(double *)(lVar6 + uVar8 * 0x18);
      dVar11 = dVar2 - *(double *)(lVar6 + 8 + uVar8 * 0x18);
      dVar12 = dVar3 - *(double *)(lVar6 + 0x10 + uVar8 * 0x18);
      dVar10 = dVar12 * dVar12 + dVar10 * dVar10 + dVar11 * dVar11;
      if (*(double *)param_1[1] <= dVar10 && dVar10 != *(double *)param_1[1]) {
        local_84 = local_90;
        FUN_1447cbafe(lVar5 + 0x2b0,local_88,&local_84,0);
      }
      if (local_a0 == 0) {
        local_a4 = 0xffffffff;
        local_98 = 0xffffffffffffffff;
        local_98._4_4_ = -1;
        local_98._0_4_ = -1;
      }
      else {
        FUN_146be9922(&local_b0);
      }
    } while (((local_b0 != lVar9) || (local_a8 != uVar4)) ||
            (((int)local_98 != -1 || (local_98._4_4_ != -1))));
  }
  if ((local_80 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b1c1ec FUN_143b1c1ec body=29 status=ok
// SIG undefined FUN_143b1c1ec(void)

undefined8 FUN_143b1c1ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b1c20a FUN_143b1c20a body=249 status=ok
// SIG undefined FUN_143b1c20a(void)

void FUN_143b1c20a(longlong *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  char local_45;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = *param_2;
  if (-1 < (int)uVar2) {
    lVar3 = *param_1;
    lVar4 = *(longlong *)(lVar3 + 8);
    if ((int)uVar2 < *(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24)) {
      uVar8 = (ulonglong)(uVar2 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar2 >> 9) * 8) +
                             uVar8 * 2) - 1U) < 0xfffe) {
        local_45 = '\0';
        pcVar5 = (code *)param_1[2];
        plVar7 = param_1 + 6;
        if ((longlong *)param_1[4] != (longlong *)0x0) {
          plVar7 = (longlong *)param_1[4];
        }
        local_44 = uVar2;
        uVar6 = (**(code **)(*plVar7 + 8))();
        (*pcVar5)(&local_60,uVar6,&local_44,&local_45);
        if (local_45 == '\x01') {
          *(undefined1 *)(*(longlong *)(lVar3 + 0x280) + (ulonglong)uVar2) = 1;
          lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x270) + (ulonglong)(uVar2 >> 9) * 8);
          *(undefined8 *)(lVar3 + 0x10 + uVar8 * 0x18) = local_50;
          puVar1 = (undefined4 *)(lVar3 + uVar8 * 0x18);
          *puVar1 = local_60;
          puVar1[1] = uStack_5c;
          puVar1[2] = uStack_58;
          puVar1[3] = uStack_54;
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b1c304 FUN_143b1c304 body=498 status=ok
// SIG undefined FUN_143b1c304(void)

void FUN_143b1c304(longlong *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  uVar1 = *param_2;
  uVar5 = (ulonglong)uVar1;
  if (-1 < (int)uVar1) {
    lVar2 = *param_1;
    lVar3 = *(longlong *)(lVar2 + 8);
    if ((int)uVar1 < *(int *)(lVar3 + 0x1d0) * 0x200 + *(int *)(lVar3 + 0x1d4)) {
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar3 + 0x1d8) + (ulonglong)(uVar1 >> 9) * 8) +
                             (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe) {
        uVar6 = *(ulonglong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x1c0) + (ulonglong)(uVar1 >> 9) * 8) +
                 (ulonglong)((uVar1 & 0x1ff) << 4));
        lVar9 = *(longlong *)(lVar2 + 0x280);
        if (*(char *)(lVar9 + (int)uVar6) == '\x01') {
          lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x270) + (uVar6 >> 9 & 0x7fffff) * 8);
          uVar8 = uVar6 & 0x1ff;
          lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (uVar6 >> 0x29) * 8);
          uVar7 = uVar6 >> 0x20 & 0x1ff;
          dVar11 = *(double *)(lVar3 + uVar7 * 0x18) - *(double *)(lVar4 + uVar8 * 0x18);
          dVar12 = *(double *)(lVar3 + 8 + uVar7 * 0x18) - *(double *)(lVar4 + 8 + uVar8 * 0x18);
          dVar10 = *(double *)(lVar3 + 0x10 + uVar7 * 0x18) -
                   *(double *)(lVar4 + 0x10 + uVar8 * 0x18);
          dVar10 = dVar10 * dVar10 + dVar11 * dVar11 + dVar12 * dVar12;
          if ((dVar10 < *(double *)(lVar2 + 0x168) * *(double *)(lVar2 + 0x168)) ||
             (*(double *)(lVar2 + 0x170) * *(double *)(lVar2 + 0x170) < dVar10)) {
            *(undefined1 *)(*(longlong *)(lVar2 + 0x3b8) + uVar5) = 1;
            lVar9 = *(longlong *)(lVar2 + 0x280);
          }
        }
        if ((*(char *)(lVar9 + ((longlong)uVar6 >> 0x20)) == '\x01') &&
           (*(char *)(*(longlong *)(lVar2 + 0x3b8) + uVar5) == '\0')) {
          lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x270) + (uVar6 >> 0x29) * 8);
          uVar7 = uVar6 >> 0x20 & 0x1ff;
          lVar9 = *(longlong *)
                   (*(longlong *)(*(longlong *)(lVar2 + 8) + 0x10) + (uVar6 >> 9 & 0x7fffff) * 8);
          uVar6 = uVar6 & 0x1ff;
          dVar11 = *(double *)(lVar9 + uVar6 * 0x18) - *(double *)(lVar3 + uVar7 * 0x18);
          dVar12 = *(double *)(lVar9 + 8 + uVar6 * 0x18) - *(double *)(lVar3 + 8 + uVar7 * 0x18);
          dVar10 = *(double *)(lVar9 + 0x10 + uVar6 * 0x18) -
                   *(double *)(lVar3 + 0x10 + uVar7 * 0x18);
          dVar10 = dVar10 * dVar10 + dVar11 * dVar11 + dVar12 * dVar12;
          if ((dVar10 < *(double *)(lVar2 + 0x168) * *(double *)(lVar2 + 0x168)) ||
             (*(double *)(lVar2 + 0x170) * *(double *)(lVar2 + 0x170) < dVar10)) {
            *(undefined1 *)(*(longlong *)(lVar2 + 0x3b8) + uVar5) = 1;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 143b1c4f6 FUN_143b1c4f6 body=150 status=ok
// SIG undefined FUN_143b1c4f6(void)

undefined8
FUN_143b1c4f6(undefined8 param_1,longlong *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *param_3;
  plVar2 = (longlong *)*param_2;
  plVar3 = (longlong *)param_2[1];
  local_68[0] = *plVar2;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar4 = plVar2 + 4;
    if ((longlong *)plVar2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)plVar2[2];
    }
    (**(code **)*plVar4)(plVar4,local_58);
  }
  local_78 = param_4;
  (**(code **)(*plVar3 + 0x90))(plVar3,param_1,uVar1,local_68);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b1c5b8 FUN_143b1c5b8 body=29 status=ok
// SIG undefined FUN_143b1c5b8(void)

undefined8 FUN_143b1c5b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b1c5d6 FUN_143b1c5d6 body=672 status=ok
// SIG undefined FUN_143b1c5d6(void)

void FUN_143b1c5d6(longlong *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  double dVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_108 [32];
  char *local_e8;
  longlong local_d8;
  uint local_d0;
  undefined4 local_cc;
  int local_c8;
  undefined8 local_c0;
  uint local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  double local_a0;
  char local_91;
  undefined1 local_90 [4];
  uint local_8c;
  longlong local_88 [2];
  undefined8 local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar2 = *param_2;
  if (-1 < (int)uVar2) {
    plVar3 = (longlong *)*param_1;
    lVar9 = plVar3[1];
    if ((int)uVar2 < *(int *)(lVar9 + 0x20) * 0x200 + *(int *)(lVar9 + 0x24)) {
      uVar10 = (ulonglong)(uVar2 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar9 + 0x28) + (ulonglong)(uVar2 >> 9) * 8) +
                             uVar10 * 2) - 1U) < 0xfffe) {
        local_91 = '\0';
        plVar4 = (longlong *)param_1[1];
        local_88[0] = *plVar4;
        local_78[0] = 0;
        if (local_88[0] != 0) {
          plVar8 = plVar4 + 4;
          if ((longlong *)plVar4[2] != (longlong *)0x0) {
            plVar8 = (longlong *)plVar4[2];
          }
          (**(code **)*plVar8)(plVar8,local_78);
        }
        local_e8 = &local_91;
        (**(code **)(*plVar3 + 0x90))(plVar3,&local_b0,uVar2,local_88);
        if (local_91 == '\x01') {
          *(undefined1 *)(plVar3[0x50] + (ulonglong)uVar2) = 1;
          lVar9 = *(longlong *)(plVar3[0x4e] + (ulonglong)(uVar2 >> 9) * 8);
          *(double *)(lVar9 + 0x10 + uVar10 * 0x18) = local_a0;
          puVar1 = (undefined4 *)(lVar9 + uVar10 * 0x18);
          *puVar1 = local_b0;
          puVar1[1] = uStack_ac;
          puVar1[2] = uStack_a8;
          puVar1[3] = uStack_a4;
          lVar9 = plVar3[1] + 0xb8;
          FUN_146be983e(&local_d8,lVar9,uVar2,0);
          if ((((local_d8 != lVar9) || (local_d0 != uVar2)) || ((int)local_c0 != -1)) ||
             (local_c0._4_4_ != -1)) {
            do {
              uVar10 = *(ulonglong *)
                        (*(longlong *)
                          (*(longlong *)(plVar3[1] + 0x1c0) + (ulonglong)(local_b8 >> 9) * 8) +
                        (ulonglong)((local_b8 & 0x1ff) << 4));
              uVar7 = uVar10 >> 0x20;
              if (uVar2 != (uint)uVar10) {
                uVar7 = uVar10;
              }
              lVar5 = *(longlong *)
                       (*(longlong *)(plVar3[1] + 0x10) + ((uVar7 & 0xffffffff) >> 9) * 8);
              uVar10 = (ulonglong)((uint)uVar7 & 0x1ff);
              dVar6 = *(double *)(lVar5 + uVar10 * 0x18) - (double)CONCAT44(uStack_ac,local_b0);
              dVar11 = *(double *)(lVar5 + 8 + uVar10 * 0x18) -
                       (double)CONCAT44(uStack_a4,uStack_a8);
              dVar12 = *(double *)(lVar5 + 0x10 + uVar10 * 0x18) - local_a0;
              dVar6 = SQRT(dVar12 * dVar12 + dVar6 * dVar6 + dVar11 * dVar11);
              if ((dVar6 < (double)plVar3[0x2d]) ||
                 ((double)plVar3[0x2e] <= dVar6 && dVar6 != (double)plVar3[0x2e])) {
                local_8c = local_b8;
                FUN_1447cbafe(plVar3 + 0x56,local_90,&local_8c,0);
              }
              if (local_c8 == 0) {
                local_cc = 0xffffffff;
                local_c0 = 0xffffffffffffffff;
                local_c0._4_4_ = -1;
                local_c0._0_4_ = -1;
              }
              else {
                FUN_146be9922(&local_d8);
              }
            } while (((local_d8 != lVar9) || (local_d0 != uVar2)) ||
                    (((int)local_c0 != -1 || (local_c0._4_4_ != -1))));
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b1c896 FUN_143b1c896 body=12 status=ok
// SIG undefined FUN_143b1c896(void)

void FUN_143b1c896(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143b1c89f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143b1c8a2 FUN_143b1c8a2 body=29 status=ok
// SIG undefined FUN_143b1c8a2(void)

undefined8 FUN_143b1c8a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b1c8c0 FUN_143b1c8c0 body=457 status=ok
// SIG undefined FUN_143b1c8c0(void)

double * FUN_143b1c8c0(double *param_1,longlong *param_2,uint *param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  double dVar10;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  undefined4 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = *param_3;
  lVar3 = *param_2;
  *param_4 = 0;
  lVar4 = *(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 8) + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
  local_58 = *(double *)(lVar4 + 0x10 + (ulonglong)(uVar2 & 0x1ff) * 0x18);
  puVar1 = (undefined4 *)(lVar4 + (ulonglong)(uVar2 & 0x1ff) * 0x18);
  local_68 = *puVar1;
  uStack_64 = puVar1[1];
  uStack_60 = puVar1[2];
  uStack_5c = puVar1[3];
  if (*(char *)(lVar3 + 200) == '\x01') {
    FUN_1482b33ce(lVar3 + 0x10,&local_48,uVar2);
    if ((local_48._1_1_ == '\x01') && (local_40 == 0)) goto LAB_143b1c92a;
LAB_143b1ca4f:
    param_1[2] = local_58;
    *(undefined4 *)param_1 = local_68;
    *(undefined4 *)((longlong)param_1 + 4) = uStack_64;
    *(undefined4 *)(param_1 + 1) = uStack_60;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_5c;
  }
  else {
LAB_143b1c92a:
    pcVar5 = *(code **)(lVar3 + 0xe0);
    if (pcVar5 != (code *)0x0) {
      plVar9 = (longlong *)(lVar3 + 0x100);
      if (*(longlong **)(lVar3 + 0xf0) != (longlong *)0x0) {
        plVar9 = *(longlong **)(lVar3 + 0xf0);
      }
      local_48 = uVar2;
      uVar7 = (**(code **)(*plVar9 + 8))();
      uVar8 = (*pcVar5)(uVar7,&local_48);
      if ((uVar8 & 2) != 0) goto LAB_143b1ca4f;
    }
    (**(code **)(**(longlong **)(lVar3 + 0xd0) + 8))
              (*(longlong **)(lVar3 + 0xd0),param_1,&local_68,uVar2);
    dVar10 = (double)CONCAT44(uStack_64,local_68) - *param_1;
    uVar8 = -(ulonglong)(-dVar10 <= dVar10);
    bVar6 = true;
    if (((double)(~uVar8 & (ulonglong)-dVar10 | (ulonglong)dVar10 & uVar8) < 1e-08) &&
       (dVar10 = (double)CONCAT44(uStack_5c,uStack_60) - param_1[1],
       uVar8 = -(ulonglong)(-dVar10 <= dVar10),
       (double)(~uVar8 & (ulonglong)-dVar10 | (ulonglong)dVar10 & uVar8) < 1e-08)) {
      dVar10 = local_58 - param_1[2];
      uVar8 = -(ulonglong)(-dVar10 <= dVar10);
      bVar6 = 1e-08 <= (double)(~uVar8 & (ulonglong)-dVar10 | (ulonglong)dVar10 & uVar8);
    }
    *param_4 = bVar6;
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b1cab4 FUN_143b1cab4 body=29 status=ok
// SIG undefined FUN_143b1cab4(void)

undefined8 FUN_143b1cab4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b1cad2 FUN_143b1cad2 body=864 status=ok
// SIG undefined FUN_143b1cad2(void)

void FUN_143b1cad2(longlong *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  char cStack_a7;
  undefined2 uStack_a6;
  undefined4 uStack_a4;
  uint local_a0;
  undefined4 uStack_9c;
  int local_98;
  undefined8 local_90;
  uint local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  double local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  undefined1 local_50 [4];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar2 = *param_2;
  lVar3 = *param_1;
  if ((*(char *)(lVar3 + 200) != '\x01') ||
     ((FUN_1482b33ce(lVar3 + 0x10,&local_a8,uVar2), cStack_a7 == '\x01' &&
      (CONCAT44(uStack_9c,local_a0) == 0)))) {
    pcVar4 = *(code **)(lVar3 + 0xe0);
    if (pcVar4 != (code *)0x0) {
      local_a8 = (undefined1)uVar2;
      cStack_a7 = (char)(uVar2 >> 8);
      uStack_a6 = (undefined2)(uVar2 >> 0x10);
      plVar8 = (longlong *)(lVar3 + 0x100);
      if (*(longlong **)(lVar3 + 0xf0) != (longlong *)0x0) {
        plVar8 = *(longlong **)(lVar3 + 0xf0);
      }
      uVar6 = (**(code **)(*plVar8 + 8))();
      uVar7 = (*pcVar4)(uVar6,&local_a8);
      if ((uVar7 & 2) != 0) goto LAB_143b1cc39;
    }
    lVar9 = *(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 8) + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
    uVar7 = (ulonglong)(uVar2 & 0x1ff);
    local_58 = *(double *)(lVar9 + 0x10 + uVar7 * 0x18);
    puVar1 = (undefined4 *)(lVar9 + uVar7 * 0x18);
    local_68 = *puVar1;
    uStack_64 = puVar1[1];
    uStack_60 = puVar1[2];
    uStack_5c = puVar1[3];
    (**(code **)(**(longlong **)(lVar3 + 0xd0) + 8))
              (*(longlong **)(lVar3 + 0xd0),&local_80,&local_68,uVar2);
    dVar11 = (double)CONCAT44(uStack_64,local_68) - (double)CONCAT44(uStack_7c,local_80);
    uVar10 = -(ulonglong)(-dVar11 <= dVar11);
    if (((1e-08 <= (double)(~uVar10 & (ulonglong)-dVar11 | (ulonglong)dVar11 & uVar10)) ||
        (dVar11 = (double)CONCAT44(uStack_5c,uStack_60) - (double)CONCAT44(uStack_74,uStack_78),
        uVar10 = -(ulonglong)(-dVar11 <= dVar11),
        1e-08 <= (double)(~uVar10 & (ulonglong)-dVar11 | (ulonglong)dVar11 & uVar10))) ||
       (dVar11 = local_58 - local_70, uVar10 = -(ulonglong)(-dVar11 <= dVar11),
       1e-08 <= (double)(~uVar10 & (ulonglong)-dVar11 | (ulonglong)dVar11 & uVar10))) {
      *(undefined1 *)(*(longlong *)(lVar3 + 0x280) + (longlong)(int)uVar2) = 1;
      lVar9 = *(longlong *)(*(longlong *)(lVar3 + 0x270) + (ulonglong)(uVar2 >> 9) * 8);
      *(double *)(lVar9 + 0x10 + uVar7 * 0x18) = local_70;
      puVar1 = (undefined4 *)(lVar9 + uVar7 * 0x18);
      *puVar1 = local_80;
      puVar1[1] = uStack_7c;
      puVar1[2] = uStack_78;
      puVar1[3] = uStack_74;
      lVar9 = *(longlong *)(lVar3 + 8) + 0xb8;
      FUN_146be983e(&local_a8,lVar9,uVar2,0);
      if (((CONCAT44(uStack_a4,CONCAT22(uStack_a6,CONCAT11(cStack_a7,local_a8))) != lVar9) ||
          (local_a0 != uVar2)) || (((int)local_90 != -1 || (local_90._4_4_ != -1)))) {
        do {
          uVar7 = *(ulonglong *)
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar3 + 8) + 0x1c0) +
                     (ulonglong)(local_88 >> 9) * 8) + (ulonglong)((local_88 & 0x1ff) << 4));
          uVar10 = uVar7 >> 0x20;
          if (uVar2 != (uint)uVar7) {
            uVar10 = uVar7;
          }
          lVar5 = *(longlong *)
                   (*(longlong *)(*(longlong *)(lVar3 + 8) + 0x10) +
                   ((uVar10 & 0xffffffff) >> 9) * 8);
          uVar7 = (ulonglong)((uint)uVar10 & 0x1ff);
          dVar11 = *(double *)(lVar5 + uVar7 * 0x18) - (double)CONCAT44(uStack_7c,local_80);
          dVar12 = *(double *)(lVar5 + 8 + uVar7 * 0x18) - (double)CONCAT44(uStack_74,uStack_78);
          dVar13 = *(double *)(lVar5 + 0x10 + uVar7 * 0x18) - local_70;
          dVar11 = SQRT(dVar13 * dVar13 + dVar11 * dVar11 + dVar12 * dVar12);
          if ((dVar11 < *(double *)(lVar3 + 0x168)) ||
             (*(double *)(lVar3 + 0x170) <= dVar11 && dVar11 != *(double *)(lVar3 + 0x170))) {
            local_4c = local_88;
            FUN_1447cbafe(lVar3 + 0x2b0,local_50,&local_4c,0);
          }
          if (local_98 == 0) {
            uStack_9c = 0xffffffff;
            local_90 = 0xffffffffffffffff;
            local_90._4_4_ = -1;
            local_90._0_4_ = -1;
          }
          else {
            FUN_146be9922(&local_a8);
          }
        } while ((((CONCAT44(uStack_a4,CONCAT22(uStack_a6,CONCAT11(cStack_a7,local_a8))) != lVar9)
                  || (local_a0 != uVar2)) || ((int)local_90 != -1)) || (local_90._4_4_ != -1));
      }
    }
  }
LAB_143b1cc39:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b1ce52 FUN_143b1ce52 body=12 status=ok
// SIG undefined FUN_143b1ce52(void)

void FUN_143b1ce52(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143b1ce5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143b1ce5e FUN_143b1ce5e body=29 status=ok
// SIG undefined FUN_143b1ce5e(void)

undefined8 FUN_143b1ce5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b1ce7c FUN_143b1ce7c body=150 status=ok
// SIG undefined FUN_143b1ce7c(void)

undefined8
FUN_143b1ce7c(undefined8 param_1,longlong *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *param_3;
  plVar2 = (longlong *)*param_2;
  plVar3 = (longlong *)param_2[1];
  local_68[0] = *plVar2;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar4 = plVar2 + 4;
    if ((longlong *)plVar2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)plVar2[2];
    }
    (**(code **)*plVar4)(plVar4,local_58);
  }
  local_78 = param_4;
  (**(code **)(*plVar3 + 0x90))(plVar3,param_1,uVar1,local_68);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b1cf3e FUN_143b1cf3e body=29 status=ok
// SIG undefined FUN_143b1cf3e(void)

undefined8 FUN_143b1cf3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b1cf5c FUN_143b1cf5c body=224 status=ok
// SIG undefined FUN_143b1cf5c(void)

void FUN_143b1cf5c(longlong *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  char *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char local_69;
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar2 = *param_2;
  plVar3 = (longlong *)*param_1;
  local_69 = '\0';
  local_68[0] = param_1[2];
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar5 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[4];
    }
    (**(code **)*plVar5)(plVar5,local_58);
  }
  local_98 = &local_69;
  (**(code **)(*plVar3 + 0x90))(plVar3,&local_88,uVar2,local_68);
  if (local_69 == '\x01') {
    *(undefined1 *)(plVar3[0x50] + (longlong)(int)uVar2) = 1;
    lVar4 = *(longlong *)(plVar3[0x4e] + (ulonglong)(uVar2 >> 9) * 8);
    *(undefined8 *)(lVar4 + 0x10 + (ulonglong)(uVar2 & 0x1ff) * 0x18) = local_78;
    puVar1 = (undefined4 *)(lVar4 + (ulonglong)(uVar2 & 0x1ff) * 0x18);
    *puVar1 = local_88;
    puVar1[1] = uStack_84;
    puVar1[2] = uStack_80;
    puVar1[3] = uStack_7c;
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b1d03e FUN_143b1d03e body=114 status=ok
// SIG undefined FUN_143b1d03e(void)

undefined8 * FUN_143b1d03e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14ae755d0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar1;
  puVar2[6] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 6);
  }
  return puVar2 + 2;
}



// FUNCTION 143b1d0b6 FUN_143b1d0b6 body=29 status=ok
// SIG undefined FUN_143b1d0b6(void)

void FUN_143b1d0b6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143b1d0d4 FUN_143b1d0d4 body=71 status=ok
// SIG undefined FUN_143b1d0d4(void)

undefined8 * FUN_143b1d0d4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ae755d0;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b1d11c FUN_143b1d11c body=222 status=ok
// SIG undefined FUN_143b1d11c(void)

void FUN_143b1d11c(longlong *param_1,int *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  
  iVar8 = *param_2 * 1000;
  if (iVar8 < 0x7ffffc18) {
    lVar2 = *param_1;
    uVar10 = (ulonglong)iVar8;
    do {
      if (((((longlong)uVar10 < (longlong)*(int *)(lVar2 + 0x288)) &&
           (*(char *)(*(longlong *)(lVar2 + 0x280) + uVar10) == '\x01')) && (-1 < (longlong)uVar10))
         && (lVar3 = *(longlong *)(lVar2 + 8),
            (longlong)uVar10 < (longlong)(*(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24))))
      {
        uVar12 = uVar10 >> 9;
        uVar9 = (uint)uVar10 & 0x1ff;
        if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x28) + uVar12 * 8) +
                               (ulonglong)uVar9 * 2) - 1U) < 0xfffe) {
          puVar11 = (undefined4 *)
                    ((ulonglong)(uVar9 * 0x18) +
                    *(longlong *)(*(longlong *)(lVar2 + 0x270) + uVar12 * 8));
          cVar7 = FUN_146bfed03(puVar11);
          if (cVar7 != '\0') {
            lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar12 * 8);
            *(undefined8 *)(lVar3 + 0x10 + (ulonglong)uVar9 * 0x18) = *(undefined8 *)(puVar11 + 4);
            uVar4 = puVar11[1];
            uVar5 = puVar11[2];
            uVar6 = puVar11[3];
            puVar1 = (undefined4 *)(lVar3 + (ulonglong)uVar9 * 0x18);
            *puVar1 = *puVar11;
            puVar1[1] = uVar4;
            puVar1[2] = uVar5;
            puVar1[3] = uVar6;
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 < (longlong)(iVar8 + 1000));
  }
  return;
}



// FUNCTION 143b1d1fa FUN_143b1d1fa body=457 status=ok
// SIG undefined FUN_143b1d1fa(void)

double * FUN_143b1d1fa(double *param_1,longlong *param_2,uint *param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  double dVar10;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  undefined4 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = *param_3;
  lVar3 = *param_2;
  *param_4 = 0;
  lVar4 = *(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 8) + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
  local_58 = *(double *)(lVar4 + 0x10 + (ulonglong)(uVar2 & 0x1ff) * 0x18);
  puVar1 = (undefined4 *)(lVar4 + (ulonglong)(uVar2 & 0x1ff) * 0x18);
  local_68 = *puVar1;
  uStack_64 = puVar1[1];
  uStack_60 = puVar1[2];
  uStack_5c = puVar1[3];
  if (*(char *)(lVar3 + 200) == '\x01') {
    FUN_1482b33ce(lVar3 + 0x10,&local_48,uVar2);
    if ((local_48._1_1_ == '\x01') && (local_40 == 0)) goto LAB_143b1d264;
LAB_143b1d389:
    param_1[2] = local_58;
    *(undefined4 *)param_1 = local_68;
    *(undefined4 *)((longlong)param_1 + 4) = uStack_64;
    *(undefined4 *)(param_1 + 1) = uStack_60;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_5c;
  }
  else {
LAB_143b1d264:
    pcVar5 = *(code **)(lVar3 + 0xe0);
    if (pcVar5 != (code *)0x0) {
      plVar9 = (longlong *)(lVar3 + 0x100);
      if (*(longlong **)(lVar3 + 0xf0) != (longlong *)0x0) {
        plVar9 = *(longlong **)(lVar3 + 0xf0);
      }
      local_48 = uVar2;
      uVar7 = (**(code **)(*plVar9 + 8))();
      uVar8 = (*pcVar5)(uVar7,&local_48);
      if ((uVar8 & 2) != 0) goto LAB_143b1d389;
    }
    (**(code **)(**(longlong **)(lVar3 + 0xd0) + 8))
              (*(longlong **)(lVar3 + 0xd0),param_1,&local_68,uVar2);
    dVar10 = (double)CONCAT44(uStack_64,local_68) - *param_1;
    uVar8 = -(ulonglong)(-dVar10 <= dVar10);
    bVar6 = true;
    if (((double)(~uVar8 & (ulonglong)-dVar10 | (ulonglong)dVar10 & uVar8) < 1e-08) &&
       (dVar10 = (double)CONCAT44(uStack_5c,uStack_60) - param_1[1],
       uVar8 = -(ulonglong)(-dVar10 <= dVar10),
       (double)(~uVar8 & (ulonglong)-dVar10 | (ulonglong)dVar10 & uVar8) < 1e-08)) {
      dVar10 = local_58 - param_1[2];
      uVar8 = -(ulonglong)(-dVar10 <= dVar10);
      bVar6 = 1e-08 <= (double)(~uVar8 & (ulonglong)-dVar10 | (ulonglong)dVar10 & uVar8);
    }
    *param_4 = bVar6;
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b1d3ee FUN_143b1d3ee body=29 status=ok
// SIG undefined FUN_143b1d3ee(void)

undefined8 FUN_143b1d3ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b1d40c FUN_143b1d40c body=335 status=ok
// SIG undefined FUN_143b1d40c(void)

void FUN_143b1d40c(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *param_2;
  lVar4 = *param_1;
  if (*(char *)(lVar4 + 200) == '\x01') {
    FUN_1482b33ce(lVar4 + 0x10,&local_48,uVar3);
    if ((local_48._1_1_ != '\x01') || (CONCAT44(uStack_3c,uStack_40) != 0)) goto LAB_143b1d473;
  }
  pcVar5 = *(code **)(lVar4 + 0xe0);
  if (pcVar5 != (code *)0x0) {
    plVar10 = (longlong *)(lVar4 + 0x100);
    if (*(longlong **)(lVar4 + 0xf0) != (longlong *)0x0) {
      plVar10 = *(longlong **)(lVar4 + 0xf0);
    }
    local_48 = uVar3;
    uVar8 = (**(code **)(*plVar10 + 8))();
    uVar9 = (*pcVar5)(uVar8,&local_48);
    if ((uVar9 & 2) != 0) goto LAB_143b1d473;
  }
  lVar6 = *(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 8) + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
  uVar9 = (ulonglong)(uVar3 & 0x1ff);
  local_38 = *(undefined8 *)(lVar6 + 0x10 + uVar9 * 0x18);
  puVar1 = (uint *)(lVar6 + uVar9 * 0x18);
  local_48 = *puVar1;
  uStack_44 = puVar1[1];
  uStack_40 = puVar1[2];
  uStack_3c = puVar1[3];
  (**(code **)(**(longlong **)(lVar4 + 0xd0) + 8))
            (*(longlong **)(lVar4 + 0xd0),&local_60,&local_48,uVar3);
  lVar4 = *(longlong *)(lVar4 + 8);
  cVar7 = FUN_146bfed03(&local_60);
  if (cVar7 != '\0') {
    lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
    *(undefined8 *)(lVar6 + 0x10 + uVar9 * 0x18) = local_50;
    puVar2 = (undefined4 *)(lVar6 + uVar9 * 0x18);
    *puVar2 = local_60;
    puVar2[1] = uStack_5c;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    if (*(char *)(lVar4 + 0x210) == '\x01') {
      LOCK();
      *(int *)(lVar4 + 0x214) = *(int *)(lVar4 + 0x214) + 1;
      UNLOCK();
    }
  }
LAB_143b1d473:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b1d57a FUN_143b1d57a body=12 status=ok
// SIG undefined FUN_143b1d57a(void)

void FUN_143b1d57a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143b1d583. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143b1d586 FUN_143b1d586 body=29 status=ok
// SIG undefined FUN_143b1d586(void)

undefined8 FUN_143b1d586(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b1d5a4 FUN_143b1d5a4 body=249 status=ok
// SIG undefined FUN_143b1d5a4(void)

void FUN_143b1d5a4(longlong *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  char local_45;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = *param_2;
  if (-1 < (int)uVar2) {
    lVar3 = *param_1;
    lVar4 = *(longlong *)(lVar3 + 8);
    if ((int)uVar2 < *(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24)) {
      uVar8 = (ulonglong)(uVar2 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar2 >> 9) * 8) +
                             uVar8 * 2) - 1U) < 0xfffe) {
        local_45 = '\0';
        pcVar5 = (code *)param_1[2];
        plVar7 = param_1 + 6;
        if ((longlong *)param_1[4] != (longlong *)0x0) {
          plVar7 = (longlong *)param_1[4];
        }
        local_44 = uVar2;
        uVar6 = (**(code **)(*plVar7 + 8))();
        (*pcVar5)(&local_60,uVar6,&local_44,&local_45);
        if (local_45 == '\x01') {
          *(undefined1 *)(*(longlong *)(lVar3 + 0x280) + (ulonglong)uVar2) = 1;
          lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x270) + (ulonglong)(uVar2 >> 9) * 8);
          *(undefined8 *)(lVar3 + 0x10 + uVar8 * 0x18) = local_50;
          puVar1 = (undefined4 *)(lVar3 + uVar8 * 0x18);
          *puVar1 = local_60;
          puVar1[1] = uStack_5c;
          puVar1[2] = uStack_58;
          puVar1[3] = uStack_54;
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b1d6ba FUN_143b1d6ba body=81 status=ok
// SIG undefined FUN_143b1d6ba(void)

void FUN_143b1d6ba(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar3 = (char *)param_1[2];
  if (*pcVar3 == '\x01') {
    if (param_1[1] == *param_2) {
      bVar4 = true;
    }
    else {
      iVar1 = *(int *)(param_1[1] + 0x170);
      iVar2 = (**(code **)(**(longlong **)(*param_1 + 0x38) + 0x10))();
      bVar4 = iVar1 == iVar2;
      pcVar3 = (char *)param_1[2];
    }
  }
  else {
    bVar4 = false;
  }
  *pcVar3 = bVar4;
  *(int *)param_1[3] = *(int *)param_1[3] + 1;
  return;
}



// FUNCTION 143b1d70c FUN_143b1d70c body=5800 status=ok
// SIG undefined FUN_143b1d70c(void)

void FUN_143b1d70c(longlong *param_1,int *param_2)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  void *pvVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  longlong *plVar15;
  double **ppdVar16;
  longlong *plVar17;
  double *pdVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  longlong lVar30;
  uint uVar31;
  ulonglong uVar32;
  int iVar33;
  longlong lVar34;
  ulonglong uVar35;
  longlong lVar36;
  ulonglong uVar37;
  longlong lVar38;
  void *pvVar39;
  void **ppvVar40;
  undefined8 *puVar41;
  float fVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  float fVar46;
  undefined1 auStack_4f8 [32];
  undefined8 **local_4d8;
  undefined8 local_4d0;
  double *local_4c8;
  uint local_4bc;
  undefined8 *local_4b8;
  ulonglong local_4b0;
  double *local_4a8;
  ulonglong local_4a0;
  uint local_494;
  int *local_490;
  ulonglong local_488;
  longlong *local_480;
  undefined8 *local_478;
  longlong *local_470;
  code *local_468;
  ulonglong local_460;
  undefined8 *local_458;
  int local_44c;
  longlong *local_448;
  undefined8 *local_440;
  undefined8 *local_438;
  longlong local_430;
  undefined8 *local_428;
  ulonglong local_420;
  code *local_418;
  ulonglong local_410;
  longlong local_408;
  ulonglong local_400;
  ulonglong local_3f8;
  ulonglong local_3f0;
  longlong *local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  int local_3c0;
  longlong local_3b8 [3];
  longlong local_3a0 [3];
  longlong local_388 [3];
  longlong local_370 [3];
  longlong local_358 [3];
  void *local_340;
  void *local_338;
  void *local_330;
  void *local_328;
  void *local_320;
  void *local_318;
  int local_310;
  byte local_30c;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  double local_2f0;
  double local_2e8;
  undefined8 local_2e0;
  code *local_2d8;
  undefined8 **local_2d0;
  double local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  ulonglong local_2b8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 *local_298;
  double *pdStack_290;
  double **local_288;
  undefined8 *local_280;
  double *pdStack_278;
  double **local_270;
  undefined8 *local_268;
  double *pdStack_260;
  double **local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210 [3];
  undefined8 local_1f8 [3];
  undefined8 *local_1e0;
  undefined8 uStack_1d8;
  double **local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0 [2];
  undefined8 *local_1b8;
  double *pdStack_1b0;
  double **local_1a8;
  undefined8 *local_198;
  undefined8 *puStack_190;
  undefined8 *local_188;
  double *pdStack_180;
  double **local_178;
  undefined8 *local_170;
  double *pdStack_168;
  double **local_160;
  undefined8 *local_158;
  double *pdStack_150;
  double **local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  double local_100 [3];
  longlong local_e8 [3];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_4f8;
  iVar22 = *param_2;
  puVar41 = (undefined8 *)*param_1;
  pcVar2 = (code *)puVar41[8];
  plVar17 = puVar41 + 0xc;
  plVar15 = (longlong *)puVar41[10];
  if ((longlong *)puVar41[10] == (longlong *)0x0) {
    plVar15 = plVar17;
  }
  uVar9 = (**(code **)(*plVar15 + 8))();
  cVar5 = (*pcVar2)(uVar9);
  if (cVar5 == '\0') {
    puVar3 = (uint *)param_1[1];
    uVar19 = puVar3[2];
    uVar31 = *puVar3;
    uVar1 = puVar3[1];
    iVar28 = ((int)uVar31 / (int)uVar19 + 1) - (uint)((int)uVar31 % (int)uVar19 == 0);
    iVar7 = iVar22 / iVar28;
    iVar28 = iVar22 % iVar28;
    uVar29 = iVar28 * uVar19;
    if ((int)uVar31 <= (int)uVar29) {
      uVar29 = uVar31;
    }
    local_4b8 = (undefined8 *)(ulonglong)uVar29;
    if ((int)uVar29 < 1) {
      local_4b8 = (undefined8 *)0x0;
    }
    uVar29 = puVar3[3] * iVar7;
    if ((int)uVar1 <= (int)uVar29) {
      uVar29 = uVar1;
    }
    local_4b0 = (ulonglong)uVar29;
    if ((int)uVar29 < 1) {
      local_4b0 = 0;
    }
    uVar19 = (iVar28 + 1) * uVar19;
    if ((int)uVar31 <= (int)uVar19) {
      uVar19 = uVar31;
    }
    if ((int)uVar19 < 1) {
      uVar19 = 0;
    }
    local_4a0 = CONCAT44(local_4a0._4_4_,uVar19);
    uVar19 = (iVar7 + 1) * puVar3[3];
    if ((int)uVar1 <= (int)uVar19) {
      uVar19 = uVar1;
    }
    if ((int)uVar19 < 1) {
      uVar19 = 0;
    }
    local_488 = CONCAT44(local_488._4_4_,uVar19);
    FUN_1483b34d6(puVar3,&local_308,iVar22,*(undefined4 *)(puVar41 + 0x95));
    memset(local_3b8,0,0xa8);
    local_30c = 1;
    local_3c0 = *(int *)((longlong)puVar41 + 0x49c);
    local_3e0 = puVar41[0x92];
    local_3d8 = local_308;
    uStack_3d0 = uStack_300;
    local_3c8 = local_2f8;
    if (*(int *)(puVar41 + 0x94) < 1) {
      fVar46 = 1.0;
    }
    else {
      fVar46 = (float)*(int *)(puVar41 + 0x94);
    }
    local_440 = puVar41;
    local_408 = (longlong)iVar22;
    local_3e8 = plVar17;
    if (fVar46 < 0.0) {
      fVar42 = sqrtf(fVar46);
    }
    else {
      fVar42 = SQRT(fVar46);
    }
    if (fVar42 <= fVar46) {
      fVar46 = fVar42;
    }
    fVar46 = (float)(-(uint)(fVar42 < 1.0) & 0x3f800000 | ~-(uint)(fVar42 < 1.0) & (uint)fVar46);
    local_310 = (int)ROUND(fVar46 + fVar46 + -0.5) >> 1;
    ppdVar16 = (double **)local_440[0xaa];
    local_4a8 = (double *)param_1[8];
    puVar41 = local_440 + 0x2e;
    local_2e0 = local_440;
    lVar10 = (longlong)(int)local_3c8;
    lVar34 = (longlong)local_3c8._4_4_;
    local_2a8 = (double)((ulonglong)local_2a8._4_4_ << 0x20);
    local_448 = param_1;
    FUN_1483b2a34(local_3a0,&local_2a8,lVar34 * lVar10);
    FUN_1483b2a34(local_358,&DAT_149f3b668,lVar34 * lVar10);
    lVar10 = (ulonglong)(uint)(local_310 * local_310) *
             (longlong)local_3c8._4_4_ * (longlong)(int)local_3c8;
    FUN_1483b2aae(local_3b8,&DAT_14ae75648,lVar10);
    local_2a8 = (double)DAT_14c84635c;
    FUN_1483b2b28(local_388,&local_2a8,lVar10);
    FUN_1483b2a34(local_370,&DAT_149f3b668,lVar10);
    local_2e8 = 1.0 / (double)local_3e0._4_4_;
    local_2f0 = 1.0 / (double)(int)local_3e0;
    local_178 = (double **)SQRT(local_2f0 * local_2f0 + local_2e8 * local_2e8);
    uVar8 = 0;
    local_298 = (undefined8 *)0x0;
    local_288 = (double **)0x0;
    local_258 = (double **)((ulonglong)local_258 & 0xffffffffffffff00);
    local_2a8 = (double)local_3c0 * (double)local_178;
    if (ppdVar16 != (double **)0x0) {
      uVar8 = *(undefined4 *)(ppdVar16 + 1);
    }
    local_4bc = (int)local_4a0 - (int)local_4b8;
    local_494 = (int)local_488 - (int)local_4b0;
    local_198 = &local_3e0;
    local_2d0 = &local_198;
    local_188 = &local_2e0;
    pdStack_180 = local_4a8;
    pdStack_168 = &local_2f0;
    local_158 = (undefined8 *)CONCAT44(local_158._4_4_,uVar8);
    local_4c8 = &local_2c8;
    local_2c8 = 0.0;
    uStack_2c0 = 0;
    local_2d8 = FUN_143b1edb6;
    local_4d0 = (undefined8 *)(CONCAT44(local_4d0._4_4_,(uint)local_30c) ^ 1);
    puStack_190 = puVar41;
    local_170 = &local_2a8;
    local_160 = ppdVar16;
    FUN_1401f8d10(L"ParallelFor Task",local_3c8._4_4_,1);
    if (local_298 != (undefined8 *)0x0) {
      ppdVar16 = local_288;
      if (local_288 == (double **)0x0) {
        ppdVar16 = &pdStack_278;
      }
      (*(code *)(*ppdVar16)[2])();
    }
    local_418 = (code *)local_440[0x98];
    local_400 = (ulonglong)*(uint *)((longlong)local_440 + 0x4ac);
    local_490 = (int *)local_440[0x92];
    local_470 = (longlong *)((ulonglong)local_490 >> 0x20);
    local_44c = local_494 * local_4bc;
    local_430 = (longlong)local_44c;
    iVar22 = local_3c8._4_4_ * (int)local_3c8;
    local_438 = (undefined8 *)CONCAT44(local_438._4_4_,local_310);
    local_410 = (ulonglong)(uint)(local_310 * local_310);
    local_2a8 = 0.0;
    uStack_2a0 = 0;
    local_298 = (undefined8 *)0x0;
    FUN_1483b2aae(&local_2a8,&DAT_14ae75649);
    puVar41 = local_4b8;
    uVar32 = local_4b0;
    if (0 < iVar22) {
      local_428 = (undefined8 *)(longlong)iVar22;
      local_3f0 = local_410 & 0xffffffff;
      dVar43 = (double)(int)local_470;
      local_3f8 = (ulonglong)((int)local_400 + 1);
      dVar44 = (double)(int)local_490;
      local_480 = (longlong *)(longlong)(int)local_490;
      local_460 = (ulonglong)((int)local_410 + (uint)((int)local_410 == 0));
      local_478 = (undefined8 *)0x0;
      iVar22 = (int)local_488;
      do {
        if ((int)local_438 != 0) {
          iVar20 = (int)((longlong)local_478 % (longlong)(int)local_3c8) + (int)local_3d8;
          iVar28 = (int)((longlong)local_478 / (longlong)(int)local_3c8) + local_3d8._4_4_;
          local_420 = (longlong)local_478 * local_3f0;
          iVar7 = iVar28 - (int)local_400;
          iVar14 = (int)local_470;
          if (iVar14 <= iVar7) {
            iVar7 = iVar14;
          }
          if (iVar7 < 1) {
            iVar7 = 0;
          }
          iVar21 = iVar20 - (int)local_400;
          iVar27 = (int)local_490;
          if (iVar27 <= iVar21) {
            iVar21 = iVar27;
          }
          if (iVar21 < 1) {
            iVar21 = 0;
          }
          iVar33 = iVar28 + (int)local_3f8;
          if (iVar14 <= iVar33) {
            iVar33 = iVar14;
          }
          iVar14 = iVar20 + (int)local_3f8;
          if (iVar33 < 1) {
            iVar33 = 0;
          }
          if (iVar27 <= iVar14) {
            iVar14 = iVar27;
          }
          if (iVar14 < 1) {
            iVar14 = 0;
          }
          iVar14 = iVar14 - iVar21;
          local_4a8 = (double *)CONCAT44(local_4a8._4_4_,iVar7);
          iVar7 = (iVar33 - iVar7) * iVar14;
          local_458 = (undefined8 *)((longlong)iVar20 + (longlong)iVar28 * (longlong)local_480);
          local_468 = (code *)CONCAT44(local_468._4_4_,iVar7);
          uVar35 = 0;
          do {
            if ((*(char *)(uVar35 + local_3b8[0] + local_420) == '\x01') && (0 < (int)local_468)) {
              lVar10 = 0;
              do {
                iVar28 = (int)(lVar10 % (longlong)iVar14) + iVar21;
                if (((int)puVar41 <= iVar28) && (iVar28 < (int)local_4a0)) {
                  iVar20 = (int)(lVar10 / (longlong)iVar14) + (uint)local_4a8;
                  if (((int)uVar32 <= iVar20) && (iVar20 < iVar22)) {
                    lVar34 = (longlong)
                             ((iVar20 - local_3d8._4_4_) * (int)local_3c8 +
                             (iVar28 - (int)local_3d8));
                    if (*(int *)(local_358[0] + (longlong)local_478 * 4) ==
                        *(int *)(local_358[0] + lVar34 * 4)) {
                      uVar37 = (ulonglong)(uint)((int)uVar35 >> 0x1f) << 0x20 | uVar35 & 0xffffffff;
                      local_198 = (undefined8 *)
                                  ((((double)iVar28 + 0.5) / dVar44 -
                                   ((((double)(int)((longlong)uVar37 % (longlong)local_310) + 0.5) /
                                    (double)local_310) * (1.0 / dVar44) +
                                   (((double)(int)((longlong)local_458 % (longlong)local_480) + 0.5)
                                    / dVar44 - (1.0 / dVar44) * 0.5))) * dVar44);
                      puStack_190 = (undefined8 *)
                                    ((((double)iVar20 + 0.5) / dVar43 -
                                     ((((double)(int)((longlong)uVar37 / (longlong)local_310) + 0.5)
                                      / (double)local_310) * (1.0 / dVar43) +
                                     (((double)(int)((longlong)local_458 / (longlong)local_480) +
                                      0.5) / dVar43 - (1.0 / dVar43) * 0.5))) * dVar43);
                      cVar5 = (*local_418)(&local_198);
                      if (cVar5 != '\0') {
                        *(char *)((longlong)local_2a8 +
                                 (longlong)
                                 (int)((iVar28 - (int)puVar41) + (iVar20 - (int)uVar32) * local_4bc)
                                 ) = '\x02' - (*(char *)(local_3b8[0] + lVar34) == '\x01');
                      }
                      puVar41 = local_4b8;
                      uVar32 = local_4b0;
                      iVar22 = (int)local_488;
                    }
                  }
                }
                lVar10 = lVar10 + 1;
              } while (iVar7 != lVar10);
            }
            uVar35 = uVar35 + 1;
          } while (uVar35 != local_460);
        }
        local_478 = (undefined8 *)((longlong)local_478 + 1);
      } while (local_478 != local_428);
    }
    iVar7 = (int)puVar41;
    iVar22 = (int)uVar32;
    if (0 < local_44c) {
      lVar34 = (longlong)(int)local_4bc;
      iVar14 = (int)local_490;
      iVar28 = (int)local_470;
      iVar20 = (int)local_410;
      local_4a0 = local_410 & 0xffffffff;
      local_4a8 = (double *)CONCAT44(local_4a8._4_4_,iVar14 + -1);
      local_470 = (longlong *)(ulonglong)(iVar28 - 1);
      lVar36 = 0;
      lVar10 = local_430;
      do {
        pvVar39 = local_320;
        pvVar4 = local_338;
        cVar5 = *(char *)((longlong)local_2a8 + lVar36);
        if (0xfd < (byte)(cVar5 - 4U) && (int)local_438 != 0) {
          iVar22 = (int)(lVar36 / lVar34) + (int)uVar32;
          iVar7 = (int)(lVar36 % lVar34) + (int)puVar41;
          lVar11 = (longlong)
                   ((iVar22 - local_3d8._4_4_) * (int)local_3c8 + (iVar7 - (int)local_3d8)) *
                   local_4a0;
          uVar35 = (ulonglong)(iVar20 + (uint)(iVar20 == 0));
          do {
            if (*(char *)(local_3b8[0] + lVar11) == '\x03') {
              uVar19 = (uint)(*(float *)(local_388[0] + lVar11 * 8) * (float)iVar14);
              if ((int)(uint)local_4a8 <= (int)uVar19) {
                uVar19 = (uint)local_4a8;
              }
              if ((int)uVar19 < 1) {
                uVar19 = 0;
              }
              uVar31 = (uint)(*(float *)(local_388[0] + 4 + lVar11 * 8) * (float)iVar28);
              if ((int)(uint)local_470 <= (int)uVar31) {
                uVar31 = (uint)local_470;
              }
              if ((int)uVar31 < 1) {
                uVar31 = 0;
              }
              if (cVar5 == '\x03') {
                local_320 = (void *)((longlong)local_320 + 1);
                if (local_318 < local_320) {
                  FUN_1483b2f30(&local_328,pvVar39);
                  puVar41 = local_4b8;
                  uVar32 = local_4b0;
                }
                ppvVar40 = &local_328;
              }
              else {
                if (cVar5 != '\x02') break;
                local_338 = (void *)((longlong)local_338 + 1);
                if (local_330 < local_338) {
                  FUN_1483b2f30(&local_340,pvVar4);
                  puVar41 = local_4b8;
                  uVar32 = local_4b0;
                }
                ppvVar40 = &local_340;
                pvVar39 = pvVar4;
              }
              pvVar4 = *ppvVar40;
              *(longlong *)((longlong)pvVar4 + (longlong)pvVar39 * 0x10) =
                   (longlong)iVar14 * (longlong)iVar22 + (longlong)iVar7;
              *(ulonglong *)((longlong)pvVar4 + (longlong)pvVar39 * 0x10 + 8) =
                   (ulonglong)uVar19 + (ulonglong)uVar31 * (longlong)iVar14;
              lVar10 = local_430;
              break;
            }
            lVar11 = lVar11 + 1;
            uVar35 = uVar35 - 1;
          } while (uVar35 != 0);
        }
        iVar7 = (int)puVar41;
        iVar22 = (int)uVar32;
        lVar36 = lVar36 + 1;
      } while (lVar36 != lVar10);
    }
    if (local_2a8 != 0.0) {
      FUN_1400020a8();
      iVar22 = (int)local_4b0;
      iVar7 = (int)local_4b8;
    }
    pvVar4 = local_338;
    puVar41 = local_440;
    plVar17 = local_448;
    lVar10 = local_408 * 0x18;
    ppvVar40 = (void **)(*(longlong *)local_448[2] + lVar10);
    if (ppvVar40 != &local_340) {
      ppvVar40[1] = local_338;
      if (local_338 == (void *)0x0 && ppvVar40[2] == (void *)0x0) {
        ppvVar40[2] = (void *)0x0;
      }
      else {
        FUN_1483b3588(ppvVar40,local_338);
        iVar22 = (int)local_4b0;
        iVar7 = (int)local_4b8;
        if (pvVar4 != (void *)0x0) {
          memcpy(*ppvVar40,local_340,(longlong)pvVar4 << 4);
          iVar22 = (int)local_4b0;
          iVar7 = (int)local_4b8;
        }
      }
    }
    pvVar4 = local_320;
    ppvVar40 = (void **)(lVar10 + *(longlong *)plVar17[3]);
    if (ppvVar40 != &local_328) {
      ppvVar40[1] = local_320;
      if (local_320 == (void *)0x0 && ppvVar40[2] == (void *)0x0) {
        ppvVar40[2] = (void *)0x0;
      }
      else {
        FUN_1483b3588(ppvVar40,local_320);
        iVar22 = (int)local_4b0;
        iVar7 = (int)local_4b8;
        if (pvVar4 != (void *)0x0) {
          memcpy(*ppvVar40,local_328,(longlong)pvVar4 << 4);
          iVar22 = (int)local_4b0;
          iVar7 = (int)local_4b8;
        }
      }
    }
    if (0 < local_44c) {
      lVar10 = 0;
      do {
        LOCK();
        puVar41[0x2b] =
             puVar41[0x2b] +
             (longlong)
             *(int *)(local_3a0[0] +
                     (longlong)
                     ((((int)(lVar10 / (longlong)(int)local_4bc) + iVar22) - local_3d8._4_4_) *
                      (int)local_3c8 +
                     (((int)(lVar10 % (longlong)(int)local_4bc) + iVar7) - (int)local_3d8)) * 4);
        UNLOCK();
        lVar10 = lVar10 + 1;
      } while (local_430 != lVar10);
    }
    piVar12 = (int *)FUN_14001cc68(0x28,0x10);
    iVar22 = *(int *)(puVar41 + 0x99);
    *(undefined8 *)(piVar12 + 4) = local_2f8;
    *(undefined8 *)piVar12 = local_308;
    *(undefined8 *)(piVar12 + 2) = uStack_300;
    piVar12[6] = (int)((longlong)iVar22 + 1);
    uVar9 = FUN_14153c902((longlong)piVar12[5] * (longlong)piVar12[4] * ((longlong)iVar22 + 1) * 4,0
                         );
    *(undefined8 *)(piVar12 + 8) = uVar9;
    local_490 = piVar12;
    if (0 < (int)local_494) {
      local_478 = (undefined8 *)CONCAT44(local_478._4_4_,local_310);
      uVar19 = local_310 * local_310;
      local_418 = (code *)(ulonglong)uVar19;
      local_4a8 = local_100;
      local_480 = local_e8;
      local_458 = puVar41 + 0x72;
      local_438 = local_210;
      local_428 = local_1f8;
      local_470 = puVar41 + 0x1c;
      local_420 = (ulonglong)(uVar19 + (uVar19 == 0));
      local_488 = CONCAT44(local_488._4_4_,(int)local_4b0);
      local_460 = 0;
      uVar32 = local_4b0;
      do {
        if (0 < (int)local_4bc) {
          local_4a0 = CONCAT44(local_4a0._4_4_,(int)local_460 + (int)uVar32);
          uVar19 = 0;
          uVar35 = (ulonglong)local_4b8 & 0xffffffff;
          do {
            pcVar2 = (code *)puVar41[8];
            plVar17 = (longlong *)puVar41[10];
            if ((longlong *)puVar41[10] == (longlong *)0x0) {
              plVar17 = local_3e8;
            }
            uVar9 = (**(code **)(*plVar17 + 8))();
            cVar5 = (*pcVar2)(uVar9);
            piVar12 = local_490;
            if (cVar5 != '\0') {
              if (local_490 != (int *)0x0) {
                FUN_1400020a8(*(undefined8 *)(local_490 + 8));
                FUN_1400020a8(piVar12);
              }
              goto LAB_143b1eda3;
            }
            iVar22 = uVar19 + (int)local_4b8;
            local_2e0 = (undefined8 *)CONCAT44((int)local_4a0,iVar22);
            uVar32 = local_4b0;
            if (*(int *)(local_3a0[0] +
                        (longlong)
                        (((int)local_4a0 - local_3d8._4_4_) * (int)local_3c8 +
                        (iVar22 - (int)local_3d8)) * 4) != 0 && (int)local_478 != 0) {
              lVar10 = (longlong)
                       (((int)local_3c8 * ((int)local_488 - local_3d8._4_4_) + (int)uVar35) -
                       (int)local_3d8) * (longlong)local_418;
              iVar22 = 0;
              uVar37 = local_420;
              do {
                if (*(char *)(local_3b8[0] + lVar10) == '\x01') {
                  lVar36 = (longlong)*(int *)(puVar41 + 0x92);
                  dVar43 = (double)*(int *)(puVar41 + 0x92);
                  lVar34 = local_2e0._4_4_ * lVar36 + (longlong)(int)local_2e0;
                  dVar45 = 1.0 / (double)*(int *)((longlong)puVar41 + 0x494);
                  dVar44 = 1.0 / dVar43;
                  local_2d0 = (undefined8 **)
                              ((((double)(iVar22 / local_310) + 0.5) / (double)local_310) * dVar45 +
                              (((double)(int)(lVar34 / lVar36) + 0.5) /
                               (double)*(int *)((longlong)puVar41 + 0x494) - dVar45 * 0.5));
                  local_2d8 = (code *)((((double)(iVar22 % local_310) + 0.5) / (double)local_310) *
                                       dVar44 + (((double)(int)(lVar34 % lVar36) + 0.5) / dVar43 -
                                                dVar44 * 0.5));
                  local_2e8 = (double)*(float *)(local_388[0] + 4 + lVar10 * 8);
                  local_2f0 = (double)*(float *)(local_388[0] + lVar10 * 8);
                  local_198 = (undefined8 *)0xffffffffffffffff;
                  puStack_190 = (undefined8 *)0xffffffffffffffff;
                  local_178 = DAT_14c8464f0;
                  local_188 = DAT_14c8464e0;
                  pdStack_180 = DAT_14c8464e8;
                  local_160 = DAT_14c8464f0;
                  local_170 = DAT_14c8464e0;
                  pdStack_168 = DAT_14c8464e8;
                  local_148 = DAT_14c8464f0;
                  local_158 = DAT_14c8464e0;
                  pdStack_150 = DAT_14c8464e8;
                  local_140 = 0xffffffffffffffff;
                  local_138 = 0xffffffff;
                  local_110 = 0;
                  uStack_108 = 0;
                  local_120 = 0;
                  uStack_118 = 0;
                  local_130 = 0;
                  uStack_128 = 0;
                  local_4a8[2] = (double)DAT_14c8464f0;
                  *local_4a8 = (double)DAT_14c8464e0;
                  local_4a8[1] = (double)DAT_14c8464e8;
                  local_480[2] = (longlong)DAT_14c8464f0;
                  *local_480 = (longlong)DAT_14c8464e0;
                  local_480[1] = (longlong)DAT_14c8464e8;
                  cVar5 = FUN_1483826b6(local_458,*(undefined4 *)(local_370[0] + lVar10 * 4),
                                        &local_2f0,&local_198);
                  uVar32 = local_4b0;
                  if (cVar5 != '\0') {
                    local_2a8 = -NAN;
                    uStack_2a0 = 0xffffffffffffffff;
                    local_288 = DAT_14c8464f0;
                    local_298 = DAT_14c8464e0;
                    pdStack_290 = DAT_14c8464e8;
                    local_270 = DAT_14c8464f0;
                    local_280 = DAT_14c8464e0;
                    pdStack_278 = DAT_14c8464e8;
                    local_258 = DAT_14c8464f0;
                    local_268 = DAT_14c8464e0;
                    pdStack_260 = DAT_14c8464e8;
                    local_250 = 0xffffffffffffffff;
                    local_248 = 0xffffffff;
                    local_220 = 0;
                    uStack_218 = 0;
                    local_230 = 0;
                    uStack_228 = 0;
                    local_240 = 0;
                    uStack_238 = 0;
                    local_438[2] = DAT_14c8464f0;
                    *local_438 = DAT_14c8464e0;
                    local_438[1] = DAT_14c8464e8;
                    local_428[2] = DAT_14c8464f0;
                    *local_428 = DAT_14c8464e0;
                    local_428[1] = DAT_14c8464e8;
                    local_1d0 = DAT_14c8464f0;
                    local_1e0 = DAT_14c8464e0;
                    uStack_1d8 = DAT_14c8464e8;
                    local_1c8 = 0;
                    local_1c0[0] = 0xffffffff;
                    local_1a8 = DAT_14c8464f0;
                    local_1b8 = DAT_14c8464e0;
                    pdStack_1b0 = DAT_14c8464e8;
                    puVar41 = (undefined8 *)local_448[7];
                    lVar34 = puVar41[3];
                    FUN_1483b2fbe(puVar41[1],(ulonglong)local_198 & 0xffffffff,local_4a8);
                    dVar43 = SQRT((double)local_1d0 * (double)local_1d0 +
                                  (double)local_1e0 * (double)local_1e0 +
                                  (double)uStack_1d8 * (double)uStack_1d8);
                    dVar44 = 1.0 / dVar43;
                    if (0.0 < dVar43) {
                      local_1e0 = (undefined8 *)((double)local_1e0 * dVar44);
                      uStack_1d8 = (double *)((double)uStack_1d8 * dVar44);
                    }
                    else {
                      local_1e0 = (undefined8 *)0x0;
                      uStack_1d8 = (double *)0x0;
                    }
                    local_1d0 = (double **)
                                (-(ulonglong)(0.0 < dVar43) &
                                (ulonglong)((double)local_1d0 * dVar44));
                    memcpy(&local_2a8,&local_198,200);
                    local_1c8 = 0;
                    local_1c0[0] = 0xffffffff;
                    iVar7 = *(int *)(puVar41 + 2);
                    if (iVar7 == 3) {
                      cVar5 = (**(code **)(**(longlong **)(lVar34 + 0x38) + 0x40))();
                      if (cVar5 == '\0') {
                        iVar7 = *(int *)(puVar41 + 2);
                        goto LAB_143b1e9cf;
                      }
                      local_1c8 = *puVar41;
                      local_1c0[0] = local_198._0_4_;
                      local_1a8 = (double **)local_4a8[2];
                      local_1b8 = (undefined8 *)*local_4a8;
                      pdStack_1b0 = (double *)local_4a8[1];
                    }
                    else {
LAB_143b1e9cf:
                      if (iVar7 == 1) {
                        cVar5 = (**(code **)(**(longlong **)(lVar34 + 0x38) + 0x48))();
                        if (cVar5 != '\0') {
                          local_1c8 = FUN_14837f3d4(*(undefined8 *)(lVar34 + 0x38),local_480,
                                                    local_1c0,&local_1b8);
                          goto LAB_143b1eab8;
                        }
                        iVar7 = *(int *)(puVar41 + 2);
                      }
                      if (iVar7 == 4) {
                        cVar5 = (**(code **)(**(longlong **)(lVar34 + 0x38) + 0x58))();
                        if (cVar5 != '\0') {
                          local_1c8 = (**(code **)(**(longlong **)(lVar34 + 0x38) + 0x60))
                                                (*(longlong **)(lVar34 + 0x38),&local_198,&local_2a8
                                                );
                          goto LAB_143b1eab8;
                        }
                        iVar7 = *(int *)(puVar41 + 2);
                      }
                      local_4d0 = *(undefined8 **)(lVar34 + 0x28);
                      local_2b8 = (ulonglong)local_1d0;
                      local_2c8 = (double)local_1e0;
                      uStack_2c0 = (undefined4)uStack_1d8;
                      uStack_2bc = uStack_1d8._4_4_;
                      local_4c8 = (double *)CONCAT71(local_4c8._1_7_,iVar7 == 2);
                      local_4d8 = &local_1b8;
                      local_1c8 = FUN_14837ee87(*(undefined8 *)(lVar34 + 0x38),local_480,&local_2c8,
                                                local_1c0);
                    }
LAB_143b1eab8:
                    cVar5 = (**(code **)(**(longlong **)(lVar34 + 0x38) + 0x68))
                                      (*(longlong **)(lVar34 + 0x38),&local_2a8);
                    puVar41 = local_440;
                    uVar6 = 0;
                    if (cVar5 != '\0') {
                      local_468 = (code *)CONCAT71(local_468._1_7_,cVar5);
                      local_4d0 = &local_3e0;
                      local_4d8 = (undefined8 **)&local_2e0;
                      FUN_14838018e(local_440,local_490,&local_2a8,&local_2d8);
                      uVar6 = local_468._0_1_;
                    }
                    local_2c8 = (double)CONCAT71(local_2c8._1_7_,uVar6);
                    local_468 = (code *)puVar41[0x18];
                    plVar17 = (longlong *)puVar41[0x1a];
                    if ((longlong *)puVar41[0x1a] == (longlong *)0x0) {
                      plVar17 = local_470;
                    }
                    uVar9 = (**(code **)(*plVar17 + 8))();
                    local_4d8 = (undefined8 **)&local_2e0;
                    (*local_468)(uVar9,&local_2c8,&local_2a8,&local_2d8);
                    uVar32 = local_4b0;
                  }
                }
                iVar22 = iVar22 + 1;
                lVar10 = lVar10 + 1;
                uVar37 = uVar37 - 1;
              } while (uVar37 != 0);
            }
            uVar19 = uVar19 + 1;
            uVar35 = (ulonglong)((int)uVar35 + 1);
          } while (uVar19 != local_4bc);
        }
        uVar19 = (int)local_460 + 1;
        local_460 = (ulonglong)uVar19;
        local_488 = CONCAT44(local_488._4_4_,(int)local_488 + 1);
      } while (uVar19 != local_494);
      local_4a0 = puVar41[0x9e];
      local_480 = (longlong *)local_448[5];
      lVar10 = *local_480;
      local_4a8 = (double *)(lVar10 + 0x60);
      local_488 = (ulonglong)local_4b8 & 0xffffffff;
      local_4b0 = uVar32 & 0xffffffff;
      local_458 = (undefined8 *)(ulonglong)local_494;
      local_478 = (undefined8 *)(ulonglong)local_4bc;
      local_4b8 = (undefined8 *)0x0;
      do {
        if (0 < (int)local_4bc) {
          puVar41 = (undefined8 *)0x0;
          uVar32 = local_488;
          do {
            pcVar2 = *(code **)(lVar10 + 0x40);
            pdVar18 = *(double **)(lVar10 + 0x50);
            if (*(double **)(lVar10 + 0x50) == (double *)0x0) {
              pdVar18 = local_4a8;
            }
            uVar9 = (**(code **)((longlong)*pdVar18 + 8))();
            cVar5 = (*pcVar2)(uVar9);
            if (cVar5 != '\0') goto LAB_143b1ed54;
            if ((longlong)*(int *)(local_4a0 + 0x18) != 0) {
              iVar22 = *(int *)(lVar10 + 0x490);
              lVar34 = *(longlong *)(local_480[1] + 0x20);
              iVar7 = *(int *)(local_480[1] + 0x18);
              lVar36 = *(longlong *)(local_490 + 8);
              iVar28 = local_490[6];
              iVar14 = local_490[1];
              iVar20 = local_490[4];
              piVar13 = *(int **)(local_4a0 + 0x10);
              iVar21 = *local_490;
              piVar12 = piVar13 + *(int *)(local_4a0 + 0x18);
              do {
                lVar11 = *(longlong *)(lVar10 + 0x4e0);
                lVar23 = (longlong)*piVar13 * 0x40;
                lVar30 = (longlong)*(int *)(lVar11 + 0x38 + lVar23);
                if (0 < lVar30) {
                  iVar27 = *(int *)(*(longlong *)(lVar10 + 0x520) + (longlong)*piVar13 * 4);
                  lVar26 = 0;
                  do {
                    lVar38 = (longlong)*(int *)(*(longlong *)(lVar11 + lVar23 + 0x30) + lVar26 * 4);
                    if (0 < lVar38) {
                      lVar24 = (longlong)
                               *(int *)(lVar26 * 4 + *(longlong *)(lVar10 + 0x530) +
                                       (longlong)iVar27 * 4);
                      lVar25 = 0;
                      do {
                        *(undefined4 *)
                         (lVar34 + ((longlong)iVar22 * local_4b0 + uVar32) * (longlong)iVar7 * 4 + 4
                          + lVar24 * 4 + lVar25 * 4) =
                             *(undefined4 *)
                              (lVar36 + (longlong)
                                        ((((int)local_4b0 - iVar14) * iVar20 + (int)uVar32) - iVar21
                                        ) * (longlong)iVar28 * 4 + 4 + lVar24 * 4 + lVar25 * 4);
                        lVar25 = lVar25 + 1;
                      } while (lVar38 != lVar25);
                    }
                    lVar26 = lVar26 + 1;
                  } while (lVar26 != lVar30);
                }
                piVar13 = piVar13 + 1;
              } while (piVar13 != piVar12);
            }
            puVar41 = (undefined8 *)((longlong)puVar41 + 1);
            uVar32 = uVar32 + 1;
          } while (puVar41 != local_478);
        }
        local_4b8 = (undefined8 *)((longlong)local_4b8 + 1);
        local_4b0 = local_4b0 + 1;
      } while (local_4b8 != local_458);
    }
LAB_143b1ed54:
    *(int **)(*(longlong *)(local_448[4] + 8) + local_408 * 0x40) = local_490;
    FUN_143b14f22(local_448[6],local_448[4]);
LAB_143b1eda3:
    FUN_1483b29b4(&local_3e0);
  }
  if ((local_d0 ^ (ulonglong)auStack_4f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b1edb6 FUN_143b1edb6 body=1367 status=ok
// SIG undefined FUN_143b1edb6(void)

void FUN_143b1edb6(undefined8 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  ulonglong local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  double local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  undefined1 local_170 [120];
  double local_f8;
  double local_f0;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  piVar7 = (int *)*param_1;
  iVar19 = piVar7[6];
  if (0 < iVar19) {
    lVar21 = (longlong)*param_2;
    iVar12 = piVar7[0x34];
    uVar15 = 0;
    local_1e8 = lVar21;
    do {
      iVar4 = *piVar7;
      lVar20 = (longlong)iVar4;
      lVar13 = (piVar7[3] + lVar21) * lVar20 + (longlong)(int)uVar15 + (longlong)piVar7[2];
      if (iVar12 == 0) {
        iVar12 = 0;
      }
      else {
        lVar21 = (longlong)(iVar19 * (int)lVar21 + (int)uVar15);
        iVar19 = piVar7[1];
        uVar17 = (ulonglong)(uint)(iVar12 * iVar12);
        uVar16 = 0;
        local_1e0 = uVar15;
        do {
          uVar15 = (ulonglong)(uint)((int)uVar16 >> 0x1f) << 0x20 | uVar16 & 0xffffffff;
          dVar3 = *(double *)param_1[6];
          dVar22 = ((double *)param_1[6])[1];
          uStack_190 = (((double)(int)((longlong)uVar15 / (longlong)iVar12) + 0.5) / (double)iVar12)
                       * dVar22 +
                       (((double)(int)(lVar13 / lVar20) + 0.5) / (double)iVar19 - dVar22 * 0.5);
          local_198 = (((double)(int)(lVar13 % lVar20) + 0.5) / (double)iVar4 - dVar3 * 0.5) +
                      (((double)(int)((longlong)uVar15 % (longlong)iVar12) + 0.5) / (double)iVar12)
                      * dVar3;
          local_188 = 0;
          local_180 = local_198;
          local_178 = uStack_190;
          uVar11 = (**(code **)(*(longlong *)param_1[3] + 0x20))
                             ((longlong *)param_1[3],&local_198,&local_1a0,param_1[5]);
          if (-1 < (int)uVar11) {
            lVar18 = uVar17 * lVar21;
            lVar14 = lVar18 + uVar16;
            lVar8 = *(longlong *)(param_1[1] + 0x10);
            lVar9 = *(longlong *)(*(longlong *)(param_1[1] + 0x130) + (ulonglong)(uVar11 >> 9) * 8);
            uVar15 = (ulonglong)(uVar11 & 0x1ff);
            uVar5 = *(uint *)(lVar9 + uVar15 * 0xc);
            uVar6 = *(uint *)(lVar9 + 4 + uVar15 * 0xc);
            puVar1 = (undefined4 *)
                     (*(longlong *)(lVar8 + (ulonglong)(uVar5 >> 9) * 8) +
                     ((ulonglong)uVar5 & 0x1ff) * 0x18);
            local_e0 = *puVar1;
            uStack_dc = puVar1[1];
            uStack_d8 = puVar1[2];
            uStack_d4 = puVar1[3];
            puVar1 = (undefined4 *)
                     (*(longlong *)(lVar8 + (ulonglong)(uVar6 >> 9) * 8) +
                     ((ulonglong)uVar6 & 0x1ff) * 0x18);
            local_d0 = *puVar1;
            uStack_cc = puVar1[1];
            uStack_c8 = puVar1[2];
            uStack_c4 = puVar1[3];
            uVar5 = *(uint *)(lVar9 + 8 + uVar15 * 0xc);
            puVar1 = (undefined4 *)
                     (*(longlong *)(lVar8 + (ulonglong)(uVar5 >> 9) * 8) +
                     ((ulonglong)uVar5 & 0x1ff) * 0x18);
            local_c0 = *puVar1;
            uStack_bc = puVar1[1];
            uStack_b8 = puVar1[2];
            uStack_b4 = puVar1[3];
            iVar12 = FUN_146bc96d4(*(longlong *)param_1[2] + 0x170,uVar11);
            local_1f8 = 0;
            cVar10 = FUN_1483b2d80(&local_e0,&local_d0,&local_c0,&local_180);
            if (cVar10 == '\0') {
              local_1f0 = lVar21;
              if (local_1a0 < (double)param_1[4] * (double)param_1[4]) {
                local_1b8 = (undefined4)local_198;
                uStack_1b4 = local_198._4_4_;
                uStack_1b0 = (undefined4)uStack_190;
                uStack_1ac = uStack_190._4_4_;
                local_1a8 = local_188;
                FUN_146bd7ec2(local_170,param_1[1],uVar11,&local_1b8);
                dVar3 = local_f0 - local_178;
                dVar22 = local_f8 - local_180;
                dVar23 = SQRT(dVar22 * dVar22 + dVar3 * dVar3);
                if (0.0 < dVar23) {
                  dVar3 = dVar3 * (1.0 / dVar23) * 9.999999974752427e-06;
                }
                else {
                  dVar3 = 0.0;
                }
                *(undefined1 *)(uVar16 + lVar18 + *(longlong *)(piVar7 + 10)) = 1;
                lVar21 = *(longlong *)(piVar7 + 0x16);
                *(float *)(lVar21 + lVar14 * 8) =
                     (float)(local_f8 +
                            (double)(-(ulonglong)(0.0 < dVar23) &
                                    (ulonglong)(dVar22 * (1.0 / dVar23) * 9.999999974752427e-06)));
                *(float *)(lVar21 + 4 + lVar14 * 8) = (float)(local_f0 + dVar3);
                *(int *)(*(longlong *)(piVar7 + 0x1c) + lVar14 * 4) = iVar12;
                lVar14 = *(longlong *)(piVar7 + 0x10);
                lVar21 = local_1f0;
                goto LAB_143b1f0c5;
              }
              *(undefined1 *)(uVar16 + lVar18 + *(longlong *)(piVar7 + 10)) = 3;
              local_1d8 = (undefined4)local_198;
              uStack_1d4 = local_198._4_4_;
              uStack_1d0 = (undefined4)uStack_190;
              uStack_1cc = uStack_190._4_4_;
              local_1c8 = local_188;
              FUN_146bd7ec2(local_170,param_1[1],uVar11,&local_1d8);
              lVar21 = *(longlong *)(piVar7 + 0x16);
              *(float *)(lVar21 + lVar14 * 8) = (float)local_f8;
              *(float *)(lVar21 + 4 + lVar14 * 8) = (float)local_f0;
              *(int *)(*(longlong *)(piVar7 + 0x1c) + lVar14 * 4) = iVar12;
              lVar21 = local_1f0;
            }
            else {
              *(undefined1 *)(uVar16 + lVar18 + *(longlong *)(piVar7 + 10)) = 1;
              lVar8 = *(longlong *)(piVar7 + 0x16);
              *(float *)(lVar8 + lVar14 * 8) = (float)local_180;
              *(float *)(lVar8 + 4 + lVar14 * 8) = (float)local_178;
              *(int *)(*(longlong *)(piVar7 + 0x1c) + lVar14 * 4) = iVar12;
              lVar14 = *(longlong *)(piVar7 + 0x10);
LAB_143b1f0c5:
              piVar2 = (int *)(lVar14 + lVar21 * 4);
              *piVar2 = *piVar2 + 1;
            }
            if ((iVar12 < *(int *)(param_1 + 8)) &&
               (*(int *)(*(longlong *)(piVar7 + 0x22) + lVar21 * 4) == -1)) {
              *(undefined4 *)(*(longlong *)(piVar7 + 0x22) + lVar21 * 4) =
                   *(undefined4 *)(*(longlong *)param_1[7] + (longlong)iVar12 * 4);
            }
          }
          uVar16 = uVar16 + 1;
          iVar12 = piVar7[0x34];
          uVar17 = (ulonglong)(uint)(iVar12 * iVar12);
        } while (uVar16 < uVar17);
        iVar19 = piVar7[6];
        uVar15 = local_1e0;
        lVar21 = local_1e8;
      }
      uVar11 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar11;
    } while ((int)uVar11 < iVar19);
  }
  if ((local_b0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b1f30e FUN_143b1f30e body=951 status=ok
// SIG undefined FUN_143b1f30e(void)

void FUN_143b1f30e(longlong *param_1,int *param_2)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int *piVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 auStack_108 [40];
  ulonglong local_e0;
  int *local_d8;
  int *local_d0;
  longlong *local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong *local_98;
  ulonglong local_90;
  float *local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  puVar4 = (uint *)param_1[1];
  uVar3 = *puVar4;
  uVar21 = puVar4[1];
  uVar16 = puVar4[2];
  iVar19 = ((int)uVar3 / (int)uVar16 + 1) - (uint)((int)uVar3 % (int)uVar16 == 0);
  iVar8 = *param_2 / iVar19;
  iVar19 = *param_2 % iVar19;
  uVar20 = puVar4[3] * iVar8;
  if ((int)uVar21 <= (int)uVar20) {
    uVar20 = uVar21;
  }
  if ((int)uVar20 < 1) {
    uVar20 = 0;
  }
  uVar9 = (iVar8 + 1) * puVar4[3];
  if ((int)uVar21 <= (int)uVar9) {
    uVar9 = uVar21;
  }
  if ((int)uVar9 < 1) {
    uVar9 = 0;
  }
  local_c8 = param_1;
  if (uVar9 - uVar20 != 0 && (int)uVar20 <= (int)uVar9) {
    uVar21 = (iVar19 + 1) * uVar16;
    if ((int)uVar3 <= (int)uVar21) {
      uVar21 = uVar3;
    }
    if ((int)uVar21 < 1) {
      uVar21 = 0;
    }
    uVar16 = iVar19 * uVar16;
    if ((int)uVar3 <= (int)uVar16) {
      uVar16 = uVar3;
    }
    local_e0 = 0;
    if ((int)uVar16 < 1) {
      uVar16 = 0;
    }
    local_a8 = (ulonglong)uVar16;
    local_c0 = (ulonglong)(uVar21 - uVar16);
    lVar5 = *param_1;
    local_98 = (longlong *)(lVar5 + 0x60);
    local_b8 = (ulonglong)uVar20;
    local_b0 = (ulonglong)(uVar9 - uVar20);
    do {
      if (0 < (int)local_c0) {
        local_a0 = local_e0 + local_b8;
        uVar22 = 0;
        do {
          pcVar6 = *(code **)(lVar5 + 0x40);
          plVar13 = *(longlong **)(lVar5 + 0x50);
          if (*(longlong **)(lVar5 + 0x50) == (longlong *)0x0) {
            plVar13 = local_98;
          }
          uVar10 = (**(code **)(*plVar13 + 8))();
          cVar7 = (*pcVar6)(uVar10);
          if (cVar7 != '\0') goto LAB_143b1f67f;
          lVar18 = *(int *)(lVar5 + 0x490) * local_a0 + local_a8 + uVar22;
          pfVar1 = (float *)(*(longlong *)(local_c8[2] + 0x20) +
                            *(int *)(local_c8[2] + 0x18) * lVar18 * 4);
          fVar2 = *pfVar1;
          puVar11 = *(undefined8 **)(lVar5 + 0x4f0);
          local_90 = uVar22;
          if ((0.0 < fVar2) && ((longlong)*(int *)(puVar11 + 1) != 0)) {
            piVar12 = (int *)*puVar11;
            local_d8 = piVar12 + *(int *)(puVar11 + 1);
            do {
              lVar14 = (longlong)*piVar12 * 0x40;
              uVar22 = (ulonglong)*(int *)(*(longlong *)(lVar5 + 0x4e0) + 0x38 + lVar14);
              local_d0 = piVar12;
              if (0 < (longlong)uVar22) {
                lVar14 = *(longlong *)(lVar5 + 0x4e0) + lVar14;
                iVar19 = *(int *)(*(longlong *)(lVar5 + 0x520) + (longlong)*piVar12 * 4);
                uVar23 = 0;
                do {
                  lVar24 = uVar23 + (longlong)iVar19;
                  local_88 = pfVar1 + (longlong)*(int *)(*(longlong *)(lVar5 + 0x530) + lVar24 * 4)
                                      + 1;
                  lVar15 = (longlong)*(int *)(*(longlong *)(lVar14 + 0x30) + uVar23 * 4);
                  if (0 < lVar15) {
                    lVar17 = 0;
                    do {
                      local_88[lVar17] = local_88[lVar17] * (1.0 / fVar2);
                      lVar17 = lVar17 + 1;
                    } while (lVar15 != lVar17);
                  }
                  (**(code **)(lVar14 + 0x10))
                            (uVar23 & 0xffffffff,&local_88,
                             lVar18 * 0x10 +
                             *(longlong *)
                              (*(longlong *)(*(longlong *)(lVar5 + 0x540) + lVar24 * 8) + 8),
                             *(undefined8 *)(lVar14 + 0x20));
                  uVar23 = uVar23 + 1;
                } while (uVar23 != uVar22);
              }
              piVar12 = local_d0 + 1;
            } while (piVar12 != local_d8);
            puVar11 = *(undefined8 **)(lVar5 + 0x4f0);
          }
          if ((longlong)*(int *)(puVar11 + 3) != 0) {
            piVar12 = (int *)puVar11[2];
            local_d8 = piVar12 + *(int *)(puVar11 + 3);
            do {
              lVar14 = (longlong)*piVar12 * 0x40;
              lVar24 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x4e0) + 0x38 + lVar14);
              local_d0 = piVar12;
              if (0 < lVar24) {
                lVar14 = *(longlong *)(lVar5 + 0x4e0) + lVar14;
                lVar15 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x520) + (longlong)*piVar12 * 4);
                iVar19 = 0;
                do {
                  local_88 = pfVar1 + (longlong)*(int *)(*(longlong *)(lVar5 + 0x530) + lVar15 * 4)
                                      + 1;
                  (**(code **)(lVar14 + 0x10))
                            (iVar19,&local_88,
                             lVar18 * 0x10 +
                             *(longlong *)
                              (*(longlong *)(*(longlong *)(lVar5 + 0x540) + lVar15 * 8) + 8),
                             *(undefined8 *)(lVar14 + 0x20));
                  iVar19 = iVar19 + 1;
                  lVar15 = lVar15 + 1;
                  lVar24 = lVar24 + -1;
                } while (lVar24 != 0);
              }
              piVar12 = local_d0 + 1;
            } while (piVar12 != local_d8);
          }
          uVar22 = local_90 + 1;
        } while (uVar22 != local_c0);
      }
      local_e0 = local_e0 + 1;
    } while (local_e0 != local_b0);
  }
LAB_143b1f67f:
  if ((local_80 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b1f6c6 FUN_143b1f6c6 body=410 status=ok
// SIG undefined FUN_143b1f6c6(void)

void FUN_143b1f6c6(longlong *param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  char cVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  int *piVar18;
  longlong lVar19;
  longlong lVar20;
  
  lVar15 = (longlong)*param_2;
  lVar5 = *param_1;
  pcVar6 = *(code **)(lVar5 + 0x40);
  plVar13 = (longlong *)(lVar5 + 0x60);
  if (*(longlong **)(lVar5 + 0x50) != (longlong *)0x0) {
    plVar13 = *(longlong **)(lVar5 + 0x50);
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  cVar11 = (*pcVar6)(uVar12);
  if (cVar11 == '\0') {
    lVar7 = *(longlong *)(*(longlong *)param_1[3] + 8 + lVar15 * 0x18);
    if (0 < lVar7) {
      uVar17 = (ulonglong)*(uint *)param_1[1];
      lVar14 = 0;
      do {
        if (0 < (int)uVar17) {
          lVar8 = *(longlong *)(*(longlong *)param_1[3] + lVar15 * 0x18);
          lVar16 = *(longlong *)(lVar8 + lVar14 * 0x10);
          lVar8 = *(longlong *)(lVar8 + 8 + lVar14 * 0x10);
          lVar19 = 0;
          do {
            lVar20 = *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x540) + lVar19 * 8) + 8);
            puVar1 = (undefined8 *)(lVar20 + lVar8 * 0x10);
            uVar12 = puVar1[1];
            puVar2 = (undefined8 *)(lVar20 + lVar16 * 0x10);
            *puVar2 = *puVar1;
            puVar2[1] = uVar12;
            lVar19 = lVar19 + 1;
            uVar17 = (ulonglong)*(int *)param_1[1];
          } while (lVar19 < (longlong)uVar17);
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 != lVar7);
    }
    lVar14 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x4f0) + 0x18);
    if (lVar14 != 0) {
      lVar8 = *(longlong *)(*(longlong *)param_1[2] + 8 + lVar15 * 0x18);
      piVar18 = *(int **)(*(longlong *)(lVar5 + 0x4f0) + 0x10);
      piVar3 = piVar18 + lVar14;
      do {
        lVar14 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x4e0) + 0x38 + (longlong)*piVar18 * 0x40)
        ;
        if (0 < lVar14) {
          iVar4 = *(int *)(*(longlong *)(lVar5 + 0x520) + (longlong)*piVar18 * 4);
          lVar16 = 0;
          do {
            if (0 < lVar8) {
              lVar20 = 8;
              lVar19 = lVar8;
              do {
                lVar9 = *(longlong *)(*(longlong *)param_1[2] + lVar15 * 0x18);
                lVar10 = *(longlong *)
                          (*(longlong *)
                            (*(longlong *)(lVar5 + 0x540) + lVar16 * 8 + (longlong)iVar4 * 8) + 8);
                puVar1 = (undefined8 *)(lVar10 + *(longlong *)(lVar9 + lVar20) * 0x10);
                uVar12 = puVar1[1];
                puVar2 = (undefined8 *)(lVar10 + *(longlong *)(lVar9 + -8 + lVar20) * 0x10);
                *puVar2 = *puVar1;
                puVar2[1] = uVar12;
                lVar20 = lVar20 + 0x10;
                lVar19 = lVar19 + -1;
              } while (lVar19 != 0);
            }
            lVar16 = lVar16 + 1;
          } while (lVar16 != lVar14);
        }
        piVar18 = piVar18 + 1;
      } while (piVar18 != piVar3);
    }
    LOCK();
    *(longlong *)(lVar5 + 0x160) = *(longlong *)(lVar5 + 0x160) + lVar7;
    UNLOCK();
  }
  return;
}



// FUNCTION 143b1f8a0 FUN_143b1f8a0 body=29 status=ok
// SIG undefined FUN_143b1f8a0(void)

undefined8 FUN_143b1f8a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b1f8be FUN_143b1f8be body=174 status=ok
// SIG undefined FUN_143b1f8be(void)

void FUN_143b1f8be(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  longlong local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_2;
  lVar3 = *param_1;
  local_48 = uVar2;
  lVar5 = (**(code **)(**(longlong **)(lVar3 + 8) + 0x38))(*(longlong **)(lVar3 + 8),uVar2);
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0xc);
    cVar4 = (**(code **)(**(longlong **)(lVar3 + 8) + 200))
                      (*(longlong **)(lVar3 + 8),uVar2,*(undefined4 *)(lVar5 + 8));
    if (cVar4 != '\0') {
      if (iVar1 == 0) {
        cVar4 = (**(code **)(**(longlong **)(lVar3 + 8) + 0xd0))(*(longlong **)(lVar3 + 8),uVar2);
        if (cVar4 == '\0') goto LAB_143b1f928;
      }
      local_40 = &local_48;
      local_38 = lVar5;
      FUN_1483b37d8(lVar3 + 0x10,local_2c);
      *(undefined1 *)(lVar3 + 0x60) = 1;
    }
  }
LAB_143b1f928:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b1f96e FUN_143b1f96e body=174 status=ok
// SIG undefined FUN_143b1f96e(void)

void FUN_143b1f96e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  longlong local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_2;
  lVar3 = *param_1;
  local_48 = uVar2;
  lVar5 = (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x38))(*(longlong **)(lVar3 + 0x10),uVar2);
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0xc);
    cVar4 = (**(code **)(**(longlong **)(lVar3 + 0x10) + 200))
                      (*(longlong **)(lVar3 + 0x10),uVar2,*(undefined4 *)(lVar5 + 8));
    if (cVar4 != '\0') {
      if (iVar1 == 0) {
        cVar4 = (**(code **)(**(longlong **)(lVar3 + 0x10) + 0xd0))
                          (*(longlong **)(lVar3 + 0x10),uVar2);
        if (cVar4 == '\0') goto LAB_143b1f9d8;
      }
      local_40 = &local_48;
      local_38 = lVar5;
      FUN_1483b37d8(lVar3 + 0x18,local_2c);
      *(undefined1 *)(lVar3 + 0x68) = 1;
    }
  }
LAB_143b1f9d8:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b1fa1e FUN_143b1fa1e body=65 status=ok
// SIG undefined FUN_143b1fa1e(void)

void FUN_143b1fa1e(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b1fa60 FUN_143b1fa60 body=65 status=ok
// SIG undefined FUN_143b1fa60(void)

void FUN_143b1fa60(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b1faa2 FUN_143b1faa2 body=302 status=ok
// SIG undefined FUN_143b1faa2(void)

void FUN_143b1faa2(longlong *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_58 [40];
  undefined1 local_30 [4];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_2;
  lVar2 = ((undefined8 *)*param_1)[1];
  if (lVar2 == 0) {
    local_2c = FUN_146bc96d4(*(undefined8 *)*param_1,uVar1);
  }
  else {
    local_2c = *(uint *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)(uVar1 >> 9) * 8) +
                        (ulonglong)(uVar1 & 0x1ff) * 4);
  }
  if (-1 < (int)local_2c) {
    plVar3 = (longlong *)param_1[1];
    if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
      plVar4 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar4 = (longlong *)plVar3[8];
      }
      iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)plVar3[9] + 0x7fffffffU & local_2c) * 4);
      if (iVar5 != -1) {
        do {
          if (*(uint *)(*plVar3 + (longlong)iVar5 * 0xc) == local_2c) goto LAB_143b1fba1;
          iVar5 = *(int *)(*plVar3 + (longlong)iVar5 * 0xc + 4);
        } while (iVar5 != -1);
      }
    }
    FUN_1447cbafe(plVar3,local_30,&local_2c,0);
    plVar3 = (longlong *)param_1[2];
    iVar5 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar5 + 1U) {
      FUN_1446f48e2(plVar3,iVar5);
    }
    *(uint *)(*plVar3 + (longlong)iVar5 * 4) = local_2c;
    plVar3 = (longlong *)param_1[3];
    iVar5 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar5 + 1U) {
      FUN_1446f48e2(plVar3,iVar5);
    }
    *(uint *)(*plVar3 + (longlong)iVar5 * 4) = uVar1;
  }
LAB_143b1fba1:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b1fbd2 FUN_143b1fbd2 body=302 status=ok
// SIG undefined FUN_143b1fbd2(void)

void FUN_143b1fbd2(longlong *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_58 [40];
  undefined1 local_30 [4];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_2;
  lVar2 = ((undefined8 *)*param_1)[1];
  if (lVar2 == 0) {
    local_2c = FUN_146bc96d4(*(undefined8 *)*param_1,uVar1);
  }
  else {
    local_2c = *(uint *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)(uVar1 >> 9) * 8) +
                        (ulonglong)(uVar1 & 0x1ff) * 4);
  }
  if (-1 < (int)local_2c) {
    plVar3 = (longlong *)param_1[1];
    if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
      plVar4 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar4 = (longlong *)plVar3[8];
      }
      iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)plVar3[9] + 0x7fffffffU & local_2c) * 4);
      if (iVar5 != -1) {
        do {
          if (*(uint *)(*plVar3 + (longlong)iVar5 * 0xc) == local_2c) goto LAB_143b1fcd1;
          iVar5 = *(int *)(*plVar3 + (longlong)iVar5 * 0xc + 4);
        } while (iVar5 != -1);
      }
    }
    FUN_1447cbafe(plVar3,local_30,&local_2c,0);
    plVar3 = (longlong *)param_1[2];
    iVar5 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar5 + 1U) {
      FUN_1446f48e2(plVar3,iVar5);
    }
    *(uint *)(*plVar3 + (longlong)iVar5 * 4) = local_2c;
    plVar3 = (longlong *)param_1[3];
    iVar5 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar5 + 1U) {
      FUN_1446f48e2(plVar3,iVar5);
    }
    *(uint *)(*plVar3 + (longlong)iVar5 * 4) = uVar1;
  }
LAB_143b1fcd1:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b1fd02 FUN_143b1fd02 body=70 status=ok
// SIG undefined FUN_143b1fd02(void)

bool FUN_143b1fd02(longlong *param_1,undefined8 param_2,uint *param_3)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = ((undefined8 *)*param_1)[1];
  if (lVar1 == 0) {
    iVar2 = FUN_146bc96d4(*(undefined8 *)*param_1);
  }
  else {
    iVar2 = *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x20) + (ulonglong)(*param_3 >> 9) * 8) +
                    (ulonglong)(*param_3 & 0x1ff) * 4);
  }
  return iVar2 == *(int *)param_1[1];
}



// FUNCTION 143b1fd48 FUN_143b1fd48 body=65 status=ok
// SIG undefined FUN_143b1fd48(void)

void FUN_143b1fd48(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b1fd8a FUN_143b1fd8a body=114 status=ok
// SIG undefined FUN_143b1fd8a(void)

void FUN_143b1fd8a(longlong *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar1 = *param_2;
  if (((-1 < (int)uVar1) &&
      (lVar3 = *param_1, (int)uVar1 < *(int *)(lVar3 + 0x1d0) * 0x200 + *(int *)(lVar3 + 0x1d4))) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x1d8) + (ulonglong)(uVar1 >> 9) * 8)
                         + (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    plVar4 = (longlong *)param_1[1];
    iVar2 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
      FUN_1446f48e2(plVar4,iVar2);
    }
    *(uint *)(*plVar4 + (longlong)iVar2 * 4) = uVar1;
  }
  return;
}



// FUNCTION 143b1fdfc FUN_143b1fdfc body=105 status=ok
// SIG undefined FUN_143b1fdfc(void)

void FUN_143b1fdfc(longlong *param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar2 = ((undefined8 *)*param_1)[1];
  if (lVar2 == 0) {
    iVar4 = FUN_146bc96d4(*(undefined8 *)*param_1);
  }
  else {
    iVar4 = *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)(*param_2 >> 9) * 8) +
                    (ulonglong)(*param_2 & 0x1ff) * 4);
  }
  if (-1 < iVar4) {
    plVar3 = (longlong *)param_1[1];
    iVar1 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
      FUN_1446f48e2(plVar3,iVar1);
    }
    *(int *)(*plVar3 + (longlong)iVar1 * 4) = iVar4;
  }
  return;
}



// FUNCTION 143b1fe66 FUN_143b1fe66 body=200 status=ok
// SIG undefined FUN_143b1fe66(void)

ulonglong FUN_143b1fe66(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  void *pvVar1;
  int iVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  void **local_40;
  code *local_38;
  undefined8 *local_30;
  void *local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = (void *)0x0;
  uStack_20 = 0;
  local_48 = param_1[1];
  local_30 = &local_48;
  local_38 = FUN_143b1ff30;
  local_40 = &local_28;
  FUN_146c04194(*param_1,*param_3);
  FUN_144958a06(local_28,uStack_20 & 0xffffffff);
  pvVar1 = local_28;
  if ((int)uStack_20 == *(int *)((undefined8 *)param_1[2] + 1)) {
    uVar4 = (undefined7)((ulonglong)&local_28 >> 8);
    if ((int)uStack_20 == 0) {
      uVar3 = CONCAT71(uVar4,1);
    }
    else {
      iVar2 = memcmp(local_28,*(void **)param_1[2],(longlong)(int)uStack_20 << 2);
      uVar3 = CONCAT71(uVar4,iVar2 == 0);
    }
  }
  else {
    uVar3 = 0;
  }
  if (pvVar1 != (void *)0x0) {
    FUN_1400020a8(pvVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b1ff30 FUN_143b1ff30 body=105 status=ok
// SIG undefined FUN_143b1ff30(void)

void FUN_143b1ff30(longlong *param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar2 = ((undefined8 *)*param_1)[1];
  if (lVar2 == 0) {
    iVar4 = FUN_146bc96d4(*(undefined8 *)*param_1);
  }
  else {
    iVar4 = *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)(*param_2 >> 9) * 8) +
                    (ulonglong)(*param_2 & 0x1ff) * 4);
  }
  if (-1 < iVar4) {
    plVar3 = (longlong *)param_1[1];
    iVar1 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
      FUN_1446f48e2(plVar3,iVar1);
    }
    *(int *)(*plVar3 + (longlong)iVar1 * 4) = iVar4;
  }
  return;
}



// FUNCTION 143b1ff9a FUN_143b1ff9a body=70 status=ok
// SIG undefined FUN_143b1ff9a(void)

bool FUN_143b1ff9a(longlong *param_1,undefined8 param_2,uint *param_3)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = ((undefined8 *)*param_1)[1];
  if (lVar1 == 0) {
    iVar2 = FUN_146bc96d4(*(undefined8 *)*param_1);
  }
  else {
    iVar2 = *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x20) + (ulonglong)(*param_3 >> 9) * 8) +
                    (ulonglong)(*param_3 & 0x1ff) * 4);
  }
  return iVar2 == *(int *)param_1[1];
}



// FUNCTION 143b1ffe0 FUN_143b1ffe0 body=70 status=ok
// SIG undefined FUN_143b1ffe0(void)

void FUN_143b1ffe0(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar3 = FUN_1482abca2(*param_1,*param_2);
  if (iVar3 != -1) {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f48e2(plVar2,iVar1);
    }
    *(int *)(*plVar2 + (longlong)iVar1 * 4) = iVar3;
  }
  return;
}



// FUNCTION 143b20026 FUN_143b20026 body=1177 status=ok
// SIG undefined FUN_143b20026(void)

void FUN_143b20026(undefined8 *param_1,uint *param_2)

{
  double *pdVar1;
  double dVar2;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_1a8 [32];
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  undefined1 local_138 [16];
  double local_128;
  double dStack_120;
  uint local_10c;
  undefined1 local_108 [16];
  double local_f8;
  undefined1 local_f0 [16];
  double local_e0;
  undefined1 local_d8 [16];
  double local_c8;
  ulonglong local_c0;
  double dVar3;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_10c = *param_2;
  lVar6 = *(longlong *)(param_1[2] + 0x10);
  lVar7 = *(longlong *)(*(longlong *)(param_1[2] + 0x130) + (ulonglong)(local_10c >> 9) * 8);
  uVar21 = (ulonglong)local_10c & 0x1ff;
  uVar4 = *(uint *)(lVar7 + uVar21 * 0xc);
  uVar5 = *(uint *)(lVar7 + 4 + uVar21 * 0xc);
  lVar8 = *(longlong *)(lVar6 + (ulonglong)(uVar4 >> 9) * 8);
  uVar20 = (ulonglong)uVar4 & 0x1ff;
  pdVar1 = (double *)(lVar8 + uVar20 * 0x18);
  dVar12 = *pdVar1;
  dVar24 = pdVar1[1];
  local_f8 = *(double *)(lVar8 + 0x10 + uVar20 * 0x18);
  lVar8 = *(longlong *)(lVar6 + (ulonglong)(uVar5 >> 9) * 8);
  uVar20 = (ulonglong)uVar5 & 0x1ff;
  pdVar1 = (double *)(lVar8 + uVar20 * 0x18);
  dVar10 = *pdVar1;
  dVar11 = pdVar1[1];
  local_e0 = *(double *)(lVar8 + 0x10 + uVar20 * 0x18);
  uVar4 = *(uint *)(lVar7 + 8 + uVar21 * 0xc);
  lVar6 = *(longlong *)(lVar6 + (ulonglong)(uVar4 >> 9) * 8);
  uVar20 = (ulonglong)uVar4 & 0x1ff;
  pdVar1 = (double *)(lVar6 + uVar20 * 0x18);
  dVar14 = *pdVar1;
  dVar15 = pdVar1[1];
  local_c8 = *(double *)(lVar6 + 0x10 + uVar20 * 0x18);
  pdVar1 = *(double **)*param_1;
  if (pdVar1 != (double *)0x0) {
    dVar26 = pdVar1[8];
    dVar9 = pdVar1[9];
    dVar12 = dVar12 * dVar26;
    dVar24 = dVar24 * dVar9;
    local_168 = pdVar1[10];
    dStack_160 = pdVar1[0xb];
    local_128 = local_f8 * local_168;
    dStack_120 = dStack_160 * 0.0;
    local_138._8_4_ = SUB84(dVar24,0);
    local_138._0_8_ = dVar12;
    local_138._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
    dVar17 = *pdVar1;
    local_178 = pdVar1[1];
    dStack_170 = pdVar1[2];
    dVar28 = dVar24 * dVar17 - dVar12 * local_178;
    dVar16 = local_128 * local_178 - dVar24 * dStack_170;
    dVar22 = dVar12 * dStack_170 - local_128 * dVar17;
    dVar10 = dVar10 * dVar26;
    dVar11 = dVar11 * dVar9;
    local_148 = local_e0 * local_168;
    dStack_140 = dStack_160 * 0.0;
    dVar25 = dVar11 * dVar17 - dVar10 * local_178;
    dVar13 = local_148 * local_178 - dVar11 * dStack_170;
    dVar23 = dVar10 * dStack_170 - local_148 * dVar17;
    dVar24 = dStack_140 * pdVar1[3] - dStack_140 * pdVar1[3];
    dVar13 = dVar13 + dVar13;
    dVar23 = dVar23 + dVar23;
    dVar2 = pdVar1[3];
    dVar3 = pdVar1[3];
    local_158 = dVar2 * dVar13 + dVar10;
    dStack_150 = dVar3 * dVar23 + dVar11;
    dVar14 = dVar14 * dVar26;
    dVar15 = dVar15 * dVar9;
    local_168 = local_c8 * local_168;
    dStack_160 = dStack_160 * 0.0;
    dVar26 = dVar15 * dVar17 - dVar14 * local_178;
    dVar9 = local_168 * local_178 - dVar15 * dStack_170;
    dVar27 = dVar14 * dStack_170 - dVar17 * local_168;
    dVar9 = dVar9 + dVar9;
    dVar27 = dVar27 + dVar27;
    dVar16 = dVar16 + dVar16;
    dVar22 = dVar22 + dVar22;
    dVar28 = dVar28 + dVar28;
    dVar25 = dVar25 + dVar25;
    local_188 = dVar17 * dVar25;
    dStack_180 = local_178 * (dVar24 + dVar24);
    dVar26 = dVar26 + dVar26;
    dVar18 = pdVar1[4];
    dVar19 = pdVar1[5];
    dVar12 = (dVar28 * local_178 - dVar22 * dStack_170) + dVar2 * dVar16 + dVar12 + dVar18;
    dVar24 = (dStack_170 * dVar16 - dVar17 * dVar28) + dVar3 * dVar22 + (double)local_138._8_8_ +
             dVar19;
    dVar10 = (dVar25 * local_178 - dVar23 * dStack_170) + local_158 + dVar18;
    dVar11 = (dStack_170 * dVar13 - local_188) + dStack_150 + dVar19;
    dVar14 = (dVar26 * local_178 - dVar27 * dStack_170) + dVar2 * dVar9 + dVar14 + dVar18;
    dVar15 = (dStack_170 * dVar9 - dVar17 * dVar26) + dVar3 * dVar27 + dVar15 + dVar19;
    local_c8 = pdVar1[6];
    local_f8 = dVar28 * dVar2 + local_128 + (dVar22 * dVar17 - dVar16 * local_178) + local_c8;
    local_e0 = dVar25 * dVar2 + local_148 + (dVar23 * dVar17 - dVar13 * local_178) + local_c8;
    local_c8 = dVar26 * dVar2 + local_168 + (dVar27 * dVar17 - dVar9 * local_178) + local_c8;
  }
  local_108._8_4_ = SUB84(dVar24,0);
  local_108._0_8_ = dVar12;
  local_108._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  local_f0._8_4_ = SUB84(dVar11,0);
  local_f0._0_8_ = dVar10;
  local_f0._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  local_d8._8_4_ = SUB84(dVar15,0);
  local_d8._0_8_ = dVar14;
  local_d8._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  (**(code **)param_1[1])(((undefined8 *)param_1[1])[1]);
  if ((local_c0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b204c0 FUN_143b204c0 body=1064 status=ok
// SIG undefined FUN_143b204c0(void)

void FUN_143b204c0(undefined8 *param_1,uint *param_2)

{
  double *pdVar1;
  double dVar2;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_138 [32];
  double local_118;
  double dStack_110;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  uint local_c4;
  ulonglong local_c0;
  double dVar3;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_c4 = *param_2;
  lVar4 = *(longlong *)(param_1[2] + 0x10);
  uVar11 = *(ulonglong *)
            (*(longlong *)(*(longlong *)(param_1[2] + 0x1c0) + (ulonglong)(local_c4 >> 9) * 8) +
            (ulonglong)((local_c4 & 0x1ff) << 4));
  lVar5 = *(longlong *)(lVar4 + (uVar11 >> 9 & 0x7fffff) * 8);
  pdVar1 = (double *)(lVar5 + (uVar11 & 0x1ff) * 0x18);
  dVar12 = *pdVar1;
  dVar13 = pdVar1[1];
  dVar20 = *(double *)(lVar5 + 0x10 + (uVar11 & 0x1ff) * 0x18);
  lVar4 = *(longlong *)(lVar4 + (uVar11 >> 0x29) * 8);
  uVar11 = uVar11 >> 0x20 & 0x1ff;
  pdVar1 = (double *)(lVar4 + uVar11 * 0x18);
  dVar14 = *pdVar1;
  dVar15 = pdVar1[1];
  dVar21 = *(double *)(lVar4 + 0x10 + uVar11 * 0x18);
  pdVar1 = *(double **)*param_1;
  if (pdVar1 != (double *)0x0) {
    dVar12 = dVar12 * pdVar1[8];
    dVar13 = dVar13 * pdVar1[9];
    dVar20 = dVar20 * pdVar1[10];
    dVar2 = pdVar1[3];
    dVar3 = pdVar1[3];
    dVar8 = *pdVar1;
    dVar9 = pdVar1[1];
    dVar10 = pdVar1[2];
    local_118 = pdVar1[4];
    dStack_110 = pdVar1[5];
    dVar16 = dVar13 * dVar8 - dVar12 * dVar9;
    dVar6 = dVar20 * dVar9 - dVar13 * dVar10;
    dVar7 = dVar12 * dVar10 - dVar20 * dVar8;
    dVar6 = dVar6 + dVar6;
    dVar7 = dVar7 + dVar7;
    dVar16 = dVar16 + dVar16;
    dVar14 = dVar14 * pdVar1[8];
    dVar15 = dVar15 * pdVar1[9];
    dVar21 = dVar21 * pdVar1[10];
    dVar17 = dVar15 * dVar8 - dVar14 * dVar9;
    dVar18 = dVar21 * dVar9 - dVar15 * dVar10;
    dVar19 = dVar14 * dVar10 - dVar8 * dVar21;
    dVar18 = dVar18 + dVar18;
    dVar19 = dVar19 + dVar19;
    dVar17 = dVar17 + dVar17;
    dVar12 = (dVar16 * dVar9 - dVar7 * dVar10) + dVar2 * dVar6 + dVar12 + local_118;
    dVar13 = (dVar10 * dVar6 - dVar8 * dVar16) + dVar3 * dVar7 + dVar13 + dStack_110;
    dVar20 = dVar16 * dVar2 + dVar20 + (dVar7 * dVar8 - dVar6 * dVar9) + pdVar1[6];
    dVar14 = (dVar17 * dVar9 - dVar19 * dVar10) + dVar2 * dVar18 + dVar14 + local_118;
    dVar15 = (dVar10 * dVar18 - dVar8 * dVar17) + dVar3 * dVar19 + dVar15 + dStack_110;
    dVar21 = dVar17 * dVar2 + dVar21 + (dVar19 * dVar8 - dVar18 * dVar9) + pdVar1[6];
  }
  local_f0 = (dVar21 + dVar20) * 0.5;
  local_f8 = (dVar15 + dVar13) * 0.5;
  local_100 = (dVar14 + dVar12) * 0.5;
  dVar21 = dVar21 - dVar20;
  dVar15 = dVar15 - dVar13;
  dVar14 = dVar14 - dVar12;
  dVar20 = SQRT(dVar21 * dVar21 + dVar14 * dVar14 + dVar15 * dVar15);
  local_e8 = 0.0;
  local_e0 = 0.0;
  local_d8 = 0.0;
  local_d0 = 0.0;
  if (0.0 < dVar20) {
    local_d8 = 1.0 / dVar20;
    local_e8 = dVar14 * local_d8;
    local_e0 = dVar15 * local_d8;
    local_d8 = dVar21 * local_d8;
    local_d0 = dVar20 * 0.5;
  }
  (**(code **)param_1[1])(((undefined8 *)param_1[1])[1]);
  if ((local_c0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b208ea FUN_143b208ea body=65 status=ok
// SIG undefined FUN_143b208ea(void)

void FUN_143b208ea(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b2092c FUN_143b2092c body=201 status=ok
// SIG undefined FUN_143b2092c(void)

void FUN_143b2092c(undefined8 *param_1,uint *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  undefined8 local_30;
  undefined4 local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = *param_2;
  FUN_1447cbafe(*param_1,&local_30,&local_24,0);
  lVar1 = *(longlong *)(*(longlong *)(param_1[2] + 0x130) + (ulonglong)(local_24 >> 9) * 8);
  local_30 = *(undefined8 *)(lVar1 + (ulonglong)(local_24 & 0x1ff) * 0xc);
  local_28 = *(undefined4 *)(lVar1 + 8 + (ulonglong)(local_24 & 0x1ff) * 0xc);
  FUN_1447cbafe(param_1[1],local_34,&local_30,0);
  FUN_1447cbafe(param_1[1],local_34,(longlong)&local_30 + 4,0);
  FUN_1447cbafe(param_1[1],local_34,&local_28,0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b209f6 FUN_143b209f6 body=72 status=ok
// SIG undefined FUN_143b209f6(void)

void FUN_143b209f6(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_2;
  FUN_1447cbafe(*param_1,local_10,&local_c,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b20a40 FUN_143b20a40 body=115 status=ok
// SIG undefined FUN_143b20a40(void)

void FUN_143b20a40(undefined8 *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_2;
  local_28 = uVar1 & 0xffffffff;
  FUN_1483b983a(param_1[1] + 8,local_2c,&local_28,0);
  local_28 = CONCAT44(local_28._4_4_,(int)uVar1);
  FUN_144984904(*param_1,local_2c,&local_28,0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b20ab4 FUN_143b20ab4 body=72 status=ok
// SIG undefined FUN_143b20ab4(void)

void FUN_143b20ab4(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_2;
  FUN_1447cbafe(*param_1,local_10,&local_c,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b20afe FUN_143b20afe body=72 status=ok
// SIG undefined FUN_143b20afe(void)

void FUN_143b20afe(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_2;
  FUN_144984904(*param_1,local_10,&local_c,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b20b48 FUN_143b20b48 body=201 status=ok
// SIG undefined FUN_143b20b48(void)

void FUN_143b20b48(undefined8 *param_1,uint *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  undefined8 local_30;
  undefined4 local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = *param_2;
  FUN_1447cbafe(*param_1,&local_30,&local_24,0);
  lVar1 = *(longlong *)(*(longlong *)(param_1[2] + 0x130) + (ulonglong)(local_24 >> 9) * 8);
  local_30 = *(undefined8 *)(lVar1 + (ulonglong)(local_24 & 0x1ff) * 0xc);
  local_28 = *(undefined4 *)(lVar1 + 8 + (ulonglong)(local_24 & 0x1ff) * 0xc);
  FUN_1447cbafe(param_1[1],local_34,&local_30,0);
  FUN_1447cbafe(param_1[1],local_34,(longlong)&local_30 + 4,0);
  FUN_1447cbafe(param_1[1],local_34,&local_28,0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b20c34 FUN_143b20c34 body=542 status=ok
// SIG undefined FUN_143b20c34(void)

void FUN_143b20c34(longlong *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  double *pdVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_108 [40];
  double local_e0 [10];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar1 = *param_2;
  lVar3 = *param_1;
  cVar2 = FUN_14838e214(lVar3,(longlong)iVar1 * 0xb8 + *(longlong *)(lVar3 + 0x80),param_1[1],
                        param_1[2]);
  if (cVar2 == '\0') {
    FUN_145c688c4(*(undefined8 *)(*(longlong *)(lVar3 + 0x70) + (longlong)iVar1 * 8),&local_90,0);
    if (local_90 <= local_78) {
      if (local_88 <= local_70) {
        if (local_80 <= local_68) {
          local_e0[0] = (local_78 + local_90) * 0.5;
          local_e0[1] = (local_70 + local_88) * 0.5;
          local_e0[2] = (local_68 + local_80) * 0.5;
          local_e0[3] = 0.0;
          local_e0[4] = 0.0;
          local_e0[5] = 0.0;
          local_e0[6] = 1.0;
          local_e0[7] = (local_78 - local_90) * 0.5;
          local_e0[8] = (local_70 - local_88) * 0.5;
          local_e0[9] = (local_68 - local_80) * 0.5;
          dVar8 = *(double *)(lVar3 + 8) * 0.5;
          lVar3 = 7;
          do {
            dVar7 = dVar8;
            if (dVar8 <= local_e0[lVar3]) {
              dVar7 = local_e0[lVar3];
            }
            local_e0[lVar3] = dVar7;
            lVar3 = lVar3 + 1;
          } while (lVar3 != 10);
          EnterCriticalSection((LPCRITICAL_SECTION)param_1[2]);
          lVar3 = param_1[1];
          iVar1 = *(int *)(lVar3 + 0x18);
          *(uint *)(lVar3 + 0x18) = iVar1 + 1U;
          if (*(uint *)(lVar3 + 0x1c) < iVar1 + 1U) {
            FUN_1483b9f04((longlong *)(lVar3 + 0x10),iVar1);
          }
          pdVar5 = local_e0;
          pdVar6 = (double *)((longlong)iVar1 * 0x50 + *(longlong *)(lVar3 + 0x10));
          for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
            *pdVar6 = *pdVar5;
            pdVar5 = pdVar5 + 1;
            pdVar6 = pdVar6 + 1;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)param_1[2]);
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



// FUNCTION 143b20e54 FUN_143b20e54 body=372 status=ok
// SIG undefined FUN_143b20e54(void)

void FUN_143b20e54(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_3a8 [32];
  undefined8 local_388;
  undefined1 local_380;
  undefined1 *local_378;
  undefined8 local_370;
  undefined8 local_368 [10];
  undefined1 local_318 [40];
  char local_2f0;
  undefined1 local_2e8 [160];
  undefined1 local_248 [544];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  iVar1 = *param_2;
  lVar2 = *param_1;
  cVar5 = FUN_14838e214(lVar2,(longlong)iVar1 * 0xb8 + *(longlong *)(lVar2 + 0x80),param_1[1],
                        param_1[2]);
  if (cVar5 != '\0') goto LAB_143b20e9d;
  uVar6 = *(undefined8 *)(*(longlong *)(lVar2 + 0x70) + (longlong)iVar1 * 8);
  FUN_1483ba01e(local_318);
  local_370 = *(undefined8 *)param_1[3];
  local_380 = *(undefined1 *)(lVar2 + 0x69);
  local_388 = *(undefined8 *)(lVar2 + 8);
  local_378 = local_318;
  FUN_143b20fc9(uVar6,0,1,0);
  pcVar3 = *(char **)param_1[3];
  if (pcVar3 == (char *)0x0) {
LAB_143b20f4a:
    if (local_2f0 == '\x01') {
      FUN_14838b760(local_368,local_2e8);
      EnterCriticalSection((LPCRITICAL_SECTION)param_1[2]);
      lVar2 = param_1[1];
      iVar1 = *(int *)(lVar2 + 0x18);
      *(uint *)(lVar2 + 0x18) = iVar1 + 1U;
      if (*(uint *)(lVar2 + 0x1c) < iVar1 + 1U) {
        FUN_1483b9f04((longlong *)(lVar2 + 0x10),iVar1);
      }
      puVar9 = local_368;
      puVar10 = (undefined8 *)((longlong)iVar1 * 0x50 + *(longlong *)(lVar2 + 0x10));
      for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)param_1[2]);
    }
  }
  else if (*pcVar3 == '\0') {
    pcVar4 = *(code **)(pcVar3 + 0x70);
    plVar7 = (longlong *)(pcVar3 + 0x90);
    if (*(longlong **)(pcVar3 + 0x80) != (longlong *)0x0) {
      plVar7 = *(longlong **)(pcVar3 + 0x80);
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    cVar5 = (*pcVar4)(uVar6);
    *pcVar3 = cVar5;
    if (cVar5 == '\0') goto LAB_143b20f4a;
  }
  FUN_141082778(local_248);
LAB_143b20e9d:
  if ((local_28 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b20fc9 FUN_143b20fc9 body=1000 status=ok
// SIG undefined FUN_143b20fc9(void)

void FUN_143b20fc9(ulonglong param_1,byte param_2,byte param_3,byte param_4,double param_5,
                  undefined1 param_6,undefined1 *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  ulonglong local_e8;
  void **local_e0;
  undefined1 *local_d8;
  ulonglong *local_d0;
  undefined1 *local_c8;
  ulonglong *local_c0;
  void *local_b8;
  ulonglong uStack_b0;
  undefined8 *local_a8;
  ulonglong *local_a0;
  ulonglong local_98;
  void **local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  if ((byte)(param_2 | param_3 | param_4) == 1) {
    uVar5 = *(uint *)(param_1 + 0x50);
    if ((int)uVar5 < 1) {
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4((ulonglong)uVar5);
      }
    }
    else {
      uStack_b0 = (ulonglong)uVar5;
      FUN_1446f48e2(&local_b8);
      memset(local_b8,0,(ulonglong)uVar5 * 4);
    }
    uVar3 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
    uVar5 = 0;
    if ((uVar3 != 0) &&
       (uVar5 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x28) - 1U))) {
      uVar4 = 1;
      uVar9 = 1;
      if (1 < (int)uVar3) {
        uVar4 = uVar3;
      }
      do {
        uVar5 = uVar4;
        if (uVar4 == uVar9) break;
        uVar10 = uVar9 >> 9;
        uVar11 = uVar9 & 0x1ff;
        uVar5 = uVar9;
        uVar9 = uVar9 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x28))[uVar10] +
                                           (ulonglong)uVar11 * 2) - 1U));
    }
    if (uVar5 != uVar3) {
      lVar6 = 0;
      do {
        *(uint *)((longlong)local_b8 + lVar6 * 4) = uVar5;
        lVar6 = lVar6 + 1;
        uVar4 = uVar5 + 1;
        if ((int)(uVar5 + 1) < (int)uVar3) {
          uVar4 = uVar3;
        }
        do {
          uVar9 = uVar4;
          if (uVar4 - 1 == uVar5) break;
          uVar5 = uVar5 + 1;
          uVar9 = uVar5;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_1 + 0x28) +
                                               (ulonglong)(uVar5 >> 9) * 8) +
                                             (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
        uVar5 = uVar9;
      } while (uVar5 != uVar3);
    }
  }
  param_7[0x28] = 0;
  if (param_3 != 0) {
    local_a8 = (undefined8 *)0x0;
    local_c0 = &local_98;
    local_90 = &local_b8;
    local_c8 = &LAB_143b213b4;
    local_f8 = param_8;
    local_98 = param_1;
    cVar2 = FUN_14826a48c(&local_a8,uStack_b0 & 0xffffffff,&local_c8,param_6);
    if (cVar2 == '\0') {
LAB_143b212d1:
      if (local_a8 != (undefined8 *)0x0) {
LAB_143b212da:
        (*(code *)local_a8[-2])(local_a8 + -2);
      }
    }
    else if (local_a8 != (undefined8 *)0x0) {
      if (*(char *)(local_a8 + 10) == '\x01') {
        param_7[0x28] = 1;
        puVar7 = local_a8;
        puVar8 = (undefined8 *)(param_7 + 0x30);
        for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        lVar6 = 0;
        do {
          dVar12 = param_5 * 0.5;
          if (param_5 * 0.5 <= *(double *)(param_7 + lVar6 * 8 + 0x68)) {
            dVar12 = *(double *)(param_7 + lVar6 * 8 + 0x68);
          }
          *(double *)(param_7 + lVar6 * 8 + 0x68) = dVar12;
          lVar6 = lVar6 + 1;
        } while (lVar6 != 3);
        goto LAB_143b212d1;
      }
      goto LAB_143b212da;
    }
  }
  *param_7 = 0;
  if (param_2 != 0) {
    local_a8 = (undefined8 *)0x0;
    local_d0 = &local_98;
    local_90 = &local_b8;
    local_d8 = &LAB_143b213f2;
    local_98 = param_1;
    cVar2 = FUN_14826a96c(&local_a8,uStack_b0 & 0xffffffff,&local_d8,0);
    if (cVar2 == '\0') {
      if (local_a8 == (undefined8 *)0x0) goto LAB_143b21111;
    }
    else {
      if (local_a8 == (undefined8 *)0x0) goto LAB_143b21111;
      if (*(char *)((longlong)local_a8 + 0x39) == '\x01') {
        *param_7 = 1;
        uVar1 = local_a8[4];
        *(undefined8 *)(param_7 + 8) = local_a8[3];
        *(undefined8 *)(param_7 + 0x10) = uVar1;
        *(undefined8 *)(param_7 + 0x18) = local_a8[5];
        dVar12 = param_5 * 0.5;
        if (param_5 * 0.5 <= (double)local_a8[6]) {
          dVar12 = (double)local_a8[6];
        }
        *(double *)(param_7 + 0x20) = dVar12;
      }
    }
    (*(code *)local_a8[-2])(local_a8 + -2);
  }
LAB_143b21111:
  param_7[0x80] = 0;
  if (param_4 != 0) {
    local_a0 = &local_e8;
    local_e0 = &local_b8;
    local_98 = local_98 & 0xffffffffffffff00;
    local_90 = DAT_14c8464e0;
    uStack_88 = DAT_14c8464e8;
    local_80 = DAT_14c8464f0;
    uStack_78 = DAT_14c8463a0;
    uStack_70 = DAT_14c8463a8;
    uStack_68 = DAT_14c8463b0;
    local_60 = 0;
    uStack_58 = 0;
    local_a8 = (undefined8 *)&LAB_143b21430;
    local_e8 = param_1;
    FUN_14826a2e6(&local_98,uStack_b0 & 0xffffffff);
    *(void ***)(param_7 + 0x88) = local_90;
    *(undefined8 *)(param_7 + 0x90) = uStack_88;
    *(undefined8 *)(param_7 + 0x98) = local_80;
    *(undefined8 *)(param_7 + 0xa0) = uStack_78;
    *(undefined8 *)(param_7 + 0xa8) = uStack_70;
    *(undefined8 *)(param_7 + 0xb0) = uStack_68;
    *(undefined8 *)(param_7 + 0xb8) = local_60;
    *(undefined8 *)(param_7 + 0xc0) = uStack_58;
    param_7[0x80] = (char)local_98;
    if ((char)local_98 == '\x01') {
      dVar12 = param_5 * 0.5;
      if (param_5 * 0.5 <= *(double *)(param_7 + 0xc0)) {
        dVar12 = *(double *)(param_7 + 0xc0);
      }
      *(double *)(param_7 + 0xc0) = dVar12;
    }
  }
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b2146e FUN_143b2146e body=301 status=ok
// SIG undefined FUN_143b2146e(void)

void FUN_143b2146e(longlong *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char cVar6;
  undefined1 auStack_378 [32];
  undefined8 local_358;
  undefined1 local_350;
  char *local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  char local_318 [8];
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined1 local_248 [544];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_378;
  iVar2 = *param_2;
  lVar3 = *param_1;
  cVar6 = FUN_14838e214(lVar3,(longlong)iVar2 * 0xb8 + *(longlong *)(lVar3 + 0x80),param_1[1],
                        param_1[2]);
  if (cVar6 == '\0') {
    uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 0x70) + (longlong)iVar2 * 8);
    FUN_1483ba01e(local_318);
    local_350 = *(undefined1 *)(lVar3 + 0x69);
    local_358 = *(undefined8 *)(lVar3 + 8);
    local_340 = 0;
    local_348 = local_318;
    FUN_143b20fc9(uVar4,1,0,0);
    if (local_318[0] == '\x01') {
      EnterCriticalSection((LPCRITICAL_SECTION)param_1[2]);
      plVar5 = (longlong *)param_1[1];
      local_328 = local_300;
      uStack_324 = uStack_2fc;
      uStack_320 = uStack_2f8;
      uStack_31c = uStack_2f4;
      local_338 = local_310;
      uStack_334 = uStack_30c;
      uStack_330 = uStack_308;
      uStack_32c = uStack_304;
      iVar2 = (int)plVar5[1];
      *(uint *)(plVar5 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar5 + 0xc) < iVar2 + 1U) {
        FUN_1483b9e7e(plVar5,iVar2);
      }
      lVar3 = *plVar5;
      puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
      *puVar1 = local_328;
      puVar1[1] = uStack_324;
      puVar1[2] = uStack_320;
      puVar1[3] = uStack_31c;
      puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
      *puVar1 = local_338;
      puVar1[1] = uStack_334;
      puVar1[2] = uStack_330;
      puVar1[3] = uStack_32c;
      LeaveCriticalSection((LPCRITICAL_SECTION)param_1[2]);
    }
    FUN_141082778(local_248);
  }
  if ((local_28 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b2159c FUN_143b2159c body=368 status=ok
// SIG undefined FUN_143b2159c(void)

void FUN_143b2159c(longlong *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auStack_398 [32];
  undefined8 local_378;
  undefined1 local_370;
  undefined1 *local_368;
  undefined8 local_360;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined1 local_318 [128];
  char local_298;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined1 local_248 [544];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_398;
  iVar2 = *param_2;
  lVar3 = *param_1;
  cVar5 = FUN_14838e214(lVar3,(longlong)iVar2 * 0xb8 + *(longlong *)(lVar3 + 0x80),param_1[1],
                        param_1[2]);
  if (cVar5 == '\0') {
    uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 0x70) + (longlong)iVar2 * 8);
    FUN_1483ba01e(local_318);
    local_370 = *(undefined1 *)(lVar3 + 0x69);
    local_378 = *(undefined8 *)(lVar3 + 8);
    local_360 = 0;
    local_368 = local_318;
    FUN_143b20fc9(uVar4,0,0,1);
    if (local_298 == '\x01') {
      EnterCriticalSection((LPCRITICAL_SECTION)param_1[2]);
      lVar3 = param_1[1];
      local_328 = local_260;
      uStack_324 = uStack_25c;
      uStack_320 = uStack_258;
      uStack_31c = uStack_254;
      local_338 = local_270;
      uStack_334 = uStack_26c;
      uStack_330 = uStack_268;
      uStack_32c = uStack_264;
      local_348 = local_280;
      uStack_344 = uStack_27c;
      uStack_340 = uStack_278;
      uStack_33c = uStack_274;
      local_358 = local_290;
      uStack_354 = uStack_28c;
      uStack_350 = uStack_288;
      uStack_34c = uStack_284;
      iVar2 = *(int *)(lVar3 + 0x28);
      *(uint *)(lVar3 + 0x28) = iVar2 + 1U;
      if (*(uint *)(lVar3 + 0x2c) < iVar2 + 1U) {
        FUN_1483b9f98((longlong *)(lVar3 + 0x20),iVar2);
      }
      lVar3 = *(longlong *)(lVar3 + 0x20);
      lVar6 = (longlong)iVar2 * 0x40;
      puVar1 = (undefined4 *)(lVar3 + 0x30 + lVar6);
      *puVar1 = local_328;
      puVar1[1] = uStack_324;
      puVar1[2] = uStack_320;
      puVar1[3] = uStack_31c;
      puVar1 = (undefined4 *)(lVar3 + 0x20 + lVar6);
      *puVar1 = local_338;
      puVar1[1] = uStack_334;
      puVar1[2] = uStack_330;
      puVar1[3] = uStack_32c;
      puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar6);
      *puVar1 = local_348;
      puVar1[1] = uStack_344;
      puVar1[2] = uStack_340;
      puVar1[3] = uStack_33c;
      puVar1 = (undefined4 *)(lVar3 + lVar6);
      *puVar1 = local_358;
      puVar1[1] = uStack_354;
      puVar1[2] = uStack_350;
      puVar1[3] = uStack_34c;
      LeaveCriticalSection((LPCRITICAL_SECTION)param_1[2]);
    }
    FUN_141082778(local_248);
  }
  if ((local_28 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b2170e FUN_143b2170e body=325 status=ok
// SIG undefined FUN_143b2170e(void)

void FUN_143b2170e(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 auStack_298 [32];
  undefined1 local_278;
  undefined8 local_270;
  longlong local_268;
  undefined8 uStack_260;
  undefined1 local_258;
  undefined4 local_254;
  undefined8 local_250;
  undefined1 local_248 [544];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_298;
  iVar1 = *param_2;
  lVar2 = *param_1;
  cVar4 = FUN_14838e214(lVar2,(longlong)iVar1 * 0xb8 + *(longlong *)(lVar2 + 0x80),param_1[1],
                        param_1[2]);
  if (cVar4 == '\0') {
    uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x70) + (longlong)iVar1 * 8);
    local_254 = 0;
    local_250 = 0;
    local_268 = 0;
    uStack_260 = 0;
    local_258 = 0;
    local_278 = 0;
    FUN_1411b354a(local_248,0,0,0);
    local_258 = *(undefined1 *)(lVar2 + 0x10);
    local_254 = *(undefined4 *)(lVar2 + 0x14);
    local_250 = *(undefined8 *)(lVar2 + 8);
    local_270 = uVar3;
    cVar4 = FUN_14830d48c(&local_270,*(undefined8 *)param_1[3]);
    if (cVar4 != '\0') {
      EnterCriticalSection((LPCRITICAL_SECTION)param_1[2]);
      lVar2 = param_1[1];
      iVar1 = *(int *)(lVar2 + 0x38);
      *(uint *)(lVar2 + 0x38) = iVar1 + 1U;
      if (*(uint *)(lVar2 + 0x3c) < iVar1 + 1U) {
        FUN_1483ba0ee((longlong *)(lVar2 + 0x30),iVar1);
      }
      FUN_146bffece((longlong)iVar1 * 0x220 + *(longlong *)(lVar2 + 0x30),local_248);
      LeaveCriticalSection((LPCRITICAL_SECTION)param_1[2]);
    }
    FUN_141082778(local_248);
    if (local_268 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b21854 FUN_143b21854 body=1466 status=ok
// SIG undefined FUN_143b21854(void)

/* WARNING: Removing unreachable block (ram,0x000143b21a57) */
/* WARNING: Removing unreachable block (ram,0x000143b21a66) */
/* WARNING: Removing unreachable block (ram,0x000143b21a6a) */

void FUN_143b21854(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  code *pcVar4;
  bool bVar5;
  undefined **ppuVar6;
  double dVar7;
  char cVar8;
  byte bVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined ***pppuVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined8 *puVar19;
  float fVar20;
  undefined1 auStack_488 [32];
  double local_468;
  uint local_460;
  uint local_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_438;
  undefined4 local_430;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined8 uStack_420;
  uint local_418;
  undefined4 uStack_414;
  double dStack_410;
  undefined **local_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined8 uStack_3f0;
  byte local_3e8;
  undefined8 local_3e0;
  longlong local_3d8;
  longlong *local_3c8;
  longlong local_3b8 [4];
  undefined8 local_398;
  undefined8 local_388 [48];
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined **local_1e8;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined1 uStack_1cc;
  byte bStack_1cb;
  undefined2 uStack_1ca;
  double local_1c8;
  longlong *local_1b8;
  int local_1b0;
  undefined1 local_d8 [16];
  code *local_c8;
  undefined8 uStack_c0;
  undefined ***local_b8;
  undefined8 uStack_b0;
  undefined **local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_488;
  iVar16 = *param_2;
  lVar2 = *param_1;
  cVar8 = FUN_14838e214(lVar2,(longlong)iVar16 * 0xb8 + *(longlong *)(lVar2 + 0x80),param_1[1]);
  if (cVar8 != '\0') goto LAB_143b218fc;
  pcVar3 = *(char **)param_1[3];
  if (pcVar3 != (char *)0x0) {
    if (*pcVar3 != '\0') goto LAB_143b218fc;
    pcVar4 = *(code **)(pcVar3 + 0x70);
    plVar12 = (longlong *)(pcVar3 + 0x90);
    if (*(longlong **)(pcVar3 + 0x80) != (longlong *)0x0) {
      plVar12 = *(longlong **)(pcVar3 + 0x80);
    }
    uVar10 = (**(code **)(*plVar12 + 8))();
    cVar8 = (*pcVar4)(uVar10);
    *pcVar3 = cVar8;
    if (cVar8 != '\0') goto LAB_143b218fc;
  }
  local_1e8 = local_a8;
  local_d8[0] = 1;
  uStack_400 = (undefined4)uStack_a0;
  uStack_3fc = uStack_a0._4_4_;
  local_b8 = (undefined ***)0x0;
  local_c8 = FUN_143b21e10;
  local_a8 = &PTR_LAB_14ae75670;
  uStack_a0 = lVar2;
  local_208 = 0;
  uStack_200 = (undefined4)uStack_c0;
  uStack_1fc = uStack_c0._4_4_;
  local_1d8 = local_98;
  uStack_1d4 = uStack_94;
  uStack_1d0 = (undefined4)uStack_90;
  uStack_1cc = (undefined1)((ulonglong)uStack_90 >> 0x20);
  bStack_1cb = (byte)((ulonglong)uStack_90 >> 0x28);
  uStack_1ca = (undefined2)((ulonglong)uStack_90 >> 0x30);
  local_1f8 = 0;
  uStack_1f0 = (undefined4)uStack_b0;
  uStack_1ec = uStack_b0._4_4_;
  local_a8 = &PTR_LAB_14ae75670;
  local_b8 = (undefined ***)0x0;
  local_c8 = FUN_143b21e10;
  local_d8[0] = 1;
  local_1f8 = 0;
  local_208 = 0;
  uStack_3f0 = uStack_90;
  uStack_3f4 = uStack_94;
  local_3f8 = local_98;
  local_408 = local_1e8;
  dStack_410 = uStack_b0;
  uStack_414 = 0;
  local_418 = 0;
  uStack_420 = uStack_c0;
  uStack_424 = 0;
  local_428 = 0;
  FUN_1483ba182(&local_208,*(undefined8 *)(*(longlong *)(lVar2 + 0x70) + (longlong)iVar16 * 8),
                local_d8);
  if ((local_1b0 == 1) && (*(char *)(*local_1b8 + 0x2c8) == '\0')) {
    bVar9 = FUN_146c047ec();
  }
  else {
    bVar9 = 0;
  }
  bStack_1cb = bVar9;
  if (*(char *)(lVar2 + 0x50) == '\x01') {
    local_418 = local_418 & 0xffffff00;
    local_3f8 = CONCAT31(local_3f8._1_3_,1);
    local_3d8 = 0;
    local_3c8 = (longlong *)0x0;
    local_398 = 0x3ff0000000000000;
    puVar17 = &DAT_14c846480;
    puVar19 = local_388;
    for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar19 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar19 = puVar19 + 1;
    }
    uStack_3f0 = 0x3ff0000000000000;
    uStack_3fc = 0x400;
    uStack_420 = 0;
    local_3e0 = 0x3f1a36e2eb1c432d;
    dStack_410 = *(double *)(lVar2 + 0x58);
    ppuVar6 = (undefined **)((*(double *)(lVar2 + 0x60) + dStack_410) * 0.5);
    local_408 = (undefined **)0x3ff0000000000000;
    if (1.0 <= (double)ppuVar6) {
      local_408 = ppuVar6;
    }
    local_428 = CONCAT31(local_428._1_3_,2);
    uStack_400 = CONCAT31(CONCAT21(uStack_400._2_2_,*(undefined1 *)(lVar2 + 0x68)),1);
    uStack_424 = 0;
    local_3e8 = bVar9 ^ 1;
    uStack_1d0 = 4;
    uStack_1cc = 0;
    local_1e8 = (undefined **)0x4066800000000000;
    local_1c8 = 1e-08;
    if (1e-08 <= dStack_410 * 0.01) {
      local_1c8 = dStack_410 * 0.01;
    }
    local_438 = 0;
    local_430 = 0;
    FUN_146ba1da4(&local_208,&local_428);
    uVar18 = 0xf4241;
    if (*(char *)(lVar2 + 0x34) == '\x01') {
      if (1 < *(int *)(lVar2 + 0x30)) {
        uVar18 = *(int *)(lVar2 + 0x30) - 1;
        goto LAB_143b21bd7;
      }
    }
    else {
LAB_143b21bd7:
      uVar15 = 0;
      do {
        iVar1 = local_1b0;
        dVar7 = dStack_410 * 0.5;
        iVar16 = local_1b0 + 1;
        do {
          local_468 = dVar7;
          cVar8 = FUN_146ba2e02(&local_208,0,0,1);
          if (cVar8 != '\0') break;
          bVar5 = 0 < iVar16;
          iVar16 = iVar16 + -1;
        } while (bVar5);
      } while (((uVar15 < 1000000) && (local_1b0 != iVar1)) &&
              (uVar15 = uVar15 + 1, uVar15 != uVar18));
    }
    FUN_146ba2670(&local_208,0xeb1c432d,0xeb1c432d);
    uVar14 = 0xffffffff;
    if (*(char *)(lVar2 + 0x34) == '\x01') {
      uVar14 = *(undefined4 *)(lVar2 + 0x30);
    }
    local_450 = 0;
    uStack_448 = 0;
    local_458 = 0xffffffff;
    local_460 = local_460 & 0xffffff00;
    local_468 = (double)CONCAT71(local_468._1_7_,1);
    FUN_146ba2a14(&local_208,uVar14,0,(int)*(undefined8 *)(lVar2 + 0x48));
    if (local_3d8 != 0) {
      plVar12 = local_3c8;
      if (local_3c8 == (longlong *)0x0) {
        plVar12 = local_3b8;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  else {
    fVar20 = (float)*(int *)(lVar2 + 0x30) * *(float *)(lVar2 + 0x38);
    local_468 = *(double *)(lVar2 + 0x48);
    local_458 = local_458 & 0xffffff00;
    local_460 = 0xffffffff;
    FUN_146ba2904(&local_208,*(int *)(lVar2 + 0x30),(int)ROUND(fVar20 + fVar20 + -0.5) >> 1,
                  (int)*(undefined8 *)(lVar2 + 0x40));
  }
  if (0 < local_1b0) {
    iVar16 = 0;
    do {
      FUN_148397d06(&local_208,&local_428,iVar16);
      if ((*(char *)(lVar2 + 0x10) == '\x01') &&
         (cVar8 = FUN_14830d580(&local_428,*(undefined4 *)(lVar2 + 0x14),*(undefined8 *)param_1[3]),
         cVar8 == '\0')) {
        FUN_141082778(&local_428);
        break;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)param_1[2]);
      lVar11 = param_1[1];
      iVar1 = *(int *)(lVar11 + 0x38);
      *(uint *)(lVar11 + 0x38) = iVar1 + 1U;
      if (*(uint *)(lVar11 + 0x3c) < iVar1 + 1U) {
        FUN_1483ba0ee((longlong *)(lVar11 + 0x30),iVar1);
      }
      FUN_146bffece((longlong)iVar1 * 0x220 + *(longlong *)(lVar11 + 0x30),&local_428);
      LeaveCriticalSection((LPCRITICAL_SECTION)param_1[2]);
      FUN_141082778(&local_428);
      iVar16 = iVar16 + 1;
    } while (iVar16 < local_1b0);
  }
  FUN_146ec51d6(&local_208);
  if (local_c8 != (code *)0x0) {
    pppuVar13 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar13 = &local_a8;
    }
    (*(code *)(*pppuVar13)[2])();
  }
LAB_143b218fc:
  if ((local_80 ^ (ulonglong)auStack_488) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b21e10 FUN_143b21e10 body=214 status=ok
// SIG undefined FUN_143b21e10(void)

void FUN_143b21e10(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_2d8 [32];
  double local_2b8 [42];
  undefined4 local_168;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 local_138;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  lVar1 = *param_1;
  cVar2 = FUN_146c047ec(param_2);
  if (cVar2 != '\0') {
    FUN_1482e1672(local_2b8,param_2);
    if (local_2b8[0] < 0.0) {
      FUN_146c0aee0(param_2,1);
    }
  }
  if (*(char *)(lVar1 + 0x20) == '\x01') {
    FUN_1482bc5b8(local_2b8,param_2);
    local_168 = 1;
    local_140 = *(undefined8 *)(lVar1 + 0x28);
    local_138 = 0x200000001;
    local_148 = 0x7f7fffff;
    (**(code **)((longlong)local_2b8[0] + 0x60))(local_2b8);
    FUN_1482fec66(local_2b8);
  }
  if ((local_20 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b21efe FUN_143b21efe body=29 status=ok
// SIG undefined FUN_143b21efe(void)

undefined8 FUN_143b21efe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b21f1c FUN_143b21f1c body=1990 status=ok
// SIG undefined FUN_143b21f1c(void)

void FUN_143b21f1c(longlong *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  double dVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  double *pdVar8;
  double *pdVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_988 [32];
  undefined1 local_968;
  char local_951;
  undefined8 local_950;
  undefined4 local_948;
  undefined4 uStack_944;
  undefined4 uStack_940;
  undefined4 uStack_93c;
  double local_938;
  undefined8 local_928;
  undefined8 uStack_920;
  double local_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  double local_8e8;
  double dStack_8e0;
  double local_8d8;
  double dStack_8d0;
  double dStack_8c8;
  double dStack_8c0;
  double local_8b8;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  double local_898;
  undefined8 local_888;
  undefined8 uStack_880;
  double local_878;
  double dStack_870;
  double dStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 local_850;
  ulonglong local_830;
  undefined1 local_808 [560];
  double local_5d8;
  double dStack_5d0;
  double local_5c8;
  double dStack_5c0;
  double dStack_5b8;
  double dStack_5b0;
  double dStack_5a8;
  undefined8 local_5a0;
  ulonglong local_580;
  undefined1 local_558 [560];
  undefined8 local_328;
  undefined8 uStack_320;
  double local_318;
  double dStack_310;
  double dStack_308;
  double dStack_300;
  double dStack_2f8;
  double local_2f0;
  undefined1 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  ulonglong local_2d0;
  undefined1 local_2a8 [552];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_988;
  iVar1 = *param_2;
  lVar3 = *param_1;
  cVar5 = FUN_14838e214(lVar3,(longlong)iVar1 * 0xb8 + *(longlong *)(lVar3 + 0x80),param_1[1],
                        param_1[2]);
  if (cVar5 == '\0') {
    uVar10 = *(undefined8 *)(*(longlong *)(lVar3 + 0x70) + (longlong)iVar1 * 8);
    local_5c8 = DAT_14c846398;
    local_5d8 = DAT_14c846388;
    dStack_5d0 = DAT_14c846390;
    local_8e8 = DAT_14c8464e0;
    dStack_8e0 = DAT_14c8464e8;
    local_8d8 = DAT_14c8464f0;
    dStack_8d0 = 0.0;
    dStack_8c8 = 0.0;
    dStack_8c0 = 0.0;
    local_8b8 = 1.0;
    local_318 = DAT_14c8463c8;
    local_328 = (double)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
    uStack_320 = (double)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
    FUN_146bfb7f2();
    uVar2 = *(uint *)param_1[3];
    if (uVar2 == 4) {
      FUN_1483ba2b0(&local_328,uVar10);
      local_918 = (double)DAT_14c8463b0;
      local_928 = (double)DAT_14c8463a0;
      uStack_920 = (double)DAT_14c8463a8;
      local_5d8 = DAT_14c8464e0;
      dStack_5d0 = DAT_14c8464e8;
      local_5c8 = DAT_14c8464f0;
      dStack_5c0 = 0.0;
      dStack_5b8 = 0.0;
      dStack_5b0 = 0.0;
      dStack_5a8 = 1.0;
      local_878 = DAT_14c8463c8;
      local_888 = (double)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
      uStack_880 = (double)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
      FUN_146bfb7f2(&dStack_5c0,&local_888,&local_928);
      uStack_320 = local_5d8;
      local_318 = dStack_5d0;
      dStack_310 = local_5c8;
      dStack_308 = dStack_5c0;
      dStack_300 = dStack_5b8;
      dStack_2f8 = dStack_5b0;
      local_2f0 = dStack_5a8;
      local_2d0 = -(ulonglong)(0.0 <= *(double *)(lVar3 + 8)) & (ulonglong)*(double *)(lVar3 + 8);
      local_951 = FUN_148316b84(&local_328);
      FUN_1483ba2b0(&local_5d8,uVar10);
      local_898 = DAT_14c846398;
      local_8a8 = DAT_14c846388;
      uStack_8a0 = DAT_14c846390;
      local_888 = DAT_14c8464e0;
      uStack_880 = DAT_14c8464e8;
      local_878 = DAT_14c8464f0;
      dStack_870 = 0.0;
      dStack_868 = 0.0;
      uStack_860 = 0;
      uStack_858 = 0x3ff0000000000000;
      local_918 = DAT_14c8463c8;
      local_928 = (double)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
      uStack_920 = (double)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
      FUN_146bfb7f2(&dStack_870,&local_928,&local_8a8);
      dStack_5d0 = local_888;
      local_5c8 = uStack_880;
      dStack_5c0 = local_878;
      dStack_5b8 = dStack_870;
      dStack_5b0 = dStack_868;
      dStack_5a8 = (double)uStack_860;
      local_5a0 = uStack_858;
      local_580 = -(ulonglong)(0.0 <= *(double *)(lVar3 + 8)) & (ulonglong)*(double *)(lVar3 + 8);
      cVar5 = FUN_148316b84(&local_5d8);
      local_950 = uVar10;
      FUN_1483ba2b0(&local_888,uVar10);
      local_938 = DAT_14c8463c8;
      local_948 = (undefined4)DAT_14c8463b8;
      uStack_944 = DAT_14c8463b8._4_4_;
      uStack_940 = (undefined4)DAT_14c8463c0;
      uStack_93c = DAT_14c8463c0._4_4_;
      local_928 = DAT_14c8464e0;
      uStack_920 = DAT_14c8464e8;
      local_918 = DAT_14c8464f0;
      uStack_910 = 0;
      uStack_908 = 0;
      uStack_900 = 0;
      local_8f8 = 0x3ff0000000000000;
      local_898 = DAT_14c8463c8;
      local_8a8 = (double)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
      uStack_8a0 = (double)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
      FUN_146bfb7f2(&uStack_910,&local_8a8);
      uStack_880 = local_928;
      local_878 = uStack_920;
      dStack_870 = local_918;
      dStack_868 = (double)uStack_910;
      uStack_860 = uStack_908;
      uStack_858 = uStack_900;
      local_850 = local_8f8;
      local_830 = -(ulonglong)(0.0 <= *(double *)(lVar3 + 8)) & (ulonglong)*(double *)(lVar3 + 8);
      cVar6 = FUN_148316b84(&local_888);
      uVar15 = 0xffffffff;
      uVar16 = 0x7fefffff;
      uVar17 = uVar15;
      uVar18 = uVar16;
      if (cVar6 != '\0') {
        FUN_1482e1672(&local_928,local_808);
        uVar17 = SUB84(local_928,0);
        uVar18 = (undefined4)((ulonglong)local_928 >> 0x20);
      }
      uVar19 = uVar15;
      uVar20 = uVar16;
      if (cVar5 != '\0') {
        FUN_1482e1672(&local_8a8,local_558);
        uVar19 = SUB84(local_8a8,0);
        uVar20 = (undefined4)((ulonglong)local_8a8 >> 0x20);
      }
      if (local_951 != '\0') {
        FUN_1482e1672(&local_948,local_2a8);
        uVar15 = local_948;
        uVar16 = uStack_944;
      }
      pdVar8 = &dStack_5d0;
      if ((double)CONCAT44(uVar18,uVar17) < (double)CONCAT44(uVar20,uVar19)) {
        pdVar8 = (double *)&uStack_880;
      }
      if ((double)CONCAT44(uVar16,uVar15) <= (double)CONCAT44(uVar20,uVar19)) {
        pdVar8 = (double *)&uStack_880;
      }
      pdVar9 = (double *)&uStack_320;
      if ((double)CONCAT44(uVar18,uVar17) < (double)CONCAT44(uVar16,uVar15)) {
        pdVar9 = pdVar8;
      }
      if ((double)CONCAT44(uVar20,uVar19) < (double)CONCAT44(uVar16,uVar15)) {
        pdVar9 = pdVar8;
      }
      local_8e8 = *pdVar9;
      dStack_8e0 = pdVar9[1];
      local_8d8 = pdVar9[2];
      dStack_8d0 = pdVar9[3];
      dStack_8c8 = pdVar9[4];
      dStack_8c0 = pdVar9[5];
      local_8b8 = pdVar9[6];
      FUN_1483ba346(&local_888);
      FUN_1483ba346(&local_5d8);
      FUN_1483ba346(&local_328);
      uVar10 = local_950;
    }
    else {
      if (uVar2 == 3) {
        FUN_145c688c4(uVar10,&local_5d8,0);
        dVar13 = dStack_5b0 - local_5c8;
        dVar14 = dStack_5b8 - dStack_5d0;
        dVar4 = dStack_5c0 - local_5d8;
        uVar11 = -(ulonglong)(-dVar13 <= dVar13);
        dVar13 = (double)(uVar11 & (ulonglong)dVar13 | ~uVar11 & (ulonglong)-dVar13);
        uVar11 = -(ulonglong)(-dVar14 <= dVar14);
        uVar12 = -(ulonglong)(-dVar4 <= dVar4);
        dVar4 = (double)(uVar12 & (ulonglong)dVar4 | ~uVar12 & (ulonglong)-dVar4);
        dVar14 = (double)(uVar11 & (ulonglong)dVar14 | ~uVar11 & (ulonglong)-dVar14);
        uVar2 = (uint)(dVar13 < dVar4) * 2;
        if (dVar14 < dVar4) {
          uVar2 = (dVar13 < dVar14) + 1;
        }
        local_918 = 0.0;
        local_928 = 0.0;
        uStack_920 = 0.0;
        (&local_928)[uVar2] = 0x3ff0000000000000;
        pdVar8 = (double *)&local_888;
      }
      else {
        uVar7 = 2;
        if ((int)uVar2 < 2) {
          uVar7 = uVar2;
        }
        if ((int)uVar7 < 1) {
          uVar7 = 0;
        }
        local_878 = 0.0;
        local_888 = 0.0;
        uStack_880 = 0.0;
        (&local_888)[uVar7] = 0x3ff0000000000000;
        pdVar8 = &local_5d8;
      }
      dStack_2f8 = 1.0;
      dStack_300 = 0.0;
      dStack_308 = 0.0;
      dStack_310 = 0.0;
      pdVar8[2] = DAT_14c8463c8;
      *(undefined4 *)pdVar8 = (undefined4)DAT_14c8463b8;
      *(undefined4 *)((longlong)pdVar8 + 4) = DAT_14c8463b8._4_4_;
      *(undefined4 *)(pdVar8 + 1) = (undefined4)DAT_14c8463c0;
      *(undefined4 *)((longlong)pdVar8 + 0xc) = DAT_14c8463c0._4_4_;
      local_328 = DAT_14c8464e0;
      uStack_320 = DAT_14c8464e8;
      local_318 = DAT_14c8464f0;
      FUN_146bfb7f2(&dStack_310);
      local_8e8 = local_328;
      dStack_8e0 = uStack_320;
      local_8d8 = local_318;
      dStack_8d0 = dStack_310;
      dStack_8c8 = dStack_308;
      dStack_8c0 = dStack_300;
      local_8b8 = dStack_2f8;
    }
    FUN_1483ba2b0(&local_328,uVar10);
    uStack_320 = local_8e8;
    local_318 = dStack_8e0;
    dStack_310 = local_8d8;
    dStack_308 = dStack_8d0;
    dStack_300 = dStack_8c8;
    dStack_2f8 = dStack_8c0;
    local_2f0 = local_8b8;
    local_2d0 = -(ulonglong)(0.0 <= *(double *)(lVar3 + 8)) & (ulonglong)*(double *)(lVar3 + 8);
    local_2e8 = *(undefined1 *)(lVar3 + 0x10);
    local_2e0 = *(undefined8 *)(lVar3 + 0x18);
    local_2d8 = local_2e0;
    cVar5 = FUN_148316b84(&local_328);
    if (cVar5 != '\0') {
      local_968 = 0;
      FUN_1411b354a(&local_5d8,0,0,0);
      FUN_146c00942(&local_5d8,local_2a8);
      EnterCriticalSection((LPCRITICAL_SECTION)param_1[2]);
      lVar3 = param_1[1];
      iVar1 = *(int *)(lVar3 + 0x38);
      *(uint *)(lVar3 + 0x38) = iVar1 + 1U;
      if (*(uint *)(lVar3 + 0x3c) < iVar1 + 1U) {
        FUN_1483ba0ee((longlong *)(lVar3 + 0x30),iVar1);
      }
      FUN_146bff712((longlong)iVar1 * 0x220 + *(longlong *)(lVar3 + 0x30),&local_5d8);
      LeaveCriticalSection((LPCRITICAL_SECTION)param_1[2]);
      FUN_141082778(&local_5d8);
    }
    FUN_1483ba346(&local_328);
  }
  if ((local_80 ^ (ulonglong)auStack_988) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b226e4 FUN_143b226e4 body=1184 status=ok
// SIG undefined FUN_143b226e4(void)

void FUN_143b226e4(longlong *param_1,int *param_2)

{
  undefined4 *puVar1;
  double *pdVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  longlong lVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_318 [32];
  undefined8 local_2f8;
  undefined1 local_2f0 [4];
  undefined1 local_2ec [4];
  longlong *local_2e8 [2];
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  wchar_t *local_278;
  undefined4 local_270;
  undefined8 local_268;
  undefined1 *local_260;
  float local_258;
  int local_254;
  double local_250;
  double local_248;
  double local_240;
  undefined1 local_238;
  undefined4 local_234;
  undefined4 local_230;
  double local_228;
  undefined1 local_220;
  undefined4 local_21c;
  undefined2 local_218;
  code *local_208;
  undefined8 local_1f8;
  undefined **local_1e8;
  undefined1 *local_1e0;
  undefined8 local_1c8;
  float local_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined8 local_1a4;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined8 uStack_184;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined8 uStack_164;
  undefined1 local_158 [216];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_318;
  lVar14 = (longlong)*param_2;
  lVar5 = *param_1;
  cVar13 = FUN_14838e214(lVar5,lVar14 * 0xb8 + *(longlong *)(lVar5 + 0x80),param_1[1],param_1[2]);
  if (cVar13 != '\0') goto LAB_143b2274e;
  FUN_145c688c4(*(undefined8 *)(*(longlong *)(lVar5 + 0x70) + lVar14 * 8),&local_2a8,0);
  dVar17 = (double)CONCAT44(uStack_27c,uStack_280) - (double)CONCAT44(uStack_294,local_298);
  dVar17 = (double)(-(ulonglong)(0.0 <= dVar17) & (ulonglong)dVar17);
  dVar16 = (double)CONCAT44(uStack_284,local_288) - (double)CONCAT44(uStack_29c,uStack_2a0);
  dVar16 = (double)(-(ulonglong)(0.0 <= dVar16) & (ulonglong)dVar16);
  uVar15 = -(ulonglong)(dVar17 <= dVar16);
  dVar16 = (double)(~uVar15 & (ulonglong)dVar17 | uVar15 & (ulonglong)dVar16);
  dVar17 = (double)CONCAT44(uStack_28c,uStack_290) - (double)CONCAT44(uStack_2a4,local_2a8);
  dVar17 = (double)(-(ulonglong)(0.0 <= dVar17) & (ulonglong)dVar17);
  uVar15 = -(ulonglong)(dVar16 <= dVar17);
  dVar17 = (double)(uVar15 & (ulonglong)dVar17 | ~uVar15 & (ulonglong)dVar16) /
           (double)*(int *)(lVar5 + 0x6c);
  FUN_146ba21d6(local_158,*(undefined8 *)(*(longlong *)(lVar5 + 0x70) + lVar14 * 8),1);
  local_238 = 1;
  local_234 = 0x1000;
  local_220 = 1;
  local_21c = 1;
  local_218 = 0;
  local_1f8 = 0;
  local_1e8 = &PTR_LAB_149f36510;
  local_1e0 = &LAB_1483ba7bc;
  local_208 = FUN_146bd3274;
  local_1c8 = 0;
  local_1c0 = 0.0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0;
  local_1a8 = 0;
  local_1a4 = 0;
  local_198 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  local_178 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_168 = 0;
  uStack_164 = 0;
  local_268 = *(undefined8 *)(*(longlong *)(lVar5 + 0x70) + lVar14 * 8);
  local_230 = 2;
  local_258 = (float)dVar17;
  local_228 = dVar17 + dVar17;
  local_254 = -((int)ROUND(-0.5 - (local_228 / dVar17 + local_228 / dVar17)) >> 1);
  local_240 = DAT_14c846520 * local_228;
  local_248 = DAT_14c846518 * local_228;
  local_250 = local_228 * DAT_14c846510;
  local_2d8 = local_2a8;
  uStack_2d4 = uStack_2a4;
  uStack_2d0 = uStack_2a0;
  uStack_2cc = uStack_29c;
  local_2c8 = local_298;
  uStack_2c4 = uStack_294;
  uStack_2c0 = uStack_290;
  uStack_2bc = uStack_28c;
  local_2b8 = local_288;
  uStack_2b4 = uStack_284;
  uStack_2b0 = uStack_280;
  uStack_2ac = uStack_27c;
  local_260 = local_158;
  cVar13 = FUN_1483ba382();
  uVar10 = local_1a8;
  uVar9 = uStack_1ac;
  uVar8 = uStack_1b0;
  fVar7 = local_258;
  if (cVar13 == '\0') {
    if (*(longlong *)param_1[3] != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)param_1[2]);
      uVar6 = *(undefined8 *)param_1[3];
      local_278 = L"Generate_LevelSets_Failed";
      local_270 = 0x19;
      FUN_1446e940c(local_2ec,&local_278);
      local_278 = L"MeshSimpleShapeApproximation";
      local_270 = 0x1c;
      FUN_1446e940c(local_2f0,&local_278);
      local_278 = L"Generating a new Level Set failed";
      local_270 = 0x21;
      FUN_140208c1e(local_2e8,local_2f0,local_2ec,&local_278);
      FUN_1483ba68a(uVar6,local_2e8);
      if (local_2e8[0] != (longlong *)0x0) {
        (**(code **)(*local_2e8[0] + 0x10))();
      }
      goto LAB_143b22a9e;
    }
  }
  else {
    dVar17 = (double)local_1c0;
    dVar16 = (double)local_1c8._4_4_;
    dVar18 = (double)(float)local_1c8;
    local_2f8 = local_1b8;
    local_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uVar11 = (undefined4)local_1a4;
    uVar12 = local_1a4._4_4_;
    EnterCriticalSection((LPCRITICAL_SECTION)param_1[2]);
    lVar5 = param_1[1];
    iVar4 = *(int *)(lVar5 + 0x48);
    *(uint *)(lVar5 + 0x48) = iVar4 + 1U;
    if (*(uint *)(lVar5 + 0x4c) < iVar4 + 1U) {
      FUN_1483bea4e((longlong *)(lVar5 + 0x40),iVar4);
    }
    lVar5 = *(longlong *)(lVar5 + 0x40);
    lVar14 = (longlong)iVar4 * 0x90;
    *(undefined8 *)(lVar5 + lVar14) = 0;
    ((undefined8 *)(lVar5 + lVar14))[1] = 0;
    puVar1 = (undefined4 *)(lVar5 + 0x10 + lVar14);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0x3ff00000;
    pdVar2 = (double *)(lVar5 + 0x20 + lVar14);
    *pdVar2 = dVar18;
    pdVar2[1] = dVar16;
    pdVar2 = (double *)(lVar5 + 0x30 + lVar14);
    *pdVar2 = dVar17;
    pdVar2[1] = 0.0;
    puVar3 = (undefined8 *)(lVar5 + 0x40 + lVar14);
    *puVar3 = 0x3ff0000000000000;
    puVar3[1] = 0x3ff0000000000000;
    puVar3 = (undefined8 *)(lVar5 + 0x50 + lVar14);
    *puVar3 = 0x3ff0000000000000;
    puVar3[1] = 0;
    *(undefined8 *)(lVar5 + 0x60 + lVar14) = local_2f8;
    *(undefined4 *)(lVar5 + 0x68 + lVar14) = uVar8;
    *(undefined4 *)(lVar5 + 0x6c + lVar14) = uVar9;
    *(undefined4 *)(lVar5 + 0x70 + lVar14) = uVar10;
    *(undefined4 *)(lVar5 + 0x74 + lVar14) = uVar11;
    *(undefined4 *)(lVar5 + 0x78 + lVar14) = uVar12;
    *(float *)(lVar5 + 0x80 + lVar14) = fVar7;
LAB_143b22a9e:
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1[2]);
  }
  FUN_1483ba754(&local_268);
  FUN_1457e5b52(local_158);
LAB_143b2274e:
  if ((local_80 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b22b86 FUN_143b22b86 body=2137 status=ok
// SIG undefined FUN_143b22b86(void)

void FUN_143b22b86(double *param_1,float *param_2,float param_3,int param_4,int param_5,int param_6,
                  double *param_7)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  double *pdVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  char cVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  double *pdVar12;
  double *pdVar13;
  bool bVar14;
  int iVar15;
  double *pdVar16;
  undefined1 auStack_258 [32];
  double *local_238;
  undefined8 local_230;
  undefined1 **local_228;
  undefined1 **local_220;
  double *local_218;
  float *local_210;
  double *local_208;
  undefined8 local_200;
  float local_1f8;
  undefined8 local_1f0;
  float local_1e8;
  double local_1e0;
  double local_1d8;
  undefined1 *local_1d0;
  undefined4 local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  double *local_1b8;
  double *local_1b0;
  undefined1 **local_1a8;
  double *local_1a0;
  double *local_198;
  double *local_190;
  double **local_188;
  double *local_180;
  double *local_178;
  double **local_170;
  double *local_168;
  float *local_160;
  double *local_158;
  double *local_150;
  double **local_148;
  undefined1 local_139;
  double *local_138;
  longlong *local_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  ulonglong uStack_110;
  double *local_108;
  longlong *local_100;
  longlong local_f8;
  ulonglong uStack_f0;
  double *local_e8;
  double *local_e0;
  double *local_d8;
  longlong *local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined1 *local_a0;
  float local_98;
  int local_94;
  undefined1 *local_90;
  double **local_88;
  undefined1 *local_80;
  double **local_78;
  ulonglong local_70;
  
  pdVar4 = param_7;
  iVar6 = param_6;
  iVar5 = param_5;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_258;
  iVar15 = param_5 * param_4 * param_6;
  iVar2 = *(int *)(param_7 + 1);
  local_94 = param_4;
  if (iVar15 - iVar2 == 0 || iVar15 < iVar2) {
    if (iVar15 < 0) goto LAB_143b233d8;
    if (iVar15 < iVar2) {
      *(int *)(param_7 + 1) = iVar15;
      FUN_1401fef06(param_7);
    }
  }
  else {
    *(int *)(param_7 + 1) = iVar15;
    if ((uint)(*(int *)((longlong)param_7 + 0xc) - iVar2) < (uint)(iVar15 - iVar2)) {
      FUN_14475e4ac(param_7);
    }
  }
  *(int *)(pdVar4 + 2) = param_4;
  *(int *)((longlong)pdVar4 + 0x14) = iVar5;
  *(int *)(pdVar4 + 3) = iVar6;
  fVar1 = *(float *)(param_1 + 2);
  local_98 = (float)iVar6 * fVar1 + (float)param_4 * fVar1 + (float)iVar5 * fVar1;
  if (0 < *(int *)(pdVar4 + 1)) {
    lVar9 = 0;
    do {
      *(float *)((longlong)*pdVar4 + lVar9 * 4) = local_98;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(pdVar4 + 1));
  }
  local_218 = param_1 + 0x1a;
  iVar2 = *(int *)(param_1 + 0x1b);
  if (iVar15 - iVar2 == 0 || iVar15 < iVar2) {
    if (iVar15 < 0) goto LAB_143b233d8;
    if (iVar15 < iVar2) {
      *(int *)(param_1 + 0x1b) = iVar15;
      FUN_14479f406(local_218);
    }
LAB_143b22c93:
    iVar11 = *(int *)(param_1 + 0x1b);
  }
  else {
    *(int *)(param_1 + 0x1b) = iVar15;
    iVar11 = iVar15;
    if ((uint)(*(int *)((longlong)param_1 + 0xdc) - iVar2) < (uint)(iVar15 - iVar2)) {
      FUN_1446f48e2(local_218);
      goto LAB_143b22c93;
    }
  }
  *(int *)(param_1 + 0x1c) = param_4;
  *(int *)((longlong)param_1 + 0xe4) = iVar5;
  *(int *)(param_1 + 0x1d) = iVar6;
  if (0 < iVar11) {
    lVar9 = 0;
    do {
      *(undefined4 *)((longlong)param_1[0x1a] + lVar9 * 4) = 0xffffffff;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 0x1b));
  }
  local_220 = (undefined1 **)(param_1 + 0x1e);
  iVar2 = *(int *)(param_1 + 0x1f);
  if (iVar15 - iVar2 == 0 || iVar15 < iVar2) {
    if (iVar15 < 0) {
LAB_143b233d8:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar15);
    }
    if (iVar15 < iVar2) {
      *(int *)(param_1 + 0x1f) = iVar15;
      FUN_14479f406(local_220);
    }
  }
  else {
    *(int *)(param_1 + 0x1f) = iVar15;
    iVar11 = iVar15;
    if ((uint)(iVar15 - iVar2) <= (uint)(*(int *)((longlong)param_1 + 0xfc) - iVar2))
    goto LAB_143b22d3e;
    FUN_1446f48e2(local_220);
  }
  iVar11 = *(int *)(param_1 + 0x1f);
LAB_143b22d3e:
  *(int *)(param_1 + 0x20) = param_4;
  *(int *)((longlong)param_1 + 0x104) = iVar5;
  *(int *)(param_1 + 0x21) = iVar6;
  if (0 < iVar11) {
    lVar9 = 0;
    do {
      *(undefined4 *)((longlong)param_1[0x1e] + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 0x1f));
  }
  local_a0 = (undefined1 *)(double)*param_2;
  local_a8 = (double)param_2[1];
  local_b0 = (double)param_2[2];
  local_b8 = 1.0 / (double)param_3;
  local_c8 = 0;
  uStack_c0 = 0;
  local_210 = param_2;
  FUN_146bd3f9c(&local_c8,0x100,1);
  pdVar16 = (double *)
            (longlong)
            -((int)ROUND(-0.5 - ((float)iVar15 * 0.00390625 + (float)iVar15 * 0.00390625)) >> 1);
  local_d8 = pdVar4;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = param_1;
  local_e0 = pdVar16;
  local_d0 = &local_c8;
  FUN_140bfc200(&local_f8,0x100,1);
  local_118 = 0.0;
  uStack_110 = 0;
  local_128 = 0.0;
  uStack_120 = 0;
  local_108 = pdVar16;
  local_100 = &local_f8;
  FUN_1403ed7b2(&local_128,
                *(int *)((longlong)pdVar4 + 0x14) * *(int *)(pdVar4 + 2) * *(int *)(pdVar4 + 3),1);
  pdVar16 = local_218;
  local_1b0 = (double *)&local_139;
  local_139 = 0;
  local_1a8 = &local_a0;
  local_1a0 = &local_b8;
  local_198 = &local_a8;
  local_190 = &local_b0;
  local_188 = (double **)&local_94;
  local_180 = (double *)&param_5;
  local_178 = (double *)&param_6;
  local_168 = pdVar4;
  local_160 = &local_98;
  local_158 = local_218;
  local_1d0 = (undefined1 *)0x0;
  local_1c8 = 0;
  local_80 = &LAB_1483bc528;
  local_230 = (undefined1 **)(CONCAT44(local_230._4_4_,(uint)*(byte *)(param_1 + 6)) ^ 1);
  local_228 = &local_1d0;
  local_1b8 = param_1;
  local_170 = &local_e8;
  local_150 = &local_128;
  local_148 = &local_108;
  local_138 = &local_118;
  local_130 = &local_f8;
  local_78 = &local_1b8;
  FUN_1427ae281(L"ParallelFor Task",
                *(int *)((longlong)*param_1 + 0x20) * 0x200 + *(int *)((longlong)*param_1 + 0x24),1)
  ;
  pcVar3 = (code *)param_1[0xc];
  pdVar12 = (double *)param_1[0xe];
  if ((double *)param_1[0xe] == (double *)0x0) {
    pdVar12 = param_1 + 0x10;
  }
  uVar10 = (**(code **)((longlong)*pdVar12 + 8))();
  cVar8 = (*pcVar3)(uVar10);
  if (cVar8 == '\0') {
    local_208 = param_1 + 0x10;
    FUN_1483bbdb2(&local_138);
    local_1c4 = *(int *)(pdVar4 + 2) + -1;
    local_1c0 = *(int *)((longlong)pdVar4 + 0x14) + -1;
    local_1bc = *(int *)(pdVar4 + 3) + -1;
    local_1c8 = 0;
    local_1d0 = (undefined1 *)0x0;
    local_1d8 = param_1[8];
    local_1e0 = (double)(param_3 * 1.7320508) + local_1d8;
    pdVar12 = local_208;
    while (local_208 = pdVar12, 0 < (int)uStack_110) {
      local_190 = &local_1e0;
      local_178 = &local_1d8;
      local_80 = (undefined1 *)0x0;
      local_78 = (double **)((ulonglong)local_78 & 0xffffffff00000000);
      local_90 = &LAB_1483bc892;
      local_230._4_4_ = (undefined4)((ulonglong)local_230 >> 0x20);
      local_230 = (undefined1 **)(CONCAT44(local_230._4_4_,(uint)*(byte *)(param_1 + 6)) ^ 1);
      local_228 = &local_80;
      local_1b8 = &local_118;
      local_1b0 = pdVar4;
      local_1a8 = &local_1d0;
      local_1a0 = &local_128;
      local_198 = param_1;
      local_188 = &local_e8;
      local_180 = pdVar16;
      local_170 = &local_108;
      local_88 = &local_1b8;
      FUN_1427ae281(L"ParallelFor Task",uStack_110 & 0xffffffff,1,&local_90);
      FUN_1483bbdb2(&local_138);
      pdVar16 = local_218;
      pdVar12 = local_208;
      pdVar4 = param_7;
    }
    pcVar3 = (code *)param_1[0xc];
    pdVar13 = (double *)param_1[0xe];
    if ((double *)param_1[0xe] == (double *)0x0) {
      pdVar13 = pdVar12;
    }
    uVar10 = (**(code **)((longlong)*pdVar13 + 8))();
    cVar8 = (*pcVar3)(uVar10);
    if ((cVar8 == '\0') && (*(char *)(param_1 + 9) == '\x01')) {
      local_1f0 = *(undefined8 *)local_210;
      local_1e8 = local_210[2];
      local_228 = local_220;
      local_230 = (undefined1 **)CONCAT44(local_230._4_4_,param_6);
      local_238 = (double *)CONCAT44(local_238._4_4_,param_5);
      FUN_1483bbe74(param_1,&local_1f0,param_3,local_94);
      pcVar3 = (code *)param_1[0xc];
      pdVar13 = (double *)param_1[0xe];
      if ((double *)param_1[0xe] == (double *)0x0) {
        pdVar13 = pdVar12;
      }
      uVar10 = (**(code **)((longlong)*pdVar13 + 8))();
      cVar8 = (*pcVar3)(uVar10);
      if (cVar8 == '\0') {
        if (*(int *)(param_1 + 7) == 0) {
          bVar7 = true;
          do {
            bVar14 = bVar7;
            local_1f8 = local_210[2];
            local_200 = *(undefined8 *)local_210;
            local_238 = pdVar16;
            FUN_1483bbfd4(param_1,&local_200,param_3,pdVar4);
            pcVar3 = (code *)param_1[0xc];
            pdVar13 = (double *)param_1[0xe];
            if ((double *)param_1[0xe] == (double *)0x0) {
              pdVar13 = pdVar12;
            }
            uVar10 = (**(code **)((longlong)*pdVar13 + 8))();
            cVar8 = (*pcVar3)(uVar10);
            if (cVar8 != '\0') goto LAB_143b232b4;
            bVar7 = false;
          } while (bVar14);
        }
        local_230 = local_220;
        local_238 = pdVar4;
        FUN_1483bc322(param_1,local_94,param_5,param_6);
        pcVar3 = (code *)param_1[0xc];
        if ((double *)param_1[0xe] != (double *)0x0) {
          pdVar12 = (double *)param_1[0xe];
        }
        uVar10 = (**(code **)((longlong)*pdVar12 + 8))(pdVar12);
        (*pcVar3)(uVar10);
      }
    }
  }
LAB_143b232b4:
  if (local_128 != 0.0) {
    FUN_1400020a8();
  }
  if (local_118 != 0.0) {
    FUN_1400020a8();
  }
  FUN_144716727(local_f8,uStack_f0 & 0xffffffff);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  FUN_146bd42bb(local_c8,uStack_c0 & 0xffffffff);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b233e2 FUN_143b233e2 body=1323 status=ok
// SIG undefined FUN_143b233e2(void)

void FUN_143b233e2(longlong *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  double *pdVar12;
  undefined8 *puVar13;
  double *pdVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_468 [32];
  undefined8 local_448;
  undefined1 local_440;
  char *local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  double local_3d8 [10];
  double local_388 [5];
  char local_360;
  undefined7 uStack_35f;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  char local_338;
  undefined7 uStack_337;
  undefined8 local_330 [7];
  double local_2f8;
  double local_2f0;
  double local_2e8;
  char local_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined1 local_290 [544];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_468;
  iVar10 = *param_2;
  lVar9 = *param_1;
  cVar7 = FUN_14838e214(lVar9,(longlong)iVar10 * 0xb8 + *(longlong *)(lVar9 + 0x80),param_1[1],
                        param_1[2]);
  if (cVar7 != '\0') goto LAB_143b23451;
  uVar2 = *(undefined8 *)(*(longlong *)(lVar9 + 0x70) + (longlong)iVar10 * 8);
  FUN_145c688c4(uVar2,&local_360,0);
  local_3d8[0] = ((double)CONCAT71(uStack_35f,local_360) + (double)CONCAT44(uStack_344,local_348)) *
                 0.5;
  local_3d8[1] = ((double)CONCAT44(uStack_354,local_358) + (double)CONCAT44(uStack_33c,uStack_340))
                 * 0.5;
  local_3d8[2] = ((double)CONCAT44(uStack_34c,uStack_350) + (double)CONCAT71(uStack_337,local_338))
                 * 0.5;
  local_3d8[3] = 0.0;
  local_3d8[4] = 0.0;
  local_3d8[5] = 0.0;
  local_3d8[6] = 1.0;
  local_3d8[7] = ((double)CONCAT44(uStack_344,local_348) - (double)CONCAT71(uStack_35f,local_360)) *
                 0.5;
  local_3d8[8] = ((double)CONCAT44(uStack_33c,uStack_340) - (double)CONCAT44(uStack_354,local_358))
                 * 0.5;
  local_3d8[9] = ((double)CONCAT71(uStack_337,local_338) - (double)CONCAT44(uStack_34c,uStack_350))
                 * 0.5;
  dVar4 = *(double *)(lVar9 + 8) * 0.5;
  lVar8 = 7;
  do {
    dVar5 = dVar4;
    if (dVar4 <= local_3d8[lVar8]) {
      dVar5 = local_3d8[lVar8];
    }
    local_3d8[lVar8] = dVar5;
    lVar8 = lVar8 + 1;
  } while (lVar8 != 10);
  FUN_1483ba01e(&local_360);
  local_440 = *(undefined1 *)(lVar9 + 0x69);
  local_448 = *(undefined8 *)(lVar9 + 8);
  local_430 = 0;
  local_438 = &local_360;
  FUN_143b20fc9(uVar2,1,1,1);
  uVar15 = 0;
  uVar17 = 0;
  if (0.0 <= local_3d8[7]) {
    uVar15 = SUB84(local_3d8[7],0);
    uVar17 = (undefined4)((ulonglong)local_3d8[7] >> 0x20);
  }
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  if (0.0 <= local_3d8[8]) {
    uVar21 = SUB84(local_3d8[8],0);
    uVar22 = (undefined4)((ulonglong)local_3d8[8] >> 0x20);
  }
  uVar16 = 0;
  uVar18 = 0;
  if (0.0 <= local_3d8[9]) {
    uVar16 = SUB84(local_3d8[9],0);
    uVar18 = (undefined4)((ulonglong)local_3d8[9] >> 0x20);
  }
  local_388[0] = (double)CONCAT44(uVar18,uVar16) *
                 (double)CONCAT44(uVar22,uVar21) * (double)CONCAT44(uVar17,uVar15) * 8.0;
  local_388[1] = 1.79769313486232e+308;
  local_388[3] = 1.79769313486232e+308;
  if (local_338 != '\0') {
    uVar15 = 0;
    uVar17 = 0;
    if (0.0 <= local_2f8) {
      uVar15 = SUB84(local_2f8,0);
      uVar17 = (undefined4)((ulonglong)local_2f8 >> 0x20);
    }
    uVar21 = 0;
    uVar22 = 0;
    if (0.0 <= local_2f0) {
      uVar21 = SUB84(local_2f0,0);
      uVar22 = (undefined4)((ulonglong)local_2f0 >> 0x20);
    }
    if (0.0 <= local_2e8) {
      uVar19 = SUB84(local_2e8,0);
      uVar20 = (undefined4)((ulonglong)local_2e8 >> 0x20);
    }
    local_388[1] = (double)CONCAT44(uVar20,uVar19) *
                   (double)CONCAT44(uVar22,uVar21) * (double)CONCAT44(uVar17,uVar15) * 8.0;
  }
  local_388[2] = local_388[3];
  if (local_360 != '\0') {
    dVar4 = (double)CONCAT44(uStack_33c,uStack_340);
    local_388[2] = dVar4 * 4.1887902047863905 * dVar4 * dVar4;
  }
  if (local_2e0 == '\x01') {
    dVar5 = (double)CONCAT44(uStack_29c,uStack_2a0);
    dVar4 = dVar5 * 3.141592653589793 * dVar5;
    local_388[3] = ((double)CONCAT44(uStack_2a4,local_2a8) + (double)CONCAT44(uStack_2a4,local_2a8))
                   * dVar4 + dVar4 * 1.3333333333333333 * dVar5;
  }
  iVar10 = 0;
  lVar9 = 1;
  do {
    iVar6 = (int)lVar9;
    if (local_388[iVar10] < local_388[lVar9] || local_388[iVar10] == local_388[lVar9]) {
      iVar6 = iVar10;
    }
    iVar10 = iVar6;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 4);
  if (1.79769313486232e+308 < local_388[iVar10] || local_388[iVar10] == 1.79769313486232e+308)
  goto LAB_143b238c3;
  EnterCriticalSection((LPCRITICAL_SECTION)param_1[2]);
  switch(iVar10) {
  case 0:
    lVar9 = param_1[1];
    iVar10 = *(int *)(lVar9 + 0x18);
    *(uint *)(lVar9 + 0x18) = iVar10 + 1U;
    if (*(uint *)(lVar9 + 0x1c) < iVar10 + 1U) {
      FUN_1483b9f04((longlong *)(lVar9 + 0x10),iVar10);
    }
    pdVar14 = (double *)((longlong)iVar10 * 0x50 + *(longlong *)(lVar9 + 0x10));
    pdVar12 = local_3d8;
    break;
  case 1:
    lVar9 = param_1[1];
    puVar11 = local_330;
    puVar13 = &local_428;
    for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    iVar10 = *(int *)(lVar9 + 0x18);
    *(uint *)(lVar9 + 0x18) = iVar10 + 1U;
    if (*(uint *)(lVar9 + 0x1c) < iVar10 + 1U) {
      FUN_1483b9f04((longlong *)(lVar9 + 0x10),iVar10);
    }
    pdVar14 = (double *)((longlong)iVar10 * 0x50 + *(longlong *)(lVar9 + 0x10));
    pdVar12 = (double *)&local_428;
    break;
  case 2:
    plVar3 = (longlong *)param_1[1];
    local_418 = local_348;
    uStack_414 = uStack_344;
    uStack_410 = uStack_340;
    uStack_40c = uStack_33c;
    local_428._0_4_ = local_358;
    local_428._4_4_ = uStack_354;
    uStack_420 = uStack_350;
    uStack_41c = uStack_34c;
    iVar10 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar10 + 1U) {
      FUN_1483b9e7e(plVar3,iVar10);
    }
    lVar9 = *plVar3;
    lVar8 = (longlong)iVar10 << 5;
    goto LAB_143b23868;
  case 3:
    lVar9 = param_1[1];
    local_3f8 = local_2a8;
    uStack_3f4 = uStack_2a4;
    uStack_3f0 = uStack_2a0;
    uStack_3ec = uStack_29c;
    local_408 = local_2b8;
    uStack_404 = uStack_2b4;
    uStack_400 = uStack_2b0;
    uStack_3fc = uStack_2ac;
    local_418 = local_2c8;
    uStack_414 = uStack_2c4;
    uStack_410 = uStack_2c0;
    uStack_40c = uStack_2bc;
    local_428._0_4_ = local_2d8;
    local_428._4_4_ = uStack_2d4;
    uStack_420 = uStack_2d0;
    uStack_41c = uStack_2cc;
    iVar10 = *(int *)(lVar9 + 0x28);
    *(uint *)(lVar9 + 0x28) = iVar10 + 1U;
    if (*(uint *)(lVar9 + 0x2c) < iVar10 + 1U) {
      FUN_1483b9f98((longlong *)(lVar9 + 0x20),iVar10);
    }
    lVar9 = *(longlong *)(lVar9 + 0x20);
    lVar8 = (longlong)iVar10 * 0x40;
    puVar11 = (undefined8 *)(lVar9 + 0x30 + lVar8);
    *puVar11 = CONCAT44(uStack_3f4,local_3f8);
    puVar11[1] = CONCAT44(uStack_3ec,uStack_3f0);
    puVar11 = (undefined8 *)(lVar9 + 0x20 + lVar8);
    *puVar11 = CONCAT44(uStack_404,local_408);
    puVar11[1] = CONCAT44(uStack_3fc,uStack_400);
LAB_143b23868:
    puVar1 = (undefined4 *)(lVar9 + 0x10 + lVar8);
    *puVar1 = local_418;
    puVar1[1] = uStack_414;
    puVar1[2] = uStack_410;
    puVar1[3] = uStack_40c;
    puVar1 = (undefined4 *)(lVar9 + lVar8);
    *puVar1 = (undefined4)local_428;
    puVar1[1] = local_428._4_4_;
    puVar1[2] = uStack_420;
    puVar1[3] = uStack_41c;
  default:
    goto switchD_143b23773_default;
  }
  for (lVar9 = 10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *pdVar14 = *pdVar12;
    pdVar12 = pdVar12 + 1;
    pdVar14 = pdVar14 + 1;
  }
switchD_143b23773_default:
  LeaveCriticalSection((LPCRITICAL_SECTION)param_1[2]);
LAB_143b238c3:
  FUN_141082778(local_290);
LAB_143b23451:
  if ((local_70 ^ (ulonglong)auStack_468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b23964 FUN_143b23964 body=346 status=ok
// SIG undefined FUN_143b23964(void)

void FUN_143b23964(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143b239f6;
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
LAB_143b239f6:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 143b23b0e FUN_143b23b0e body=1183 status=ok
// SIG undefined FUN_143b23b0e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143b23b0e(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  void *pvVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 *_Dst;
  undefined1 *puVar12;
  undefined1 *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  ulonglong local_70;
  undefined1 local_48 [8];
  
  local_70 = DAT_14c707940 ^ (ulonglong)local_48;
  uVar7 = *(ulonglong *)(param_1 + 0x10);
  local_88 = *(longlong *)(*(longlong *)(param_2 + 8) + 8);
  local_78 = param_3;
  if (uVar7 < 0x20001) {
    lVar21 = -(uVar7 + 0x1e & 0xfffffffffffffff0);
    plVar16 = (longlong *)((longlong)&local_b8 + lVar21);
    _Dst = (undefined1 *)((longlong)&local_b8 + lVar21);
  }
  else {
    _Dst = (undefined1 *)FUN_14001cc68(uVar7);
    if (_Dst == (void *)0x0) {
      FUN_14001cc68(0xffffffffffffffff);
    }
    plVar16 = &local_b8;
    if (uVar7 >> 0x3d != 0) {
      FUN_14001cc68(0xffffffffffffffff);
      plVar16 = &local_b8;
      bVar11 = true;
      goto LAB_143b23bcf;
    }
  }
  bVar11 = false;
LAB_143b23bcf:
  uVar1 = uVar7 * 8;
  local_80 = uVar7;
  if (uVar1 < 0x20001) {
    *(undefined8 *)((longlong)plVar16 + -8) = 0x143b23bf1;
    lVar21 = -(uVar1 + 0x1e & 0xfffffffffffffff0);
    puVar12 = (undefined1 *)((longlong)plVar16 + lVar21);
    plVar16 = (longlong *)((longlong)plVar16 + lVar21);
  }
  else {
    *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b23c0a;
    puVar12 = (undefined1 *)FUN_14001cc68(uVar1);
    if (puVar12 == (undefined1 *)0x0) {
      *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b23c2b;
      FUN_14001cc68(0xffffffffffffffff);
      puVar12 = (undefined1 *)0x0;
    }
  }
  if (bVar11) {
    *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b23c4c;
    FUN_14001cc68(0xffffffffffffffff);
  }
  local_a0 = uVar1;
  if (uVar1 < 0x20001) {
    *(undefined8 *)((longlong)plVar16 + -8) = 0x143b23c6a;
    lVar21 = -(uVar1 + 0x1e & 0xfffffffffffffff0);
    puVar13 = (undefined1 *)((longlong)plVar16 + lVar21);
    plVar16 = (longlong *)((longlong)plVar16 + lVar21);
  }
  else {
    *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b23c83;
    puVar13 = (undefined1 *)FUN_14001cc68(uVar1);
    if (puVar13 == (undefined1 *)0x0) {
      *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b23ca4;
      FUN_14001cc68(0xffffffffffffffff);
      puVar13 = (undefined1 *)0x0;
    }
  }
  uVar7 = local_80;
  *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b23cbd;
  memset(_Dst,0,uVar7);
  lVar21 = *(longlong *)(param_2 + 8);
  *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b23cd1;
  lVar14 = FUN_146de3a9c(param_1);
  local_90 = lVar21;
  *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b23ce8;
  lVar15 = FUN_146de5690(lVar21);
  lVar20 = local_78;
  *(undefined8 *)(local_78 + 0x38) = 0;
  lVar21 = *(longlong *)(local_78 + 8);
  pvVar8 = *(void **)(local_78 + 0x18);
  *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b23d19;
  memset(pvVar8,0,lVar21 * 4 + 4);
  pvVar8 = *(void **)(lVar20 + 0x20);
  if (pvVar8 != (void *)0x0) {
    lVar21 = *(longlong *)(lVar20 + 8);
    *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b23d3c;
    memset(pvVar8,0,lVar21 << 2);
    lVar20 = local_78;
  }
  lVar21 = lVar15 + lVar14 + *(longlong *)(lVar20 + 0x38);
  if (*(longlong *)(lVar20 + 0x40) < lVar21) {
    *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b23fa5;
    FUN_146de55aa(lVar20 + 0x28,lVar21);
    lVar20 = local_78;
  }
  if (0 < local_88) {
    local_a8 = lVar20 + 0x28;
    lVar21 = 0;
    do {
      *(undefined4 *)(*(longlong *)(lVar20 + 0x18) + 4 + lVar21 * 4) =
           *(undefined4 *)(*(longlong *)(lVar20 + 0x18) + lVar21 * 4);
      lVar14 = (longlong)*(int *)(*(longlong *)(local_90 + 0x18) + lVar21 * 4);
      if (*(longlong *)(local_90 + 0x20) == 0) {
        lVar15 = (longlong)*(int *)(*(longlong *)(local_90 + 0x18) + 4 + lVar21 * 4);
      }
      else {
        lVar15 = *(int *)(*(longlong *)(local_90 + 0x20) + lVar21 * 4) + lVar14;
      }
      if (lVar14 < lVar15) {
        local_98 = lVar21;
        lVar21 = *(longlong *)(local_90 + 0x28);
        lVar20 = *(longlong *)(local_90 + 0x30);
        lVar17 = 0;
        do {
          lVar19 = (longlong)*(int *)(lVar20 + lVar14 * 4);
          lVar18 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar19 * 4);
          if (*(longlong *)(param_1 + 0x20) == 0) {
            lVar19 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar19 * 4);
          }
          else {
            lVar19 = *(int *)(*(longlong *)(param_1 + 0x20) + lVar19 * 4) + lVar18;
          }
          if (lVar18 < lVar19) {
            dVar2 = *(double *)(lVar21 + lVar14 * 8);
            lVar9 = *(longlong *)(param_1 + 0x28);
            lVar10 = *(longlong *)(param_1 + 0x30);
            do {
              lVar22 = (longlong)*(int *)(lVar10 + lVar18 * 4);
              dVar3 = *(double *)(lVar9 + lVar18 * 8);
              if (*(char *)((longlong)_Dst + lVar22) == '\0') {
                *(undefined1 *)((longlong)_Dst + lVar22) = 1;
                *(double *)(puVar12 + lVar22 * 8) = dVar3 * dVar2;
                *(longlong *)(puVar13 + lVar17 * 8) = lVar22;
                lVar17 = lVar17 + 1;
              }
              else {
                *(double *)(puVar12 + lVar22 * 8) =
                     dVar3 * dVar2 + *(double *)(puVar12 + lVar22 * 8);
              }
              lVar18 = lVar18 + 1;
            } while (lVar19 != lVar18);
          }
          lVar14 = lVar14 + 1;
        } while (lVar14 != lVar15);
        lVar21 = local_98;
        lVar20 = local_78;
        if (0 < lVar17) {
          lVar14 = 0;
          do {
            lVar18 = local_a8;
            local_b8 = *(longlong *)(puVar13 + lVar14 * 8);
            uVar4 = *(undefined8 *)(puVar12 + *(longlong *)(puVar13 + lVar14 * 8) * 8);
            iVar5 = *(int *)(*(longlong *)(lVar20 + 0x18) + 4 + lVar21 * 4);
            local_b0 = (longlong)iVar5;
            *(int *)(*(longlong *)(lVar20 + 0x18) + 4 + lVar21 * 4) = iVar5 + 1;
            lVar15 = *(longlong *)(lVar20 + 0x38);
            *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b23e84;
            FUN_146de554a(lVar18,lVar15 + 1,0);
            lVar20 = local_78;
            lVar21 = local_98;
            *(undefined8 *)(*(longlong *)(local_78 + 0x28) + lVar15 * 8) = 0;
            *(int *)(*(longlong *)(local_78 + 0x30) + lVar15 * 4) = (int)local_b8;
            *(undefined8 *)(*(longlong *)(local_78 + 0x28) + local_b0 * 8) = uVar4;
            *(undefined1 *)((longlong)_Dst + local_b8) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar17 != lVar14);
        }
      }
      lVar21 = lVar21 + 1;
    } while (lVar21 != local_88);
  }
  if ((*(longlong *)(lVar20 + 0x20) == 0) && (lVar21 = *(longlong *)(lVar20 + 8), -1 < lVar21)) {
    uVar6 = *(undefined4 *)(lVar20 + 0x38);
    lVar14 = lVar21;
    do {
      if (*(int *)(*(longlong *)(lVar20 + 0x18) + lVar14 * 4) != 0) goto LAB_143b23f76;
      bVar11 = 0 < lVar14;
      lVar14 = lVar14 + -1;
    } while (bVar11);
    lVar14 = -1;
LAB_143b23f76:
    if (lVar14 < lVar21) {
      do {
        *(undefined4 *)(*(longlong *)(lVar20 + 0x18) + 4 + lVar14 * 4) = uVar6;
        lVar14 = lVar14 + 1;
      } while (lVar14 < *(longlong *)(lVar20 + 8));
    }
  }
  if (0x20000 < local_a0) {
    *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b23eeb;
    FUN_1400020a8(puVar13);
    *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b23ef3;
    FUN_1400020a8(puVar12);
  }
  if (0x20000 < local_80) {
    *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b23f0d;
    FUN_1400020a8(_Dst);
  }
  if ((local_70 ^ (ulonglong)local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)plVar16 + -0x28) = &UNK_143b23f43;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b23fb2 FUN_143b23fb2 body=1221 status=ok
// SIG undefined FUN_143b23fb2(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143b23fb2(longlong param_1,longlong param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  void *pvVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 *_Dst;
  undefined1 *puVar12;
  undefined1 *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  ulonglong local_88;
  ulonglong local_80;
  longlong local_78;
  ulonglong local_70;
  undefined1 local_48 [8];
  
  local_70 = DAT_14c707940 ^ (ulonglong)local_48;
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  local_90 = *(longlong *)(param_2 + 8);
  local_78 = param_3;
  if (uVar6 < 0x20001) {
    lVar14 = -(uVar6 + 0x1e & 0xfffffffffffffff0);
    plVar16 = (longlong *)((longlong)&local_b8 + lVar14);
    _Dst = (undefined1 *)((longlong)&local_b8 + lVar14);
  }
  else {
    _Dst = (undefined1 *)FUN_14001cc68(uVar6);
    if (_Dst == (void *)0x0) {
      FUN_14001cc68(0xffffffffffffffff);
    }
    plVar16 = &local_b8;
    if (uVar6 >> 0x3d != 0) {
      FUN_14001cc68(0xffffffffffffffff);
      plVar16 = &local_b8;
      bVar11 = true;
      goto LAB_143b2406e;
    }
  }
  bVar11 = false;
LAB_143b2406e:
  local_80 = uVar6 * 8;
  local_88 = uVar6;
  if (local_80 < 0x20001) {
    uVar6 = local_80 + 0x1e;
    *(undefined8 *)((longlong)plVar16 + -8) = 0x143b24094;
    lVar14 = -(uVar6 & 0xfffffffffffffff0);
    puVar12 = (undefined1 *)((longlong)plVar16 + lVar14);
    plVar16 = (longlong *)((longlong)plVar16 + lVar14);
  }
  else {
    *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b240aa;
    puVar12 = (undefined1 *)FUN_14001cc68();
    if (puVar12 == (undefined1 *)0x0) {
      *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b240cb;
      FUN_14001cc68(0xffffffffffffffff);
      puVar12 = (undefined1 *)0x0;
    }
  }
  if (bVar11) {
    *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b240ec;
    FUN_14001cc68(0xffffffffffffffff);
  }
  if (local_80 < 0x20001) {
    uVar6 = local_80 + 0x1e;
    *(undefined8 *)((longlong)plVar16 + -8) = 0x143b2410a;
    lVar14 = -(uVar6 & 0xfffffffffffffff0);
    puVar13 = (undefined1 *)((longlong)plVar16 + lVar14);
    plVar16 = (longlong *)((longlong)plVar16 + lVar14);
  }
  else {
    *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b24120;
    puVar13 = (undefined1 *)FUN_14001cc68();
    if (puVar13 == (undefined1 *)0x0) {
      *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b24141;
      FUN_14001cc68(0xffffffffffffffff);
      puVar13 = (undefined1 *)0x0;
    }
  }
  uVar6 = local_88;
  *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b24159;
  memset(_Dst,0,uVar6);
  *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b24161;
  lVar14 = FUN_146de3a9c(param_1);
  plVar7 = *(longlong **)(param_2 + 0x20);
  if (plVar7 == (longlong *)0x0) {
    lVar20 = (*(longlong **)(param_2 + 0x18))[*(longlong *)(param_2 + 8)] -
             **(longlong **)(param_2 + 0x18);
  }
  else {
    lVar15 = *(longlong *)(param_2 + 8);
    if (lVar15 == 0) {
      lVar20 = 0;
    }
    else {
      lVar20 = *plVar7;
      if (1 < lVar15) {
        lVar17 = 1;
        do {
          lVar20 = lVar20 + plVar7[lVar17];
          lVar17 = lVar17 + 1;
        } while (lVar15 != lVar17);
      }
    }
  }
  *(undefined8 *)(local_78 + 0x38) = 0;
  lVar15 = *(longlong *)(local_78 + 8);
  pvVar8 = *(void **)(local_78 + 0x18);
  *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b241d6;
  memset(pvVar8,0,lVar15 * 4 + 4);
  pvVar8 = *(void **)(local_78 + 0x20);
  if (pvVar8 != (void *)0x0) {
    lVar15 = *(longlong *)(local_78 + 8);
    *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b241fa;
    memset(pvVar8,0,lVar15 << 2);
  }
  lVar14 = lVar20 + lVar14 + *(longlong *)(local_78 + 0x38);
  if (*(longlong *)(local_78 + 0x40) < lVar14) {
    lVar20 = local_78 + 0x28;
    *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b2446f;
    FUN_146de55aa(lVar20,lVar14);
  }
  lVar14 = local_78;
  if (0 < local_90) {
    local_a8 = local_78 + 0x28;
    lVar20 = 0;
    local_98 = param_2;
    do {
      *(undefined4 *)(*(longlong *)(lVar14 + 0x18) + 4 + lVar20 * 4) =
           *(undefined4 *)(*(longlong *)(lVar14 + 0x18) + lVar20 * 4);
      lVar15 = *(longlong *)(*(longlong *)(local_98 + 0x18) + lVar20 * 8);
      if (*(longlong *)(local_98 + 0x20) == 0) {
        lVar17 = *(longlong *)(*(longlong *)(local_98 + 0x18) + 8 + lVar20 * 8);
      }
      else {
        lVar17 = *(longlong *)(*(longlong *)(local_98 + 0x20) + lVar20 * 8) + lVar15;
      }
      if (lVar15 < lVar17) {
        local_a0 = lVar20;
        lVar14 = *(longlong *)(local_98 + 0x28);
        lVar20 = *(longlong *)(local_98 + 0x30);
        lVar22 = 0;
        do {
          lVar19 = *(longlong *)(lVar20 + lVar15 * 8);
          lVar18 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar19 * 4);
          if (*(longlong *)(param_1 + 0x20) == 0) {
            lVar19 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar19 * 4);
          }
          else {
            lVar19 = *(int *)(*(longlong *)(param_1 + 0x20) + lVar19 * 4) + lVar18;
          }
          if (lVar18 < lVar19) {
            dVar1 = *(double *)(lVar14 + lVar15 * 8);
            lVar9 = *(longlong *)(param_1 + 0x28);
            lVar10 = *(longlong *)(param_1 + 0x30);
            do {
              lVar21 = (longlong)*(int *)(lVar10 + lVar18 * 4);
              dVar2 = *(double *)(lVar9 + lVar18 * 8);
              if (*(char *)((longlong)_Dst + lVar21) == '\0') {
                *(undefined1 *)((longlong)_Dst + lVar21) = 1;
                *(double *)(puVar12 + lVar21 * 8) = dVar2 * dVar1;
                *(longlong *)(puVar13 + lVar22 * 8) = lVar21;
                lVar22 = lVar22 + 1;
              }
              else {
                *(double *)(puVar12 + lVar21 * 8) =
                     dVar2 * dVar1 + *(double *)(puVar12 + lVar21 * 8);
              }
              lVar18 = lVar18 + 1;
            } while (lVar19 != lVar18);
          }
          lVar15 = lVar15 + 1;
        } while (lVar15 != lVar17);
        lVar20 = local_a0;
        lVar14 = local_78;
        if (0 < lVar22) {
          lVar15 = 0;
          do {
            lVar19 = local_a8;
            local_b8 = *(longlong *)(puVar13 + lVar15 * 8);
            uVar3 = *(undefined8 *)(puVar12 + *(longlong *)(puVar13 + lVar15 * 8) * 8);
            iVar4 = *(int *)(*(longlong *)(lVar14 + 0x18) + 4 + lVar20 * 4);
            local_b0 = (longlong)iVar4;
            *(int *)(*(longlong *)(lVar14 + 0x18) + 4 + lVar20 * 4) = iVar4 + 1;
            lVar17 = *(longlong *)(lVar14 + 0x38);
            *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b2434a;
            FUN_146de554a(lVar19,lVar17 + 1,0);
            lVar14 = local_78;
            lVar20 = local_a0;
            *(undefined8 *)(*(longlong *)(local_78 + 0x28) + lVar17 * 8) = 0;
            *(int *)(*(longlong *)(local_78 + 0x30) + lVar17 * 4) = (int)local_b8;
            *(undefined8 *)(*(longlong *)(local_78 + 0x28) + local_b0 * 8) = uVar3;
            *(undefined1 *)((longlong)_Dst + local_b8) = 0;
            lVar15 = lVar15 + 1;
          } while (lVar22 != lVar15);
        }
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 != local_90);
  }
  if ((*(longlong *)(lVar14 + 0x20) == 0) && (lVar20 = *(longlong *)(lVar14 + 8), -1 < lVar20)) {
    uVar5 = *(undefined4 *)(lVar14 + 0x38);
    lVar15 = lVar20;
    do {
      if (*(int *)(*(longlong *)(lVar14 + 0x18) + lVar15 * 4) != 0) goto LAB_143b24440;
      bVar11 = 0 < lVar15;
      lVar15 = lVar15 + -1;
    } while (bVar11);
    lVar15 = -1;
LAB_143b24440:
    if (lVar15 < lVar20) {
      do {
        *(undefined4 *)(*(longlong *)(lVar14 + 0x18) + 4 + lVar15 * 4) = uVar5;
        lVar15 = lVar15 + 1;
      } while (lVar15 < *(longlong *)(lVar14 + 8));
    }
  }
  if (0x20000 < local_80) {
    *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b243b5;
    FUN_1400020a8(puVar13);
    *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b243bd;
    FUN_1400020a8(puVar12);
  }
  if (0x20000 < local_88) {
    *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b243d7;
    FUN_1400020a8(_Dst);
  }
  if ((local_70 ^ (ulonglong)local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)plVar16 + -0x28) = &UNK_143b2440d;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b2447c FUN_143b2447c body=1183 status=ok
// SIG undefined FUN_143b2447c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143b2447c(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  void *pvVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 *_Dst;
  undefined1 *puVar12;
  undefined1 *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  ulonglong local_70;
  undefined1 local_48 [8];
  
  local_70 = DAT_14c707940 ^ (ulonglong)local_48;
  uVar7 = *(ulonglong *)(param_1 + 0x10);
  local_88 = *(longlong *)(*(longlong *)(param_2 + 8) + 8);
  local_78 = param_3;
  if (uVar7 < 0x20001) {
    lVar21 = -(uVar7 + 0x1e & 0xfffffffffffffff0);
    plVar16 = (longlong *)((longlong)&local_b8 + lVar21);
    _Dst = (undefined1 *)((longlong)&local_b8 + lVar21);
  }
  else {
    _Dst = (undefined1 *)FUN_14001cc68(uVar7);
    if (_Dst == (void *)0x0) {
      FUN_14001cc68(0xffffffffffffffff);
    }
    plVar16 = &local_b8;
    if (uVar7 >> 0x3d != 0) {
      FUN_14001cc68(0xffffffffffffffff);
      plVar16 = &local_b8;
      bVar11 = true;
      goto LAB_143b2453d;
    }
  }
  bVar11 = false;
LAB_143b2453d:
  uVar1 = uVar7 * 8;
  local_80 = uVar7;
  if (uVar1 < 0x20001) {
    *(undefined8 *)((longlong)plVar16 + -8) = 0x143b2455f;
    lVar21 = -(uVar1 + 0x1e & 0xfffffffffffffff0);
    puVar12 = (undefined1 *)((longlong)plVar16 + lVar21);
    plVar16 = (longlong *)((longlong)plVar16 + lVar21);
  }
  else {
    *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b24578;
    puVar12 = (undefined1 *)FUN_14001cc68(uVar1);
    if (puVar12 == (undefined1 *)0x0) {
      *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b24599;
      FUN_14001cc68(0xffffffffffffffff);
      puVar12 = (undefined1 *)0x0;
    }
  }
  if (bVar11) {
    *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b245ba;
    FUN_14001cc68(0xffffffffffffffff);
  }
  local_a0 = uVar1;
  if (uVar1 < 0x20001) {
    *(undefined8 *)((longlong)plVar16 + -8) = 0x143b245d8;
    lVar21 = -(uVar1 + 0x1e & 0xfffffffffffffff0);
    puVar13 = (undefined1 *)((longlong)plVar16 + lVar21);
    plVar16 = (longlong *)((longlong)plVar16 + lVar21);
  }
  else {
    *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b245f1;
    puVar13 = (undefined1 *)FUN_14001cc68(uVar1);
    if (puVar13 == (undefined1 *)0x0) {
      *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b24612;
      FUN_14001cc68(0xffffffffffffffff);
      puVar13 = (undefined1 *)0x0;
    }
  }
  uVar7 = local_80;
  *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b2462b;
  memset(_Dst,0,uVar7);
  lVar21 = *(longlong *)(param_2 + 8);
  *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b2463f;
  lVar14 = FUN_146de3a9c(param_1);
  local_90 = lVar21;
  *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b24656;
  lVar15 = FUN_146de5690(lVar21);
  lVar20 = local_78;
  *(undefined8 *)(local_78 + 0x38) = 0;
  lVar21 = *(longlong *)(local_78 + 8);
  pvVar8 = *(void **)(local_78 + 0x18);
  *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b24687;
  memset(pvVar8,0,lVar21 * 4 + 4);
  pvVar8 = *(void **)(lVar20 + 0x20);
  if (pvVar8 != (void *)0x0) {
    lVar21 = *(longlong *)(lVar20 + 8);
    *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b246aa;
    memset(pvVar8,0,lVar21 << 2);
    lVar20 = local_78;
  }
  lVar21 = lVar15 + lVar14 + *(longlong *)(lVar20 + 0x38);
  if (*(longlong *)(lVar20 + 0x40) < lVar21) {
    *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b24913;
    FUN_146de55aa(lVar20 + 0x28,lVar21);
    lVar20 = local_78;
  }
  if (0 < local_88) {
    local_a8 = lVar20 + 0x28;
    lVar21 = 0;
    do {
      *(undefined4 *)(*(longlong *)(lVar20 + 0x18) + 4 + lVar21 * 4) =
           *(undefined4 *)(*(longlong *)(lVar20 + 0x18) + lVar21 * 4);
      lVar14 = (longlong)*(int *)(*(longlong *)(local_90 + 0x18) + lVar21 * 4);
      if (*(longlong *)(local_90 + 0x20) == 0) {
        lVar15 = (longlong)*(int *)(*(longlong *)(local_90 + 0x18) + 4 + lVar21 * 4);
      }
      else {
        lVar15 = *(int *)(*(longlong *)(local_90 + 0x20) + lVar21 * 4) + lVar14;
      }
      if (lVar14 < lVar15) {
        local_98 = lVar21;
        lVar21 = *(longlong *)(local_90 + 0x28);
        lVar20 = *(longlong *)(local_90 + 0x30);
        lVar17 = 0;
        do {
          lVar19 = (longlong)*(int *)(lVar20 + lVar14 * 4);
          lVar18 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar19 * 4);
          if (*(longlong *)(param_1 + 0x20) == 0) {
            lVar19 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar19 * 4);
          }
          else {
            lVar19 = *(int *)(*(longlong *)(param_1 + 0x20) + lVar19 * 4) + lVar18;
          }
          if (lVar18 < lVar19) {
            dVar2 = *(double *)(lVar21 + lVar14 * 8);
            lVar9 = *(longlong *)(param_1 + 0x28);
            lVar10 = *(longlong *)(param_1 + 0x30);
            do {
              lVar22 = (longlong)*(int *)(lVar10 + lVar18 * 4);
              dVar3 = *(double *)(lVar9 + lVar18 * 8);
              if (*(char *)((longlong)_Dst + lVar22) == '\0') {
                *(undefined1 *)((longlong)_Dst + lVar22) = 1;
                *(double *)(puVar12 + lVar22 * 8) = dVar3 * dVar2;
                *(longlong *)(puVar13 + lVar17 * 8) = lVar22;
                lVar17 = lVar17 + 1;
              }
              else {
                *(double *)(puVar12 + lVar22 * 8) =
                     dVar3 * dVar2 + *(double *)(puVar12 + lVar22 * 8);
              }
              lVar18 = lVar18 + 1;
            } while (lVar19 != lVar18);
          }
          lVar14 = lVar14 + 1;
        } while (lVar14 != lVar15);
        lVar21 = local_98;
        lVar20 = local_78;
        if (0 < lVar17) {
          lVar14 = 0;
          do {
            lVar18 = local_a8;
            local_b8 = *(longlong *)(puVar13 + lVar14 * 8);
            uVar4 = *(undefined8 *)(puVar12 + *(longlong *)(puVar13 + lVar14 * 8) * 8);
            iVar5 = *(int *)(*(longlong *)(lVar20 + 0x18) + 4 + lVar21 * 4);
            local_b0 = (longlong)iVar5;
            *(int *)(*(longlong *)(lVar20 + 0x18) + 4 + lVar21 * 4) = iVar5 + 1;
            lVar15 = *(longlong *)(lVar20 + 0x38);
            *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b247f2;
            FUN_146de554a(lVar18,lVar15 + 1,0);
            lVar20 = local_78;
            lVar21 = local_98;
            *(undefined8 *)(*(longlong *)(local_78 + 0x28) + lVar15 * 8) = 0;
            *(int *)(*(longlong *)(local_78 + 0x30) + lVar15 * 4) = (int)local_b8;
            *(undefined8 *)(*(longlong *)(local_78 + 0x28) + local_b0 * 8) = uVar4;
            *(undefined1 *)((longlong)_Dst + local_b8) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar17 != lVar14);
        }
      }
      lVar21 = lVar21 + 1;
    } while (lVar21 != local_88);
  }
  if ((*(longlong *)(lVar20 + 0x20) == 0) && (lVar21 = *(longlong *)(lVar20 + 8), -1 < lVar21)) {
    uVar6 = *(undefined4 *)(lVar20 + 0x38);
    lVar14 = lVar21;
    do {
      if (*(int *)(*(longlong *)(lVar20 + 0x18) + lVar14 * 4) != 0) goto LAB_143b248e4;
      bVar11 = 0 < lVar14;
      lVar14 = lVar14 + -1;
    } while (bVar11);
    lVar14 = -1;
LAB_143b248e4:
    if (lVar14 < lVar21) {
      do {
        *(undefined4 *)(*(longlong *)(lVar20 + 0x18) + 4 + lVar14 * 4) = uVar6;
        lVar14 = lVar14 + 1;
      } while (lVar14 < *(longlong *)(lVar20 + 8));
    }
  }
  if (0x20000 < local_a0) {
    *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b24859;
    FUN_1400020a8(puVar13);
    *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b24861;
    FUN_1400020a8(puVar12);
  }
  if (0x20000 < local_80) {
    *(undefined8 *)((longlong)plVar16 + -0x28) = 0x143b2487b;
    FUN_1400020a8(_Dst);
  }
  if ((local_70 ^ (ulonglong)local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)plVar16 + -0x28) = &UNK_143b248b1;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b24920 FUN_143b24920 body=871 status=ok
// SIG undefined FUN_143b24920(void)

undefined8
FUN_143b24920(uint param_1,uint param_2,undefined4 *param_3,int *param_4,longlong param_5,
             undefined4 *param_6,longlong param_7)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  
  uVar6 = (ulonglong)param_2;
  if (0 < (int)param_2) {
    piVar4 = param_4 + 5;
    uVar8 = 0;
    do {
      iVar9 = param_6[uVar8];
      piVar4[-5] = iVar9;
      iVar9 = param_6[uVar8 + 1] - iVar9;
      piVar4[-4] = iVar9;
      if (iVar9 < 0) {
        *(undefined4 *)(param_7 + 0xc) = 0xfffffff8;
        *(int *)(param_7 + 0x10) = (int)uVar8;
        *(int *)(param_7 + 0x14) = piVar4[-4];
        return 0;
      }
      uVar8 = uVar8 + 1;
      piVar4[-3] = 1;
      piVar4[-2] = 0;
      piVar4[-1] = -1;
      piVar4[0] = -1;
      piVar4 = piVar4 + 6;
    } while (uVar6 != uVar8);
  }
  *(undefined4 *)(param_7 + 0x18) = 0;
  if (0 < (int)param_1) {
    lVar5 = 0;
    do {
      *(undefined4 *)((longlong)param_3 + lVar5 + 4) = 0;
      *(undefined4 *)((longlong)param_3 + lVar5 + 0xc) = 0xffffffff;
      lVar5 = lVar5 + 0x10;
    } while ((ulonglong)param_1 << 4 != lVar5);
  }
  if ((int)param_2 < 1) {
    uVar6 = 0;
  }
  else {
    uVar8 = 0;
    do {
      iVar9 = param_6[uVar8 + 1];
      if ((int)param_6[uVar8] < iVar9) {
        piVar4 = (int *)(param_5 + (longlong)(int)param_6[uVar8] * 4);
        iVar7 = -1;
        do {
          iVar2 = *piVar4;
          lVar5 = (longlong)iVar2;
          uVar3 = (undefined4)uVar8;
          if ((lVar5 < 0) || ((int)param_1 <= iVar2)) {
            *(undefined4 *)(param_7 + 0xc) = 0xfffffff7;
            *(undefined4 *)(param_7 + 0x10) = uVar3;
            *(int *)(param_7 + 0x14) = iVar2;
            *(uint *)(param_7 + 0x18) = param_1;
            return 0;
          }
          if ((iVar2 <= iVar7) ||
             (uVar10 = (ulonglong)(uint)param_3[lVar5 * 4 + 3], uVar8 == uVar10)) {
            *(undefined4 *)(param_7 + 0xc) = 1;
            *(undefined4 *)(param_7 + 0x10) = uVar3;
            *(int *)(param_7 + 0x14) = iVar2;
            *(int *)(param_7 + 0x18) = *(int *)(param_7 + 0x18) + 1;
            uVar10 = (ulonglong)(uint)param_3[lVar5 * 4 + 3];
          }
          piVar1 = param_4 + uVar8 * 6;
          if (uVar10 != uVar8) {
            piVar1 = param_3 + lVar5 * 4;
          }
          piVar4 = piVar4 + 1;
          piVar1[1] = piVar1[1] + (uint)(uVar10 != uVar8) * 2 + -1;
          param_3[lVar5 * 4 + 3] = uVar3;
          iVar7 = iVar2;
        } while (piVar4 < (int *)(param_5 + (longlong)iVar9 * 4));
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar6);
  }
  uVar3 = param_6[uVar6];
  *param_3 = uVar3;
  param_3[2] = uVar3;
  param_3[3] = 0xffffffff;
  if (1 < (int)param_1) {
    lVar5 = 0x10;
    do {
      iVar9 = *(int *)((longlong)param_3 + lVar5 + -0xc) +
              *(int *)((longlong)param_3 + lVar5 + -0x10);
      *(int *)((longlong)param_3 + lVar5) = iVar9;
      *(int *)((longlong)param_3 + lVar5 + 8) = iVar9;
      *(undefined4 *)((longlong)param_3 + lVar5 + 0xc) = 0xffffffff;
      lVar5 = lVar5 + 0x10;
    } while ((ulonglong)param_1 << 4 != lVar5);
  }
  if (*(int *)(param_7 + 0xc) == 1) {
    if (0 < (int)param_2) {
      uVar8 = 0;
      do {
        iVar9 = param_6[uVar8 + 1];
        if ((int)param_6[uVar8] < iVar9) {
          piVar4 = (int *)(param_5 + (longlong)(int)param_6[uVar8] * 4);
          do {
            lVar5 = (longlong)*piVar4;
            if (uVar8 != (uint)param_3[lVar5 * 4 + 3]) {
              iVar7 = param_3[lVar5 * 4 + 2];
              param_3[lVar5 * 4 + 2] = iVar7 + 1;
              *(int *)(param_5 + (longlong)iVar7 * 4) = (int)uVar8;
              param_3[lVar5 * 4 + 3] = (int)uVar8;
            }
            piVar4 = piVar4 + 1;
          } while (piVar4 < (int *)(param_5 + (longlong)iVar9 * 4));
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar6);
    }
  }
  else if (0 < (int)param_2) {
    uVar8 = 0;
    do {
      iVar9 = param_6[uVar8 + 1];
      if ((int)param_6[uVar8] < iVar9) {
        piVar4 = (int *)(param_5 + (longlong)(int)param_6[uVar8] * 4);
        do {
          iVar7 = *piVar4;
          piVar4 = piVar4 + 1;
          iVar2 = param_3[(longlong)iVar7 * 4 + 2];
          param_3[(longlong)iVar7 * 4 + 2] = iVar2 + 1;
          *(int *)(param_5 + (longlong)iVar2 * 4) = (int)uVar8;
        } while (piVar4 < (int *)(param_5 + (longlong)iVar9 * 4));
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar6);
  }
  if (0 < (int)param_1) {
    lVar5 = 0;
    do {
      *(undefined4 *)((longlong)param_3 + lVar5 + 0xc) = 0;
      *(undefined4 *)((longlong)param_3 + lVar5 + 8) =
           *(undefined4 *)((longlong)param_3 + lVar5 + 4);
      lVar5 = lVar5 + 0x10;
    } while ((ulonglong)param_1 << 4 != lVar5);
  }
  if (*(int *)(param_7 + 0xc) == 1) {
    *param_4 = 0;
    *param_6 = 0;
    if (1 < (int)param_2) {
      uVar8 = 1;
      do {
        piVar4 = param_4 + 1;
        iVar9 = *param_4;
        param_4[6] = *piVar4 + iVar9;
        param_4 = param_4 + 6;
        param_6[uVar8] = *piVar4 + iVar9;
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
    }
    if (0 < (int)param_1) {
      uVar6 = 0;
      do {
        if (0 < (longlong)(int)param_3[uVar6 * 4 + 1]) {
          piVar4 = (int *)(param_5 + (longlong)(int)param_3[uVar6 * 4] * 4);
          piVar1 = piVar4 + (int)param_3[uVar6 * 4 + 1];
          do {
            iVar9 = *piVar4;
            piVar4 = piVar4 + 1;
            iVar7 = param_6[iVar9];
            param_6[iVar9] = iVar7 + 1;
            *(int *)(param_5 + (longlong)iVar7 * 4) = (int)uVar6;
          } while (piVar4 < piVar1);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != param_1);
    }
  }
  return 1;
}



// FUNCTION 143b24c87 FUN_143b24c87 body=727 status=ok
// SIG undefined FUN_143b24c87(void)

void FUN_143b24c87(uint param_1,ulonglong param_2,longlong param_3,longlong param_4,longlong param_5
                  ,undefined4 *param_6,double *param_7,uint *param_8,undefined4 *param_9,
                  int *param_10)

{
  undefined4 *puVar1;
  bool bVar2;
  ulonglong uVar3;
  int *piVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  uint *puVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  int *piVar18;
  int local_48;
  uint local_44;
  
  iVar6 = (int)param_2;
  iVar11 = (int)((double)iVar6 * *param_7);
  if (iVar6 < (int)((double)iVar6 * *param_7)) {
    iVar11 = iVar6;
  }
  if (iVar11 < 1) {
    iVar11 = 0;
  }
  uVar13 = (int)((double)(int)param_1 * param_7[1]);
  if ((int)param_1 < (int)((double)(int)param_1 * param_7[1])) {
    uVar13 = param_1;
  }
  local_48 = 0;
  if ((int)uVar13 < 1) {
    uVar13 = 0;
  }
  uVar16 = param_2 & 0xffffffff;
  uVar9 = 0;
  if (0 < iVar6) {
    uVar3 = uVar16 + 1;
    puVar10 = (uint *)(param_4 + uVar16 * 0x18 + -0xc);
    uVar9 = param_2 & 0xffffffff;
    do {
      if (puVar10[-2] == 0) {
        uVar7 = (int)uVar9 - 1;
        uVar9 = (ulonglong)uVar7;
        *puVar10 = uVar7;
        puVar10[-3] = 0xffffffff;
      }
      uVar3 = uVar3 - 1;
      puVar10 = puVar10 + -6;
      uVar5 = uVar16;
    } while (1 < uVar3);
    do {
      uVar3 = uVar5 - 1;
      lVar17 = (longlong)*(int *)(param_4 + uVar3 * 0x18);
      if (-1 < lVar17) {
        puVar1 = (undefined4 *)(param_4 + uVar3 * 0x18);
        if ((int)uVar13 < (int)puVar1[1]) {
          uVar7 = (int)uVar9 - 1;
          uVar9 = (ulonglong)uVar7;
          puVar1[3] = uVar7;
          piVar18 = (int *)(lVar17 * 4 + param_5);
          piVar4 = piVar18 + (uint)puVar1[1];
          do {
            iVar15 = *piVar18;
            piVar18 = piVar18 + 1;
            piVar12 = (int *)(param_3 + 8 + (longlong)iVar15 * 0x10);
            *piVar12 = *piVar12 + -1;
          } while (piVar18 < piVar4);
          *puVar1 = 0xffffffff;
        }
      }
      bVar2 = 1 < (longlong)uVar5;
      uVar5 = uVar3;
    } while (bVar2);
  }
  uVar8 = (undefined4)uVar9;
  local_44 = 0;
  if (0 < (int)param_1) {
    lVar17 = 0;
    local_48 = 0;
    local_44 = param_1;
    do {
      iVar15 = *(int *)(param_3 + 8 + lVar17);
      if (iVar11 < iVar15 || iVar15 == 0) {
        *(undefined4 *)(param_3 + 0xc + lVar17) = 0xffffffff;
        local_44 = local_44 - 1;
      }
      else if (local_48 <= iVar15) {
        local_48 = iVar15;
      }
      lVar17 = lVar17 + 0x10;
    } while ((ulonglong)param_1 << 4 != lVar17);
  }
  uVar3 = uVar16;
  if (iVar6 < 1) {
    *param_6 = 0xffffffff;
  }
  else {
    do {
      uVar5 = uVar3 - 1;
      lVar17 = (longlong)*(int *)(param_4 + uVar5 * 0x18);
      if (-1 < lVar17) {
        puVar10 = (uint *)(param_4 + uVar5 * 0x18);
        piVar4 = (int *)(param_5 + lVar17 * 4);
        piVar18 = piVar4 + (int)puVar10[1];
        uVar14 = 0;
        piVar12 = piVar4;
        while (piVar12 < piVar18) {
          iVar11 = *piVar12;
          piVar12 = piVar12 + 1;
          lVar17 = (longlong)iVar11 * 0x10;
          if (-1 < *(int *)(param_3 + 0xc + lVar17)) {
            *piVar4 = iVar11;
            piVar4 = piVar4 + 1;
            uVar13 = ((uint)uVar14 + *(int *)(lVar17 + param_3 + 8)) - 1;
            uVar14 = (ulonglong)uVar13;
            if (iVar6 < (int)uVar13) {
              uVar14 = param_2 & 0xffffffff;
            }
          }
        }
        uVar13 = (uint)((longlong)piVar4 - (param_5 + (ulonglong)*puVar10 * 4) >> 2);
        if (uVar13 == 0) {
          uVar13 = (int)uVar9 - 1;
          uVar9 = (ulonglong)uVar13;
          puVar10[3] = uVar13;
          *puVar10 = 0xffffffff;
        }
        else {
          puVar10[1] = uVar13;
          puVar10[3] = (uint)uVar14;
        }
      }
      uVar8 = (undefined4)uVar9;
      bVar2 = 1 < (longlong)uVar3;
      uVar3 = uVar5;
    } while (bVar2);
    memset(param_6,(int)CONCAT71((int7)(param_2 >> 8),0xff),uVar16 * 4 + 4);
    piVar4 = (int *)(param_4 + uVar16 * 0x18 + -4);
    do {
      if (-1 < piVar4[-5]) {
        iVar11 = piVar4[-2];
        iVar6 = param_6[iVar11];
        piVar4[-1] = -1;
        *piVar4 = iVar6;
        if ((longlong)iVar6 == -1) {
          iVar15 = (int)(uVar16 - 1);
        }
        else {
          iVar15 = (int)uVar16 + -1;
          *(int *)(param_4 + 0x10 + (longlong)iVar6 * 0x18) = iVar15;
        }
        param_6[iVar11] = iVar15;
      }
      piVar4 = piVar4 + -6;
      bVar2 = 1 < uVar16;
      uVar16 = uVar16 - 1;
    } while (bVar2);
  }
  *param_9 = uVar8;
  *param_8 = local_44;
  *param_10 = local_48;
  return;
}



// FUNCTION 143b24f5e FUN_143b24f5e body=2245 status=ok
// SIG undefined FUN_143b24f5e(void)

int FUN_143b24f5e(uint param_1,uint param_2,int param_3,longlong param_4,longlong param_5,
                 uint *param_6,longlong param_7,int param_8,int param_9,int param_10)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint *puVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  uint *puVar19;
  undefined4 *puVar20;
  uint *puVar21;
  int iVar22;
  int *piVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  ulonglong uVar27;
  uint *puVar28;
  int *piVar29;
  uint *puVar30;
  int local_c8;
  int local_c4;
  uint local_bc;
  uint *local_b0;
  ulonglong local_88;
  
  if (0 < (int)param_1) {
    lVar12 = 0;
    do {
      if (-1 < *(int *)(param_4 + 0xc + lVar12)) {
        *(undefined4 *)(param_4 + 0xc + lVar12) = 0;
      }
      lVar12 = lVar12 + 0x10;
    } while ((ulonglong)param_1 << 4 != lVar12);
  }
  if (param_8 < 1) {
    iVar16 = 0;
  }
  else {
    uVar7 = (ulonglong)param_2;
    lVar12 = (ulonglong)param_1 << 4;
    iVar25 = 1;
    iVar16 = 0;
    uVar24 = 0;
    local_88 = 0;
    do {
      if ((int)local_88 < (int)param_2) {
        uVar8 = (ulonglong)(int)local_88;
        do {
          local_88 = uVar8;
          if (*(int *)(param_7 + uVar8 * 4) != -1) break;
          uVar8 = uVar8 + 1;
          local_88 = uVar7;
        } while (uVar7 != uVar8);
      }
      lVar9 = (longlong)*(int *)(param_7 + (longlong)(int)local_88 * 4);
      iVar6 = *(int *)(param_5 + 0x14 + lVar9 * 0x18);
      *(int *)(param_7 + (longlong)(int)local_88 * 4) = iVar6;
      if ((longlong)iVar6 != -1) {
        *(undefined4 *)(param_5 + 0x10 + (longlong)iVar6 * 0x18) = 0xffffffff;
      }
      piVar18 = (int *)(lVar9 * 0x18 + param_5);
      iVar6 = piVar18[2];
      iVar11 = piVar18[3];
      piVar18[3] = uVar24;
      uVar24 = uVar24 + iVar6;
      iVar15 = param_2 - uVar24;
      if (iVar11 <= (int)(param_2 - uVar24)) {
        iVar15 = iVar11;
      }
      if (param_3 <= iVar15 + param_10) {
        puVar10 = param_6;
        if (0 < (int)param_2) {
          uVar8 = 0;
          do {
            uVar4 = *(uint *)(param_5 + uVar8 * 0x18);
            if (-1 < (int)uVar4) {
              puVar19 = (uint *)(uVar8 * 0x18 + param_5);
              uVar27 = (ulonglong)((longlong)puVar10 - (longlong)param_6) >> 2;
              *puVar19 = (uint)uVar27;
              uVar17 = puVar19[1];
              if (0 < (int)uVar17) {
                lVar9 = 0;
                do {
                  if (-1 < *(int *)(param_4 + 0xc +
                                   (longlong)(int)param_6[(ulonglong)uVar4 + lVar9] * 0x10)) {
                    *puVar10 = param_6[(ulonglong)uVar4 + lVar9];
                    puVar10 = puVar10 + 1;
                  }
                  lVar9 = lVar9 + 1;
                } while (uVar17 != (uint)lVar9);
                uVar27 = (ulonglong)*puVar19;
              }
              puVar19[1] = (uint)((ulonglong)((longlong)puVar10 - (longlong)(param_6 + uVar27)) >> 2
                                 );
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 != uVar7);
        }
        if (0 < (int)param_1) {
          uVar4 = 0xffffffff;
          lVar9 = 0;
          do {
            if (-1 < *(int *)(param_4 + 0xc + lVar9)) {
              if (*(int *)(param_4 + 4 + lVar9) == 0) {
                *(undefined4 *)(param_4 + 0xc + lVar9) = 0xffffffff;
              }
              else {
                *(uint *)(param_4 + 0xc + lVar9) = param_6[*(int *)(param_4 + lVar9)];
                param_6[*(int *)(param_4 + lVar9)] = uVar4;
              }
            }
            lVar9 = lVar9 + 0x10;
            uVar4 = uVar4 - 1;
          } while (lVar12 != lVar9);
        }
        puVar19 = puVar10;
        while (puVar10 < param_6 + param_10) {
          if ((int)*puVar10 < 0) {
            lVar9 = (ulonglong)~*puVar10 * 0x10;
            *puVar10 = *(uint *)(param_4 + 0xc + lVar9);
            uVar8 = (ulonglong)((longlong)puVar19 - (longlong)param_6) >> 2;
            *(int *)(param_4 + lVar9) = (int)uVar8;
            iVar25 = *(int *)(param_4 + 4 + lVar9);
            if (0 < iVar25) {
              do {
                if (-1 < *(int *)(param_5 + (longlong)(int)*puVar10 * 0x18)) {
                  *puVar19 = *puVar10;
                  puVar19 = puVar19 + 1;
                }
                puVar10 = puVar10 + 1;
                iVar25 = iVar25 + -1;
              } while (iVar25 != 0);
              uVar8 = (ulonglong)*(uint *)(param_4 + lVar9);
            }
            ((uint *)(param_4 + lVar9))[1] =
                 (uint)((ulonglong)((longlong)puVar19 - (longlong)(param_6 + uVar8)) >> 2);
          }
          else {
            puVar10 = puVar10 + 1;
          }
        }
        param_10 = (int)((ulonglong)((longlong)puVar19 - (longlong)param_6) >> 2);
        iVar16 = iVar16 + 1;
        iVar25 = 1;
        if (0 < (int)param_1) {
          lVar9 = 0;
          do {
            if (-1 < *(int *)(param_4 + 0xc + lVar9)) {
              *(undefined4 *)(param_4 + 0xc + lVar9) = 0;
            }
            lVar9 = lVar9 + 0x10;
          } while (lVar12 != lVar9);
        }
      }
      piVar18[2] = -iVar6;
      puVar10 = param_6 + *piVar18;
      puVar19 = puVar10 + piVar18[1];
      local_c8 = 0;
      local_c4 = param_10;
      while (puVar10 < puVar19) {
        uVar4 = *puVar10;
        puVar10 = puVar10 + 1;
        if (-1 < *(int *)(param_4 + 0xc + (longlong)(int)uVar4 * 0x10)) {
          piVar23 = (int *)((longlong)(int)uVar4 * 0x10 + param_4);
          lVar9 = (longlong)piVar23[1];
          if (0 < lVar9) {
            puVar21 = param_6 + *piVar23;
            puVar1 = puVar21 + lVar9;
            do {
              uVar4 = *puVar21;
              iVar11 = *(int *)(param_5 + 8 + (longlong)(int)uVar4 * 0x18);
              if ((0 < iVar11) &&
                 (piVar23 = (int *)((longlong)(int)uVar4 * 0x18 + param_5), -1 < *piVar23)) {
                piVar23[2] = -iVar11;
                lVar9 = (longlong)local_c4;
                local_c4 = local_c4 + 1;
                param_6[lVar9] = uVar4;
                local_c8 = local_c8 + iVar11;
              }
              puVar21 = puVar21 + 1;
            } while (puVar21 < puVar1);
          }
        }
      }
      piVar18[2] = iVar6;
      if (param_9 <= local_c8) {
        param_9 = local_c8;
      }
      if (0 < (longlong)piVar18[1]) {
        puVar10 = param_6 + *piVar18;
        puVar19 = puVar10 + piVar18[1];
        do {
          uVar4 = *puVar10;
          puVar10 = puVar10 + 1;
          *(undefined4 *)(param_4 + 0xc + (longlong)(int)uVar4 * 0x10) = 0xffffffff;
        } while (puVar10 < puVar19);
      }
      uVar4 = local_c4 - param_10;
      if (uVar4 == 0 || local_c4 < param_10) {
        local_b0 = param_6 + param_10;
        puVar10 = local_b0 + (int)uVar4;
        local_bc = 0xffffffff;
      }
      else {
        local_bc = param_6[*piVar18];
        local_b0 = param_6 + param_10;
        puVar10 = local_b0 + uVar4;
        puVar19 = local_b0;
        do {
          piVar23 = (int *)((longlong)(int)*puVar19 * 0x18 + param_5);
          iVar6 = piVar23[2];
          iVar11 = piVar23[5];
          piVar23[2] = -iVar6;
          iVar15 = piVar23[4];
          if ((longlong)iVar15 == -1) {
            piVar29 = (int *)(param_7 + (longlong)piVar23[3] * 4);
          }
          else {
            piVar29 = (int *)((longlong)iVar15 * 0x18 + 0x14 + param_5);
          }
          *piVar29 = iVar11;
          if (iVar11 != -1) {
            *(int *)(param_5 + 0x10 + (longlong)iVar11 * 0x18) = iVar15;
          }
          if (0 < (longlong)piVar23[1]) {
            puVar21 = param_6 + *piVar23;
            puVar1 = puVar21 + piVar23[1];
            do {
              iVar11 = *(int *)(param_4 + 0xc + (longlong)(int)*puVar21 * 0x10);
              if (-1 < iVar11) {
                lVar9 = (longlong)(int)*puVar21 * 0x10 + param_4;
                iVar11 = iVar11 - iVar25;
                if (iVar11 < 0) {
                  iVar11 = *(int *)(lVar9 + 8);
                }
                iVar11 = iVar11 + iVar6;
                *(uint *)(lVar9 + 0xc) = -(uint)(iVar11 == 0) | iVar11 + iVar25;
              }
              puVar21 = puVar21 + 1;
            } while (puVar21 < puVar1);
          }
          puVar19 = puVar19 + 1;
          puVar21 = local_b0;
        } while (puVar19 < puVar10);
        do {
          uVar4 = *puVar21;
          puVar30 = (uint *)((longlong)(int)uVar4 * 0x18 + param_5);
          puVar19 = param_6 + (int)*puVar30;
          puVar1 = puVar19 + (int)puVar30[1];
          uVar5 = 0;
          puVar28 = puVar19;
          uVar17 = 0;
          while (puVar19 < puVar1) {
            uVar26 = *puVar19;
            puVar19 = puVar19 + 1;
            iVar6 = *(int *)(param_4 + 0xc + (longlong)(int)uVar26 * 0x10);
            if (-1 < iVar6) {
              *puVar28 = uVar26;
              puVar28 = puVar28 + 1;
              uVar5 = uVar5 + uVar26;
              uVar17 = (uVar17 - iVar25) + iVar6;
              if ((int)param_2 < (int)uVar17) {
                uVar17 = param_2;
              }
            }
          }
          uVar26 = (uint)((ulonglong)((longlong)puVar28 - (longlong)(param_6 + *puVar30)) >> 2);
          puVar30[1] = uVar26;
          if (uVar26 == 0) {
            *puVar30 = 0xffffffff;
            local_c8 = local_c8 - puVar30[2];
            puVar30[3] = uVar24;
            uVar24 = uVar24 + puVar30[2];
          }
          else {
            puVar30[3] = uVar17;
            uVar8 = (ulonglong)uVar5 % (ulonglong)(param_2 + 1);
            iVar6 = *(int *)(param_7 + uVar8 * 4);
            lVar9 = (longlong)iVar6;
            if (lVar9 < 0) {
              uVar17 = -iVar6 - 2;
              *(uint *)(param_7 + uVar8 * 4) = -2 - uVar4;
            }
            else {
              uVar17 = *(uint *)(param_5 + 0x10 + lVar9 * 0x18);
              *(uint *)(param_5 + 0x10 + lVar9 * 0x18) = uVar4;
            }
            puVar30[5] = uVar17;
            puVar30[4] = (uint)uVar8;
          }
          puVar21 = puVar21 + 1;
          puVar19 = local_b0;
        } while (puVar21 < puVar10);
        do {
          if (-1 < *(int *)(param_5 + (longlong)(int)*puVar19 * 0x18)) {
            lVar9 = (longlong)*(int *)((longlong)(int)*puVar19 * 0x18 + param_5 + 0x10);
            iVar6 = *(int *)(param_7 + lVar9 * 4);
            lVar13 = (longlong)iVar6;
            if (lVar13 < 0) {
              iVar11 = -2 - iVar6;
            }
            else {
              iVar11 = *(int *)(param_5 + 0x10 + lVar13 * 0x18);
            }
            while (iVar11 != -1) {
              iVar15 = *(int *)(param_5 + 0x14 + (longlong)iVar11 * 0x18);
              if (iVar15 == -1) break;
              piVar23 = (int *)((longlong)iVar11 * 0x18 + param_5);
              iVar2 = piVar23[1];
              iVar3 = iVar11;
              do {
                piVar29 = (int *)((longlong)iVar15 * 0x18 + param_5);
                iVar22 = iVar15;
                if ((piVar29[1] == iVar2) && (piVar29[3] == piVar23[3])) {
                  if (iVar2 < 1) {
                    lVar14 = 0;
LAB_143b255f6:
                    if ((int)lVar14 != iVar2) goto LAB_143b25624;
                  }
                  else {
                    lVar14 = 0;
                    do {
                      if (param_6[*piVar23 + lVar14] != param_6[*piVar29 + lVar14])
                      goto LAB_143b255f6;
                      lVar14 = lVar14 + 1;
                    } while (iVar2 != (int)lVar14);
                  }
                  piVar23[2] = piVar23[2] + piVar29[2];
                  piVar29[2] = iVar11;
                  *piVar29 = -2;
                  piVar29[3] = -1;
                  *(int *)(param_5 + 0x14 + (longlong)iVar3 * 0x18) = piVar29[5];
                  iVar22 = iVar3;
                }
LAB_143b25624:
                iVar15 = piVar29[5];
                iVar3 = iVar22;
              } while (iVar15 != -1);
              iVar11 = piVar23[5];
            }
            puVar20 = (undefined4 *)(param_5 + 0x10 + lVar13 * 0x18);
            if (iVar6 < 0) {
              puVar20 = (undefined4 *)(param_7 + lVar9 * 4);
            }
            *puVar20 = 0xffffffff;
          }
          puVar19 = puVar19 + 1;
        } while (puVar19 < puVar10);
      }
      iVar6 = param_9 + iVar25 + 1;
      iVar25 = 1;
      if (iVar6 < (int)(param_2 ^ 0x7fffffff)) {
        iVar25 = iVar6;
      }
      *piVar18 = -1;
      puVar19 = local_b0;
      puVar21 = local_b0;
      if ((0 < (int)param_1) && ((int)(param_2 ^ 0x7fffffff) <= iVar6)) {
        lVar9 = 0;
        do {
          if (-1 < *(int *)(param_4 + 0xc + lVar9)) {
            *(undefined4 *)(param_4 + 0xc + lVar9) = 0;
          }
          lVar9 = lVar9 + 0x10;
        } while (lVar12 != lVar9);
        iVar25 = 1;
      }
      while (puVar21 < puVar10) {
        uVar4 = *puVar21;
        puVar21 = puVar21 + 1;
        if (-1 < *(int *)(param_5 + (longlong)(int)uVar4 * 0x18)) {
          piVar18 = (int *)((longlong)(int)uVar4 * 0x18 + param_5);
          *puVar19 = uVar4;
          iVar6 = piVar18[1];
          piVar18[1] = iVar6 + 1;
          param_6[(longlong)*piVar18 + (longlong)iVar6] = local_bc;
          uVar5 = param_2 - (uVar24 + piVar18[2]);
          uVar17 = (piVar18[3] + local_c8) - piVar18[2];
          if ((int)uVar5 < (int)uVar17) {
            uVar17 = uVar5;
          }
          piVar18[3] = uVar17;
          iVar6 = *(int *)(param_7 + (longlong)(int)uVar17 * 4);
          piVar18[5] = iVar6;
          piVar18[4] = -1;
          if ((longlong)iVar6 != -1) {
            *(uint *)(param_5 + 0x10 + (longlong)iVar6 * 0x18) = uVar4;
          }
          puVar19 = puVar19 + 1;
          *(uint *)(param_7 + (longlong)(int)uVar17 * 4) = uVar4;
          iVar6 = (int)local_88;
          local_88 = local_88 & 0xffffffff;
          if ((int)uVar17 < iVar6) {
            local_88 = (ulonglong)uVar17;
          }
        }
      }
      if (0 < local_c8) {
        lVar9 = (longlong)(int)local_bc * 0x10;
        *(int *)(param_4 + lVar9) = param_10;
        *(int *)(param_4 + 4 + lVar9) =
             (int)((ulonglong)((longlong)puVar19 - (longlong)local_b0) >> 2);
        *(int *)(param_4 + 8 + lVar9) = local_c8;
        *(undefined4 *)(param_4 + 0xc + lVar9) = 0;
      }
      param_10 = local_c4;
    } while ((int)uVar24 < param_8);
  }
  return iVar16;
}



// FUNCTION 143b25823 FUN_143b25823 body=140 status=ok
// SIG undefined FUN_143b25823(void)

void FUN_143b25823(uint param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int *piVar4;
  ulonglong uVar5;
  int iVar6;
  
  if (0 < (int)param_1) {
    uVar3 = 0;
    do {
      if ((*(int *)(param_2 + uVar3 * 0x18) != -1) && (*(int *)(param_2 + uVar3 * 0x18 + 0xc) == -1)
         ) {
        uVar5 = uVar3 & 0xffffffff;
        do {
          uVar2 = *(uint *)(param_2 + 8 + (longlong)(int)uVar5 * 0x18);
          uVar5 = (ulonglong)(int)uVar2;
        } while (*(int *)(param_2 + uVar5 * 0x18) != -1);
        lVar1 = param_2 + uVar5 * 0x18;
        iVar6 = *(int *)(lVar1 + 0xc);
        uVar5 = uVar3 & 0xffffffff;
        do {
          *(int *)(param_2 + 0xc + (longlong)(int)uVar5 * 0x18) = iVar6;
          iVar6 = iVar6 + 1;
          *(uint *)(param_2 + 8 + (longlong)(int)uVar5 * 0x18) = uVar2;
          uVar5 = (ulonglong)uVar2;
        } while (*(int *)(lVar1 + 0xc) == -1);
        *(int *)(lVar1 + 0xc) = iVar6;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_1);
    piVar4 = (int *)(param_2 + 0xc);
    uVar3 = 0;
    do {
      *(int *)(param_3 + (longlong)*piVar4 * 4) = (int)uVar3;
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 6;
    } while (param_1 != uVar3);
  }
  return;
}



// FUNCTION 143b258b0 FUN_143b258b0 body=162 status=ok
// SIG undefined FUN_143b258b0(void)

void FUN_143b258b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_61;
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = param_1[1];
  local_60[0] = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_50 = param_2;
  FUN_1483db1d4(&local_78,local_60);
  local_58 = *param_1;
  local_48 = param_1[1];
  local_50 = param_2;
  local_40 = &local_78;
  FUN_1483db2ea(param_3,local_60,&local_61);
  FUN_1400020a8(local_78);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b2597e FUN_143b2597e body=29 status=ok
// SIG undefined FUN_143b2597e(void)

undefined8 FUN_143b2597e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b2599c FUN_143b2599c body=72 status=ok
// SIG undefined FUN_143b2599c(void)

void FUN_143b2599c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_1;
  local_10 = param_2;
  FUN_1483dba19(param_3,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b25a10 FUN_143b25a10 body=29 status=ok
// SIG undefined FUN_143b25a10(void)

undefined8 FUN_143b25a10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b25a2e FUN_143b25a2e body=90 status=ok
// SIG undefined FUN_143b25a2e(void)

longlong * FUN_143b25a2e(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  
  FUN_14839d3b3(param_1,param_2 + 1);
  plVar1 = (longlong *)*param_1;
  (**(code **)(*plVar1 + 0x28))(plVar1,*param_2,*(undefined1 *)((longlong)param_2 + 0xc));
  cVar2 = (**(code **)(*plVar1 + 0x38))(plVar1);
  if ((cVar2 == '\0') && (*param_1 = 0, plVar1 != (longlong *)0x0)) {
    (**(code **)*plVar1)(plVar1,1);
  }
  return param_1;
}



// FUNCTION 143b25ab2 FUN_143b25ab2 body=29 status=ok
// SIG undefined FUN_143b25ab2(void)

undefined8 FUN_143b25ab2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b25b02 FUN_143b25b02 body=29 status=ok
// SIG undefined FUN_143b25b02(void)

undefined8 FUN_143b25b02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b25b20 FUN_143b25b20 body=777 status=ok
// SIG undefined FUN_143b25b20(void)

void FUN_143b25b20(longlong *param_1,int *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8 [3];
  undefined1 local_c9;
  ulonglong *local_c8;
  longlong *local_c0;
  undefined1 *local_b8;
  ulonglong *local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  longlong *local_60;
  ulonglong local_48 [2];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  iVar5 = *param_2;
  lVar3 = (longlong)iVar5;
  lVar1 = *param_1;
  local_98 = *(longlong *)(lVar1 + 0x20);
  if (local_98 == 0) {
    local_e8[0] = 0;
    local_e8[1] = 0;
    local_88 = *(longlong **)(lVar1 + 0x28);
    local_98 = local_88[1];
    local_a0 = lVar3 * local_98 * 8 + *local_88;
    local_80 = 0;
    local_78 = lVar3;
    local_70 = local_98;
    FUN_1483dbc52(local_e8,&local_a0,&local_c8);
  }
  else {
    iVar5 = *(int *)(*(longlong *)param_1[1] + lVar3 * 4);
    local_90 = (longlong)iVar5;
    local_e8[0] = 0;
    local_e8[1] = 0;
    local_a0 = local_a0 & 0xffffffffffffff00;
    FUN_146de3c6e(local_e8,*(undefined8 *)(local_98 + 0x10),1);
    FUN_1483dbb86(local_e8,&local_a0);
  }
  local_f8 = 0;
  uStack_f0 = 0;
  if (*(longlong *)(lVar1 + 8) == 0) {
    local_78 = param_1[3];
    local_88 = *(longlong **)(local_78 + 8);
    local_90 = *(longlong *)(local_78 + 0x10);
    local_a0 = local_a0 & 0xffffffffffffff00;
    local_80 = 0xbff0000000000000;
    local_68 = local_e8;
    FUN_1483dbf63(&local_f8);
  }
  else {
    local_70 = param_1[2];
    local_68 = (longlong *)param_1[3];
    local_90 = local_68[2];
    local_88 = (longlong *)&DAT_00000001;
    local_80 = 0xbff0000000000000;
    local_60 = local_e8;
    FUN_1483dbd50(&local_f8,&local_a0,&local_c8);
  }
  local_108 = 0;
  uStack_100 = 0;
  (**(code **)(**(longlong **)(lVar1 + 0x40) + 0x20))(*(longlong **)(lVar1 + 0x40),&local_f8);
  cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x40) + 0x38))();
  if (cVar2 == '\0') {
    *(undefined1 *)(*(longlong *)param_1[6] + (longlong)iVar5) = 0;
  }
  else if (*(char *)param_1[4] == '\0') {
    plVar4 = *(longlong **)(lVar1 + 0x18);
    if (0 < (int)plVar4[1]) {
      lVar3 = 0;
      do {
        *(undefined8 *)
         (((longlong *)param_1[5])[1] * (longlong)iVar5 * 8 + *(longlong *)param_1[5] +
         (longlong)*(int *)(*plVar4 + lVar3 * 4) * 8) = *(undefined8 *)(local_e8[0] + lVar3 * 8);
        lVar3 = lVar3 + 1;
        plVar4 = *(longlong **)(lVar1 + 0x18);
      } while (lVar3 < (int)plVar4[1]);
    }
    if (0 < *(int *)(lVar1 + 0x38)) {
      lVar3 = 0;
      do {
        *(undefined8 *)
         (((longlong *)param_1[5])[1] * (longlong)iVar5 * 8 + *(longlong *)param_1[5] +
         (longlong)*(int *)(*(longlong *)(lVar1 + 0x30) + lVar3 * 4) * 8) =
             *(undefined8 *)(local_108 + lVar3 * 8);
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(lVar1 + 0x38));
    }
  }
  else {
    local_88 = (longlong *)param_1[5];
    local_78 = (longlong)iVar5;
    local_98 = local_88[1];
    local_a0 = local_98 * local_78 * 8 + *local_88;
    local_b0 = &local_a0;
    local_80 = 0;
    local_c0 = &local_a8;
    local_a8 = local_108;
    local_c8 = local_48;
    local_b8 = &local_c9;
    local_70 = local_98;
    local_48[0] = local_a0;
    local_38 = local_98;
    FUN_1483dc148();
  }
  FUN_1400020a8(local_108);
  FUN_1400020a8(local_f8);
  FUN_1400020a8(local_e8[0]);
  if ((local_30 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b25e2a FUN_143b25e2a body=104 status=ok
// SIG undefined FUN_143b25e2a(void)

void FUN_143b25e2a(longlong *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  
  uVar1 = *param_2;
  cVar3 = FUN_146c0b51e(*param_1,uVar1);
  if (((cVar3 == '\0') || ((int)uVar1 < 0)) ||
     (lVar2 = *param_1, *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24) <= (int)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 9) * 8) +
                               (ulonglong)(uVar1 & 0x1ff) * 2) - 2U) < 0xfffd;
  }
  *(bool *)(*(longlong *)param_1[1] + (longlong)(int)uVar1) = bVar4;
  return;
}



// FUNCTION 143b25e92 FUN_143b25e92 body=536 status=ok
// SIG undefined FUN_143b25e92(void)

void FUN_143b25e92(char *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  ulonglong local_90;
  uint local_88;
  undefined4 uStack_84;
  double local_80;
  double local_78;
  undefined1 *local_70;
  ulonglong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar5 = *param_2;
  if (((((longlong)(int)uVar5 < 0) ||
       (lVar6 = *(longlong *)(param_1 + 8),
       *(int *)(lVar6 + 0x20) * 0x200 + *(int *)(lVar6 + 0x24) <= (int)uVar5)) ||
      (0xfffc < (ushort)(*(short *)(*(longlong *)
                                     (*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar5 >> 9) * 8) +
                                   (ulonglong)(uVar5 & 0x1ff) * 2) - 2U))) ||
     (*(char *)(**(longlong **)(param_1 + 0x18) + (ulonglong)uVar5) == '\x01')) {
    lVar6 = *(longlong *)**(undefined8 **)(param_1 + 0x20);
    lVar8 = (longlong)(int)uVar5 * 0x18;
    lVar7 = *(longlong *)**(undefined8 **)(param_1 + 0x28);
    *(undefined8 *)(lVar7 + 0x10 + lVar8) = *(undefined8 *)(lVar6 + 0x10 + lVar8);
    puVar1 = (undefined8 *)(lVar6 + lVar8);
    uVar9 = puVar1[1];
    puVar2 = (undefined8 *)(lVar7 + lVar8);
    *puVar2 = *puVar1;
    puVar2[1] = uVar9;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_c8);
  }
  if (*param_1 == '\x01') {
    local_90 = *(ulonglong *)(param_1 + 0x20);
    local_68 = &local_90;
    local_70 = &LAB_143b260ac;
    FUN_1482cacfa(&local_88,lVar6,uVar5);
  }
  else {
    local_90 = *(ulonglong *)(param_1 + 0x20);
    local_68 = &local_90;
    local_70 = &LAB_143b260d0;
    local_a8 = 0x3ff0000000000000;
    local_a0 = 0;
    FUN_1482cc563(&local_88,lVar6,uVar5);
  }
  dVar10 = (double)CONCAT44(uStack_84,local_88);
  local_90 = local_90 & 0xffffffffffffff00;
  local_88 = uVar5;
  dVar11 = (double)(*(code *)**(undefined8 **)(param_1 + 0x10))
                             ((*(undefined8 **)(param_1 + 0x10))[1]);
  lVar6 = *(longlong *)**(undefined8 **)(param_1 + 0x20);
  lVar8 = (ulonglong)uVar5 * 0x18;
  dVar12 = 1.0 - dVar11;
  dVar3 = *(double *)(lVar6 + 0x10 + lVar8);
  dVar4 = *(double *)(lVar6 + 8 + lVar8);
  lVar7 = *(longlong *)**(undefined8 **)(param_1 + 0x28);
  *(double *)(lVar7 + lVar8) = dVar12 * *(double *)(lVar6 + lVar8) + dVar10 * dVar11;
  *(double *)(lVar7 + 8 + lVar8) = dVar4 * dVar12 + local_80 * dVar11;
  *(double *)(lVar7 + 0x10 + lVar8) = dVar3 * dVar12 + local_78 * dVar11;
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b260f4 FUN_143b260f4 body=312 status=ok
// SIG undefined FUN_143b260f4(void)

void FUN_143b260f4(undefined8 *param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar3 = *(int *)(*(longlong *)param_1[5] + (longlong)*param_2 * 4);
  local_60 = param_1[4];
  local_50 = &local_60;
  local_88 = &local_58;
  local_58 = &LAB_143b2622e;
  local_78 = param_1[2];
  local_68 = &local_78;
  local_70 = &LAB_143b2623c;
  FUN_1482cafba(&local_48,*param_1,iVar3);
  local_78 = CONCAT71(local_78._1_7_,1);
  local_60 = CONCAT44(local_60._4_4_,iVar3);
  dVar7 = (double)(**(code **)param_1[1])(((undefined8 *)param_1[1])[1],&local_60,&local_78);
  lVar4 = **(longlong **)param_1[2];
  lVar6 = (longlong)iVar3 * 0x18;
  dVar8 = 1.0 - dVar7;
  dVar1 = *(double *)(lVar4 + 0x10 + lVar6);
  dVar2 = *(double *)(lVar4 + 8 + lVar6);
  lVar5 = **(longlong **)param_1[3];
  *(double *)(lVar5 + lVar6) = dVar8 * *(double *)(lVar4 + lVar6) + dVar7 * local_48;
  *(double *)(lVar5 + 8 + lVar6) = dVar2 * dVar8 + local_40 * dVar7;
  *(double *)(lVar5 + 0x10 + lVar6) = dVar1 * dVar8 + local_38 * dVar7;
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b26304 FUN_143b26304 body=55 status=ok
// SIG undefined FUN_143b26304(void)

void FUN_143b26304(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb46aa0 == 0) {
    uVar1 = FUN_140f8264f();
    DAT_14cb46aa0 = FUN_14171c317(FUN_146485a90,uVar1,L"EBuoyancyEvent");
  }
  return;
}



// FUNCTION 143b26362 FUN_143b26362 body=69 status=ok
// SIG undefined FUN_143b26362(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b26362(void)

{
  _DAT_14cb46bd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b263a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb46be0,1);
  return;
}



// FUNCTION 143b263a7 FUN_143b263a7 body=69 status=ok
// SIG undefined FUN_143b263a7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b263a7(void)

{
  _DAT_14cb46bf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b263e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb46bf8,1);
  return;
}



// FUNCTION 143b263ec FUN_143b263ec body=69 status=ok
// SIG undefined FUN_143b263ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b263ec(void)

{
  _DAT_14cb46c08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b2642e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb46c10,1);
  return;
}



// FUNCTION 143b26431 FUN_143b26431 body=69 status=ok
// SIG undefined FUN_143b26431(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b26431(void)

{
  _DAT_14cb46c20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b26473. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb46c28,1);
  return;
}



// FUNCTION 143b26476 FUN_143b26476 body=69 status=ok
// SIG undefined FUN_143b26476(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b26476(void)

{
  _DAT_14cb46c38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b264b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb46c40,1);
  return;
}



// FUNCTION 143b264bb FUN_143b264bb body=55 status=ok
// SIG undefined FUN_143b264bb(void)

void FUN_143b264bb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb46ce0 == 0) {
    uVar1 = FUN_140f8264f();
    DAT_14cb46ce0 = FUN_14171c317(FUN_14648606a,uVar1,L"EWaveSpectrumType");
  }
  return;
}



// FUNCTION 143b264f2 FUN_143b264f2 body=73 status=ok
// SIG undefined FUN_143b264f2(void)

float FUN_143b264f2(undefined8 param_1,undefined8 param_2,float param_3,float param_4)

{
  float fVar1;
  
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  fVar1 = expf(param_3 / (param_4 * -0.5));
  fVar1 = 1.0 - fVar1;
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}



// FUNCTION 143b2653c FUN_143b2653c body=2494 status=ok
// SIG undefined FUN_143b2653c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b2653c(longlong param_1)

{
  undefined **ppuVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  longlong *plVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  ulonglong uVar14;
  DWORD DVar15;
  byte bVar16;
  uint uVar17;
  DWORD dwTlsIndex;
  DWORD DVar18;
  LPVOID lpTlsValue;
  longlong *plVar19;
  undefined **ppuVar20;
  longlong lVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  longlong *plVar24;
  longlong lVar25;
  longlong lVar26;
  bool bVar27;
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  float fVar33;
  undefined4 unaff_XMM11_Db;
  undefined1 auStack_328 [32];
  longlong *local_308;
  undefined4 local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  wchar_t *local_2e8;
  code *local_2e0;
  undefined1 *local_2d8;
  undefined ***local_2d0;
  code *local_2c8;
  code *local_2c0;
  float local_2b8;
  undefined4 uStack_2b4;
  longlong local_2a8 [5];
  undefined8 uStack_280;
  longlong *local_278;
  ulonglong uStack_270;
  longlong local_268 [7];
  undefined8 uStack_230;
  undefined8 *local_220;
  undefined8 local_218;
  longlong local_210;
  char local_208;
  undefined8 local_200;
  undefined **local_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  byte local_1e0;
  undefined1 local_1df;
  undefined4 local_1d8;
  undefined ***local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178;
  undefined8 local_168 [12];
  undefined8 local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  FUN_1483e20e8();
  plVar8 = *(longlong **)(param_1 + 0x620);
  lVar26 = plVar8[0x1d];
  iVar6 = *(int *)((longlong)plVar8 + 0xec);
  lVar25 = plVar8[0x1e];
  iVar7 = *(int *)((longlong)plVar8 + 0xf4);
  (**(code **)(*plVar8 + 0x2c0))(plVar8);
  FUN_147a2cbea(plVar8 + 7);
  if (((iVar6 != 0 || (int)lVar26 != 0) || (int)lVar25 != 0) || iVar7 != 0) {
    lVar21 = *(longlong *)(param_1 + 0x620);
    *(int *)(lVar21 + 0xe8) = (int)lVar26;
    *(int *)(lVar21 + 0xec) = iVar6;
    *(int *)(lVar21 + 0xf0) = (int)lVar25;
    *(int *)(lVar21 + 0xf4) = iVar7;
  }
  dwTlsIndex = DAT_14c7585d0;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar18 = 0xffffffff;
    LOCK();
    bVar27 = DAT_14c7585d0 != 0xffffffff;
    DVar15 = dwTlsIndex;
    if (bVar27) {
      DVar18 = DAT_14c7585d0;
      DVar15 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar15;
    UNLOCK();
    if (bVar27) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar18;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_1f8);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_220 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_218 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_210 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_208 = '\0';
  local_200 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_220;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  local_268[6] = 0;
  uStack_230 = 0;
  if (DAT_14cb46ec8 == 0) {
    local_2d0 = &local_1f8;
    local_1f8 = (undefined **)FUN_141030f22;
    local_2c0 = FUN_14081d0ea;
    local_2c8 = FUN_142b4754c;
    local_2d8 = &LAB_1483e40eb;
    local_2e0 = (code *)&LAB_146486986;
    local_2e8 = L"Engine";
    local_2f0 = 0;
    local_2f8 = 0x10000005;
    local_300 = 8;
    local_308 = (longlong *)CONCAT44(local_308._4_4_,0x420);
    FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
  }
  lVar26 = DAT_14cb46ec8;
  if (DAT_14c951858 == 0) {
    local_2d0 = &local_1f8;
    local_1f8 = (undefined **)FUN_1449e2820;
    local_2c0 = FUN_14081d0ea;
    local_2c8 = FUN_14081d0ea;
    local_2d8 = &LAB_1468c5283;
    local_2e0 = FUN_142809da0;
    local_2e8 = L"Engine";
    local_2f0 = 0x400000000;
    local_2f8 = 0x10000000;
    local_300 = 8;
    local_308 = (longlong *)CONCAT44(local_308._4_4_,0x50);
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar25 = *(longlong *)(param_1 + 0x20);
  if (lVar25 == 0) goto LAB_143b26c77;
  iVar6 = *(int *)(lVar26 + 0x38);
  do {
    if ((*(int *)(*(longlong *)(lVar25 + 0x10) + 0x38) < iVar6) ||
       (lVar21 = lVar25,
       *(longlong *)(*(longlong *)(*(longlong *)(lVar25 + 0x10) + 0x30) + (longlong)iVar6 * 8) !=
       lVar26 + 0x30)) {
      lVar21 = 0;
    }
  } while ((lVar21 == 0) && (lVar25 = *(longlong *)(lVar25 + 0x20), lVar25 != 0));
  if ((lVar21 == 0) || (*(longlong *)(lVar21 + 0x398) == 0)) goto LAB_143b26c77;
  dVar2 = *(double *)(param_1 + 0x638);
  local_1f8 = (undefined **)0x0;
  uStack_1f0 = 0;
  FUN_141266fc2(*(longlong *)(lVar21 + 0x398),1,*DAT_14cb471e0 * *DAT_14cb471e0,&local_1f8);
  auVar13 = _DAT_149934d80;
  fVar33 = (float)dVar2;
  if ((longlong)(int)uStack_1f0 != 0) {
    ppuVar1 = local_1f8 + (longlong)(int)uStack_1f0 * 3;
    ppuVar20 = local_1f8;
    local_2b8 = (float)dVar2;
    uStack_2b4 = unaff_XMM11_Db;
    do {
      uVar14 = uStack_230;
      dVar2 = (double)*ppuVar20 - *(double *)(param_1 + 0x260);
      dVar9 = (double)ppuVar20[1] - *(double *)(param_1 + 0x268);
      dVar29 = (double)ppuVar20[2] - *(double *)(param_1 + 0x270);
      dVar12 = *(double *)(param_1 + 0x240);
      dVar31 = *(double *)(param_1 + 0x248);
      auVar5 = *(undefined1 (*) [16])(param_1 + 0x280);
      dVar10 = *(double *)(param_1 + 0x250) * -1.0;
      dVar11 = *(double *)(param_1 + 600) * 1.0;
      lVar26 = (longlong)(int)uStack_230;
      uVar17 = (int)uStack_230 + 1;
      uStack_230 = CONCAT44(uStack_230._4_4_,uVar17);
      if (uStack_230._4_4_ < uVar17) {
        FUN_14489624a(local_268 + 6,uVar14 & 0xffffffff);
      }
      dVar30 = -dVar12;
      dVar31 = -dVar31;
      dVar32 = dVar2 * dVar10 - dVar30 * dVar29;
      dVar30 = dVar9 * dVar30 - dVar2 * dVar31;
      dVar29 = dVar29 * dVar31 - dVar9 * dVar10;
      dVar29 = dVar29 + dVar29;
      dVar32 = dVar32 + dVar32;
      dVar30 = dVar30 + dVar30;
      auVar28 = divpd(auVar13,auVar5);
      *(double *)(local_268[6] + lVar26 * 0x10) =
           (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar5._0_8_)) & auVar28._0_8_) *
           ((dVar30 * dVar31 - dVar32 * dVar10) + dVar11 * dVar29 + dVar2);
      *(double *)(local_268[6] + 8 + lVar26 * 0x10) =
           (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar5._8_8_)) & auVar28._8_8_) *
           (dVar30 * dVar12 + dVar10 * dVar29 + dVar11 * dVar32 + dVar9);
      ppuVar20 = ppuVar20 + 3;
      fVar33 = local_2b8;
      unaff_XMM11_Db = uStack_2b4;
    } while (ppuVar20 != ppuVar1);
  }
  if (local_1f8 != (undefined **)0x0) {
    FUN_1400020a8(local_1f8);
  }
  local_268[4] = 0;
  local_268[5] = 0;
  FUN_143510a70(local_268 + 4,local_268 + 6,0);
  local_268[2] = 0;
  local_268[3] = 0;
  FUN_143510bfe(local_268 + 2,local_268 + 6,0);
  local_268[0] = 0;
  local_268[1] = 0;
  FUN_1435113a0(local_268,local_268 + 2);
  local_278 = (longlong *)0x0;
  uStack_270 = 0;
  FUN_143511a8e(&local_278,local_268);
  if ((longlong)(int)uStack_270 != 0) {
    plVar24 = local_278 + (longlong)(int)uStack_270 * 2;
    plVar8 = local_2a8 + 4;
    plVar19 = local_278;
    do {
      local_2a8[4] = 0;
      uStack_280 = 0;
      iVar6 = (int)plVar19[1];
      if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar6);
      }
      if ((iVar6 != 0) && (FUN_1447a8aa0(plVar8), 0 < (int)plVar19[1])) {
        lVar26 = 8;
        lVar25 = 0;
        do {
          uVar14 = uStack_280;
          uVar3 = *(undefined8 *)(*plVar19 + -8 + lVar26);
          uVar4 = *(undefined8 *)(*plVar19 + lVar26);
          lVar21 = (longlong)(int)uStack_280;
          uVar17 = (int)uStack_280 + 1;
          uStack_280 = CONCAT44(uStack_280._4_4_,uVar17);
          if (uStack_280._4_4_ < uVar17) {
            FUN_1403e3958(plVar8,uVar14 & 0xffffffff);
          }
          *(undefined8 *)(local_2a8[4] + lVar21 * 0x18) = uVar3;
          *(undefined8 *)(local_2a8[4] + 8 + lVar21 * 0x18) = uVar4;
          *(undefined8 *)(local_2a8[4] + 0x10 + lVar21 * 0x18) = 0;
          lVar25 = lVar25 + 1;
          lVar26 = lVar26 + 0x10;
        } while (lVar25 < (int)plVar19[1]);
      }
      if (2 < (int)uStack_280) {
        local_2a8[2] = 0;
        local_2a8[3] = 0;
        local_2a8[0] = 0;
        local_2a8[1] = 0;
        local_308 = local_2a8;
        FUN_1483e21df(plVar8,CONCAT44(unaff_XMM11_Db,fVar33),
                      CONCAT44(unaff_XMM11_Db,fVar33) ^ 0x8000000080000000,local_2a8 + 2);
        uStack_1f0 = 0;
        uStack_1e8 = 0x300000000;
        local_1e0 = local_1e0 | 1;
        local_1df = 3;
        local_1d8 = 6;
        local_1d0 = &local_1f8;
        local_1f8 = &PTR_FUN_14aa0f410;
        local_188 = 0;
        uStack_180 = 0;
        local_198 = 0;
        uStack_190 = 0;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_178 = 0;
        puVar22 = &DAT_14c846480;
        puVar23 = local_168;
        for (lVar26 = 0xc; lVar26 != 0; lVar26 = lVar26 + -1) {
          *puVar23 = *puVar22;
          puVar22 = puVar22 + 1;
          puVar23 = puVar23 + 1;
        }
        local_108 = 0;
        local_1c8 = local_2a8[2];
        uStack_1c0 = local_2a8[3];
        local_2a8[2] = 0;
        local_2a8[3] = 0;
        FUN_1479b2c20(local_1d0);
        lVar26 = *(longlong *)(param_1 + 0x620);
        iVar6 = *(int *)(lVar26 + 0x70);
        *(uint *)(lVar26 + 0x70) = iVar6 + 1U;
        if (*(uint *)(lVar26 + 0x74) < iVar6 + 1U) {
          FUN_1474ba6a4((longlong *)(lVar26 + 0x68),iVar6);
        }
        FUN_147c4992e((longlong)iVar6 * 0x100 + *(longlong *)(lVar26 + 0x68),&local_1f8);
        FUN_1400d7e72(&local_1f8);
        if (local_2a8[0] != 0) {
          FUN_1400020a8();
        }
        if (local_2a8[2] != 0) {
          FUN_1400020a8();
        }
      }
      if (local_2a8[4] != 0) {
        FUN_1400020a8();
      }
      plVar19 = plVar19 + 2;
    } while (plVar19 != plVar24);
  }
  (**(code **)(**(longlong **)(param_1 + 0x620) + 0x2a0))();
  FUN_1406cc378(param_1);
  if ((~*(byte *)(param_1 + 0x9c) & 3) == 0) {
    bVar16 = *(byte *)(param_1 + 0x9d);
    if ((bVar16 & 1) != 0) {
      if ((*(longlong *)(param_1 + 0xb0) != 0) || (lVar26 = FUN_1448abda6(param_1), lVar26 != 0))
      goto LAB_143b26c1b;
      bVar16 = *(byte *)(param_1 + 0x9d);
    }
    *(byte *)(param_1 + 0x9d) = bVar16 | 1;
    FUN_1401057d4(param_1);
    FUN_14010586c(&DAT_14cad0140,param_1);
  }
LAB_143b26c1b:
  FUN_1400d7bbd(local_278,uStack_270 & 0xffffffff);
  if (local_278 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_268[0] != 0) {
    FUN_1400020a8();
  }
  if (local_268[2] != 0) {
    FUN_1400020a8();
  }
  if (local_268[4] != 0) {
    FUN_1400020a8();
  }
LAB_143b26c77:
  if (local_268[6] != 0) {
    FUN_1400020a8();
  }
  if (local_208 == '\0') {
    local_208 = '\x01';
    *(int *)(local_220 + 4) = *(int *)(local_220 + 4) + -1;
    if (local_210 != local_220[2]) {
      FUN_14004673c();
    }
    *local_220 = local_218;
    local_220[3] = local_200;
  }
  if ((local_f0 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b26efc FUN_143b26efc body=905 status=ok
// SIG undefined FUN_143b26efc(void)

undefined1 (*) [16] FUN_143b26efc(longlong param_1,undefined1 (*param_2) [16],double *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
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
  
  dVar1 = *(double *)(param_1 + 0x638);
  dVar21 = *(double *)(param_1 + 0x628);
  dVar23 = *(double *)(param_1 + 0x630);
  dVar17 = (dVar1 + dVar1) * 0.5;
  dVar22 = (dVar23 + dVar23) * 0.5;
  dVar20 = (dVar21 + dVar21) * 0.5;
  dVar1 = dVar17 - dVar1;
  dVar23 = dVar22 - dVar23;
  dVar21 = dVar20 - dVar21;
  dVar24 = *param_3;
  dVar11 = param_3[1];
  dVar4 = param_3[2];
  dVar5 = param_3[8];
  dVar12 = param_3[9];
  dVar14 = param_3[10];
  dVar8 = dVar11 + dVar11;
  dVar10 = dVar4 + dVar4;
  dVar13 = dVar24 * (dVar24 + dVar24);
  dVar3 = (1.0 - (dVar4 * dVar10 + dVar11 * dVar8)) * dVar5;
  dVar4 = (1.0 - (dVar4 * dVar10 + dVar13)) * dVar12;
  dVar18 = (1.0 - (dVar13 + dVar11 * dVar8)) * dVar14;
  dVar13 = param_3[3];
  dVar15 = dVar10 * dVar13;
  dVar19 = (dVar24 + dVar24) * param_3[3];
  dVar13 = dVar8 * dVar13;
  dVar7 = (dVar8 * dVar24 + dVar15) * dVar5;
  dVar9 = (dVar10 * dVar11 + dVar19) * dVar12;
  dVar16 = (dVar13 + *param_3 * dVar10) * dVar14;
  dVar5 = (*param_3 * dVar10 - dVar13) * dVar5;
  dVar12 = (dVar8 * dVar24 - dVar15) * dVar12;
  dVar14 = (dVar10 * dVar11 - dVar19) * dVar14;
  dVar8 = ABS(dVar17 * dVar16) + ABS(dVar22 * dVar12) + ABS(dVar20 * dVar3);
  dVar10 = ABS(dVar17 * dVar14) + ABS(dVar22 * dVar4) + ABS(dVar20 * dVar7);
  dVar24 = ABS(dVar18 * dVar17) + ABS(dVar9 * dVar22) + ABS(dVar5 * dVar20);
  dVar13 = dVar16 * dVar16 + dVar12 * dVar12 + dVar3 * dVar3;
  dVar15 = dVar14 * dVar14 + dVar4 * dVar4 + dVar7 * dVar7;
  dVar19 = dVar18 * dVar18 + dVar9 * dVar9 + dVar5 * dVar5;
  if (dVar13 <= dVar15) {
    dVar13 = dVar15;
  }
  if (dVar13 <= dVar19) {
    dVar13 = dVar19;
  }
  dVar15 = param_3[4];
  dVar7 = dVar1 * dVar14 + dVar23 * dVar4 + dVar21 * dVar7 + param_3[5];
  dVar4 = param_3[6];
  if (dVar13 < 0.0) {
    dVar13 = sqrt(dVar13);
  }
  else {
    dVar13 = SQRT(dVar13);
  }
  dVar13 = SQRT(dVar17 * dVar17 + dVar20 * dVar20 + dVar22 * dVar22) * dVar13;
  dVar19 = SQRT(dVar10 * dVar10 + dVar24 * dVar24 + dVar8 * dVar8);
  if (dVar19 <= dVar13) {
    dVar13 = dVar19;
  }
  auVar2._8_4_ = SUB84(dVar7,0);
  auVar2._0_8_ = dVar1 * dVar16 + dVar23 * dVar12 + dVar21 * dVar3 + dVar15;
  auVar2._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *param_2 = auVar2;
  *(double *)param_2[1] = dVar1 * dVar18 + dVar23 * dVar9 + dVar21 * dVar5 + dVar4;
  auVar6._8_4_ = SUB84(dVar10,0);
  auVar6._0_8_ = dVar8;
  auVar6._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(param_2[1] + 8) = auVar6;
  *(double *)(param_2[2] + 8) = dVar24;
  *(double *)param_2[3] = dVar13;
  return param_2;
}



// FUNCTION 143b272b0 FUN_143b272b0 body=3441 status=ok
// SIG undefined FUN_143b272b0(void)

void FUN_143b272b0(byte *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  double dVar4;
  double dVar5;
  ushort uVar6;
  ushort *puVar7;
  longlong lVar8;
  bool bVar9;
  undefined4 uVar10;
  double dVar11;
  byte bVar12;
  uint uVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  int iVar16;
  longlong *plVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_2a8 [32];
  undefined1 *local_288;
  double local_280;
  double local_278;
  double local_270;
  float *local_268;
  uint local_260;
  float local_25c;
  float *local_258;
  uint local_250;
  float local_24c;
  float *local_248;
  uint local_240;
  float local_23c;
  float *local_238;
  uint local_230;
  float local_22c;
  float *local_228;
  uint local_220;
  float local_21c;
  float *local_218;
  uint local_210;
  float local_20c;
  float *local_208;
  uint local_200;
  float local_1fc;
  float *local_1f8;
  uint local_1f0;
  float local_1ec;
  float *local_1e8;
  uint local_1e0;
  float local_1dc;
  undefined4 *local_1d8;
  uint local_1d0;
  undefined4 local_1cc;
  undefined4 *local_1c8;
  uint local_1c0;
  undefined4 local_1bc;
  float *local_1b8 [2];
  int local_1a8;
  float *local_1a0;
  int local_190;
  float *local_188;
  int local_178;
  undefined1 local_170 [8];
  uint *local_168;
  undefined1 local_160 [4];
  undefined1 local_15c;
  undefined1 local_158 [40];
  double local_130;
  double local_128;
  double local_120;
  double local_100;
  double local_f8;
  double local_f0;
  undefined4 local_e4;
  undefined4 local_d8;
  double local_b0;
  double local_a8;
  double local_a0;
  byte local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  FUN_1483e2e3e(local_170,param_1);
  FUN_1405f76c0(local_1b8,param_1);
  if (*param_1 == 1) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    bVar12 = 1;
  }
  else {
    *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10) =
         *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10) + 2;
    bVar12 = *param_1;
  }
  if ((bVar12 & 1) == 0) {
    puVar7 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar7 + 1;
    uVar13 = uVar6 & 0x7fff;
    if (uVar13 == 0x7fff) {
      local_1c8 = &local_1bc;
      local_1c0 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x80);
      local_1c0 = 1;
      local_1c8 = (undefined4 *)
                  ((ulonglong)(uVar13 * *(int *)(lVar8 + 0x80)) + *(longlong *)(lVar8 + 0x70) +
                  (longlong)*(int *)(lVar8 + 0x4c) * 4);
    }
  }
  else {
    iVar16 = *(int *)(param_1 + 0x30);
    bVar12 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar16);
    local_1c0 = (uint)bVar12;
    *(int *)(param_1 + 0x30) = iVar16 + 1;
    local_1c8 = (undefined4 *)
                ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar12 * 4 +
                *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar16 * 8));
  }
  if (*param_1 == 1) {
    iVar16 = *(int *)(param_1 + 0x30);
    bVar12 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar16);
    local_1d0 = (uint)bVar12;
    *(int *)(param_1 + 0x30) = iVar16 + 1;
    local_1d8 = (undefined4 *)
                ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar12 * 4 +
                *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar16 * 8));
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar7 + 1;
    uVar13 = uVar6 & 0x7fff;
    if (uVar13 == 0x7fff) {
      local_1d8 = &local_1cc;
      local_1d0 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x80);
      local_1d0 = 1;
      local_1d8 = (undefined4 *)
                  ((ulonglong)(uVar13 * *(int *)(lVar8 + 0x80)) + *(longlong *)(lVar8 + 0x70) +
                  (longlong)*(int *)(lVar8 + 0x4c) * 4);
    }
  }
  if (*param_1 == 1) {
    iVar16 = *(int *)(param_1 + 0x30);
    bVar12 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar16);
    local_200 = (uint)bVar12;
    *(int *)(param_1 + 0x30) = iVar16 + 1;
    local_208 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar12 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar16 * 8));
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar7 + 1;
    uVar13 = uVar6 & 0x7fff;
    if (uVar13 == 0x7fff) {
      local_208 = &local_1fc;
      local_200 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x80);
      local_200 = 1;
      local_208 = (float *)((ulonglong)(uVar13 * *(int *)(lVar8 + 0x80)) +
                            *(longlong *)(lVar8 + 0x70) + (longlong)*(int *)(lVar8 + 0x4c) * 4);
    }
  }
  if (*param_1 == 1) {
    iVar16 = *(int *)(param_1 + 0x30);
    bVar12 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar16);
    local_1f0 = (uint)bVar12;
    *(int *)(param_1 + 0x30) = iVar16 + 1;
    local_1f8 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar12 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar16 * 8));
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar7 + 1;
    uVar13 = uVar6 & 0x7fff;
    if (uVar13 == 0x7fff) {
      local_1f8 = &local_1ec;
      local_1f0 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x80);
      local_1f0 = 1;
      local_1f8 = (float *)((ulonglong)(uVar13 * *(int *)(lVar8 + 0x80)) +
                            *(longlong *)(lVar8 + 0x70) + (longlong)*(int *)(lVar8 + 0x4c) * 4);
    }
  }
  if (*param_1 == 1) {
    iVar16 = *(int *)(param_1 + 0x30);
    bVar12 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar16);
    local_1e0 = (uint)bVar12;
    *(int *)(param_1 + 0x30) = iVar16 + 1;
    local_1e8 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar12 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar16 * 8));
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar7 + 1;
    uVar13 = uVar6 & 0x7fff;
    if (uVar13 == 0x7fff) {
      local_1e8 = &local_1dc;
      local_1e0 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x80);
      local_1e0 = 1;
      local_1e8 = (float *)((ulonglong)(uVar13 * *(int *)(lVar8 + 0x80)) +
                            *(longlong *)(lVar8 + 0x70) + (longlong)*(int *)(lVar8 + 0x4c) * 4);
    }
  }
  if (*param_1 == 1) {
    iVar16 = *(int *)(param_1 + 0x30);
    bVar12 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar16);
    local_230 = (uint)bVar12;
    *(int *)(param_1 + 0x30) = iVar16 + 1;
    local_238 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar12 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar16 * 8));
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar7 + 1;
    uVar13 = uVar6 & 0x7fff;
    if (uVar13 == 0x7fff) {
      local_238 = &local_22c;
      local_230 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x80);
      local_230 = 1;
      local_238 = (float *)((ulonglong)(uVar13 * *(int *)(lVar8 + 0x80)) +
                            *(longlong *)(lVar8 + 0x70) + (longlong)*(int *)(lVar8 + 0x4c) * 4);
    }
  }
  if (*param_1 == 1) {
    iVar16 = *(int *)(param_1 + 0x30);
    bVar12 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar16);
    local_220 = (uint)bVar12;
    *(int *)(param_1 + 0x30) = iVar16 + 1;
    local_228 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar12 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar16 * 8));
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar7 + 1;
    uVar13 = uVar6 & 0x7fff;
    if (uVar13 == 0x7fff) {
      local_228 = &local_21c;
      local_220 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x80);
      local_220 = 1;
      local_228 = (float *)((ulonglong)(uVar13 * *(int *)(lVar8 + 0x80)) +
                            *(longlong *)(lVar8 + 0x70) + (longlong)*(int *)(lVar8 + 0x4c) * 4);
    }
  }
  if (*param_1 == 1) {
    iVar16 = *(int *)(param_1 + 0x30);
    bVar12 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar16);
    local_210 = (uint)bVar12;
    *(int *)(param_1 + 0x30) = iVar16 + 1;
    local_218 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar12 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar16 * 8));
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar7 + 1;
    uVar13 = uVar6 & 0x7fff;
    if (uVar13 == 0x7fff) {
      local_218 = &local_20c;
      local_210 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x80);
      local_210 = 1;
      local_218 = (float *)((ulonglong)(uVar13 * *(int *)(lVar8 + 0x80)) +
                            *(longlong *)(lVar8 + 0x70) + (longlong)*(int *)(lVar8 + 0x4c) * 4);
    }
  }
  if (*param_1 == 1) {
    iVar16 = *(int *)(param_1 + 0x30);
    bVar12 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar16);
    local_260 = (uint)bVar12;
    *(int *)(param_1 + 0x30) = iVar16 + 1;
    local_268 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar12 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar16 * 8));
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar7 + 1;
    uVar13 = uVar6 & 0x7fff;
    if (uVar13 == 0x7fff) {
      local_268 = &local_25c;
      local_260 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x80);
      local_260 = 1;
      local_268 = (float *)((ulonglong)(uVar13 * *(int *)(lVar8 + 0x80)) +
                            *(longlong *)(lVar8 + 0x70) + (longlong)*(int *)(lVar8 + 0x4c) * 4);
    }
  }
  if (*param_1 == 1) {
    iVar16 = *(int *)(param_1 + 0x30);
    bVar12 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar16);
    local_250 = (uint)bVar12;
    *(int *)(param_1 + 0x30) = iVar16 + 1;
    local_258 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar12 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar16 * 8));
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar7 + 1;
    uVar13 = uVar6 & 0x7fff;
    if (uVar13 == 0x7fff) {
      local_258 = &local_24c;
      local_250 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x80);
      local_250 = 1;
      local_258 = (float *)((ulonglong)(uVar13 * *(int *)(lVar8 + 0x80)) +
                            *(longlong *)(lVar8 + 0x70) + (longlong)*(int *)(lVar8 + 0x4c) * 4);
    }
  }
  if (*param_1 == 1) {
    iVar16 = *(int *)(param_1 + 0x30);
    bVar12 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar16);
    local_240 = (uint)bVar12;
    *(int *)(param_1 + 0x30) = iVar16 + 1;
    local_248 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar12 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar16 * 8));
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar7 + 1;
    uVar13 = uVar6 & 0x7fff;
    if (uVar13 == 0x7fff) {
      local_248 = &local_23c;
      local_240 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x80);
      local_240 = 1;
      local_248 = (float *)((ulonglong)(uVar13 * *(int *)(lVar8 + 0x80)) +
                            *(longlong *)(lVar8 + 0x70) + (longlong)*(int *)(lVar8 + 0x4c) * 4);
    }
  }
  if (local_168[1] != 0) {
    uVar13 = *local_168;
    plVar17 = (longlong *)0x0;
    if (((int)uVar13 < 0) || (DAT_14c9647dc <= (int)uVar13)) goto LAB_143b278f8;
    puVar15 = (undefined8 *)
              ((ulonglong)((uVar13 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
    if ((puVar15 != (undefined8 *)0x0) &&
       ((*(uint *)(puVar15 + 2) == local_168[1] && ((*(uint *)(puVar15 + 1) & 0x10200000) == 0)))) {
      plVar17 = (longlong *)*puVar15;
      goto LAB_143b278f8;
    }
  }
  plVar17 = (longlong *)0x0;
LAB_143b278f8:
  pbVar14 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != 0) {
    pbVar14 = param_1 + 0x3c;
  }
  if (0 < *(int *)pbVar14) {
    iVar16 = 0;
    do {
      dVar18 = DAT_14c8462c0;
      dVar19 = DAT_14c8462c8;
      dVar20 = DAT_14c8462d0;
      dVar21 = DAT_14c8464e0;
      dVar22 = DAT_14c8464e8;
      dVar23 = DAT_14c8464f0;
      if (plVar17 == (longlong *)0x0) {
LAB_143b27b00:
        bVar9 = false;
        *local_1c8 = 0;
        local_1c8 = local_1c8 + (int)local_1c0;
        *local_1d8 = 0;
        fVar24 = DAT_14c846338;
        fVar25 = DAT_14c846330._4_4_;
        fVar26 = (float)DAT_14c846330;
        local_1d8 = local_1d8 + (int)local_1d0;
      }
      else {
        local_270 = (double)*local_188 + *(double *)(local_168 + 6);
        local_278 = (double)*local_1a0 + *(double *)(local_168 + 4);
        local_280 = (double)*local_1b8[0] + *(double *)(local_168 + 2);
        local_15c = 0;
        local_288 = local_160;
        local_1b8[0] = local_1b8[0] + local_1a8;
        local_1a0 = local_1a0 + local_190;
        local_188 = local_188 + local_178;
        (**(code **)(*plVar17 + 0xa80))(plVar17,local_158,&local_280,0x2f);
        dVar11 = local_a0;
        dVar5 = local_a8;
        dVar4 = local_b0;
        uVar10 = local_e4;
        dVar20 = local_f0;
        dVar19 = local_f8;
        dVar18 = local_100;
        dVar23 = local_120;
        dVar22 = local_128;
        dVar21 = local_130;
        if ((local_98 & 1) != 0) goto LAB_143b27b00;
        *local_1c8 = local_d8;
        local_1c8 = local_1c8 + (int)local_1c0;
        *local_1d8 = uVar10;
        bVar9 = true;
        fVar24 = (float)dVar11;
        fVar25 = (float)dVar5;
        fVar26 = (float)dVar4;
        local_1d8 = local_1d8 + (int)local_1d0;
      }
      *local_208 = fVar26;
      *local_1f8 = fVar25;
      *local_1e8 = fVar24;
      if (bVar9) {
        dVar4 = *(double *)(local_168 + 6);
        dVar5 = *(double *)(local_168 + 4);
        local_208 = local_208 + (int)local_200;
        local_1f8 = local_1f8 + (int)local_1f0;
        local_1e8 = local_1e8 + (int)local_1e0;
        *local_238 = (float)(dVar21 - *(double *)(local_168 + 2));
        *local_228 = (float)(dVar22 - dVar5);
        *local_218 = (float)(dVar23 - dVar4);
        fVar24 = (float)dVar20;
        fVar25 = (float)dVar19;
        local_228 = local_228 + (int)local_220;
        local_218 = local_218 + (int)local_210;
        fVar26 = (float)dVar18;
      }
      else {
        dVar21 = *(double *)(local_168 + 6);
        dVar22 = *(double *)(local_168 + 4);
        local_208 = local_208 + (int)local_200;
        local_1f8 = local_1f8 + (int)local_1f0;
        local_1e8 = local_1e8 + (int)local_1e0;
        *local_238 = (float)(DAT_14c8464e0 - *(double *)(local_168 + 2));
        *local_228 = (float)(DAT_14c8464e8 - dVar22);
        *local_218 = (float)(DAT_14c8464f0 - dVar21);
        fVar24 = DAT_14c846174;
        fVar25 = DAT_14c846170;
        local_228 = local_228 + (int)local_220;
        local_218 = local_218 + (int)local_210;
        fVar26 = DAT_14c84616c;
      }
      local_238 = local_238 + (int)local_230;
      pfVar1 = local_268 + (int)local_260;
      *local_268 = fVar26;
      pfVar2 = local_258 + (int)local_250;
      *local_258 = fVar25;
      pfVar3 = local_248 + (int)local_240;
      *local_248 = fVar24;
      iVar16 = iVar16 + 1;
      pbVar14 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != 0) {
        pbVar14 = param_1 + 0x3c;
      }
      local_268 = pfVar1;
      local_258 = pfVar2;
      local_248 = pfVar3;
    } while (iVar16 < *(int *)pbVar14);
  }
  if ((local_90 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b28022 FUN_143b28022 body=358 status=ok
// SIG undefined FUN_143b28022(void)

void FUN_143b28022(longlong param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40 [2];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 != 0 && param_1 != 0) {
    if (*(int *)(param_2 + 1) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_2;
    }
    FUN_1446f470e(&local_50,puVar5,1);
    local_60 = FUN_145b7068c();
    if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_60);
    }
    local_58 = 1;
    local_56 = 0;
    local_54 = 0xffffffff;
    local_48 = local_50;
    local_40[0] = FUN_144830b78(local_40);
    local_38 = 0;
    uStack_30 = 0;
    puVar3 = (uint *)(**(code **)(*(longlong *)(param_1 + 0x678) + 0x58))
                               ((longlong *)(param_1 + 0x678),&local_48,0);
    if (puVar3 != (uint *)0x0) {
      uVar1 = *puVar3;
      if ((((ulonglong)uVar1 != 0xffffffff) && (-1 < (int)uVar1)) &&
         ((int)uVar1 < *(int *)(param_1 + 0x6b0))) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x6a8) + (ulonglong)uVar1 * 8);
        if (lVar2 != 0) {
          lVar4 = FUN_145b7068c();
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(param_3);
            }
            *(longlong *)(lVar2 + 0x38) = param_3;
          }
        }
      }
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b28189 FUN_143b28189 body=69 status=ok
// SIG undefined FUN_143b28189(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b28189(void)

{
  _DAT_14cb471d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b281cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb471d8,1);
  return;
}



// FUNCTION 143b281d4 FUN_143b281d4 body=337 status=ok
// SIG undefined FUN_143b281d4(void)

void FUN_143b281d4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    if (DAT_14cb46ec8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_142b4754c;
      local_48 = &LAB_1483e40eb;
      local_50 = &LAB_146486986;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000005;
      local_70 = 8;
      local_78 = 0x420;
      FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
    }
    if (((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) == DAT_14cb46ec8 + 0x30)) &&
       (*(longlong *)(lVar1 + 0x398) != 0)) {
      FUN_1406041fe(param_1,param_2);
      if (*(char *)(param_2 + 0x90) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b2833c FUN_143b2833c body=289 status=ok
// SIG undefined FUN_143b2833c(void)

undefined8 FUN_143b2833c(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    if (DAT_14cb46ec8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_142b4754c;
      local_38 = &LAB_1483e40eb;
      local_40 = &LAB_146486986;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000005;
      local_60 = 8;
      local_68 = 0x420;
      FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
    }
    if ((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) == DAT_14cb46ec8 + 0x30)) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3b8);
      goto LAB_143b28399;
    }
  }
  uVar2 = 0;
LAB_143b28399:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b2845e FUN_143b2845e body=69 status=ok
// SIG undefined FUN_143b2845e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b2845e(void)

{
  _DAT_14cb471b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b284a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb471c0,1);
  return;
}



// FUNCTION 143b284a3 FUN_143b284a3 body=69 status=ok
// SIG undefined FUN_143b284a3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b284a3(void)

{
  _DAT_14cb46ff0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b284e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb46ff8,1);
  return;
}



// FUNCTION 143b284e8 FUN_143b284e8 body=69 status=ok
// SIG undefined FUN_143b284e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b284e8(void)

{
  _DAT_14cb47008 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b2852a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb47010,1);
  return;
}



// FUNCTION 143b2852e FUN_143b2852e body=190 status=ok
// SIG undefined FUN_143b2852e(void)

longlong * FUN_143b2852e(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  
  lVar2 = DAT_14cb47018;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar6 = 0;
  }
  else if (iVar1 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar6 = (ulonglong)(DVar4 != DVar5);
  }
  else {
    uVar6 = 1;
  }
  if (*(char *)(lVar2 + uVar6) == '\0') {
    uVar3 = *(undefined1 *)(param_1 + 0x630);
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)((longlong)param_2 + 0x14) = uVar3;
  *(undefined1 *)((longlong)param_2 + 0x15) = 0;
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(param_1 + 0x638);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x63c);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x634);
  *param_2 = param_1 + 0x10e0;
  return param_2;
}



// FUNCTION 143b285ec FUN_143b285ec body=2960 status=ok
// SIG undefined FUN_143b285ec(void)

uint * FUN_143b285ec(longlong *param_1,uint *param_2,ulonglong *param_3,uint param_4,uint *param_5)

{
  uint *puVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  double dVar6;
  char cVar7;
  undefined1 uVar8;
  byte bVar9;
  DWORD DVar10;
  DWORD DVar11;
  longlong lVar12;
  longlong lVar13;
  float *pfVar14;
  uint uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  uint uVar25;
  undefined4 uVar26;
  float fVar27;
  uint uVar28;
  uint uVar29;
  float fVar30;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  wchar_t *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined8 *local_140;
  code *local_138;
  code *local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  ulonglong local_118;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  double local_f8;
  float local_f0;
  char local_ec;
  undefined8 local_e8;
  uint uStack_e0;
  uint uStack_dc;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  *param_2 = 0;
  uVar15 = param_5[1];
  *(char *)(param_2 + 2) = (char)uVar15;
  if ((char)uVar15 == '\x01') {
    param_2[1] = *param_5;
  }
  *(double *)(param_2 + 8) = DAT_14c8464f0;
  uVar20 = CONCAT44(DAT_14c8464e8._4_4_,(uint)DAT_14c8464e8);
  *(ulonglong *)(param_2 + 4) = CONCAT44(DAT_14c8464e0._4_4_,(uint)DAT_14c8464e0);
  *(undefined8 *)(param_2 + 6) = uVar20;
  *(double *)(param_2 + 0xe) = DAT_14c8464f0;
  uVar20 = CONCAT44(DAT_14c8464e8._4_4_,(uint)DAT_14c8464e8);
  *(ulonglong *)(param_2 + 10) = CONCAT44(DAT_14c8464e0._4_4_,(uint)DAT_14c8464e0);
  *(undefined8 *)(param_2 + 0xc) = uVar20;
  *(double *)(param_2 + 0x14) = DAT_14c8462d0;
  uVar20 = CONCAT44(DAT_14c8462c8._4_4_,(uint)DAT_14c8462c8);
  *(ulonglong *)(param_2 + 0x10) = CONCAT44(DAT_14c8462c0._4_4_,(uint)DAT_14c8462c0);
  *(undefined8 *)(param_2 + 0x12) = uVar20;
  uVar20 = CONCAT44(DAT_14c8462c8._4_4_,(uint)DAT_14c8462c8);
  *(ulonglong *)(param_2 + 0x16) = CONCAT44(DAT_14c8462c0._4_4_,(uint)DAT_14c8462c0);
  *(undefined8 *)(param_2 + 0x18) = uVar20;
  *(double *)(param_2 + 0x1a) = DAT_14c8462d0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0x3f800000;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  *(double *)(param_2 + 0x26) = DAT_14c8462d0;
  uVar20 = CONCAT44(DAT_14c8462c8._4_4_,(uint)DAT_14c8462c8);
  *(ulonglong *)(param_2 + 0x22) = CONCAT44(DAT_14c8462c0._4_4_,(uint)DAT_14c8462c0);
  *(undefined8 *)(param_2 + 0x24) = uVar20;
  param_2[0x28] = 0;
  uVar29 = DAT_14c8464e8._4_4_;
  uVar28 = (uint)DAT_14c8464e8;
  uVar15 = DAT_14c8464e0._4_4_;
  param_2[0x2a] = (uint)DAT_14c8464e0;
  param_2[0x2b] = uVar15;
  param_2[0x2c] = uVar28;
  param_2[0x2d] = uVar29;
  *(double *)(param_2 + 0x2e) = DAT_14c8464f0;
  *(undefined1 *)(param_2 + 0x30) = 0;
  uVar15 = (param_4 & 0x118) != 0 | param_4;
  if ((param_4 & 0x20) != 0) {
    cVar7 = FUN_1405b9b94(param_1);
    if (cVar7 != '\0') {
      uVar15 = param_4 | 9;
    }
  }
  *param_2 = uVar15;
  if (-1 < (char)uVar15) {
    if ((longlong)(int)param_1[0x20f] == 0) {
      uVar8 = 0;
    }
    else {
      lVar16 = param_1[0x20e];
      lVar13 = (longlong)(int)param_1[0x20f] * 0x28;
      do {
        lVar12 = FUN_1409ca6e8(lVar16);
        if (lVar12 != 0) {
          lVar12 = FUN_1409ca6e8(lVar16);
          local_f8 = (double)param_3[2];
          local_108 = (uint)*param_3;
          uStack_104 = *(undefined4 *)((longlong)param_3 + 4);
          uStack_100 = (uint)param_3[1];
          uStack_fc = *(undefined4 *)((longlong)param_3 + 0xc);
          plVar5 = *(longlong **)(lVar12 + 0x3a8);
          if ((((plVar5 != (longlong *)0x0) &&
               (cVar7 = (**(code **)(*plVar5 + 0x7c0))(plVar5,&local_108,&local_f0,&local_e8),
               cVar7 != '\0')) && (0.0 <= local_f0)) && (uVar8 = 1, local_f0 <= 0.0)) break;
        }
        lVar16 = lVar16 + 0x28;
        uVar8 = 0;
        lVar13 = lVar13 + -0x28;
      } while (lVar13 != 0);
    }
    *(undefined1 *)(param_2 + 0x30) = uVar8;
  }
  bVar9 = (**(code **)(*param_1 + 0xb18))(param_1);
  lVar16 = param_1[0x15];
  if (lVar16 == 0) {
LAB_143b2886b:
    lVar16 = 0;
  }
  else {
    if (DAT_14cb46ec8 == 0) {
      local_140 = &local_e8;
      local_e8 = FUN_141030f22;
      local_130 = FUN_14081d0ea;
      local_138 = FUN_142b4754c;
      local_148 = &LAB_1483e40eb;
      local_150 = &LAB_146486986;
      local_158 = L"Engine";
      local_160 = 0;
      local_168 = 0x10000005;
      local_170 = 8;
      local_178 = (undefined8 *)CONCAT44(local_178._4_4_,0x420);
      FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
    }
    if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x38) < *(int *)(DAT_14cb46ec8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) != DAT_14cb46ec8 + 0x30)) goto LAB_143b2886b;
    lVar16 = *(longlong *)(lVar16 + 0x398);
  }
  puVar1 = param_2 + 4;
  uVar15 = *param_2;
  if ((uVar15 & 1) != 0) {
    local_108 = (uint)*param_3;
    uStack_104 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_100 = (uint)param_3[1];
    uStack_fc = *(undefined4 *)((longlong)param_3 + 0xc);
    if ((char)param_2[0x30] == '\0') {
      if ((~bVar9 & lVar16 != 0) == 0) {
        uVar24 = (undefined4)param_1[0x4e];
        uVar26 = (undefined4)((ulonglong)param_1[0x4e] >> 0x20);
      }
      else {
        if ((char)param_2[2] == '\x01') {
          uVar19 = (ulonglong)param_2[1];
        }
        else {
          uVar19 = FUN_1408b98e8(param_1,param_3);
          param_2[1] = (uint)uVar19;
          *(undefined1 *)(param_2 + 2) = 1;
        }
        FUN_140703b8c(lVar16,&local_e8,uVar19,1);
        uVar24 = SUB84(local_d8,0);
        uVar26 = (undefined4)((ulonglong)local_d8 >> 0x20);
      }
      dVar2 = (double)CONCAT44(uVar26,uVar24);
      cVar7 = (**(code **)(*param_1 + 0xb28))(param_1);
      if (cVar7 != '\0') {
        fVar30 = (float)(**(code **)(*param_1 + 0xa58))(param_1);
        dVar2 = (double)CONCAT44(uVar26,uVar24) + (double)fVar30;
      }
    }
    else {
      dVar2 = (double)param_3[2];
    }
    *(ulonglong *)puVar1 = CONCAT44(uStack_104,local_108);
    *(ulonglong *)(param_2 + 6) = CONCAT44(uStack_fc,uStack_100);
    *(double *)(param_2 + 8) = dVar2;
    *(ulonglong *)(param_2 + 10) = CONCAT44(uStack_104,local_108);
    *(ulonglong *)(param_2 + 0xc) = CONCAT44(uStack_fc,uStack_100);
    *(double *)(param_2 + 0xe) = dVar2;
    uVar15 = *param_2;
  }
  local_f8 = DAT_14c8462d0;
  local_108 = (uint)DAT_14c8462c0;
  uStack_104 = DAT_14c8462c0._4_4_;
  uStack_100 = (uint)DAT_14c8462c8;
  uStack_fc = DAT_14c8462c8._4_4_;
  if ((uVar15 & 2) != 0) {
    if (bVar9 == 0 && lVar16 != 0) {
      if ((char)param_2[2] == '\x01') {
        uVar19 = (ulonglong)param_2[1];
      }
      else {
        uVar19 = FUN_1408b98e8(param_1,param_3);
        param_2[1] = (uint)uVar19;
        *(undefined1 *)(param_2 + 2) = 1;
      }
      FUN_1417c1cca(lVar16,&local_108,uVar19,1);
      uVar15 = *param_2;
    }
    *(double *)(param_2 + 0x14) = local_f8;
    *(ulonglong *)(param_2 + 0x10) = CONCAT44(uStack_104,local_108);
    *(ulonglong *)(param_2 + 0x12) = CONCAT44(uStack_fc,uStack_100);
    *(double *)(param_2 + 0x1a) = local_f8;
    param_2[0x16] = local_108;
    param_2[0x17] = uStack_104;
    param_2[0x18] = uStack_100;
    param_2[0x19] = uStack_fc;
  }
  if ((uVar15 >> 8 & 1) == 0) {
    if ((uVar15 & 8) != 0) {
      cVar7 = (**(code **)(*param_1 + 0xa40))(param_1);
      if ((cVar7 != '\x02') && (cVar7 = (**(code **)(*param_1 + 0xa40))(param_1), cVar7 != '\x01'))
      {
        lVar16 = param_1[0x207];
        local_e8 = (code *)((ulonglong)local_e8 & 0xffffffff00000000);
        if ((char)param_2[2] == '\x01') {
          uVar19 = (ulonglong)param_2[1];
        }
        else {
          uVar19 = FUN_1408b98e8(param_1,param_3);
          param_2[1] = (uint)uVar19;
          *(undefined1 *)(param_2 + 2) = 1;
        }
        pfVar14 = (float *)&local_e8;
LAB_143b28d53:
        fVar30 = (float)FUN_140753fde(lVar16 + 0x28,uVar19,pfVar14);
        goto LAB_143b28d5e;
      }
      cVar7 = (**(code **)(*param_1 + 0xa40))(param_1);
      if (cVar7 == '\x02') {
        lVar16 = (**(code **)(*param_1 + 0xad8))(param_1,param_3);
      }
      else {
        lVar16 = (**(code **)(*param_1 + 0xae0))(param_1);
      }
      fVar27 = 1.0;
      if (lVar16 != 0) {
        local_128 = (undefined4)*param_3;
        uStack_124 = *(undefined4 *)((longlong)param_3 + 4);
        uStack_120 = (undefined4)param_3[1];
        uStack_11c = *(undefined4 *)((longlong)param_3 + 0xc);
        local_118 = param_3[2];
        FUN_140eef0ee(lVar16,&local_e8,&local_128,2);
        if (local_e8._4_1_ != '\0') {
          fVar30 = (float)(*(double *)(param_2 + 8) - (double)(float)local_e8);
          if (0.0 <= fVar30) {
LAB_143b28c00:
            fVar27 = 1.0;
          }
          else {
            cVar7 = (**(code **)(*param_1 + 0xa40))(param_1);
            fVar27 = 0.0;
            if (cVar7 != '\x02') goto LAB_143b28c00;
          }
          if (0.0 <= fVar30) goto LAB_143b28d67;
        }
      }
      cVar7 = (**(code **)(*param_1 + 0xa40))(param_1);
      lVar16 = DAT_14cb471c8;
      if (cVar7 == '\x02') {
        iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
          uVar19 = 0;
        }
        else if (iVar3 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          uVar19 = (ulonglong)(DVar10 != DVar11);
        }
        else {
          uVar19 = 1;
        }
        fVar30 = *(float *)(lVar16 + uVar19 * 4);
      }
      else {
        lVar16 = param_1[0x207];
        local_e8 = (code *)((ulonglong)local_e8 & 0xffffffff00000000);
        if ((char)param_2[2] == '\x01') {
          uVar19 = (ulonglong)param_2[1];
        }
        else {
          uVar19 = FUN_1408b98e8(param_1,param_3);
          param_2[1] = (uint)uVar19;
          *(undefined1 *)(param_2 + 2) = 1;
        }
        fVar30 = (float)FUN_140753fde(lVar16 + 0x28,uVar19,&local_e8);
      }
      goto LAB_143b28d67;
    }
    fVar27 = 1.0;
  }
  else {
    cVar7 = (**(code **)(*param_1 + 0xa40))(param_1);
    if (cVar7 == '\x02') {
      lVar16 = (**(code **)(*param_1 + 0xad8))(param_1,param_3);
    }
    else {
      lVar16 = (**(code **)(*param_1 + 0xae0))(param_1);
    }
    if (lVar16 == 0) {
LAB_143b28b01:
      cVar7 = (**(code **)(*param_1 + 0xa40))(param_1);
      lVar16 = DAT_14cb471c8;
      if (cVar7 != '\x02') {
        lVar16 = param_1[0x207];
        local_f0 = 0.0;
        if ((char)param_2[2] == '\x01') {
          uVar19 = (ulonglong)param_2[1];
        }
        else {
          uVar19 = FUN_1408b98e8(param_1,param_3);
          param_2[1] = (uint)uVar19;
          *(undefined1 *)(param_2 + 2) = 1;
        }
        pfVar14 = &local_f0;
        goto LAB_143b28d53;
      }
      iVar3 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
        uVar19 = 0;
      }
      else if (iVar3 == 1) {
        DVar10 = FUN_140ad26c0();
        DVar11 = GetCurrentThreadId();
        uVar19 = (ulonglong)(DVar10 != DVar11);
      }
      else {
        uVar19 = 1;
      }
      fVar30 = *(float *)(lVar16 + uVar19 * 4);
    }
    else {
      local_e8 = (code *)*param_3;
      uStack_e0 = (uint)param_3[1];
      uStack_dc = *(uint *)((longlong)param_3 + 0xc);
      local_d8 = (double)param_3[2];
      FUN_140eef0ee(lVar16,&local_f0,&local_e8,2);
      if (local_ec == '\0') goto LAB_143b28b01;
      fVar30 = (float)(*(double *)(param_2 + 8) - (double)local_f0);
      fVar27 = 0.0;
      if ((fVar30 < 0.0) && (cVar7 = (**(code **)(*param_1 + 0xa40))(param_1), cVar7 == '\x02'))
      goto LAB_143b28d67;
    }
LAB_143b28d5e:
    fVar27 = 1.0;
LAB_143b28d67:
    if (fVar30 <= 0.0) {
      fVar30 = 0.0;
    }
    param_2[0x1c] = (uint)fVar30;
    param_2[0x1d] = (uint)fVar30;
  }
  uVar15 = *param_2;
  if ((uVar15 & 0x20) == 0) goto LAB_143b28ee9;
  cVar7 = FUN_1405b9b94(param_1);
  dVar2 = local_f8;
  uVar29 = uStack_fc;
  uVar28 = uStack_100;
  if (cVar7 == '\0') {
    uVar15 = *param_2;
    goto LAB_143b28ee9;
  }
  fVar30 = 0.0;
  if ((char)param_2[0x30] == '\0') {
    dVar6 = (double)CONCAT44(uStack_104,local_108);
    dVar22 = (double)CONCAT44(uStack_fc,uStack_100);
    uVar4 = *param_2;
    uVar15 = param_2[0x1d];
    cVar7 = FUN_1405b9b94(param_1);
    if (cVar7 == '\0') goto LAB_143b28dbf;
    fVar18 = (float)FUN_1405b9a48(param_1);
    uVar20 = (**(code **)(*param_1 + 0xac8))(param_1);
    uVar25 = (uint)uVar20;
    fVar30 = (float)(**(code **)(*param_1 + 0xb68))(param_1,puVar1,uVar15);
    fVar27 = fVar27 * fVar30;
    fVar30 = 0.0;
    if (0.0 < fVar27) {
      if ((uVar4 & 0x40) == 0) {
        local_178 = &local_e8;
        fVar17 = (float)(**(code **)(*param_1 + 0xb58))(param_1,puVar1,uVar15,uVar20);
        dVar23 = (double)fVar27;
        dVar21 = (local_d8 - dVar2) * dVar23 + dVar2;
        dVar22 = ((double)CONCAT44(uStack_dc,uStack_e0) - dVar22) * dVar23 + dVar22;
        dVar23 = ((double)local_e8 - dVar6) * dVar23 + dVar6;
        if ((dVar22 != 0.0 || dVar23 != 0.0) || dVar21 != 0.0) {
          uVar28 = SUB84(dVar22,0);
          uVar29 = (uint)((ulonglong)dVar22 >> 0x20);
          dVar2 = dVar21;
          dVar6 = dVar23;
        }
      }
      else {
        fVar17 = (float)(**(code **)(*param_1 + 0xb60))(param_1,puVar1,uVar15,uVar20);
      }
      fVar30 = fVar18 * fVar27;
      fVar17 = fVar17 * fVar27;
    }
    else {
      fVar17 = 0.0;
    }
  }
  else {
    dVar6 = (double)CONCAT44(DAT_14c8462c0._4_4_,(uint)DAT_14c8462c0);
    fVar27 = 1.0;
    uVar28 = (uint)DAT_14c8462c8;
    uVar29 = DAT_14c8462c8._4_4_;
    dVar2 = DAT_14c8462d0;
LAB_143b28dbf:
    fVar17 = 0.0;
    uVar25 = 0;
  }
  param_2[0x1e] = uVar25;
  param_2[0x1f] = (uint)fVar27;
  param_2[0x20] = (uint)fVar17;
  param_2[0x21] = (uint)fVar30;
  *(double *)(param_2 + 0x22) = dVar6;
  *(ulonglong *)(param_2 + 0x24) = CONCAT44(uVar29,uVar28);
  *(double *)(param_2 + 0x26) = dVar2;
  uVar15 = *param_2;
  if ((uVar15 & 1) != 0) {
    *(double *)(param_2 + 0xe) = (double)fVar17 + *(double *)(param_2 + 0xe);
  }
  if ((uVar15 & 2) != 0) {
    *(double *)(param_2 + 0x16) = dVar6;
    *(ulonglong *)(param_2 + 0x18) = CONCAT44(uVar29,uVar28);
    *(double *)(param_2 + 0x1a) = dVar2;
  }
  if ((uVar15 & 0x108) != 0) {
    param_2[0x1d] = (uint)(fVar17 + (float)param_2[0x1d]);
  }
LAB_143b28ee9:
  if ((uVar15 & 0x10) != 0) {
    param_2[0x28] = (uint)(float)(*(double *)(param_2 + 0xe) - (double)param_3[2]);
  }
  if ((uVar15 & 4) != 0) {
    local_d8 = DAT_14c8464f0;
    local_e8 = (code *)CONCAT44(DAT_14c8464e0._4_4_,(uint)DAT_14c8464e0);
    uStack_e0 = (uint)DAT_14c8464e8;
    uStack_dc = DAT_14c8464e8._4_4_;
    if ((char)param_2[0x30] == '\0') {
      if ((char)param_2[2] == '\x01') {
        uVar19 = (ulonglong)param_2[1];
      }
      else {
        uVar19 = FUN_1408b98e8(param_1,param_3);
        param_2[1] = (uint)uVar19;
        *(undefined1 *)(param_2 + 2) = 1;
      }
      (**(code **)(*param_1 + 0xa90))(param_1,&local_e8,uVar19);
    }
    *(double *)(param_2 + 0x2e) = local_d8;
    param_2[0x2a] = (uint)(float)local_e8;
    param_2[0x2b] = local_e8._4_4_;
    param_2[0x2c] = uStack_e0;
    param_2[0x2d] = uStack_dc;
  }
  if ((local_d0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143b2917e FUN_143b2917e body=458 status=ok
// SIG undefined FUN_143b2917e(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_143b2917e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0 [2];
  undefined4 local_c0 [2];
  undefined8 local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  byte local_78;
  undefined1 local_74;
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar1 = (longlong *)(param_1 + -0x2a8);
  cVar4 = (**(code **)(*(longlong *)(param_1 + -0x2a8) + 0x460))(plVar1);
  if (cVar4 != '\0') {
    (**(code **)(*plVar1 + 0xa28))(plVar1,&local_70,1);
    if (0 < local_68) {
      local_d8 = param_2 + 0x88;
      lVar7 = 0;
      iVar5 = local_68;
      do {
        plVar3 = *(longlong **)(local_70 + lVar7 * 8);
        if (plVar3 != (longlong *)0x0) {
          local_c0[0] = 0;
          local_b8 = 0;
          local_b0 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_78 = local_78 & 0xc0;
          local_74 = 3;
          local_d0[1] = 0;
          local_d0[0] = *(longlong *)(param_1 + 0x16f8);
          if ((local_d0[0] != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          FUN_1433c458e(local_c0,plVar3,local_d0,local_d0 + 1);
          if ((longlong)(int)uStack_a0 != 0) {
            lVar6 = 0;
            do {
              pbVar2 = (byte *)(local_a8 + 0x6a + lVar6);
              *pbVar2 = *pbVar2 | 1;
              lVar6 = lVar6 + 0x70;
            } while ((longlong)(int)uStack_a0 * 0x70 - lVar6 != 0);
          }
          FUN_1479eeac4(local_d8,local_c0);
          if (plVar3 != plVar1) {
            (**(code **)(plVar3[0x55] + 0x10))(plVar3 + 0x55,param_2);
          }
          FUN_1479eeb62(local_c0);
          iVar5 = local_68;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar5);
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b293a6 FUN_143b293a6 body=356 status=ok
// SIG undefined FUN_143b293a6(void)

void FUN_143b293a6(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    if (DAT_14cb46ec8 == 0) {
      local_60 = &local_48;
      local_48 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_142b4754c;
      local_68 = &LAB_1483e40eb;
      local_70 = &LAB_146486986;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000005;
      local_90 = 8;
      local_98 = 0x420;
      FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
    }
    if ((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) == DAT_14cb46ec8 + 0x30)) {
      plVar2 = *(longlong **)(lVar1 + 0x3b8);
      goto LAB_143b2941d;
    }
  }
  plVar2 = (longlong *)0x0;
LAB_143b2941d:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000143b2945a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x2c0))(plVar2,param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
}



// FUNCTION 143b29519 FUN_143b29519 body=55 status=ok
// SIG undefined FUN_143b29519(void)

void FUN_143b29519(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb47080 == 0) {
    uVar1 = FUN_140f8264f();
    DAT_14cb47080 = FUN_14171c317(FUN_146487027,uVar1,L"EWaterExclusionMode");
  }
  return;
}



// FUNCTION 143b29550 FUN_143b29550 body=69 status=ok
// SIG undefined FUN_143b29550(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b29550(void)

{
  _DAT_14cb470a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b29592. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb470b0,1);
  return;
}



// FUNCTION 143b29595 FUN_143b29595 body=55 status=ok
// SIG undefined FUN_143b29595(void)

void FUN_143b29595(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb470c8 == 0) {
    uVar1 = FUN_140f8264f();
    DAT_14cb470c8 = FUN_14171c317(FUN_146487085,uVar1,L"EWaterBrushBlendType");
  }
  return;
}



// FUNCTION 143b295cc FUN_143b295cc body=69 status=ok
// SIG undefined FUN_143b295cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b295cc(void)

{
  _DAT_14cb47120 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b2960e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb47128,1);
  return;
}



// FUNCTION 143b29612 FUN_143b29612 body=64 status=ok
// SIG undefined FUN_143b29612(void)

undefined8 * FUN_143b29612(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  
  FUN_1403305c2(param_1,param_2,1);
  *param_1 = &PTR_FUN_14ae88a40;
  *(undefined1 *)(param_1 + 0x117) = param_3;
  *(byte *)((longlong)param_1 + 0x76) = *(byte *)((longlong)param_1 + 0x76) & 0xf7;
  iVar1 = FUN_1483e6f25();
  if (iVar1 != 2) {
    *(byte *)((longlong)param_1 + 0x6e) = *(byte *)((longlong)param_1 + 0x6e) | 0x10;
  }
  return param_1;
}



// FUNCTION 143b29652 FUN_143b29652 body=137 status=ok
// SIG undefined FUN_143b29652(void)

longlong FUN_143b29652(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  FUN_140061418();
  iVar1 = FUN_1483e6f25();
  if (iVar1 == 2) {
    uVar2 = *(uint *)(param_2 + 0x10) & 0xfffffffb;
    *(uint *)(param_2 + 0x10) = uVar2;
    if (*(longlong **)(param_3 + 0x23e0) != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(**(longlong **)(param_3 + 0x23e0) + 8))();
      plVar4 = (longlong *)FUN_1483fa15a();
      uVar2 = 4;
      if (*plVar3 != *plVar4) {
        plVar4 = (longlong *)FUN_1483fa1c8();
        if (*plVar3 != *plVar4) {
          plVar4 = (longlong *)FUN_1483fa236();
          uVar2 = (uint)(*plVar3 == *plVar4) << 2;
        }
      }
      uVar2 = *(uint *)(param_2 + 0x10) & 0xfffffffb | uVar2;
    }
    *(uint *)(param_2 + 0x10) = uVar2 & 0xfffffff7;
  }
  return param_2;
}



// FUNCTION 143b296dc FUN_143b296dc body=1937 status=ok
// SIG undefined FUN_143b296dc(void)

ulonglong FUN_143b296dc(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
  double dVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  uint local_200;
  uint local_1f8;
  undefined8 local_1f0;
  wchar_t *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  code **local_1d0;
  code *local_1c8;
  code *local_1c0;
  longlong local_1b0;
  longlong local_1a8;
  code *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_164;
  undefined4 local_15c;
  undefined8 local_158;
  undefined2 local_150;
  undefined1 local_14e;
  longlong *local_148;
  undefined4 local_140;
  longlong local_138;
  ulonglong uStack_130;
  code *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined2 local_f8;
  undefined1 local_f6;
  undefined4 local_f4;
  longlong local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  ulonglong local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_228;
  lVar11 = *(longlong *)(param_1 + 0xa8);
  if (lVar11 != 0) {
    if (DAT_14cb46ec8 == 0) {
      local_1d0 = &local_128;
      local_128 = FUN_141030f22;
      local_1c0 = FUN_14081d0ea;
      local_1c8 = FUN_142b4754c;
      local_1d8 = &LAB_1483e40eb;
      local_1e0 = &LAB_146486986;
      local_1e8 = L"Engine";
      local_1f0 = 0;
      local_1f8 = 0x10000005;
      local_200 = 8;
      local_208 = CONCAT44(local_208._4_4_,0x420);
      FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
    }
    if (((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) == DAT_14cb46ec8 + 0x30)) &&
       (lVar11 = *(longlong *)(lVar11 + 0x398), lVar11 != 0)) {
      iVar3 = *(int *)(lVar11 + 0x628);
      iVar8 = 1;
      if (1 < iVar3) {
        iVar8 = iVar3;
      }
      iVar8 = iVar8 + -1;
      if (*(char *)(lVar11 + 0x695) != '\0') {
        iVar8 = iVar3;
      }
      if (2 < iVar8) {
        local_d8 = 0;
        uStack_d0 = 0;
        local_128 = (code *)0x0;
        uStack_120 = 0;
        FUN_141266fc2(lVar11,0,0x42c80000,&local_128);
        if (1 < (int)uStack_120) {
          lVar11 = 8;
          lVar12 = 0;
          do {
            uVar10 = uStack_d0;
            uVar9 = *(undefined8 *)(local_128 + lVar11 + -8);
            uVar2 = *(undefined8 *)(local_128 + lVar11);
            lVar13 = (longlong)(int)uStack_d0;
            uVar6 = (int)uStack_d0 + 1;
            uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar6);
            if (uStack_d0._4_4_ < uVar6) {
              FUN_14489624a(&local_d8,uVar10 & 0xffffffff);
            }
            *(undefined8 *)(local_d8 + lVar13 * 0x10) = uVar9;
            *(undefined8 *)(local_d8 + 8 + lVar13 * 0x10) = uVar2;
            lVar12 = lVar12 + 1;
            lVar11 = lVar11 + 0x18;
          } while (lVar12 < (longlong)(int)uStack_120 + -1);
        }
        if (local_128 != (code *)0x0) {
          FUN_1400020a8();
        }
        local_108 = 0;
        uStack_100 = 0;
        local_118 = 0;
        uStack_110 = 0;
        local_128 = (code *)0x0;
        uStack_120 = 0;
        local_f8 = 1;
        local_f6 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        local_e0 = 0xffffffff;
        local_f4 = 2;
        uVar10 = 0;
        FUN_148278c44(&local_128,&local_d8,0);
        FUN_148266a60(&local_128);
        lVar11 = (longlong)(int)uStack_e8;
        if (lVar11 != 0) {
          lVar12 = *(longlong *)(param_2 + 0x208);
          if (*(int *)(lVar12 + 0x38) < 1) {
            lVar13 = 0;
          }
          else {
            lVar13 = **(longlong **)(lVar12 + 0x30);
          }
          uVar9 = *(undefined8 *)(lVar12 + 0x40);
          local_1b0 = (longlong)(int)uStack_120;
          if (local_1b0 == 0) {
LAB_143b29a49:
            lVar11 = local_f0 + lVar11 * 0xc;
            lVar12 = local_f0;
            do {
              uVar7 = FUN_146c01152(param_2,lVar12,0);
              FUN_146c2a048(uVar9,uVar7,lVar12,1);
              FUN_146c01580(lVar13,uVar7,lVar12,1);
              lVar12 = lVar12 + 0xc;
            } while (lVar12 != lVar11);
          }
          else {
            local_1a0 = local_128;
            local_1b0 = local_1b0 << 4;
            lVar11 = 0;
            local_1a8 = lVar13;
            do {
              local_c8 = *(longlong *)(local_1a0 + lVar11);
              lStack_c0 = *(longlong *)(local_1a0 + lVar11 + 8);
              local_b8 = 0;
              local_a8 = DAT_14c846338;
              uStack_b0 = DAT_14c846330;
              uStack_9c = DAT_14c846338;
              uStack_a4 = (undefined4)DAT_14c846330;
              uStack_a0 = (undefined4)((ulonglong)DAT_14c846330 >> 0x20);
              local_98 = DAT_14c84635c;
              local_90 = local_90 & 0xffffffffff000000;
              FUN_146c02208(param_2,&local_c8);
              local_188 = 0;
              uStack_180 = 0x3f80000000000000;
              FUN_146c32f5e(uVar9,&local_188);
              local_188 = 0;
              uStack_180 = CONCAT44(uStack_180._4_4_,0x3f800000);
              FUN_146c2f9e2(local_1a8,&local_188);
              lVar11 = lVar11 + 0x10;
            } while (local_1b0 != lVar11);
            lVar11 = (longlong)(int)uStack_e8;
            lVar13 = local_1a8;
            if (lVar11 != 0) goto LAB_143b29a49;
          }
          uVar10 = CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
          if ((param_3 != 0) && (0.0 < *(float *)(param_1 + 0xff0))) {
            local_138 = 0;
            uStack_130 = 0;
            FUN_148267e0c(&local_c8,&local_d8);
            local_140 = 1;
            local_1e8 = (wchar_t *)0x3ff0000000000000;
            local_1f0 = 0xbff0000000000000;
            local_1f8 = local_1f8 & 0xffffff00;
            local_200 = local_200 & 0xffffff00;
            local_208 = 0x4000000000000000;
            local_148 = &local_c8;
            FUN_148268fe5(SUB84((double)(*(float *)(param_1 + 0xff0) * 0.5),0),&local_148,&local_138
                          ,0);
            FUN_148267ee4(&local_c8);
            local_a8 = 0;
            uStack_a4 = 0;
            uStack_a0 = 0;
            uStack_9c = 0;
            local_b8 = 0;
            uStack_b0 = 0;
            local_c8 = 0;
            lStack_c0 = 0;
            local_98 = CONCAT53(local_98._3_5_,1);
            local_90 = 0;
            uStack_88 = 0;
            local_80 = 0xffffffff;
            local_98 = CONCAT44(2,(undefined4)local_98);
            if ((longlong)(int)uStack_130 != 0) {
              lVar11 = (longlong)(int)uStack_130 * 0x28;
              lVar12 = local_138;
              do {
                dVar4 = (double)FUN_1483e7274(lVar12);
                if (0.0 < dVar4) {
                  FUN_148266a14(&local_c8,lVar12);
                }
                lVar12 = lVar12 + 0x28;
                lVar11 = lVar11 + -0x28;
              } while (lVar11 != 0);
            }
            bVar5 = FUN_148266a60(&local_c8);
            if ((bVar5 & (int)uStack_88 != 0) == 0) {
              FUN_148267160(&local_c8);
              FUN_148273bb4(local_138,uStack_130 & 0xffffffff);
              if (local_138 != 0) {
                FUN_1400020a8();
              }
              uVar10 = 0;
            }
            else {
              lVar11 = *(longlong *)(param_3 + 0x208);
              if (*(int *)(lVar11 + 0x38) < 1) {
                uVar9 = 0;
              }
              else {
                uVar9 = **(undefined8 **)(lVar11 + 0x30);
              }
              uVar2 = *(undefined8 *)(lVar11 + 0x40);
              if ((longlong)(int)lStack_c0 == 0) {
                lVar11 = (longlong)(int)uStack_88;
                local_1b0 = 0;
LAB_143b29d48:
                uVar1 = local_90 + lVar11 * 0xc;
                uVar14 = local_90;
                do {
                  uVar7 = FUN_146c01152(param_3,uVar14,0);
                  FUN_146c2a048(uVar2,uVar7,uVar14,1);
                  FUN_146c01580(uVar9,uVar7,uVar14,1);
                  uVar14 = uVar14 + 0xc;
                } while (uVar14 != uVar1);
              }
              else {
                local_1a8 = local_c8;
                local_1b0 = (longlong)(int)lStack_c0 << 4;
                lVar11 = 0;
                do {
                  local_188 = *(undefined8 *)(local_1a8 + lVar11);
                  uStack_180 = ((undefined8 *)(local_1a8 + lVar11))[1];
                  local_178 = 0;
                  local_168 = DAT_14c846338;
                  local_170 = DAT_14c846330;
                  local_15c = DAT_14c846338;
                  local_164 = DAT_14c846330;
                  local_158 = DAT_14c84635c;
                  local_150 = 0;
                  local_14e = 0;
                  FUN_146c02208(param_3,&local_188);
                  local_198 = 0;
                  uStack_190 = 0x3f80000000000000;
                  FUN_146c32f5e(uVar2,&local_198);
                  local_198 = 0;
                  uStack_190 = CONCAT44(uStack_190._4_4_,0x3f800000);
                  FUN_146c2f9e2(uVar9,&local_198);
                  lVar11 = lVar11 + 0x10;
                } while (local_1b0 != lVar11);
                lVar11 = (longlong)(int)uStack_88;
                if (lVar11 != 0) goto LAB_143b29d48;
              }
              FUN_148267160(&local_c8);
              FUN_148273bb4(local_138,uStack_130 & 0xffffffff);
              if (local_138 != 0) {
                FUN_1400020a8();
              }
            }
          }
        }
        FUN_148267160(&local_128);
        if (local_d8 != 0) {
          FUN_1400020a8();
        }
        goto LAB_143b29782;
      }
    }
  }
  uVar10 = 0;
LAB_143b29782:
  if ((local_70 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b29e74 FUN_143b29e74 body=79 status=ok
// SIG undefined FUN_143b29e74(void)

undefined1 FUN_143b29e74(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  for (lVar1 = param_1; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x20)) {
    if ((*(uint *)(lVar1 + 8) & 0x30) != 0) goto LAB_143b29ea2;
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  param_1 = plVar2[0x22];
  if (param_1 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    param_1 = plVar2[0x22];
  }
LAB_143b29ea2:
  return *(undefined1 *)(param_1 + 0x3b4);
}



// FUNCTION 143b29ec4 FUN_143b29ec4 body=48 status=ok
// SIG undefined FUN_143b29ec4(void)

longlong FUN_143b29ec4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140b627c0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b29ef8 FUN_143b29ef8 body=48 status=ok
// SIG undefined FUN_143b29ef8(void)

longlong FUN_143b29ef8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140b627c0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b29f28 FUN_143b29f28 body=48 status=ok
// SIG undefined FUN_143b29f28(void)

longlong FUN_143b29f28(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1402ef4ac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b29f58 FUN_143b29f58 body=48 status=ok
// SIG undefined FUN_143b29f58(void)

longlong FUN_143b29f58(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140b627c0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b29ff6 FUN_143b29ff6 body=118 status=ok
// SIG undefined FUN_143b29ff6(void)

undefined8 FUN_143b29ff6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      *(undefined1 *)(param_2 + lVar3) = *(undefined1 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if (DAT_14c950c29 == '\x01') {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
        }
      }
      lVar1 = param_2 + lVar3;
      *(longlong *)(lVar1 + 8) = lVar2;
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_3 + 0x10 + lVar3);
      *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(param_3 + 0x18 + lVar3);
      lVar3 = lVar3 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143b2a0e2 FUN_143b2a0e2 body=199 status=ok
// SIG undefined FUN_143b2a0e2(void)

undefined1 FUN_143b2a0e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (param_4 != 0) {
    lVar12 = 0;
    bVar10 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + 0x10 + lVar12) = *(undefined8 *)(param_3 + 0x10 + lVar12);
      uVar9 = ((undefined8 *)(param_3 + lVar12))[1];
      *(undefined8 *)(param_2 + lVar12) = *(undefined8 *)(param_3 + lVar12);
      ((undefined8 *)(param_2 + lVar12))[1] = uVar9;
      puVar2 = (undefined4 *)(param_3 + 0x18 + lVar12);
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      puVar3 = (undefined4 *)(param_2 + 0x18 + lVar12);
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      *(undefined8 *)(param_2 + 0x28 + lVar12) = *(undefined8 *)(param_3 + 0x28 + lVar12);
      *(undefined8 *)(param_2 + 0x30 + lVar12) = *(undefined8 *)(param_3 + 0x30 + lVar12);
      lVar11 = *(longlong *)(param_3 + 0x38 + lVar12);
      if ((bVar10 & 1) != 0) {
        if (lVar11 == 0) {
          lVar11 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar11 = *(longlong *)(param_3 + 0x38 + lVar12);
          bVar10 = DAT_14c950c29;
        }
      }
      lVar1 = param_2 + lVar12;
      *(longlong *)(lVar1 + 0x38) = lVar11;
      *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(param_3 + 0x50 + lVar12);
      puVar4 = (undefined8 *)(param_3 + 0x40 + lVar12);
      uVar9 = puVar4[1];
      *(undefined8 *)(lVar1 + 0x40) = *puVar4;
      *(undefined8 *)(lVar1 + 0x48) = uVar9;
      puVar4 = (undefined8 *)(param_3 + 0x58 + lVar12);
      uVar9 = puVar4[1];
      puVar2 = (undefined4 *)(param_3 + 100 + lVar12);
      uVar5 = *puVar2;
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      *(undefined8 *)(lVar1 + 0x58) = *puVar4;
      *(undefined8 *)(lVar1 + 0x60) = uVar9;
      *(undefined4 *)(lVar1 + 100) = uVar5;
      *(undefined4 *)(lVar1 + 0x68) = uVar6;
      *(undefined4 *)(lVar1 + 0x6c) = uVar7;
      *(undefined4 *)(lVar1 + 0x70) = uVar8;
      *(undefined4 *)(lVar1 + 0x78) = *(undefined4 *)(param_3 + 0x78 + lVar12);
      lVar12 = lVar12 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143b2a1aa FUN_143b2a1aa body=367 status=ok
// SIG undefined FUN_143b2a1aa(void)

undefined8
FUN_143b2a1aa(double *param_1,double *param_2,undefined8 param_3,double *param_4,double *param_5)

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
  undefined8 uVar10;
  
  dVar9 = DAT_14c8462d0;
  dVar8 = DAT_14c8462c8;
  dVar7 = DAT_14c8462c0;
  dVar1 = param_2[2];
  dVar2 = param_1[2];
  dVar3 = param_2[1];
  dVar4 = *param_1;
  dVar5 = param_1[1];
  dVar6 = (dVar1 - dVar2) * DAT_14c8462d0 +
          (*param_2 - dVar4) * DAT_14c8462c0 + DAT_14c8462c8 * (dVar3 - dVar5);
  if (ABS(dVar6) <= 9.99999993922529e-09) {
    uVar10 = 0;
  }
  else {
    dVar6 = -(dVar2 * DAT_14c8462d0 + dVar4 * DAT_14c8462c0 + DAT_14c8462c8 * dVar5) / dVar6;
    uVar10 = 0;
    if ((0.0 < dVar6) && (dVar6 <= 1.0)) {
      *param_4 = dVar4 + (*param_2 - dVar4) * dVar6;
      param_4[1] = dVar5 + (dVar3 - dVar5) * dVar6;
      param_4[2] = dVar2 + (dVar1 - dVar2) * dVar6;
      *param_5 = dVar7;
      param_5[1] = dVar8;
      param_5[2] = dVar9;
      uVar10 = 1;
    }
  }
  return uVar10;
}



// FUNCTION 143b2a31a FUN_143b2a31a body=31 status=ok
// SIG undefined FUN_143b2a31a(void)

undefined8 FUN_143b2a31a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b2a386 FUN_143b2a386 body=31 status=ok
// SIG undefined FUN_143b2a386(void)

undefined8 FUN_143b2a386(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b2a3f2 FUN_143b2a3f2 body=87 status=ok
// SIG undefined FUN_143b2a3f2(void)

void FUN_143b2a3f2(longlong *param_1)

{
  undefined1 auStack_48 [40];
  longlong *local_20;
  longlong *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = param_1 + 2;
  local_20 = param_1 + 1;
  FUN_1483ef66c(*param_1 + 0xa8,local_c);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b2a460 FUN_143b2a460 body=62 status=ok
// SIG undefined FUN_143b2a460(void)

undefined8 * FUN_143b2a460(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_14ae8c260;
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b2a4c8 FUN_143b2a4c8 body=29 status=ok
// SIG undefined FUN_143b2a4c8(void)

undefined8 FUN_143b2a4c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b2a4e6 FUN_143b2a4e6 body=181 status=ok
// SIG undefined FUN_143b2a4e6(void)

bool FUN_143b2a4e6(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined1 local_e8 [4];
  undefined1 local_e4;
  undefined1 local_e0 [160];
  float local_40;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar1 = *param_1;
  uVar3 = 0x10;
  if (*(char *)(lVar1 + 0x1f8) == '\x01') {
    uVar3 = (uint)*(byte *)(lVar1 + 0x1f9) << 6 | 0x30;
  }
  uVar2 = uVar3 + 0x80;
  if (*(char *)(lVar1 + 0x1fa) == '\0') {
    uVar2 = uVar3;
  }
  local_f8 = local_e8;
  local_e4 = 0;
  (**(code **)(*(longlong *)*param_2 + 0xa80))((longlong *)*param_2,local_e0,param_1 + 1,uVar2);
  if (0.0 < local_40) {
    *(undefined1 *)param_1[4] = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return local_40 <= 0.0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b2a59c FUN_143b2a59c body=199 status=ok
// SIG undefined FUN_143b2a59c(void)

undefined8 FUN_143b2a59c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  void *_Src;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_88 [36];
  undefined1 local_64 [4];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *param_2;
  local_60 = *param_1;
  local_58 = *(undefined4 *)(param_1 + 1);
  uStack_54 = *(undefined4 *)((longlong)param_1 + 0xc);
  uStack_50 = *(undefined4 *)(param_1 + 2);
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = (void *)0x0;
  local_40 = *(int *)(param_1 + 4);
  lVar3 = (longlong)local_40;
  _Src = (void *)param_1[3];
  local_38 = uVar1;
  if (lVar3 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar3 * 2);
  }
  cVar2 = FUN_1483f109a(uVar1,&local_60);
  if (cVar2 != '\0') {
    FUN_1483f1110(param_1[5],local_64,&local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b2a664 FUN_143b2a664 body=185 status=ok
// SIG undefined FUN_143b2a664(void)

undefined8 FUN_143b2a664(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  void *_Src;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *param_2;
  local_58 = *param_1;
  local_50 = *(undefined4 *)(param_1 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0xc);
  uStack_48 = *(undefined4 *)(param_1 + 2);
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0x14);
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 4);
  lVar3 = (longlong)local_38;
  _Src = (void *)param_1[3];
  if (lVar3 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar3 * 2);
  }
  cVar2 = FUN_1483f109a(uVar1,&local_58);
  if (cVar2 != '\0') {
    FUN_143b281d4(uVar1,param_1[5]);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b2a71e FUN_143b2a71e body=47 status=ok
// SIG undefined FUN_143b2a71e(void)

undefined8 FUN_143b2a71e(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  float extraout_XMM0_Da;
  float fVar2;
  
  lVar1 = *param_1;
  FUN_1405b9a48(*param_2);
  fVar2 = *(float *)(lVar1 + 0xa0);
  if (fVar2 <= extraout_XMM0_Da) {
    fVar2 = extraout_XMM0_Da;
  }
  *(float *)(lVar1 + 0xa0) = fVar2;
  return 1;
}



// FUNCTION 143b2a74d FUN_143b2a74d body=2280 status=ok
// SIG undefined FUN_143b2a74d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b2a74d(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined8 local_68;
  undefined4 local_54;
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14ae76dd0;
  local_78 = 2;
  FUN_14282b410(L"/Script/Water",0,0,&PTR_FUN_14ae76df0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Water",&PTR_FUN_14ae77b90,1,0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/Water",0,0,&PTR_FUN_14ae77e90);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/Water",0,0,&PTR_FUN_14ae78160);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/Water",0,0,&PTR_FUN_14ae78360);
  DAT_14cb46b40 = 0;
  DAT_14cb46b50 = &PTR_LAB_14aa4da30;
  _DAT_14cb46b58 = FUN_143b2a1aa;
  DAT_14cb46b30 = FUN_147ca5e84;
  atexit((_func_5014 *)&LAB_143b2633b);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_50,&DAT_14cb46b70);
  if (cVar2 == '\0') {
    _DAT_14cb46b70 = 0;
    uRam000000014cb46b78 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Water",&PTR_FUN_14ae79410,1,0);
  local_50._0_4_ = 0;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb46bd8,L"r.Water.DebugBuoyancy",&local_50,
                L"Enable debug drawing for water interactions.");
  atexit(FUN_143b26362);
  local_50._0_4_ = 10;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb46bf0,L"r.Water.BuoyancyDebugPoints",&local_50,
                L"Number of points in one dimension for buoyancy debug.");
  atexit(FUN_143b263a7);
  local_50._0_4_ = 1000;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb46c08,L"r.Water.BuoyancyDebugSize",&local_50,
                L"Side length of square for buoyancy debug.");
  atexit(FUN_143b263ec);
  local_50._0_4_ = 1;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb46c20,L"r.Water.UseSplineKeyOptimization",&local_50,
                L"Whether to cache spline input key for water bodies.");
  atexit(FUN_143b26431);
  local_50._0_4_ = 1;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb46c38,L"r.Water.UseBuoyancyAsyncPath",&local_50,
                L"Whether to use async physics callback for buoyancy.");
  atexit(FUN_143b26476);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Water",&PTR_FUN_14ae7a000,1,0);
  FUN_1446f470e(&DAT_14cb46c84,L"SelfActor",1);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Water",&PTR_FUN_14ae7a4b0,1,0);
  FUN_1446f470e(&DAT_14cb46cf0,L"GenerateGerstnerWaves",1);
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14ae7bfd0;
  local_78 = 2;
  FUN_14282b410(L"/Script/Water",&PTR_FUN_14ae7c040,4,&PTR_FUN_14ae7bff0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Water",&PTR_FUN_14ae7c440,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Water",&PTR_FUN_14ae7d0f0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Water",&PTR_FUN_14ae7d660,1,0);
  FUN_1446f470e(&DAT_14cb46dd8,L"GetWaterDataAtPoint",1);
  FUN_1446f470e(&DAT_14cb46de0,L"GetWaveParamLookupTableOffset",1);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Water",&PTR_FUN_14ae7dcf0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Water",&PTR_FUN_14ae7f540,2,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Water",&PTR_FUN_14ae811d0,2,0);
  local_50._0_4_ = 0x42480000;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cb471d0,L"r.Water.WaterSplineResampleMaxDistance",&local_50,
                L"Maximum distance between the sample segments and the spline when converting the water spline shapes to polygons (as distance discreases, the number of vertices will increase, \t\t, the physics shapes will be more accurate, the water tiles will match more closely, but the computational cost will also increase)."
               );
  atexit(FUN_143b28189);
  _DAT_14cb46ee8 = 0;
  LOCK();
  DAT_14cb46ee0 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_143b281ce);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/Water",&PTR_FUN_14ae84a60,1,&PTR_FUN_14ae84a30);
  local_50._0_4_ = 0x453b8000;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cb471b8,L"r.Water.OceanFallbackDepth",&local_50,
                L"Depth to report for the ocean when no terrain is found under the query location. Not used when <= 0."
               );
  atexit(FUN_143b2845e);
  local_50 = (undefined8 *)CONCAT44(local_50._4_4_,1);
  local_78._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb46ff0,L"r.Water.BuildConservativeRasterizationMesh",&local_50,
                L"Enables additional data in the UV channels of the water mesh, which is used for software conservative rasterization when creating the GPU water quadtree."
               );
  atexit(FUN_143b284a3);
  local_50 = (undefined8 *)((ulonglong)local_50 & 0xffffffffffffff00);
  local_78 = (ulonglong)local_78._4_4_ << 0x20;
  FUN_140bd5914(&DAT_14cb47008,L"r.Water.GbxSuspendWaterRendering",&local_50,
                L"Suspend water rendering and UnderWater Postprocess material, we use this to disable water artifact temporary during loading screen"
               );
  atexit(FUN_143b284e8);
  FUN_1446f470e(&DAT_14cb471e8,L"WaterBodyIndex",1);
  FUN_1446f470e(&DAT_14cb471f8,L"WaterZoneIndex",1);
  FUN_1446f470e(&DAT_14cb47020,L"WaterBodyZOffset",1);
  FUN_1446f470e(&DAT_14cb47200,L"WaterVelocityAndHeight",1);
  FUN_1446f470e(&DAT_14cb47208,L"WaterVelocityAndHeightVT",1);
  FUN_1446f470e(&DAT_14cb471f0,L"GlobalOceanHeight",1);
  FUN_1446f470e(&DAT_14cb47028,L"MaxFlowVelocity",1);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Water",&PTR_FUN_14ae85a50,2,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Water",&PTR_FUN_14ae86960,1,0);
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14ae872a0;
  local_78 = 0;
  FUN_14282b410(L"/Script/Water",&PTR_FUN_14ae872c0,1,0);
  local_50 = (undefined8 *)CONCAT71(local_50._1_7_,1);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cb470a8,L"gbx.UseCustomOverlappingWaterBodies",&local_50,
                L"Will use a custom gbx optimized version of AWaterBodyExclusionVolume::UpdateOverlappingWaterBodies. See OAK2-69859"
               );
  atexit(FUN_143b29550);
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14ae876e0;
  local_78 = 1;
  FUN_14282b410(L"/Script/Water",0,0,&PTR_FUN_14ae87700);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Water",&PTR_FUN_14ae87a60,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Water",&PTR_FUN_14ae88830,1,0);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *local_50 = &PTR_LAB_149e170a0;
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
  local_50[2] = lVar3;
  *local_50 = &PTR_FUN_149e17030;
  local_50[3] = FUN_1483e6e2c;
  local_54 = 0;
  local_78 = CONCAT44(local_78._4_4_,0x20);
  FUN_14078dbce(&DAT_14cb47120,L"r.Water.WaterInfo.ShowSceneProxies",&local_54,
                L"When enabled, shows the water scene proxies in the main viewport. Useful for debugging only.\n0: Disabled\n1: Only show water info mesh\n2: Only show water info dilated mesh\n3: Show both water info meshes"
               );
  (**(code **)(*DAT_14cb47128 + 200))(DAT_14cb47128,&local_50);
  if (local_48 != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_143b2af73;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143b2af73:
  atexit(FUN_143b295cc);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Water",&PTR_FUN_14ae894b0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Water",&PTR_FUN_14ae8a060,2,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Water",&PTR_FUN_14ae8aea0,1,0);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b2b038 FUN_143b2b038 body=460 status=ok
// SIG undefined FUN_143b2b038(void)

undefined8 FUN_143b2b038(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = *(longlong *)(param_1 + 0x660);
  if ((lVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar7);
    lVar7 = *(longlong *)(param_1 + 0x660);
  }
  else if (lVar7 == 0) {
    return 0;
  }
  if ((lVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar7);
    lVar7 = *(longlong *)(param_1 + 0x660);
  }
  if (((DAT_14c950c29 & 1) != 0) && (lVar7 != 0)) {
    FUN_1456cec3c(lVar7);
  }
  if (*(longlong *)(lVar7 + 0xe0) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x660);
    if ((lVar7 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar7);
    }
    if (*(char *)(*(longlong *)(lVar7 + 0xe0) + 0x91) == '\x01') {
      lVar7 = *(longlong *)(param_1 + 0x660);
      lVar8 = lVar7;
      if ((lVar7 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar7);
        lVar8 = *(longlong *)(param_1 + 0x660);
      }
      plVar2 = *(longlong **)(lVar7 + 0xe0);
      if ((lVar8 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar8);
      }
      if ((DAT_14cb0d2b0 == 0) || (*(char *)(DAT_14cb0d2b0 + 0xd58) != '\x01')) {
        uVar3 = *(uint *)(lVar8 + 0x150);
      }
      else {
        uVar6 = 0;
        if (DAT_14c760db4 != 1) {
          uVar6 = DAT_14c761b9c;
        }
        if (DAT_14c761de0 == 0) {
          uVar6 = DAT_14c761b9c;
        }
        uVar3 = FUN_144b1da20(lVar8 + 0xe8,uVar6);
      }
      if ((*(byte *)(param_1 + 0x674) & 0x20) != 0) {
        uVar3 = *(uint *)(param_1 + 0x654);
      }
      iVar1 = (int)plVar2[1];
      uVar4 = 0;
      if (iVar1 != 0) {
        uVar5 = iVar1 - 1;
        if ((int)uVar3 < (int)uVar5) {
          uVar5 = uVar3;
        }
        if (0 < (int)uVar5) {
          uVar4 = (ulonglong)uVar5;
        }
        lVar7 = *(longlong *)(*plVar2 + uVar4 * 8);
        return CONCAT71((int7)((ulonglong)lVar7 >> 8),*(int *)(lVar7 + 0x10c) != 0);
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 143b2b204 FUN_143b2b204 body=69 status=ok
// SIG undefined FUN_143b2b204(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b2b204(void)

{
  _DAT_14cb47280 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b2b246. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb47288,1);
  return;
}



// FUNCTION 143b2b24a FUN_143b2b24a body=4717 status=ok
// SIG undefined FUN_143b2b24a(void)

undefined8 FUN_143b2b24a(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  void *_Src;
  byte bVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  longlong lVar15;
  int *piVar16;
  double *pdVar17;
  ulonglong uVar18;
  int iVar19;
  double *pdVar20;
  int iVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  longlong *plVar24;
  int iVar25;
  longlong lVar26;
  ulonglong uVar27;
  int iVar28;
  longlong lVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined1 auStack_4d8 [32];
  undefined8 local_4b8;
  undefined1 local_4b0;
  undefined1 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_488;
  undefined8 local_480;
  double local_478;
  longlong local_470;
  double local_468;
  double local_460;
  double local_458;
  longlong *local_450;
  undefined8 local_448;
  undefined8 local_440;
  longlong local_438;
  double *local_430;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined8 local_418;
  undefined8 uStack_410;
  int *local_408;
  undefined4 local_400;
  longlong local_3f8;
  ulonglong uStack_3f0;
  void *local_3e0;
  int local_3d8;
  undefined4 local_3d4;
  undefined1 local_3d0 [40];
  double *local_3a8;
  uint uStack_3a0;
  uint uStack_39c;
  double local_398;
  double local_390;
  undefined8 local_388;
  double local_380;
  double local_378;
  undefined8 local_370;
  double local_368;
  double local_360;
  undefined8 local_358;
  double local_350;
  double local_348;
  undefined8 local_340;
  double local_338;
  double local_330;
  undefined8 local_328;
  double local_320;
  double local_318;
  undefined8 local_310;
  double local_308;
  double local_300;
  undefined8 local_2f8;
  double local_2f0;
  double local_2e8;
  undefined8 local_2e0;
  double local_2d8;
  double local_2d0;
  undefined8 local_2c8;
  double local_2c0;
  double local_2b8;
  undefined8 local_2b0;
  double local_2a8;
  double local_2a0;
  undefined8 local_298;
  double local_290;
  double local_288;
  undefined8 local_280;
  double local_278;
  double local_270;
  undefined8 local_268;
  double local_260;
  double local_258;
  undefined8 local_250;
  double local_248;
  double local_240;
  undefined8 local_238;
  double local_230;
  double local_228;
  undefined8 local_220;
  undefined8 *local_218;
  undefined8 *local_210;
  double *local_208;
  double dStack_200;
  undefined8 local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined2 local_1d8;
  undefined1 local_1d6;
  undefined4 local_1d4;
  longlong local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  longlong local_1b8 [2];
  longlong local_1a8;
  undefined8 uStack_1a0;
  void *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_164;
  undefined4 local_15c;
  undefined8 local_158;
  undefined2 local_150;
  undefined1 local_14e;
  undefined8 local_148;
  undefined8 uStack_140;
  int *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  ulonglong local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  lVar15 = FUN_140b94ea6();
  iVar28 = *(int *)(lVar15 + 0x628);
  iVar19 = 1;
  if (1 < iVar28) {
    iVar19 = iVar28;
  }
  iVar19 = iVar19 + -1;
  if (*(char *)(lVar15 + 0x695) != '\0') {
    iVar19 = iVar28;
  }
  if (iVar19 < 3) {
    uVar23 = 0;
    goto LAB_143b2b307;
  }
  local_198 = (void *)0x0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  FUN_141266fc2(lVar15,0,0x42c80000,&local_1a8);
  uVar14 = 0;
  uVar46 = 0;
  uVar49 = 0;
  uVar50 = 0;
  uVar47 = 0;
  uVar48 = 0;
  uVar41 = 0;
  uVar42 = 0;
  if (1 < (int)uStack_1a0) {
    lVar15 = (ulonglong)((int)uStack_1a0 - 2) * 0x18 + 8;
    uVar41 = 0;
    uVar42 = 0;
    auVar45 = ZEXT816(0);
    lVar26 = (ulonglong)((int)uStack_1a0 - 2) + 1;
    uVar32 = 0;
    uVar34 = 0;
    uVar30 = 0;
    uVar31 = 0;
    do {
      uVar22 = uStack_190;
      uVar23 = *(undefined8 *)(local_1a8 + -8 + lVar15);
      uVar2 = *(undefined8 *)(local_1a8 + lVar15);
      lVar29 = (longlong)(int)(uint)uStack_190;
      uVar12 = (uint)uStack_190 + 1;
      uStack_190 = CONCAT44(uStack_190._4_4_,uVar12);
      if (uStack_190._4_4_ < uVar12) {
        FUN_14489624a(&local_198,uVar22 & 0xffffffff);
      }
      *(undefined8 *)((longlong)local_198 + lVar29 * 0x10) = uVar23;
      *(undefined8 *)((longlong)local_198 + lVar29 * 0x10 + 8) = uVar2;
      dVar39 = *(double *)(local_1a8 + -8 + lVar15);
      uVar47 = SUB84(dVar39,0);
      uVar48 = (undefined4)((ulonglong)dVar39 >> 0x20);
      dVar40 = *(double *)(local_1a8 + lVar15);
      uVar33 = (undefined4)((ulonglong)dVar40 >> 0x20);
      uVar14 = uVar47;
      uVar46 = uVar48;
      if ((double)CONCAT44(uVar31,uVar30) <= dVar39) {
        uVar14 = uVar30;
        uVar46 = uVar31;
      }
      if (dVar39 <= auVar45._0_8_) {
        uVar47 = auVar45._0_4_;
        uVar48 = auVar45._4_4_;
      }
      uVar49 = SUB84(dVar40,0);
      uVar50 = uVar33;
      if ((double)CONCAT44(uVar34,uVar32) <= dVar40) {
        uVar49 = uVar32;
        uVar50 = uVar34;
      }
      uVar32 = SUB84(dVar40,0);
      if (dVar40 <= (double)CONCAT44(uVar42,uVar41)) {
        uVar32 = uVar41;
        uVar33 = uVar42;
      }
      uVar42 = uVar33;
      uVar41 = uVar32;
      lVar15 = lVar15 + -0x18;
      auVar45._4_4_ = uVar48;
      auVar45._0_4_ = uVar47;
      auVar45._8_8_ = 0;
      lVar29 = lVar26 + -1;
      bVar3 = 0 < lVar26;
      lVar26 = lVar29;
      uVar32 = uVar49;
      uVar34 = uVar50;
      uVar30 = uVar14;
      uVar31 = uVar46;
    } while (lVar29 != 0 && bVar3);
  }
  dVar8 = (double)CONCAT44(uVar48,uVar47) + 1.0;
  dVar10 = (double)CONCAT44(uVar42,uVar41) + 1.0;
  dVar7 = (double)CONCAT44(uVar46,uVar14) + -1.0;
  dVar9 = (double)CONCAT44(uVar50,uVar49) + -1.0;
  (**(code **)(*param_1 + 0x528))(param_1,&local_208);
  dVar44 = local_1e8;
  dVar43 = dStack_1f0;
  dVar40 = dStack_200;
  pdVar17 = local_208;
  dVar38 = (dVar10 - dVar9) * 0.5;
  dVar39 = (dVar8 - dVar7) * 0.5;
  dStack_200 = (dVar9 + dVar10) * 0.5;
  local_208 = (double *)((dVar7 + dVar8) * 0.5);
  FUN_1483f1e7e(local_1b8,&local_208,SUB84(dVar39 + dVar39,0),dVar38 + dVar38);
  local_1e8 = 0.0;
  uStack_1e0 = 0;
  local_1f8 = 0;
  dStack_1f0 = 0.0;
  local_208 = (double *)0x0;
  dStack_200 = 0.0;
  local_1d8 = 1;
  local_1d6 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = 0xffffffff;
  local_1d4 = 2;
  FUN_148278c44(&local_208,local_1b8);
  if (0 < (int)(uint)uStack_190) {
    uVar18 = (ulonglong)((uint)uStack_190 - 1);
    pdVar20 = (double *)((longlong)local_198 + 8);
    dVar39 = 0.0;
    uVar22 = 0;
    do {
      lVar15 = (longlong)(int)uVar18 * 0x10;
      dVar39 = dVar39 + (*(double *)((longlong)local_198 + lVar15) * *pdVar20 -
                        pdVar20[-1] * *(double *)((longlong)local_198 + lVar15 + 8));
      uVar18 = uVar22 & 0xffffffff;
      uVar22 = uVar22 + 1;
      pdVar20 = pdVar20 + 2;
    } while ((uStack_190 & 0xffffffff) != uVar22);
    if (((uint)uStack_190 != 1) && (0.0 <= dVar39 * 0.5)) {
      lVar15 = (uStack_190 & 0xffffffff) << 4;
      lVar26 = 0;
      do {
        lVar15 = lVar15 + -0x10;
        dVar39 = *(double *)((longlong)local_198 + lVar26);
        dVar38 = ((double *)((longlong)local_198 + lVar26))[1];
        uVar23 = ((undefined8 *)((longlong)local_198 + lVar15))[1];
        *(undefined8 *)((longlong)local_198 + lVar26) =
             *(undefined8 *)((longlong)local_198 + lVar15);
        ((undefined8 *)((longlong)local_198 + lVar26))[1] = uVar23;
        local_148._0_4_ = SUB84(dVar39,0);
        local_148._4_4_ = (int)((ulonglong)dVar39 >> 0x20);
        uStack_140._0_4_ = SUB84(dVar38,0);
        uStack_140._4_4_ = (int)((ulonglong)dVar38 >> 0x20);
        piVar16 = (int *)((longlong)local_198 + lVar15);
        *piVar16 = (int)local_148;
        piVar16[1] = local_148._4_4_;
        piVar16[2] = (int)uStack_140;
        piVar16[3] = uStack_140._4_4_;
        lVar26 = lVar26 + 0x10;
        local_148 = dVar39;
        uStack_140 = dVar38;
      } while ((ulonglong)((uint)uStack_190 >> 1) << 4 != lVar26);
    }
  }
  uVar23 = 0;
  FUN_148278c44(&local_208,&local_198,0);
  FUN_148266a60(&local_208);
  if ((longlong)(int)uStack_1c8 != 0) {
    lVar15 = *(longlong *)(param_2 + 0x208);
    if (*(int *)(lVar15 + 0x38) < 1) {
      uVar23 = 0;
    }
    else {
      uVar23 = **(undefined8 **)(lVar15 + 0x30);
    }
    local_478 = dVar40 + dVar44;
    dVar39 = (double)pdVar17 + dVar43;
    dVar40 = dVar40 - dVar44;
    dVar43 = (double)pdVar17 - dVar43;
    local_440 = *(undefined8 *)(lVar15 + 0x40);
    local_470 = param_2;
    local_450 = param_1;
    local_438 = param_3;
    if ((longlong)dStack_200._0_4_ == 0) {
      lVar15 = local_1d0 + (longlong)(int)uStack_1c8 * 0xc;
      iVar21 = -1;
      local_480 = (double)CONCAT44(local_480._4_4_,0xffffffff);
      local_488 = (double)CONCAT44(local_488._4_4_,0xffffffff);
      iVar19 = -1;
      lVar26 = local_1d0;
      uVar2 = local_440;
      dVar44 = local_478;
LAB_143b2baa8:
      do {
        uVar14 = FUN_146c01152(param_2,lVar26,0);
        FUN_146c2a048(uVar2,uVar14,lVar26,1);
        FUN_146c01580(uVar23,uVar14,lVar26,1);
        lVar26 = lVar26 + 0xc;
      } while (lVar26 != lVar15);
      iVar28 = (int)local_480;
    }
    else {
      uVar41 = SUB84(DAT_14c8464e0,0);
      uVar42 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
      local_430 = local_208 + (longlong)dStack_200._0_4_ * 2;
      iVar21 = -1;
      iVar28 = -1;
      uVar47 = SUB84(DAT_14c8464e8,0);
      uVar48 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
      iVar25 = -1;
      uStack_420 = 0;
      uStack_41c = 0;
      iVar19 = -1;
      local_488 = DAT_14c8464e8;
      local_480 = DAT_14c8464e0;
      pdVar17 = local_208;
      uVar14 = uVar41;
      uVar46 = uVar42;
      uVar49 = uVar41;
      uVar50 = uVar42;
      dVar44 = DAT_14c8464e8;
      local_468 = dVar39;
      local_460 = dVar43;
      local_458 = dVar40;
      local_448 = uVar23;
      local_428 = uVar47;
      uStack_424 = uVar48;
      do {
        local_148 = *pdVar17;
        uStack_140 = pdVar17[1];
        local_138 = (int *)0x0;
        local_128 = DAT_14c846338;
        uStack_130 = DAT_14c846330;
        uStack_11c = DAT_14c846338;
        uStack_124 = (undefined4)DAT_14c846330;
        uStack_120 = (undefined4)((ulonglong)DAT_14c846330 >> 0x20);
        local_118 = DAT_14c84635c;
        local_110 = local_110 & 0xffffffffff000000;
        iVar13 = FUN_146c02208(local_470,&local_148);
        local_188 = 0;
        uStack_180 = 0;
        uStack_17c = 0x3f800000;
        FUN_146c32f5e(local_440,&local_188);
        local_188 = 0;
        uStack_180 = 0x3f800000;
        FUN_146c2f9e2(local_448,&local_188);
        uVar30 = SUB84(local_148,0);
        uVar31 = (undefined4)((ulonglong)local_148 >> 0x20);
        bVar3 = (double)CONCAT44(uVar50,uVar49) <= local_148;
        uVar32 = uVar30;
        uVar34 = uVar31;
        dVar39 = uStack_140;
        if ((bVar3 && dVar44 <= uStack_140) && iVar21 != -1) {
          uVar32 = uVar49;
          uVar34 = uVar50;
          dVar39 = dVar44;
        }
        if ((!bVar3 || dVar44 > uStack_140) || iVar21 == -1) {
          iVar21 = iVar13;
        }
        bVar3 = local_148 != (double)CONCAT44(uVar46,uVar14);
        bVar5 = (double)CONCAT44(uVar46,uVar14) <= local_148;
        bVar4 = (double)CONCAT44(uVar48,uVar47) != uStack_140;
        bVar6 = uStack_140 <= (double)CONCAT44(uVar48,uVar47);
        dVar40 = local_148;
        dVar43 = uStack_140;
        if ((!bVar6 || !bVar4) && ((!bVar5 || !bVar3) && iVar28 != -1)) {
          dVar40 = (double)CONCAT44(uVar46,uVar14);
          dVar43 = (double)CONCAT44(uVar48,uVar47);
        }
        if (bVar6 && bVar4 || (bVar5 && bVar3 || iVar28 == -1)) {
          iVar28 = iVar13;
        }
        bVar3 = uStack_140 <= (double)CONCAT44(uStack_424,local_428);
        bVar4 = local_148 <= (double)CONCAT44(uVar42,uVar41);
        uVar33 = SUB84(uStack_140,0);
        uVar35 = (int)((ulonglong)uStack_140 >> 0x20);
        uVar36 = 0;
        uVar37 = 0;
        uVar14 = uVar30;
        uVar46 = uVar31;
        if ((bVar4 && bVar3) && iVar25 != -1) {
          uVar33 = local_428;
          uVar35 = uStack_424;
          uVar36 = uStack_420;
          uVar37 = uStack_41c;
          uVar14 = uVar41;
          uVar46 = uVar42;
        }
        uVar42 = uVar46;
        uVar41 = uVar14;
        if ((!bVar4 || !bVar3) || iVar25 == -1) {
          iVar25 = iVar13;
        }
        dVar38 = uStack_140;
        if (uStack_140 <= local_488 && (local_148 >= local_480 && iVar19 != -1)) {
          uVar30 = SUB84(local_480,0);
          uVar31 = (undefined4)((ulonglong)local_480 >> 0x20);
          dVar38 = local_488;
        }
        if (uStack_140 > local_488 || (local_148 < local_480 || iVar19 == -1)) {
          iVar19 = iVar13;
        }
        pdVar17 = pdVar17 + 2;
        uVar47 = SUB84(dVar43,0);
        uVar48 = (undefined4)((ulonglong)dVar43 >> 0x20);
        uVar14 = SUB84(dVar40,0);
        uVar46 = (undefined4)((ulonglong)dVar40 >> 0x20);
        local_480 = (double)CONCAT44(uVar31,uVar30);
        uVar49 = uVar32;
        uVar50 = uVar34;
        dVar44 = dVar39;
        local_488 = dVar38;
        local_428 = uVar33;
        uStack_424 = uVar35;
        uStack_420 = uVar36;
        uStack_41c = uVar37;
      } while (pdVar17 != local_430);
      local_488._4_4_ = (undefined4)((ulonglong)dVar38 >> 0x20);
      dVar43 = local_460;
      dVar40 = local_458;
      dVar39 = local_468;
      dVar44 = local_478;
      if ((longlong)(int)uStack_1c8 != 0) {
        local_488 = (double)CONCAT44(local_488._4_4_,iVar25);
        local_480 = (double)CONCAT44(uVar31,iVar28);
        lVar15 = local_1d0 + (longlong)(int)uStack_1c8 * 0xc;
        lVar26 = local_1d0;
        uVar2 = local_440;
        param_2 = local_470;
        uVar23 = local_448;
        goto LAB_143b2baa8;
      }
      local_488 = (double)CONCAT44(local_488._4_4_,iVar25);
    }
    local_218 = &local_188;
    local_188 = 0xffffffffffffffff;
    uStack_180 = 0xffffffff;
    uStack_17c = 0xffffffff;
    local_210 = &local_178;
    FUN_1483f1f46(&local_148);
    lVar15 = local_470;
    piVar16 = local_138;
    if (local_138 == (int *)0x0) {
      piVar16 = (int *)&local_148;
    }
    piVar16[2] = iVar21;
    local_220 = 0;
    local_238 = 0;
    local_248 = dVar43;
    local_240 = dVar40;
    local_230 = dVar7;
    local_228 = dVar9;
    FUN_143b2c4b8(local_470,&local_248,&local_230,&local_148);
    piVar16 = local_138;
    if (local_138 == (int *)0x0) {
      piVar16 = (int *)&local_148;
    }
    iVar21 = piVar16[1];
    iVar25 = piVar16[2];
    *piVar16 = piVar16[3];
    piVar16 = local_138;
    if (local_138 == (int *)0x0) {
      piVar16 = (int *)&local_148;
    }
    piVar16[1] = piVar16[2];
    piVar16 = local_138;
    if (local_138 == (int *)0x0) {
      piVar16 = (int *)&local_148;
    }
    piVar16[2] = iVar19;
    piVar16 = local_138;
    if (local_138 == (int *)0x0) {
      piVar16 = (int *)&local_148;
    }
    piVar16[3] = -1;
    local_250 = 0;
    local_268 = 0;
    local_278 = dVar43;
    local_270 = dVar9;
    local_260 = dVar7;
    local_258 = dVar10;
    FUN_143b2c4b8(lVar15,&local_278,&local_260,&local_148);
    piVar16 = local_138;
    if (local_138 == (int *)0x0) {
      piVar16 = (int *)&local_148;
    }
    *piVar16 = piVar16[3];
    piVar16 = local_138;
    if (local_138 == (int *)0x0) {
      piVar16 = (int *)&local_148;
    }
    piVar16[1] = piVar16[2];
    piVar16 = local_138;
    if (local_138 == (int *)0x0) {
      piVar16 = (int *)&local_148;
    }
    piVar16[2] = -1;
    piVar16 = local_138;
    if (local_138 == (int *)0x0) {
      piVar16 = (int *)&local_148;
    }
    piVar16[3] = -1;
    local_280 = 0;
    local_298 = 0;
    local_2a8 = dVar43;
    local_2a0 = dVar10;
    local_290 = dVar7;
    local_288 = dVar44;
    FUN_143b2c4b8(lVar15,&local_2a8,&local_290,&local_148);
    piVar16 = local_138;
    if (local_138 == (int *)0x0) {
      piVar16 = (int *)&local_148;
    }
    *piVar16 = piVar16[1];
    piVar16 = local_138;
    if (local_138 == (int *)0x0) {
      piVar16 = (int *)&local_148;
    }
    piVar16[3] = piVar16[2];
    piVar16 = local_138;
    if (local_138 == (int *)0x0) {
      piVar16 = (int *)&local_148;
    }
    piVar16[1] = (int)local_488;
    piVar16 = local_138;
    if (local_138 == (int *)0x0) {
      piVar16 = (int *)&local_148;
    }
    piVar16[2] = -1;
    local_2b0 = 0;
    local_2c8 = 0;
    local_2d8 = dVar7;
    local_2d0 = dVar10;
    local_2c0 = dVar8;
    local_2b8 = dVar44;
    FUN_143b2c4b8(lVar15,&local_2d8,&local_2c0,&local_148);
    piVar16 = local_138;
    if (local_138 == (int *)0x0) {
      piVar16 = (int *)&local_148;
    }
    *piVar16 = piVar16[1];
    piVar16 = local_138;
    if (local_138 == (int *)0x0) {
      piVar16 = (int *)&local_148;
    }
    piVar16[3] = piVar16[2];
    piVar16 = local_138;
    if (local_138 == (int *)0x0) {
      piVar16 = (int *)&local_148;
    }
    piVar16[1] = -1;
    piVar16 = local_138;
    if (local_138 == (int *)0x0) {
      piVar16 = (int *)&local_148;
    }
    piVar16[2] = -1;
    local_2e0 = 0;
    local_2f8 = 0;
    local_308 = dVar8;
    local_300 = dVar10;
    local_2f0 = dVar39;
    local_2e8 = dVar44;
    FUN_143b2c4b8(lVar15,&local_308,&local_2f0,&local_148);
    piVar16 = local_138;
    if (local_138 == (int *)0x0) {
      piVar16 = (int *)&local_148;
    }
    piVar16[3] = *piVar16;
    piVar16 = local_138;
    if (local_138 == (int *)0x0) {
      piVar16 = (int *)&local_148;
    }
    piVar16[2] = piVar16[1];
    piVar16 = local_138;
    if (local_138 == (int *)0x0) {
      piVar16 = (int *)&local_148;
    }
    piVar16[1] = -1;
    piVar16 = local_138;
    if (local_138 == (int *)0x0) {
      piVar16 = (int *)&local_148;
    }
    *piVar16 = iVar28;
    local_310 = 0;
    local_328 = 0;
    local_338 = dVar8;
    local_330 = dVar9;
    local_320 = dVar39;
    local_318 = dVar10;
    FUN_143b2c4b8(lVar15,&local_338,&local_320,&local_148);
    piVar16 = local_138;
    if (local_138 == (int *)0x0) {
      piVar16 = (int *)&local_148;
    }
    piVar16[3] = *piVar16;
    piVar16 = local_138;
    if (local_138 == (int *)0x0) {
      piVar16 = (int *)&local_148;
    }
    piVar16[2] = piVar16[1];
    piVar16 = local_138;
    if (local_138 == (int *)0x0) {
      piVar16 = (int *)&local_148;
    }
    piVar16[1] = -1;
    piVar16 = local_138;
    if (local_138 == (int *)0x0) {
      piVar16 = (int *)&local_148;
    }
    *piVar16 = -1;
    local_340 = 0;
    local_358 = 0;
    local_368 = dVar8;
    local_360 = dVar40;
    local_350 = dVar39;
    local_348 = dVar9;
    FUN_143b2c4b8(lVar15,&local_368,&local_350,&local_148);
    piVar16 = local_138;
    if (local_138 == (int *)0x0) {
      piVar16 = (int *)&local_148;
    }
    piVar16[1] = *piVar16;
    piVar16 = local_138;
    if (local_138 == (int *)0x0) {
      piVar16 = (int *)&local_148;
    }
    piVar16[2] = piVar16[3];
    piVar16 = local_138;
    if (local_138 == (int *)0x0) {
      piVar16 = (int *)&local_148;
    }
    *piVar16 = iVar21;
    piVar16 = local_138;
    if (local_138 == (int *)0x0) {
      piVar16 = (int *)&local_148;
    }
    piVar16[3] = iVar25;
    local_370 = 0;
    local_388 = 0;
    local_398 = dVar7;
    local_390 = dVar40;
    local_380 = dVar8;
    local_378 = dVar9;
    FUN_143b2c4b8(lVar15,&local_398,&local_380,&local_148);
    plVar24 = local_450;
    if (local_138 != (int *)0x0) {
      FUN_1400020a8();
    }
    lVar15 = local_438;
    uVar23 = CONCAT71((uint7)(uint3)((uint)iVar25 >> 8),1);
    if ((local_438 != 0) && (0.0 < *(float *)(plVar24 + 0x1fe))) {
      local_3a8 = (double *)0x0;
      uStack_3a0 = 1;
      uStack_39c = 0;
      FUN_14489624a(&local_3a8,0);
      uVar12 = uStack_3a0;
      *local_3a8 = dVar43;
      local_3a8[1] = dVar40;
      lVar26 = (longlong)(int)uStack_3a0;
      uStack_3a0 = uStack_3a0 + 1;
      if (uStack_39c < uStack_3a0) {
        FUN_14489624a(&local_3a8,uVar12);
      }
      uVar12 = uStack_3a0;
      local_3a8[lVar26 * 2] = dVar43;
      local_3a8[lVar26 * 2 + 1] = dVar44;
      lVar26 = (longlong)(int)uStack_3a0;
      uStack_3a0 = uStack_3a0 + 1;
      if (uStack_39c < uStack_3a0) {
        FUN_14489624a(&local_3a8,uVar12);
      }
      uVar12 = uStack_3a0;
      local_3a8[lVar26 * 2] = dVar39;
      local_3a8[lVar26 * 2 + 1] = dVar44;
      lVar26 = (longlong)(int)uStack_3a0;
      uStack_3a0 = uStack_3a0 + 1;
      if (uStack_39c < uStack_3a0) {
        FUN_14489624a(&local_3a8,uVar12);
      }
      local_3a8[lVar26 * 2] = dVar39;
      local_3a8[lVar26 * 2 + 1] = dVar40;
      FUN_148267e0c();
      _Src = local_198;
      iVar28 = (uint)uStack_190;
      uVar22 = uStack_190 & 0xffffffff;
      if (uVar22 == 0) {
        local_3d8 = 0;
LAB_143b2c009:
        local_3e0 = (void *)0x0;
        local_3d4 = 0;
      }
      else {
        if ((int)(uint)uStack_190 < 1) {
          local_3d8 = (uint)uStack_190;
        }
        else {
          iVar19 = (uint)uStack_190 + -1;
          pdVar17 = (double *)((longlong)local_198 + 8);
          dVar39 = 0.0;
          uVar18 = 0;
          do {
            dVar39 = dVar39 + (*(double *)((longlong)local_198 + (longlong)iVar19 * 0x10) * *pdVar17
                              - pdVar17[-1] *
                                *(double *)((longlong)local_198 + (longlong)iVar19 * 0x10 + 8));
            iVar19 = (int)uVar18;
            uVar18 = uVar18 + 1;
            pdVar17 = pdVar17 + 2;
          } while (uVar22 != uVar18);
          if (((uint)uStack_190 != 1) && (dVar39 * 0.5 < 0.0)) {
            lVar26 = uVar22 << 4;
            uVar18 = 0;
            do {
              lVar26 = lVar26 + -0x10;
              dVar39 = *(double *)((longlong)local_198 + uVar18);
              dVar40 = ((double *)((longlong)local_198 + uVar18))[1];
              uVar23 = ((undefined8 *)((longlong)local_198 + lVar26))[1];
              *(undefined8 *)((longlong)local_198 + uVar18) =
                   *(undefined8 *)((longlong)local_198 + lVar26);
              ((undefined8 *)((longlong)local_198 + uVar18))[1] = uVar23;
              local_148._0_4_ = SUB84(dVar39,0);
              local_148._4_4_ = (int)((ulonglong)dVar39 >> 0x20);
              uStack_140._0_4_ = SUB84(dVar40,0);
              uStack_140._4_4_ = (int)((ulonglong)dVar40 >> 0x20);
              piVar16 = (int *)((longlong)local_198 + lVar26);
              *piVar16 = (int)local_148;
              piVar16[1] = local_148._4_4_;
              piVar16[2] = (int)uStack_140;
              piVar16[3] = uStack_140._4_4_;
              uVar18 = uVar18 + 0x10;
              local_148 = dVar39;
              uStack_140 = dVar40;
            } while ((uVar22 * 8 & 0xfffffffffffffff0) != uVar18);
          }
          local_3d8 = (uint)uStack_190;
          if ((uint)uStack_190 == 0) goto LAB_143b2c009;
        }
        local_3e0 = (void *)0x0;
        FUN_144721d4c(&local_3e0,uStack_190 & 0xffffffff,0);
        plVar24 = local_450;
        memcpy(local_3e0,_Src,(longlong)iVar28 << 4);
      }
      FUN_148279580(local_3d0,&local_3e0,1,1);
      local_3f8 = 0;
      uStack_3f0 = 0;
      FUN_148268772(&local_148,local_3d0);
      local_400 = 1;
      local_498 = 0x3ff0000000000000;
      local_4a0 = 0xbff0000000000000;
      local_4a8 = 0;
      local_4b0 = 0;
      local_4b8 = 0x4000000000000000;
      local_408 = (int *)&local_148;
      FUN_148268fe5(SUB84((double)(*(float *)(plVar24 + 0x1fe) * 0.5),0),&local_408,&local_3f8,0);
      FUN_148267ee4(&local_148);
      local_128 = 0;
      uStack_124 = 0;
      uStack_120 = 0;
      uStack_11c = 0;
      local_138 = (int *)0x0;
      uStack_130 = 0;
      local_148 = 0.0;
      uStack_140 = 0.0;
      local_118 = CONCAT53(local_118._3_5_,1);
      local_110 = 0;
      uStack_108 = 0;
      local_100 = 0xffffffff;
      local_118 = CONCAT44(2,(undefined4)local_118);
      if ((longlong)(int)uStack_3f0 != 0) {
        lVar26 = (longlong)(int)uStack_3f0 * 0x28;
        lVar29 = local_3f8;
        do {
          dVar39 = (double)FUN_1483e7274(lVar29);
          if (0.0 < dVar39) {
            FUN_148266a14(&local_148,lVar29);
          }
          lVar29 = lVar29 + 0x28;
          lVar26 = lVar26 + -0x28;
        } while (lVar26 != 0);
      }
      bVar11 = FUN_148266a60(&local_148);
      if ((bVar11 & (int)uStack_108 != 0) == 0) {
        FUN_148267160(&local_148);
        FUN_148273bb4(local_3f8,uStack_3f0 & 0xffffffff);
        if (local_3f8 != 0) {
          FUN_1400020a8();
        }
        FUN_148267ee4(local_3d0);
        if (local_3a8 != (double *)0x0) {
          FUN_1400020a8();
        }
        uVar23 = 0;
      }
      else {
        lVar26 = *(longlong *)(lVar15 + 0x208);
        if (*(int *)(lVar26 + 0x38) < 1) {
          uVar23 = 0;
        }
        else {
          uVar23 = **(undefined8 **)(lVar26 + 0x30);
        }
        uVar2 = *(undefined8 *)(lVar26 + 0x40);
        lVar26 = (longlong)(int)uStack_140;
        if (lVar26 == 0) {
          lVar26 = (longlong)(int)uStack_108;
LAB_143b2c415:
          uVar18 = local_110 + lVar26 * 0xc;
          uVar27 = local_110;
          do {
            uVar12 = FUN_146c01152(lVar15,uVar27,0);
            uVar22 = (ulonglong)uVar12;
            FUN_146c2a048(uVar2,uVar12,uVar27,1);
            FUN_146c01580(uVar23,uVar22,uVar27,1);
            uVar27 = uVar27 + 0xc;
          } while (uVar27 != uVar18);
        }
        else {
          local_488 = local_148;
          uVar22 = 0;
          lVar29 = 0;
          do {
            puVar1 = (undefined8 *)((longlong)local_488 + lVar29);
            local_188 = *puVar1;
            uStack_180 = *(undefined4 *)(puVar1 + 1);
            uStack_17c = *(undefined4 *)((longlong)puVar1 + 0xc);
            local_178 = 0;
            local_168 = DAT_14c846338;
            local_170 = DAT_14c846330;
            local_15c = DAT_14c846338;
            local_164 = DAT_14c846330;
            local_158 = DAT_14c84635c;
            local_150 = 0;
            local_14e = 0;
            FUN_146c02208(lVar15,&local_188);
            local_418 = 0;
            uStack_410 = 0x3f80000000000000;
            FUN_146c32f5e(uVar2,&local_418);
            local_418 = 0;
            uStack_410 = CONCAT44(uStack_410._4_4_,0x3f800000);
            FUN_146c2f9e2(uVar23,&local_418);
            lVar29 = lVar29 + 0x10;
          } while (lVar26 * 0x10 != lVar29);
          lVar26 = (longlong)(int)uStack_108;
          if (lVar26 != 0) goto LAB_143b2c415;
        }
        FUN_148267160(&local_148);
        FUN_148273bb4(local_3f8,uStack_3f0 & 0xffffffff);
        if (local_3f8 != 0) {
          FUN_1400020a8();
        }
        FUN_148267ee4(local_3d0);
        if (local_3a8 != (double *)0x0) {
          FUN_1400020a8();
        }
        uVar23 = CONCAT71((int7)(uVar22 >> 8),1);
      }
    }
  }
  FUN_148267160(&local_208);
  if (local_1b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_1a8 != 0) {
    FUN_1400020a8();
  }
  if (local_198 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_143b2b307:
  if ((local_f0 ^ (ulonglong)auStack_4d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23;
}



// FUNCTION 143b2c4b8 FUN_143b2c4b8 body=961 status=ok
// SIG undefined FUN_143b2c4b8(void)

void FUN_143b2c4b8(longlong param_1,double *param_2,double *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  undefined8 local_b8;
  int *local_b0;
  undefined8 *local_a8;
  double *local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 local_4e;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  piVar7 = *(int **)(param_4 + 4);
  if (*(int **)(param_4 + 4) == (int *)0x0) {
    piVar7 = param_4;
  }
  iVar2 = *piVar7;
  lVar1 = *(longlong *)(param_1 + 0x208);
  if (*(int *)(lVar1 + 0x38) < 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = **(undefined8 **)(lVar1 + 0x30);
  }
  iVar3 = piVar7[1];
  iVar4 = piVar7[2];
  iVar5 = piVar7[3];
  local_b8 = *(undefined8 *)(lVar1 + 0x40);
  local_c0 = param_1;
  local_b0 = param_4;
  if (iVar2 == -1) {
    local_68 = DAT_14c846338;
    local_70 = DAT_14c846330;
    local_64 = DAT_14c846330;
    local_5c = DAT_14c846338;
    local_58 = DAT_14c84635c;
    local_50 = 0;
    local_4e = 0;
    local_88 = *param_2;
    uStack_80 = param_2[1];
    local_78 = param_2[2];
    iVar2 = FUN_146c02208(param_1);
    local_98 = 0;
    uStack_90 = 0;
    uStack_8c = 0x3f800000;
    FUN_146c32f5e(local_b8,&local_98);
    local_98 = 0;
    uStack_90 = 0x3f800000;
    FUN_146c2f9e2(uVar8,&local_98);
  }
  if (iVar3 == -1) {
    local_68 = DAT_14c846338;
    local_70 = DAT_14c846330;
    local_64 = DAT_14c846330;
    local_5c = DAT_14c846338;
    local_58 = DAT_14c84635c;
    local_50 = 0;
    local_4e = 0;
    uStack_80 = param_2[1];
    local_88 = *param_3;
    local_78 = 0.0;
    iVar3 = FUN_146c02208(local_c0);
    local_98 = 0;
    uStack_90 = 0;
    uStack_8c = 0x3f800000;
    FUN_146c32f5e(local_b8,&local_98);
    local_98 = 0;
    uStack_90 = 0x3f800000;
    FUN_146c2f9e2(uVar8,&local_98);
  }
  if (iVar4 == -1) {
    local_68 = DAT_14c846338;
    local_70 = DAT_14c846330;
    local_64 = DAT_14c846330;
    local_5c = DAT_14c846338;
    local_58 = DAT_14c84635c;
    local_50 = 0;
    local_4e = 0;
    local_88 = *param_3;
    uStack_80 = param_3[1];
    local_78 = param_3[2];
    iVar4 = FUN_146c02208(local_c0);
    local_98 = 0;
    uStack_90 = 0;
    uStack_8c = 0x3f800000;
    FUN_146c32f5e(local_b8,&local_98);
    local_98 = 0;
    uStack_90 = 0x3f800000;
    FUN_146c2f9e2(uVar8,&local_98);
  }
  if (iVar5 == -1) {
    local_68 = DAT_14c846338;
    local_70 = DAT_14c846330;
    local_64 = DAT_14c846330;
    local_5c = DAT_14c846338;
    local_58 = DAT_14c84635c;
    local_50 = 0;
    local_4e = 0;
    uStack_80 = param_3[1];
    local_88 = *param_2;
    local_78 = 0.0;
    iVar5 = FUN_146c02208(local_c0);
    local_98 = 0;
    uStack_90 = 0;
    uStack_8c = 0x3f800000;
    FUN_146c32f5e(local_b8,&local_98);
    local_98 = 0;
    uStack_90 = 0x3f800000;
    FUN_146c2f9e2(uVar8,&local_98);
  }
  lVar1 = local_c0;
  if (*param_2 <= *param_3 && *param_3 != *param_2) {
    if (param_2[1] <= param_3[1] && param_3[1] != param_2[1]) {
      local_88 = (double)CONCAT44(iVar5,iVar2);
      uStack_80._0_4_ = iVar3;
      uVar6 = FUN_146c01152(local_c0,&local_88,0);
      uVar8 = local_b8;
      local_88 = (double)CONCAT44(iVar5,iVar2);
      uStack_80._0_4_ = iVar3;
      FUN_146c2a048(local_b8,uVar6,&local_88,1);
      local_88 = (double)CONCAT44(iVar5,iVar3);
      uStack_80._0_4_ = iVar4;
      uVar6 = FUN_146c01152(lVar1,&local_88,0);
      local_88 = (double)CONCAT44(iVar5,iVar3);
      uStack_80 = (double)CONCAT44(uStack_80._4_4_,iVar4);
      FUN_146c2a048(uVar8,uVar6,&local_88,1);
    }
  }
  local_a8 = &local_88;
  local_88 = (double)CONCAT44(iVar3,iVar2);
  uStack_80 = (double)CONCAT44(iVar5,iVar4);
  local_a0 = &local_78;
  FUN_1483fdb0e(local_b0);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b2c87a FUN_143b2c87a body=1261 status=ok
// SIG undefined FUN_143b2c87a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_143b2c87a(longlong param_1,undefined1 (*param_2) [16],double *param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar10;
  undefined1 auVar9 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  if (*(char *)(param_1 + 0x1a08) == '\x01') {
    dVar12 = *(double *)(param_1 + 0x19f8) - *(double *)(param_1 + 0x260);
    dVar14 = *(double *)(param_1 + 0x1a00) - *(double *)(param_1 + 0x268);
    dVar2 = 0.0 - *(double *)(param_1 + 0x270);
    auVar1 = *(undefined1 (*) [16])(param_1 + 0x280);
    uVar20 = auVar1._0_4_;
    uVar21 = auVar1._4_4_;
    uVar22 = auVar1._8_4_;
    uVar23 = auVar1._12_4_;
    dVar16 = -*(double *)(param_1 + 0x240);
    dVar18 = -*(double *)(param_1 + 0x248);
    dVar6 = *(double *)(param_1 + 0x250) * -1.0;
    dVar10 = *(double *)(param_1 + 600) * 1.0;
    dVar24 = dVar12 * dVar6 - dVar16 * dVar2;
    dVar16 = dVar14 * dVar16 - dVar12 * dVar18;
    dVar19 = dVar2 * dVar18 - dVar14 * dVar6;
    dVar19 = dVar19 + dVar19;
    dVar24 = dVar24 + dVar24;
    dVar16 = dVar16 + dVar16;
    auVar9 = divpd(_DAT_149934d80,auVar1);
    dVar2 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar9._0_8_) *
            ((dVar16 * dVar18 - dVar24 * dVar6) + dVar10 * dVar19 + dVar12);
    dVar16 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar9._8_8_) *
             (dVar16 * *(double *)(param_1 + 0x240) + dVar6 * dVar19 + dVar10 * dVar24 + dVar14);
  }
  else {
    uVar20 = *(undefined4 *)(param_1 + 0x280);
    uVar21 = *(undefined4 *)(param_1 + 0x284);
    uVar22 = *(undefined4 *)(param_1 + 0x288);
    uVar23 = *(undefined4 *)(param_1 + 0x28c);
    dVar2 = DAT_14c8464e0;
    dVar16 = DAT_14c8464e8;
  }
  dVar6 = *(double *)(param_1 + 0x19e8);
  dVar10 = *(double *)(param_1 + 0x19f0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb4729c) {
    FUN_144b3d300(&DAT_14cb4729c);
    if (DAT_14cb4729c == -1) {
      DAT_14cb47298 = *DAT_14cb47290;
      _Init_thread_footer(&DAT_14cb4729c);
    }
  }
  dVar12 = (dVar6 / (double)CONCAT44(uVar21,uVar20)) * 0.5;
  dVar10 = (dVar10 / (double)CONCAT44(uVar23,uVar22)) * 0.5;
  dVar6 = dVar12;
  if (dVar12 <= dVar10) {
    dVar6 = dVar10;
  }
  dVar8 = *param_3;
  dVar5 = param_3[1];
  dVar14 = param_3[2];
  dVar17 = param_3[8];
  dVar7 = param_3[9];
  dVar11 = param_3[10];
  dVar3 = dVar5 + dVar5;
  dVar25 = dVar14 + dVar14;
  dVar18 = dVar8 * (dVar8 + dVar8);
  dVar13 = (1.0 - (dVar14 * dVar25 + dVar5 * dVar3)) * dVar17;
  dVar15 = (1.0 - (dVar14 * dVar25 + dVar18)) * dVar7;
  dVar18 = (1.0 - (dVar18 + dVar5 * dVar3)) * dVar11;
  dVar14 = param_3[3];
  dVar26 = dVar25 * dVar14;
  dVar27 = (dVar8 + dVar8) * param_3[3];
  dVar14 = dVar3 * dVar14;
  dVar19 = (dVar3 * dVar8 + dVar26) * dVar17;
  dVar24 = (dVar25 * dVar5 + dVar27) * dVar7;
  dVar4 = (dVar14 + *param_3 * dVar25) * dVar11;
  dVar17 = (*param_3 * dVar25 - dVar14) * dVar17;
  dVar7 = (dVar3 * dVar8 - dVar26) * dVar7;
  dVar11 = (dVar25 * dVar5 - dVar27) * dVar11;
  dVar14 = (double)(float)(~-(uint)(DAT_14cb47298 < 0.0) & (uint)DAT_14cb47298 |
                          *(uint *)(param_1 + 0xf24) & -(uint)(DAT_14cb47298 < 0.0));
  dVar25 = ABS(dVar14 * dVar4) + ABS(dVar10 * dVar7) + ABS(dVar12 * dVar13);
  dVar26 = ABS(dVar14 * dVar11) + ABS(dVar10 * dVar15) + ABS(dVar12 * dVar19);
  dVar27 = ABS(dVar18 * dVar14) + ABS(dVar24 * dVar10) + ABS(dVar17 * dVar12);
  dVar12 = dVar4 * dVar4 + dVar7 * dVar7 + dVar13 * dVar13;
  dVar14 = dVar11 * dVar11 + dVar15 * dVar15 + dVar19 * dVar19;
  dVar10 = dVar18 * dVar18 + dVar24 * dVar24 + dVar17 * dVar17;
  if (dVar12 <= dVar14) {
    dVar12 = dVar14;
  }
  if (dVar12 <= dVar10) {
    dVar12 = dVar10;
  }
  dVar14 = param_3[4];
  dVar19 = dVar11 * 0.0 + dVar16 * dVar15 + dVar2 * dVar19 + param_3[5];
  dVar10 = param_3[6];
  if (dVar12 < 0.0) {
    dVar12 = sqrt(dVar12);
  }
  else {
    dVar12 = SQRT(dVar12);
  }
  dVar8 = SQRT(dVar26 * dVar26 + dVar27 * dVar27 + dVar25 * dVar25);
  dVar3 = dVar6 * dVar12;
  if (dVar8 <= dVar6 * dVar12) {
    dVar3 = dVar8;
  }
  auVar1._8_4_ = SUB84(dVar19,0);
  auVar1._0_8_ = dVar4 * 0.0 + dVar16 * dVar7 + dVar2 * dVar13 + dVar14;
  auVar1._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  *param_2 = auVar1;
  *(double *)param_2[1] = dVar18 * 0.0 + dVar16 * dVar24 + dVar2 * dVar17 + dVar10;
  *(double *)(param_2[1] + 8) = dVar25;
  *(double *)param_2[2] = dVar26;
  *(double *)(param_2[2] + 8) = dVar27;
  *(double *)param_2[3] = dVar3;
  return param_2;
}



// FUNCTION 143b2cd68 FUN_143b2cd68 body=3364 status=ok
// SIG undefined FUN_143b2cd68(void)

ulonglong FUN_143b2cd68(longlong param_1,longlong param_2,double **param_3)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double *pdVar9;
  int iVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  undefined1 auStack_378 [32];
  double **local_358;
  double **local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined4 local_334;
  uint local_330;
  float local_32c;
  double *local_328;
  longlong local_320;
  undefined8 local_318;
  longlong local_310;
  longlong local_308;
  longlong local_300;
  longlong local_2f8;
  double *local_2f0;
  longlong local_2e8;
  undefined8 uStack_2e0;
  double *local_2d8;
  undefined8 uStack_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a4;
  undefined4 local_29c;
  undefined8 local_298;
  undefined2 local_290;
  undefined1 local_28e;
  double local_288;
  double local_280;
  double local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined8 local_264;
  undefined4 local_25c;
  undefined8 local_258;
  undefined2 local_250;
  undefined1 local_24e;
  double local_248;
  double local_240;
  double local_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_224;
  undefined4 local_21c;
  undefined8 local_218;
  undefined2 local_210;
  undefined1 local_20e;
  undefined8 local_208;
  double local_200;
  double local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined2 local_1d0;
  undefined1 local_1ce;
  float local_1c8;
  float local_1c4;
  undefined8 local_1c0;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  float local_18c;
  float fStack_188;
  undefined4 local_184;
  undefined8 local_180;
  undefined2 local_178;
  undefined1 local_176;
  double local_170;
  double dStack_168;
  double local_160;
  undefined8 local_158;
  undefined4 local_150;
  float local_14c;
  float fStack_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined2 local_138;
  undefined1 local_136;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  int local_fc;
  int local_f8;
  int local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_378;
  lVar6 = FUN_140b94ea6();
  lVar7 = FUN_1483e48b2(param_1);
  lVar7 = *(longlong *)(lVar7 + 0x3a0);
  if ((lVar7 == 0 || lVar6 == 0) || (*(int *)(lVar6 + 0x628) < 2)) {
    uVar12 = 0;
    goto LAB_143b2ce2a;
  }
  local_2d8 = (double *)0x0;
  uStack_2d0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_358 = &local_2d8;
  FUN_147a1c2dc(lVar6,0,0x41c80000);
  lVar8 = (longlong)(int)uStack_2d0;
  uVar12 = CONCAT71((int7)((ulonglong)&local_2d8 >> 8),lVar8 != 0);
  if (lVar8 != 0) {
    local_330 = (uint)uVar12;
    local_320 = param_2;
    if ((param_3 == (double **)0x0) || (*(float *)(param_1 + 0xff0) <= 0.0)) {
LAB_143b2cf38:
      local_328 = local_2d8 + lVar8;
      local_2f8 = lVar6 + 0x668;
      local_300 = lVar7 + 0x58;
      local_308 = lVar7 + 0x40;
      local_310 = lVar6 + 0x620;
      pdVar9 = local_2d8;
      local_348 = param_3;
      do {
        fVar22 = (float)*pdVar9;
        local_2f0 = pdVar9;
        FUN_147a21818(lVar6,&local_170,fVar22,0);
        dVar20 = local_160 * local_160 + local_170 * local_170 + dStack_168 * dStack_168;
        if ((dVar20 != 1.0) || (NAN(dVar20))) {
          if (dVar20 < 9.99999993922529e-09) {
            local_108 = DAT_14c8464f0;
            local_118 = DAT_14c8464e0;
            dStack_110 = DAT_14c8464e8;
          }
          else {
            local_118 = 1.0 / SQRT(dVar20);
            local_108 = local_160 * local_118;
            dStack_110 = dStack_168 * local_118;
            local_118 = local_170 * local_118;
          }
        }
        else {
          local_108 = local_160;
          local_118 = local_170;
          dStack_110 = dStack_168;
        }
        FUN_147a23328(lVar6,&local_170,fVar22,0);
        lVar8 = local_2f8;
        dVar20 = local_160 * local_160 + local_170 * local_170 + dStack_168 * dStack_168;
        if (((dVar20 != 1.0) ||
            (dVar18 = local_160, dVar21 = local_170, dVar17 = dStack_168, NAN(dVar20))) &&
           (dVar18 = DAT_14c8464f0, dVar21 = DAT_14c8464e0, dVar17 = DAT_14c8464e8,
           9.99999993922529e-09 <= dVar20)) {
          dVar21 = 1.0 / SQRT(dVar20);
          dVar18 = local_160 * dVar21;
          dVar17 = dStack_168 * dVar21;
          dVar21 = local_170 * dVar21;
        }
        dVar3 = local_118 * dVar17 - dVar21 * dStack_110;
        dVar21 = dVar21 * local_108 - dVar18 * local_118;
        dVar20 = dStack_110 * dVar18 - dVar17 * local_108;
        dVar18 = dVar3 * dVar3 + dVar20 * dVar20 + dVar21 * dVar21;
        if (((dVar18 != 1.0) || (dVar17 = dVar3, dVar4 = dVar21, dVar5 = dVar20, NAN(dVar18))) &&
           (dVar17 = DAT_14c8464f0, dVar4 = DAT_14c8464e8, dVar5 = DAT_14c8464e0,
           9.99999993922529e-09 <= dVar18)) {
          dVar18 = 1.0 / SQRT(dVar18);
          dVar17 = dVar3 * dVar18;
          dVar4 = dVar21 * dVar18;
          dVar5 = dVar20 * dVar18;
        }
        local_170 = (double)((ulonglong)local_170 & 0xffffffff00000000);
        uVar14 = FUN_140753fde(local_2f8,fVar22,&local_170);
        FUN_140703ce0(local_310,&local_130,uVar14);
        local_170 = (double)((ulonglong)local_170 & 0xffffffff00000000);
        local_32c = fVar22;
        uVar19 = FUN_140753fde(lVar8,fVar22,&local_170);
        local_170 = (double)((ulonglong)local_170 & 0xffffffff00000000);
        fVar15 = (float)FUN_140753fde(local_300,uVar19,&local_170);
        local_170 = (double)((ulonglong)local_170 & 0xffffffff00000000);
        fVar16 = (float)FUN_140753fde(local_308,uVar19,&local_170);
        dVar20 = (double)FUN_1467fc648(&local_118);
        lVar8 = local_320;
        dVar20 = *(double *)(param_1 + 0x1b8) * 0.017453292519943295 + dVar20;
        for (fVar22 = (float)dVar20; 3.1415927 < fVar22; fVar22 = fVar22 + -6.2831855) {
        }
        for (; fVar22 < -3.1415927; fVar22 = fVar22 + 6.2831855) {
        }
        fVar22 = (float)(~-(uint)(fVar22 < 0.0) & (uint)fVar22 |
                        (uint)(fVar22 + 6.2831855) & -(uint)(fVar22 < 0.0));
        if (fVar16 < 0.0) {
          fVar16 = -fVar16;
          fVar22 = (float)FUN_1447c7e44(CONCAT44((int)((ulonglong)dVar20 >> 0x20),fVar22 + 3.1415927
                                                ),0x40c90fdb);
        }
        dVar21 = dVar4 * (double)(fVar15 * 0.5);
        dVar20 = (double)(fVar15 * 0.5) * dVar5;
        dStack_168 = local_128 - dVar21;
        local_170 = local_130 - dVar20;
        local_160 = local_120;
        local_150 = DAT_14c846338;
        local_158 = DAT_14c846330;
        local_140 = DAT_14c84635c;
        local_138 = 0;
        local_136 = 0;
        local_1a0 = local_120 + 0.0;
        local_1a8 = local_128 + dVar21;
        local_1b0 = local_130 + dVar20;
        local_190 = DAT_14c846338;
        local_198 = DAT_14c846330;
        local_180 = DAT_14c84635c;
        local_178 = 0;
        local_176 = 0;
        local_1c8 = fVar16 / *DAT_14cb49838;
        local_1c0 = 0x3f80000000000000;
        if (1.0 <= local_1c8) {
          local_1c8 = 1.0;
        }
        if (local_1c8 <= 0.0) {
          local_1c8 = 0.0;
        }
        local_1c4 = fVar22 / 6.2831855;
        if (1.0 <= local_1c4) {
          local_1c4 = 1.0;
        }
        if (local_1c4 <= 0.0) {
          local_1c4 = 0.0;
        }
        _local_14c = CONCAT44(local_1c4,local_1c8);
        local_144 = 0;
        _local_18c = CONCAT44(local_1c4,local_1c8);
        local_184 = 0;
        lVar2 = *(longlong *)(lVar8 + 0x208);
        uVar19 = *(undefined8 *)(lVar2 + 0x40);
        if (*(int *)(lVar2 + 0x38) < 1) {
          uVar11 = 0;
        }
        else {
          uVar11 = **(undefined8 **)(lVar2 + 0x30);
        }
        iVar13 = *(int *)(lVar8 + 8);
        iVar10 = *(int *)(lVar8 + 0xc);
        local_340 = uVar11;
        FUN_146c02208(lVar8,&local_170);
        FUN_146c32f5e(uVar19,&local_1c8);
        local_208 = 0.0;
        local_200._0_4_ = 0x3f800000;
        FUN_146c2f9e2(uVar11,&local_208);
        FUN_146c02208(lVar8,&local_1b0);
        local_318 = uVar19;
        FUN_146c32f5e(uVar19,&local_1c8);
        local_208 = 0.0;
        local_200 = (double)CONCAT44(local_200._4_4_,0x3f800000);
        FUN_146c2f9e2(local_340,&local_208);
        lVar8 = local_320;
        iVar10 = iVar10 + iVar13 * 0x200;
        if (iVar10 != 0) {
          local_340 = CONCAT44(local_340._4_4_,iVar10 + -1);
          iVar13 = iVar10 + 1;
          iVar1 = iVar10 + -2;
          local_208 = (double)CONCAT44(iVar13,iVar1);
          local_200._0_4_ = iVar10 + -1;
          local_334 = FUN_146c01152(local_320,&local_208,0);
          local_208 = (double)CONCAT44(iVar10,iVar1);
          local_200._0_4_ = iVar13;
          local_338 = FUN_146c01152(lVar8,&local_208,0);
          uVar19 = local_318;
          local_208 = (double)CONCAT44(iVar13,iVar1);
          local_200._0_4_ = (undefined4)local_340;
          FUN_146c2a048(local_318,local_334,&local_208,1);
          local_208 = (double)CONCAT44(iVar10,iVar1);
          local_200 = (double)CONCAT44(local_200._4_4_,iVar13);
          FUN_146c2a048(uVar19,local_338,&local_208);
        }
        param_3 = local_348;
        if ((local_348 != (double **)0x0) && (0.0 < *(float *)(param_1 + 0xff0))) {
          dVar18 = (double)*(float *)(param_1 + 0xff0);
          local_240 = local_128 - dVar21;
          local_248 = local_130 - dVar20;
          local_1f8 = local_120 - dVar17 * dVar18;
          local_200 = local_240 - dVar4 * dVar18;
          local_208 = local_248 - dVar5 * dVar18;
          local_1e8 = DAT_14c846338;
          local_1f0 = DAT_14c846330;
          local_1dc = DAT_14c846338;
          local_1e4 = DAT_14c846330;
          local_1d8 = DAT_14c84635c;
          local_1d0 = 0;
          local_1ce = 0;
          local_238 = local_120;
          local_228 = DAT_14c846338;
          local_230 = DAT_14c846330;
          local_21c = DAT_14c846338;
          local_224 = DAT_14c846330;
          local_218 = DAT_14c84635c;
          local_210 = 0;
          local_20e = 0;
          local_278 = local_120 + 0.0;
          local_280 = dVar21 + local_128;
          local_288 = dVar20 + local_130;
          local_268 = DAT_14c846338;
          local_270 = DAT_14c846330;
          local_25c = DAT_14c846338;
          local_264 = DAT_14c846330;
          local_258 = DAT_14c84635c;
          local_250 = 0;
          local_24e = 0;
          local_2b8 = local_278 + dVar17 * dVar18;
          local_2c0 = local_280 + dVar4 * dVar18;
          local_2c8 = local_288 + dVar5 * dVar18;
          local_2a8 = DAT_14c846338;
          local_2b0 = DAT_14c846330;
          local_29c = DAT_14c846338;
          local_2a4 = DAT_14c846330;
          local_298 = DAT_14c84635c;
          local_290 = 0;
          local_28e = 0;
          iVar13 = *(int *)(local_348 + 1) * 0x200 + *(int *)((longlong)local_348 + 0xc);
          FUN_146c02208(local_348,&local_208);
          FUN_146c02208(param_3,&local_248);
          FUN_146c02208(param_3,&local_288);
          FUN_146c02208(param_3,&local_2c8);
          if ((local_32c == 0.0) && (!NAN(local_32c))) {
            local_f4 = iVar13 + -2;
            local_fc = iVar13 + -3;
            local_f8 = iVar13 + 2;
            FUN_146c01152(local_348,&local_fc,0);
            param_3 = local_348;
            local_f8 = iVar13 + 1;
            local_fc = iVar13 + -3;
            local_f4 = iVar13 + 2;
            FUN_146c01152(local_348,&local_fc,0);
          }
          if (iVar13 != 0) {
            local_f4 = iVar13 + -3;
            local_fc = iVar13 + -4;
            local_f8 = iVar13 + 1;
            FUN_146c01152(local_348,&local_fc,0);
            local_fc = iVar13 + -4;
            local_f8 = iVar13;
            local_f4 = iVar13 + 1;
            FUN_146c01152(local_348,&local_fc,0);
            local_f8 = iVar13 + 2;
            local_fc = iVar13 + -2;
            local_f4 = iVar13 + 3;
            FUN_146c01152(local_348,&local_fc,0);
            param_3 = local_348;
            local_f4 = iVar13 + -1;
            local_fc = iVar13 + -2;
            local_f8 = iVar13 + 3;
            FUN_146c01152(local_348,&local_fc,0);
          }
        }
        pdVar9 = local_2f0 + 1;
      } while (pdVar9 != local_328);
    }
    else {
      local_358 = param_3;
      FUN_143b2da8d(0,param_1,lVar6,lVar7);
      lVar8 = (longlong)(int)uStack_2d0;
      if (lVar8 != 0) goto LAB_143b2cf38;
    }
    uVar12 = (ulonglong)local_330;
    if ((param_3 != (double **)0x0) && (0.0 < *(float *)(param_1 + 0xff0))) {
      local_358 = param_3;
      FUN_143b2da8d(1,param_1,lVar6,lVar7);
    }
  }
  if (local_2e8 != 0) {
    FUN_1400020a8();
  }
  if (local_2d8 != (double *)0x0) {
    FUN_1400020a8();
  }
LAB_143b2ce2a:
  if ((local_f0 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return uVar12 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b2da8d FUN_143b2da8d body=1707 status=ok
// SIG undefined FUN_143b2da8d(void)

void FUN_143b2da8d(int param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined1 auStack_208 [32];
  double local_1e8;
  double local_1e0;
  double local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined2 local_1b0;
  undefined1 local_1ae;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_184;
  undefined4 local_17c;
  undefined8 local_178;
  undefined2 local_170;
  undefined1 local_16e;
  double local_168;
  double local_160;
  double local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_144;
  undefined4 local_13c;
  undefined8 local_138;
  undefined2 local_130;
  undefined1 local_12e;
  double local_128;
  double local_120;
  double local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined2 local_f0;
  undefined1 local_ee;
  double local_e8;
  double local_e0;
  double local_d8;
  int local_cc;
  int local_c8;
  int local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  uVar18 = 0;
  if ((param_1 != 0) && (0 < (longlong)*(int *)(param_3 + 0x670))) {
    uVar18 = *(undefined4 *)
              (*(longlong *)(param_3 + 0x668) + -0x14 + (longlong)*(int *)(param_3 + 0x670) * 0x14);
  }
  FUN_147a21818(param_3,&local_128,uVar18,0);
  dVar12 = local_118 * local_118 + local_128 * local_128 + local_120 * local_120;
  if (((dVar12 != 1.0) || (dVar3 = local_118, dVar2 = local_120, dVar15 = local_128, NAN(dVar12)))
     && (dVar3 = DAT_14c8464f0, dVar2 = DAT_14c8464e8, dVar15 = DAT_14c8464e0,
        9.99999993922529e-09 <= dVar12)) {
    dVar15 = 1.0 / SQRT(dVar12);
    dVar3 = local_118 * dVar15;
    dVar2 = local_120 * dVar15;
    dVar15 = local_128 * dVar15;
  }
  FUN_147a23328(param_3,&local_128,uVar18,0);
  dVar12 = local_118 * local_118 + local_128 * local_128 + local_120 * local_120;
  if (((dVar12 != 1.0) || (dVar13 = local_120, dVar17 = local_128, dVar16 = local_118, NAN(dVar12)))
     && (dVar13 = DAT_14c8464e8, dVar17 = DAT_14c8464e0, dVar16 = DAT_14c8464f0,
        9.99999993922529e-09 <= dVar12)) {
    dVar17 = 1.0 / SQRT(dVar12);
    dVar16 = local_118 * dVar17;
    dVar13 = local_120 * dVar17;
    dVar17 = local_128 * dVar17;
  }
  dVar4 = dVar15 * dVar13 - dVar17 * dVar2;
  dVar12 = dVar3 * dVar17 - dVar16 * dVar15;
  dVar3 = dVar2 * dVar16 - dVar13 * dVar3;
  dVar13 = dVar4 * dVar4 + dVar3 * dVar3 + dVar12 * dVar12;
  if (((dVar13 != 1.0) || (dVar17 = dVar4, dVar16 = dVar12, dVar5 = dVar3, NAN(dVar13))) &&
     (dVar17 = DAT_14c8464f0, dVar16 = DAT_14c8464e8, dVar5 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar13)) {
    dVar13 = 1.0 / SQRT(dVar13);
    dVar17 = dVar4 * dVar13;
    dVar16 = dVar12 * dVar13;
    dVar5 = dVar3 * dVar13;
  }
  local_128 = (double)((ulonglong)local_128 & 0xffffffff00000000);
  uVar14 = FUN_140753fde(param_3 + 0x668,uVar18,&local_128);
  FUN_140703ce0(param_3 + 0x620,&local_e8,uVar14,&DAT_14c8464e0);
  local_128 = (double)((ulonglong)local_128 & 0xffffffff00000000);
  uVar14 = FUN_140753fde(param_3 + 0x668,uVar18,&local_128);
  local_128 = (double)((ulonglong)local_128 & 0xffffffff00000000);
  fVar11 = (float)FUN_140753fde(param_4 + 0x58,uVar14,&local_128);
  dVar12 = (double)*(float *)(param_2 + 0xff0);
  dVar2 = dVar2 * dVar12;
  dVar15 = dVar15 * dVar12;
  if (param_1 == 0) {
    dVar15 = -dVar15;
    dVar2 = -dVar2;
  }
  dVar3 = dVar16 * (double)(fVar11 * 0.5);
  dVar13 = dVar5 * (double)(fVar11 * 0.5);
  if (param_1 == 0) {
    local_198 = -0.0;
  }
  else {
    local_198 = 0.0;
  }
  local_168 = (local_e8 - dVar13) + dVar15;
  local_128 = local_168 - dVar12 * dVar5;
  local_160 = (local_e0 - dVar3) + dVar2;
  local_120 = local_160 - dVar16 * dVar12;
  local_158 = local_198 + local_d8;
  local_118 = local_158 - dVar17 * dVar12;
  local_198 = local_d8 + 0.0 + local_198;
  local_1a0 = dVar3 + local_e0 + dVar2;
  local_1a8 = dVar13 + local_e8 + dVar15;
  local_1d8 = local_198 + dVar17 * dVar12;
  local_1e0 = local_1a0 + dVar16 * dVar12;
  local_1e8 = local_1a8 + dVar12 * dVar5;
  local_110 = DAT_14c846330;
  local_108 = DAT_14c846338;
  local_104 = DAT_14c846330;
  local_fc = DAT_14c846338;
  local_f8 = DAT_14c84635c;
  local_f0 = 0;
  local_ee = 0;
  local_150 = DAT_14c846330;
  local_148 = DAT_14c846338;
  local_144 = DAT_14c846330;
  local_13c = DAT_14c846338;
  local_138 = DAT_14c84635c;
  local_130 = 0;
  local_12e = 0;
  local_190 = DAT_14c846330;
  local_188 = DAT_14c846338;
  local_184 = DAT_14c846330;
  local_17c = DAT_14c846338;
  local_178 = DAT_14c84635c;
  local_170 = 0;
  local_16e = 0;
  local_1c8 = DAT_14c846338;
  local_1d0 = DAT_14c846330;
  local_1c4 = DAT_14c846330;
  local_1bc = DAT_14c846338;
  local_1b8 = DAT_14c84635c;
  local_1b0 = 0;
  local_1ae = 0;
  iVar9 = *(int *)(param_5 + 8);
  iVar1 = *(int *)(param_5 + 0xc);
  FUN_146c02208(param_5);
  FUN_146c02208(param_5,&local_168);
  FUN_146c02208(param_5,&local_1a8);
  FUN_146c02208(param_5,&local_1e8);
  if (param_1 == 1) {
    iVar9 = iVar9 * 0x200;
    local_c8 = iVar9 + iVar1;
    iVar6 = iVar9 + iVar1 + 1;
    iVar7 = iVar9 + -4 + iVar1;
    local_cc = iVar7;
    local_c4 = iVar6;
    FUN_146c01152(param_5,&local_cc,0);
    iVar10 = iVar9 + iVar1 + -3;
    local_cc = iVar7;
    local_c8 = iVar6;
    local_c4 = iVar10;
    FUN_146c01152(param_5,&local_cc,0);
    iVar8 = iVar9 + iVar1 + 2;
    local_cc = iVar10;
    local_c8 = iVar6;
    local_c4 = iVar8;
    FUN_146c01152(param_5,&local_cc,0);
    iVar7 = iVar9 + iVar1 + -2;
    local_cc = iVar10;
    local_c8 = iVar8;
    local_c4 = iVar7;
    FUN_146c01152(param_5,&local_cc,0);
    iVar6 = iVar9 + iVar1 + 3;
    local_cc = iVar7;
    local_c8 = iVar8;
    local_c4 = iVar6;
    FUN_146c01152(param_5,&local_cc,0);
    local_c4 = iVar9 + iVar1 + -1;
    local_cc = iVar7;
    local_c8 = iVar6;
    FUN_146c01152(param_5,&local_cc,0);
  }
  if ((local_c0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b2e139 FUN_143b2e139 body=55 status=ok
// SIG undefined FUN_143b2e139(void)

void FUN_143b2e139(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb47308 == 0) {
    uVar1 = FUN_140f8264f();
    DAT_14cb47308 = FUN_14171c317(FUN_146487a44,uVar1,L"EWaterBodyType");
  }
  return;
}



// FUNCTION 143b2e170 FUN_143b2e170 body=3037 status=ok
// SIG undefined FUN_143b2e170(void)

uint * FUN_143b2e170(undefined8 *param_1,uint *param_2,double *param_3,uint param_4,
                    undefined4 param_5,uint *param_6)

{
  char cVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  longlong lVar12;
  char cVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  double dVar21;
  double dVar22;
  float unaff_XMM6_Da;
  float fVar23;
  undefined4 unaff_XMM6_Db;
  undefined4 uVar24;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  undefined8 *local_150;
  undefined *local_148;
  undefined1 *local_140;
  undefined4 *local_138;
  undefined1 *local_130;
  double *local_120;
  uint *local_118;
  uint *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  uint uStack_f0;
  uint uStack_ec;
  undefined8 local_e8;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_99;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  double local_88;
  undefined1 local_71;
  ulonglong local_70;
  
  dVar4 = (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  cVar13 = (char)param_6[1];
  *(char *)(param_2 + 2) = cVar13;
  if (cVar13 == '\x01') {
    param_2[1] = *param_6;
  }
  local_110 = param_2 + 4;
  *(undefined8 *)(param_2 + 8) = DAT_14c8464f0;
  uVar7 = DAT_14c8464e8;
  *(undefined8 *)(param_2 + 4) = DAT_14c8464e0;
  *(undefined8 *)(param_2 + 6) = uVar7;
  *(undefined8 *)(param_2 + 0xe) = DAT_14c8464f0;
  uVar7 = DAT_14c8464e8;
  *(undefined8 *)(param_2 + 10) = DAT_14c8464e0;
  *(undefined8 *)(param_2 + 0xc) = uVar7;
  *(undefined8 *)(param_2 + 0x14) = DAT_14c8462d0;
  uVar7 = CONCAT44(DAT_14c8462c8._4_4_,(uint)DAT_14c8462c8);
  *(ulonglong *)(param_2 + 0x10) = CONCAT44(DAT_14c8462c0._4_4_,(uint)DAT_14c8462c0);
  *(undefined8 *)(param_2 + 0x12) = uVar7;
  uVar7 = CONCAT44(DAT_14c8462c8._4_4_,(uint)DAT_14c8462c8);
  *(ulonglong *)(param_2 + 0x16) = CONCAT44(DAT_14c8462c0._4_4_,(uint)DAT_14c8462c0);
  *(undefined8 *)(param_2 + 0x18) = uVar7;
  *(undefined8 *)(param_2 + 0x1a) = DAT_14c8462d0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0x3f800000;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  *(undefined8 *)(param_2 + 0x26) = DAT_14c8462d0;
  uVar7 = CONCAT44(DAT_14c8462c8._4_4_,(uint)DAT_14c8462c8);
  *(ulonglong *)(param_2 + 0x22) = CONCAT44(DAT_14c8462c0._4_4_,(uint)DAT_14c8462c0);
  *(undefined8 *)(param_2 + 0x24) = uVar7;
  param_2[0x28] = 0;
  uVar7 = DAT_14c8464e8;
  *(undefined8 *)(param_2 + 0x2a) = DAT_14c8464e0;
  *(undefined8 *)(param_2 + 0x2c) = uVar7;
  *(undefined8 *)(param_2 + 0x2e) = DAT_14c8464f0;
  *(undefined1 *)(param_2 + 0x30) = 0;
  uVar9 = (param_4 & 0x118) != 0 | param_4;
  cVar1 = *(char *)(param_1 + 0x29);
  uVar15 = param_4 | 9;
  if (1 < (byte)(cVar1 - 1U)) {
    uVar15 = uVar9;
  }
  if ((param_4 & 0x20) == 0) {
    uVar15 = uVar9;
  }
  *param_2 = uVar15;
  if ((uVar15 & 1) != 0) {
    local_98 = *(uint *)param_3;
    uStack_94 = *(uint *)((longlong)param_3 + 4);
    uStack_90 = *(uint *)(param_3 + 1);
    uStack_8c = *(uint *)((longlong)param_3 + 0xc);
    if (cVar1 == '\x03') {
LAB_143b2e2f6:
      if (cVar13 == '\0') {
        uVar20 = FUN_1483f47a2(param_1 + 4,param_3);
        param_2[1] = (uint)uVar20;
        *(undefined1 *)(param_2 + 2) = 1;
        cVar13 = '\x01';
      }
      else {
        uVar20 = (ulonglong)param_2[1];
      }
      FUN_140703ce0(param_1 + 0x10,&local_108,uVar20,&DAT_14c8464e0);
      dVar21 = local_f8 * (double)param_1[0xe];
      dVar6 = (double)param_1[4];
      dVar3 = uStack_100 * (double)param_1[0xd] * dVar6 -
              (double)param_1[5] * (double)local_108 * (double)param_1[0xc];
      dVar5 = dVar21 * (double)param_1[5] - (double)param_1[6] * uStack_100 * (double)param_1[0xd];
      dVar22 = (double)param_1[6] * (double)local_108 * (double)param_1[0xc] - dVar21 * dVar6;
      dVar3 = (dVar3 + dVar3) * (double)param_1[7] + dVar21 +
              ((dVar22 + dVar22) * dVar6 - (double)param_1[5] * (dVar5 + dVar5)) +
              (double)param_1[10];
    }
    else if (cVar1 == '\x02') {
      dVar3 = (double)*(float *)((longlong)param_1 + 0x14c) + (double)param_1[0x28];
    }
    else {
      if (cVar1 == '\0') goto LAB_143b2e2f6;
      dVar3 = (double)param_1[0x28];
    }
    *(ulonglong *)local_110 = CONCAT44(uStack_94,local_98);
    *(ulonglong *)(local_110 + 2) = CONCAT44(uStack_8c,uStack_90);
    *(double *)(param_2 + 8) = dVar3;
    param_2[10] = local_98;
    param_2[0xb] = uStack_94;
    param_2[0xc] = uStack_90;
    param_2[0xd] = uStack_8c;
    *(double *)(param_2 + 0xe) = dVar3;
  }
  local_118 = param_2 + 0x16;
  local_c8 = DAT_14c8462d0;
  local_d8 = (uint)DAT_14c8462c0;
  uStack_d4 = DAT_14c8462c0._4_4_;
  uStack_d0 = (uint)DAT_14c8462c8;
  uStack_cc = DAT_14c8462c8._4_4_;
  if ((uVar15 & 2) != 0) {
    if ((cVar1 == '\x03') || (cVar1 == '\0')) {
      if (cVar13 == '\0') {
        uVar20 = FUN_1483f47a2(param_1 + 4,param_3);
        param_2[1] = (uint)uVar20;
        *(undefined1 *)(param_2 + 2) = 1;
        cVar13 = '\x01';
      }
      else {
        uVar20 = (ulonglong)param_2[1];
      }
      FUN_1483f4976(param_1 + 4,&local_d8,uVar20);
    }
    *(undefined8 *)(param_2 + 0x14) = local_c8;
    *(ulonglong *)(param_2 + 0x10) = CONCAT44(uStack_d4,local_d8);
    *(ulonglong *)(param_2 + 0x12) = CONCAT44(uStack_cc,uStack_d0);
    *(undefined8 *)(local_118 + 4) = local_c8;
    *local_118 = local_d8;
    local_118[1] = uStack_d4;
    local_118[2] = uStack_d0;
    local_118[3] = uStack_cc;
  }
  if ((uVar15 >> 8 & 1) == 0) {
    if ((uVar15 & 8) == 0) {
      uVar9 = 0x3f800000;
      fVar23 = 0.0;
      uVar24 = 0;
      goto LAB_143b2e8e7;
    }
    if (1 < (byte)(*(char *)(param_1 + 0x29) - 1U)) {
LAB_143b2e866:
      local_108 = (char *)((ulonglong)local_108 & 0xffffffff00000000);
      if (cVar13 == '\0') {
        uVar9 = FUN_1483f47a2(param_1 + 4,param_3);
        param_2[1] = uVar9;
        *(undefined1 *)(param_2 + 2) = 1;
        cVar13 = '\x01';
      }
      else {
        uVar9 = param_2[1];
      }
      uVar20 = FUN_140753fde(param_1 + 0x20,uVar9,&local_108);
      goto LAB_143b2e8ce;
    }
    local_b8 = 0;
    uStack_b0 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb48910) && (FUN_144b3d300(&DAT_14cb48910), DAT_14cb48910 == -1)) {
      local_108 = "WaterImmersionDepthTrace";
      uStack_100 = (double)CONCAT35(uStack_100._5_3_,0x18);
      FUN_14001a6c0(&local_108,1);
      _Init_thread_footer(&DAT_14cb48910);
    }
    lVar12 = FUN_140bfa850();
    local_c0 = *(undefined4 *)(lVar12 + 4);
    local_138 = &local_c0;
    local_bc = 0;
    local_f8 = param_3[2] + -100000.0;
    uStack_100 = param_3[1] + 0.0;
    local_108 = (char *)(*param_3 + 0.0);
    local_158 = &local_108;
    local_98 = *(uint *)param_3;
    uStack_94 = *(uint *)((longlong)param_3 + 4);
    uStack_90 = *(uint *)(param_3 + 1);
    uStack_8c = *(uint *)((longlong)param_3 + 0xc);
    local_88 = param_3[2];
    local_130 = &local_71;
    local_140 = &DAT_14cad0f10;
    local_148 = &DAT_14cad0f68;
    local_150 = (undefined8 *)CONCAT44(local_150._4_4_,DAT_14cad0ec4);
    FUN_1401e2596(*param_1,&local_b8,&local_99);
    if ((longlong)(int)uStack_b0 < 1) {
      bVar8 = false;
    }
    else {
      lVar12 = local_b8;
      do {
        if ((*(int *)(lVar12 + 0xdc) == 0) || (uVar9 = *(uint *)(lVar12 + 0xd8), (int)uVar9 < 0)) {
LAB_143b2e7ee:
          lVar16 = 0;
        }
        else {
          lVar16 = 0;
          if ((int)uVar9 < DAT_14c9647dc) {
            plVar17 = (longlong *)
                      ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
            if (((plVar17 == (longlong *)0x0) || ((int)plVar17[2] != *(int *)(lVar12 + 0xdc))) ||
               ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)) goto LAB_143b2e7ee;
            lVar16 = *plVar17;
          }
        }
        if (*(int *)(param_1 + 2) != 0) {
          lVar14 = 0;
          do {
            if (*(longlong *)(param_1[1] + lVar14) == lVar16) {
              unaff_XMM6_Da = (float)*(double *)(lVar12 + 0x38);
              bVar8 = true;
              local_120 = param_3;
              goto LAB_143b2e990;
            }
            lVar14 = lVar14 + 8;
          } while ((longlong)*(int *)(param_1 + 2) << 3 != lVar14);
        }
        lVar12 = lVar12 + 0x100;
      } while (lVar12 != (longlong)(int)uStack_b0 * 0x100 + local_b8);
      bVar8 = false;
      local_120 = param_3;
    }
LAB_143b2e990:
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    lVar12 = DAT_14cb471c8;
    if (bVar8) {
      fVar23 = (float)(*(double *)(param_2 + 8) - (double)unaff_XMM6_Da);
      if ((0.0 <= fVar23) || (uVar9 = 0, *(char *)(param_1 + 0x29) != '\x02')) {
        uVar9 = 0x3f800000;
      }
      uVar19 = (ulonglong)(uint)fVar23;
      if (0.0 <= fVar23) goto LAB_143b2e8d6;
    }
    else {
      uVar9 = 0x3f800000;
    }
    if (*(char *)(param_1 + 0x29) == '\x02') {
      iVar2 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
        uVar20 = 0;
      }
      else if (iVar2 == 1) {
        DVar10 = FUN_140ad26c0();
        DVar11 = GetCurrentThreadId();
        uVar20 = (ulonglong)(DVar10 != DVar11);
      }
      else {
        uVar20 = 1;
      }
      uVar19 = (ulonglong)*(uint *)(lVar12 + uVar20 * 4);
    }
    else {
      local_108 = (char *)((ulonglong)local_108 & 0xffffffff00000000);
      if (cVar13 == '\0') {
        uVar18 = FUN_1483f47a2(param_1 + 4,param_3);
        param_2[1] = uVar18;
        *(undefined1 *)(param_2 + 2) = 1;
        cVar13 = '\x01';
      }
      else {
        uVar18 = param_2[1];
      }
      uVar19 = FUN_140753fde(param_1 + 0x20,uVar18,&local_108);
    }
  }
  else {
    local_b8 = 0;
    uStack_b0 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb48914) && (FUN_144b3d300(&DAT_14cb48914), DAT_14cb48914 == -1)) {
      local_108 = "WaterImmersionDepthTrace";
      uStack_100 = (double)CONCAT35(uStack_100._5_3_,0x18);
      FUN_14001a6c0(&local_108,1);
      _Init_thread_footer(&DAT_14cb48914);
    }
    lVar12 = FUN_140bfa850();
    local_c0 = *(undefined4 *)(lVar12 + 4);
    local_138 = &local_c0;
    local_bc = 0;
    local_f8 = param_3[2] + -100000.0;
    uStack_100 = param_3[1] + 0.0;
    local_108 = (char *)(*param_3 + 0.0);
    local_158 = &local_108;
    local_98 = *(uint *)param_3;
    uStack_94 = *(uint *)((longlong)param_3 + 4);
    uStack_90 = *(uint *)(param_3 + 1);
    uStack_8c = *(uint *)((longlong)param_3 + 0xc);
    local_88 = param_3[2];
    local_130 = &local_71;
    local_140 = &DAT_14cad0f10;
    local_148 = &DAT_14cad0f68;
    local_150 = (undefined8 *)CONCAT44(local_150._4_4_,DAT_14cad0ec4);
    FUN_1401e2596(*param_1,&local_b8,&local_99);
    if ((longlong)(int)uStack_b0 < 1) {
      bVar8 = false;
    }
    else {
      lVar12 = local_b8;
      do {
        if ((*(int *)(lVar12 + 0xdc) == 0) || (uVar9 = *(uint *)(lVar12 + 0xd8), (int)uVar9 < 0)) {
LAB_143b2e61d:
          lVar16 = 0;
        }
        else {
          lVar16 = 0;
          if ((int)uVar9 < DAT_14c9647dc) {
            plVar17 = (longlong *)
                      ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
            if (((plVar17 == (longlong *)0x0) || ((int)plVar17[2] != *(int *)(lVar12 + 0xdc))) ||
               ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)) goto LAB_143b2e61d;
            lVar16 = *plVar17;
          }
        }
        if (*(int *)(param_1 + 2) != 0) {
          lVar14 = 0;
          do {
            if (*(longlong *)(param_1[1] + lVar14) == lVar16) {
              dVar4 = (double)(float)*(double *)(lVar12 + 0x38);
              bVar8 = true;
              local_120 = param_3;
              goto LAB_143b2e7f5;
            }
            lVar14 = lVar14 + 8;
          } while ((longlong)*(int *)(param_1 + 2) << 3 != lVar14);
        }
        lVar12 = lVar12 + 0x100;
      } while (lVar12 != (longlong)(int)uStack_b0 * 0x100 + local_b8);
      bVar8 = false;
      local_120 = param_3;
    }
LAB_143b2e7f5:
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    lVar12 = DAT_14cb471c8;
    if (bVar8) {
      fVar23 = (float)(*(double *)(param_2 + 8) - dVar4);
      uVar19 = (ulonglong)(uint)fVar23;
      uVar9 = 0;
      uVar20 = (ulonglong)(uint)fVar23;
      if ((fVar23 < 0.0) && (uVar20 = uVar19, *(char *)(param_1 + 0x29) == '\x02'))
      goto LAB_143b2e8d6;
    }
    else {
      if (*(char *)(param_1 + 0x29) != '\x02') goto LAB_143b2e866;
      iVar2 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
        uVar20 = 0;
      }
      else if (iVar2 == 1) {
        DVar10 = FUN_140ad26c0();
        DVar11 = GetCurrentThreadId();
        uVar20 = (ulonglong)(DVar10 != DVar11);
      }
      else {
        uVar20 = 1;
      }
      uVar20 = (ulonglong)*(uint *)(lVar12 + uVar20 * 4);
    }
LAB_143b2e8ce:
    uVar9 = 0x3f800000;
    uVar19 = uVar20;
  }
LAB_143b2e8d6:
  uVar24 = (undefined4)(uVar19 >> 0x20);
  fVar23 = (float)uVar19;
  if (fVar23 <= 0.0) {
    fVar23 = 0.0;
  }
  param_2[0x1c] = (uint)fVar23;
  param_2[0x1d] = (uint)fVar23;
LAB_143b2e8e7:
  if (((uVar15 & 0x20) != 0) && ((byte)(*(char *)(param_1 + 0x29) - 1U) < 2)) {
    local_150 = &local_108;
    uStack_100 = 0.0;
    local_108 = (char *)((ulonglong)uVar9 << 0x20);
    local_f8 = (double)CONCAT44(uStack_d4,local_d8);
    uStack_f0 = uStack_d0;
    uStack_ec = uStack_cc;
    local_e8 = local_c8;
    local_158 = (undefined8 *)CONCAT71(local_158._1_7_,(char)((uVar15 & 0x40) >> 6));
    FUN_1483f560e(param_1,local_110,CONCAT44(uVar24,fVar23),param_5);
    *(undefined8 *)(param_2 + 0x26) = local_e8;
    *(double *)(param_2 + 0x22) = local_f8;
    *(ulonglong *)(param_2 + 0x24) = CONCAT44(uStack_ec,uStack_f0);
    param_2[0x1e] = (uint)local_108;
    param_2[0x1f] = local_108._4_4_;
    param_2[0x20] = (uint)(float)uStack_100;
    param_2[0x21] = uStack_100._4_4_;
    if ((uVar15 & 1) != 0) {
      *(double *)(param_2 + 0xe) = (double)(float)uStack_100 + *(double *)(param_2 + 0xe);
    }
    if ((uVar15 & 2) != 0) {
      *(undefined8 *)(local_118 + 4) = local_e8;
      *local_118 = (uint)local_f8;
      local_118[1] = local_f8._4_4_;
      local_118[2] = uStack_f0;
      local_118[3] = uStack_ec;
    }
    if ((uVar15 & 0x108) != 0) {
      param_2[0x1d] = (uint)(fVar23 + (float)uStack_100);
    }
  }
  if ((uVar15 & 0x10) != 0) {
    param_2[0x28] = (uint)(float)(*(double *)(param_2 + 0xe) - param_3[2]);
  }
  if ((uVar15 & 4) != 0) {
    if (cVar13 == '\0') {
      uVar20 = FUN_1483f47a2(param_1 + 4,param_3);
      param_2[1] = (uint)uVar20;
      *(undefined1 *)(param_2 + 2) = 1;
    }
    else {
      uVar20 = (ulonglong)param_2[1];
    }
    local_108 = (char *)((ulonglong)local_108 & 0xffffffff00000000);
    fVar23 = (float)FUN_140753fde(param_1 + 0x23,(int)uVar20);
    FUN_1483f4eaa(param_1 + 4,&local_108,uVar20);
    dVar4 = (double)fVar23;
    *(double *)(param_2 + 0x2a) = (double)local_108 * dVar4;
    *(double *)(param_2 + 0x2c) = uStack_100 * dVar4;
    *(double *)(param_2 + 0x2e) = dVar4 * local_f8;
  }
  if ((local_70 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143b2ed4e FUN_143b2ed4e body=3873 status=ok
// SIG undefined FUN_143b2ed4e(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_143b2ed4e(longlong *param_1)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 (*pauVar9) [16];
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  uint uVar22;
  undefined1 (*pauVar23) [16];
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  longlong lVar27;
  undefined1 (*pauVar28) [16];
  undefined1 (*pauVar29) [16];
  int iVar30;
  int iVar31;
  int iVar32;
  undefined1 (*pauVar33) [16];
  uint uVar34;
  undefined1 (*pauVar35) [16];
  undefined1 (*pauVar36) [16];
  longlong lVar37;
  bool bVar38;
  float fVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined8 uVar43;
  double dVar44;
  double dVar45;
  undefined1 auStack_558 [32];
  int local_538;
  uint local_534;
  ulonglong local_530;
  double local_528;
  double local_520;
  double local_518;
  double local_510;
  double local_508;
  double local_500;
  double local_4f8;
  double local_4f0;
  double local_4e8;
  double local_4e0;
  double local_4d8;
  double local_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 local_4a8;
  undefined4 local_4a0;
  undefined8 local_498;
  undefined4 local_490;
  longlong local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  longlong local_438 [5];
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 local_3f8;
  longlong lStack_3f0;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_558;
  local_438[2] = 0;
  local_438[3] = 0;
  local_438[0] = 0;
  local_438[1] = 0;
  FUN_1400bd09c(local_438 + 2,(int)param_1[0x28] * 0x200 + *(int *)((longlong)param_1 + 0x144),1);
  FUN_14051b394(local_438,(int)param_1[0x28] * 0x200 + *(int *)((longlong)param_1 + 0x144),1);
  uVar22 = (int)param_1[0x28] * 0x200 + *(int *)((longlong)param_1 + 0x144);
  uVar34 = 0;
  if ((uVar22 != 0) && (uVar34 = 0, 0xfffd < (ushort)(**(short **)param_1[0x29] - 1U))) {
    uVar10 = 1;
    uVar14 = 1;
    if (1 < (int)uVar22) {
      uVar10 = uVar22;
    }
    do {
      uVar34 = uVar10;
      if (uVar10 == uVar14) break;
      uVar18 = uVar14 >> 9;
      uVar25 = uVar14 & 0x1ff;
      uVar34 = uVar14;
      uVar14 = uVar14 + 1;
    } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_1[0x29])[uVar18] +
                                         (ulonglong)uVar25 * 2) - 1U));
  }
  if (uVar34 != uVar22) {
    do {
      lVar37 = param_1[2];
      lVar16 = *(longlong *)(param_1[0x26] + (ulonglong)(uVar34 >> 9) * 8);
      uVar15 = (ulonglong)(uVar34 & 0x1ff);
      uVar10 = *(uint *)(lVar16 + uVar15 * 0xc);
      lVar24 = *(longlong *)(lVar37 + (ulonglong)(uVar10 >> 9) * 8);
      uVar26 = (ulonglong)uVar10 & 0x1ff;
      uVar43 = *(undefined8 *)(lVar24 + 0x10 + uVar26 * 0x18);
      local_3e8 = (undefined4)uVar43;
      uStack_3e4 = (undefined4)((ulonglong)uVar43 >> 0x20);
      plVar17 = (longlong *)(lVar24 + uVar26 * 0x18);
      local_3f8 = *plVar17;
      lStack_3f0 = plVar17[1];
      uVar10 = *(uint *)(lVar16 + 4 + uVar15 * 0xc);
      lVar24 = *(longlong *)(lVar37 + (ulonglong)(uVar10 >> 9) * 8);
      uVar26 = (ulonglong)uVar10 & 0x1ff;
      local_408 = *(undefined8 *)(lVar24 + 0x10 + uVar26 * 0x18);
      puVar1 = (undefined8 *)(lVar24 + uVar26 * 0x18);
      local_438[4] = *puVar1;
      uStack_410 = puVar1[1];
      uVar10 = *(uint *)(lVar16 + 8 + uVar15 * 0xc);
      lVar37 = *(longlong *)(lVar37 + (ulonglong)(uVar10 >> 9) * 8);
      uVar15 = (ulonglong)uVar10 & 0x1ff;
      local_448 = *(undefined8 *)(lVar37 + 0x10 + uVar15 * 0x18);
      puVar1 = (undefined8 *)(lVar37 + uVar15 * 0x18);
      local_458 = *puVar1;
      uStack_450 = puVar1[1];
      dVar40 = (double)FUN_14831c0ee(&local_3f8,local_438 + 4,&local_458);
      dVar44 = 1.0;
      if (1.0 / dVar40 <= 1.0) {
        dVar44 = 1.0 / dVar40;
      }
      lVar37 = (longlong)(int)uVar34;
      *(ulonglong *)(local_438[2] + lVar37 * 8) =
           -(ulonglong)(1.0 < dVar40) & (ulonglong)dVar44 |
           ~-(ulonglong)(1.0 < dVar40) & (ulonglong)dVar40;
      FUN_146baf581(&local_478,&local_3f8,local_438 + 4,&local_458);
      *(undefined8 *)(local_438[0] + 0x10 + lVar37 * 0x18) = local_468;
      puVar1 = (undefined8 *)(local_438[0] + lVar37 * 0x18);
      *puVar1 = local_478;
      puVar1[1] = uStack_470;
      uVar10 = uVar34 + 1;
      if ((int)(uVar34 + 1) < (int)uVar22) {
        uVar10 = uVar22;
      }
      do {
        uVar14 = uVar10;
        if (uVar10 - 1 == uVar34) break;
        uVar34 = uVar34 + 1;
        uVar14 = uVar34;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (param_1[0x29] + (ulonglong)(uVar34 >> 9) * 8) +
                                           (ulonglong)(uVar34 & 0x1ff) * 2) - 1U));
      uVar34 = uVar14;
    } while (uVar34 != uVar22);
  }
  local_488 = 0;
  uStack_480 = 0;
  uVar15 = 0;
  uVar34 = (int)param_1[0x3a] * 0x200 + *(int *)((longlong)param_1 + 0x1d4);
  if ((uVar34 != 0) && (0xfffd < (ushort)(**(short **)param_1[0x3b] - 1U))) {
    uVar15 = 1;
    uVar22 = 1;
    if (1 < (int)uVar34) {
      uVar15 = (ulonglong)uVar34;
    }
    do {
      uVar10 = uVar22;
      if ((uint)uVar15 == uVar10) goto LAB_143b2f0b2;
      uVar22 = uVar10 + 1;
    } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_1[0x3b])[uVar10 >> 9] +
                                         (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
    uVar15 = (ulonglong)uVar10;
  }
LAB_143b2f0b2:
  if ((uint)uVar15 != uVar34) {
    do {
      uVar26 = uStack_480;
      uVar22 = (uint)uVar15;
      lVar37 = *(longlong *)(param_1[0x38] + (uVar15 >> 9) * 8);
      if (*(int *)(lVar37 + 0xc + (ulonglong)((uVar22 & 0x1ff) << 4)) != -1) {
        lVar37 = *(longlong *)(lVar37 + 8 + (ulonglong)((uVar22 & 0x1ff) << 4));
        lVar16 = (longlong)(int)lVar37;
        dVar44 = *(double *)(local_438[2] + lVar16 * 8);
        lVar37 = lVar37 >> 0x20;
        dVar40 = *(double *)(local_438[2] + lVar37 * 8);
        if (((0.01 <= dVar44) || (0.01 <= dVar40)) &&
           (0.99 < *(double *)(local_438[0] + 0x10 + lVar16 * 0x18) *
                   *(double *)(local_438[0] + 0x10 + lVar37 * 0x18) +
                   *(double *)(local_438[0] + lVar16 * 0x18) *
                   *(double *)(local_438[0] + lVar37 * 0x18) +
                   *(double *)(local_438[0] + 8 + lVar16 * 0x18) *
                   *(double *)(local_438[0] + 8 + lVar37 * 0x18))) {
          lVar37 = (longlong)(int)uStack_480;
          uVar10 = (int)uStack_480 + 1;
          uStack_480 = CONCAT44(uStack_480._4_4_,uVar10);
          if (uStack_480._4_4_ < uVar10) {
            FUN_143b3d256(&local_488,uVar26 & 0xffffffff);
          }
          *(uint *)(local_488 + lVar37 * 0x10) = uVar22;
          *(ulonglong *)(local_488 + 8 + lVar37 * 0x10) =
               ~-(ulonglong)(dVar44 <= dVar40) & (ulonglong)dVar40 |
               (ulonglong)dVar44 & -(ulonglong)(dVar44 <= dVar40);
        }
      }
      lVar37 = local_488;
      uVar10 = uVar22 + 1;
      if ((int)(uVar22 + 1) < (int)uVar34) {
        uVar10 = uVar34;
      }
      do {
        if (uVar10 - 1 == (int)uVar15) {
          uVar15 = (ulonglong)uVar10;
          break;
        }
        uVar22 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar22;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (param_1[0x3b] + (ulonglong)(uVar22 >> 9) * 8) +
                                           (ulonglong)(uVar22 & 0x1ff) * 2) - 1U));
    } while ((uint)uVar15 != uVar34);
    iVar30 = (int)uStack_480;
    lVar16 = (longlong)(int)uStack_480;
    if (1 < lVar16) {
      memset(&local_3e8,0,0x2f0);
      local_3f8 = lVar37;
      lStack_3f0 = lVar16 * 0x10 + lVar37 + -0x10;
      fVar39 = logf((float)iVar30);
      local_3e8 = (int)(longlong)(fVar39 + fVar39);
      plVar17 = &local_3f8;
      do {
        pauVar20 = (undefined1 (*) [16])*plVar17;
        pauVar23 = (undefined1 (*) [16])plVar17[1];
        iVar30 = (int)plVar17[2];
        iVar11 = (int)((ulonglong)((longlong)pauVar23 - (longlong)pauVar20) >> 4);
        uVar34 = iVar11 + 1;
        pauVar21 = pauVar20;
        pauVar28 = pauVar23;
        if (iVar30 != 0) {
LAB_143b2f2a5:
          if (8 < (int)uVar34) {
            uVar43 = *(undefined8 *)pauVar20[uVar34 >> 1];
            uVar6 = *(undefined8 *)(pauVar20[uVar34 >> 1] + 8);
            uVar7 = *(undefined8 *)(*pauVar20 + 8);
            *(undefined8 *)pauVar20[uVar34 >> 1] = *(undefined8 *)*pauVar20;
            *(undefined8 *)(pauVar20[uVar34 >> 1] + 8) = uVar7;
            *(undefined8 *)*pauVar20 = uVar43;
            *(undefined8 *)(*pauVar20 + 8) = uVar6;
            pauVar33 = pauVar28 + 1;
            pauVar19 = pauVar20;
            do {
              pauVar9 = pauVar19 + 1;
              pauVar29 = pauVar19 + 1;
              do {
                pauVar36 = pauVar29;
                pauVar19 = pauVar9;
                if (pauVar28 < pauVar19) break;
                pauVar9 = pauVar19 + 1;
                pauVar29 = pauVar36 + 1;
              } while (*(double *)(*pauVar19 + 8) < *(double *)(*pauVar20 + 8) ||
                       *(double *)(*pauVar19 + 8) == *(double *)(*pauVar20 + 8));
              pauVar9 = pauVar33 + -2;
              do {
                pauVar29 = pauVar33;
                pauVar35 = pauVar9;
                pauVar33 = pauVar29 + -1;
                if (pauVar33 <= pauVar20) break;
                pauVar9 = pauVar35 + -1;
              } while (*(double *)(*pauVar20 + 8) < *(double *)(pauVar29[-1] + 8) ||
                       *(double *)(*pauVar20 + 8) == *(double *)(pauVar29[-1] + 8));
              if (pauVar33 < pauVar19) goto LAB_143b2f35c;
              uVar43 = *(undefined8 *)*pauVar19;
              uVar6 = *(undefined8 *)(*pauVar19 + 8);
              uVar7 = *(undefined8 *)(pauVar29[-1] + 8);
              *(undefined8 *)*pauVar19 = *(undefined8 *)*pauVar33;
              *(undefined8 *)(*pauVar19 + 8) = uVar7;
              *(undefined8 *)*pauVar33 = uVar43;
              *(undefined8 *)(pauVar29[-1] + 8) = uVar6;
            } while( true );
          }
          for (; pauVar21 = pauVar20, pauVar23 = pauVar20, pauVar20 < pauVar28;
              pauVar28 = pauVar28 + -1) {
            while (pauVar33 = pauVar21, pauVar23 = pauVar23 + 1, pauVar23 <= pauVar28) {
              pauVar21 = pauVar23;
              if (*(double *)(*pauVar23 + 8) < *(double *)(*pauVar33 + 8) ||
                  *(double *)(*pauVar23 + 8) == *(double *)(*pauVar33 + 8)) {
                pauVar21 = pauVar33;
              }
            }
            auVar8 = *pauVar33;
            local_438[4] = *(undefined8 *)*pauVar33;
            uStack_410 = *(undefined8 *)(*pauVar33 + 8);
            uVar43 = *(undefined8 *)(*pauVar28 + 8);
            *(undefined8 *)*pauVar33 = *(undefined8 *)*pauVar28;
            *(undefined8 *)(*pauVar33 + 8) = uVar43;
            *pauVar28 = auVar8;
          }
          goto LAB_143b2f643;
        }
LAB_143b2f407:
        if (uVar34 != 0) {
          iVar30 = (iVar11 - (iVar11 + -1 >> 0x1f)) + -1 >> 1;
          iVar11 = iVar30;
joined_r0x000143b2f42e:
          do {
            iVar32 = iVar30 * 2 + 1;
            if (iVar32 < (int)uVar34) {
              iVar31 = iVar30 * 2 + 2;
              if ((iVar31 < (int)uVar34) &&
                 (*(double *)(pauVar20[iVar32] + 8) < *(double *)(pauVar20[iVar31] + 8) ||
                  *(double *)(pauVar20[iVar32] + 8) == *(double *)(pauVar20[iVar31] + 8))) {
                iVar32 = iVar31;
              }
              if (*(double *)(pauVar20[iVar30] + 8) <= *(double *)(pauVar20[iVar32] + 8) &&
                  *(double *)(pauVar20[iVar32] + 8) != *(double *)(pauVar20[iVar30] + 8)) {
                pauVar28 = pauVar20 + iVar30;
                pauVar23 = pauVar20 + iVar32;
                auVar8 = *pauVar28;
                local_438[4] = *(undefined8 *)*pauVar28;
                uStack_410 = *(undefined8 *)(*pauVar28 + 8);
                uVar43 = *(undefined8 *)(*pauVar23 + 8);
                *(undefined8 *)*pauVar28 = *(undefined8 *)*pauVar23;
                *(undefined8 *)(*pauVar28 + 8) = uVar43;
                *pauVar23 = auVar8;
                iVar30 = iVar32;
                goto joined_r0x000143b2f42e;
              }
            }
            bVar38 = iVar11 != 0;
            iVar30 = iVar11 + -1;
            iVar11 = iVar30;
          } while (bVar38);
          if (1 < (int)uVar34) {
            uVar15 = (ulonglong)uVar34 - 1;
            auVar8 = *pauVar20;
            local_438[4] = *(undefined8 *)*pauVar20;
            uStack_410 = *(undefined8 *)(*pauVar20 + 8);
            uVar43 = *(undefined8 *)(pauVar20[uVar15] + 8);
            *(undefined8 *)*pauVar20 = *(undefined8 *)pauVar20[uVar15];
            *(undefined8 *)(*pauVar20 + 8) = uVar43;
            pauVar20[uVar15] = auVar8;
            if (uVar34 != 2) {
              do {
                iVar30 = 0;
                iVar32 = 1;
                iVar11 = 0;
                do {
                  iVar30 = iVar30 + 2;
                  iVar31 = iVar32;
                  if (((longlong)iVar30 < (longlong)uVar15) &&
                     (*(double *)(pauVar20[iVar32] + 8) < *(double *)(pauVar20[iVar30] + 8) ||
                      *(double *)(pauVar20[iVar32] + 8) == *(double *)(pauVar20[iVar30] + 8))) {
                    iVar31 = iVar30;
                  }
                  if (*(double *)(pauVar20[iVar31] + 8) < *(double *)(pauVar20[iVar11] + 8) ||
                      *(double *)(pauVar20[iVar31] + 8) == *(double *)(pauVar20[iVar11] + 8)) break;
                  pauVar28 = pauVar20 + iVar11;
                  pauVar23 = pauVar20 + iVar31;
                  uVar43 = *(undefined8 *)*pauVar28;
                  uVar6 = *(undefined8 *)(*pauVar28 + 8);
                  uVar7 = *(undefined8 *)(*pauVar23 + 8);
                  *(undefined8 *)*pauVar28 = *(undefined8 *)*pauVar23;
                  *(undefined8 *)(*pauVar28 + 8) = uVar7;
                  *(undefined8 *)*pauVar23 = uVar43;
                  *(undefined8 *)(*pauVar23 + 8) = uVar6;
                  iVar30 = iVar31 * 2;
                  iVar32 = iVar31 * 2 + 1;
                  iVar11 = iVar31;
                } while ((longlong)iVar32 < (longlong)uVar15);
                uVar26 = uVar15 - 1;
                auVar8 = *pauVar20;
                local_438[4] = *(undefined8 *)*pauVar20;
                uStack_410 = *(undefined8 *)(*pauVar20 + 8);
                uVar43 = *(undefined8 *)(pauVar20[uVar26] + 8);
                *(undefined8 *)*pauVar20 = *(undefined8 *)pauVar20[uVar26];
                *(undefined8 *)(*pauVar20 + 8) = uVar43;
                pauVar20[uVar26] = auVar8;
                bVar38 = 2 < uVar15;
                uVar15 = uVar26;
              } while (bVar38);
            }
          }
        }
LAB_143b2f643:
        plVar17 = plVar17 + -3;
      } while (&local_3f8 <= plVar17);
    }
    if (0 < (int)uStack_480) {
      lVar37 = 0;
      do {
        local_534 = *(uint *)(local_488 + lVar37 * 0x10);
        lVar16 = *(longlong *)(param_1[0x38] + (ulonglong)(local_534 >> 9) * 8);
        uVar26 = (ulonglong)((local_534 & 0x1ff) << 4);
        uVar15 = *(ulonglong *)(lVar16 + uVar26);
        uVar26 = *(ulonglong *)(lVar16 + 8 + uVar26);
        uVar12 = uVar15 >> 0x20;
        uVar34 = (uint)(uVar15 >> 0x20);
        local_538 = (int)uVar26;
        local_530 = uVar26 >> 0x20;
        lVar16 = *(longlong *)(param_1[0x26] + (uVar26 >> 9 & 0x7fffff) * 8);
        local_490 = *(undefined4 *)(lVar16 + 8 + (uVar26 & 0x1ff) * 0xc);
        local_498 = *(undefined8 *)(lVar16 + (uVar26 & 0x1ff) * 0xc);
        lVar16 = *(longlong *)(param_1[0x26] + (uVar26 >> 0x29) * 8);
        local_4a0 = *(undefined4 *)(lVar16 + 8 + (local_530 & 0x1ff) * 0xc);
        local_4a8 = *(undefined8 *)(lVar16 + (local_530 & 0x1ff) * 0xc);
        lVar16 = 0;
        do {
          lVar27 = lVar16 + 1;
          lVar24 = 0;
          if (lVar16 != 2) {
            lVar24 = lVar27;
          }
          uVar10 = *(uint *)((longlong)&local_498 + lVar24 * 4);
          uVar22 = *(uint *)((longlong)&local_498 + lVar16 * 4);
          uVar14 = (uint)uVar15;
          uVar13 = uVar12;
          if (((uVar22 == uVar14) ||
              (bVar38 = uVar10 == uVar14, uVar13 = uVar15, uVar14 = uVar34, uVar10 = uVar22, bVar38)
              ) && (uVar10 == uVar34)) {
            uVar12 = uVar13 & 0xffffffff;
            uVar15 = (ulonglong)uVar14;
            uVar13 = (ulonglong)((int)lVar16 - 1);
            if (lVar16 == 0) {
              uVar13 = 2;
            }
            uVar34 = *(uint *)((longlong)&local_498 + uVar13 * 4);
            goto LAB_143b2f795;
          }
          lVar16 = lVar27;
        } while (lVar27 != 3);
        uVar34 = 0xffffffff;
LAB_143b2f795:
        lVar16 = 0;
        do {
          lVar27 = lVar16 + 1;
          lVar24 = 0;
          if (lVar16 != 2) {
            lVar24 = lVar27;
          }
          uVar10 = *(uint *)((longlong)&local_4a8 + lVar24 * 4);
          uVar22 = *(uint *)((longlong)&local_4a8 + lVar16 * 4);
          uVar14 = (uint)uVar15;
          if (((uVar22 == uVar14) || (bVar38 = uVar10 == uVar14, uVar10 = uVar22, bVar38)) &&
             (uVar10 == (uint)uVar12)) {
            uVar13 = (ulonglong)((int)lVar16 - 1);
            if (lVar16 == 0) {
              uVar13 = 2;
            }
            uVar22 = *(uint *)((longlong)&local_4a8 + uVar13 * 4);
            goto LAB_143b2f807;
          }
          lVar16 = lVar27;
        } while (lVar27 != 3);
        uVar22 = 0xffffffff;
LAB_143b2f807:
        lVar24 = (longlong)local_538;
        dVar44 = *(double *)(local_438[2] + lVar24 * 8);
        lVar27 = (longlong)uVar26 >> 0x20;
        dVar40 = *(double *)(local_438[2] + lVar27 * 8);
        lVar16 = lVar27;
        if (dVar40 < dVar44) {
          lVar16 = lVar24;
        }
        dVar2 = *(double *)(local_438[0] + lVar16 * 0x18);
        dVar3 = *(double *)(local_438[0] + 8 + lVar16 * 0x18);
        dVar4 = *(double *)(local_438[0] + 0x10 + lVar16 * 0x18);
        lVar16 = param_1[2];
        lVar5 = *(longlong *)(lVar16 + (uVar15 >> 9 & 0x7fffff) * 8);
        local_408 = *(undefined8 *)(lVar5 + 0x10 + (ulonglong)(uVar14 & 0x1ff) * 0x18);
        puVar1 = (undefined8 *)(lVar5 + (ulonglong)(uVar14 & 0x1ff) * 0x18);
        local_438[4] = *puVar1;
        uStack_410 = puVar1[1];
        lVar5 = *(longlong *)(lVar16 + (uVar12 >> 9) * 8);
        uVar15 = (ulonglong)((uint)uVar12 & 0x1ff);
        local_448 = *(undefined8 *)(lVar5 + 0x10 + uVar15 * 0x18);
        puVar1 = (undefined8 *)(lVar5 + uVar15 * 0x18);
        local_458 = *puVar1;
        uStack_450 = puVar1[1];
        lVar5 = *(longlong *)(lVar16 + (ulonglong)(uVar34 >> 9) * 8);
        local_468 = *(undefined8 *)(lVar5 + 0x10 + (ulonglong)(uVar34 & 0x1ff) * 0x18);
        puVar1 = (undefined8 *)(lVar5 + (ulonglong)(uVar34 & 0x1ff) * 0x18);
        local_478 = *puVar1;
        uStack_470 = puVar1[1];
        lVar16 = *(longlong *)(lVar16 + (ulonglong)(uVar22 >> 9) * 8);
        local_4b8 = *(undefined8 *)(lVar16 + 0x10 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
        puVar1 = (undefined8 *)(lVar16 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
        local_4c8 = *puVar1;
        uStack_4c0 = puVar1[1];
        dVar41 = (double)FUN_14831c0ee(&local_478,&local_4c8,&local_458);
        dVar42 = (double)FUN_14831c0ee(&local_4c8,&local_478,local_438 + 4);
        FUN_146baf581(&local_4e0,&local_478,&local_4c8,&local_458);
        FUN_146baf581(&local_4f8,&local_4c8,&local_478,local_438 + 4);
        uVar34 = local_534;
        if ((0.99 <= local_4d0 * dVar4 + local_4e0 * dVar2 + local_4d8 * dVar3) &&
           (0.99 <= local_4e8 * dVar4 + local_4f8 * dVar2 + local_4f0 * dVar3)) {
          dVar45 = 1.0;
          if (1.0 / dVar41 <= 1.0) {
            dVar45 = 1.0 / dVar41;
          }
          dVar45 = (double)(-(ulonglong)(1.0 < dVar41) & (ulonglong)dVar45 |
                           ~-(ulonglong)(1.0 < dVar41) & (ulonglong)dVar41);
          dVar41 = 1.0;
          if (1.0 / dVar42 <= 1.0) {
            dVar41 = 1.0 / dVar42;
          }
          dVar41 = (double)(-(ulonglong)(1.0 < dVar42) & (ulonglong)dVar41 |
                           ~-(ulonglong)(1.0 < dVar42) & (ulonglong)dVar42);
          uVar15 = -(ulonglong)(dVar45 <= dVar41);
          if ((double)(~-(ulonglong)(dVar44 <= dVar40) & (ulonglong)dVar40 |
                      (ulonglong)dVar44 & -(ulonglong)(dVar44 <= dVar40)) <
              (double)(~uVar15 & (ulonglong)dVar41 | uVar15 & (ulonglong)dVar45)) {
            local_3f8 = CONCAT44(0xffffffff,(undefined4)local_3f8);
            lStack_3f0 = -1;
            local_3e8 = 0xffffffff;
            uStack_3e4 = 0xffffffff;
            uStack_3e0 = 0xffffffff;
            iVar11 = (**(code **)(*param_1 + 0x40))(param_1,local_534,&local_3f8);
            iVar30 = local_538;
            if (iVar11 == 0) {
              uVar43 = FUN_1483f6092(param_1,local_538);
              uVar15 = local_530;
              *(undefined8 *)(local_438[2] + lVar24 * 8) = uVar43;
              uVar43 = FUN_1483f6092(param_1,local_530 & 0xffffffff);
              *(undefined8 *)(local_438[2] + lVar27 * 8) = uVar43;
              FUN_146c13dec(param_1,&local_510,iVar30);
              if ((local_500 * dVar4 + local_510 * dVar2 + local_508 * dVar3 < 0.99) ||
                 (FUN_146c13dec(param_1,&local_528,uVar15 & 0xffffffff),
                 dVar4 * local_518 + dVar2 * local_528 + dVar3 * local_520 < 0.99)) {
                (**(code **)(*param_1 + 0x40))(param_1,uVar34,&local_3f8);
                uVar43 = FUN_1483f6092(param_1,local_538);
                *(undefined8 *)(local_438[2] + lVar24 * 8) = uVar43;
                uVar43 = FUN_1483f6092(param_1,local_530);
                *(undefined8 *)(local_438[2] + lVar27 * 8) = uVar43;
              }
            }
          }
        }
        lVar37 = lVar37 + 1;
      } while (lVar37 < (int)uStack_480);
    }
  }
  if (local_488 != 0) {
    FUN_1400020a8();
  }
  if (local_438[0] != 0) {
    FUN_1400020a8();
  }
  if (local_438[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_558) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143b2f35c:
  auVar8 = *pauVar20;
  local_438[4] = *(undefined8 *)*pauVar20;
  uStack_410 = *(undefined8 *)(*pauVar20 + 8);
  uVar43 = *(undefined8 *)(pauVar29[-1] + 8);
  *(undefined8 *)*pauVar20 = *(undefined8 *)*pauVar33;
  *(undefined8 *)(*pauVar20 + 8) = uVar43;
  *pauVar33 = auVar8;
  iVar30 = iVar30 + -1;
  pauVar29 = pauVar29 + -2;
  if ((longlong)pauVar35 - (longlong)pauVar21 < (longlong)pauVar23 - (longlong)pauVar36) {
    if (pauVar19 < pauVar28) {
      *plVar17 = (longlong)pauVar19;
      plVar17[1] = (longlong)pauVar28;
      *(int *)(plVar17 + 2) = iVar30;
      plVar17 = plVar17 + 3;
    }
    pauVar36 = pauVar20;
    pauVar23 = pauVar35;
    if (pauVar33 <= pauVar20 + 1) goto LAB_143b2f643;
  }
  else {
    if (pauVar20 + 1 < pauVar33) {
      *plVar17 = (longlong)pauVar20;
      plVar17[1] = (longlong)pauVar29;
      *(int *)(plVar17 + 2) = iVar30;
      plVar17 = plVar17 + 3;
    }
    pauVar20 = pauVar19;
    pauVar29 = pauVar28;
    pauVar23 = pauVar28;
    if (pauVar28 <= pauVar19) goto LAB_143b2f643;
  }
  iVar11 = (int)((ulonglong)((longlong)pauVar23 - (longlong)pauVar36) >> 4);
  uVar34 = iVar11 + 1;
  pauVar21 = pauVar36;
  pauVar28 = pauVar29;
  if (iVar30 == 0) goto LAB_143b2f407;
  goto LAB_143b2f2a5;
}



// FUNCTION 143b2fc70 FUN_143b2fc70 body=3335 status=ok
// SIG undefined FUN_143b2fc70(void)

void FUN_143b2fc70(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  double *pdVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  code *pcVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined4 **ppuVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined **ppuVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  undefined4 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  double dVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 auStack_cf8 [32];
  undefined1 local_cd8;
  longlong local_cd0;
  longlong local_cc8;
  undefined8 uStack_cc0;
  double local_cb8;
  double local_cb0;
  double dStack_ca8;
  double local_ca0;
  double local_c98;
  longlong local_c88 [5];
  undefined8 uStack_c60;
  double local_c58;
  undefined8 uStack_c50;
  undefined8 local_c48;
  double local_c40;
  double local_c38;
  double local_c30;
  double local_c28;
  undefined8 local_c20;
  undefined8 uStack_c18;
  undefined8 local_c10;
  undefined8 local_c08;
  undefined8 *local_c00;
  longlong local_bf8;
  undefined8 uStack_bf0;
  undefined4 *local_be8;
  undefined8 uStack_be0;
  undefined4 *local_bd8;
  undefined8 uStack_bd0;
  double local_bc0;
  double local_bb8;
  double local_bb0;
  double local_ba8;
  double dStack_ba0;
  double local_b98;
  undefined1 local_b88 [16];
  double local_b78;
  double local_b60;
  undefined8 local_b58;
  undefined8 uStack_b50;
  double local_b48;
  undefined **local_b38;
  undefined8 local_b30;
  longlong local_b28;
  undefined4 uStack_b20;
  undefined4 uStack_b1c;
  longlong *local_b18;
  undefined1 local_b10 [16];
  double local_b00;
  undefined8 local_af8;
  undefined8 local_ae8;
  undefined2 local_ab8;
  undefined4 local_ab4;
  undefined8 local_ab0;
  undefined8 local_aa8;
  undefined8 local_aa0;
  undefined8 local_a98;
  undefined2 local_a90;
  undefined1 local_a8e;
  undefined4 local_a8c;
  undefined1 local_a88;
  undefined4 local_a84;
  undefined8 local_a80;
  undefined8 uStack_a78;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined8 local_a60;
  undefined8 uStack_a58;
  undefined8 local_a50;
  undefined8 uStack_a48;
  undefined8 local_a40;
  undefined8 uStack_a38;
  undefined8 local_a20;
  undefined4 local_a18;
  undefined8 local_a14;
  undefined4 local_a0c;
  undefined8 local_a00;
  undefined4 local_9f8;
  undefined8 local_9e8;
  uint uStack_9e0;
  int iStack_9dc;
  code *local_9d8;
  undefined **local_9c8;
  longlong local_9c0;
  undefined *local_9b8 [34];
  int local_8a8;
  int local_8a4;
  undefined8 *local_8a0;
  undefined **local_7c8;
  double local_7c0;
  double dStack_7b8;
  byte local_7b0;
  undefined1 uStack_7af;
  undefined6 uStack_7ae;
  undefined4 local_7a8;
  undefined4 uStack_7a4;
  undefined ***local_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined1 local_748;
  undefined8 local_738 [12];
  undefined8 local_6d8;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  longlong *local_6b8;
  longlong local_6a8;
  double local_6a0;
  undefined **local_688;
  undefined8 local_e8 [2];
  undefined8 local_d8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_cf8;
  FUN_145c688c4(param_1,local_c88 + 4,0);
  dVar8 = local_c40;
  dVar29 = local_c58;
  local_c88[2] = 0;
  local_c88[3] = 0;
  local_c88[0] = 0;
  local_c88[1] = 0;
  local_6c8 = (double)((ulonglong)local_6c8._4_4_ << 0x20);
  FUN_1448156a8(local_c88 + 2,&local_6c8,0x40);
  local_6c8 = 1.79769313486232e+308;
  uStack_6c0 = -1.79769313486232e+308;
  FUN_1483f9e4a(local_c88,&local_6c8);
  local_9d8 = (code *)0x0;
  local_9c8 = &PTR_DAT_149f363e0;
  local_9e8 = &DAT_146be727e;
  local_9c0 = param_1;
  FUN_146be708e(param_1 + 0x20,&local_6c8);
  FUN_146be6fec(&local_6c8,&local_9e8);
  iVar14 = *(int *)local_688 * 0x200 + *(int *)((longlong)local_688 + 4);
  local_b18 = (longlong *)0x0;
  local_b28 = 0;
  local_b38 = local_688;
  local_b30 = (undefined8 *)CONCAT44(iVar14,iVar14);
  FUN_146be715a(&local_b28,&local_6c8);
  if (uStack_9e0 != (uint)local_b30) {
    do {
      pcVar9 = local_9d8;
      local_e8[0] = CONCAT44(local_e8[0]._4_4_,uStack_9e0);
      ppuVar18 = local_9c8;
      if (local_9c8 == (undefined **)0x0) {
        ppuVar18 = local_9b8;
      }
      uVar12 = (**(code **)(*ppuVar18 + 8))();
      (*pcVar9)(&local_7c8,uVar12,local_e8);
      dVar5 = ((dStack_7b8 - dVar29) / (dVar8 - dVar29)) * 64.0;
      dVar6 = (double)(int)dVar5;
      dVar7 = 63.0;
      if (dVar6 <= 63.0) {
        dVar7 = dVar6;
      }
      iVar14 = (int)dVar7;
      if ((int)dVar5 < 0) {
        iVar14 = 0;
      }
      piVar1 = (int *)(local_c88[2] + (longlong)iVar14 * 4);
      *piVar1 = *piVar1 + 1;
      lVar16 = (longlong)iVar14 * 0x10;
      pdVar2 = (double *)(local_c88[0] + lVar16);
      if (dStack_7b8 < *(double *)(local_c88[0] + lVar16)) {
        *pdVar2 = dStack_7b8;
      }
      if (pdVar2[1] <= dStack_7b8 && dStack_7b8 != pdVar2[1]) {
        pdVar2[1] = dStack_7b8;
      }
      do {
        uStack_9e0 = uStack_9e0 + 1;
        if (iStack_9dc <= (int)uStack_9e0) break;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(local_9e8 + 8) +
                                             (ulonglong)(uStack_9e0 >> 9) * 8) +
                                           (ulonglong)(uStack_9e0 & 0x1ff) * 2) - 1U));
    } while ((uint)local_b30 != uStack_9e0);
  }
  if (local_b28 != 0) {
    plVar17 = local_b18;
    if (local_b18 == (longlong *)0x0) {
      plVar17 = (longlong *)(local_b10 + 8);
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  if (local_9d8 != (code *)0x0) {
    ppuVar18 = local_9c8;
    if (local_9c8 == (undefined **)0x0) {
      ppuVar18 = local_9b8;
    }
    (**(code **)(*ppuVar18 + 0x10))();
  }
  if (local_6c8 != 0.0) {
    if (local_6b8 == (longlong *)0x0) {
      local_6b8 = &local_6a8;
    }
    (**(code **)(*local_6b8 + 0x10))();
  }
  iVar14 = 1;
  lVar16 = 2;
  do {
    iVar11 = (int)lVar16;
    if (*(int *)(local_c88[2] + lVar16 * 4) <= *(int *)(local_c88[2] + (longlong)iVar14 * 4)) {
      iVar11 = iVar14;
    }
    iVar14 = iVar11;
    lVar16 = lVar16 + 1;
  } while (lVar16 != 0x3f);
  local_cb8 = *(double *)(local_c88[0] + 8 + (longlong)iVar14 * 0x10);
  if ((iVar14 == 1) && (*(int *)(local_c88[2] + 4) == 0)) {
    local_cb8 = (local_c58 + local_c40) * 0.5;
  }
  param_2[4] = local_c48;
  param_2[2] = local_c58;
  param_2[3] = uStack_c50;
  *param_2 = local_c88[4];
  param_2[1] = uStack_c60;
  param_2[5] = local_cb8;
  local_9d8 = (code *)DAT_14c8463c8;
  local_9e8 = (undefined *)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
  uStack_9e0 = (undefined4)DAT_14c8463c0;
  iStack_9dc = DAT_14c8463c0._4_4_;
  local_cb8 = local_cb8 + 9.999999747378752e-05;
  local_cb0 = 0.0;
  dStack_ca8 = 0.0;
  local_ca0 = 0.0;
  local_c98 = 1.0;
  local_cc8 = 0;
  uStack_cc0 = 0;
  local_6b8 = (longlong *)DAT_14c8463c8;
  local_6c8 = (double)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
  uStack_6c0 = (double)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
  FUN_146bfb7f2(&local_cb0,&local_6c8,&local_9e8);
  FUN_146bff712(&local_9e8,param_1);
  dVar29 = (local_ca0 + local_ca0) * dStack_ca8 - (local_cb0 + local_cb0) * local_c98;
  local_b00 = -(1.0 - ((dStack_ca8 + dStack_ca8) * dStack_ca8 + local_cb0 * (local_cb0 + local_cb0))
               );
  local_b28 = local_cc8;
  uStack_b20 = (undefined4)uStack_cc0;
  uStack_b1c = uStack_cc0._4_4_;
  local_b18 = (longlong *)local_cb8;
  local_b38 = &PTR_FUN_14ae97770;
  local_b10._8_4_ = SUB84(dVar29,0);
  local_b10._0_8_ = -(local_cb0 * (local_ca0 + local_ca0) + local_c98 * (dStack_ca8 + dStack_ca8));
  local_b10._12_4_ = (uint)((ulonglong)dVar29 >> 0x20) ^ 0x80000000;
  local_af8 = 0;
  local_ae8 = 0;
  local_ab8 = 0x100;
  local_ab4 = 0x3f800000;
  local_ab0 = 0x3e45798ee2308c3a;
  local_aa8 = 0x3ee4f8b588000000;
  local_aa0 = 0x3fb999999999999a;
  local_a98 = 0x3fd0000000000000;
  local_a90 = 0x101;
  local_a8e = 1;
  local_a8c = 0x358637bd;
  local_a88 = 1;
  local_a84 = 0x3c23d70a;
  local_a20 = 0;
  local_a18 = 0;
  local_a40 = 0;
  uStack_a38 = 0;
  local_a50 = 0;
  uStack_a48 = 0;
  local_a60 = 0;
  uStack_a58 = 0;
  local_a70 = 0;
  uStack_a68 = 0;
  local_a80 = 0;
  uStack_a78 = 0;
  local_a14 = 0xffffffff00000080;
  local_a0c = 0;
  local_a00 = 0;
  local_9f8 = 0;
  local_b30 = &local_9e8;
  FUN_148313ca8();
  FUN_145c688c4(&local_9e8,local_b88,0);
  dVar5 = DAT_14c8463c8;
  local_b98 = DAT_14c8463c8;
  dVar29 = (double)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
  dVar8 = (double)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
  local_b60 = local_b60 - local_b78;
  local_bb0 = -DAT_14c8463c8 * local_b60;
  local_bb8 = -dVar8 * local_b60;
  local_bc0 = local_b60 * -dVar29;
  local_bd8 = (undefined4 *)0x0;
  uStack_bd0 = 0;
  local_be8 = (undefined4 *)0x0;
  uStack_be0 = 0;
  uVar22 = local_8a8 * 0x200 + local_8a4;
  uVar27 = 0;
  if ((uVar22 != 0) && (0xfffd < (ushort)(*(short *)*local_8a0 - 1U))) {
    uVar10 = 1;
    uVar26 = 1;
    if (1 < (int)uVar22) {
      uVar26 = uVar22;
    }
    do {
      uVar15 = uVar10;
      uVar27 = uVar26;
      if (uVar26 == uVar15) break;
      uVar10 = uVar15 + 1;
      uVar27 = uVar15;
    } while (0xfffd < (ushort)(*(short *)(local_8a0[uVar15 >> 9] + (ulonglong)(uVar15 & 0x1ff) * 2)
                              - 1U));
  }
  local_ba8 = dVar29;
  dStack_ba0 = dVar8;
  if (uVar27 != uVar22) {
    do {
      FUN_146c13dec(&local_9e8,&local_6c8,uVar27);
      uVar28 = uStack_bd0;
      uVar21 = uStack_be0;
      dVar6 = (double)local_6b8 * dVar5 + local_6c8 * dVar29 + uStack_6c0 * dVar8;
      if (dVar6 <= 0.95) {
        uVar28 = -(ulonglong)(-dVar6 <= dVar6);
        if (0.95 < (double)(~uVar28 & (ulonglong)-dVar6 | (ulonglong)dVar6 & uVar28)) {
          iVar14 = (int)uStack_be0;
          uVar10 = (int)uStack_be0 + 1;
          uStack_be0 = CONCAT44(uStack_be0._4_4_,uVar10);
          ppuVar13 = &local_be8;
          if (uStack_be0._4_4_ < uVar10) {
            FUN_1446f48e2(&local_be8,uVar21 & 0xffffffff);
          }
          goto LAB_143b3043e;
        }
      }
      else {
        iVar14 = (int)uStack_bd0;
        uVar10 = (int)uStack_bd0 + 1;
        uStack_bd0 = CONCAT44(uStack_bd0._4_4_,uVar10);
        ppuVar13 = &local_bd8;
        if (uStack_bd0._4_4_ < uVar10) {
          FUN_1446f48e2(&local_bd8,uVar28 & 0xffffffff);
        }
LAB_143b3043e:
        (*ppuVar13)[iVar14] = uVar27;
      }
      uVar10 = uVar27 + 1;
      if ((int)(uVar27 + 1) < (int)uVar22) {
        uVar10 = uVar22;
      }
      do {
        uVar26 = uVar10;
        if (uVar10 - 1 == uVar27) break;
        uVar27 = uVar27 + 1;
        uVar26 = uVar27;
      } while (0xfffd < (ushort)(*(short *)(local_8a0[uVar27 >> 9] + (ulonglong)(uVar27 & 0x1ff) * 2
                                           ) - 1U));
      uVar27 = uVar26;
    } while (uVar27 != uVar22);
    if ((longlong)(int)uStack_be0 != 0) {
      puVar3 = local_be8 + (int)uStack_be0;
      puVar23 = local_be8;
      do {
        uVar4 = *puVar23;
        FUN_146c03f0e(&local_9e8,&local_7c8,uVar4);
        lVar16 = 0;
        uVar30 = 0xffffffff;
        uVar31 = 0xffefffff;
        uVar32 = 0xffffffff;
        uVar33 = 0x7fefffff;
        do {
          if ((longlong)(int)uStack_bd0 != 0) {
            lVar20 = 0;
            do {
              if (*(int *)((longlong)local_bd8 + lVar20) ==
                  *(int *)((longlong)&local_7c8 + lVar16 * 4)) {
                FUN_146c14aac(&local_9e8);
                if ((double)local_6b8 <= (double)CONCAT44(uVar33,uVar32)) {
                  uVar32 = SUB84(local_6b8,0);
                  uVar33 = (undefined4)((ulonglong)local_6b8 >> 0x20);
                }
                if ((double)CONCAT44(uVar31,uVar30) <= local_6a0) {
                  uVar30 = SUB84(local_6a0,0);
                  uVar31 = (undefined4)((ulonglong)local_6a0 >> 0x20);
                }
                break;
              }
              lVar20 = lVar20 + 4;
            } while ((longlong)(int)uStack_bd0 * 4 != lVar20);
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 != 3);
        FUN_146c149e0(&local_9e8,&local_6c8,uVar4);
        uVar21 = uStack_bd0;
        if (((double)CONCAT44(uVar33,uVar32) <= (double)local_6b8) &&
           ((double)local_6b8 <= (double)CONCAT44(uVar31,uVar30))) {
          lVar16 = (longlong)(int)uStack_bd0;
          uVar27 = (int)uStack_bd0 + 1;
          uStack_bd0 = CONCAT44(uStack_bd0._4_4_,uVar27);
          if (uStack_bd0._4_4_ < uVar27) {
            FUN_1446f48e2(&local_bd8,uVar21 & 0xffffffff);
          }
          local_bd8[lVar16] = uVar4;
        }
        puVar23 = puVar23 + 1;
      } while (puVar23 != puVar3);
    }
  }
  local_c00 = &local_9e8;
  local_bf8 = 0;
  uStack_bf0 = 0;
  local_e8[0] = 0;
  local_d8 = 0;
  FUN_142984384(&local_c00,&local_bd8);
  if (0 < (int)uStack_bf0) {
    lVar16 = 0;
    do {
      local_cd8 = 1;
      local_cd0 = lVar16;
      FUN_1482e14f4(&local_6c8,&local_9e8,*(undefined8 *)(local_bf8 + lVar16 * 8),0xf);
      FUN_145c688c4(&uStack_6c0,&local_7c8,0);
      local_c28 = (dStack_7b8 + (double)local_7a0) * 0.5;
      local_c30 = (local_7c0 + (double)CONCAT44(uStack_7a4,local_7a8)) * 0.5;
      local_c38 = ((double)local_7c8 + (double)CONCAT62(uStack_7ae,CONCAT11(uStack_7af,local_7b0)))
                  * 0.5;
      local_c20 = 0;
      uStack_c18 = 0;
      local_c10 = 0;
      local_c08 = 0x3ff0000000000000;
      local_b48 = DAT_14c8463c8;
      local_b58 = CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
      uStack_b50 = CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
      FUN_146bfb7f2(&local_c20,&local_b58,&local_ba8);
      local_b58 = 0;
      uStack_b50 = 0;
      FUN_1483f916a(&uStack_6c0,&local_c38,&local_b58);
      if ((longlong)(int)uStack_b50 == 0) {
        uVar21 = 0;
      }
      else {
        lVar20 = (longlong)(int)uStack_b50 << 4;
        lVar16 = local_b58;
        do {
          local_7c0 = 0.0;
          dStack_7b8 = 6.36598737289582e-314;
          local_7b0 = local_7b0 | 1;
          uStack_7af = 3;
          local_7a8 = 6;
          local_7c8 = &PTR_FUN_14aa0f410;
          local_758 = 0;
          uStack_750 = 0;
          local_768 = 0;
          uStack_760 = 0;
          local_778 = 0;
          uStack_770 = 0;
          local_788 = 0;
          uStack_780 = 0;
          local_798 = 0;
          uStack_790 = 0;
          local_748 = 0;
          puVar24 = &DAT_14c846480;
          puVar25 = local_738;
          for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
            *puVar25 = *puVar24;
            puVar24 = puVar24 + 1;
            puVar25 = puVar25 + 1;
          }
          local_6d8 = 0;
          local_7a0 = &local_7c8;
          FUN_1483f9046(lVar16,&local_c38,&local_bc0,&local_7c8);
          iVar14 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar14 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar14 + 1U) {
            FUN_1474ba6a4(param_3,iVar14);
          }
          FUN_147c4992e((longlong)iVar14 * 0x100 + *param_3,&local_7c8);
          FUN_1400d7e72(&local_7c8);
          lVar16 = lVar16 + 0x10;
          lVar20 = lVar20 + -0x10;
        } while (lVar20 != 0);
        uVar21 = uStack_b50 & 0xffffffff;
      }
      FUN_148273b89(local_b58,uVar21);
      if (local_b58 != 0) {
        FUN_1400020a8();
      }
      FUN_1482e1868(&local_6c8);
      lVar16 = local_cd0 + 1;
    } while (lVar16 < (int)uStack_bf0);
  }
  FUN_146be9400(&local_bf8);
  if (local_be8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_bd8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1483f9eac(&local_b38);
  FUN_141082778(&local_9e8);
  if (local_c88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c88[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_cf8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b30978 FUN_143b30978 body=55 status=ok
// SIG undefined FUN_143b30978(void)

void FUN_143b30978(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb473e0 == 0) {
    uVar1 = FUN_140f8264f();
    DAT_14cb473e0 = FUN_14171c317(FUN_146487ee4,uVar1,L"EWaterBrushFalloffMode");
  }
  return;
}



// FUNCTION 143b309af FUN_143b309af body=69 status=ok
// SIG undefined FUN_143b309af(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b309af(void)

{
  _DAT_14cb47408 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b309f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb47410,1);
  return;
}



// FUNCTION 143b30a0c FUN_143b30a0c body=6943 status=ok
// SIG undefined FUN_143b30a0c(void)

void FUN_143b30a0c(double param_1,longlong *param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  int *piVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 *puVar18;
  uint *puVar19;
  undefined8 uVar20;
  undefined1 (*pauVar21) [16];
  uint uVar22;
  undefined8 *puVar23;
  int iVar24;
  longlong lVar25;
  longlong *plVar26;
  double *pdVar27;
  double *pdVar28;
  undefined8 *puVar29;
  bool bVar30;
  ulonglong uVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auStack_518 [32];
  undefined1 **local_4f8;
  double local_4e8;
  longlong *local_4e0;
  float local_4d4;
  double local_4d0;
  double local_4c8;
  double local_4c0;
  undefined1 local_4b8 [16];
  undefined1 local_4a8 [16];
  undefined1 local_498 [16];
  undefined1 local_488 [24];
  undefined1 local_470 [24];
  undefined1 local_458 [16];
  double local_448;
  double dStack_440;
  undefined8 local_438;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  longlong local_428;
  undefined4 uStack_420;
  uint uStack_41c;
  undefined4 uStack_418;
  int iStack_414;
  undefined4 local_410;
  longlong local_408;
  int local_400;
  double local_3f8 [2];
  undefined8 local_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  longlong local_3d8;
  undefined4 uStack_3d0;
  uint uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 local_3c0;
  longlong local_3b8;
  int local_3b0;
  double local_3a8 [2];
  undefined8 local_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  longlong local_388;
  undefined4 uStack_380;
  uint uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_370;
  longlong local_368;
  int local_360;
  double local_358 [4];
  longlong local_338;
  longlong local_330;
  undefined8 local_328;
  undefined8 local_320;
  double local_318;
  undefined8 local_310;
  undefined4 local_308;
  float local_304;
  undefined4 local_300;
  double local_2f8;
  undefined8 local_2f0;
  double local_2e8;
  undefined8 local_2e0;
  longlong *local_2d8;
  double local_2d0;
  longlong local_2c8;
  undefined8 local_2c0;
  double local_2b8 [4];
  double local_298;
  double local_290;
  double local_288;
  double local_278;
  double local_270;
  double local_268;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined1 local_238 [16];
  double local_228;
  double local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  double dStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  double local_190;
  ulonglong uStack_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  longlong local_170;
  undefined4 local_168;
  uint uStack_164;
  undefined4 uStack_160;
  int iStack_15c;
  undefined4 local_158;
  longlong local_150;
  int local_148;
  undefined1 *local_138 [2];
  longlong *local_128;
  longlong local_118 [5];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_518;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb47678) && (FUN_144b3d300(&DAT_14cb47678), DAT_14cb47678 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cb47670 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))
                   (DAT_14c8407a8,L"r.Water.WaterInfo.RenderCaptureNextWaterInfoDraws",1);
    _Init_thread_footer(&DAT_14cb47678);
  }
  if (DAT_14cb47670 == (longlong *)0x0) {
    FUN_143203394(local_488,0,L"RenderWaterInfo",0);
  }
  else {
    piVar11 = (int *)(**(code **)(*DAT_14cb47670 + 0x68))();
    iVar8 = *piVar11;
    FUN_143203394(local_488,iVar8 != 0,L"RenderWaterInfo",0);
    if (iVar8 != 0) {
      iVar24 = 1;
      if (1 < iVar8) {
        iVar24 = iVar8;
      }
      FUN_140635eb8(DAT_14cb47670,iVar24 + -1,0xd000000,0);
    }
  }
  plVar26 = (longlong *)param_2[1];
  if (((plVar26 == (longlong *)0x0) || (param_1 == 0.0)) ||
     ((*(uint *)(plVar26 + 1) & 0x40000000) != 0)) goto LAB_143b31e52;
  lVar12 = *param_2;
  if (*(char *)(lVar12 + 0x404) == '\x01') {
    lVar25 = *(longlong *)(lVar12 + 0x1c8);
    if (lVar25 == 0) {
      local_4e8 = 1.0;
      uVar32 = 0;
      uVar35 = 0x3ff00000;
      uVar36 = 0;
      uVar37 = 0x3ff00000;
    }
    else {
      uVar32 = *(undefined4 *)(lVar25 + 0x280);
      uVar35 = *(undefined4 *)(lVar25 + 0x284);
      uVar36 = *(undefined4 *)(lVar25 + 0x288);
      uVar37 = *(undefined4 *)(lVar25 + 0x28c);
      local_4e8 = *(double *)(lVar25 + 0x290);
    }
    local_4e8 = local_4e8 * *(double *)(lVar12 + 0x418);
    dVar5 = (double)CONCAT44(uVar37,uVar36) * *(double *)(lVar12 + 0x410);
    dVar38 = (double)CONCAT44(uVar35,uVar32) * *(double *)(lVar12 + 0x408);
    pauVar21 = (undefined1 (*) [16])(lVar12 + 0x440);
    uVar32 = uVar36;
    uVar35 = uVar37;
  }
  else {
    lVar25 = *(longlong *)(lVar12 + 0x1c8);
    if (lVar25 == 0) {
      uVar32 = 0;
      uVar35 = 0x3ff00000;
      uVar36 = 0;
      uVar37 = 0x3ff00000;
    }
    else {
      uVar32 = *(undefined4 *)(lVar25 + 0x280);
      uVar35 = *(undefined4 *)(lVar25 + 0x284);
      uVar36 = *(undefined4 *)(lVar25 + 0x288);
      uVar37 = *(undefined4 *)(lVar25 + 0x28c);
    }
    dVar5 = (double)CONCAT44(uVar37,uVar36) * *(double *)(lVar12 + 0x3d0);
    dVar38 = *(double *)(lVar12 + 0x3c8) * (double)CONCAT44(uVar35,uVar32);
    if (*DAT_14cb49958 == '\x01') {
      pauVar21 = (undefined1 (*) [16])(lVar12 + 0x3d8);
    }
    else {
      pauVar21 = (undefined1 (*) [16])&DAT_14c8464e0;
      if (lVar25 != 0) {
        pauVar21 = (undefined1 (*) [16])(lVar25 + 0x260);
      }
    }
    local_4e8 = 0.0;
    uVar32 = 0;
    uVar35 = 0;
  }
  auVar2 = *pauVar21;
  dVar6 = auVar2._0_8_;
  local_4d4 = *(float *)(param_2 + 7);
  dVar39 = (double)local_4d4;
  dVar40 = *(double *)((longlong)*pauVar21 + 8);
  fVar33 = (float)(**(code **)(*plVar26 + 0x358))();
  fVar34 = (float)(**(code **)(*(longlong *)param_2[1] + 0x350))();
  local_2d8 = param_2;
  memset(&local_2c8,0,0x90);
  local_238._4_4_ = DAT_14c8464e0._4_4_;
  local_238._0_4_ = (undefined4)DAT_14c8464e0;
  local_238._8_4_ = (undefined4)DAT_14c8464e8;
  local_238._12_4_ = DAT_14c8464e8._4_4_;
  local_228 = DAT_14c8464f0;
  local_218 = 0.0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  dStack_1f0 = 0.0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0xb;
  local_170 = 0;
  local_168 = 0;
  local_190 = 0.0;
  uStack_188 = 0;
  uStack_164 = 0x80;
  uStack_160 = 0xffffffff;
  iStack_15c = 0;
  local_150 = 0;
  local_148 = 0;
  local_2d0 = param_1;
  lVar12 = FUN_1447b4020(param_2[1]);
  local_2c8 = lVar12 + 0x50;
  if (lVar12 == 0) {
    local_2c8 = 0;
  }
  local_2c0 = CONCAT44((int)fVar33,(int)fVar34);
  local_238 = auVar2;
  local_228 = dVar39;
  fVar34 = (float)dVar38 * 0.5;
  fVar33 = (float)dVar5 * 0.5;
  dStack_1f0 = 1.0 / (double)fVar33;
  if ((fVar33 == 0.0) && (!NAN(fVar33))) {
    dStack_1f0 = 1.0;
  }
  local_218 = 1.0 / (double)fVar34;
  if ((fVar34 == 0.0) && (!NAN(fVar34))) {
    local_218 = 1.0;
  }
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0xbed0000000000000;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0x3ff0000000000000;
  uStack_1a0 = 0x3ff0000000000000;
  local_398 = (dVar39 + -1.0) - dVar39;
  local_3a8[1] = dVar40 - dVar40;
  local_3a8[0] = dVar6 - dVar6;
  dVar4 = local_398 * local_398 + local_3a8[0] * local_3a8[0] + local_3a8[1] * local_3a8[1];
  if ((dVar4 != 1.0) || (NAN(dVar4))) {
    if (9.99999993922529e-09 <= dVar4) {
      dVar4 = 1.0 / SQRT(dVar4);
      local_398 = local_398 * dVar4;
      local_3a8[1] = local_3a8[1] * dVar4;
      local_3a8[0] = local_3a8[0] * dVar4;
      goto LAB_143b30e91;
    }
    local_3a8[0] = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    local_3a8[1] = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_398 = DAT_14c8464f0;
  }
  else {
LAB_143b30e91:
  }
  local_3e8 = local_3a8[1] * 0.0 + local_3a8[0];
  local_3f8[1] = local_3a8[0] * 0.0 + local_398 * -0.0;
  local_3f8[0] = local_3a8[1] * -0.0 - local_398;
  dVar4 = local_3e8 * local_3e8 + local_3f8[0] * local_3f8[0] + local_3f8[1] * local_3f8[1];
  if ((dVar4 != 1.0) || (NAN(dVar4))) {
    if (9.99999993922529e-09 <= dVar4) {
      dVar4 = 1.0 / SQRT(dVar4);
      local_3e8 = local_3e8 * dVar4;
      local_3f8[1] = local_3f8[1] * dVar4;
      local_3f8[0] = local_3f8[0] * dVar4;
      goto LAB_143b30f75;
    }
    local_3f8[0] = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    local_3f8[1] = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_3e8 = DAT_14c8464f0;
  }
  else {
LAB_143b30f75:
  }
  local_4d0 = dVar5 + dVar40;
  local_4c0 = dVar38 + dVar6;
  local_4a8._8_4_ = uVar36;
  local_4a8._0_8_ = dVar5;
  local_4a8._12_4_ = uVar37;
  local_4c8 = dVar40 - dVar5;
  local_438 = local_3a8[0] * local_3f8[1] - local_3f8[0] * local_3a8[1];
  dStack_440 = local_398 * local_3f8[0] - local_3e8 * local_3a8[0];
  local_448 = local_3a8[1] * local_3e8 - local_3f8[1] * local_398;
  local_498._8_4_ = uVar32;
  local_498._0_8_ = dVar38;
  local_498._12_4_ = uVar35;
  local_4b8._8_4_ = auVar2._8_4_;
  local_4b8._0_8_ = dVar6 - dVar38;
  local_4b8._12_4_ = auVar2._12_4_;
  lVar12 = 0;
  do {
    *(undefined8 *)((longlong)local_358 + lVar12 * 4) =
         *(undefined8 *)((longlong)local_3f8 + lVar12);
    *(undefined8 *)((longlong)local_358 + lVar12 * 4 + 8) =
         *(undefined8 *)((longlong)&local_448 + lVar12);
    *(undefined8 *)((longlong)local_358 + lVar12 * 4 + 0x10) =
         *(undefined8 *)((longlong)local_3a8 + lVar12);
    *(undefined8 *)((longlong)local_358 + lVar12 * 4 + 0x18) = 0;
    lVar12 = lVar12 + 8;
  } while (lVar12 != 0x18);
  dVar6 = -dVar6;
  local_2f8 = (local_3f8[0] * dVar6 - local_3f8[1] * dVar40) - local_3e8 * dVar39;
  local_2f0 = (local_448 * dVar6 - dStack_440 * dVar40) - local_438 * dVar39;
  local_2e8 = (dVar6 * local_3a8[0] - local_3a8[1] * dVar40) - local_398 * dVar39;
  local_2e0 = 0x3ff0000000000000;
  pdVar27 = local_358;
  pdVar28 = local_2b8;
  for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
    *pdVar28 = *pdVar27;
    pdVar27 = pdVar27 + 1;
    pdVar28 = pdVar28 + 1;
  }
  local_258 = 0;
  uStack_250 = 0;
  local_248 = 0;
  local_4e0 = (longlong *)local_2b8[2];
  dVar38 = local_2b8[2] * local_2b8[2] + local_2b8[0] * local_2b8[0] + local_2b8[1] * local_2b8[1];
  dVar40 = local_288 * local_288 + local_298 * local_298 + local_290 * local_290;
  dVar5 = local_268 * local_268 + local_278 * local_278 + local_270 * local_270;
  uVar31 = -(ulonglong)(0.0 <= dVar38 + -9.99999993922529e-09);
  dVar38 = (double)(~uVar31 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar38)) & uVar31);
  uVar31 = -(ulonglong)(0.0 <= dVar40 + -9.99999993922529e-09);
  dVar40 = (double)(~uVar31 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar40)) & uVar31);
  uVar31 = -(ulonglong)(0.0 <= dVar5 + -9.99999993922529e-09);
  dVar5 = (double)(~uVar31 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar5)) & uVar31);
  local_2b8[0] = local_2b8[0] * dVar38;
  local_2b8[1] = local_2b8[1] * dVar38;
  local_2b8[2] = dVar38 * local_2b8[2];
  local_298 = local_298 * dVar40;
  local_290 = local_290 * dVar40;
  local_288 = dVar40 * local_288;
  local_278 = local_278 * dVar5;
  local_270 = local_270 * dVar5;
  local_268 = dVar5 * local_268;
  local_388 = 0;
  uStack_380 = 0;
  local_3a8[0] = 0.0;
  local_3a8[1] = 0.0;
  uStack_37c = 0x80;
  uStack_378 = 0xffffffff;
  uStack_374 = 0;
  local_368 = 0;
  local_360 = 0;
  uVar22 = *(uint *)(param_2 + 6);
  if (0 < (int)uVar22) {
    FUN_147ca81e6(local_3a8,uVar22);
    iVar8 = 1;
    if (3 < uVar22) {
      uVar22 = (uVar22 | 1) + 0xe;
      iVar8 = 0x1f;
      if (uVar22 != 0) {
        for (; uVar22 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      iVar8 = 1 << ((byte)iVar8 & 0x1f);
    }
    if ((local_360 == 0) || (local_360 < iVar8)) {
      local_360 = iVar8;
      FUN_1472dda4c();
    }
    lVar12 = param_2[6];
    if ((longlong)(int)lVar12 != 0) {
      lVar25 = param_2[5];
      lVar17 = 0;
      do {
        uVar31 = *(ulonglong *)(lVar25 + lVar17);
        if (((((uVar31 >> 0x20 != 0) && (uVar22 = (uint)uVar31, -1 < (int)uVar22)) &&
             ((int)uVar22 < DAT_14c9647dc)) &&
            ((plVar26 = (longlong *)
                        ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0xd & 0x3fff8))),
             plVar26 != (longlong *)0x0 && ((int)plVar26[2] == (int)(uVar31 >> 0x20))))) &&
           ((*(uint *)(plVar26 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(plVar26 + 1) & 0x10200000) == 0) {
            lVar16 = *plVar26;
          }
          else {
            lVar16 = 0;
          }
          local_358[0] = (double)CONCAT44(local_358[0]._4_4_,*(undefined4 *)(lVar16 + 0x3d0));
          FUN_1472dd72a(local_3a8,local_3f8,local_358,0);
        }
        lVar17 = lVar17 + 8;
      } while ((longlong)(int)lVar12 * 8 != lVar17);
    }
  }
  local_198 = 5;
  if (local_190 != 0.0) {
    FUN_1400020a8();
  }
  local_190 = local_3a8[0];
  uStack_188 = (ulonglong)local_3a8[1];
  local_3a8[0] = 0.0;
  local_3a8[1] = 0.0;
  uVar20 = local_498._0_8_;
  if (local_388 == 0) {
    local_180 = (undefined4)local_398;
    uStack_17c = local_398._4_4_;
    uStack_178 = uStack_390;
    uStack_174 = uStack_38c;
  }
  lVar12 = local_388;
  if (local_170 != 0) {
    FUN_1400020a8();
    lVar12 = local_388;
  }
  uStack_164 = uStack_37c;
  local_168 = uStack_380;
  local_388 = 0;
  uStack_380 = 0;
  uStack_37c = 0;
  uStack_160 = uStack_378;
  iStack_15c = uStack_374;
  uStack_378 = 0xffffffff;
  uStack_374 = 0;
  if (local_368 == 0) {
    local_158 = local_370;
  }
  lVar25 = local_368;
  local_170 = lVar12;
  if (local_150 != 0) {
    FUN_1400020a8();
    lVar25 = local_368;
  }
  local_368 = 0;
  local_148 = local_360;
  local_360 = 0;
  local_150 = lVar25;
  uVar13 = FUN_143b3252c();
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_3f8[0] = 0.0;
  local_3f8[1] = 0.0;
  uStack_3cc = 0x80;
  uStack_3c8 = 0xffffffff;
  uStack_3c4 = 0;
  local_3b8 = 0;
  local_3b0 = 0;
  local_428 = 0;
  uStack_420 = 0;
  local_448 = 0.0;
  dStack_440 = 0.0;
  uStack_41c = 0x80;
  uStack_418 = 0xffffffff;
  iStack_414 = 0;
  local_408 = 0;
  local_400 = 0;
  uVar22 = *(uint *)(param_2 + 4);
  if (0 < (int)uVar22) {
    FUN_147ca81e6(local_3f8,uVar22);
    iVar8 = 1;
    if (3 < uVar22) {
      uVar22 = (uVar22 | 1) + 0xe;
      iVar8 = 0x1f;
      if (uVar22 != 0) {
        for (; uVar22 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      iVar8 = 1 << ((byte)iVar8 & 0x1f);
    }
    if ((local_3b0 == 0) || (local_3b0 < iVar8)) {
      local_3b0 = iVar8;
      FUN_1472dda4c();
    }
    uVar22 = *(uint *)(param_2 + 4);
    if ((uint)(dStack_440._0_4_ - iStack_414) < uVar22) {
      if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar22);
      }
      FUN_147ca81e6(&local_448,uVar22);
      iVar8 = 1;
      if (3 < uVar22) {
        uVar22 = (uVar22 | 1) + 0xe;
        iVar8 = 0x1f;
        if (uVar22 != 0) {
          for (; uVar22 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        iVar8 = 1 << ((byte)iVar8 & 0x1f);
      }
      if ((local_400 == 0) || (local_400 < iVar8)) {
        local_400 = iVar8;
        FUN_1472dda4c();
      }
      uVar22 = *(uint *)(param_2 + 4);
    }
    if (uVar22 != 0) {
      lVar12 = param_2[3];
      lVar25 = 0;
      do {
        lVar17 = *(longlong *)(lVar12 + lVar25);
        if ((((lVar17 != 0) && ((*(uint *)(lVar17 + 8) >> 0x1e & 1) == 0)) &&
            (lVar16 = FUN_1456e9ec2(lVar17), lVar16 != 0)) &&
           (lVar16 = FUN_1456e9f04(lVar17), lVar16 != 0)) {
          if (((double)local_4b8._0_8_ <= *(double *)(lVar17 + 0x160) + *(double *)(lVar17 + 0x178))
             && (*(double *)(lVar17 + 0x160) - *(double *)(lVar17 + 0x178) <= local_4c0)) {
            if ((local_4c8 <= *(double *)(lVar17 + 0x168) + *(double *)(lVar17 + 0x180)) &&
               (*(double *)(lVar17 + 0x168) - *(double *)(lVar17 + 0x180) <= local_4d0)) {
              lVar16 = FUN_1456e9ec2(lVar17);
              local_358[0]._0_4_ = *(undefined4 *)(lVar16 + 0x3d0);
              FUN_1472dd72a(local_3f8,local_138,local_358,0);
              lVar17 = FUN_1456e9f04(lVar17);
              local_358[0] = (double)CONCAT44(local_358[0]._4_4_,*(undefined4 *)(lVar17 + 0x3d0));
              FUN_1472dd72a(&local_448,local_138,local_358);
            }
          }
        }
        lVar25 = lVar25 + 8;
      } while ((longlong)(int)uVar22 * 8 != lVar25);
    }
  }
  local_198 = 3;
  if (local_190 != 0.0) {
    FUN_1400020a8();
  }
  local_190 = local_3f8[0];
  uStack_188 = (ulonglong)local_3f8[1];
  local_3f8[0] = 0.0;
  local_3f8[1] = 0.0;
  if (local_3d8 == 0) {
    local_180 = (undefined4)local_3e8;
    uStack_17c = local_3e8._4_4_;
    uStack_178 = uStack_3e0;
    uStack_174 = uStack_3dc;
  }
  lVar12 = local_3d8;
  if (local_170 != 0) {
    FUN_1400020a8();
    lVar12 = local_3d8;
  }
  uStack_164 = uStack_3cc;
  local_168 = uStack_3d0;
  local_3d8 = 0;
  uStack_3d0 = 0;
  uStack_3cc = 0;
  uStack_160 = uStack_3c8;
  iStack_15c = uStack_3c4;
  uStack_3c8 = 0xffffffff;
  uStack_3c4 = 0;
  if (local_3b8 == 0) {
    local_158 = local_3c0;
  }
  lVar25 = local_3b8;
  local_170 = lVar12;
  if (local_150 != 0) {
    FUN_1400020a8();
    lVar25 = local_3b8;
  }
  local_3b8 = 0;
  local_148 = local_3b0;
  local_3b0 = 0;
  local_150 = lVar25;
  uVar14 = FUN_143b3252c(&local_2d8);
  local_198 = 5;
  if (local_190 != 0.0) {
    FUN_1400020a8();
  }
  local_190 = local_448;
  uStack_188 = (ulonglong)dStack_440;
  local_448 = 0.0;
  dStack_440 = 0.0;
  if (local_428 == 0) {
    local_180 = (undefined4)local_438;
    uStack_17c = local_438._4_4_;
    uStack_178 = uStack_430;
    uStack_174 = uStack_42c;
  }
  lVar12 = local_428;
  if (local_170 != 0) {
    FUN_1400020a8();
    lVar12 = local_428;
  }
  uStack_164 = uStack_41c;
  local_168 = uStack_420;
  local_428 = 0;
  uStack_420 = 0;
  uStack_41c = 0;
  uStack_160 = uStack_418;
  iStack_15c = iStack_414;
  uStack_418 = 0xffffffff;
  iStack_414 = 0;
  if (local_408 == 0) {
    local_158 = local_410;
  }
  lVar25 = local_408;
  local_170 = lVar12;
  if (local_150 != 0) {
    FUN_1400020a8();
    lVar25 = local_408;
  }
  local_408 = 0;
  local_148 = local_400;
  local_400 = 0;
  local_150 = lVar25;
  uVar15 = FUN_143b3252c();
  local_330 = FUN_1447b4020(param_2[1]);
  local_338 = local_330 + 0x50;
  if (local_330 == 0) {
    local_338 = 0;
  }
  lVar12 = *param_2;
  if ((*(char *)(lVar12 + 0x43c) == '\0') && (*DAT_14cb49898 == '\x01')) {
    bVar30 = *(longlong *)(lVar12 + 0x390) == 0;
    puVar23 = (undefined8 *)(lVar12 + 0x430);
    if (bVar30) {
      puVar23 = (undefined8 *)(lVar12 + 0x424);
    }
    lVar25 = 0x438;
    if (bVar30) {
      lVar25 = 0x42c;
    }
  }
  else {
    puVar23 = (undefined8 *)(lVar12 + 0x424);
    lVar25 = 0x42c;
  }
  uVar3 = *puVar23;
  uVar36 = *(undefined4 *)(lVar12 + lVar25);
  uVar37 = *(undefined4 *)(lVar12 + 0x3fc);
  local_4e0 = param_2;
  FUN_143222f6a(local_470);
  local_328 = uVar20;
  local_320 = local_4a8._0_8_;
  local_318 = local_4e8;
  local_304 = local_4d4;
  local_138[0] = *(undefined1 **)(*local_4e0 + 0x18);
  local_358[0] = param_1;
  local_358[1] = (double)uVar13;
  local_358[2] = (double)uVar14;
  local_358[3] = (double)uVar15;
  local_310 = uVar3;
  local_308 = uVar36;
  local_300 = uVar37;
  FUN_1400021e4(local_138);
  lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar12 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_143b317f9;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_143b31802;
      goto LAB_143b31b20;
    }
LAB_143b31802:
    FUN_143b3d35c(local_358,&DAT_14ca85100);
  }
  else {
LAB_143b317f9:
    if (iVar8 == 0x10) goto LAB_143b31802;
LAB_143b31b20:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar12 + 0xc60), iVar8 == 2))
      goto LAB_143b31802;
      if (iVar8 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        if (DVar9 == DVar10) goto LAB_143b31802;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar23 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar19 = (uint *)*puVar23;
      if (puVar19 != (uint *)0x0) goto LAB_143b31f85;
LAB_143b31f07:
      uVar22 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar22 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar22 | 1;
        __tlregdtor(&LAB_143b3e8df);
      }
      lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar18 = *(undefined4 **)(lVar12 + 0x310);
      *(undefined8 *)(lVar12 + 0x310) = 0;
      if (puVar18 == (undefined4 *)0x0) {
        puVar18 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar18 = 0xffffffff;
      *(undefined4 **)(puVar18 + 0x10) = puVar18 + 0x16;
      puVar18[0x12] = 0;
      *puVar23 = puVar18;
      FUN_140217a48(puVar23);
      puVar19 = (uint *)*puVar23;
LAB_143b31f85:
      uVar31 = *(longlong *)(puVar19 + 0x10) + 7;
      uVar22 = puVar19[0x12];
LAB_143b31fa2:
      puVar29 = (undefined8 *)(uVar31 & 0xfffffffffffffff8);
      if (puVar29 + 0x23 <= puVar19 + 0x4000) {
        *(undefined8 **)(puVar19 + 0x10) = puVar29 + 0x23;
        puVar19[0x12] = uVar22 + 1;
        iVar8 = 0;
        FUN_1447247dc(puVar29,0);
        *puVar29 = &PTR_FUN_14ae98e68;
        pdVar27 = local_358;
        pdVar28 = (double *)(puVar29 + 0x15);
        for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
          *pdVar28 = *pdVar27;
          pdVar27 = pdVar27 + 1;
          pdVar28 = pdVar28 + 1;
        }
        puVar29[0x21] = local_2f8;
        local_2f8 = 0.0;
        *(undefined4 *)(puVar29 + 0x22) = (undefined4)local_2f0;
        *(undefined4 *)((longlong)puVar29 + 0x114) = local_2f0._4_4_;
        local_2f0 = 0.0;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar22 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar22 < 2) {
            uVar31 = (ulonglong)(byte)(&DAT_149e38edc)[uVar22];
          }
          else {
            uVar31 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar31 = 5;
        }
        if (*(code **)(puVar29[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar29[0xe] + 0x18))(puVar29 + 0xe,puVar29 + 9);
        }
        puVar29[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar29[9] = puVar29;
        puVar29[10] = puVar29;
        lVar12 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar12 == 0) {
          uVar7 = 1;
          if ((char)uVar31 != '\x06') {
            uVar7 = uVar31;
          }
          uVar31 = uVar7;
          uVar20 = 0;
        }
        else {
          if ((char)uVar31 == '\x06') {
            uVar31 = *(ulonglong *)(lVar12 + 0x38) >> 0x3b;
          }
          uVar20 = *(undefined8 *)(lVar12 + 0x30);
        }
        puVar29[0xf] = uVar20;
        puVar29[0x10] = uVar31 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar29 + 0x1c) = iVar8;
        if (puVar29 == (undefined8 *)0x0) {
          local_138[0] = (undefined1 *)CONCAT71(local_138[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar29 + 1) = *(int *)(puVar29 + 1) + 1;
          UNLOCK();
          local_138[0] = (undefined1 *)CONCAT71(local_138[0]._1_7_,1);
          FUN_1447439e4(puVar29);
          LOCK();
          piVar11 = (int *)(puVar29 + 1);
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (*piVar11 == 0) {
            (**(code **)*puVar29)(puVar29,1);
          }
        }
        goto LAB_143b31c1b;
      }
      *(uint **)(puVar19 + 0x10) = puVar19 + 0x4000;
      LOCK();
      uVar1 = *puVar19;
      *puVar19 = *puVar19 + uVar22 + 1;
      UNLOCK();
      if ((uVar1 ^ uVar22) == 0xffffffff) goto code_r0x000143b31fc4;
      goto LAB_143b31f07;
    }
    local_138[0] = (undefined1 *)0x0;
    local_128 = (longlong *)0x0;
    local_128 = (longlong *)FUN_14001cc68(0x78,8);
    *local_128 = (longlong)&PTR_LAB_14ae98e20;
    pdVar27 = local_358;
    pdVar28 = (double *)(local_128 + 1);
    for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
      *pdVar28 = *pdVar27;
      pdVar27 = pdVar27 + 1;
      pdVar28 = pdVar28 + 1;
    }
    local_128[0xd] = (longlong)local_2f8;
    local_2f8 = 0.0;
    *(undefined4 *)(local_128 + 0xe) = (undefined4)local_2f0;
    *(undefined4 *)((longlong)local_128 + 0x74) = local_2f0._4_4_;
    local_2f0 = 0.0;
    if ((double *)(local_128 + 1) != (double *)0x0) {
      local_138[0] = &LAB_143b3e878;
    }
    local_4f8 = local_138;
    FUN_14005a792(&DAT_14ca9a440,L"WaterInfoCommand",&DAT_14cb491c0);
    if (local_138[0] != (undefined1 *)0x0) {
      plVar26 = local_128;
      if (local_128 == (longlong *)0x0) {
        plVar26 = local_118;
      }
      (**(code **)(*plVar26 + 0x10))();
    }
  }
LAB_143b31c1b:
  if (local_2f8 != 0.0) {
    FUN_1400020a8();
  }
  FUN_1405ee12c(&DAT_14ca966d0,local_470);
  FUN_14004710c(local_458);
  local_400 = 0;
  if (local_408 != 0) {
    FUN_1400020a8();
  }
  uVar31 = (ulonglong)dStack_440 >> 0x20;
  dStack_440 = (double)((ulonglong)dStack_440 & 0xffffffff00000000);
  if ((int)uVar31 != 0) {
    FUN_1447a08a2(&local_448,0);
  }
  uStack_418 = 0xffffffff;
  iStack_414 = 0;
  uStack_420 = 0;
  if (0x80 < uStack_41c) {
    uStack_41c = 0x80;
    FUN_1446efbd8(&local_438,0);
  }
  if (local_428 != 0) {
    FUN_1400020a8();
  }
  if (local_448 != 0.0) {
    FUN_1400020a8();
  }
  local_3b0 = 0;
  if (local_3b8 != 0) {
    FUN_1400020a8();
  }
  uVar31 = (ulonglong)local_3f8[1] >> 0x20;
  local_3f8[1] = (double)((ulonglong)local_3f8[1] & 0xffffffff00000000);
  if ((int)uVar31 != 0) {
    FUN_1447a08a2(local_3f8,0);
  }
  uStack_3c8 = 0xffffffff;
  uStack_3c4 = 0;
  uStack_3d0 = 0;
  if (0x80 < uStack_3cc) {
    uStack_3cc = 0x80;
    FUN_1446efbd8(&local_3e8,0);
  }
  if (local_3d8 != 0) {
    FUN_1400020a8();
  }
  if (local_3f8[0] != 0.0) {
    FUN_1400020a8();
  }
  local_360 = 0;
  if (local_368 != 0) {
    FUN_1400020a8();
  }
  uVar31 = (ulonglong)local_3a8[1] >> 0x20;
  local_3a8[1] = (double)((ulonglong)local_3a8[1] & 0xffffffff00000000);
  if ((int)uVar31 != 0) {
    FUN_1447a08a2(local_3a8,0);
  }
  uStack_378 = 0xffffffff;
  uStack_374 = 0;
  uStack_380 = 0;
  if (0x80 < uStack_37c) {
    uStack_37c = 0x80;
    FUN_1446efbd8(&local_398,0);
  }
  if (local_388 != 0) {
    FUN_1400020a8();
  }
  if (local_3a8[0] != 0.0) {
    FUN_1400020a8();
  }
  local_148 = 0;
  if (local_150 != 0) {
    FUN_1400020a8();
  }
  uVar31 = uStack_188 >> 0x20;
  uStack_188 = uStack_188 & 0xffffffff00000000;
  if ((int)uVar31 != 0) {
    FUN_1447a08a2(&local_190,0);
  }
  uStack_160 = 0xffffffff;
  iStack_15c = 0;
  local_168 = 0;
  if (0x80 < uStack_164) {
    uStack_164 = 0x80;
    FUN_1446efbd8(&local_180,0);
  }
  if (local_170 != 0) {
    FUN_1400020a8();
  }
  if (local_190 != 0.0) {
    FUN_1400020a8();
  }
LAB_143b31e52:
  FUN_140460f52(local_488);
  if ((local_f0 ^ (ulonglong)auStack_518) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x000143b31fc4:
  puVar19 = (uint *)*puVar23;
  *puVar19 = 0xffffffff;
  *(uint **)(puVar19 + 0x10) = puVar19 + 0x16;
  puVar19[0x12] = 0;
  *puVar23 = puVar19;
  uVar31 = (longlong)puVar19 + 0x5f;
  uVar22 = 0;
  goto LAB_143b31fa2;
}



// FUNCTION 143b3252c FUN_143b3252c body=1547 status=ok
// SIG undefined FUN_143b3252c(void)

undefined8 FUN_143b3252c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_738 [32];
  undefined **local_718;
  undefined8 local_710;
  longlong *local_708;
  undefined1 local_700;
  longlong local_6f8;
  undefined4 local_6f0;
  undefined4 local_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined8 local_6d8;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 local_6a8 [5];
  longlong local_680;
  byte local_644;
  undefined8 auStack_628 [16];
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined1 local_580;
  undefined1 local_4f8;
  undefined8 local_4e8 [16];
  undefined1 local_468;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined ***local_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined4 local_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined1 *local_3e8;
  undefined1 *puStack_3e0;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_378;
  undefined4 local_370;
  undefined8 local_36c;
  undefined4 local_364;
  undefined8 local_358;
  undefined4 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_328;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined8 local_308;
  undefined4 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined1 uStack_2e0;
  undefined7 uStack_2df;
  undefined1 uStack_2d8;
  undefined8 uStack_2d7;
  undefined1 local_2cf;
  undefined8 local_2cc;
  undefined1 *local_2c4;
  undefined4 local_2bc;
  uint local_2b8;
  undefined1 local_2b4;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 uStack_288;
  undefined7 local_287;
  undefined1 uStack_280;
  undefined8 uStack_27f;
  undefined8 uStack_270;
  undefined3 uStack_268;
  undefined5 local_265;
  undefined3 uStack_260;
  undefined8 uStack_25d;
  undefined **local_240;
  longlong local_238;
  uint local_230;
  uint local_22c;
  longlong *local_200;
  undefined4 local_16c;
  longlong local_148;
  int local_140;
  undefined8 *local_c0;
  byte local_88 [7];
  byte local_81;
  byte local_7d;
  uint local_7c;
  uint local_78;
  byte local_73;
  byte local_6e;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_738;
  local_58 = 0;
  local_50 = 0x8000000000;
  FUN_1401b5a8c(local_88,0);
  local_6e = local_6e & 0xbf;
  local_7c = local_7c & 0xffff7ffe;
  local_81 = local_81 & 0xfc;
  local_88[0] = local_88[0] & 0xed;
  local_78 = local_78 & 0xfffdff7f;
  local_73 = local_73 & 0xf7;
  local_7d = local_7d & 0xfb;
  FUN_14031f39e(&local_6c8,param_1[2],param_1[1],local_88);
  local_644 = local_644 & 0xf5;
  FUN_14031f528(&local_240,&local_6c8);
  local_240 = &PTR_FUN_14a2b3168;
  if (local_680 != 0) {
    FUN_1400020a8();
  }
  local_16c = *(undefined4 *)(param_1 + 0x28);
  puVar4 = &DAT_14c846400;
  puVar5 = local_6a8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = &DAT_14c846400;
  puVar5 = auStack_628;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_580 = 0;
  local_4f8 = 0;
  local_458 = DAT_14c8464e0;
  uStack_450 = DAT_14c8464e8;
  local_448 = DAT_14c8464f0;
  local_418 = 0xffffffff;
  local_410 = 0;
  local_3e8 = &DAT_3f8000003f800000;
  puStack_3e0 = &DAT_3f8000003f800000;
  local_3d8 = 0xffffffff00000000;
  local_3d0 = 0x42c80000;
  local_378 = 0;
  local_370 = 0;
  local_398 = 0;
  uStack_390 = 0;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_3b8 = 0;
  uStack_3b0 = 0;
  local_3c8 = 0;
  uStack_3c0 = 0;
  local_36c = 0xffffffff00000080;
  local_364 = 0;
  local_358 = 0;
  local_350 = 0;
  local_348 = 0;
  local_340 = 0xffffffff00000000;
  local_328 = 0;
  local_320 = 0;
  uStack_31c = 0x80;
  uStack_318 = 0xffffffff;
  uStack_314 = 0;
  local_308 = 0;
  local_300 = 0;
  local_2f8 = 0xffffffffffffffff;
  local_2e8 = 0;
  uStack_2e0 = 0;
  uStack_2df = 0;
  uStack_2d8 = 0;
  uStack_2d7 = 0;
  local_2cf = 1;
  local_2cc = 0x42b4000042b40000;
  local_2bc = 0;
  local_2c4 = &DAT_3f8000003f800000;
  local_2b4 = 0;
  local_2b8 = 0;
  local_2b0 = 0x3f800000bf800000;
  local_2a8 = 0x3f800000;
  uStack_280 = 0;
  uStack_27f = 0;
  uStack_290 = 0;
  uStack_288 = 0;
  local_287 = 0;
  local_2a0 = 0;
  uStack_298 = 0;
  uStack_260 = 0;
  uStack_25d = 0;
  uStack_270 = 0;
  uStack_268 = 0;
  local_265 = 0;
  puVar4 = &DAT_14c846400;
  puVar5 = local_4e8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_468 = 1;
  local_5a0 = param_1[3];
  local_5a8 = 0;
  local_440 = 0;
  uStack_420 = *(undefined8 *)*param_1;
  puVar4 = param_1 + 4;
  puVar5 = local_6a8;
  local_438 = local_5a0;
  local_430 = &local_240;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_6b8 = param_1[0x16];
  local_6c8 = param_1[0x14];
  uStack_6c0 = param_1[0x15];
  uStack_408 = 0;
  local_400 = 0x3f80000000000000;
  local_2f0 = 0xbf80000000000000;
  local_428 = 0;
  puVar4 = param_1 + 0x18;
  puVar5 = auStack_628;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_2f0 = CONCAT44(local_2f0._4_4_,0x3a83126f);
  uStack_3f8 = 0;
  local_3f0 = 0x3f80000000000000;
  local_2b8 = local_2b8 & 0xffffff00;
  lVar3 = (**(code **)(*local_200 + 0x3d0))();
  if (lVar3 != 0) {
    lVar3 = (**(code **)(*local_200 + 0x3d0))();
    if ((*(longlong *)(lVar3 + 0x30) != 0) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x2b0) != 0)) {
      lVar3 = (**(code **)(*local_200 + 0x3d0))();
      if (*(longlong *)(lVar3 + 0x30) == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x2b0);
      }
      local_3d0 = *(undefined4 *)(lVar3 + 0x408);
    }
  }
  lVar3 = FUN_14001cc68(0x30f0,0x10);
  FUN_144891fa0(lVar3,&local_6c8);
  *(int *)(lVar3 + 0x1de0) = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  *(undefined1 *)(lVar3 + 0x1ddd) = 1;
  *(undefined4 *)(lVar3 + 0x3020) = 0;
  FUN_144893f9a(lVar3);
  if (param_1 + 0x29 != (undefined8 *)(lVar3 + 0x1ee8)) {
    FUN_1472df374();
  }
  uVar1 = local_230;
  lVar6 = (longlong)(int)local_230;
  local_230 = local_230 + 1;
  if (local_22c < local_230) {
    FUN_144928a2e(&local_238,uVar1);
  }
  *(longlong *)(local_238 + lVar6 * 8) = lVar3;
  local_6d8 = param_1[0x16];
  local_6e8 = *(undefined4 *)(param_1 + 0x14);
  uStack_6e4 = *(undefined4 *)((longlong)param_1 + 0xa4);
  uStack_6e0 = *(undefined4 *)(param_1 + 0x15);
  uStack_6dc = *(undefined4 *)((longlong)param_1 + 0xac);
  FUN_14102b2ba(lVar3);
  FUN_14102bfb4(lVar3,&local_6c8);
  local_c0 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *local_c0 = &PTR_FUN_14a9ad940;
  local_c0[1] = &local_240;
  local_c0[2] = &DAT_3f8000003f800000;
  local_718 = &PTR_FUN_14a291310;
  local_710 = 0;
  local_708 = local_200;
  local_700 = 0;
  FUN_1447ff7a4(*(undefined8 *)(DAT_14cb0d2b0 + 0xff0),&local_6f8);
  FUN_1400f559c(&local_148,&local_6f8);
  FUN_144750709(local_6f8,local_6f0);
  if (local_6f8 != 0) {
    FUN_1400020a8();
  }
  if ((longlong)local_140 != 0) {
    lVar6 = 0;
    do {
      (**(code **)(**(longlong **)(local_148 + lVar6) + 8))
                (*(longlong **)(local_148 + lVar6),&local_240);
      (**(code **)(**(longlong **)(local_148 + lVar6) + 0x10))
                (*(longlong **)(local_148 + lVar6),&local_240,lVar3);
      lVar6 = lVar6 + 0x10;
    } while ((longlong)local_140 * 0x10 != lVar6);
  }
  uVar2 = FUN_140f0eb48(&local_240,0);
  FUN_144891d70(&local_6c8);
  FUN_14005d108(&local_240);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_738) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b32b38 FUN_143b32b38 body=4232 status=ok
// SIG undefined FUN_143b32b38(void)

void FUN_143b32b38(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  int iVar6;
  uint *puVar7;
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  double *pdVar17;
  double *pdVar18;
  longlong lVar19;
  longlong lVar20;
  uint *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_4b8 [32];
  double local_498;
  longlong *local_490;
  float local_484;
  ulonglong local_480;
  uint *local_478;
  longlong *local_470;
  double local_468;
  double local_460;
  double local_458;
  longlong local_450;
  undefined1 local_448 [16];
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  double local_410 [7];
  double local_3d8 [4];
  double local_3b8 [15];
  undefined8 local_340;
  longlong local_338;
  undefined1 local_330 [16];
  double local_320;
  double local_318 [4];
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  double local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  double local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined1 local_218 [8];
  int local_210;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1ec;
  int local_1e4;
  undefined8 local_1d8;
  int local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  int local_194;
  undefined8 local_188;
  int local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  int local_144;
  undefined8 local_138;
  int local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4b8;
  local_490 = (longlong *)(param_1 + 0x3060);
  iVar15 = *(int *)(param_1 + 0x306c);
  FUN_144b15df2(*(undefined8 *)(param_1 + 0x3060),*(undefined4 *)(param_1 + 0x3068));
  *(undefined4 *)(param_1 + 0x3068) = 0;
  if ((iVar15 < 0) && (*(int *)(param_1 + 0x306c) != 0)) {
    FUN_14734b1c6(local_490,0);
  }
  puVar21 = (uint *)(param_2 + 2);
  uVar16 = *(uint *)(param_2 + 5);
  uVar25 = (ulonglong)uVar16;
  if (uVar16 == 0) {
    uVar23 = 1;
    uVar22 = 0;
    iVar15 = 0;
    uVar10 = 0;
  }
  else {
    puVar7 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar7 = puVar21;
    }
    uVar10 = *puVar7;
    if (uVar10 == 0) {
      iVar15 = uVar16 + 0x1e;
      if (-1 < (int)(uVar16 - 1)) {
        iVar15 = uVar16 - 1;
      }
      uVar22 = 0;
      uVar23 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar23 = uVar22;
      }
      iVar15 = 0;
      do {
        if (uVar23 == uVar22) goto LAB_143b32c8c;
        iVar15 = iVar15 + 0x20;
        uVar10 = puVar7[uVar22 + 1];
        uVar22 = uVar22 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar22 = 0;
      iVar15 = 0;
    }
    uVar23 = (ulonglong)(-uVar10 & uVar10);
    uVar1 = uVar23 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    uVar10 = (iVar15 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    if ((int)uVar16 <= (int)uVar10) {
      uVar10 = uVar16;
    }
  }
  if (uVar10 != uVar16) {
    uVar24 = 0xffffffff;
    local_480 = uVar25;
    local_478 = puVar21;
    local_470 = param_2;
    local_450 = param_1;
    do {
      lVar19 = *(longlong *)(*param_2 + 0x10 + (longlong)(int)uVar10 * 0x50);
      if ((lVar19 != 0) && ((*(uint *)(lVar19 + 8) >> 0x1e & 1) == 0)) {
        lVar20 = *param_2 + (longlong)(int)uVar10 * 0x50;
        lVar19 = *(longlong *)(lVar20 + 8);
        if (*(char *)(lVar19 + 0x404) == '\x01') {
          lVar13 = *(longlong *)(lVar19 + 0x1c8);
          uVar28 = 0;
          uVar30 = 0x3ff00000;
          uVar31 = 0;
          uVar32 = 0x3ff00000;
          local_498 = 1.0;
          if (lVar13 != 0) {
            uVar28 = *(undefined4 *)(lVar13 + 0x280);
            uVar30 = *(undefined4 *)(lVar13 + 0x284);
            uVar31 = *(undefined4 *)(lVar13 + 0x288);
            uVar32 = *(undefined4 *)(lVar13 + 0x28c);
            local_498 = *(double *)(lVar13 + 0x290);
          }
          local_498 = local_498 * *(double *)(lVar19 + 0x418);
          dVar5 = (double)CONCAT44(uVar32,uVar31) * *(double *)(lVar19 + 0x410);
          dVar4 = (double)CONCAT44(uVar30,uVar28) * *(double *)(lVar19 + 0x408);
          pauVar8 = (undefined1 (*) [16])(lVar19 + 0x440);
          uVar28 = uVar31;
          uVar30 = uVar32;
        }
        else {
          lVar13 = *(longlong *)(lVar19 + 0x1c8);
          uVar26 = 0;
          uVar29 = 0x3ff00000;
          uVar28 = 0;
          uVar30 = 0x3ff00000;
          if (lVar13 != 0) {
            uVar26 = *(undefined4 *)(lVar13 + 0x280);
            uVar29 = *(undefined4 *)(lVar13 + 0x284);
            uVar28 = *(undefined4 *)(lVar13 + 0x288);
            uVar30 = *(undefined4 *)(lVar13 + 0x28c);
          }
          dVar5 = (double)CONCAT44(uVar30,uVar28) * *(double *)(lVar19 + 0x3d0);
          uVar31 = 0;
          uVar32 = 0;
          dVar4 = *(double *)(lVar19 + 0x3c8) * (double)CONCAT44(uVar29,uVar26);
          if (*DAT_14cb49958 == '\x01') {
            pauVar8 = (undefined1 (*) [16])(lVar19 + 0x3d8);
          }
          else {
            pauVar8 = (undefined1 (*) [16])(lVar13 + 0x260);
            if (lVar13 == 0) {
              pauVar8 = (undefined1 (*) [16])&DAT_14c8464e0;
            }
          }
          local_498 = 0.0;
        }
        auVar3 = *pauVar8;
        dVar35 = auVar3._0_8_;
        local_484 = *(float *)(lVar20 + 0x40);
        dVar34 = (double)local_484;
        dVar2 = *(double *)((longlong)*pauVar8 + 8);
        local_338 = 0;
        local_320 = DAT_14c8464f0;
        local_330._4_4_ = DAT_14c8464e0._4_4_;
        local_330._0_4_ = (undefined4)DAT_14c8464e0;
        local_330._12_4_ = DAT_14c8464e8._4_4_;
        local_330._8_4_ = (undefined4)DAT_14c8464e8;
        local_1f8 = 0;
        local_1f0 = 0;
        memset(local_318,0,0x110);
        local_1ec = 0xffffffff00000080;
        local_1e4 = 0;
        local_1d8 = 0;
        local_1d0 = 0;
        local_1a8 = 0;
        local_1a0 = 0;
        local_1c8 = 0;
        uStack_1c0 = 0;
        local_19c = 0xffffffff00000080;
        local_194 = 0;
        local_188 = 0;
        local_180 = 0;
        local_158 = 0;
        local_150 = 0;
        local_178 = 0;
        uStack_170 = 0;
        local_14c = 0xffffffff00000080;
        local_144 = 0;
        local_138 = 0;
        local_130 = 0;
        local_118 = DAT_14c8464f0;
        local_128 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_120 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        uStack_110 = DAT_14c84635c;
        local_108 = 0;
        uStack_100 = 0;
        lVar19 = FUN_1447b4020(*(undefined8 *)(lVar20 + 0x10));
        local_338 = lVar19 + 0x50;
        if (lVar19 == 0) {
          local_338 = 0;
        }
        local_330 = auVar3;
        local_320 = dVar34;
        local_3d8[2] = (dVar34 + -1.0) - dVar34;
        local_3d8[1] = dVar2 - dVar2;
        local_3d8[0] = dVar35 - dVar35;
        dVar33 = local_3d8[2] * local_3d8[2] +
                 local_3d8[0] * local_3d8[0] + local_3d8[1] * local_3d8[1];
        if ((dVar33 != 1.0) || (NAN(dVar33))) {
          if (9.99999993922529e-09 <= dVar33) {
            dVar33 = 1.0 / SQRT(dVar33);
            local_3d8[2] = local_3d8[2] * dVar33;
            local_3d8[1] = local_3d8[1] * dVar33;
            local_3d8[0] = local_3d8[0] * dVar33;
            goto LAB_143b330b9;
          }
          local_3d8[0] = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          local_3d8[1] = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          local_3d8[2] = DAT_14c8464f0;
        }
        else {
LAB_143b330b9:
        }
        local_410[5] = local_3d8[1] * 0.0 + local_3d8[0];
        local_410[4] = local_3d8[0] * 0.0 + local_3d8[2] * -0.0;
        local_410[3] = local_3d8[1] * -0.0 - local_3d8[2];
        dVar33 = local_410[5] * local_410[5] +
                 local_410[3] * local_410[3] + local_410[4] * local_410[4];
        if ((dVar33 != 1.0) || (NAN(dVar33))) {
          if (9.99999993922529e-09 <= dVar33) {
            dVar33 = 1.0 / SQRT(dVar33);
            local_410[5] = local_410[5] * dVar33;
            local_410[4] = local_410[4] * dVar33;
            local_410[3] = local_410[3] * dVar33;
            goto LAB_143b3319d;
          }
          local_410[3] = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          local_410[4] = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          local_410[5] = DAT_14c8464f0;
        }
        else {
LAB_143b3319d:
        }
        local_468 = dVar5 + dVar2;
        local_458 = dVar4 + dVar35;
        local_428._8_4_ = uVar28;
        local_428._0_8_ = dVar5;
        local_428._12_4_ = uVar30;
        local_460 = dVar2 - dVar5;
        local_410[2] = local_3d8[0] * local_410[4] - local_410[3] * local_3d8[1];
        local_410[1] = local_3d8[2] * local_410[3] - local_410[5] * local_3d8[0];
        local_410[0] = local_3d8[1] * local_410[5] - local_410[4] * local_3d8[2];
        local_448._8_4_ = uVar31;
        local_448._0_8_ = dVar4;
        local_448._12_4_ = uVar32;
        local_438._8_4_ = auVar3._8_4_;
        local_438._0_8_ = dVar35 - dVar4;
        local_438._12_4_ = auVar3._12_4_;
        lVar19 = 0;
        do {
          *(undefined8 *)((longlong)local_3b8 + lVar19 * 4) =
               *(undefined8 *)((longlong)local_410 + lVar19 + 0x18);
          *(undefined8 *)((longlong)local_3b8 + lVar19 * 4 + 8) =
               *(undefined8 *)((longlong)local_410 + lVar19);
          *(undefined8 *)((longlong)local_3b8 + lVar19 * 4 + 0x10) =
               *(undefined8 *)((longlong)local_3d8 + lVar19);
          *(undefined8 *)((longlong)local_3b8 + lVar19 * 4 + 0x18) = 0;
          lVar19 = lVar19 + 8;
        } while (lVar19 != 0x18);
        dVar35 = -dVar35;
        local_3b8[0xc] = (local_410[3] * dVar35 - local_410[4] * dVar2) - local_410[5] * dVar34;
        local_3b8[0xd] = (local_410[0] * dVar35 - local_410[1] * dVar2) - local_410[2] * dVar34;
        local_3b8[0xe] = (dVar35 * local_3d8[0] - local_3d8[1] * dVar2) - local_3d8[2] * dVar34;
        local_340 = 0x3ff0000000000000;
        pdVar17 = local_3b8;
        pdVar18 = local_318;
        for (lVar19 = 0x10; lVar19 != 0; lVar19 = lVar19 + -1) {
          *pdVar18 = *pdVar17;
          pdVar17 = pdVar17 + 1;
          pdVar18 = pdVar18 + 1;
        }
        local_2a8 = 0;
        local_2b8 = 0;
        uStack_2b0 = 0;
        dVar35 = local_318[2] * local_318[2] +
                 local_318[0] * local_318[0] + local_318[1] * local_318[1];
        dVar34 = local_2e8 * local_2e8 + local_2f8 * local_2f8 + local_2f0 * local_2f0;
        dVar2 = local_2c8 * local_2c8 + local_2d8 * local_2d8 + local_2d0 * local_2d0;
        uVar25 = -(ulonglong)(0.0 <= dVar35 + -9.99999993922529e-09);
        dVar35 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar35)) & uVar25);
        uVar25 = -(ulonglong)(0.0 <= dVar34 + -9.99999993922529e-09);
        dVar34 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar34)) & uVar25);
        uVar25 = -(ulonglong)(0.0 <= dVar2 + -9.99999993922529e-09);
        dVar2 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar2)) & uVar25);
        local_318[0] = local_318[0] * dVar35;
        local_318[1] = local_318[1] * dVar35;
        local_318[2] = dVar35 * local_318[2];
        local_2f8 = local_2f8 * dVar34;
        local_2f0 = local_2f0 * dVar34;
        local_2e8 = dVar34 * local_2e8;
        local_2d8 = local_2d8 * dVar2;
        local_2d0 = local_2d0 * dVar2;
        local_2c8 = dVar2 * local_2c8;
        fVar27 = (float)dVar5 * 0.5;
        local_270 = 1.0 / (double)fVar27;
        if ((fVar27 == 0.0) && (!NAN(fVar27))) {
          local_270 = 1.0;
        }
        fVar27 = (float)dVar4 * 0.5;
        local_298 = 1.0 / (double)fVar27;
        if ((fVar27 == 0.0) && (!NAN(fVar27))) {
          local_298 = 1.0;
        }
        local_280 = 0;
        uStack_278 = 0;
        local_290 = 0;
        uStack_288 = 0;
        local_258 = 0;
        uStack_250 = 0;
        local_268 = 0;
        uStack_260 = 0;
        local_248 = 0xbed0000000000000;
        local_230 = 0;
        local_240 = 0;
        uStack_238 = 0;
        local_228 = 0x3ff0000000000000;
        local_220 = 0x3ff0000000000000;
        lVar19 = *(longlong *)(lVar20 + 8);
        if (((*(char *)(lVar19 + 0x43c) != '\0') || (*DAT_14cb49898 != '\x01')) ||
           (lVar13 = 0x430, *(longlong *)(lVar19 + 0x390) == 0)) {
          lVar13 = 0x424;
        }
        uStack_110 = *(undefined8 *)(lVar19 + lVar13);
        lVar19 = *(longlong *)(lVar20 + 8);
        if (((*(char *)(lVar19 + 0x43c) != '\0') || (*DAT_14cb49898 != '\x01')) ||
           (lVar13 = 0x438, *(longlong *)(lVar19 + 0x390) == 0)) {
          lVar13 = 0x42c;
        }
        local_108 = CONCAT44(local_484,*(undefined4 *)(lVar19 + lVar13));
        uStack_100 = CONCAT44(uStack_100._4_4_,*(undefined4 *)(*(longlong *)(lVar20 + 8) + 0x3fc));
        local_118 = local_498;
        uVar16 = *(uint *)(lVar20 + 0x38);
        local_128 = dVar4;
        uStack_120 = dVar5;
        if (0 < (int)uVar16) {
          if ((uint)(local_210 - local_1e4) < uVar16) {
            FUN_147ca81e6(local_218,uVar16);
            iVar6 = 1;
            if (3 < uVar16) {
              uVar16 = (uVar16 | 1) + 0xe;
              iVar6 = 0x1f;
              if (uVar16 != 0) {
                for (; uVar16 >> iVar6 == 0; iVar6 = iVar6 + -1) {
                }
              }
              iVar6 = 1 << ((byte)iVar6 & 0x1f);
            }
            if ((local_1d0 == 0) || (local_1d0 < iVar6)) {
              local_1d0 = iVar6;
              FUN_1472dda4c(local_218);
            }
          }
          iVar6 = *(int *)(lVar20 + 0x38);
          if ((longlong)iVar6 != 0) {
            lVar19 = *(longlong *)(lVar20 + 0x30);
            lVar13 = 0;
            do {
              uVar25 = *(ulonglong *)(lVar19 + lVar13);
              if (((((uVar25 >> 0x20 != 0) && (uVar16 = (uint)uVar25, -1 < (int)uVar16)) &&
                   ((int)uVar16 < DAT_14c9647dc)) &&
                  ((plVar14 = (longlong *)
                              ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0xd & 0x3fff8))),
                   plVar14 != (longlong *)0x0 && ((int)plVar14[2] == (int)(uVar25 >> 0x20))))) &&
                 ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)) {
                if ((*(uint *)(plVar14 + 1) & 0x10200000) == 0) {
                  lVar9 = *plVar14;
                }
                else {
                  lVar9 = 0;
                }
                local_3b8[0]._0_4_ = *(undefined4 *)(lVar9 + 0x3d0);
                FUN_1472dd72a(local_218,local_3d8,local_3b8,0);
              }
              lVar13 = lVar13 + 8;
            } while ((longlong)iVar6 * 8 != lVar13);
          }
        }
        uVar16 = *(uint *)(lVar20 + 0x28);
        if (0 < (int)uVar16) {
          if ((uint)((int)uStack_1c0 - local_194) < uVar16) {
            FUN_147ca81e6(&local_1c8,uVar16);
            iVar6 = 1;
            if (3 < uVar16) {
              uVar16 = (uVar16 | 1) + 0xe;
              iVar6 = 0x1f;
              if (uVar16 != 0) {
                for (; uVar16 >> iVar6 == 0; iVar6 = iVar6 + -1) {
                }
              }
              iVar6 = 1 << ((byte)iVar6 & 0x1f);
            }
            if ((local_180 == 0) || (local_180 < iVar6)) {
              local_180 = iVar6;
              FUN_1472dda4c(&local_1c8);
            }
          }
          uVar16 = *(uint *)(lVar20 + 0x28);
          if ((uint)((int)uStack_170 - local_144) < uVar16) {
            if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456acd4b((longlong)(int)uVar16);
            }
            FUN_147ca81e6(&local_178,uVar16);
            iVar6 = 1;
            if (3 < uVar16) {
              uVar16 = (uVar16 | 1) + 0xe;
              iVar6 = 0x1f;
              if (uVar16 != 0) {
                for (; uVar16 >> iVar6 == 0; iVar6 = iVar6 + -1) {
                }
              }
              iVar6 = 1 << ((byte)iVar6 & 0x1f);
            }
            if ((local_130 == 0) || (local_130 < iVar6)) {
              local_130 = iVar6;
              FUN_1472dda4c(&local_178);
            }
            uVar16 = *(uint *)(lVar20 + 0x28);
          }
          if (uVar16 != 0) {
            lVar19 = *(longlong *)(lVar20 + 0x20);
            lVar20 = 0;
            do {
              lVar13 = *(longlong *)(lVar19 + lVar20);
              if ((((lVar13 != 0) && ((*(uint *)(lVar13 + 8) >> 0x1e & 1) == 0)) &&
                  (lVar9 = FUN_1456e9ec2(lVar13), lVar9 != 0)) &&
                 (lVar9 = FUN_1456e9f04(lVar13), lVar9 != 0)) {
                if (((double)local_438._0_8_ <=
                     *(double *)(lVar13 + 0x160) + *(double *)(lVar13 + 0x178)) &&
                   (*(double *)(lVar13 + 0x160) - *(double *)(lVar13 + 0x178) <= local_458)) {
                  if ((local_460 <= *(double *)(lVar13 + 0x168) + *(double *)(lVar13 + 0x180)) &&
                     (*(double *)(lVar13 + 0x168) - *(double *)(lVar13 + 0x180) <= local_468)) {
                    lVar9 = FUN_1456e9ec2(lVar13);
                    local_3b8[0]._0_4_ = *(undefined4 *)(lVar9 + 0x3d0);
                    FUN_1472dd72a(&local_1c8,local_3d8,local_3b8,0);
                    lVar13 = FUN_1456e9f04(lVar13);
                    local_3b8[0]._0_4_ = *(undefined4 *)(lVar13 + 0x3d0);
                    FUN_1472dd72a(&local_178,local_3d8,local_3b8);
                  }
                }
              }
              lVar20 = lVar20 + 8;
            } while ((longlong)(int)uVar16 * 8 != lVar20);
          }
        }
        iVar6 = *(int *)(local_450 + 0x3068);
        *(uint *)(local_450 + 0x3068) = iVar6 + 1U;
        if (*(uint *)(local_450 + 0x306c) < iVar6 + 1U) {
          FUN_148402d70(local_490,iVar6);
        }
        lVar19 = *local_490;
        lVar20 = (longlong)iVar6 * 0x240;
        memcpy((void *)(lVar19 + lVar20),&local_338,0x120);
        FUN_14018a936(lVar19 + lVar20 + 0x120,local_218);
        FUN_14018a936(lVar19 + lVar20 + 0x170,&local_1c8);
        lVar20 = lVar20 + lVar19;
        FUN_14018a936(lVar20 + 0x1c0,&local_178);
        *(undefined4 *)(lVar20 + 0x210) = (undefined4)local_128;
        *(undefined4 *)(lVar20 + 0x214) = local_128._4_4_;
        *(undefined4 *)(lVar20 + 0x218) = (undefined4)uStack_120;
        *(undefined4 *)(lVar20 + 0x21c) = uStack_120._4_4_;
        *(undefined4 *)(lVar20 + 0x220) = (undefined4)local_118;
        *(undefined4 *)(lVar20 + 0x224) = local_118._4_4_;
        *(undefined4 *)(lVar20 + 0x228) = (undefined4)uStack_110;
        *(undefined4 *)(lVar20 + 0x22c) = uStack_110._4_4_;
        *(undefined4 *)(lVar20 + 0x230) = (undefined4)local_108;
        *(undefined4 *)(lVar20 + 0x234) = local_108._4_4_;
        *(undefined4 *)(lVar20 + 0x238) = (undefined4)uStack_100;
        *(undefined4 *)(lVar20 + 0x23c) = uStack_100._4_4_;
        FUN_1472cea34(&local_338);
        uVar16 = *(uint *)(local_470 + 5);
        uVar25 = local_480;
        param_2 = local_470;
        puVar21 = local_478;
      }
      uVar24 = uVar24 & ~(uint)uVar23;
      puVar7 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar7 = puVar21;
      }
      iVar6 = (int)uVar22;
      lVar19 = (longlong)iVar6;
      uVar10 = puVar7[lVar19] & uVar24;
      if (uVar10 == 0) {
        iVar11 = uVar16 + 0x1e;
        if (-1 < (int)(uVar16 - 1)) {
          iVar11 = uVar16 - 1;
        }
        iVar11 = iVar11 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar6) {
          iVar12 = iVar6;
        }
        if (iVar6 < iVar11) {
          lVar20 = 0;
          do {
            uVar10 = puVar7[lVar19 + lVar20 + 1];
            if (uVar10 != 0) {
              uVar22 = (ulonglong)(iVar6 + (int)lVar20 + 1);
              uVar24 = 0xffffffff;
              goto LAB_143b32de7;
            }
            iVar15 = iVar15 + 0x20;
            lVar20 = lVar20 + 1;
          } while (iVar12 - lVar19 != lVar20);
          uVar24 = 0xffffffff;
          iVar6 = iVar12;
        }
        uVar22 = (ulonglong)(iVar6 + 1);
        uVar25 = local_480;
        param_2 = local_470;
        puVar21 = local_478;
        uVar10 = uVar16;
      }
      else {
LAB_143b32de7:
        uVar23 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar23 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar10 = (iVar15 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        if ((int)uVar16 <= (int)uVar10) {
          uVar10 = uVar16;
        }
      }
    } while (uVar10 != (uint)uVar25);
  }
LAB_143b32c8c:
  if ((local_f0 ^ (ulonglong)auStack_4b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b33bc2 FUN_143b33bc2 body=5466 status=ok
// SIG undefined FUN_143b33bc2(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_143b33bc2(longlong *param_1,double param_2,longlong *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 (*pauVar14) [16];
  undefined8 *puVar15;
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  uint uVar19;
  undefined1 **ppuVar20;
  double *pdVar21;
  bool bVar22;
  ulonglong uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auStack_5c8 [32];
  undefined4 local_5a8;
  undefined4 local_5a0;
  undefined4 local_598;
  undefined8 local_590;
  wchar_t *local_588;
  undefined1 *local_580;
  undefined1 *local_578;
  undefined1 **local_570;
  undefined1 *local_568;
  code *local_560;
  double local_550;
  double local_548;
  undefined8 local_540;
  longlong *local_538;
  float local_52c;
  longlong local_528;
  double local_520;
  double local_518;
  double local_510;
  undefined1 local_508 [16];
  undefined1 local_4f8 [16];
  undefined1 local_4e8 [16];
  int local_4d8;
  int local_4d4;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined4 local_4c8 [2];
  undefined8 local_4c0;
  longlong local_4b8;
  undefined4 *local_4b0;
  undefined4 *local_4a8;
  undefined1 local_49c [4];
  double local_498 [4];
  undefined8 local_478;
  undefined4 local_470;
  undefined8 local_46c;
  undefined4 local_464;
  longlong local_458;
  undefined4 local_450;
  double local_448 [4];
  longlong local_428;
  undefined4 local_420;
  uint local_41c;
  undefined4 uStack_418;
  undefined4 local_414;
  longlong local_408;
  int local_400;
  undefined1 *local_3f8;
  ulonglong auStack_3f0 [3];
  char cStack_3d4;
  longlong local_3d8;
  undefined4 local_3d0;
  uint local_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  longlong local_3b8;
  int local_3b0;
  char local_3a0;
  double local_398;
  double local_390;
  double local_388;
  undefined8 local_380;
  undefined1 local_378 [16];
  double local_368;
  double local_358 [4];
  double local_338;
  double local_330;
  double local_328;
  double local_318;
  double local_310;
  double local_308;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  double local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  double local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined1 local_208 [144];
  longlong local_178;
  longlong local_160;
  double local_158;
  double dStack_150;
  double local_148 [2];
  longlong local_138;
  undefined4 local_130;
  uint local_12c;
  undefined4 uStack_128;
  int local_124;
  longlong local_118;
  int local_110;
  byte local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_5c8;
  if (((param_3[1] == 0) || (param_1 == (longlong *)0x0)) ||
     ((*(uint *)(param_3[1] + 8) & 0x40000000) != 0)) goto LAB_143b33c62;
  uVar23 = (ulonglong)DAT_14cb47688;
  local_538 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < (int)DAT_14cb47688) &&
     (uVar23 = FUN_144b3d300(&DAT_14cb47688), DAT_14cb47688 == 0xffffffff)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cb47680 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))
                   (DAT_14c8407a8,L"r.Water.WaterInfo.RenderCaptureNextWaterInfoDraws",1);
    uVar23 = _Init_thread_footer(&DAT_14cb47688);
  }
  local_540 = CONCAT71((int7)(uVar23 >> 8),1);
  if (DAT_14cb47680 != (longlong *)0x0) {
    piVar8 = (int *)(**(code **)(*DAT_14cb47680 + 0x68))();
    iVar7 = *piVar8;
    if (iVar7 != 0) {
      iVar16 = 1;
      if (1 < iVar7) {
        iVar16 = iVar7;
      }
      local_540 = 0;
      FUN_140635eb8(DAT_14cb47680,iVar16 + -1,0xd000000,0);
    }
  }
  lVar9 = *param_3;
  if (*(char *)(lVar9 + 0x404) == '\x01') {
    lVar11 = *(longlong *)(lVar9 + 0x1c8);
    if (lVar11 == 0) {
      local_550 = 1.0;
      uVar24 = 0;
      uVar27 = 0x3ff00000;
      uVar28 = 0;
      uVar29 = 0x3ff00000;
    }
    else {
      uVar24 = *(undefined4 *)(lVar11 + 0x280);
      uVar27 = *(undefined4 *)(lVar11 + 0x284);
      uVar28 = *(undefined4 *)(lVar11 + 0x288);
      uVar29 = *(undefined4 *)(lVar11 + 0x28c);
      local_550 = *(double *)(lVar11 + 0x290);
    }
    local_550 = local_550 * *(double *)(lVar9 + 0x418);
    dVar4 = (double)CONCAT44(uVar29,uVar28) * *(double *)(lVar9 + 0x410);
    dVar5 = (double)CONCAT44(uVar27,uVar24) * *(double *)(lVar9 + 0x408);
    pauVar14 = (undefined1 (*) [16])(lVar9 + 0x440);
    uVar24 = uVar28;
    uVar27 = uVar29;
  }
  else {
    lVar11 = *(longlong *)(lVar9 + 0x1c8);
    if (lVar11 == 0) {
      uVar24 = 0;
      uVar27 = 0x3ff00000;
      uVar28 = 0;
      uVar29 = 0x3ff00000;
    }
    else {
      uVar24 = *(undefined4 *)(lVar11 + 0x280);
      uVar27 = *(undefined4 *)(lVar11 + 0x284);
      uVar28 = *(undefined4 *)(lVar11 + 0x288);
      uVar29 = *(undefined4 *)(lVar11 + 0x28c);
    }
    dVar4 = (double)CONCAT44(uVar29,uVar28) * *(double *)(lVar9 + 0x3d0);
    dVar5 = *(double *)(lVar9 + 0x3c8) * (double)CONCAT44(uVar27,uVar24);
    if (*DAT_14cb49958 == '\x01') {
      pauVar14 = (undefined1 (*) [16])(lVar9 + 0x3d8);
    }
    else {
      pauVar14 = (undefined1 (*) [16])&DAT_14c8464e0;
      if (lVar11 != 0) {
        pauVar14 = (undefined1 (*) [16])(lVar11 + 0x260);
      }
    }
    local_550 = 0.0;
    uVar24 = 0;
    uVar27 = 0;
  }
  auVar2 = *pauVar14;
  dVar30 = auVar2._0_8_;
  local_52c = *(float *)(param_3 + 7);
  dVar31 = (double)local_52c;
  dVar1 = *(double *)((longlong)*pauVar14 + 8);
  fVar25 = (float)(**(code **)(*(longlong *)param_3[1] + 0x358))();
  fVar26 = (float)(**(code **)(*(longlong *)param_3[1] + 0x350))();
  local_4d8 = (int)fVar26;
  local_4d4 = (int)fVar25;
  FUN_1447b4020(param_3[1]);
  FUN_1472d94b4(local_378);
  local_378 = auVar2;
  local_368 = dVar31;
  local_148[0] = (dVar31 + -1.0) - dVar31;
  dStack_150 = dVar1 - dVar1;
  local_158 = dVar30 - dVar30;
  dVar32 = local_148[0] * local_148[0] + local_158 * local_158 + dStack_150 * dStack_150;
  if ((dVar32 != 1.0) || (NAN(dVar32))) {
    if (9.99999993922529e-09 <= dVar32) {
      dVar32 = 1.0 / SQRT(dVar32);
      local_148[0] = local_148[0] * dVar32;
      dStack_150 = dStack_150 * dVar32;
      local_158 = local_158 * dVar32;
      goto LAB_143b33f18;
    }
    local_158 = DAT_14c8464e0;
    dStack_150 = DAT_14c8464e8;
    local_148[0] = DAT_14c8464f0;
  }
  else {
LAB_143b33f18:
  }
  local_448[2] = dStack_150 * 0.0 + local_158;
  local_448[1] = local_158 * 0.0 + local_148[0] * -0.0;
  local_448[0] = dStack_150 * -0.0 - local_148[0];
  dVar32 = local_448[2] * local_448[2] + local_448[0] * local_448[0] + local_448[1] * local_448[1];
  if ((dVar32 != 1.0) || (NAN(dVar32))) {
    if (9.99999993922529e-09 <= dVar32) {
      dVar32 = 1.0 / SQRT(dVar32);
      local_448[2] = local_448[2] * dVar32;
      local_448[1] = local_448[1] * dVar32;
      local_448[0] = local_448[0] * dVar32;
      goto LAB_143b33ffc;
    }
    local_448[0] = DAT_14c8464e0;
    local_448[1] = DAT_14c8464e8;
    local_448[2] = DAT_14c8464f0;
  }
  else {
LAB_143b33ffc:
  }
  local_520 = dVar4 + dVar1;
  local_510 = dVar5 + dVar30;
  local_4f8._8_4_ = uVar28;
  local_4f8._0_8_ = dVar4;
  local_4f8._12_4_ = uVar29;
  local_518 = dVar1 - dVar4;
  local_498[2] = local_158 * local_448[1] - local_448[0] * dStack_150;
  local_498[1] = local_148[0] * local_448[0] - local_448[2] * local_158;
  local_498[0] = dStack_150 * local_448[2] - local_448[1] * local_148[0];
  local_4e8._8_4_ = uVar24;
  local_4e8._0_8_ = dVar5;
  local_4e8._12_4_ = uVar27;
  local_508._8_4_ = auVar2._8_4_;
  local_508._0_8_ = dVar30 - dVar5;
  local_508._12_4_ = auVar2._12_4_;
  lVar9 = 0;
  do {
    *(undefined8 *)((longlong)&local_3f8 + lVar9 * 4) = *(undefined8 *)((longlong)local_448 + lVar9)
    ;
    *(undefined8 *)((longlong)auStack_3f0 + lVar9 * 4) =
         *(undefined8 *)((longlong)local_498 + lVar9);
    *(undefined8 *)((longlong)auStack_3f0 + lVar9 * 4 + 8U) =
         *(undefined8 *)((longlong)&local_158 + lVar9);
    *(undefined8 *)((longlong)auStack_3f0 + lVar9 * 4 + 0x10U) = 0;
    lVar9 = lVar9 + 8;
  } while (lVar9 != 0x18);
  dVar30 = -dVar30;
  local_398 = (local_448[0] * dVar30 - local_448[1] * dVar1) - local_448[2] * dVar31;
  local_390 = (local_498[0] * dVar30 - local_498[1] * dVar1) - local_498[2] * dVar31;
  local_388 = (dVar30 * local_158 - dStack_150 * dVar1) - local_148[0] * dVar31;
  local_380 = 0x3ff0000000000000;
  ppuVar20 = &local_3f8;
  pdVar21 = local_358;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *pdVar21 = (double)*ppuVar20;
    ppuVar20 = ppuVar20 + 1;
    pdVar21 = pdVar21 + 1;
  }
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  local_548 = local_358[2];
  dVar30 = local_358[2] * local_358[2] + local_358[0] * local_358[0] + local_358[1] * local_358[1];
  dVar32 = local_328 * local_328 + local_338 * local_338 + local_330 * local_330;
  dVar1 = local_308 * local_308 + local_318 * local_318 + local_310 * local_310;
  uVar23 = -(ulonglong)(0.0 <= dVar30 + -9.99999993922529e-09);
  dVar30 = (double)(~uVar23 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar30)) & uVar23);
  uVar23 = -(ulonglong)(0.0 <= dVar32 + -9.99999993922529e-09);
  dVar32 = (double)(~uVar23 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar32)) & uVar23);
  uVar23 = -(ulonglong)(0.0 <= dVar1 + -9.99999993922529e-09);
  dVar1 = (double)(~uVar23 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar1)) & uVar23);
  local_358[0] = local_358[0] * dVar30;
  local_358[1] = local_358[1] * dVar30;
  local_358[2] = dVar30 * local_358[2];
  local_338 = local_338 * dVar32;
  local_330 = local_330 * dVar32;
  local_328 = dVar32 * local_328;
  local_318 = local_318 * dVar1;
  local_310 = local_310 * dVar1;
  local_308 = dVar1 * local_308;
  fVar26 = (float)dVar5 * 0.5;
  fVar25 = (float)dVar4 * 0.5;
  local_2b0 = 1.0 / (double)fVar25;
  if ((fVar25 == 0.0) && (!NAN(fVar25))) {
    local_2b0 = 1.0;
  }
  local_2d8 = 1.0 / (double)fVar26;
  if ((fVar26 == 0.0) && (!NAN(fVar26))) {
    local_2d8 = 1.0;
  }
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_288 = 0xbed0000000000000;
  local_270 = 0;
  local_280 = 0;
  uStack_278 = 0;
  local_268 = 0x3ff0000000000000;
  local_260 = 0x3ff0000000000000;
  local_178 = *param_3;
  local_428 = 0;
  local_420 = 0;
  local_448[0] = 0.0;
  local_448[1] = 0.0;
  local_41c = 0x80;
  uStack_418 = 0xffffffff;
  local_414 = 0;
  local_408 = 0;
  local_400 = 0;
  uVar19 = *(uint *)(param_3 + 6);
  if (0 < (int)uVar19) {
    FUN_147ca81e6(local_448,uVar19);
    iVar7 = 1;
    if (3 < uVar19) {
      uVar19 = (uVar19 | 1) + 0xe;
      iVar7 = 0x1f;
      if (uVar19 != 0) {
        for (; uVar19 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      iVar7 = 1 << ((byte)iVar7 & 0x1f);
    }
    if ((local_400 == 0) || (local_400 < iVar7)) {
      local_400 = iVar7;
      FUN_1472dda4c();
    }
    lVar9 = param_3[6];
    if ((longlong)(int)lVar9 != 0) {
      lVar11 = param_3[5];
      lVar17 = 0;
      do {
        uVar23 = *(ulonglong *)(lVar11 + lVar17);
        if (((((uVar23 >> 0x20 != 0) && (uVar19 = (uint)uVar23, -1 < (int)uVar19)) &&
             ((int)uVar19 < DAT_14c9647dc)) &&
            ((plVar18 = (longlong *)
                        ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0xd & 0x3fff8))),
             plVar18 != (longlong *)0x0 && ((int)plVar18[2] == (int)(uVar23 >> 0x20))))) &&
           ((*(uint *)(plVar18 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(plVar18 + 1) & 0x10200000) == 0) {
            lVar13 = *plVar18;
          }
          else {
            lVar13 = 0;
          }
          local_3f8 = (undefined1 *)CONCAT44(local_3f8._4_4_,*(undefined4 *)(lVar13 + 0x3d0));
          FUN_1472dd72a(local_448,&local_158,&local_3f8,0);
        }
        lVar17 = lVar17 + 8;
      } while ((longlong)(int)lVar9 * 8 != lVar17);
    }
  }
  FUN_14018a89c(local_208,local_448);
  lVar9 = FUN_14001cc68(0xa8,0x10);
  plVar18 = local_538;
  uVar10 = (**(code **)(*local_538 + 0x3d0))(local_538);
  iVar7 = local_4d4;
  if (local_4d8 < local_4d4) {
    iVar7 = local_4d8;
  }
  local_478 = 0;
  local_470 = 0;
  local_498[0] = 0.0;
  local_498[1] = 0.0;
  local_46c = 0xffffffff00000080;
  local_464 = 0;
  local_458 = 0;
  local_450 = 0;
  if (DAT_14caa6dc0 == 0) {
    local_3f8 = &LAB_1432469d6;
    local_560 = FUN_14081d0ea;
    local_568 = &LAB_145920864;
    local_570 = &local_3f8;
    local_578 = &LAB_14746b954;
    local_580 = &LAB_14632611e;
    local_588 = L"Engine";
    local_590 = 0;
    local_598 = 0x10000005;
    local_5a0 = 8;
    local_5a8 = 0x8a8;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeProxy",&DAT_14caa6dc0,FUN_1463260fc);
  }
  lVar11 = DAT_14caa6dc0;
  if (DAT_14caa6dc0 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(DAT_14caa6dc0);
  }
  local_4c8[0] = 5;
  local_4b8 = lVar11;
  local_4c0 = uVar10;
  if ((lVar11 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar11);
  }
  FUN_1456ea28c(&local_3f8,local_4c8);
  local_158 = (double)((ulonglong)local_158 & 0xffffffff00000000);
  local_100 = 0;
  if (cStack_3d4 == '\0') {
    uVar28 = SUB84(dVar5,0);
    uVar29 = (int)((ulonglong)dVar5 >> 0x20);
    if (dVar5 <= dVar4) {
      uVar28 = SUB84(dVar4,0);
      uVar29 = (int)((ulonglong)dVar4 >> 0x20);
    }
    local_548 = param_2;
    local_528 = lVar9;
    do {
      lVar9 = CONCAT44(uStack_3c4,local_3c8);
      if (lVar9 != 0) {
        local_4cc = FUN_14746ba5c(lVar9);
        puVar15 = (undefined8 *)(*(longlong *)(lVar9 + 0x1c8) + 0x240);
        if (*(longlong *)(lVar9 + 0x1c8) == 0) {
          puVar15 = &DAT_14c846480;
        }
        dVar1 = (double)puVar15[8];
        uVar24 = SUB84(dVar1,0);
        uVar27 = (undefined4)((ulonglong)dVar1 >> 0x20);
        dVar30 = (double)puVar15[9];
        if (dVar1 <= dVar30) {
          uVar24 = SUB84(dVar30,0);
          uVar27 = (undefined4)((ulonglong)dVar30 >> 0x20);
        }
        dVar1 = ((double)CONCAT44(uVar27,uVar24) * (double)*(int *)(lVar9 + 0x840)) /
                (double)*(int *)(lVar9 + 0x83c);
        dVar1 = log(((double)CONCAT44(uVar29,uVar28) / (double)iVar7) / (dVar1 + dVar1));
        lVar9 = (longlong)ROUND(dVar1 * 1.4426950408889634 + dVar1 * 1.4426950408889634 + -0.5) >> 1
        ;
        if (lVar9 <= DAT_14cb47418) {
          lVar9 = (longlong)DAT_14cb47418;
        }
        local_4d0 = (undefined4)lVar9;
        local_4b0 = &local_4cc;
        local_4a8 = &local_4d0;
        FUN_14012212c(local_498,local_49c,&local_4b0,0);
      }
      FUN_1456ea0d4(&local_3f8);
      lVar9 = local_528;
      plVar18 = local_538;
      param_2 = local_548;
    } while (cStack_3d4 == '\0');
    if ((local_100 & 1) != 0) {
      FUN_14024445c(&dStack_150);
    }
  }
  if (local_3a0 == '\x01') {
    FUN_14024445c(auStack_3f0);
  }
  FUN_1483fa2a4(lVar9,&local_4d8,local_498);
  local_450 = 0;
  if (local_458 != 0) {
    FUN_1400020a8();
  }
  FUN_1409da246(local_498);
  if ((char)local_540 == '\0') {
    local_3f8 = (undefined1 *)0x0;
    auStack_3f0[0] = 0;
    cVar6 = FUN_140e8e584();
    if (cVar6 != '\0') {
      *(undefined4 *)(lVar9 + 0x90) = 2;
      FUN_144a787a6(lVar9 + 0x98,&local_3f8);
    }
    if (local_3f8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  local_160 = lVar9;
  (**(code **)(*plVar18 + 0x4d8))(plVar18,param_2);
  local_3d8 = 0;
  local_3d0 = 0;
  local_3f8 = (undefined1 *)0x0;
  auStack_3f0[0] = 0;
  local_3cc = 0x80;
  local_3c8 = 0xffffffff;
  uStack_3c4 = 0;
  local_3b8 = 0;
  local_3b0 = 0;
  local_138 = 0;
  local_130 = 0;
  local_158 = 0.0;
  dStack_150 = 0.0;
  local_12c = 0x80;
  uStack_128 = 0xffffffff;
  local_124 = 0;
  local_118 = 0;
  local_110 = 0;
  uVar19 = *(uint *)(param_3 + 4);
  if (0 < (int)uVar19) {
    FUN_147ca81e6(&local_3f8,uVar19);
    iVar7 = 1;
    if (3 < uVar19) {
      uVar19 = (uVar19 | 1) + 0xe;
      iVar7 = 0x1f;
      if (uVar19 != 0) {
        for (; uVar19 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      iVar7 = 1 << ((byte)iVar7 & 0x1f);
    }
    if ((local_3b0 == 0) || (local_3b0 < iVar7)) {
      local_3b0 = iVar7;
      FUN_1472dda4c();
    }
    uVar19 = *(uint *)(param_3 + 4);
    if ((uint)(dStack_150._0_4_ - local_124) < uVar19) {
      if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar19);
      }
      FUN_147ca81e6(&local_158,uVar19);
      iVar7 = 1;
      if (3 < uVar19) {
        uVar19 = (uVar19 | 1) + 0xe;
        iVar7 = 0x1f;
        if (uVar19 != 0) {
          for (; uVar19 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        iVar7 = 1 << ((byte)iVar7 & 0x1f);
      }
      if ((local_110 == 0) || (local_110 < iVar7)) {
        local_110 = iVar7;
        FUN_1472dda4c();
      }
      uVar19 = *(uint *)(param_3 + 4);
    }
    if (uVar19 != 0) {
      lVar11 = param_3[3];
      lVar17 = 0;
      do {
        lVar13 = *(longlong *)(lVar11 + lVar17);
        if ((((lVar13 != 0) && ((*(uint *)(lVar13 + 8) >> 0x1e & 1) == 0)) &&
            (lVar12 = FUN_1456e9ec2(lVar13), lVar12 != 0)) &&
           (lVar12 = FUN_1456e9f04(lVar13), lVar12 != 0)) {
          if (((double)local_508._0_8_ <= *(double *)(lVar13 + 0x160) + *(double *)(lVar13 + 0x178))
             && (*(double *)(lVar13 + 0x160) - *(double *)(lVar13 + 0x178) <= local_510)) {
            if ((local_518 <= *(double *)(lVar13 + 0x168) + *(double *)(lVar13 + 0x180)) &&
               (*(double *)(lVar13 + 0x168) - *(double *)(lVar13 + 0x180) <= local_520)) {
              lVar12 = FUN_1456e9ec2(lVar13);
              local_498[0]._0_4_ = *(undefined4 *)(lVar12 + 0x3d0);
              FUN_1472dd72a(&local_3f8,local_4c8,local_498,0);
              lVar13 = FUN_1456e9f04(lVar13);
              local_498[0] = (double)CONCAT44(local_498[0]._4_4_,*(undefined4 *)(lVar13 + 0x3d0));
              FUN_1472dd72a(&local_158,local_4c8,local_498);
            }
          }
        }
        lVar17 = lVar17 + 8;
      } while ((longlong)(int)uVar19 * 8 != lVar17);
    }
  }
  FUN_14018a89c(local_208,&local_3f8);
  uVar10 = FUN_14001cc68(0xa8,0x10);
  FUN_1483fa3be(uVar10,&local_4d8);
  local_160 = uVar10;
  (**(code **)(*plVar18 + 0x4d8))(plVar18,param_2);
  lVar11 = *param_3;
  if ((*(char *)(lVar11 + 0x43c) == '\0') && (*DAT_14cb49898 == '\x01')) {
    bVar22 = *(longlong *)(lVar11 + 0x390) == 0;
    puVar15 = (undefined8 *)(lVar11 + 0x430);
    if (bVar22) {
      puVar15 = (undefined8 *)(lVar11 + 0x424);
    }
    lVar17 = 0x438;
    if (bVar22) {
      lVar17 = 0x42c;
    }
  }
  else {
    puVar15 = (undefined8 *)(lVar11 + 0x424);
    lVar17 = 0x42c;
  }
  uVar3 = *puVar15;
  uVar28 = *(undefined4 *)(lVar11 + lVar17);
  uVar29 = *(undefined4 *)(lVar11 + 0x3fc);
  FUN_14018a89c(local_208,&local_158);
  lVar11 = FUN_14001cc68(0x120,0x10);
  FUN_1483fa44e(lVar11,&local_4d8);
  *(longlong *)(lVar11 + 0xb0) = lVar9;
  *(undefined8 *)(lVar11 + 0xb8) = uVar10;
  lVar17 = FUN_1447b4020(param_3[1]);
  plVar18 = local_538;
  lVar9 = lVar17 + 0x50;
  if (lVar17 == 0) {
    lVar9 = 0;
  }
  *(longlong *)(lVar11 + 0xa8) = lVar9;
  *(undefined8 *)(lVar11 + 0xc0) = 0;
  *(undefined8 *)(lVar11 + 200) = 0;
  *(undefined8 *)(lVar11 + 0xd0) = 0;
  *(undefined8 *)(lVar11 + 0xd8) = 0;
  *(undefined8 *)(lVar11 + 0xe0) = 0;
  *(undefined8 *)(lVar11 + 0xe8) = 0;
  *(double *)(lVar11 + 0xf0) = dVar5;
  *(double *)(lVar11 + 0xf8) = dVar4;
  *(double *)(lVar11 + 0x100) = local_550;
  *(undefined8 *)(lVar11 + 0x108) = uVar3;
  *(undefined4 *)(lVar11 + 0x110) = uVar28;
  *(float *)(lVar11 + 0x114) = local_52c;
  *(undefined4 *)(lVar11 + 0x118) = uVar29;
  if ((char)local_540 == '\0') {
    local_498[0] = 0.0;
    local_498[1] = 0.0;
    cVar6 = FUN_140e8e584();
    if (cVar6 != '\0') {
      *(undefined4 *)(lVar11 + 0x90) = 3;
      FUN_144a787a6(lVar11 + 0x98,local_498);
    }
    if (local_498[0] != 0.0) {
      FUN_1400020a8();
    }
  }
  local_160 = lVar11;
  (**(code **)(*plVar18 + 0x4d8))(plVar18,param_2);
  local_110 = 0;
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  uVar23 = (ulonglong)dStack_150 >> 0x20;
  dStack_150 = (double)((ulonglong)dStack_150 & 0xffffffff00000000);
  if ((int)uVar23 != 0) {
    FUN_1447a08a2(&local_158,0);
  }
  uStack_128 = 0xffffffff;
  local_124 = 0;
  local_130 = 0;
  if (0x80 < local_12c) {
    local_12c = 0x80;
    FUN_1446efbd8(local_148,0);
  }
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if (local_158 != 0.0) {
    FUN_1400020a8();
  }
  local_3b0 = 0;
  if (local_3b8 != 0) {
    FUN_1400020a8();
  }
  uVar23 = auStack_3f0[0] >> 0x20;
  auStack_3f0[0] = auStack_3f0[0] & 0xffffffff00000000;
  if ((int)uVar23 != 0) {
    FUN_1447a08a2(&local_3f8,0);
  }
  local_3c8 = 0xffffffff;
  uStack_3c4 = 0;
  local_3d0 = 0;
  if (0x80 < local_3cc) {
    local_3cc = 0x80;
    FUN_1446efbd8(auStack_3f0 + 1,0);
  }
  if (local_3d8 != 0) {
    FUN_1400020a8();
  }
  if (local_3f8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  local_400 = 0;
  if (local_408 != 0) {
    FUN_1400020a8();
  }
  uVar23 = (ulonglong)local_448[1] >> 0x20;
  local_448[1] = (double)((ulonglong)local_448[1] & 0xffffffff00000000);
  if ((int)uVar23 != 0) {
    FUN_1447a08a2(local_448,0);
  }
  uStack_418 = 0xffffffff;
  local_414 = 0;
  local_420 = 0;
  if (0x80 < local_41c) {
    local_41c = 0x80;
    FUN_1446efbd8(local_448 + 2,0);
  }
  if (local_428 != 0) {
    FUN_1400020a8();
  }
  if (local_448[0] != 0.0) {
    FUN_1400020a8();
  }
  FUN_1472d3330(local_378);
LAB_143b33c62:
  if ((local_f0 ^ (ulonglong)auStack_5c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b3511d FUN_143b3511d body=69 status=ok
// SIG undefined FUN_143b3511d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b3511d(void)

{
  _DAT_14cb476b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b3515f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb476b8,1);
  return;
}



// FUNCTION 143b35162 FUN_143b35162 body=69 status=ok
// SIG undefined FUN_143b35162(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b35162(void)

{
  _DAT_14cb476c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b351a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb476d0,1);
  return;
}



// FUNCTION 143b351a7 FUN_143b351a7 body=69 status=ok
// SIG undefined FUN_143b351a7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b351a7(void)

{
  _DAT_14cb476e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b351e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb476e8,1);
  return;
}



// FUNCTION 143b351ec FUN_143b351ec body=69 status=ok
// SIG undefined FUN_143b351ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b351ec(void)

{
  _DAT_14cb476f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b3522e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb47700,1);
  return;
}


