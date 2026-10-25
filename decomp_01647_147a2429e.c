// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147a2429e FUN_147a2429e body=183 status=ok
// SIG undefined FUN_147a2429e(void)

void FUN_147a2429e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a24356(param_1,&local_40,local_24);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a24356 FUN_147a24356 body=375 status=ok
// SIG undefined FUN_147a24356(void)

undefined1 (*) [16] FUN_147a24356(longlong param_1,undefined1 (*param_2) [16],undefined8 param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_64 = 0;
  uVar6 = FUN_140753fde(param_1 + 0x668,param_3);
  FUN_140754464(param_1 + 0x620,param_2,uVar6,&DAT_14c8464e0);
  dVar8 = *(double *)*param_2 * *(double *)(param_1 + 0x280);
  dVar9 = *(double *)(*param_2 + 8) * *(double *)(param_1 + 0x288);
  dVar7 = *(double *)param_2[1] * *(double *)(param_1 + 0x290);
  dVar3 = *(double *)(param_1 + 0x240);
  dVar4 = *(double *)(param_1 + 0x248);
  dVar5 = *(double *)(param_1 + 0x250);
  dVar1 = *(double *)(param_1 + 600);
  dVar10 = dVar9 * dVar3 - dVar8 * dVar4;
  dVar11 = dVar7 * dVar4 - dVar9 * dVar5;
  dVar12 = dVar8 * dVar5 - dVar3 * dVar7;
  dVar11 = dVar11 + dVar11;
  dVar12 = dVar12 + dVar12;
  dVar10 = dVar10 + dVar10;
  dVar9 = (dVar5 * dVar11 - dVar3 * dVar10) + *(double *)(param_1 + 600) * dVar12 + dVar9;
  auVar2._8_4_ = SUB84(dVar9,0);
  auVar2._0_8_ = (dVar10 * dVar4 - dVar12 * dVar5) + dVar1 * dVar11 + dVar8;
  auVar2._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *param_2 = auVar2;
  *(double *)param_2[1] = dVar10 * dVar1 + dVar7 + (dVar12 * dVar3 - dVar11 * dVar4);
  if ((local_60 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a244ec FUN_147a244ec body=7 status=ok
// SIG undefined FUN_147a244ec(void)

undefined1 FUN_147a244ec(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x695);
}



// FUNCTION 147a244fa FUN_147a244fa body=233 status=ok
// SIG undefined FUN_147a244fa(void)

void FUN_147a244fa(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a245e4(param_1,local_1c,local_20 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a245e4 FUN_147a245e4 body=444 status=ok
// SIG undefined FUN_147a245e4(void)

void FUN_147a245e4(longlong *param_1,uint param_2,char param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  
  iVar1 = (int)param_1[0xc5];
  if ((int)param_2 < iVar1 && -1 < (int)param_2) {
    uVar7 = ~param_2;
    uVar5 = (ulonglong)param_2;
    iVar4 = iVar1;
    if (iVar1 + uVar7 != 0) {
      memmove((void *)(param_1[0xc4] + uVar5 * 0x58),(void *)(param_1[0xc4] + uVar5 * 0x58 + 0x58),
              (longlong)(int)(iVar1 + uVar7) * 0x58);
      iVar4 = (int)param_1[0xc5];
    }
    *(int *)(param_1 + 0xc5) = iVar4 + -1;
    iVar4 = (int)param_1[200];
    if (iVar4 + uVar7 != 0) {
      memmove((void *)(param_1[199] + uVar5 * 0x80),(void *)(param_1[199] + uVar5 * 0x80 + 0x80),
              (longlong)(int)(iVar4 + uVar7) << 7);
      iVar4 = (int)param_1[200];
    }
    *(int *)(param_1 + 200) = iVar4 + -1;
    iVar4 = (int)param_1[0xcb];
    if (uVar7 + iVar4 != 0) {
      memmove((void *)(param_1[0xca] + uVar5 * 0x58),(void *)(uVar5 * 0x58 + param_1[0xca] + 0x58),
              (longlong)(int)(uVar7 + iVar4) * 0x58);
      iVar4 = (int)param_1[0xcb];
    }
    *(int *)(param_1 + 0xcb) = iVar4 + -1;
    plVar2 = (longlong *)(**(code **)(*param_1 + 0xa00))(param_1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x2b8))(plVar2,param_2);
    }
    if ((int)param_2 < iVar1 + -1) {
      lVar3 = uVar5 * 0x58;
      lVar6 = uVar5 << 7;
      do {
        *(float *)(param_1[0xc4] + lVar3) = *(float *)(param_1[0xc4] + lVar3) + -1.0;
        *(float *)(param_1[199] + lVar6) = *(float *)(param_1[199] + lVar6) + -1.0;
        *(float *)(param_1[0xca] + lVar3) = *(float *)(param_1[0xca] + lVar3) + -1.0;
        param_2 = param_2 + 1;
        lVar3 = lVar3 + 0x58;
        lVar6 = lVar6 + 0x80;
      } while ((int)param_2 < iVar1 + -1);
    }
    if (*(char *)((longlong)param_1 + 0x696) == '\x01') {
      *(float *)(param_1 + 0xd3) = *(float *)(param_1 + 0xd3) + -1.0;
    }
  }
  if (param_3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147a2478b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xa38))(param_1);
    return;
  }
  return;
}



// FUNCTION 147a247aa FUN_147a247aa body=268 status=ok
// SIG undefined FUN_147a247aa(void)

void FUN_147a247aa(longlong *param_1,longlong param_2)

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
  *(bool *)((longlong)param_1 + 0x695) = iVar1 != 0;
  *(undefined1 *)((longlong)param_1 + 0x696) = 0;
  if (local_28 != 0) {
    (**(code **)(*param_1 + 0xa38))(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a248c2 FUN_147a248c2 body=359 status=ok
// SIG undefined FUN_147a248c2(void)

void FUN_147a248c2(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [44];
  int local_2c;
  undefined4 local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)((longlong)param_1 + 0x695) = iVar1 != 0;
  *(bool *)((longlong)param_1 + 0x696) = iVar1 != 0;
  *(undefined4 *)(param_1 + 0xd3) = local_28;
  if (local_2c != 0) {
    (**(code **)(*param_1 + 0xa38))(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a24a2a FUN_147a24a2a body=235 status=ok
// SIG undefined FUN_147a24a2a(void)

void FUN_147a24a2a(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_39 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar2 = local_38;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a24b16(param_1,puVar2,local_39);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a24b16 FUN_147a24b16 body=433 status=ok
// SIG undefined FUN_147a24b16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a24b16(longlong *param_1,double *param_2,int param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if (param_3 == 1) {
    dVar5 = *param_2;
    dVar6 = param_2[1];
    auVar2 = *(undefined1 (*) [16])(param_1 + 0x50);
    dVar3 = -(double)param_1[0x48];
    dVar4 = -(double)param_1[0x49];
    dVar8 = (double)param_1[0x4a] * -1.0;
    dVar9 = (double)param_1[0x4b] * 1.0;
    dVar11 = dVar6 * dVar3 - dVar5 * dVar4;
    dVar12 = param_2[2] * dVar4 - dVar6 * dVar8;
    dVar10 = dVar5 * dVar8 - dVar3 * param_2[2];
    dVar12 = dVar12 + dVar12;
    dVar10 = dVar10 + dVar10;
    dVar11 = dVar11 + dVar11;
    dVar1 = param_2[2];
    auVar7 = divpd(_DAT_149934d80,auVar2);
    param_1[0xd4] =
         (longlong)
         ((double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar7._0_8_) *
         ((dVar11 * dVar4 - dVar10 * dVar8) + dVar9 * dVar12 + dVar5));
    param_1[0xd5] =
         (longlong)
         ((double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar7._8_8_) *
         ((double)param_1[0x48] * dVar11 + dVar8 * dVar12 + dVar9 * dVar10 + dVar6));
    param_1[0xd6] =
         (longlong)
         ((double)(-(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x52])) &
                  (ulonglong)(1.0 / (double)param_1[0x52])) *
         (dVar9 * dVar11 + dVar1 + (dVar10 * dVar3 - dVar12 * dVar4)));
  }
  else {
    param_1[0xd6] = (longlong)param_2[2];
    dVar1 = param_2[1];
    param_1[0xd4] = (longlong)*param_2;
    param_1[0xd5] = (longlong)dVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000147a24cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa38))();
  return;
}



// FUNCTION 147a24ccc FUN_147a24ccc body=162 status=ok
// SIG undefined FUN_147a24ccc(void)

void FUN_147a24ccc(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x694) = local_1c != 0;
  FUN_1448215fa(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a24d76 FUN_147a24d76 body=390 status=ok
// SIG undefined FUN_147a24d76(void)

void FUN_147a24d76(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  int local_48;
  undefined1 local_41;
  undefined1 local_40 [28];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_41 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_48 != 0;
  puVar2 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  FUN_147a24efe(param_1,local_24,puVar2,local_41);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a24efe FUN_147a24efe body=519 status=ok
// SIG undefined FUN_147a24efe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a24efe(longlong *param_1,uint param_2,double *param_3,int param_4,char param_5)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[0xc5])) {
    if (param_4 == 1) {
      dVar12 = *param_3 - (double)param_1[0x4c];
      dVar13 = param_3[1] - (double)param_1[0x4d];
      dVar7 = param_3[2] - (double)param_1[0x4e];
      auVar2 = *(undefined1 (*) [16])(param_1 + 0x50);
      dVar4 = -(double)param_1[0x48];
      dVar5 = -(double)param_1[0x49];
      dVar10 = (double)param_1[0x4a] * -1.0;
      dVar11 = (double)param_1[0x4b] * 1.0;
      dVar14 = dVar12 * dVar10 - dVar4 * dVar7;
      dVar8 = dVar13 * dVar4 - dVar12 * dVar5;
      dVar6 = dVar7 * dVar5 - dVar13 * dVar10;
      dVar6 = dVar6 + dVar6;
      dVar14 = dVar14 + dVar14;
      dVar8 = dVar8 + dVar8;
      auVar9 = divpd(_DAT_149934d80,auVar2);
      dVar12 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar9._0_8_) *
               ((dVar8 * dVar5 - dVar14 * dVar10) + dVar11 * dVar6 + dVar12);
      dVar10 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar9._8_8_) *
               ((double)param_1[0x48] * dVar8 + dVar10 * dVar6 + dVar11 * dVar14 + dVar13);
      dVar8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x52])) &
                      (ulonglong)(1.0 / (double)param_1[0x52])) *
              (dVar11 * dVar8 + dVar7 + (dVar14 * dVar4 - dVar6 * dVar5));
    }
    else {
      dVar12 = *param_3;
      dVar10 = param_3[1];
      dVar8 = param_3[2];
    }
    lVar3 = param_1[0xc4];
    pdVar1 = (double *)(lVar3 + 8 + (ulonglong)param_2 * 0x58);
    *pdVar1 = dVar12;
    pdVar1[1] = dVar10;
    *(double *)(lVar3 + 0x18 + (ulonglong)param_2 * 0x58) = dVar8;
    if (param_5 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147a250de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa38))();
      return;
    }
  }
  return;
}



// FUNCTION 147a2510a FUN_147a2510a body=162 status=ok
// SIG undefined FUN_147a2510a(void)

void FUN_147a2510a(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0xa40))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a251b4 FUN_147a251b4 body=390 status=ok
// SIG undefined FUN_147a251b4(void)

void FUN_147a251b4(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  int local_48;
  undefined1 local_41;
  undefined1 local_40 [28];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_41 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_48 != 0;
  puVar2 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  FUN_147a2533c(param_1,local_24,puVar2,local_41);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2533c FUN_147a2533c body=980 status=ok
// SIG undefined FUN_147a2533c(void)

void FUN_147a2533c(longlong *param_1,int param_2,undefined8 param_3,int param_4,char param_5)

{
  double dVar1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  ulonglong local_d0;
  double dVar2;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((-1 < param_2) && (param_2 < (int)param_1[200])) {
    if (param_4 == 1) {
      FUN_144a7484c(param_3,&local_f8);
      dVar5 = (double)param_1[0x4a] * -1.0;
      dVar6 = (double)param_1[0x4b] * 1.0;
      dVar1 = (double)param_1[0x49];
      dVar2 = (double)param_1[0x49];
      dVar3 = (double)param_1[0x48];
      dVar7 = (double)param_1[0x48];
      dVar4 = dStack_f0 * dVar5 * -1.0 +
              ((dVar6 * local_f8 - dVar3 * dStack_e0 * 1.0) - local_e8 * dVar1);
      dVar1 = dStack_e0 * dVar5 * 1.0 +
              dVar1 * local_f8 + (dVar6 * local_e8 - dVar3 * dStack_f0 * 1.0);
      dVar3 = local_f8 * dVar5 * 1.0 +
              ((dVar6 * dStack_f0 - dVar7 * local_e8 * -1.0) - dStack_e0 * dVar2);
      dVar2 = local_e8 * dVar5 * -1.0 +
              dVar2 * dStack_f0 + (dVar6 * dStack_e0 - dVar7 * local_f8 * -1.0);
    }
    else {
      FUN_144a7484c(param_3,&local_f8);
      dVar4 = local_f8;
      dVar1 = local_e8;
      dVar3 = dStack_f0;
      dVar2 = dStack_e0;
    }
    dVar5 = dVar4 * 0.0 + dVar3 * -0.0;
    dVar6 = dVar3 - dVar1 * 0.0;
    dVar7 = dVar1 * 0.0 - dVar4;
    dVar5 = dVar5 + dVar5;
    dVar7 = dVar7 + dVar7;
    dVar6 = dVar6 + dVar6;
    local_100 = (dVar4 * dVar7 - dVar6 * dVar3) + dVar2 * dVar5 + 1.0;
    local_108 = (dVar1 * dVar6 - dVar5 * dVar4) + dVar2 * dVar7 + 0.0;
    local_110 = (dVar3 * dVar5 - dVar7 * dVar1) + dVar2 * dVar6 + 0.0;
    local_138 = 0;
    FUN_147a26dfe(param_1,param_2,&local_110,param_4);
    dVar7 = dVar1 - dVar4 * 0.0;
    dVar5 = dVar4 * 0.0 - dVar3;
    dVar6 = dVar3 * 0.0 + dVar1 * -0.0;
    dVar5 = dVar5 + dVar5;
    dVar7 = dVar7 + dVar7;
    dVar6 = dVar6 + dVar6;
    local_118 = (dVar4 * dVar7 - dVar6 * dVar3) + dVar2 * dVar5 + 0.0;
    local_120 = (dVar1 * dVar6 - dVar5 * dVar4) + dVar2 * dVar7 + 0.0;
    local_128 = (dVar3 * dVar5 - dVar7 * dVar1) + dVar6 * dVar2 + 1.0;
    local_138 = 0;
    FUN_147a2640e(param_1,param_2,&local_128,param_4);
    if (param_5 != '\0') {
      (**(code **)(*param_1 + 0xa38))(param_1);
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a25718 FUN_147a25718 body=381 status=ok
// SIG undefined FUN_147a25718(void)

void FUN_147a25718(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_68 [36];
  int local_44;
  undefined4 local_40 [7];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar7 = local_40;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar7 = *(undefined4 **)(param_2 + 0x38);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((-1 < (longlong)local_24) && (local_24 < (int)param_1[200])) {
    lVar6 = (longlong)local_24 * 0x58;
    lVar2 = param_1[0xca];
    *(undefined8 *)(lVar2 + 0x18 + lVar6) = *(undefined8 *)(puVar7 + 4);
    uVar3 = puVar7[1];
    uVar4 = puVar7[2];
    uVar5 = puVar7[3];
    puVar1 = (undefined4 *)(lVar2 + 8 + lVar6);
    *puVar1 = *puVar7;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    if (local_44 != 0) {
      (**(code **)(*param_1 + 0xa38))(param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a25896 FUN_147a25896 body=131 status=ok
// SIG undefined FUN_147a25896(void)

void FUN_147a25896(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2591a FUN_147a2591a body=186 status=ok
// SIG undefined FUN_147a2591a(void)

void FUN_147a2591a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a25b2e(param_1,plVar1,0,1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a259dc FUN_147a259dc body=337 status=ok
// SIG undefined FUN_147a259dc(void)

void FUN_147a259dc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  int local_40;
  undefined1 local_39;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_39 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a25b2e(param_1,plVar1,local_39,local_40 != 0);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a25b2e FUN_147a25b2e body=1279 status=ok
// SIG undefined FUN_147a25b2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a25b2e(longlong *param_1,longlong *param_2,int param_3,char param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  double dVar26;
  
  uVar4 = (undefined4)param_2[1];
  FUN_147a276ce(param_1 + 0xc4,uVar4);
  FUN_147a276fa(param_1 + 199,uVar4);
  plVar1 = param_1 + 0xca;
  FUN_147a276ce(plVar1,uVar4);
  plVar16 = (longlong *)(**(code **)(*param_1 + 0xa00))(param_1);
  if (plVar16 != (longlong *)0x0) {
    (**(code **)(*plVar16 + 0x2d0))(plVar16,uVar4);
  }
  auVar14 = _DAT_149934d80;
  lVar13 = param_2[1];
  if ((longlong)(int)lVar13 != 0) {
    lVar6 = *param_2;
    fVar25 = 0.0;
    lVar18 = 0;
    do {
      if (param_3 == 1) {
        dVar8 = *(double *)(lVar6 + lVar18) - (double)param_1[0x4c];
        dVar9 = ((double *)(lVar6 + lVar18))[1] - (double)param_1[0x4d];
        dVar19 = *(double *)(lVar6 + 0x10 + lVar18) - (double)param_1[0x4e];
        dVar10 = -(double)param_1[0x48];
        dVar12 = -(double)param_1[0x49];
        dVar21 = (double)param_1[0x4a] * -1.0;
        dVar22 = (double)param_1[0x4b] * 1.0;
        dVar26 = dVar8 * dVar21 - dVar10 * dVar19;
        dVar23 = dVar9 * dVar10 - dVar8 * dVar12;
        dVar24 = dVar19 * dVar12 - dVar9 * dVar21;
        dVar24 = dVar24 + dVar24;
        dVar26 = dVar26 + dVar26;
        dVar23 = dVar23 + dVar23;
        auVar3 = *(undefined1 (*) [16])(param_1 + 0x50);
        auVar20 = divpd(auVar14,auVar3);
        dVar11 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_)) & auVar20._0_8_) *
                 ((dVar23 * dVar12 - dVar26 * dVar21) + dVar22 * dVar24 + dVar8);
        dVar9 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_)) & auVar20._8_8_) *
                ((double)param_1[0x48] * dVar23 + dVar21 * dVar24 + dVar22 * dVar26 + dVar9);
        dVar8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x52])) &
                        (ulonglong)(1.0 / (double)param_1[0x52])) *
                (dVar22 * dVar23 + dVar19 + (dVar26 * dVar10 - dVar24 * dVar12));
      }
      else {
        dVar11 = *(double *)(lVar6 + lVar18);
        dVar9 = ((double *)(lVar6 + lVar18))[1];
        dVar8 = *(double *)(lVar6 + 0x10 + lVar18);
      }
      iVar5 = (int)param_1[0xc5];
      *(uint *)(param_1 + 0xc5) = iVar5 + 1U;
      if (*(uint *)((longlong)param_1 + 0x62c) < iVar5 + 1U) {
        FUN_140924c58(param_1 + 0xc4,iVar5);
      }
      lVar7 = param_1[0xc4];
      lVar17 = (longlong)iVar5 * 0x58;
      *(float *)(lVar7 + lVar17) = fVar25;
      auVar3._8_4_ = SUB84(dVar9,0);
      auVar3._0_8_ = dVar11;
      auVar3._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      *(undefined1 (*) [16])(lVar7 + 8 + lVar17) = auVar3;
      *(double *)(lVar7 + 0x18 + lVar17) = dVar8;
      uVar15 = DAT_14c8464e8;
      puVar2 = (undefined8 *)(lVar7 + 0x20 + lVar17);
      *puVar2 = DAT_14c8464e0;
      puVar2[1] = uVar15;
      *(undefined8 *)(lVar7 + 0x30 + lVar17) = DAT_14c8464f0;
      uVar15 = DAT_14c8464e8;
      puVar2 = (undefined8 *)(lVar7 + 0x38 + lVar17);
      *puVar2 = DAT_14c8464e0;
      puVar2[1] = uVar15;
      *(undefined8 *)(lVar7 + 0x48 + lVar17) = DAT_14c8464f0;
      *(undefined1 *)(lVar7 + 0x50 + lVar17) = 1;
      iVar5 = (int)param_1[200];
      *(uint *)(param_1 + 200) = iVar5 + 1U;
      if (*(uint *)((longlong)param_1 + 0x644) < iVar5 + 1U) {
        FUN_147501e1a(param_1 + 199,iVar5);
      }
      lVar7 = param_1[199];
      lVar17 = (longlong)iVar5 * 0x80;
      *(float *)(lVar7 + lVar17) = fVar25;
      uVar15 = DAT_14c8463e8;
      puVar2 = (undefined8 *)(lVar7 + 0x20 + lVar17);
      *puVar2 = DAT_14c8463e0;
      puVar2[1] = uVar15;
      uVar15 = DAT_14c8463d8;
      puVar2 = (undefined8 *)(lVar7 + 0x10 + lVar17);
      *puVar2 = DAT_14c8463d0;
      puVar2[1] = uVar15;
      uVar15 = DAT_14c8463d8;
      puVar2 = (undefined8 *)(lVar7 + 0x30 + lVar17);
      *puVar2 = DAT_14c8463d0;
      puVar2[1] = uVar15;
      uVar15 = DAT_14c8463e8;
      puVar2 = (undefined8 *)(lVar7 + 0x40 + lVar17);
      *puVar2 = DAT_14c8463e0;
      puVar2[1] = uVar15;
      uVar15 = DAT_14c8463d8;
      puVar2 = (undefined8 *)(lVar7 + 0x50 + lVar17);
      *puVar2 = DAT_14c8463d0;
      puVar2[1] = uVar15;
      uVar15 = DAT_14c8463e8;
      puVar2 = (undefined8 *)(lVar7 + 0x60 + lVar17);
      *puVar2 = DAT_14c8463e0;
      puVar2[1] = uVar15;
      *(undefined1 *)(lVar7 + 0x70 + lVar17) = 1;
      iVar5 = (int)param_1[0xcb];
      *(uint *)(param_1 + 0xcb) = iVar5 + 1U;
      if (*(uint *)((longlong)param_1 + 0x65c) < iVar5 + 1U) {
        FUN_140924c58(plVar1,iVar5);
      }
      lVar17 = (longlong)iVar5 * 0x58;
      lVar7 = *plVar1;
      *(float *)(lVar7 + lVar17) = fVar25;
      *(undefined8 *)(lVar7 + 8 + lVar17) = 0x3ff0000000000000;
      *(undefined8 *)(lVar7 + 0x10 + lVar17) = 0x3ff0000000000000;
      *(undefined8 *)(lVar7 + 0x18 + lVar17) = 0x3ff0000000000000;
      uVar15 = DAT_14c8464e8;
      puVar2 = (undefined8 *)(lVar7 + 0x20 + lVar17);
      *puVar2 = DAT_14c8464e0;
      puVar2[1] = uVar15;
      *(undefined8 *)(lVar7 + 0x30 + lVar17) = DAT_14c8464f0;
      uVar15 = DAT_14c8464e8;
      puVar2 = (undefined8 *)(lVar7 + 0x38 + lVar17);
      *puVar2 = DAT_14c8464e0;
      puVar2[1] = uVar15;
      *(undefined8 *)(lVar7 + 0x48 + lVar17) = DAT_14c8464f0;
      *(undefined1 *)(lVar7 + 0x50 + lVar17) = 1;
      if (plVar16 != (longlong *)0x0) {
        (**(code **)(*plVar16 + 0x2b0))(plVar16,fVar25);
      }
      fVar25 = fVar25 + 1.0;
      lVar18 = lVar18 + 0x18;
    } while ((longlong)(int)lVar13 * 0x18 != lVar18);
  }
  *(undefined1 *)((longlong)param_1 + 0x696) = 0;
  if (param_4 == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147a25fc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa38))(param_1);
  return;
}



// FUNCTION 147a26034 FUN_147a26034 body=396 status=ok
// SIG undefined FUN_147a26034(void)

void FUN_147a26034(longlong *param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  int local_24;
  byte local_1d;
  int local_1c;
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
  local_1d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1d);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((-1 < (longlong)local_1c) && (local_1c < (int)param_1[0xc5])) {
    uVar1 = 6;
    if (local_1d < 5) {
      uVar1 = (undefined1)(0x305020100 >> (local_1d * '\b' & 0x3f));
    }
    *(undefined1 *)(param_1[0xc4] + 0x50 + (longlong)local_1c * 0x58) = uVar1;
    if (local_24 != 0) {
      (**(code **)(*param_1 + 0xa38))(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a261c2 FUN_147a261c2 body=189 status=ok
// SIG undefined FUN_147a261c2(void)

void FUN_147a261c2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a25b2e(param_1,plVar1,1,1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a26286 FUN_147a26286 body=390 status=ok
// SIG undefined FUN_147a26286(void)

void FUN_147a26286(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  int local_48;
  undefined1 local_41;
  undefined1 local_40 [28];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_41 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_48 != 0;
  puVar2 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  FUN_147a2640e(param_1,local_24,puVar2,local_41);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2640e FUN_147a2640e body=532 status=ok
// SIG undefined FUN_147a2640e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a2640e(longlong *param_1,uint param_2,double *param_3,int param_4,char param_5)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[0xc5])) {
    if (param_4 == 1) {
      dVar6 = *param_3;
      dVar7 = param_3[1];
      auVar2 = *(undefined1 (*) [16])(param_1 + 0x50);
      dVar10 = (double)param_1[0x4a] * -1.0;
      dVar11 = (double)param_1[0x4b] * 1.0;
      dVar8 = -(double)param_1[0x48];
      dVar4 = -(double)param_1[0x49];
      dVar13 = dVar7 * dVar8 - dVar6 * dVar4;
      dVar14 = param_3[2] * dVar4 - dVar7 * dVar10;
      dVar12 = dVar6 * dVar10 - dVar8 * param_3[2];
      dVar14 = dVar14 + dVar14;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      auVar9 = divpd(_DAT_149934d80,auVar2);
      dVar6 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar9._0_8_) *
              ((dVar13 * dVar4 - dVar12 * dVar10) + dVar11 * dVar14 + dVar6);
      dVar7 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar9._8_8_) *
              ((double)param_1[0x48] * dVar13 + dVar10 * dVar14 + dVar11 * dVar12 + dVar7);
      dVar8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x52])) &
                      (ulonglong)(1.0 / (double)param_1[0x52])) *
              (dVar11 * dVar13 + param_3[2] + (dVar12 * dVar8 - dVar14 * dVar4));
    }
    else {
      dVar6 = *param_3;
      dVar7 = param_3[1];
      dVar8 = param_3[2];
    }
    lVar3 = param_1[0xc4];
    lVar5 = (ulonglong)param_2 * 0x58;
    pdVar1 = (double *)(lVar3 + 0x38 + lVar5);
    *pdVar1 = dVar6;
    pdVar1[1] = dVar7;
    *(double *)(lVar3 + 0x48 + lVar5) = dVar8;
    lVar3 = param_1[0xc4];
    pdVar1 = (double *)(lVar3 + 0x20 + lVar5);
    *pdVar1 = dVar6;
    pdVar1[1] = dVar7;
    *(double *)(lVar3 + 0x30 + lVar5) = dVar8;
    *(undefined1 *)(param_1[0xc4] + 0x50 + lVar5) = 3;
    if (param_5 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147a265fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa38))();
      return;
    }
  }
  return;
}



// FUNCTION 147a26622 FUN_147a26622 body=131 status=ok
// SIG undefined FUN_147a26622(void)

void FUN_147a26622(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a266ac FUN_147a266ac body=481 status=ok
// SIG undefined FUN_147a266ac(void)

void FUN_147a266ac(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_98 [32];
  uint local_78;
  undefined1 local_70;
  int local_68;
  byte local_61;
  undefined1 local_60 [24];
  undefined1 local_48 [28];
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_61 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_61);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_61);
  }
  local_68 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_68 != 0;
  puVar3 = local_60;
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = local_48;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  local_78 = (uint)local_61;
  FUN_147a2688e(param_1,local_2c,puVar2,puVar3);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2688e FUN_147a2688e body=861 status=ok
// SIG undefined FUN_147a2688e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a2688e(longlong *param_1,uint param_2,double *param_3,double *param_4,int param_5,
                  char param_6)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar20;
  undefined1 auVar19 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  
  if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[0xc5])) {
    if (param_5 == 1) {
      dVar10 = *param_3;
      dVar18 = param_3[1];
      dVar6 = (double)param_1[0x48];
      dVar11 = (double)param_1[0x4a] * -1.0;
      dVar12 = (double)param_1[0x4b] * 1.0;
      dVar13 = -dVar6;
      dVar14 = -(double)param_1[0x49];
      dVar17 = dVar18 * dVar13 - dVar10 * dVar14;
      dVar20 = param_3[2] * dVar14 - dVar18 * dVar11;
      dVar21 = dVar10 * dVar11 - param_3[2] * dVar13;
      dVar20 = dVar20 + dVar20;
      dVar21 = dVar21 + dVar21;
      dVar17 = dVar17 + dVar17;
      dVar7 = *param_4;
      dVar8 = param_4[1];
      dVar4 = dVar8 * dVar13 - dVar14 * dVar7;
      dVar5 = param_4[2] * dVar14 - dVar11 * dVar8;
      dVar24 = dVar7 * dVar11 - dVar13 * param_4[2];
      dVar5 = dVar5 + dVar5;
      dVar24 = dVar24 + dVar24;
      dVar4 = dVar4 + dVar4;
      auVar2 = *(undefined1 (*) [16])(param_1 + 0x50);
      auVar19 = divpd(_DAT_149934d80,auVar2);
      dVar15 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar19._0_8_);
      dVar16 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar19._8_8_);
      dVar22 = ((dVar17 * dVar14 - dVar21 * dVar11) + dVar12 * dVar20 + dVar10) * dVar15;
      dVar23 = (dVar6 * dVar17 + dVar11 * dVar20 + dVar12 * dVar21 + dVar18) * dVar16;
      dVar18 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x52])) &
                       (ulonglong)(1.0 / (double)param_1[0x52]));
      dVar10 = (dVar17 * dVar12 + param_3[2] + (dVar21 * dVar13 - dVar20 * dVar14)) * dVar18;
      dVar15 = ((dVar4 * dVar14 - dVar24 * dVar11) + dVar12 * dVar5 + dVar7) * dVar15;
      dVar16 = (dVar6 * dVar4 + dVar11 * dVar5 + dVar12 * dVar24 + dVar8) * dVar16;
      dVar18 = (dVar4 * dVar12 + param_4[2] + (dVar24 * dVar13 - dVar5 * dVar14)) * dVar18;
    }
    else {
      dVar22 = *param_3;
      dVar23 = param_3[1];
      dVar10 = param_3[2];
      dVar15 = *param_4;
      dVar16 = param_4[1];
      dVar18 = param_4[2];
    }
    lVar3 = param_1[0xc4];
    lVar9 = (ulonglong)param_2 * 0x58;
    pdVar1 = (double *)(lVar3 + 0x20 + lVar9);
    *pdVar1 = dVar22;
    pdVar1[1] = dVar23;
    *(double *)(lVar3 + 0x30 + lVar9) = dVar10;
    lVar3 = param_1[0xc4];
    pdVar1 = (double *)(lVar3 + 0x38 + lVar9);
    *pdVar1 = dVar15;
    pdVar1[1] = dVar16;
    *(double *)(lVar3 + 0x48 + lVar9) = dVar18;
    *(undefined1 *)(param_1[0xc4] + 0x50 + lVar9) = 3;
    if (param_6 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147a26b9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa38))();
      return;
    }
  }
  return;
}



// FUNCTION 147a26bec FUN_147a26bec body=131 status=ok
// SIG undefined FUN_147a26bec(void)

void FUN_147a26bec(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a26c76 FUN_147a26c76 body=390 status=ok
// SIG undefined FUN_147a26c76(void)

void FUN_147a26c76(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  int local_48;
  undefined1 local_41;
  undefined1 local_40 [28];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_41 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_48 != 0;
  puVar2 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  FUN_147a26dfe(param_1,local_24,puVar2,local_41);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a26dfe FUN_147a26dfe body=887 status=ok
// SIG undefined FUN_147a26dfe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a26dfe(longlong *param_1,uint param_2,double *param_3,int param_4,char param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [16];
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((int)param_2 < 0) || ((int)param_1[0xc5] <= (int)param_2)) goto LAB_147a27039;
  if (param_4 == 1) {
    dVar3 = *param_3;
    dVar4 = param_3[1];
    dVar13 = param_3[2];
    dVar12 = dVar13 * dVar13 + dVar3 * dVar3 + dVar4 * dVar4;
    if ((dVar12 != 1.0) || (NAN(dVar12))) {
      dVar10 = DAT_14c8464e0;
      dVar11 = DAT_14c8464e8;
      dVar8 = DAT_14c8464f0;
      if (9.99999993922529e-09 <= dVar12) {
        dVar12 = 1.0 / SQRT(dVar12);
        dVar10 = dVar3 * dVar12;
        dVar11 = dVar4 * dVar12;
        dVar8 = dVar13 * dVar12;
      }
    }
    else {
      dVar10 = *param_3;
      dVar11 = param_3[1];
      dVar8 = dVar13;
    }
    auVar5 = *(undefined1 (*) [16])(param_1 + 0x50);
    dVar13 = -(double)param_1[0x48];
    dVar12 = -(double)param_1[0x49];
    dVar14 = (double)param_1[0x4a] * -1.0;
    dVar15 = (double)param_1[0x4b] * 1.0;
    dVar16 = dVar10 * dVar14 - dVar13 * dVar8;
    dVar4 = dVar11 * dVar13 - dVar10 * dVar12;
    dVar7 = dVar8 * dVar12 - dVar11 * dVar14;
    dVar7 = dVar7 + dVar7;
    dVar16 = dVar16 + dVar16;
    dVar4 = dVar4 + dVar4;
    auVar9 = divpd(_DAT_149934d80,auVar5);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar5._8_8_)) & auVar9._8_8_) *
            ((double)param_1[0x48] * dVar4 + dVar14 * dVar7 + dVar15 * dVar16 + dVar11);
    local_98._8_4_ = SUB84(dVar3,0);
    local_98._0_8_ =
         (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar5._0_8_)) & auVar9._0_8_) *
         ((dVar4 * dVar12 - dVar16 * dVar14) + dVar15 * dVar7 + dVar10);
    local_98._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    local_88 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x52])) &
                       (ulonglong)(1.0 / (double)param_1[0x52])) *
               (dVar15 * dVar4 + dVar8 + (dVar16 * dVar13 - dVar7 * dVar12));
  }
  else {
    dVar3 = *param_3;
    dVar4 = param_3[1];
    local_88 = param_3[2];
    dVar13 = local_88 * local_88 + dVar3 * dVar3 + dVar4 * dVar4;
    if ((dVar13 != 1.0) || (NAN(dVar13))) {
      if (9.99999993922529e-09 <= dVar13) {
        dVar13 = 1.0 / SQRT(dVar13);
        local_88 = local_88 * dVar13;
        local_98._8_8_ = dVar4 * dVar13;
        local_98._0_8_ = dVar3 * dVar13;
        goto LAB_147a26ff1;
      }
      local_88 = DAT_14c8464f0;
      local_98._0_8_ = DAT_14c8464e0;
      local_98._8_8_ = DAT_14c8464e8;
    }
    else {
      local_88 = param_3[2];
      local_98._0_8_ = *param_3;
      local_98._8_8_ = param_3[1];
    }
  }
LAB_147a26ff1:
  FUN_14022d702(&local_b8,param_1 + 0xd4,local_98);
  lVar6 = param_1[199];
  puVar1 = (undefined4 *)(lVar6 + 0x20 + (ulonglong)param_2 * 0x80);
  *puVar1 = local_a8;
  puVar1[1] = uStack_a4;
  puVar1[2] = uStack_a0;
  puVar1[3] = uStack_9c;
  puVar2 = (undefined8 *)(lVar6 + 0x10 + (ulonglong)param_2 * 0x80);
  *puVar2 = local_b8;
  puVar2[1] = uStack_b0;
  if (param_5 != '\0') {
    (**(code **)(*param_1 + 0xa38))(param_1);
  }
LAB_147a27039:
  if ((local_80 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a27176 FUN_147a27176 body=245 status=ok
// SIG undefined FUN_147a27176(void)

void FUN_147a27176(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_38 [28];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = 1;
  FUN_147a24efe(param_1,local_1c,puVar1,1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a272c2 FUN_147a272c2 body=944 status=ok
// SIG undefined FUN_147a272c2(void)

void FUN_147a272c2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad3218) {
    FUN_144b3d300(&DAT_14cad3218);
    if (DAT_14cad3218 == -1) {
      FUN_1446f470e(&DAT_14cad3210,L"SplineCurves",1);
      _Init_thread_footer(&DAT_14cad3218);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad3224) {
    FUN_144b3d300(&DAT_14cad3224);
    if (DAT_14cad3224 == -1) {
      FUN_1446f470e(&DAT_14cad321c,L"ReparamStepsPerSegment",1);
      _Init_thread_footer(&DAT_14cad3224);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad3230) {
    FUN_144b3d300(&DAT_14cad3230);
    if (DAT_14cad3230 == -1) {
      FUN_1446f470e(&DAT_14cad3228,L"bStationaryEndpoints",1);
      _Init_thread_footer(&DAT_14cad3230);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad323c) {
    FUN_144b3d300(&DAT_14cad323c);
    if (DAT_14cad323c == -1) {
      FUN_1446f470e(&DAT_14cad3234,L"bSplineHasBeenEdited",1);
      _Init_thread_footer(&DAT_14cad323c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad3248) {
    FUN_144b3d300(&DAT_14cad3248);
    if (DAT_14cad3248 == -1) {
      FUN_1446f470e(&DAT_14cad3240,L"bInputSplinePointsToConstructionScript",1);
      _Init_thread_footer(&DAT_14cad3248);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad3254) {
    FUN_144b3d300(&DAT_14cad3254);
    if (DAT_14cad3254 == -1) {
      FUN_1446f470e(&DAT_14cad324c,L"bClosedLoop",1);
      _Init_thread_footer(&DAT_14cad3254);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad3260) {
    FUN_144b3d300(&DAT_14cad3260);
    if (DAT_14cad3260 == -1) {
      FUN_1446f470e(&DAT_14cad3258,L"bLoopPositionOverride",1);
      _Init_thread_footer(&DAT_14cad3260);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad326c) {
    FUN_144b3d300(&DAT_14cad326c);
    if (DAT_14cad326c == -1) {
      FUN_1446f470e(&DAT_14cad3264,L"LoopPosition",1);
      _Init_thread_footer(&DAT_14cad326c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad3278) {
    FUN_144b3d300(&DAT_14cad3278);
    if (DAT_14cad3278 == -1) {
      FUN_1446f470e(&DAT_14cad3270,L"DefaultUpVector",1);
      _Init_thread_footer(&DAT_14cad3278);
      return;
    }
  }
  return;
}



// FUNCTION 147a27672 FUN_147a27672 body=75 status=ok
// SIG undefined FUN_147a27672(void)

void FUN_147a27672(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_140e4633e(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a276ce FUN_147a276ce body=42 status=ok
// SIG undefined FUN_147a276ce(void)

void FUN_147a276ce(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_14093938a();
    return;
  }
  return;
}



// FUNCTION 147a276fa FUN_147a276fa body=42 status=ok
// SIG undefined FUN_147a276fa(void)

void FUN_147a276fa(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_1409394d2();
    return;
  }
  return;
}



// FUNCTION 147a27726 FUN_147a27726 body=50 status=ok
// SIG undefined FUN_147a27726(void)

void FUN_147a27726(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_1412aa84a();
  uVar1 = FUN_14092ee58();
  uVar2 = FUN_14092ee58();
  FUN_147d8a0ff(uVar2,uVar1,0,param_2);
  return;
}



// FUNCTION 147a27760 FUN_147a27760 body=28 status=ok
// SIG undefined FUN_147a27760(void)

undefined4 FUN_147a27760(longlong param_1)

{
  if (0 < (longlong)*(int *)(param_1 + 0x50)) {
    return *(undefined4 *)
            (*(longlong *)(param_1 + 0x48) + -0x14 + (longlong)*(int *)(param_1 + 0x50) * 0x14);
  }
  return 0;
}



// FUNCTION 147a2777c FUN_147a2777c body=149 status=ok
// SIG undefined FUN_147a2777c(void)

undefined8 * FUN_147a2777c(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    for (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x70); lVar1 != 0;
        lVar1 = *(longlong *)(lVar1 + 0x48)) {
      if (*(longlong *)(lVar1 + 0x20) == param_4) {
        local_28 = 0;
        uStack_20 = 0;
        local_18 = 0;
        FUN_140703ce0(param_2 + *(int *)(lVar1 + 0x44),param_1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147a27812 FUN_147a27812 body=108 status=ok
// SIG undefined FUN_147a27812(void)

undefined8 FUN_147a27812(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  uVar1 = FUN_140753fde(param_1 + 0x668,param_3);
  FUN_14099e1de(param_1,param_2,uVar1,param_4);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2787f FUN_147a2787f body=81 status=ok
// SIG undefined FUN_147a2787f(void)

undefined4 FUN_147a2787f(longlong param_1,uint param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  
  if (param_1 != 0) {
    for (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x70); lVar2 != 0;
        lVar2 = *(longlong *)(lVar2 + 0x48)) {
      if (*(longlong *)(lVar2 + 0x20) == param_3) {
        iVar1 = *(int *)(param_1 + 8 + (longlong)*(int *)(lVar2 + 0x44));
        if (iVar1 < 1) {
          return 0;
        }
        uVar4 = iVar1 - 1;
        if ((int)param_2 < (int)uVar4) {
          uVar4 = param_2;
        }
        uVar3 = 0;
        if (0 < (int)uVar4) {
          uVar3 = (ulonglong)uVar4;
        }
        return *(undefined4 *)(*(longlong *)(param_1 + *(int *)(lVar2 + 0x44)) + 4 + uVar3 * 0x14);
      }
    }
  }
  return 0;
}



// FUNCTION 147a278d0 FUN_147a278d0 body=108 status=ok
// SIG undefined FUN_147a278d0(void)

void FUN_147a278d0(undefined8 *param_1,longlong param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if (param_2 != 0) {
    for (lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x70); lVar4 != 0;
        lVar4 = *(longlong *)(lVar4 + 0x48)) {
      if (*(longlong *)(lVar4 + 0x20) == param_4) {
        iVar2 = *(int *)(param_2 + 8 + (longlong)*(int *)(lVar4 + 0x44));
        if (0 < iVar2) {
          uVar6 = iVar2 - 1;
          if ((int)param_3 < (int)uVar6) {
            uVar6 = param_3;
          }
          uVar5 = 0;
          if (0 < (int)uVar6) {
            uVar5 = (ulonglong)uVar6;
          }
          lVar4 = *(longlong *)(param_2 + *(int *)(lVar4 + 0x44));
          param_1[2] = *(undefined8 *)(lVar4 + 0x18 + uVar5 * 0x58);
          puVar1 = (undefined8 *)(lVar4 + 8 + uVar5 * 0x58);
          uVar3 = puVar1[1];
          *param_1 = *puVar1;
          param_1[1] = uVar3;
          return;
        }
        break;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 147a27952 FUN_147a27952 body=165 status=ok
// SIG undefined FUN_147a27952(void)

undefined8 * FUN_147a27952(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_1;
  FUN_144a7c084(param_2);
  *param_2 = &PTR_FUN_14a544b40;
  FUN_147a3a920(param_2,&local_28);
  lVar2 = FUN_147a279f8(param_2);
  cVar1 = *(char *)(param_1 + 0x691);
  if (cVar1 == '\x01') {
    FUN_1408d5a44(lVar2 + 0x168,param_1 + 0x620);
    *(undefined1 *)(lVar2 + 0x1d0) = *(undefined1 *)(param_1 + 0x695);
    cVar1 = *(char *)(param_1 + 0x691);
  }
  *(char *)(lVar2 + 0x160) = cVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a279f8 FUN_147a279f8 body=112 status=ok
// SIG undefined FUN_147a279f8(void)

undefined8 FUN_147a279f8(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 8);
  if (DAT_14cad3288 == 0) {
    uVar2 = FUN_140002dac();
    DAT_14cad3288 = FUN_140002ddd(FUN_1463bf053,uVar2,L"SplineInstanceData");
    if (DAT_14cad3288 == 0) {
      return 0;
    }
  }
  if ((*(int *)(DAT_14cad3288 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cad3288 + 0x38) * 8) ==
      DAT_14cad3288 + 0x30)) {
    return *(undefined8 *)(param_1 + 0x10);
  }
  return 0;
}



// FUNCTION 147a27a68 FUN_147a27a68 body=67 status=ok
// SIG undefined FUN_147a27a68(void)

undefined8 * FUN_147a27a68(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 5;
  FUN_147a3aa74(param_2,5,0);
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = 0x100000000;
  puVar1[1] = 0x300000002;
  *(undefined4 *)(puVar1 + 2) = 4;
  return param_2;
}



// FUNCTION 147a27aac FUN_147a27aac body=310 status=ok
// SIG undefined FUN_147a27aac(void)

void FUN_147a27aac(longlong *param_1,longlong param_2,char param_3)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 == '\0') {
    FUN_1408d5a44(param_2 + 0x1d8,param_1 + 0xc4);
  }
  else {
    if (*(char *)((longlong)param_1 + 0x693) != '\0') goto LAB_147a27bc2;
    bVar1 = FUN_147a384fa(param_2 + 0x1d8,param_1 + 0xc4);
    *(byte *)((longlong)param_1 + 0x692) = bVar1 ^ 1;
    local_38 = (undefined8 *)0x0;
    uStack_30 = 0;
    FUN_1446f470e(&local_40,L"SplineCurves",1);
    uVar3 = FUN_14092ee58();
    uVar3 = FUN_144a8e29b(uVar3,local_40,3);
    uStack_30 = CONCAT44(uStack_30._4_4_,1);
    FUN_140001000(&local_38,0);
    *local_38 = uVar3;
    FUN_1479b80b0(param_1,&local_38);
    if (local_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  cVar2 = *(char *)(param_2 + 0x160);
  if (cVar2 == '\x01') {
    FUN_1408d5a44(param_1 + 0xc4,param_2 + 0x168);
    *(undefined1 *)((longlong)param_1 + 0x695) = *(undefined1 *)(param_2 + 0x1d0);
    *(undefined1 *)((longlong)param_1 + 0x692) = 0;
    cVar2 = *(char *)(param_2 + 0x160);
  }
  *(char *)((longlong)param_1 + 0x691) = cVar2;
  (**(code **)(*param_1 + 0xa38))(param_1);
LAB_147a27bc2:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a27be4 FUN_147a27be4 body=459 status=ok
// SIG undefined FUN_147a27be4(void)

void FUN_147a27be4(longlong *param_1,longlong *param_2,float param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  undefined4 uVar15;
  float fVar16;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_147a3aad6(param_2);
  }
  if ((longlong)(int)param_1[10] < 1) {
    fVar16 = 0.0;
  }
  else {
    fVar16 = *(float *)(param_1[9] + -0x14 + (longlong)(int)param_1[10] * 0x14);
  }
  iVar11 = 2;
  if (2 < (int)(param_3 * fVar16)) {
    iVar11 = (int)(param_3 * fVar16);
  }
  iVar14 = 0;
  do {
    local_98 = 0;
    uVar15 = FUN_140753fde(param_1 + 9,((float)iVar14 / (float)iVar11) * fVar16,&local_98);
    FUN_140703ce0(param_1,&local_98,uVar15,&DAT_14c8464e0);
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_147a3ab06(param_2,iVar3);
    }
    lVar4 = *param_2;
    lVar13 = (longlong)iVar3 * 0x20;
    *(undefined8 *)(lVar4 + 0x10 + lVar13) = local_88;
    puVar1 = (undefined4 *)(lVar4 + lVar13);
    *puVar1 = local_98;
    puVar1[1] = uStack_94;
    puVar1[2] = uStack_90;
    puVar1[3] = uStack_8c;
    *(undefined4 *)(lVar4 + 0x18 + lVar13) = uVar15;
    iVar14 = iVar14 + 1;
  } while (iVar11 != iVar14);
  lVar8 = param_1[10];
  lVar4 = param_1[9];
  lVar9 = param_1[1];
  lVar13 = *param_1;
  iVar11 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar11 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar11 + 1U) {
    FUN_147a3ab06(param_2,iVar11);
  }
  lVar10 = (longlong)((int)lVar9 + -1) * 0x58;
  lVar9 = *param_2;
  lVar12 = (longlong)iVar11 * 0x20;
  uVar15 = *(undefined4 *)(lVar4 + 4 + (longlong)((int)lVar8 + -1) * 0x14);
  *(undefined8 *)(lVar9 + 0x10 + lVar12) = *(undefined8 *)(lVar13 + 0x18 + lVar10);
  puVar2 = (undefined4 *)(lVar13 + 8 + lVar10);
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  puVar1 = (undefined4 *)(lVar9 + lVar12);
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  *(undefined4 *)(lVar9 + 0x18 + lVar12) = uVar15;
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a27db0 FUN_147a27db0 body=389 status=ok
// SIG undefined FUN_147a27db0(void)

undefined8 * FUN_147a27db0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  longlong lVar11;
  
  FUN_1479ed704();
  *param_1 = &PTR_FUN_14a890400;
  lVar11 = *(longlong *)(param_2 + 0x660);
  param_1[0x3a] = lVar11;
  if ((lVar11 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  if ((longlong)*(int *)(param_2 + 0x6b0) != 0) {
    plVar1 = param_1 + 0x3d;
    puVar9 = *(undefined4 **)(param_2 + 0x6a8);
    puVar10 = puVar9 + (longlong)*(int *)(param_2 + 0x6b0) * 0x28;
    do {
      iVar7 = *(int *)(param_1 + 0x3e);
      *(uint *)(param_1 + 0x3e) = iVar7 + 1U;
      if (*(uint *)((longlong)param_1 + 500) < iVar7 + 1U) {
        FUN_140c60952(plVar1,iVar7);
      }
      uVar4 = puVar9[1];
      uVar5 = puVar9[2];
      uVar6 = puVar9[3];
      puVar2 = (undefined4 *)(param_1[0x3d] + (longlong)iVar7 * 0x10);
      *puVar2 = *puVar9;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      iVar7 = *(int *)(param_1 + 0x3e);
      *(uint *)(param_1 + 0x3e) = iVar7 + 1U;
      if (*(uint *)((longlong)param_1 + 500) < iVar7 + 1U) {
        FUN_140c60952(plVar1,iVar7);
      }
      uVar4 = puVar9[5];
      uVar5 = puVar9[6];
      uVar6 = puVar9[7];
      puVar2 = (undefined4 *)(*plVar1 + (longlong)iVar7 * 0x10);
      *puVar2 = puVar9[4];
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      puVar9 = puVar9 + 0x28;
    } while (puVar9 != puVar10);
  }
  FUN_14349ead6(param_1 + 0x3f,param_2 + 0x6b8);
  iVar7 = *(int *)(param_2 + 0x6b0);
  if (0 < iVar7) {
    lVar11 = 0;
    uVar8 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x6a8) + 0x40 + lVar11);
      if ((lVar3 != 0) && (*(int *)(lVar3 + 0x34) != 0)) {
        FUN_147a2f5d0(param_1,*(longlong *)(param_2 + 0x6a8) + lVar11,uVar8 & 0xffffffff);
        iVar7 = *(int *)(param_2 + 0x6b0);
      }
      uVar8 = uVar8 + 1;
      lVar11 = lVar11 + 0xa0;
    } while ((longlong)uVar8 < (longlong)iVar7);
  }
  return param_1;
}



// FUNCTION 147a27f36 FUN_147a27f36 body=262 status=ok
// SIG undefined FUN_147a27f36(void)

void FUN_147a27f36(longlong *param_1,short *param_2,void *param_3)

{
  ushort uVar1;
  int iVar2;
  ulonglong uVar3;
  ushort uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  int iVar7;
  void *_Dst;
  longlong lVar8;
  longlong lVar9;
  
  uVar1 = param_2[2];
  if (uVar1 != 0) {
    lVar9 = *param_1;
    uVar3 = *(ulonglong *)(lVar9 + 0x30);
    uVar5 = lVar9 + 0x30 + ((longlong)uVar3 >> 0x18);
    if ((uVar3 & 1) == 0) {
      uVar5 = uVar3;
    }
    lVar8 = (longlong)*(int *)(lVar9 + 0x38);
    if (0 < lVar8) {
      iVar2 = *(int *)(lVar9 + 0x28);
      iVar7 = iVar2 + 0xe;
      if (-1 < iVar2 + 7) {
        iVar7 = iVar2 + 7;
      }
      _Dst = (void *)((ulonglong)
                      (uint)((iVar7 >> 3) +
                            (*(int *)(lVar9 + 8) + *(int *)(lVar9 + 0x18) + iVar2) * 8) + param_1[1]
                     );
      puVar6 = (ulonglong *)(uVar5 + 8);
      do {
        if (*param_2 == (short)puVar6[-1]) {
          uVar3 = *puVar6;
          uVar5 = ((longlong)uVar3 >> 0x18) + (longlong)puVar6;
          if ((uVar3 & 1) == 0) {
            uVar5 = uVar3;
          }
          if ((longlong)(int)puVar6[1] < 1) {
            return;
          }
          lVar9 = 0;
          do {
            if (param_2[1] == *(short *)(uVar5 + lVar9 * 4)) {
              uVar4 = 0x70;
              if (uVar1 < 0x70) {
                uVar4 = uVar1;
              }
              memcpy(_Dst,param_3,(ulonglong)uVar4);
              memset((void *)((longlong)_Dst + (ulonglong)uVar4),0,
                     (longlong)
                     (int)((int)((uint)(ushort)param_2[2] - (uint)uVar4) >> 0x1f &
                          (uint)(ushort)param_2[2] - (uint)uVar4));
              return;
            }
            _Dst = (void *)((longlong)_Dst + (ulonglong)*(ushort *)(uVar5 + 2 + lVar9 * 4));
            lVar9 = lVar9 + 1;
          } while ((int)puVar6[1] != lVar9);
          return;
        }
        _Dst = (void *)((longlong)_Dst + (ulonglong)*(ushort *)((longlong)puVar6 + -6));
        puVar6 = puVar6 + 3;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  return;
}



// FUNCTION 147a2803c FUN_147a2803c body=41 status=ok
// SIG undefined FUN_147a2803c(void)

void FUN_147a2803c(longlong param_1,undefined4 *param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined8 *)(param_1 + 0x730) = *(undefined8 *)(param_2 + 4);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(param_1 + 0x720) = uVar1;
  *(undefined4 *)(param_1 + 0x724) = uVar2;
  *(undefined4 *)(param_1 + 0x728) = uVar3;
  *(undefined4 *)(param_1 + 0x72c) = uVar4;
  *(byte *)(param_1 + 0x845) = *(byte *)(param_1 + 0x845) | 4;
  if (param_3 != '\0') {
    FUN_14349d006(uVar1,0);
    return;
  }
  return;
}



// FUNCTION 147a28066 FUN_147a28066 body=41 status=ok
// SIG undefined FUN_147a28066(void)

void FUN_147a28066(longlong param_1,undefined4 *param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined8 *)(param_1 + 0x748) = *(undefined8 *)(param_2 + 4);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(param_1 + 0x738) = uVar1;
  *(undefined4 *)(param_1 + 0x73c) = uVar2;
  *(undefined4 *)(param_1 + 0x740) = uVar3;
  *(undefined4 *)(param_1 + 0x744) = uVar4;
  *(byte *)(param_1 + 0x845) = *(byte *)(param_1 + 0x845) | 4;
  if (param_3 != '\0') {
    FUN_14349d006(uVar1,0);
    return;
  }
  return;
}



// FUNCTION 147a28090 FUN_147a28090 body=41 status=ok
// SIG undefined FUN_147a28090(void)

void FUN_147a28090(longlong param_1,undefined4 *param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined8 *)(param_1 + 0x788) = *(undefined8 *)(param_2 + 4);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(param_1 + 0x778) = uVar1;
  *(undefined4 *)(param_1 + 0x77c) = uVar2;
  *(undefined4 *)(param_1 + 0x780) = uVar3;
  *(undefined4 *)(param_1 + 0x784) = uVar4;
  *(byte *)(param_1 + 0x845) = *(byte *)(param_1 + 0x845) | 4;
  if (param_3 != '\0') {
    FUN_14349d006(uVar1,0);
    return;
  }
  return;
}



// FUNCTION 147a280ba FUN_147a280ba body=93 status=ok
// SIG undefined FUN_147a280ba(void)

void FUN_147a280ba(longlong param_1,double *param_2,char param_3)

{
  double dVar1;
  double dVar2;
  
  if ((*(double *)(param_1 + 0x7a0) == *param_2) &&
     (!NAN(*(double *)(param_1 + 0x7a0)) && !NAN(*param_2))) {
    if ((*(double *)(param_1 + 0x7a8) == param_2[1]) &&
       (!NAN(*(double *)(param_1 + 0x7a8)) && !NAN(param_2[1]))) {
      if ((*(double *)(param_1 + 0x7b0) == param_2[2]) &&
         (!NAN(*(double *)(param_1 + 0x7b0)) && !NAN(param_2[2]))) {
        return;
      }
    }
  }
  *(double *)(param_1 + 0x7b0) = param_2[2];
  dVar1 = *param_2;
  dVar2 = param_2[1];
  *(double *)(param_1 + 0x7a0) = dVar1;
  *(double *)(param_1 + 0x7a8) = dVar2;
  *(byte *)(param_1 + 0x845) = *(byte *)(param_1 + 0x845) | 4;
  if (param_3 == '\0') {
    return;
  }
  FUN_14349d006(dVar1,0);
  return;
}



// FUNCTION 147a28118 FUN_147a28118 body=440 status=ok
// SIG undefined FUN_147a28118(void)

void FUN_147a28118(longlong param_1,double *param_2,double *param_3,double *param_4,double *param_5,
                  char param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if ((*(double *)(param_1 + 0x720) == *param_2) &&
     (!NAN(*(double *)(param_1 + 0x720)) && !NAN(*param_2))) {
    if ((*(double *)(param_1 + 0x728) == param_2[1]) &&
       (!NAN(*(double *)(param_1 + 0x728)) && !NAN(param_2[1]))) {
      if ((*(double *)(param_1 + 0x730) == param_2[2]) &&
         (!NAN(*(double *)(param_1 + 0x730)) && !NAN(param_2[2]))) {
        if ((*(double *)(param_1 + 0x738) == *param_3) &&
           (!NAN(*(double *)(param_1 + 0x738)) && !NAN(*param_3))) {
          if ((*(double *)(param_1 + 0x740) == param_3[1]) &&
             (!NAN(*(double *)(param_1 + 0x740)) && !NAN(param_3[1]))) {
            if ((*(double *)(param_1 + 0x748) == param_3[2]) &&
               (!NAN(*(double *)(param_1 + 0x748)) && !NAN(param_3[2]))) {
              if ((*(double *)(param_1 + 0x778) == *param_4) &&
                 (!NAN(*(double *)(param_1 + 0x778)) && !NAN(*param_4))) {
                if ((*(double *)(param_1 + 0x780) == param_4[1]) &&
                   (!NAN(*(double *)(param_1 + 0x780)) && !NAN(param_4[1]))) {
                  if ((*(double *)(param_1 + 0x788) == param_4[2]) &&
                     (!NAN(*(double *)(param_1 + 0x788)) && !NAN(param_4[2]))) {
                    if ((*(double *)(param_1 + 0x7a0) == *param_5) &&
                       (!NAN(*(double *)(param_1 + 0x7a0)) && !NAN(*param_5))) {
                      if ((*(double *)(param_1 + 0x7a8) == param_5[1]) &&
                         (!NAN(*(double *)(param_1 + 0x7a8)) && !NAN(param_5[1]))) {
                        if ((*(double *)(param_1 + 0x7b0) == param_5[2]) &&
                           (!NAN(*(double *)(param_1 + 0x7b0)) && !NAN(param_5[2]))) {
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(double *)(param_1 + 0x730) = param_2[2];
  dVar1 = param_2[1];
  *(double *)(param_1 + 0x720) = *param_2;
  *(double *)(param_1 + 0x728) = dVar1;
  *(double *)(param_1 + 0x748) = param_3[2];
  dVar1 = param_3[1];
  *(double *)(param_1 + 0x738) = *param_3;
  *(double *)(param_1 + 0x740) = dVar1;
  *(double *)(param_1 + 0x788) = param_4[2];
  dVar1 = param_4[1];
  *(double *)(param_1 + 0x778) = *param_4;
  *(double *)(param_1 + 0x780) = dVar1;
  dVar1 = *param_5;
  dVar2 = param_5[1];
  dVar3 = param_5[2];
  if ((((*(double *)(param_1 + 0x7a0) == dVar1) &&
       (!NAN(*(double *)(param_1 + 0x7a0)) && !NAN(dVar1))) &&
      (*(double *)(param_1 + 0x7a8) == dVar2)) &&
     (!NAN(*(double *)(param_1 + 0x7a8)) && !NAN(dVar2))) {
    if ((*(double *)(param_1 + 0x7b0) == dVar3) &&
       (!NAN(*(double *)(param_1 + 0x7b0)) && !NAN(dVar3))) goto LAB_147a282ba;
  }
  *(double *)(param_1 + 0x7a0) = dVar1;
  *(double *)(param_1 + 0x7a8) = dVar2;
  *(double *)(param_1 + 0x7b0) = dVar3;
LAB_147a282ba:
  *(byte *)(param_1 + 0x845) = *(byte *)(param_1 + 0x845) | 4;
  if (param_6 == '\0') {
    return;
  }
  FUN_14349d006(SUB84(dVar1,0),0);
  return;
}



// FUNCTION 147a282d0 FUN_147a282d0 body=68 status=ok
// SIG undefined FUN_147a282d0(void)

void FUN_147a282d0(longlong param_1,double *param_2,char param_3)

{
  double dVar1;
  double dVar2;
  
  if ((*(double *)(param_1 + 0x750) == *param_2) &&
     (!NAN(*(double *)(param_1 + 0x750)) && !NAN(*param_2))) {
    if ((*(double *)(param_1 + 0x758) == param_2[1]) &&
       (!NAN(*(double *)(param_1 + 0x758)) && !NAN(param_2[1]))) {
      return;
    }
  }
  dVar1 = *param_2;
  dVar2 = param_2[1];
  *(double *)(param_1 + 0x750) = dVar1;
  *(double *)(param_1 + 0x758) = dVar2;
  *(byte *)(param_1 + 0x845) = *(byte *)(param_1 + 0x845) | 4;
  if (param_3 == '\0') {
    return;
  }
  FUN_14349d006(dVar1,0);
  return;
}



// FUNCTION 147a28314 FUN_147a28314 body=68 status=ok
// SIG undefined FUN_147a28314(void)

void FUN_147a28314(longlong param_1,double *param_2,char param_3)

{
  double dVar1;
  double dVar2;
  
  if ((*(double *)(param_1 + 0x790) == *param_2) &&
     (!NAN(*(double *)(param_1 + 0x790)) && !NAN(*param_2))) {
    if ((*(double *)(param_1 + 0x798) == param_2[1]) &&
       (!NAN(*(double *)(param_1 + 0x798)) && !NAN(param_2[1]))) {
      return;
    }
  }
  dVar1 = *param_2;
  dVar2 = param_2[1];
  *(double *)(param_1 + 0x790) = dVar1;
  *(double *)(param_1 + 0x798) = dVar2;
  *(byte *)(param_1 + 0x845) = *(byte *)(param_1 + 0x845) | 4;
  if (param_3 == '\0') {
    return;
  }
  FUN_14349d006(dVar1,0);
  return;
}



// FUNCTION 147a28358 FUN_147a28358 body=37 status=ok
// SIG undefined FUN_147a28358(void)

void FUN_147a28358(longlong param_1,uint param_2,char param_3)

{
  if (*(byte *)(param_1 + 0x844) != param_2) {
    *(char *)(param_1 + 0x844) = (char)param_2;
    *(byte *)(param_1 + 0x845) = *(byte *)(param_1 + 0x845) | 4;
    if (param_3 != '\0') {
      FUN_14349d006(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 147a2837e FUN_147a2837e body=172 status=ok
// SIG undefined FUN_147a2837e(void)

void FUN_147a2837e(longlong param_1,double *param_2,char param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  dVar7 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (((dVar7 != 1.0) || (dVar4 = dVar1, dVar5 = dVar2, dVar6 = dVar3, NAN(dVar7))) &&
     (dVar4 = DAT_14c8464e0, dVar5 = DAT_14c8464e8, dVar6 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar7)) {
    dVar7 = 1.0 / SQRT(dVar7);
    dVar4 = dVar1 * dVar7;
    dVar5 = dVar2 * dVar7;
    dVar6 = dVar3 * dVar7;
  }
  *(double *)(param_1 + 2000) = dVar4;
  *(double *)(param_1 + 0x7d8) = dVar5;
  *(double *)(param_1 + 0x7e0) = dVar6;
  *(byte *)(param_1 + 0x845) = *(byte *)(param_1 + 0x845) | 4;
  if (param_3 == '\0') {
    return;
  }
  FUN_14349d006(dVar4,0);
  return;
}



// FUNCTION 147a2842a FUN_147a2842a body=17 status=ok
// SIG undefined FUN_147a2842a(void)

void FUN_147a2842a(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x845) & 4) == 0) {
    return;
  }
  FUN_14349d006(param_1,0);
  return;
}



// FUNCTION 147a2843c FUN_147a2843c body=307 status=ok
// SIG undefined FUN_147a2843c(void)

float FUN_147a2843c(longlong param_1,float param_2)

{
  char cVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  
  fVar5 = *(float *)(param_1 + 0x7e8);
  if (ABS(fVar5 - *(float *)(param_1 + 0x840)) <= 1e-08) {
    lVar2 = *(longlong *)(param_1 + 0x660);
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar2);
      lVar2 = *(longlong *)(param_1 + 0x660);
    }
    else if (lVar2 == 0) {
      return 0.0;
    }
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar2);
    }
    cVar1 = *(char *)(param_1 + 0x844);
    if (cVar1 == '\0') {
      dVar3 = *(double *)(lVar2 + 0x200);
      dVar4 = *(double *)(lVar2 + 0x218);
    }
    else {
      dVar3 = *(double *)(lVar2 + 0x210);
      dVar4 = *(double *)(lVar2 + 0x228);
      if ((cVar1 != '\x02') && (cVar1 == '\x01')) {
        dVar3 = *(double *)(lVar2 + 0x208);
        dVar4 = *(double *)(lVar2 + 0x220);
      }
    }
    fVar5 = 0.0;
    if (9.99999993922529e-09 < dVar4 + dVar4) {
      fVar5 = (float)(((double)param_2 - (dVar3 - dVar4)) / (dVar4 + dVar4));
    }
  }
  else {
    fVar5 = (param_2 - fVar5) / (*(float *)(param_1 + 0x840) - fVar5);
  }
  return fVar5;
}



// FUNCTION 147a28570 FUN_147a28570 body=5385 status=ok
// SIG undefined FUN_147a28570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_147a28570(longlong param_1,undefined1 (*param_2) [16],longlong param_3,int param_4)

{
  double dVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double *pdVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  double *pdVar13;
  uint uVar14;
  double *pdVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar31;
  double dVar32;
  undefined1 auVar30 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar45;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar57;
  double dVar58;
  undefined1 auVar59 [16];
  double dVar62;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  undefined1 auVar67 [16];
  double dVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  undefined1 auVar72 [16];
  double dVar73;
  undefined1 auStack_338 [32];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  undefined1 local_298 [16];
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  undefined1 local_208 [16];
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  if ((param_3 != 0) && (lVar12 = FUN_147a29a7a(param_1,param_3), lVar12 != 0)) {
    bVar2 = *(byte *)(param_1 + 0x844);
    uVar14 = (uint)bVar2 * 8;
    pdVar13 = (double *)&DAT_14c8464f0;
    if (bVar2 < 3) {
      pdVar13 = (double *)(&DAT_14a89a860 + uVar14);
    }
    pdVar15 = (double *)&DAT_14c8464e0;
    pdVar7 = (double *)&DAT_14c8464e8;
    if (bVar2 < 3) {
      pdVar15 = (double *)(&DAT_14a89a890 + uVar14);
      pdVar7 = (double *)(&DAT_14a89a878 + uVar14);
    }
    dVar50 = *pdVar13 * *(double *)(lVar12 + 0x40);
    dVar25 = *pdVar7 * *(double *)(lVar12 + 0x38);
    dVar27 = *pdVar15 * *(double *)(lVar12 + 0x30);
    FUN_144a7484c(lVar12 + 0x48,&local_168);
    dVar73 = local_158;
    dVar71 = dStack_160;
    dVar57 = local_168;
    auVar30 = *(undefined1 (*) [16])(lVar12 + 0x60);
    dVar45 = auVar30._0_8_;
    dVar62 = auVar30._8_8_;
    dVar40 = *(double *)(lVar12 + 0x70);
    lVar12 = param_1;
    uVar10 = FUN_147a29b10(param_1,local_2e8);
    auVar72 = _DAT_149934d80;
    auVar18._8_8_ = dStack_2a0;
    auVar18._0_8_ = local_2a8;
    dVar26 = local_298._0_8_;
    dVar32 = local_298._8_8_;
    auVar18 = minpd(auVar30,auVar18);
    auVar28._8_8_ = 0;
    auVar28._0_8_ = dVar40;
    auVar28 = minpd(auVar28,local_298);
    auVar19._8_8_ = -(ulonglong)(auVar18._8_8_ < 0.0);
    auVar19._0_8_ = -(ulonglong)(auVar18._0_8_ < 0.0);
    iVar11 = movmskpd(uVar10,auVar19);
    auVar29._8_8_ = -(ulonglong)(auVar28._8_8_ < 0.0);
    auVar29._0_8_ = -(ulonglong)(auVar28._0_8_ < 0.0);
    uVar14 = movmskpd((int)lVar12,auVar29);
    if ((uVar14 & 0x3fffffff) == 0 && iVar11 == 0) {
      local_318._8_8_ = 0;
      local_318._0_8_ = dVar40;
      dVar51 = dVar71 * (double)local_2d8._0_8_ * -1.0 +
               dVar73 * (double)local_2e8._8_8_ +
               dStack_150 * (double)local_2e8._0_8_ * 1.0 + dVar57 * (double)local_2d8._8_8_;
      dVar37 = dVar57 * (double)local_2d8._0_8_ * 1.0 +
               dStack_150 * (double)local_2e8._8_8_ +
               dVar73 * (double)local_2e8._0_8_ * -1.0 + dVar71 * (double)local_2d8._8_8_;
      dVar27 = dVar27 * local_2a8;
      dVar25 = dVar25 * dStack_2a0;
      dVar50 = dVar50 * dVar26;
      dVar52 = dVar32 * 0.0;
      dVar31 = dVar25 * (double)local_2e8._0_8_ - dVar27 * (double)local_2e8._8_8_;
      dVar33 = dVar50 * (double)local_2e8._8_8_ - dVar25 * (double)local_2d8._0_8_;
      dVar36 = dVar27 * (double)local_2d8._0_8_ - dVar50 * (double)local_2e8._0_8_;
      dVar49 = dVar52 * (double)local_2d8._8_8_ - dVar52 * (double)local_2d8._8_8_;
      dVar33 = dVar33 + dVar33;
      dVar36 = dVar36 + dVar36;
      dVar31 = dVar31 + dVar31;
      dVar49 = dVar49 + dVar49;
      auVar72._8_8_ =
           dVar73 * (double)local_2d8._0_8_ * -1.0 +
           (((double)local_2e8._0_8_ * dVar57 * -1.0 + dStack_150 * (double)local_2d8._8_8_) -
           dVar71 * (double)local_2e8._8_8_);
      auVar72._0_8_ =
           dStack_150 * (double)local_2d8._0_8_ * 1.0 +
           (((double)local_2e8._0_8_ * dVar71 * 1.0 + dVar73 * (double)local_2d8._8_8_) -
           dVar57 * (double)local_2e8._8_8_);
      dVar40 = dVar40 * dVar26;
      dVar32 = dVar32 * 0.0;
      dVar26 = (dVar31 * (double)local_2e8._8_8_ - (double)local_2d8._0_8_ * dVar36) +
               (double)local_2d8._8_8_ * dVar33 + dVar27 + local_2c8;
      dVar25 = (dVar33 * (double)local_2d8._0_8_ - dVar31 * (double)local_2e8._0_8_) +
               (double)local_2d8._8_8_ * dVar36 + dVar25 + dStack_2c0;
      dVar27 = (dVar36 * (double)local_2e8._0_8_ - (double)local_2e8._8_8_ * dVar33) +
               (double)local_2d8._8_8_ * dVar31 + dVar50 + local_2b8;
      dVar57 = (dVar49 * (double)local_2d8._8_8_ - dVar49 * (double)local_2d8._8_8_) +
               (double)local_2d8._8_8_ * dVar49 + dVar52 + dStack_2b0;
      auVar60._8_8_ = dVar62 * dStack_2a0;
      auVar60._0_8_ = dVar45 * local_2a8;
      uVar10 = 0;
      local_308 = auVar30;
    }
    else {
      dVar31 = (double)local_2e8._8_8_ + (double)local_2e8._8_8_;
      dVar33 = (double)local_2d8._0_8_ + (double)local_2d8._0_8_;
      dVar51 = (double)local_2e8._0_8_ * ((double)local_2e8._0_8_ + (double)local_2e8._0_8_);
      dStack_2f0 = 0.0;
      dVar36 = ((double)local_2e8._0_8_ + (double)local_2e8._0_8_) * (double)local_2d8._8_8_;
      local_308._8_4_ = SUB84(dVar32 * 0.0,0);
      local_308._0_8_ = dVar40 * dVar26;
      local_308._12_4_ = (int)((ulonglong)(dVar32 * 0.0) >> 0x20);
      local_198 = (1.0 - (dVar51 + (double)local_2e8._8_8_ * dVar31)) * dVar26;
      local_1a8 = (dVar31 * (double)local_2d8._8_8_ + (double)local_2e8._0_8_ * dVar33) * dVar26;
      local_1c8 = (dVar31 * (double)local_2e8._0_8_ - dVar33 * (double)local_2d8._8_8_) * dStack_2a0
      ;
      dStack_1a0 = (dVar33 * (double)local_2e8._8_8_ - dVar36) * dVar26;
      dVar26 = dVar45 * local_2a8;
      dVar32 = dVar62 * dStack_2a0;
      local_318._8_8_ = dVar32;
      local_318._0_8_ = dVar26;
      auVar60 = local_318;
      local_1e8 = ((double)DAT_149934d80 -
                  ((double)local_2d8._0_8_ * dVar33 + (double)local_2e8._8_8_ * dVar31)) * local_2a8
      ;
      dStack_1c0 = (DAT_149934d80._8_8_ - ((double)local_2d8._0_8_ * dVar33 + dVar51)) * dStack_2a0;
      dStack_1e0 = (dVar31 * (double)local_2e8._0_8_ + dVar33 * (double)local_2d8._8_8_) * local_2a8
      ;
      local_1b8 = (dVar33 * (double)local_2e8._8_8_ + dVar36) * dStack_2a0;
      local_1d8 = ((double)local_2e8._0_8_ * dVar33 - dVar31 * (double)local_2d8._8_8_) * local_2a8;
      uStack_1d0 = 0;
      uStack_1b0 = 0;
      uStack_190 = 0;
      local_188 = local_2c8;
      dStack_180 = dStack_2c0;
      local_178 = local_2b8;
      uStack_170 = 0x3ff0000000000000;
      dVar31 = dVar71 + dVar71;
      dVar36 = dVar73 + dVar73;
      dVar33 = dVar57 * (dVar57 + dVar57);
      local_218 = (1.0 - (dVar33 + dVar71 * dVar31)) * dVar40;
      dVar51 = (dVar57 + dVar57) * dStack_150;
      local_228 = (dVar31 * dStack_150 + dVar57 * dVar36) * dVar40;
      local_248 = (dVar31 * dVar57 - dVar36 * dStack_150) * dVar62;
      dStack_220 = (dVar36 * dVar71 - dVar51) * dVar40;
      local_268 = ((double)DAT_149934d80 - (dVar73 * dVar36 + dVar71 * dVar31)) * dVar45;
      dStack_240 = (DAT_149934d80._8_8_ - (dVar73 * dVar36 + dVar33)) * dVar62;
      dStack_260 = (dVar31 * dVar57 + dVar36 * dStack_150) * dVar45;
      local_238 = (dVar36 * dVar71 + dVar51) * dVar62;
      local_258 = (dVar57 * dVar36 - dVar31 * dStack_150) * dVar45;
      uStack_250 = 0;
      uStack_230 = 0;
      uStack_210 = 0;
      local_208._8_4_ = SUB84(dVar25,0);
      local_208._0_8_ = dVar27;
      local_208._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
      uStack_1f0 = 0x3ff0000000000000;
      local_2f8 = dVar50;
      local_1f8 = dVar50;
      FUN_1447fea8d(&local_168);
      FUN_144a1c686(&local_168,0x3e45798ee0000000);
      auVar30._8_8_ = -(ulonglong)(0.0 <= dVar32);
      auVar30._0_8_ = -(ulonglong)(0.0 <= dVar26);
      auVar30 = blendvpd(_DAT_149936790,auVar72,auVar30);
      dVar40 = (double)local_308._0_8_;
      dVar32 = (double)local_308._8_8_;
      dVar26 = (double)(~-(ulonglong)(0.0 <= (double)local_308._0_8_) & 0xbff0000000000000 |
                       -(ulonglong)(0.0 <= (double)local_308._0_8_) & 0x3ff0000000000000);
      dVar45 = auVar30._0_8_;
      local_158 = local_158 * dVar45;
      dStack_160 = dStack_160 * dVar45;
      local_168 = local_168 * dVar45;
      dVar45 = auVar30._8_8_;
      local_138 = local_138 * dVar45;
      local_140 = local_140 * dVar45;
      local_148 = dVar45 * local_148;
      local_118 = local_118 * dVar26;
      local_120 = local_120 * dVar26;
      local_128 = dVar26 * local_128;
      pdVar13 = &local_288;
      iVar11 = FUN_14481fd10(pdVar13,&local_168);
      uVar10 = SUB84(pdVar13,0);
      dVar26 = local_278 * local_278 + local_288 * local_288;
      dVar45 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
      auVar42._0_8_ = dVar26 + dVar45;
      auVar42._8_8_ = dVar26 + dVar45;
      auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_);
      auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_);
      auVar30 = sqrtpd(auVar42,auVar42);
      auVar30 = divpd(auVar72,auVar30);
      auVar67._0_8_ = auVar30._0_8_ * local_278;
      auVar67._8_8_ = auVar30._8_8_ * dStack_270;
      dVar51 = (double)((ulonglong)(local_288 * auVar30._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_));
      dVar37 = (double)((ulonglong)(dStack_280 * auVar30._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_));
      auVar72 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar67,auVar20);
      dVar57 = 0.0;
      dVar26 = local_108;
      dVar25 = dStack_100;
      dVar27 = local_f8;
    }
    auVar30 = _DAT_149934d80;
    if (param_4 == 2) {
      *(double *)*param_2 = dVar51;
      *(double *)(*param_2 + 8) = dVar37;
      param_2[1] = auVar72;
      *(double *)param_2[2] = dVar26;
      *(double *)(param_2[2] + 8) = dVar25;
      *(double *)param_2[3] = dVar27;
      *(double *)(param_2[3] + 8) = dVar57;
LAB_147a296e2:
      param_2[4] = auVar60;
      auVar4._8_4_ = SUB84(dVar32,0);
      auVar4._0_8_ = dVar40;
      auVar4._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
      param_2[5] = auVar4;
      goto LAB_147a2862a;
    }
    dVar45 = auVar60._0_8_;
    dVar62 = auVar60._8_8_;
    dVar71 = auVar72._0_8_;
    dVar73 = auVar72._8_8_;
    if (param_4 == 1) {
      lVar12 = *(longlong *)(param_1 + 0xa8);
      if (lVar12 != 0) {
        local_2b8 = 0.0;
        dStack_2b0 = 0.0;
        local_2c8 = 0.0;
        dStack_2c0 = 0.0;
        auVar18 = *(undefined1 (*) [16])(param_1 + 0x280);
        dVar50 = auVar18._0_8_;
        dVar33 = auVar18._8_8_;
        auVar72 = *(undefined1 (*) [16])(param_1 + 0x290);
        dVar31 = auVar72._0_8_;
        dVar36 = auVar72._8_8_;
        auVar18 = minpd(auVar60,auVar18);
        auVar55._8_8_ = dVar32;
        auVar55._0_8_ = dVar40;
        auVar72 = minpd(auVar55,auVar72);
        auVar48._8_8_ = -(ulonglong)(auVar18._8_8_ < 0.0);
        auVar48._0_8_ = -(ulonglong)(auVar18._0_8_ < 0.0);
        iVar11 = movmskpd(iVar11,auVar48);
        auVar56._8_8_ = -(ulonglong)(auVar72._8_8_ < 0.0);
        auVar56._0_8_ = -(ulonglong)(auVar72._0_8_ < 0.0);
        uVar14 = movmskpd(uVar10,auVar56);
        local_318 = auVar60;
        if ((uVar14 & 0x3fffffff) == 0 && iVar11 == 0) {
          dVar34 = *(double *)(param_1 + 0x240);
          dVar70 = *(double *)(param_1 + 0x248);
          dVar52 = *(double *)(param_1 + 600);
          dVar49 = *(double *)(param_1 + 600);
          dVar58 = *(double *)(param_1 + 0x240);
          dVar1 = *(double *)(param_1 + 0x240);
          dVar63 = *(double *)(param_1 + 0x248);
          dVar64 = *(double *)(param_1 + 0x248);
          dVar5 = *(double *)(param_1 + 0x250);
          dVar6 = *(double *)(param_1 + 600);
          dVar65 = *(double *)(param_1 + 0x250);
          dVar68 = *(double *)(param_1 + 0x250);
          dVar69 = dVar51 * dVar68 * 1.0 + dVar73 * dVar64 + dVar71 * dVar1 * -1.0 + dVar37 * dVar49
          ;
          dVar26 = dVar26 * dVar50;
          dVar25 = dVar25 * dVar33;
          dVar27 = dVar27 * dVar31;
          dVar57 = dVar57 * dVar36;
          dVar35 = dVar25 * dVar34 - dVar26 * dVar70;
          dVar39 = dVar27 * dVar70 - dVar25 * dVar5;
          dVar41 = dVar26 * dVar5 - dVar27 * dVar34;
          dVar46 = dVar57 * dVar6 - dVar57 * dVar6;
          dVar39 = dVar39 + dVar39;
          dVar41 = dVar41 + dVar41;
          dVar35 = dVar35 + dVar35;
          dVar46 = dVar46 + dVar46;
          local_2c8 = (dVar35 * dVar70 - dVar5 * dVar41) + dVar52 * dVar39 + dVar26 +
                      *(double *)(param_1 + 0x260);
          dStack_2c0 = (dVar39 * dVar5 - dVar35 * dVar34) + dVar49 * dVar41 + dVar25 +
                       *(double *)(param_1 + 0x268);
          local_2b8 = (dVar41 * dVar34 - dVar70 * dVar39) + dVar52 * dVar35 + dVar27 +
                      *(double *)(param_1 + 0x270);
          dStack_2b0 = (dVar46 * dVar6 - dVar46 * dVar6) + dVar49 * dVar46 + dVar57 +
                       *(double *)(param_1 + 0x278);
          local_2e8._8_4_ = SUB84(dVar69,0);
          local_2e8._0_8_ =
               dVar37 * dVar65 * -1.0 + dVar71 * dVar63 + dVar73 * dVar58 * 1.0 + dVar51 * dVar52;
          local_2e8._12_4_ = (int)((ulonglong)dVar69 >> 0x20);
          local_2d8._8_8_ =
               dVar71 * dVar68 * -1.0 +
               ((dVar1 * dVar51 * -1.0 + dVar73 * dVar49) - dVar37 * dVar64);
          local_2d8._0_8_ =
               dVar73 * dVar65 * 1.0 + ((dVar58 * dVar37 * 1.0 + dVar71 * dVar52) - dVar51 * dVar63)
          ;
          dVar36 = dVar32 * dVar36;
        }
        else {
          dVar1 = *(double *)(param_1 + 0x240);
          dVar58 = *(double *)(param_1 + 0x248);
          dVar63 = *(double *)(param_1 + 0x250);
          local_308._8_4_ = SUB84(dVar32,0);
          local_308._0_8_ = dVar40;
          local_308._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
          dVar52 = dVar58 + dVar58;
          dVar64 = dVar63 + dVar63;
          dVar57 = dVar1 * (dVar1 + dVar1);
          dVar49 = *(double *)(param_1 + 0x240) * dVar64;
          dVar32 = *(double *)(param_1 + 600);
          dVar65 = dVar64 * dVar32;
          dVar68 = (dVar1 + dVar1) * *(double *)(param_1 + 600);
          dVar32 = dVar52 * dVar32;
          dVar36 = (double)local_308._8_8_ * dVar36;
          local_198 = (1.0 - (dVar57 + dVar58 * dVar52)) * dVar31;
          local_1a8 = (dVar32 + dVar49) * dVar31;
          local_1c8 = (dVar52 * dVar1 - dVar65) * dVar33;
          dStack_1a0 = (dVar64 * dVar58 - dVar68) * dVar31;
          local_1e8 = ((double)DAT_149934d80 - (dVar63 * dVar64 + dVar58 * dVar52)) * dVar50;
          dStack_1c0 = (DAT_149934d80._8_8_ - (dVar63 * dVar64 + dVar57)) * dVar33;
          dStack_1e0 = (dVar52 * dVar1 + dVar65) * dVar50;
          local_1b8 = (dVar64 * dVar58 + dVar68) * dVar33;
          local_1d8 = (dVar49 - dVar32) * dVar50;
          uStack_1d0 = 0;
          uStack_1b0 = 0;
          uStack_190 = 0;
          local_188 = *(double *)(param_1 + 0x260);
          dStack_180 = *(double *)(param_1 + 0x268);
          local_178 = *(double *)(param_1 + 0x270);
          uStack_170 = 0x3ff0000000000000;
          dVar49 = dVar37 + dVar37;
          dVar32 = dVar71 + dVar71;
          dVar52 = dVar51 * (dVar51 + dVar51);
          local_218 = (1.0 - (dVar52 + dVar37 * dVar49)) * dVar40;
          dVar57 = (dVar51 + dVar51) * dVar73;
          local_228 = (dVar51 * dVar32 + dVar49 * dVar73) * dVar40;
          local_248 = (dVar49 * dVar51 - dVar32 * dVar73) * dVar62;
          dStack_220 = (dVar32 * dVar37 - dVar57) * dVar40;
          local_268 = ((double)DAT_149934d80 - (dVar71 * dVar32 + dVar37 * dVar49)) * dVar45;
          dStack_240 = (DAT_149934d80._8_8_ - (dVar71 * dVar32 + dVar52)) * dVar62;
          dStack_260 = (dVar49 * dVar51 + dVar32 * dVar73) * dVar45;
          local_238 = (dVar32 * dVar37 + dVar57) * dVar62;
          local_258 = (dVar51 * dVar32 - dVar49 * dVar73) * dVar45;
          uStack_250 = 0;
          uStack_230 = 0;
          uStack_210 = 0;
          local_208._8_8_ = dVar25;
          local_208._0_8_ = dVar26;
          uStack_1f0 = 0x3ff0000000000000;
          local_2f8 = dVar40 * dVar31;
          dStack_2f0 = dVar36;
          local_1f8 = dVar27;
          FUN_1447fea8d(&local_168);
          FUN_144a1c686(&local_168,0x3e45798ee0000000);
          auVar23._8_8_ = -(ulonglong)(0.0 <= dVar62 * dVar33);
          auVar23._0_8_ = -(ulonglong)(0.0 <= dVar45 * dVar50);
          auVar18 = blendvpd(_DAT_149936790,auVar30,auVar23);
          uVar17 = -(ulonglong)(0.0 <= dVar40 * dVar31);
          dVar26 = (double)(~uVar17 & 0xbff0000000000000 | uVar17 & 0x3ff0000000000000);
          dVar32 = auVar18._0_8_;
          local_158 = local_158 * dVar32;
          dStack_160 = dStack_160 * dVar32;
          local_168 = local_168 * dVar32;
          dVar32 = auVar18._8_8_;
          local_138 = local_138 * dVar32;
          local_140 = local_140 * dVar32;
          local_148 = dVar32 * local_148;
          local_118 = local_118 * dVar26;
          local_120 = local_120 * dVar26;
          local_128 = dVar26 * local_128;
          FUN_14481fd10(&local_288,&local_168);
          dVar26 = local_278 * local_278 + local_288 * local_288;
          dVar32 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
          auVar44._0_8_ = dVar26 + dVar32;
          auVar44._8_8_ = dVar26 + dVar32;
          auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_);
          auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_);
          auVar18 = sqrtpd(auVar44,auVar44);
          auVar30 = divpd(auVar30,auVar18);
          auVar61._0_8_ = auVar30._0_8_ * local_278;
          auVar61._8_8_ = auVar30._8_8_ * dStack_270;
          local_2d8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar61,auVar24);
          local_2e8._8_8_ =
               (ulonglong)(dStack_280 * auVar30._8_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_);
          local_2e8._0_8_ =
               (ulonglong)(local_288 * auVar30._0_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_);
          local_2c8 = local_108;
          dStack_2c0 = dStack_100;
          local_2b8 = local_f8;
          dStack_2b0 = 0.0;
        }
        dStack_2a0 = dVar62 * dVar33;
        local_2a8 = dVar45 * dVar50;
        local_298._8_4_ = SUB84(dVar36,0);
        local_298._0_8_ = dVar40 * dVar31;
        local_298._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
        lVar12 = *(longlong *)(lVar12 + 0x1c8);
        puVar16 = &DAT_14c846480;
        if (lVar12 != 0) {
          puVar16 = (undefined8 *)(lVar12 + 0x240);
        }
        FUN_1449437a2(local_2e8,param_2,puVar16);
        goto LAB_147a2862a;
      }
    }
    else if (param_4 == 0) {
      *(undefined8 *)param_2[3] = 0;
      *(undefined8 *)(param_2[3] + 8) = 0;
      *(undefined8 *)param_2[2] = 0;
      *(undefined8 *)(param_2[2] + 8) = 0;
      auVar18 = _DAT_149934d80;
      local_318 = *(undefined1 (*) [16])(param_1 + 0x280);
      auVar30 = *(undefined1 (*) [16])(param_1 + 0x290);
      dVar50 = auVar30._0_8_;
      dVar31 = auVar30._8_8_;
      auVar72 = minpd(auVar60,local_318);
      auVar53._8_8_ = dVar32;
      auVar53._0_8_ = dVar40;
      auVar30 = minpd(auVar53,auVar30);
      auVar47._8_8_ = -(ulonglong)(auVar72._8_8_ < 0.0);
      auVar47._0_8_ = -(ulonglong)(auVar72._0_8_ < 0.0);
      iVar11 = movmskpd(iVar11,auVar47);
      auVar54._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
      auVar54._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
      uVar14 = movmskpd(uVar10,auVar54);
      if ((uVar14 & 0x3fffffff) != 0 || iVar11 != 0) {
        dVar49 = *(double *)(param_1 + 0x240);
        dVar52 = *(double *)(param_1 + 0x248);
        dVar1 = *(double *)(param_1 + 0x250);
        dVar58 = dVar52 + dVar52;
        dVar63 = dVar1 + dVar1;
        dVar33 = dVar49 * (dVar49 + dVar49);
        dVar36 = *(double *)(param_1 + 0x240) * dVar63;
        dVar57 = *(double *)(param_1 + 600);
        dVar64 = dVar63 * dVar57;
        dVar68 = (dVar49 + dVar49) * *(double *)(param_1 + 600);
        dVar57 = dVar58 * dVar57;
        local_308._8_8_ = dVar32 * dVar31;
        local_308._0_8_ = dVar40 * dVar50;
        local_198 = (1.0 - (dVar33 + dVar52 * dVar58)) * dVar50;
        local_1a8 = (dVar57 + dVar36) * dVar50;
        local_1c8 = (dVar58 * dVar49 - dVar64) * (double)local_318._8_8_;
        dStack_1a0 = (dVar63 * dVar52 - dVar68) * dVar50;
        dVar65 = dVar45 * (double)local_318._0_8_;
        dVar69 = dVar62 * (double)local_318._8_8_;
        local_1e8 = (1.0 - (dVar1 * dVar63 + dVar52 * dVar58)) * (double)local_318._0_8_;
        dStack_1c0 = (1.0 - (dVar1 * dVar63 + dVar33)) * (double)local_318._8_8_;
        dStack_1e0 = (dVar58 * dVar49 + dVar64) * (double)local_318._0_8_;
        local_1b8 = (dVar63 * dVar52 + dVar68) * (double)local_318._8_8_;
        local_1d8 = (dVar36 - dVar57) * (double)local_318._0_8_;
        uStack_1d0 = 0;
        uStack_1b0 = 0;
        uStack_190 = 0;
        local_188 = *(double *)(param_1 + 0x260);
        dStack_180 = *(double *)(param_1 + 0x268);
        local_178 = *(double *)(param_1 + 0x270);
        uStack_170 = 0x3ff0000000000000;
        dVar50 = dVar37 + dVar37;
        dVar32 = dVar71 + dVar71;
        dVar31 = dVar51 * (dVar51 + dVar51);
        local_218 = (1.0 - (dVar31 + dVar37 * dVar50)) * dVar40;
        dVar57 = (dVar51 + dVar51) * dVar73;
        local_228 = (dVar51 * dVar32 + dVar50 * dVar73) * dVar40;
        local_248 = (dVar50 * dVar51 - dVar32 * dVar73) * dVar62;
        dStack_220 = (dVar32 * dVar37 - dVar57) * dVar40;
        local_268 = ((double)DAT_149934d80 - (dVar71 * dVar32 + dVar37 * dVar50)) * dVar45;
        dStack_240 = (DAT_149934d80._8_8_ - (dVar71 * dVar32 + dVar31)) * dVar62;
        dStack_260 = (dVar50 * dVar51 + dVar32 * dVar73) * dVar45;
        local_238 = (dVar32 * dVar37 + dVar57) * dVar62;
        local_258 = (dVar51 * dVar32 - dVar50 * dVar73) * dVar45;
        uStack_250 = 0;
        uStack_230 = 0;
        uStack_210 = 0;
        local_208._8_8_ = dVar25;
        local_208._0_8_ = dVar26;
        uStack_1f0 = 0x3ff0000000000000;
        local_1f8 = dVar27;
        FUN_1447fea8d(&local_168);
        FUN_144a1c686(&local_168,0x3e45798ee0000000);
        auVar21._8_8_ = -(ulonglong)(0.0 <= dVar69);
        auVar21._0_8_ = -(ulonglong)(0.0 <= dVar65);
        auVar30 = blendvpd(_DAT_149936790,auVar18,auVar21);
        uVar8 = local_308._0_8_;
        uVar9 = local_308._8_8_;
        dVar40 = (double)(~-(ulonglong)(0.0 <= (double)local_308._0_8_) & 0xbff0000000000000 |
                         -(ulonglong)(0.0 <= (double)local_308._0_8_) & 0x3ff0000000000000);
        dVar26 = auVar30._0_8_;
        local_158 = local_158 * dVar26;
        dStack_160 = dStack_160 * dVar26;
        local_168 = local_168 * dVar26;
        dVar26 = auVar30._8_8_;
        local_138 = local_138 * dVar26;
        local_140 = local_140 * dVar26;
        local_148 = dVar26 * local_148;
        local_118 = local_118 * dVar40;
        local_120 = local_120 * dVar40;
        local_128 = dVar40 * local_128;
        FUN_14481fd10(local_2e8,&local_168);
        dVar40 = (double)local_2d8._0_8_ * (double)local_2d8._0_8_ +
                 (double)local_2e8._0_8_ * (double)local_2e8._0_8_;
        dVar26 = (double)local_2d8._8_8_ * (double)local_2d8._8_8_ +
                 (double)local_2e8._8_8_ * (double)local_2e8._8_8_;
        auVar43._0_8_ = dVar40 + dVar26;
        auVar43._8_8_ = dVar40 + dVar26;
        auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_);
        auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_);
        auVar30 = sqrtpd(auVar43,auVar43);
        auVar18 = divpd(auVar18,auVar30);
        auVar59._0_8_ = auVar18._0_8_ * (double)local_2d8._0_8_;
        auVar59._8_8_ = auVar18._8_8_ * (double)local_2d8._8_8_;
        auVar30 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar59,auVar22);
        *(double *)param_2[4] = dVar65;
        *(double *)(param_2[4] + 8) = dVar69;
        *(undefined8 *)param_2[5] = uVar8;
        *(undefined8 *)(param_2[5] + 8) = uVar9;
        *(ulonglong *)*param_2 =
             (ulonglong)((double)local_2e8._0_8_ * auVar18._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_);
        *(ulonglong *)(*param_2 + 8) =
             (ulonglong)((double)local_2e8._8_8_ * auVar18._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_);
        param_2[1] = auVar30;
        *(double *)param_2[2] = local_108;
        *(double *)(param_2[2] + 8) = dStack_100;
        *(double *)param_2[3] = local_f8;
        *(undefined8 *)(param_2[3] + 8) = 0;
        goto LAB_147a2862a;
      }
      dVar5 = *(double *)(param_1 + 0x240);
      dVar6 = *(double *)(param_1 + 0x248);
      dVar36 = *(double *)(param_1 + 600);
      dVar33 = *(double *)(param_1 + 600);
      dVar52 = *(double *)(param_1 + 0x240);
      dVar49 = *(double *)(param_1 + 0x240);
      dVar58 = *(double *)(param_1 + 0x248);
      dVar1 = *(double *)(param_1 + 0x248);
      dVar39 = *(double *)(param_1 + 0x250);
      dVar41 = *(double *)(param_1 + 600);
      dVar63 = *(double *)(param_1 + 0x250);
      dVar64 = *(double *)(param_1 + 0x250);
      dVar46 = dVar51 * dVar64 * 1.0 + dVar73 * dVar1 + dVar71 * dVar49 * -1.0 + dVar37 * dVar33;
      dVar26 = dVar26 * (double)local_318._0_8_;
      dVar25 = dVar25 * (double)local_318._8_8_;
      dVar27 = dVar27 * dVar50;
      dVar57 = dVar57 * dVar31;
      dVar34 = dVar25 * dVar5 - dVar26 * dVar6;
      dVar38 = dVar27 * dVar6 - dVar25 * dVar39;
      dVar66 = dVar26 * dVar39 - dVar27 * dVar5;
      dVar70 = dVar57 * dVar41 - dVar57 * dVar41;
      dVar38 = dVar38 + dVar38;
      dVar66 = dVar66 + dVar66;
      dVar34 = dVar34 + dVar34;
      dVar70 = dVar70 + dVar70;
      dVar65 = *(double *)(param_1 + 0x260);
      dVar69 = *(double *)(param_1 + 0x268);
      dVar68 = *(double *)(param_1 + 0x270);
      dVar35 = *(double *)(param_1 + 0x278);
      auVar3._8_4_ = SUB84(dVar46,0);
      auVar3._0_8_ = dVar37 * dVar63 * -1.0 +
                     dVar71 * dVar58 + dVar73 * dVar52 * 1.0 + dVar51 * dVar36;
      auVar3._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
      *param_2 = auVar3;
      *(double *)param_2[1] =
           dVar73 * dVar63 * 1.0 + ((dVar52 * dVar37 * 1.0 + dVar71 * dVar36) - dVar51 * dVar58);
      *(double *)(param_2[1] + 8) =
           dVar71 * dVar64 * -1.0 + ((dVar49 * dVar51 * -1.0 + dVar73 * dVar33) - dVar37 * dVar1);
      *(double *)param_2[2] = (dVar34 * dVar6 - dVar39 * dVar66) + dVar36 * dVar38 + dVar26 + dVar65
      ;
      *(double *)(param_2[2] + 8) =
           (dVar38 * dVar39 - dVar34 * dVar5) + dVar33 * dVar66 + dVar25 + dVar69;
      *(double *)param_2[3] = (dVar66 * dVar5 - dVar6 * dVar38) + dVar36 * dVar34 + dVar27 + dVar68;
      *(double *)(param_2[3] + 8) =
           (dVar70 * dVar41 - dVar70 * dVar41) + dVar33 * dVar70 + dVar57 + dVar35;
      auVar60._0_8_ = dVar45 * (double)local_318._0_8_;
      auVar60._8_8_ = dVar62 * (double)local_318._8_8_;
      dVar40 = dVar40 * dVar50;
      dVar32 = dVar32 * dVar31;
      goto LAB_147a296e2;
    }
  }
  FUN_1448fe338(param_1,param_2,param_3,param_4);
LAB_147a2862a:
  if ((local_e0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147a29a7a FUN_147a29a7a body=150 status=ok
// SIG undefined FUN_147a29a7a(void)

longlong FUN_147a29a7a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x660);
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
    lVar2 = *(longlong *)(param_1 + 0x660);
  }
  else if (lVar2 == 0) {
    return 0;
  }
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  if ((param_2 != 0) && (0 < (longlong)*(int *)(lVar2 + 0x1b8))) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x1b0) + lVar3 * 8);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x28) == param_2)) {
        return lVar1;
      }
      lVar3 = lVar3 + 1;
    } while (*(int *)(lVar2 + 0x1b8) != lVar3);
  }
  return 0;
}



// FUNCTION 147a29b10 FUN_147a29b10 body=152 status=ok
// SIG undefined FUN_147a29b10(void)

undefined8 FUN_147a29b10(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_147a2843c(param_1,param_3);
  local_44 = 0;
  local_48 = 0x3f800000;
  FUN_14061fe58(param_1,&local_44,&local_48);
  local_58 = local_48;
  FUN_14062070e(param_1,param_2,uVar1,local_44);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a29baa FUN_147a29baa body=865 status=ok
// SIG undefined FUN_147a29baa(void)

undefined8 FUN_147a29baa(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined7 uVar8;
  float *pfVar6;
  float *pfVar7;
  undefined7 extraout_var;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_148 [36];
  float local_124 [3];
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar2 = *(longlong *)(param_1 + -0xb8);
  uVar8 = (undefined7)(local_b0 >> 8);
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
    lVar9 = *(longlong *)(param_1 + -0xb8);
  }
  else {
    lVar9 = lVar2;
    if (lVar2 == 0) goto LAB_147a29e6b;
  }
  if ((lVar9 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar9);
  }
  (**(code **)(*(longlong *)(lVar9 + 200) + 0x10))(lVar9 + 200,param_2,param_3);
  local_124[2] = 1.0;
  local_124[1] = 1.0;
  local_124[0] = 1.0;
  cVar1 = *(char *)(param_1 + 300);
  if (cVar1 == '\0') {
    pfVar6 = local_124 + 2;
  }
  else if ((cVar1 == '\x02') || (cVar1 != '\x01')) {
    pfVar6 = local_124;
  }
  else {
    pfVar6 = local_124 + 1;
  }
  *pfVar6 = 0.0;
  fVar5 = local_124[2];
  fVar4 = local_124[1];
  fVar3 = local_124[0];
  uVar8 = 0;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    pfVar6 = (float *)*param_2;
    lVar9 = (longlong)*(int *)(param_2 + 1) * 0xc;
    do {
      cVar1 = *(char *)(param_1 + 300);
      if (cVar1 == '\x02') {
LAB_147a29cfa:
        pfVar7 = pfVar6 + 2;
      }
      else if (cVar1 == '\x01') {
        pfVar7 = pfVar6 + 1;
      }
      else {
        pfVar7 = pfVar6;
        if (cVar1 != '\0') goto LAB_147a29cfa;
      }
      FUN_147a29b10(param_1 + -0x718,&local_118,*pfVar7);
      dVar11 = (double)(*pfVar6 * fVar5) * local_d8;
      dVar12 = (double)(pfVar6[1] * fVar4) * dStack_d0;
      dVar10 = (double)(pfVar6[2] * fVar3) * local_c8;
      dVar13 = dVar12 * local_118 - dStack_110 * dVar11;
      dVar14 = dVar10 * dStack_110 - local_108 * dVar12;
      dVar15 = dVar11 * local_108 - local_118 * dVar10;
      dVar14 = dVar14 + dVar14;
      dVar15 = dVar15 + dVar15;
      dVar13 = dVar13 + dVar13;
      *pfVar6 = (float)((dVar13 * dStack_110 - dVar15 * local_108) + dStack_100 * dVar14 + dVar11 +
                       local_f8);
      pfVar6[1] = (float)((local_108 * dVar14 - local_118 * dVar13) + dStack_100 * dVar15 + dVar12 +
                         dStack_f0);
      pfVar6[2] = (float)(dVar13 * dStack_100 + dVar10 + (dVar15 * local_118 - dVar14 * dStack_110)
                         + local_e8);
      pfVar6 = pfVar6 + 3;
      lVar9 = lVar9 + -0xc;
      uVar8 = extraout_var;
    } while (lVar9 != 0);
  }
  *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 2;
LAB_147a29e6b:
  if ((local_b0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar8,lVar2 != 0);
}



// FUNCTION 147a29f0c FUN_147a29f0c body=132 status=ok
// SIG undefined FUN_147a29f0c(void)

undefined8 FUN_147a29f0c(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + -0xb8);
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
    lVar2 = *(longlong *)(param_1 + -0xb8);
  }
  else if (lVar2 == 0) {
    return 0;
  }
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000147a29f62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(lVar2 + 200) + 0x20))(lVar2 + 200,param_2);
  return uVar1;
}



// FUNCTION 147a29f90 FUN_147a29f90 body=146 status=ok
// SIG undefined FUN_147a29f90(void)

undefined8 FUN_147a29f90(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + -0xb8);
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
    lVar2 = *(longlong *)(param_1 + -0xb8);
  }
  else if (lVar2 == 0) {
    return 0;
  }
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000147a29ff2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(lVar2 + 200) + 0x18))(lVar2 + 200,param_2,param_3);
  return uVar1;
}



// FUNCTION 147a2a052 FUN_147a2a052 body=1165 status=ok
// SIG undefined FUN_147a2a052(void)

void FUN_147a2a052(longlong param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  byte bVar7;
  undefined1 auStack_128 [40];
  undefined **local_100;
  ulonglong *local_f8;
  byte local_d6;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar4 = *(longlong *)(param_1 + -0xb8);
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar4);
    lVar4 = *(longlong *)(param_1 + -0xb8);
  }
  else if (lVar4 == 0) goto LAB_147a2a0c4;
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar4);
  }
  (**(code **)(*(longlong *)(lVar4 + 200) + 0x38))(lVar4 + 200,param_2);
LAB_147a2a0c4:
  lVar4 = *(longlong *)(param_1 + 0x120);
  if ((((lVar4 != 0) && (*(int *)(lVar4 + 0xe8) == *(int *)(param_1 + 0xd4))) &&
      (*(int *)(lVar4 + 0xec) == *(int *)(param_1 + 0xd8))) &&
     ((*(int *)(lVar4 + 0xf0) == *(int *)(param_1 + 0xdc) &&
      (*(int *)(lVar4 + 0xf4) == *(int *)(param_1 + 0xe0))))) {
    local_58 = 0;
    uStack_50 = 0;
    FUN_144893a1c(&local_58);
    memset(&local_100,0,0x90);
    FUN_144869430(&local_100);
    local_70 = 0;
    local_100 = &PTR_FUN_149e1e590;
    local_60 = 0;
    local_68 = &local_58;
    FUN_144a69558(&local_100,1);
    (*(code *)local_100[0x1e])(&local_100,0);
    local_100 = &PTR_FUN_149e1e330;
    FUN_14480c34d(&local_100,param_1 + 8);
    FUN_14480c34d(&local_100,param_1 + 0x20);
    FUN_14010abd4(&local_100,param_1 + 0x38);
    if ((undefined4 *)local_f8[1] < (undefined4 *)*local_f8 + 1) {
      if ((local_d6 & 2) == 0) {
        (*(code *)local_100[0x2e])(&local_100,(undefined4 *)(param_1 + 0x48),4);
      }
      else {
        thunk_FUN_14572512c(&local_100);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)*local_f8;
      *local_f8 = *local_f8 + 4;
    }
    FUN_14010abd4(&local_100,param_1 + 0x50);
    FUN_14480c34d(&local_100,param_1 + 0x60);
    FUN_14480c34d(&local_100,param_1 + 0x88);
    FUN_14010abd4(&local_100,param_1 + 0x78);
    if ((undefined4 *)local_f8[1] < (undefined4 *)*local_f8 + 1) {
      if ((local_d6 & 2) == 0) {
        (*(code *)local_100[0x2e])(&local_100,(undefined4 *)(param_1 + 0x4c),4);
      }
      else {
        thunk_FUN_14572512c(&local_100);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)*local_f8;
      *local_f8 = *local_f8 + 4;
    }
    FUN_14010abd4(&local_100,param_1 + 0xa0);
    FUN_14480c34d(&local_100,param_1 + 0xb8);
    if (local_f8[1] < *local_f8 + 4) {
      local_3c = *(byte *)(param_1 + 0x12d) >> 1 & 1;
      (*(code *)local_100[0x2e])(&local_100,&local_3c,4);
      if (1 < local_3c) {
        FUN_14572541c(&local_100);
      }
    }
    else {
      *local_f8 = *local_f8 + 4;
    }
    if ((undefined1 *)local_f8[1] < (undefined1 *)*local_f8 + 1) {
      (*(code *)local_100[0x2e])(&local_100,(undefined1 *)(param_1 + 300),1);
    }
    else {
      *(undefined1 *)(param_1 + 300) = *(undefined1 *)*local_f8;
      *local_f8 = *local_f8 + 1;
    }
    if ((undefined4 *)local_f8[1] < (undefined4 *)*local_f8 + 1) {
      if ((local_d6 & 2) == 0) {
        (*(code *)local_100[0x2e])(&local_100,(undefined4 *)(param_1 + 0xd0),4);
      }
      else {
        thunk_FUN_14572512c(&local_100);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)*local_f8;
      *local_f8 = *local_f8 + 4;
    }
    puVar6 = (undefined4 *)(param_1 + 0x128);
    if ((undefined4 *)local_f8[1] < (undefined4 *)*local_f8 + 1) {
      if ((local_d6 & 2) == 0) {
        (*(code *)local_100[0x2e])(&local_100,puVar6,4);
      }
      else {
        thunk_FUN_14572512c(&local_100,puVar6);
      }
    }
    else {
      *puVar6 = *(undefined4 *)*local_f8;
      *local_f8 = *local_f8 + 4;
    }
    lVar4 = local_58;
    iVar3 = *(int *)(param_2 + 8) + -1;
    if (*(int *)(param_2 + 8) == 0) {
      iVar3 = 0;
    }
    FUN_1412d7f26(param_2,(int)uStack_50 + iVar3 + 1);
    if (0 < (int)uStack_50) {
      lVar5 = 0;
      do {
        bVar7 = *(byte *)(lVar4 + lVar5);
        bVar2 = bVar7 >> 4 | 0x30;
        if (0x9f < bVar7) {
          bVar2 = (bVar7 >> 4) + 0x37;
        }
        FUN_140002184(param_2,bVar2);
        bVar7 = bVar7 & 0xf;
        cVar1 = bVar7 + 0x30;
        if (9 < bVar7) {
          cVar1 = bVar7 + 0x37;
        }
        FUN_140002184(param_2,cVar1);
        lVar5 = lVar5 + 1;
      } while (lVar5 < (int)uStack_50);
    }
    FUN_144a7fc42(&local_100);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2a4e0 FUN_147a2a4e0 body=8125 status=ok
// SIG undefined FUN_147a2a4e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a2a4e0(longlong param_1)

{
  undefined1 (*pauVar1) [16];
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined1 auVar13 [16];
  byte bVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  int iVar17;
  double *pdVar18;
  double *pdVar19;
  longlong lVar20;
  undefined8 uVar21;
  uint uVar22;
  double *pdVar23;
  longlong lVar24;
  undefined1 (*pauVar25) [16];
  undefined8 *puVar26;
  undefined8 *puVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar51;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar52;
  double dVar57;
  double dVar58;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  double dVar65;
  double dVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  double dVar69;
  double dVar70;
  undefined1 auVar71 [16];
  double dVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  double dVar77;
  double dVar78;
  undefined1 auStack_3e8 [32];
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  undefined1 local_3a8 [24];
  double local_390;
  undefined1 local_388 [16];
  double local_378;
  double local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  double local_358;
  undefined8 uStack_350;
  double local_348;
  double dStack_340;
  undefined1 local_338 [16];
  double local_328;
  undefined8 uStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
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
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double dStack_130;
  double local_128;
  ulonglong uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  if (*(char *)(param_1 + 0x846) == '\x01') {
    if ((*(longlong *)(param_1 + 0x660) != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    else if (*(longlong *)(param_1 + 0x660) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_3e8);
    }
    if (*(longlong **)(param_1 + 0x838) == (longlong *)0x0) {
      lVar24 = *(longlong *)(param_1 + 0x660);
      if ((lVar24 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar24);
      }
      uVar6 = *(undefined8 *)(lVar24 + 0x188);
      uVar21 = FUN_14099bfa2();
      lVar24 = FUN_14092e757(uVar21,uVar6,param_1,0);
      if ((lVar24 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar24);
      }
      *(longlong *)(param_1 + 0x838) = lVar24;
      FUN_144757f48(lVar24,8);
      (**(code **)(**(longlong **)(param_1 + 0x838) + 0x2c0))();
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x838) + 0x2c0))();
      lVar24 = *(longlong *)(param_1 + 0x660);
      uVar6 = *(undefined8 *)(param_1 + 0x838);
      if ((lVar24 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar24);
      }
      FUN_14058b5a6(uVar6,*(undefined8 *)(lVar24 + 0x188));
      lVar24 = *(longlong *)(param_1 + 0x660);
      if ((lVar24 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar24);
      }
      *(undefined1 *)(*(longlong *)(param_1 + 0x838) + 0x31) =
           *(undefined1 *)(*(longlong *)(lVar24 + 0x188) + 0x31);
    }
    lVar24 = *(longlong *)(param_1 + 0x660);
    if ((lVar24 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar24);
    }
    bVar14 = DAT_14c950c29;
    lVar29 = *(longlong *)(param_1 + 0x838);
    uVar6 = *(undefined8 *)(*(longlong *)(lVar24 + 0x188) + 0xf0);
    *(undefined8 *)(lVar29 + 0xe8) = *(undefined8 *)(*(longlong *)(lVar24 + 0x188) + 0xe8);
    *(undefined8 *)(lVar29 + 0xf0) = uVar6;
    lVar24 = *(longlong *)(param_1 + 0x660);
    if ((lVar24 != 0 & bVar14) == 1) {
      FUN_1456cec3c(lVar24);
    }
    uVar6 = *(undefined8 *)(*(longlong *)(lVar24 + 0x188) + 0xf0);
    *(undefined8 *)(param_1 + 0x7ec) = *(undefined8 *)(*(longlong *)(lVar24 + 0x188) + 0xe8);
    *(undefined8 *)(param_1 + 0x7f4) = uVar6;
    *(byte *)(*(longlong *)(param_1 + 0x838) + 0xb9) =
         *(byte *)(*(longlong *)(param_1 + 0x838) + 0xb9) & 0xf7 | *(byte *)(param_1 + 0x845) & 8;
    FUN_144b0760a(*(undefined8 *)(param_1 + 0x838),&local_178);
    if (local_178._0_1_ == '\x03') {
      FUN_147a2cbea(*(longlong *)(param_1 + 0x838) + 0x38);
    }
    else {
      local_370 = 1.0;
      local_378 = 1.0;
      local_390 = 1.0;
      cVar5 = *(char *)(param_1 + 0x844);
      if (cVar5 == '\0') {
        pdVar18 = &local_370;
      }
      else if ((cVar5 == '\x02') || (cVar5 != '\x01')) {
        pdVar18 = &local_390;
      }
      else {
        pdVar18 = &local_378;
      }
      *pdVar18 = 0.0;
      dVar44 = local_370;
      dVar65 = local_378;
      dVar39 = local_390;
      lVar24 = *(longlong *)(param_1 + 0x838);
      iVar17 = *(int *)(lVar24 + 0x40);
      if ((longlong)iVar17 != 0) {
        lVar24 = *(longlong *)(lVar24 + 0x38);
        lVar28 = 0;
        lVar29 = lVar24;
        do {
          cVar5 = *(char *)(param_1 + 0x844);
          if (cVar5 == '\0') {
            pdVar18 = (double *)(lVar29 + 0x30);
          }
          else if (cVar5 == '\x02') {
            pdVar18 = (double *)(lVar29 + 0x40);
          }
          else if (cVar5 == '\x01') {
            pdVar18 = (double *)(lVar29 + 0x38);
          }
          else {
            pdVar18 = (double *)(lVar24 + 0x40 + lVar28);
          }
          FUN_147a29b10(param_1,&local_178,(float)*pdVar18);
          *(double *)(lVar24 + 0x30 + lVar28) = *(double *)(lVar24 + 0x30 + lVar28) * dVar44;
          *(double *)(lVar24 + 0x38 + lVar28) = *(double *)(lVar24 + 0x38 + lVar28) * dVar65;
          auVar47._0_8_ = ABS(local_138);
          auVar47._8_8_ = ABS(dStack_130);
          dVar31 = *(double *)(lVar24 + 0x40 + lVar28) * dVar39 * local_128;
          auVar48._0_8_ = ABS(local_128);
          auVar8._24_8_ = uStack_120 & 0x7fffffffffffffff;
          auVar8._16_8_ = auVar48._0_8_;
          auVar8._0_16_ = auVar47;
          auVar48._8_8_ = auVar47._0_8_;
          auVar47 = maxpd(auVar47,auVar8._8_16_);
          auVar48 = maxpd(auVar47,auVar48);
          *(float *)(lVar24 + 0x48 + lVar28) =
               (float)auVar48._0_8_ * *(float *)(lVar24 + 0x48 + lVar28);
          pdVar18 = (double *)(lVar24 + 0x30 + lVar28);
          dVar46 = *pdVar18 * local_138;
          dVar51 = pdVar18[1] * dStack_130;
          dVar52 = dVar51 * local_178 - dVar46 * dStack_170;
          dVar57 = dVar31 * dStack_170 - dVar51 * local_168;
          dVar58 = dVar46 * local_168 - local_178 * dVar31;
          dVar57 = dVar57 + dVar57;
          dVar58 = dVar58 + dVar58;
          dVar52 = dVar52 + dVar52;
          pdVar18 = (double *)(lVar24 + 0x30 + lVar28);
          *pdVar18 = (dVar52 * dStack_170 - dVar58 * local_168) + dStack_160 * dVar57 + dVar46 +
                     local_158;
          pdVar18[1] = (local_168 * dVar57 - local_178 * dVar52) + dStack_160 * dVar58 + dVar51 +
                       local_150;
          *(double *)(lVar24 + 0x40 + lVar28) =
               dVar52 * dStack_160 + dVar31 + (dVar58 * local_178 - dVar57 * dStack_170) + local_148
          ;
          lVar29 = lVar29 + 0x50;
          lVar28 = lVar28 + 0x50;
        } while ((longlong)iVar17 * 0x50 != lVar28);
        lVar24 = *(longlong *)(param_1 + 0x838);
      }
      if ((longlong)*(int *)(lVar24 + 0x60) != 0) {
        lVar29 = *(longlong *)(lVar24 + 0x58);
        lVar24 = (longlong)*(int *)(lVar24 + 0x60) * 0x68;
        pdVar18 = (double *)(lVar29 + 0x40);
        uVar73 = 0;
        uVar74 = 0x3ff00000;
        uVar75 = 0;
        uVar76 = 0x3ff00000;
        do {
          cVar5 = *(char *)(param_1 + 0x844);
          if (cVar5 == '\0') {
            pdVar19 = (double *)(lVar29 + 0x30);
          }
          else if (cVar5 == '\x02') {
            pdVar19 = (double *)(lVar29 + 0x40);
          }
          else {
            pdVar19 = pdVar18;
            if (cVar5 == '\x01') {
              pdVar19 = (double *)(lVar29 + 0x38);
            }
          }
          FUN_147a29b10(param_1,&local_2f8,(float)*pdVar19);
          pdVar18[-2] = local_370 * pdVar18[-2];
          pdVar18[-1] = local_378 * pdVar18[-1];
          *pdVar18 = local_390 * *pdVar18;
          pdVar19 = pdVar18 + 1;
          pdVar23 = pdVar19;
          uVar16 = FUN_144a7484c(pdVar19,&local_178);
          local_388._8_8_ = dStack_160;
          local_388._0_8_ = local_168;
          local_3c8 = pdVar18[-2];
          dStack_3c0 = pdVar18[-1];
          local_358 = *pdVar18;
          dVar39 = local_2b8._0_8_;
          uVar61 = local_2b8._0_4_;
          uVar62 = local_2b8._4_4_;
          dVar44 = local_2b8._8_8_;
          uVar63 = local_2b8._8_4_;
          uVar64 = local_2b8._12_4_;
          dVar65 = local_2a8._0_8_;
          uVar67 = local_2a8._0_4_;
          uVar68 = local_2a8._4_4_;
          uVar30 = local_2a8._8_8_;
          auVar60._4_4_ = uVar74;
          auVar60._0_4_ = uVar73;
          auVar60._12_4_ = uVar76;
          auVar60._8_4_ = uVar75;
          auVar48 = minpd(auVar60,local_2b8);
          auVar47 = minpd(ZEXT816(0x3ff0000000000000),local_2a8);
          auVar41._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
          auVar41._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
          iVar17 = movmskpd(uVar16,auVar41);
          auVar42._8_8_ = -(ulonglong)(auVar47._8_8_ < 0.0);
          auVar42._0_8_ = -(ulonglong)(auVar47._0_8_ < 0.0);
          uVar22 = movmskpd((int)pdVar23,auVar42);
          dVar52 = (double)CONCAT44(uVar74,uVar73);
          dVar58 = (double)CONCAT44(uVar76,uVar75);
          dStack_340 = 0.0;
          local_368._0_4_ = 0;
          local_368._4_4_ = 0;
          uStack_360._0_4_ = 0;
          uStack_360._4_4_ = 0x3ff00000;
          local_3b8 = local_178;
          dStack_3b0 = dStack_170;
          uStack_350 = 0x3ff0000000000000;
          local_3a8._8_8_ = local_178;
          local_3a8._0_8_ = local_178;
          local_338._8_4_ = SUB84(dStack_160,0);
          local_338._0_8_ = dStack_160;
          local_338._12_4_ = (int)((ulonglong)dStack_160 >> 0x20);
          local_348 = local_358;
          if ((uVar22 & 0x3fffffff) == 0 && iVar17 == 0) {
            dVar46 = dStack_170 * local_2e8 * -1.0 +
                     local_168 * dStack_2f0 + dStack_160 * local_2f8 * 1.0 + local_178 * dStack_2e0;
            dVar51 = local_178 * local_2e8 * 1.0 +
                     dStack_160 * dStack_2f0 +
                     local_168 * local_2f8 * -1.0 + dStack_170 * dStack_2e0;
            auVar49._0_8_ =
                 dStack_160 * local_2e8 * 1.0 +
                 ((local_2f8 * dStack_170 * 1.0 + dStack_2e0 * local_168) - dStack_2f0 * local_178);
            auVar49._8_8_ =
                 local_168 * local_2e8 * -1.0 +
                 ((local_2f8 * local_178 * -1.0 + dStack_2e0 * dStack_160) - dStack_2f0 * dStack_170
                 );
            uVar73 = 0;
            dVar52 = dVar39;
            dVar58 = dVar44;
            dVar31 = dVar65;
          }
          else {
            dVar31 = dStack_2f0 + dStack_2f0;
            dVar46 = local_2e8 + local_2e8;
            dVar57 = local_2f8 * (local_2f8 + local_2f8);
            local_1f8 = (dVar52 - (local_2e8 * dVar46 + dStack_2f0 * dVar31)) * dVar39;
            dStack_1d0 = (dVar58 - (local_2e8 * dVar46 + dVar57)) * dVar44;
            dVar51 = (local_2f8 + local_2f8) * dStack_2e0;
            local_1d8 = (dVar31 * local_2f8 - dVar46 * dStack_2e0) * dVar44;
            dStack_1b0 = (dVar46 * dStack_2f0 - dVar51) * dVar65;
            local_1b8 = (dVar31 * dStack_2e0 + local_2f8 * dVar46) * dVar65;
            dStack_1f0 = (dVar31 * local_2f8 + dVar46 * dStack_2e0) * dVar39;
            local_1c8 = (dVar46 * dStack_2f0 + dVar51) * dVar44;
            local_1a8 = (1.0 - (dVar57 + dStack_2f0 * dVar31)) * dVar65;
            local_1e8 = (local_2f8 * dVar46 - dVar31 * dStack_2e0) * dVar39;
            uStack_1e0 = 0;
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = local_2d8;
            dStack_190 = dStack_2d0;
            local_188 = local_2c8;
            uStack_180 = 0x3ff0000000000000;
            dVar31 = dStack_170 + dStack_170;
            dVar51 = local_168 + local_168;
            dVar46 = local_178 * (local_178 + local_178);
            local_278 = dVar52 - (local_168 * dVar51 + dStack_170 * dVar31);
            dStack_250 = dVar58 - (local_168 * dVar51 + dVar46);
            local_228 = 1.0 - (dVar46 + dStack_170 * dVar31);
            dStack_230 = (local_178 + local_178) * dStack_160;
            dStack_270 = dVar31 * local_178 + dVar51 * dStack_160;
            local_248 = dVar51 * dStack_170 + dStack_230;
            local_258 = dVar31 * local_178 - dVar51 * dStack_160;
            dStack_230 = dVar51 * dStack_170 - dStack_230;
            local_238 = dVar31 * dStack_160 + local_178 * dVar51;
            local_268 = local_178 * dVar51 - dVar31 * dStack_160;
            uStack_260 = 0;
            uStack_240 = 0;
            uStack_220 = 0;
            uStack_200 = 0x3ff0000000000000;
            local_218 = local_3c8;
            dStack_210 = dStack_3c0;
            local_208 = local_358;
            FUN_1447fea8d(&local_178,&local_278,&local_1f8);
            FUN_144a1c686(&local_178,0x3e45798ee0000000);
            auVar32._8_8_ = -(ulonglong)(0.0 <= dVar44);
            auVar32._0_8_ = -(ulonglong)(0.0 <= dVar39);
            auVar10._8_4_ = uVar75;
            auVar10._0_8_ = dVar52;
            auVar10._12_4_ = uVar76;
            auVar48 = blendvpd(_DAT_149936790,auVar10,auVar32);
            uVar30 = -(ulonglong)(0.0 <= dVar65 * 1.0);
            dVar31 = (double)(~uVar30 & 0xbff0000000000000 | uVar30 & 0x3ff0000000000000);
            dVar46 = auVar48._0_8_;
            local_168 = local_168 * dVar46;
            dStack_170 = dStack_170 * dVar46;
            local_178 = local_178 * dVar46;
            dVar46 = auVar48._8_8_;
            local_148 = local_148 * dVar46;
            local_150 = local_150 * dVar46;
            local_158 = dVar46 * local_158;
            local_128 = local_128 * dVar31;
            dStack_130 = dStack_130 * dVar31;
            local_138 = dVar31 * local_138;
            pdVar23 = &local_298;
            iVar17 = FUN_14481fd10(&local_298,&local_178);
            uVar73 = SUB84(pdVar23,0);
            dVar31 = local_288 * local_288 + local_298 * local_298;
            dVar46 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
            auVar43._0_8_ = dVar31 + dVar46;
            auVar43._8_8_ = dVar31 + dVar46;
            auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_);
            auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_);
            auVar48 = sqrtpd(auVar43,auVar43);
            auVar53._8_8_ = dVar58;
            auVar53._0_8_ = dVar52;
            auVar48 = divpd(auVar53,auVar48);
            auVar54._0_8_ = auVar48._0_8_ * local_288;
            auVar54._8_8_ = auVar48._8_8_ * dStack_280;
            dVar46 = (double)((ulonglong)(local_298 * auVar48._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_));
            dVar51 = (double)((ulonglong)(dStack_290 * auVar48._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_));
            auVar49 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar54,auVar33);
            uVar61 = local_2b8._0_4_;
            uVar62 = local_2b8._4_4_;
            uVar63 = local_2b8._8_4_;
            uVar64 = local_2b8._12_4_;
            uVar67 = local_2a8._0_4_;
            uVar68 = local_2a8._4_4_;
            uVar30 = local_2a8._8_8_;
            auVar34._8_8_ = dVar58;
            auVar34._0_8_ = dVar52;
            auVar48 = minpd(auVar34,local_2b8);
            auVar47 = minpd(ZEXT816(0x3ff0000000000000),local_2a8);
            dVar52 = local_2b8._0_8_;
            dVar58 = local_2b8._8_8_;
            dVar31 = local_2a8._0_8_;
          }
          dVar77 = (double)*(float *)((longlong)pdVar18 + 0x24) * dVar65 * 1.0;
          dVar39 = dVar39 * 0.0;
          dVar44 = dVar44 * 0.0;
          dVar78 = auVar49._8_8_;
          dVar57 = auVar49._0_8_;
          dVar65 = dVar44 * dVar46 - dVar39 * dVar51;
          dVar66 = dVar77 * dVar51 - dVar44 * dVar57;
          dVar69 = dVar39 * dVar57 - dVar46 * dVar77;
          dVar66 = dVar66 + dVar66;
          dVar69 = dVar69 + dVar69;
          dVar65 = dVar65 + dVar65;
          dVar77 = dVar78 * dVar65 + dVar77 + (dVar69 * dVar46 - dVar66 * dVar51);
          dVar39 = (dVar65 * dVar51 - dVar69 * dVar57) + dVar78 * dVar66 + dVar39;
          dVar65 = (dVar57 * dVar66 - dVar46 * dVar65) + dVar78 * dVar69 + dVar44;
          *(float *)((longlong)pdVar18 + 0x24) =
               (float)SQRT(dVar77 * dVar77 + dVar39 * dVar39 + dVar65 * dVar65);
          auVar59._0_8_ = ABS(dVar52);
          auVar59._8_8_ = ABS(dVar58);
          auVar55._0_8_ = ABS(dVar31);
          auVar9._24_8_ = uVar30 & 0x7fffffffffffffff;
          auVar9._16_8_ = auVar55._0_8_;
          auVar9._0_16_ = auVar59;
          auVar55._8_8_ = auVar59._0_8_;
          auVar60 = maxpd(auVar59,auVar9._8_16_);
          auVar60 = maxpd(auVar60,auVar55);
          *(float *)(pdVar18 + 4) = (float)auVar60._0_8_ * *(float *)(pdVar18 + 4);
          auVar60 = _DAT_149934d80;
          auVar35._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
          auVar35._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
          iVar17 = movmskpd(iVar17,auVar35);
          auVar38._8_8_ = -(ulonglong)(auVar47._8_8_ < 0.0);
          auVar38._0_8_ = -(ulonglong)(auVar47._0_8_ < 0.0);
          uVar22 = movmskpd(uVar73,auVar38);
          if ((uVar22 & 0x3fffffff) == 0 && iVar17 == 0) {
            local_178 = dStack_3b0 * local_2e8 * -1.0 +
                        (double)local_388._0_8_ * dStack_2f0 +
                        (double)local_388._8_8_ * local_2f8 * 1.0 + local_3b8 * dStack_2e0;
            dStack_170 = local_3b8 * local_2e8 * 1.0 +
                         (double)local_388._8_8_ * dStack_2f0 +
                         (double)local_388._0_8_ * local_2f8 * -1.0 + dStack_3b0 * dStack_2e0;
            auVar71._0_8_ =
                 (double)local_388._8_8_ * local_2e8 * 1.0 +
                 ((local_2f8 * dStack_3b0 * 1.0 + (double)local_388._0_8_ * dStack_2e0) -
                 local_3b8 * dStack_2f0);
            auVar71._8_8_ =
                 (double)local_388._0_8_ * local_2e8 * -1.0 +
                 ((local_2f8 * local_3b8 * -1.0 + (double)local_388._8_8_ * dStack_2e0) -
                 dStack_3b0 * dStack_2f0);
            dVar65 = local_3c8 * (double)CONCAT44(uVar62,uVar61);
            dVar44 = dStack_3c0 * (double)CONCAT44(uVar64,uVar63);
            dVar52 = local_348 * (double)CONCAT44(uVar68,uVar67);
            dVar39 = dVar44 * local_2f8 - dVar65 * dStack_2f0;
            dVar58 = dVar52 * dStack_2f0 - dVar44 * local_2e8;
            dVar31 = dVar65 * local_2e8 - dVar52 * local_2f8;
            dVar58 = dVar58 + dVar58;
            dVar31 = dVar31 + dVar31;
            dVar39 = dVar39 + dVar39;
            dVar65 = (dVar39 * dStack_2f0 - local_2e8 * dVar31) + dStack_2e0 * dVar58 + dVar65 +
                     local_2d8;
            dVar44 = (dVar58 * local_2e8 - dVar39 * local_2f8) + dStack_2e0 * dVar31 + dVar44 +
                     dStack_2d0;
            dVar39 = (dVar31 * local_2f8 - dStack_2f0 * dVar58) + dStack_2e0 * dVar39 + dVar52 +
                     local_2c8;
            uVar73 = 0;
            uVar74 = 0x3ff00000;
            uVar75 = 0;
            uVar76 = 0x3ff00000;
          }
          else {
            dVar39 = dStack_2f0 + dStack_2f0;
            dVar65 = local_2e8 + local_2e8;
            dVar52 = local_2f8 * (local_2f8 + local_2f8);
            uVar73 = (undefined4)DAT_149934d80;
            uVar74 = DAT_149934d80._4_4_;
            uVar75 = DAT_149934d80._8_4_;
            uVar76 = DAT_149934d80._12_4_;
            local_1f8 = ((double)DAT_149934d80 - (local_2e8 * dVar65 + dStack_2f0 * dVar39)) *
                        (double)CONCAT44(uVar62,uVar61);
            dStack_1d0 = (DAT_149934d80._8_8_ - (local_2e8 * dVar65 + dVar52)) *
                         (double)CONCAT44(uVar64,uVar63);
            dVar44 = (local_2f8 + local_2f8) * dStack_2e0;
            local_1d8 = (dVar39 * local_2f8 - dVar65 * dStack_2e0) * (double)CONCAT44(uVar64,uVar63)
            ;
            dStack_1b0 = (dVar65 * dStack_2f0 - dVar44) * (double)CONCAT44(uVar68,uVar67);
            local_1b8 = (dVar39 * dStack_2e0 + local_2f8 * dVar65) * (double)CONCAT44(uVar68,uVar67)
            ;
            dStack_1f0 = (dVar39 * local_2f8 + dVar65 * dStack_2e0) *
                         (double)CONCAT44(uVar62,uVar61);
            local_1c8 = (dVar65 * dStack_2f0 + dVar44) * (double)CONCAT44(uVar64,uVar63);
            local_1e8 = (local_2f8 * dVar65 - dVar39 * dStack_2e0) * (double)CONCAT44(uVar62,uVar61)
            ;
            uStack_1e0 = 0;
            uStack_1c0 = 0;
            local_1a8 = (1.0 - (dVar52 + dStack_2f0 * dVar39)) * (double)CONCAT44(uVar68,uVar67);
            uStack_1a0 = 0;
            local_198 = local_2d8;
            dStack_190 = dStack_2d0;
            local_188 = local_2c8;
            uStack_180 = 0x3ff0000000000000;
            dVar39 = dStack_3b0 + dStack_3b0;
            dVar44 = (double)local_388._0_8_ + (double)local_388._0_8_;
            dVar65 = local_3b8 * (local_3b8 + local_3b8);
            local_278 = (double)DAT_149934d80 -
                        ((double)local_388._0_8_ * dVar44 + dStack_3b0 * dVar39);
            dStack_250 = DAT_149934d80._8_8_ - ((double)local_388._0_8_ * dVar44 + dVar65);
            local_228 = 1.0 - (dVar65 + dStack_3b0 * dVar39);
            dStack_230 = (local_3b8 + local_3b8) * (double)local_338._8_8_;
            dStack_270 = dVar39 * local_3b8 + dVar44 * (double)local_338._0_8_;
            local_248 = dVar44 * dStack_3b0 + dStack_230;
            local_258 = dVar39 * local_3b8 - dVar44 * (double)local_338._0_8_;
            dStack_230 = dVar44 * dStack_3b0 - dStack_230;
            local_238 = dVar39 * (double)local_338._0_8_ + (double)local_3a8._0_8_ * dVar44;
            local_268 = (double)local_3a8._0_8_ * dVar44 - dVar39 * (double)local_338._0_8_;
            uStack_260 = 0;
            uStack_240 = 0;
            uStack_220 = 0;
            local_218 = local_3c8;
            dStack_210 = dStack_3c0;
            local_208 = local_358;
            uStack_200 = uStack_350;
            FUN_1447fea8d(&local_178,&local_278,&local_1f8);
            FUN_144a1c686(&local_178,0x3e45798ee0000000);
            auVar36._8_8_ = -(ulonglong)(0.0 <= (double)CONCAT44(uVar64,uVar63));
            auVar36._0_8_ = -(ulonglong)(0.0 <= (double)CONCAT44(uVar62,uVar61));
            auVar48 = blendvpd(_DAT_149936790,auVar60,auVar36);
            uVar30 = -(ulonglong)(0.0 <= (double)CONCAT44(uVar68,uVar67));
            dVar39 = (double)(~uVar30 & 0xbff0000000000000 | uVar30 & 0x3ff0000000000000);
            dVar65 = auVar48._0_8_;
            local_168 = local_168 * dVar65;
            dStack_170 = dStack_170 * dVar65;
            local_178 = local_178 * dVar65;
            dVar65 = auVar48._8_8_;
            local_148 = local_148 * dVar65;
            local_150 = local_150 * dVar65;
            local_158 = dVar65 * local_158;
            local_128 = local_128 * dVar39;
            dStack_130 = dStack_130 * dVar39;
            local_138 = dVar39 * local_138;
            FUN_14481fd10(&local_298,&local_178);
            dVar39 = local_288 * local_288 + local_298 * local_298;
            dVar65 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
            auVar50._0_8_ = dVar39 + dVar65;
            auVar50._8_8_ = dVar39 + dVar65;
            auVar37._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_);
            auVar37._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_);
            auVar48 = sqrtpd(auVar50,auVar50);
            auVar48 = divpd(auVar60,auVar48);
            auVar56._0_8_ = auVar48._0_8_ * local_288;
            auVar56._8_8_ = auVar48._8_8_ * dStack_280;
            local_178 = (double)((ulonglong)(local_298 * auVar48._0_8_) &
                                -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_));
            dStack_170 = (double)((ulonglong)(dStack_290 * auVar48._8_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_));
            auVar13._4_4_ = local_368._4_4_;
            auVar13._0_4_ = (undefined4)local_368;
            auVar13._8_4_ = (undefined4)uStack_360;
            auVar13._12_4_ = uStack_360._4_4_;
            auVar71 = blendvpd(auVar13,auVar56,auVar37);
            dVar39 = local_108;
            dVar65 = local_118;
            dVar44 = dStack_110;
          }
          local_168 = auVar71._0_8_;
          dStack_160 = auVar71._8_8_;
          FUN_1448052ee(&local_178,&local_1f8);
          pdVar18[3] = local_1e8;
          *pdVar19 = local_1f8;
          pdVar18[2] = dStack_1f0;
          pdVar18[-2] = dVar65;
          pdVar18[-1] = dVar44;
          *pdVar18 = dVar39;
          lVar29 = lVar29 + 0x68;
          pdVar18 = pdVar18 + 0xd;
          lVar24 = lVar24 + -0x68;
        } while (lVar24 != 0);
        lVar24 = *(longlong *)(param_1 + 0x838);
      }
      lVar29 = *(longlong *)(lVar24 + 0x48);
      if ((longlong)*(int *)(lVar24 + 0x50) == 0) {
        uVar73 = 0;
      }
      else {
        lVar24 = (longlong)*(int *)(lVar24 + 0x50) * 0x70;
        lVar29 = lVar29 + 0x48;
        do {
          lVar20 = FUN_1474ad786(*(longlong *)(param_1 + 0x838) + 0x68);
          *(undefined1 *)(lVar20 + 0x19) = *(undefined1 *)(lVar29 + -0x2f);
          fVar2 = *(float *)(lVar29 + 0x20);
          fVar3 = *(float *)(lVar29 + 0x1c);
          fVar4 = *(float *)(lVar29 + 0x18);
          FUN_144a7484c(lVar29,&local_178);
          dVar52 = dStack_160;
          dVar44 = local_168;
          dVar65 = dStack_170;
          dVar39 = local_178;
          uVar6 = *(undefined8 *)(lVar29 + -8);
          local_3c8 = *(double *)(lVar29 + -0x18);
          dStack_3c0 = *(double *)(lVar29 + -0x10);
          lVar28 = lVar20 + 0x30;
          *(undefined4 *)(lVar20 + 0x38) = 0;
          iVar17 = 0;
          uVar22 = 8;
          if (*(int *)(lVar20 + 0x3c) != 8) {
            FUN_1447a8aa0(lVar28,8);
            iVar17 = *(int *)(lVar20 + 0x38);
            uVar22 = *(uint *)(lVar20 + 0x3c);
          }
          local_388._0_8_ = uVar6;
          *(uint *)(lVar20 + 0x38) = iVar17 + 1U;
          if (uVar22 < iVar17 + 1U) {
            FUN_1403e3958(lVar28,iVar17);
          }
          dVar58 = (double)(fVar2 * 0.5);
          auVar12._8_4_ = 0;
          auVar12._0_8_ = dVar58;
          local_328 = (double)(fVar3 * 0.5);
          local_338._0_8_ = (undefined8)(fVar4 * 0.5);
          if (dVar58 <= 1.0) {
            auVar12 = ZEXT812(0x3ff0000000000000);
          }
          local_3a8._12_4_ = 0;
          local_3a8._0_12_ = auVar12;
          if (local_328 <= 1.0) {
            local_328 = 1.0;
          }
          if ((double)local_338._0_8_ <= 1.0) {
            local_338._0_8_ = 1.0;
          }
          local_368 = -auVar12._0_8_;
          uStack_320 = 0;
          dVar58 = -local_328;
          local_338._8_8_ = 0;
          dVar78 = -(double)local_338._0_8_;
          uStack_360._0_4_ = 0;
          uStack_360._4_4_ = 0;
          local_3b8 = dVar39;
          dStack_3b0 = dVar52;
          local_308 = local_368 * dVar39;
          dStack_300 = dVar52 * 0.0;
          dVar31 = dVar58 * dVar39 - dVar65 * dVar78;
          dVar46 = local_368 * dVar65 - dVar44 * dVar58;
          dVar57 = dVar78 * dVar44 - local_308;
          dVar46 = dVar46 + dVar46;
          dVar51 = dVar57 + dVar57;
          dVar31 = dVar31 + dVar31;
          local_348 = dVar65;
          dStack_340 = dVar44;
          lVar7 = *(longlong *)(lVar20 + 0x30);
          pdVar18 = (double *)(lVar7 + (longlong)iVar17 * 0x18);
          *pdVar18 = (dVar31 * dVar65 - dVar51 * dVar44) + dVar52 * dVar46 + dVar78 + local_3c8;
          pdVar18[1] = (dVar44 * dVar46 - dVar39 * dVar31) + dVar52 * dVar51 + dVar58 + dStack_3c0;
          *(double *)(lVar7 + 0x10 + (longlong)iVar17 * 0x18) =
               (dVar31 * dVar52 - auVar12._0_8_) + (dVar51 * dVar39 - dVar46 * dVar65) +
               (double)local_388._0_8_;
          iVar17 = *(int *)(lVar20 + 0x38);
          *(uint *)(lVar20 + 0x38) = iVar17 + 1U;
          if (*(uint *)(lVar20 + 0x3c) < iVar17 + 1U) {
            FUN_1403e3958(lVar28,iVar17);
          }
          local_358 = (double)local_3a8._0_8_;
          uStack_350 = 0;
          local_318 = (double)local_3a8._0_8_ * local_3b8;
          dStack_310 = dStack_3b0 * 0.0;
          dVar31 = dVar58 * dVar39 - dVar65 * dVar78;
          dVar46 = (double)local_3a8._0_8_ * dVar65 - dVar44 * dVar58;
          dVar66 = dVar78 * dVar44 - local_318;
          dVar46 = dVar46 + dVar46;
          dVar51 = dVar66 + dVar66;
          dVar31 = dVar31 + dVar31;
          lVar7 = *(longlong *)(lVar20 + 0x30);
          pdVar18 = (double *)(lVar7 + (longlong)iVar17 * 0x18);
          *pdVar18 = (dVar31 * dVar65 - dVar51 * dStack_340) + dVar52 * dVar46 + dVar78 + local_3c8;
          pdVar18[1] = (dVar44 * dVar46 - local_3b8 * dVar31) + dVar52 * dVar51 + dVar58 +
                       dStack_3c0;
          *(double *)(lVar7 + 0x10 + (longlong)iVar17 * 0x18) =
               dVar31 * dVar52 + (double)local_3a8._0_8_ + (dVar51 * dVar39 - dVar46 * local_348) +
               (double)local_388._0_8_;
          iVar17 = *(int *)(lVar20 + 0x38);
          *(uint *)(lVar20 + 0x38) = iVar17 + 1U;
          if (*(uint *)(lVar20 + 0x3c) < iVar17 + 1U) {
            FUN_1403e3958(lVar28,iVar17);
          }
          dVar77 = local_328;
          dVar69 = dStack_340;
          dVar51 = local_348;
          dVar70 = local_328 * dVar39;
          dVar72 = local_368 * dVar65;
          dVar31 = local_348 * dVar78;
          dVar46 = dStack_340 * local_328;
          dVar40 = dVar70 - dVar31;
          dVar45 = dVar72 - dVar46;
          dVar45 = dVar45 + dVar45;
          dVar57 = dVar57 + dVar57;
          dVar40 = dVar40 + dVar40;
          lVar7 = *(longlong *)(lVar20 + 0x30);
          pdVar18 = (double *)(lVar7 + (longlong)iVar17 * 0x18);
          *pdVar18 = (dVar40 * dVar65 - dVar57 * dStack_340) + dVar52 * dVar45 + dVar78 + local_3c8;
          pdVar18[1] = (dVar44 * dVar45 - local_3b8 * dVar40) + dVar52 * dVar57 + local_328 +
                       dStack_3c0;
          *(double *)(lVar7 + 0x10 + (longlong)iVar17 * 0x18) =
               (dVar40 * dVar52 - (double)local_3a8._0_8_) + (dVar57 * dVar39 - dVar45 * local_348)
               + (double)local_388._0_8_;
          iVar17 = *(int *)(lVar20 + 0x38);
          *(uint *)(lVar20 + 0x38) = iVar17 + 1U;
          if (*(uint *)(lVar20 + 0x3c) < iVar17 + 1U) {
            FUN_1403e3958(lVar28,iVar17);
          }
          dVar31 = dVar77 * dVar39 - dVar31;
          dVar46 = local_358 * dVar65 - dVar46;
          dVar46 = dVar46 + dVar46;
          dVar66 = dVar66 + dVar66;
          dVar31 = dVar31 + dVar31;
          uVar6 = local_388._0_8_;
          lVar7 = *(longlong *)(lVar20 + 0x30);
          pdVar18 = (double *)(lVar7 + (longlong)iVar17 * 0x18);
          *pdVar18 = (dVar31 * dVar65 - dVar66 * dVar69) + dVar52 * dVar46 + dVar78 + local_3c8;
          pdVar18[1] = (dVar44 * dVar46 - local_3b8 * dVar31) + dVar52 * dVar66 + dVar77 +
                       dStack_3c0;
          *(double *)(lVar7 + 0x10 + (longlong)iVar17 * 0x18) =
               dVar31 * dVar52 + (double)local_3a8._0_8_ + (dVar66 * dVar39 - dVar46 * dVar51) +
               (double)local_388._0_8_;
          iVar17 = *(int *)(lVar20 + 0x38);
          *(uint *)(lVar20 + 0x38) = iVar17 + 1U;
          if (*(uint *)(lVar20 + 0x3c) < iVar17 + 1U) {
            FUN_1403e3958(lVar28,iVar17);
          }
          uVar21 = local_338._0_8_;
          dVar31 = dVar51 * (double)local_338._0_8_;
          dVar46 = dVar58 * dVar39 - dVar31;
          dVar57 = local_368 * dVar65 - dVar69 * dVar58;
          local_368 = (double)local_338._0_8_ * dVar44 - local_308;
          uStack_360 = (double)CONCAT44(uStack_360._4_4_,(undefined4)uStack_360) * dVar52 -
                       dStack_300;
          dVar57 = dVar57 + dVar57;
          dVar78 = local_368 + local_368;
          dVar46 = dVar46 + dVar46;
          lVar7 = *(longlong *)(lVar20 + 0x30);
          pdVar18 = (double *)(lVar7 + (longlong)iVar17 * 0x18);
          *pdVar18 = (dVar46 * dVar65 - dVar78 * dVar69) + dVar52 * dVar57 + (double)local_338._0_8_
                     + local_3c8;
          pdVar18[1] = (dVar44 * dVar57 - local_3b8 * dVar46) + dVar52 * dVar78 + dVar58 +
                       dStack_3c0;
          *(double *)(lVar7 + 0x10 + (longlong)iVar17 * 0x18) =
               (dVar46 * dVar52 - (double)local_3a8._0_8_) + (dVar78 * dVar39 - dVar57 * dVar51) +
               (double)uVar6;
          iVar17 = *(int *)(lVar20 + 0x38);
          *(uint *)(lVar20 + 0x38) = iVar17 + 1U;
          if (*(uint *)(lVar20 + 0x3c) < iVar17 + 1U) {
            FUN_1403e3958(lVar28,iVar17);
          }
          uVar15 = local_338._0_8_;
          dVar31 = dVar58 * dVar39 - dVar31;
          dVar46 = local_358 * dVar65 - dVar69 * dVar58;
          dVar78 = (double)local_338._0_8_ * dVar44 - local_318;
          dVar46 = dVar46 + dVar46;
          dVar57 = dVar78 + dVar78;
          dVar31 = dVar31 + dVar31;
          lVar7 = *(longlong *)(lVar20 + 0x30);
          pdVar18 = (double *)(lVar7 + (longlong)iVar17 * 0x18);
          *pdVar18 = (dVar31 * dVar65 - dVar57 * dVar69) + dVar52 * dVar46 + (double)uVar21 +
                     local_3c8;
          pdVar18[1] = (dVar44 * dVar46 - local_3b8 * dVar31) + dVar52 * dVar57 + dVar58 +
                       dStack_3c0;
          *(double *)(lVar7 + 0x10 + (longlong)iVar17 * 0x18) =
               dVar31 * dVar52 + (double)local_3a8._0_8_ + (dVar57 * dVar39 - dVar46 * dVar51) +
               (double)uVar6;
          iVar17 = *(int *)(lVar20 + 0x38);
          *(uint *)(lVar20 + 0x38) = iVar17 + 1U;
          if (*(uint *)(lVar20 + 0x3c) < iVar17 + 1U) {
            FUN_1403e3958(lVar28,iVar17);
          }
          dVar31 = local_328;
          dVar58 = dVar69 * local_328;
          dVar70 = dVar70 - dVar51 * (double)uVar15;
          dVar72 = dVar72 - dVar58;
          dVar72 = dVar72 + dVar72;
          dVar46 = local_368 + local_368;
          dVar70 = dVar70 + dVar70;
          lVar7 = *(longlong *)(lVar20 + 0x30);
          pdVar18 = (double *)(lVar7 + (longlong)iVar17 * 0x18);
          *pdVar18 = (dVar70 * dVar65 - dVar46 * dVar69) + dVar52 * dVar72 + (double)uVar15 +
                     local_3c8;
          pdVar18[1] = (dVar44 * dVar72 - local_3b8 * dVar70) + dVar52 * dVar46 + local_328 +
                       dStack_3c0;
          *(double *)(lVar7 + 0x10 + (longlong)iVar17 * 0x18) =
               (dVar70 * dVar52 - (double)local_3a8._0_8_) + (dVar46 * dVar39 - dVar72 * dVar51) +
               (double)uVar6;
          iVar17 = *(int *)(lVar20 + 0x38);
          *(uint *)(lVar20 + 0x38) = iVar17 + 1U;
          if (*(uint *)(lVar20 + 0x3c) < iVar17 + 1U) {
            FUN_1403e3958(lVar28,iVar17);
          }
          dVar46 = dVar31 * dVar39 - dVar51 * (double)uVar15;
          dVar58 = local_358 * dVar65 - dVar58;
          dVar58 = dVar58 + dVar58;
          dVar78 = dVar78 + dVar78;
          dVar46 = dVar46 + dVar46;
          lVar28 = *(longlong *)(lVar20 + 0x30);
          pdVar18 = (double *)(lVar28 + (longlong)iVar17 * 0x18);
          *pdVar18 = local_3c8 +
                     (dVar46 * dVar65 - dVar69 * dVar78) + dVar52 * dVar58 + (double)uVar15;
          pdVar18[1] = dStack_3c0 +
                       (dVar44 * dVar58 - local_3b8 * dVar46) + dVar52 * dVar78 + dVar31;
          *(double *)(lVar28 + 0x10 + (longlong)iVar17 * 0x18) =
               (double)uVar6 +
               (double)local_3a8._0_8_ + dVar46 * dVar52 + (dVar78 * dVar39 - dVar51 * dVar58);
          FUN_1479b2c20(lVar20);
          lVar29 = lVar29 + 0x70;
          lVar24 = lVar24 + -0x70;
        } while (lVar24 != 0);
        lVar24 = *(longlong *)(param_1 + 0x838);
        uVar73 = *(undefined4 *)(lVar24 + 0x50);
        lVar29 = *(longlong *)(lVar24 + 0x48);
      }
      FUN_1400d7df1(lVar29,uVar73);
      *(undefined4 *)(lVar24 + 0x50) = 0;
      if (*(int *)(lVar24 + 0x54) != 0) {
        FUN_147a3a81e(lVar24 + 0x48,0);
      }
      lVar24 = (longlong)*(int *)(*(longlong *)(param_1 + 0x838) + 0x70);
      if (lVar24 != 0) {
        lVar29 = *(longlong *)(*(longlong *)(param_1 + 0x838) + 0x68);
        lVar24 = lVar24 * 0x100 + lVar29;
        local_388._0_8_ = local_390;
        local_368._0_4_ = SUB84(local_378,0);
        local_368._4_4_ = (undefined4)((ulonglong)local_378 >> 0x20);
        local_358 = local_370;
        do {
          if ((longlong)*(int *)(lVar29 + 0x38) != 0) {
            dVar52 = *(double *)(lVar29 + 0x90);
            dVar58 = *(double *)(lVar29 + 0x98);
            dVar65 = SUB168(*(undefined1 (*) [16])(lVar29 + 0xa0),0);
            dVar44 = SUB168(*(undefined1 (*) [16])(lVar29 + 0xa0),8);
            local_3c8 = *(double *)(lVar29 + 0xb0);
            dStack_3c0 = *(double *)(lVar29 + 0xb8);
            local_3a8._0_16_ = *(undefined1 (*) [16])(lVar29 + 0xd0);
            local_3b8 = *(double *)(lVar29 + 0xe0);
            dStack_3b0 = *(double *)(lVar29 + 0xe8);
            pauVar25 = *(undefined1 (**) [16])(lVar29 + 0x30);
            pauVar1 = (undefined1 (*) [16])
                      ((longlong)pauVar25 + (longlong)*(int *)(lVar29 + 0x38) * 0x18);
            dVar39 = *(double *)(lVar29 + 0xc0);
            do {
              dVar31 = *(double *)*pauVar25 * (double)local_3a8._0_8_;
              dVar46 = *(double *)(*pauVar25 + 8) * (double)local_3a8._8_8_;
              dVar51 = *(double *)pauVar25[1] * local_3b8;
              dVar57 = dVar46 * dVar52 - dVar58 * dVar31;
              dVar78 = dVar51 * dVar58 - dVar65 * dVar46;
              dVar66 = dVar31 * dVar65 - dVar52 * dVar51;
              dVar78 = dVar78 + dVar78;
              dVar66 = dVar66 + dVar66;
              dVar57 = dVar57 + dVar57;
              dVar31 = (dVar57 * dVar58 - dVar66 * dVar65) + dVar44 * dVar78 + dVar31 + local_3c8;
              dVar46 = (dVar65 * dVar78 - dVar52 * dVar57) + dVar44 * dVar66 + dVar46 + dStack_3c0;
              dVar57 = dVar57 * dVar44 + dVar51 + (dVar66 * dVar52 - dVar78 * dVar58) + dVar39;
              cVar5 = *(char *)(param_1 + 0x844);
              dVar51 = dVar31;
              if (((cVar5 != '\0') && (dVar51 = dVar57, cVar5 != '\x02')) && (cVar5 == '\x01')) {
                dVar51 = dVar46;
              }
              FUN_147a29b10(param_1,&local_178,(float)dVar51);
              dVar78 = local_358 * dVar31 * local_138;
              dVar51 = dVar46 * (double)CONCAT44(local_368._4_4_,(undefined4)local_368) * dStack_130
              ;
              dVar57 = dVar57 * (double)local_388._0_8_ * local_128;
              dVar31 = dVar51 * local_178 - dVar78 * dStack_170;
              dVar66 = dVar57 * dStack_170 - dVar51 * local_168;
              dVar46 = dVar78 * local_168 - local_178 * dVar57;
              dVar66 = dVar66 + dVar66;
              dVar46 = dVar46 + dVar46;
              dVar31 = dVar31 + dVar31;
              dVar51 = (local_168 * dVar66 - local_178 * dVar31) + dStack_160 * dVar46 + dVar51 +
                       local_150;
              auVar11._8_4_ = SUB84(dVar51,0);
              auVar11._0_8_ =
                   (dVar31 * dStack_170 - dVar46 * local_168) + dStack_160 * dVar66 + dVar78 +
                   local_158;
              auVar11._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
              *pauVar25 = auVar11;
              *(double *)pauVar25[1] =
                   dVar31 * dStack_160 + dVar57 + (dVar46 * local_178 - dVar66 * dStack_170) +
                   local_148;
              pauVar25 = (undefined1 (*) [16])(pauVar25[1] + 8);
            } while (pauVar25 != pauVar1);
          }
          FUN_144a78e48(&DAT_14c846480);
          puVar26 = &DAT_14c846480;
          puVar27 = (undefined8 *)(lVar29 + 0x90);
          for (lVar28 = 0xc; lVar28 != 0; lVar28 = lVar28 + -1) {
            *puVar27 = *puVar26;
            puVar26 = puVar26 + 1;
            puVar27 = puVar27 + 1;
          }
          FUN_1479b2c20(lVar29);
          lVar29 = lVar29 + 0x100;
        } while (lVar29 != lVar24);
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x838) + 0x2a0))();
  }
  if ((local_f0 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a2c512 FUN_147a2c512 body=1633 status=ok
// SIG undefined FUN_147a2c512(void)

ulonglong FUN_147a2c512(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  uint uVar9;
  double *pdVar10;
  undefined8 unaff_RBX;
  undefined7 uVar12;
  ulonglong uVar11;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  longlong local_160;
  double local_150 [4];
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  longlong local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar15 = *(longlong *)(param_1 + 0x3b8);
  uVar12 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if ((lVar15 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar15);
    lVar15 = *(longlong *)(param_1 + 0x3b8);
  }
  else if (lVar15 == 0) {
    uVar11 = CONCAT71(uVar12,1);
    goto LAB_147a2c62e;
  }
  if ((lVar15 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar15);
  }
  uVar11 = CONCAT71(uVar12,1);
  if (*(longlong *)(lVar15 + 0x248) != 0) {
    lVar15 = *(longlong *)(param_1 + 0x3b8);
    if ((lVar15 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar15);
    }
    lVar15 = *(longlong *)(lVar15 + 0x248);
    if ((*(uint *)(lVar15 + 0x28) & 3) == 2) {
      local_150[2] = 1.0;
      local_150[1] = 1.0;
      local_150[0] = 1.0;
      cVar1 = *(char *)(param_1 + 0x59c);
      if (cVar1 == '\0') {
        pdVar10 = local_150 + 2;
      }
      else if ((cVar1 == '\x02') || (cVar1 != '\x01')) {
        pdVar10 = local_150;
      }
      else {
        pdVar10 = local_150 + 1;
      }
      *pdVar10 = 0.0;
      local_d8 = 0;
      uStack_d0 = 0;
      iVar8 = *(int *)(lVar15 + 0x58);
      iVar4 = *(int *)(lVar15 + 0x38);
      if (*(int *)(lVar15 + 0x38) <= iVar8) {
        iVar4 = iVar8;
      }
      if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar4);
      }
      if (iVar4 != 0) {
        FUN_1447a8aa0(&local_d8);
        iVar8 = *(int *)(lVar15 + 0x58);
      }
      dVar7 = local_150[2];
      dVar6 = local_150[1];
      dVar5 = local_150[0];
      if (0 < iVar8) {
        lVar13 = 0x10;
        lVar16 = 0;
        do {
          pdVar10 = (double *)(*(longlong *)(lVar15 + 0x50) + -0x10 + lVar13);
          dVar19 = *pdVar10;
          dVar20 = pdVar10[1];
          dVar21 = *(double *)(*(longlong *)(lVar15 + 0x50) + lVar13);
          cVar1 = *(char *)(param_1 + 0x59c);
          dVar23 = dVar19;
          if (((cVar1 != '\0') && (dVar23 = dVar21, cVar1 != '\x02')) && (cVar1 == '\x01')) {
            dVar23 = dVar20;
          }
          FUN_147a29b10(param_1 + -0x2a8,local_150 + 3,(float)dVar23);
          uVar11 = uStack_d0;
          dVar19 = dVar7 * dVar19 * local_f8;
          dVar20 = dVar20 * dVar6 * dStack_f0;
          dVar18 = dVar21 * dVar5 * local_e8;
          dVar21 = dVar20 * local_150[3] - dVar19 * dStack_130;
          dVar22 = dVar18 * dStack_130 - dVar20 * local_128;
          dVar23 = dVar19 * local_128 - local_150[3] * dVar18;
          dVar22 = dVar22 + dVar22;
          dVar23 = dVar23 + dVar23;
          dVar21 = dVar21 + dVar21;
          dVar19 = (dVar21 * dStack_130 - dVar23 * local_128) + dStack_120 * dVar22 + dVar19 +
                   local_118;
          dVar20 = (local_128 * dVar22 - local_150[3] * dVar21) + dStack_120 * dVar23 + dVar20 +
                   dStack_110;
          dVar21 = dVar21 * dStack_120 + dVar18 + (dVar23 * local_150[3] - dVar22 * dStack_130) +
                   local_108;
          lVar14 = (longlong)(int)uStack_d0;
          uVar9 = (int)uStack_d0 + 1;
          uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar9);
          if (uStack_d0._4_4_ < uVar9) {
            FUN_1403e3958(&local_d8,uVar11 & 0xffffffff);
          }
          auVar2._8_4_ = SUB84(dVar20,0);
          auVar2._0_8_ = dVar19;
          auVar2._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
          *(undefined1 (*) [16])(local_d8 + lVar14 * 0x18) = auVar2;
          *(double *)(local_d8 + 0x10 + lVar14 * 0x18) = dVar21;
          lVar16 = lVar16 + 1;
          lVar13 = lVar13 + 0x18;
        } while (lVar16 < *(int *)(lVar15 + 0x58));
      }
      local_168 = *(undefined4 *)(lVar15 + 0x68);
      local_160 = param_1 + -0x68;
      (**(code **)(*param_2 + 0x30))
                (param_2,local_d8,uStack_d0 & 0xffffffff,*(undefined8 *)(lVar15 + 0x60));
      bVar17 = (longlong)uStack_d0 < 0;
      uStack_d0 = uStack_d0 & 0xffffffff00000000;
      if (bVar17) {
        FUN_1447a8aa0(&local_d8,0);
      }
      dVar7 = local_150[2];
      dVar6 = local_150[1];
      dVar5 = local_150[0];
      if (0 < *(int *)(lVar15 + 0x38)) {
        lVar16 = 0x10;
        lVar13 = 0;
        do {
          pdVar10 = (double *)(*(longlong *)(lVar15 + 0x30) + -0x10 + lVar16);
          dVar19 = *pdVar10;
          dVar20 = pdVar10[1];
          dVar21 = *(double *)(*(longlong *)(lVar15 + 0x30) + lVar16);
          cVar1 = *(char *)(param_1 + 0x59c);
          dVar23 = dVar19;
          if (((cVar1 != '\0') && (dVar23 = dVar21, cVar1 != '\x02')) && (cVar1 == '\x01')) {
            dVar23 = dVar20;
          }
          FUN_147a29b10(param_1 + -0x2a8,local_150 + 3,(float)dVar23);
          uVar11 = uStack_d0;
          dVar19 = dVar7 * dVar19 * local_f8;
          dVar20 = dVar20 * dVar6 * dStack_f0;
          dVar18 = dVar21 * dVar5 * local_e8;
          dVar21 = dVar20 * local_150[3] - dVar19 * dStack_130;
          dVar22 = dVar18 * dStack_130 - dVar20 * local_128;
          dVar23 = dVar19 * local_128 - local_150[3] * dVar18;
          dVar22 = dVar22 + dVar22;
          dVar23 = dVar23 + dVar23;
          dVar21 = dVar21 + dVar21;
          dVar19 = (dVar21 * dStack_130 - dVar23 * local_128) + dStack_120 * dVar22 + dVar19 +
                   local_118;
          dVar20 = (local_128 * dVar22 - local_150[3] * dVar21) + dStack_120 * dVar23 + dVar20 +
                   dStack_110;
          dVar21 = dVar21 * dStack_120 + dVar18 + (dVar23 * local_150[3] - dVar22 * dStack_130) +
                   local_108;
          lVar14 = (longlong)(int)uStack_d0;
          uVar9 = (int)uStack_d0 + 1;
          uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar9);
          if (uStack_d0._4_4_ < uVar9) {
            FUN_1403e3958(&local_d8,uVar11 & 0xffffffff);
          }
          auVar3._8_4_ = SUB84(dVar20,0);
          auVar3._0_8_ = dVar19;
          auVar3._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
          *(undefined1 (*) [16])(local_d8 + lVar14 * 0x18) = auVar3;
          *(double *)(local_d8 + 0x10 + lVar14 * 0x18) = dVar21;
          lVar13 = lVar13 + 1;
          lVar16 = lVar16 + 0x18;
        } while (lVar13 < *(int *)(lVar15 + 0x38));
      }
      local_168 = *(undefined4 *)(lVar15 + 0x48);
      local_160 = param_1 + -0x68;
      (**(code **)(*param_2 + 0x30))
                (param_2,local_d8,uStack_d0 & 0xffffffff,*(undefined8 *)(lVar15 + 0x40));
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
      uVar11 = 0;
    }
  }
LAB_147a2c62e:
  if ((local_c0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 147a2cbea FUN_147a2cbea body=319 status=ok
// SIG undefined FUN_147a2cbea(void)

void FUN_147a2cbea(undefined8 *param_1)

{
  FUN_1400d7df1(param_1[2],*(undefined4 *)(param_1 + 3));
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_147a3a81e(param_1 + 2,0);
  }
  FUN_1400d7e1b(param_1[6],*(undefined4 *)(param_1 + 7));
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    FUN_147a387aa(param_1 + 6,0);
  }
  FUN_1400d7df0(param_1[4],*(undefined4 *)(param_1 + 5));
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    FUN_147a3880a(param_1 + 4,0);
  }
  FUN_1400d7df2(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_147a38878(param_1,0);
  }
  FUN_1400d7def(param_1[8],*(undefined4 *)(param_1 + 9));
  *(undefined4 *)(param_1 + 9) = 0;
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    FUN_147a388ea(param_1 + 8,0);
  }
  FUN_1400d7e46(param_1[10],*(undefined4 *)(param_1 + 0xb));
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (*(int *)((longlong)param_1 + 0x5c) != 0) {
    FUN_147a38958(param_1 + 10,0);
  }
  FUN_1400d7df3(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (*(int *)((longlong)param_1 + 0x6c) != 0) {
    FUN_147a389ca(param_1 + 0xc,0);
  }
  FUN_1401842de(param_1);
  return;
}



// FUNCTION 147a2cd2a FUN_147a2cd2a body=225 status=ok
// SIG undefined FUN_147a2cd2a(void)

undefined *** FUN_147a2cd2a(longlong param_1,undefined ***param_2)

{
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined **local_50;
  undefined **local_48;
  undefined1 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a7c084(param_2);
  *param_2 = &PTR_FUN_14a544b40;
  local_30 = param_1;
  if ((*(byte *)(param_1 + 0x845) & 1) == 0) {
    FUN_144a7c084(&local_58);
    local_58 = &PTR_FUN_14a544b40;
    FUN_147a3b038(&local_58,&local_30);
  }
  else {
    FUN_144a7c084(&local_58);
    local_58 = &PTR_FUN_14a544b40;
    FUN_147a3ab8c(&local_58,&local_30);
  }
  if (&local_58 != param_2) {
    (*(code *)(*param_2)[9])(param_2);
    param_2[1] = local_50;
    param_2[2] = local_48;
    *(undefined1 *)(param_2 + 4) = local_38;
    local_38 = 0;
    (*(code *)local_58[9])();
  }
  FUN_1448eac94(&local_58);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2ce0c FUN_147a2ce0c body=93 status=ok
// SIG undefined FUN_147a2ce0c(void)

undefined8 * FUN_147a2ce0c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1;
  FUN_144a7c084(param_2);
  *param_2 = &PTR_FUN_14a544b40;
  FUN_147a3b038(param_2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2ce6a FUN_147a2ce6a body=211 status=ok
// SIG undefined FUN_147a2ce6a(void)

void FUN_147a2ce6a(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  
  if ((param_2 == 0) || ((*(byte *)(param_1 + 0x845) & 1) == 0)) {
    return;
  }
  *(undefined8 *)(param_1 + 0x730) = *(undefined8 *)(param_2 + 0x218);
  uVar4 = *(undefined8 *)(param_2 + 0x210);
  *(undefined8 *)(param_1 + 0x720) = *(undefined8 *)(param_2 + 0x208);
  *(undefined8 *)(param_1 + 0x728) = uVar4;
  *(undefined8 *)(param_1 + 0x788) = *(undefined8 *)(param_2 + 0x230);
  uVar4 = *(undefined8 *)(param_2 + 0x228);
  *(undefined8 *)(param_1 + 0x778) = *(undefined8 *)(param_2 + 0x220);
  *(undefined8 *)(param_1 + 0x780) = uVar4;
  *(undefined8 *)(param_1 + 0x748) = *(undefined8 *)(param_2 + 0x248);
  uVar4 = *(undefined8 *)(param_2 + 0x240);
  *(undefined8 *)(param_1 + 0x738) = *(undefined8 *)(param_2 + 0x238);
  *(undefined8 *)(param_1 + 0x740) = uVar4;
  dVar1 = *(double *)(param_2 + 0x250);
  dVar2 = *(double *)(param_2 + 600);
  dVar3 = *(double *)(param_2 + 0x260);
  if ((*(double *)(param_1 + 0x7a0) == dVar1) && (!NAN(*(double *)(param_1 + 0x7a0)) && !NAN(dVar1))
     ) {
    if ((*(double *)(param_1 + 0x7a8) == dVar2) &&
       (!NAN(*(double *)(param_1 + 0x7a8)) && !NAN(dVar2))) {
      if ((*(double *)(param_1 + 0x7b0) == dVar3) &&
         (!NAN(*(double *)(param_1 + 0x7b0)) && !NAN(dVar3))) goto LAB_147a2cf36;
    }
  }
  *(double *)(param_1 + 0x7a0) = dVar1;
  *(double *)(param_1 + 0x7a8) = dVar2;
  *(double *)(param_1 + 0x7b0) = dVar3;
  *(byte *)(param_1 + 0x845) = *(byte *)(param_1 + 0x845) | 4;
LAB_147a2cf36:
  FUN_14349d006(SUB84(dVar1,0),0);
  return;
}



// FUNCTION 147a2d10e FUN_147a2d10e body=265 status=ok
// SIG undefined FUN_147a2d10e(void)

void FUN_147a2d10e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x845) = *(byte *)(param_1 + 0x845) | 4;
  *(undefined4 *)(param_1 + 0x840) = local_1c;
  if (local_20 != 0) {
    FUN_14349d006(param_1,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2d21e FUN_147a2d21e body=265 status=ok
// SIG undefined FUN_147a2d21e(void)

void FUN_147a2d21e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x845) = *(byte *)(param_1 + 0x845) | 4;
  *(undefined4 *)(param_1 + 0x7e8) = local_1c;
  if (local_20 != 0) {
    FUN_14349d006(param_1,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2d32e FUN_147a2d32e body=255 status=ok
// SIG undefined FUN_147a2d32e(void)

void FUN_147a2d32e(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  int local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x845) = *(byte *)(param_1 + 0x845) | 4;
  *(undefined4 *)(param_1 + 0x7b8) = local_28;
  *(undefined4 *)(param_1 + 0x7bc) = uStack_24;
  *(undefined4 *)(param_1 + 0x7c0) = uStack_20;
  *(undefined4 *)(param_1 + 0x7c4) = uStack_1c;
  if (local_2c != 0) {
    FUN_14349d006(param_1,0);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2d434 FUN_147a2d434 body=267 status=ok
// SIG undefined FUN_147a2d434(void)

void FUN_147a2d434(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [36];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x845) = *(byte *)(param_1 + 0x845) | 4;
  *(undefined8 *)(param_1 + 0x788) = local_20;
  *(undefined4 *)(param_1 + 0x778) = local_30;
  *(undefined4 *)(param_1 + 0x77c) = uStack_2c;
  *(undefined4 *)(param_1 + 0x780) = uStack_28;
  *(undefined4 *)(param_1 + 0x784) = uStack_24;
  if (local_34 != 0) {
    FUN_14349d006(param_1,0);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2d546 FUN_147a2d546 body=265 status=ok
// SIG undefined FUN_147a2d546(void)

void FUN_147a2d546(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x845) = *(byte *)(param_1 + 0x845) | 4;
  *(undefined4 *)(param_1 + 0x764) = local_1c;
  if (local_20 != 0) {
    FUN_14349d006(param_1,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2d656 FUN_147a2d656 body=273 status=ok
// SIG undefined FUN_147a2d656(void)

void FUN_147a2d656(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x845) = *(byte *)(param_1 + 0x845) | 4;
  *(float *)(param_1 + 0x764) = local_1c * 0.017453292;
  if (local_20 != 0) {
    FUN_14349d006(param_1,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2d76e FUN_147a2d76e body=303 status=ok
// SIG undefined FUN_147a2d76e(void)

void FUN_147a2d76e(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  int local_2c;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((*(double *)(param_1 + 0x790) == local_28) &&
     (!NAN(*(double *)(param_1 + 0x790)) && !NAN(local_28))) {
    if ((*(double *)(param_1 + 0x798) == local_20) &&
       (!NAN(*(double *)(param_1 + 0x798)) && !NAN(local_20))) goto LAB_147a2d838;
  }
  *(byte *)(param_1 + 0x845) = *(byte *)(param_1 + 0x845) | 4;
  *(double *)(param_1 + 0x790) = local_28;
  *(double *)(param_1 + 0x798) = local_20;
  if (local_2c != 0) {
    FUN_14349d006(param_1,0);
  }
LAB_147a2d838:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2d8a4 FUN_147a2d8a4 body=333 status=ok
// SIG undefined FUN_147a2d8a4(void)

void FUN_147a2d8a4(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [36];
  int local_34;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((*(double *)(param_1 + 0x7a0) == local_30) &&
     (!NAN(*(double *)(param_1 + 0x7a0)) && !NAN(local_30))) {
    if ((*(double *)(param_1 + 0x7a8) == local_28) &&
       (!NAN(*(double *)(param_1 + 0x7a8)) && !NAN(local_28))) {
      if ((*(double *)(param_1 + 0x7b0) == local_20) &&
         (!NAN(*(double *)(param_1 + 0x7b0)) && !NAN(local_20))) goto LAB_147a2d98c;
    }
  }
  *(byte *)(param_1 + 0x845) = *(byte *)(param_1 + 0x845) | 4;
  *(double *)(param_1 + 0x7a0) = local_30;
  *(double *)(param_1 + 0x7a8) = local_28;
  *(double *)(param_1 + 0x7b0) = local_20;
  if (local_34 != 0) {
    FUN_14349d006(param_1,0);
  }
LAB_147a2d98c:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2d9f8 FUN_147a2d9f8 body=266 status=ok
// SIG undefined FUN_147a2d9f8(void)

void FUN_147a2d9f8(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = '\0';
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(char *)(param_1 + 0x844) != local_19) {
    *(byte *)(param_1 + 0x845) = *(byte *)(param_1 + 0x845) | 4;
    *(char *)(param_1 + 0x844) = local_19;
    if (local_20 != 0) {
      FUN_14349d006(param_1,0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2db0a FUN_147a2db0a body=241 status=ok
// SIG undefined FUN_147a2db0a(void)

void FUN_147a2db0a(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [44];
  int local_3c;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar2 = local_38;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a2837e(param_1,puVar2,local_3c != 0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2dc02 FUN_147a2dc02 body=580 status=ok
// SIG undefined FUN_147a2dc02(void)

void FUN_147a2dc02(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined1 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1446dcc8c();
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
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_108 = &local_98;
  local_88 = local_68;
  local_98 = local_78;
  uStack_90 = uStack_70;
  local_b8 = local_60;
  uStack_b0 = uStack_58;
  local_a8 = local_50;
  local_d8 = local_48;
  uStack_d0 = uStack_40;
  local_c8 = local_38;
  local_f8 = local_30;
  uStack_f4 = uStack_2c;
  uStack_f0 = uStack_28;
  uStack_ec = uStack_24;
  local_e8 = local_20;
  local_100 = local_7c != 0;
  FUN_147a28118(param_1);
  if ((local_18 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2de4e FUN_147a2de4e body=255 status=ok
// SIG undefined FUN_147a2de4e(void)

void FUN_147a2de4e(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  int local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x845) = *(byte *)(param_1 + 0x845) | 4;
  *(undefined4 *)(param_1 + 0x768) = local_28;
  *(undefined4 *)(param_1 + 0x76c) = uStack_24;
  *(undefined4 *)(param_1 + 0x770) = uStack_20;
  *(undefined4 *)(param_1 + 0x774) = uStack_1c;
  if (local_2c != 0) {
    FUN_14349d006(param_1,0);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2df54 FUN_147a2df54 body=267 status=ok
// SIG undefined FUN_147a2df54(void)

void FUN_147a2df54(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [36];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x845) = *(byte *)(param_1 + 0x845) | 4;
  *(undefined8 *)(param_1 + 0x730) = local_20;
  *(undefined4 *)(param_1 + 0x720) = local_30;
  *(undefined4 *)(param_1 + 0x724) = uStack_2c;
  *(undefined4 *)(param_1 + 0x728) = uStack_28;
  *(undefined4 *)(param_1 + 0x72c) = uStack_24;
  if (local_34 != 0) {
    FUN_14349d006(param_1,0);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2e066 FUN_147a2e066 body=265 status=ok
// SIG undefined FUN_147a2e066(void)

void FUN_147a2e066(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x845) = *(byte *)(param_1 + 0x845) | 4;
  *(undefined4 *)(param_1 + 0x760) = local_1c;
  if (local_20 != 0) {
    FUN_14349d006(param_1,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2e176 FUN_147a2e176 body=273 status=ok
// SIG undefined FUN_147a2e176(void)

void FUN_147a2e176(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x845) = *(byte *)(param_1 + 0x845) | 4;
  *(float *)(param_1 + 0x760) = local_1c * 0.017453292;
  if (local_20 != 0) {
    FUN_14349d006(param_1,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2e28e FUN_147a2e28e body=303 status=ok
// SIG undefined FUN_147a2e28e(void)

void FUN_147a2e28e(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  int local_2c;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((*(double *)(param_1 + 0x750) == local_28) &&
     (!NAN(*(double *)(param_1 + 0x750)) && !NAN(local_28))) {
    if ((*(double *)(param_1 + 0x758) == local_20) &&
       (!NAN(*(double *)(param_1 + 0x758)) && !NAN(local_20))) goto LAB_147a2e358;
  }
  *(byte *)(param_1 + 0x845) = *(byte *)(param_1 + 0x845) | 4;
  *(double *)(param_1 + 0x750) = local_28;
  *(double *)(param_1 + 0x758) = local_20;
  if (local_2c != 0) {
    FUN_14349d006(param_1,0);
  }
LAB_147a2e358:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2e3c4 FUN_147a2e3c4 body=267 status=ok
// SIG undefined FUN_147a2e3c4(void)

void FUN_147a2e3c4(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [36];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x845) = *(byte *)(param_1 + 0x845) | 4;
  *(undefined8 *)(param_1 + 0x748) = local_20;
  *(undefined4 *)(param_1 + 0x738) = local_30;
  *(undefined4 *)(param_1 + 0x73c) = uStack_2c;
  *(undefined4 *)(param_1 + 0x740) = uStack_28;
  *(undefined4 *)(param_1 + 0x744) = uStack_24;
  if (local_34 != 0) {
    FUN_14349d006(param_1,0);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2e558 FUN_147a2e558 body=75 status=ok
// SIG undefined FUN_147a2e558(void)

void FUN_147a2e558(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_140a39b3e(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2e5a4 FUN_147a2e5a4 body=140 status=ok
// SIG undefined FUN_147a2e5a4(void)

undefined8 * FUN_147a2e5a4(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x250,0x10);
  puVar1[1] = &DAT_14a898b20;
  puVar1[0x48] = &PTR_FUN_149e38530;
  *(undefined4 *)(puVar1 + 0x49) = 0;
  FUN_147d5a81a(puVar1,param_1,param_2,param_3,0);
  *puVar1 = &PTR_FUN_14a898b30;
  *(undefined ***)((longlong)puVar1 + (longlong)*(int *)(puVar1[1] + 4) + 8) = &PTR_FUN_14a898b90;
  puVar1[0x47] = param_1;
  return puVar1;
}



// FUNCTION 147a2e630 FUN_147a2e630 body=415 status=ok
// SIG undefined FUN_147a2e630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_147a2e630(longlong param_1)

{
  undefined1 auVar1 [32];
  longlong lVar2;
  double dVar3;
  undefined1 auVar4 [16];
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50 [24];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *(longlong *)(param_1 + 0x660);
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
    lVar2 = *(longlong *)(param_1 + 0x660);
  }
  else if (lVar2 == 0) {
    fVar5 = 1.0;
    goto LAB_147a2e741;
  }
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  local_58 = *(undefined8 *)(lVar2 + 0x230);
  local_88 = *(undefined8 *)(lVar2 + 0x200);
  uStack_80 = *(undefined8 *)(lVar2 + 0x208);
  local_78 = *(undefined4 *)(lVar2 + 0x210);
  uStack_74 = *(undefined4 *)(lVar2 + 0x214);
  uStack_70 = *(undefined4 *)(lVar2 + 0x218);
  uStack_6c = *(undefined4 *)(lVar2 + 0x21c);
  local_68 = *(undefined8 *)(lVar2 + 0x220);
  uStack_60 = *(undefined8 *)(lVar2 + 0x228);
  FUN_144a80a4c(&local_88,local_50,param_1 + 0x240);
  dVar3 = 1.0;
  if (1.0 <= local_38) {
    local_38 = *(double *)(param_1 + 0x178) / local_38;
    dVar3 = 1.0;
    if (1.0 <= local_38) {
      dVar3 = local_38;
    }
  }
  if ((1.0 <= local_30) && (local_30 = *(double *)(param_1 + 0x180) / local_30, dVar3 <= local_30))
  {
    dVar3 = local_30;
  }
  if ((1.0 <= local_28) && (local_28 = *(double *)(param_1 + 0x188) / local_28, dVar3 <= local_28))
  {
    dVar3 = local_28;
  }
  fVar5 = (float)dVar3;
LAB_147a2e741:
  auVar6 = *(undefined1 (*) [16])(param_1 + 0x280) & _DAT_149931180;
  auVar4 = _DAT_149931180 & *(undefined1 (*) [16])(param_1 + 0x290);
  auVar1._16_16_ = auVar4;
  auVar1._0_16_ = auVar6;
  auVar4._8_8_ = auVar6._0_8_;
  auVar6 = maxpd(auVar6,auVar1._8_16_);
  auVar4 = maxpd(auVar6,auVar4);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return CONCAT44((float)auVar4._8_8_,(float)auVar4._0_8_ * fVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2e7d0 FUN_147a2e7d0 body=55 status=ok
// SIG undefined FUN_147a2e7d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a2e7d0(longlong param_1)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar3 = *(undefined1 (*) [16])(param_1 + 0x280) & _DAT_149931180;
  auVar2 = _DAT_149931180 & *(undefined1 (*) [16])(param_1 + 0x290);
  auVar1._16_16_ = auVar2;
  auVar1._0_16_ = auVar3;
  auVar2._8_8_ = auVar3._0_8_;
  auVar3 = maxpd(auVar3,auVar1._8_16_);
  maxpd(auVar3,auVar2);
  return;
}



// FUNCTION 147a2e808 FUN_147a2e808 body=156 status=ok
// SIG undefined FUN_147a2e808(void)

void FUN_147a2e808(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a2e8a6(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2e8a6 FUN_147a2e8a6 body=65 status=ok
// SIG undefined FUN_147a2e8a6(void)

void FUN_147a2e8a6(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (1 < *(byte *)(param_1 + 0x1fb))) {
    if ((*(float *)(param_1 + 0x440) != param_2) ||
       (NAN(*(float *)(param_1 + 0x440)) || NAN(param_2))) {
      *(float *)(param_1 + 0x440) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a2e8e8 FUN_147a2e8e8 body=156 status=ok
// SIG undefined FUN_147a2e8e8(void)

void FUN_147a2e8e8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a2e986(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2e986 FUN_147a2e986 body=65 status=ok
// SIG undefined FUN_147a2e986(void)

void FUN_147a2e986(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (1 < *(byte *)(param_1 + 0x1fb))) {
    if ((*(float *)(param_1 + 0x444) != param_2) ||
       (NAN(*(float *)(param_1 + 0x444)) || NAN(param_2))) {
      *(float *)(param_1 + 0x444) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a2e9ca FUN_147a2e9ca body=389 status=ok
// SIG undefined FUN_147a2e9ca(void)

double * FUN_147a2e9ca(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  fVar7 = *(float *)(param_1 + 0x440);
  if (89.0 <= fVar7) {
    fVar7 = 89.0;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  fVar4 = (fVar7 * 3.1415927) / 180.0 + 0.001;
  fVar7 = (*(float *)(param_1 + 0x444) * 3.1415927) / 180.0;
  if (1.5543431 <= fVar7) {
    fVar7 = 1.5543431;
  }
  if (fVar7 <= fVar4) {
    fVar7 = fVar4;
  }
  dVar5 = cos((double)fVar7);
  dVar6 = sin((double)fVar7);
  dVar1 = (double)*(float *)(param_1 + 0x40c);
  FUN_1479dca76(param_1,&local_68);
  dVar2 = *(double *)(param_1 + 0x268);
  dVar3 = *(double *)(param_1 + 0x270);
  if (0.7071067690849304 <= dVar5) {
    dVar6 = dVar1 / (dVar5 + dVar5);
    local_58 = local_58 * dVar6;
    local_60 = local_60 * dVar6;
    dVar5 = local_68 * dVar6;
  }
  else {
    dVar6 = dVar6 * dVar1;
    local_58 = local_58 * dVar1 * dVar5;
    local_60 = local_60 * dVar1 * dVar5;
    dVar5 = dVar1 * local_68 * dVar5;
  }
  *param_2 = dVar5 + *(double *)(param_1 + 0x260);
  param_2[1] = dVar2 + local_60;
  param_2[2] = dVar3 + local_58;
  param_2[3] = dVar6;
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2eb50 FUN_147a2eb50 body=720 status=ok
// SIG undefined FUN_147a2eb50(void)

bool FUN_147a2eb50(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar4 = FUN_1479e51e2();
  if (cVar4 != '\0') {
    fVar9 = *(float *)(param_1 + 0x440);
    if (89.0 <= fVar9) {
      fVar9 = 89.0;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    fVar6 = (fVar9 * 3.1415927) / 180.0 + 0.001;
    fVar9 = (*(float *)(param_1 + 0x444) * 3.1415927) / 180.0;
    if (1.5543431 <= fVar9) {
      fVar9 = 1.5543431;
    }
    if (fVar9 <= fVar6) {
      fVar9 = fVar6;
    }
    fVar6 = sinf(fVar9);
    fVar9 = cosf(fVar9);
    dVar1 = *(double *)(param_1 + 0x270);
    dVar2 = *(double *)(param_1 + 0x260);
    dVar3 = *(double *)(param_1 + 0x268);
    FUN_1479dca76(param_1,&local_a8);
    dVar8 = param_2[6] / (double)fVar6;
    dVar1 = param_2[2] - (dVar1 - local_98 * dVar8);
    dVar2 = *param_2 - (dVar2 - dVar8 * local_a8);
    dVar3 = param_2[1] - (dVar3 - local_a0 * dVar8);
    FUN_1479dca76(param_1,&local_a8);
    fVar7 = (float)(local_98 * dVar1 + local_a8 * dVar2 + local_a0 * dVar3);
    if (0.0 < fVar7) {
      if (fVar9 * fVar9 * (float)(dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3) <= fVar7 * fVar7) {
        dVar1 = param_2[2] - *(double *)(param_1 + 0x270);
        dVar3 = param_2[1] - *(double *)(param_1 + 0x268);
        dVar2 = *param_2 - *(double *)(param_1 + 0x260);
        FUN_1479dca76(param_1,&local_a8);
        fVar9 = (float)(local_98 * dVar1 + local_a8 * dVar2 + local_a0 * dVar3);
        bVar5 = true;
        if (fVar9 < 0.0) {
          fVar7 = (float)(dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3);
          if (fVar6 * fVar6 * fVar7 <= fVar9 * fVar9) {
            bVar5 = (double)fVar7 <= param_2[6] * param_2[6];
          }
        }
        goto LAB_147a2ed0d;
      }
    }
  }
  bVar5 = false;
LAB_147a2ed0d:
  if ((local_90 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2ee4e FUN_147a2ee4e body=156 status=ok
// SIG undefined FUN_147a2ee4e(void)

void FUN_147a2ee4e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14349deea(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2eef0 FUN_147a2eef0 body=158 status=ok
// SIG undefined FUN_147a2eef0(void)

void FUN_147a2eef0(undefined8 param_1,longlong param_2)

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
  FUN_147a2ef90(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2ef90 FUN_147a2ef90 body=138 status=ok
// SIG undefined FUN_147a2ef90(void)

void FUN_147a2ef90(longlong param_1,undefined4 param_2)

{
  if (((*(byte *)(param_1 + 0x66c) & 0x10) == 0) == (bool)(char)param_2) {
    *(byte *)(param_1 + 0x66c) = *(byte *)(param_1 + 0x66c) & 0xef | (char)param_2 << 4;
    if ((*(longlong *)(param_1 + 0x660) != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    else if (*(longlong *)(param_1 + 0x660) == 0) {
      return;
    }
    if (((*(longlong *)(param_1 + 0xb0) != 0) &&
        (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x218) != 0)) &&
       (*(longlong *)(param_1 + 0x5a8) != 0)) {
      FUN_1436597aa(*(longlong *)(param_1 + 0x5a8),param_2);
      FUN_1448c69c8(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147a2f01e FUN_147a2f01e body=158 status=ok
// SIG undefined FUN_147a2f01e(void)

void FUN_147a2f01e(undefined8 param_1,longlong param_2)

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
  FUN_14349e48e(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2f0c2 FUN_147a2f0c2 body=158 status=ok
// SIG undefined FUN_147a2f0c2(void)

void FUN_147a2f0c2(undefined8 param_1,longlong param_2)

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
  FUN_1457a6d3c(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2f162 FUN_147a2f162 body=168 status=ok
// SIG undefined FUN_147a2f162(void)

void FUN_147a2f162(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(int *)(param_1 + 0x650) != local_1c) {
    *(int *)(param_1 + 0x650) = local_1c;
    FUN_1448215fa(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2f210 FUN_147a2f210 body=196 status=ok
// SIG undefined FUN_147a2f210(void)

void FUN_147a2f210(longlong param_1,longlong param_2)

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
  if ((local_1c != 0) != (bool)(*(byte *)(param_1 + 0x676) & 1)) {
    *(byte *)(param_1 + 0x676) = *(byte *)(param_1 + 0x676) & 0xfe | local_1c != 0;
    FUN_1448215fa(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2f2dc FUN_147a2f2dc body=167 status=ok
// SIG undefined FUN_147a2f2dc(void)

void FUN_147a2f2dc(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xa78))(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2f384 FUN_147a2f384 body=154 status=ok
// SIG undefined FUN_147a2f384(void)

void FUN_147a2f384(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a2f420(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2f420 FUN_147a2f420 body=123 status=ok
// SIG undefined FUN_147a2f420(void)

void FUN_147a2f420(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0x668) != param_2) {
    *(int *)(param_1 + 0x668) = param_2;
    if ((*(longlong *)(param_1 + 0x660) != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    else if (*(longlong *)(param_1 + 0x660) == 0) {
      return;
    }
    if (((*(longlong *)(param_1 + 0xb0) != 0) &&
        (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x218) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x5a8), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
      FUN_1448c69c8(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147a2f584 FUN_147a2f584 body=75 status=ok
// SIG undefined FUN_147a2f584(void)

void FUN_147a2f584(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_140a39be2(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2f5d0 FUN_147a2f5d0 body=94 status=ok
// SIG undefined FUN_147a2f5d0(void)

void FUN_147a2f5d0(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x1e0) <= param_3) {
    FUN_147a2f668((longlong *)(param_1 + 0x1d8),param_3 + 1);
  }
  lVar2 = *(longlong *)(param_1 + 0x1d8);
  lVar1 = lVar2 + (longlong)param_3 * 0x28;
  *(int *)(lVar1 + 0x20) = param_3;
  FUN_147a2f6e4(lVar1,param_2 + 0x30);
  FUN_147cc7c6e(*(undefined8 *)(param_2 + 0x40),lVar2 + (longlong)param_3 * 0x28 + 0x10);
  return;
}



// FUNCTION 147a2f62e FUN_147a2f62e body=58 status=ok
// SIG undefined FUN_147a2f62e(void)

bool FUN_147a2f62e(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_1479ed816();
  bVar2 = true;
  if (((cVar1 == '\0') && (*(int *)(param_1 + 0x200) < 1)) && (*(int *)(param_1 + 0x1f0) < 1)) {
    bVar2 = *(longlong *)(param_1 + 0x1d0) != 0;
  }
  return bVar2;
}



// FUNCTION 147a2f668 FUN_147a2f668 body=122 status=ok
// SIG undefined FUN_147a2f668(void)

void FUN_147a2f668(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147a3ada0(param_1,iVar1);
    }
    FUN_147a3ad81((longlong)iVar1 * 0x28 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_147a3ae34(param_1,param_2,iVar1 - param_2);
    FUN_147a3ae96(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147a2f6e4 FUN_147a2f6e4 body=88 status=ok
// SIG undefined FUN_147a2f6e4(void)

undefined8 * FUN_147a2f6e4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147a3909e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 6);
      }
    }
  }
  return param_1;
}



// FUNCTION 147a2f73c FUN_147a2f73c body=194 status=ok
// SIG undefined FUN_147a2f73c(void)

void FUN_147a2f73c(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x660);
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
    lVar2 = *(longlong *)(param_1 + 0x660);
  }
  else if (lVar2 == 0) {
    return;
  }
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  iVar1 = FUN_14370c356(lVar2);
  if ((param_2 < iVar1) && (param_2 < *(int *)(param_1 + 0x6b0))) {
    lVar2 = *(longlong *)(param_1 + 0x6a8) + (longlong)param_2 * 0xa0;
    if (*(longlong *)(*(longlong *)(param_1 + 0x6a8) + 0x40 + (longlong)param_2 * 0xa0) != 0) {
      FUN_14006eb32(lVar2);
      FUN_14080c2b4();
    }
    *(undefined4 *)(lVar2 + 0x38) = 0;
    if (*(int *)(lVar2 + 0x3c) != 0) {
      FUN_147a3afd8(lVar2 + 0x30,0);
      return;
    }
  }
  return;
}



// FUNCTION 147a2f7fe FUN_147a2f7fe body=107 status=ok
// SIG undefined FUN_147a2f7fe(void)

bool FUN_147a2f7fe(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x660);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
    lVar1 = *(longlong *)(param_1 + 0x660);
  }
  else if (lVar1 == 0) {
    return false;
  }
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  return 0 < *(int *)(lVar1 + 0x1b8);
}



// FUNCTION 147a2f86a FUN_147a2f86a body=224 status=ok
// SIG undefined FUN_147a2f86a(void)

void FUN_147a2f86a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_1 + 0x660) != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  else if (*(longlong *)(param_1 + 0x660) == 0) {
    return;
  }
  lVar4 = 0;
  while( true ) {
    lVar2 = *(longlong *)(param_1 + 0x660);
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar2);
    }
    if (*(int *)(lVar2 + 0x1b8) <= lVar4) break;
    lVar2 = *(longlong *)(param_1 + 0x660);
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar2);
    }
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x1b0) + lVar4 * 8);
    if (lVar2 != 0) {
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1474acd28(param_2,iVar1);
      }
      lVar3 = *param_2;
      *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = *(undefined8 *)(lVar2 + 0x28);
      *(undefined1 *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = 2;
    }
    lVar4 = lVar4 + 1;
  }
  return;
}



// FUNCTION 147a2f94a FUN_147a2f94a body=267 status=ok
// SIG undefined FUN_147a2f94a(void)

longlong * FUN_147a2f94a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  lVar1 = *(longlong *)(param_1 + 0x660);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
    lVar1 = *(longlong *)(param_1 + 0x660);
  }
  else if (lVar1 == 0) {
    FUN_14020fad6(param_2,L"No_StaticMesh");
    if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  local_38 = 0;
  uStack_30 = 0;
  FUN_1401031ac(lVar1,0,&local_38);
  if (&local_38 == param_2) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_38;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 147a2fa70 FUN_147a2fa70 body=114 status=ok
// SIG undefined FUN_147a2fa70(void)

void FUN_147a2fa70(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)0x0;
  uStack_20 = 0;
  local_18 = 0;
  if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0) {
    (**(code **)(*param_1 + 0x340))();
    local_28 = param_1;
    FUN_1405edac7(param_1,0);
  }
  FUN_1405ed516(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2faf0 FUN_147a2faf0 body=124 status=ok
// SIG undefined FUN_147a2faf0(void)

ulonglong FUN_147a2faf0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  char *pcVar5;
  undefined1 auStack_38 [39];
  char local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = (**(code **)(*param_1 + 0x7a0))();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    iVar2 = *(int *)(lVar1 + 0x60) + *(int *)(lVar1 + 0x40) + *(int *)(lVar1 + 0x50) +
            *(int *)(lVar1 + 0x70) + *(int *)(lVar1 + 0x80) + *(int *)(lVar1 + 0x90);
    uVar4 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    iVar3 = iVar2 + *(int *)(lVar1 + 0xa0);
    if (iVar3 == 0 || SCARRY4(iVar2,*(int *)(lVar1 + 0xa0)) != iVar3 < 0) {
      pcVar5 = &local_11;
      FUN_144b0760a(lVar1,pcVar5);
      uVar4 = CONCAT71((int7)((ulonglong)pcVar5 >> 8),local_11 == '\x03');
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2fb6e FUN_147a2fb6e body=32 status=ok
// SIG undefined FUN_147a2fb6e(void)

void FUN_147a2fb6e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_14006eb32();
    FUN_14080c2b4();
    return;
  }
  return;
}



// FUNCTION 147a2fb8e FUN_147a2fb8e body=363 status=ok
// SIG undefined FUN_147a2fb8e(void)

void FUN_147a2fb8e(longlong param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong local_78 [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < *(int *)(param_1 + 0x6b0)) {
    lVar2 = 0;
    uVar1 = 0;
    do {
      FUN_140047918(param_2,L"%sCustomProperties ",
                    L"                                                                                                                                                                                                                                                               "
                    + (0xff - (longlong)param_3));
      lVar3 = *(longlong *)(param_1 + 0x6a8);
      if ((0 < *(int *)(lVar3 + 0x38 + lVar2)) || (*(longlong *)(lVar3 + 0x40 + lVar2) != 0)) {
        lVar3 = lVar3 + lVar2;
        FUN_140047918(param_2,L"CustomLODData LOD=%d ",uVar1 & 0xffffffff);
        if (0 < *(int *)(lVar3 + 0x38)) {
          local_78[0] = 0;
          local_78[1] = 0;
          FUN_147a2fcfa(lVar3,local_78);
          FUN_1468161d8(param_2,local_78);
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
        }
        if ((*(longlong *)(lVar3 + 0x40) != 0) &&
           (*(int *)(*(longlong *)(lVar3 + 0x40) + 0x34) != 0)) {
          local_78[0] = 0;
          local_78[1] = 0;
          FUN_147cc78c0(*(undefined8 *)(lVar3 + 0x40),local_78);
          FUN_1468161d8(param_2,local_78);
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
      FUN_1468161aa(param_2,&DAT_149e02010);
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + 0xa0;
    } while ((longlong)uVar1 < (longlong)*(int *)(param_1 + 0x6b0));
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a2fcfa FUN_147a2fcfa body=536 status=ok
// SIG undefined FUN_147a2fcfa(void)

void FUN_147a2fcfa(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  uint uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140002266(&local_58,L"PaintedVertices(%d)=",*(undefined4 *)(param_1 + 0x38));
  iVar3 = local_50 + -1;
  if (local_50 == 0) {
    iVar3 = 0;
  }
  FUN_1400020e8(param_2,local_58,iVar3);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  iVar3 = *(int *)(param_2 + 8) + -1;
  if (*(int *)(param_2 + 8) == 0) {
    iVar3 = 0;
  }
  FUN_1412d7f26(param_2,*(int *)(param_1 + 0x38) * 0x7d + iVar3);
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar6 = 0x38;
    iVar3 = 0;
    uVar5 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x30);
      local_68 = *(undefined8 *)(lVar2 + -0x28 + lVar6);
      FUN_140002266(&local_58,L"((Position=(X=%.6f,Y=%.6f,Z=%.6f),",
                    *(undefined8 *)(lVar2 + -0x38 + lVar6),*(undefined8 *)(lVar2 + -0x30 + lVar6));
      iVar7 = local_50 + -1;
      if (local_50 == 0) {
        iVar7 = iVar3;
      }
      FUN_1400020e8(param_2,local_58,iVar7);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      puVar1 = (undefined8 *)(lVar2 + -8 + lVar6);
      local_68 = *puVar1;
      uStack_60 = *(uint *)(puVar1 + 1);
      uStack_5c = *(undefined4 *)((longlong)puVar1 + 0xc);
      FUN_140002266(&local_58,L"(Normal=(X=%f,Y=%f,Z=%f,W=%f),",
                    *(undefined8 *)(lVar2 + -0x18 + lVar6),*(undefined8 *)(lVar2 + -0x10 + lVar6));
      iVar7 = local_50 + -1;
      if (local_50 == 0) {
        iVar7 = iVar3;
      }
      FUN_1400020e8(param_2,local_58,iVar7);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      uStack_60 = (uint)*(byte *)(lVar2 + -0x1d + lVar6);
      local_68 = CONCAT44(local_68._4_4_,(uint)*(byte *)(lVar2 + -0x1e + lVar6));
      FUN_140002266(&local_58,L"(Color=(B=%d,G=%d,R=%d,A=%d))",
                    *(undefined1 *)(lVar2 + -0x20 + lVar6),*(undefined1 *)(lVar2 + -0x1f + lVar6));
      iVar7 = local_50 + -1;
      if (local_50 == 0) {
        iVar7 = iVar3;
      }
      FUN_1400020e8(param_2,local_58,iVar7);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      uVar5 = uVar5 + 1;
      uVar4 = *(uint *)(param_1 + 0x38);
      if (uVar5 != uVar4) {
        FUN_1400020e8(param_2,&DAT_149e06196,1);
        uVar4 = *(uint *)(param_1 + 0x38);
      }
      lVar6 = lVar6 + 0x40;
    } while ((longlong)uVar5 < (longlong)(int)uVar4);
  }
  FUN_1400020e8(param_2,&DAT_149e001d8,1);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2ff14 FUN_147a2ff14 body=384 status=ok
// SIG undefined FUN_147a2ff14(void)

void FUN_147a2ff14(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  int local_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = param_2;
  cVar1 = FUN_140988638(&local_30,L"CustomLODData",1);
  if (cVar1 != '\0') {
    cVar1 = FUN_141369f9a(local_30,L"LOD=",&local_34);
    if (cVar1 == '\0') {
      lVar6 = 0;
    }
    else {
      FUN_140002266(&local_48,&DAT_149e063bc);
      iVar2 = local_40 + -1;
      if (local_40 == 0) {
        iVar2 = 0;
      }
      local_30 = local_30 + (longlong)iVar2 * 2 + 8;
      lVar6 = local_48;
      if (-1 < local_34) {
        FUN_143719d02(param_1,local_34 + 1);
      }
    }
    lVar5 = (longlong)local_34 * 0xa0 + *(longlong *)(param_1 + 0x6a8);
    FUN_147a30096(lVar5,&local_30);
    lVar3 = FUN_1448324a4(local_30,L"ColorVertexData");
    if (lVar3 != 0) {
      local_30 = lVar3;
      FUN_147a2f73c(param_1,local_34);
      puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      *(undefined4 *)(puVar4 + 1) = 0xffffffff;
      *(undefined2 *)((longlong)puVar4 + 0xc) = 0x105;
      *(undefined1 *)((longlong)puVar4 + 0xe) = 0;
      puVar4[2] = 0;
      *puVar4 = &PTR_FUN_14aa61a50;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      *(undefined1 *)(puVar4 + 7) = 1;
      *(undefined8 **)(lVar5 + 0x40) = puVar4;
      FUN_147cc79c2(puVar4,local_30);
    }
    if (lVar6 != 0) {
      FUN_1400020a8(lVar6);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a30096 FUN_147a30096 body=931 status=ok
// SIG undefined FUN_147a30096(void)

void FUN_147a30096(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  ulonglong uStack_70;
  longlong local_60;
  int local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar1 = FUN_141369f9a(*param_2,L"PaintedVertices(",&local_4c);
  if (cVar1 != '\0') {
    FUN_140002266(&local_60,&DAT_149e063bc,local_4c);
    lVar8 = local_60;
    iVar2 = local_58 + -1;
    if (local_58 == 0) {
      iVar2 = 0;
    }
    *param_2 = *param_2 + 0x24 + (longlong)iVar2 * 2;
    FUN_140056680(&local_60);
    local_78 = 0;
    uStack_70 = 0;
    FUN_1403de9f2(&local_60,&local_78,&DAT_149e06196,0);
    plVar12 = (longlong *)(param_1 + 0x30);
    iVar2 = *(int *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x38) = iVar2 + local_4c;
    if ((uint)(*(int *)(param_1 + 0x3c) - iVar2) < local_4c) {
      FUN_147a3b0c8(plVar12);
    }
    if ((int)local_4c < 1) {
      uVar3 = 0;
      plVar12 = param_2;
    }
    else {
      local_88 = lVar8;
      lVar8 = 0x38;
      lVar9 = 0;
      lVar11 = 0;
      uVar7 = 0xffffffff;
      local_80 = param_2;
      do {
        uVar6 = uVar7;
        puVar4 = &DAT_149dfb77a;
        if (*(int *)(local_78 + 8 + lVar9) != 0) {
          puVar4 = *(undefined2 **)(local_78 + lVar9);
        }
        FUN_140c2d9be(puVar4,&DAT_149e25dd6,*plVar12 + lVar8 + -0x38);
        puVar4 = &DAT_149dfb77a;
        if (*(int *)(local_78 + 0x18 + lVar9) != 0) {
          puVar4 = *(undefined2 **)(local_78 + 0x10 + lVar9);
        }
        FUN_140c2d9be(puVar4,&DAT_149e25ddc,*plVar12 + lVar8 + -0x30);
        puVar4 = &DAT_149dfb77a;
        if (*(int *)(local_78 + 0x28 + lVar9) != 0) {
          puVar4 = *(undefined2 **)(local_78 + 0x20 + lVar9);
        }
        FUN_140c2d9be(puVar4,&DAT_149e25de2,*plVar12 + lVar8 + -0x28);
        puVar4 = &DAT_149dfb77a;
        if (*(int *)(local_78 + 0x38 + lVar9) != 0) {
          puVar4 = *(undefined2 **)(local_78 + 0x30 + lVar9);
        }
        FUN_140c2d9be(puVar4,&DAT_149e25dd6,*plVar12 + lVar8 + -0x18);
        puVar4 = &DAT_149dfb77a;
        if (*(int *)(local_78 + 0x48 + lVar9) != 0) {
          puVar4 = *(undefined2 **)(local_78 + 0x40 + lVar9);
        }
        FUN_140c2d9be(puVar4,&DAT_149e25ddc,*plVar12 + lVar8 + -0x10);
        puVar4 = &DAT_149dfb77a;
        if (*(int *)(local_78 + 0x58 + lVar9) != 0) {
          puVar4 = *(undefined2 **)(local_78 + 0x50 + lVar9);
        }
        FUN_140c2d9be(puVar4,&DAT_149e25de2,*plVar12 + lVar8 + -8);
        puVar4 = &DAT_149dfb77a;
        if (*(int *)(local_78 + 0x68 + lVar9) != 0) {
          puVar4 = *(undefined2 **)(local_78 + 0x60 + lVar9);
        }
        FUN_140c2d9be(puVar4,&DAT_149e25de8,*plVar12 + lVar8);
        puVar4 = &DAT_149dfb77a;
        if (*(int *)(local_78 + 0x78 + lVar9) != 0) {
          puVar4 = *(undefined2 **)(local_78 + 0x70 + lVar9);
        }
        FUN_146816b88(puVar4,&DAT_149e1dce8,*plVar12 + lVar8 + -0x20);
        puVar4 = &DAT_149dfb77a;
        if (*(int *)(local_78 + 0x88 + lVar9) != 0) {
          puVar4 = *(undefined2 **)(local_78 + 0x80 + lVar9);
        }
        FUN_146816b88(puVar4,&DAT_149e1dcee,*plVar12 + lVar8 + -0x1f);
        puVar4 = &DAT_149dfb77a;
        if (*(int *)(local_78 + 0x98 + lVar9) != 0) {
          puVar4 = *(undefined2 **)(local_78 + 0x90 + lVar9);
        }
        FUN_146816b88(puVar4,&DAT_149e1dcf4,*plVar12 + lVar8 + -0x1e);
        puVar4 = &DAT_149dfb77a;
        if (*(int *)(local_78 + 0xa8 + lVar9) != 0) {
          puVar4 = *(undefined2 **)(local_78 + 0xa0 + lVar9);
        }
        FUN_146816b88(puVar4,&DAT_149e1dcfa,*plVar12 + lVar8 + -0x1d);
        lVar11 = lVar11 + 1;
        uVar7 = uVar6 + 0xb;
        lVar9 = lVar9 + 0xb0;
        lVar8 = lVar8 + 0x40;
      } while (lVar11 < (int)local_4c);
      uVar3 = 0;
      lVar8 = local_88;
      plVar12 = local_80;
      if (1 < (int)(uVar6 + 0xc)) {
        uVar5 = (ulonglong)uVar7;
        piVar10 = (int *)(local_78 + 8);
        do {
          uVar7 = (int)uVar3 + *piVar10 + (uint)(*piVar10 == 0);
          uVar3 = (ulonglong)uVar7;
          piVar10 = piVar10 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
        uVar3 = (ulonglong)(int)uVar7;
      }
    }
    *plVar12 = *plVar12 + uVar3 * 2;
    FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (lVar8 != 0) {
      FUN_1400020a8(lVar8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a3043a FUN_147a3043a body=34 status=ok
// SIG undefined FUN_147a3043a(void)

void FUN_147a3043a(undefined8 param_1,undefined8 param_2)

{
  FUN_1401a080a();
  FUN_1479b7a78(param_1,param_2);
  return;
}



// FUNCTION 147a3045c FUN_147a3045c body=106 status=ok
// SIG undefined FUN_147a3045c(void)

ulonglong FUN_147a3045c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  undefined7 uVar4;
  
  uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (((*(byte *)(param_1 + 1000) & 0x10) != 0) &&
     (lVar1 = *(longlong *)(param_1 + 0xf0), lVar1 != 0)) {
    lVar2 = FUN_144a3a302();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      if (*(char *)(param_1 + 0x1cb) == '\x02') {
        uVar3 = 0;
      }
      else {
        uVar3 = CONCAT71(uVar4,*(undefined1 *)(param_1 + 0x2b8)) & 0xffffffffffffff04;
        uVar3 = CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 2);
      }
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 147a304cc FUN_147a304cc body=28 status=ok
// SIG undefined FUN_147a304cc(void)

byte FUN_147a304cc(undefined1 param_1)

{
  byte bVar1;
  
  bVar1 = FUN_1447e525e(param_1,0);
  return bVar1 & DAT_14c761bc8 != 0;
}



// FUNCTION 147a304e8 FUN_147a304e8 body=416 status=ok
// SIG undefined FUN_147a304e8(void)

undefined8 FUN_147a304e8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [38];
  byte local_42 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar8 = *(longlong *)(param_1 + 0x660);
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar8);
    lVar8 = *(longlong *)(param_1 + 0x660);
LAB_147a30530:
    if ((lVar8 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar8);
    }
    if (*(longlong *)(lVar8 + 0xe0) != 0) {
      lVar8 = 0;
      while( true ) {
        lVar2 = *(longlong *)(param_1 + 0x660);
        if ((lVar2 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar2);
        }
        iVar1 = *(int *)(*(longlong *)(lVar2 + 0xe0) + 8);
        if (iVar1 <= lVar8) break;
        lVar2 = *(longlong *)(param_1 + 0x660);
        if ((lVar2 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar2);
        }
        lVar2 = *(longlong *)(**(longlong **)(lVar2 + 0xe0) + lVar8 * 8);
        lVar6 = -1;
        lVar7 = 0;
        while (lVar6 = lVar6 + 1, lVar6 < *(int *)(lVar2 + 0x38)) {
          lVar3 = *(longlong *)(lVar2 + 0x30);
          if (*(longlong *)(lVar2 + 0x30) == 0) {
            lVar3 = lVar2 + 0x10;
          }
          plVar4 = (longlong *)FUN_1447e512c(param_1,*(undefined4 *)(lVar3 + lVar7));
          if ((plVar4 == (longlong *)0x0) ||
             (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2b8))(plVar4), plVar4 == (longlong *)0x0
             )) goto LAB_147a3061b;
          lVar7 = lVar7 + 0x1c;
          (**(code **)(*plVar4 + 0x410))(plVar4,local_42);
          if ((local_42[0] & 1) == 0) goto LAB_147a3061b;
        }
        lVar8 = lVar8 + 1;
      }
      uVar5 = CONCAT71((int7)(int3)((uint)iVar1 >> 8),1);
      goto LAB_147a3061d;
    }
  }
  else if (lVar8 != 0) goto LAB_147a30530;
LAB_147a3061b:
  uVar5 = 0;
LAB_147a3061d:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 147a3068a FUN_147a3068a body=430 status=ok
// SIG undefined FUN_147a3068a(void)

void FUN_147a3068a(longlong param_1,int *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  int local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong *)(param_1 + 0x660) != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
LAB_147a306d5:
    if ((*(byte *)(param_1 + 0x675) & 4) == 0) {
      lVar3 = FUN_144a896d0();
      lVar4 = *(longlong *)(lVar3 + 0x110);
      if (lVar4 == 0) {
        FUN_140aa6c08(lVar3);
        lVar4 = *(longlong *)(lVar3 + 0x110);
      }
      if (*(char *)(lVar4 + 0x38) == '\x01') {
        fVar7 = *(float *)(param_1 + 0x6f8);
      }
      else {
        fVar7 = 1.0;
      }
      lVar4 = *(longlong *)(param_1 + 0x660);
      if ((lVar4 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar4);
      }
      bVar1 = DAT_14c950c29;
      fVar5 = (float)*(int *)(lVar4 + 0x16c) * fVar7;
      fVar6 = 4.0;
      if (4.0 <= fVar5) {
        fVar6 = fVar5;
      }
      *param_2 = (int)fVar6;
      lVar4 = *(longlong *)(param_1 + 0x660);
      if ((lVar4 != 0 & bVar1) == 1) {
        FUN_1456cec3c(lVar4);
      }
      fVar7 = fVar7 * (float)*(int *)(lVar4 + 0x16c);
      fVar6 = 4.0;
      if (4.0 <= fVar7) {
        fVar6 = fVar7;
      }
      iVar2 = (int)fVar6;
LAB_147a307c9:
      *param_3 = iVar2;
    }
    else if (*(int *)(param_1 + 0x680) != 0) {
      *param_2 = *(int *)(param_1 + 0x680);
      iVar2 = *(int *)(param_1 + 0x680);
      goto LAB_147a307c9;
    }
    if (*param_2 != 0) goto LAB_147a30717;
    local_54 = 0;
    local_68 = &DAT_14c872bb0;
    FUN_1414d73b6(DAT_14c872ce0,L"DevOptions.StaticLighting",L"DefaultStaticMeshLightingRes",
                  &local_54);
    iVar2 = local_54;
  }
  else {
    if (*(longlong *)(param_1 + 0x660) != 0) goto LAB_147a306d5;
    iVar2 = 0;
  }
  *param_2 = iVar2;
  *param_3 = iVar2;
LAB_147a30717:
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a3083a FUN_147a3083a body=148 status=ok
// SIG undefined FUN_147a3083a(void)

void FUN_147a3083a(longlong param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  float fVar4;
  
  *param_5 = (int)((float)param_2 * 1.33 * (float)param_3);
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if ((lVar2 != 0) || (lVar2 = FUN_1448abda6(), uVar3 = DAT_14c760db4, lVar2 != 0)) {
    uVar3 = (uint)*(byte *)(lVar2 + 0x150);
  }
  cVar1 = FUN_1449277db(uVar3);
  fVar4 = (float)param_2 * 2.66 * (float)param_3;
  if (cVar1 == '\0') {
    fVar4 = fVar4 * 0.5;
  }
  *param_4 = (int)fVar4;
  return;
}



// FUNCTION 147a308ce FUN_147a308ce body=193 status=ok
// SIG undefined FUN_147a308ce(void)

void FUN_147a308ce(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_3 = 0;
  *param_2 = 0;
  local_24 = 0;
  local_28 = 0;
  (**(code **)(*param_1 + 0x758))();
  cVar1 = FUN_144990dba(param_1);
  if (cVar1 != '\0') {
    if ((param_1[0xcc] != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    else if (param_1[0xcc] == 0) goto LAB_147a3096a;
    cVar1 = (**(code **)(*param_1 + 0xa98))(param_1,local_24,local_28);
    if (cVar1 != '\0') {
      local_38 = param_3;
      (**(code **)(*param_1 + 0xaa8))(param_1,local_24,local_28,param_2);
    }
  }
LAB_147a3096a:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a30990 FUN_147a30990 body=320 status=ok
// SIG undefined FUN_147a30990(void)

undefined8
FUN_147a30990(longlong *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5,undefined4 *param_6,undefined1 *param_7,undefined1 *param_8)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = 0;
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  *param_7 = 0;
  *param_8 = 0;
  local_4c = 0;
  local_50 = 0;
  (**(code **)(*param_1 + 0xab0))(param_1,&local_4c);
  *param_6 = local_4c;
  local_54 = 0;
  local_58 = 0;
  (**(code **)(*param_1 + 0x758))(param_1);
  cVar1 = FUN_144990dba(param_1);
  if (cVar1 != '\0') {
    if ((param_1[0xcc] != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    else if (param_1[0xcc] == 0) {
      uVar3 = 0;
      goto LAB_147a30a9c;
    }
    uVar2 = (**(code **)(*param_1 + 0xaa0))(param_1);
    *param_8 = uVar2;
    uVar2 = (**(code **)(*param_1 + 0xa98))(param_1,local_54,local_58);
    *param_7 = uVar2;
    local_68 = param_3;
    (**(code **)(*param_1 + 0xaa8))(param_1,local_4c,local_50,param_2);
    uVar3 = 1;
  }
LAB_147a30a9c:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a30ad2 FUN_147a30ad2 body=23 status=ok
// SIG undefined FUN_147a30ad2(void)

bool FUN_147a30ad2(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x618))();
  return -1 < iVar1;
}



// FUNCTION 147a30aea FUN_147a30aea body=86 status=ok
// SIG undefined FUN_147a30aea(void)

bool FUN_147a30aea(longlong *param_1)

{
  char cVar1;
  
  if ((*(uint *)(param_1 + 1) & 0x40) == 0) {
    if ((param_1[0xcc] != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    else if (param_1[0xcc] == 0) {
      return false;
    }
    cVar1 = (**(code **)(*param_1 + 0x4e8))(param_1);
    if (cVar1 != '\0') {
      return *(char *)((longlong)param_1 + 0x1fb) != '\x02';
    }
  }
  return false;
}



// FUNCTION 147a30b40 FUN_147a30b40 body=186 status=ok
// SIG undefined FUN_147a30b40(void)

ulonglong FUN_147a30b40(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((*(double *)(param_1 + -0x28) == 0.0) && (!NAN(*(double *)(param_1 + -0x28)))) {
    if ((*(double *)(param_1 + -0x20) == 0.0) && (!NAN(*(double *)(param_1 + -0x20)))) {
      if ((*(double *)(param_1 + -0x18) == 0.0) && (!NAN(*(double *)(param_1 + -0x18))))
      goto LAB_147a30b81;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x3b8);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  else if (lVar1 == 0) goto LAB_147a30b81;
  plVar2 = *(longlong **)(lVar1 + 0x248);
  if (plVar2 != (longlong *)0x0) {
    if ((*(byte *)(param_1 + 0x3cc) & 0x40) == 0) {
      uVar4 = *(uint *)(plVar2 + 5);
    }
    else {
      uVar4 = (uint)((char)*(byte *)(param_1 + 0x3cc) < '\0');
    }
    if ((uVar4 & 1) == 0) {
      cVar3 = (**(code **)(*plVar2 + 0x2b0))(plVar2,param_1 + -0x68,param_2);
      if (cVar3 == '\0') goto LAB_147a30b81;
    }
    uVar5 = 0;
  }
LAB_147a30b81:
  return uVar5 & 0xffffffff;
}



// FUNCTION 147a30bfa FUN_147a30bfa body=31 status=ok
// SIG undefined FUN_147a30bfa(void)

uint FUN_147a30bfa(longlong param_1,longlong param_2)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + 0x674) & 0x40) == 0) {
    uVar1 = *(uint *)(param_2 + 0x28);
  }
  else {
    uVar1 = (uint)((char)*(byte *)(param_1 + 0x674) < '\0');
  }
  return uVar1 & 0xffffff01;
}



// FUNCTION 147a30c1a FUN_147a30c1a body=189 status=ok
// SIG undefined FUN_147a30c1a(void)

undefined8 FUN_147a30c1a(longlong param_1,int param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  
  *param_3 = 0;
  lVar1 = *(longlong *)(param_1 + 0x660);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  else if (lVar1 == 0) {
    return 0;
  }
  plVar2 = *(longlong **)(lVar1 + 0xe0);
  if (-1 < param_2 && plVar2 != (longlong *)0x0) {
    iVar5 = *(int *)(lVar1 + 400);
    if ((-1 < (longlong)iVar5) && (iVar5 < (int)plVar2[1])) {
      lVar1 = *(longlong *)(*plVar2 + (longlong)iVar5 * 8);
      if (0 < (longlong)*(int *)(lVar1 + 0x38)) {
        puVar3 = (undefined4 *)(lVar1 + 0x10);
        if (*(undefined4 **)(lVar1 + 0x30) != (undefined4 *)0x0) {
          puVar3 = *(undefined4 **)(lVar1 + 0x30);
        }
        lVar6 = 0;
        iVar5 = 0;
        do {
          if ((*(char *)(puVar3 + 5) == '\x01') && (iVar5 = iVar5 + puVar3[2], param_2 < iVar5)) {
            uVar4 = FUN_1447e512c(param_1,*puVar3);
            *param_3 = (int)lVar6;
            return uVar4;
          }
          lVar6 = lVar6 + 1;
          puVar3 = puVar3 + 7;
        } while (*(int *)(lVar1 + 0x38) != lVar6);
      }
    }
  }
  return 0;
}



// FUNCTION 147a30cd8 FUN_147a30cd8 body=175 status=ok
// SIG undefined FUN_147a30cd8(void)

void FUN_147a30cd8(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x660);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  else if (lVar1 == 0) {
    return;
  }
  if (param_3 < 0) {
    if ((DAT_14cb0d2b0 == 0) || (*(char *)(DAT_14cb0d2b0 + 0xd58) != '\x01')) {
      param_3 = *(int *)(lVar1 + 0x150);
    }
    else {
      param_3 = FUN_147d15c44(lVar1 + 0xe8);
    }
  }
  FUN_147d5e8c2(lVar1,param_1,param_3,param_4,param_5,param_2);
  *(byte *)(param_1 + 0x674) = *(byte *)(param_1 + 0x674) | 2;
  return;
}



// FUNCTION 147a30d88 FUN_147a30d88 body=123 status=ok
// SIG undefined FUN_147a30d88(void)

void FUN_147a30d88(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x660);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  else if (lVar1 == 0) {
    return;
  }
  FUN_147d5ea50(lVar1,param_1,param_4,param_2,param_5,param_3);
  *(byte *)(param_1 + 0x674) = *(byte *)(param_1 + 0x674) | 2;
  return;
}



// FUNCTION 147a30e04 FUN_147a30e04 body=79 status=ok
// SIG undefined FUN_147a30e04(void)

void FUN_147a30e04(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xa48))();
  if (lVar1 != param_2) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    param_1[0xd1] = param_2;
    FUN_1448215fa(param_1);
    return;
  }
  return;
}



// FUNCTION 147a30e54 FUN_147a30e54 body=74 status=ok
// SIG undefined FUN_147a30e54(void)

void FUN_147a30e54(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x690) != param_2) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x690) = param_2;
    FUN_1448215fa(param_1);
    return;
  }
  return;
}



// FUNCTION 147a30e9e FUN_147a30e9e body=93 status=ok
// SIG undefined FUN_147a30e9e(void)

undefined8 FUN_147a30e9e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3b8);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  else if (lVar1 == 0) {
    FUN_143482778(param_1,param_2);
    return param_2;
  }
  FUN_147d556b4(lVar1,param_2,param_1 + -0x68);
  return param_2;
}



// FUNCTION 147a30efc FUN_147a30efc body=192 status=ok
// SIG undefined FUN_147a30efc(void)

void FUN_147a30efc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  
  FUN_1479eea3c();
  if ((((*(double *)(param_1 + -0x28) == 0.0) && (!NAN(*(double *)(param_1 + -0x28)))) &&
      (*(double *)(param_1 + -0x20) == 0.0)) &&
     (((!NAN(*(double *)(param_1 + -0x20)) && (*(double *)(param_1 + -0x18) == 0.0)) &&
      (!NAN(*(double *)(param_1 + -0x18)))))) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x3b8);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  else if (lVar1 == 0) {
    return;
  }
  plVar2 = *(longlong **)(lVar1 + 0x248);
  if (plVar2 != (longlong *)0x0) {
    if ((*(byte *)(param_1 + 0x3cc) & 0x40) == 0) {
      uVar3 = *(uint *)(plVar2 + 5);
    }
    else {
      uVar3 = (uint)((char)*(byte *)(param_1 + 0x3cc) < '\0');
    }
    if ((uVar3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000147a30faf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x2b8))(plVar2,param_2 + 0x88,param_1 + -0x68);
      return;
    }
  }
  return;
}



// FUNCTION 147a30fc5 FUN_147a30fc5 body=342 status=ok
// SIG undefined FUN_147a30fc5(void)

uint * FUN_147a30fc5(uint *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 auStack_118 [32];
  undefined2 *local_f8;
  undefined8 uStack_f0;
  uint local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  uint uStack_dc;
  uint local_d8;
  longlong local_c8;
  int local_c0;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8 = (undefined2 *)0x0;
  uStack_f0 = 0;
  FUN_1407c869a(param_2,&local_f8,0);
  local_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  FUN_144a83b10(&local_e8,param_3);
  FUN_140ba7826(&local_c8,L"LOD_",&local_e8);
  iVar1 = local_c0 + -1;
  if (local_c0 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_f8,local_c8,iVar1);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_e4,local_e8) != 0) {
    FUN_1400020a8();
  }
  FUN_1427879d8(&local_c8);
  iVar1 = (int)uStack_f0 + -1;
  if ((int)uStack_f0 == 0) {
    iVar1 = 0;
  }
  puVar2 = local_f8;
  if ((int)uStack_f0 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140c54e34(&local_c8,puVar2,(longlong)iVar1 * 2);
  FUN_140c54d7a(&local_c8);
  FUN_142787a10(&local_c8,&local_e8);
  *param_1 = local_d8 ^ local_e8;
  *(ulonglong *)(param_1 + 1) = CONCAT44(uStack_e0,uStack_e4);
  param_1[3] = uStack_dc;
  FUN_1427879f6(&local_c8);
  if (local_f8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147a31188 FUN_147a31188 body=110 status=ok
// SIG undefined FUN_147a31188(void)

void FUN_147a31188(undefined8 *param_1,undefined8 param_2)

{
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 100) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x66) = 0;
  param_1[0xd] = 0;
  param_1[0xb] = &PTR_FUN_14aa57ea0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = &PTR_FUN_14a3d4750;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x13] = param_2;
  return;
}



// FUNCTION 147a311f6 FUN_147a311f6 body=565 status=ok
// SIG undefined FUN_147a311f6(void)

void FUN_147a311f6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined2 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_188 [32];
  longlong *local_168;
  longlong *local_160;
  undefined1 local_158 [248];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((*(longlong *)(param_1 + 0x660) != 0) &&
     (plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0xe0), plVar14 != (longlong *)0x0))
  {
    iVar10 = (int)plVar14[1];
    if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar10);
    }
    if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
      FUN_147a15a3a(param_2);
      iVar10 = (int)plVar14[1];
    }
    if (iVar10 != 0) {
      plVar14 = (longlong *)*plVar14;
      local_168 = plVar14 + iVar10;
      lVar13 = 0;
      local_160 = param_2;
      do {
        plVar7 = local_160;
        lVar4 = *plVar14;
        iVar10 = (int)local_160[1];
        *(int *)(local_160 + 1) = iVar10 + 1;
        if (*(int *)((longlong)local_160 + 0xc) == iVar10) {
          FUN_147a15aac(local_160,iVar10);
        }
        lVar5 = *plVar7;
        lVar6 = lVar13 * 0x28;
        memmove((void *)(lVar5 + lVar6 + 0x28),(void *)(lVar5 + lVar6),
                (ulonglong)(uint)(iVar10 - (int)lVar13) * 0x28);
        lVar5 = *plVar7;
        *(int *)(lVar5 + lVar6) = (int)lVar13;
        *(undefined8 *)(lVar5 + 4 + lVar6) = 1;
        *(undefined2 *)(lVar5 + 0xc + lVar6) = 0x100;
        puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar6);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined8 *)(lVar5 + 0x20 + lVar6) = 0;
        *(undefined4 *)(lVar5 + 4 + lVar6) = *(undefined4 *)(lVar4 + 0x38);
        *(byte *)(lVar5 + 0xc + lVar6) = *(byte *)(lVar4 + 0x5c) >> 6 & 1;
        uVar8 = 1;
        if ((*(byte *)(lVar4 + 0x5c) & 0x20) == 0) {
          uVar8 = FUN_146888846(lVar4 + 0x68);
        }
        lVar1 = lVar5 + lVar6;
        *(undefined1 *)(lVar1 + 0xd) = uVar8;
        FUN_1468200e0(local_158);
        FUN_14034761a(lVar4,local_158);
        uVar9 = FUN_140209a84(local_158);
        *(undefined8 *)(lVar1 + 0x10) = uVar9;
        puVar12 = (undefined2 *)(lVar4 + 0x10);
        if (*(undefined2 **)(lVar4 + 0x30) != (undefined2 *)0x0) {
          puVar12 = *(undefined2 **)(lVar4 + 0x30);
        }
        if ((longlong)*(int *)(lVar4 + 0x38) != 0) {
          puVar11 = puVar12 + (longlong)*(int *)(lVar4 + 0x38) * 0xe;
          do {
            uVar3 = *puVar12;
            iVar10 = *(int *)(lVar1 + 0x20);
            *(uint *)(lVar1 + 0x20) = iVar10 + 1U;
            if (*(uint *)(lVar1 + 0x24) < iVar10 + 1U) {
              FUN_14488eebe(lVar5 + lVar6 + 0x18,iVar10);
            }
            *(undefined2 *)(*(longlong *)(lVar1 + 0x18) + (longlong)iVar10 * 2) = uVar3;
            *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + *(int *)(puVar12 + 4);
            puVar12 = puVar12 + 0xe;
          } while (puVar12 != puVar11);
        }
        lVar13 = lVar13 + 1;
        FUN_1400fd2aa(local_158);
        plVar14 = plVar14 + 1;
      } while (plVar14 != local_168);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a3142e FUN_147a3142e body=42 status=ok
// SIG undefined FUN_147a3142e(void)

longlong FUN_147a3142e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + -0x80);
  if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
    FUN_1456cec3c(lVar1);
  }
  return lVar1;
}



// FUNCTION 147a31460 FUN_147a31460 body=39 status=ok
// SIG undefined FUN_147a31460(void)

void FUN_147a31460(undefined8 param_1,int param_2)

{
  FUN_1448c4a0e();
  if ((param_2 != 4) && (param_2 != 2)) {
    return;
  }
  FUN_147d5d3c0();
  return;
}



// FUNCTION 147a31488 FUN_147a31488 body=87 status=ok
// SIG undefined FUN_147a31488(void)

void FUN_147a31488(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1412a62ac();
  if ((*(int *)(param_1 + 0x324) != 0) && (*(longlong **)(DAT_14cb0d2b0 + 0xfd0) != (longlong *)0x0)
     ) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 0x80))();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined4 *)(param_1 + 0x324));
      *(undefined4 *)(param_1 + 0x324) = 0;
    }
  }
  return;
}



// FUNCTION 147a314e0 FUN_147a314e0 body=75 status=ok
// SIG undefined FUN_147a314e0(void)

void FUN_147a314e0(longlong param_1)

{
  longlong lVar1;
  
  FUN_140136774();
  if (*(longlong *)(param_1 + 0x318) == 0) {
    lVar1 = FUN_147a3152b(param_1);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x318) = lVar1;
  }
  return;
}



// FUNCTION 147a3152b FUN_147a3152b body=174 status=ok
// SIG undefined FUN_147a3152b(void)

undefined8 FUN_147a3152b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b531a2();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a315da FUN_147a315da body=1220 status=ok
// SIG undefined FUN_147a315da(void)

void FUN_147a315da(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  byte bVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  longlong *local_190;
  undefined8 local_188 [2];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128 [4];
  undefined8 local_118 [12];
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
  undefined8 local_80;
  undefined4 local_78;
  uint local_74;
  longlong local_70;
  longlong lStack_68;
  uint local_60;
  undefined8 *local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_144a7e84a();
  if ((*(longlong **)(DAT_14cb0d2b0 + 0xfd0) == (longlong *)0x0) ||
     (plVar6 = (longlong *)(**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 0x80))(),
     plVar6 == (longlong *)0x0)) goto LAB_147a316f0;
  local_188[0] = 0;
  local_188[1] = 0;
  local_178 = 0;
  uStack_174 = 0;
  uStack_170 = 0;
  uStack_16c = 0x3ff00000;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_144 = 0x3ff00000;
  uStack_140 = 0;
  uStack_13c = 0x3ff00000;
  local_138 = 0x3ff0000000000000;
  uStack_130 = 0;
  if (*(char *)(param_1 + 0x310) == '\0') {
    puVar11 = (undefined8 *)(param_1 + 0x240);
    puVar12 = local_188;
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
  }
  else {
    FUN_14480333a(param_1,local_188);
  }
  if ((*(char *)(param_1 + 0x328) == '\0') &&
     (((bool)*(char *)(param_1 + 0x390) != ((*(uint *)(param_1 + 0x1f8) >> 5 & 1) != 0) ||
      (iVar3 = memcmp((void *)(param_1 + 0x330),local_188,0x60), iVar3 != 0)))) {
    *(undefined1 *)(param_1 + 0x328) = 1;
  }
  if (*(longlong *)(param_1 + 0x2b0) == 0) {
LAB_147a316be:
    bVar9 = 0;
  }
  else {
    bVar9 = *(byte *)(param_1 + 0x1f8);
    lVar7 = FUN_1447b4020();
    if (lVar7 == 0) goto LAB_147a316be;
    bVar9 = (bVar9 & 0x20) >> 5;
  }
  if (*(char *)(param_1 + 0x328) == '\x01') {
    local_128[0] = 0;
    local_80 = 0;
    local_74 = 2;
    local_70 = 0;
    lStack_68 = 0;
    local_60 = 0;
    local_58 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_58 = &PTR_LAB_14a899320;
    local_78 = *(undefined4 *)(param_1 + 800);
    local_b8 = *(undefined8 *)(param_1 + 0x2d8);
    uStack_b0 = *(undefined8 *)(param_1 + 0x2e0);
    local_88 = *(undefined8 *)(param_1 + 0x308);
    local_98 = *(undefined4 *)(param_1 + 0x2f8);
    uStack_94 = *(undefined4 *)(param_1 + 0x2fc);
    uStack_90 = *(undefined4 *)(param_1 + 0x300);
    uStack_8c = *(undefined4 *)(param_1 + 0x304);
    local_a8 = *(undefined4 *)(param_1 + 0x2e8);
    uStack_a4 = *(undefined4 *)(param_1 + 0x2ec);
    uStack_a0 = *(undefined4 *)(param_1 + 0x2f0);
    uStack_9c = *(undefined4 *)(param_1 + 0x2f4);
    puVar11 = local_188;
    puVar12 = local_118;
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    plVar8 = *(longlong **)(param_1 + 0x2b0);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x2a0))(plVar8);
      *(byte *)((longlong)plVar8 + 0xbc) = *(byte *)((longlong)plVar8 + 0xbc) & 0xdf;
      plVar8[8] = (longlong)(DAT_14c866ff8 + 30.0);
      lVar7 = FUN_1447b4020(*(undefined8 *)(param_1 + 0x2b0));
      lVar7 = *(longlong *)(lVar7 + 0x10);
      uVar10 = 0;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
        uVar10 = local_60;
        local_70 = lVar7;
      }
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x2b0) + 0x328))();
      local_60 = (uint)(iVar3 == 0x1000) << 4 | uVar10;
    }
    plVar8 = *(longlong **)(param_1 + 0x2b8);
    lVar7 = lStack_68;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x2a0))(plVar8);
      *(byte *)((longlong)plVar8 + 0xbc) = *(byte *)((longlong)plVar8 + 0xbc) & 0xdf;
      plVar8[8] = (longlong)(DAT_14c866ff8 + 30.0);
      lVar7 = FUN_1447b4020(*(undefined8 *)(param_1 + 0x2b8));
      lVar13 = *(longlong *)(lVar7 + 0x10);
      lVar7 = lStack_68;
      if (lStack_68 != lVar13) {
        if (lVar13 != 0) {
          LOCK();
          *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
          UNLOCK();
        }
        lVar7 = lVar13;
        if (lStack_68 != 0) {
          LOCK();
          puVar2 = (uint *)(lStack_68 + 8);
          uVar10 = *puVar2;
          *puVar2 = *puVar2 - 1;
          UNLOCK();
          if ((uVar10 & 0x3fffffff) == 1) {
            lStack_68 = lVar13;
            FUN_144a54812();
            lVar7 = lStack_68;
          }
        }
      }
    }
    lStack_68 = lVar7;
    uVar10 = *(uint *)(param_1 + 0x2a8);
    uVar10 = (uint)(bVar9 ^ 1) << 5 | uVar10 & 1 | local_60 |
             (uVar10 & 2) << 2 | uVar10 >> 1 & 2 | (*(uint *)(param_1 + 0x2c0) & 1) << 2;
    local_60 = uVar10;
    FUN_147d5d164(&local_198);
    iVar3 = *(int *)(param_1 + 0x2d0);
    if ((longlong)iVar3 != 0) {
      lVar7 = *(longlong *)(param_1 + 0x2c8);
      lVar13 = 0;
      do {
        uVar4 = FUN_14371ace8(local_198,*(undefined8 *)(lVar7 + lVar13));
        uVar10 = uVar10 | uVar4;
        lVar13 = lVar13 + 8;
        local_60 = uVar10;
      } while ((longlong)iVar3 * 8 != lVar13);
    }
    if (*(byte *)(param_1 + 0x310) < 3) {
      local_74 = (uint)*(byte *)(param_1 + 0x310);
    }
    plVar8 = *(longlong **)(param_1 + 0x318);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)FUN_147a3152b(param_1);
      if ((plVar8 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(plVar8);
      }
      *(longlong **)(param_1 + 0x318) = plVar8;
    }
    (**(code **)(*plVar8 + 0x2a0))(plVar8,local_128);
    if (*(int *)(param_1 + 0x324) == 0) {
      uVar5 = (**(code **)(*plVar6 + 8))(plVar6,local_128);
      *(undefined4 *)(param_1 + 0x324) = uVar5;
    }
    else {
      (**(code **)(*plVar6 + 0x48))(plVar6,*(int *)(param_1 + 0x324),local_128);
    }
    puVar11 = local_188;
    puVar12 = (undefined8 *)(param_1 + 0x330);
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    *(byte *)(param_1 + 0x390) = bVar9;
    *(undefined1 *)(param_1 + 0x328) = 0;
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_190 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_190)(local_190);
        LOCK();
        piVar1 = (int *)((longlong)local_190 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_190 + 0x10))(local_190);
        }
      }
    }
    FUN_147a31aa0(local_128);
  }
  if ((*(char *)(param_1 + 0x329) == '\x01') && (*(int *)(param_1 + 0x324) != 0)) {
    (**(code **)(*plVar6 + 0x58))(plVar6);
    *(undefined1 *)(param_1 + 0x329) = 0;
  }
LAB_147a316f0:
  if ((local_40 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a31aa0 FUN_147a31aa0 body=117 status=ok
// SIG undefined FUN_147a31aa0(void)

void FUN_147a31aa0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0xd0);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,1);
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xc0) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xb8) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 147a31b16 FUN_147a31b16 body=66 status=ok
// SIG undefined FUN_147a31b16(void)

void FUN_147a31b16(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x2b0) != param_2) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x2b0) = param_2;
    *(undefined1 *)(param_1 + 0x328) = 1;
  }
  return;
}



// FUNCTION 147a31b58 FUN_147a31b58 body=66 status=ok
// SIG undefined FUN_147a31b58(void)

void FUN_147a31b58(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x2b8) != param_2) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x2b8) = param_2;
    *(undefined1 *)(param_1 + 0x328) = 1;
  }
  return;
}



// FUNCTION 147a31b9a FUN_147a31b9a body=58 status=ok
// SIG undefined FUN_147a31b9a(void)

void FUN_147a31b9a(longlong param_1,double *param_2)

{
  double dVar1;
  
  if ((((*(double *)(param_1 + 0x2d8) != *param_2) ||
       (NAN(*(double *)(param_1 + 0x2d8)) || NAN(*param_2))) ||
      (*(double *)(param_1 + 0x2e0) != param_2[1])) ||
     (NAN(*(double *)(param_1 + 0x2e0)) || NAN(param_2[1]))) {
    dVar1 = param_2[1];
    *(double *)(param_1 + 0x2d8) = *param_2;
    *(double *)(param_1 + 0x2e0) = dVar1;
    *(undefined1 *)(param_1 + 0x328) = 1;
  }
  return;
}



// FUNCTION 147a31bd4 FUN_147a31bd4 body=108 status=ok
// SIG undefined FUN_147a31bd4(void)

void FUN_147a31bd4(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (((((*(double *)(param_1 + 0x2e8) != *param_2) ||
        (NAN(*(double *)(param_1 + 0x2e8)) || NAN(*param_2))) ||
       (*(double *)(param_1 + 0x2f0) != param_2[1])) ||
      ((NAN(*(double *)(param_1 + 0x2f0)) || NAN(param_2[1]) ||
       (*(double *)(param_1 + 0x2f8) != param_2[2])))) ||
     ((NAN(*(double *)(param_1 + 0x2f8)) || NAN(param_2[2]) ||
      ((*(double *)(param_1 + 0x300) != param_2[3] ||
       (NAN(*(double *)(param_1 + 0x300)) || NAN(param_2[3]))))))) {
    *(double *)(param_1 + 0x308) = param_2[4];
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[3];
    *(double *)(param_1 + 0x2f8) = param_2[2];
    *(double *)(param_1 + 0x300) = dVar3;
    *(double *)(param_1 + 0x2e8) = dVar1;
    *(double *)(param_1 + 0x2f0) = dVar2;
    *(undefined1 *)(param_1 + 0x328) = 1;
  }
  return;
}



// FUNCTION 147a31c40 FUN_147a31c40 body=222 status=ok
// SIG undefined FUN_147a31c40(void)

void FUN_147a31c40(longlong param_1,void *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [152];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *(longlong *)(param_1 + 0x318);
  lVar3 = FUN_145a6f438();
  lVar1 = *(longlong *)(lVar1 + 0x10);
  if ((*(int *)(lVar1 + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) goto LAB_147a31c89;
  if (*(longlong *)(param_1 + 0x318) == 0) {
LAB_147a31cb8:
    lVar4 = 0;
  }
  else {
    lVar3 = FUN_145a6f438();
    lVar1 = *(longlong *)(param_1 + 0x318);
    if (lVar1 == 0) goto LAB_147a31cb8;
    lVar4 = 0;
    if ((lVar3 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) {
      if (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38)) goto LAB_147a31cb8;
      lVar4 = 0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        lVar4 = lVar1;
      }
    }
  }
  memcpy(local_b8,param_2,0x98);
  FUN_147a31d20(lVar4,local_b8);
LAB_147a31c89:
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a31d20 FUN_147a31d20 body=195 status=ok
// SIG undefined FUN_147a31d20(void)

void FUN_147a31d20(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  
  cVar7 = FUN_147a31de4(param_2,param_1);
  if (cVar7 != '\0') {
    return;
  }
  *(undefined8 *)(param_1 + 0x48) = param_2[4];
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[3];
  *(undefined8 *)(param_1 + 0x38) = param_2[2];
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  *(undefined8 *)(param_1 + 0x70) = param_2[9];
  uVar4 = param_2[5];
  uVar5 = param_2[6];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  uVar4 = param_2[0xb];
  *(undefined8 *)(param_1 + 0x78) = param_2[10];
  *(undefined8 *)(param_1 + 0x80) = uVar4;
  uVar4 = param_2[0xd];
  *(undefined8 *)(param_1 + 0x88) = param_2[0xc];
  *(undefined8 *)(param_1 + 0x90) = uVar4;
  uVar4 = param_2[0xf];
  *(undefined8 *)(param_1 + 0x98) = param_2[0xe];
  *(undefined8 *)(param_1 + 0xa0) = uVar4;
  uVar4 = param_2[0x11];
  *(undefined8 *)(param_1 + 0xa8) = param_2[0x10];
  *(undefined8 *)(param_1 + 0xb0) = uVar4;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0x12);
  lVar9 = *(longlong *)(param_1 + 0x20);
  if (lVar9 != 0) {
    lVar8 = FUN_145a6f524();
    if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
        == lVar8 + 0x30)) goto LAB_147a31dd5;
  }
  lVar9 = 0;
LAB_147a31dd5:
  *(undefined1 *)(lVar9 + 0x328) = 1;
  return;
}



// FUNCTION 147a31de4 FUN_147a31de4 body=359 status=ok
// SIG undefined FUN_147a31de4(void)

byte FUN_147a31de4(double *param_1,longlong param_2)

{
  byte bVar1;
  
  if ((((((((*param_1 != *(double *)(param_2 + 0x28)) ||
           (NAN(*param_1) || NAN(*(double *)(param_2 + 0x28)))) ||
          (param_1[1] != *(double *)(param_2 + 0x30))) ||
         (((NAN(param_1[1]) || NAN(*(double *)(param_2 + 0x30)) ||
           (param_1[2] != *(double *)(param_2 + 0x38))) ||
          ((NAN(param_1[2]) || NAN(*(double *)(param_2 + 0x38)) ||
           ((param_1[3] != *(double *)(param_2 + 0x40) ||
            (NAN(param_1[3]) || NAN(*(double *)(param_2 + 0x40)))))))))) ||
        (param_1[5] != *(double *)(param_2 + 0x50))) ||
       ((((((NAN(param_1[5]) || NAN(*(double *)(param_2 + 0x50)) ||
            (param_1[6] != *(double *)(param_2 + 0x58))) ||
           (NAN(param_1[6]) || NAN(*(double *)(param_2 + 0x58)))) ||
          ((param_1[7] != *(double *)(param_2 + 0x60) ||
           (NAN(param_1[7]) || NAN(*(double *)(param_2 + 0x60)))))) ||
         (param_1[8] != *(double *)(param_2 + 0x68))) ||
        (((NAN(param_1[8]) || NAN(*(double *)(param_2 + 0x68)) ||
          (param_1[10] != *(double *)(param_2 + 0x78))) ||
         (((NAN(param_1[10]) || NAN(*(double *)(param_2 + 0x78)) ||
           (((param_1[0xb] != *(double *)(param_2 + 0x80) ||
             (NAN(param_1[0xb]) || NAN(*(double *)(param_2 + 0x80)))) ||
            (param_1[0xc] != *(double *)(param_2 + 0x88))))) ||
          (((NAN(param_1[0xc]) || NAN(*(double *)(param_2 + 0x88)) ||
            (param_1[0xd] != *(double *)(param_2 + 0x90))) ||
           (NAN(param_1[0xd]) || NAN(*(double *)(param_2 + 0x90)))))))))))) ||
      (((param_1[0xe] != *(double *)(param_2 + 0x98) ||
        (NAN(param_1[0xe]) || NAN(*(double *)(param_2 + 0x98)))) ||
       ((param_1[0xf] != *(double *)(param_2 + 0xa0) ||
        (((NAN(param_1[0xf]) || NAN(*(double *)(param_2 + 0xa0)) ||
          (param_1[0x10] != *(double *)(param_2 + 0xa8))) ||
         (NAN(param_1[0x10]) || NAN(*(double *)(param_2 + 0xa8)))))))))) ||
     ((param_1[0x11] != *(double *)(param_2 + 0xb0) ||
      (NAN(param_1[0x11]) || NAN(*(double *)(param_2 + 0xb0)))))) {
    bVar1 = 0;
  }
  else {
    bVar1 = -(*(float *)(param_2 + 0xb8) == *(float *)(param_1 + 0x12)) & 1;
  }
  return bVar1;
}



// FUNCTION 147a31f4c FUN_147a31f4c body=22 status=ok
// SIG undefined FUN_147a31f4c(void)

void FUN_147a31f4c(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 800) != param_2) {
    *(int *)(param_1 + 800) = param_2;
    *(undefined1 *)(param_1 + 0x328) = 1;
  }
  return;
}



// FUNCTION 147a31f62 FUN_147a31f62 body=80 status=ok
// SIG undefined FUN_147a31f62(void)

void FUN_147a31f62(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(float *)(param_1 + 0x28) == param_2) && (!NAN(*(float *)(param_1 + 0x28)) && !NAN(param_2))
     ) {
    return;
  }
  *(float *)(param_1 + 0x28) = param_2;
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar1 = FUN_145a6f524();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_147a31fa9;
  }
  lVar2 = 0;
LAB_147a31fa9:
  *(undefined1 *)(lVar2 + 0x328) = 1;
  return;
}



// FUNCTION 147a31fb2 FUN_147a31fb2 body=80 status=ok
// SIG undefined FUN_147a31fb2(void)

void FUN_147a31fb2(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(float *)(param_1 + 0x2c) == param_2) && (!NAN(*(float *)(param_1 + 0x2c)) && !NAN(param_2))
     ) {
    return;
  }
  *(float *)(param_1 + 0x2c) = param_2;
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar1 = FUN_145a6f524();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_147a31ff9;
  }
  lVar2 = 0;
LAB_147a31ff9:
  *(undefined1 *)(lVar2 + 0x328) = 1;
  return;
}



// FUNCTION 147a32002 FUN_147a32002 body=69 status=ok
// SIG undefined FUN_147a32002(void)

void FUN_147a32002(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x30) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x30) = param_2;
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar1 = FUN_145a6f524();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_147a3203a;
  }
  lVar2 = 0;
LAB_147a3203a:
  *(undefined1 *)(lVar2 + 0x328) = 1;
  return;
}



// FUNCTION 147a32068 FUN_147a32068 body=127 status=ok
// SIG undefined FUN_147a32068(void)

void FUN_147a32068(longlong param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  iVar3 = *param_4;
  uVar1 = *param_3;
  uVar2 = *param_2;
  *puVar5 = &PTR_LAB_14a899e90;
  *(undefined4 *)(puVar5 + 1) = uVar2;
  *(undefined4 *)((longlong)puVar5 + 0xc) = uVar1;
  *(float *)(puVar5 + 2) = (float)iVar3;
  plVar4 = *(longlong **)(param_1 + 0xd0);
  *(undefined8 **)(param_1 + 0xd0) = puVar5;
  if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147a320d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x10))(plVar4,1);
    return;
  }
  return;
}



// FUNCTION 147a320f0 FUN_147a320f0 body=79 status=ok
// SIG undefined FUN_147a320f0(void)

void FUN_147a320f0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar2 = &PTR_LAB_14a899eb0;
  plVar1 = *(longlong **)(param_1 + 0xd0);
  *(undefined8 **)(param_1 + 0xd0) = puVar2;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147a32135. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 147a32140 FUN_147a32140 body=85 status=ok
// SIG undefined FUN_147a32140(void)

void FUN_147a32140(longlong param_1,undefined8 param_2)

{
  FUN_147a32196(param_2,param_1 + 0x28,param_1 + 0x50,param_1 + 0x78,param_1 + 0x88,param_1 + 0x98,
                param_1 + 0xa8,param_1 + 0xb8);
  return;
}



// FUNCTION 147a32196 FUN_147a32196 body=250 status=ok
// SIG undefined FUN_147a32196(void)

void FUN_147a32196(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
  uVar1 = *param_8;
  *puVar9 = &PTR_LAB_14a899ed0;
  puVar9[5] = param_2[4];
  uVar6 = *param_2;
  uVar7 = param_2[1];
  uVar8 = param_2[3];
  puVar9[3] = param_2[2];
  puVar9[4] = uVar8;
  puVar9[1] = uVar6;
  puVar9[2] = uVar7;
  puVar9[10] = param_3[4];
  uVar6 = *param_3;
  uVar7 = param_3[1];
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar4 = *(undefined4 *)(param_3 + 3);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(undefined4 *)(puVar9 + 8) = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)((longlong)puVar9 + 0x44) = uVar3;
  *(undefined4 *)(puVar9 + 9) = uVar4;
  *(undefined4 *)((longlong)puVar9 + 0x4c) = uVar5;
  puVar9[6] = uVar6;
  puVar9[7] = uVar7;
  uVar6 = param_4[1];
  puVar9[0xb] = *param_4;
  puVar9[0xc] = uVar6;
  uVar6 = param_5[1];
  puVar9[0xd] = *param_5;
  puVar9[0xe] = uVar6;
  uVar6 = param_6[1];
  puVar9[0xf] = *param_6;
  puVar9[0x10] = uVar6;
  uVar3 = param_7[1];
  uVar4 = param_7[2];
  uVar5 = param_7[3];
  *(undefined4 *)(puVar9 + 0x11) = *param_7;
  *(undefined4 *)((longlong)puVar9 + 0x8c) = uVar3;
  *(undefined4 *)(puVar9 + 0x12) = uVar4;
  *(undefined4 *)((longlong)puVar9 + 0x94) = uVar5;
  *(undefined4 *)(puVar9 + 0x13) = uVar1;
  plVar2 = *(longlong **)(param_1 + 0xd0);
  *(undefined8 **)(param_1 + 0xd0) = puVar9;
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147a3227b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))(plVar2,1);
    return;
  }
  return;
}



// FUNCTION 147a32298 FUN_147a32298 body=79 status=ok
// SIG undefined FUN_147a32298(void)

void FUN_147a32298(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar2 = &PTR_LAB_14a899320;
  plVar1 = *(longlong **)(param_1 + 0xd0);
  *(undefined8 **)(param_1 + 0xd0) = puVar2;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147a322dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 147a322ea FUN_147a322ea body=154 status=ok
// SIG undefined FUN_147a322ea(void)

undefined8 FUN_147a322ea(undefined8 param_1)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_147d5d41c(&local_78);
  FUN_144aa2048(&local_78,param_1);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a32385 FUN_147a32385 body=564 status=ok
// SIG undefined FUN_147a32385(void)

undefined8
FUN_147a32385(short *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  short sVar1;
  short *psVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  short *local_e0;
  short *local_d8;
  undefined1 local_d0 [8];
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_2 == 0) {
    fVar5 = 0.0;
    uVar6 = 0;
  }
  else {
    if (*param_1 != 0) {
      fVar5 = -1.0;
      fVar7 = 0.0;
      psVar2 = param_1;
LAB_147a32441:
      local_e8 = param_6;
      local_f0 = param_5;
      local_f8 = param_4;
      local_e0 = param_1;
      local_d8 = psVar2;
      FUN_140eee6ba(local_d0,&local_e0,param_2);
      fVar5 = (float)(-(uint)(fVar5 < 0.0) & (uint)(float)local_c8 |
                     ~-(uint)(fVar5 < 0.0) & (uint)fVar5);
      do {
        sVar1 = *psVar2;
        if (sVar1 == 0x3c) {
          if (((psVar2[1] == 0x62) && (psVar2[2] == 0x72)) && (psVar2[3] == 0x3e)) {
            psVar2 = psVar2 + 4;
            goto LAB_147a324d0;
          }
        }
        else {
          if (sVar1 == 0) goto LAB_147a324d0;
          if (sVar1 == 10) goto LAB_147a324cc;
        }
        psVar2 = psVar2 + 1;
      } while( true );
    }
    fVar7 = 0.0;
    fVar5 = -1.0;
LAB_147a32503:
    uVar6 = 0;
    switch(param_7) {
    default:
      fVar5 = 0.0;
      uVar6 = 0;
      break;
    case 1:
      fVar5 = fVar7 * -0.5;
      uVar6 = 0;
      break;
    case 2:
      fVar5 = -fVar7;
      uVar6 = 0x80000000;
      break;
    case 3:
      break;
    }
    fVar5 = -fVar5;
    uVar6 = uVar6 ^ 0x80000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return CONCAT44(uVar6,fVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_147a324cc:
  psVar2 = psVar2 + 1;
LAB_147a324d0:
  dVar4 = local_c8;
  if (local_c8 <= 0.0) {
    fVar3 = (float)FUN_140324d4e(param_2);
    dVar4 = (double)fVar3;
  }
  fVar7 = (float)((double)fVar7 + dVar4);
  if (*psVar2 == 0) goto LAB_147a32503;
  goto LAB_147a32441;
}



// FUNCTION 147a325ba FUN_147a325ba body=727 status=ok
// SIG undefined FUN_147a325ba(void)

void FUN_147a325ba(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [80];
  longlong local_98;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  int iStack_88;
  undefined2 uStack_84;
  undefined1 local_82;
  undefined1 local_81;
  undefined7 uStack_80;
  undefined1 uStack_79;
  uint uStack_78;
  uint uStack_74;
  undefined7 uStack_70;
  undefined8 uStack_69;
  undefined8 local_61;
  undefined5 uStack_59;
  undefined3 uStack_54;
  undefined5 uStack_51;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f0 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cad3748) && (FUN_144b3d300(&DAT_14cad3748), DAT_14cad3748 == -1)) {
    FUN_1446ddc76(&DAT_14cad3740,"FTextRenderSceneProxy",1);
    _Init_thread_footer(&DAT_14cad3748);
  }
  local_98 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_8a = 0;
  iStack_88 = 0;
  uStack_84 = 0;
  local_82 = 1;
  local_81 = 0;
  uStack_80 = 0;
  uStack_79 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_69 = 0;
  local_61 = 0;
  uStack_59 = 0;
  uStack_54 = 0;
  uStack_51 = 0;
  DAT_14cad374c = DAT_14cad374c + 1;
  FUN_1474121aa((longlong)&local_61 + 1,DAT_14cad3740);
  lVar8 = *(longlong *)(param_1 + 0x3b0);
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    local_98 = lVar8;
  }
  iStack_88 = *(int *)(param_1 + 0x3c0) / 3;
  uStack_8c = 0;
  uStack_8a = 0;
  uStack_84 = 1;
  if (0 < *(int *)(param_1 + 0x5f0)) {
    lVar8 = 4;
    lVar9 = 0;
    local_f8 = param_1;
    do {
      uVar2 = uStack_78;
      lVar10 = *(longlong *)(param_1 + 0x5e8);
      lVar7 = *(longlong *)(param_1 + 0x330);
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      uVar3 = *(undefined4 *)(param_1 + 0x350);
      uVar4 = *(undefined4 *)(param_1 + 0x354);
      iVar5 = *(int *)(lVar10 + -4 + lVar8);
      iVar6 = *(int *)(lVar10 + lVar8);
      lVar10 = (longlong)(int)uStack_78;
      uStack_78 = uStack_78 + 1;
      if (uStack_74 < uStack_78) {
        FUN_1471b2628(&uStack_80,uVar2);
        param_1 = local_f8;
      }
      *(longlong *)(CONCAT17(uStack_79,uStack_80) + lVar10 * 0x28) = lVar7;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      lVar10 = CONCAT17(uStack_79,uStack_80) + lVar10 * 0x28;
      *(undefined8 *)(lVar10 + 8) = 3;
      *(undefined4 *)(lVar10 + 0x10) = uVar3;
      *(undefined4 *)(lVar10 + 0x14) = uVar4;
      *(int *)(lVar10 + 0x18) = iVar5 / 3;
      *(int *)(lVar10 + 0x1c) = iVar6 / 3;
      *(undefined2 *)(lVar10 + 0x20) = 0x100;
      *(undefined1 *)(lVar10 + 0x22) = 1;
      if (lVar7 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar7 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812(lVar7);
          param_1 = local_f8;
        }
      }
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x18;
    } while (lVar9 < *(int *)(param_1 + 0x5f0));
  }
  FUN_147377468(local_e8,&local_98);
  FUN_141793e86(param_1 + 0x698,local_e8);
  FUN_14005bca4(local_e8);
  FUN_14742848e(param_1 + 0x658,local_f0);
  FUN_14005bca4(&local_98);
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a3289e FUN_147a3289e body=975 status=ok
// SIG undefined FUN_147a3289e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a3289e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  int local_1a8;
  undefined8 local_1a4;
  undefined8 uStack_19c;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  longlong local_148 [4];
  int local_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined1 uStack_11c;
  undefined1 uStack_11b;
  undefined2 uStack_11a;
  undefined4 uStack_118;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined8 uStack_fc;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  int local_b4;
  int local_b0;
  undefined4 local_ac;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined4 local_94;
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
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (((*(int *)(DAT_14cad3730 + 4) != 0) && (*(char *)(param_1 + 0x718) == '\x01')) &&
     (*(int *)(param_1 + 0x3d0) != -1)) {
    local_148[1] = 0;
    local_148[2] = 0;
    uStack_120 = 0xff;
    uStack_11c = 0;
    uStack_11b = 1;
    uStack_118 = 0;
    local_d0 = 0;
    local_110 = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    local_100 = 0;
    uStack_fc = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    if (*(char *)(param_1 + 0x71a) == '\x01') {
      iVar1 = *(int *)(param_1 + 0x714);
      FUN_140064c53(*(undefined8 *)(param_1 + 0x708),*(undefined4 *)(param_1 + 0x710));
      *(undefined4 *)(param_1 + 0x710) = 0;
      if ((iVar1 < 0) && (*(int *)(param_1 + 0x714) != 0)) {
        FUN_147a3b5ca(param_1 + 0x708,0);
      }
      iVar1 = *(int *)(param_1 + 0x5f0);
      if (0 < (longlong)iVar1) {
        local_1d0 = param_1 + 0x3c8;
        local_1d8 = param_1 + 0x3a0;
        lVar9 = 0x10;
        lVar8 = 0;
        do {
          lVar3 = *(longlong *)(param_1 + 0x5e8);
          lVar4 = FUN_1474b7f2a(param_1 + 0x708);
          lVar5 = *(longlong *)(lVar4 + 0xa8);
          if (*(longlong *)(lVar4 + 0xa8) == 0) {
            lVar5 = lVar4;
          }
          *(longlong *)(lVar5 + 0x18) = local_1d8;
          *(longlong *)(lVar4 + 0xb8) = local_1d0;
          *(undefined4 *)(lVar5 + 0x58) = *(undefined4 *)(lVar3 + -0x10 + lVar9);
          *(int *)(lVar5 + 0x5c) = *(int *)(lVar3 + -0xc + lVar9) / 3;
          iVar2 = *(int *)(lVar3 + -8 + lVar9);
          *(int *)(lVar5 + 0x68) = iVar2;
          *(int *)(lVar5 + 0x6c) = iVar2 + *(int *)(lVar3 + -4 + lVar9) + -1;
          *(uint *)(lVar4 + 0xe4) = *(uint *)(lVar4 + 0xe4) & 0xfff03f7f;
          uVar6 = (**(code **)(**(longlong **)(lVar3 + lVar9) + 0x2f0))();
          *(undefined8 *)(lVar4 + 0xc0) = uVar6;
          uVar7 = *(uint *)(lVar4 + 0xe4) & 0xffefffff | (*(byte *)(param_1 + 0x652) ^ 1) << 0x14;
          *(uint *)(lVar4 + 0xe4) = uVar7;
          *(undefined1 *)(lVar4 + 0xde) = 0;
          *(uint *)(lVar4 + 0xe4) =
               uVar7 & 0xffdfffff | (uint)((*(byte *)(param_1 + 0x6c) & 6) != 0) << 0x15;
          *(int *)(lVar4 + 0xd8) = (int)lVar8;
          *(undefined2 *)(lVar4 + 0xdc) = 0;
          lVar8 = lVar8 + 1;
          lVar9 = lVar9 + 0x18;
        } while (iVar1 != lVar8);
      }
      *(undefined1 *)(param_1 + 0x71a) = 0;
    }
    else {
      uStack_11b = 0;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x708);
    iVar1 = *(int *)(param_1 + 0x710);
    lVar8 = param_1 + 0x658;
    local_e0 = param_1 + 0x100;
    uStack_d8 = 1;
    local_148[0] = lVar8;
    local_148[3] = uVar6;
    local_128 = iVar1;
    if ((*(char *)(param_1 + 0x719) == '\x01') && ((DAT_14cae9ea1 & 4) != 0)) {
      local_c8 = 0;
      local_c0 = iVar1;
      if (iVar1 == 0) {
        local_bc = 0;
      }
      else {
        FUN_147471e8a(&local_c8,iVar1,0);
        FUN_147471efc(local_c8,uVar6,iVar1);
      }
      local_b8 = 0;
      local_b4 = *(int *)(param_1 + 0x354);
      local_b0 = local_b4 * 0xc;
      local_ac = *(undefined4 *)(param_1 + 0x6a8);
      local_a0 = 0;
      local_98 = 1;
      local_94 = 0;
      local_88 = _DAT_14c846250;
      uStack_80 = DAT_14c846258;
      local_78 = _DAT_14c846260;
      uStack_70 = _DAT_14c846268;
      local_68 = _DAT_14c846270;
      uStack_60 = _DAT_14c846278;
      local_58 = DAT_14c846280;
      uStack_54 = DAT_14c846284;
      uStack_50 = DAT_14c846288;
      uStack_4c = DAT_14c84628c;
      local_a8 = lVar8;
      FUN_147ceea5a(param_2);
    }
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_148[1] = 0;
    local_148[2] = 0;
    local_1a4 = CONCAT44(uStack_120,local_124);
    uStack_19c = CONCAT44(uStack_118,CONCAT22(uStack_11a,CONCAT11(uStack_11b,uStack_11c)));
    local_1b0 = local_148[3];
    local_1a8 = local_128;
    local_190 = 0;
    uStack_188 = 0;
    local_110 = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    local_180 = local_100;
    uStack_17c = (undefined4)uStack_fc;
    uStack_178 = uStack_fc._4_4_;
    uStack_174 = uStack_f4;
    local_170 = 0;
    uStack_168 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_160 = (undefined4)local_e0;
    uStack_15c = local_e0._4_4_;
    uStack_158 = uStack_d8;
    uStack_154 = uStack_d4;
    local_150 = 0;
    local_d0 = 0;
    local_1c8 = lVar8;
    FUN_147cee9b0(param_2);
    FUN_1472aaabe(local_148);
  }
  if ((local_48 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a32c74 FUN_147a32c74 body=68 status=ok
// SIG undefined FUN_147a32c74(void)

void FUN_147a32c74(longlong param_1,int param_2,longlong param_3)

{
  if (param_2 != 0) {
    return;
  }
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_3);
  }
  *(longlong *)(param_1 + 0x630) = param_3;
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 147a32cb8 FUN_147a32cb8 body=57 status=ok
// SIG undefined FUN_147a32cb8(void)

void FUN_147a32cb8(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x630) = param_2;
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 147a32cf2 FUN_147a32cf2 body=53 status=ok
// SIG undefined FUN_147a32cf2(void)

longlong FUN_147a32cf2(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x630);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 147a32d2c FUN_147a32d2c body=107 status=ok
// SIG undefined FUN_147a32d2c(void)

void FUN_147a32d2c(longlong param_1,longlong param_2)

{
  float fVar1;
  
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x638) = param_2;
    if (param_2 == 0) {
      fVar1 = 1.0;
      goto LAB_147a32d66;
    }
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0x638) = param_2;
  }
  fVar1 = (float)FUN_140324d4e(param_2);
  fVar1 = 1.0 / fVar1;
LAB_147a32d66:
  *(float *)(param_1 + 0x654) = fVar1;
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 147a32d98 FUN_147a32d98 body=11 status=ok
// SIG undefined FUN_147a32d98(void)

void FUN_147a32d98(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x641) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 147a32da4 FUN_147a32da4 body=11 status=ok
// SIG undefined FUN_147a32da4(void)

void FUN_147a32da4(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x644) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 147a32db0 FUN_147a32db0 body=13 status=ok
// SIG undefined FUN_147a32db0(void)

void FUN_147a32db0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x648) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 147a32dbe FUN_147a32dbe body=13 status=ok
// SIG undefined FUN_147a32dbe(void)

void FUN_147a32dbe(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x64c) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 147a32dcc FUN_147a32dcc body=13 status=ok
// SIG undefined FUN_147a32dcc(void)

void FUN_147a32dcc(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x658) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 147a32dda FUN_147a32dda body=13 status=ok
// SIG undefined FUN_147a32dda(void)

void FUN_147a32dda(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x65c) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 147a32de8 FUN_147a32de8 body=219 status=ok
// SIG undefined FUN_147a32de8(void)

double * FUN_147a32de8(longlong *param_1,double *param_2)

{
  undefined1 auStack_a8 [32];
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_1 + 0x528))(param_1,&local_88,&DAT_14c846480);
  *param_2 = (local_88 + local_70) - (local_88 - local_70);
  param_2[1] = (local_80 + local_68) - (local_80 - local_68);
  param_2[2] = (local_78 + local_60) - (local_78 - local_60);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a32ec4 FUN_147a32ec4 body=219 status=ok
// SIG undefined FUN_147a32ec4(void)

double * FUN_147a32ec4(longlong *param_1,double *param_2)

{
  undefined1 auStack_a8 [32];
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_1 + 0x528))(param_1,&local_88,param_1 + 0x48);
  *param_2 = (local_88 + local_70) - (local_88 - local_70);
  param_2[1] = (local_80 + local_68) - (local_80 - local_68);
  param_2[2] = (local_78 + local_60) - (local_78 - local_60);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a32fa4 FUN_147a32fa4 body=158 status=ok
// SIG undefined FUN_147a32fa4(void)

void FUN_147a32fa4(undefined8 param_1,longlong param_2)

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
  FUN_147a33044(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a33044 FUN_147a33044 body=74 status=ok
// SIG undefined FUN_147a33044(void)

void FUN_147a33044(longlong param_1,byte param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if (((byte)*(uint *)(param_1 + 0x2d0) & 1) != param_2) {
      *(uint *)(param_1 + 0x2d0) = *(uint *)(param_1 + 0x2d0) & 0xfffffffe | (uint)param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a3308e FUN_147a3308e body=146 status=ok
// SIG undefined FUN_147a3308e(void)

void FUN_147a3308e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a33122(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a33122 FUN_147a33122 body=56 status=ok
// SIG undefined FUN_147a33122(void)

void FUN_147a33122(longlong param_1,int param_2)

{
  if (((((*(longlong *)(param_1 + 0xa8) != 0) &&
        ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
       ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) &&
     (*(int *)(param_1 + 0x2c4) != param_2)) {
    *(int *)(param_1 + 0x2c4) = param_2;
    FUN_1448215fa();
    return;
  }
  return;
}



// FUNCTION 147a3315e FUN_147a3315e body=196 status=ok
// SIG undefined FUN_147a3315e(void)

void FUN_147a3315e(longlong param_1,longlong param_2)

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
  if ((local_1c != 0) != (bool)(*(byte *)(param_1 + 0x310) & 1)) {
    *(byte *)(param_1 + 0x310) = *(byte *)(param_1 + 0x310) & 0xfe | local_1c != 0;
    FUN_1448215fa(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a33224 FUN_147a33224 body=156 status=ok
// SIG undefined FUN_147a33224(void)

void FUN_147a33224(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a332c2(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a332c2 FUN_147a332c2 body=65 status=ok
// SIG undefined FUN_147a332c2(void)

void FUN_147a332c2(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2a8) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2a8)) || NAN(param_2))) {
      *(float *)(param_1 + 0x2a8) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a33304 FUN_147a33304 body=156 status=ok
// SIG undefined FUN_147a33304(void)

void FUN_147a33304(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a333a2(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a333a2 FUN_147a333a2 body=65 status=ok
// SIG undefined FUN_147a333a2(void)

void FUN_147a333a2(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2ac) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2ac)) || NAN(param_2))) {
      *(float *)(param_1 + 0x2ac) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a333e4 FUN_147a333e4 body=156 status=ok
// SIG undefined FUN_147a333e4(void)

void FUN_147a333e4(undefined8 param_1,longlong param_2)

{
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
  FUN_140fa388e(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a33482 FUN_147a33482 body=156 status=ok
// SIG undefined FUN_147a33482(void)

void FUN_147a33482(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a33520(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a33520 FUN_147a33520 body=65 status=ok
// SIG undefined FUN_147a33520(void)

void FUN_147a33520(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2c0) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2c0)) || NAN(param_2))) {
      *(float *)(param_1 + 0x2c0) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a33562 FUN_147a33562 body=156 status=ok
// SIG undefined FUN_147a33562(void)

void FUN_147a33562(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a33600(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a33600 FUN_147a33600 body=73 status=ok
// SIG undefined FUN_147a33600(void)

void FUN_147a33600(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    param_2 = param_2 * 0.104166664;
    if ((*(float *)(param_1 + 0x2dc) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2dc)) || NAN(param_2))) {
      *(float *)(param_1 + 0x2dc) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a3364a FUN_147a3364a body=156 status=ok
// SIG undefined FUN_147a3364a(void)

void FUN_147a3364a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a336e8(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a336e8 FUN_147a336e8 body=65 status=ok
// SIG undefined FUN_147a336e8(void)

void FUN_147a336e8(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2dc) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2dc)) || NAN(param_2))) {
      *(float *)(param_1 + 0x2dc) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a3372e FUN_147a3372e body=198 status=ok
// SIG undefined FUN_147a3372e(void)

void FUN_147a3372e(longlong param_1,longlong param_2)

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
  if (((*(byte *)(param_1 + 0x310) & 2) == 0) == (local_1c != 0)) {
    *(byte *)(param_1 + 0x310) = *(byte *)(param_1 + 0x310) & 0xfd | (local_1c != 0) * '\x02';
    FUN_1448215fa(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a337f6 FUN_147a337f6 body=156 status=ok
// SIG undefined FUN_147a337f6(void)

void FUN_147a337f6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a33894(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a33894 FUN_147a33894 body=73 status=ok
// SIG undefined FUN_147a33894(void)

void FUN_147a33894(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    param_2 = param_2 * 0.3;
    if ((*(float *)(param_1 + 0x2ec) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2ec)) || NAN(param_2))) {
      *(float *)(param_1 + 0x2ec) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a338de FUN_147a338de body=156 status=ok
// SIG undefined FUN_147a338de(void)

void FUN_147a338de(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a3397c(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a3397c FUN_147a3397c body=65 status=ok
// SIG undefined FUN_147a3397c(void)

void FUN_147a3397c(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2ec) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2ec)) || NAN(param_2))) {
      *(float *)(param_1 + 0x2ec) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a339be FUN_147a339be body=156 status=ok
// SIG undefined FUN_147a339be(void)

void FUN_147a339be(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a33a5c(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a33a5c FUN_147a33a5c body=65 status=ok
// SIG undefined FUN_147a33a5c(void)

void FUN_147a33a5c(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2f8) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2f8)) || NAN(param_2))) {
      *(float *)(param_1 + 0x2f8) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a33a9e FUN_147a33a9e body=156 status=ok
// SIG undefined FUN_147a33a9e(void)

void FUN_147a33a9e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a33b3c(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a33b3c FUN_147a33b3c body=65 status=ok
// SIG undefined FUN_147a33b3c(void)

void FUN_147a33b3c(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2e8) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2e8)) || NAN(param_2))) {
      *(float *)(param_1 + 0x2e8) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a33b7e FUN_147a33b7e body=156 status=ok
// SIG undefined FUN_147a33b7e(void)

void FUN_147a33b7e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a33c1c(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a33c1c FUN_147a33c1c body=65 status=ok
// SIG undefined FUN_147a33c1c(void)

void FUN_147a33c1c(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2d4) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2d4)) || NAN(param_2))) {
      *(float *)(param_1 + 0x2d4) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a33c5e FUN_147a33c5e body=156 status=ok
// SIG undefined FUN_147a33c5e(void)

void FUN_147a33c5e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a33cfc(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a33cfc FUN_147a33cfc body=65 status=ok
// SIG undefined FUN_147a33cfc(void)

void FUN_147a33cfc(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2fc) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2fc)) || NAN(param_2))) {
      *(float *)(param_1 + 0x2fc) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a33d3e FUN_147a33d3e body=156 status=ok
// SIG undefined FUN_147a33d3e(void)

void FUN_147a33d3e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a33ddc(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a33ddc FUN_147a33ddc body=65 status=ok
// SIG undefined FUN_147a33ddc(void)

void FUN_147a33ddc(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 700) != param_2) || (NAN(*(float *)(param_1 + 700)) || NAN(param_2)))
    {
      *(float *)(param_1 + 700) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a33e1e FUN_147a33e1e body=156 status=ok
// SIG undefined FUN_147a33e1e(void)

void FUN_147a33e1e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a33ebc(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a33ebc FUN_147a33ebc body=65 status=ok
// SIG undefined FUN_147a33ebc(void)

void FUN_147a33ebc(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2b4) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2b4)) || NAN(param_2))) {
      *(float *)(param_1 + 0x2b4) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a33efe FUN_147a33efe body=156 status=ok
// SIG undefined FUN_147a33efe(void)

void FUN_147a33efe(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a33f9c(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a33f9c FUN_147a33f9c body=65 status=ok
// SIG undefined FUN_147a33f9c(void)

void FUN_147a33f9c(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2b0) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2b0)) || NAN(param_2))) {
      *(float *)(param_1 + 0x2b0) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a33fde FUN_147a33fde body=156 status=ok
// SIG undefined FUN_147a33fde(void)

void FUN_147a33fde(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a3407c(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a3407c FUN_147a3407c body=65 status=ok
// SIG undefined FUN_147a3407c(void)

void FUN_147a3407c(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2d8) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2d8)) || NAN(param_2))) {
      *(float *)(param_1 + 0x2d8) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a340d8 FUN_147a340d8 body=75 status=ok
// SIG undefined FUN_147a340d8(void)

void FUN_147a340d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1463c03fa(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a3415c FUN_147a3415c body=37 status=ok
// SIG undefined FUN_147a3415c(void)

void FUN_147a3415c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147a34182();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147a34182 FUN_147a34182 body=82 status=ok
// SIG undefined FUN_147a34182(void)

byte FUN_147a34182(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if (lVar4 == 0) {
    lVar4 = FUN_1448abda6(param_1);
    if (lVar4 != 0) goto LAB_147a34196;
  }
  else {
LAB_147a34196:
    lVar3 = FUN_14011c706();
    if (lVar3 != 0) {
      bVar1 = FUN_147dd15f2(lVar3,param_1 + 0x110);
      bVar2 = 0;
      goto LAB_147a341b6;
    }
  }
  bVar1 = (byte)lVar4;
  bVar2 = 1;
LAB_147a341b6:
  return bVar2 | bVar1 & 1;
}



// FUNCTION 147a341fe FUN_147a341fe body=99 status=ok
// SIG undefined FUN_147a341fe(void)

void FUN_147a341fe(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  plVar1 = (longlong *)FUN_144aff0e0();
  FUN_14482855a(param_1,plVar1);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cbb8);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a34262 FUN_147a34262 body=41 status=ok
// SIG undefined FUN_147a34262(void)

void FUN_147a34262(undefined8 param_1,longlong *param_2)

{
  FUN_14482855a();
                    /* WARNING: Could not recover jumptable at 0x000147a34288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  return;
}



// FUNCTION 147a3428c FUN_147a3428c body=86 status=ok
// SIG undefined FUN_147a3428c(void)

void FUN_147a3428c(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_144a3ee64();
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if (lVar2 == 0) {
    FUN_1448abda6(param_1);
    lVar2 = *(longlong *)(param_1 + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6(param_1);
    }
  }
  uVar1 = FUN_14011c706(lVar2);
  FUN_14011c8a2(uVar1,param_1 + 0x110);
  return;
}



// FUNCTION 147a342e2 FUN_147a342e2 body=86 status=ok
// SIG undefined FUN_147a342e2(void)

void FUN_147a342e2(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1448b6576();
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if (lVar2 == 0) {
    FUN_1448abda6(param_1);
    lVar2 = *(longlong *)(param_1 + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6(param_1);
    }
  }
  uVar1 = FUN_14011c706(lVar2);
  FUN_145a00c8a(uVar1,param_1 + 0x110);
  return;
}



// FUNCTION 147a34338 FUN_147a34338 body=155 status=ok
// SIG undefined FUN_147a34338(void)

void FUN_147a34338(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140136774();
  local_38 = 0x601d1886;
  uStack_34 = 0xac644f84;
  uStack_30 = 0xaa16d3de;
  uStack_2c = 0xdeac7d6;
  iVar1 = FUN_1448a256a(param_1);
  if ((iVar1 < 0x51) && (lVar2 = *(longlong *)(param_1 + 0x130), lVar2 != 0)) {
    iVar1 = *(int *)(param_1 + 0x128);
    *(uint *)(param_1 + 0x128) = iVar1 + 1U;
    if (*(uint *)(param_1 + 300) < iVar1 + 1U) {
      FUN_1446f84a2((longlong *)(param_1 + 0x120),iVar1);
      lVar2 = *(longlong *)(param_1 + 0x130);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar1 * 8) = lVar2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a343d4 FUN_147a343d4 body=630 status=ok
// SIG undefined FUN_147a343d4(void)

ulonglong FUN_147a343d4(longlong param_1,double *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  undefined8 *puVar14;
  double *pdVar15;
  uint uVar16;
  undefined2 *puVar17;
  undefined8 unaff_RBX;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  int local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar1 = *(char *)(param_1 + 0x59);
  if (cVar1 == '\x01') {
    lVar2 = *(longlong *)(param_1 + -0x68);
    local_68 = *(double *)(lVar2 + 0x18);
    FUN_1400021e4(&local_68,&local_88);
    puVar17 = local_88;
    if ((int)uStack_80 == 0) {
      puVar17 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_68,puVar17,1);
    *param_2 = local_68;
    puVar17 = local_88;
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar19 = SUB84(puVar17,0);
    lVar3 = *(longlong *)(lVar2 + 0x1c8);
    if (lVar3 == 0) {
      puVar14 = &DAT_14c8464e0;
      uVar18 = (undefined4)DAT_14c8464f0;
      uVar20 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar18 = (undefined4)*(undefined8 *)(lVar3 + 0x270);
      uVar20 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x270) >> 0x20);
      puVar14 = (undefined8 *)(lVar3 + 0x260);
    }
    uVar6 = *(undefined4 *)((longlong)puVar14 + 4);
    uVar7 = *(undefined4 *)(puVar14 + 1);
    uVar8 = *(undefined4 *)((longlong)puVar14 + 0xc);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)puVar14;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
    *(undefined4 *)(param_2 + 2) = uVar7;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar8;
    param_2[3] = (double)CONCAT44(uVar20,uVar18);
    lVar2 = *(longlong *)(lVar2 + 0x1c8);
    if (lVar2 == 0) {
      local_58 = DAT_14c846508;
      uVar19 = (undefined4)DAT_14c8464f8;
      uVar18 = DAT_14c8464f8._4_4_;
      uStack_60 = (undefined4)DAT_14c846500;
      uStack_5c = DAT_14c846500._4_4_;
    }
    else {
      puVar17 = *(undefined2 **)(lVar2 + 0x240);
      dVar9 = *(double *)(lVar2 + 0x248);
      dVar10 = *(double *)(lVar2 + 0x250);
      dVar11 = *(double *)(lVar2 + 600);
      pdVar15 = *(double **)(lVar2 + 0x228);
      local_88 = puVar17;
      uStack_80 = dVar9;
      local_78 = dVar10;
      uStack_70 = dVar11;
      if (pdVar15 == (double *)0x0) {
        uVar19 = 0x40;
        pdVar15 = (double *)FUN_14001cc68(0x40,0x10);
        dVar12 = DAT_14c8463d8;
        *pdVar15 = DAT_14c8463d0;
        pdVar15[1] = dVar12;
        dVar12 = DAT_14c8463e8;
        pdVar15[2] = DAT_14c8463e0;
        pdVar15[3] = dVar12;
        dVar12 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
        pdVar15[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
        pdVar15[5] = dVar12;
        puVar14 = DAT_14c846508;
        pdVar15[6] = (double)DAT_14c846508;
        *(double **)(lVar2 + 0x228) = pdVar15;
      }
      auVar4._8_4_ = (int)-(ulonglong)(dVar9 != pdVar15[1]);
      auVar4._0_8_ = -(ulonglong)((double)puVar17 != *pdVar15);
      auVar4._12_4_ = (int)(-(ulonglong)(dVar9 != pdVar15[1]) >> 0x20);
      iVar13 = movmskpd((int)puVar14,auVar4);
      auVar5._8_4_ = (int)-(ulonglong)(dVar11 != pdVar15[3]);
      auVar5._0_8_ = -(ulonglong)(dVar10 != pdVar15[2]);
      auVar5._12_4_ = (int)(-(ulonglong)(dVar11 != pdVar15[3]) >> 0x20);
      uVar16 = movmskpd(uVar19,auVar5);
      if ((uVar16 & 0x3fffffff) != 0 || iVar13 != 0) {
        *(undefined4 *)(pdVar15 + 2) = (undefined4)local_78;
        *(undefined4 *)((longlong)pdVar15 + 0x14) = local_78._4_4_;
        *(undefined4 *)(pdVar15 + 3) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)pdVar15 + 0x1c) = uStack_70._4_4_;
        *(undefined4 *)pdVar15 = (undefined4)local_88;
        *(undefined4 *)((longlong)pdVar15 + 4) = local_88._4_4_;
        *(int *)(pdVar15 + 1) = (int)uStack_80;
        *(undefined4 *)((longlong)pdVar15 + 0xc) = uStack_80._4_4_;
        FUN_1448052ee(&local_88,&local_68);
        pdVar15[6] = (double)local_58;
        pdVar15[4] = local_68;
        pdVar15[5] = (double)CONCAT44(uStack_5c,uStack_60);
      }
      local_58 = (undefined8 *)pdVar15[6];
      uVar19 = *(undefined4 *)(pdVar15 + 4);
      uVar18 = *(undefined4 *)((longlong)pdVar15 + 0x24);
      uStack_60 = *(undefined4 *)(pdVar15 + 5);
      uStack_5c = *(undefined4 *)((longlong)pdVar15 + 0x2c);
    }
    local_68 = (double)CONCAT44(uVar18,uVar19);
    param_2[6] = (double)local_58;
    *(undefined4 *)(param_2 + 4) = uVar19;
    *(undefined4 *)((longlong)param_2 + 0x24) = uVar18;
    *(undefined4 *)(param_2 + 5) = uStack_60;
    *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_5c;
    *(undefined1 *)(param_2 + 7) = *(undefined1 *)(param_1 + 0x5a);
    *(undefined4 *)((longlong)param_2 + 0x5c) = *(undefined4 *)(param_1 + 0x28);
    *(undefined1 *)(param_2 + 0xc) = *(undefined1 *)(param_1 + 8);
    *(undefined1 *)((longlong)param_2 + 0x3a) = *(undefined1 *)(param_1 + 0x58);
    if (*(int *)(param_1 + 0x50) != 0) {
      FUN_147a3464c(param_2 + 0x21,param_1 + 0x48);
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      local_98 = *(undefined8 *)(param_1 + 0x10);
      local_90 = *(int *)(param_1 + 0x18);
      FUN_140ce09a0(param_2 + 0xd);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1) & 0xffffffff;
}



// FUNCTION 147a3464c FUN_147a3464c body=102 status=ok
// SIG undefined FUN_147a3464c(void)

void FUN_147a3464c(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140ef2624(param_1,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 0x48 + *param_1),(void *)*param_2,(longlong)(int)uVar1 * 0x48)
    ;
    return;
  }
  return;
}



// FUNCTION 147a346b6 FUN_147a346b6 body=75 status=ok
// SIG undefined FUN_147a346b6(void)

void FUN_147a346b6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_147a34702(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a34702 FUN_147a34702 body=163 status=ok
// SIG undefined FUN_147a34702(void)

void FUN_147a34702(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 1;
  }
  FUN_147a450ac(param_1);
  if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0xa8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa0);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if ((lVar3 != 0) && ((*(uint *)(lVar3 + 8) >> 10 & 1) != 0)) {
        lVar4 = FUN_144b00dc8(lVar3);
        if (lVar4 != 0) {
          FUN_1427ff290(lVar4 + 0x240,lVar3);
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  FUN_147a34832(param_1,1);
  return;
}



// FUNCTION 147a347a6 FUN_147a347a6 body=114 status=ok
// SIG undefined FUN_147a347a6(void)

void FUN_147a347a6(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  switchD_143c3d4dc::caseD_2e();
  iVar1 = *(int *)(param_1 + 0xa8);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xa0);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      if (lVar4 != 0) {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1447f76d2(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar4;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 147a34818 FUN_147a34818 body=26 status=ok
// SIG undefined FUN_147a34818(void)

void FUN_147a34818(longlong param_1)

{
  FUN_1446e0b6e();
  *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xfe;
  return;
}



// FUNCTION 147a34832 FUN_147a34832 body=553 status=ok
// SIG undefined FUN_147a34832(void)

void FUN_147a34832(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  code *local_60;
  undefined4 local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)(param_1 + 0xc0) & 2) == 0) {
    local_70 = CONCAT44(local_70._4_4_,param_2);
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 2;
    if ((longlong)*(int *)(param_1 + 0xb8) != 0) {
      plVar6 = *(longlong **)(param_1 + 0xb0);
      plVar5 = plVar6 + *(int *)(param_1 + 0xb8);
      do {
        lVar2 = *plVar6;
        if (lVar2 != 0) {
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar2);
          }
          iVar1 = *(int *)(param_1 + 0xa8);
          if ((longlong)iVar1 != 0) {
            lVar3 = *(longlong *)(param_1 + 0xa0);
            uVar7 = 0;
            bVar4 = DAT_14c950c29;
            do {
              if ((bVar4 & 1) != 0) {
                FUN_1456cec3c(lVar2);
                bVar4 = DAT_14c950c29;
              }
              if (*(longlong *)(lVar3 + uVar7) == lVar2) {
                if ((~uVar7 & 0x7fffffff8) != 0) goto LAB_147a3497a;
                break;
              }
              uVar7 = uVar7 + 8;
            } while ((longlong)iVar1 * 8 != uVar7);
          }
          FUN_140457ffc(lVar2 + 0x80,param_1);
        }
LAB_147a3497a:
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar5);
    }
    local_68 = param_1 + 0xb0;
    FUN_1434a0666(param_1,((int)local_70 - 0x10U & 0xffffffef) == 0);
    local_70 = param_1 + 0xa0;
    if ((longlong)*(int *)(param_1 + 0xa8) != 0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
      plVar6 = plVar5 + *(int *)(param_1 + 0xa8);
      do {
        lVar2 = *plVar5;
        if (lVar2 != param_1 && lVar2 != 0) {
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar2);
          }
          iVar1 = *(int *)(param_1 + 0xb8);
          if ((longlong)iVar1 != 0) {
            lVar3 = *(longlong *)(param_1 + 0xb0);
            uVar7 = 0;
            bVar4 = DAT_14c950c29;
            do {
              if ((bVar4 & 1) != 0) {
                FUN_1456cec3c(lVar2);
                bVar4 = DAT_14c950c29;
              }
              if (*(longlong *)(lVar3 + uVar7) == lVar2) {
                if ((~uVar7 & 0x7fffffff8) != 0) goto LAB_147a34a12;
                break;
              }
              uVar7 = uVar7 + 8;
            } while ((longlong)iVar1 * 8 != uVar7);
          }
          local_60 = FUN_147a34832;
          local_58 = 0;
          FUN_147a34bc4(lVar2 + 0x80,local_50,param_1,&local_60);
        }
LAB_147a34a12:
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar6);
    }
    FUN_147a34ccc(local_68,local_70);
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xfd;
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a34a5c FUN_147a34a5c body=359 status=ok
// SIG undefined FUN_147a34a5c(void)

longlong FUN_147a34a5c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  size_t sVar5;
  longlong lVar6;
  longlong *plVar7;
  size_t _Size;
  undefined1 auStack_88 [32];
  void *local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_147a3b9e8(param_2,iVar2);
  }
  *(longlong *)(*param_2 + (longlong)iVar2 * 8) = param_1;
  if ((longlong)*(int *)(param_1 + 0xa8) != 0) {
    plVar7 = *(longlong **)(param_1 + 0xa0);
    plVar1 = plVar7 + *(int *)(param_1 + 0xa8);
    do {
      if (*plVar7 != 0) {
        lVar4 = FUN_145b55d82();
        lVar6 = *plVar7;
        if ((((lVar6 != 0) && (lVar4 != 0)) && (lVar3 = *(longlong *)(lVar6 + 0x10), lVar3 != 0)) &&
           ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
             lVar4 + 0x30)))) {
          iVar2 = (int)param_2[1];
          if ((longlong)iVar2 == 0) {
            local_68 = (void *)0x0;
            uStack_60 = 0;
          }
          else {
            _Src = (void *)*param_2;
            _Size = (longlong)iVar2 << 3;
            sVar5 = 0;
            do {
              if (*(longlong *)((longlong)_Src + sVar5) == lVar6) goto LAB_147a34b5b;
              sVar5 = sVar5 + 8;
            } while (_Size != sVar5);
            local_68 = (void *)0x0;
            uStack_60 = CONCAT44(uStack_60._4_4_,iVar2);
            FUN_147a3ba6e(&local_68);
            memcpy(local_68,_Src,_Size);
          }
          lVar6 = FUN_147a34a5c(lVar6,&local_68);
          if (lVar6 != 0) goto LAB_147a34b5b;
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
  }
  lVar6 = 0;
LAB_147a34b5b:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 147a34bc4 FUN_147a34bc4 body=262 status=ok
// SIG undefined FUN_147a34bc4(void)

undefined8
FUN_147a34bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14a899ff0;
  *(undefined4 *)(local_48 + 1) = 1;
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
  *local_48 = &PTR_FUN_14a899f80;
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



// FUNCTION 147a34ccc FUN_147a34ccc body=79 status=ok
// SIG undefined FUN_147a34ccc(void)

undefined8 * FUN_147a34ccc(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147a3b904(param_1,iVar1);
      FUN_147a3b966(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147a34d20 FUN_147a34d20 body=75 status=ok
// SIG undefined FUN_147a34d20(void)

void FUN_147a34d20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_147a34d6c(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a34d6c FUN_147a34d6c body=163 status=ok
// SIG undefined FUN_147a34d6c(void)

void FUN_147a34d6c(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 1;
  }
  FUN_1414743fa(param_1);
  if ((*(byte *)(param_1 + 0xd0) & 1) == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0xb8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xb0);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if ((lVar3 != 0) && ((*(uint *)(lVar3 + 8) >> 10 & 1) != 0)) {
        lVar4 = FUN_144b00dc8(lVar3);
        if (lVar4 != 0) {
          FUN_1427ff290(lVar4 + 0x240,lVar3);
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  FUN_147a3502a(param_1,1);
  return;
}



// FUNCTION 147a34e10 FUN_147a34e10 body=114 status=ok
// SIG undefined FUN_147a34e10(void)

void FUN_147a34e10(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_147a492da();
  iVar1 = *(int *)(param_1 + 0xb8);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xb0);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      if (lVar4 != 0) {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1447f76d2(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar4;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 147a34e8e FUN_147a34e8e body=339 status=ok
// SIG undefined FUN_147a34e8e(void)

longlong FUN_147a34e8e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  size_t sVar4;
  longlong lVar5;
  longlong *plVar6;
  size_t _Size;
  undefined1 auStack_88 [32];
  void *local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_147a3bac8(param_2,iVar2);
  }
  *(longlong *)(*param_2 + (longlong)iVar2 * 8) = param_1;
  if ((longlong)*(int *)(param_1 + 0xb8) != 0) {
    plVar6 = *(longlong **)(param_1 + 0xb0);
    plVar1 = plVar6 + *(int *)(param_1 + 0xb8);
    do {
      lVar5 = *plVar6;
      if (lVar5 != 0) {
        lVar3 = FUN_145b55e6c();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          iVar2 = (int)param_2[1];
          if ((longlong)iVar2 == 0) {
            local_68 = (void *)0x0;
            uStack_60 = 0;
          }
          else {
            _Src = (void *)*param_2;
            _Size = (longlong)iVar2 << 3;
            sVar4 = 0;
            do {
              if (*(longlong *)((longlong)_Src + sVar4) == lVar5) goto LAB_147a34f79;
              sVar4 = sVar4 + 8;
            } while (_Size != sVar4);
            local_68 = (void *)0x0;
            uStack_60 = CONCAT44(uStack_60._4_4_,iVar2);
            FUN_147a3bb4e(&local_68);
            memcpy(local_68,_Src,_Size);
          }
          lVar5 = FUN_147a34e8e(lVar5,&local_68);
          if (lVar5 != 0) goto LAB_147a34f79;
        }
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  lVar5 = 0;
LAB_147a34f79:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 147a34fe2 FUN_147a34fe2 body=65 status=ok
// SIG undefined FUN_147a34fe2(void)

void FUN_147a34fe2(longlong param_1)

{
  if (((*(byte *)(param_1 + 0xd0) & 5) == 0) &&
     (*(undefined4 *)(param_1 + 0xb8) = 0, *(int *)(param_1 + 0xbc) != 0)) {
    FUN_14747d916(param_1 + 0xb0,0);
  }
  FUN_140c2dfae(param_1);
  return;
}



// FUNCTION 147a3502a FUN_147a3502a body=527 status=ok
// SIG undefined FUN_147a3502a(void)

void FUN_147a3502a(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)(param_1 + 0xd0) & 2) == 0) {
    local_60 = CONCAT44(local_60._4_4_,param_2);
    *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 2;
    if ((longlong)*(int *)(param_1 + 200) != 0) {
      plVar6 = *(longlong **)(param_1 + 0xc0);
      plVar5 = plVar6 + *(int *)(param_1 + 200);
      do {
        lVar2 = *plVar6;
        if (lVar2 != 0) {
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar2);
          }
          iVar1 = *(int *)(param_1 + 0xb8);
          if ((longlong)iVar1 != 0) {
            lVar3 = *(longlong *)(param_1 + 0xb0);
            uVar7 = 0;
            bVar4 = DAT_14c950c29;
            do {
              if ((bVar4 & 1) != 0) {
                FUN_1456cec3c(lVar2);
                bVar4 = DAT_14c950c29;
              }
              if (*(longlong *)(lVar3 + uVar7) == lVar2) {
                if ((~uVar7 & 0x7fffffff8) != 0) goto LAB_147a35175;
                break;
              }
              uVar7 = uVar7 + 8;
            } while ((longlong)iVar1 * 8 != uVar7);
          }
          FUN_140457ffc(lVar2 + 0x98,param_1);
        }
LAB_147a35175:
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar5);
    }
    local_58 = param_1 + 0xc0;
    FUN_1434a135a(param_1,((int)local_60 - 0x10U & 0xffffffef) == 0);
    local_60 = param_1 + 0xb0;
    if ((longlong)*(int *)(param_1 + 0xb8) != 0) {
      plVar5 = *(longlong **)(param_1 + 0xb0);
      plVar6 = plVar5 + *(int *)(param_1 + 0xb8);
      do {
        lVar2 = *plVar5;
        if (lVar2 != param_1 && lVar2 != 0) {
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar2);
          }
          iVar1 = *(int *)(param_1 + 200);
          if ((longlong)iVar1 != 0) {
            lVar3 = *(longlong *)(param_1 + 0xc0);
            uVar7 = 0;
            bVar4 = DAT_14c950c29;
            do {
              if ((bVar4 & 1) != 0) {
                FUN_1456cec3c(lVar2);
                bVar4 = DAT_14c950c29;
              }
              if (*(longlong *)(lVar3 + uVar7) == lVar2) {
                if ((~uVar7 & 0x7fffffff8) != 0) goto LAB_147a35209;
                break;
              }
              uVar7 = uVar7 + 8;
            } while ((longlong)iVar1 * 8 != uVar7);
          }
          FUN_147a3523a(lVar2 + 0x98,local_50,param_1);
        }
LAB_147a35209:
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar6);
    }
    FUN_147a35338(local_58,local_60);
    *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) & 0xfd;
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a3523a FUN_147a3523a body=252 status=ok
// SIG undefined FUN_147a3523a(void)

undefined8 FUN_147a3523a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14a899ff0;
  *(undefined4 *)(local_38 + 1) = 1;
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
  *local_38 = &PTR_FUN_14a89a060;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_147a3502a;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a35338 FUN_147a35338 body=79 status=ok
// SIG undefined FUN_147a35338(void)

undefined8 * FUN_147a35338(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147a3be14(param_1,iVar1);
      FUN_147a3be76(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147a35388 FUN_147a35388 body=18 status=ok
// SIG undefined FUN_147a35388(void)

longlong FUN_147a35388(void)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (DAT_14cad39b0 != -1) {
    lVar1 = DAT_14cad39b0;
  }
  return lVar1;
}


