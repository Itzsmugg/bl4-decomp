// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149248914 FUN_149248914 body=262 status=ok
// SIG undefined FUN_149248914(void)

undefined8 FUN_149248914(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  longlong local_e8 [2];
  longlong local_d8 [2];
  undefined **local_c8;
  undefined1 local_c0;
  undefined8 local_bc;
  undefined1 local_b4;
  undefined1 local_b3;
  undefined8 local_a8 [12];
  undefined1 local_48;
  undefined8 local_44;
  undefined2 local_3c;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c8 = &PTR_FUN_14bbf2700;
  puVar2 = &DAT_14c846480;
  puVar3 = local_a8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_48 = 0;
  local_44 = 0;
  local_3c = 0xffff;
  local_38 = 0xffffffff;
  local_bc = *(undefined8 *)(param_1 + 8);
  local_c0 = 4;
  local_b4 = *(undefined1 *)(param_1 + 0x10);
  local_b3 = 1;
  FUN_149248a1c(param_2,&local_c8);
  FUN_140056680(local_d8,L"Item.Name");
  FUN_140056680(local_e8,L"Control");
  local_f8 = 1;
  FUN_1490fb142(param_2,local_e8,local_d8,1);
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149248a1c FUN_149248a1c body=211 status=ok
// SIG undefined FUN_149248a1c(void)

undefined8 * FUN_149248a1c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
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
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466f617e();
  param_1[2] = uVar1;
  uVar1 = FUN_1466f8754();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149248af0 FUN_149248af0 body=90 status=ok
// SIG undefined FUN_149248af0(void)

void FUN_149248af0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)*param_2;
  uVar2 = *puVar1;
  uVar3 = puVar1[4];
  lVar4 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar5 = FUN_144828ac0(puVar1 + 8,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar4 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar4 * 0x14));
  FUN_149248bc6(*(undefined8 *)(param_1 + 0xc0),uVar2,uVar3,uVar5);
  return;
}



// FUNCTION 149248b50 FUN_149248b50 body=117 status=ok
// SIG undefined FUN_149248b50(void)

void FUN_149248b50(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_149248bc6(local_1f8,param_1 + 8,param_1 + 0x10,param_1 + 0x18);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149248bc6 FUN_149248bc6 body=159 status=ok
// SIG undefined FUN_149248bc6(void)

void FUN_149248bc6(longlong param_1,undefined8 *param_2,undefined1 *param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined1 auStack_c8 [36];
  undefined1 local_a4 [4];
  undefined8 local_a0;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 != 0) {
    local_a4[0] = 4;
    local_a0 = *param_2;
    cVar2 = FUN_144828dba(param_4,local_a4,lVar1);
    if (cVar2 != '\0') {
      uVar3 = 0xffffffff;
      if (*(ushort *)(param_4 + 0xc) != 0xffff) {
        uVar3 = (uint)*(ushort *)(param_4 + 0xc);
      }
      FUN_149181d3e(lVar1,local_a4,uVar3,1);
      *param_3 = local_a4[0];
    }
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149248c66 FUN_149248c66 body=118 status=ok
// SIG undefined FUN_149248c66(void)

void FUN_149248c66(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)*param_2;
  uVar2 = *puVar1;
  uVar3 = puVar1[4];
  uVar4 = puVar1[8];
  uVar5 = puVar1[0xc];
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0(puVar1 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  FUN_149248d64(*(undefined8 *)(param_1 + 0xc0),uVar2,uVar3,uVar4,uVar5,uVar7);
  return;
}



// FUNCTION 149248cdc FUN_149248cdc body=135 status=ok
// SIG undefined FUN_149248cdc(void)

void FUN_149248cdc(longlong param_1)

{
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_200 = param_1 + 0x20;
  local_208 = param_1 + 0x18;
  FUN_149248d64(local_1f8,param_1 + 8,param_1 + 0x10,param_1 + 0x14);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149248d64 FUN_149248d64 body=287 status=ok
// SIG undefined FUN_149248d64(void)

void FUN_149248d64(longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,longlong param_6)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined1 auStack_f8 [44];
  undefined4 local_cc;
  undefined8 local_c8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 != 0) {
    local_cc = CONCAT31(local_cc._1_3_,4);
    local_c8 = *param_2;
    cVar2 = FUN_144828dba(param_6,&local_cc,lVar1);
    if (cVar2 != '\0') {
      uVar3 = (uint)*(ushort *)(param_6 + 0xc);
      if (uVar3 == 0xffff) {
        uVar3 = 0xffffffff;
      }
      FUN_149181d3e(lVar1,&local_cc,uVar3,1);
      *param_3 = local_cc;
      uVar3 = (uint)*(ushort *)(param_6 + 0xc);
      if (*(ushort *)(param_6 + 0xc) == 0xffff) {
        uVar3 = 0xffffffff;
      }
      FUN_149181d3e(lVar1,&local_cc,uVar3,2);
      *param_4 = local_cc;
      uVar3 = (uint)*(ushort *)(param_6 + 0xc);
      if (uVar3 == 0xffff) {
        uVar3 = 0xffffffff;
      }
      FUN_149181d3e(lVar1,&local_cc,uVar3,3);
      *param_5 = local_cc;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149248e84 FUN_149248e84 body=118 status=ok
// SIG undefined FUN_149248e84(void)

void FUN_149248e84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)*param_2;
  uVar2 = *puVar1;
  uVar3 = puVar1[4];
  uVar4 = puVar1[8];
  uVar5 = puVar1[0xc];
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0(puVar1 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  FUN_149248f82(*(undefined8 *)(param_1 + 0xc0),uVar2,uVar3,uVar4,uVar5,uVar7);
  return;
}



// FUNCTION 149248efa FUN_149248efa body=135 status=ok
// SIG undefined FUN_149248efa(void)

void FUN_149248efa(longlong param_1)

{
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_200 = param_1 + 0x20;
  local_208 = param_1 + 0x18;
  FUN_149248f82(local_1f8,param_1 + 8,param_1 + 0x10,param_1 + 0x14);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149248f82 FUN_149248f82 body=275 status=ok
// SIG undefined FUN_149248f82(void)

void FUN_149248f82(longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,longlong param_6)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined1 auStack_f8 [44];
  undefined4 local_cc;
  undefined8 local_c8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 != 0) {
    local_cc = CONCAT31(local_cc._1_3_,4);
    local_c8 = *param_2;
    cVar2 = FUN_144828dba(param_6,&local_cc,lVar1);
    if (cVar2 != '\0') {
      uVar3 = (uint)*(ushort *)(param_6 + 0xc);
      if (uVar3 == 0xffff) {
        uVar3 = 0xffffffff;
      }
      FUN_149181d3e(lVar1,&local_cc,uVar3,1);
      *param_3 = local_cc;
      uVar3 = (uint)*(ushort *)(param_6 + 0xc);
      if (*(ushort *)(param_6 + 0xc) == 0xffff) {
        uVar3 = 0xffffffff;
      }
      FUN_149181d3e(lVar1,&local_cc,uVar3,2);
      *param_4 = local_cc;
      uVar3 = (uint)*(ushort *)(param_6 + 0xc);
      if (uVar3 == 0xffff) {
        uVar3 = 0xffffffff;
      }
      FUN_149181d3e(lVar1,&local_cc,uVar3,3);
      *param_5 = local_cc;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149249096 FUN_149249096 body=118 status=ok
// SIG undefined FUN_149249096(void)

void FUN_149249096(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)*param_2;
  uVar2 = *puVar1;
  uVar3 = puVar1[4];
  uVar4 = puVar1[8];
  uVar5 = puVar1[0xc];
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0(puVar1 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  FUN_149249194(*(undefined8 *)(param_1 + 0xc0),uVar2,uVar3,uVar4,uVar5,uVar7);
  return;
}



// FUNCTION 14924910c FUN_14924910c body=135 status=ok
// SIG undefined FUN_14924910c(void)

void FUN_14924910c(longlong param_1)

{
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_200 = param_1 + 0x40;
  local_208 = param_1 + 0x30;
  FUN_149249194(local_1f8,param_1 + 8,param_1 + 0x10,param_1 + 0x20);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149249194 FUN_149249194 body=398 status=ok
// SIG undefined FUN_149249194(void)

void FUN_149249194(longlong param_1,undefined8 *param_2,double *param_3,double *param_4,
                  double *param_5,longlong param_6)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  uint uVar7;
  undefined1 auStack_138 [36];
  float local_114;
  undefined8 local_110;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 != 0) {
    local_114 = (float)CONCAT31(local_114._1_3_,4);
    local_110 = *param_2;
    cVar6 = FUN_144828dba(param_6,&local_114,lVar1);
    if (cVar6 != '\0') {
      uVar7 = (uint)*(ushort *)(param_6 + 0xc);
      if (uVar7 == 0xffff) {
        uVar7 = 0xffffffff;
      }
      FUN_149181d3e(lVar1,&local_114,uVar7,1);
      dVar2 = (double)(float)local_110;
      dVar3 = (double)local_114;
      uVar7 = (uint)*(ushort *)(param_6 + 0xc);
      if (*(ushort *)(param_6 + 0xc) == 0xffff) {
        uVar7 = 0xffffffff;
      }
      FUN_149181d3e(lVar1,&local_114,uVar7,2);
      dVar4 = (double)(float)local_110;
      dVar5 = (double)local_114;
      uVar7 = (uint)*(ushort *)(param_6 + 0xc);
      if (uVar7 == 0xffff) {
        uVar7 = 0xffffffff;
      }
      FUN_149181d3e(lVar1,&local_114,uVar7,3);
      *param_3 = dVar3;
      param_3[1] = dVar2;
      *param_4 = dVar5;
      param_4[1] = dVar4;
      *param_5 = (double)local_114;
      param_5[1] = (double)(float)local_110;
    }
  }
  if ((local_90 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149249324 FUN_149249324 body=140 status=ok
// SIG undefined FUN_149249324(void)

void FUN_149249324(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 unaff_RBX;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar1 = *(undefined1 *)puVar2[4];
  uVar4 = puVar2[8];
  uVar5 = puVar2[0xc];
  uVar6 = puVar2[0x10];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar2 + 0x14,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  FUN_149249442(*(undefined8 *)(param_1 + 0xc0),uVar3,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,uVar4,uVar5,uVar6,
                uVar8);
  return;
}



// FUNCTION 1492493b0 FUN_1492493b0 body=144 status=ok
// SIG undefined FUN_1492493b0(void)

void FUN_1492493b0(longlong param_1)

{
  undefined1 auStack_238 [32];
  longlong local_218;
  longlong local_210;
  longlong local_208;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_208 = param_1 + 0x60;
  local_210 = param_1 + 0x48;
  local_218 = param_1 + 0x30;
  FUN_149249442(local_1f8,param_1 + 8,*(undefined1 *)(param_1 + 0x10),param_1 + 0x18);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149249442 FUN_149249442 body=531 status=ok
// SIG undefined FUN_149249442(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149249442(longlong param_1,undefined8 *param_2,char param_3,undefined4 *param_4,
                  double *param_5,double *param_6,longlong param_7)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_e8 [32];
  float local_c8;
  undefined8 local_c4;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  if (lVar2 == 0) goto LAB_14924949e;
  local_c8 = (float)CONCAT31(local_c8._1_3_,4);
  local_c4 = *param_2;
  cVar3 = FUN_144828dba(param_7,&local_c8,lVar2);
  if (cVar3 == '\0') goto LAB_14924949e;
  if (param_3 == '\0') {
    uVar6 = 0xffffffff;
    if (*(ushort *)(param_7 + 0xc) != 0xffff) {
      uVar6 = (uint)*(ushort *)(param_7 + 0xc);
    }
    FUN_144afced8(lVar2,&local_c8,uVar6,0);
LAB_149249528:
    uVar7 = local_88._0_8_;
    uVar8 = local_88._8_4_;
    uVar9 = local_88._12_4_;
  }
  else {
    if (param_3 == '\x01') {
      uVar6 = 0xffffffff;
      if (*(ushort *)(param_7 + 0xc) != 0xffff) {
        uVar6 = (uint)*(ushort *)(param_7 + 0xc);
      }
      FUN_14486750c(lVar2,&local_c8,uVar6,0);
      goto LAB_149249528;
    }
    uVar7 = DAT_14c8464c0;
    uVar8 = DAT_14c8464c0._8_4_;
    uVar9 = DAT_14c8464c0._12_4_;
    local_a8 = (undefined4)DAT_14c8464a0;
    uStack_a4 = DAT_14c8464a0._4_4_;
    uStack_a0 = (undefined4)DAT_14c8464a8;
    uStack_9c = DAT_14c8464a8._4_4_;
    local_98 = DAT_14c8464b0;
    local_78 = (undefined4)DAT_14c8464d0;
    uStack_74 = DAT_14c8464d0._4_4_;
  }
  uVar1 = *(ushort *)(param_7 + 0xc);
  uVar4 = (ulonglong)uVar1;
  if ((((uVar1 == 0xffff) ||
       (*(uint *)(lVar2 + 0xc0) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0xc0) < (int)(uint)uVar1))
      || (lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0xb8) + uVar4 * 8), lVar5 == 0)) ||
     (*(char *)(lVar5 + 0x10) != '\x04')) {
    lVar5 = 0;
  }
  if (*(char *)(lVar5 + 0x211) == '\x04') {
LAB_14924958e:
    *param_4 = local_a8;
    param_4[1] = uStack_a4;
    param_4[2] = uStack_a0;
    param_4[3] = uStack_9c;
    *(undefined8 *)(param_4 + 4) = local_98;
    uVar4 = (ulonglong)*(ushort *)(param_7 + 0xc);
  }
  else if (*(char *)(lVar5 + 0x211) == '\x05') {
    local_98 = CONCAT44(uStack_74,local_78);
    local_a8 = (undefined4)uVar7;
    uStack_a4 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uStack_a0 = uVar8;
    uStack_9c = uVar9;
    goto LAB_14924958e;
  }
  if ((short)uVar4 == -1) {
    uVar4 = 0xffffffff;
  }
  FUN_149181d3e(lVar2,&local_c8,uVar4,2);
  *param_5 = (double)local_c8;
  param_5[1] = (double)(float)local_c4;
  param_5[2] = (double)local_c4._4_4_;
  uVar6 = (uint)*(ushort *)(param_7 + 0xc);
  if (*(ushort *)(param_7 + 0xc) == 0xffff) {
    uVar6 = 0xffffffff;
  }
  FUN_149181d3e(lVar2,&local_c8,uVar6,3);
  *param_6 = (double)local_c8;
  param_6[1] = (double)(float)local_c4;
  param_6[2] = (double)local_c4._4_4_;
LAB_14924949e:
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149249656 FUN_149249656 body=140 status=ok
// SIG undefined FUN_149249656(void)

void FUN_149249656(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 unaff_RBX;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar1 = *(undefined1 *)puVar2[4];
  uVar4 = puVar2[8];
  uVar5 = puVar2[0xc];
  uVar6 = puVar2[0x10];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar2 + 0x14,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  FUN_149249774(*(undefined8 *)(param_1 + 0xc0),uVar3,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,uVar4,uVar5,uVar6,
                uVar8);
  return;
}



// FUNCTION 1492496e2 FUN_1492496e2 body=144 status=ok
// SIG undefined FUN_1492496e2(void)

void FUN_1492496e2(longlong param_1)

{
  undefined1 auStack_238 [32];
  longlong local_218;
  longlong local_210;
  longlong local_208;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_208 = param_1 + 0x60;
  local_210 = param_1 + 0x48;
  local_218 = param_1 + 0x30;
  FUN_149249774(local_1f8,param_1 + 8,*(undefined1 *)(param_1 + 0x10),param_1 + 0x18);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149249774 FUN_149249774 body=550 status=ok
// SIG undefined FUN_149249774(void)

void FUN_149249774(longlong param_1,undefined8 *param_2,char param_3,undefined4 *param_4,
                  float *param_5,float *param_6,longlong param_7)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_128 [40];
  double local_100;
  double local_f8;
  double local_f0;
  float local_e8;
  undefined8 uStack_e4;
  float fStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_60;
  undefined8 uStack_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 == 0) goto LAB_1492497d4;
  local_e8 = (float)CONCAT31(local_e8._1_3_,4);
  uStack_e4 = *param_2;
  cVar2 = FUN_144828dba(param_7,&local_e8,lVar1);
  if (cVar2 == '\0') goto LAB_1492497d4;
  if (param_3 == '\0') {
    uVar3 = 0xffffffff;
    if (*(ushort *)(param_7 + 0xc) != 0xffff) {
      uVar3 = (uint)*(ushort *)(param_7 + 0xc);
    }
    FUN_144afced8(lVar1,&local_e8,uVar3,0);
LAB_149249872:
    fVar4 = local_e8;
    uVar5 = (float)uStack_e4;
    uVar6 = uStack_e4._4_4_;
    fVar7 = fStack_dc;
    uVar8 = local_d8;
    uVar9 = uStack_d4;
    uVar10 = uStack_d0;
    uVar11 = uStack_cc;
  }
  else {
    fVar4 = (float)DAT_14c846480;
    uVar5 = DAT_14c846480._4_4_;
    uVar6 = (undefined4)DAT_14c846488;
    fVar7 = DAT_14c846488._4_4_;
    uVar8 = (undefined4)DAT_14c846490;
    uVar9 = DAT_14c846490._4_4_;
    uVar10 = (undefined4)DAT_14c846498;
    uVar11 = DAT_14c846498._4_4_;
    if (param_3 == '\x01') {
      uVar3 = 0xffffffff;
      if (*(ushort *)(param_7 + 0xc) != 0xffff) {
        uVar3 = (uint)*(ushort *)(param_7 + 0xc);
      }
      FUN_14486750c(lVar1,&local_e8,uVar3,0);
      goto LAB_149249872;
    }
  }
  uStack_e4 = CONCAT44(uVar6,uVar5);
  local_e8 = fVar4;
  fStack_dc = fVar7;
  local_d8 = uVar8;
  uStack_d4 = uVar9;
  uStack_d0 = uVar10;
  uStack_cc = uVar11;
  FUN_1448052ee(&local_e8,&local_60);
  *(double *)(param_4 + 4) = local_50;
  *param_4 = (undefined4)local_60;
  param_4[1] = local_60._4_4_;
  param_4[2] = (undefined4)uStack_58;
  param_4[3] = uStack_58._4_4_;
  uVar3 = (uint)*(ushort *)(param_7 + 0xc);
  if (uVar3 == 0xffff) {
    uVar3 = 0xffffffff;
  }
  FUN_149181d3e(lVar1,&local_e8,uVar3,2);
  local_50 = (double)uStack_e4._4_4_;
  uStack_58 = (double)(float)uStack_e4;
  local_60 = (double)local_e8;
  uVar3 = (uint)*(ushort *)(param_7 + 0xc);
  if (*(ushort *)(param_7 + 0xc) == 0xffff) {
    uVar3 = 0xffffffff;
  }
  FUN_149181d3e(lVar1,&local_e8,uVar3,3);
  local_f0 = (double)uStack_e4._4_4_;
  local_f8 = (double)(float)uStack_e4;
  local_100 = (double)local_e8;
  FUN_1467fb380(&local_e8,&local_60);
  *(ulonglong *)(param_5 + 4) = CONCAT44(uStack_d4,local_d8);
  *param_5 = local_e8;
  param_5[1] = (float)uStack_e4;
  param_5[2] = uStack_e4._4_4_;
  param_5[3] = fStack_dc;
  FUN_1467fb380(&local_e8,&local_100);
  *(ulonglong *)(param_6 + 4) = CONCAT44(uStack_d4,local_d8);
  *param_6 = local_e8;
  param_6[1] = (float)uStack_e4;
  param_6[2] = uStack_e4._4_4_;
  param_6[3] = fStack_dc;
LAB_1492497d4:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14924999c FUN_14924999c body=140 status=ok
// SIG undefined FUN_14924999c(void)

void FUN_14924999c(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 unaff_RBX;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar1 = *(undefined1 *)puVar2[4];
  uVar4 = puVar2[8];
  uVar5 = puVar2[0xc];
  uVar6 = puVar2[0x10];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar2 + 0x14,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  FUN_149249ac2(*(undefined8 *)(param_1 + 0xc0),uVar3,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,uVar4,uVar5,uVar6,
                uVar8);
  return;
}



// FUNCTION 149249a28 FUN_149249a28 body=153 status=ok
// SIG undefined FUN_149249a28(void)

void FUN_149249a28(longlong param_1)

{
  undefined1 auStack_238 [32];
  longlong local_218;
  longlong local_210;
  longlong local_208;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_208 = param_1 + 0x140;
  local_210 = param_1 + 0xe0;
  local_218 = param_1 + 0x80;
  FUN_149249ac2(local_1f8,param_1 + 8,*(undefined1 *)(param_1 + 0x10),param_1 + 0x20);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149249ac2 FUN_149249ac2 body=593 status=ok
// SIG undefined FUN_149249ac2(void)

void FUN_149249ac2(longlong param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
                  undefined1 (*param_5) [16],undefined1 (*param_6) [16],longlong param_7)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char cVar10;
  longlong lVar11;
  float *pfVar12;
  uint uVar13;
  undefined1 auStack_f8 [32];
  float local_d8;
  undefined8 local_d4;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 == 0) goto LAB_149249b28;
  local_d8 = (float)CONCAT31(local_d8._1_3_,4);
  local_d4 = *param_2;
  cVar10 = FUN_144828dba(param_7,&local_d8,lVar1);
  if (cVar10 == '\0') goto LAB_149249b28;
  if (param_3 == '\0') {
    uVar13 = 0xffffffff;
    if (*(ushort *)(param_7 + 0xc) != 0xffff) {
      uVar13 = (uint)*(ushort *)(param_7 + 0xc);
    }
    FUN_144afced8(lVar1,&local_d8,uVar13,0);
LAB_149249bca:
    pfVar12 = &local_d8;
    for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
      *param_4 = *(undefined8 *)pfVar12;
      pfVar12 = pfVar12 + 2;
      param_4 = param_4 + 1;
    }
  }
  else if (param_3 == '\x01') {
    uVar13 = 0xffffffff;
    if (*(ushort *)(param_7 + 0xc) != 0xffff) {
      uVar13 = (uint)*(ushort *)(param_7 + 0xc);
    }
    FUN_14486750c(lVar1,&local_d8,uVar13,0);
    goto LAB_149249bca;
  }
  uVar13 = (uint)*(ushort *)(param_7 + 0xc);
  if (*(ushort *)(param_7 + 0xc) == 0xffff) {
    uVar13 = 0xffffffff;
  }
  FUN_149181d3e(lVar1,&local_d8,uVar13,2);
  auVar4._8_4_ = SUB84((double)(float)local_d4,0);
  auVar4._0_8_ = (double)local_d8;
  auVar4._12_4_ = (int)((ulonglong)(double)(float)local_d4 >> 0x20);
  *param_5 = auVar4;
  auVar2._8_4_ = SUB84((double)local_cc,0);
  auVar2._0_8_ = (double)local_d4._4_4_;
  auVar2._12_4_ = (int)((ulonglong)(double)local_cc >> 0x20);
  param_5[1] = auVar2;
  auVar6._8_4_ = SUB84((double)local_c4,0);
  auVar6._0_8_ = (double)local_c8;
  auVar6._12_4_ = (int)((ulonglong)(double)local_c4 >> 0x20);
  param_5[2] = auVar6;
  *(double *)param_5[3] = (double)local_c0;
  *(undefined8 *)(param_5[3] + 8) = 0;
  auVar8._8_4_ = SUB84((double)local_b4,0);
  auVar8._0_8_ = (double)local_b8;
  auVar8._12_4_ = (int)((ulonglong)(double)local_b4 >> 0x20);
  param_5[4] = auVar8;
  *(double *)param_5[5] = (double)local_b0;
  *(undefined8 *)(param_5[5] + 8) = 0;
  uVar13 = (uint)*(ushort *)(param_7 + 0xc);
  if (*(ushort *)(param_7 + 0xc) == 0xffff) {
    uVar13 = 0xffffffff;
  }
  FUN_149181d3e(lVar1,&local_d8,uVar13,3);
  auVar5._8_4_ = SUB84((double)(float)local_d4,0);
  auVar5._0_8_ = (double)local_d8;
  auVar5._12_4_ = (int)((ulonglong)(double)(float)local_d4 >> 0x20);
  *param_6 = auVar5;
  auVar3._8_4_ = SUB84((double)local_cc,0);
  auVar3._0_8_ = (double)local_d4._4_4_;
  auVar3._12_4_ = (int)((ulonglong)(double)local_cc >> 0x20);
  param_6[1] = auVar3;
  auVar7._8_4_ = SUB84((double)local_c4,0);
  auVar7._0_8_ = (double)local_c8;
  auVar7._12_4_ = (int)((ulonglong)(double)local_c4 >> 0x20);
  param_6[2] = auVar7;
  *(double *)param_6[3] = (double)local_c0;
  *(undefined8 *)(param_6[3] + 8) = 0;
  auVar9._8_4_ = SUB84((double)local_b4,0);
  auVar9._0_8_ = (double)local_b8;
  auVar9._12_4_ = (int)((ulonglong)(double)local_b4 >> 0x20);
  param_6[4] = auVar9;
  *(double *)param_6[5] = (double)local_b0;
  *(undefined8 *)(param_6[5] + 8) = 0;
LAB_149249b28:
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149249d14 FUN_149249d14 body=105 status=ok
// SIG undefined FUN_149249d14(void)

void FUN_149249d14(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)*param_2;
  uVar2 = *puVar1;
  uVar3 = puVar1[4];
  uVar4 = puVar1[8];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar6 = FUN_144828ac0(puVar1 + 0xc,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  FUN_149249e04(*(undefined8 *)(param_1 + 0xc0),uVar2,uVar3,uVar4,uVar6);
  return;
}



// FUNCTION 149249d84 FUN_149249d84 body=126 status=ok
// SIG undefined FUN_149249d84(void)

void FUN_149249d84(longlong param_1)

{
  undefined1 auStack_228 [32];
  longlong local_208;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_208 = param_1 + 0x18;
  FUN_149249e04(local_1f8,param_1 + 8,param_1 + 0x10,param_1 + 0x14);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149249e04 FUN_149249e04 body=184 status=ok
// SIG undefined FUN_149249e04(void)

void FUN_149249e04(longlong param_1,undefined8 *param_2,undefined1 *param_3,undefined4 *param_4,
                  longlong param_5)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auStack_68 [36];
  undefined1 local_44 [4];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 != 0) {
    local_44[0] = 8;
    local_40 = *param_2;
    cVar2 = FUN_144828dba(param_5,local_44,lVar1);
    if (cVar2 != '\0') {
      uVar4 = (uint)*(ushort *)(param_5 + 0xc);
      if (uVar4 == 0xffff) {
        uVar4 = 0xffffffff;
      }
      uVar3 = FUN_149187c3e(lVar1,uVar4);
      *param_3 = uVar3;
      uVar4 = (uint)*(ushort *)(param_5 + 0xc);
      if (*(ushort *)(param_5 + 0xc) == 0xffff) {
        uVar4 = 0xffffffff;
      }
      uVar5 = FUN_149181f94(lVar1,uVar4);
      goto LAB_149249e60;
    }
  }
  *param_3 = 0;
  uVar5 = 0;
LAB_149249e60:
  *param_4 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149249ebe FUN_149249ebe body=107 status=ok
// SIG undefined FUN_149249ebe(void)

void FUN_149249ebe(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 unaff_RBX;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar1 = *(undefined1 *)puVar2[4];
  uVar4 = puVar2[8];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar6 = FUN_144828ac0(puVar2 + 0xc,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  FUN_14924846e(*(undefined8 *)(param_1 + 0xc0),uVar3,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,uVar4,uVar6);
  return;
}



// FUNCTION 149249f2a FUN_149249f2a body=129 status=ok
// SIG undefined FUN_149249f2a(void)

void FUN_149249f2a(longlong param_1)

{
  undefined1 auStack_228 [32];
  longlong local_208;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_208 = param_1 + 0x80;
  FUN_14924846e(local_1f8,param_1 + 8,*(undefined1 *)(param_1 + 0x10),param_1 + 0x20);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149249fac FUN_149249fac body=262 status=ok
// SIG undefined FUN_149249fac(void)

undefined8 FUN_149249fac(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  longlong local_e8 [2];
  longlong local_d8 [2];
  undefined **local_c8;
  undefined1 local_c0;
  undefined8 local_bc;
  undefined1 local_b4;
  undefined1 local_b3;
  undefined8 local_a8 [12];
  undefined1 local_48;
  undefined8 local_44;
  undefined2 local_3c;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c8 = &PTR_FUN_14bbf2700;
  puVar2 = &DAT_14c846480;
  puVar3 = local_a8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_48 = 0;
  local_44 = 0;
  local_3c = 0xffff;
  local_38 = 0xffffffff;
  local_bc = *(undefined8 *)(param_1 + 8);
  local_c0 = 1;
  local_b4 = *(undefined1 *)(param_1 + 0x10);
  local_b3 = 1;
  FUN_14924a0b4(param_2,&local_c8);
  FUN_140056680(local_d8,L"Item.Name");
  FUN_140056680(local_e8,L"Bone");
  local_f8 = 1;
  FUN_1490fb142(param_2,local_e8,local_d8,1);
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924a0b4 FUN_14924a0b4 body=211 status=ok
// SIG undefined FUN_14924a0b4(void)

undefined8 * FUN_14924a0b4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
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
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466f7b8c();
  param_1[2] = uVar1;
  uVar1 = FUN_1466f8754();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14924a188 FUN_14924a188 body=171 status=ok
// SIG undefined FUN_14924a188(void)

void FUN_14924a188(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)*param_2;
  uVar2 = *puVar1;
  uVar3 = puVar1[4];
  uVar4 = puVar1[8];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar6 = FUN_144828ac0(puVar1 + 0xc,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0(*param_2 + 0x80,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  FUN_14924a2c2(*(undefined8 *)(param_1 + 0xc0),uVar2,uVar3,uVar4,uVar6,uVar7);
  return;
}



// FUNCTION 14924a234 FUN_14924a234 body=141 status=ok
// SIG undefined FUN_14924a234(void)

void FUN_14924a234(longlong param_1)

{
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_200 = param_1 + 0xa0;
  local_208 = param_1 + 0x80;
  FUN_14924a2c2(local_1f8,param_1 + 8,param_1 + 0x10,param_1 + 0x20);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924a2c2 FUN_14924a2c2 body=291 status=ok
// SIG undefined FUN_14924a2c2(void)

void FUN_14924a2c2(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong param_5,longlong param_6)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 auStack_178 [32];
  undefined8 local_158 [12];
  undefined1 local_f8 [96];
  undefined1 local_98 [4];
  undefined8 local_94;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  if (lVar2 != 0) {
    local_98[0] = 1;
    local_94 = *param_2;
    cVar1 = FUN_144828dba(param_5,local_98,lVar2);
    if (cVar1 != '\0') {
      local_98[0] = 1;
      local_94 = *param_3;
      cVar1 = FUN_144828dba(param_6,local_98,lVar2);
      if (cVar1 != '\0') {
        uVar4 = (uint)*(ushort *)(param_6 + 0xc);
        if (uVar4 == 0xffff) {
          uVar4 = 0xffffffff;
        }
        FUN_14486750c(lVar2,local_98,uVar4,0);
        uVar4 = (uint)*(ushort *)(param_5 + 0xc);
        if (*(ushort *)(param_5 + 0xc) == 0xffff) {
          uVar4 = 0xffffffff;
        }
        FUN_14486750c(lVar2,local_f8,uVar4,0);
        FUN_1449437a2(local_f8,local_158,local_98);
        puVar3 = local_158;
        for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
          *param_4 = *puVar3;
          puVar3 = puVar3 + 1;
          param_4 = param_4 + 1;
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924a3e6 FUN_14924a3e6 body=487 status=ok
// SIG undefined FUN_14924a3e6(void)

undefined8 FUN_14924a3e6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  longlong local_118 [2];
  longlong local_108 [2];
  undefined **local_f8;
  undefined1 local_f0;
  undefined8 local_ec;
  undefined1 local_e4;
  undefined1 local_e0;
  undefined8 local_dc;
  undefined1 local_d4;
  undefined8 local_c8 [12];
  undefined1 local_68;
  undefined8 local_64;
  undefined2 local_5c;
  undefined4 local_58;
  undefined1 local_48;
  undefined8 local_44;
  undefined2 local_3c;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_f8 = &PTR_FUN_14bbf3ce0;
  local_e4 = 0;
  local_d4 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_68 = 0;
  local_64 = 0;
  local_5c = 0xffff;
  local_58 = 0xffffffff;
  local_48 = 0;
  local_44 = 0;
  local_3c = 0xffff;
  local_38 = 0xffffffff;
  local_dc = *(undefined8 *)(param_1 + 0x10);
  local_e0 = 1;
  local_ec = *(undefined8 *)(param_1 + 8);
  local_f0 = 1;
  FUN_14924a5ce(param_2,&local_f8);
  FUN_140056680(local_108,L"Parent.Name");
  FUN_140056680(local_118,L"Space");
  local_128 = 1;
  FUN_1490fb142(param_2,local_118,local_108,1);
  if (local_118[0] != 0) {
    FUN_1400020a8();
  }
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_108,L"Child.Name");
  FUN_140056680(local_118,L"Bone");
  local_128 = 1;
  FUN_1490fb142(param_2,local_118,local_108,1);
  if (local_118[0] != 0) {
    FUN_1400020a8();
  }
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_108,L"RelativeTransform");
  FUN_140056680(local_118,L"Transform");
  local_128 = 1;
  FUN_1490fb142(param_2,local_118,local_108,1);
  if (local_118[0] != 0) {
    FUN_1400020a8();
  }
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924a5ce FUN_14924a5ce body=211 status=ok
// SIG undefined FUN_14924a5ce(void)

undefined8 * FUN_14924a5ce(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
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
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466f7e32();
  param_1[2] = uVar1;
  uVar1 = FUN_1466f811a();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14924a6a2 FUN_14924a6a2 body=207 status=ok
// SIG undefined FUN_14924a6a2(void)

void FUN_14924a6a2(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_RBX;
  
  puVar3 = (undefined8 *)*param_2;
  uVar4 = *puVar3;
  uVar1 = *(undefined1 *)puVar3[4];
  uVar5 = puVar3[8];
  uVar2 = *(undefined1 *)puVar3[0xc];
  uVar6 = puVar3[0x10];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar3 + 0x14,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(*param_2 + 0xc0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  FUN_14924a81e(*(undefined8 *)(param_1 + 0xc0),uVar4,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,uVar5,uVar2,uVar6,
                uVar8,uVar9);
  return;
}



// FUNCTION 14924a77e FUN_14924a77e body=159 status=ok
// SIG undefined FUN_14924a77e(void)

void FUN_14924a77e(longlong param_1)

{
  undefined1 auStack_238 [32];
  undefined1 local_218;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_200 = param_1 + 0xb0;
  local_208 = param_1 + 0x90;
  local_210 = param_1 + 0x30;
  local_218 = *(undefined1 *)(param_1 + 0x24);
  FUN_14924a81e(local_1f8,param_1 + 8,*(undefined1 *)(param_1 + 0x14),param_1 + 0x18);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924a81e FUN_14924a81e body=233 status=ok
// SIG undefined FUN_14924a81e(void)

void FUN_14924a81e(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong lVar1;
  undefined8 unaff_RBP;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 local_108 [12];
  undefined8 local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  puVar2 = &DAT_14c846480;
  puVar3 = local_a8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = local_108;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_110 = param_7;
  local_118 = local_a8;
  FUN_144828832(param_1,param_2,1,param_3);
  local_110 = param_8;
  local_118 = local_108;
  FUN_144828832(param_1,param_4,1,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff);
  FUN_149118d34(param_1,local_a8,local_108,param_6);
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924a908 FUN_14924a908 body=107 status=ok
// SIG undefined FUN_14924a908(void)

void FUN_14924a908(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 unaff_RBX;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar1 = *(undefined1 *)puVar2[4];
  uVar4 = puVar2[8];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar6 = FUN_144828ac0(puVar2 + 0xc,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  FUN_14924a9f6(*(undefined8 *)(param_1 + 0xc0),uVar3,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,uVar4,uVar6);
  return;
}



// FUNCTION 14924a974 FUN_14924a974 body=129 status=ok
// SIG undefined FUN_14924a974(void)

void FUN_14924a974(longlong param_1)

{
  undefined1 auStack_228 [32];
  longlong local_208;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_208 = param_1 + 0x80;
  FUN_14924a9f6(local_1f8,param_1 + 8,*(undefined1 *)(param_1 + 0x10),param_1 + 0x20);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924a9f6 FUN_14924a9f6 body=234 status=ok
// SIG undefined FUN_14924a9f6(void)

void FUN_14924a9f6(longlong param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
                  longlong param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  if (lVar2 != 0) {
    local_88[0] = 2;
    local_88._4_8_ = *param_2;
    cVar1 = FUN_144828dba(param_5,local_88,lVar2);
    if (cVar1 != '\0') {
      if (param_3 == '\0') {
        uVar4 = 0xffffffff;
        if (*(ushort *)(param_5 + 0xc) != 0xffff) {
          uVar4 = (uint)*(ushort *)(param_5 + 0xc);
        }
        FUN_144afced8(lVar2,local_88,uVar4,0);
      }
      else {
        if (param_3 != '\x01') goto LAB_14924aaba;
        uVar4 = 0xffffffff;
        if (*(ushort *)(param_5 + 0xc) != 0xffff) {
          uVar4 = (uint)*(ushort *)(param_5 + 0xc);
        }
        FUN_14486750c(lVar2,local_88,uVar4,0);
      }
      puVar3 = (undefined8 *)local_88;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *param_4 = *puVar3;
        puVar3 = puVar3 + 1;
        param_4 = param_4 + 1;
      }
    }
  }
LAB_14924aaba:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924aae2 FUN_14924aae2 body=350 status=ok
// SIG undefined FUN_14924aae2(void)

undefined8 FUN_14924aae2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  longlong local_e8 [2];
  longlong local_d8 [2];
  undefined **local_c8;
  undefined1 local_c0;
  undefined8 local_bc;
  undefined1 local_b4;
  undefined1 local_b3;
  undefined8 local_a8 [12];
  undefined1 local_48;
  undefined8 local_44;
  undefined2 local_3c;
  undefined4 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c8 = &PTR_FUN_14bbf2700;
  local_b3 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_a8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_48 = 0;
  local_44 = 0;
  local_3c = 0xffff;
  local_38 = 0xffffffff;
  local_bc = *(undefined8 *)(param_1 + 8);
  local_c0 = 2;
  local_b4 = *(undefined1 *)(param_1 + 0x10);
  FUN_14924ac42(param_2,&local_c8);
  FUN_140056680(local_d8,L"Item.Name");
  FUN_140056680(local_e8,L"Space");
  local_f8 = 1;
  FUN_1490fb142(param_2,local_e8,local_d8,1);
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_d8,L"Space");
  FUN_140056680(local_e8,L"SpaceType");
  local_f8 = 1;
  FUN_1490fb142(param_2,local_e8,local_d8,1);
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924ac42 FUN_14924ac42 body=211 status=ok
// SIG undefined FUN_14924ac42(void)

undefined8 * FUN_14924ac42(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
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
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466f84ae();
  param_1[2] = uVar1;
  uVar1 = FUN_1466f8754();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14924ad1c FUN_14924ad1c body=138 status=ok
// SIG undefined FUN_14924ad1c(void)

void FUN_14924ad1c(longlong param_1)

{
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_200 = param_1 + 0x80;
  local_208 = param_1 + 0x20;
  FUN_144828832(local_1f8,param_1 + 8,*(undefined1 *)(param_1 + 0x14),
                *(undefined1 *)(param_1 + 0x15));
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924ada8 FUN_14924ada8 body=175 status=ok
// SIG undefined FUN_14924ada8(void)

void FUN_14924ada8(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_2 = (longlong *)*param_2;
  puVar3 = (undefined8 *)*param_2;
  uVar1 = *(undefined1 *)param_2[4];
  uVar2 = *(undefined1 *)param_2[8];
  lVar4 = param_2[0xc];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_50 = FUN_144828ac0(param_2 + 0x10,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  local_40 = *puVar3;
  local_38 = *(undefined4 *)(puVar3 + 1);
  local_58 = lVar4;
  FUN_14924b042(*(undefined8 *)(param_1 + 0xc0),&local_40,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,
                CONCAT71((int7)((ulonglong)unaff_RSI >> 8),uVar2) & 0xffffffff);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924ae5e FUN_14924ae5e body=151 status=ok
// SIG undefined FUN_14924ae5e(void)

void FUN_14924ae5e(longlong param_1)

{
  undefined1 auStack_238 [32];
  longlong local_218;
  longlong local_210;
  undefined1 local_208 [480];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1412ca278(local_208);
  FUN_1490d751a(local_208);
  local_210 = param_1 + 0x30;
  local_218 = param_1 + 0x20;
  local_28 = *(undefined8 *)(param_1 + 8);
  local_20 = *(undefined4 *)(param_1 + 0x10);
  FUN_14924b042(local_208,&local_28,*(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19))
  ;
  FUN_140f8ccfc(local_208);
  if ((local_18 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924aef6 FUN_14924aef6 body=174 status=ok
// SIG undefined FUN_14924aef6(void)

void FUN_14924aef6(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_2 = (longlong *)*param_2;
  puVar3 = (undefined8 *)*param_2;
  uVar1 = *(undefined1 *)param_2[4];
  uVar2 = *(undefined1 *)param_2[8];
  lVar4 = param_2[0xc];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_50 = FUN_144828ac0(param_2 + 0x10,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  local_40 = *puVar3;
  local_38 = *(undefined4 *)(puVar3 + 1);
  local_58 = lVar4;
  FUN_14924b042(*(undefined8 *)(param_1 + 0xc0),&local_40,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,
                CONCAT71((int7)((ulonglong)unaff_RDI >> 8),uVar2) & 0xffffffff);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924afac FUN_14924afac body=149 status=ok
// SIG undefined FUN_14924afac(void)

void FUN_14924afac(longlong param_1)

{
  undefined1 auStack_238 [32];
  longlong local_218;
  longlong local_210;
  undefined1 local_208 [480];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1412ca278(local_208);
  FUN_1490d751a(local_208);
  local_28 = *(undefined8 *)(param_1 + 8);
  local_20 = *(undefined4 *)(param_1 + 0x10);
  local_210 = param_1 + 0x30;
  local_218 = param_1 + 0x20;
  FUN_14924b042(local_208,&local_28,*(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19))
  ;
  FUN_140f8ccfc(local_208);
  if ((local_18 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924b042 FUN_14924b042 body=245 status=ok
// SIG undefined FUN_14924b042(void)

void FUN_14924b042(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  longlong *param_5,longlong *param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (int)param_6[1];
  if (iVar1 != (int)param_2[1]) {
    *(undefined4 *)(param_6 + 1) = 0;
    if (*(int *)((longlong)param_6 + 0xc) < 0) {
      FUN_1492d06b4(param_6,0);
    }
    FUN_14924b442(param_6,(int)param_2[1]);
    iVar1 = (int)param_2[1];
  }
  FUN_140ee84a4(param_5,iVar1,1);
  if (0 < (int)param_2[1]) {
    lVar4 = 0;
    lVar2 = 0;
    lVar3 = 0;
    lVar5 = 0;
    do {
      FUN_144828832(param_1,*param_2 + lVar3,param_3,param_4,*param_5 + lVar2,*param_6 + lVar4);
      lVar5 = lVar5 + 1;
      lVar3 = lVar3 + 0xc;
      lVar2 = lVar2 + 0x60;
      lVar4 = lVar4 + 0x20;
    } while (lVar5 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 14924b138 FUN_14924b138 body=304 status=ok
// SIG undefined FUN_14924b138(void)

undefined8 FUN_14924b138(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_78 [32];
  longlong *local_58 [2];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    FUN_140056680(&local_38,L" Initial");
  }
  else {
    local_38 = (undefined2 *)0x0;
    uStack_30 = 0;
  }
  uVar1 = FUN_1491d6d19();
  FUN_1406f1d90(uVar1,local_58,*(undefined1 *)(param_1 + 8));
  puVar2 = (undefined8 *)FUN_1447a1f4a(local_58);
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(puVar2 + 1);
  lVar3 = (longlong)local_40;
  _Src = (void *)*puVar2;
  if (lVar3 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar3 * 2);
  }
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
  puVar5 = &DAT_149dfb77a;
  if ((int)uStack_30 != 0) {
    puVar5 = local_38;
  }
  puVar4 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar4 = local_48;
  }
  FUN_140002266(param_2,L"Get Transform - %s%s",puVar4,puVar5);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924b26a FUN_14924b26a body=145 status=ok
// SIG undefined FUN_14924b26a(void)

undefined8 FUN_14924b26a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [40];
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = &PTR_FUN_14bbf4570;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 1;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1444888de(&local_58,param_1 + 8);
  local_48 = *(undefined2 *)(param_1 + 0x18);
  FUN_14924b2fc(param_2,&local_60);
  FUN_14924b3d0(&local_60);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924b2fc FUN_14924b2fc body=211 status=ok
// SIG undefined FUN_14924b2fc(void)

undefined8 * FUN_14924b2fc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
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
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466f8a4a();
  param_1[2] = uVar1;
  uVar1 = FUN_1466f8d40();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14924b3d0 FUN_14924b3d0 body=72 status=ok
// SIG undefined FUN_14924b3d0(void)

void FUN_14924b3d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbf4570;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14924b418 FUN_14924b418 body=41 status=ok
// SIG undefined FUN_14924b418(void)

void FUN_14924b418(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_1492d06b4();
  return;
}



// FUNCTION 14924b442 FUN_14924b442 body=109 status=ok
// SIG undefined FUN_14924b442(void)

void FUN_14924b442(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1492d0738(param_1,iVar1);
    }
    FUN_1492d0713((longlong)iVar1 * 0x20 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1492d07be(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14924b4b0 FUN_14924b4b0 body=119 status=ok
// SIG undefined FUN_14924b4b0(void)

void FUN_14924b4b0(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 unaff_RBP;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar4 = puVar2[4];
  uVar1 = *(undefined1 *)puVar2[8];
  uVar5 = puVar2[0xc];
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0(puVar2 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  FUN_14924b588(*(undefined8 *)(param_1 + 0xc0),uVar3,uVar4,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff,uVar5,uVar7);
  return;
}



// FUNCTION 14924b530 FUN_14924b530 body=87 status=ok
// SIG undefined FUN_14924b530(void)

void FUN_14924b530(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14924b588(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x1fc,*(undefined1 *)(param_1 + 0x204),
                param_1 + 0x205,param_1 + 0x208);
  return;
}



// FUNCTION 14924b588 FUN_14924b588 body=216 status=ok
// SIG undefined FUN_14924b588(void)

void FUN_14924b588(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  char *param_5,longlong param_6)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  *param_5 = '\0';
  if (lVar2 != 0) {
    cVar3 = FUN_144828dba(param_6,param_2,lVar2);
    if (cVar3 != '\0') {
      uVar1 = *(ushort *)(param_6 + 0xc);
      if (((uVar1 != 0xffff) &&
          (*(uint *)(lVar2 + 0xc0) != (uint)uVar1 &&
           (int)(uint)uVar1 <= (int)*(uint *)(lVar2 + 0xc0))) &&
         (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0xb8) + (ulonglong)(uint)uVar1 * 8),
         lVar2 != 0)) {
        FUN_1492d5766(param_1,local_40,param_4,param_3);
        cVar3 = FUN_1491f42c6(lVar2,local_40);
        *param_5 = cVar3;
        if (cVar3 == '\0') {
          cVar3 = FUN_1491f42c6(lVar2,param_3);
          *param_5 = cVar3;
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924b662 FUN_14924b662 body=107 status=ok
// SIG undefined FUN_14924b662(void)

void FUN_14924b662(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 unaff_RBX;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar1 = *(undefined1 *)puVar2[4];
  uVar4 = puVar2[8];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar6 = FUN_144828ac0(puVar2 + 0xc,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  FUN_14924b722(*(undefined8 *)(param_1 + 0xc0),uVar3,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,uVar4,uVar6);
  return;
}



// FUNCTION 14924b6d6 FUN_14924b6d6 body=75 status=ok
// SIG undefined FUN_14924b6d6(void)

void FUN_14924b6d6(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14924b722(param_1 + 0x10,param_1 + 0x1f0,*(undefined1 *)(param_1 + 0x1fc),param_1 + 0x1fd,
                param_1 + 0x200);
  return;
}



// FUNCTION 14924b722 FUN_14924b722 body=436 status=ok
// SIG undefined FUN_14924b722(void)

void FUN_14924b722(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 *param_4,
                  longlong param_5)

{
  ushort uVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  wchar_t *_Str1;
  wchar_t *_Str2;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  int local_80;
  wchar_t *local_78;
  int local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar8 = *(longlong *)(param_1 + 0x1b0);
  *param_4 = 0;
  if (lVar8 != 0) {
    cVar4 = FUN_144828dba(param_5,param_2,lVar8);
    if (cVar4 != '\0') {
      uVar1 = *(ushort *)(param_5 + 0xc);
      if (((uVar1 != 0xffff) &&
          (*(uint *)(lVar8 + 0xc0) != (uint)uVar1 &&
           (int)(uint)uVar1 <= (int)*(uint *)(lVar8 + 0xc0))) &&
         (lVar2 = *(longlong *)(*(longlong *)(lVar8 + 0xb8) + (ulonglong)(uint)uVar1 * 8),
         lVar2 != 0)) {
        if ((char)param_3 == '\0') {
          uVar5 = FUN_1491f42dc(lVar2);
          *param_4 = uVar5;
        }
        else {
          local_68 = *(undefined8 *)(lVar2 + 0x10);
          local_60 = *(undefined4 *)(lVar2 + 0x18);
          FUN_1491d9a1c(lVar8,&local_58);
          *param_4 = 0;
          FUN_1492d5330(param_1,&local_78,param_3);
          if ((longlong)local_50 != 0) {
            lVar9 = (longlong)local_50 << 3;
            lVar8 = local_58;
            do {
              FUN_1400021e4(lVar8,&local_88);
              pwVar3 = local_88;
              bVar10 = false;
              uVar6 = local_70 - 1;
              if (local_70 == 0) {
                uVar6 = 0;
              }
              if (0 < (int)uVar6) {
                _Str2 = L"";
                if (local_70 != 0) {
                  _Str2 = local_78;
                }
                _Str1 = local_88;
                if (local_80 == 0) {
                  _Str1 = L"";
                }
                iVar7 = wcsncmp(_Str1,_Str2,(ulonglong)uVar6);
                bVar10 = iVar7 == 0;
              }
              if (pwVar3 != (wchar_t *)0x0) {
                FUN_1400020a8(pwVar3);
              }
              if (bVar10) {
                cVar4 = FUN_1491f42c6(lVar2,lVar8);
                if (cVar4 != '\0') {
                  *param_4 = 1;
                }
              }
              lVar8 = lVar8 + 8;
              lVar9 = lVar9 + -8;
            } while (lVar9 != 0);
          }
          if (local_78 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          if (local_58 != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924b8d8 FUN_14924b8d8 body=141 status=ok
// SIG undefined FUN_14924b8d8(void)

void FUN_14924b8d8(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 unaff_RBX;
  
  puVar3 = (undefined8 *)*param_2;
  uVar4 = *puVar3;
  uVar5 = puVar3[4];
  uVar1 = *(undefined1 *)puVar3[8];
  uVar2 = *(undefined1 *)puVar3[0xc];
  uVar6 = puVar3[0x10];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar3 + 0x14,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  FUN_14924b9fc(*(undefined8 *)(param_1 + 0xc0),uVar4,uVar5,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,uVar2,uVar6,uVar8);
  return;
}



// FUNCTION 14924b96c FUN_14924b96c body=142 status=ok
// SIG undefined FUN_14924b96c(void)

void FUN_14924b96c(longlong param_1)

{
  undefined1 auStack_238 [32];
  undefined1 local_218;
  longlong local_210;
  longlong local_208;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_208 = param_1 + 0x20;
  local_210 = param_1 + 0x1e;
  local_218 = *(undefined1 *)(param_1 + 0x1d);
  FUN_14924b9fc(local_1f8,param_1 + 8,param_1 + 0x14,*(undefined1 *)(param_1 + 0x1c));
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924b9fc FUN_14924b9fc body=271 status=ok
// SIG undefined FUN_14924b9fc(void)

void FUN_14924b9fc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5,undefined1 *param_6,longlong param_7)

{
  ushort uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0x1b0);
  *param_6 = 0;
  if ((lVar4 != 0) && (cVar2 = FUN_144828dba(param_7,param_2,lVar4), cVar2 != '\0')) {
    uVar1 = *(ushort *)(param_7 + 0xc);
    if ((uVar1 != 0xffff) &&
       ((*(uint *)(lVar4 + 0xc0) != (uint)uVar1 && (int)(uint)uVar1 <= (int)*(uint *)(lVar4 + 0xc0)
        && (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0xb8) + (ulonglong)(uint)uVar1 * 8),
           lVar4 != 0)))) {
      FUN_1492d5766(param_1,local_40,param_5,param_3);
      if (*(longlong *)(lVar4 + 8) == 0) {
        *param_6 = 0;
      }
      else {
        lVar3 = FUN_1491e0c5e(*(longlong *)(lVar4 + 8),lVar4,local_40,param_4);
        *param_6 = lVar3 != 0;
        if (lVar3 != 0) goto LAB_14924bae3;
      }
      if (*(longlong *)(lVar4 + 8) == 0) {
        bVar5 = false;
      }
      else {
        lVar4 = FUN_1491e0c5e(*(longlong *)(lVar4 + 8),lVar4,param_3,param_4);
        bVar5 = lVar4 != 0;
      }
      *param_6 = bVar5;
    }
  }
LAB_14924bae3:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14924bb0c FUN_14924bb0c body=51 status=ok
// SIG undefined FUN_14924bb0c(void)

void FUN_14924bb0c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_14924bbc0(*(undefined8 *)(param_1 + 0xc0),*puVar1,
                CONCAT71((int7)((ulonglong)puVar1[4] >> 8),*(undefined1 *)puVar1[4]),
                CONCAT71((int7)((ulonglong)puVar1[8] >> 8),*(undefined1 *)puVar1[8]),puVar1[0xc]);
  return;
}



// FUNCTION 14924bb40 FUN_14924bb40 body=126 status=ok
// SIG undefined FUN_14924bb40(void)

void FUN_14924bb40(longlong param_1)

{
  undefined1 auStack_228 [32];
  longlong local_208;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_208 = param_1 + 0x18;
  FUN_14924bbc0(local_1f8,param_1 + 8,*(undefined1 *)(param_1 + 0x10),
                *(undefined1 *)(param_1 + 0x11));
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924bbc0 FUN_14924bbc0 body=255 status=ok
// SIG undefined FUN_14924bbc0(void)

void FUN_14924bbc0(longlong param_1,undefined8 *param_2,undefined1 param_3,undefined4 param_4,
                  longlong param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  code *local_88 [2];
  undefined8 *local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  *(undefined4 *)(param_5 + 8) = 0;
  if (*(int *)(param_5 + 0xc) < 0) {
    FUN_14920a7da(param_5,0);
  }
  if (lVar1 != 0) {
    FUN_1492d5766(param_1,&local_90,param_4,param_2);
    uVar2 = *param_2;
    local_88[0] = (code *)0x0;
    local_78 = (undefined8 *)FUN_14001cc68(0x28,8);
    *local_78 = &PTR_FUN_14bc05910;
    local_78[1] = param_5;
    local_78[2] = uVar2;
    local_78[3] = local_90;
    *(undefined1 *)(local_78 + 4) = param_3;
    if (local_78 + 1 != (longlong *)0x0) {
      local_88[0] = FUN_1444b5aac;
    }
    FUN_14449bc3c(lVar1,local_88,1);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924bcc0 FUN_14924bcc0 body=90 status=ok
// SIG undefined FUN_14924bcc0(void)

void FUN_14924bcc0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)*param_2;
  uVar2 = *puVar1;
  uVar3 = puVar1[4];
  lVar4 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar5 = FUN_144828ac0(puVar1 + 8,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar4 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar4 * 0x14));
  FUN_14924bd90(*(undefined8 *)(param_1 + 0xc0),uVar2,uVar3,uVar5);
  return;
}



// FUNCTION 14924bd1a FUN_14924bd1a body=117 status=ok
// SIG undefined FUN_14924bd1a(void)

void FUN_14924bd1a(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_14924bd90(local_1f8,param_1 + 8,param_1 + 0x18,param_1 + 0x28);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924bd90 FUN_14924bd90 body=183 status=ok
// SIG undefined FUN_14924bd90(void)

void FUN_14924bd90(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  ushort uVar1;
  char cVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) < 0) {
    FUN_1402191ca(param_3,0);
  }
  lVar3 = *(longlong *)(param_1 + 0x1b0);
  if (lVar3 != 0) {
    cVar2 = FUN_144828dba(param_4,param_2,lVar3);
    if (cVar2 != '\0') {
      uVar1 = *(ushort *)(param_4 + 0xc);
      if ((((uVar1 != 0xffff) &&
           (*(uint *)(lVar3 + 0xc0) != (uint)uVar1 &&
            (int)(uint)uVar1 <= (int)*(uint *)(lVar3 + 0xc0))) &&
          (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0xb8) + (ulonglong)(uint)uVar1 * 8),
          lVar3 != 0)) && (*(longlong *)(lVar3 + 8) != 0)) {
        lVar3 = FUN_1491e0c5e(*(longlong *)(lVar3 + 8),lVar3,&DAT_14cc063e8,7);
        if ((lVar3 != 0) && (*(char *)(lVar3 + 0x10) == '\a')) {
          FUN_1406fa324(param_3,lVar3 + 0x20);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14924be48 FUN_14924be48 body=106 status=ok
// SIG undefined FUN_14924be48(void)

void FUN_14924be48(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 unaff_RBP;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar4 = puVar2[4];
  uVar1 = *(undefined1 *)puVar2[8];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar6 = FUN_144828ac0(puVar2 + 0xc,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  FUN_14924befe(*(undefined8 *)(param_1 + 0xc0),uVar3,uVar4,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff,uVar6);
  return;
}



// FUNCTION 14924beb2 FUN_14924beb2 body=75 status=ok
// SIG undefined FUN_14924beb2(void)

void FUN_14924beb2(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14924befe(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x1fc,*(undefined1 *)(param_1 + 0x204),
                param_1 + 0x208);
  return;
}



// FUNCTION 14924befe FUN_14924befe body=249 status=ok
// SIG undefined FUN_14924befe(void)

void FUN_14924befe(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  longlong param_5)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x1b0);
  if (lVar3 != 0) {
    cVar4 = FUN_144828dba(param_5,param_2,lVar3);
    if (cVar4 != '\0') {
      uVar1 = *(ushort *)(param_5 + 0xc);
      if (((uVar1 != 0xffff) &&
          (*(uint *)(lVar3 + 0xc0) != (uint)uVar1 &&
           (int)(uint)uVar1 <= (int)*(uint *)(lVar3 + 0xc0))) &&
         (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0xb8) + (ulonglong)(uint)uVar1 * 8),
         lVar3 != 0)) {
        lVar6 = FUN_1491f429c(lVar3,&DAT_14cc063e8,7);
        if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) == '\a')) {
          iVar2 = *(int *)(lVar6 + 0x28);
          FUN_1492d5766(param_1,local_48,param_4,param_3);
          iVar5 = FUN_140721fbe(lVar6 + 0x20,local_48);
          if (iVar5 == iVar2) {
            FUN_1491f42f0(lVar3,local_48,1);
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924bff8 FUN_14924bff8 body=159 status=ok
// SIG undefined FUN_14924bff8(void)

void FUN_14924bff8(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 unaff_RBX;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  puVar4 = (undefined8 *)puVar2[4];
  uVar1 = *(undefined1 *)puVar2[8];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_48 = FUN_144828ac0(puVar2 + 0xc,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  local_38 = *puVar4;
  local_30 = *(undefined4 *)(puVar4 + 1);
  FUN_14924c11a(*(undefined8 *)(param_1 + 0xc0),uVar3,&local_38,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924c098 FUN_14924c098 body=129 status=ok
// SIG undefined FUN_14924c098(void)

void FUN_14924c098(longlong param_1)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x200);
  local_20 = *(undefined4 *)(param_1 + 0x208);
  local_38 = param_1 + 0x218;
  FUN_14924c11a(param_1 + 0x10,param_1 + 0x1f0,&local_28,*(undefined1 *)(param_1 + 0x210));
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924c11a FUN_14924c11a body=297 status=ok
// SIG undefined FUN_14924c11a(void)

void FUN_14924c11a(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  longlong param_5)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = *(longlong *)(param_1 + 0x1b0);
  if (lVar5 != 0) {
    cVar3 = FUN_144828dba(param_5,param_2,lVar5);
    if (cVar3 != '\0') {
      uVar1 = *(ushort *)(param_5 + 0xc);
      if (((uVar1 != 0xffff) &&
          (*(uint *)(lVar5 + 0xc0) != (uint)uVar1 &&
           (int)(uint)uVar1 <= (int)*(uint *)(lVar5 + 0xc0))) &&
         (local_58 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + (ulonglong)(uint)uVar1 * 8),
         local_58 != 0)) {
        lVar5 = FUN_1491f429c(local_58,&DAT_14cc063e8,7);
        if (((lVar5 != 0) && (*(char *)(lVar5 + 0x10) == '\a')) && ((longlong)(int)param_3[1] != 0))
        {
          lVar7 = *param_3;
          lVar6 = (longlong)(int)param_3[1] << 3;
          do {
            iVar2 = *(int *)(lVar5 + 0x28);
            FUN_1492d5766(param_1,local_50,param_4,lVar7);
            iVar4 = FUN_140721fbe(lVar5 + 0x20,local_50);
            if (iVar4 == iVar2) {
              FUN_1491f42f0(local_58,local_50,1);
            }
            lVar7 = lVar7 + 8;
            lVar6 = lVar6 + -8;
          } while (lVar6 != 0);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924c244 FUN_14924c244 body=119 status=ok
// SIG undefined FUN_14924c244(void)

void FUN_14924c244(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 unaff_RBP;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar4 = puVar2[4];
  uVar1 = *(undefined1 *)puVar2[8];
  uVar5 = puVar2[0xc];
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0(puVar2 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  FUN_14924c31c(*(undefined8 *)(param_1 + 0xc0),uVar3,uVar4,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff,uVar5,uVar7);
  return;
}



// FUNCTION 14924c2c4 FUN_14924c2c4 body=87 status=ok
// SIG undefined FUN_14924c2c4(void)

void FUN_14924c2c4(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14924c31c(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x1fc,*(undefined1 *)(param_1 + 0x204),
                param_1 + 0x205,param_1 + 0x208);
  return;
}



// FUNCTION 14924c31c FUN_14924c31c body=271 status=ok
// SIG undefined FUN_14924c31c(void)

void FUN_14924c31c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 *param_5,longlong param_6)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined1 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  if (lVar2 != 0) {
    cVar3 = FUN_144828dba(param_6,param_2,lVar2);
    if (cVar3 != '\0') {
      uVar1 = *(ushort *)(param_6 + 0xc);
      if (((uVar1 != 0xffff) &&
          (*(uint *)(lVar2 + 0xc0) != (uint)uVar1 &&
           (int)(uint)uVar1 <= (int)*(uint *)(lVar2 + 0xc0))) &&
         (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0xb8) + (ulonglong)(uint)uVar1 * 8),
         lVar2 != 0)) {
        lVar5 = FUN_1491f4282(lVar2,&DAT_14cc063e8,7);
        if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) == '\a')) {
          FUN_1492d5766(param_1,local_50,param_4,param_3);
          local_48 = local_50;
          iVar4 = FUN_1408ff3be(lVar5 + 0x20);
          *param_5 = 0 < iVar4;
          if (0 < iVar4) {
            FUN_1491f42f0(lVar2,local_50,0);
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924c42c FUN_14924c42c body=119 status=ok
// SIG undefined FUN_14924c42c(void)

void FUN_14924c42c(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 unaff_RBP;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar4 = puVar2[4];
  uVar1 = *(undefined1 *)puVar2[8];
  uVar5 = puVar2[0xc];
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0(puVar2 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  FUN_14924c532(*(undefined8 *)(param_1 + 0xc0),uVar3,uVar4,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff,uVar5,uVar7);
  return;
}



// FUNCTION 14924c4aa FUN_14924c4aa body=135 status=ok
// SIG undefined FUN_14924c4aa(void)

void FUN_14924c4aa(longlong param_1)

{
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_200 = param_1 + 0x20;
  local_208 = param_1 + 0x1d;
  FUN_14924c532(local_1f8,param_1 + 8,param_1 + 0x14,*(undefined1 *)(param_1 + 0x1c));
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924c532 FUN_14924c532 body=297 status=ok
// SIG undefined FUN_14924c532(void)

void FUN_14924c532(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 *param_5,longlong param_6)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_5 = 0;
  lVar4 = *(longlong *)(param_1 + 0x1b0);
  if (lVar4 != 0) {
    cVar3 = FUN_144828dba(param_6,param_2,lVar4);
    if (cVar3 != '\0') {
      uVar1 = *(ushort *)(param_6 + 0xc);
      if ((((uVar1 != 0xffff) &&
           (*(uint *)(lVar4 + 0xc0) != (uint)uVar1 &&
            (int)(uint)uVar1 <= (int)*(uint *)(lVar4 + 0xc0))) &&
          (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0xb8) + (ulonglong)(uint)uVar1 * 8),
          lVar4 != 0)) && (*(longlong *)(lVar4 + 8) != 0)) {
        lVar4 = FUN_1491e0c5e(*(longlong *)(lVar4 + 8),lVar4,&DAT_14cc063e8,7);
        if ((lVar4 != 0) && (*(char *)(lVar4 + 0x10) == '\a')) {
          FUN_1492d5766(param_1,&local_40,param_4,param_3);
          if ((longlong)*(int *)(lVar4 + 0x28) == 0) {
            bVar6 = false;
          }
          else {
            lVar5 = 0;
            do {
              lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x20) + lVar5);
              if (lVar2 == local_40) break;
              bVar6 = (longlong)*(int *)(lVar4 + 0x28) * 8 + -8 != lVar5;
              lVar5 = lVar5 + 8;
            } while (bVar6);
            bVar6 = lVar2 == local_40;
          }
          *param_5 = bVar6;
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924c65c FUN_14924c65c body=172 status=ok
// SIG undefined FUN_14924c65c(void)

void FUN_14924c65c(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 unaff_RBX;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  puVar4 = (undefined8 *)puVar2[4];
  uVar1 = *(undefined1 *)puVar2[8];
  uVar5 = puVar2[0xc];
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_50 = FUN_144828ac0(puVar2 + 0x10,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  local_40 = *puVar4;
  local_38 = *(undefined4 *)(puVar4 + 1);
  local_58 = uVar5;
  FUN_14924c7aa(*(undefined8 *)(param_1 + 0xc0),uVar3,&local_40,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924c710 FUN_14924c710 body=153 status=ok
// SIG undefined FUN_14924c710(void)

void FUN_14924c710(longlong param_1)

{
  undefined1 auStack_238 [32];
  longlong local_218;
  longlong local_210;
  undefined1 local_208 [480];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1412ca278(local_208);
  FUN_1490d751a(local_208);
  local_28 = *(undefined8 *)(param_1 + 0x18);
  local_20 = *(undefined4 *)(param_1 + 0x20);
  local_210 = param_1 + 0x30;
  local_218 = param_1 + 0x29;
  FUN_14924c7aa(local_208,param_1 + 8,&local_28,*(undefined1 *)(param_1 + 0x28));
  FUN_140f8ccfc(local_208);
  if ((local_18 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924c7aa FUN_14924c7aa body=327 status=ok
// SIG undefined FUN_14924c7aa(void)

void FUN_14924c7aa(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  undefined1 *param_5,longlong param_6)

{
  longlong lVar1;
  ushort uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_5 = 0;
  lVar4 = *(longlong *)(param_1 + 0x1b0);
  if ((lVar4 != 0) && (cVar3 = FUN_144828dba(param_6,param_2,lVar4), cVar3 != '\0')) {
    uVar2 = *(ushort *)(param_6 + 0xc);
    if (((uVar2 != 0xffff) &&
        (((*(uint *)(lVar4 + 0xc0) != (uint)uVar2 &&
           (int)(uint)uVar2 <= (int)*(uint *)(lVar4 + 0xc0) &&
          (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0xb8) + (ulonglong)(uint)uVar2 * 8),
          lVar4 != 0)) && (*(longlong *)(lVar4 + 8) != 0)))) &&
       ((lVar4 = FUN_1491e0c5e(*(longlong *)(lVar4 + 8),lVar4,&DAT_14cc063e8,7), lVar4 != 0 &&
        (*(char *)(lVar4 + 0x10) == '\a')))) {
      *param_5 = 1;
      if ((longlong)(int)param_3[1] != 0) {
        lVar5 = *param_3;
        lVar1 = lVar5 + (longlong)(int)param_3[1] * 8;
        do {
          FUN_1492d5766(param_1,&local_48,param_4,lVar5);
          if ((longlong)*(int *)(lVar4 + 0x28) == 0) {
LAB_14924c8c6:
            *param_5 = 0;
            break;
          }
          lVar6 = 0;
          while (*(longlong *)(*(longlong *)(lVar4 + 0x20) + lVar6) != local_48) {
            lVar6 = lVar6 + 8;
            if ((longlong)*(int *)(lVar4 + 0x28) * 8 == lVar6) goto LAB_14924c8c6;
          }
          lVar5 = lVar5 + 8;
        } while (lVar5 != lVar1);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14924c910 FUN_14924c910 body=117 status=ok
// SIG undefined FUN_14924c910(void)

void FUN_14924c910(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_14924c986(local_1f8,param_1 + 8,*(undefined1 *)(param_1 + 0x10),param_1 + 0x18);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924c986 FUN_14924c986 body=194 status=ok
// SIG undefined FUN_14924c986(void)

void FUN_14924c986(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  code *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  *(undefined4 *)(param_4 + 8) = 0;
  if (*(int *)(param_4 + 0xc) < 0) {
    FUN_14920a7da(param_4,0);
  }
  if (lVar1 != 0) {
    FUN_1492d5766(param_1,&local_80,param_3,param_2);
    local_68 = 0;
    local_58 = &PTR_LAB_14bc05930;
    local_48 = local_80;
    local_78[0] = FUN_1444b5b7e;
    local_50 = param_4;
    FUN_14449bc3c(lVar1,local_78,1);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924ca4a FUN_14924ca4a body=93 status=ok
// SIG undefined FUN_14924ca4a(void)

void FUN_14924ca4a(longlong param_1,longlong *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  param_2 = (longlong *)*param_2;
  local_18 = *(undefined8 *)*param_2;
  local_10 = *(undefined4 *)((undefined8 *)*param_2 + 1);
  FUN_14924cb30(*(undefined8 *)(param_1 + 0xc0),&local_18,*(undefined1 *)param_2[4],param_2[8]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924caa8 FUN_14924caa8 body=134 status=ok
// SIG undefined FUN_14924caa8(void)

void FUN_14924caa8(longlong param_1)

{
  undefined1 auStack_228 [32];
  undefined1 local_208 [480];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1412ca278(local_208);
  FUN_1490d751a(local_208);
  local_28 = *(undefined8 *)(param_1 + 8);
  local_20 = *(undefined4 *)(param_1 + 0x10);
  FUN_14924cb30(local_208,&local_28,*(undefined1 *)(param_1 + 0x18),param_1 + 0x20);
  FUN_140f8ccfc(local_208);
  if ((local_18 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924cb30 FUN_14924cb30 body=392 status=ok
// SIG undefined FUN_14924cb30(void)

void FUN_14924cb30(longlong param_1,longlong *param_2,undefined4 param_3,longlong param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  code *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = *(longlong *)(param_1 + 0x1b0);
  *(undefined4 *)(param_4 + 8) = 0;
  if (*(int *)(param_4 + 0xc) < 0) {
    FUN_14920a7da(param_4,0);
  }
  if (lVar3 != 0) {
    local_58 = *param_2;
    lVar9 = param_2[1];
    uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
    local_98 = 0;
    uStack_90 = 0;
    local_50 = (int)lVar9;
    if ((char)param_3 != '\0') {
      cVar5 = FUN_1491dab48(param_1);
      if (cVar5 != '\0') {
        iVar2 = (int)param_2[1];
        if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar2);
        }
        if (iVar2 != 0) {
          FUN_1402191ca(&local_98);
          if ((longlong)(int)param_2[1] != 0) {
            lVar9 = *param_2;
            lVar8 = (longlong)(int)param_2[1] << 3;
            do {
              FUN_1492d5766(param_1,&local_a0,param_3,lVar9);
              uVar4 = uStack_90;
              lVar7 = (longlong)(int)uStack_90;
              uVar6 = (int)uStack_90 + 1;
              uStack_90 = CONCAT44(uStack_90._4_4_,uVar6);
              if (uStack_90._4_4_ < uVar6) {
                FUN_1446f84a2(&local_98,uVar4 & 0xffffffff);
              }
              *(undefined8 *)(local_98 + lVar7 * 8) = local_a0;
              lVar9 = lVar9 + 8;
              lVar8 = lVar8 + -8;
            } while (lVar8 != 0);
          }
        }
        local_58 = local_98;
        local_50 = (int)uStack_90;
      }
    }
    local_78 = 0;
    local_68 = &PTR_LAB_14bc05950;
    local_88[0] = FUN_1444b5c40;
    local_60 = param_4;
    local_4c = uVar1;
    FUN_14449bc3c(lVar3,local_88,1);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924ccba FUN_14924ccba body=211 status=ok
// SIG undefined FUN_14924ccba(void)

void FUN_14924ccba(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 unaff_RBX;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_2 = (longlong *)*param_2;
  puVar3 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)param_2[4];
  uVar1 = *(undefined1 *)param_2[8];
  uVar2 = *(undefined1 *)param_2[0xc];
  lVar5 = param_2[0x10];
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_68 = FUN_144828ac0(param_2 + 0x14,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  local_48 = *puVar4;
  local_40 = *(undefined4 *)(puVar4 + 1);
  local_58 = *puVar3;
  local_50 = *(undefined4 *)(puVar3 + 1);
  local_78 = uVar2;
  local_70 = lVar5;
  FUN_14924ce46(*(undefined8 *)(param_1 + 0xc0),&local_58,&local_48,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924cd94 FUN_14924cd94 body=176 status=ok
// SIG undefined FUN_14924cd94(void)

void FUN_14924cd94(longlong param_1)

{
  undefined1 auStack_258 [32];
  undefined1 local_238;
  longlong local_230;
  longlong local_228;
  undefined1 local_218 [480];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_1412ca278(local_218);
  FUN_1490d751a(local_218);
  local_28 = *(undefined8 *)(param_1 + 8);
  local_20 = *(undefined4 *)(param_1 + 0x10);
  local_38 = *(undefined8 *)(param_1 + 0x18);
  local_30 = *(undefined4 *)(param_1 + 0x20);
  local_228 = param_1 + 0x40;
  local_230 = param_1 + 0x30;
  local_238 = *(undefined1 *)(param_1 + 0x29);
  FUN_14924ce46(local_218,&local_28,&local_38,*(undefined1 *)(param_1 + 0x28));
  FUN_140f8ccfc(local_218);
  if ((local_18 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924ce46 FUN_14924ce46 body=850 status=ok
// SIG undefined FUN_14924ce46(void)

void FUN_14924ce46(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4,
                  char param_5,longlong *param_6,longlong *param_7)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_98 [44];
  int local_6c;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 0x1b0);
  *(undefined4 *)(param_6 + 1) = 0;
  if (*(int *)((longlong)param_6 + 0xc) < 0) {
    FUN_14920a7da(param_6,0);
  }
  if (lVar3 != 0) {
    if ((int)param_7[1] != (int)param_2[1]) {
      *(undefined4 *)(param_7 + 1) = 0;
      if (*(int *)((longlong)param_7 + 0xc) < 0) {
        FUN_1492d06b4(param_7,0);
      }
      FUN_149250716(param_7,(int)param_2[1]);
    }
    plVar9 = (longlong *)*param_3;
    local_6c = (int)param_3[1];
    local_58 = (longlong *)0x0;
    uStack_50 = 0;
    if ((char)param_4 == '\0') {
      plVar8 = (longlong *)0x0;
    }
    else {
      cVar5 = FUN_1491dab48();
      if (cVar5 == '\0') {
        plVar8 = (longlong *)0x0;
      }
      else {
        iVar2 = (int)param_3[1];
        if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar2);
        }
        if (iVar2 != 0) {
          FUN_1402191ca(&local_58);
          if ((longlong)(int)param_3[1] != 0) {
            lVar12 = *param_3;
            lVar10 = (longlong)(int)param_3[1] << 3;
            do {
              FUN_1492d5766(param_1,&local_60,param_4,lVar12);
              uVar4 = uStack_50;
              lVar7 = (longlong)(int)uStack_50;
              uVar6 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
              if (uStack_50._4_4_ < uVar6) {
                FUN_1446f84a2(&local_58,uVar4 & 0xffffffff);
              }
              local_58[lVar7] = local_60;
              lVar12 = lVar12 + 8;
              lVar10 = lVar10 + -8;
            } while (lVar10 != 0);
          }
        }
        local_6c = (int)uStack_50;
        plVar8 = local_58;
        plVar9 = local_58;
      }
    }
    if (0 < (int)param_2[1]) {
      lVar12 = 0;
      local_68 = plVar9;
      do {
        cVar5 = FUN_144828dba(*param_7 + lVar12 * 0x20,lVar12 * 0xc + *param_2,lVar3);
        if (cVar5 != '\0') {
          uVar1 = *(ushort *)(*param_7 + 0xc + lVar12 * 0x20);
          if (((uVar1 != 0xffff) &&
              (*(uint *)(lVar3 + 0xc0) != (uint)uVar1 &&
               (int)(uint)uVar1 <= (int)*(uint *)(lVar3 + 0xc0))) &&
             (lVar10 = *(longlong *)(*(longlong *)(lVar3 + 0xb8) + (ulonglong)(uint)uVar1 * 8),
             lVar10 != 0)) {
            if (((*(longlong *)(lVar10 + 8) == 0) ||
                (lVar7 = FUN_1491e0c5e(*(longlong *)(lVar10 + 8),lVar10,&DAT_14cc063e8), lVar7 == 0)
                ) || (*(char *)(lVar7 + 0x10) != '\a')) {
              if (param_5 != '\0') goto LAB_14924cfc8;
            }
            else if (param_5 == '\0') {
              if (local_6c != 0) {
                plVar9 = local_68;
                do {
                  if (*(int *)(lVar7 + 0x28) != 0) {
                    lVar11 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar7 + 0x20) + lVar11) == *plVar9)
                      goto LAB_14924cfc8;
                      lVar11 = lVar11 + 8;
                    } while ((longlong)*(int *)(lVar7 + 0x28) << 3 != lVar11);
                  }
                  plVar9 = plVar9 + 1;
                } while (plVar9 != local_68 + local_6c);
              }
            }
            else if (local_6c != 0) {
              if ((longlong)*(int *)(lVar7 + 0x28) == 0) goto LAB_14924cfc8;
              plVar9 = local_68;
              do {
                lVar11 = 0;
                while (*(longlong *)(*(longlong *)(lVar7 + 0x20) + lVar11) != *plVar9) {
                  lVar11 = lVar11 + 8;
                  if ((longlong)*(int *)(lVar7 + 0x28) << 3 == lVar11) goto LAB_14924cfc8;
                }
                plVar9 = plVar9 + 1;
              } while (plVar9 != local_68 + local_6c);
            }
            iVar2 = (int)param_6[1];
            *(uint *)(param_6 + 1) = iVar2 + 1U;
            if (*(uint *)((longlong)param_6 + 0xc) < iVar2 + 1U) {
              FUN_149192788(param_6,iVar2);
            }
            lVar7 = *param_6;
            *(undefined4 *)(lVar7 + 8 + (longlong)iVar2 * 0xc) = *(undefined4 *)(lVar10 + 0x18);
            *(undefined8 *)(lVar7 + (longlong)iVar2 * 0xc) = *(undefined8 *)(lVar10 + 0x10);
          }
        }
LAB_14924cfc8:
        lVar12 = lVar12 + 1;
        plVar8 = local_58;
      } while (lVar12 < (int)param_2[1]);
    }
    if (plVar8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14924d19a FUN_14924d19a body=575 status=ok
// SIG undefined FUN_14924d19a(void)

longlong FUN_14924d19a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1 + 0x70;
  if (*(int *)(param_1 + 0x78) == 0) {
    FUN_14001a7b2();
    uVar5 = FUN_14574b8de();
    FUN_1408ccbd2(local_48,uVar5);
    uVar4 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_48);
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1490f2336(lVar1,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x70);
    FUN_1446f57c6(&DAT_14cc09f00,local_48);
    FUN_144478fc0((longlong)iVar2 * 0x50 + lVar3,local_48[0],0,uVar4);
    *(int *)(param_1 + 0x80) = iVar2;
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1490f2336(lVar1,iVar2);
    }
    uVar4 = DAT_14c764f18;
    lVar3 = *(longlong *)(param_1 + 0x70);
    FUN_1446f57c6(&DAT_14cc09f10,local_48);
    FUN_144478fc0((longlong)iVar2 * 0x50 + lVar3,local_48[0],0,uVar4);
    *(int *)(param_1 + 0x84) = iVar2;
    uVar5 = FUN_1492d52be();
    FUN_1492d085a(local_48,uVar5);
    uVar4 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_48);
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1490f2336(lVar1,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x70);
    FUN_1446f57c6(&DAT_14cc09f20,local_48);
    FUN_144478fc0((longlong)iVar2 * 0x50 + lVar3,local_48[0],0,uVar4);
    *(int *)(param_1 + 0x88) = iVar2;
    uVar5 = FUN_14574b8a4();
    FUN_1408ccbd2(local_48,uVar5);
    uVar4 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_48);
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1490f2336(lVar1,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x70);
    FUN_1446f57c6(&DAT_14cc09f30,local_48);
    FUN_144478fc0((longlong)iVar2 * 0x50 + lVar3,local_48[0],4,uVar4);
    *(int *)(param_1 + 0x8c) = iVar2;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924d3da FUN_14924d3da body=402 status=ok
// SIG undefined FUN_14924d3da(void)

longlong FUN_14924d3da(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x94) == -1) {
    uVar5 = FUN_14924d19a(param_1);
    lVar1 = param_1 + 0x70;
    FUN_14921c4cc(lVar1,uVar5);
    FUN_1444b0264();
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1490f2336(lVar1,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x70);
    FUN_1446f57c6(&DAT_14cc09f40,&local_40);
    FUN_144478eaa((longlong)iVar2 * 0x50 + lVar3,local_40,0,&DAT_14cc0a130);
    *(int *)(param_1 + 0x90) = iVar2;
    FUN_1444b0264();
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1490f2336(lVar1,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x70);
    FUN_1446f57c6(&DAT_14cc09f50,&local_40);
    FUN_144478eaa((longlong)iVar2 * 0x50 + lVar3,local_40,1,&DAT_14cc0a130);
    *(int *)(param_1 + 0x94) = iVar2;
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1490f2336(lVar1,iVar2);
    }
    uVar4 = DAT_14c764f08;
    lVar1 = *(longlong *)(param_1 + 0x70);
    FUN_1446f57c6(&DAT_14cc09f60,&local_40);
    FUN_144478fc0((longlong)iVar2 * 0x50 + lVar1,local_40,1,uVar4);
    *(int *)(param_1 + 0x98) = iVar2;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1 + 0x70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924d56e FUN_14924d56e body=197 status=ok
// SIG undefined FUN_14924d56e(void)

undefined8
FUN_14924d56e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5,longlong param_6)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  cVar5 = FUN_144828dba(param_6,param_2,*(undefined8 *)(lVar3 + 0x1b0));
  if (cVar5 != '\0') {
    uVar1 = *(ushort *)(param_6 + 0xc);
    if (uVar1 != 0xffff) {
      uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x1b0) + 0xc0);
      if ((uVar2 != uVar1 && (int)(uint)uVar1 <= (int)uVar2) &&
         (lVar4 = *(longlong *)
                   (*(longlong *)(*(longlong *)(lVar3 + 0x1b0) + 0xb8) + (ulonglong)(uint)uVar1 * 8)
         , lVar4 != 0)) {
        FUN_1492d5766(lVar3,local_38,param_5,param_3);
        uVar6 = FUN_1491e0c5e(*(undefined8 *)(lVar3 + 0x1b0),lVar4,local_38,param_4);
        goto LAB_14924d611;
      }
    }
  }
  uVar6 = 0;
LAB_14924d611:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924d634 FUN_14924d634 body=255 status=ok
// SIG undefined FUN_14924d634(void)

void FUN_14924d634(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  
  lVar9 = *(longlong *)(param_1 + 0x100);
  lVar2 = *param_2;
  uVar3 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x80) * 0x20);
  uVar4 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x84) * 0x20);
  uVar1 = **(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x88) * 0x20);
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0((longlong)*(int *)(lVar9 + 0x8c) * 0x20 + lVar2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar2 = *param_2;
  puVar10 = *(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x90) * 0x20);
  puVar5 = *(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x94) * 0x20);
  uVar6 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x98) * 0x20);
  lVar9 = FUN_14924d56e(param_1,uVar3,uVar4,0,uVar1,uVar8);
  if ((lVar9 == 0) || (*(char *)(lVar9 + 0x10) != '\0')) {
    lVar9 = 0;
  }
  if (lVar9 != 0) {
    puVar10 = (undefined1 *)(lVar9 + 0x20);
  }
  *puVar5 = *puVar10;
  *(bool *)uVar6 = lVar9 != 0;
  return;
}



// FUNCTION 14924d734 FUN_14924d734 body=259 status=ok
// SIG undefined FUN_14924d734(void)

void FUN_14924d734(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  
  lVar9 = *(longlong *)(param_1 + 0x100);
  lVar2 = *param_2;
  uVar3 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x80) * 0x20);
  uVar4 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x84) * 0x20);
  uVar1 = **(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x88) * 0x20);
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0((longlong)*(int *)(lVar9 + 0x8c) * 0x20 + lVar2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar2 = *param_2;
  puVar10 = *(undefined4 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x90) * 0x20);
  puVar5 = *(undefined4 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x94) * 0x20);
  uVar6 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x98) * 0x20);
  lVar9 = FUN_14924d56e(param_1,uVar3,uVar4,2,uVar1,uVar8);
  if ((lVar9 == 0) || (*(char *)(lVar9 + 0x10) != '\x02')) {
    lVar9 = 0;
  }
  if (lVar9 != 0) {
    puVar10 = (undefined4 *)(lVar9 + 0x20);
  }
  *puVar5 = *puVar10;
  *(bool *)uVar6 = lVar9 != 0;
  return;
}



// FUNCTION 14924d838 FUN_14924d838 body=255 status=ok
// SIG undefined FUN_14924d838(void)

void FUN_14924d838(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  
  lVar9 = *(longlong *)(param_1 + 0x100);
  lVar2 = *param_2;
  uVar3 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x80) * 0x20);
  uVar4 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x84) * 0x20);
  uVar1 = **(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x88) * 0x20);
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0((longlong)*(int *)(lVar9 + 0x8c) * 0x20 + lVar2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar2 = *param_2;
  puVar10 = *(undefined4 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x90) * 0x20);
  puVar5 = *(undefined4 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x94) * 0x20);
  uVar6 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x98) * 0x20);
  lVar9 = FUN_14924d56e(param_1,uVar3,uVar4,4,uVar1,uVar8);
  if ((lVar9 == 0) || (*(char *)(lVar9 + 0x10) != '\x04')) {
    lVar9 = 0;
  }
  if (lVar9 != 0) {
    puVar10 = (undefined4 *)(lVar9 + 0x20);
  }
  *puVar5 = *puVar10;
  *(bool *)uVar6 = lVar9 != 0;
  return;
}



// FUNCTION 14924d938 FUN_14924d938 body=255 status=ok
// SIG undefined FUN_14924d938(void)

void FUN_14924d938(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  lVar9 = *(longlong *)(param_1 + 0x100);
  lVar2 = *param_2;
  uVar3 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x80) * 0x20);
  uVar4 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x84) * 0x20);
  uVar1 = **(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x88) * 0x20);
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0((longlong)*(int *)(lVar9 + 0x8c) * 0x20 + lVar2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar2 = *param_2;
  puVar10 = *(undefined8 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x90) * 0x20);
  puVar5 = *(undefined8 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x94) * 0x20);
  uVar6 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x98) * 0x20);
  lVar9 = FUN_14924d56e(param_1,uVar3,uVar4,6,uVar1,uVar8);
  if ((lVar9 == 0) || (*(char *)(lVar9 + 0x10) != '\x06')) {
    lVar9 = 0;
  }
  if (lVar9 != 0) {
    puVar10 = (undefined8 *)(lVar9 + 0x20);
  }
  *puVar5 = *puVar10;
  *(bool *)uVar6 = lVar9 != 0;
  return;
}



// FUNCTION 14924da38 FUN_14924da38 body=270 status=ok
// SIG undefined FUN_14924da38(void)

void FUN_14924da38(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  bool bVar11;
  
  lVar9 = *(longlong *)(param_1 + 0x100);
  lVar2 = *param_2;
  uVar3 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x80) * 0x20);
  uVar4 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x84) * 0x20);
  uVar1 = **(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x88) * 0x20);
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  bVar11 = false;
  uVar8 = FUN_144828ac0((longlong)*(int *)(lVar9 + 0x8c) * 0x20 + lVar2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar2 = *param_2;
  puVar10 = *(undefined8 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x90) * 0x20);
  puVar5 = *(undefined8 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x94) * 0x20);
  puVar6 = *(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x98) * 0x20);
  lVar9 = FUN_14924d56e(param_1,uVar3,uVar4,8,uVar1,uVar8);
  if (lVar9 != 0) {
    bVar11 = *(char *)(lVar9 + 0x10) == '\b';
    if (bVar11) {
      puVar10 = (undefined8 *)(lVar9 + 0x20);
    }
  }
  puVar5[2] = puVar10[2];
  uVar3 = puVar10[1];
  *puVar5 = *puVar10;
  puVar5[1] = uVar3;
  *puVar6 = bVar11;
  return;
}



// FUNCTION 14924db46 FUN_14924db46 body=270 status=ok
// SIG undefined FUN_14924db46(void)

void FUN_14924db46(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  bool bVar11;
  
  lVar9 = *(longlong *)(param_1 + 0x100);
  lVar2 = *param_2;
  uVar3 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x80) * 0x20);
  uVar4 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x84) * 0x20);
  uVar1 = **(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x88) * 0x20);
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  bVar11 = false;
  uVar8 = FUN_144828ac0((longlong)*(int *)(lVar9 + 0x8c) * 0x20 + lVar2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar2 = *param_2;
  puVar10 = *(undefined8 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x90) * 0x20);
  puVar5 = *(undefined8 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x94) * 0x20);
  puVar6 = *(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x98) * 0x20);
  lVar9 = FUN_14924d56e(param_1,uVar3,uVar4,10,uVar1,uVar8);
  if (lVar9 != 0) {
    bVar11 = *(char *)(lVar9 + 0x10) == '\n';
    if (bVar11) {
      puVar10 = (undefined8 *)(lVar9 + 0x20);
    }
  }
  puVar5[2] = puVar10[2];
  uVar3 = puVar10[1];
  *puVar5 = *puVar10;
  puVar5[1] = uVar3;
  *puVar6 = bVar11;
  return;
}



// FUNCTION 14924dc54 FUN_14924dc54 body=272 status=ok
// SIG undefined FUN_14924dc54(void)

void FUN_14924dc54(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  bool bVar11;
  
  lVar9 = *(longlong *)(param_1 + 0x100);
  lVar2 = *param_2;
  uVar3 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x80) * 0x20);
  uVar4 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x84) * 0x20);
  uVar1 = **(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x88) * 0x20);
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  bVar11 = false;
  uVar8 = FUN_144828ac0((longlong)*(int *)(lVar9 + 0x8c) * 0x20 + lVar2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar2 = *param_2;
  puVar10 = *(undefined8 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x90) * 0x20);
  puVar5 = *(undefined8 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x94) * 0x20);
  puVar6 = *(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x98) * 0x20);
  lVar9 = FUN_14924d56e(param_1,uVar3,uVar4,0xc,uVar1,uVar8);
  if (lVar9 != 0) {
    bVar11 = *(char *)(lVar9 + 0x10) == '\f';
    if (bVar11) {
      puVar10 = (undefined8 *)(lVar9 + 0x20);
    }
  }
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar8 = puVar10[3];
  puVar5[2] = puVar10[2];
  puVar5[3] = uVar8;
  *puVar5 = uVar3;
  puVar5[1] = uVar4;
  *puVar6 = bVar11;
  return;
}



// FUNCTION 14924dd64 FUN_14924dd64 body=269 status=ok
// SIG undefined FUN_14924dd64(void)

void FUN_14924dd64(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  bool bVar11;
  
  lVar8 = *(longlong *)(param_1 + 0x100);
  lVar2 = *param_2;
  uVar3 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar8 + 0x80) * 0x20);
  uVar4 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar8 + 0x84) * 0x20);
  uVar1 = **(undefined1 **)(lVar2 + (longlong)*(int *)(lVar8 + 0x88) * 0x20);
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  bVar11 = false;
  uVar7 = FUN_144828ac0((longlong)*(int *)(lVar8 + 0x8c) * 0x20 + lVar2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  lVar2 = *param_2;
  puVar9 = *(undefined8 **)(lVar2 + (longlong)*(int *)(lVar8 + 0x90) * 0x20);
  puVar10 = *(undefined8 **)(lVar2 + (longlong)*(int *)(lVar8 + 0x94) * 0x20);
  puVar5 = *(undefined1 **)(lVar2 + (longlong)*(int *)(lVar8 + 0x98) * 0x20);
  lVar8 = FUN_14924d56e(param_1,uVar3,uVar4,0xe,uVar1,uVar7);
  if (lVar8 != 0) {
    bVar11 = *(char *)(lVar8 + 0x10) == '\x0e';
    if (bVar11) {
      puVar9 = (undefined8 *)(lVar8 + 0x20);
    }
  }
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *puVar5 = bVar11;
  return;
}



// FUNCTION 14924de72 FUN_14924de72 body=262 status=ok
// SIG undefined FUN_14924de72(void)

void FUN_14924de72(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  bool bVar11;
  
  lVar9 = *(longlong *)(param_1 + 0x100);
  lVar2 = *param_2;
  uVar3 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x80) * 0x20);
  uVar4 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x84) * 0x20);
  uVar1 = **(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x88) * 0x20);
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  bVar11 = false;
  uVar8 = FUN_144828ac0((longlong)*(int *)(lVar9 + 0x8c) * 0x20 + lVar2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar2 = *param_2;
  puVar10 = *(undefined8 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x90) * 0x20);
  puVar5 = *(undefined8 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x94) * 0x20);
  puVar6 = *(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x98) * 0x20);
  lVar9 = FUN_14924d56e(param_1,uVar3,uVar4,0x10,uVar1,uVar8);
  if (lVar9 != 0) {
    bVar11 = *(char *)(lVar9 + 0x10) == '\x10';
    if (bVar11) {
      puVar10 = (undefined8 *)(lVar9 + 0x20);
    }
  }
  uVar3 = puVar10[1];
  *puVar5 = *puVar10;
  puVar5[1] = uVar3;
  *puVar6 = bVar11;
  return;
}



// FUNCTION 14924df78 FUN_14924df78 body=268 status=ok
// SIG undefined FUN_14924df78(void)

void FUN_14924df78(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  bool bVar11;
  
  lVar9 = *(longlong *)(param_1 + 0x100);
  lVar2 = *param_2;
  uVar3 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x80) * 0x20);
  uVar4 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x84) * 0x20);
  uVar1 = **(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x88) * 0x20);
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  bVar11 = false;
  uVar8 = FUN_144828ac0((longlong)*(int *)(lVar9 + 0x8c) * 0x20 + lVar2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar2 = *param_2;
  puVar10 = *(undefined8 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x90) * 0x20);
  puVar5 = *(undefined8 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x94) * 0x20);
  puVar6 = *(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x98) * 0x20);
  lVar9 = FUN_14924d56e(param_1,uVar3,uVar4,0x12,uVar1,uVar8);
  if (lVar9 != 0) {
    bVar11 = *(char *)(lVar9 + 0x10) == '\x12';
    if (bVar11) {
      puVar10 = (undefined8 *)(lVar9 + 0x20);
    }
  }
  *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar10 + 1);
  *puVar5 = *puVar10;
  *puVar6 = bVar11;
  return;
}



// FUNCTION 14924e084 FUN_14924e084 body=272 status=ok
// SIG undefined FUN_14924e084(void)

void FUN_14924e084(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar9 = *(longlong *)(param_1 + 0x100);
  lVar2 = *param_2;
  uVar3 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x80) * 0x20);
  uVar4 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x84) * 0x20);
  uVar1 = **(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x88) * 0x20);
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  bVar10 = false;
  uVar8 = FUN_144828ac0((longlong)*(int *)(lVar9 + 0x8c) * 0x20 + lVar2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar2 = *param_2;
  lVar7 = *(longlong *)(lVar2 + (longlong)*(int *)(lVar9 + 0x90) * 0x20);
  uVar5 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x94) * 0x20);
  puVar6 = *(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x98) * 0x20);
  lVar9 = FUN_14924d56e(param_1,uVar3,uVar4,1,uVar1,uVar8);
  if (lVar9 != 0) {
    bVar10 = *(char *)(lVar9 + 0x10) == '\x01';
    if (bVar10) {
      lVar7 = lVar9 + 0x20;
    }
  }
  FUN_1447cd5a6(uVar5,lVar7);
  *puVar6 = bVar10;
  return;
}



// FUNCTION 14924e194 FUN_14924e194 body=272 status=ok
// SIG undefined FUN_14924e194(void)

void FUN_14924e194(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar9 = *(longlong *)(param_1 + 0x100);
  lVar2 = *param_2;
  uVar3 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x80) * 0x20);
  uVar4 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x84) * 0x20);
  uVar1 = **(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x88) * 0x20);
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  bVar10 = false;
  uVar8 = FUN_144828ac0((longlong)*(int *)(lVar9 + 0x8c) * 0x20 + lVar2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar2 = *param_2;
  lVar7 = *(longlong *)(lVar2 + (longlong)*(int *)(lVar9 + 0x90) * 0x20);
  uVar5 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x94) * 0x20);
  puVar6 = *(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x98) * 0x20);
  lVar9 = FUN_14924d56e(param_1,uVar3,uVar4,3,uVar1,uVar8);
  if (lVar9 != 0) {
    bVar10 = *(char *)(lVar9 + 0x10) == '\x03';
    if (bVar10) {
      lVar7 = lVar9 + 0x20;
    }
  }
  FUN_144a67f5c(uVar5,lVar7);
  *puVar6 = bVar10;
  return;
}



// FUNCTION 14924e2a4 FUN_14924e2a4 body=272 status=ok
// SIG undefined FUN_14924e2a4(void)

void FUN_14924e2a4(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar9 = *(longlong *)(param_1 + 0x100);
  lVar2 = *param_2;
  uVar3 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x80) * 0x20);
  uVar4 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x84) * 0x20);
  uVar1 = **(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x88) * 0x20);
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  bVar10 = false;
  uVar8 = FUN_144828ac0((longlong)*(int *)(lVar9 + 0x8c) * 0x20 + lVar2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar2 = *param_2;
  lVar7 = *(longlong *)(lVar2 + (longlong)*(int *)(lVar9 + 0x90) * 0x20);
  uVar5 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x94) * 0x20);
  puVar6 = *(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x98) * 0x20);
  lVar9 = FUN_14924d56e(param_1,uVar3,uVar4,5,uVar1,uVar8);
  if (lVar9 != 0) {
    bVar10 = *(char *)(lVar9 + 0x10) == '\x05';
    if (bVar10) {
      lVar7 = lVar9 + 0x20;
    }
  }
  FUN_14054c6c4(uVar5,lVar7);
  *puVar6 = bVar10;
  return;
}



// FUNCTION 14924e3b4 FUN_14924e3b4 body=272 status=ok
// SIG undefined FUN_14924e3b4(void)

void FUN_14924e3b4(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar9 = *(longlong *)(param_1 + 0x100);
  lVar2 = *param_2;
  uVar3 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x80) * 0x20);
  uVar4 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x84) * 0x20);
  uVar1 = **(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x88) * 0x20);
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  bVar10 = false;
  uVar8 = FUN_144828ac0((longlong)*(int *)(lVar9 + 0x8c) * 0x20 + lVar2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar2 = *param_2;
  lVar7 = *(longlong *)(lVar2 + (longlong)*(int *)(lVar9 + 0x90) * 0x20);
  uVar5 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x94) * 0x20);
  puVar6 = *(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x98) * 0x20);
  lVar9 = FUN_14924d56e(param_1,uVar3,uVar4,7,uVar1,uVar8);
  if (lVar9 != 0) {
    bVar10 = *(char *)(lVar9 + 0x10) == '\a';
    if (bVar10) {
      lVar7 = lVar9 + 0x20;
    }
  }
  FUN_1406fa324(uVar5,lVar7);
  *puVar6 = bVar10;
  return;
}



// FUNCTION 14924e4c4 FUN_14924e4c4 body=272 status=ok
// SIG undefined FUN_14924e4c4(void)

void FUN_14924e4c4(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar9 = *(longlong *)(param_1 + 0x100);
  lVar2 = *param_2;
  uVar3 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x80) * 0x20);
  uVar4 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x84) * 0x20);
  uVar1 = **(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x88) * 0x20);
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  bVar10 = false;
  uVar8 = FUN_144828ac0((longlong)*(int *)(lVar9 + 0x8c) * 0x20 + lVar2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar2 = *param_2;
  lVar7 = *(longlong *)(lVar2 + (longlong)*(int *)(lVar9 + 0x90) * 0x20);
  uVar5 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x94) * 0x20);
  puVar6 = *(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x98) * 0x20);
  lVar9 = FUN_14924d56e(param_1,uVar3,uVar4,9,uVar1,uVar8);
  if (lVar9 != 0) {
    bVar10 = *(char *)(lVar9 + 0x10) == '\t';
    if (bVar10) {
      lVar7 = lVar9 + 0x20;
    }
  }
  FUN_1405b70a4(uVar5,lVar7);
  *puVar6 = bVar10;
  return;
}



// FUNCTION 14924e5d4 FUN_14924e5d4 body=272 status=ok
// SIG undefined FUN_14924e5d4(void)

void FUN_14924e5d4(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar9 = *(longlong *)(param_1 + 0x100);
  lVar2 = *param_2;
  uVar3 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x80) * 0x20);
  uVar4 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x84) * 0x20);
  uVar1 = **(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x88) * 0x20);
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  bVar10 = false;
  uVar8 = FUN_144828ac0((longlong)*(int *)(lVar9 + 0x8c) * 0x20 + lVar2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar2 = *param_2;
  lVar7 = *(longlong *)(lVar2 + (longlong)*(int *)(lVar9 + 0x90) * 0x20);
  uVar5 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x94) * 0x20);
  puVar6 = *(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x98) * 0x20);
  lVar9 = FUN_14924d56e(param_1,uVar3,uVar4,0xb,uVar1,uVar8);
  if (lVar9 != 0) {
    bVar10 = *(char *)(lVar9 + 0x10) == '\v';
    if (bVar10) {
      lVar7 = lVar9 + 0x20;
    }
  }
  FUN_1492067de(uVar5,lVar7);
  *puVar6 = bVar10;
  return;
}



// FUNCTION 14924e6e4 FUN_14924e6e4 body=272 status=ok
// SIG undefined FUN_14924e6e4(void)

void FUN_14924e6e4(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar9 = *(longlong *)(param_1 + 0x100);
  lVar2 = *param_2;
  uVar3 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x80) * 0x20);
  uVar4 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x84) * 0x20);
  uVar1 = **(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x88) * 0x20);
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  bVar10 = false;
  uVar8 = FUN_144828ac0((longlong)*(int *)(lVar9 + 0x8c) * 0x20 + lVar2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar2 = *param_2;
  lVar7 = *(longlong *)(lVar2 + (longlong)*(int *)(lVar9 + 0x90) * 0x20);
  uVar5 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x94) * 0x20);
  puVar6 = *(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x98) * 0x20);
  lVar9 = FUN_14924d56e(param_1,uVar3,uVar4,0xd,uVar1,uVar8);
  if (lVar9 != 0) {
    bVar10 = *(char *)(lVar9 + 0x10) == '\r';
    if (bVar10) {
      lVar7 = lVar9 + 0x20;
    }
  }
  FUN_140472d9a(uVar5,lVar7);
  *puVar6 = bVar10;
  return;
}



// FUNCTION 14924e7f4 FUN_14924e7f4 body=272 status=ok
// SIG undefined FUN_14924e7f4(void)

void FUN_14924e7f4(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar9 = *(longlong *)(param_1 + 0x100);
  lVar2 = *param_2;
  uVar3 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x80) * 0x20);
  uVar4 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x84) * 0x20);
  uVar1 = **(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x88) * 0x20);
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  bVar10 = false;
  uVar8 = FUN_144828ac0((longlong)*(int *)(lVar9 + 0x8c) * 0x20 + lVar2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar2 = *param_2;
  lVar7 = *(longlong *)(lVar2 + (longlong)*(int *)(lVar9 + 0x90) * 0x20);
  uVar5 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x94) * 0x20);
  puVar6 = *(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x98) * 0x20);
  lVar9 = FUN_14924d56e(param_1,uVar3,uVar4,0xf,uVar1,uVar8);
  if (lVar9 != 0) {
    bVar10 = *(char *)(lVar9 + 0x10) == '\x0f';
    if (bVar10) {
      lVar7 = lVar9 + 0x20;
    }
  }
  FUN_144756208(uVar5,lVar7);
  *puVar6 = bVar10;
  return;
}



// FUNCTION 14924e904 FUN_14924e904 body=272 status=ok
// SIG undefined FUN_14924e904(void)

void FUN_14924e904(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar9 = *(longlong *)(param_1 + 0x100);
  lVar2 = *param_2;
  uVar3 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x80) * 0x20);
  uVar4 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x84) * 0x20);
  uVar1 = **(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x88) * 0x20);
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  bVar10 = false;
  uVar8 = FUN_144828ac0((longlong)*(int *)(lVar9 + 0x8c) * 0x20 + lVar2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar2 = *param_2;
  lVar7 = *(longlong *)(lVar2 + (longlong)*(int *)(lVar9 + 0x90) * 0x20);
  uVar5 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x94) * 0x20);
  puVar6 = *(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x98) * 0x20);
  lVar9 = FUN_14924d56e(param_1,uVar3,uVar4,0x11,uVar1,uVar8);
  if (lVar9 != 0) {
    bVar10 = *(char *)(lVar9 + 0x10) == '\x11';
    if (bVar10) {
      lVar7 = lVar9 + 0x20;
    }
  }
  FUN_14479f9aa(uVar5,lVar7);
  *puVar6 = bVar10;
  return;
}



// FUNCTION 14924ea14 FUN_14924ea14 body=272 status=ok
// SIG undefined FUN_14924ea14(void)

void FUN_14924ea14(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar9 = *(longlong *)(param_1 + 0x100);
  lVar2 = *param_2;
  uVar3 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x80) * 0x20);
  uVar4 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x84) * 0x20);
  uVar1 = **(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x88) * 0x20);
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  bVar10 = false;
  uVar8 = FUN_144828ac0((longlong)*(int *)(lVar9 + 0x8c) * 0x20 + lVar2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar2 = *param_2;
  lVar7 = *(longlong *)(lVar2 + (longlong)*(int *)(lVar9 + 0x90) * 0x20);
  uVar5 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar9 + 0x94) * 0x20);
  puVar6 = *(undefined1 **)(lVar2 + (longlong)*(int *)(lVar9 + 0x98) * 0x20);
  lVar9 = FUN_14924d56e(param_1,uVar3,uVar4,0x13,uVar1,uVar8);
  if (lVar9 != 0) {
    bVar10 = *(char *)(lVar9 + 0x10) == '\x13';
    if (bVar10) {
      lVar7 = lVar9 + 0x20;
    }
  }
  FUN_1444888de(uVar5,lVar7);
  *puVar6 = bVar10;
  return;
}



// FUNCTION 14924eb24 FUN_14924eb24 body=301 status=ok
// SIG undefined FUN_14924eb24(void)

longlong FUN_14924eb24(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x94) == -1) {
    uVar5 = FUN_14924d19a(param_1);
    lVar1 = param_1 + 0x70;
    FUN_14921c4cc(lVar1,uVar5);
    FUN_1444b0264();
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1490f2336(lVar1,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x70);
    FUN_1446f57c6(&DAT_14cc09f50,&local_40);
    FUN_144478eaa((longlong)iVar2 * 0x50 + lVar3,local_40,0,&DAT_14cc0a130);
    *(int *)(param_1 + 0x94) = iVar2;
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1490f2336(lVar1,iVar2);
    }
    uVar4 = DAT_14c764f08;
    lVar1 = *(longlong *)(param_1 + 0x70);
    FUN_1446f57c6(&DAT_14cc09f70,&local_40);
    FUN_144478fc0((longlong)iVar2 * 0x50 + lVar1,local_40,1,uVar4);
    *(int *)(param_1 + 0x9c) = iVar2;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1 + 0x70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924ec52 FUN_14924ec52 body=229 status=ok
// SIG undefined FUN_14924ec52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14924ec52(void)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0a158) {
    FUN_144b3d300(&DAT_14cc0a158);
    if (DAT_14cc0a158 == -1) {
      FUN_1446f470e(&local_18,L"ExecuteContext",1);
      DAT_14cc0a148 = (undefined8 *)0x0;
      _DAT_14cc0a150 = 1;
      FUN_1490f2264(&DAT_14cc0a148,1,0);
      puVar1 = DAT_14cc0a148;
      *DAT_14cc0a148 = local_18;
      *(undefined1 *)(puVar1 + 1) = 2;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
      atexit((_func_5014 *)&LAB_1444b0a2f);
      _Init_thread_footer(&DAT_14cc0a158);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return &DAT_14cc0a148;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924ed38 FUN_14924ed38 body=198 status=ok
// SIG undefined FUN_14924ed38(void)

undefined8
FUN_14924ed38(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5,longlong param_6)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar4 = FUN_144828dba(param_6,param_2,*(undefined8 *)(param_1 + 0x1b0));
  if (cVar4 != '\0') {
    uVar1 = *(ushort *)(param_6 + 0xc);
    if (uVar1 != 0xffff) {
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x1b0) + 0xc0);
      if ((uVar2 != uVar1 && (int)(uint)uVar1 <= (int)uVar2) &&
         (lVar3 = *(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0xb8) +
                   (ulonglong)(uint)uVar1 * 8), lVar3 != 0)) {
        FUN_1492d5766(param_1,local_38,param_5,param_3);
        local_48 = 1;
        uVar5 = FUN_1491e0882(*(undefined8 *)(param_1 + 0x1b0),lVar3,local_38,param_4);
        goto LAB_14924eddc;
      }
    }
  }
  uVar5 = 0;
LAB_14924eddc:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924ee00 FUN_14924ee00 body=265 status=ok
// SIG undefined FUN_14924ee00(void)

void FUN_14924ee00(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 uVar13;
  
  lVar11 = *(longlong *)(param_1 + 0x100);
  lVar4 = *(longlong *)(param_1 + 0xc0);
  lVar5 = *param_2;
  uVar6 = *(undefined8 *)(lVar5 + (longlong)*(int *)(lVar11 + 0x80) * 0x20);
  uVar7 = *(undefined8 *)(lVar5 + (longlong)*(int *)(lVar11 + 0x84) * 0x20);
  uVar2 = **(undefined1 **)(lVar5 + (longlong)*(int *)(lVar11 + 0x88) * 0x20);
  lVar12 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar13 = 0;
  uVar10 = FUN_144828ac0((longlong)*(int *)(lVar11 + 0x8c) * 0x20 + lVar5,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar12 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar12 * 0x14));
  pcVar8 = *(char **)(*param_2 + (longlong)*(int *)(lVar11 + 0x94) * 0x20);
  puVar9 = *(undefined1 **)(*param_2 + (longlong)*(int *)(lVar11 + 0x9c) * 0x20);
  lVar11 = FUN_14924ed38(lVar4,uVar6,uVar7,0,uVar2,uVar10);
  if (lVar11 != 0) {
    if (*(char *)(lVar11 + 0x10) == '\0') {
      cVar3 = *pcVar8;
      uVar13 = 1;
      if (*(char *)(lVar11 + 0x20) != cVar3) {
        *(char *)(lVar11 + 0x20) = cVar3;
        piVar1 = (int *)(*(longlong *)(lVar4 + 0x1b0) + 0xac);
        *piVar1 = *piVar1 + 1;
      }
    }
    else {
      uVar13 = 0;
    }
  }
  *puVar9 = uVar13;
  return;
}



// FUNCTION 14924ef0a FUN_14924ef0a body=293 status=ok
// SIG undefined FUN_14924ef0a(void)

void FUN_14924ef0a(longlong param_1,longlong *param_2)

{
  int *piVar1;
  float fVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float *pfVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 uVar13;
  
  lVar11 = *(longlong *)(param_1 + 0x100);
  lVar4 = *(longlong *)(param_1 + 0xc0);
  lVar5 = *param_2;
  uVar6 = *(undefined8 *)(lVar5 + (longlong)*(int *)(lVar11 + 0x80) * 0x20);
  uVar7 = *(undefined8 *)(lVar5 + (longlong)*(int *)(lVar11 + 0x84) * 0x20);
  uVar3 = **(undefined1 **)(lVar5 + (longlong)*(int *)(lVar11 + 0x88) * 0x20);
  lVar12 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar13 = 0;
  uVar10 = FUN_144828ac0((longlong)*(int *)(lVar11 + 0x8c) * 0x20 + lVar5,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar12 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar12 * 0x14));
  pfVar8 = *(float **)(*param_2 + (longlong)*(int *)(lVar11 + 0x94) * 0x20);
  puVar9 = *(undefined1 **)(*param_2 + (longlong)*(int *)(lVar11 + 0x9c) * 0x20);
  lVar11 = FUN_14924ed38(lVar4,uVar6,uVar7,2,uVar3,uVar10);
  if (lVar11 != 0) {
    if (*(char *)(lVar11 + 0x10) == '\x02') {
      fVar2 = *pfVar8;
      uVar13 = 1;
      if (1e-08 < ABS(*(float *)(lVar11 + 0x20) - fVar2)) {
        *(float *)(lVar11 + 0x20) = fVar2;
        piVar1 = (int *)(*(longlong *)(lVar4 + 0x1b0) + 0xac);
        *piVar1 = *piVar1 + 1;
      }
    }
    else {
      uVar13 = 0;
    }
  }
  *puVar9 = uVar13;
  return;
}



// FUNCTION 14924f030 FUN_14924f030 body=265 status=ok
// SIG undefined FUN_14924f030(void)

void FUN_14924f030(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 uVar12;
  
  lVar10 = *(longlong *)(param_1 + 0x100);
  lVar3 = *(longlong *)(param_1 + 0xc0);
  lVar4 = *param_2;
  uVar5 = *(undefined8 *)(lVar4 + (longlong)*(int *)(lVar10 + 0x80) * 0x20);
  uVar6 = *(undefined8 *)(lVar4 + (longlong)*(int *)(lVar10 + 0x84) * 0x20);
  uVar1 = **(undefined1 **)(lVar4 + (longlong)*(int *)(lVar10 + 0x88) * 0x20);
  lVar11 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar12 = 0;
  uVar9 = FUN_144828ac0((longlong)*(int *)(lVar10 + 0x8c) * 0x20 + lVar4,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar11 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar11 * 0x14));
  piVar7 = *(int **)(*param_2 + (longlong)*(int *)(lVar10 + 0x94) * 0x20);
  puVar8 = *(undefined1 **)(*param_2 + (longlong)*(int *)(lVar10 + 0x9c) * 0x20);
  lVar10 = FUN_14924ed38(lVar3,uVar5,uVar6,4,uVar1,uVar9);
  if (lVar10 != 0) {
    if (*(char *)(lVar10 + 0x10) == '\x04') {
      iVar2 = *piVar7;
      uVar12 = 1;
      if (*(int *)(lVar10 + 0x20) != iVar2) {
        *(int *)(lVar10 + 0x20) = iVar2;
        piVar7 = (int *)(*(longlong *)(lVar3 + 0x1b0) + 0xac);
        *piVar7 = *piVar7 + 1;
      }
    }
    else {
      uVar12 = 0;
    }
  }
  *puVar8 = uVar12;
  return;
}



// FUNCTION 14924f13a FUN_14924f13a body=280 status=ok
// SIG undefined FUN_14924f13a(void)

void FUN_14924f13a(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 uVar11;
  
  lVar9 = *(longlong *)(param_1 + 0x100);
  lVar2 = *(longlong *)(param_1 + 0xc0);
  lVar3 = *param_2;
  uVar4 = *(undefined8 *)(lVar3 + (longlong)*(int *)(lVar9 + 0x80) * 0x20);
  uVar5 = *(undefined8 *)(lVar3 + (longlong)*(int *)(lVar9 + 0x84) * 0x20);
  uVar1 = **(undefined1 **)(lVar3 + (longlong)*(int *)(lVar9 + 0x88) * 0x20);
  lVar10 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar11 = 0;
  uVar8 = FUN_144828ac0((longlong)*(int *)(lVar9 + 0x8c) * 0x20 + lVar3,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar10 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar10 * 0x14));
  piVar6 = *(int **)(*param_2 + (longlong)*(int *)(lVar9 + 0x94) * 0x20);
  puVar7 = *(undefined1 **)(*param_2 + (longlong)*(int *)(lVar9 + 0x9c) * 0x20);
  lVar9 = FUN_14924ed38(lVar2,uVar4,uVar5,6,uVar1,uVar8);
  if (lVar9 != 0) {
    if (*(char *)(lVar9 + 0x10) == '\x06') {
      uVar11 = 1;
      if ((*(int *)(lVar9 + 0x20) != *piVar6) || (*(int *)(lVar9 + 0x24) != piVar6[1])) {
        *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)piVar6;
        piVar6 = (int *)(*(longlong *)(lVar2 + 0x1b0) + 0xac);
        *piVar6 = *piVar6 + 1;
      }
    }
    else {
      uVar11 = 0;
    }
  }
  *puVar7 = uVar11;
  return;
}



// FUNCTION 14924f252 FUN_14924f252 body=369 status=ok
// SIG undefined FUN_14924f252(void)

void FUN_14924f252(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double *pdVar7;
  undefined1 *puVar8;
  double dVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 uVar13;
  
  lVar11 = *(longlong *)(param_1 + 0x100);
  lVar3 = *(longlong *)(param_1 + 0xc0);
  lVar4 = *param_2;
  uVar5 = *(undefined8 *)(lVar4 + (longlong)*(int *)(lVar11 + 0x80) * 0x20);
  uVar6 = *(undefined8 *)(lVar4 + (longlong)*(int *)(lVar11 + 0x84) * 0x20);
  uVar2 = **(undefined1 **)(lVar4 + (longlong)*(int *)(lVar11 + 0x88) * 0x20);
  lVar12 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar13 = 0;
  uVar10 = FUN_144828ac0((longlong)*(int *)(lVar11 + 0x8c) * 0x20 + lVar4,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar12 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar12 * 0x14));
  pdVar7 = *(double **)(*param_2 + (longlong)*(int *)(lVar11 + 0x94) * 0x20);
  puVar8 = *(undefined1 **)(*param_2 + (longlong)*(int *)(lVar11 + 0x9c) * 0x20);
  lVar11 = FUN_14924ed38(lVar3,uVar5,uVar6,8,uVar2,uVar10);
  if (lVar11 != 0) {
    if (*(char *)(lVar11 + 0x10) == '\b') {
      if (((9.999999747378752e-05 < ABS(*(double *)(lVar11 + 0x20) - *pdVar7)) ||
          (9.999999747378752e-05 < ABS(*(double *)(lVar11 + 0x28) - pdVar7[1]))) ||
         (uVar13 = 1, 9.999999747378752e-05 < ABS(*(double *)(lVar11 + 0x30) - pdVar7[2]))) {
        *(double *)(lVar11 + 0x30) = pdVar7[2];
        dVar9 = pdVar7[1];
        *(double *)(lVar11 + 0x20) = *pdVar7;
        *(double *)(lVar11 + 0x28) = dVar9;
        piVar1 = (int *)(*(longlong *)(lVar3 + 0x1b0) + 0xac);
        *piVar1 = *piVar1 + 1;
        uVar13 = 1;
      }
    }
    else {
      uVar13 = 0;
    }
  }
  *puVar8 = uVar13;
  return;
}



// FUNCTION 14924f3c4 FUN_14924f3c4 body=526 status=ok
// SIG undefined FUN_14924f3c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14924f3c4(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  double *pdVar5;
  undefined1 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined1 uVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  lVar13 = *(longlong *)(param_1 + 0x100);
  lVar3 = *(longlong *)(param_1 + 0xc0);
  lVar10 = *param_2;
  uVar15 = *(undefined8 *)(lVar10 + (longlong)*(int *)(lVar13 + 0x80) * 0x20);
  uVar4 = *(undefined8 *)(lVar10 + (longlong)*(int *)(lVar13 + 0x84) * 0x20);
  uVar2 = **(undefined1 **)(lVar10 + (longlong)*(int *)(lVar13 + 0x88) * 0x20);
  lVar12 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar16 = 0;
  uVar9 = FUN_144828ac0((longlong)*(int *)(lVar13 + 0x8c) * 0x20 + lVar10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar12 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar12 * 0x14));
  pdVar5 = *(double **)(*param_2 + (longlong)*(int *)(lVar13 + 0x94) * 0x20);
  puVar6 = *(undefined1 **)(*param_2 + (longlong)*(int *)(lVar13 + 0x9c) * 0x20);
  lVar13 = lVar3;
  lVar10 = FUN_14924ed38(lVar3,uVar15,uVar4,10,uVar2,uVar9);
  if (lVar10 != 0) {
    if (*(char *)(lVar10 + 0x10) == '\n') {
      dVar30 = *(double *)(lVar10 + 0x20) - *pdVar5;
      dVar31 = *(double *)(lVar10 + 0x28) - pdVar5[1];
      dVar17 = *(double *)(lVar10 + 0x30) - pdVar5[2];
      dVar7 = (double)DAT_1499387d0;
      dVar8 = DAT_1499387d0._8_8_;
      auVar24._8_8_ = dVar31;
      auVar24._0_8_ = dVar30;
      auVar25 = divpd(auVar24,_DAT_1499387d0);
      auVar18._0_8_ = dVar17 / 360.0;
      auVar18._8_8_ = 0;
      auVar26 = roundpd(auVar25,auVar25,3);
      auVar25 = roundpd(auVar18,auVar18,3);
      auVar32._0_8_ = dVar17 - auVar25._0_8_ * dVar7;
      auVar32._8_8_ = 0.0 - auVar25._8_8_ * dVar8;
      dVar30 = dVar30 - auVar26._0_8_ * dVar7;
      dVar31 = dVar31 - auVar26._8_8_ * dVar8;
      auVar29._0_8_ = dVar30 + dVar7;
      auVar29._8_8_ = dVar31 + dVar8;
      auVar28._0_8_ = dVar7 + auVar32._0_8_;
      auVar28._8_8_ = dVar8 + auVar32._8_8_;
      auVar19._8_8_ = -(ulonglong)(0.0 <= dVar31);
      auVar19._0_8_ = -(ulonglong)(0.0 <= dVar30);
      auVar25._8_8_ = dVar31;
      auVar25._0_8_ = dVar30;
      auVar26 = blendvpd(auVar29,auVar25,auVar19);
      auVar20._8_8_ = -(ulonglong)(0.0 <= auVar32._8_8_);
      auVar20._0_8_ = -(ulonglong)(0.0 <= auVar32._0_8_);
      auVar25 = blendvpd(auVar28,auVar32,auVar20);
      auVar33._0_8_ = auVar26._0_8_ + -360.0;
      auVar33._8_8_ = auVar26._8_8_ + -360.0;
      auVar21._8_8_ = -(ulonglong)(180.0 < auVar26._8_8_);
      auVar21._0_8_ = -(ulonglong)(180.0 < auVar26._0_8_);
      auVar18 = blendvpd(auVar26,auVar33,auVar21);
      auVar22._8_8_ = -(ulonglong)(180.0 < auVar25._8_8_);
      auVar22._0_8_ = -(ulonglong)(180.0 < auVar25._0_8_);
      auVar26._8_8_ = auVar25._8_8_ + -360.0;
      auVar26._0_8_ = auVar25._0_8_ + -360.0;
      auVar25 = blendvpd(auVar25,auVar26,auVar22);
      auVar27._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar18._8_8_));
      auVar27._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar18._0_8_));
      iVar11 = movmskpd((int)lVar13,auVar27);
      auVar23._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar25._8_8_));
      auVar23._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar25._0_8_));
      uVar14 = movmskpd((int)uVar15,auVar23);
      uVar16 = 1;
      if ((uVar14 & 0x3fffffff) != 0 || iVar11 != 0) {
        *(double *)(lVar10 + 0x30) = pdVar5[2];
        dVar7 = pdVar5[1];
        *(double *)(lVar10 + 0x20) = *pdVar5;
        *(double *)(lVar10 + 0x28) = dVar7;
        piVar1 = (int *)(*(longlong *)(lVar3 + 0x1b0) + 0xac);
        *piVar1 = *piVar1 + 1;
      }
    }
    else {
      uVar16 = 0;
    }
  }
  *puVar6 = uVar16;
  return;
}



// FUNCTION 14924f5d2 FUN_14924f5d2 body=468 status=ok
// SIG undefined FUN_14924f5d2(void)

void FUN_14924f5d2(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  double *pdVar5;
  undefined1 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined1 uVar21;
  longlong lVar22;
  
  lVar22 = *(longlong *)(param_1 + 0x100);
  lVar3 = *(longlong *)(param_1 + 0xc0);
  lVar15 = *param_2;
  uVar20 = *(undefined8 *)(lVar15 + (longlong)*(int *)(lVar22 + 0x80) * 0x20);
  uVar4 = *(undefined8 *)(lVar15 + (longlong)*(int *)(lVar22 + 0x84) * 0x20);
  uVar2 = **(undefined1 **)(lVar15 + (longlong)*(int *)(lVar22 + 0x88) * 0x20);
  lVar17 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar21 = 0;
  uVar14 = FUN_144828ac0((longlong)*(int *)(lVar22 + 0x8c) * 0x20 + lVar15,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar17 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar17 * 0x14));
  pdVar5 = *(double **)(*param_2 + (longlong)*(int *)(lVar22 + 0x94) * 0x20);
  puVar6 = *(undefined1 **)(*param_2 + (longlong)*(int *)(lVar22 + 0x9c) * 0x20);
  lVar22 = lVar3;
  lVar15 = FUN_14924ed38(lVar3,uVar20,uVar4,0xc,uVar2,uVar14);
  if (lVar15 != 0) {
    if (*(char *)(lVar15 + 0x10) == '\f') {
      lVar17 = -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar15 + 0x28) - pdVar5[1]));
      auVar10._8_4_ = (int)lVar17;
      auVar10._0_8_ =
           -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar15 + 0x20) - *pdVar5));
      auVar10._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
      uVar16 = movmskpd((int)lVar22,auVar10);
      lVar22 = -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar15 + 0x38) - pdVar5[3]));
      auVar9._8_4_ = (int)lVar22;
      auVar9._0_8_ = -(ulonglong)
                      (9.999999747378752e-05 < ABS(*(double *)(lVar15 + 0x30) - pdVar5[2]));
      auVar9._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
      iVar18 = movmskpd((int)uVar20,auVar9);
      uVar21 = 1;
      uVar19 = iVar18 << 2 | uVar16;
      if (uVar19 != 0) {
        auVar7._8_8_ = -(ulonglong)
                        (9.999999747378752e-05 < ABS(*(double *)(lVar15 + 0x28) + pdVar5[1]));
        auVar7._0_8_ = -(ulonglong)
                        (9.999999747378752e-05 < ABS(*(double *)(lVar15 + 0x20) + *pdVar5));
        iVar18 = movmskpd(uVar16,auVar7);
        auVar8._8_8_ = -(ulonglong)
                        (9.999999747378752e-05 < ABS(*(double *)(lVar15 + 0x38) + pdVar5[3]));
        auVar8._0_8_ = -(ulonglong)
                        (9.999999747378752e-05 < ABS(*(double *)(lVar15 + 0x30) + pdVar5[2]));
        uVar16 = movmskpd(uVar19,auVar8);
        if ((uVar16 & 0x3fffffff) != 0 || iVar18 != 0) {
          dVar11 = *pdVar5;
          dVar12 = pdVar5[1];
          dVar13 = pdVar5[3];
          *(double *)(lVar15 + 0x30) = pdVar5[2];
          *(double *)(lVar15 + 0x38) = dVar13;
          *(double *)(lVar15 + 0x20) = dVar11;
          *(double *)(lVar15 + 0x28) = dVar12;
          piVar1 = (int *)(*(longlong *)(lVar3 + 0x1b0) + 0xac);
          *piVar1 = *piVar1 + 1;
        }
      }
    }
    else {
      uVar21 = 0;
    }
  }
  *puVar6 = uVar21;
  return;
}



// FUNCTION 14924f7a6 FUN_14924f7a6 body=282 status=ok
// SIG undefined FUN_14924f7a6(void)

void FUN_14924f7a6(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  lVar9 = *(longlong *)(param_1 + 0x100);
  lVar3 = *(longlong *)(param_1 + 0xc0);
  lVar11 = *param_2;
  uVar4 = *(undefined8 *)(lVar11 + (longlong)*(int *)(lVar9 + 0x80) * 0x20);
  uVar5 = *(undefined8 *)(lVar11 + (longlong)*(int *)(lVar9 + 0x84) * 0x20);
  uVar2 = **(undefined1 **)(lVar11 + (longlong)*(int *)(lVar9 + 0x88) * 0x20);
  lVar10 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar12 = 0;
  uVar8 = FUN_144828ac0((longlong)*(int *)(lVar9 + 0x8c) * 0x20 + lVar11,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar10 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar10 * 0x14));
  puVar13 = *(undefined8 **)(*param_2 + (longlong)*(int *)(lVar9 + 0x94) * 0x20);
  puVar6 = *(undefined1 **)(*param_2 + (longlong)*(int *)(lVar9 + 0x9c) * 0x20);
  lVar9 = FUN_14924ed38(lVar3,uVar4,uVar5,0xe,uVar2,uVar8);
  if (lVar9 != 0) {
    if (*(char *)(lVar9 + 0x10) == '\x0e') {
      cVar7 = FUN_1492d08f2((undefined8 *)(lVar9 + 0x20),puVar13);
      uVar12 = 1;
      if (cVar7 == '\0') {
        puVar14 = (undefined8 *)(lVar9 + 0x20);
        for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
          *puVar14 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar14 = puVar14 + 1;
        }
        piVar1 = (int *)(*(longlong *)(lVar3 + 0x1b0) + 0xac);
        *piVar1 = *piVar1 + 1;
      }
    }
    else {
      uVar12 = 0;
    }
  }
  *puVar6 = uVar12;
  return;
}



// FUNCTION 14924f8c0 FUN_14924f8c0 body=278 status=ok
// SIG undefined FUN_14924f8c0(void)

void FUN_14924f8c0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  char cVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 uVar13;
  
  lVar11 = *(longlong *)(param_1 + 0x100);
  lVar3 = *(longlong *)(param_1 + 0xc0);
  lVar4 = *param_2;
  uVar5 = *(undefined8 *)(lVar4 + (longlong)*(int *)(lVar11 + 0x80) * 0x20);
  uVar6 = *(undefined8 *)(lVar4 + (longlong)*(int *)(lVar11 + 0x84) * 0x20);
  uVar2 = **(undefined1 **)(lVar4 + (longlong)*(int *)(lVar11 + 0x88) * 0x20);
  lVar12 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar13 = 0;
  uVar10 = FUN_144828ac0((longlong)*(int *)(lVar11 + 0x8c) * 0x20 + lVar4,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar12 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar12 * 0x14));
  puVar7 = *(undefined8 **)(*param_2 + (longlong)*(int *)(lVar11 + 0x94) * 0x20);
  puVar8 = *(undefined1 **)(*param_2 + (longlong)*(int *)(lVar11 + 0x9c) * 0x20);
  lVar11 = FUN_14924ed38(lVar3,uVar5,uVar6,0x10,uVar2,uVar10);
  if (lVar11 != 0) {
    if (*(char *)(lVar11 + 0x10) == '\x10') {
      cVar9 = FUN_1492d0a36((undefined8 *)(lVar11 + 0x20),puVar7);
      uVar13 = 1;
      if (cVar9 == '\0') {
        uVar5 = puVar7[1];
        *(undefined8 *)(lVar11 + 0x20) = *puVar7;
        *(undefined8 *)(lVar11 + 0x28) = uVar5;
        piVar1 = (int *)(*(longlong *)(lVar3 + 0x1b0) + 0xac);
        *piVar1 = *piVar1 + 1;
      }
    }
    else {
      uVar13 = 0;
    }
  }
  *puVar8 = uVar13;
  return;
}



// FUNCTION 14924f9d6 FUN_14924f9d6 body=292 status=ok
// SIG undefined FUN_14924f9d6(void)

void FUN_14924f9d6(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 uVar12;
  
  lVar10 = *(longlong *)(param_1 + 0x100);
  lVar3 = *(longlong *)(param_1 + 0xc0);
  lVar4 = *param_2;
  uVar5 = *(undefined8 *)(lVar4 + (longlong)*(int *)(lVar10 + 0x80) * 0x20);
  uVar6 = *(undefined8 *)(lVar4 + (longlong)*(int *)(lVar10 + 0x84) * 0x20);
  uVar2 = **(undefined1 **)(lVar4 + (longlong)*(int *)(lVar10 + 0x88) * 0x20);
  lVar11 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar12 = 0;
  uVar9 = FUN_144828ac0((longlong)*(int *)(lVar10 + 0x8c) * 0x20 + lVar4,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar11 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar11 * 0x14));
  pcVar7 = *(char **)(*param_2 + (longlong)*(int *)(lVar10 + 0x94) * 0x20);
  puVar8 = *(undefined1 **)(*param_2 + (longlong)*(int *)(lVar10 + 0x9c) * 0x20);
  lVar10 = FUN_14924ed38(lVar3,uVar5,uVar6,0x12,uVar2,uVar9);
  if (lVar10 != 0) {
    if (*(char *)(lVar10 + 0x10) == '\x12') {
      uVar12 = 1;
      if ((*(longlong *)(lVar10 + 0x24) != *(longlong *)(pcVar7 + 4)) ||
         (*(char *)(lVar10 + 0x20) != *pcVar7)) {
        *(undefined4 *)(lVar10 + 0x28) = *(undefined4 *)(pcVar7 + 8);
        *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)pcVar7;
        piVar1 = (int *)(*(longlong *)(lVar3 + 0x1b0) + 0xac);
        *piVar1 = *piVar1 + 1;
      }
    }
    else {
      uVar12 = 0;
    }
  }
  *puVar8 = uVar12;
  return;
}



// FUNCTION 14924fafa FUN_14924fafa body=308 status=ok
// SIG undefined FUN_14924fafa(void)

void FUN_14924fafa(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 uVar13;
  ulonglong uVar14;
  
  lVar11 = *(longlong *)(param_1 + 0x100);
  lVar4 = *(longlong *)(param_1 + 0xc0);
  lVar5 = *param_2;
  uVar6 = *(undefined8 *)(lVar5 + (longlong)*(int *)(lVar11 + 0x80) * 0x20);
  uVar7 = *(undefined8 *)(lVar5 + (longlong)*(int *)(lVar11 + 0x84) * 0x20);
  uVar2 = **(undefined1 **)(lVar5 + (longlong)*(int *)(lVar11 + 0x88) * 0x20);
  lVar12 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar13 = 0;
  uVar10 = FUN_144828ac0((longlong)*(int *)(lVar11 + 0x8c) * 0x20 + lVar5,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar12 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar12 * 0x14));
  plVar8 = *(longlong **)(*param_2 + (longlong)*(int *)(lVar11 + 0x94) * 0x20);
  puVar9 = *(undefined1 **)(*param_2 + (longlong)*(int *)(lVar11 + 0x9c) * 0x20);
  lVar11 = FUN_14924ed38(lVar4,uVar6,uVar7,1,uVar2,uVar10);
  if (lVar11 != 0) {
    if (*(char *)(lVar11 + 0x10) == '\x01') {
      uVar3 = *(uint *)(lVar11 + 0x28);
      if (uVar3 == *(uint *)(plVar8 + 1)) {
        uVar13 = 1;
        if (0 < (int)uVar3) {
          uVar14 = 0;
          do {
            if (*(char *)(*(longlong *)(lVar11 + 0x20) + uVar14) != *(char *)(*plVar8 + uVar14))
            goto LAB_14924fc14;
            uVar14 = uVar14 + 1;
          } while (uVar3 != uVar14);
        }
      }
      else {
LAB_14924fc14:
        FUN_1447cd5a6((longlong *)(lVar11 + 0x20),plVar8);
        piVar1 = (int *)(*(longlong *)(lVar4 + 0x1b0) + 0xac);
        *piVar1 = *piVar1 + 1;
        uVar13 = 1;
      }
    }
    else {
      uVar13 = 0;
    }
  }
  *puVar9 = uVar13;
  return;
}



// FUNCTION 14924fc2e FUN_14924fc2e body=333 status=ok
// SIG undefined FUN_14924fc2e(void)

void FUN_14924fc2e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 uVar13;
  ulonglong uVar14;
  
  lVar11 = *(longlong *)(param_1 + 0x100);
  lVar4 = *(longlong *)(param_1 + 0xc0);
  lVar5 = *param_2;
  uVar6 = *(undefined8 *)(lVar5 + (longlong)*(int *)(lVar11 + 0x80) * 0x20);
  uVar7 = *(undefined8 *)(lVar5 + (longlong)*(int *)(lVar11 + 0x84) * 0x20);
  uVar2 = **(undefined1 **)(lVar5 + (longlong)*(int *)(lVar11 + 0x88) * 0x20);
  lVar12 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar13 = 0;
  uVar10 = FUN_144828ac0((longlong)*(int *)(lVar11 + 0x8c) * 0x20 + lVar5,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar12 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar12 * 0x14));
  plVar8 = *(longlong **)(*param_2 + (longlong)*(int *)(lVar11 + 0x94) * 0x20);
  puVar9 = *(undefined1 **)(*param_2 + (longlong)*(int *)(lVar11 + 0x9c) * 0x20);
  lVar11 = FUN_14924ed38(lVar4,uVar6,uVar7,3,uVar2,uVar10);
  if (lVar11 != 0) {
    if (*(char *)(lVar11 + 0x10) == '\x03') {
      uVar3 = *(uint *)(lVar11 + 0x28);
      if (uVar3 == *(uint *)(plVar8 + 1)) {
        uVar13 = 1;
        if (0 < (int)uVar3) {
          uVar14 = 0;
          do {
            if (1e-08 < ABS(*(float *)(*(longlong *)(lVar11 + 0x20) + uVar14 * 4) -
                            *(float *)(*plVar8 + uVar14 * 4))) goto LAB_14924fd61;
            uVar14 = uVar14 + 1;
          } while (uVar3 != uVar14);
        }
      }
      else {
LAB_14924fd61:
        FUN_144a67f5c((longlong *)(lVar11 + 0x20),plVar8);
        piVar1 = (int *)(*(longlong *)(lVar4 + 0x1b0) + 0xac);
        *piVar1 = *piVar1 + 1;
        uVar13 = 1;
      }
    }
    else {
      uVar13 = 0;
    }
  }
  *puVar9 = uVar13;
  return;
}



// FUNCTION 14924fd7c FUN_14924fd7c body=308 status=ok
// SIG undefined FUN_14924fd7c(void)

void FUN_14924fd7c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 uVar13;
  ulonglong uVar14;
  
  lVar11 = *(longlong *)(param_1 + 0x100);
  lVar4 = *(longlong *)(param_1 + 0xc0);
  lVar5 = *param_2;
  uVar6 = *(undefined8 *)(lVar5 + (longlong)*(int *)(lVar11 + 0x80) * 0x20);
  uVar7 = *(undefined8 *)(lVar5 + (longlong)*(int *)(lVar11 + 0x84) * 0x20);
  uVar2 = **(undefined1 **)(lVar5 + (longlong)*(int *)(lVar11 + 0x88) * 0x20);
  lVar12 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar13 = 0;
  uVar10 = FUN_144828ac0((longlong)*(int *)(lVar11 + 0x8c) * 0x20 + lVar5,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar12 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar12 * 0x14));
  plVar8 = *(longlong **)(*param_2 + (longlong)*(int *)(lVar11 + 0x94) * 0x20);
  puVar9 = *(undefined1 **)(*param_2 + (longlong)*(int *)(lVar11 + 0x9c) * 0x20);
  lVar11 = FUN_14924ed38(lVar4,uVar6,uVar7,5,uVar2,uVar10);
  if (lVar11 != 0) {
    if (*(char *)(lVar11 + 0x10) == '\x05') {
      uVar3 = *(uint *)(lVar11 + 0x28);
      if (uVar3 == *(uint *)(plVar8 + 1)) {
        uVar13 = 1;
        if (0 < (int)uVar3) {
          uVar14 = 0;
          do {
            if (*(int *)(*(longlong *)(lVar11 + 0x20) + uVar14 * 4) !=
                *(int *)(*plVar8 + uVar14 * 4)) goto LAB_14924fe96;
            uVar14 = uVar14 + 1;
          } while (uVar3 != uVar14);
        }
      }
      else {
LAB_14924fe96:
        FUN_14054c6c4((longlong *)(lVar11 + 0x20),plVar8);
        piVar1 = (int *)(*(longlong *)(lVar4 + 0x1b0) + 0xac);
        *piVar1 = *piVar1 + 1;
        uVar13 = 1;
      }
    }
    else {
      uVar13 = 0;
    }
  }
  *puVar9 = uVar13;
  return;
}



// FUNCTION 14924feb0 FUN_14924feb0 body=320 status=ok
// SIG undefined FUN_14924feb0(void)

void FUN_14924feb0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 uVar13;
  ulonglong uVar14;
  
  lVar11 = *(longlong *)(param_1 + 0x100);
  lVar4 = *(longlong *)(param_1 + 0xc0);
  lVar5 = *param_2;
  uVar6 = *(undefined8 *)(lVar5 + (longlong)*(int *)(lVar11 + 0x80) * 0x20);
  uVar7 = *(undefined8 *)(lVar5 + (longlong)*(int *)(lVar11 + 0x84) * 0x20);
  uVar2 = **(undefined1 **)(lVar5 + (longlong)*(int *)(lVar11 + 0x88) * 0x20);
  lVar12 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar13 = 0;
  uVar10 = FUN_144828ac0((longlong)*(int *)(lVar11 + 0x8c) * 0x20 + lVar5,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar12 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar12 * 0x14));
  plVar8 = *(longlong **)(*param_2 + (longlong)*(int *)(lVar11 + 0x94) * 0x20);
  puVar9 = *(undefined1 **)(*param_2 + (longlong)*(int *)(lVar11 + 0x9c) * 0x20);
  lVar11 = FUN_14924ed38(lVar4,uVar6,uVar7,7,uVar2,uVar10);
  if (lVar11 != 0) {
    if (*(char *)(lVar11 + 0x10) == '\a') {
      uVar3 = *(uint *)(lVar11 + 0x28);
      if (uVar3 == *(uint *)(plVar8 + 1)) {
        uVar13 = 1;
        if (0 < (int)uVar3) {
          lVar5 = *(longlong *)(lVar11 + 0x20);
          uVar14 = 0;
          do {
            if ((*(int *)(lVar5 + uVar14 * 8) != *(int *)(*plVar8 + uVar14 * 8)) ||
               (*(int *)(lVar5 + 4 + uVar14 * 8) != *(int *)(*plVar8 + 4 + uVar14 * 8)))
            goto LAB_14924ffd6;
            uVar14 = uVar14 + 1;
          } while (uVar3 != uVar14);
        }
      }
      else {
LAB_14924ffd6:
        FUN_1406fa324((longlong *)(lVar11 + 0x20),plVar8);
        piVar1 = (int *)(*(longlong *)(lVar4 + 0x1b0) + 0xac);
        *piVar1 = *piVar1 + 1;
        uVar13 = 1;
      }
    }
    else {
      uVar13 = 0;
    }
  }
  *puVar9 = uVar13;
  return;
}



// FUNCTION 14924fff0 FUN_14924fff0 body=282 status=ok
// SIG undefined FUN_14924fff0(void)

void FUN_14924fff0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  char cVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 uVar13;
  
  lVar11 = *(longlong *)(param_1 + 0x100);
  lVar3 = *(longlong *)(param_1 + 0xc0);
  lVar4 = *param_2;
  uVar5 = *(undefined8 *)(lVar4 + (longlong)*(int *)(lVar11 + 0x80) * 0x20);
  uVar6 = *(undefined8 *)(lVar4 + (longlong)*(int *)(lVar11 + 0x84) * 0x20);
  uVar2 = **(undefined1 **)(lVar4 + (longlong)*(int *)(lVar11 + 0x88) * 0x20);
  lVar12 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar13 = 0;
  uVar10 = FUN_144828ac0((longlong)*(int *)(lVar11 + 0x8c) * 0x20 + lVar4,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar12 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar12 * 0x14));
  uVar7 = *(undefined8 *)(*param_2 + (longlong)*(int *)(lVar11 + 0x94) * 0x20);
  puVar8 = *(undefined1 **)(*param_2 + (longlong)*(int *)(lVar11 + 0x9c) * 0x20);
  lVar11 = FUN_14924ed38(lVar3,uVar5,uVar6,9,uVar2,uVar10);
  if (lVar11 != 0) {
    if (*(char *)(lVar11 + 0x10) == '\t') {
      cVar9 = FUN_1492d0a9a(lVar11 + 0x20,uVar7);
      uVar13 = 1;
      if (cVar9 == '\0') {
        FUN_1405b70a4(lVar11 + 0x20,uVar7);
        piVar1 = (int *)(*(longlong *)(lVar3 + 0x1b0) + 0xac);
        *piVar1 = *piVar1 + 1;
      }
    }
    else {
      uVar13 = 0;
    }
  }
  *puVar8 = uVar13;
  return;
}



// FUNCTION 14925010a FUN_14925010a body=282 status=ok
// SIG undefined FUN_14925010a(void)

void FUN_14925010a(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  char cVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 uVar13;
  
  lVar11 = *(longlong *)(param_1 + 0x100);
  lVar3 = *(longlong *)(param_1 + 0xc0);
  lVar4 = *param_2;
  uVar5 = *(undefined8 *)(lVar4 + (longlong)*(int *)(lVar11 + 0x80) * 0x20);
  uVar6 = *(undefined8 *)(lVar4 + (longlong)*(int *)(lVar11 + 0x84) * 0x20);
  uVar2 = **(undefined1 **)(lVar4 + (longlong)*(int *)(lVar11 + 0x88) * 0x20);
  lVar12 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar13 = 0;
  uVar10 = FUN_144828ac0((longlong)*(int *)(lVar11 + 0x8c) * 0x20 + lVar4,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar12 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar12 * 0x14));
  uVar7 = *(undefined8 *)(*param_2 + (longlong)*(int *)(lVar11 + 0x94) * 0x20);
  puVar8 = *(undefined1 **)(*param_2 + (longlong)*(int *)(lVar11 + 0x9c) * 0x20);
  lVar11 = FUN_14924ed38(lVar3,uVar5,uVar6,0xb,uVar2,uVar10);
  if (lVar11 != 0) {
    if (*(char *)(lVar11 + 0x10) == '\v') {
      cVar9 = FUN_1492d0b20(lVar11 + 0x20,uVar7);
      uVar13 = 1;
      if (cVar9 == '\0') {
        FUN_1492067de(lVar11 + 0x20,uVar7);
        piVar1 = (int *)(*(longlong *)(lVar3 + 0x1b0) + 0xac);
        *piVar1 = *piVar1 + 1;
      }
    }
    else {
      uVar13 = 0;
    }
  }
  *puVar8 = uVar13;
  return;
}



// FUNCTION 149250224 FUN_149250224 body=282 status=ok
// SIG undefined FUN_149250224(void)

void FUN_149250224(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  char cVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 uVar13;
  
  lVar11 = *(longlong *)(param_1 + 0x100);
  lVar3 = *(longlong *)(param_1 + 0xc0);
  lVar4 = *param_2;
  uVar5 = *(undefined8 *)(lVar4 + (longlong)*(int *)(lVar11 + 0x80) * 0x20);
  uVar6 = *(undefined8 *)(lVar4 + (longlong)*(int *)(lVar11 + 0x84) * 0x20);
  uVar2 = **(undefined1 **)(lVar4 + (longlong)*(int *)(lVar11 + 0x88) * 0x20);
  lVar12 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar13 = 0;
  uVar10 = FUN_144828ac0((longlong)*(int *)(lVar11 + 0x8c) * 0x20 + lVar4,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar12 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar12 * 0x14));
  uVar7 = *(undefined8 *)(*param_2 + (longlong)*(int *)(lVar11 + 0x94) * 0x20);
  puVar8 = *(undefined1 **)(*param_2 + (longlong)*(int *)(lVar11 + 0x9c) * 0x20);
  lVar11 = FUN_14924ed38(lVar3,uVar5,uVar6,0xd,uVar2,uVar10);
  if (lVar11 != 0) {
    if (*(char *)(lVar11 + 0x10) == '\r') {
      cVar9 = FUN_1492d0cd8(lVar11 + 0x20,uVar7);
      uVar13 = 1;
      if (cVar9 == '\0') {
        FUN_140472d9a(lVar11 + 0x20,uVar7);
        piVar1 = (int *)(*(longlong *)(lVar3 + 0x1b0) + 0xac);
        *piVar1 = *piVar1 + 1;
      }
    }
    else {
      uVar13 = 0;
    }
  }
  *puVar8 = uVar13;
  return;
}



// FUNCTION 14925033e FUN_14925033e body=326 status=ok
// SIG undefined FUN_14925033e(void)

void FUN_14925033e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  char cVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  
  lVar11 = *(longlong *)(param_1 + 0x100);
  lVar4 = *(longlong *)(param_1 + 0xc0);
  lVar15 = *param_2;
  uVar5 = *(undefined8 *)(lVar15 + (longlong)*(int *)(lVar11 + 0x80) * 0x20);
  uVar6 = *(undefined8 *)(lVar15 + (longlong)*(int *)(lVar11 + 0x84) * 0x20);
  uVar2 = **(undefined1 **)(lVar15 + (longlong)*(int *)(lVar11 + 0x88) * 0x20);
  lVar12 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar13 = 0;
  uVar10 = FUN_144828ac0((longlong)*(int *)(lVar11 + 0x8c) * 0x20 + lVar15,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar12 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar12 * 0x14));
  plVar7 = *(longlong **)(*param_2 + (longlong)*(int *)(lVar11 + 0x94) * 0x20);
  puVar8 = *(undefined1 **)(*param_2 + (longlong)*(int *)(lVar11 + 0x9c) * 0x20);
  lVar11 = FUN_14924ed38(lVar4,uVar5,uVar6,0xf,uVar2,uVar10);
  if (lVar11 != 0) {
    if (*(char *)(lVar11 + 0x10) == '\x0f') {
      uVar3 = *(uint *)(lVar11 + 0x28);
      uVar14 = (ulonglong)uVar3;
      if (uVar3 == *(uint *)(plVar7 + 1)) {
        uVar13 = 1;
        if (0 < (int)uVar3) {
          lVar15 = *plVar7;
          lVar12 = *(longlong *)(lVar11 + 0x20);
          do {
            cVar9 = FUN_1492d08f2(lVar12,lVar15);
            if (cVar9 == '\0') goto LAB_149250467;
            lVar12 = lVar12 + 0x60;
            lVar15 = lVar15 + 0x60;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
      }
      else {
LAB_149250467:
        FUN_144756208((longlong *)(lVar11 + 0x20),plVar7);
        piVar1 = (int *)(*(longlong *)(lVar4 + 0x1b0) + 0xac);
        *piVar1 = *piVar1 + 1;
        uVar13 = 1;
      }
    }
    else {
      uVar13 = 0;
    }
  }
  *puVar8 = uVar13;
  return;
}



// FUNCTION 149250484 FUN_149250484 body=326 status=ok
// SIG undefined FUN_149250484(void)

void FUN_149250484(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  char cVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  
  lVar11 = *(longlong *)(param_1 + 0x100);
  lVar4 = *(longlong *)(param_1 + 0xc0);
  lVar15 = *param_2;
  uVar5 = *(undefined8 *)(lVar15 + (longlong)*(int *)(lVar11 + 0x80) * 0x20);
  uVar6 = *(undefined8 *)(lVar15 + (longlong)*(int *)(lVar11 + 0x84) * 0x20);
  uVar2 = **(undefined1 **)(lVar15 + (longlong)*(int *)(lVar11 + 0x88) * 0x20);
  lVar12 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar13 = 0;
  uVar10 = FUN_144828ac0((longlong)*(int *)(lVar11 + 0x8c) * 0x20 + lVar15,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar12 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar12 * 0x14));
  plVar7 = *(longlong **)(*param_2 + (longlong)*(int *)(lVar11 + 0x94) * 0x20);
  puVar8 = *(undefined1 **)(*param_2 + (longlong)*(int *)(lVar11 + 0x9c) * 0x20);
  lVar11 = FUN_14924ed38(lVar4,uVar5,uVar6,0x11,uVar2,uVar10);
  if (lVar11 != 0) {
    if (*(char *)(lVar11 + 0x10) == '\x11') {
      uVar3 = *(uint *)(lVar11 + 0x28);
      uVar14 = (ulonglong)uVar3;
      if (uVar3 == *(uint *)(plVar7 + 1)) {
        uVar13 = 1;
        if (0 < (int)uVar3) {
          lVar15 = *plVar7;
          lVar12 = *(longlong *)(lVar11 + 0x20);
          do {
            cVar9 = FUN_1492d0a36(lVar12,lVar15);
            if (cVar9 == '\0') goto LAB_1492505ad;
            lVar12 = lVar12 + 0x10;
            lVar15 = lVar15 + 0x10;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
      }
      else {
LAB_1492505ad:
        FUN_14479f9aa((longlong *)(lVar11 + 0x20),plVar7);
        piVar1 = (int *)(*(longlong *)(lVar4 + 0x1b0) + 0xac);
        *piVar1 = *piVar1 + 1;
        uVar13 = 1;
      }
    }
    else {
      uVar13 = 0;
    }
  }
  *puVar8 = uVar13;
  return;
}



// FUNCTION 1492505ca FUN_1492505ca body=332 status=ok
// SIG undefined FUN_1492505ca(void)

void FUN_1492505ca(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 uVar13;
  
  lVar11 = *(longlong *)(param_1 + 0x100);
  lVar4 = *(longlong *)(param_1 + 0xc0);
  lVar5 = *param_2;
  uVar6 = *(undefined8 *)(lVar5 + (longlong)*(int *)(lVar11 + 0x80) * 0x20);
  uVar7 = *(undefined8 *)(lVar5 + (longlong)*(int *)(lVar11 + 0x84) * 0x20);
  uVar2 = **(undefined1 **)(lVar5 + (longlong)*(int *)(lVar11 + 0x88) * 0x20);
  lVar12 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar13 = 0;
  uVar10 = FUN_144828ac0((longlong)*(int *)(lVar11 + 0x8c) * 0x20 + lVar5,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar12 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar12 * 0x14));
  plVar8 = *(longlong **)(*param_2 + (longlong)*(int *)(lVar11 + 0x94) * 0x20);
  puVar9 = *(undefined1 **)(*param_2 + (longlong)*(int *)(lVar11 + 0x9c) * 0x20);
  lVar11 = FUN_14924ed38(lVar4,uVar6,uVar7,0x13,uVar2,uVar10);
  if (lVar11 != 0) {
    if (*(char *)(lVar11 + 0x10) == '\x13') {
      uVar3 = *(uint *)(lVar11 + 0x28);
      if (uVar3 == *(uint *)(plVar8 + 1)) {
        uVar13 = 1;
        if (0 < (int)uVar3) {
          lVar5 = *(longlong *)(lVar11 + 0x20);
          lVar12 = 0;
          do {
            if ((*(longlong *)(lVar5 + 4 + lVar12) != *(longlong *)(*plVar8 + 4 + lVar12)) ||
               (*(char *)(lVar5 + lVar12) != *(char *)(*plVar8 + lVar12))) goto LAB_1492506fc;
            lVar12 = lVar12 + 0xc;
          } while ((ulonglong)uVar3 * 0xc != lVar12);
        }
      }
      else {
LAB_1492506fc:
        FUN_1444888de((longlong *)(lVar11 + 0x20),plVar8);
        piVar1 = (int *)(*(longlong *)(lVar4 + 0x1b0) + 0xac);
        *piVar1 = *piVar1 + 1;
        uVar13 = 1;
      }
    }
    else {
      uVar13 = 0;
    }
  }
  *puVar9 = uVar13;
  return;
}



// FUNCTION 149250716 FUN_149250716 body=118 status=ok
// SIG undefined FUN_149250716(void)

void FUN_149250716(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1492d0738(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x20 + *param_1),0,(longlong)(param_2 - iVar1) << 5);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1492d07be(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14925078e FUN_14925078e body=615 status=ok
// SIG undefined FUN_14925078e(void)

longlong FUN_14925078e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x94) == -1) {
    lVar1 = param_1 + 0x70;
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1490f2336(lVar1,iVar2);
    }
    uVar4 = DAT_14c764f18;
    lVar3 = *(longlong *)(param_1 + 0x70);
    FUN_1446f57c6(&DAT_14cc09f10,local_48);
    FUN_144478fc0((longlong)iVar2 * 0x50 + lVar3,local_48[0],0,uVar4);
    *(int *)(param_1 + 0x84) = iVar2;
    FUN_14001a7b2();
    uVar5 = FUN_1492d52be();
    FUN_1492d085a(local_48,uVar5);
    uVar4 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_48);
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1490f2336(lVar1,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x70);
    FUN_1446f57c6(&DAT_14cc09f20,local_48);
    FUN_144478fc0((longlong)iVar2 * 0x50 + lVar3,local_48[0],0,uVar4);
    *(int *)(param_1 + 0x88) = iVar2;
    FUN_1444b0264();
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1490f2336(lVar1,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x70);
    FUN_1446f57c6(&DAT_14cc09f40,local_48);
    FUN_144478eaa((longlong)iVar2 * 0x50 + lVar3,local_48[0],0,&DAT_14cc0a130);
    *(int *)(param_1 + 0x90) = iVar2;
    FUN_1444b0264();
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1490f2336(lVar1,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x70);
    FUN_1446f57c6(&DAT_14cc09f50,local_48);
    FUN_144478eaa((longlong)iVar2 * 0x50 + lVar3,local_48[0],1,&DAT_14cc0a130);
    *(int *)(param_1 + 0x94) = iVar2;
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1490f2336(lVar1,iVar2);
    }
    uVar4 = DAT_14c764f08;
    lVar1 = *(longlong *)(param_1 + 0x70);
    FUN_1446f57c6(&DAT_14cc09f60,local_48);
    FUN_144478fc0((longlong)iVar2 * 0x50 + lVar1,local_48[0],1,uVar4);
    *(int *)(param_1 + 0x98) = iVar2;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1 + 0x70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492509f6 FUN_1492509f6 body=284 status=ok
// SIG undefined FUN_1492509f6(void)

undefined8 FUN_1492509f6(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = *(longlong *)(param_1 + 0xc0);
  lVar4 = FUN_1492d5734(lVar5,param_4);
  if (lVar4 == 0) {
    cVar3 = FUN_1491dab48(lVar5);
    if (cVar3 != '\0') {
      FUN_149192bd8(*(undefined8 *)(lVar5 + 0x1b0),&local_48,0);
      bVar2 = true;
      if ((longlong)local_40 != 0) {
        lVar4 = 0;
        do {
          lVar1 = *(longlong *)(local_48 + lVar4);
          if (*(char *)(lVar1 + 0x58) == '\0') {
            FUN_1492d5766(lVar5,local_50,param_4,param_2);
            param_2 = FUN_1491e0c5e(*(undefined8 *)(lVar5 + 0x1b0),lVar1,local_50,param_3);
            bVar2 = false;
            break;
          }
          lVar4 = lVar4 + 8;
        } while ((longlong)local_40 * 8 != lVar4);
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      if (!bVar2) goto LAB_149250a80;
    }
  }
  else {
    lVar5 = FUN_1491b2f24(lVar4);
    if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
    }
  }
  param_2 = 0;
LAB_149250a80:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149250b30 FUN_149250b30 body=142 status=ok
// SIG undefined FUN_149250b30(void)

void FUN_149250b30(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x100);
  lVar1 = *param_2;
  puVar5 = *(undefined1 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x90) * 0x20);
  puVar2 = *(undefined1 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x94) * 0x20);
  uVar3 = *(undefined8 *)(lVar1 + (longlong)*(int *)(lVar4 + 0x98) * 0x20);
  lVar4 = FUN_1492509f6(param_1,*(undefined8 *)(lVar1 + (longlong)*(int *)(lVar4 + 0x84) * 0x20),0,
                        **(undefined1 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x88) * 0x20));
  if ((lVar4 == 0) || (*(char *)(lVar4 + 0x10) != '\0')) {
    lVar4 = 0;
  }
  if (lVar4 != 0) {
    puVar5 = (undefined1 *)(lVar4 + 0x20);
  }
  *puVar2 = *puVar5;
  *(bool *)uVar3 = lVar4 != 0;
  return;
}



// FUNCTION 149250bbe FUN_149250bbe body=146 status=ok
// SIG undefined FUN_149250bbe(void)

void FUN_149250bbe(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x100);
  lVar1 = *param_2;
  puVar5 = *(undefined4 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x90) * 0x20);
  lVar6 = (longlong)*(int *)(lVar4 + 0x94) * 0x20;
  puVar2 = *(undefined4 **)(lVar1 + lVar6);
  uVar3 = *(undefined8 *)(lVar1 + (longlong)*(int *)(lVar4 + 0x98) * 0x20);
  lVar4 = FUN_1492509f6(param_1,*(undefined8 *)(lVar1 + (longlong)*(int *)(lVar4 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar6 >> 8),2),
                        **(undefined1 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x88) * 0x20));
  if ((lVar4 == 0) || (*(char *)(lVar4 + 0x10) != '\x02')) {
    lVar4 = 0;
  }
  if (lVar4 != 0) {
    puVar5 = (undefined4 *)(lVar4 + 0x20);
  }
  *puVar2 = *puVar5;
  *(bool *)uVar3 = lVar4 != 0;
  return;
}



// FUNCTION 149250c50 FUN_149250c50 body=142 status=ok
// SIG undefined FUN_149250c50(void)

void FUN_149250c50(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x100);
  lVar1 = *param_2;
  puVar5 = *(undefined4 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x90) * 0x20);
  lVar6 = (longlong)*(int *)(lVar4 + 0x94) * 0x20;
  puVar2 = *(undefined4 **)(lVar1 + lVar6);
  uVar3 = *(undefined8 *)(lVar1 + (longlong)*(int *)(lVar4 + 0x98) * 0x20);
  lVar4 = FUN_1492509f6(param_1,*(undefined8 *)(lVar1 + (longlong)*(int *)(lVar4 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar6 >> 8),4),
                        **(undefined1 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x88) * 0x20));
  if ((lVar4 == 0) || (*(char *)(lVar4 + 0x10) != '\x04')) {
    lVar4 = 0;
  }
  if (lVar4 != 0) {
    puVar5 = (undefined4 *)(lVar4 + 0x20);
  }
  *puVar2 = *puVar5;
  *(bool *)uVar3 = lVar4 != 0;
  return;
}



// FUNCTION 149250cde FUN_149250cde body=144 status=ok
// SIG undefined FUN_149250cde(void)

void FUN_149250cde(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x100);
  lVar1 = *param_2;
  puVar5 = *(undefined8 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x90) * 0x20);
  lVar6 = (longlong)*(int *)(lVar4 + 0x94) * 0x20;
  puVar2 = *(undefined8 **)(lVar1 + lVar6);
  uVar3 = *(undefined8 *)(lVar1 + (longlong)*(int *)(lVar4 + 0x98) * 0x20);
  lVar4 = FUN_1492509f6(param_1,*(undefined8 *)(lVar1 + (longlong)*(int *)(lVar4 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar6 >> 8),6),
                        **(undefined1 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x88) * 0x20));
  if ((lVar4 == 0) || (*(char *)(lVar4 + 0x10) != '\x06')) {
    lVar4 = 0;
  }
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(lVar4 + 0x20);
  }
  *puVar2 = *puVar5;
  *(bool *)uVar3 = lVar4 != 0;
  return;
}



// FUNCTION 149250d6e FUN_149250d6e body=154 status=ok
// SIG undefined FUN_149250d6e(void)

void FUN_149250d6e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x100);
  lVar1 = *param_2;
  puVar6 = *(undefined8 **)(lVar1 + (longlong)*(int *)(lVar5 + 0x90) * 0x20);
  lVar7 = (longlong)*(int *)(lVar5 + 0x94) * 0x20;
  puVar2 = *(undefined8 **)(lVar1 + lVar7);
  puVar3 = *(undefined1 **)(lVar1 + (longlong)*(int *)(lVar5 + 0x98) * 0x20);
  lVar5 = FUN_1492509f6(param_1,*(undefined8 *)(lVar1 + (longlong)*(int *)(lVar5 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar7 >> 8),8),
                        **(undefined1 **)(lVar1 + (longlong)*(int *)(lVar5 + 0x88) * 0x20));
  if (lVar5 == 0) {
    bVar8 = false;
  }
  else {
    bVar8 = *(char *)(lVar5 + 0x10) == '\b';
    if (bVar8) {
      puVar6 = (undefined8 *)(lVar5 + 0x20);
    }
  }
  puVar2[2] = puVar6[2];
  uVar4 = puVar6[1];
  *puVar2 = *puVar6;
  puVar2[1] = uVar4;
  *puVar3 = bVar8;
  return;
}



// FUNCTION 149250e08 FUN_149250e08 body=154 status=ok
// SIG undefined FUN_149250e08(void)

void FUN_149250e08(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x100);
  lVar1 = *param_2;
  puVar6 = *(undefined8 **)(lVar1 + (longlong)*(int *)(lVar5 + 0x90) * 0x20);
  lVar7 = (longlong)*(int *)(lVar5 + 0x94) * 0x20;
  puVar2 = *(undefined8 **)(lVar1 + lVar7);
  puVar3 = *(undefined1 **)(lVar1 + (longlong)*(int *)(lVar5 + 0x98) * 0x20);
  lVar5 = FUN_1492509f6(param_1,*(undefined8 *)(lVar1 + (longlong)*(int *)(lVar5 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar7 >> 8),10),
                        **(undefined1 **)(lVar1 + (longlong)*(int *)(lVar5 + 0x88) * 0x20));
  if (lVar5 == 0) {
    bVar8 = false;
  }
  else {
    bVar8 = *(char *)(lVar5 + 0x10) == '\n';
    if (bVar8) {
      puVar6 = (undefined8 *)(lVar5 + 0x20);
    }
  }
  puVar2[2] = puVar6[2];
  uVar4 = puVar6[1];
  *puVar2 = *puVar6;
  puVar2[1] = uVar4;
  *puVar3 = bVar8;
  return;
}



// FUNCTION 149250ea2 FUN_149250ea2 body=154 status=ok
// SIG undefined FUN_149250ea2(void)

void FUN_149250ea2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar7 = *(longlong *)(param_1 + 0x100);
  lVar1 = *param_2;
  puVar8 = *(undefined8 **)(lVar1 + (longlong)*(int *)(lVar7 + 0x90) * 0x20);
  lVar9 = (longlong)*(int *)(lVar7 + 0x94) * 0x20;
  puVar2 = *(undefined8 **)(lVar1 + lVar9);
  puVar3 = *(undefined1 **)(lVar1 + (longlong)*(int *)(lVar7 + 0x98) * 0x20);
  lVar7 = FUN_1492509f6(param_1,*(undefined8 *)(lVar1 + (longlong)*(int *)(lVar7 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar9 >> 8),0xc),
                        **(undefined1 **)(lVar1 + (longlong)*(int *)(lVar7 + 0x88) * 0x20));
  if (lVar7 == 0) {
    bVar10 = false;
  }
  else {
    bVar10 = *(char *)(lVar7 + 0x10) == '\f';
    if (bVar10) {
      puVar8 = (undefined8 *)(lVar7 + 0x20);
    }
  }
  uVar4 = *puVar8;
  uVar5 = puVar8[1];
  uVar6 = puVar8[3];
  puVar2[2] = puVar8[2];
  puVar2[3] = uVar6;
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  *puVar3 = bVar10;
  return;
}



// FUNCTION 149250f3c FUN_149250f3c body=148 status=ok
// SIG undefined FUN_149250f3c(void)

void FUN_149250f3c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar3 = *(longlong *)(param_1 + 0x100);
  lVar1 = *param_2;
  puVar4 = *(undefined8 **)(lVar1 + (longlong)*(int *)(lVar3 + 0x90) * 0x20);
  lVar6 = (longlong)*(int *)(lVar3 + 0x94) * 0x20;
  puVar5 = *(undefined8 **)(lVar1 + lVar6);
  puVar2 = *(undefined1 **)(lVar1 + (longlong)*(int *)(lVar3 + 0x98) * 0x20);
  lVar3 = FUN_1492509f6(param_1,*(undefined8 *)(lVar1 + (longlong)*(int *)(lVar3 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar6 >> 8),0xe),
                        **(undefined1 **)(lVar1 + (longlong)*(int *)(lVar3 + 0x88) * 0x20));
  if (lVar3 == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = *(char *)(lVar3 + 0x10) == '\x0e';
    if (bVar7) {
      puVar4 = (undefined8 *)(lVar3 + 0x20);
    }
  }
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *puVar2 = bVar7;
  return;
}



// FUNCTION 149250fd0 FUN_149250fd0 body=146 status=ok
// SIG undefined FUN_149250fd0(void)

void FUN_149250fd0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x100);
  lVar1 = *param_2;
  puVar6 = *(undefined8 **)(lVar1 + (longlong)*(int *)(lVar5 + 0x90) * 0x20);
  lVar7 = (longlong)*(int *)(lVar5 + 0x94) * 0x20;
  puVar2 = *(undefined8 **)(lVar1 + lVar7);
  puVar3 = *(undefined1 **)(lVar1 + (longlong)*(int *)(lVar5 + 0x98) * 0x20);
  lVar5 = FUN_1492509f6(param_1,*(undefined8 *)(lVar1 + (longlong)*(int *)(lVar5 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar7 >> 8),0x10),
                        **(undefined1 **)(lVar1 + (longlong)*(int *)(lVar5 + 0x88) * 0x20));
  if (lVar5 == 0) {
    bVar8 = false;
  }
  else {
    bVar8 = *(char *)(lVar5 + 0x10) == '\x10';
    if (bVar8) {
      puVar6 = (undefined8 *)(lVar5 + 0x20);
    }
  }
  uVar4 = puVar6[1];
  *puVar2 = *puVar6;
  puVar2[1] = uVar4;
  *puVar3 = bVar8;
  return;
}



// FUNCTION 149251062 FUN_149251062 body=152 status=ok
// SIG undefined FUN_149251062(void)

void FUN_149251062(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x100);
  lVar1 = *param_2;
  puVar5 = *(undefined8 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x90) * 0x20);
  lVar6 = (longlong)*(int *)(lVar4 + 0x94) * 0x20;
  puVar2 = *(undefined8 **)(lVar1 + lVar6);
  puVar3 = *(undefined1 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x98) * 0x20);
  lVar4 = FUN_1492509f6(param_1,*(undefined8 *)(lVar1 + (longlong)*(int *)(lVar4 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar6 >> 8),0x12),
                        **(undefined1 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x88) * 0x20));
  if (lVar4 == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = *(char *)(lVar4 + 0x10) == '\x12';
    if (bVar7) {
      puVar5 = (undefined8 *)(lVar4 + 0x20);
    }
  }
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
  *puVar2 = *puVar5;
  *puVar3 = bVar7;
  return;
}



// FUNCTION 1492510fa FUN_1492510fa body=155 status=ok
// SIG undefined FUN_1492510fa(void)

void FUN_1492510fa(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x100);
  lVar1 = *param_2;
  lVar5 = *(longlong *)(lVar1 + (longlong)*(int *)(lVar4 + 0x90) * 0x20);
  lVar6 = (longlong)*(int *)(lVar4 + 0x94) * 0x20;
  uVar2 = *(undefined8 *)(lVar1 + lVar6);
  puVar3 = *(undefined1 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x98) * 0x20);
  lVar4 = FUN_1492509f6(param_1,*(undefined8 *)(lVar1 + (longlong)*(int *)(lVar4 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar6 >> 8),1),
                        **(undefined1 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x88) * 0x20));
  if (lVar4 == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = *(char *)(lVar4 + 0x10) == '\x01';
    if (bVar7) {
      lVar5 = lVar4 + 0x20;
    }
  }
  FUN_1447cd5a6(uVar2,lVar5);
  *puVar3 = bVar7;
  return;
}



// FUNCTION 149251196 FUN_149251196 body=155 status=ok
// SIG undefined FUN_149251196(void)

void FUN_149251196(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x100);
  lVar1 = *param_2;
  lVar5 = *(longlong *)(lVar1 + (longlong)*(int *)(lVar4 + 0x90) * 0x20);
  lVar6 = (longlong)*(int *)(lVar4 + 0x94) * 0x20;
  uVar2 = *(undefined8 *)(lVar1 + lVar6);
  puVar3 = *(undefined1 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x98) * 0x20);
  lVar4 = FUN_1492509f6(param_1,*(undefined8 *)(lVar1 + (longlong)*(int *)(lVar4 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar6 >> 8),3),
                        **(undefined1 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x88) * 0x20));
  if (lVar4 == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = *(char *)(lVar4 + 0x10) == '\x03';
    if (bVar7) {
      lVar5 = lVar4 + 0x20;
    }
  }
  FUN_144a67f5c(uVar2,lVar5);
  *puVar3 = bVar7;
  return;
}



// FUNCTION 149251232 FUN_149251232 body=155 status=ok
// SIG undefined FUN_149251232(void)

void FUN_149251232(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x100);
  lVar1 = *param_2;
  lVar5 = *(longlong *)(lVar1 + (longlong)*(int *)(lVar4 + 0x90) * 0x20);
  lVar6 = (longlong)*(int *)(lVar4 + 0x94) * 0x20;
  uVar2 = *(undefined8 *)(lVar1 + lVar6);
  puVar3 = *(undefined1 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x98) * 0x20);
  lVar4 = FUN_1492509f6(param_1,*(undefined8 *)(lVar1 + (longlong)*(int *)(lVar4 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar6 >> 8),5),
                        **(undefined1 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x88) * 0x20));
  if (lVar4 == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = *(char *)(lVar4 + 0x10) == '\x05';
    if (bVar7) {
      lVar5 = lVar4 + 0x20;
    }
  }
  FUN_14054c6c4(uVar2,lVar5);
  *puVar3 = bVar7;
  return;
}



// FUNCTION 1492512ce FUN_1492512ce body=155 status=ok
// SIG undefined FUN_1492512ce(void)

void FUN_1492512ce(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x100);
  lVar1 = *param_2;
  lVar5 = *(longlong *)(lVar1 + (longlong)*(int *)(lVar4 + 0x90) * 0x20);
  lVar6 = (longlong)*(int *)(lVar4 + 0x94) * 0x20;
  uVar2 = *(undefined8 *)(lVar1 + lVar6);
  puVar3 = *(undefined1 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x98) * 0x20);
  lVar4 = FUN_1492509f6(param_1,*(undefined8 *)(lVar1 + (longlong)*(int *)(lVar4 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar6 >> 8),7),
                        **(undefined1 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x88) * 0x20));
  if (lVar4 == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = *(char *)(lVar4 + 0x10) == '\a';
    if (bVar7) {
      lVar5 = lVar4 + 0x20;
    }
  }
  FUN_1406fa324(uVar2,lVar5);
  *puVar3 = bVar7;
  return;
}



// FUNCTION 14925136a FUN_14925136a body=155 status=ok
// SIG undefined FUN_14925136a(void)

void FUN_14925136a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x100);
  lVar1 = *param_2;
  lVar5 = *(longlong *)(lVar1 + (longlong)*(int *)(lVar4 + 0x90) * 0x20);
  lVar6 = (longlong)*(int *)(lVar4 + 0x94) * 0x20;
  uVar2 = *(undefined8 *)(lVar1 + lVar6);
  puVar3 = *(undefined1 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x98) * 0x20);
  lVar4 = FUN_1492509f6(param_1,*(undefined8 *)(lVar1 + (longlong)*(int *)(lVar4 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar6 >> 8),9),
                        **(undefined1 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x88) * 0x20));
  if (lVar4 == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = *(char *)(lVar4 + 0x10) == '\t';
    if (bVar7) {
      lVar5 = lVar4 + 0x20;
    }
  }
  FUN_1405b70a4(uVar2,lVar5);
  *puVar3 = bVar7;
  return;
}



// FUNCTION 149251406 FUN_149251406 body=155 status=ok
// SIG undefined FUN_149251406(void)

void FUN_149251406(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x100);
  lVar1 = *param_2;
  lVar5 = *(longlong *)(lVar1 + (longlong)*(int *)(lVar4 + 0x90) * 0x20);
  lVar6 = (longlong)*(int *)(lVar4 + 0x94) * 0x20;
  uVar2 = *(undefined8 *)(lVar1 + lVar6);
  puVar3 = *(undefined1 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x98) * 0x20);
  lVar4 = FUN_1492509f6(param_1,*(undefined8 *)(lVar1 + (longlong)*(int *)(lVar4 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar6 >> 8),0xb),
                        **(undefined1 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x88) * 0x20));
  if (lVar4 == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = *(char *)(lVar4 + 0x10) == '\v';
    if (bVar7) {
      lVar5 = lVar4 + 0x20;
    }
  }
  FUN_1492067de(uVar2,lVar5);
  *puVar3 = bVar7;
  return;
}



// FUNCTION 1492514a2 FUN_1492514a2 body=155 status=ok
// SIG undefined FUN_1492514a2(void)

void FUN_1492514a2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x100);
  lVar1 = *param_2;
  lVar5 = *(longlong *)(lVar1 + (longlong)*(int *)(lVar4 + 0x90) * 0x20);
  lVar6 = (longlong)*(int *)(lVar4 + 0x94) * 0x20;
  uVar2 = *(undefined8 *)(lVar1 + lVar6);
  puVar3 = *(undefined1 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x98) * 0x20);
  lVar4 = FUN_1492509f6(param_1,*(undefined8 *)(lVar1 + (longlong)*(int *)(lVar4 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar6 >> 8),0xd),
                        **(undefined1 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x88) * 0x20));
  if (lVar4 == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = *(char *)(lVar4 + 0x10) == '\r';
    if (bVar7) {
      lVar5 = lVar4 + 0x20;
    }
  }
  FUN_140472d9a(uVar2,lVar5);
  *puVar3 = bVar7;
  return;
}



// FUNCTION 14925153e FUN_14925153e body=155 status=ok
// SIG undefined FUN_14925153e(void)

void FUN_14925153e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x100);
  lVar1 = *param_2;
  lVar5 = *(longlong *)(lVar1 + (longlong)*(int *)(lVar4 + 0x90) * 0x20);
  lVar6 = (longlong)*(int *)(lVar4 + 0x94) * 0x20;
  uVar2 = *(undefined8 *)(lVar1 + lVar6);
  puVar3 = *(undefined1 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x98) * 0x20);
  lVar4 = FUN_1492509f6(param_1,*(undefined8 *)(lVar1 + (longlong)*(int *)(lVar4 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar6 >> 8),0xf),
                        **(undefined1 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x88) * 0x20));
  if (lVar4 == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = *(char *)(lVar4 + 0x10) == '\x0f';
    if (bVar7) {
      lVar5 = lVar4 + 0x20;
    }
  }
  FUN_144756208(uVar2,lVar5);
  *puVar3 = bVar7;
  return;
}



// FUNCTION 1492515da FUN_1492515da body=155 status=ok
// SIG undefined FUN_1492515da(void)

void FUN_1492515da(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x100);
  lVar1 = *param_2;
  lVar5 = *(longlong *)(lVar1 + (longlong)*(int *)(lVar4 + 0x90) * 0x20);
  lVar6 = (longlong)*(int *)(lVar4 + 0x94) * 0x20;
  uVar2 = *(undefined8 *)(lVar1 + lVar6);
  puVar3 = *(undefined1 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x98) * 0x20);
  lVar4 = FUN_1492509f6(param_1,*(undefined8 *)(lVar1 + (longlong)*(int *)(lVar4 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar6 >> 8),0x11),
                        **(undefined1 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x88) * 0x20));
  if (lVar4 == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = *(char *)(lVar4 + 0x10) == '\x11';
    if (bVar7) {
      lVar5 = lVar4 + 0x20;
    }
  }
  FUN_14479f9aa(uVar2,lVar5);
  *puVar3 = bVar7;
  return;
}



// FUNCTION 149251676 FUN_149251676 body=155 status=ok
// SIG undefined FUN_149251676(void)

void FUN_149251676(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x100);
  lVar1 = *param_2;
  lVar5 = *(longlong *)(lVar1 + (longlong)*(int *)(lVar4 + 0x90) * 0x20);
  lVar6 = (longlong)*(int *)(lVar4 + 0x94) * 0x20;
  uVar2 = *(undefined8 *)(lVar1 + lVar6);
  puVar3 = *(undefined1 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x98) * 0x20);
  lVar4 = FUN_1492509f6(param_1,*(undefined8 *)(lVar1 + (longlong)*(int *)(lVar4 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar6 >> 8),0x13),
                        **(undefined1 **)(lVar1 + (longlong)*(int *)(lVar4 + 0x88) * 0x20));
  if (lVar4 == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = *(char *)(lVar4 + 0x10) == '\x13';
    if (bVar7) {
      lVar5 = lVar4 + 0x20;
    }
  }
  FUN_1444888de(uVar2,lVar5);
  *puVar3 = bVar7;
  return;
}



// FUNCTION 149251712 FUN_149251712 body=514 status=ok
// SIG undefined FUN_149251712(void)

longlong FUN_149251712(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x94) == -1) {
    lVar1 = param_1 + 0x70;
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1490f2336(lVar1,iVar2);
    }
    uVar4 = DAT_14c764f18;
    lVar3 = *(longlong *)(param_1 + 0x70);
    FUN_1446f57c6(&DAT_14cc09f10,local_48);
    FUN_144478fc0((longlong)iVar2 * 0x50 + lVar3,local_48[0],0,uVar4);
    *(int *)(param_1 + 0x84) = iVar2;
    FUN_14001a7b2();
    uVar5 = FUN_1492d52be();
    FUN_1492d085a(local_48,uVar5);
    uVar4 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_48);
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1490f2336(lVar1,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x70);
    FUN_1446f57c6(&DAT_14cc09f20,local_48);
    FUN_144478fc0((longlong)iVar2 * 0x50 + lVar3,local_48[0],0,uVar4);
    *(int *)(param_1 + 0x88) = iVar2;
    FUN_1444b0264();
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1490f2336(lVar1,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x70);
    FUN_1446f57c6(&DAT_14cc09f50,local_48);
    FUN_144478eaa((longlong)iVar2 * 0x50 + lVar3,local_48[0],0,&DAT_14cc0a130);
    *(int *)(param_1 + 0x94) = iVar2;
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1490f2336(lVar1,iVar2);
    }
    uVar4 = DAT_14c764f08;
    lVar1 = *(longlong *)(param_1 + 0x70);
    FUN_1446f57c6(&DAT_14cc09f70,local_48);
    FUN_144478fc0((longlong)iVar2 * 0x50 + lVar1,local_48[0],1,uVar4);
    *(int *)(param_1 + 0x9c) = iVar2;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1 + 0x70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149251916 FUN_149251916 body=301 status=ok
// SIG undefined FUN_149251916(void)

undefined8 FUN_149251916(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50 [8];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = FUN_1492d5734(param_1,param_4);
  if (lVar4 == 0) {
    cVar3 = FUN_1491dab48(param_1);
    if (cVar3 != '\0') {
      FUN_149192bd8(*(undefined8 *)(param_1 + 0x1b0),&local_48,0);
      bVar2 = true;
      if ((longlong)local_40 != 0) {
        lVar4 = 0;
        do {
          lVar1 = *(longlong *)(local_48 + lVar4);
          if (*(char *)(lVar1 + 0x58) == '\0') {
            FUN_1492d5766(param_1,local_50,param_4,param_2);
            local_58 = 1;
            param_2 = FUN_1491e0882(*(undefined8 *)(param_1 + 0x1b0),lVar1,local_50,param_3);
            bVar2 = false;
            break;
          }
          lVar4 = lVar4 + 8;
        } while ((longlong)local_40 * 8 != lVar4);
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      if (!bVar2) goto LAB_14925199f;
    }
  }
  else {
    lVar4 = FUN_1491b2f24(lVar4);
    if (lVar4 != 0) {
      local_58 = 1;
      FUN_1491e0882(*(undefined8 *)(param_1 + 0x1b0),lVar4,param_2,param_3);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
    }
  }
  param_2 = 0;
LAB_14925199f:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149251a44 FUN_149251a44 body=155 status=ok
// SIG undefined FUN_149251a44(void)

void FUN_149251a44(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 uVar8;
  
  lVar3 = *(longlong *)(param_1 + 0xc0);
  lVar7 = *(longlong *)(param_1 + 0x100);
  lVar4 = *param_2;
  pcVar5 = *(char **)(lVar4 + (longlong)*(int *)(lVar7 + 0x94) * 0x20);
  puVar6 = *(undefined1 **)(lVar4 + (longlong)*(int *)(lVar7 + 0x9c) * 0x20);
  uVar8 = 0;
  lVar7 = FUN_149251916(lVar3,*(undefined8 *)(lVar4 + (longlong)*(int *)(lVar7 + 0x84) * 0x20),0,
                        **(undefined1 **)(lVar4 + (longlong)*(int *)(lVar7 + 0x88) * 0x20));
  if (lVar7 != 0) {
    if (*(char *)(lVar7 + 0x10) == '\0') {
      cVar2 = *pcVar5;
      uVar8 = 1;
      if (*(char *)(lVar7 + 0x20) != cVar2) {
        *(char *)(lVar7 + 0x20) = cVar2;
        piVar1 = (int *)(*(longlong *)(lVar3 + 0x1b0) + 0xac);
        *piVar1 = *piVar1 + 1;
      }
    }
    else {
      uVar8 = 0;
    }
  }
  *puVar6 = uVar8;
  return;
}



// FUNCTION 149251ae0 FUN_149251ae0 body=176 status=ok
// SIG undefined FUN_149251ae0(void)

void FUN_149251ae0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 uVar8;
  
  lVar3 = *(longlong *)(param_1 + 0xc0);
  lVar7 = *(longlong *)(param_1 + 0x100);
  lVar4 = *param_2;
  pfVar5 = *(float **)(lVar4 + (longlong)*(int *)(lVar7 + 0x94) * 0x20);
  puVar6 = *(undefined1 **)(lVar4 + (longlong)*(int *)(lVar7 + 0x9c) * 0x20);
  lVar7 = FUN_149251916(lVar3,*(undefined8 *)(lVar4 + (longlong)*(int *)(lVar7 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar4 >> 8),2),
                        **(undefined1 **)(lVar4 + (longlong)*(int *)(lVar7 + 0x88) * 0x20));
  if ((lVar7 == 0) || (*(char *)(lVar7 + 0x10) != '\x02')) {
    uVar8 = 0;
  }
  else {
    fVar2 = *pfVar5;
    uVar8 = 1;
    if (1e-08 < ABS(*(float *)(lVar7 + 0x20) - fVar2)) {
      *(float *)(lVar7 + 0x20) = fVar2;
      piVar1 = (int *)(*(longlong *)(lVar3 + 0x1b0) + 0xac);
      *piVar1 = *piVar1 + 1;
    }
  }
  *puVar6 = uVar8;
  return;
}



// FUNCTION 149251b90 FUN_149251b90 body=148 status=ok
// SIG undefined FUN_149251b90(void)

void FUN_149251b90(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 uVar7;
  
  lVar2 = *(longlong *)(param_1 + 0xc0);
  lVar6 = *(longlong *)(param_1 + 0x100);
  lVar3 = *param_2;
  piVar4 = *(int **)(lVar3 + (longlong)*(int *)(lVar6 + 0x94) * 0x20);
  puVar5 = *(undefined1 **)(lVar3 + (longlong)*(int *)(lVar6 + 0x9c) * 0x20);
  lVar6 = FUN_149251916(lVar2,*(undefined8 *)(lVar3 + (longlong)*(int *)(lVar6 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar3 >> 8),4),
                        **(undefined1 **)(lVar3 + (longlong)*(int *)(lVar6 + 0x88) * 0x20));
  if ((lVar6 == 0) || (*(char *)(lVar6 + 0x10) != '\x04')) {
    uVar7 = 0;
  }
  else {
    iVar1 = *piVar4;
    uVar7 = 1;
    if (*(int *)(lVar6 + 0x20) != iVar1) {
      *(int *)(lVar6 + 0x20) = iVar1;
      piVar4 = (int *)(*(longlong *)(lVar2 + 0x1b0) + 0xac);
      *piVar4 = *piVar4 + 1;
    }
  }
  *puVar5 = uVar7;
  return;
}



// FUNCTION 149251c24 FUN_149251c24 body=160 status=ok
// SIG undefined FUN_149251c24(void)

void FUN_149251c24(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 uVar6;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  lVar5 = *(longlong *)(param_1 + 0x100);
  lVar2 = *param_2;
  piVar3 = *(int **)(lVar2 + (longlong)*(int *)(lVar5 + 0x94) * 0x20);
  puVar4 = *(undefined1 **)(lVar2 + (longlong)*(int *)(lVar5 + 0x9c) * 0x20);
  lVar5 = FUN_149251916(lVar1,*(undefined8 *)(lVar2 + (longlong)*(int *)(lVar5 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar2 >> 8),6),
                        **(undefined1 **)(lVar2 + (longlong)*(int *)(lVar5 + 0x88) * 0x20));
  if ((lVar5 == 0) || (*(char *)(lVar5 + 0x10) != '\x06')) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
    if ((*(int *)(lVar5 + 0x20) != *piVar3) || (*(int *)(lVar5 + 0x24) != piVar3[1])) {
      *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)piVar3;
      piVar3 = (int *)(*(longlong *)(lVar1 + 0x1b0) + 0xac);
      *piVar3 = *piVar3 + 1;
    }
  }
  *puVar4 = uVar6;
  return;
}



// FUNCTION 149251cc4 FUN_149251cc4 body=239 status=ok
// SIG undefined FUN_149251cc4(void)

void FUN_149251cc4(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  undefined1 *puVar5;
  double dVar6;
  longlong lVar7;
  undefined1 uVar8;
  
  lVar2 = *(longlong *)(param_1 + 0xc0);
  lVar7 = *(longlong *)(param_1 + 0x100);
  lVar3 = *param_2;
  pdVar4 = *(double **)(lVar3 + (longlong)*(int *)(lVar7 + 0x94) * 0x20);
  puVar5 = *(undefined1 **)(lVar3 + (longlong)*(int *)(lVar7 + 0x9c) * 0x20);
  lVar7 = FUN_149251916(lVar2,*(undefined8 *)(lVar3 + (longlong)*(int *)(lVar7 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar3 >> 8),8),
                        **(undefined1 **)(lVar3 + (longlong)*(int *)(lVar7 + 0x88) * 0x20));
  if ((lVar7 == 0) || (*(char *)(lVar7 + 0x10) != '\b')) {
    uVar8 = 0;
  }
  else if (((9.999999747378752e-05 < ABS(*(double *)(lVar7 + 0x20) - *pdVar4)) ||
           (9.999999747378752e-05 < ABS(*(double *)(lVar7 + 0x28) - pdVar4[1]))) ||
          (uVar8 = 1, 9.999999747378752e-05 < ABS(*(double *)(lVar7 + 0x30) - pdVar4[2]))) {
    *(double *)(lVar7 + 0x30) = pdVar4[2];
    dVar6 = pdVar4[1];
    *(double *)(lVar7 + 0x20) = *pdVar4;
    *(double *)(lVar7 + 0x28) = dVar6;
    piVar1 = (int *)(*(longlong *)(lVar2 + 0x1b0) + 0xac);
    *piVar1 = *piVar1 + 1;
    uVar8 = 1;
  }
  *puVar5 = uVar8;
  return;
}



// FUNCTION 149251db4 FUN_149251db4 body=405 status=ok
// SIG undefined FUN_149251db4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149251db4(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  undefined1 *puVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  undefined1 uVar9;
  int iVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 uVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  lVar2 = *(longlong *)(param_1 + 0xc0);
  lVar8 = *(longlong *)(param_1 + 0x100);
  lVar3 = *param_2;
  uVar11 = *(undefined8 *)(lVar3 + (longlong)*(int *)(lVar8 + 0x84) * 0x20);
  pdVar4 = *(double **)(lVar3 + (longlong)*(int *)(lVar8 + 0x94) * 0x20);
  puVar5 = *(undefined1 **)(lVar3 + (longlong)*(int *)(lVar8 + 0x9c) * 0x20);
  uVar13 = CONCAT71((int7)((ulonglong)lVar3 >> 8),10);
  lVar8 = FUN_149251916(lVar2,uVar11,uVar13,
                        **(undefined1 **)(lVar3 + (longlong)*(int *)(lVar8 + 0x88) * 0x20));
  if ((lVar8 == 0) || (*(char *)(lVar8 + 0x10) != '\n')) {
    uVar9 = 0;
  }
  else {
    dVar27 = *(double *)(lVar8 + 0x20) - *pdVar4;
    dVar28 = *(double *)(lVar8 + 0x28) - pdVar4[1];
    dVar14 = *(double *)(lVar8 + 0x30) - pdVar4[2];
    dVar6 = (double)DAT_1499387d0;
    dVar7 = DAT_1499387d0._8_8_;
    auVar21._8_8_ = dVar28;
    auVar21._0_8_ = dVar27;
    auVar22 = divpd(auVar21,_DAT_1499387d0);
    auVar15._0_8_ = dVar14 / 360.0;
    auVar15._8_8_ = 0;
    auVar23 = roundpd(auVar22,auVar22,3);
    auVar22 = roundpd(auVar15,auVar15,3);
    auVar29._0_8_ = dVar14 - auVar22._0_8_ * dVar6;
    auVar29._8_8_ = 0.0 - auVar22._8_8_ * dVar7;
    dVar27 = dVar27 - auVar23._0_8_ * dVar6;
    dVar28 = dVar28 - auVar23._8_8_ * dVar7;
    auVar26._0_8_ = dVar27 + dVar6;
    auVar26._8_8_ = dVar28 + dVar7;
    auVar25._0_8_ = dVar6 + auVar29._0_8_;
    auVar25._8_8_ = dVar7 + auVar29._8_8_;
    auVar16._8_8_ = -(ulonglong)(0.0 <= dVar28);
    auVar16._0_8_ = -(ulonglong)(0.0 <= dVar27);
    auVar22._8_8_ = dVar28;
    auVar22._0_8_ = dVar27;
    auVar23 = blendvpd(auVar26,auVar22,auVar16);
    auVar17._8_8_ = -(ulonglong)(0.0 <= auVar29._8_8_);
    auVar17._0_8_ = -(ulonglong)(0.0 <= auVar29._0_8_);
    auVar22 = blendvpd(auVar25,auVar29,auVar17);
    auVar30._0_8_ = auVar23._0_8_ + -360.0;
    auVar30._8_8_ = auVar23._8_8_ + -360.0;
    auVar18._8_8_ = -(ulonglong)(180.0 < auVar23._8_8_);
    auVar18._0_8_ = -(ulonglong)(180.0 < auVar23._0_8_);
    auVar15 = blendvpd(auVar23,auVar30,auVar18);
    auVar19._8_8_ = -(ulonglong)(180.0 < auVar22._8_8_);
    auVar19._0_8_ = -(ulonglong)(180.0 < auVar22._0_8_);
    auVar23._8_8_ = auVar22._8_8_ + -360.0;
    auVar23._0_8_ = auVar22._0_8_ + -360.0;
    auVar22 = blendvpd(auVar22,auVar23,auVar19);
    auVar24._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar15._8_8_));
    auVar24._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar15._0_8_));
    iVar10 = movmskpd((int)uVar11,auVar24);
    auVar20._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar22._8_8_));
    auVar20._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar22._0_8_));
    uVar12 = movmskpd((int)uVar13,auVar20);
    uVar9 = 1;
    if ((uVar12 & 0x3fffffff) != 0 || iVar10 != 0) {
      *(double *)(lVar8 + 0x30) = pdVar4[2];
      dVar6 = pdVar4[1];
      *(double *)(lVar8 + 0x20) = *pdVar4;
      *(double *)(lVar8 + 0x28) = dVar6;
      piVar1 = (int *)(*(longlong *)(lVar2 + 0x1b0) + 0xac);
      *piVar1 = *piVar1 + 1;
    }
  }
  *puVar5 = uVar9;
  return;
}



// FUNCTION 149251f4a FUN_149251f4a body=349 status=ok
// SIG undefined FUN_149251f4a(void)

void FUN_149251f4a(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  double *pdVar3;
  undefined1 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  undefined1 uVar13;
  uint uVar14;
  undefined8 uVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  longlong lVar19;
  
  lVar2 = *(longlong *)(param_1 + 0xc0);
  lVar12 = *(longlong *)(param_1 + 0x100);
  lVar19 = *param_2;
  uVar15 = *(undefined8 *)(lVar19 + (longlong)*(int *)(lVar12 + 0x84) * 0x20);
  pdVar3 = *(double **)(lVar19 + (longlong)*(int *)(lVar12 + 0x94) * 0x20);
  puVar4 = *(undefined1 **)(lVar19 + (longlong)*(int *)(lVar12 + 0x9c) * 0x20);
  uVar18 = CONCAT71((int7)((ulonglong)lVar19 >> 8),0xc);
  lVar12 = FUN_149251916(lVar2,uVar15,uVar18,
                         **(undefined1 **)(lVar19 + (longlong)*(int *)(lVar12 + 0x88) * 0x20));
  if ((lVar12 == 0) || (*(char *)(lVar12 + 0x10) != '\f')) {
    uVar13 = 0;
  }
  else {
    lVar19 = -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar12 + 0x28) - pdVar3[1]));
    auVar8._8_4_ = (int)lVar19;
    auVar8._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar12 + 0x20) - *pdVar3));
    auVar8._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
    uVar14 = movmskpd((int)uVar15,auVar8);
    lVar19 = -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar12 + 0x38) - pdVar3[3]));
    auVar7._8_4_ = (int)lVar19;
    auVar7._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar12 + 0x30) - pdVar3[2]))
    ;
    auVar7._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
    iVar16 = movmskpd((int)uVar18,auVar7);
    uVar13 = 1;
    uVar17 = iVar16 << 2 | uVar14;
    if (uVar17 != 0) {
      auVar5._8_8_ = -(ulonglong)
                      (9.999999747378752e-05 < ABS(*(double *)(lVar12 + 0x28) + pdVar3[1]));
      auVar5._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar12 + 0x20) + *pdVar3))
      ;
      iVar16 = movmskpd(uVar14,auVar5);
      auVar6._8_8_ = -(ulonglong)
                      (9.999999747378752e-05 < ABS(*(double *)(lVar12 + 0x38) + pdVar3[3]));
      auVar6._0_8_ = -(ulonglong)
                      (9.999999747378752e-05 < ABS(*(double *)(lVar12 + 0x30) + pdVar3[2]));
      uVar14 = movmskpd(uVar17,auVar6);
      if ((uVar14 & 0x3fffffff) != 0 || iVar16 != 0) {
        dVar9 = *pdVar3;
        dVar10 = pdVar3[1];
        dVar11 = pdVar3[3];
        *(double *)(lVar12 + 0x30) = pdVar3[2];
        *(double *)(lVar12 + 0x38) = dVar11;
        *(double *)(lVar12 + 0x20) = dVar9;
        *(double *)(lVar12 + 0x28) = dVar10;
        piVar1 = (int *)(*(longlong *)(lVar2 + 0x1b0) + 0xac);
        *piVar1 = *piVar1 + 1;
      }
    }
  }
  *puVar4 = uVar13;
  return;
}



// FUNCTION 1492520a8 FUN_1492520a8 body=173 status=ok
// SIG undefined FUN_1492520a8(void)

void FUN_1492520a8(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  lVar2 = *(longlong *)(param_1 + 0xc0);
  lVar5 = *(longlong *)(param_1 + 0x100);
  lVar6 = *param_2;
  puVar8 = *(undefined8 **)(lVar6 + (longlong)*(int *)(lVar5 + 0x94) * 0x20);
  puVar3 = *(undefined1 **)(lVar6 + (longlong)*(int *)(lVar5 + 0x9c) * 0x20);
  lVar5 = FUN_149251916(lVar2,*(undefined8 *)(lVar6 + (longlong)*(int *)(lVar5 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar6 >> 8),0xe),
                        **(undefined1 **)(lVar6 + (longlong)*(int *)(lVar5 + 0x88) * 0x20));
  if ((lVar5 == 0) || (*(char *)(lVar5 + 0x10) != '\x0e')) {
    uVar7 = 0;
  }
  else {
    cVar4 = FUN_1492d08f2((undefined8 *)(lVar5 + 0x20),puVar8);
    uVar7 = 1;
    if (cVar4 == '\0') {
      puVar9 = (undefined8 *)(lVar5 + 0x20);
      for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      piVar1 = (int *)(*(longlong *)(lVar2 + 0x1b0) + 0xac);
      *piVar1 = *piVar1 + 1;
    }
  }
  *puVar3 = uVar7;
  return;
}



// FUNCTION 149252156 FUN_149252156 body=171 status=ok
// SIG undefined FUN_149252156(void)

void FUN_149252156(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  undefined1 uVar9;
  
  lVar2 = *(longlong *)(param_1 + 0xc0);
  lVar8 = *(longlong *)(param_1 + 0x100);
  lVar3 = *param_2;
  puVar4 = *(undefined8 **)(lVar3 + (longlong)*(int *)(lVar8 + 0x94) * 0x20);
  puVar5 = *(undefined1 **)(lVar3 + (longlong)*(int *)(lVar8 + 0x9c) * 0x20);
  lVar8 = FUN_149251916(lVar2,*(undefined8 *)(lVar3 + (longlong)*(int *)(lVar8 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar3 >> 8),0x10),
                        **(undefined1 **)(lVar3 + (longlong)*(int *)(lVar8 + 0x88) * 0x20));
  if ((lVar8 == 0) || (*(char *)(lVar8 + 0x10) != '\x10')) {
    uVar9 = 0;
  }
  else {
    cVar7 = FUN_1492d0a36((undefined8 *)(lVar8 + 0x20),puVar4);
    uVar9 = 1;
    if (cVar7 == '\0') {
      uVar6 = puVar4[1];
      *(undefined8 *)(lVar8 + 0x20) = *puVar4;
      *(undefined8 *)(lVar8 + 0x28) = uVar6;
      piVar1 = (int *)(*(longlong *)(lVar2 + 0x1b0) + 0xac);
      *piVar1 = *piVar1 + 1;
    }
  }
  *puVar5 = uVar9;
  return;
}



// FUNCTION 149252202 FUN_149252202 body=171 status=ok
// SIG undefined FUN_149252202(void)

void FUN_149252202(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 uVar7;
  
  lVar2 = *(longlong *)(param_1 + 0xc0);
  lVar6 = *(longlong *)(param_1 + 0x100);
  lVar3 = *param_2;
  pcVar4 = *(char **)(lVar3 + (longlong)*(int *)(lVar6 + 0x94) * 0x20);
  puVar5 = *(undefined1 **)(lVar3 + (longlong)*(int *)(lVar6 + 0x9c) * 0x20);
  lVar6 = FUN_149251916(lVar2,*(undefined8 *)(lVar3 + (longlong)*(int *)(lVar6 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar3 >> 8),0x12),
                        **(undefined1 **)(lVar3 + (longlong)*(int *)(lVar6 + 0x88) * 0x20));
  if ((lVar6 == 0) || (*(char *)(lVar6 + 0x10) != '\x12')) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
    if ((*(longlong *)(lVar6 + 0x24) != *(longlong *)(pcVar4 + 4)) ||
       (*(char *)(lVar6 + 0x20) != *pcVar4)) {
      *(undefined4 *)(lVar6 + 0x28) = *(undefined4 *)(pcVar4 + 8);
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)pcVar4;
      piVar1 = (int *)(*(longlong *)(lVar2 + 0x1b0) + 0xac);
      *piVar1 = *piVar1 + 1;
    }
  }
  *puVar5 = uVar7;
  return;
}



// FUNCTION 1492522ae FUN_1492522ae body=196 status=ok
// SIG undefined FUN_1492522ae(void)

void FUN_1492522ae(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  lVar3 = *(longlong *)(param_1 + 0xc0);
  lVar8 = *(longlong *)(param_1 + 0x100);
  lVar4 = *param_2;
  plVar5 = *(longlong **)(lVar4 + (longlong)*(int *)(lVar8 + 0x94) * 0x20);
  puVar6 = *(undefined1 **)(lVar4 + (longlong)*(int *)(lVar8 + 0x9c) * 0x20);
  lVar8 = FUN_149251916(lVar3,*(undefined8 *)(lVar4 + (longlong)*(int *)(lVar8 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar4 >> 8),1),
                        **(undefined1 **)(lVar4 + (longlong)*(int *)(lVar8 + 0x88) * 0x20));
  if ((lVar8 == 0) || (*(char *)(lVar8 + 0x10) != '\x01')) {
    uVar7 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar8 + 0x28);
    if (uVar2 == *(uint *)(plVar5 + 1)) {
      uVar7 = 1;
      if (0 < (int)uVar2) {
        uVar9 = 0;
        do {
          if (*(char *)(*(longlong *)(lVar8 + 0x20) + uVar9) != *(char *)(*plVar5 + uVar9))
          goto LAB_149252359;
          uVar9 = uVar9 + 1;
        } while (uVar2 != uVar9);
      }
    }
    else {
LAB_149252359:
      FUN_1447cd5a6((longlong *)(lVar8 + 0x20),plVar5);
      piVar1 = (int *)(*(longlong *)(lVar3 + 0x1b0) + 0xac);
      *piVar1 = *piVar1 + 1;
      uVar7 = 1;
    }
  }
  *puVar6 = uVar7;
  return;
}



// FUNCTION 149252372 FUN_149252372 body=221 status=ok
// SIG undefined FUN_149252372(void)

void FUN_149252372(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  lVar3 = *(longlong *)(param_1 + 0xc0);
  lVar8 = *(longlong *)(param_1 + 0x100);
  lVar4 = *param_2;
  plVar5 = *(longlong **)(lVar4 + (longlong)*(int *)(lVar8 + 0x94) * 0x20);
  puVar6 = *(undefined1 **)(lVar4 + (longlong)*(int *)(lVar8 + 0x9c) * 0x20);
  lVar8 = FUN_149251916(lVar3,*(undefined8 *)(lVar4 + (longlong)*(int *)(lVar8 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar4 >> 8),3),
                        **(undefined1 **)(lVar4 + (longlong)*(int *)(lVar8 + 0x88) * 0x20));
  if ((lVar8 == 0) || (*(char *)(lVar8 + 0x10) != '\x03')) {
    uVar7 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar8 + 0x28);
    if (uVar2 == *(uint *)(plVar5 + 1)) {
      uVar7 = 1;
      if (0 < (int)uVar2) {
        uVar9 = 0;
        do {
          if (1e-08 < ABS(*(float *)(*(longlong *)(lVar8 + 0x20) + uVar9 * 4) -
                          *(float *)(*plVar5 + uVar9 * 4))) goto LAB_149252436;
          uVar9 = uVar9 + 1;
        } while (uVar2 != uVar9);
      }
    }
    else {
LAB_149252436:
      FUN_144a67f5c((longlong *)(lVar8 + 0x20),plVar5);
      piVar1 = (int *)(*(longlong *)(lVar3 + 0x1b0) + 0xac);
      *piVar1 = *piVar1 + 1;
      uVar7 = 1;
    }
  }
  *puVar6 = uVar7;
  return;
}



// FUNCTION 149252450 FUN_149252450 body=196 status=ok
// SIG undefined FUN_149252450(void)

void FUN_149252450(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  lVar3 = *(longlong *)(param_1 + 0xc0);
  lVar8 = *(longlong *)(param_1 + 0x100);
  lVar4 = *param_2;
  plVar5 = *(longlong **)(lVar4 + (longlong)*(int *)(lVar8 + 0x94) * 0x20);
  puVar6 = *(undefined1 **)(lVar4 + (longlong)*(int *)(lVar8 + 0x9c) * 0x20);
  lVar8 = FUN_149251916(lVar3,*(undefined8 *)(lVar4 + (longlong)*(int *)(lVar8 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar4 >> 8),5),
                        **(undefined1 **)(lVar4 + (longlong)*(int *)(lVar8 + 0x88) * 0x20));
  if ((lVar8 == 0) || (*(char *)(lVar8 + 0x10) != '\x05')) {
    uVar7 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar8 + 0x28);
    if (uVar2 == *(uint *)(plVar5 + 1)) {
      uVar7 = 1;
      if (0 < (int)uVar2) {
        uVar9 = 0;
        do {
          if (*(int *)(*(longlong *)(lVar8 + 0x20) + uVar9 * 4) != *(int *)(*plVar5 + uVar9 * 4))
          goto LAB_1492524fb;
          uVar9 = uVar9 + 1;
        } while (uVar2 != uVar9);
      }
    }
    else {
LAB_1492524fb:
      FUN_14054c6c4((longlong *)(lVar8 + 0x20),plVar5);
      piVar1 = (int *)(*(longlong *)(lVar3 + 0x1b0) + 0xac);
      *piVar1 = *piVar1 + 1;
      uVar7 = 1;
    }
  }
  *puVar6 = uVar7;
  return;
}



// FUNCTION 149252514 FUN_149252514 body=208 status=ok
// SIG undefined FUN_149252514(void)

void FUN_149252514(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  lVar3 = *(longlong *)(param_1 + 0xc0);
  lVar8 = *(longlong *)(param_1 + 0x100);
  lVar4 = *param_2;
  plVar5 = *(longlong **)(lVar4 + (longlong)*(int *)(lVar8 + 0x94) * 0x20);
  puVar6 = *(undefined1 **)(lVar4 + (longlong)*(int *)(lVar8 + 0x9c) * 0x20);
  lVar8 = FUN_149251916(lVar3,*(undefined8 *)(lVar4 + (longlong)*(int *)(lVar8 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar4 >> 8),7),
                        **(undefined1 **)(lVar4 + (longlong)*(int *)(lVar8 + 0x88) * 0x20));
  if ((lVar8 == 0) || (*(char *)(lVar8 + 0x10) != '\a')) {
    uVar7 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar8 + 0x28);
    if (uVar2 == *(uint *)(plVar5 + 1)) {
      uVar7 = 1;
      if (0 < (int)uVar2) {
        lVar4 = *(longlong *)(lVar8 + 0x20);
        uVar9 = 0;
        do {
          if ((*(int *)(lVar4 + uVar9 * 8) != *(int *)(*plVar5 + uVar9 * 8)) ||
             (*(int *)(lVar4 + 4 + uVar9 * 8) != *(int *)(*plVar5 + 4 + uVar9 * 8)))
          goto LAB_1492525cb;
          uVar9 = uVar9 + 1;
        } while (uVar2 != uVar9);
      }
    }
    else {
LAB_1492525cb:
      FUN_1406fa324((longlong *)(lVar8 + 0x20),plVar5);
      piVar1 = (int *)(*(longlong *)(lVar3 + 0x1b0) + 0xac);
      *piVar1 = *piVar1 + 1;
      uVar7 = 1;
    }
  }
  *puVar6 = uVar7;
  return;
}



// FUNCTION 1492525e4 FUN_1492525e4 body=179 status=ok
// SIG undefined FUN_1492525e4(void)

void FUN_1492525e4(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  char cVar6;
  longlong lVar7;
  undefined1 uVar8;
  
  lVar2 = *(longlong *)(param_1 + 0xc0);
  lVar7 = *(longlong *)(param_1 + 0x100);
  lVar3 = *param_2;
  uVar4 = *(undefined8 *)(lVar3 + (longlong)*(int *)(lVar7 + 0x94) * 0x20);
  puVar5 = *(undefined1 **)(lVar3 + (longlong)*(int *)(lVar7 + 0x9c) * 0x20);
  lVar7 = FUN_149251916(lVar2,*(undefined8 *)(lVar3 + (longlong)*(int *)(lVar7 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar3 >> 8),9),
                        **(undefined1 **)(lVar3 + (longlong)*(int *)(lVar7 + 0x88) * 0x20));
  if ((lVar7 == 0) || (*(char *)(lVar7 + 0x10) != '\t')) {
    uVar8 = 0;
  }
  else {
    cVar6 = FUN_1492d0a9a(lVar7 + 0x20,uVar4);
    uVar8 = 1;
    if (cVar6 == '\0') {
      FUN_1405b70a4(lVar7 + 0x20,uVar4);
      piVar1 = (int *)(*(longlong *)(lVar2 + 0x1b0) + 0xac);
      *piVar1 = *piVar1 + 1;
    }
  }
  *puVar5 = uVar8;
  return;
}



// FUNCTION 149252698 FUN_149252698 body=179 status=ok
// SIG undefined FUN_149252698(void)

void FUN_149252698(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  char cVar6;
  longlong lVar7;
  undefined1 uVar8;
  
  lVar2 = *(longlong *)(param_1 + 0xc0);
  lVar7 = *(longlong *)(param_1 + 0x100);
  lVar3 = *param_2;
  uVar4 = *(undefined8 *)(lVar3 + (longlong)*(int *)(lVar7 + 0x94) * 0x20);
  puVar5 = *(undefined1 **)(lVar3 + (longlong)*(int *)(lVar7 + 0x9c) * 0x20);
  lVar7 = FUN_149251916(lVar2,*(undefined8 *)(lVar3 + (longlong)*(int *)(lVar7 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar3 >> 8),0xb),
                        **(undefined1 **)(lVar3 + (longlong)*(int *)(lVar7 + 0x88) * 0x20));
  if ((lVar7 == 0) || (*(char *)(lVar7 + 0x10) != '\v')) {
    uVar8 = 0;
  }
  else {
    cVar6 = FUN_1492d0b20(lVar7 + 0x20,uVar4);
    uVar8 = 1;
    if (cVar6 == '\0') {
      FUN_1492067de(lVar7 + 0x20,uVar4);
      piVar1 = (int *)(*(longlong *)(lVar2 + 0x1b0) + 0xac);
      *piVar1 = *piVar1 + 1;
    }
  }
  *puVar5 = uVar8;
  return;
}



// FUNCTION 14925274c FUN_14925274c body=179 status=ok
// SIG undefined FUN_14925274c(void)

void FUN_14925274c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  char cVar6;
  longlong lVar7;
  undefined1 uVar8;
  
  lVar2 = *(longlong *)(param_1 + 0xc0);
  lVar7 = *(longlong *)(param_1 + 0x100);
  lVar3 = *param_2;
  uVar4 = *(undefined8 *)(lVar3 + (longlong)*(int *)(lVar7 + 0x94) * 0x20);
  puVar5 = *(undefined1 **)(lVar3 + (longlong)*(int *)(lVar7 + 0x9c) * 0x20);
  lVar7 = FUN_149251916(lVar2,*(undefined8 *)(lVar3 + (longlong)*(int *)(lVar7 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar3 >> 8),0xd),
                        **(undefined1 **)(lVar3 + (longlong)*(int *)(lVar7 + 0x88) * 0x20));
  if ((lVar7 == 0) || (*(char *)(lVar7 + 0x10) != '\r')) {
    uVar8 = 0;
  }
  else {
    cVar6 = FUN_1492d0cd8(lVar7 + 0x20,uVar4);
    uVar8 = 1;
    if (cVar6 == '\0') {
      FUN_140472d9a(lVar7 + 0x20,uVar4);
      piVar1 = (int *)(*(longlong *)(lVar2 + 0x1b0) + 0xac);
      *piVar1 = *piVar1 + 1;
    }
  }
  *puVar5 = uVar8;
  return;
}



// FUNCTION 149252800 FUN_149252800 body=231 status=ok
// SIG undefined FUN_149252800(void)

void FUN_149252800(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  char cVar6;
  longlong lVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar3 = *(longlong *)(param_1 + 0xc0);
  lVar7 = *(longlong *)(param_1 + 0x100);
  lVar10 = *param_2;
  plVar4 = *(longlong **)(lVar10 + (longlong)*(int *)(lVar7 + 0x94) * 0x20);
  puVar5 = *(undefined1 **)(lVar10 + (longlong)*(int *)(lVar7 + 0x9c) * 0x20);
  lVar7 = FUN_149251916(lVar3,*(undefined8 *)(lVar10 + (longlong)*(int *)(lVar7 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar10 >> 8),0xf),
                        **(undefined1 **)(lVar10 + (longlong)*(int *)(lVar7 + 0x88) * 0x20));
  if ((lVar7 == 0) || (*(char *)(lVar7 + 0x10) != '\x0f')) {
    uVar8 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar7 + 0x28);
    uVar9 = (ulonglong)uVar2;
    if (uVar2 == *(uint *)(plVar4 + 1)) {
      uVar8 = 1;
      if (0 < (int)uVar2) {
        lVar10 = *plVar4;
        lVar11 = *(longlong *)(lVar7 + 0x20);
        do {
          cVar6 = FUN_1492d08f2(lVar11,lVar10);
          if (cVar6 == '\0') goto LAB_1492528ca;
          lVar11 = lVar11 + 0x60;
          lVar10 = lVar10 + 0x60;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    else {
LAB_1492528ca:
      FUN_144756208((longlong *)(lVar7 + 0x20),plVar4);
      piVar1 = (int *)(*(longlong *)(lVar3 + 0x1b0) + 0xac);
      *piVar1 = *piVar1 + 1;
      uVar8 = 1;
    }
  }
  *puVar5 = uVar8;
  return;
}



// FUNCTION 1492528e8 FUN_1492528e8 body=231 status=ok
// SIG undefined FUN_1492528e8(void)

void FUN_1492528e8(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  char cVar6;
  longlong lVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar3 = *(longlong *)(param_1 + 0xc0);
  lVar7 = *(longlong *)(param_1 + 0x100);
  lVar10 = *param_2;
  plVar4 = *(longlong **)(lVar10 + (longlong)*(int *)(lVar7 + 0x94) * 0x20);
  puVar5 = *(undefined1 **)(lVar10 + (longlong)*(int *)(lVar7 + 0x9c) * 0x20);
  lVar7 = FUN_149251916(lVar3,*(undefined8 *)(lVar10 + (longlong)*(int *)(lVar7 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar10 >> 8),0x11),
                        **(undefined1 **)(lVar10 + (longlong)*(int *)(lVar7 + 0x88) * 0x20));
  if ((lVar7 == 0) || (*(char *)(lVar7 + 0x10) != '\x11')) {
    uVar8 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar7 + 0x28);
    uVar9 = (ulonglong)uVar2;
    if (uVar2 == *(uint *)(plVar4 + 1)) {
      uVar8 = 1;
      if (0 < (int)uVar2) {
        lVar10 = *plVar4;
        lVar11 = *(longlong *)(lVar7 + 0x20);
        do {
          cVar6 = FUN_1492d0a36(lVar11,lVar10);
          if (cVar6 == '\0') goto LAB_1492529b2;
          lVar11 = lVar11 + 0x10;
          lVar10 = lVar10 + 0x10;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    else {
LAB_1492529b2:
      FUN_14479f9aa((longlong *)(lVar7 + 0x20),plVar4);
      piVar1 = (int *)(*(longlong *)(lVar3 + 0x1b0) + 0xac);
      *piVar1 = *piVar1 + 1;
      uVar8 = 1;
    }
  }
  *puVar5 = uVar8;
  return;
}



// FUNCTION 1492529d0 FUN_1492529d0 body=220 status=ok
// SIG undefined FUN_1492529d0(void)

void FUN_1492529d0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar3 = *(longlong *)(param_1 + 0xc0);
  lVar8 = *(longlong *)(param_1 + 0x100);
  lVar4 = *param_2;
  plVar5 = *(longlong **)(lVar4 + (longlong)*(int *)(lVar8 + 0x94) * 0x20);
  puVar6 = *(undefined1 **)(lVar4 + (longlong)*(int *)(lVar8 + 0x9c) * 0x20);
  lVar8 = FUN_149251916(lVar3,*(undefined8 *)(lVar4 + (longlong)*(int *)(lVar8 + 0x84) * 0x20),
                        CONCAT71((int7)((ulonglong)lVar4 >> 8),0x13),
                        **(undefined1 **)(lVar4 + (longlong)*(int *)(lVar8 + 0x88) * 0x20));
  if ((lVar8 == 0) || (*(char *)(lVar8 + 0x10) != '\x13')) {
    uVar7 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar8 + 0x28);
    if (uVar2 == *(uint *)(plVar5 + 1)) {
      uVar7 = 1;
      if (0 < (int)uVar2) {
        lVar4 = *(longlong *)(lVar8 + 0x20);
        lVar9 = 0;
        do {
          if ((*(longlong *)(lVar4 + 4 + lVar9) != *(longlong *)(*plVar5 + 4 + lVar9)) ||
             (*(char *)(lVar4 + lVar9) != *(char *)(*plVar5 + lVar9))) goto LAB_149252a93;
          lVar9 = lVar9 + 0xc;
        } while ((ulonglong)uVar2 * 0xc != lVar9);
      }
    }
    else {
LAB_149252a93:
      FUN_1444888de((longlong *)(lVar8 + 0x20),plVar5);
      piVar1 = (int *)(*(longlong *)(lVar3 + 0x1b0) + 0xac);
      *piVar1 = *piVar1 + 1;
      uVar7 = 1;
    }
  }
  *puVar6 = uVar7;
  return;
}



// FUNCTION 149252ab4 FUN_149252ab4 body=86 status=ok
// SIG undefined FUN_149252ab4(void)

void FUN_149252ab4(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1459b4cf4(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x200,*(undefined4 *)(param_1 + 0x260),
                *(undefined1 *)(param_1 + 0x264),param_1 + 0x268);
  return;
}



// FUNCTION 149252b0a FUN_149252b0a body=371 status=ok
// SIG undefined FUN_149252b0a(void)

void FUN_149252b0a(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar2 = (undefined8 *)*param_2;
  local_78 = *puVar2;
  local_7c = *(undefined4 *)puVar2[4];
  puVar3 = (undefined8 *)puVar2[8];
  uVar4 = puVar2[0xc];
  uVar1 = *(undefined4 *)puVar2[0x10];
  uVar5 = puVar2[0x14];
  uVar6 = puVar2[0x18];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar2 + 0x1c,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(*param_2 + 0x100,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_88 = FUN_144828ac0(*param_2 + 0x120,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  local_70 = *puVar3;
  local_68 = *(undefined4 *)(puVar3 + 1);
  local_b8 = uVar4;
  local_b0 = uVar1;
  local_a8 = uVar5;
  local_a0 = uVar6;
  local_98 = uVar8;
  local_90 = uVar9;
  FUN_149252fa4(*(undefined8 *)(param_1 + 0xc0),local_78,local_7c);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149252c86 FUN_149252c86 body=210 status=ok
// SIG undefined FUN_149252c86(void)

void FUN_149252c86(longlong param_1)

{
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_48 = param_1 + 0x330;
  local_50 = param_1 + 0x308;
  local_58 = param_1 + 0x2e8;
  local_60 = param_1 + 0x2e0;
  local_68 = param_1 + 0x280;
  local_70 = *(undefined4 *)(param_1 + 0x270);
  local_78 = param_1 + 0x210;
  local_40 = *(undefined8 *)(param_1 + 0x200);
  local_38 = *(undefined4 *)(param_1 + 0x208);
  FUN_149252fa4(param_1 + 0x10,param_1 + 0x1f0,*(undefined4 *)(param_1 + 0x1fc));
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149252d5a FUN_149252d5a body=371 status=ok
// SIG undefined FUN_149252d5a(void)

void FUN_149252d5a(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar2 = (undefined8 *)*param_2;
  local_78 = *puVar2;
  local_7c = *(undefined4 *)puVar2[4];
  puVar3 = (undefined8 *)puVar2[8];
  uVar4 = puVar2[0xc];
  uVar1 = *(undefined4 *)puVar2[0x10];
  uVar5 = puVar2[0x14];
  uVar6 = puVar2[0x18];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar2 + 0x1c,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(*param_2 + 0x100,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_88 = FUN_144828ac0(*param_2 + 0x120,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  local_70 = *puVar3;
  local_68 = *(undefined4 *)(puVar3 + 1);
  local_b8 = uVar4;
  local_b0 = uVar1;
  local_a8 = uVar5;
  local_a0 = uVar6;
  local_98 = uVar8;
  local_90 = uVar9;
  FUN_149252fa4(*(undefined8 *)(param_1 + 0xc0),local_78,local_7c);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149252ed6 FUN_149252ed6 body=205 status=ok
// SIG undefined FUN_149252ed6(void)

void FUN_149252ed6(longlong param_1)

{
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_30 = *(undefined8 *)(param_1 + 0x200);
  local_28 = *(undefined4 *)(param_1 + 0x208);
  local_38 = param_1 + 0x330;
  local_40 = param_1 + 0x308;
  local_48 = param_1 + 0x2e8;
  local_50 = param_1 + 0x2e0;
  local_58 = param_1 + 0x280;
  local_60 = *(undefined4 *)(param_1 + 0x270);
  local_68 = param_1 + 0x210;
  FUN_149252fa4(param_1 + 0x10,param_1 + 0x1f0,*(undefined4 *)(param_1 + 0x1fc));
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149252fa4 FUN_149252fa4 body=2583 status=ok
// SIG undefined FUN_149252fa4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149252fa4(longlong param_1,undefined8 param_2,uint param_3,longlong *param_4,
                  undefined8 param_5,float param_6,double *param_7,undefined1 *param_8,
                  longlong param_9,char *param_10,double *param_11)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  char cVar14;
  ushort uVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  double *pdVar22;
  double *pdVar23;
  ulonglong uVar24;
  undefined1 auVar25 [16];
  double dVar27;
  undefined1 auVar26 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  undefined1 auStack_338 [32];
  undefined1 local_318;
  undefined1 local_310;
  undefined1 local_308;
  ulonglong local_300;
  double local_2f8 [4];
  double local_2d8;
  double dStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  double dStack_2c0;
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
  double local_1f8 [4];
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178 [4];
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  *param_8 = 0;
  pdVar23 = (double *)&DAT_14c846480;
  pdVar22 = param_7;
  for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
    *pdVar22 = *pdVar23;
    pdVar23 = pdVar23 + 1;
    pdVar22 = pdVar22 + 1;
  }
  lVar19 = *(longlong *)(param_1 + 0x1b0);
  if (lVar19 != 0) {
    cVar14 = FUN_144828dba(param_9,param_2,lVar19);
    if (((-1 < (int)param_3) && (cVar14 != '\0')) && ((int)param_3 < (int)param_4[1])) {
      uVar15 = *(ushort *)(param_10 + 0xc);
      uVar21 = (ulonglong)param_3;
      if (((uVar15 == 0xffff) || (DAT_14c87eb08 + 1U <= (uint)*(ushort *)(param_10 + 6))) ||
         ((*(longlong *)(param_10 + 4) == 0 || (*param_10 == '\0')))) {
        cVar14 = FUN_144828dba(param_10,uVar21 * 0xc + *param_4,lVar19);
        if (cVar14 == '\0') goto LAB_149253936;
        uVar18 = 0xffffffff;
        if (*(ushort *)(param_10 + 0xc) != 0xffff) {
          uVar18 = (uint)*(ushort *)(param_10 + 0xc);
        }
        FUN_14486750c(lVar19,local_178,uVar18,0);
        FUN_1449437a2(param_5,local_1f8,local_178);
        pdVar23 = local_1f8;
        pdVar22 = param_11;
        for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
          *pdVar22 = *pdVar23;
          pdVar23 = pdVar23 + 1;
          pdVar22 = pdVar22 + 1;
        }
        uVar15 = *(ushort *)(param_10 + 0xc);
      }
      uVar24 = 0xffffffff;
      if (uVar15 != 0xffff) {
        uVar24 = (ulonglong)uVar15;
      }
      lVar20 = lVar19;
      uVar16 = FUN_14486750c(lVar19,local_2f8,uVar24,0);
      auVar36 = _DAT_149934d80;
      dVar3 = local_2b8._0_8_;
      dVar7 = local_2b8._8_8_;
      dVar4 = local_2a8._0_8_;
      auVar29 = *(undefined1 (*) [16])(param_11 + 8);
      dVar5 = auVar29._0_8_;
      dVar8 = auVar29._8_8_;
      auVar2 = *(undefined1 (*) [16])(param_11 + 10);
      dVar6 = auVar2._0_8_;
      auVar29 = minpd(auVar29,local_2b8);
      auVar34 = minpd(auVar2,local_2a8);
      auVar30._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
      auVar30._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
      iVar17 = movmskpd(uVar16,auVar30);
      auVar29._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
      auVar29._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
      uVar18 = movmskpd((int)lVar20,auVar29);
      if ((uVar18 & 0x3fffffff) == 0 && iVar17 == 0) {
        dVar33 = *param_11;
        dVar27 = param_11[1];
        dVar38 = param_11[2];
        dVar31 = param_11[3];
        dVar28 = dVar27 * local_2f8[2] * -1.0 +
                 dVar38 * local_2f8[1] + dVar31 * local_2f8[0] * 1.0 + dVar33 * local_2f8[3];
        dVar32 = dVar33 * local_2f8[2] * 1.0 +
                 dVar31 * local_2f8[1] + dVar38 * local_2f8[0] * -1.0 + dVar27 * local_2f8[3];
        auVar36._0_8_ =
             dVar31 * local_2f8[2] * 1.0 +
             ((local_2f8[0] * dVar27 * 1.0 + dVar38 * local_2f8[3]) - dVar33 * local_2f8[1]);
        auVar36._8_8_ =
             dVar38 * local_2f8[2] * -1.0 +
             ((local_2f8[0] * dVar33 * -1.0 + dVar31 * local_2f8[3]) - dVar27 * local_2f8[1]);
        dVar35 = param_11[4] * dVar3;
        dVar39 = param_11[5] * dVar7;
        dVar12 = param_11[6] * dVar4;
        dVar13 = param_11[7] * local_2a8._8_8_;
        dVar38 = dVar39 * local_2f8[0] - local_2f8[1] * dVar35;
        dVar31 = dVar12 * local_2f8[1] - local_2f8[2] * dVar39;
        dVar33 = dVar35 * local_2f8[2] - local_2f8[0] * dVar12;
        dVar27 = dVar13 * local_2f8[3] - local_2f8[3] * dVar13;
        dVar31 = dVar31 + dVar31;
        dVar33 = dVar33 + dVar33;
        dVar38 = dVar38 + dVar38;
        dVar27 = dVar27 + dVar27;
        local_118 = (dVar38 * local_2f8[1] - local_2f8[2] * dVar33) + local_2f8[3] * dVar31 + dVar35
                    + local_2d8;
        dStack_110 = (dVar31 * local_2f8[2] - dVar38 * local_2f8[0]) +
                     local_2f8[3] * dVar33 + dVar39 + dStack_2d0;
        local_108 = (dVar33 * local_2f8[0] - local_2f8[1] * dVar31) + local_2f8[3] * dVar38 + dVar12
                    + (double)CONCAT44(uStack_2c4,local_2c8);
        dStack_2c0 = (dVar27 * local_2f8[3] - dVar27 * local_2f8[3]) +
                     local_2f8[3] * dVar27 + dVar13 + dStack_2c0;
      }
      else {
        dVar31 = local_2f8[1] + local_2f8[1];
        dVar33 = local_2f8[2] + local_2f8[2];
        dVar38 = local_2f8[0] * (local_2f8[0] + local_2f8[0]);
        local_1a8 = (1.0 - (dVar38 + local_2f8[1] * dVar31)) * dVar4;
        dVar27 = (local_2f8[0] + local_2f8[0]) * local_2f8[3];
        local_1b8 = (dVar31 * local_2f8[3] + local_2f8[0] * dVar33) * dVar4;
        dStack_1b0 = (dVar33 * local_2f8[1] - dVar27) * dVar4;
        local_1f8[0] = ((double)DAT_149934d80 - (local_2f8[2] * dVar33 + local_2f8[1] * dVar31)) *
                       dVar3;
        dVar38 = (DAT_149934d80._8_8_ - (local_2f8[2] * dVar33 + dVar38)) * dVar7;
        local_1f8[1] = (dVar31 * local_2f8[0] + dVar33 * local_2f8[3]) * dVar3;
        local_1c8 = (dVar33 * local_2f8[1] + dVar27) * dVar7;
        local_1f8[2] = (local_2f8[0] * dVar33 - dVar31 * local_2f8[3]) * dVar3;
        local_1f8[3] = 0.0;
        local_1d8._8_4_ = SUB84(dVar38,0);
        local_1d8._0_8_ = (dVar31 * local_2f8[0] - dVar33 * local_2f8[3]) * dVar7;
        local_1d8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = local_2d8;
        dStack_190 = dStack_2d0;
        local_188 = local_2c8;
        uStack_184 = uStack_2c4;
        uStack_180 = 0;
        uStack_17c = 0x3ff00000;
        dVar13 = *param_11;
        dVar28 = param_11[1];
        dVar32 = param_11[2];
        dVar35 = dVar28 + dVar28;
        dVar27 = dVar32 + dVar32;
        dVar12 = dVar13 * (dVar13 + dVar13);
        local_228 = (1.0 - (dVar12 + dVar28 * dVar35)) * dVar6;
        dVar33 = param_11[3];
        dVar38 = dVar27 * dVar33;
        dVar31 = (dVar13 + dVar13) * param_11[3];
        dVar33 = dVar35 * dVar33;
        local_238 = (dVar33 + *param_11 * dVar27) * dVar6;
        local_258 = (dVar35 * dVar13 - dVar38) * dVar8;
        dStack_230 = (dVar27 * dVar28 - dVar31) * dVar6;
        local_278 = ((double)DAT_149934d80 - (dVar32 * dVar27 + dVar28 * dVar35)) * dVar5;
        dStack_250 = (DAT_149934d80._8_8_ - (dVar32 * dVar27 + dVar12)) * dVar8;
        dStack_270 = (dVar35 * dVar13 + dVar38) * dVar5;
        local_248 = (dVar27 * dVar28 + dVar31) * dVar8;
        local_268 = (*param_11 * dVar27 - dVar33) * dVar5;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = param_11[4];
        dStack_210 = param_11[5];
        local_208 = param_11[6];
        uStack_200 = 0x3ff0000000000000;
        FUN_1447fea8d(local_178);
        FUN_144a1c686(local_178,0x3e45798ee0000000);
        auVar34._8_8_ = -(ulonglong)(0.0 <= dVar7 * dVar8);
        auVar34._0_8_ = -(ulonglong)(0.0 <= dVar3 * dVar5);
        auVar29 = blendvpd(_DAT_149936790,auVar36,auVar34);
        uVar24 = -(ulonglong)(0.0 <= dVar4 * dVar6);
        dVar33 = (double)(~uVar24 & 0xbff0000000000000 | uVar24 & 0x3ff0000000000000);
        dVar27 = auVar29._0_8_;
        local_178[2] = local_178[2] * dVar27;
        local_178[1] = local_178[1] * dVar27;
        local_178[0] = local_178[0] * dVar27;
        dVar27 = auVar29._8_8_;
        local_148 = local_148 * dVar27;
        local_150 = local_150 * dVar27;
        local_158 = dVar27 * local_158;
        local_128 = local_128 * dVar33;
        local_130 = local_130 * dVar33;
        local_138 = dVar33 * local_138;
        FUN_14481fd10(&local_298,local_178);
        dVar33 = local_288 * local_288 + local_298 * local_298;
        dVar27 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
        auVar26._0_8_ = dVar33 + dVar27;
        auVar26._8_8_ = dVar33 + dVar27;
        auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_);
        auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_);
        auVar29 = sqrtpd(auVar26,auVar26);
        auVar29 = divpd(auVar36,auVar29);
        auVar37._0_8_ = auVar29._0_8_ * local_288;
        auVar37._8_8_ = auVar29._8_8_ * dStack_280;
        dVar28 = (double)((ulonglong)(local_298 * auVar29._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_));
        dVar32 = (double)((ulonglong)(dStack_290 * auVar29._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_));
        auVar36 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar37,auVar25);
        dStack_2c0 = 0.0;
      }
      dVar33 = local_2a8._8_8_ * auVar2._8_8_;
      *param_7 = dVar28;
      param_7[1] = dVar32;
      *(undefined1 (*) [16])(param_7 + 2) = auVar36;
      auVar10._8_4_ = SUB84(dStack_110,0);
      auVar10._0_8_ = local_118;
      auVar10._12_4_ = (int)((ulonglong)dStack_110 >> 0x20);
      *(undefined1 (*) [16])(param_7 + 4) = auVar10;
      auVar2._8_4_ = SUB84(dStack_2c0,0);
      auVar2._0_8_ = local_108;
      auVar2._12_4_ = (int)((ulonglong)dStack_2c0 >> 0x20);
      *(undefined1 (*) [16])(param_7 + 6) = auVar2;
      auVar11._8_4_ = SUB84(dVar7 * dVar8,0);
      auVar11._0_8_ = dVar3 * dVar5;
      auVar11._12_4_ = (int)((ulonglong)(dVar7 * dVar8) >> 0x20);
      *(undefined1 (*) [16])(param_7 + 8) = auVar11;
      auVar9._8_4_ = SUB84(dVar33,0);
      auVar9._0_8_ = dVar4 * dVar6;
      auVar9._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
      *(undefined1 (*) [16])(param_7 + 10) = auVar9;
      if (1e-08 < param_6) {
        if (1.0 <= param_6) {
          uVar18 = 0xffffffff;
          if (*(ushort *)(param_9 + 0xc) != 0xffff) {
            uVar18 = (uint)*(ushort *)(param_9 + 0xc);
          }
          pdVar23 = local_178;
          lVar20 = 0xc;
          pdVar22 = param_7;
        }
        else {
          uVar18 = (uint)*(ushort *)(param_9 + 0xc);
          if (*(ushort *)(param_9 + 0xc) == 0xffff) {
            uVar18 = 0xffffffff;
          }
          local_300 = uVar21;
          FUN_14486750c(lVar19,local_1f8,uVar18,0);
          FUN_14915b8da(local_178,local_1f8,param_7);
          pdVar23 = local_178;
          pdVar22 = local_1f8;
          for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
            *pdVar22 = *pdVar23;
            pdVar23 = pdVar23 + 1;
            pdVar22 = pdVar22 + 1;
          }
          uVar18 = (uint)*(ushort *)(param_9 + 0xc);
          if (*(ushort *)(param_9 + 0xc) == 0xffff) {
            uVar18 = 0xffffffff;
          }
          lVar20 = 0xc;
          uVar21 = local_300;
          pdVar22 = local_1f8;
          pdVar23 = local_178;
        }
        for (; lVar20 != 0; lVar20 = lVar20 + -1) {
          *pdVar23 = *pdVar22;
          pdVar22 = pdVar22 + 1;
          pdVar23 = pdVar23 + 1;
        }
        local_308 = 0;
        local_310 = 0;
        local_318 = 1;
        FUN_144831e8e(lVar19,uVar18,local_178,0);
      }
      pcVar1 = (char *)(*param_4 + uVar21 * 0xc);
      if ((*(longlong *)(param_10 + 4) != *(longlong *)(pcVar1 + 4)) || (*param_10 != *pcVar1)) {
        cVar14 = FUN_144828dba(param_10,pcVar1,lVar19);
        if (cVar14 != '\0') {
          uVar18 = 0xffffffff;
          if (*(ushort *)(param_10 + 0xc) != 0xffff) {
            uVar18 = (uint)*(ushort *)(param_10 + 0xc);
          }
          FUN_14486750c(lVar19,local_178,uVar18,0);
          pdVar23 = local_178;
          pdVar22 = local_2f8;
          for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
            *pdVar22 = *pdVar23;
            pdVar23 = pdVar23 + 1;
            pdVar22 = pdVar22 + 1;
          }
          FUN_1449437a2(param_7,local_178);
          pdVar23 = local_178;
          for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
            *param_11 = *pdVar23;
            pdVar23 = pdVar23 + 1;
            param_11 = param_11 + 1;
          }
          *param_8 = 1;
        }
      }
    }
  }
LAB_149253936:
  if ((local_f0 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492539bc FUN_1492539bc body=250 status=ok
// SIG undefined FUN_1492539bc(void)

undefined8 FUN_1492539bc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_3e8 [32];
  undefined **local_3c8 [62];
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  longlong local_1c8 [2];
  undefined8 auStack_1b8 [12];
  undefined4 local_158;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  FUN_149253ab8(local_3c8);
  local_1d8 = *(undefined8 *)(param_1 + 0x1f0);
  local_1d0 = *(undefined4 *)(param_1 + 0x1f8);
  local_1cc = *(undefined4 *)(param_1 + 0x1fc);
  FUN_1444888de(local_1c8,param_1 + 0x200);
  puVar2 = (undefined8 *)(param_1 + 0x210);
  puVar3 = auStack_1b8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_158 = *(undefined4 *)(param_1 + 0x270);
  FUN_149253be4(param_2,local_3c8);
  local_3c8[0] = &PTR_FUN_14bbf6d40;
  if (local_1c8[0] != 0) {
    FUN_1400020a8();
  }
  local_3c8[0] = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc();
  if ((local_30 ^ (ulonglong)auStack_3e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149253ab8 FUN_149253ab8 body=300 status=ok
// SIG undefined FUN_149253ab8(void)

undefined8 * FUN_149253ab8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bbf6d40;
  *(undefined1 *)(param_1 + 0x3e) = 2;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0x3ff00000;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0x3ff0000000000000;
  param_1[0x4b] = 0x3ff0000000000000;
  param_1[0x4c] = 0x3ff0000000000000;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0x3f800000;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0x3ff00000;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0x3ff0000000000000;
  param_1[0x59] = 0x3ff0000000000000;
  param_1[0x5a] = 0x3ff0000000000000;
  param_1[0x5b] = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2f4) = 0xffff;
  *(undefined4 *)(param_1 + 0x5f) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x61) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x314) = 0xffff;
  *(undefined4 *)(param_1 + 99) = 0xffffffff;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34c) = 0x3ff00000;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6e] = 0x3ff0000000000000;
  param_1[0x6f] = 0x3ff0000000000000;
  param_1[0x70] = 0x3ff0000000000000;
  param_1[0x71] = 0;
  return param_1;
}



// FUNCTION 149253be4 FUN_149253be4 body=211 status=ok
// SIG undefined FUN_149253be4(void)

undefined8 * FUN_149253be4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
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
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466fbbba();
  param_1[2] = uVar1;
  uVar1 = FUN_1466fc052();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149253cb8 FUN_149253cb8 body=25 status=ok
// SIG undefined FUN_149253cb8(void)

undefined8 FUN_149253cb8(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 149253cd2 FUN_149253cd2 body=307 status=ok
// SIG undefined FUN_149253cd2(void)

void FUN_149253cd2(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar4 = (undefined8 *)*param_2;
  uVar5 = *puVar4;
  uVar1 = *(undefined1 *)puVar4[4];
  uVar6 = puVar4[8];
  uVar2 = *(undefined1 *)puVar4[0xc];
  uVar7 = puVar4[0x10];
  uVar3 = *(undefined1 *)puVar4[0x14];
  uVar8 = puVar4[0x18];
  lVar9 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar10 = FUN_144828ac0(puVar4 + 0x1c,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar9 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar9 * 0x14));
  lVar9 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar11 = FUN_144828ac0(*param_2 + 0x100,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar9 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar9 * 0x14));
  lVar9 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar12 = FUN_144828ac0(*param_2 + 0x120,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar9 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar9 * 0x14));
  FUN_149253eda(*(undefined8 *)(param_1 + 0xc0),uVar5,uVar1,uVar6,uVar2,uVar7,uVar3,uVar8,uVar10,
                uVar11,uVar12);
  return;
}



// FUNCTION 149253e18 FUN_149253e18 body=193 status=ok
// SIG undefined FUN_149253e18(void)

void FUN_149253e18(longlong param_1)

{
  undefined1 auStack_268 [32];
  undefined1 local_248;
  longlong local_240;
  undefined1 local_238;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  longlong local_218;
  undefined1 local_208 [480];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_268;
  FUN_1412ca278(local_208);
  FUN_1490d751a(local_208);
  local_218 = param_1 + 0xe0;
  local_220 = param_1 + 0xc0;
  local_228 = param_1 + 0xa0;
  local_230 = param_1 + 0x40;
  local_238 = *(undefined1 *)(param_1 + 0x34);
  local_240 = param_1 + 0x28;
  local_248 = *(undefined1 *)(param_1 + 0x24);
  FUN_149253eda(local_208,param_1 + 8,*(undefined1 *)(param_1 + 0x14),param_1 + 0x18);
  FUN_140f8ccfc(local_208);
  if ((local_28 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149253eda FUN_149253eda body=336 status=ok
// SIG undefined FUN_149253eda(void)

void FUN_149253eda(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1f8 [32];
  undefined8 *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8 [12];
  undefined8 local_168 [12];
  undefined8 local_108 [12];
  undefined8 local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  puVar2 = &DAT_14c846480;
  puVar3 = local_a8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = local_108;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = local_168;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = local_1c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_1d0 = param_9;
  local_1d8 = local_a8;
  FUN_144828832(param_1,param_2,1,param_3);
  local_1d0 = param_10;
  local_1d8 = local_108;
  FUN_144828832(param_1,param_4,1,param_5);
  local_1d0 = param_11;
  local_1d8 = local_168;
  FUN_144828832(param_1,param_6,1,param_7);
  FUN_149118d34(param_1,local_a8,local_108,local_1c8);
  FUN_1459b4e90(param_1,local_1c8,local_168,param_8);
  if ((local_48 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149254082 FUN_149254082 body=25 status=ok
// SIG undefined FUN_149254082(void)

undefined8 FUN_149254082(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 14925409c FUN_14925409c body=68 status=ok
// SIG undefined FUN_14925409c(void)

void FUN_14925409c(longlong param_1,undefined8 *param_2)

{
  param_2 = (undefined8 *)*param_2;
  FUN_149254144(*(undefined8 *)(param_1 + 0xc0),
                CONCAT71((int7)((ulonglong)*param_2 >> 8),*(undefined1 *)*param_2),param_2[4],
                *(undefined4 *)param_2[8],*(undefined1 *)param_2[0xc],*(undefined1 *)param_2[0x10]);
  return;
}



// FUNCTION 1492540f0 FUN_1492540f0 body=83 status=ok
// SIG undefined FUN_1492540f0(void)

void FUN_1492540f0(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149254144(param_1 + 0x10,*(undefined1 *)(param_1 + 0x1f0),param_1 + 500,
                *(undefined4 *)(param_1 + 0x200),*(undefined1 *)(param_1 + 0x204),
                *(undefined1 *)(param_1 + 0x205));
  return;
}



// FUNCTION 149254144 FUN_149254144 body=160 status=ok
// SIG undefined FUN_149254144(void)

void FUN_149254144(longlong param_1,undefined1 param_2,undefined8 *param_3,float param_4,
                  char param_5,char param_6)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [4];
  undefined8 local_2c;
  undefined8 local_24;
  undefined4 local_1c;
  float local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_5 != '\0') &&
     (((param_6 == '\0' || (*(char *)(param_1 + 0x154) != '\0')) &&
      (*(longlong *)(param_1 + 0x1b0) != 0)))) {
    local_10 = 0;
    local_24 = *param_3;
    local_1c = *(undefined4 *)(param_3 + 1);
    local_2c = *(undefined8 *)(param_1 + 8);
    local_18 = (float)((double)param_4 + *(double *)(param_1 + 0x28));
    local_30[0] = param_2;
    FUN_1491dd62a(*(longlong *)(param_1 + 0x1b0),local_30,0);
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492541e6 FUN_1492541e6 body=109 status=ok
// SIG undefined FUN_1492541e6(void)

void FUN_1492541e6(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 unaff_RBP;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar4 = puVar2[4];
  uVar1 = *(undefined1 *)puVar2[0xc];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar6 = FUN_144828ac0(puVar2 + 0x14,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  FUN_1492542a8(*(undefined8 *)(param_1 + 0xc0),uVar3,uVar4,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff,uVar6);
  return;
}



// FUNCTION 14925425c FUN_14925425c body=75 status=ok
// SIG undefined FUN_14925425c(void)

void FUN_14925425c(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1492542a8(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x200,*(undefined1 *)(param_1 + 0x2c0),
                param_1 + 0x2c8);
  return;
}



// FUNCTION 1492542a8 FUN_1492542a8 body=226 status=ok
// SIG undefined FUN_1492542a8(void)

void FUN_1492542a8(longlong param_1,undefined8 *param_2,undefined8 *param_3,char param_4,
                  longlong param_5)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  undefined1 local_94 [4];
  undefined8 local_90;
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 != 0) {
    local_94[0] = 1;
    local_90 = *param_2;
    cVar2 = FUN_144828dba(param_5,local_94,lVar1);
    if (cVar2 != '\0') {
      uVar4 = 0xffffffff;
      if (*(ushort *)(param_5 + 0xc) != 0xffff) {
        uVar4 = (uint)*(ushort *)(param_5 + 0xc);
      }
      lVar3 = 0xc;
      puVar5 = local_88;
      if (param_4 == '\0') {
        for (; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar5 = *param_3;
          param_3 = param_3 + 1;
          puVar5 = puVar5 + 1;
        }
        local_a8 = 0;
        local_b0 = 0;
        local_b8 = 1;
        FUN_140122cc6(lVar1,uVar4,local_88,1);
      }
      else {
        for (; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar5 = *param_3;
          param_3 = param_3 + 1;
          puVar5 = puVar5 + 1;
        }
        local_a8 = 0;
        local_b0 = 0;
        local_b8 = 1;
        FUN_144831e8e(lVar1,uVar4,local_88,1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14925438c FUN_14925438c body=441 status=ok
// SIG undefined FUN_14925438c(void)

undefined8 FUN_14925438c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_318 [32];
  undefined1 local_2f8;
  longlong local_2e8 [2];
  longlong local_2d8 [2];
  undefined **local_2c8;
  undefined1 local_2b8 [480];
  undefined1 local_d8;
  undefined8 local_d4;
  undefined1 local_cc;
  undefined1 local_cb;
  undefined8 local_c8 [12];
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_60;
  undefined8 local_5c;
  undefined2 local_54;
  undefined4 local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_318;
  local_2c8 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(local_2b8);
  local_2c8 = &PTR_FUN_14bbf7590;
  local_68 = 0x3f800000;
  local_64 = 1;
  local_60 = 0;
  local_5c = 0;
  local_54 = 0xffff;
  local_50 = 0xffffffff;
  local_d4 = *(undefined8 *)(param_1 + 0x1f0);
  local_d8 = 1;
  local_cc = *(undefined1 *)(param_1 + 0x2c0);
  puVar2 = (undefined8 *)(param_1 + 0x200);
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_cb = 1;
  FUN_149254546(param_2);
  FUN_140056680(local_2d8,L"Item.Name");
  FUN_140056680(local_2e8,L"Bone");
  local_2f8 = 1;
  FUN_1490fb142(param_2,local_2e8,local_2d8,1);
  if (local_2e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_2d8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_2d8,L"Value");
  FUN_140056680(local_2e8,L"Transform");
  local_2f8 = 1;
  FUN_1490fb142(param_2,local_2e8,local_2d8,1);
  if (local_2e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_2d8[0] != 0) {
    FUN_1400020a8();
  }
  local_2c8 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(local_2b8);
  if ((local_38 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149254546 FUN_149254546 body=211 status=ok
// SIG undefined FUN_149254546(void)

undefined8 * FUN_149254546(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
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
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466fcf44();
  param_1[2] = uVar1;
  uVar1 = FUN_146702aee();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14925461a FUN_14925461a body=151 status=ok
// SIG undefined FUN_14925461a(void)

void FUN_14925461a(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 unaff_RBX;
  
  puVar4 = (undefined8 *)*param_2;
  uVar5 = *puVar4;
  uVar6 = puVar4[4];
  uVar2 = *(undefined1 *)puVar4[8];
  uVar1 = *(undefined4 *)puVar4[0xc];
  uVar3 = *(undefined1 *)puVar4[0x10];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar4 + 0x14,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  FUN_14925471e(*(undefined8 *)(param_1 + 0xc0),uVar5,uVar6,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff,uVar1,uVar3,uVar8);
  return;
}



// FUNCTION 1492546ba FUN_1492546ba body=99 status=ok
// SIG undefined FUN_1492546ba(void)

void FUN_1492546ba(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14925471e(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x200,*(undefined1 *)(param_1 + 0x220),
                *(undefined4 *)(param_1 + 0x224),*(undefined1 *)(param_1 + 0x228),param_1 + 0x230);
  return;
}



// FUNCTION 14925471e FUN_14925471e body=856 status=ok
// SIG undefined FUN_14925471e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14925471e(longlong param_1,undefined8 *param_2,undefined1 (*param_3) [16],char param_4,
                  float param_5,undefined1 param_6,longlong param_7)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  double *pdVar5;
  double *pdVar6;
  uint uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar13;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined1 local_160;
  undefined1 local_158;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_c4 [4];
  undefined8 local_c0;
  double local_b8 [13];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 != 0) {
    local_c4[0] = 1;
    local_c0 = *param_2;
    cVar3 = FUN_144828dba(param_7,local_c4,lVar1);
    if (cVar3 != '\0') {
      if (param_4 == '\0') {
        uVar7 = 0xffffffff;
        if (*(ushort *)(param_7 + 0xc) != 0xffff) {
          uVar7 = (uint)*(ushort *)(param_7 + 0xc);
        }
        FUN_144afced8(lVar1,local_128,uVar7,0);
        if (ABS(param_5 + -1.0) <= 1e-08) {
          local_128 = *param_3;
          local_118 = param_3[1];
        }
        else {
          if (1.0 <= param_5) {
            param_5 = 1.0;
          }
          if (param_5 <= 0.0) {
            param_5 = 0.0;
          }
          local_148 = local_128._0_4_;
          uStack_144 = local_128._4_4_;
          uStack_140 = local_128._8_4_;
          uStack_13c = local_128._12_4_;
          local_138 = local_118._0_4_;
          uStack_134 = local_118._4_4_;
          uStack_130 = local_118._8_4_;
          uStack_12c = local_118._12_4_;
          FUN_144a44da6(local_b8,&local_148,param_3,(double)param_5);
          dVar9 = local_b8[2] * local_b8[2] + local_b8[0] * local_b8[0];
          dVar13 = local_b8[3] * local_b8[3] + local_b8[1] * local_b8[1];
          auVar12._0_8_ = dVar9 + dVar13;
          auVar12._8_8_ = dVar9 + dVar13;
          uVar8 = -(ulonglong)(9.99999993922529e-09 <= auVar12._8_8_);
          auVar11 = sqrtpd(auVar12,auVar12);
          auVar15 = divpd(_DAT_149934d80,auVar11);
          auVar16._0_8_ = auVar15._0_8_ * local_b8[2];
          auVar16._8_8_ = auVar15._8_8_ * local_b8[3];
          uVar2 = (ulonglong)(local_b8[1] * auVar15._8_8_) & uVar8;
          auVar11._8_4_ = (int)uVar8;
          auVar11._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar12._0_8_);
          auVar11._12_4_ = (int)(uVar8 >> 0x20);
          local_118 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar16,auVar11);
          local_128._8_4_ = (int)uVar2;
          local_128._0_8_ =
               (ulonglong)(local_b8[0] * auVar15._0_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar12._0_8_);
          local_128._12_4_ = (int)(uVar2 >> 0x20);
        }
        uVar7 = 0xffffffff;
        if (*(ushort *)(param_7 + 0xc) != 0xffff) {
          uVar7 = (uint)*(ushort *)(param_7 + 0xc);
        }
        pdVar5 = (double *)local_128;
        pdVar6 = local_b8;
        for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
          *pdVar6 = *pdVar5;
          pdVar5 = pdVar5 + 1;
          pdVar6 = pdVar6 + 1;
        }
        local_158 = 0;
        local_160 = 0;
        local_168 = param_6;
        FUN_140122cc6(lVar1,uVar7,local_b8,0);
      }
      else if (param_4 == '\x01') {
        uVar7 = 0xffffffff;
        if (*(ushort *)(param_7 + 0xc) != 0xffff) {
          uVar7 = (uint)*(ushort *)(param_7 + 0xc);
        }
        FUN_14486750c(lVar1,local_128,uVar7,0);
        if (ABS(param_5 + -1.0) <= 1e-08) {
          local_128 = *param_3;
          local_118 = param_3[1];
        }
        else {
          if (1.0 <= param_5) {
            param_5 = 1.0;
          }
          if (param_5 <= 0.0) {
            param_5 = 0.0;
          }
          local_148 = local_128._0_4_;
          uStack_144 = local_128._4_4_;
          uStack_140 = local_128._8_4_;
          uStack_13c = local_128._12_4_;
          local_138 = local_118._0_4_;
          uStack_134 = local_118._4_4_;
          uStack_130 = local_118._8_4_;
          uStack_12c = local_118._12_4_;
          FUN_144a44da6(local_b8,&local_148,param_3,(double)param_5);
          dVar9 = local_b8[2] * local_b8[2] + local_b8[0] * local_b8[0];
          dVar13 = local_b8[3] * local_b8[3] + local_b8[1] * local_b8[1];
          auVar10._0_8_ = dVar9 + dVar13;
          auVar10._8_8_ = dVar9 + dVar13;
          uVar8 = -(ulonglong)(9.99999993922529e-09 <= auVar10._8_8_);
          auVar11 = sqrtpd(auVar10,auVar10);
          auVar11 = divpd(_DAT_149934d80,auVar11);
          auVar14._0_8_ = auVar11._0_8_ * local_b8[2];
          auVar14._8_8_ = auVar11._8_8_ * local_b8[3];
          uVar2 = (ulonglong)(local_b8[1] * auVar11._8_8_) & uVar8;
          auVar15._8_4_ = (int)uVar8;
          auVar15._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar10._0_8_);
          auVar15._12_4_ = (int)(uVar8 >> 0x20);
          local_118 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar14,auVar15);
          local_128._8_4_ = (int)uVar2;
          local_128._0_8_ =
               (ulonglong)(local_b8[0] * auVar11._0_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar10._0_8_);
          local_128._12_4_ = (int)(uVar2 >> 0x20);
        }
        uVar7 = 0xffffffff;
        if (*(ushort *)(param_7 + 0xc) != 0xffff) {
          uVar7 = (uint)*(ushort *)(param_7 + 0xc);
        }
        pdVar5 = (double *)local_128;
        pdVar6 = local_b8;
        for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
          *pdVar6 = *pdVar5;
          pdVar5 = pdVar5 + 1;
          pdVar6 = pdVar6 + 1;
        }
        local_158 = 0;
        local_160 = 0;
        local_168 = param_6;
        FUN_144831e8e(lVar1,uVar7,local_b8,0);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149254a78 FUN_149254a78 body=455 status=ok
// SIG undefined FUN_149254a78(void)

undefined8 FUN_149254a78(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_2d8 [32];
  undefined1 local_2b8;
  longlong local_2a8 [2];
  longlong local_298 [2];
  undefined **local_288 [2];
  undefined1 local_278 [480];
  undefined1 local_98;
  undefined8 local_94;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_60;
  undefined8 local_5c;
  undefined2 local_54;
  undefined4 local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_288[0] = &PTR_FUN_14bb775c0;
  FUN_1412ca278(local_278);
  local_288[0] = &PTR_FUN_14bbf7810;
  local_8b = 0;
  local_64 = 1;
  local_60 = 0;
  local_5c = 0;
  local_54 = 0xffff;
  local_50 = 0xffffffff;
  local_94 = *(undefined8 *)(param_1 + 0x1f0);
  local_98 = 1;
  local_8c = *(undefined1 *)(param_1 + 0x220);
  local_88 = *(undefined8 *)(param_1 + 0x200);
  uStack_80 = *(undefined8 *)(param_1 + 0x208);
  local_78 = *(undefined4 *)(param_1 + 0x210);
  uStack_74 = *(undefined4 *)(param_1 + 0x214);
  uStack_70 = *(undefined4 *)(param_1 + 0x218);
  uStack_6c = *(undefined4 *)(param_1 + 0x21c);
  local_68 = *(undefined4 *)(param_1 + 0x224);
  FUN_149254c40(param_2,local_288);
  FUN_140056680(local_298,L"Item.Name");
  FUN_140056680(local_2a8,L"Bone");
  local_2b8 = 1;
  FUN_1490fb142(param_2,local_2a8,local_298,1);
  if (local_2a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_298[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_298,L"Value");
  FUN_140056680(local_2a8,L"Rotation");
  local_2b8 = 1;
  FUN_1490fb142(param_2,local_2a8,local_298,1);
  if (local_2a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_298[0] != 0) {
    FUN_1400020a8();
  }
  local_288[0] = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(local_278);
  if ((local_38 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149254c40 FUN_149254c40 body=211 status=ok
// SIG undefined FUN_149254c40(void)

undefined8 * FUN_149254c40(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
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
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466fd288();
  param_1[2] = uVar1;
  uVar1 = FUN_14670322a();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149254d14 FUN_149254d14 body=168 status=ok
// SIG undefined FUN_149254d14(void)

void FUN_149254d14(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  
  puVar4 = (undefined8 *)*param_2;
  uVar5 = *puVar4;
  uVar6 = puVar4[4];
  uVar7 = puVar4[8];
  uVar2 = *(undefined1 *)puVar4[0xc];
  uVar1 = *(undefined4 *)puVar4[0x10];
  uVar3 = *(undefined1 *)puVar4[0x14];
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(puVar4 + 0x18,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  FUN_149254e32(*(undefined8 *)(param_1 + 0xc0),uVar5,uVar6,uVar7,uVar2,uVar1,uVar3,uVar9);
  return;
}



// FUNCTION 149254dc4 FUN_149254dc4 body=109 status=ok
// SIG undefined FUN_149254dc4(void)

void FUN_149254dc4(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149254e32(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x200,param_1 + 0x260,
                *(undefined1 *)(param_1 + 0x2c0),*(undefined4 *)(param_1 + 0x2c4),
                *(undefined1 *)(param_1 + 0x2c8),param_1 + 0x2d0);
  return;
}



// FUNCTION 149254e32 FUN_149254e32 body=623 status=ok
// SIG undefined FUN_149254e32(void)

void FUN_149254e32(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  char param_5,float param_6,undefined1 param_7,longlong param_8)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined1 local_140;
  undefined1 local_138;
  undefined8 local_128 [12];
  undefined1 local_c4 [4];
  undefined8 local_c0;
  undefined8 local_b8 [13];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 != 0) {
    local_c4[0] = 1;
    local_c0 = *param_2;
    cVar2 = FUN_144828dba(param_8,local_c4,lVar1);
    if (cVar2 != '\0') {
      if (param_5 == '\0') {
        puVar4 = param_4;
        if (ABS(param_6 + -1.0) <= 1e-08) {
          lVar3 = 0xc;
        }
        else {
          if (1.0 <= param_6) {
            param_6 = 1.0;
          }
          if (param_6 <= 0.0) {
            param_6 = 0.0;
          }
          uVar5 = 0xffffffff;
          if (*(ushort *)(param_8 + 0xc) != 0xffff) {
            uVar5 = (uint)*(ushort *)(param_8 + 0xc);
          }
          FUN_144afced8(lVar1,local_b8,uVar5,0);
          FUN_14915b8da(local_128,local_b8,param_3,param_6);
          lVar3 = 0xc;
          param_3 = local_128;
        }
        for (; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar4 = *param_3;
          param_3 = param_3 + 1;
          puVar4 = puVar4 + 1;
        }
        uVar5 = 0xffffffff;
        if (*(ushort *)(param_8 + 0xc) != 0xffff) {
          uVar5 = (uint)*(ushort *)(param_8 + 0xc);
        }
        puVar4 = local_b8;
        for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar4 = *param_4;
          param_4 = param_4 + 1;
          puVar4 = puVar4 + 1;
        }
        local_138 = 0;
        local_140 = 0;
        local_148 = param_7;
        FUN_140122cc6(lVar1,uVar5,local_b8,0);
      }
      else if (param_5 == '\x01') {
        puVar4 = param_4;
        if (ABS(param_6 + -1.0) <= 1e-08) {
          lVar3 = 0xc;
        }
        else {
          if (1.0 <= param_6) {
            param_6 = 1.0;
          }
          if (param_6 <= 0.0) {
            param_6 = 0.0;
          }
          uVar5 = 0xffffffff;
          if (*(ushort *)(param_8 + 0xc) != 0xffff) {
            uVar5 = (uint)*(ushort *)(param_8 + 0xc);
          }
          FUN_14486750c(lVar1,local_b8,uVar5,0);
          FUN_14915b8da(local_128,local_b8,param_3,param_6);
          lVar3 = 0xc;
          param_3 = local_128;
        }
        for (; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar4 = *param_3;
          param_3 = param_3 + 1;
          puVar4 = puVar4 + 1;
        }
        uVar5 = 0xffffffff;
        if (*(ushort *)(param_8 + 0xc) != 0xffff) {
          uVar5 = (uint)*(ushort *)(param_8 + 0xc);
        }
        puVar4 = local_b8;
        for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar4 = *param_4;
          param_4 = param_4 + 1;
          puVar4 = puVar4 + 1;
        }
        local_138 = 0;
        local_140 = 0;
        local_148 = param_7;
        FUN_144831e8e(lVar1,uVar5,local_b8,0);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492550a2 FUN_1492550a2 body=454 status=ok
// SIG undefined FUN_1492550a2(void)

undefined8 FUN_1492550a2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_328 [32];
  undefined1 local_308;
  longlong local_2f8 [2];
  longlong local_2e8 [2];
  undefined **local_2d8;
  undefined1 local_2c8 [480];
  undefined1 local_e8;
  undefined8 local_e4;
  undefined1 local_dc;
  undefined1 local_db;
  undefined8 local_d8 [12];
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_70;
  undefined8 local_6c;
  undefined2 local_64;
  undefined4 local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_328;
  local_2d8 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(local_2c8);
  local_2d8 = &PTR_FUN_14bbf7590;
  local_db = 0;
  local_74 = 1;
  local_70 = 0;
  local_6c = 0;
  local_64 = 0xffff;
  local_60 = 0xffffffff;
  local_e4 = *(undefined8 *)(param_1 + 0x1f0);
  local_e8 = 1;
  local_dc = *(undefined1 *)(param_1 + 0x2c0);
  puVar2 = (undefined8 *)(param_1 + 0x200);
  puVar3 = local_d8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_78 = *(undefined4 *)(param_1 + 0x2c4);
  FUN_14925526a(param_2);
  FUN_140056680(local_2e8,L"Item.Name");
  FUN_140056680(local_2f8,L"Bone");
  local_308 = 1;
  FUN_1490fb142(param_2,local_2f8,local_2e8,1);
  if (local_2f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_2e8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_2e8,L"Value");
  FUN_140056680(local_2f8,L"Transform");
  local_308 = 1;
  FUN_1490fb142(param_2,local_2f8,local_2e8,1);
  if (local_2f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_2e8[0] != 0) {
    FUN_1400020a8();
  }
  local_2d8 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(local_2c8);
  if ((local_40 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925526a FUN_14925526a body=211 status=ok
// SIG undefined FUN_14925526a(void)

undefined8 * FUN_14925526a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
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
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466fd5d4();
  param_1[2] = uVar1;
  uVar1 = FUN_146702aee();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14925533e FUN_14925533e body=151 status=ok
// SIG undefined FUN_14925533e(void)

void FUN_14925533e(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 unaff_RBX;
  
  puVar4 = (undefined8 *)*param_2;
  uVar5 = *puVar4;
  uVar6 = puVar4[4];
  uVar2 = *(undefined1 *)puVar4[8];
  uVar1 = *(undefined4 *)puVar4[0xc];
  uVar3 = *(undefined1 *)puVar4[0x10];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar4 + 0x14,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  FUN_149255442(*(undefined8 *)(param_1 + 0xc0),uVar5,uVar6,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff,uVar1,uVar3,uVar8);
  return;
}



// FUNCTION 1492553de FUN_1492553de body=99 status=ok
// SIG undefined FUN_1492553de(void)

void FUN_1492553de(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149255442(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x1f8,*(undefined1 *)(param_1 + 0x210),
                *(undefined4 *)(param_1 + 0x214),*(undefined1 *)(param_1 + 0x218),param_1 + 0x220);
  return;
}



// FUNCTION 149255442 FUN_149255442 body=716 status=ok
// SIG undefined FUN_149255442(void)

void FUN_149255442(longlong param_1,undefined8 *param_2,double *param_3,char param_4,float param_5,
                  undefined1 param_6,longlong param_7)

{
  longlong lVar1;
  double dVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  double dVar8;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined1 local_140;
  undefined1 local_138;
  undefined8 local_128 [4];
  undefined1 local_108 [16];
  double local_f8;
  undefined8 uStack_f0;
  undefined1 local_c4 [4];
  undefined8 local_c0;
  undefined8 local_b8 [13];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 != 0) {
    local_c4[0] = 1;
    local_c0 = *param_2;
    cVar3 = FUN_144828dba(param_7,local_c4,lVar1);
    if (cVar3 != '\0') {
      if (param_4 == '\0') {
        uVar7 = 0xffffffff;
        if (*(ushort *)(param_7 + 0xc) != 0xffff) {
          uVar7 = (uint)*(ushort *)(param_7 + 0xc);
        }
        FUN_144afced8(lVar1,local_128,uVar7,0);
        if (ABS(param_5 + -1.0) <= 1e-08) {
          dVar2 = *param_3;
          dVar8 = param_3[1];
          local_f8 = param_3[2];
        }
        else {
          if (1.0 <= param_5) {
            param_5 = 1.0;
          }
          if (param_5 <= 0.0) {
            param_5 = 0.0;
          }
          dVar2 = (double)param_5;
          local_f8 = (param_3[2] - local_f8) * dVar2 + local_f8;
          dVar8 = (param_3[1] - (double)local_108._8_8_) * dVar2 + (double)local_108._8_8_;
          dVar2 = (*param_3 - (double)local_108._0_8_) * dVar2 + (double)local_108._0_8_;
        }
        local_108._8_4_ = SUB84(dVar8,0);
        local_108._0_8_ = dVar2;
        local_108._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        uStack_f0 = 0;
        uVar7 = 0xffffffff;
        if (*(ushort *)(param_7 + 0xc) != 0xffff) {
          uVar7 = (uint)*(ushort *)(param_7 + 0xc);
        }
        puVar5 = local_128;
        puVar6 = local_b8;
        for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        local_138 = 0;
        local_140 = 0;
        local_148 = param_6;
        FUN_140122cc6(lVar1,uVar7,local_b8,0);
      }
      else if (param_4 == '\x01') {
        uVar7 = 0xffffffff;
        if (*(ushort *)(param_7 + 0xc) != 0xffff) {
          uVar7 = (uint)*(ushort *)(param_7 + 0xc);
        }
        FUN_14486750c(lVar1,local_128,uVar7,0);
        if (ABS(param_5 + -1.0) <= 1e-08) {
          dVar2 = *param_3;
          dVar8 = param_3[1];
          local_f8 = param_3[2];
        }
        else {
          if (1.0 <= param_5) {
            param_5 = 1.0;
          }
          if (param_5 <= 0.0) {
            param_5 = 0.0;
          }
          dVar2 = (double)param_5;
          local_f8 = (param_3[2] - local_f8) * dVar2 + local_f8;
          dVar8 = (param_3[1] - (double)local_108._8_8_) * dVar2 + (double)local_108._8_8_;
          dVar2 = (*param_3 - (double)local_108._0_8_) * dVar2 + (double)local_108._0_8_;
        }
        local_108._8_4_ = SUB84(dVar8,0);
        local_108._0_8_ = dVar2;
        local_108._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        uStack_f0 = 0;
        uVar7 = 0xffffffff;
        if (*(ushort *)(param_7 + 0xc) != 0xffff) {
          uVar7 = (uint)*(ushort *)(param_7 + 0xc);
        }
        puVar5 = local_128;
        puVar6 = local_b8;
        for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        local_138 = 0;
        local_140 = 0;
        local_148 = param_6;
        FUN_144831e8e(lVar1,uVar7,local_b8,0);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149255710 FUN_149255710 body=455 status=ok
// SIG undefined FUN_149255710(void)

undefined8 FUN_149255710(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_2c8 [32];
  undefined1 local_2a8;
  longlong local_298 [2];
  longlong local_288 [2];
  undefined **local_278 [2];
  undefined1 local_268 [480];
  undefined1 local_88;
  undefined8 local_84;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_278[0] = &PTR_FUN_14bb775c0;
  FUN_1412ca278(local_268);
  local_278[0] = &PTR_FUN_14bbf7c80;
  local_7b = 0;
  local_5c = 1;
  local_58 = 0;
  local_54 = 0;
  local_4c = 0xffff;
  local_48 = 0xffffffff;
  local_84 = *(undefined8 *)(param_1 + 0x1f0);
  local_88 = 1;
  local_7c = *(undefined1 *)(param_1 + 0x210);
  local_68 = *(undefined8 *)(param_1 + 0x208);
  local_78 = *(undefined8 *)(param_1 + 0x1f8);
  uStack_70 = *(undefined8 *)(param_1 + 0x200);
  local_60 = *(undefined4 *)(param_1 + 0x214);
  FUN_1492558d8(param_2,local_278);
  FUN_140056680(local_288,L"Item.Name");
  FUN_140056680(local_298,L"Bone");
  local_2a8 = 1;
  FUN_1490fb142(param_2,local_298,local_288,1);
  if (local_298[0] != 0) {
    FUN_1400020a8();
  }
  if (local_288[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_288,L"Value");
  FUN_140056680(local_298,L"Translation");
  local_2a8 = 1;
  FUN_1490fb142(param_2,local_298,local_288,1);
  if (local_298[0] != 0) {
    FUN_1400020a8();
  }
  if (local_288[0] != 0) {
    FUN_1400020a8();
  }
  local_278[0] = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(local_268);
  if ((local_38 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492558d8 FUN_1492558d8 body=211 status=ok
// SIG undefined FUN_1492558d8(void)

undefined8 * FUN_1492558d8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
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
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466fd972();
  param_1[2] = uVar1;
  uVar1 = FUN_146702e8c();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 1492559ac FUN_1492559ac body=90 status=ok
// SIG undefined FUN_1492559ac(void)

void FUN_1492559ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)*param_2;
  uVar2 = *puVar1;
  uVar3 = puVar1[4];
  lVar4 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar5 = FUN_144828ac0(puVar1 + 8,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar4 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar4 * 0x14));
  FUN_149255a7c(*(undefined8 *)(param_1 + 0xc0),uVar2,uVar3,uVar5);
  return;
}



// FUNCTION 149255a06 FUN_149255a06 body=117 status=ok
// SIG undefined FUN_149255a06(void)

void FUN_149255a06(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_149255a7c(local_1f8,param_1 + 8,param_1 + 0x10,param_1 + 0x20);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149255a7c FUN_149255a7c body=182 status=ok
// SIG undefined FUN_149255a7c(void)

void FUN_149255a7c(longlong param_1,undefined8 *param_2,undefined4 *param_3,longlong param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0x3f800000;
  lVar6 = *(longlong *)(param_1 + 0x1b0);
  if (lVar6 != 0) {
    local_2c[0] = 4;
    local_28 = *param_2;
    cVar5 = FUN_144828dba(param_4,local_2c,lVar6);
    if (cVar5 != '\0') {
      uVar1 = *(ushort *)(param_4 + 0xc);
      if ((((uVar1 == 0xffff) ||
           (*(uint *)(lVar6 + 0xc0) == (uint)uVar1 ||
            (int)*(uint *)(lVar6 + 0xc0) < (int)(uint)uVar1)) ||
          (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0xb8) + (ulonglong)(uint)uVar1 * 8),
          lVar6 == 0)) || (*(char *)(lVar6 + 0x10) != '\x04')) {
        lVar6 = 0;
      }
      uVar2 = *(undefined4 *)(lVar6 + 0x34c);
      uVar3 = *(undefined4 *)(lVar6 + 0x350);
      uVar4 = *(undefined4 *)(lVar6 + 0x354);
      *param_3 = *(undefined4 *)(lVar6 + 0x348);
      param_3[1] = uVar2;
      param_3[2] = uVar3;
      param_3[3] = uVar4;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149255b36 FUN_149255b36 body=90 status=ok
// SIG undefined FUN_149255b36(void)

void FUN_149255b36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)*param_2;
  uVar2 = *puVar1;
  uVar3 = puVar1[4];
  lVar4 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar5 = FUN_144828ac0(puVar1 + 8,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar4 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar4 * 0x14));
  FUN_149255bce(*(undefined8 *)(param_1 + 0xc0),uVar2,uVar3,uVar5);
  return;
}



// FUNCTION 149255b90 FUN_149255b90 body=61 status=ok
// SIG undefined FUN_149255b90(void)

void FUN_149255b90(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149255bce(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x1f8,param_1 + 0x208);
  return;
}



// FUNCTION 149255bce FUN_149255bce body=171 status=ok
// SIG undefined FUN_149255bce(void)

void FUN_149255bce(longlong param_1,undefined8 *param_2,undefined4 *param_3,longlong param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar6 = *(longlong *)(param_1 + 0x1b0);
  if (lVar6 != 0) {
    local_2c[0] = 4;
    local_28 = *param_2;
    cVar5 = FUN_144828dba(param_4,local_2c,lVar6);
    if (cVar5 != '\0') {
      uVar1 = *(ushort *)(param_4 + 0xc);
      if ((((uVar1 == 0xffff) ||
           (*(uint *)(lVar6 + 0xc0) == (uint)uVar1 ||
            (int)*(uint *)(lVar6 + 0xc0) < (int)(uint)uVar1)) ||
          (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0xb8) + (ulonglong)(uint)uVar1 * 8),
          lVar6 == 0)) || (*(char *)(lVar6 + 0x10) != '\x04')) {
        lVar6 = 0;
      }
      uVar2 = param_3[1];
      uVar3 = param_3[2];
      uVar4 = param_3[3];
      *(undefined4 *)(lVar6 + 0x348) = *param_3;
      *(undefined4 *)(lVar6 + 0x34c) = uVar2;
      *(undefined4 *)(lVar6 + 0x350) = uVar3;
      *(undefined4 *)(lVar6 + 0x354) = uVar4;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149255c8e FUN_149255c8e body=90 status=ok
// SIG undefined FUN_149255c8e(void)

void FUN_149255c8e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)*param_2;
  uVar2 = *puVar1;
  uVar3 = puVar1[4];
  lVar4 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar5 = FUN_144828ac0(puVar1 + 8,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar4 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar4 * 0x14));
  FUN_149255d5e(*(undefined8 *)(param_1 + 0xc0),uVar2,uVar3,uVar5);
  return;
}



// FUNCTION 149255ce8 FUN_149255ce8 body=117 status=ok
// SIG undefined FUN_149255ce8(void)

void FUN_149255ce8(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_149255d5e(local_1f8,param_1 + 8,param_1 + 0x10,param_1 + 0x20);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149255d5e FUN_149255d5e body=209 status=ok
// SIG undefined FUN_149255d5e(void)

void FUN_149255d5e(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) < 0) {
    FUN_14920a7da(param_3,0);
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    local_34[0] = 4;
    local_30 = *param_2;
    cVar1 = FUN_144828dba(param_4,local_34,*(longlong *)(param_1 + 0x1b0));
    if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149255e44 FUN_149255e44 body=143 status=ok
// SIG undefined FUN_149255e44(void)

void FUN_149255e44(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)*param_2;
  uVar2 = *puVar1;
  puVar3 = (undefined8 *)puVar1[4];
  lVar4 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar5 = FUN_144828ac0(puVar1 + 8,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar4 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar4 * 0x14));
  local_30 = *puVar3;
  local_28 = *(undefined4 *)(puVar3 + 1);
  FUN_149255f4a(*(undefined8 *)(param_1 + 0xc0),uVar2,&local_30,uVar5);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149255ed4 FUN_149255ed4 body=117 status=ok
// SIG undefined FUN_149255ed4(void)

void FUN_149255ed4(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x1f8);
  local_20 = *(undefined4 *)(param_1 + 0x200);
  FUN_149255f4a(param_1 + 0x10,param_1 + 0x1f0,&local_28,param_1 + 0x208);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149255f4a FUN_149255f4a body=320 status=ok
// SIG undefined FUN_149255f4a(void)

void FUN_149255f4a(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  undefined8 *puVar1;
  ushort uVar2;
  int iVar3;
  void *_Src;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = *(longlong *)(param_1 + 0x1b0);
  if (lVar5 != 0) {
    local_48 = CONCAT31(local_48._1_3_,4);
    uStack_44 = (undefined4)*param_2;
    uStack_40 = (undefined4)((ulonglong)*param_2 >> 0x20);
    cVar4 = FUN_144828dba(param_4,&local_48,lVar5);
    if (cVar4 != '\0') {
      uVar2 = *(ushort *)(param_4 + 0xc);
      if ((((uVar2 == 0xffff) ||
           (*(uint *)(lVar5 + 0xc0) == (uint)uVar2 ||
            (int)*(uint *)(lVar5 + 0xc0) < (int)(uint)uVar2)) ||
          (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + (ulonglong)(uint)uVar2 * 8),
          lVar5 == 0)) || (*(char *)(lVar5 + 0x10) != '\x04')) {
        lVar5 = 0;
      }
      puVar1 = (undefined8 *)(lVar5 + 0x388);
      if (*(int *)(lVar5 + 0x390) == *(int *)(param_3 + 1)) {
        cVar4 = FUN_1492109ce(*puVar1,*param_3);
        if (cVar4 != '\0') goto LAB_14925605b;
      }
      local_48 = (undefined4)*puVar1;
      uStack_44 = (undefined4)((ulonglong)*puVar1 >> 0x20);
      uStack_40 = (undefined4)*(undefined8 *)(lVar5 + 0x390);
      uStack_3c = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x390) >> 0x20);
      *puVar1 = *(undefined8 *)(lVar5 + 0x398);
      *(undefined8 *)(lVar5 + 0x390) = *(undefined8 *)(lVar5 + 0x3a0);
      *(undefined4 *)(lVar5 + 0x398) = local_48;
      *(undefined4 *)(lVar5 + 0x39c) = uStack_44;
      *(undefined4 *)(lVar5 + 0x3a0) = uStack_40;
      *(undefined4 *)(lVar5 + 0x3a4) = uStack_3c;
      iVar3 = *(int *)(param_3 + 1);
      _Src = (void *)*param_3;
      *(int *)(lVar5 + 0x390) = iVar3;
      if (iVar3 == 0 && *(int *)(lVar5 + 0x394) == 0) {
        *(undefined4 *)(lVar5 + 0x394) = 0;
      }
      else {
        FUN_149192186(puVar1,iVar3);
        if (iVar3 != 0) {
          memcpy((void *)*puVar1,_Src,(longlong)iVar3 * 0xc);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
  }
LAB_14925605b:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492560a4 FUN_1492560a4 body=106 status=ok
// SIG undefined FUN_1492560a4(void)

void FUN_1492560a4(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 unaff_RBP;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar4 = puVar2[4];
  uVar1 = *(undefined1 *)puVar2[8];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar6 = FUN_144828ac0(puVar2 + 0xc,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  FUN_14925615a(*(undefined8 *)(param_1 + 0xc0),uVar3,uVar4,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff,uVar6);
  return;
}



// FUNCTION 14925610e FUN_14925610e body=75 status=ok
// SIG undefined FUN_14925610e(void)

void FUN_14925610e(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14925615a(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x200,*(undefined1 *)(param_1 + 0x260),
                param_1 + 0x268);
  return;
}



// FUNCTION 14925615a FUN_14925615a body=281 status=ok
// SIG undefined FUN_14925615a(void)

void FUN_14925615a(longlong param_1,undefined8 *param_2,undefined8 param_3,char param_4,
                  longlong param_5)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined1 local_44 [4];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  if (lVar2 != 0) {
    local_44[0] = 4;
    local_40 = *param_2;
    cVar3 = FUN_144828dba(param_5,local_44,lVar2);
    if (cVar3 != '\0') {
      uVar1 = *(ushort *)(param_5 + 0xc);
      if ((((uVar1 == 0xffff) ||
           (*(uint *)(lVar2 + 0xc0) == (uint)uVar1 ||
            (int)*(uint *)(lVar2 + 0xc0) < (int)(uint)uVar1)) ||
          (lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0xb8) + (ulonglong)(uint)uVar1 * 8),
          lVar4 == 0)) || (*(char *)(lVar4 + 0x10) != '\x04')) {
        lVar4 = 0;
      }
      local_50 = 0;
      local_58 = 0;
      local_60 = 0;
      local_68 = 1;
      FUN_1491de4e6(lVar2,lVar4,param_3,(param_4 == '\x01') * '\x02' + '\x01');
      local_50 = 0;
      local_58 = 0;
      local_60 = 0;
      local_68 = 1;
      FUN_1491de4e6(lVar2,lVar4,param_3,(param_4 == '\x01') * '\x02');
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149256276 FUN_149256276 body=90 status=ok
// SIG undefined FUN_149256276(void)

void FUN_149256276(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)*param_2;
  uVar2 = *puVar1;
  uVar3 = puVar1[4];
  lVar4 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar5 = FUN_144828ac0(puVar1 + 8,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar4 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar4 * 0x14));
  FUN_149256346(*(undefined8 *)(param_1 + 0xc0),uVar2,uVar3,uVar5);
  return;
}



// FUNCTION 1492562d0 FUN_1492562d0 body=117 status=ok
// SIG undefined FUN_1492562d0(void)

void FUN_1492562d0(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_149256346(local_1f8,param_1 + 8,param_1 + 0x10,param_1 + 0x70);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149256346 FUN_149256346 body=195 status=ok
// SIG undefined FUN_149256346(void)

void FUN_149256346(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  ushort uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = *(longlong *)(param_1 + 0x1b0);
  if (lVar3 != 0) {
    local_88[0] = 4;
    local_88._4_8_ = *param_2;
    cVar2 = FUN_144828dba(param_4,local_88,lVar3);
    if (cVar2 != '\0') {
      uVar1 = *(ushort *)(param_4 + 0xc);
      if ((((uVar1 == 0xffff) ||
           (*(uint *)(lVar3 + 0xc0) == (uint)uVar1 ||
            (int)*(uint *)(lVar3 + 0xc0) < (int)(uint)uVar1)) ||
          (lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0xb8) + (ulonglong)(uint)uVar1 * 8),
          lVar5 == 0)) || (*(char *)(lVar5 + 0x10) != '\x04')) {
        lVar5 = 0;
      }
      FUN_14449ed30(lVar3,local_88,lVar5,1);
      puVar4 = (undefined8 *)local_88;
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *param_3 = *puVar4;
        puVar4 = puVar4 + 1;
        param_3 = param_3 + 1;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925640a FUN_14925640a body=90 status=ok
// SIG undefined FUN_14925640a(void)

void FUN_14925640a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)*param_2;
  uVar2 = *puVar1;
  uVar3 = puVar1[4];
  lVar4 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar5 = FUN_144828ac0(puVar1 + 8,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar4 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar4 * 0x14));
  FUN_1492564a2(*(undefined8 *)(param_1 + 0xc0),uVar2,uVar3,uVar5);
  return;
}



// FUNCTION 149256464 FUN_149256464 body=61 status=ok
// SIG undefined FUN_149256464(void)

void FUN_149256464(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1492564a2(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x200,param_1 + 0x260);
  return;
}



// FUNCTION 1492564a2 FUN_1492564a2 body=189 status=ok
// SIG undefined FUN_1492564a2(void)

void FUN_1492564a2(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined1 local_2c [4];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  if (lVar2 != 0) {
    local_2c[0] = 4;
    local_28 = *param_2;
    cVar3 = FUN_144828dba(param_4,local_2c,lVar2);
    if (cVar3 != '\0') {
      uVar1 = *(ushort *)(param_4 + 0xc);
      if ((((uVar1 == 0xffff) ||
           (*(uint *)(lVar2 + 0xc0) == (uint)uVar1 ||
            (int)*(uint *)(lVar2 + 0xc0) < (int)(uint)uVar1)) ||
          (lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0xb8) + (ulonglong)(uint)uVar1 * 8),
          lVar4 == 0)) || (*(char *)(lVar4 + 0x10) != '\x04')) {
        lVar4 = 0;
      }
      local_38 = 0;
      local_40 = 0;
      local_48 = 0;
      FUN_1444a525c(lVar2,lVar4,param_3,0);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149256562 FUN_149256562 body=90 status=ok
// SIG undefined FUN_149256562(void)

void FUN_149256562(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)*param_2;
  uVar2 = *puVar1;
  uVar3 = puVar1[4];
  lVar4 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar5 = FUN_144828ac0(puVar1 + 8,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar4 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar4 * 0x14));
  FUN_149256602(*(undefined8 *)(param_1 + 0xc0),uVar2,uVar3,uVar5);
  return;
}



// FUNCTION 1492565c4 FUN_1492565c4 body=61 status=ok
// SIG undefined FUN_1492565c4(void)

void FUN_1492565c4(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149256602(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x1f8,param_1 + 0x200);
  return;
}



// FUNCTION 149256602 FUN_149256602 body=240 status=ok
// SIG undefined FUN_149256602(void)

void FUN_149256602(longlong param_1,undefined8 *param_2,undefined1 *param_3,longlong param_4)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  undefined1 local_b0 [4];
  undefined8 local_ac;
  undefined1 local_a4;
  undefined8 local_a3;
  undefined8 uStack_9b;
  undefined8 local_93;
  undefined8 uStack_8b;
  undefined8 local_83;
  undefined8 uStack_7b;
  undefined8 local_73;
  undefined8 uStack_6b;
  undefined8 local_63;
  undefined8 uStack_5b;
  undefined8 local_53;
  undefined8 uStack_4b;
  undefined8 uStack_43;
  undefined7 uStack_3b;
  undefined1 local_34;
  undefined7 uStack_33;
  undefined8 uStack_2c;
  undefined1 local_24;
  undefined2 local_23;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  if (lVar2 != 0) {
    local_b0[0] = 4;
    local_ac = *param_2;
    cVar3 = FUN_144828dba(param_4,local_b0,lVar2);
    if (cVar3 != '\0') {
      local_a4 = *param_3;
      uStack_33 = 0;
      uStack_2c = 0;
      uStack_43 = 0;
      uStack_3b = 0;
      local_34 = 0;
      local_53 = 0;
      uStack_4b = 0;
      local_63 = 0;
      uStack_5b = 0;
      local_73 = 0;
      uStack_6b = 0;
      local_83 = 0;
      uStack_7b = 0;
      local_93 = 0;
      uStack_8b = 0;
      local_a3 = 0;
      uStack_9b = 0;
      local_21 = 0;
      local_23 = 0;
      uVar1 = *(ushort *)(param_4 + 0xc);
      uVar4 = 0xffffffff;
      if (uVar1 != 0xffff) {
        uVar4 = (uint)uVar1;
      }
      local_24 = 1;
      local_c0 = 0;
      local_c8 = 0;
      FUN_14918c0c6(lVar2,uVar4,&local_a4,CONCAT71((uint7)(byte)(uVar1 >> 8),1));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492566fa FUN_1492566fa body=133 status=ok
// SIG undefined FUN_1492566fa(void)

void FUN_1492566fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = *(undefined8 **)*param_2;
  lVar2 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar3 = FUN_144828ac0((longlong *)*param_2 + 4,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar2 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar2 * 0x14));
  local_28 = *puVar1;
  local_20 = *(undefined4 *)(puVar1 + 1);
  FUN_1492567ee(*(undefined8 *)(param_1 + 0xc0),&local_28,uVar3);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149256780 FUN_149256780 body=109 status=ok
// SIG undefined FUN_149256780(void)

void FUN_149256780(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x1f0);
  local_20 = *(undefined4 *)(param_1 + 0x1f8);
  FUN_1492567ee(param_1 + 0x10,&local_28,param_1 + 0x200);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492567ee FUN_1492567ee body=175 status=ok
// SIG undefined FUN_1492567ee(void)

void FUN_1492567ee(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x1b0) != 0) &&
     (FUN_14924b442(param_3,(int)param_2[1]), 0 < (int)param_2[1])) {
    lVar3 = 0;
    lVar1 = 0;
    lVar2 = 0;
    do {
      local_41 = *(undefined1 *)(*param_2 + 8 + lVar1);
      FUN_149256602(param_1,*param_2 + lVar1,&local_41,*param_3 + lVar3);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0xc;
      lVar3 = lVar3 + 0x20;
    } while (lVar2 < (int)param_2[1]);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14925689e FUN_14925689e body=114 status=ok
// SIG undefined FUN_14925689e(void)

void FUN_14925689e(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar1 = *(undefined4 *)puVar2[4];
  uVar4 = puVar2[8];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar6 = FUN_144828ac0(puVar2 + 0xc,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  FUN_14925695c(*(undefined8 *)(param_1 + 0xc0),uVar3,uVar1,uVar4,uVar6);
  return;
}



// FUNCTION 149256910 FUN_149256910 body=76 status=ok
// SIG undefined FUN_149256910(void)

void FUN_149256910(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14925695c(param_1 + 0x10,param_1 + 0x1f0,*(undefined4 *)(param_1 + 0x1f8),param_1 + 0x1fc,
                param_1 + 0x200);
  return;
}


