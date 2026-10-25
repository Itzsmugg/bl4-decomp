// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146ccd69a FUN_146ccd69a body=884 status=ok
// SIG undefined FUN_146ccd69a(void)

void FUN_146ccd69a(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_14172543a;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_140686536;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ccda10 FUN_146ccda10 body=884 status=ok
// SIG undefined FUN_146ccda10(void)

void FUN_146ccda10(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_14172543a;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_146cc490a;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ccdd86 FUN_146ccdd86 body=884 status=ok
// SIG undefined FUN_146ccdd86(void)

void FUN_146ccdd86(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_14172543a;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_146cc4a26;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cce0fc FUN_146cce0fc body=884 status=ok
// SIG undefined FUN_146cce0fc(void)

void FUN_146cce0fc(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_14172543a;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_14068657c;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cce472 FUN_146cce472 body=176 status=ok
// SIG undefined FUN_146cce472(void)

void FUN_146cce472(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1] < 0.0001) {
    local_28 = 1.0;
    dStack_20 = 0.0;
    local_18 = 0.0;
  }
  else {
    local_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  local_38 = &local_28;
  FUN_140ea6ce1(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cce524 FUN_146cce524 body=176 status=ok
// SIG undefined FUN_146cce524(void)

void FUN_146cce524(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1] < 0.0001) {
    local_28 = 1.0;
    dStack_20 = 0.0;
    local_18 = 0.0;
  }
  else {
    local_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  local_38 = &local_28;
  FUN_140ea72ea(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cce5d6 FUN_146cce5d6 body=176 status=ok
// SIG undefined FUN_146cce5d6(void)

void FUN_146cce5d6(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146cce7eb(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cce688 FUN_146cce688 body=176 status=ok
// SIG undefined FUN_146cce688(void)

void FUN_146cce688(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146ccea05(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cce73a FUN_146cce73a body=176 status=ok
// SIG undefined FUN_146cce73a(void)

void FUN_146cce73a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146ccebfd(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cce7eb FUN_146cce7eb body=537 status=ok
// SIG undefined FUN_146cce7eb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cce7eb(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  float local_7c;
  undefined1 *local_78;
  longlong local_70;
  float local_68;
  undefined4 local_64;
  code *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar6 = (double)*(float *)(param_2 + 0x4c) - (double)*(float *)(param_2 + 0x40);
  dVar1 = (double)*(float *)(param_2 + 0x54) - (double)*(float *)(param_2 + 0x48);
  dVar7 = (double)*(float *)(param_2 + 0x50) - (double)*(float *)(param_2 + 0x44);
  if ((dVar6 <= dVar1 || dVar6 <= dVar7) && (dVar6 = dVar7, dVar7 <= dVar1)) {
    dVar6 = dVar1;
  }
  dVar9 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar1 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar7 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar7 <= dVar1 || dVar7 <= dVar9) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = 0;
  local_60 = FUN_14172546a;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_1 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_1 + 0x10));
  local_78 = &LAB_146cc500a;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ccea05 FUN_146ccea05 body=503 status=ok
// SIG undefined FUN_146ccea05(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146ccea05(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  undefined4 local_7c;
  code *local_78;
  longlong local_70;
  float local_68;
  undefined4 local_64;
  code *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar6 = (double)*(float *)(param_2 + 0x4c) - (double)*(float *)(param_2 + 0x40);
  dVar1 = (double)*(float *)(param_2 + 0x54) - (double)*(float *)(param_2 + 0x48);
  dVar7 = (double)*(float *)(param_2 + 0x50) - (double)*(float *)(param_2 + 0x44);
  if ((dVar6 <= dVar1 || dVar6 <= dVar7) && (dVar6 = dVar7, dVar7 <= dVar1)) {
    dVar6 = dVar1;
  }
  dVar9 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar1 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar7 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar7 <= dVar1 || dVar7 <= dVar9) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = 0;
  local_60 = FUN_14172546a;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = 0;
  local_78 = FUN_146cc5264;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ccebfd FUN_146ccebfd body=537 status=ok
// SIG undefined FUN_146ccebfd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146ccebfd(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  float local_7c;
  code *local_78;
  longlong local_70;
  float local_68;
  undefined4 local_64;
  code *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar6 = (double)*(float *)(param_2 + 0x4c) - (double)*(float *)(param_2 + 0x40);
  dVar1 = (double)*(float *)(param_2 + 0x54) - (double)*(float *)(param_2 + 0x48);
  dVar7 = (double)*(float *)(param_2 + 0x50) - (double)*(float *)(param_2 + 0x44);
  if ((dVar6 <= dVar1 || dVar6 <= dVar7) && (dVar6 = dVar7, dVar7 <= dVar1)) {
    dVar6 = dVar1;
  }
  dVar9 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar1 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar7 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar7 <= dVar1 || dVar7 <= dVar9) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = 0;
  local_60 = FUN_14172546a;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_1 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_1 + 0x10));
  local_78 = FUN_146cc5596;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ccee1e FUN_146ccee1e body=145 status=ok
// SIG undefined FUN_146ccee1e(void)

void FUN_146ccee1e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1447dc19e(param_3,local_88,param_1[1]);
  local_90 = *(undefined8 *)param_1[5];
  local_98 = param_1[4];
  cVar1 = FUN_140ea601d(param_2,local_88,param_1[2],param_1[3]);
  if (cVar1 != '\0') {
    *(undefined1 *)*param_1 = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cceeb0 FUN_146cceeb0 body=34 status=ok
// SIG undefined FUN_146cceeb0(void)

longlong * FUN_146cceeb0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_146ccf3b4();
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 146cceed2 FUN_146cceed2 body=137 status=ok
// SIG undefined FUN_146cceed2(void)

longlong * FUN_146cceed2(undefined8 param_1,longlong *param_2,double *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_146ccf3b4();
  local_28 = *(double *)(lVar1 + 0x30) * param_3[2];
  local_30 = *(double *)(lVar1 + 0x28) * param_3[1];
  local_38 = *(double *)(lVar1 + 0x20) * *param_3;
  FUN_14054469a(lVar1);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ccef5c FUN_146ccef5c body=283 status=ok
// SIG undefined FUN_146ccef5c(void)

void FUN_146ccef5c(longlong param_1,double *param_2,longlong *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  dVar1 = *(double *)(param_1 + 0x48);
  local_38 = param_2[2] * dVar1;
  dVar7 = *(double *)(param_1 + 0x38);
  dVar2 = *(double *)(param_1 + 0x40);
  local_40 = param_2[1] * dVar2;
  local_48 = *param_2 * dVar7;
  if ((dVar7 <= dVar2 || dVar7 <= dVar1) && (dVar7 = dVar2, dVar2 <= dVar1)) {
    dVar7 = dVar1;
  }
  iVar5 = FUN_146d82f82(*(undefined8 *)(param_1 + 0x88),&local_48,param_3,dVar7 * param_4);
  if ((iVar5 != -1) && (lVar4 = param_3[1], (longlong)(int)lVar4 != 0)) {
    lVar3 = *param_3;
    lVar6 = 0;
    do {
      dVar1 = *(double *)(param_1 + 0x30);
      dVar7 = *(double *)(param_1 + 0x28);
      *(double *)(lVar3 + lVar6) = *(double *)(lVar3 + lVar6) * *(double *)(param_1 + 0x20);
      *(double *)(lVar3 + 8 + lVar6) = *(double *)(lVar3 + 8 + lVar6) * dVar7;
      *(double *)(lVar3 + 0x10 + lVar6) = *(double *)(lVar3 + 0x10 + lVar6) * dVar1;
      lVar6 = lVar6 + 0x18;
    } while ((longlong)(int)lVar4 * 0x18 != lVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ccf078 FUN_146ccf078 body=135 status=ok
// SIG undefined FUN_146ccf078(void)

bool FUN_146ccf078(longlong param_1,double *param_2,double param_3)

{
  double dVar1;
  double extraout_XMM0_Qa;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(double *)(param_1 + 0x48) * param_2[2];
  dVar1 = *(double *)(param_1 + 0x38);
  local_30 = *(double *)(param_1 + 0x40) * param_2[1];
  local_38 = *param_2 * dVar1;
  FUN_146dae118(*(undefined8 *)(param_1 + 0x88));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return extraout_XMM0_Qa <= param_3 * dVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ccf100 FUN_146ccf100 body=200 status=ok
// SIG undefined FUN_146ccf100(void)

undefined8 FUN_146ccf100(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined2 *local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_146ccf42e(*(undefined8 *)(param_1 + 0x88),&local_60);
  puVar5 = local_60;
  if (local_58 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  local_78 = uVar3;
  uStack_70 = uVar4;
  local_68 = uVar1;
  FUN_140002266(param_2,L"Scaled %s, Scale: [%f, %f, %f], Margin: %f",puVar5,uVar2);
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146ccf1ca FUN_146ccf1ca body=186 status=ok
// SIG undefined FUN_146ccf1ca(void)

void FUN_146ccf1ca(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14004c296(local_28,*(undefined1 *)(param_1 + 0x1c));
  FUN_14004b8ea(param_1,param_2);
  FUN_14004952e(param_2,param_1 + 0x88);
  uVar2 = FUN_141724e7a(param_2,param_1 + 0x20);
  FUN_141724e7a(uVar2,param_1 + 0x38);
  FUN_140d03e72(param_2,param_1 + 0x58);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (iVar1 < 0xc) {
    *(byte *)(param_1 + 0x1c) = *(byte *)(*(longlong *)(param_1 + 0x88) + 0x1c) | 0x80;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ccf286 FUN_146ccf286 body=55 status=ok
// SIG undefined FUN_146ccf286(void)

void FUN_146ccf286(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1448eb174(param_1 + 0x20,0x18,0);
  uVar2 = FUN_146cd54cc(*(undefined8 *)(param_1 + 0x88));
  FUN_144a78877(uVar2,uVar1);
  return;
}



// FUNCTION 146ccf2c2 FUN_146ccf2c2 body=240 status=ok
// SIG undefined FUN_146ccf2c2(void)

double * FUN_146ccf2c2(longlong param_1,double *param_2,double *param_3,double *param_4,
                      undefined8 param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = param_3[2] * *(double *)(param_1 + 0x48);
  local_28 = param_3[1] * *(double *)(param_1 + 0x40);
  local_30 = *param_3 * *(double *)(param_1 + 0x38);
  local_38 = *(double *)(param_1 + 0x48) * param_4[2];
  local_40 = *(double *)(param_1 + 0x40) * param_4[1];
  local_48 = *(double *)(param_1 + 0x38) * *param_4;
  local_58 = param_5;
  FUN_146dae232(*(undefined8 *)(param_1 + 0x88));
  if (*(char *)(param_2 + 3) == '\x01') {
    dVar1 = *(double *)(param_1 + 0x30);
    dVar2 = *(double *)(param_1 + 0x28);
    *param_2 = *(double *)(param_1 + 0x20) * *param_2;
    param_2[1] = dVar2 * param_2[1];
    param_2[2] = dVar1 * param_2[2];
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ccf3b4 FUN_146ccf3b4 body=120 status=ok
// SIG undefined FUN_146ccf3b4(void)

undefined8 FUN_146ccf3b4(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_14001cc68(0x90,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  local_20 = *(longlong *)(param_1 + 0x88);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_1405445a8(uVar2,&local_20,param_1 + 0x20,uVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ccf42e FUN_146ccf42e body=83 status=ok
// SIG undefined FUN_146ccf42e(void)

undefined8 FUN_146ccf42e(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(longlong *)(param_1 + 0x58) != 0) && ((byte)(*(char *)(param_1 + 0x60) - 1U) < 3)) {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0x38);
  }
  FUN_140002266(param_2,L"Convex: Verts: %d, Edges %d, Planes: %d, Margin %f",
                *(undefined4 *)(param_1 + 0x38),uVar1,*(undefined4 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x10));
  return param_2;
}



// FUNCTION 146ccf482 FUN_146ccf482 body=118 status=ok
// SIG undefined FUN_146ccf482(void)

void FUN_146ccf482(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146ccf99a(param_1,iVar1);
    }
    FUN_14473a13d((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146ccfa2e(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146ccf4fa FUN_146ccf4fa body=353 status=ok
// SIG undefined FUN_146ccf4fa(void)

void FUN_146ccf4fa(longlong *param_1,longlong *param_2,longlong *param_3,float param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  FUN_146cd456c(param_3,(int)param_1[1]);
  if (0 < (int)param_1[1]) {
    lVar6 = 0;
    do {
      iVar3 = (int)param_2[1];
      if (0 < iVar3) {
        lVar4 = 8;
        lVar7 = lVar6 * 0x10;
        lVar5 = 0;
        do {
          lVar1 = *param_2;
          lVar2 = *param_1;
          if (ABS((*(float *)(lVar1 + lVar4) - *(float *)(lVar2 + 8 + lVar6 * 0x18)) *
                  *(float *)(lVar2 + 0x14 + lVar6 * 0x18) +
                  (*(float *)(lVar1 + -8 + lVar4) - *(float *)(lVar2 + lVar6 * 0x18)) *
                  *(float *)(lVar2 + 0xc + lVar6 * 0x18) +
                  (*(float *)(lVar1 + -4 + lVar4) - *(float *)(lVar2 + 4 + lVar6 * 0x18)) *
                  *(float *)(lVar2 + 0x10 + lVar6 * 0x18)) < param_4) {
            lVar1 = *param_3;
            iVar3 = *(int *)(lVar1 + 8 + lVar7);
            *(uint *)(lVar1 + 8 + lVar7) = iVar3 + 1U;
            if (*(uint *)(lVar1 + 0xc + lVar7) < iVar3 + 1U) {
              FUN_1446f48e2((longlong *)(lVar1 + lVar7),iVar3);
            }
            *(int *)(*(longlong *)(lVar1 + lVar7) + (longlong)iVar3 * 4) = (int)lVar5;
            iVar3 = (int)param_2[1];
          }
          lVar5 = lVar5 + 1;
          lVar4 = lVar4 + 0xc;
        } while (lVar5 < iVar3);
      }
      FUN_146cd45aa(lVar6 * 0x18 + *param_1,lVar6 * 0x10 + *param_3,param_2);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[1]);
  }
  FUN_146cd4680(param_1,param_3);
  return;
}



// FUNCTION 146ccf65c FUN_146ccf65c body=362 status=ok
// SIG undefined FUN_146ccf65c(void)

longlong * FUN_146ccf65c(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x38,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x38);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146ccf84e(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_146ccf86a(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x49249 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      (**(code **)(*(longlong *)(*param_2 + lVar5) + 0xf8))(*param_2 + lVar5,param_1);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x38;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_146ccf7c8(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        plVar3 = (longlong *)FUN_146ccf80e(param_2);
        (**(code **)(*plVar3 + 0xf8))(plVar3,param_1);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146ccf7c8 FUN_146ccf7c8 body=68 status=ok
// SIG undefined FUN_146ccf7c8(void)

void FUN_146ccf7c8(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_146ccf84e(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146ccf86a(param_1,param_2);
  return;
}



// FUNCTION 146ccf80e FUN_146ccf80e body=64 status=ok
// SIG undefined FUN_146ccf80e(void)

longlong FUN_146ccf80e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146ccf90a(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x38 + *param_1;
  FUN_146ccf8d7(lVar2,1);
  return lVar2;
}



// FUNCTION 146ccf84e FUN_146ccf84e body=27 status=ok
// SIG undefined FUN_146ccf84e(void)

void FUN_146ccf84e(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_149f553e0;
    param_1 = param_1 + 7;
  }
  return;
}



// FUNCTION 146ccf86a FUN_146ccf86a body=109 status=ok
// SIG undefined FUN_146ccf86a(void)

void FUN_146ccf86a(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x38,8);
  }
  return;
}



// FUNCTION 146ccf8d7 FUN_146ccf8d7 body=51 status=ok
// SIG undefined FUN_146ccf8d7(void)

void FUN_146ccf8d7(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x1d;
    do {
      *(undefined8 *)(param_1 + -0x15) = 0;
      *(undefined8 *)(param_1 + -0xd) = 0;
      *(undefined2 *)(param_1 + -5) = 0x100;
      *(undefined1 *)(param_1 + -3) = 0;
      *(undefined2 *)(param_1 + -1) = 0x202;
      *(undefined ***)(param_1 + -0x1d) = &PTR_FUN_149f48c80;
      param_1 = param_1 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146ccf90a FUN_146ccf90a body=143 status=ok
// SIG undefined FUN_146ccf90a(void)

void FUN_146ccf90a(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
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
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146ccf99a FUN_146ccf99a body=147 status=ok
// SIG undefined FUN_146ccf99a(void)

void FUN_146ccf99a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146ccfa2e FUN_146ccfa2e body=63 status=ok
// SIG undefined FUN_146ccfa2e(void)

void FUN_146ccfa2e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146ccfa6e(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,4);
  }
  return;
}



// FUNCTION 146ccfa6e FUN_146ccfa6e body=117 status=ok
// SIG undefined FUN_146ccfa6e(void)

ulonglong FUN_146ccfa6e(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x18) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,4);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 146ccfae4 FUN_146ccfae4 body=38 status=ok
// SIG undefined FUN_146ccfae4(void)

undefined8 FUN_146ccfae4(undefined8 param_1,int param_2)

{
  FUN_1407fbce0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ccfb4c FUN_146ccfb4c body=87 status=ok
// SIG undefined FUN_146ccfb4c(void)

void FUN_146ccfb4c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar1 = iVar2 - (param_3 + param_2);
    if (iVar1 != 0) {
      _Dst = (void *)((longlong)param_2 * 0xc + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0xc),(longlong)iVar1 * 0xc);
      iVar2 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar2 - param_3;
  }
  return;
}



// FUNCTION 146ccfbaa FUN_146ccfbaa body=47 status=ok
// SIG undefined FUN_146ccfbaa(void)

longlong FUN_146ccfbaa(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ccfbda FUN_146ccfbda body=42 status=ok
// SIG undefined FUN_146ccfbda(void)

undefined8 * FUN_146ccfbda(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f553e0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ccfc08 FUN_146ccfc08 body=121 status=ok
// SIG undefined FUN_146ccfc08(void)

undefined8 * FUN_146ccfc08(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar1[1] = 0;
  *(undefined2 *)(puVar1 + 3) = 0x101;
  *(undefined1 *)((longlong)puVar1 + 0x1a) = 1;
  *(undefined2 *)((longlong)puVar1 + 0x1c) = 0x101;
  *puVar1 = &PTR_FUN_149f4c120;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)((longlong)puVar1 + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined4 *)((longlong)puVar1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 146ccfc82 FUN_146ccfc82 body=319 status=ok
// SIG undefined FUN_146ccfc82(void)

undefined8 * FUN_146ccfc82(longlong param_1,undefined8 *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 *puVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar5 = dVar1;
  if ((dVar2 <= dVar1 || dVar3 <= dVar1) && (dVar5 = dVar2, dVar3 <= dVar2)) {
    dVar5 = dVar3;
  }
  dVar5 = dVar5 * *(double *)(param_1 + 0x10);
  fVar6 = *(float *)(param_1 + 0x34) * (float)dVar3;
  fVar7 = *(float *)(param_1 + 0x30) * (float)dVar2;
  fVar8 = *(float *)(param_1 + 0x2c) * (float)dVar1;
  fVar9 = (float)dVar3 * *(float *)(param_1 + 0x28);
  fVar10 = (float)dVar2 * *(float *)(param_1 + 0x24);
  fVar11 = (float)dVar1 * *(float *)(param_1 + 0x20);
  puVar4[1] = 0;
  *(undefined2 *)(puVar4 + 3) = 0x101;
  *(undefined1 *)((longlong)puVar4 + 0x1a) = 1;
  *(undefined2 *)((longlong)puVar4 + 0x1c) = 0x101;
  *puVar4 = &PTR_FUN_149f4c120;
  *(float *)(puVar4 + 4) = fVar11;
  *(float *)((longlong)puVar4 + 0x24) = fVar10;
  *(float *)(puVar4 + 5) = fVar9;
  *(float *)((longlong)puVar4 + 0x2c) = fVar8;
  *(float *)(puVar4 + 6) = fVar7;
  *(float *)((longlong)puVar4 + 0x34) = fVar6;
  fVar6 = fVar6 - fVar9;
  fVar7 = fVar7 - fVar10;
  fVar8 = fVar8 - fVar11;
  if ((fVar7 <= fVar8 || fVar6 <= fVar8) && (fVar8 = fVar7, fVar6 <= fVar7)) {
    fVar8 = fVar6;
  }
  if ((double)(fVar8 * 0.5) <= dVar5) {
    dVar5 = (double)(fVar8 * 0.5);
  }
  puVar4[2] = dVar5;
  *param_2 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 146ccfdc2 FUN_146ccfdc2 body=1093 status=ok
// SIG undefined FUN_146ccfdc2(void)

void FUN_146ccfdc2(longlong param_1,double *param_2,double *param_3)

{
  double *pdVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_108 [40];
  double local_e0 [6];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dVar6 = param_2[2];
  local_e0[5] = dVar6 - (double)*(float *)(param_1 + 0x34);
  dVar5 = *param_2;
  dVar7 = param_2[1];
  local_e0[4] = dVar7 - (double)*(float *)(param_1 + 0x30);
  local_e0[3] = dVar5 - (double)*(float *)(param_1 + 0x2c);
  local_e0[2] = (double)(*(float *)(param_1 + 0x28) - (float)dVar6);
  local_e0[1] = (double)(*(float *)(param_1 + 0x24) - (float)dVar7);
  local_e0[0] = (double)(*(float *)(param_1 + 0x20) - (float)dVar5);
  if ((((((double)*(float *)(param_1 + 0x2c) < dVar5) ||
        ((double)*(float *)(param_1 + 0x30) < dVar7)) ||
       ((double)*(float *)(param_1 + 0x34) < dVar6)) ||
      ((dVar5 < (double)*(float *)(param_1 + 0x20) || (dVar7 < (double)*(float *)(param_1 + 0x24))))
      ) || (dVar6 < (double)*(float *)(param_1 + 0x28))) {
    lVar3 = 0;
    do {
      dVar6 = local_e0[lVar3 + 3];
      if (dVar6 <= 0.0) {
        dVar6 = 0.0;
        if (0.0 < local_e0[lVar3]) {
          dVar6 = -local_e0[lVar3];
        }
      }
      param_3[lVar3] = dVar6;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 3);
    dVar6 = *param_3;
    dVar5 = param_3[1];
    dVar7 = param_3[2];
    dVar8 = dVar7 * dVar7 + dVar6 * dVar6 + dVar5 * dVar5;
    if (9.999999747378752e-05 <= dVar8) {
      dVar8 = SQRT(dVar8);
      uVar4 = SUB84(dVar8,0);
      *param_3 = dVar6 / dVar8;
      param_3[1] = dVar5 / dVar8;
      param_3[2] = dVar7 / dVar8;
      if (9.999999747378752e-05 <= dVar8) goto LAB_146cd00dc;
    }
    else {
      *param_3 = 1.0;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      uVar4 = 0;
    }
    lVar3 = 0;
    do {
      dVar6 = 1.0;
      if ((0.0 < param_3[lVar3]) || (dVar6 = -1.0, param_3[lVar3] < 0.0)) {
        param_3[lVar3] = dVar6;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 3);
    dVar6 = *param_3;
    dVar5 = param_3[1];
    dVar7 = param_3[2];
    dVar8 = dVar7 * dVar7 + dVar6 * dVar6 + dVar5 * dVar5;
    if (9.99999993922529e-09 < dVar8) {
      dVar8 = 1.0 / SQRT(dVar8);
      *param_3 = dVar6 * dVar8;
      param_3[1] = dVar5 * dVar8;
      param_3[2] = dVar7 * dVar8;
    }
  }
  else {
    dVar6 = local_e0[2];
    if (local_e0[2] <= local_e0[5]) {
      dVar6 = local_e0[5];
    }
    dVar5 = local_e0[1];
    if (local_e0[1] <= local_e0[4]) {
      dVar5 = local_e0[4];
    }
    dVar7 = local_e0[0];
    if (local_e0[0] <= local_e0[3]) {
      dVar7 = local_e0[3];
    }
    dVar8 = dVar7;
    if (dVar7 <= dVar5) {
      dVar8 = dVar5;
    }
    uVar4 = SUB84(dVar8,0);
    uVar2 = 2;
    if (dVar6 < dVar8) {
      uVar2 = (uint)(dVar7 <= dVar5);
    }
    dVar5 = *(double *)((longlong)local_e0 + (ulonglong)(uVar2 * 8) + 0x18);
    pdVar1 = (double *)((longlong)local_e0 + (ulonglong)(uVar2 * 8));
    if (dVar5 < *pdVar1 || dVar5 == *pdVar1) {
      if (uVar2 == 0) {
        dVar9 = 1.0;
        dVar5 = 0.0;
        dVar7 = 0.0;
      }
      else {
        if (uVar2 == 1) {
          dVar7 = 1.0;
          dVar5 = 0.0;
        }
        else {
          dVar7 = 0.0;
          dVar5 = 1.0;
        }
        dVar9 = 0.0;
      }
      dVar5 = -dVar5;
      dVar7 = -dVar7;
      dVar9 = -dVar9;
    }
    else if (uVar2 == 0) {
      dVar9 = 1.0;
      dVar5 = 0.0;
      dVar7 = 0.0;
    }
    else {
      if (uVar2 == 1) {
        dVar7 = 1.0;
        dVar5 = 0.0;
      }
      else {
        dVar7 = 0.0;
        dVar5 = 1.0;
      }
      dVar9 = 0.0;
    }
    if (dVar8 <= dVar6) {
      uVar4 = SUB84(dVar6,0);
    }
    *param_3 = dVar9;
    param_3[1] = dVar7;
    param_3[2] = dVar5;
  }
LAB_146cd00dc:
  if ((local_b0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uVar4);
  }
  return;
}



// FUNCTION 146cd0208 FUN_146cd0208 body=1192 status=ok
// SIG undefined FUN_146cd0208(void)

void FUN_146cd0208(longlong param_1,double *param_2,double *param_3,double *param_4)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_108 [40];
  double local_e0 [6];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  fVar6 = (float)((double)*(float *)(param_1 + 0x28) * param_3[2]);
  fVar12 = (float)((double)*(float *)(param_1 + 0x24) * param_3[1]);
  fVar13 = (float)((double)*(float *)(param_1 + 0x20) * *param_3);
  dVar8 = param_2[2];
  dVar10 = (double)(float)((double)*(float *)(param_1 + 0x34) * param_3[2]);
  local_e0[5] = dVar8 - dVar10;
  dVar7 = *param_2;
  dVar9 = param_2[1];
  dVar11 = (double)(float)((double)*(float *)(param_1 + 0x30) * param_3[1]);
  local_e0[4] = dVar9 - dVar11;
  dVar2 = (double)(float)((double)*(float *)(param_1 + 0x2c) * *param_3);
  local_e0[3] = dVar7 - dVar2;
  local_e0[2] = (double)(fVar6 - (float)dVar8);
  local_e0[1] = (double)(fVar12 - (float)dVar9);
  local_e0[0] = (double)(fVar13 - (float)dVar7);
  if (((((dVar2 < dVar7) || (dVar11 < dVar9)) || (dVar10 < dVar8)) ||
      ((dVar7 < (double)fVar13 || (dVar9 < (double)fVar12)))) || (dVar8 < (double)fVar6)) {
    lVar4 = 0;
    do {
      dVar8 = local_e0[lVar4 + 3];
      if (dVar8 <= 0.0) {
        dVar8 = 0.0;
        if (0.0 < local_e0[lVar4]) {
          dVar8 = -local_e0[lVar4];
        }
      }
      param_4[lVar4] = dVar8;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 3);
    dVar8 = *param_4;
    dVar7 = param_4[1];
    dVar9 = param_4[2];
    dVar10 = dVar9 * dVar9 + dVar8 * dVar8 + dVar7 * dVar7;
    if (9.999999747378752e-05 <= dVar10) {
      dVar10 = SQRT(dVar10);
      uVar5 = SUB84(dVar10,0);
      *param_4 = dVar8 / dVar10;
      param_4[1] = dVar7 / dVar10;
      param_4[2] = dVar9 / dVar10;
      if (9.999999747378752e-05 <= dVar10) goto LAB_146cd0585;
    }
    else {
      *param_4 = 1.0;
      param_4[1] = 0.0;
      param_4[2] = 0.0;
      uVar5 = 0;
    }
    lVar4 = 0;
    do {
      dVar8 = 1.0;
      if ((0.0 < param_4[lVar4]) || (dVar8 = -1.0, param_4[lVar4] < 0.0)) {
        param_4[lVar4] = dVar8;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 3);
    dVar8 = *param_4;
    dVar7 = param_4[1];
    dVar9 = param_4[2];
    dVar10 = dVar9 * dVar9 + dVar8 * dVar8 + dVar7 * dVar7;
    if (9.99999993922529e-09 < dVar10) {
      dVar10 = 1.0 / SQRT(dVar10);
      *param_4 = dVar8 * dVar10;
      param_4[1] = dVar7 * dVar10;
      param_4[2] = dVar9 * dVar10;
    }
  }
  else {
    dVar8 = local_e0[2];
    if (local_e0[2] <= local_e0[5]) {
      dVar8 = local_e0[5];
    }
    dVar7 = local_e0[1];
    if (local_e0[1] <= local_e0[4]) {
      dVar7 = local_e0[4];
    }
    dVar9 = local_e0[0];
    if (local_e0[0] <= local_e0[3]) {
      dVar9 = local_e0[3];
    }
    dVar10 = dVar9;
    if (dVar9 <= dVar7) {
      dVar10 = dVar7;
    }
    uVar5 = SUB84(dVar10,0);
    uVar3 = 2;
    if (dVar8 < dVar10) {
      uVar3 = (uint)(dVar9 <= dVar7);
    }
    dVar7 = *(double *)((longlong)local_e0 + (ulonglong)(uVar3 * 8) + 0x18);
    pdVar1 = (double *)((longlong)local_e0 + (ulonglong)(uVar3 * 8));
    if (dVar7 < *pdVar1 || dVar7 == *pdVar1) {
      if (uVar3 == 0) {
        dVar11 = 1.0;
        dVar7 = 0.0;
        dVar9 = 0.0;
      }
      else {
        if (uVar3 == 1) {
          dVar9 = 1.0;
          dVar7 = 0.0;
        }
        else {
          dVar9 = 0.0;
          dVar7 = 1.0;
        }
        dVar11 = 0.0;
      }
      dVar7 = -dVar7;
      dVar9 = -dVar9;
      dVar11 = -dVar11;
    }
    else if (uVar3 == 0) {
      dVar11 = 1.0;
      dVar7 = 0.0;
      dVar9 = 0.0;
    }
    else {
      if (uVar3 == 1) {
        dVar9 = 1.0;
        dVar7 = 0.0;
      }
      else {
        dVar9 = 0.0;
        dVar7 = 1.0;
      }
      dVar11 = 0.0;
    }
    if (dVar10 <= dVar8) {
      uVar5 = SUB84(dVar8,0);
    }
    *param_4 = dVar11;
    param_4[1] = dVar9;
    param_4[2] = dVar7;
  }
LAB_146cd0585:
  if ((local_b0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uVar5);
  }
  return;
}



// FUNCTION 146cd0704 FUN_146cd0704 body=345 status=ok
// SIG undefined FUN_146cd0704(void)

double * FUN_146cd0704(undefined8 param_1,double *param_2,double *param_3,undefined8 param_4,
                      double *param_5)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  float local_58 [6];
  undefined8 local_40;
  float local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = (float)param_5[2];
  local_58[3] = (float)*param_5;
  local_58[4] = (float)param_5[1];
  local_58[5] = local_38;
  local_58[0] = (float)*param_3;
  local_58[1] = (float)param_3[1];
  local_58[2] = (float)param_3[2];
  local_40 = CONCAT44((float)param_5[1],(float)*param_5);
  fVar3 = 3.4028235e+38;
  lVar2 = 0;
  do {
    if (local_58[lVar2 + 3] <= 0.0001) {
      if ((local_58[lVar2 + 3] < -0.0001) && (-local_58[lVar2] < fVar3)) {
        uVar4 = 0xbf800000;
        fVar1 = -local_58[lVar2];
        goto LAB_146cd07e9;
      }
    }
    else {
      fVar1 = local_58[lVar2];
      uVar4 = 0x3f800000;
      if (local_58[lVar2] < fVar3) {
LAB_146cd07e9:
        fVar3 = fVar1;
        local_40 = 0;
        local_38 = 0.0;
        *(undefined4 *)((longlong)&local_40 + lVar2 * 4) = uVar4;
      }
    }
    lVar2 = lVar2 + 1;
    if (lVar2 == 3) {
      *param_2 = (double)(float)local_40;
      param_2[1] = (double)local_40._4_4_;
      param_2[2] = (double)local_38;
      if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
  } while( true );
}



// FUNCTION 146cd085e FUN_146cd085e body=287 status=ok
// SIG undefined FUN_146cd085e(void)

undefined8 FUN_146cd085e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_88 [32];
  double local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  local_68 = (double)*(float *)(param_1 + 0x34);
  FUN_140002266(&local_50,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)*(float *)(param_1 + 0x2c),
                (double)*(float *)(param_1 + 0x30));
  puVar3 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar3 = local_50;
  }
  local_68 = (double)*(float *)(param_1 + 0x28);
  FUN_140002266(&local_60,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)*(float *)(param_1 + 0x20),
                (double)*(float *)(param_1 + 0x24));
  puVar2 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar2 = local_60;
  }
  local_68 = (double)uVar1;
  FUN_140002266(param_2,L"Box: Min: [%s], Max: [%s], Margin: %f",puVar2,puVar3);
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd097e FUN_146cd097e body=241 status=ok
// SIG undefined FUN_146cd097e(void)

void FUN_146cd097e(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  float local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14004c296(local_28,*(undefined1 *)(param_1 + 0x1c));
  FUN_14004b8ea(param_1,param_2);
  uVar4 = FUN_144aa3513(param_2,param_1 + 0x20);
  FUN_144aa3513(uVar4,param_1 + 0x2c);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e31250);
  iVar3 = FUN_1448332aa(param_2,&DAT_149e31250);
  if (0x24 < iVar3) {
    local_28[0] = (float)*(double *)(param_1 + 0x10);
    puVar2 = (ulonglong *)param_2[1];
    pfVar1 = (float *)*puVar2 + 1;
    if ((float *)puVar2[1] < pfVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,local_28,4);
      }
      else {
        thunk_FUN_14572512c(param_2,local_28);
      }
    }
    else {
      local_28[0] = *(float *)*puVar2;
      *puVar2 = (ulonglong)pfVar1;
    }
    *(double *)(param_1 + 0x10) = (double)local_28[0];
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd0a70 FUN_146cd0a70 body=222 status=ok
// SIG undefined FUN_146cd0a70(void)

void FUN_146cd0a70(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [36];
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14004b8ea();
  uVar4 = FUN_144aa3513(param_2,param_1 + 0x20);
  FUN_144aa3513(uVar4,param_1 + 0x2c);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e31250);
  iVar3 = FUN_1448332aa(param_2,&DAT_149e31250);
  if (0x24 < iVar3) {
    local_24 = (float)*(double *)(param_1 + 0x10);
    puVar2 = (ulonglong *)param_2[1];
    pfVar1 = (float *)*puVar2 + 1;
    if ((float *)puVar2[1] < pfVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_24);
      }
    }
    else {
      local_24 = *(float *)*puVar2;
      *puVar2 = (ulonglong)pfVar1;
    }
    *(double *)(param_1 + 0x10) = (double)local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd0b50 FUN_146cd0b50 body=60 status=ok
// SIG undefined FUN_146cd0b50(void)

void FUN_146cd0b50(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1448eb174(param_1 + 0x2c,0xc,0);
  uVar2 = FUN_1448eb174(param_1 + 0x20,0xc,0);
  FUN_144a78877(uVar2,uVar1);
  return;
}



// FUNCTION 146cd0b8c FUN_146cd0b8c body=38 status=ok
// SIG undefined FUN_146cd0b8c(void)

undefined8 FUN_146cd0b8c(longlong param_1,undefined8 param_2)

{
  FUN_146c99922(param_1 + 0x20);
  return param_2;
}



// FUNCTION 146cd0c38 FUN_146cd0c38 body=100 status=ok
// SIG undefined FUN_146cd0c38(void)

void FUN_146cd0c38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1448332aa(param_1,&DAT_149e3cbf8);
  iVar2 = FUN_1448332aa(param_1,&DAT_149e3cbb8);
  if ((iVar1 < 6) && (iVar2 < 0x2e)) {
    FUN_146cd0d72(param_1,param_2,param_3);
    return;
  }
  FUN_146cd0e24(param_1,param_2,param_3);
  return;
}



// FUNCTION 146cd0c9c FUN_146cd0c9c body=213 status=ok
// SIG undefined FUN_146cd0c9c(void)

undefined4
FUN_146cd0c9c(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = FUN_146cd18b6();
  FUN_14004b1ce(param_1,uVar3);
  local_58 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  local_50 = iVar1;
  if (iVar1 == 0) {
    local_4c = 0;
  }
  else {
    FUN_145741460(&local_58,iVar1,0);
    FUN_1457414c2(local_58,uVar2,iVar1);
  }
  local_48 = param_3;
  local_44 = param_4;
  uVar3 = FUN_146cd1942(param_1,&local_58,&local_39);
  FUN_144716727(local_58,local_50);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd0d72 FUN_146cd0d72 body=176 status=ok
// SIG undefined FUN_146cd0d72(void)

void FUN_146cd0d72(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_146cb0c86(0,&local_48);
  FUN_146cb0c86(param_1,&local_58);
  FUN_144aa2b0e(param_2,&local_48);
  *param_3 = (undefined4)uStack_50;
  FUN_144716727(local_58);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd0e24 FUN_146cd0e24 body=356 status=ok
// SIG undefined FUN_146cd0e24(void)

void FUN_146cd0e24(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  char *pcVar1;
  ulonglong *puVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_4c;
  longlong local_48;
  ulonglong uStack_40;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  uStack_40 = 0;
  local_4c = 0;
  puVar2 = (ulonglong *)param_1[1];
  pcVar1 = (char *)*puVar2 + 1;
  if ((char *)puVar2[1] < pcVar1) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_29,1);
  }
  else {
    local_29 = *(char *)*puVar2;
    *puVar2 = (ulonglong)pcVar1;
  }
  if (local_29 == '\x02') {
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    FUN_146cd14a2(&local_98,param_1);
    FUN_146cd1070(&local_98,&local_48,&local_4c);
    FUN_146cd110c(&local_98);
  }
  else if (local_29 == '\x01') {
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    FUN_146cd1158(&local_98,param_1);
    FUN_146cd0f8a(&local_98,&local_48,&local_4c);
    FUN_146cd1024(&local_98);
  }
  FUN_144aa2b0e(param_2,&local_48);
  *param_3 = local_4c;
  FUN_144716727(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd0f8a FUN_146cd0f8a body=154 status=ok
// SIG undefined FUN_146cd0f8a(void)

void FUN_146cd0f8a(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_140bfc200(param_2,(int)param_1[1],1);
  if (0 < (int)param_1[1]) {
    lVar1 = *param_1;
    lVar3 = 0;
    do {
      FUN_144a1a59e(*param_2 + lVar3 * 0x10,*(undefined4 *)(lVar1 + 4 + lVar3 * 8),1);
      lVar1 = *param_1;
      if (0 < *(int *)(lVar1 + 4 + lVar3 * 8)) {
        lVar2 = 0;
        do {
          *(undefined4 *)(*(longlong *)(*param_2 + lVar3 * 0x10) + lVar2 * 4) =
               *(undefined4 *)(param_1[4] + (*(int *)(lVar1 + lVar3 * 8) + lVar2) * 4);
          lVar2 = lVar2 + 1;
          lVar1 = *param_1;
        } while (lVar2 < *(int *)(lVar1 + 4 + lVar3 * 8));
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[1]);
  }
  *param_3 = (int)param_1[3];
  return;
}



// FUNCTION 146cd1024 FUN_146cd1024 body=75 status=ok
// SIG undefined FUN_146cd1024(void)

void FUN_146cd1024(longlong *param_1)

{
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



// FUNCTION 146cd1070 FUN_146cd1070 body=155 status=ok
// SIG undefined FUN_146cd1070(void)

void FUN_146cd1070(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  FUN_140bfc200(param_2,(int)param_1[1],1);
  if (0 < (int)param_1[1]) {
    lVar1 = *param_1;
    lVar3 = 0;
    do {
      FUN_144a1a59e(*param_2 + lVar3 * 0x10,*(undefined1 *)(lVar1 + 2 + lVar3 * 4),1);
      lVar1 = *param_1;
      if (*(char *)(lVar1 + 2 + lVar3 * 4) != '\0') {
        uVar2 = 0;
        do {
          *(uint *)(*(longlong *)(*param_2 + lVar3 * 0x10) + uVar2 * 4) =
               (uint)*(byte *)(uVar2 + (ulonglong)*(ushort *)(lVar1 + lVar3 * 4) + param_1[4]);
          uVar2 = uVar2 + 1;
          lVar1 = *param_1;
        } while (uVar2 < *(byte *)(lVar1 + 2 + lVar3 * 4));
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[1]);
  }
  *param_3 = (int)param_1[3];
  return;
}



// FUNCTION 146cd110c FUN_146cd110c body=75 status=ok
// SIG undefined FUN_146cd110c(void)

void FUN_146cd110c(longlong *param_1)

{
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



// FUNCTION 146cd1158 FUN_146cd1158 body=68 status=ok
// SIG undefined FUN_146cd1158(void)

void FUN_146cd1158(longlong param_1,undefined8 param_2)

{
  FUN_146cd119c(param_2,param_1);
  FUN_146cd119c(param_2,param_1 + 0x10);
  FUN_1403b0476(param_2,param_1 + 0x20);
  FUN_1403b0476(param_2,param_1 + 0x30);
  return;
}



// FUNCTION 146cd119c FUN_146cd119c body=688 status=ok
// SIG undefined FUN_146cd119c(void)

longlong * FUN_146cd119c(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_3c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_3c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_3c);
    }
  }
  else {
    local_3c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_3c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_146b9c00c(param_2,0);
    }
  }
  else if ((((int)local_3c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_3c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_3c;
    lVar7 = 4;
    lVar8 = 0;
    do {
      lVar3 = *param_2;
      puVar5 = (undefined4 *)(lVar3 + lVar7 + -4);
      puVar4 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,puVar5,4);
        }
        else {
          thunk_FUN_14572512c(param_1);
        }
      }
      else {
        *puVar5 = *puVar4;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      puVar5 = (undefined4 *)(lVar3 + lVar7);
      puVar4 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,puVar5,4);
        }
        else {
          thunk_FUN_14572512c(param_1,puVar5);
        }
      }
      else {
        *puVar5 = *puVar4;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 8;
    } while (lVar8 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_3c) ||
       (FUN_146b9c00c(param_2), 0 < (int)local_3c)) {
      iVar6 = 0;
      do {
        puVar5 = (undefined4 *)FUN_146cd144e(param_2);
        puVar4 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar5,4);
          }
          else {
            thunk_FUN_14572512c(param_1,puVar5);
          }
        }
        else {
          *puVar5 = *puVar4;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        puVar5 = puVar5 + 1;
        puVar4 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar5,4);
          }
          else {
            thunk_FUN_14572512c(param_1,puVar5);
          }
        }
        else {
          *puVar5 = *puVar4;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_3c);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146cd144e FUN_146cd144e body=64 status=ok
// SIG undefined FUN_146cd144e(void)

longlong FUN_146cd144e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1406b704c(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 8 + *param_1;
  FUN_146cd148e(lVar2,1);
  return lVar2;
}



// FUNCTION 146cd148e FUN_146cd148e body=19 status=ok
// SIG undefined FUN_146cd148e(void)

void FUN_146cd148e(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 146cd14a2 FUN_146cd14a2 body=68 status=ok
// SIG undefined FUN_146cd14a2(void)

void FUN_146cd14a2(longlong param_1,undefined8 param_2)

{
  FUN_146cd14e6(param_2,param_1);
  FUN_146cd14e6(param_2,param_1 + 0x10);
  FUN_140077068(param_2,param_1 + 0x20);
  FUN_140077068(param_2,param_1 + 0x30);
  return;
}



// FUNCTION 146cd14e6 FUN_146cd14e6 body=652 status=ok
// SIG undefined FUN_146cd14e6(void)

longlong * FUN_146cd14e6(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 2,(longlong)*(int *)((longlong)param_2 + 0xc) << 2
            );
  local_3c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_3c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_3c);
    }
  }
  else {
    local_3c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_3c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_146cd17b4(param_2,0);
    }
  }
  else if ((((int)local_3c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x400000 < local_3c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_3c;
    lVar9 = 2;
    lVar10 = 0;
    do {
      lVar3 = *param_2;
      puVar6 = (undefined2 *)(lVar3 + lVar9 + -2);
      puVar4 = *(undefined2 **)param_1[1];
      if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,puVar6,2);
        }
        else {
          thunk_FUN_1457251a8(param_1);
        }
      }
      else {
        *puVar6 = *puVar4;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
      }
      puVar7 = (undefined1 *)(lVar3 + lVar9);
      puVar5 = *(undefined1 **)param_1[1];
      if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
        (**(code **)(*param_1 + 0x170))(param_1,puVar7,1);
      }
      else {
        *puVar7 = *puVar5;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
      }
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 4;
    } while (lVar10 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_3c) ||
       (FUN_146cd17b4(param_2), 0 < (int)local_3c)) {
      iVar8 = 0;
      do {
        puVar6 = (undefined2 *)FUN_146cd1774(param_2);
        puVar4 = *(undefined2 **)param_1[1];
        if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar6,2);
          }
          else {
            thunk_FUN_1457251a8(param_1,puVar6);
          }
        }
        else {
          *puVar6 = *puVar4;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
        }
        puVar5 = *(undefined1 **)param_1[1];
        if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
          (**(code **)(*param_1 + 0x170))(param_1,puVar6 + 1,1);
        }
        else {
          *(undefined1 *)(puVar6 + 1) = *puVar5;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)local_3c);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146cd1774 FUN_146cd1774 body=64 status=ok
// SIG undefined FUN_146cd1774(void)

longlong FUN_146cd1774(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146cd1830(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 4 + *param_1;
  FUN_146cd1814(lVar2,1);
  return lVar2;
}



// FUNCTION 146cd17b4 FUN_146cd17b4 body=96 status=ok
// SIG undefined FUN_146cd17b4(void)

void FUN_146cd17b4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 2,2);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,2);
  }
  return;
}



// FUNCTION 146cd1814 FUN_146cd1814 body=27 status=ok
// SIG undefined FUN_146cd1814(void)

void FUN_146cd1814(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      *(undefined2 *)(param_1 + lVar1 * 4) = 0;
      *(undefined1 *)(param_1 + 2 + lVar1 * 4) = 0;
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 146cd1830 FUN_146cd1830 body=132 status=ok
// SIG undefined FUN_146cd1830(void)

void FUN_146cd1830(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146cd18b6 FUN_146cd18b6 body=139 status=ok
// SIG undefined FUN_146cd18b6(void)

ulonglong FUN_146cd18b6(undefined8 param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  iVar1 = (int)param_2[1];
  lVar2 = (longlong)iVar1;
  if (0 < lVar2) {
    lVar3 = 0;
    iVar4 = 0;
    do {
      iVar4 = iVar4 + *(int *)(*param_2 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
    } while (lVar2 << 4 != lVar3);
    if (0xfe < iVar4) goto LAB_146cd18ff;
  }
  if (param_3 < 0xff && iVar1 < 0xff) {
    return 1;
  }
LAB_146cd18ff:
  if (0 < iVar1) {
    lVar3 = 0;
    iVar4 = 0;
    do {
      iVar4 = iVar4 + *(int *)(*param_2 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
    } while (lVar2 << 4 != lVar3);
    if (0x7fff < iVar4) {
      return CONCAT71((int7)((ulonglong)*param_2 >> 8),3);
    }
  }
  return CONCAT71(0x80,param_3 < 0x8000 && iVar1 < 0x8000) ^ 3;
}



// FUNCTION 146cd1942 FUN_146cd1942 body=88 status=ok
// SIG undefined FUN_146cd1942(void)

undefined1 FUN_146cd1942(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  byte bVar3;
  byte bVar4;
  undefined2 uVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 uVar10;
  longlong lVar11;
  char cVar12;
  short sVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  int *piVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined1 auStack_98 [15];
  undefined1 uStack_89;
  longlong *plStack_88;
  undefined1 uStack_7d;
  int iStack_7c;
  longlong *plStack_78;
  longlong *plStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  longlong alStack_58 [3];
  
  cVar12 = *(char *)(param_1 + 1);
  if (cVar12 == '\x01') {
    plVar9 = (longlong *)*param_1;
    uVar18 = *(uint *)(param_2 + 2);
    uVar20 = (ulonglong)uVar18;
    if (*(char *)((longlong)param_2 + 0x14) != '\x01') {
      uVar10 = FUN_1429947ea();
      return uVar10;
    }
    alStack_58[2] = DAT_14c707940 ^ (ulonglong)auStack_a8;
    lVar16 = (longlong)(int)param_2[1];
    if (lVar16 < 1) {
      iVar23 = 0;
    }
    else {
      uVar20 = 0;
      iVar23 = 0;
      do {
        iVar23 = iVar23 + *(int *)(*param_2 + 8 + uVar20);
        uVar20 = uVar20 + 0x10;
      } while (lVar16 << 4 != uVar20);
    }
    uVar10 = ((int)uVar18 < 0xff && iVar23 < 0xff) && (int)param_2[1] < 0xff;
    if ((bool)uVar10) {
      puStack_b0 = (undefined *)0x14299450c;
      uStack_7d = uVar10;
      FUN_146cd199a(plVar9,lVar16,CONCAT71((int7)(uVar20 >> 8),1));
      plVar1 = plVar9 + 2;
      puStack_b0 = (undefined *)0x14299451d;
      FUN_146cd1a10(plVar1,iVar23,1);
      puStack_b0 = (undefined *)0x14299452f;
      FUN_146cd1a84(plVar9 + 4,uVar18,1);
      puStack_b0 = (undefined *)0x142994541;
      FUN_14004b2f4(plVar9 + 8,uVar18,1);
      alStack_58[0] = 0;
      alStack_58[1] = 0;
      lStack_68 = 0;
      uStack_60 = 0;
      puStack_b0 = (undefined *)0x14299455c;
      FUN_146cd1af4();
      iVar8 = (int)uStack_60;
      lVar16 = (longlong)(int)uStack_60;
      if ((int)uStack_60 < iVar23) {
        uStack_60 = CONCAT44(uStack_60._4_4_,iVar23);
        uVar18 = iVar23 - iVar8;
        if ((uint)(uStack_60._4_4_ - iVar8) < uVar18) {
          puStack_b0 = (undefined *)0x142994585;
          FUN_1447403be(&lStack_68);
        }
        puStack_b0 = (undefined *)0x142994597;
        memset((void *)(lVar16 + lStack_68),0,(longlong)(int)uVar18);
      }
      else {
        if (iVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          puStack_b0 = &UNK_1429947e8;
          FUN_1456afac4(iVar23);
        }
        if (iVar23 < (int)uStack_60) {
          uStack_60 = CONCAT44(uStack_60._4_4_,iVar23);
          puStack_b0 = (undefined *)0x1429947d5;
          FUN_140b3f66e();
        }
      }
      if (0 < (int)plVar9[5]) {
        lVar16 = 0;
        do {
          *(undefined1 *)(plVar9[4] + lVar16) = 0xff;
          lVar16 = lVar16 + 1;
        } while (lVar16 < (int)plVar9[5]);
      }
      if (0 < (int)param_2[1]) {
        lVar16 = 0;
        iVar23 = 0;
        do {
          lVar15 = *param_2;
          lVar11 = lVar16 * 0x10;
          uVar10 = *(undefined1 *)(lVar15 + 8 + lVar11);
          lVar22 = *plVar9;
          *(char *)(lVar22 + lVar16 * 2) = (char)iVar23;
          *(undefined1 *)(lVar22 + 1 + lVar16 * 2) = uVar10;
          uVar18 = *(uint *)(lVar15 + 8 + lVar11);
          uVar20 = (ulonglong)uVar18;
          iVar8 = iVar23;
          if (0 < (int)uVar18) {
            lVar22 = (longlong)iVar23 * 3 + 2;
            uVar14 = 0;
            do {
              lVar21 = *(longlong *)(lVar15 + lVar11);
              iVar8 = *(int *)(lVar21 + uVar14 * 4);
              lVar19 = (longlong)iVar8;
              uVar24 = uVar14 + 1;
              uVar10 = *(undefined1 *)
                        (lVar21 + ((longlong)
                                   ((ulonglong)(uint)((int)uVar24 >> 0x1f) << 0x20 |
                                   uVar24 & 0xffffffff) % (longlong)(int)uVar20 & 0xffffffffU) * 4);
              lVar21 = *plVar1;
              *(char *)(lVar21 + -2 + lVar22) = (char)lVar16;
              *(char *)(lVar21 + -1 + lVar22) = (char)iVar8;
              *(undefined1 *)(lVar21 + lVar22) = uVar10;
              *(undefined1 *)(uVar14 + lStack_68 + iVar23) = uVar10;
              lVar21 = plVar9[4];
              cVar12 = (char)uVar14 + (char)iVar23;
              if (*(char *)(lVar21 + lVar19) == -1) {
                *(char *)(lVar21 + lVar19) = cVar12;
              }
              bVar3 = *(byte *)(alStack_58[0] + 3 + lVar19 * 4);
              *(byte *)(alStack_58[0] + 3 + lVar19 * 4) = bVar3 + 1;
              *(char *)((ulonglong)bVar3 + alStack_58[0] + lVar19 * 4) = cVar12;
              lVar21 = plVar9[8];
              bVar3 = *(byte *)(lVar21 + 3 + lVar19 * 4);
              *(byte *)(lVar21 + 3 + lVar19 * 4) = bVar3 + 1;
              *(char *)((ulonglong)bVar3 + lVar21 + lVar19 * 4) = (char)lVar16;
              uVar20 = (ulonglong)(int)((longlong *)(lVar15 + lVar11))[1];
              lVar22 = lVar22 + 3;
              uVar14 = uVar24;
            } while ((longlong)uVar24 < (longlong)uVar20);
            iVar8 = iVar23 + (int)uVar24;
            iStack_7c = iVar23;
          }
          iVar23 = iVar8;
          lVar16 = lVar16 + 1;
          plStack_78 = param_2;
          plStack_70 = plVar9;
        } while (lVar16 < (int)param_2[1]);
      }
      plVar2 = plVar9 + 6;
      *(undefined4 *)(plVar9 + 7) = 0;
      if (*(int *)((longlong)plVar9 + 0x3c) != 0) {
        puStack_b0 = (undefined *)0x1429946e6;
        FUN_144893a1c(plVar2,0);
      }
      iVar23 = (int)plVar9[3];
      if (iVar23 < -1) {
                    /* WARNING: Subroutine does not return */
        puStack_b0 = (undefined *)0x1429947e1;
        FUN_1456afac4(iVar23 / 2);
      }
      if (*(int *)((longlong)plVar9 + 0x3c) < iVar23 / 2) {
        puStack_b0 = (undefined *)0x142994708;
        FUN_144893a1c(plVar2);
        iVar23 = (int)plVar9[3];
      }
      if (0 < iVar23) {
        lVar16 = 0;
        do {
          lVar15 = *plVar1;
          lVar22 = lVar16 * 3;
          bVar3 = *(byte *)(lVar15 + 1 + lVar22);
          uVar14 = (ulonglong)*(byte *)(lVar15 + 2 + lVar22);
          uVar20 = (ulonglong)*(byte *)(alStack_58[0] + 3 + uVar14 * 4);
          if (uVar20 != 0) {
            uVar24 = 0;
            do {
              bVar4 = *(byte *)(alStack_58[0] + uVar14 * 4 + uVar24);
              if (*(byte *)(lStack_68 + (ulonglong)bVar4) == bVar3) {
                *(byte *)(lVar15 + 2 + lVar22) = bVar4;
                lVar15 = *plVar1;
                break;
              }
              uVar24 = uVar24 + 1;
            } while (uVar20 != uVar24);
          }
          if (bVar3 < *(byte *)(lVar15 + 1 + (ulonglong)*(byte *)(lVar15 + 2 + lVar22) * 3)) {
            iVar23 = (int)plVar9[7];
            *(uint *)(plVar9 + 7) = iVar23 + 1U;
            if (*(uint *)((longlong)plVar9 + 0x3c) < iVar23 + 1U) {
              puStack_b0 = (undefined *)0x14299478a;
              FUN_1447403be(plVar2,iVar23);
            }
            *(char *)(*plVar2 + (longlong)iVar23) = (char)lVar16;
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 < (int)plVar9[3]);
      }
      if (lStack_68 != 0) {
        puStack_b0 = (undefined *)0x1429947b0;
        FUN_1400020a8();
      }
      uVar10 = uStack_7d;
      if (alStack_58[0] != 0) {
        puStack_b0 = (undefined *)0x1429947bf;
        FUN_1400020a8();
        uVar10 = uStack_7d;
      }
    }
    if ((alStack_58[2] ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return uVar10;
    }
                    /* WARNING: Subroutine does not return */
    puStack_b0 = &UNK_1429944fc;
    FUN_144d8e3a0();
  }
  if (cVar12 == '\x02') {
    plVar9 = (longlong *)*param_1;
    uVar20 = (ulonglong)*(uint *)(param_2 + 2);
    if (*(char *)((longlong)param_2 + 0x14) != '\x01') {
      uVar10 = FUN_14160ad6a();
      return uVar10;
    }
    alStack_58[2] = DAT_14c707940 ^ (ulonglong)auStack_b8;
    lVar16 = (longlong)(int)param_2[1];
    if (lVar16 < 1) {
      iVar23 = 0;
      uVar14 = uVar20;
    }
    else {
      uVar14 = 0;
      iVar23 = 0;
      do {
        iVar23 = iVar23 + *(int *)(*param_2 + 8 + uVar14);
        uVar14 = uVar14 + 0x10;
      } while (lVar16 << 4 != uVar14);
    }
    uVar10 = ((int)*(uint *)(param_2 + 2) < 0x8000 && iVar23 < 0x8000) && (int)param_2[1] < 0x8000;
    if ((bool)uVar10) {
      uStack_89 = uVar10;
      FUN_146005ee2(plVar9,lVar16,CONCAT71((int7)(uVar14 >> 8),1));
      plStack_88 = plVar9 + 2;
      FUN_14602223a(plStack_88,iVar23,1);
      FUN_145ffd9fe(plVar9 + 4,uVar20,1);
      FUN_14004d464(plVar9 + 8,uVar20,1);
      alStack_58[0] = 0;
      alStack_58[1] = 0;
      lStack_68 = 0;
      uStack_60 = 0;
      FUN_146cd257e(alStack_58,uVar20,1);
      FUN_1405b54a2(&lStack_68,iVar23);
      if (0 < (int)plVar9[5]) {
        lVar16 = 0;
        do {
          *(undefined2 *)(plVar9[4] + lVar16 * 2) = 0x8000;
          lVar16 = lVar16 + 1;
        } while (lVar16 < (int)plVar9[5]);
      }
      if (0 < (int)param_2[1]) {
        lVar16 = 0;
        iVar23 = 0;
        do {
          lVar15 = *param_2;
          lVar11 = lVar16 * 0x10;
          uVar5 = *(undefined2 *)(lVar15 + 8 + lVar11);
          lVar22 = *plVar9;
          *(short *)(lVar22 + lVar16 * 4) = (short)iVar23;
          *(undefined2 *)(lVar22 + 2 + lVar16 * 4) = uVar5;
          uVar18 = *(uint *)(lVar15 + 8 + lVar11);
          uVar20 = (ulonglong)uVar18;
          iVar8 = iVar23;
          if (0 < (int)uVar18) {
            lVar22 = (longlong)iVar23 * 3 + 2;
            uVar14 = 0;
            do {
              lVar21 = *(longlong *)(lVar15 + lVar11);
              iVar8 = *(int *)(lVar21 + uVar14 * 4);
              lVar19 = (longlong)iVar8;
              uVar24 = uVar14 + 1;
              uVar5 = *(undefined2 *)
                       (lVar21 + ((longlong)
                                  ((ulonglong)(uint)((int)uVar24 >> 0x1f) << 0x20 |
                                  uVar24 & 0xffffffff) % (longlong)(int)uVar20 & 0xffffffffU) * 4);
              lVar21 = *plStack_88;
              *(short *)(lVar21 + -4 + lVar22 * 2) = (short)lVar16;
              *(short *)(lVar21 + -2 + lVar22 * 2) = (short)iVar8;
              *(undefined2 *)(lVar21 + lVar22 * 2) = uVar5;
              *(undefined2 *)(lStack_68 + (longlong)iVar23 * 2 + uVar14 * 2) = uVar5;
              lVar21 = plVar9[4];
              sVar13 = (short)uVar14 + (short)iVar23;
              if (SBORROW2(0,*(short *)(lVar21 + lVar19 * 2))) {
                *(short *)(lVar21 + lVar19 * 2) = sVar13;
              }
              lVar21 = alStack_58[0] + lVar19 * 8;
              sVar6 = *(short *)(lVar21 + 6);
              *(short *)(lVar21 + 6) = sVar6 + 1;
              *(short *)(lVar21 + (longlong)sVar6 * 2) = sVar13;
              lVar21 = plVar9[8] + lVar19 * 8;
              sVar13 = *(short *)(lVar21 + 6);
              *(short *)(lVar21 + 6) = sVar13 + 1;
              *(short *)(lVar21 + (longlong)sVar13 * 2) = (short)lVar16;
              uVar20 = (ulonglong)(int)((longlong *)(lVar15 + lVar11))[1];
              lVar22 = lVar22 + 3;
              uVar14 = uVar24;
            } while ((longlong)uVar24 < (longlong)uVar20);
            iVar8 = iVar23 + (int)uVar24;
            iStack_7c = iVar23;
          }
          iVar23 = iVar8;
          lVar16 = lVar16 + 1;
          plStack_78 = param_2;
          plStack_70 = plVar9;
        } while (lVar16 < (int)param_2[1]);
      }
      plVar1 = plVar9 + 6;
      *(undefined4 *)(plVar9 + 7) = 0;
      if (*(int *)((longlong)plVar9 + 0x3c) != 0) {
        FUN_140ca8596(plVar1,0);
      }
      iVar23 = (int)plVar9[3];
      if (iVar23 < -1) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar23 / 2);
      }
      if (*(int *)((longlong)plVar9 + 0x3c) < iVar23 / 2) {
        FUN_140ca8596(plVar1);
        iVar23 = (int)plVar9[3];
      }
      if (0 < iVar23) {
        lVar16 = 0;
        do {
          lVar15 = *plStack_88;
          sVar13 = *(short *)(lVar15 + 2 + lVar16 * 6);
          lVar11 = (longlong)*(short *)(lVar15 + 4 + lVar16 * 6);
          lVar22 = (longlong)*(short *)(alStack_58[0] + 6 + lVar11 * 8);
          if (0 < lVar22) {
            lVar21 = 0;
            do {
              sVar6 = *(short *)(alStack_58[0] + lVar11 * 8 + lVar21 * 2);
              if (*(short *)(lStack_68 + (longlong)sVar6 * 2) == sVar13) {
                *(short *)(lVar15 + 4 + lVar16 * 6) = sVar6;
                lVar15 = *plStack_88;
                break;
              }
              lVar21 = lVar21 + 1;
            } while (lVar22 != lVar21);
          }
          if (sVar13 < *(short *)(lVar15 + 2 + (longlong)*(short *)(lVar15 + 4 + lVar16 * 6) * 6)) {
            iVar23 = (int)plVar9[7];
            *(uint *)(plVar9 + 7) = iVar23 + 1U;
            if (*(uint *)((longlong)plVar9 + 0x3c) < iVar23 + 1U) {
              FUN_1405b572a(plVar1,iVar23);
            }
            *(short *)(*plVar1 + (longlong)iVar23 * 2) = (short)lVar16;
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 < (int)plVar9[3]);
      }
      if (lStack_68 != 0) {
        FUN_1400020a8();
      }
      uVar10 = uStack_89;
      if (alStack_58[0] != 0) {
        FUN_1400020a8();
        uVar10 = uStack_89;
      }
    }
    if ((alStack_58[2] ^ (ulonglong)auStack_b8) == DAT_14c707940) {
      return uVar10;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if (cVar12 != '\x03') {
    return 1;
  }
  plVar9 = (longlong *)*param_1;
  uVar18 = *(uint *)(param_2 + 2);
  if (*(char *)((longlong)param_2 + 0x14) == '\x01') {
    uVar10 = FUN_146cd2920();
    return uVar10;
  }
  alStack_58[2] = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar16 = (longlong)(int)param_2[1];
  iVar23 = 0;
  uVar20 = (ulonglong)uVar18;
  if (0 < lVar16) {
    uVar20 = 0;
    iVar23 = 0;
    do {
      iVar23 = iVar23 + *(int *)(*param_2 + 8 + uVar20);
      uVar20 = uVar20 + 0x10;
    } while (lVar16 << 4 != uVar20);
  }
  puStack_a0 = (undefined *)0x146cd2c97;
  FUN_146cd2eea(plVar9,lVar16,CONCAT71((int7)(uVar20 >> 8),1));
  plVar1 = plVar9 + 2;
  puStack_a0 = (undefined *)0x146cd2ca9;
  FUN_146cd2f5e(plVar1,iVar23,1);
  puStack_a0 = (undefined *)0x146cd2cba;
  FUN_146cd2fd4(plVar9 + 4,(ulonglong)uVar18);
  if (0 < (int)plVar9[5]) {
    lVar16 = 0;
    do {
      *(undefined4 *)(plVar9[4] + lVar16 * 4) = 0x80000000;
      lVar16 = lVar16 + 1;
    } while (lVar16 < (int)plVar9[5]);
  }
  if (0 < (int)param_2[1]) {
    lVar16 = 0;
    iVar23 = 0;
    do {
      lVar15 = *param_2;
      lVar11 = lVar16 * 0x10;
      uVar7 = *(undefined4 *)(lVar15 + 8 + lVar11);
      lVar22 = *plVar9;
      *(int *)(lVar22 + lVar16 * 8) = iVar23;
      *(undefined4 *)(lVar22 + 4 + lVar16 * 8) = uVar7;
      uVar18 = *(uint *)(lVar15 + 8 + lVar11);
      uVar20 = (ulonglong)uVar18;
      if (0 < (int)uVar18) {
        lVar22 = (longlong)iVar23 * 3 + 2;
        uVar14 = 0;
        do {
          lVar21 = *(longlong *)(lVar15 + lVar11);
          iVar8 = *(int *)(lVar21 + uVar14 * 4);
          uVar24 = uVar14 + 1;
          uVar7 = *(undefined4 *)
                   (lVar21 + ((longlong)
                              ((ulonglong)(uint)((int)uVar24 >> 0x1f) << 0x20 | uVar24 & 0xffffffff)
                              % (longlong)(int)uVar20 & 0xffffffffU) * 4);
          lVar21 = *plVar1;
          *(int *)(lVar21 + -8 + lVar22 * 4) = (int)lVar16;
          *(int *)(lVar21 + -4 + lVar22 * 4) = iVar8;
          *(undefined4 *)(lVar21 + lVar22 * 4) = uVar7;
          lVar21 = plVar9[4];
          if (SBORROW4(0,*(int *)(lVar21 + (longlong)iVar8 * 4))) {
            *(int *)(lVar21 + (longlong)iVar8 * 4) = (int)uVar14 + iVar23;
          }
          uVar20 = (ulonglong)(int)((longlong *)(lVar15 + lVar11))[1];
          lVar22 = lVar22 + 3;
          uVar14 = uVar24;
        } while ((longlong)uVar24 < (longlong)uVar20);
        iVar23 = iVar23 + (int)uVar24;
      }
      lVar16 = lVar16 + 1;
      plStack_78 = param_2;
      plStack_70 = plVar9;
    } while (lVar16 < (int)param_2[1]);
  }
  alStack_58[0] = 0;
  alStack_58[1] = 0;
  lStack_68 = 0;
  uStack_60 = 0;
  puStack_a0 = (undefined *)0x146cd2db1;
  FUN_144a1a59e(&lStack_68,(int)plVar9[3],1);
  puStack_a0 = (undefined *)0x146cd2dbf;
  FUN_1448c4dd6(alStack_58,(int)plVar9[3],1);
  if (0 < (int)uStack_60) {
    lVar16 = 0;
    do {
      *(undefined4 *)(lStack_68 + lVar16 * 4) = 0x80000000;
      *(undefined1 *)(alStack_58[0] + lVar16) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < (int)uStack_60);
  }
  uVar20 = (ulonglong)*(uint *)(plVar9 + 3);
  if (0 < (int)*(uint *)(plVar9 + 3)) {
    lVar16 = 0;
    do {
      if (0 < (int)uVar20) {
        lVar15 = *plVar1;
        piVar17 = (int *)(lVar15 + 8);
        uVar14 = 0;
        do {
          if ((piVar17[-1] == *(int *)(lVar15 + 8 + lVar16 * 0xc)) &&
             (*piVar17 == *(int *)(lVar15 + 4 + lVar16 * 0xc))) {
            if (*(char *)(alStack_58[0] + uVar14) == '\0') {
              *(int *)(lStack_68 + lVar16 * 4) = (int)uVar14;
              *(undefined1 *)(alStack_58[0] + uVar14) = 1;
            }
            else {
              *(undefined4 *)(lStack_68 + lVar16 * 4) = 0x80000000;
            }
            break;
          }
          uVar14 = uVar14 + 1;
          piVar17 = piVar17 + 3;
        } while ((uVar20 & 0xffffffff) != uVar14);
      }
      lVar16 = lVar16 + 1;
      uVar20 = (ulonglong)(int)plVar9[3];
    } while (lVar16 < (longlong)uVar20);
    if (0 < (int)plVar9[3]) {
      lVar16 = 2;
      lVar15 = 0;
      do {
        *(undefined4 *)(plVar9[2] + lVar16 * 4) = *(undefined4 *)(lStack_68 + lVar15 * 4);
        lVar15 = lVar15 + 1;
        lVar16 = lVar16 + 3;
      } while (lVar15 < (int)plVar9[3]);
    }
  }
  puStack_a0 = (undefined *)0x146cd2e99;
  FUN_146cd3908(plVar9);
  puStack_a0 = (undefined *)0x146cd2ea1;
  FUN_146cd39f2(plVar9);
  if (lStack_68 != 0) {
    puStack_a0 = (undefined *)0x146cd2eb0;
    FUN_1400020a8();
  }
  if (alStack_58[0] != 0) {
    puStack_a0 = (undefined *)0x146cd2ebf;
    FUN_1400020a8();
  }
  if ((alStack_58[2] ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  puStack_a0 = &UNK_146cd2ee8;
  FUN_144d8e3a0();
}



// FUNCTION 146cd199a FUN_146cd199a body=116 status=ok
// SIG undefined FUN_146cd199a(void)

void FUN_146cd199a(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146cd1b68(param_1,iVar1);
    }
    FUN_144739d1d((longlong)iVar1 * 2 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146cd1bec(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146cd1a10 FUN_146cd1a10 body=114 status=ok
// SIG undefined FUN_146cd1a10(void)

void FUN_146cd1a10(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146cd1c8c(param_1,iVar1);
    }
    FUN_14473a571((longlong)iVar1 * 3 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146cd1d1c(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146cd1a84 FUN_146cd1a84 body=112 status=ok
// SIG undefined FUN_146cd1a84(void)

void FUN_146cd1a84(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146cd1dca(param_1,iVar1);
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_146cd1e48(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146cd1af4 FUN_146cd1af4 body=115 status=ok
// SIG undefined FUN_146cd1af4(void)

void FUN_146cd1af4(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146cd2384(param_1,iVar1);
    }
    FUN_146cd1f61((longlong)iVar1 * 4 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146cd240a(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146cd1b68 FUN_146cd1b68 body=130 status=ok
// SIG undefined FUN_146cd1b68(void)

void FUN_146cd1b68(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 * 2,1);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 1)) {
      uVar5 = uVar3 >> 1 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,2,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146cd1bec FUN_146cd1bec body=63 status=ok
// SIG undefined FUN_146cd1bec(void)

void FUN_146cd1bec(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146cd1c2c(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,2,1);
  }
  return;
}



// FUNCTION 146cd1c2c FUN_146cd1c2c body=95 status=ok
// SIG undefined FUN_146cd1c2c(void)

ulonglong FUN_146cd1c2c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x7fffffffffffe000U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e(param_2 * 2,1);
      uVar1 = uVar1 >> 1;
    }
  }
  return uVar1;
}



// FUNCTION 146cd1c8c FUN_146cd1c8c body=142 status=ok
// SIG undefined FUN_146cd1c8c(void)

void FUN_146cd1c8c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 3,1);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 3)) {
      uVar5 = uVar4 / 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,3,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146cd1d1c FUN_146cd1d1c body=63 status=ok
// SIG undefined FUN_146cd1d1c(void)

void FUN_146cd1d1c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146cd1d5c(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,3,1);
  }
  return;
}



// FUNCTION 146cd1d5c FUN_146cd1d5c body=108 status=ok
// SIG undefined FUN_146cd1d5c(void)

ulonglong FUN_146cd1d5c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 3) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 3,1);
      uVar1 = uVar1 / 3;
    }
  }
  return uVar1;
}



// FUNCTION 146cd1dca FUN_146cd1dca body=124 status=ok
// SIG undefined FUN_146cd1dca(void)

void FUN_146cd1dca(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
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
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146cd1e48 FUN_146cd1e48 body=119 status=ok
// SIG undefined FUN_146cd1e48(void)

void FUN_146cd1e48(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (((uint)(iVar2 - iVar1) < 0x4000) && (iVar2 * 2 <= iVar1 * 3)) {
    return;
  }
  if (iVar1 == 0 || 0x40 < iVar2 - iVar1) {
    if (0 < iVar1) {
      iVar1 = FUN_144a3809e(iVar1,1);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if (iVar1 != iVar2) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,1,1);
    }
  }
  return;
}



// FUNCTION 146cd1ec0 FUN_146cd1ec0 body=63 status=ok
// SIG undefined FUN_146cd1ec0(void)

void FUN_146cd1ec0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146cd1f00(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,1);
  }
  return;
}



// FUNCTION 146cd1f00 FUN_146cd1f00 body=97 status=ok
// SIG undefined FUN_146cd1f00(void)

ulonglong FUN_146cd1f00(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,1);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146cd1f61 FUN_146cd1f61 body=1058 status=ok
// SIG undefined FUN_146cd1f61(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cd1f61(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar18 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar22 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar23 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar24 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  longlong lVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar38 [16];
  
  auVar14 = _DAT_149931e80;
  if (param_2 != 0) {
    lVar15 = (ulonglong)param_2 - 1;
    auVar17._8_4_ = (int)lVar15;
    auVar17._0_8_ = lVar15;
    auVar17._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
    uVar16 = 0;
    auVar18 = pmovsxbq(in_XMM1,0xf0e);
    auVar19 = pmovsxbq(in_XMM2,0xd0c);
    auVar20 = pmovsxbq(in_XMM3,0xb0a);
    auVar21 = pmovsxbq(in_XMM4,0x908);
    auVar22 = pmovsxbq(in_XMM5,0x706);
    auVar23 = pmovsxbq(unaff_XMM6,0x504);
    auVar24 = pmovsxbq(unaff_XMM7,0x302);
    auVar25 = pmovsxbq(unaff_XMM8,0x100);
    do {
      auVar26._8_4_ = (int)uVar16;
      auVar26._0_8_ = uVar16;
      auVar26._12_4_ = (int)(uVar16 >> 0x20);
      auVar28 = auVar17 ^ auVar14;
      auVar30 = (auVar26 | auVar25) ^ auVar14;
      lVar15 = auVar28._0_8_;
      auVar31._0_8_ = -(ulonglong)(lVar15 < auVar30._0_8_);
      lVar29 = auVar28._8_8_;
      auVar31._8_8_ = -(ulonglong)(lVar29 < auVar30._8_8_);
      auVar38 = pshuflw(unaff_XMM14,auVar31,0xe8);
      auVar30._8_4_ = 0xffffffff;
      auVar30._0_8_ = 0xffffffffffffffff;
      auVar30._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar38 ^ auVar30,auVar38 ^ auVar30);
      if ((auVar30._0_4_ & 1) != 0) {
        *(undefined1 *)(param_1 + 3 + uVar16 * 4) = 0;
      }
      auVar31 = packssdw(auVar31,auVar31);
      auVar38._8_4_ = 0xffffffff;
      auVar38._0_8_ = 0xffffffffffffffff;
      auVar38._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar38,auVar31 ^ auVar38);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[1] & 1) != 0) {
        *(undefined1 *)(param_1 + 7 + uVar16 * 4) = 0;
      }
      auVar31 = (auVar26 | auVar24) ^ auVar14;
      auVar32._0_8_ = -(ulonglong)(lVar15 < auVar31._0_8_);
      auVar32._8_8_ = -(ulonglong)(lVar29 < auVar31._8_8_);
      auVar30 = packssdw(auVar30,auVar32);
      auVar1._8_4_ = 0xffffffff;
      auVar1._0_8_ = 0xffffffffffffffff;
      auVar1._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar30 ^ auVar1,auVar30 ^ auVar1);
      auVar30 = packsswb(auVar30,auVar30);
      if ((auVar30[2] & 1) != 0) {
        *(undefined1 *)(param_1 + 0xb + uVar16 * 4) = 0;
      }
      auVar31 = pshufhw(auVar32,auVar32,0x84);
      auVar2._8_4_ = 0xffffffff;
      auVar2._0_8_ = 0xffffffffffffffff;
      auVar2._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar2,auVar31 ^ auVar2);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[3] & 1) != 0) {
        *(undefined1 *)(param_1 + 0xf + uVar16 * 4) = 0;
      }
      auVar31 = (auVar26 | auVar23) ^ auVar14;
      auVar33._0_8_ = -(ulonglong)(lVar15 < auVar31._0_8_);
      auVar33._8_8_ = -(ulonglong)(lVar29 < auVar31._8_8_);
      auVar30 = pshuflw(auVar30,auVar33,0xe8);
      auVar3._8_4_ = 0xffffffff;
      auVar3._0_8_ = 0xffffffffffffffff;
      auVar3._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar30 ^ auVar3,auVar30 ^ auVar3);
      auVar30 = packsswb(auVar30,auVar30);
      if ((auVar30[4] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x13 + uVar16 * 4) = 0;
      }
      auVar31 = packssdw(auVar33,auVar33);
      auVar4._8_4_ = 0xffffffff;
      auVar4._0_8_ = 0xffffffffffffffff;
      auVar4._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar4,auVar31 ^ auVar4);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[5] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x17 + uVar16 * 4) = 0;
      }
      auVar31 = (auVar26 | auVar22) ^ auVar14;
      auVar34._0_8_ = -(ulonglong)(lVar15 < auVar31._0_8_);
      auVar34._8_8_ = -(ulonglong)(lVar29 < auVar31._8_8_);
      auVar30 = packssdw(auVar30,auVar34);
      auVar5._8_4_ = 0xffffffff;
      auVar5._0_8_ = 0xffffffffffffffff;
      auVar5._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar30 ^ auVar5,auVar30 ^ auVar5);
      auVar30 = packsswb(auVar30,auVar30);
      if ((auVar30[6] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x1b + uVar16 * 4) = 0;
      }
      auVar31 = pshufhw(auVar34,auVar34,0x84);
      auVar6._8_4_ = 0xffffffff;
      auVar6._0_8_ = 0xffffffffffffffff;
      auVar6._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar6,auVar31 ^ auVar6);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[7] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x1f + uVar16 * 4) = 0;
      }
      auVar31 = (auVar26 | auVar21) ^ auVar14;
      auVar35._0_8_ = -(ulonglong)(lVar15 < auVar31._0_8_);
      auVar35._8_8_ = -(ulonglong)(lVar29 < auVar31._8_8_);
      auVar30 = pshuflw(auVar30,auVar35,0xe8);
      auVar7._8_4_ = 0xffffffff;
      auVar7._0_8_ = 0xffffffffffffffff;
      auVar7._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar30 ^ auVar7,auVar30 ^ auVar7);
      auVar30 = packsswb(auVar30,auVar30);
      if ((auVar30[8] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x23 + uVar16 * 4) = 0;
      }
      auVar31 = packssdw(auVar35,auVar35);
      auVar8._8_4_ = 0xffffffff;
      auVar8._0_8_ = 0xffffffffffffffff;
      auVar8._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar8,auVar31 ^ auVar8);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[9] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x27 + uVar16 * 4) = 0;
      }
      auVar31 = (auVar26 | auVar20) ^ auVar14;
      auVar36._0_8_ = -(ulonglong)(lVar15 < auVar31._0_8_);
      auVar36._8_8_ = -(ulonglong)(lVar29 < auVar31._8_8_);
      auVar30 = packssdw(auVar30,auVar36);
      auVar9._8_4_ = 0xffffffff;
      auVar9._0_8_ = 0xffffffffffffffff;
      auVar9._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar30 ^ auVar9,auVar30 ^ auVar9);
      auVar30 = packsswb(auVar30,auVar30);
      if ((auVar30[10] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x2b + uVar16 * 4) = 0;
      }
      auVar31 = pshufhw(auVar36,auVar36,0x84);
      auVar10._8_4_ = 0xffffffff;
      auVar10._0_8_ = 0xffffffffffffffff;
      auVar10._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar10,auVar31 ^ auVar10);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[0xb] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x2f + uVar16 * 4) = 0;
      }
      auVar31 = (auVar26 | auVar19) ^ auVar14;
      auVar37._0_8_ = -(ulonglong)(lVar15 < auVar31._0_8_);
      auVar37._8_8_ = -(ulonglong)(lVar29 < auVar31._8_8_);
      auVar30 = pshuflw(auVar30,auVar37,0xe8);
      auVar11._8_4_ = 0xffffffff;
      auVar11._0_8_ = 0xffffffffffffffff;
      auVar11._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar30 ^ auVar11,auVar30 ^ auVar11);
      unaff_XMM14 = packsswb(auVar30,auVar30);
      if ((unaff_XMM14[0xc] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x33 + uVar16 * 4) = 0;
      }
      auVar30 = packssdw(auVar37,auVar37);
      auVar12._8_4_ = 0xffffffff;
      auVar12._0_8_ = 0xffffffffffffffff;
      auVar12._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar30 ^ auVar12,auVar30 ^ auVar12);
      auVar30 = packsswb(auVar30,auVar30);
      if ((auVar30[0xd] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x37 + uVar16 * 4) = 0;
      }
      auVar30 = (auVar26 | auVar18) ^ auVar14;
      auVar27._0_8_ = -(ulonglong)(lVar15 < auVar30._0_8_);
      auVar27._8_8_ = -(ulonglong)(lVar29 < auVar30._8_8_);
      auVar30 = packssdw(auVar28,auVar27);
      auVar28._8_4_ = 0xffffffff;
      auVar28._0_8_ = 0xffffffffffffffff;
      auVar28._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar30 ^ auVar28,auVar30 ^ auVar28);
      auVar30 = packsswb(auVar30,auVar30);
      if ((auVar30[0xe] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x3b + uVar16 * 4) = 0;
      }
      auVar30 = pshufhw(auVar27,auVar27,0x84);
      auVar13._8_4_ = 0xffffffff;
      auVar13._0_8_ = 0xffffffffffffffff;
      auVar13._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar30 ^ auVar13,auVar30 ^ auVar13);
      auVar30 = packsswb(auVar30,auVar30);
      if ((auVar30[0xf] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x3f + uVar16 * 4) = 0;
      }
      uVar16 = uVar16 + 0x10;
    } while (((ulonglong)param_2 + 0xf & 0xfffffffffffffff0) != uVar16);
  }
  return;
}



// FUNCTION 146cd2384 FUN_146cd2384 body=132 status=ok
// SIG undefined FUN_146cd2384(void)

void FUN_146cd2384(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,1);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146cd240a FUN_146cd240a body=63 status=ok
// SIG undefined FUN_146cd240a(void)

void FUN_146cd240a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146cd244a(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,1);
  }
  return;
}



// FUNCTION 146cd244a FUN_146cd244a body=97 status=ok
// SIG undefined FUN_146cd244a(void)

ulonglong FUN_146cd244a(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,1);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146cd24ac FUN_146cd24ac body=208 status=ok
// SIG undefined FUN_146cd24ac(void)

void FUN_146cd24ac(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar1 = param_1 + 0x30;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_144893a1c(lVar1,0);
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if (-2 < iVar5) {
    if (*(int *)(param_1 + 0x3c) < iVar5 / 2) {
      FUN_144893a1c(lVar1);
      iVar5 = *(int *)(param_1 + 0x18);
    }
    if (0 < iVar5) {
      lVar6 = 2;
      lVar7 = 0;
      do {
        lVar4 = *(longlong *)(param_1 + 0x10);
        if (((((ulonglong)*(byte *)(lVar4 + lVar6) != 0xff) &&
             (bVar2 = *(byte *)(lVar4 + -1 + lVar6), bVar2 != 0xff)) &&
            (bVar3 = *(byte *)(lVar4 + 1 + (ulonglong)*(byte *)(lVar4 + lVar6) * 3), bVar3 != 0xff))
           && (bVar2 < bVar3)) {
          iVar5 = *(int *)(param_1 + 0x38);
          *(uint *)(param_1 + 0x38) = iVar5 + 1U;
          if (*(uint *)(param_1 + 0x3c) < iVar5 + 1U) {
            FUN_1447403be(lVar1,iVar5);
          }
          *(char *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar5) = (char)lVar7;
          iVar5 = *(int *)(param_1 + 0x18);
        }
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + 3;
      } while (lVar7 < iVar5);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar5 / 2);
}



// FUNCTION 146cd257e FUN_146cd257e body=115 status=ok
// SIG undefined FUN_146cd257e(void)

void FUN_146cd257e(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146cd27f8(param_1,iVar1);
    }
    FUN_146cd25f2((longlong)iVar1 * 8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146cd287e(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146cd25f2 FUN_146cd25f2 body=518 status=ok
// SIG undefined FUN_146cd25f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cd25f2(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  longlong lVar11;
  undefined1 in_XMM1 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar13 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar14 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar22 [16];
  
  auVar7 = _DAT_149931e80;
  if (param_2 != 0) {
    lVar8 = (ulonglong)param_2 - 1;
    auVar10._8_4_ = (int)lVar8;
    auVar10._0_8_ = lVar8;
    auVar10._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
    uVar9 = 0;
    auVar12 = pmovsxbq(in_XMM1,0x706);
    auVar13 = pmovsxbq(in_XMM2,0x504);
    auVar14 = pmovsxbq(in_XMM3,0x302);
    auVar15 = pmovsxbq(in_XMM4,0x100);
    auVar10 = auVar10 ^ _DAT_149931e80;
    do {
      auVar16._8_4_ = (int)uVar9;
      auVar16._0_8_ = uVar9;
      auVar16._12_4_ = (int)(uVar9 >> 0x20);
      auVar18 = (auVar16 | auVar15) ^ auVar7;
      lVar8 = auVar10._0_8_;
      auVar19._0_8_ = -(ulonglong)(lVar8 < auVar18._0_8_);
      lVar11 = auVar10._8_8_;
      auVar19._8_8_ = -(ulonglong)(lVar11 < auVar18._8_8_);
      auVar22 = pshuflw(unaff_XMM9,auVar19,0xe8);
      auVar18._8_4_ = 0xffffffff;
      auVar18._0_8_ = 0xffffffffffffffff;
      auVar18._12_4_ = 0xffffffff;
      auVar18 = packssdw(auVar22 ^ auVar18,auVar22 ^ auVar18);
      if ((auVar18._0_4_ & 1) != 0) {
        *(undefined2 *)(param_1 + 6 + uVar9 * 8) = 0;
      }
      auVar19 = packssdw(auVar19,auVar19);
      auVar22._8_4_ = 0xffffffff;
      auVar22._0_8_ = 0xffffffffffffffff;
      auVar22._12_4_ = 0xffffffff;
      auVar19 = packssdw(auVar19 ^ auVar22,auVar19 ^ auVar22);
      if ((auVar19[2] & 1) != 0) {
        *(undefined2 *)(param_1 + 0xe + uVar9 * 8) = 0;
      }
      auVar19 = (auVar16 | auVar14) ^ auVar7;
      auVar20._0_8_ = -(ulonglong)(lVar8 < auVar19._0_8_);
      auVar20._8_8_ = -(ulonglong)(lVar11 < auVar19._8_8_);
      auVar18 = packssdw(auVar18,auVar20);
      auVar1._8_4_ = 0xffffffff;
      auVar1._0_8_ = 0xffffffffffffffff;
      auVar1._12_4_ = 0xffffffff;
      auVar18 = packssdw(auVar18 ^ auVar1,auVar18 ^ auVar1);
      if ((auVar18[4] & 1) != 0) {
        *(undefined2 *)(param_1 + 0x16 + uVar9 * 8) = 0;
      }
      auVar19 = pshufhw(auVar20,auVar20,0x84);
      auVar2._8_4_ = 0xffffffff;
      auVar2._0_8_ = 0xffffffffffffffff;
      auVar2._12_4_ = 0xffffffff;
      auVar19 = packssdw(auVar19 ^ auVar2,auVar19 ^ auVar2);
      if ((auVar19[6] & 1) != 0) {
        *(undefined2 *)(param_1 + 0x1e + uVar9 * 8) = 0;
      }
      auVar19 = (auVar16 | auVar13) ^ auVar7;
      auVar21._0_8_ = -(ulonglong)(lVar8 < auVar19._0_8_);
      auVar21._8_8_ = -(ulonglong)(lVar11 < auVar19._8_8_);
      auVar18 = pshuflw(auVar18,auVar21,0xe8);
      auVar3._8_4_ = 0xffffffff;
      auVar3._0_8_ = 0xffffffffffffffff;
      auVar3._12_4_ = 0xffffffff;
      unaff_XMM9 = packssdw(auVar18 ^ auVar3,auVar18 ^ auVar3);
      if ((unaff_XMM9[8] & 1) != 0) {
        *(undefined2 *)(param_1 + 0x26 + uVar9 * 8) = 0;
      }
      auVar18 = packssdw(auVar21,auVar21);
      auVar4._8_4_ = 0xffffffff;
      auVar4._0_8_ = 0xffffffffffffffff;
      auVar4._12_4_ = 0xffffffff;
      auVar18 = packssdw(auVar18 ^ auVar4,auVar18 ^ auVar4);
      if ((auVar18[10] & 1) != 0) {
        *(undefined2 *)(param_1 + 0x2e + uVar9 * 8) = 0;
      }
      auVar16 = (auVar16 | auVar12) ^ auVar7;
      auVar17._0_8_ = -(ulonglong)(lVar8 < auVar16._0_8_);
      auVar17._8_8_ = -(ulonglong)(lVar11 < auVar16._8_8_);
      auVar18 = packssdw(auVar18,auVar17);
      auVar5._8_4_ = 0xffffffff;
      auVar5._0_8_ = 0xffffffffffffffff;
      auVar5._12_4_ = 0xffffffff;
      auVar18 = packssdw(auVar18 ^ auVar5,auVar18 ^ auVar5);
      if ((auVar18[0xc] & 1) != 0) {
        *(undefined2 *)(param_1 + 0x36 + uVar9 * 8) = 0;
      }
      auVar18 = pshufhw(auVar17,auVar17,0x84);
      auVar6._8_4_ = 0xffffffff;
      auVar6._0_8_ = 0xffffffffffffffff;
      auVar6._12_4_ = 0xffffffff;
      auVar18 = packssdw(auVar18 ^ auVar6,auVar18 ^ auVar6);
      if ((auVar18[0xe] & 1) != 0) {
        *(undefined2 *)(param_1 + 0x3e + uVar9 * 8) = 0;
      }
      uVar9 = uVar9 + 8;
    } while (((ulonglong)param_2 + 7 & 0xfffffffffffffff8) != uVar9);
  }
  return;
}



// FUNCTION 146cd27f8 FUN_146cd27f8 body=132 status=ok
// SIG undefined FUN_146cd27f8(void)

void FUN_146cd27f8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146cd287e FUN_146cd287e body=63 status=ok
// SIG undefined FUN_146cd287e(void)

void FUN_146cd287e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146cd28be(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,2);
  }
  return;
}



// FUNCTION 146cd28be FUN_146cd28be body=97 status=ok
// SIG undefined FUN_146cd28be(void)

ulonglong FUN_146cd28be(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,2);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146cd2920 FUN_146cd2920 body=792 status=ok
// SIG undefined FUN_146cd2920(void)

undefined8 FUN_146cd2920(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  int local_7c;
  longlong *local_78;
  longlong *local_70;
  longlong local_68 [5];
  
  local_68[4] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar7 = (longlong)(int)param_2[1];
  iVar15 = 0;
  if (0 < lVar7) {
    lVar12 = 0;
    iVar15 = 0;
    do {
      iVar15 = iVar15 + *(int *)(*param_2 + 8 + lVar12);
      lVar12 = lVar12 + 0x10;
    } while (lVar7 << 4 != lVar12);
  }
  FUN_146cd2eea(param_1,lVar7,1);
  local_88 = param_1 + 2;
  FUN_146cd2f5e(local_88,iVar15,1);
  FUN_146cd2fd4(param_1 + 4,param_3,1);
  FUN_146cd3048(param_1 + 8,param_3,1);
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_146cd30bc(local_68 + 2,param_3,1);
  FUN_144a1a59e(local_68,iVar15);
  if (0 < (int)param_1[5]) {
    lVar7 = 0;
    do {
      *(undefined4 *)(param_1[4] + lVar7 * 4) = 0x80000000;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)param_1[5]);
  }
  if (0 < (int)param_2[1]) {
    lVar7 = 0;
    iVar15 = 0;
    do {
      lVar12 = *param_2;
      lVar5 = lVar7 * 0x10;
      uVar2 = *(undefined4 *)(lVar12 + 8 + lVar5);
      lVar9 = *param_1;
      *(int *)(lVar9 + lVar7 * 8) = iVar15;
      *(undefined4 *)(lVar9 + 4 + lVar7 * 8) = uVar2;
      uVar3 = *(uint *)(lVar12 + 8 + lVar5);
      uVar13 = (ulonglong)uVar3;
      iVar6 = iVar15;
      if (0 < (int)uVar3) {
        lVar9 = (longlong)iVar15 * 3 + 2;
        uVar10 = 0;
        do {
          lVar14 = *(longlong *)(lVar12 + lVar5);
          iVar6 = *(int *)(lVar14 + uVar10 * 4);
          lVar8 = (longlong)iVar6;
          uVar11 = uVar10 + 1;
          uVar2 = *(undefined4 *)
                   (lVar14 + ((longlong)
                              ((ulonglong)(uint)((int)uVar11 >> 0x1f) << 0x20 | uVar11 & 0xffffffff)
                              % (longlong)(int)uVar13 & 0xffffffffU) * 4);
          lVar14 = *local_88;
          *(int *)(lVar14 + -8 + lVar9 * 4) = (int)lVar7;
          *(int *)(lVar14 + -4 + lVar9 * 4) = iVar6;
          *(undefined4 *)(lVar14 + lVar9 * 4) = uVar2;
          *(undefined4 *)(local_68[0] + (longlong)iVar15 * 4 + uVar10 * 4) = uVar2;
          lVar14 = param_1[4];
          iVar6 = (int)uVar10 + iVar15;
          if (SBORROW4(0,*(int *)(lVar14 + lVar8 * 4))) {
            *(int *)(lVar14 + lVar8 * 4) = iVar6;
          }
          lVar8 = lVar8 * 0x10;
          iVar4 = *(int *)(local_68[2] + 0xc + lVar8);
          *(int *)(local_68[2] + 0xc + lVar8) = iVar4 + 1;
          *(int *)(local_68[2] + lVar8 + (longlong)iVar4 * 4) = iVar6;
          lVar14 = param_1[8];
          iVar6 = *(int *)(lVar14 + 0xc + lVar8);
          *(int *)(lVar14 + 0xc + lVar8) = iVar6 + 1;
          *(int *)(lVar14 + lVar8 + (longlong)iVar6 * 4) = (int)lVar7;
          uVar13 = (ulonglong)(int)((longlong *)(lVar12 + lVar5))[1];
          lVar9 = lVar9 + 3;
          uVar10 = uVar11;
        } while ((longlong)uVar11 < (longlong)uVar13);
        iVar6 = iVar15 + (int)uVar11;
        local_7c = iVar15;
      }
      iVar15 = iVar6;
      lVar7 = lVar7 + 1;
      local_78 = param_2;
      local_70 = param_1;
    } while (lVar7 < (int)param_2[1]);
  }
  plVar1 = param_1 + 6;
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    FUN_14481578e(plVar1,0);
  }
  iVar15 = (int)param_1[3];
  if (iVar15 < -1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar15 / 2);
  }
  if (*(int *)((longlong)param_1 + 0x3c) < iVar15 / 2) {
    FUN_14481578e(plVar1);
    iVar15 = (int)param_1[3];
  }
  if (0 < iVar15) {
    lVar7 = 0;
    do {
      lVar12 = *local_88;
      iVar15 = *(int *)(lVar12 + 4 + lVar7 * 0xc);
      lVar5 = (longlong)*(int *)(lVar12 + 8 + lVar7 * 0xc) * 0x10;
      lVar9 = (longlong)*(int *)(local_68[2] + 0xc + lVar5);
      if (0 < lVar9) {
        lVar14 = 0;
        do {
          iVar6 = *(int *)(local_68[2] + lVar5 + lVar14 * 4);
          if (*(int *)(local_68[0] + (longlong)iVar6 * 4) == iVar15) {
            *(int *)(lVar12 + 8 + lVar7 * 0xc) = iVar6;
            lVar12 = *local_88;
            break;
          }
          lVar14 = lVar14 + 1;
        } while (lVar9 != lVar14);
      }
      if (iVar15 < *(int *)(lVar12 + 4 + (longlong)*(int *)(lVar12 + 8 + lVar7 * 0xc) * 0xc)) {
        iVar15 = (int)param_1[7];
        *(uint *)(param_1 + 7) = iVar15 + 1U;
        if (*(uint *)((longlong)param_1 + 0x3c) < iVar15 + 1U) {
          FUN_1446f48e2(plVar1,iVar15);
        }
        *(int *)(*plVar1 + (longlong)iVar15 * 4) = (int)lVar7;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)param_1[3]);
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_68[4] ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 146cd2c3a FUN_146cd2c3a body=686 status=ok
// SIG undefined FUN_146cd2c3a(void)

undefined8 FUN_146cd2c3a(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar9 = (longlong)(int)param_2[1];
  iVar14 = 0;
  if (0 < lVar9) {
    lVar11 = 0;
    iVar14 = 0;
    do {
      iVar14 = iVar14 + *(int *)(*param_2 + 8 + lVar11);
      lVar11 = lVar11 + 0x10;
    } while (lVar9 << 4 != lVar11);
  }
  FUN_146cd2eea(param_1,lVar9,1);
  plVar1 = param_1 + 2;
  FUN_146cd2f5e(plVar1,iVar14,1);
  FUN_146cd2fd4(param_1 + 4,param_3);
  if (0 < (int)param_1[5]) {
    lVar9 = 0;
    do {
      *(undefined4 *)(param_1[4] + lVar9 * 4) = 0x80000000;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)param_1[5]);
  }
  if (0 < (int)param_2[1]) {
    lVar9 = 0;
    iVar14 = 0;
    do {
      lVar11 = *param_2;
      lVar7 = lVar9 * 0x10;
      uVar3 = *(undefined4 *)(lVar11 + 8 + lVar7);
      lVar12 = *param_1;
      *(int *)(lVar12 + lVar9 * 8) = iVar14;
      *(undefined4 *)(lVar12 + 4 + lVar9 * 8) = uVar3;
      uVar4 = *(uint *)(lVar11 + 8 + lVar7);
      uVar13 = (ulonglong)uVar4;
      if (0 < (int)uVar4) {
        lVar12 = (longlong)iVar14 * 3 + 2;
        uVar8 = 0;
        do {
          lVar6 = *(longlong *)(lVar11 + lVar7);
          iVar5 = *(int *)(lVar6 + uVar8 * 4);
          uVar2 = uVar8 + 1;
          uVar3 = *(undefined4 *)
                   (lVar6 + ((longlong)
                             ((ulonglong)(uint)((int)uVar2 >> 0x1f) << 0x20 | uVar2 & 0xffffffff) %
                             (longlong)(int)uVar13 & 0xffffffffU) * 4);
          lVar6 = *plVar1;
          *(int *)(lVar6 + -8 + lVar12 * 4) = (int)lVar9;
          *(int *)(lVar6 + -4 + lVar12 * 4) = iVar5;
          *(undefined4 *)(lVar6 + lVar12 * 4) = uVar3;
          lVar6 = param_1[4];
          if (SBORROW4(0,*(int *)(lVar6 + (longlong)iVar5 * 4))) {
            *(int *)(lVar6 + (longlong)iVar5 * 4) = (int)uVar8 + iVar14;
          }
          uVar13 = (ulonglong)(int)((longlong *)(lVar11 + lVar7))[1];
          lVar12 = lVar12 + 3;
          uVar8 = uVar2;
        } while ((longlong)uVar2 < (longlong)uVar13);
        iVar14 = iVar14 + (int)uVar2;
      }
      lVar9 = lVar9 + 1;
      local_78 = param_2;
      local_70 = param_1;
    } while (lVar9 < (int)param_2[1]);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_144a1a59e(&local_68,(int)param_1[3],1);
  FUN_1448c4dd6(local_58,(int)param_1[3],1);
  if (0 < (int)uStack_60) {
    lVar9 = 0;
    do {
      *(undefined4 *)(local_68 + lVar9 * 4) = 0x80000000;
      *(undefined1 *)(local_58[0] + lVar9) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)uStack_60);
  }
  uVar13 = (ulonglong)*(uint *)(param_1 + 3);
  if (0 < (int)*(uint *)(param_1 + 3)) {
    lVar9 = 0;
    do {
      if (0 < (int)uVar13) {
        lVar11 = *plVar1;
        piVar10 = (int *)(lVar11 + 8);
        uVar8 = 0;
        do {
          if ((piVar10[-1] == *(int *)(lVar11 + 8 + lVar9 * 0xc)) &&
             (*piVar10 == *(int *)(lVar11 + 4 + lVar9 * 0xc))) {
            if (*(char *)(local_58[0] + uVar8) == '\0') {
              *(int *)(local_68 + lVar9 * 4) = (int)uVar8;
              *(undefined1 *)(local_58[0] + uVar8) = 1;
            }
            else {
              *(undefined4 *)(local_68 + lVar9 * 4) = 0x80000000;
            }
            break;
          }
          uVar8 = uVar8 + 1;
          piVar10 = piVar10 + 3;
        } while ((uVar13 & 0xffffffff) != uVar8);
      }
      lVar9 = lVar9 + 1;
      uVar13 = (ulonglong)(int)param_1[3];
    } while (lVar9 < (longlong)uVar13);
    if (0 < (int)param_1[3]) {
      lVar9 = 2;
      lVar11 = 0;
      do {
        *(undefined4 *)(param_1[2] + lVar9 * 4) = *(undefined4 *)(local_68 + lVar11 * 4);
        lVar11 = lVar11 + 1;
        lVar9 = lVar9 + 3;
      } while (lVar11 < (int)param_1[3]);
    }
  }
  FUN_146cd3908(param_1);
  FUN_146cd39f2(param_1);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[2] ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd2eea FUN_146cd2eea body=115 status=ok
// SIG undefined FUN_146cd2eea(void)

void FUN_146cd2eea(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146cd3132(param_1,iVar1);
    }
    FUN_146cd3130((longlong)iVar1 * 8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146cd31b8(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146cd2f5e FUN_146cd2f5e body=116 status=ok
// SIG undefined FUN_146cd2f5e(void)

void FUN_146cd2f5e(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146cd325a(param_1,iVar1);
    }
    FUN_146cd3259((longlong)iVar1 * 0xc + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146cd32ee(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146cd2fd4 FUN_146cd2fd4 body=115 status=ok
// SIG undefined FUN_146cd2fd4(void)

void FUN_146cd2fd4(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146cd33a4(param_1,iVar1);
    }
    FUN_146cd33a3((longlong)iVar1 * 4 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146cd342a(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146cd3048 FUN_146cd3048 body=115 status=ok
// SIG undefined FUN_146cd3048(void)

void FUN_146cd3048(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146cd35c2(param_1,iVar1);
    }
    FUN_146cd34cb((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146cd3648(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146cd30bc FUN_146cd30bc body=115 status=ok
// SIG undefined FUN_146cd30bc(void)

void FUN_146cd30bc(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146cd37e0(param_1,iVar1);
    }
    FUN_146cd36e9((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146cd3866(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146cd3130 FUN_146cd3130 body=1 status=ok
// SIG undefined FUN_146cd3130(void)

void FUN_146cd3130(void)

{
  return;
}



// FUNCTION 146cd3132 FUN_146cd3132 body=132 status=ok
// SIG undefined FUN_146cd3132(void)

void FUN_146cd3132(longlong param_1,int param_2)

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



// FUNCTION 146cd31b8 FUN_146cd31b8 body=63 status=ok
// SIG undefined FUN_146cd31b8(void)

void FUN_146cd31b8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146cd31f8(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 146cd31f8 FUN_146cd31f8 body=97 status=ok
// SIG undefined FUN_146cd31f8(void)

ulonglong FUN_146cd31f8(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146cd3259 FUN_146cd3259 body=1 status=ok
// SIG undefined FUN_146cd3259(void)

void FUN_146cd3259(void)

{
  return;
}



// FUNCTION 146cd325a FUN_146cd325a body=147 status=ok
// SIG undefined FUN_146cd325a(void)

void FUN_146cd325a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146cd32ee FUN_146cd32ee body=63 status=ok
// SIG undefined FUN_146cd32ee(void)

void FUN_146cd32ee(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146cd332e(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 146cd332e FUN_146cd332e body=117 status=ok
// SIG undefined FUN_146cd332e(void)

ulonglong FUN_146cd332e(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0xc) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc,4);
      uVar1 = uVar1 / 0xc;
    }
  }
  return uVar1;
}



// FUNCTION 146cd33a3 FUN_146cd33a3 body=1 status=ok
// SIG undefined FUN_146cd33a3(void)

void FUN_146cd33a3(void)

{
  return;
}



// FUNCTION 146cd33a4 FUN_146cd33a4 body=132 status=ok
// SIG undefined FUN_146cd33a4(void)

void FUN_146cd33a4(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146cd342a FUN_146cd342a body=63 status=ok
// SIG undefined FUN_146cd342a(void)

void FUN_146cd342a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146cd346a(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 146cd346a FUN_146cd346a body=97 status=ok
// SIG undefined FUN_146cd346a(void)

ulonglong FUN_146cd346a(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146cd34cb FUN_146cd34cb body=247 status=ok
// SIG undefined FUN_146cd34cb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cd34cb(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  undefined1 in_XMM1 [16];
  undefined1 auVar7 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar1 = _DAT_149931e80;
  if (param_2 != 0) {
    lVar3 = (ulonglong)param_2 - 1;
    auVar5._8_4_ = (int)lVar3;
    auVar5._0_8_ = lVar3;
    auVar5._12_4_ = (int)((ulonglong)lVar3 >> 0x20);
    puVar2 = (undefined4 *)(param_1 + 0x3c);
    uVar4 = 0;
    auVar7 = pmovsxbq(in_XMM1,0x302);
    auVar8 = pmovsxbq(in_XMM2,0x100);
    auVar5 = auVar5 ^ _DAT_149931e80;
    do {
      lVar3 = auVar5._0_8_;
      lVar6 = auVar5._8_8_;
      if ((bool)(~(lVar3 < (longlong)(uVar4 ^ auVar1._0_8_)) & 1)) {
        puVar2[-0xc] = 0;
      }
      auVar9._8_4_ = (int)uVar4;
      auVar9._0_8_ = uVar4;
      auVar9._12_4_ = (int)(uVar4 >> 0x20);
      if ((longlong)((auVar9._8_8_ | auVar8._8_8_) ^ auVar1._8_8_) <= lVar6) {
        puVar2[-8] = 0;
      }
      auVar9 = (auVar9 | auVar7) ^ auVar1;
      if (auVar9._0_8_ <= lVar3) {
        puVar2[-4] = 0;
      }
      if (auVar9._8_8_ <= lVar6) {
        *puVar2 = 0;
      }
      uVar4 = uVar4 + 4;
      puVar2 = puVar2 + 0x10;
    } while (((ulonglong)param_2 + 3 & 0xfffffffffffffffc) != uVar4);
  }
  return;
}



// FUNCTION 146cd35c2 FUN_146cd35c2 body=132 status=ok
// SIG undefined FUN_146cd35c2(void)

void FUN_146cd35c2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146cd3648 FUN_146cd3648 body=63 status=ok
// SIG undefined FUN_146cd3648(void)

void FUN_146cd3648(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146cd3688(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 146cd3688 FUN_146cd3688 body=97 status=ok
// SIG undefined FUN_146cd3688(void)

ulonglong FUN_146cd3688(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146cd36e9 FUN_146cd36e9 body=247 status=ok
// SIG undefined FUN_146cd36e9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cd36e9(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  undefined1 in_XMM1 [16];
  undefined1 auVar7 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar1 = _DAT_149931e80;
  if (param_2 != 0) {
    lVar3 = (ulonglong)param_2 - 1;
    auVar5._8_4_ = (int)lVar3;
    auVar5._0_8_ = lVar3;
    auVar5._12_4_ = (int)((ulonglong)lVar3 >> 0x20);
    puVar2 = (undefined4 *)(param_1 + 0x3c);
    uVar4 = 0;
    auVar7 = pmovsxbq(in_XMM1,0x302);
    auVar8 = pmovsxbq(in_XMM2,0x100);
    auVar5 = auVar5 ^ _DAT_149931e80;
    do {
      lVar3 = auVar5._0_8_;
      lVar6 = auVar5._8_8_;
      if ((bool)(~(lVar3 < (longlong)(uVar4 ^ auVar1._0_8_)) & 1)) {
        puVar2[-0xc] = 0;
      }
      auVar9._8_4_ = (int)uVar4;
      auVar9._0_8_ = uVar4;
      auVar9._12_4_ = (int)(uVar4 >> 0x20);
      if ((longlong)((auVar9._8_8_ | auVar8._8_8_) ^ auVar1._8_8_) <= lVar6) {
        puVar2[-8] = 0;
      }
      auVar9 = (auVar9 | auVar7) ^ auVar1;
      if (auVar9._0_8_ <= lVar3) {
        puVar2[-4] = 0;
      }
      if (auVar9._8_8_ <= lVar6) {
        *puVar2 = 0;
      }
      uVar4 = uVar4 + 4;
      puVar2 = puVar2 + 0x10;
    } while (((ulonglong)param_2 + 3 & 0xfffffffffffffffc) != uVar4);
  }
  return;
}



// FUNCTION 146cd37e0 FUN_146cd37e0 body=132 status=ok
// SIG undefined FUN_146cd37e0(void)

void FUN_146cd37e0(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146cd3866 FUN_146cd3866 body=63 status=ok
// SIG undefined FUN_146cd3866(void)

void FUN_146cd3866(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146cd38a6(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 146cd38a6 FUN_146cd38a6 body=97 status=ok
// SIG undefined FUN_146cd38a6(void)

ulonglong FUN_146cd38a6(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146cd3908 FUN_146cd3908 body=234 status=ok
// SIG undefined FUN_146cd3908(void)

void FUN_146cd3908(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  FUN_146cd3048(param_1 + 8,(int)param_1[5],1);
  if (0 < (int)param_1[5]) {
    lVar4 = 0;
    do {
      lVar6 = param_1[8];
      puVar1 = (undefined8 *)(lVar6 + lVar4 * 0x10);
      *puVar1 = 0xffffffffffffffff;
      puVar1[1] = 0xffffffff;
      iVar2 = *(int *)(param_1[4] + lVar4 * 4);
      if (!SBORROW4(0,iVar2)) {
        lVar6 = lVar6 + lVar4 * 0x10;
        iVar5 = iVar2;
        iVar7 = 0;
        while( true ) {
          if (iVar7 < 3) {
            *(undefined4 *)(lVar6 + (longlong)iVar7 * 4) =
                 *(undefined4 *)(param_1[2] + (longlong)iVar5 * 0xc);
            iVar7 = *(int *)(lVar6 + 0xc);
          }
          *(int *)(lVar6 + 0xc) = iVar7 + 1;
          if ((int)param_1[1] <= iVar7) break;
          iVar3 = *(int *)(param_1[2] + 8 + (longlong)iVar5 * 0xc);
          if ((((longlong)iVar3 == -0x80000000) ||
              (lVar8 = (longlong)*(int *)(param_1[2] + (longlong)iVar3 * 0xc),
              iVar5 = *(int *)(*param_1 + lVar8 * 8),
              iVar5 = ((iVar3 - iVar5) + 1) % *(int *)(*param_1 + 4 + lVar8 * 8) + iVar5,
              iVar5 == iVar2)) || (iVar7 = iVar7 + 1, SBORROW4(0,iVar5))) goto LAB_146cd3953;
        }
        *(undefined4 *)(lVar6 + 0xc) = 0;
      }
LAB_146cd3953:
      lVar4 = lVar4 + 1;
    } while (lVar4 < (int)param_1[5]);
  }
  return;
}



// FUNCTION 146cd39f2 FUN_146cd39f2 body=202 status=ok
// SIG undefined FUN_146cd39f2(void)

void FUN_146cd39f2(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = param_1 + 0x30;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_14481578e(lVar1,0);
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (-2 < iVar4) {
    if (*(int *)(param_1 + 0x3c) < iVar4 / 2) {
      FUN_14481578e(lVar1);
      iVar4 = *(int *)(param_1 + 0x18);
    }
    if (0 < iVar4) {
      lVar5 = 8;
      lVar6 = 0;
      do {
        lVar3 = *(longlong *)(param_1 + 0x10);
        if ((longlong)*(int *)(lVar3 + lVar5) != -0x80000000) {
          iVar2 = *(int *)(lVar3 + -4 + lVar5);
          if ((!SBORROW4(0,iVar2)) &&
             (iVar2 < *(int *)(lVar3 + 4 + (longlong)*(int *)(lVar3 + lVar5) * 0xc))) {
            iVar4 = *(int *)(param_1 + 0x38);
            *(uint *)(param_1 + 0x38) = iVar4 + 1U;
            if (*(uint *)(param_1 + 0x3c) < iVar4 + 1U) {
              FUN_1446f48e2(lVar1,iVar4,iVar2,-iVar2);
            }
            *(int *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar4 * 4) = (int)lVar6;
            iVar4 = *(int *)(param_1 + 0x18);
          }
        }
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0xc;
      } while (lVar6 < iVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar4 / 2);
}



// FUNCTION 146cd3abe FUN_146cd3abe body=89 status=ok
// SIG undefined FUN_146cd3abe(void)

void FUN_146cd3abe(longlong *param_1)

{
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



// FUNCTION 146cd3b17 FUN_146cd3b17 body=127 status=ok
// SIG undefined FUN_146cd3b17(void)

longlong * FUN_146cd3b17(longlong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,1);
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,1);
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  return param_1;
}



// FUNCTION 146cd3b96 FUN_146cd3b96 body=180 status=ok
// SIG undefined FUN_146cd3b96(void)

longlong * FUN_146cd3b96(longlong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,1);
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,1);
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,1);
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  return param_1;
}



// FUNCTION 146cd3c4a FUN_146cd3c4a body=88 status=ok
// SIG undefined FUN_146cd3c4a(void)

void FUN_146cd3c4a(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_144a3809e((longlong)param_2,1);
    iVar2 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  if (iVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar2,1,1);
  }
  return;
}



// FUNCTION 146cd3ca2 FUN_146cd3ca2 body=153 status=ok
// SIG undefined FUN_146cd3ca2(void)

void FUN_146cd3ca2(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbf8);
  FUN_146cd3d3c(param_2,param_1);
  FUN_146cd3ff0(param_2,param_1 + 0x10);
  FUN_146cd430e(param_2,param_1 + 0x20);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3cbf8);
  if (0xd < iVar1) {
    FUN_1403b0476(param_2,param_1 + 0x30);
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    if (((*(int *)(param_1 + 0x38) == 0) && (0 < *(int *)(param_1 + 0x18))) &&
       (FUN_146cd39f2(param_1), (*(byte *)(param_2 + 5) & 1) == 0)) {
      return;
    }
    FUN_146cd3908(param_1);
    return;
  }
  return;
}



// FUNCTION 146cd3d3c FUN_146cd3d3c body=362 status=ok
// SIG undefined FUN_146cd3d3c(void)

longlong * FUN_146cd3d3c(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_146cd3f90(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_146cd3ea7(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_146cd3f90(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_146cd3f50(param_2);
        FUN_146cd3ea7(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146cd3ea7 FUN_146cd3ea7 body=168 status=ok
// SIG undefined FUN_146cd3ea7(void)

longlong * FUN_146cd3ea7(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 1;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 146cd3f50 FUN_146cd3f50 body=64 status=ok
// SIG undefined FUN_146cd3f50(void)

longlong FUN_146cd3f50(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146cd3132(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 8 + *param_1;
  FUN_146cd3130(lVar2,1);
  return lVar2;
}



// FUNCTION 146cd3f90 FUN_146cd3f90 body=96 status=ok
// SIG undefined FUN_146cd3f90(void)

void FUN_146cd3f90(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 146cd3ff0 FUN_146cd3ff0 body=370 status=ok
// SIG undefined FUN_146cd3ff0(void)

longlong * FUN_146cd3ff0(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_146cd429c(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x155555 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_146cd4163(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0xc;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_146cd429c(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_146cd4258(param_2);
        FUN_146cd4163(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146cd4163 FUN_146cd4163 body=244 status=ok
// SIG undefined FUN_146cd4163(void)

longlong * FUN_146cd4163(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 2;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 146cd4258 FUN_146cd4258 body=68 status=ok
// SIG undefined FUN_146cd4258(void)

longlong FUN_146cd4258(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146cd325a(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xc + *param_1;
  FUN_146cd3259(lVar2,1);
  return lVar2;
}



// FUNCTION 146cd429c FUN_146cd429c body=113 status=ok
// SIG undefined FUN_146cd429c(void)

void FUN_146cd429c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 146cd430e FUN_146cd430e body=362 status=ok
// SIG undefined FUN_146cd430e(void)

longlong * FUN_146cd430e(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 2,(longlong)*(int *)((longlong)param_2 + 0xc) << 2
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_146cd450c(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x400000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_146cd4479(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 4;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_146cd450c(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_146cd44cc(param_2);
        FUN_146cd4479(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146cd4479 FUN_146cd4479 body=82 status=ok
// SIG undefined FUN_146cd4479(void)

longlong * FUN_146cd4479(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 146cd44cc FUN_146cd44cc body=64 status=ok
// SIG undefined FUN_146cd44cc(void)

longlong FUN_146cd44cc(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146cd33a4(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 4 + *param_1;
  FUN_146cd33a3(lVar2,1);
  return lVar2;
}



// FUNCTION 146cd450c FUN_146cd450c body=96 status=ok
// SIG undefined FUN_146cd450c(void)

void FUN_146cd450c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 2,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 146cd456c FUN_146cd456c body=61 status=ok
// SIG undefined FUN_146cd456c(void)

void FUN_146cd456c(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    FUN_1403b0d30(param_1);
    return;
  }
  FUN_144716727(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 146cd45aa FUN_146cd45aa body=212 status=ok
// SIG undefined FUN_146cd45aa(void)

void FUN_146cd45aa(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_58 [36];
  float local_34;
  float local_30;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = (int)param_2[1];
  fVar5 = 0.0;
  local_30 = 0.0;
  local_34 = 0.0;
  if (0 < (longlong)iVar1) {
    lVar2 = *param_3;
    lVar3 = 0;
    do {
      lVar4 = (longlong)*(int *)(*param_2 + lVar3 * 4);
      local_34 = local_34 + *(float *)(lVar2 + lVar4 * 0xc);
      local_30 = local_30 + *(float *)(lVar2 + 4 + lVar4 * 0xc);
      fVar5 = fVar5 + *(float *)(lVar2 + 8 + lVar4 * 0xc);
      lVar3 = lVar3 + 1;
    } while (iVar1 != lVar3);
  }
  local_2c = 1.0 / (float)iVar1;
  local_34 = local_34 * local_2c;
  local_30 = local_30 * local_2c;
  local_2c = local_2c * fVar5;
  FUN_146cd472e(param_1,param_2,param_3,&local_34);
  FUN_146cd49ac(param_1,param_2,param_3,&local_34);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd4680 FUN_146cd4680 body=173 status=ok
// SIG undefined FUN_146cd4680(void)

void FUN_146cd4680(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = (int)param_1[1];
  if (0 < iVar1) {
    uVar2 = 0;
    do {
      if (*(int *)(*param_2 + 8 + (longlong)(int)uVar2 * 0x10) < 3) {
        FUN_146cd5462(param_2,uVar2);
        FUN_1467b1020(param_2);
        iVar1 = (int)param_1[1];
        iVar3 = ~uVar2 + iVar1;
        if (iVar3 != 0) {
          if (0 < iVar3) {
            iVar3 = 1;
          }
          memmove((void *)(*param_1 + (longlong)(int)uVar2 * 0x18),
                  (void *)(*param_1 + (longlong)(iVar1 - iVar3) * 0x18),(longlong)iVar3 * 0x18);
          iVar1 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar1 + -1;
        FUN_146ccfa2e(param_1);
        iVar1 = (int)param_1[1];
      }
      else {
        uVar2 = uVar2 + 1;
      }
    } while ((int)uVar2 < iVar1);
  }
  return;
}



// FUNCTION 146cd472e FUN_146cd472e body=637 status=ok
// SIG undefined FUN_146cd472e(void)

void FUN_146cd472e(longlong param_1,undefined8 *param_2,undefined8 param_3,double param_4)

{
  undefined1 auStack_218 [40];
  double *local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double *local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_1e0 = (double)*(float *)(param_1 + 0x14);
  local_1e8 = (double)*(float *)(param_1 + 0x10);
  local_1f0 = (double *)(double)*(float *)(param_1 + 0xc);
  FUN_140d92ea8(&local_1d8,&local_1f0);
  local_158 = (double)(float)local_1d8;
  local_150 = (double)(float)(double)local_1d0;
  local_148 = (double)(float)local_1c8;
  local_140 = (double)(float)local_1c0;
  local_138 = (double)(float)local_1b8;
  local_130 = (double)(float)local_1b0;
  local_128 = (double)(float)local_1a8;
  local_120 = (double)(float)local_1a0;
  local_118 = (double)(float)local_198;
  local_110 = (double)(float)local_190;
  local_108 = (double)(float)local_188;
  local_100 = (double)(float)local_180;
  local_f8 = (double)(float)local_178;
  local_f0 = (double)(float)local_170;
  local_e8 = (double)(float)local_168;
  local_e0 = (double)(float)local_160;
  local_1d0 = &local_158;
  local_1f0 = &local_1d8;
  local_1d8 = param_4;
  local_1c8 = (double)param_3;
  FUN_146cd4d30(*param_2,*(undefined4 *)(param_2 + 1),local_148,&local_1f0);
  if ((local_d0 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd49ac FUN_146cd49ac body=899 status=ok
// SIG undefined FUN_146cd49ac(void)

void FUN_146cd49ac(longlong param_1,longlong *param_2,longlong *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  int *local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar3 = *(uint *)(param_2 + 1);
  if (2 < (int)uVar3) {
    lVar16 = *param_2;
    lVar9 = *param_3;
    fVar18 = -3.4028235e+38;
    uVar8 = 0;
    uVar14 = 0;
    do {
      lVar10 = (longlong)*(int *)(lVar16 + uVar8 * 4);
      fVar19 = *(float *)(lVar9 + 8 + lVar10 * 0xc) - param_4[2];
      fVar20 = *(float *)(lVar9 + lVar10 * 0xc) - *param_4;
      fVar21 = *(float *)(lVar9 + 4 + lVar10 * 0xc) - param_4[1];
      fVar19 = fVar19 * fVar19 + fVar20 * fVar20 + fVar21 * fVar21;
      if (fVar18 < fVar19) {
        uVar14 = uVar8 & 0xffffffff;
        fVar18 = fVar19;
      }
      uVar8 = uVar8 + 1;
    } while (uVar3 != uVar8);
    iVar13 = (int)uVar14;
    iVar15 = *(int *)(lVar16 + (longlong)iVar13 * 4);
    lVar10 = (longlong)iVar15;
    iVar4 = *(int *)(lVar16 + (longlong)((iVar13 + 1) % (int)uVar3) * 4);
    lVar9 = (longlong)iVar4;
    local_a8 = (int *)0x0;
    uStack_a0._0_4_ = 1;
    uStack_a0._4_4_ = 0;
    FUN_146cd533a(&local_a8,0);
    iVar6 = (int)uStack_a0;
    *local_a8 = iVar15;
    local_a8[1] = 0;
    local_a8[2] = 0;
    local_a8[3] = 0;
    lVar16 = *param_3;
    fVar18 = *(float *)(lVar16 + 8 + lVar9 * 0xc);
    fVar19 = *(float *)(lVar16 + 8 + lVar10 * 0xc);
    fVar20 = *(float *)(lVar16 + 4 + lVar9 * 0xc);
    fVar21 = *(float *)(lVar16 + 4 + lVar10 * 0xc);
    fVar1 = *(float *)(lVar16 + lVar9 * 0xc);
    fVar2 = *(float *)(lVar16 + lVar10 * 0xc);
    lVar16 = (longlong)(int)uStack_a0;
    uVar7 = (int)uStack_a0 + 1;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar7);
    local_b0 = lVar10;
    if (uStack_a0._4_4_ < uVar7) {
      FUN_146cd533a(&local_a8,iVar6);
    }
    local_a8[lVar16 * 4] = iVar4;
    local_a8[lVar16 * 4 + 1] = (int)(fVar1 - fVar2);
    local_a8[lVar16 * 4 + 2] = (int)(fVar20 - fVar21);
    local_a8[lVar16 * 4 + 3] = (int)(fVar18 - fVar19);
    iVar15 = 2;
    lVar16 = local_b0;
    do {
      uVar14 = uStack_a0;
      lVar17 = (longlong)(int)uStack_a0;
      lVar11 = (longlong)((int)uStack_a0 + -1);
      lVar12 = (longlong)local_a8[lVar11 * 4];
      iVar4 = *(int *)(*param_2 + (longlong)((iVar15 + iVar13) % (int)uVar3) * 4);
      lVar10 = (longlong)iVar4;
      lVar9 = *param_3;
      fVar18 = *(float *)(lVar9 + 8 + lVar10 * 0xc) - *(float *)(lVar9 + 8 + lVar12 * 0xc);
      fVar19 = *(float *)(lVar9 + 4 + lVar10 * 0xc) - *(float *)(lVar9 + 4 + lVar12 * 0xc);
      fVar20 = *(float *)(lVar9 + lVar10 * 0xc) - *(float *)(lVar9 + lVar12 * 0xc);
      if (((float)local_a8[lVar11 * 4 + 1] * fVar19 - fVar20 * (float)local_a8[lVar11 * 4 + 2]) *
          *(float *)(param_1 + 0x14) +
          ((float)local_a8[lVar11 * 4 + 2] * fVar18 - (float)local_a8[lVar11 * 4 + 3] * fVar19) *
          *(float *)(param_1 + 0xc) +
          ((float)local_a8[lVar11 * 4 + 3] * fVar20 - fVar18 * (float)local_a8[lVar11 * 4 + 1]) *
          *(float *)(param_1 + 0x10) < 0.0) {
        uStack_a0 = CONCAT44(uStack_a0._4_4_,(int)uStack_a0 + -1);
        FUN_146cd53c0(&local_a8);
        lVar16 = local_b0;
      }
      else {
        if (iVar4 != (int)lVar16) {
          uVar7 = (int)uStack_a0 + 1;
          uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar7);
          if (uStack_a0._4_4_ < uVar7) {
            FUN_146cd533a(&local_a8,uVar14 & 0xffffffff);
            lVar16 = local_b0;
          }
          local_a8[lVar17 * 4] = iVar4;
          local_a8[lVar17 * 4 + 1] = (int)fVar20;
          local_a8[lVar17 * 4 + 2] = (int)fVar19;
          local_a8[lVar17 * 4 + 3] = (int)fVar18;
        }
        iVar15 = iVar15 + 1;
      }
    } while (iVar15 <= (int)uVar3);
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) < 0) {
      FUN_14481578e(param_2,0);
    }
    piVar5 = local_a8;
    lVar16 = (longlong)(int)uStack_a0;
    if (2 < lVar16) {
      lVar9 = 0;
      do {
        iVar15 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar15 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar15 + 1U) {
          FUN_1446f48e2(param_2,iVar15);
        }
        *(undefined4 *)(*param_2 + (longlong)iVar15 * 4) = *(undefined4 *)((longlong)piVar5 + lVar9)
        ;
        lVar9 = lVar9 + 0x10;
      } while (lVar16 * 0x10 != lVar9);
    }
    if (local_a8 != (int *)0x0) {
      FUN_1400020a8(local_a8);
    }
  }
  if ((local_90 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd4d30 FUN_146cd4d30 body=735 status=ok
// SIG undefined FUN_146cd4d30(void)

void FUN_146cd4d30(longlong param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_3a8 [32];
  longlong *local_388;
  int local_37c;
  undefined4 *local_378;
  undefined4 *local_370;
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [190];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (1 < (int)param_2) {
    memset(local_358,0,0x2f0);
    local_360 = param_1 + (ulonglong)param_2 * 4 + -4;
    local_368 = param_1;
    fVar13 = logf((float)(int)param_2);
    local_358[0] = (int)(longlong)(fVar13 + fVar13);
    plVar3 = &local_368;
    do {
      puVar7 = (undefined4 *)*plVar3;
      puVar10 = (undefined4 *)plVar3[1];
      local_37c = (int)plVar3[2];
      iVar4 = (int)((ulonglong)((longlong)puVar10 - (longlong)puVar7) >> 2);
      puVar8 = puVar7;
      puVar12 = puVar10;
      puVar9 = puVar7;
      local_388 = plVar3;
      if (local_37c != 0) {
LAB_146cd4e0d:
        plVar3 = local_388;
        if (8 < (int)(iVar4 + 1U)) {
          uVar5 = iVar4 + 1U >> 1;
          uVar1 = puVar9[uVar5];
          puVar9[uVar5] = *puVar9;
          *puVar9 = uVar1;
          puVar6 = puVar10 + 1;
          puVar7 = puVar9;
          local_378 = puVar8;
          local_370 = puVar12;
          do {
            puVar8 = puVar7 + 1;
            puVar12 = puVar7 + 1;
            do {
              puVar7 = puVar12;
              puVar2 = puVar8;
              if (puVar10 < puVar7) break;
              uVar1 = *puVar7;
              fVar13 = (float)FUN_146cd51f0(*param_4,*puVar9);
              fVar14 = (float)FUN_146cd51f0(*param_4,uVar1);
              puVar8 = puVar2 + 1;
              puVar12 = puVar7 + 1;
            } while (fVar14 <= fVar13);
            puVar8 = puVar6 + -2;
            do {
              puVar11 = puVar6;
              puVar12 = puVar8;
              puVar6 = puVar11 + -1;
              if (puVar6 <= puVar9) break;
              uVar1 = *puVar9;
              fVar13 = (float)FUN_146cd51f0(*param_4,*puVar6);
              fVar14 = (float)FUN_146cd51f0(*param_4,uVar1);
              puVar8 = puVar12 + -1;
            } while (fVar14 <= fVar13);
            if (puVar6 < puVar7) goto LAB_146cd4ec6;
            uVar1 = *puVar7;
            *puVar7 = *puVar6;
            *puVar6 = uVar1;
          } while( true );
        }
        for (; local_388 = plVar3, puVar8 = puVar9, puVar7 = puVar9, puVar9 < puVar10;
            puVar10 = puVar10 + -1) {
          while (puVar12 = puVar8, puVar7 = puVar7 + 1, puVar7 <= puVar10) {
            uVar1 = *puVar7;
            fVar13 = (float)FUN_146cd51f0(*param_4,*puVar12);
            fVar14 = (float)FUN_146cd51f0(*param_4,uVar1);
            puVar8 = puVar7;
            if (fVar14 <= fVar13) {
              puVar8 = puVar12;
            }
          }
          uVar1 = *puVar12;
          *puVar12 = *puVar10;
          *puVar10 = uVar1;
          plVar3 = local_388;
        }
        goto LAB_146cd4fe3;
      }
LAB_146cd4ffd:
      FUN_146cd5010(puVar7);
      plVar3 = local_388;
LAB_146cd4fe3:
      plVar3 = plVar3 + -3;
    } while (&local_368 <= plVar3);
  }
  if ((local_60 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146cd4ec6:
  uVar1 = *puVar9;
  *puVar9 = *puVar6;
  *puVar6 = uVar1;
  local_37c = local_37c + -1;
  puVar11 = puVar11 + -2;
  if ((longlong)puVar12 - (longlong)local_378 < (longlong)local_370 - (longlong)puVar2) {
    if (puVar7 < puVar10) {
      *local_388 = (longlong)puVar7;
      local_388[1] = (longlong)puVar10;
      *(int *)(local_388 + 2) = local_37c;
      local_388 = local_388 + 3;
    }
    plVar3 = local_388;
    puVar7 = puVar9;
    if (puVar6 <= puVar9 + 1) goto LAB_146cd4fe3;
  }
  else {
    plVar3 = local_388;
    if (puVar9 + 1 < puVar6) {
      *local_388 = (longlong)puVar9;
      local_388[1] = (longlong)puVar11;
      *(int *)(local_388 + 2) = local_37c;
      plVar3 = local_388 + 3;
    }
    puVar9 = puVar2;
    puVar11 = puVar10;
    puVar12 = puVar10;
    if (puVar10 <= puVar7) goto LAB_146cd4fe3;
  }
  local_388 = plVar3;
  iVar4 = (int)((ulonglong)((longlong)puVar12 - (longlong)puVar9) >> 2);
  puVar8 = puVar9;
  puVar10 = puVar11;
  puVar9 = puVar7;
  if (local_37c == 0) goto LAB_146cd4ffd;
  goto LAB_146cd4e0d;
}



// FUNCTION 146cd5010 FUN_146cd5010 body=480 status=ok
// SIG undefined FUN_146cd5010(void)

void FUN_146cd5010(undefined4 *param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  
  if (param_2 != 0) {
    iVar4 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar3 = iVar4;
joined_r0x000146cd5053:
    do {
      iVar7 = iVar4 * 2 + 1;
      if (iVar7 < (int)param_2) {
        iVar2 = iVar4 * 2 + 2;
        if (iVar2 < (int)param_2) {
          uVar1 = param_1[iVar7];
          fVar9 = (float)FUN_146cd51f0(*param_4,param_1[iVar2]);
          fVar10 = (float)FUN_146cd51f0(*param_4,uVar1);
          if (fVar10 <= fVar9) {
            iVar7 = iVar2;
          }
        }
        uVar1 = param_1[iVar7];
        fVar9 = (float)FUN_146cd51f0(*param_4,param_1[iVar4]);
        fVar10 = (float)FUN_146cd51f0(*param_4,uVar1);
        if (fVar9 < fVar10) {
          uVar1 = param_1[iVar4];
          param_1[iVar4] = param_1[iVar7];
          param_1[iVar7] = uVar1;
          iVar4 = iVar7;
          goto joined_r0x000146cd5053;
        }
      }
      bVar8 = iVar3 != 0;
      iVar4 = iVar3 + -1;
      iVar3 = iVar4;
    } while (bVar8);
    if (1 < (int)param_2) {
      uVar5 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar5 - 1];
      param_1[uVar5 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar6 = uVar5 - 1;
          iVar4 = 0;
          iVar7 = 1;
          iVar3 = 0;
          do {
            iVar4 = iVar4 + 2;
            iVar2 = iVar7;
            if ((longlong)iVar4 < (longlong)uVar6) {
              uVar1 = param_1[iVar7];
              fVar9 = (float)FUN_146cd51f0(*param_4,param_1[iVar4]);
              fVar10 = (float)FUN_146cd51f0(*param_4,uVar1);
              if (fVar10 <= fVar9) {
                iVar2 = iVar4;
              }
            }
            uVar1 = param_1[iVar2];
            fVar9 = (float)FUN_146cd51f0(*param_4,param_1[iVar3]);
            fVar10 = (float)FUN_146cd51f0(*param_4,uVar1);
            if (fVar10 <= fVar9) break;
            uVar1 = param_1[iVar3];
            param_1[iVar3] = param_1[iVar2];
            param_1[iVar2] = uVar1;
            iVar4 = iVar2 * 2;
            iVar7 = iVar2 * 2 + 1;
            iVar3 = iVar2;
          } while ((longlong)iVar7 < (longlong)uVar6);
          uVar1 = *param_1;
          *param_1 = param_1[uVar5 - 2];
          param_1[uVar5 - 2] = uVar1;
          uVar5 = uVar6;
        } while (2 < uVar6);
      }
    }
  }
  return;
}



// FUNCTION 146cd51f0 FUN_146cd51f0 body=330 status=ok
// SIG undefined FUN_146cd51f0(void)

uint FUN_146cd51f0(undefined8 *param_1,int param_2)

{
  float *pfVar1;
  longlong lVar2;
  double *pdVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  pfVar1 = (float *)*param_1;
  lVar2 = *(longlong *)param_1[2];
  lVar4 = (longlong)param_2;
  fVar6 = *(float *)(lVar2 + 8 + lVar4 * 0xc) - pfVar1[2];
  fVar10 = *(float *)(lVar2 + 4 + lVar4 * 0xc) - pfVar1[1];
  fVar8 = *(float *)(lVar2 + lVar4 * 0xc) - *pfVar1;
  fVar12 = fVar6 * fVar6 + fVar8 * fVar8 + fVar10 * fVar10;
  if (((fVar12 != 1.0) || (fVar9 = fVar8, fVar11 = fVar10, fVar7 = fVar6, NAN(fVar12))) &&
     (fVar9 = (float)DAT_14c846330, fVar11 = DAT_14c846330._4_4_, fVar7 = DAT_14c846338,
     1e-08 <= fVar12)) {
    fVar12 = 1.0 / SQRT(fVar12);
    fVar9 = fVar8 * fVar12;
    fVar11 = fVar10 * fVar12;
    fVar7 = fVar6 * fVar12;
  }
  pdVar3 = (double *)param_1[1];
  fVar6 = (float)pdVar3[6] * fVar7 + (float)pdVar3[4] * fVar9 + (float)pdVar3[5] * fVar11;
  uVar5 = -(uint)(0.0 <= (float)pdVar3[2] * fVar7 +
                         (float)*pdVar3 * fVar9 + (float)pdVar3[1] * fVar11);
  return ~uVar5 & (uint)(-1.0 - fVar6) | (uint)(fVar6 + 1.0) & uVar5;
}



// FUNCTION 146cd533a FUN_146cd533a body=132 status=ok
// SIG undefined FUN_146cd533a(void)

void FUN_146cd533a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146cd53c0 FUN_146cd53c0 body=63 status=ok
// SIG undefined FUN_146cd53c0(void)

void FUN_146cd53c0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146cd5400(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 146cd5400 FUN_146cd5400 body=97 status=ok
// SIG undefined FUN_146cd5400(void)

ulonglong FUN_146cd5400(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146cd5462 FUN_146cd5462 body=105 status=ok
// SIG undefined FUN_146cd5462(void)

void FUN_146cd5462(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + (longlong)(int)param_2 * 0x10) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar1),
            (void *)((longlong)(iVar2 - iVar3) * 0x10 + lVar1),(longlong)iVar3 << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 146cd54cc FUN_146cd54cc body=221 status=ok
// SIG undefined FUN_146cd54cc(void)

undefined4 FUN_146cd54cc(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar2 = FUN_1448eb174(param_1 + 0x4c,0xc,0);
  uVar3 = FUN_1448eb174(param_1 + 0x40,0xc,0);
  uVar2 = FUN_144a78877(uVar3,uVar2);
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    puVar5 = *(undefined4 **)(param_1 + 0x30);
    puVar1 = puVar5 + (longlong)*(int *)(param_1 + 0x38) * 3;
    do {
      uVar2 = FUN_144a78877(uVar2,*puVar5);
      uVar2 = FUN_144a78877(uVar2,puVar5[1]);
      uVar2 = FUN_144a78877(uVar2,puVar5[2]);
      puVar5 = puVar5 + 3;
    } while (puVar5 != puVar1);
  }
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x20);
    lVar7 = (longlong)*(int *)(param_1 + 0x28) * 0x18;
    do {
      uVar3 = FUN_1448eb174(lVar6 + 0xc,0xc,0);
      uVar4 = FUN_1448eb174(lVar6,0xc);
      uVar3 = FUN_144a78877(uVar4,uVar3);
      uVar2 = FUN_144a78877(uVar2,uVar3);
      lVar6 = lVar6 + 0x18;
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
  }
  return uVar2;
}



// FUNCTION 146cd55a9 FUN_146cd55a9 body=1198 status=ok
// SIG undefined FUN_146cd55a9(void)

ulonglong FUN_146cd55a9(longlong param_1,double **param_2,double *param_3,double *param_4,
                       double **param_5,double **param_6)

{
  double *pdVar1;
  byte bVar3;
  undefined1 auVar4 [16];
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double **ppdVar10;
  double **ppdVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_178 [32];
  double **local_158;
  double **local_150;
  double *local_140;
  double **local_138;
  double *local_130;
  double *local_128;
  double **local_120;
  undefined8 *local_118;
  undefined1 *local_110;
  double **local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  undefined1 local_e8 [104];
  ulonglong local_80;
  double *pdVar2;
  
  ppdVar11 = param_6;
  ppdVar10 = param_5;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  bVar3 = *(byte *)(param_1 + 0x1c);
  if (bVar3 == 4) {
    FUN_1447dc19e(param_1 + 0x30,local_e8,param_2);
    local_150 = ppdVar11;
    local_158 = ppdVar10;
    uVar12 = FUN_146cd55a9(*(undefined8 *)(param_1 + 0x20),local_e8,param_3,param_4);
    goto LAB_146cd56a2;
  }
  FUN_1449437a2(param_4,local_e8,param_2);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    local_f0 = (double)param_2[6] - param_4[6];
    local_100 = (double)param_2[4] - param_4[4];
    dStack_f8 = (double)param_2[5] - param_4[5];
    local_140 = param_3;
    if (ppdVar11 == (double **)0x0) {
      local_138 = (double **)&param_5;
      local_130 = &local_100;
      uVar12 = FUN_146cd5c93(param_1,local_e8);
    }
    else {
      local_138 = (double **)&param_6;
      local_130 = (double *)&param_5;
      local_128 = &local_100;
      local_120 = param_2;
      uVar12 = FUN_146cd5a58(param_1,local_e8);
    }
    goto LAB_146cd56a2;
  }
  switch(bVar3) {
  case 5:
  case 0xf:
    local_140 = &local_100;
    local_100 = (double)((ulonglong)local_100 & 0xffffffffffffff00);
    local_108 = &local_140;
    local_120 = ppdVar10;
    local_118 = &param_6;
    local_110 = &LAB_146cd925e;
    local_138 = param_2;
    local_130 = param_3;
    local_128 = param_4;
    FUN_146db006e(param_1);
    uVar12 = (ulonglong)local_100 & 0xff;
    goto LAB_146cd56a2;
  case 6:
    local_158 = ppdVar11;
    uVar12 = FUN_146dd8196(param_1,param_3,local_e8,ppdVar10);
    break;
  default:
    if (-1 < (char)bVar3) {
      if (bVar3 < 0x40) {
        uVar12 = 0;
        goto LAB_146cd56a2;
      }
      param_1 = *(longlong *)(param_1 + 0x28);
      goto LAB_146cd5753;
    }
    local_158 = ppdVar11;
    uVar12 = FUN_146cd5ece(param_1,param_3,local_e8,ppdVar10);
    break;
  case 0xb:
LAB_146cd5753:
    local_150 = &local_140;
    local_158 = ppdVar11;
    local_130 = (double *)&DAT_3ff0000000000000;
    local_138 = (double **)&DAT_3ff0000000000000;
    local_140 = (double *)&DAT_3ff0000000000000;
    uVar12 = FUN_140686708(param_1,param_3,local_e8,ppdVar10);
    break;
  case 0xc:
    local_158 = ppdVar11;
    uVar12 = thunk_FUN_146d92ef6(param_1,param_3,local_e8,ppdVar10);
  }
  if ((char)uVar12 == '\x01' && param_6 != (double **)0x0) {
    pdVar5 = *param_6;
    pdVar6 = param_6[1];
    pdVar7 = *param_2;
    pdVar8 = param_2[1];
    pdVar9 = param_2[2];
    pdVar1 = param_2[3];
    pdVar2 = param_2[3];
    dVar14 = (double)pdVar6 * (double)pdVar7 - (double)pdVar5 * (double)pdVar8;
    dVar15 = (double)param_6[2] * (double)pdVar8 - (double)pdVar6 * (double)pdVar9;
    dVar18 = (double)pdVar5 * (double)pdVar9 - (double)pdVar7 * (double)param_6[2];
    dVar15 = dVar15 + dVar15;
    dVar18 = dVar18 + dVar18;
    dVar14 = dVar14 + dVar14;
    *param_6 = (double *)
               ((dVar14 * (double)pdVar8 - dVar18 * (double)pdVar9) +
               (double)pdVar1 * dVar15 + (double)pdVar5);
    param_6[1] = (double *)
                 (((double)pdVar9 * dVar15 - (double)pdVar7 * dVar14) +
                 (double)pdVar2 * dVar18 + (double)pdVar6);
    param_6[2] = (double *)
                 (dVar14 * (double)pdVar1 + (double)param_6[2] +
                 (dVar18 * (double)pdVar7 - dVar15 * (double)pdVar8));
    dVar13 = (double)param_6[3] * (double)param_2[8];
    dVar15 = (double)param_6[4] * (double)param_2[9];
    dVar18 = (double)param_6[5] * (double)param_2[10];
    pdVar5 = *param_2;
    pdVar6 = param_2[1];
    pdVar7 = param_2[2];
    pdVar2 = param_2[3];
    dVar16 = dVar15 * (double)pdVar5 - dVar13 * (double)pdVar6;
    dVar17 = dVar18 * (double)pdVar6 - dVar15 * (double)pdVar7;
    dVar14 = dVar13 * (double)pdVar7 - (double)pdVar5 * dVar18;
    dVar17 = dVar17 + dVar17;
    dVar14 = dVar14 + dVar14;
    dVar16 = dVar16 + dVar16;
    dVar15 = ((double)pdVar7 * dVar17 - (double)pdVar5 * dVar16) +
             (double)param_2[3] * dVar14 + dVar15 + (double)param_2[5];
    pdVar1 = param_2[6];
    auVar4._8_4_ = SUB84(dVar15,0);
    auVar4._0_8_ = (dVar16 * (double)pdVar6 - dVar14 * (double)pdVar7) +
                   (double)pdVar2 * dVar17 + dVar13 + (double)param_2[4];
    auVar4._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    *(undefined1 (*) [16])(param_6 + 3) = auVar4;
    param_6[5] = (double *)
                 (dVar16 * (double)pdVar2 + dVar18 +
                  (dVar14 * (double)pdVar5 - dVar17 * (double)pdVar6) + (double)pdVar1);
    uVar12 = 1;
  }
LAB_146cd56a2:
  if ((local_80 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd5a58 FUN_146cd5a58 body=373 status=ok
// SIG undefined FUN_146cd5a58(void)

void FUN_146cd5a58(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
switchD_146cd5ae9_caseD_0:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 1:
switchD_146cd5ae9_caseD_1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 2:
  case 5:
  case 6:
  case 7:
    goto switchD_146cd5aaf_caseD_82;
  case 3:
switchD_146cd5ae9_caseD_3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_146cd5a58(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 8:
switchD_146cd5ae9_caseD_8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  default:
    switch(uVar1) {
    case 0x40:
      goto switchD_146cd5ae9_caseD_0;
    case 0x41:
      goto switchD_146cd5ae9_caseD_1;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      break;
    case 0x43:
      goto switchD_146cd5ae9_caseD_3;
    case 0x48:
      goto switchD_146cd5ae9_caseD_8;
    default:
      switch(uVar1) {
      case 0x80:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x81:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x83:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x88:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      }
    }
switchD_146cd5aaf_caseD_82:
    if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_146cd5fe8(param_3,param_1,param_2);
    return;
  }
}



// FUNCTION 146cd5c93 FUN_146cd5c93 body=373 status=ok
// SIG undefined FUN_146cd5c93(void)

void FUN_146cd5c93(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
switchD_146cd5d24_caseD_0:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 1:
switchD_146cd5d24_caseD_1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 2:
  case 5:
  case 6:
  case 7:
    goto switchD_146cd5cea_caseD_82;
  case 3:
switchD_146cd5d24_caseD_3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_146cd5c93(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 8:
switchD_146cd5d24_caseD_8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  default:
    switch(uVar1) {
    case 0x40:
      goto switchD_146cd5d24_caseD_0;
    case 0x41:
      goto switchD_146cd5d24_caseD_1;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      break;
    case 0x43:
      goto switchD_146cd5d24_caseD_3;
    case 0x48:
      goto switchD_146cd5d24_caseD_8;
    default:
      switch(uVar1) {
      case 0x80:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x81:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x83:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x88:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      }
    }
switchD_146cd5cea_caseD_82:
    if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_146cd7b90(param_3,param_1,param_2);
    return;
  }
}



// FUNCTION 146cd5ece FUN_146cd5ece body=280 status=ok
// SIG undefined FUN_146cd5ece(void)

undefined4
FUN_146cd5ece(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_d0 [144];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_146cd92f6(local_d0,param_2,param_1 + 0x38);
  local_148 = *param_3;
  uStack_140 = param_3[1];
  local_118 = (double)param_3[6] * *(double *)(param_1 + 0x48);
  local_138 = *(undefined4 *)(param_3 + 2);
  uStack_134 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_130 = *(undefined4 *)(param_3 + 3);
  uStack_12c = *(undefined4 *)((longlong)param_3 + 0x1c);
  dStack_120 = (double)param_3[5] * *(double *)(param_1 + 0x40);
  local_128 = (double)param_3[4] * *(double *)(param_1 + 0x38);
  uStack_110 = 0;
  local_108 = 0x3ff0000000000000;
  uStack_100 = 0x3ff0000000000000;
  local_f8 = 0x3ff0000000000000;
  uStack_f0 = 0;
  local_d8 = *(undefined8 *)(param_1 + 0x30);
  local_150 = &local_e8;
  local_e8 = *(undefined8 *)(param_1 + 0x20);
  uStack_e0 = *(undefined8 *)(param_1 + 0x28);
  local_158 = param_5;
  uVar1 = FUN_140686708(*(undefined8 *)(param_1 + 0x88),local_d0,&local_148,param_4);
  FUN_14068416c(local_d0);
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd5fe8 FUN_146cd5fe8 body=884 status=ok
// SIG undefined FUN_146cd5fe8(void)

void FUN_146cd5fe8(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_140686536;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_1406863be;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd635e FUN_146cd635e body=884 status=ok
// SIG undefined FUN_146cd635e(void)

void FUN_146cd635e(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_140686536;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_1406863dc;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd66d4 FUN_146cd66d4 body=884 status=ok
// SIG undefined FUN_146cd66d4(void)

void FUN_146cd66d4(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_140686536;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_1406864a0;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd6a4a FUN_146cd6a4a body=884 status=ok
// SIG undefined FUN_146cd6a4a(void)

void FUN_146cd6a4a(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_140686536;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_14172543a;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd6dc0 FUN_146cd6dc0 body=877 status=ok
// SIG undefined FUN_146cd6dc0(void)

void FUN_146cd6dc0(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_140686536;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_140686536;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd712e FUN_146cd712e body=884 status=ok
// SIG undefined FUN_146cd712e(void)

void FUN_146cd712e(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_140686536;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_146cc490a;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd74a4 FUN_146cd74a4 body=884 status=ok
// SIG undefined FUN_146cd74a4(void)

void FUN_146cd74a4(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_140686536;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_146cc4a26;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd781a FUN_146cd781a body=884 status=ok
// SIG undefined FUN_146cd781a(void)

void FUN_146cd781a(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_140686536;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_14068657c;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd7b90 FUN_146cd7b90 body=176 status=ok
// SIG undefined FUN_146cd7b90(void)

void FUN_146cd7b90(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146cd811f(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd7c42 FUN_146cd7c42 body=176 status=ok
// SIG undefined FUN_146cd7c42(void)

void FUN_146cd7c42(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146cd836e(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd7cf4 FUN_146cd7cf4 body=176 status=ok
// SIG undefined FUN_146cd7cf4(void)

void FUN_146cd7cf4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146cd8579(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd7da6 FUN_146cd7da6 body=176 status=ok
// SIG undefined FUN_146cd7da6(void)

void FUN_146cd7da6(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146cd87b8(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd7e58 FUN_146cd7e58 body=176 status=ok
// SIG undefined FUN_146cd7e58(void)

void FUN_146cd7e58(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146cd89f1(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd7f0a FUN_146cd7f0a body=176 status=ok
// SIG undefined FUN_146cd7f0a(void)

void FUN_146cd7f0a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146cd8c16(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd7fbc FUN_146cd7fbc body=176 status=ok
// SIG undefined FUN_146cd7fbc(void)

void FUN_146cd7fbc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146cd8e24(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd806e FUN_146cd806e body=176 status=ok
// SIG undefined FUN_146cd806e(void)

void FUN_146cd806e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146cd9050(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd811f FUN_146cd811f body=590 status=ok
// SIG undefined FUN_146cd811f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cd811f(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  longlong local_a8;
  float local_a0;
  float local_9c;
  undefined1 *local_98;
  longlong local_90;
  float local_88;
  float local_84;
  undefined1 *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  dVar7 = *(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68);
  dVar1 = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  dVar6 = *(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar1 = *(double *)(param_1 + 0x10);
  dVar7 = (dVar1 + *(double *)(param_1 + 0x20)) - (*(double *)(param_1 + 0x20) - dVar1);
  dVar9 = (dVar1 + *(double *)(param_1 + 0x30)) - (*(double *)(param_1 + 0x30) - dVar1);
  dVar11 = (dVar1 + *(double *)(param_1 + 0x28)) - (*(double *)(param_1 + 0x28) - dVar1);
  if ((dVar7 <= dVar11 || dVar7 <= dVar9) && (dVar7 = dVar11, dVar11 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_88 = (float)*(double *)(param_2 + 0x10);
  local_84 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_80 = &LAB_146cc500a;
  local_a0 = (float)dVar1;
  local_98 = &LAB_144a386ca;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_68._0_4_ = (float)param_3[4];
  local_68._4_4_ = (float)param_3[5];
  local_68._8_4_ = (float)param_3[6];
  local_68._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar12._0_4_ = fVar5 + fVar3;
  auVar12._4_4_ = fVar5 + fVar3;
  auVar12._8_4_ = fVar3 + fVar5;
  auVar12._12_4_ = fVar3 + fVar5;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps(_DAT_1499314a0,auVar13);
  auVar14._0_4_ = auVar13._0_4_ * fVar8;
  auVar14._4_4_ = auVar13._4_4_ * fVar10;
  auVar14._8_4_ = auVar13._8_4_ * fVar2;
  auVar14._12_4_ = auVar13._12_4_ * fVar4;
  auVar13._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
  auVar13._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
  auVar13._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
  auVar13._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
  local_58 = blendvps(_DAT_149932320,auVar14,auVar13);
  local_c8 = local_58;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_b8 = local_78;
  local_78._4_4_ = (float)param_5[1];
  local_78._0_4_ = (float)*param_5;
  local_78._8_4_ = (float)param_5[2];
  local_78._12_4_ = 0;
  local_c0 = param_4;
  local_a8 = param_1;
  local_9c = local_a0;
  local_90 = param_2;
  FUN_144946907(&local_a8,&local_90,dVar7);
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cd836e FUN_146cd836e body=522 status=ok
// SIG undefined FUN_146cd836e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cd836e(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  undefined4 local_7c;
  code *local_78;
  longlong local_70;
  float local_68;
  float local_64;
  undefined1 *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar7 = *(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68);
  dVar1 = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  dVar6 = *(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar9 = *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30);
  dVar1 = *(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28);
  dVar7 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
  if ((dVar7 <= dVar1 || dVar7 <= dVar9) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_60 = &LAB_146cc500a;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = 0;
  local_78 = FUN_144857b9e;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cd8579 FUN_146cd8579 body=574 status=ok
// SIG undefined FUN_146cd8579(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cd8579(longlong param_1,double param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  longlong local_d0;
  float local_c8;
  float local_c4;
  undefined1 *local_c0;
  double local_b8;
  float local_b0;
  float fStack_ac;
  undefined1 *local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dVar8 = *(double *)((longlong)param_2 + 0x80) - *(double *)((longlong)param_2 + 0x68);
  dVar1 = *(double *)((longlong)param_2 + 0x78) - *(double *)((longlong)param_2 + 0x60);
  dVar2 = *(double *)((longlong)param_2 + 0x70) - *(double *)((longlong)param_2 + 0x58);
  if ((dVar2 <= dVar1 || dVar2 <= dVar8) && (dVar2 = dVar1, dVar1 <= dVar8)) {
    dVar2 = dVar8;
  }
  FUN_144b0186e(param_1,&local_b8);
  local_90 = local_90 - (double)local_a8;
  local_98 = local_98 - (double)CONCAT44(fStack_ac,local_b0);
  local_a0 = local_a0 - local_b8;
  if ((local_a0 <= local_98 || local_a0 <= local_90) && (local_a0 = local_98, local_98 <= local_90))
  {
    local_a0 = local_90;
  }
  local_b0 = (float)*(double *)((longlong)param_2 + 0x10);
  fStack_ac = (float)(double)(-(ulonglong)
                               (0.0 < *(double *)(*(longlong *)((longlong)param_2 + 0x88) + 0x10)) &
                             (ulonglong)*(double *)((longlong)param_2 + 0x10));
  local_a8 = &LAB_146cc500a;
  local_c8 = (float)*(double *)(param_1 + 0x10);
  local_c0 = &LAB_144a386e2;
  fVar3 = (float)param_3[2];
  fVar5 = (float)param_3[3];
  fVar7 = (float)*param_3;
  fVar9 = (float)param_3[1];
  local_78._0_4_ = (float)param_3[4];
  local_78._4_4_ = (float)param_3[5];
  local_78._8_4_ = (float)param_3[6];
  local_78._12_4_ = 0;
  fVar4 = fVar7 * fVar7 + fVar9 * fVar9;
  fVar6 = fVar3 * fVar3 + fVar5 * fVar5;
  auVar10._0_4_ = fVar6 + fVar4;
  auVar10._4_4_ = fVar6 + fVar4;
  auVar10._8_4_ = fVar4 + fVar6;
  auVar10._12_4_ = fVar4 + fVar6;
  auVar11 = sqrtps(auVar10,auVar10);
  auVar11 = divps(_DAT_1499314a0,auVar11);
  auVar12._0_4_ = auVar11._0_4_ * fVar7;
  auVar12._4_4_ = auVar11._4_4_ * fVar9;
  auVar12._8_4_ = auVar11._8_4_ * fVar3;
  auVar12._12_4_ = auVar11._12_4_ * fVar5;
  auVar11._4_4_ = -(uint)(1e-08 <= auVar10._4_4_);
  auVar11._0_4_ = -(uint)(1e-08 <= auVar10._0_4_);
  auVar11._8_4_ = -(uint)(1e-08 <= auVar10._8_4_);
  auVar11._12_4_ = -(uint)(1e-08 <= auVar10._12_4_);
  local_68 = blendvps(_DAT_149932320,auVar12,auVar11);
  local_e8 = local_68;
  if (local_a0 <= dVar2) {
    local_a0 = dVar2;
  }
  local_d8 = local_88;
  local_88._4_4_ = (float)param_5[1];
  local_88._0_4_ = (float)*param_5;
  local_88._8_4_ = (float)param_5[2];
  local_88._12_4_ = 0;
  local_e0 = param_4;
  local_d0 = param_1;
  local_c4 = local_c8;
  local_b8 = param_2;
  FUN_144946907(&local_d0,&local_b8,local_a0);
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cd87b8 FUN_146cd87b8 body=568 status=ok
// SIG undefined FUN_146cd87b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cd87b8(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  longlong local_98;
  float local_90;
  undefined4 local_8c;
  code *local_88;
  longlong local_80;
  float local_78;
  float local_74;
  undefined1 *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  dVar7 = *(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68);
  dVar1 = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  dVar6 = *(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58);
  if ((dVar6 <= dVar1 || dVar6 <= dVar7) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar7 = (double)*(float *)(param_1 + 0x4c) - (double)*(float *)(param_1 + 0x40);
  dVar1 = (double)*(float *)(param_1 + 0x54) - (double)*(float *)(param_1 + 0x48);
  dVar9 = (double)*(float *)(param_1 + 0x50) - (double)*(float *)(param_1 + 0x44);
  if ((dVar7 <= dVar9 || dVar7 <= dVar1) && (dVar7 = dVar9, dVar9 <= dVar1)) {
    dVar7 = dVar1;
  }
  local_78 = (float)*(double *)(param_2 + 0x10);
  local_74 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_70 = &LAB_146cc500a;
  local_90 = (float)*(double *)(param_1 + 0x10);
  local_8c = 0;
  local_88 = FUN_14172546a;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_58._0_4_ = (float)param_3[4];
  local_58._4_4_ = (float)param_3[5];
  local_58._8_4_ = (float)param_3[6];
  local_58._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_48 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_b8 = local_48;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_a8 = local_68;
  local_68._4_4_ = (float)param_5[1];
  local_68._0_4_ = (float)*param_5;
  local_68._8_4_ = (float)param_5[2];
  local_68._12_4_ = 0;
  local_b0 = param_4;
  local_98 = param_1;
  local_80 = param_2;
  FUN_144946907(&local_98,&local_80,dVar7);
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cd89f1 FUN_146cd89f1 body=548 status=ok
// SIG undefined FUN_146cd89f1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cd89f1(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  float local_7c;
  undefined1 *local_78;
  longlong local_70;
  float local_68;
  float local_64;
  undefined1 *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar7 = *(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68);
  dVar1 = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  dVar6 = *(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar9 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar1 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar7 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar7 <= dVar9 || dVar7 <= dVar1) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_60 = &LAB_146cc500a;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_1 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_1 + 0x10));
  local_78 = &LAB_146cc500a;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cd8c16 FUN_146cd8c16 body=525 status=ok
// SIG undefined FUN_146cd8c16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cd8c16(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  undefined4 local_7c;
  code *local_78;
  longlong local_70;
  float local_68;
  float local_64;
  undefined1 *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar7 = *(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68);
  dVar1 = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  dVar6 = *(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar9 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar1 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar7 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar7 <= dVar1 || dVar7 <= dVar9) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_60 = &LAB_146cc500a;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = 0;
  local_78 = FUN_146cc5264;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cd8e24 FUN_146cd8e24 body=555 status=ok
// SIG undefined FUN_146cd8e24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cd8e24(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  float local_7c;
  code *local_78;
  longlong local_70;
  float local_68;
  float local_64;
  undefined1 *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar7 = *(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68);
  dVar1 = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  dVar6 = *(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar9 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar1 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar7 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar7 <= dVar9 || dVar7 <= dVar1) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_60 = &LAB_146cc500a;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_1 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_1 + 0x10));
  local_78 = FUN_146cc5596;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cd9050 FUN_146cd9050 body=525 status=ok
// SIG undefined FUN_146cd9050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cd9050(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  undefined4 local_7c;
  code *local_78;
  longlong local_70;
  float local_68;
  float local_64;
  undefined1 *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar7 = *(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68);
  dVar1 = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  dVar6 = *(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar9 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar1 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar7 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar7 <= dVar1 || dVar7 <= dVar9) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_60 = &LAB_146cc500a;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = 0;
  local_78 = FUN_144a12d46;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cd9264 FUN_146cd9264 body=145 status=ok
// SIG undefined FUN_146cd9264(void)

void FUN_146cd9264(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1447dc19e(param_3,local_88,param_1[1]);
  local_90 = *(undefined8 *)param_1[5];
  local_98 = param_1[4];
  cVar1 = FUN_146cd55a9(param_2,local_88,param_1[2],param_1[3]);
  if (cVar1 != '\0') {
    *(undefined1 *)*param_1 = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd92f6 FUN_146cd92f6 body=184 status=ok
// SIG undefined FUN_146cd92f6(void)

undefined8 FUN_146cd92f6(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_e8 [32];
  longlong local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined1 local_a8 [144];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0 = param_3[2] * *(double *)(param_2 + 0x30);
  local_b8 = param_3[1] * *(double *)(param_2 + 0x28);
  local_c0 = *param_3 * *(double *)(param_2 + 0x20);
  local_c8 = *(longlong *)(param_2 + 0x88);
  if (local_c8 != 0) {
    LOCK();
    *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
    UNLOCK();
  }
  FUN_140687444(local_a8,&local_c8,&local_c0,0);
  FUN_140687536(param_1,local_a8);
  FUN_14068416c(local_a8);
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd93af FUN_146cd93af body=1198 status=ok
// SIG undefined FUN_146cd93af(void)

ulonglong FUN_146cd93af(longlong param_1,double **param_2,double *param_3,double *param_4,
                       double **param_5,double **param_6)

{
  double *pdVar1;
  byte bVar3;
  undefined1 auVar4 [16];
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double **ppdVar10;
  double **ppdVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_178 [32];
  double **local_158;
  double **local_150;
  double *local_140;
  double **local_138;
  double *local_130;
  double *local_128;
  double **local_120;
  undefined8 *local_118;
  undefined1 *local_110;
  double **local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  undefined1 local_e8 [104];
  ulonglong local_80;
  double *pdVar2;
  
  ppdVar11 = param_6;
  ppdVar10 = param_5;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  bVar3 = *(byte *)(param_1 + 0x1c);
  if (bVar3 == 4) {
    FUN_1447dc19e(param_1 + 0x30,local_e8,param_2);
    local_150 = ppdVar11;
    local_158 = ppdVar10;
    uVar12 = FUN_146cd93af(*(undefined8 *)(param_1 + 0x20),local_e8,param_3,param_4);
    goto LAB_146cd94a8;
  }
  FUN_1449437a2(param_4,local_e8,param_2);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    local_f0 = (double)param_2[6] - param_4[6];
    local_100 = (double)param_2[4] - param_4[4];
    dStack_f8 = (double)param_2[5] - param_4[5];
    local_140 = param_3;
    if (ppdVar11 == (double **)0x0) {
      local_138 = (double **)&param_5;
      local_130 = &local_100;
      uVar12 = FUN_146cd9a99(param_1,local_e8);
    }
    else {
      local_138 = (double **)&param_6;
      local_130 = (double *)&param_5;
      local_128 = &local_100;
      local_120 = param_2;
      uVar12 = FUN_146cd985e(param_1,local_e8);
    }
    goto LAB_146cd94a8;
  }
  switch(bVar3) {
  case 5:
  case 0xf:
    local_140 = &local_100;
    local_100 = (double)((ulonglong)local_100 & 0xffffffffffffff00);
    local_108 = &local_140;
    local_120 = ppdVar10;
    local_118 = &param_6;
    local_110 = &LAB_146cdcf7a;
    local_138 = param_2;
    local_130 = param_3;
    local_128 = param_4;
    FUN_146db006e(param_1);
    uVar12 = (ulonglong)local_100 & 0xff;
    goto LAB_146cd94a8;
  case 6:
    local_158 = ppdVar11;
    uVar12 = FUN_146dd8464(param_1,param_3,local_e8,ppdVar10);
    break;
  default:
    if (-1 < (char)bVar3) {
      if (bVar3 < 0x40) {
        uVar12 = 0;
        goto LAB_146cd94a8;
      }
      param_1 = *(longlong *)(param_1 + 0x28);
      goto LAB_146cd9559;
    }
    local_158 = ppdVar11;
    uVar12 = FUN_146cd9cd4(param_1,param_3,local_e8,ppdVar10);
    break;
  case 0xb:
LAB_146cd9559:
    local_150 = &local_140;
    local_158 = ppdVar11;
    local_130 = (double *)&DAT_3ff0000000000000;
    local_138 = (double **)&DAT_3ff0000000000000;
    local_140 = (double *)&DAT_3ff0000000000000;
    uVar12 = FUN_1405cc60c(param_1,param_3,local_e8,ppdVar10);
    break;
  case 0xc:
    local_158 = ppdVar11;
    uVar12 = thunk_FUN_146d93828(param_1,param_3,local_e8,ppdVar10);
  }
  if ((char)uVar12 == '\x01' && param_6 != (double **)0x0) {
    pdVar5 = *param_6;
    pdVar6 = param_6[1];
    pdVar7 = *param_2;
    pdVar8 = param_2[1];
    pdVar9 = param_2[2];
    pdVar1 = param_2[3];
    pdVar2 = param_2[3];
    dVar14 = (double)pdVar6 * (double)pdVar7 - (double)pdVar5 * (double)pdVar8;
    dVar15 = (double)param_6[2] * (double)pdVar8 - (double)pdVar6 * (double)pdVar9;
    dVar18 = (double)pdVar5 * (double)pdVar9 - (double)pdVar7 * (double)param_6[2];
    dVar15 = dVar15 + dVar15;
    dVar18 = dVar18 + dVar18;
    dVar14 = dVar14 + dVar14;
    *param_6 = (double *)
               ((dVar14 * (double)pdVar8 - dVar18 * (double)pdVar9) +
               (double)pdVar1 * dVar15 + (double)pdVar5);
    param_6[1] = (double *)
                 (((double)pdVar9 * dVar15 - (double)pdVar7 * dVar14) +
                 (double)pdVar2 * dVar18 + (double)pdVar6);
    param_6[2] = (double *)
                 (dVar14 * (double)pdVar1 + (double)param_6[2] +
                 (dVar18 * (double)pdVar7 - dVar15 * (double)pdVar8));
    dVar13 = (double)param_6[3] * (double)param_2[8];
    dVar15 = (double)param_6[4] * (double)param_2[9];
    dVar18 = (double)param_6[5] * (double)param_2[10];
    pdVar5 = *param_2;
    pdVar6 = param_2[1];
    pdVar7 = param_2[2];
    pdVar2 = param_2[3];
    dVar16 = dVar15 * (double)pdVar5 - dVar13 * (double)pdVar6;
    dVar17 = dVar18 * (double)pdVar6 - dVar15 * (double)pdVar7;
    dVar14 = dVar13 * (double)pdVar7 - (double)pdVar5 * dVar18;
    dVar17 = dVar17 + dVar17;
    dVar14 = dVar14 + dVar14;
    dVar16 = dVar16 + dVar16;
    dVar15 = ((double)pdVar7 * dVar17 - (double)pdVar5 * dVar16) +
             (double)param_2[3] * dVar14 + dVar15 + (double)param_2[5];
    pdVar1 = param_2[6];
    auVar4._8_4_ = SUB84(dVar15,0);
    auVar4._0_8_ = (dVar16 * (double)pdVar6 - dVar14 * (double)pdVar7) +
                   (double)pdVar2 * dVar17 + dVar13 + (double)param_2[4];
    auVar4._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    *(undefined1 (*) [16])(param_6 + 3) = auVar4;
    param_6[5] = (double *)
                 (dVar16 * (double)pdVar2 + dVar18 +
                  (dVar14 * (double)pdVar5 - dVar17 * (double)pdVar6) + (double)pdVar1);
    uVar12 = 1;
  }
LAB_146cd94a8:
  if ((local_80 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd985e FUN_146cd985e body=373 status=ok
// SIG undefined FUN_146cd985e(void)

void FUN_146cd985e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
switchD_146cd98ef_caseD_0:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 1:
switchD_146cd98ef_caseD_1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 2:
  case 5:
  case 6:
  case 7:
    goto switchD_146cd98b5_caseD_82;
  case 3:
switchD_146cd98ef_caseD_3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_146cd985e(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 8:
switchD_146cd98ef_caseD_8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  default:
    switch(uVar1) {
    case 0x40:
      goto switchD_146cd98ef_caseD_0;
    case 0x41:
      goto switchD_146cd98ef_caseD_1;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      break;
    case 0x43:
      goto switchD_146cd98ef_caseD_3;
    case 0x48:
      goto switchD_146cd98ef_caseD_8;
    default:
      switch(uVar1) {
      case 0x80:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x81:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x83:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x88:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      }
    }
switchD_146cd98b5_caseD_82:
    if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_146cd9dee(param_3,param_1,param_2);
    return;
  }
}



// FUNCTION 146cd9a99 FUN_146cd9a99 body=373 status=ok
// SIG undefined FUN_146cd9a99(void)

void FUN_146cd9a99(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
switchD_146cd9b2a_caseD_0:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 1:
switchD_146cd9b2a_caseD_1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 2:
  case 5:
  case 6:
  case 7:
    goto switchD_146cd9af0_caseD_82;
  case 3:
switchD_146cd9b2a_caseD_3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_146cd9a99(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 8:
switchD_146cd9b2a_caseD_8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  default:
    switch(uVar1) {
    case 0x40:
      goto switchD_146cd9b2a_caseD_0;
    case 0x41:
      goto switchD_146cd9b2a_caseD_1;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      break;
    case 0x43:
      goto switchD_146cd9b2a_caseD_3;
    case 0x48:
      goto switchD_146cd9b2a_caseD_8;
    default:
      switch(uVar1) {
      case 0x80:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x81:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x83:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x88:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      }
    }
switchD_146cd9af0_caseD_82:
    if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_146cdb996(param_3,param_1,param_2);
    return;
  }
}



// FUNCTION 146cd9cd4 FUN_146cd9cd4 body=280 status=ok
// SIG undefined FUN_146cd9cd4(void)

undefined4
FUN_146cd9cd4(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_d0 [144];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_146cdd012(local_d0,param_2,param_1 + 0x38);
  local_148 = *param_3;
  uStack_140 = param_3[1];
  local_118 = (double)param_3[6] * *(double *)(param_1 + 0x48);
  local_138 = *(undefined4 *)(param_3 + 2);
  uStack_134 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_130 = *(undefined4 *)(param_3 + 3);
  uStack_12c = *(undefined4 *)((longlong)param_3 + 0x1c);
  dStack_120 = (double)param_3[5] * *(double *)(param_1 + 0x40);
  local_128 = (double)param_3[4] * *(double *)(param_1 + 0x38);
  uStack_110 = 0;
  local_108 = 0x3ff0000000000000;
  uStack_100 = 0x3ff0000000000000;
  local_f8 = 0x3ff0000000000000;
  uStack_f0 = 0;
  local_d8 = *(undefined8 *)(param_1 + 0x30);
  local_150 = &local_e8;
  local_e8 = *(undefined8 *)(param_1 + 0x20);
  uStack_e0 = *(undefined8 *)(param_1 + 0x28);
  local_158 = param_5;
  uVar1 = FUN_1405cc60c(*(undefined8 *)(param_1 + 0x88),local_d0,&local_148,param_4);
  FUN_1405cc3c4(local_d0);
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cd9dee FUN_146cd9dee body=884 status=ok
// SIG undefined FUN_146cd9dee(void)

void FUN_146cd9dee(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_146cc490a;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_1406863be;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cda164 FUN_146cda164 body=884 status=ok
// SIG undefined FUN_146cda164(void)

void FUN_146cda164(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_146cc490a;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_1406863dc;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cda4da FUN_146cda4da body=884 status=ok
// SIG undefined FUN_146cda4da(void)

void FUN_146cda4da(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_146cc490a;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_1406864a0;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cda850 FUN_146cda850 body=884 status=ok
// SIG undefined FUN_146cda850(void)

void FUN_146cda850(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_146cc490a;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_14172543a;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cdabc6 FUN_146cdabc6 body=884 status=ok
// SIG undefined FUN_146cdabc6(void)

void FUN_146cdabc6(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_146cc490a;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_140686536;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cdaf3c FUN_146cdaf3c body=877 status=ok
// SIG undefined FUN_146cdaf3c(void)

void FUN_146cdaf3c(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_146cc490a;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_146cc490a;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cdb2aa FUN_146cdb2aa body=884 status=ok
// SIG undefined FUN_146cdb2aa(void)

void FUN_146cdb2aa(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_146cc490a;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_146cc4a26;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cdb620 FUN_146cdb620 body=884 status=ok
// SIG undefined FUN_146cdb620(void)

void FUN_146cdb620(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_146cc490a;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_14068657c;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cdb996 FUN_146cdb996 body=176 status=ok
// SIG undefined FUN_146cdb996(void)

void FUN_146cdb996(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146cdbf25(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cdba48 FUN_146cdba48 body=176 status=ok
// SIG undefined FUN_146cdba48(void)

void FUN_146cdba48(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146cdc157(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cdbafa FUN_146cdbafa body=176 status=ok
// SIG undefined FUN_146cdbafa(void)

void FUN_146cdbafa(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146cdc342(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cdbbac FUN_146cdbbac body=176 status=ok
// SIG undefined FUN_146cdbbac(void)

void FUN_146cdbbac(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146cdc564(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cdbc5e FUN_146cdbc5e body=176 status=ok
// SIG undefined FUN_146cdbc5e(void)

void FUN_146cdbc5e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146cdc77b(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cdbd10 FUN_146cdbd10 body=176 status=ok
// SIG undefined FUN_146cdbd10(void)

void FUN_146cdbd10(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146cdc990(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cdbdc2 FUN_146cdbdc2 body=176 status=ok
// SIG undefined FUN_146cdbdc2(void)

void FUN_146cdbdc2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146cdcb77(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cdbe74 FUN_146cdbe74 body=176 status=ok
// SIG undefined FUN_146cdbe74(void)

void FUN_146cdbe74(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146cdcd8c(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cdbf25 FUN_146cdbf25 body=561 status=ok
// SIG undefined FUN_146cdbf25(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cdbf25(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  longlong local_a8;
  float local_a0;
  float local_9c;
  undefined1 *local_98;
  longlong local_90;
  float local_88;
  undefined4 local_84;
  code *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  dVar7 = *(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68);
  dVar1 = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  dVar6 = *(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar1 = *(double *)(param_1 + 0x10);
  dVar7 = (dVar1 + *(double *)(param_1 + 0x20)) - (*(double *)(param_1 + 0x20) - dVar1);
  dVar9 = (dVar1 + *(double *)(param_1 + 0x30)) - (*(double *)(param_1 + 0x30) - dVar1);
  dVar11 = (dVar1 + *(double *)(param_1 + 0x28)) - (*(double *)(param_1 + 0x28) - dVar1);
  if ((dVar7 <= dVar11 || dVar7 <= dVar9) && (dVar7 = dVar11, dVar11 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_88 = (float)*(double *)(param_2 + 0x10);
  local_84 = 0;
  local_80 = FUN_146cc5264;
  local_a0 = (float)dVar1;
  local_98 = &LAB_144a386ca;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_68._0_4_ = (float)param_3[4];
  local_68._4_4_ = (float)param_3[5];
  local_68._8_4_ = (float)param_3[6];
  local_68._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar12._0_4_ = fVar5 + fVar3;
  auVar12._4_4_ = fVar5 + fVar3;
  auVar12._8_4_ = fVar3 + fVar5;
  auVar12._12_4_ = fVar3 + fVar5;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps(_DAT_1499314a0,auVar13);
  auVar14._0_4_ = auVar13._0_4_ * fVar8;
  auVar14._4_4_ = auVar13._4_4_ * fVar10;
  auVar14._8_4_ = auVar13._8_4_ * fVar2;
  auVar14._12_4_ = auVar13._12_4_ * fVar4;
  auVar13._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
  auVar13._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
  auVar13._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
  auVar13._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
  local_58 = blendvps(_DAT_149932320,auVar14,auVar13);
  local_c8 = local_58;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_b8 = local_78;
  local_78._4_4_ = (float)param_5[1];
  local_78._0_4_ = (float)*param_5;
  local_78._8_4_ = (float)param_5[2];
  local_78._12_4_ = 0;
  local_c0 = param_4;
  local_a8 = param_1;
  local_9c = local_a0;
  local_90 = param_2;
  FUN_144946907(&local_a8,&local_90,dVar7);
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cdc157 FUN_146cdc157 body=490 status=ok
// SIG undefined FUN_146cdc157(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cdc157(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  undefined4 local_7c;
  code *local_78;
  longlong local_70;
  float local_68;
  undefined4 local_64;
  code *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar7 = *(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68);
  dVar1 = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  dVar6 = *(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar9 = *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30);
  dVar1 = *(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28);
  dVar7 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
  if ((dVar7 <= dVar1 || dVar7 <= dVar9) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = 0;
  local_60 = FUN_146cc5264;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = 0;
  local_78 = FUN_144857b9e;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cdc342 FUN_146cdc342 body=545 status=ok
// SIG undefined FUN_146cdc342(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cdc342(longlong param_1,double param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  longlong local_d0;
  float local_c8;
  float local_c4;
  undefined1 *local_c0;
  double local_b8;
  float local_b0;
  undefined4 uStack_ac;
  code *local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dVar8 = *(double *)((longlong)param_2 + 0x80) - *(double *)((longlong)param_2 + 0x68);
  dVar1 = *(double *)((longlong)param_2 + 0x78) - *(double *)((longlong)param_2 + 0x60);
  dVar2 = *(double *)((longlong)param_2 + 0x70) - *(double *)((longlong)param_2 + 0x58);
  if ((dVar2 <= dVar1 || dVar2 <= dVar8) && (dVar2 = dVar1, dVar1 <= dVar8)) {
    dVar2 = dVar8;
  }
  FUN_144b0186e(param_1,&local_b8);
  local_90 = local_90 - (double)local_a8;
  local_98 = local_98 - (double)CONCAT44(uStack_ac,local_b0);
  local_a0 = local_a0 - local_b8;
  if ((local_a0 <= local_98 || local_a0 <= local_90) && (local_a0 = local_98, local_98 <= local_90))
  {
    local_a0 = local_90;
  }
  local_b0 = (float)*(double *)((longlong)param_2 + 0x10);
  uStack_ac = 0;
  local_a8 = FUN_146cc5264;
  local_c8 = (float)*(double *)(param_1 + 0x10);
  local_c0 = &LAB_144a386e2;
  fVar3 = (float)param_3[2];
  fVar5 = (float)param_3[3];
  fVar7 = (float)*param_3;
  fVar9 = (float)param_3[1];
  local_78._0_4_ = (float)param_3[4];
  local_78._4_4_ = (float)param_3[5];
  local_78._8_4_ = (float)param_3[6];
  local_78._12_4_ = 0;
  fVar4 = fVar7 * fVar7 + fVar9 * fVar9;
  fVar6 = fVar3 * fVar3 + fVar5 * fVar5;
  auVar10._0_4_ = fVar6 + fVar4;
  auVar10._4_4_ = fVar6 + fVar4;
  auVar10._8_4_ = fVar4 + fVar6;
  auVar10._12_4_ = fVar4 + fVar6;
  auVar11 = sqrtps(auVar10,auVar10);
  auVar11 = divps(_DAT_1499314a0,auVar11);
  auVar12._0_4_ = auVar11._0_4_ * fVar7;
  auVar12._4_4_ = auVar11._4_4_ * fVar9;
  auVar12._8_4_ = auVar11._8_4_ * fVar3;
  auVar12._12_4_ = auVar11._12_4_ * fVar5;
  auVar11._4_4_ = -(uint)(1e-08 <= auVar10._4_4_);
  auVar11._0_4_ = -(uint)(1e-08 <= auVar10._0_4_);
  auVar11._8_4_ = -(uint)(1e-08 <= auVar10._8_4_);
  auVar11._12_4_ = -(uint)(1e-08 <= auVar10._12_4_);
  local_68 = blendvps(_DAT_149932320,auVar12,auVar11);
  local_e8 = local_68;
  if (local_a0 <= dVar2) {
    local_a0 = dVar2;
  }
  local_d8 = local_88;
  local_88._4_4_ = (float)param_5[1];
  local_88._0_4_ = (float)*param_5;
  local_88._8_4_ = (float)param_5[2];
  local_88._12_4_ = 0;
  local_e0 = param_4;
  local_d0 = param_1;
  local_c4 = local_c8;
  local_b8 = param_2;
  FUN_144946907(&local_d0,&local_b8,local_a0);
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cdc564 FUN_146cdc564 body=534 status=ok
// SIG undefined FUN_146cdc564(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cdc564(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  longlong local_98;
  float local_90;
  undefined4 local_8c;
  code *local_88;
  longlong local_80;
  float local_78;
  undefined4 local_74;
  code *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  dVar7 = *(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68);
  dVar1 = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  dVar6 = *(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58);
  if ((dVar6 <= dVar1 || dVar6 <= dVar7) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar7 = (double)*(float *)(param_1 + 0x4c) - (double)*(float *)(param_1 + 0x40);
  dVar1 = (double)*(float *)(param_1 + 0x54) - (double)*(float *)(param_1 + 0x48);
  dVar9 = (double)*(float *)(param_1 + 0x50) - (double)*(float *)(param_1 + 0x44);
  if ((dVar7 <= dVar9 || dVar7 <= dVar1) && (dVar7 = dVar9, dVar9 <= dVar1)) {
    dVar7 = dVar1;
  }
  local_78 = (float)*(double *)(param_2 + 0x10);
  local_74 = 0;
  local_70 = FUN_146cc5264;
  local_90 = (float)*(double *)(param_1 + 0x10);
  local_8c = 0;
  local_88 = FUN_14172546a;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_58._0_4_ = (float)param_3[4];
  local_58._4_4_ = (float)param_3[5];
  local_58._8_4_ = (float)param_3[6];
  local_58._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_48 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_b8 = local_48;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_a8 = local_68;
  local_68._4_4_ = (float)param_5[1];
  local_68._0_4_ = (float)*param_5;
  local_68._8_4_ = (float)param_5[2];
  local_68._12_4_ = 0;
  local_b0 = param_4;
  local_98 = param_1;
  local_80 = param_2;
  FUN_144946907(&local_98,&local_80,dVar7);
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cdc77b FUN_146cdc77b body=532 status=ok
// SIG undefined FUN_146cdc77b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cdc77b(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  float local_7c;
  undefined1 *local_78;
  longlong local_70;
  float local_68;
  undefined4 local_64;
  code *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar7 = *(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68);
  dVar1 = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  dVar6 = *(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar9 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar1 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar7 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar7 <= dVar1 || dVar7 <= dVar9) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = 0;
  local_60 = FUN_146cc5264;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_1 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_1 + 0x10));
  local_78 = &LAB_146cc500a;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cdc990 FUN_146cdc990 body=486 status=ok
// SIG undefined FUN_146cdc990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cdc990(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  undefined4 local_7c;
  code *local_78;
  longlong local_70;
  float local_68;
  undefined4 local_64;
  code *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar7 = *(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68);
  dVar1 = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  dVar6 = *(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar9 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar1 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar7 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar7 <= dVar1 || dVar7 <= dVar9) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = 0;
  local_60 = FUN_146cc5264;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = 0;
  local_78 = FUN_146cc5264;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cdcb77 FUN_146cdcb77 body=532 status=ok
// SIG undefined FUN_146cdcb77(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cdcb77(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  float local_7c;
  code *local_78;
  longlong local_70;
  float local_68;
  undefined4 local_64;
  code *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar7 = *(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68);
  dVar1 = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  dVar6 = *(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar9 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar1 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar7 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar7 <= dVar1 || dVar7 <= dVar9) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = 0;
  local_60 = FUN_146cc5264;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_1 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_1 + 0x10));
  local_78 = FUN_146cc5596;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cdcd8c FUN_146cdcd8c body=493 status=ok
// SIG undefined FUN_146cdcd8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cdcd8c(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  undefined4 local_7c;
  code *local_78;
  longlong local_70;
  float local_68;
  undefined4 local_64;
  code *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar7 = *(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68);
  dVar1 = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  dVar6 = *(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar9 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar1 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar7 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar7 <= dVar1 || dVar7 <= dVar9) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = 0;
  local_60 = FUN_146cc5264;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = 0;
  local_78 = FUN_144a12d46;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cdcf80 FUN_146cdcf80 body=145 status=ok
// SIG undefined FUN_146cdcf80(void)

void FUN_146cdcf80(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1447dc19e(param_3,local_88,param_1[1]);
  local_90 = *(undefined8 *)param_1[5];
  local_98 = param_1[4];
  cVar1 = FUN_146cd93af(param_2,local_88,param_1[2],param_1[3]);
  if (cVar1 != '\0') {
    *(undefined1 *)*param_1 = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cdd012 FUN_146cdd012 body=184 status=ok
// SIG undefined FUN_146cdd012(void)

undefined8 FUN_146cdd012(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_e8 [32];
  longlong local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined1 local_a8 [144];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0 = param_3[2] * *(double *)(param_2 + 0x30);
  local_b8 = param_3[1] * *(double *)(param_2 + 0x28);
  local_c0 = *param_3 * *(double *)(param_2 + 0x20);
  local_c8 = *(longlong *)(param_2 + 0x88);
  if (local_c8 != 0) {
    LOCK();
    *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
    UNLOCK();
  }
  FUN_1405cd3a6(local_a8,&local_c8,&local_c0,0);
  FUN_1405cd5a8(param_1,local_a8);
  FUN_1405cc3c4(local_a8);
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cdd0cb FUN_146cdd0cb body=1198 status=ok
// SIG undefined FUN_146cdd0cb(void)

ulonglong FUN_146cdd0cb(longlong param_1,double **param_2,double *param_3,double *param_4,
                       double **param_5,double **param_6)

{
  double *pdVar1;
  byte bVar3;
  undefined1 auVar4 [16];
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double **ppdVar10;
  double **ppdVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_178 [32];
  double **local_158;
  double **local_150;
  double *local_140;
  double **local_138;
  double *local_130;
  double *local_128;
  double **local_120;
  undefined8 *local_118;
  undefined1 *local_110;
  double **local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  undefined1 local_e8 [104];
  ulonglong local_80;
  double *pdVar2;
  
  ppdVar11 = param_6;
  ppdVar10 = param_5;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  bVar3 = *(byte *)(param_1 + 0x1c);
  if (bVar3 == 4) {
    FUN_1447dc19e(param_1 + 0x30,local_e8,param_2);
    local_150 = ppdVar11;
    local_158 = ppdVar10;
    uVar12 = FUN_146cdd0cb(*(undefined8 *)(param_1 + 0x20),local_e8,param_3,param_4);
    goto LAB_146cdd1c4;
  }
  FUN_1449437a2(param_4,local_e8,param_2);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    local_f0 = (double)param_2[6] - param_4[6];
    local_100 = (double)param_2[4] - param_4[4];
    dStack_f8 = (double)param_2[5] - param_4[5];
    local_140 = param_3;
    if (ppdVar11 == (double **)0x0) {
      local_138 = (double **)&param_5;
      local_130 = &local_100;
      uVar12 = FUN_146cdd7b5(param_1,local_e8);
    }
    else {
      local_138 = (double **)&param_6;
      local_130 = (double *)&param_5;
      local_128 = &local_100;
      local_120 = param_2;
      uVar12 = FUN_146cdd57a(param_1,local_e8);
    }
    goto LAB_146cdd1c4;
  }
  switch(bVar3) {
  case 5:
  case 0xf:
    local_140 = &local_100;
    local_100 = (double)((ulonglong)local_100 & 0xffffffffffffff00);
    local_108 = &local_140;
    local_120 = ppdVar10;
    local_118 = &param_6;
    local_110 = &LAB_146ce0d80;
    local_138 = param_2;
    local_130 = param_3;
    local_128 = param_4;
    FUN_146db006e(param_1);
    uVar12 = (ulonglong)local_100 & 0xff;
    goto LAB_146cdd1c4;
  case 6:
    local_158 = ppdVar11;
    uVar12 = FUN_146dd8732(param_1,param_3,local_e8,ppdVar10);
    break;
  default:
    if (-1 < (char)bVar3) {
      if (bVar3 < 0x40) {
        uVar12 = 0;
        goto LAB_146cdd1c4;
      }
      param_1 = *(longlong *)(param_1 + 0x28);
      goto LAB_146cdd275;
    }
    local_158 = ppdVar11;
    uVar12 = FUN_146cdd9f0(param_1,param_3,local_e8,ppdVar10);
    break;
  case 0xb:
LAB_146cdd275:
    local_150 = &local_140;
    local_158 = ppdVar11;
    local_130 = (double *)&DAT_3ff0000000000000;
    local_138 = (double **)&DAT_3ff0000000000000;
    local_140 = (double *)&DAT_3ff0000000000000;
    uVar12 = FUN_1402e8e8c(param_1,param_3,local_e8,ppdVar10);
    break;
  case 0xc:
    local_158 = ppdVar11;
    uVar12 = thunk_FUN_146d940f0(param_1,param_3,local_e8,ppdVar10);
  }
  if ((char)uVar12 == '\x01' && param_6 != (double **)0x0) {
    pdVar5 = *param_6;
    pdVar6 = param_6[1];
    pdVar7 = *param_2;
    pdVar8 = param_2[1];
    pdVar9 = param_2[2];
    pdVar1 = param_2[3];
    pdVar2 = param_2[3];
    dVar14 = (double)pdVar6 * (double)pdVar7 - (double)pdVar5 * (double)pdVar8;
    dVar15 = (double)param_6[2] * (double)pdVar8 - (double)pdVar6 * (double)pdVar9;
    dVar18 = (double)pdVar5 * (double)pdVar9 - (double)pdVar7 * (double)param_6[2];
    dVar15 = dVar15 + dVar15;
    dVar18 = dVar18 + dVar18;
    dVar14 = dVar14 + dVar14;
    *param_6 = (double *)
               ((dVar14 * (double)pdVar8 - dVar18 * (double)pdVar9) +
               (double)pdVar1 * dVar15 + (double)pdVar5);
    param_6[1] = (double *)
                 (((double)pdVar9 * dVar15 - (double)pdVar7 * dVar14) +
                 (double)pdVar2 * dVar18 + (double)pdVar6);
    param_6[2] = (double *)
                 (dVar14 * (double)pdVar1 + (double)param_6[2] +
                 (dVar18 * (double)pdVar7 - dVar15 * (double)pdVar8));
    dVar13 = (double)param_6[3] * (double)param_2[8];
    dVar15 = (double)param_6[4] * (double)param_2[9];
    dVar18 = (double)param_6[5] * (double)param_2[10];
    pdVar5 = *param_2;
    pdVar6 = param_2[1];
    pdVar7 = param_2[2];
    pdVar2 = param_2[3];
    dVar16 = dVar15 * (double)pdVar5 - dVar13 * (double)pdVar6;
    dVar17 = dVar18 * (double)pdVar6 - dVar15 * (double)pdVar7;
    dVar14 = dVar13 * (double)pdVar7 - (double)pdVar5 * dVar18;
    dVar17 = dVar17 + dVar17;
    dVar14 = dVar14 + dVar14;
    dVar16 = dVar16 + dVar16;
    dVar15 = ((double)pdVar7 * dVar17 - (double)pdVar5 * dVar16) +
             (double)param_2[3] * dVar14 + dVar15 + (double)param_2[5];
    pdVar1 = param_2[6];
    auVar4._8_4_ = SUB84(dVar15,0);
    auVar4._0_8_ = (dVar16 * (double)pdVar6 - dVar14 * (double)pdVar7) +
                   (double)pdVar2 * dVar17 + dVar13 + (double)param_2[4];
    auVar4._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    *(undefined1 (*) [16])(param_6 + 3) = auVar4;
    param_6[5] = (double *)
                 (dVar16 * (double)pdVar2 + dVar18 +
                  (dVar14 * (double)pdVar5 - dVar17 * (double)pdVar6) + (double)pdVar1);
    uVar12 = 1;
  }
LAB_146cdd1c4:
  if ((local_80 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cdd57a FUN_146cdd57a body=373 status=ok
// SIG undefined FUN_146cdd57a(void)

void FUN_146cdd57a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
switchD_146cdd60b_caseD_0:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 1:
switchD_146cdd60b_caseD_1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 2:
  case 5:
  case 6:
  case 7:
    goto switchD_146cdd5d1_caseD_82;
  case 3:
switchD_146cdd60b_caseD_3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_146cdd57a(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 8:
switchD_146cdd60b_caseD_8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  default:
    switch(uVar1) {
    case 0x40:
      goto switchD_146cdd60b_caseD_0;
    case 0x41:
      goto switchD_146cdd60b_caseD_1;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      break;
    case 0x43:
      goto switchD_146cdd60b_caseD_3;
    case 0x48:
      goto switchD_146cdd60b_caseD_8;
    default:
      switch(uVar1) {
      case 0x80:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x81:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x83:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x88:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      }
    }
switchD_146cdd5d1_caseD_82:
    if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_146cddb0a(param_3,param_1,param_2);
    return;
  }
}



// FUNCTION 146cdd7b5 FUN_146cdd7b5 body=373 status=ok
// SIG undefined FUN_146cdd7b5(void)

void FUN_146cdd7b5(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
switchD_146cdd846_caseD_0:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 1:
switchD_146cdd846_caseD_1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 2:
  case 5:
  case 6:
  case 7:
    goto switchD_146cdd80c_caseD_82;
  case 3:
switchD_146cdd846_caseD_3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_146cdd7b5(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 8:
switchD_146cdd846_caseD_8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  default:
    switch(uVar1) {
    case 0x40:
      goto switchD_146cdd846_caseD_0;
    case 0x41:
      goto switchD_146cdd846_caseD_1;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      break;
    case 0x43:
      goto switchD_146cdd846_caseD_3;
    case 0x48:
      goto switchD_146cdd846_caseD_8;
    default:
      switch(uVar1) {
      case 0x80:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x81:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x83:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x88:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      }
    }
switchD_146cdd80c_caseD_82:
    if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_146cdf6b2(param_3,param_1,param_2);
    return;
  }
}



// FUNCTION 146cdd9f0 FUN_146cdd9f0 body=280 status=ok
// SIG undefined FUN_146cdd9f0(void)

undefined4
FUN_146cdd9f0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_d0 [144];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_146ce0e18(local_d0,param_2,param_1 + 0x38);
  local_148 = *param_3;
  uStack_140 = param_3[1];
  local_118 = (double)param_3[6] * *(double *)(param_1 + 0x48);
  local_138 = *(undefined4 *)(param_3 + 2);
  uStack_134 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_130 = *(undefined4 *)(param_3 + 3);
  uStack_12c = *(undefined4 *)((longlong)param_3 + 0x1c);
  dStack_120 = (double)param_3[5] * *(double *)(param_1 + 0x40);
  local_128 = (double)param_3[4] * *(double *)(param_1 + 0x38);
  uStack_110 = 0;
  local_108 = 0x3ff0000000000000;
  uStack_100 = 0x3ff0000000000000;
  local_f8 = 0x3ff0000000000000;
  uStack_f0 = 0;
  local_d8 = *(undefined8 *)(param_1 + 0x30);
  local_150 = &local_e8;
  local_e8 = *(undefined8 *)(param_1 + 0x20);
  uStack_e0 = *(undefined8 *)(param_1 + 0x28);
  local_158 = param_5;
  uVar1 = FUN_1402e8e8c(*(undefined8 *)(param_1 + 0x88),local_d0,&local_148,param_4);
  FUN_1402e5682(local_d0);
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cddb0a FUN_146cddb0a body=884 status=ok
// SIG undefined FUN_146cddb0a(void)

void FUN_146cddb0a(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_146cc4a26;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_1406863be;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cdde80 FUN_146cdde80 body=884 status=ok
// SIG undefined FUN_146cdde80(void)

void FUN_146cdde80(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_146cc4a26;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_1406863dc;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cde1f6 FUN_146cde1f6 body=884 status=ok
// SIG undefined FUN_146cde1f6(void)

void FUN_146cde1f6(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_146cc4a26;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_1406864a0;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cde56c FUN_146cde56c body=884 status=ok
// SIG undefined FUN_146cde56c(void)

void FUN_146cde56c(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_146cc4a26;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_14172543a;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cde8e2 FUN_146cde8e2 body=884 status=ok
// SIG undefined FUN_146cde8e2(void)

void FUN_146cde8e2(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_146cc4a26;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_140686536;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cdec58 FUN_146cdec58 body=884 status=ok
// SIG undefined FUN_146cdec58(void)

void FUN_146cdec58(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_146cc4a26;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_146cc490a;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cdefce FUN_146cdefce body=877 status=ok
// SIG undefined FUN_146cdefce(void)

void FUN_146cdefce(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_146cc4a26;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_146cc4a26;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cdf33c FUN_146cdf33c body=884 status=ok
// SIG undefined FUN_146cdf33c(void)

void FUN_146cdf33c(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_146cc4a26;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_14068657c;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cdf6b2 FUN_146cdf6b2 body=176 status=ok
// SIG undefined FUN_146cdf6b2(void)

void FUN_146cdf6b2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146cdfc41(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cdf764 FUN_146cdf764 body=176 status=ok
// SIG undefined FUN_146cdf764(void)

void FUN_146cdf764(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146cdfe90(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cdf816 FUN_146cdf816 body=176 status=ok
// SIG undefined FUN_146cdf816(void)

void FUN_146cdf816(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146ce009b(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cdf8c8 FUN_146cdf8c8 body=176 status=ok
// SIG undefined FUN_146cdf8c8(void)

void FUN_146cdf8c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146ce02da(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cdf97a FUN_146cdf97a body=176 status=ok
// SIG undefined FUN_146cdf97a(void)

void FUN_146cdf97a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146ce0513(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cdfa2c FUN_146cdfa2c body=176 status=ok
// SIG undefined FUN_146cdfa2c(void)

void FUN_146cdfa2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146ce073f(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cdfade FUN_146cdfade body=176 status=ok
// SIG undefined FUN_146cdfade(void)

void FUN_146cdfade(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146ce094d(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cdfb90 FUN_146cdfb90 body=176 status=ok
// SIG undefined FUN_146cdfb90(void)

void FUN_146cdfb90(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146ce0b72(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cdfc41 FUN_146cdfc41 body=590 status=ok
// SIG undefined FUN_146cdfc41(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cdfc41(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  longlong local_a8;
  float local_a0;
  float local_9c;
  undefined1 *local_98;
  longlong local_90;
  float local_88;
  float local_84;
  code *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  dVar7 = *(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68);
  dVar1 = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  dVar6 = *(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar1 = *(double *)(param_1 + 0x10);
  dVar7 = (dVar1 + *(double *)(param_1 + 0x20)) - (*(double *)(param_1 + 0x20) - dVar1);
  dVar9 = (dVar1 + *(double *)(param_1 + 0x30)) - (*(double *)(param_1 + 0x30) - dVar1);
  dVar11 = (dVar1 + *(double *)(param_1 + 0x28)) - (*(double *)(param_1 + 0x28) - dVar1);
  if ((dVar7 <= dVar11 || dVar7 <= dVar9) && (dVar7 = dVar11, dVar11 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_88 = (float)*(double *)(param_2 + 0x10);
  local_84 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_80 = FUN_146cc5596;
  local_a0 = (float)dVar1;
  local_98 = &LAB_144a386ca;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_68._0_4_ = (float)param_3[4];
  local_68._4_4_ = (float)param_3[5];
  local_68._8_4_ = (float)param_3[6];
  local_68._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar12._0_4_ = fVar5 + fVar3;
  auVar12._4_4_ = fVar5 + fVar3;
  auVar12._8_4_ = fVar3 + fVar5;
  auVar12._12_4_ = fVar3 + fVar5;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps(_DAT_1499314a0,auVar13);
  auVar14._0_4_ = auVar13._0_4_ * fVar8;
  auVar14._4_4_ = auVar13._4_4_ * fVar10;
  auVar14._8_4_ = auVar13._8_4_ * fVar2;
  auVar14._12_4_ = auVar13._12_4_ * fVar4;
  auVar13._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
  auVar13._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
  auVar13._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
  auVar13._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
  local_58 = blendvps(_DAT_149932320,auVar14,auVar13);
  local_c8 = local_58;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_b8 = local_78;
  local_78._4_4_ = (float)param_5[1];
  local_78._0_4_ = (float)*param_5;
  local_78._8_4_ = (float)param_5[2];
  local_78._12_4_ = 0;
  local_c0 = param_4;
  local_a8 = param_1;
  local_9c = local_a0;
  local_90 = param_2;
  FUN_144946907(&local_a8,&local_90,dVar7);
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cdfe90 FUN_146cdfe90 body=522 status=ok
// SIG undefined FUN_146cdfe90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cdfe90(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  undefined4 local_7c;
  code *local_78;
  longlong local_70;
  float local_68;
  float local_64;
  code *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar7 = *(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68);
  dVar1 = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  dVar6 = *(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar9 = *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30);
  dVar1 = *(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28);
  dVar7 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
  if ((dVar7 <= dVar1 || dVar7 <= dVar9) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_60 = FUN_146cc5596;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = 0;
  local_78 = FUN_144857b9e;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ce009b FUN_146ce009b body=574 status=ok
// SIG undefined FUN_146ce009b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146ce009b(longlong param_1,double param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  longlong local_d0;
  float local_c8;
  float local_c4;
  undefined1 *local_c0;
  double local_b8;
  float local_b0;
  float fStack_ac;
  code *local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dVar8 = *(double *)((longlong)param_2 + 0x80) - *(double *)((longlong)param_2 + 0x68);
  dVar1 = *(double *)((longlong)param_2 + 0x78) - *(double *)((longlong)param_2 + 0x60);
  dVar2 = *(double *)((longlong)param_2 + 0x70) - *(double *)((longlong)param_2 + 0x58);
  if ((dVar2 <= dVar1 || dVar2 <= dVar8) && (dVar2 = dVar1, dVar1 <= dVar8)) {
    dVar2 = dVar8;
  }
  FUN_144b0186e(param_1,&local_b8);
  local_90 = local_90 - (double)local_a8;
  local_98 = local_98 - (double)CONCAT44(fStack_ac,local_b0);
  local_a0 = local_a0 - local_b8;
  if ((local_a0 <= local_98 || local_a0 <= local_90) && (local_a0 = local_98, local_98 <= local_90))
  {
    local_a0 = local_90;
  }
  local_b0 = (float)*(double *)((longlong)param_2 + 0x10);
  fStack_ac = (float)(double)(-(ulonglong)
                               (0.0 < *(double *)(*(longlong *)((longlong)param_2 + 0x88) + 0x10)) &
                             (ulonglong)*(double *)((longlong)param_2 + 0x10));
  local_a8 = FUN_146cc5596;
  local_c8 = (float)*(double *)(param_1 + 0x10);
  local_c0 = &LAB_144a386e2;
  fVar3 = (float)param_3[2];
  fVar5 = (float)param_3[3];
  fVar7 = (float)*param_3;
  fVar9 = (float)param_3[1];
  local_78._0_4_ = (float)param_3[4];
  local_78._4_4_ = (float)param_3[5];
  local_78._8_4_ = (float)param_3[6];
  local_78._12_4_ = 0;
  fVar4 = fVar7 * fVar7 + fVar9 * fVar9;
  fVar6 = fVar3 * fVar3 + fVar5 * fVar5;
  auVar10._0_4_ = fVar6 + fVar4;
  auVar10._4_4_ = fVar6 + fVar4;
  auVar10._8_4_ = fVar4 + fVar6;
  auVar10._12_4_ = fVar4 + fVar6;
  auVar11 = sqrtps(auVar10,auVar10);
  auVar11 = divps(_DAT_1499314a0,auVar11);
  auVar12._0_4_ = auVar11._0_4_ * fVar7;
  auVar12._4_4_ = auVar11._4_4_ * fVar9;
  auVar12._8_4_ = auVar11._8_4_ * fVar3;
  auVar12._12_4_ = auVar11._12_4_ * fVar5;
  auVar11._4_4_ = -(uint)(1e-08 <= auVar10._4_4_);
  auVar11._0_4_ = -(uint)(1e-08 <= auVar10._0_4_);
  auVar11._8_4_ = -(uint)(1e-08 <= auVar10._8_4_);
  auVar11._12_4_ = -(uint)(1e-08 <= auVar10._12_4_);
  local_68 = blendvps(_DAT_149932320,auVar12,auVar11);
  local_e8 = local_68;
  if (local_a0 <= dVar2) {
    local_a0 = dVar2;
  }
  local_d8 = local_88;
  local_88._4_4_ = (float)param_5[1];
  local_88._0_4_ = (float)*param_5;
  local_88._8_4_ = (float)param_5[2];
  local_88._12_4_ = 0;
  local_e0 = param_4;
  local_d0 = param_1;
  local_c4 = local_c8;
  local_b8 = param_2;
  FUN_144946907(&local_d0,&local_b8,local_a0);
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ce02da FUN_146ce02da body=568 status=ok
// SIG undefined FUN_146ce02da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146ce02da(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  longlong local_98;
  float local_90;
  undefined4 local_8c;
  code *local_88;
  longlong local_80;
  float local_78;
  float local_74;
  code *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  dVar7 = *(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68);
  dVar1 = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  dVar6 = *(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58);
  if ((dVar6 <= dVar1 || dVar6 <= dVar7) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar7 = (double)*(float *)(param_1 + 0x4c) - (double)*(float *)(param_1 + 0x40);
  dVar1 = (double)*(float *)(param_1 + 0x54) - (double)*(float *)(param_1 + 0x48);
  dVar9 = (double)*(float *)(param_1 + 0x50) - (double)*(float *)(param_1 + 0x44);
  if ((dVar7 <= dVar9 || dVar7 <= dVar1) && (dVar7 = dVar9, dVar9 <= dVar1)) {
    dVar7 = dVar1;
  }
  local_78 = (float)*(double *)(param_2 + 0x10);
  local_74 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_70 = FUN_146cc5596;
  local_90 = (float)*(double *)(param_1 + 0x10);
  local_8c = 0;
  local_88 = FUN_14172546a;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_58._0_4_ = (float)param_3[4];
  local_58._4_4_ = (float)param_3[5];
  local_58._8_4_ = (float)param_3[6];
  local_58._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_48 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_b8 = local_48;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_a8 = local_68;
  local_68._4_4_ = (float)param_5[1];
  local_68._0_4_ = (float)*param_5;
  local_68._8_4_ = (float)param_5[2];
  local_68._12_4_ = 0;
  local_b0 = param_4;
  local_98 = param_1;
  local_80 = param_2;
  FUN_144946907(&local_98,&local_80,dVar7);
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ce0513 FUN_146ce0513 body=555 status=ok
// SIG undefined FUN_146ce0513(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146ce0513(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  float local_7c;
  undefined1 *local_78;
  longlong local_70;
  float local_68;
  float local_64;
  code *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar7 = *(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68);
  dVar1 = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  dVar6 = *(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar9 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar1 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar7 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar7 <= dVar9 || dVar7 <= dVar1) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_60 = FUN_146cc5596;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_1 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_1 + 0x10));
  local_78 = &LAB_146cc500a;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ce073f FUN_146ce073f body=525 status=ok
// SIG undefined FUN_146ce073f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146ce073f(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  undefined4 local_7c;
  code *local_78;
  longlong local_70;
  float local_68;
  float local_64;
  code *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar7 = *(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68);
  dVar1 = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  dVar6 = *(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar9 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar1 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar7 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar7 <= dVar1 || dVar7 <= dVar9) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_60 = FUN_146cc5596;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = 0;
  local_78 = FUN_146cc5264;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ce094d FUN_146ce094d body=548 status=ok
// SIG undefined FUN_146ce094d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146ce094d(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  float local_7c;
  code *local_78;
  longlong local_70;
  float local_68;
  float local_64;
  code *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar7 = *(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68);
  dVar1 = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  dVar6 = *(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar9 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar1 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar7 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar7 <= dVar9 || dVar7 <= dVar1) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_60 = FUN_146cc5596;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_1 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_1 + 0x10));
  local_78 = FUN_146cc5596;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ce0b72 FUN_146ce0b72 body=525 status=ok
// SIG undefined FUN_146ce0b72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146ce0b72(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  undefined4 local_7c;
  code *local_78;
  longlong local_70;
  float local_68;
  float local_64;
  code *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar7 = *(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68);
  dVar1 = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  dVar6 = *(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar9 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar1 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar7 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar7 <= dVar1 || dVar7 <= dVar9) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_60 = FUN_146cc5596;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = 0;
  local_78 = FUN_144a12d46;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ce0d86 FUN_146ce0d86 body=145 status=ok
// SIG undefined FUN_146ce0d86(void)

void FUN_146ce0d86(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1447dc19e(param_3,local_88,param_1[1]);
  local_90 = *(undefined8 *)param_1[5];
  local_98 = param_1[4];
  cVar1 = FUN_146cdd0cb(param_2,local_88,param_1[2],param_1[3]);
  if (cVar1 != '\0') {
    *(undefined1 *)*param_1 = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce0e18 FUN_146ce0e18 body=184 status=ok
// SIG undefined FUN_146ce0e18(void)

undefined8 FUN_146ce0e18(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_e8 [32];
  longlong local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined1 local_a8 [144];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0 = param_3[2] * *(double *)(param_2 + 0x30);
  local_b8 = param_3[1] * *(double *)(param_2 + 0x28);
  local_c0 = *param_3 * *(double *)(param_2 + 0x20);
  local_c8 = *(longlong *)(param_2 + 0x88);
  if (local_c8 != 0) {
    LOCK();
    *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
    UNLOCK();
  }
  FUN_1402e9c68(local_a8,&local_c8,&local_c0,0);
  FUN_1402e9d5a(param_1,local_a8);
  FUN_1402e5682(local_a8);
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce0ed1 FUN_146ce0ed1 body=373 status=ok
// SIG undefined FUN_146ce0ed1(void)

void FUN_146ce0ed1(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
switchD_146ce0f62_caseD_0:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 1:
switchD_146ce0f62_caseD_1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 2:
  case 5:
  case 6:
  case 7:
    goto switchD_146ce0f28_caseD_82;
  case 3:
switchD_146ce0f62_caseD_3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_146ce0ed1(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 8:
switchD_146ce0f62_caseD_8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  default:
    switch(uVar1) {
    case 0x40:
      goto switchD_146ce0f62_caseD_0;
    case 0x41:
      goto switchD_146ce0f62_caseD_1;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      break;
    case 0x43:
      goto switchD_146ce0f62_caseD_3;
    case 0x48:
      goto switchD_146ce0f62_caseD_8;
    default:
      switch(uVar1) {
      case 0x80:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x81:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x83:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x88:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      }
    }
switchD_146ce0f28_caseD_82:
    if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_146ce110c(param_3,param_1,param_2);
    return;
  }
}



// FUNCTION 146ce110c FUN_146ce110c body=884 status=ok
// SIG undefined FUN_146ce110c(void)

void FUN_146ce110c(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_14068657c;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_1406863be;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce1482 FUN_146ce1482 body=884 status=ok
// SIG undefined FUN_146ce1482(void)

void FUN_146ce1482(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_14068657c;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_1406863dc;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce17f8 FUN_146ce17f8 body=884 status=ok
// SIG undefined FUN_146ce17f8(void)

void FUN_146ce17f8(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_14068657c;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_1406864a0;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce1b6e FUN_146ce1b6e body=884 status=ok
// SIG undefined FUN_146ce1b6e(void)

void FUN_146ce1b6e(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_14068657c;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_14172543a;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce1ee4 FUN_146ce1ee4 body=884 status=ok
// SIG undefined FUN_146ce1ee4(void)

void FUN_146ce1ee4(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_14068657c;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_140686536;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce225a FUN_146ce225a body=884 status=ok
// SIG undefined FUN_146ce225a(void)

void FUN_146ce225a(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_14068657c;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_146cc490a;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce25d0 FUN_146ce25d0 body=884 status=ok
// SIG undefined FUN_146ce25d0(void)

void FUN_146ce25d0(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_14068657c;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_146cc4a26;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


