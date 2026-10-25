// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146fdd514 FUN_146fdd514 body=110 status=ok
// SIG undefined FUN_146fdd514(void)

undefined8 FUN_146fdd514(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  if (DAT_14c99cffc == param_1) {
    FUN_146fdd6a6(&local_28);
    uVar1 = 1;
  }
  else {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = param_2[4];
    uStack_34 = param_2[5];
    uStack_30 = param_2[6];
    uStack_2c = param_2[7];
    uVar1 = FUN_146fdd622();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdd584 FUN_146fdd584 body=156 status=ok
// SIG undefined FUN_146fdd584(void)

void FUN_146fdd584(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0x3ff0000000000000;
  lVar1 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) == 0) {
    puVar10 = (undefined8 *)(lVar1 + 0x40);
  }
  else if (*(int *)(lVar1 + 8) == 1) {
    puVar10 = (undefined8 *)
              FUN_146fcc73a(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + 0x38),0,&local_38);
  }
  else {
    puVar10 = &local_38;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  uVar3 = *(undefined4 *)puVar10;
  uVar4 = *(undefined4 *)((longlong)puVar10 + 4);
  uVar5 = *(undefined4 *)(puVar10 + 1);
  uVar6 = *(undefined4 *)((longlong)puVar10 + 0xc);
  uVar7 = *(undefined4 *)((longlong)puVar10 + 0x14);
  uVar8 = *(undefined4 *)(puVar10 + 3);
  uVar9 = *(undefined4 *)((longlong)puVar10 + 0x1c);
  puVar2[4] = *(undefined4 *)(puVar10 + 2);
  puVar2[5] = uVar7;
  puVar2[6] = uVar8;
  puVar2[7] = uVar9;
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdd622 FUN_146fdd622 body=131 status=ok
// SIG undefined FUN_146fdd622(void)

ulonglong FUN_146fdd622(longlong param_1,undefined4 *param_2)

{
  undefined8 unaff_RBX;
  undefined7 uVar2;
  ulonglong uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_48 = param_2[4];
  uStack_44 = param_2[5];
  uStack_40 = param_2[6];
  uStack_3c = param_2[7];
  uVar2 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (DAT_14c99d004 == param_1) {
    FUN_146fdd738(&local_58);
    uVar1 = CONCAT71(uVar2,1);
  }
  else {
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    local_28 = param_2[4];
    uStack_24 = param_2[5];
    uStack_20 = param_2[6];
    uStack_1c = param_2[7];
    uVar1 = CONCAT71(uVar2,DAT_14c99d00c == param_1);
    if (DAT_14c99d00c == param_1) {
      FUN_146fdd7dc(&local_38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdd6a6 FUN_146fdd6a6 body=144 status=ok
// SIG undefined FUN_146fdd6a6(void)

void FUN_146fdd6a6(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  double *pdVar3;
  float *pfVar4;
  undefined1 auStack_38 [32];
  float local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18[0] = 0.0;
  local_18[1] = 0.0;
  lVar2 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar2 + 8) == 0) {
    pfVar4 = (float *)(lVar2 + 0x38);
  }
  else if (*(int *)(lVar2 + 8) == 1) {
    pfVar4 = (float *)FUN_146fcc91a(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar2 + 0x38),0,
                                    local_18);
  }
  else {
    pfVar4 = local_18;
  }
  pdVar3 = *(double **)(param_1 + 0x18);
  fVar1 = pfVar4[1];
  *pdVar3 = (double)*pfVar4;
  pdVar3[1] = (double)fVar1;
  pdVar3[2] = 0.0;
  pdVar3[3] = 0.0;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdd738 FUN_146fdd738 body=163 status=ok
// SIG undefined FUN_146fdd738(void)

void FUN_146fdd738(longlong param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  double *pdVar4;
  float *pfVar5;
  undefined1 auStack_48 [40];
  float local_20 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20[2] = 0.0;
  local_20[0] = 0.0;
  local_20[1] = 0.0;
  lVar3 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar3 + 8) == 0) {
    pfVar5 = (float *)(lVar3 + 0x38);
  }
  else if (*(int *)(lVar3 + 8) == 1) {
    pfVar5 = (float *)FUN_146fcca8a(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar3 + 0x38),0,
                                    local_20);
  }
  else {
    pfVar5 = local_20;
  }
  pdVar4 = *(double **)(param_1 + 0x18);
  fVar1 = pfVar5[2];
  fVar2 = pfVar5[1];
  *pdVar4 = (double)*pfVar5;
  pdVar4[1] = (double)fVar2;
  pdVar4[2] = (double)fVar1;
  pdVar4[3] = 0.0;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdd7dc FUN_146fdd7dc body=163 status=ok
// SIG undefined FUN_146fdd7dc(void)

void FUN_146fdd7dc(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  double *pdVar5;
  float *pfVar6;
  undefined1 auStack_48 [32];
  float local_28 [6];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0.0;
  local_28[1] = 0.0;
  local_28[2] = 0.0;
  local_28[3] = 1.0;
  lVar4 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar4 + 8) == 0) {
    pfVar6 = (float *)(lVar4 + 0x40);
  }
  else if (*(int *)(lVar4 + 8) == 1) {
    pfVar6 = (float *)FUN_146fccbfe(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar4 + 0x38),0,
                                    local_28);
  }
  else {
    pfVar6 = local_28;
  }
  pdVar5 = *(double **)(param_1 + 0x18);
  fVar1 = pfVar6[3];
  fVar2 = pfVar6[2];
  fVar3 = pfVar6[1];
  *pdVar5 = (double)*pfVar6;
  pdVar5[1] = (double)fVar3;
  pdVar5[2] = (double)fVar2;
  pdVar5[3] = (double)fVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdd8c8 FUN_146fdd8c8 body=164 status=ok
// SIG undefined FUN_146fdd8c8(void)

void FUN_146fdd8c8(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  puVar1 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2c8))(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdd96e FUN_146fdd96e body=179 status=ok
// SIG undefined FUN_146fdd96e(void)

void FUN_146fdd96e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  uVar1 = FUN_146fdda22(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdda22 FUN_146fdda22 body=243 status=ok
// SIG undefined FUN_146fdda22(void)

longlong FUN_146fdda22(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  iVar4 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar4 = 0;
  }
  FUN_1446f82e2(&local_18,iVar4,*param_2,1);
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    uVar1 = (uint)((ulonglong)local_18 >> 0x10);
    uVar3 = (uint)local_18 & 0xffff;
    lVar2 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x68);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x70) - 1U &
                             (int)((ulonglong)local_18 >> 0x20) + ((uint)local_18 << 0x10 | uVar3) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar4 * 0x18);
        if (*plVar5 == local_18) {
          if ((plVar5 != (longlong *)0x0) && (plVar5 = plVar5 + 1, plVar5 != (longlong *)0x0))
          goto LAB_146fddaf6;
          break;
        }
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
  }
  lVar2 = FUN_145908f08();
  plVar5 = (longlong *)(lVar2 + 0x110);
  if (*(longlong *)(lVar2 + 0x110) == 0) {
    FUN_140aa6c08(lVar2);
  }
LAB_146fddaf6:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return *plVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fddbcc FUN_146fddbcc body=160 status=ok
// SIG undefined FUN_146fddbcc(void)

void FUN_146fddbcc(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2c0))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fddc6e FUN_146fddc6e body=158 status=ok
// SIG undefined FUN_146fddc6e(void)

void FUN_146fddc6e(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2e0))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fddd0e FUN_146fddd0e body=158 status=ok
// SIG undefined FUN_146fddd0e(void)

void FUN_146fddd0e(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2d8))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdddae FUN_146fdddae body=158 status=ok
// SIG undefined FUN_146fdddae(void)

void FUN_146fdddae(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2e8))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdde58 FUN_146fdde58 body=95 status=ok
// SIG undefined FUN_146fdde58(void)

undefined8 FUN_146fdde58(longlong param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x98) != *(int *)(param_1 + 0xc4)) {
    lVar3 = param_1 + 200;
    if (*(longlong *)(param_1 + 0xd0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xd0);
    }
    uVar1 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0xd8) - 1U & param_2) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)(*(longlong *)(param_1 + 0x90) + (longlong)(int)uVar1 * 0x18);
        if (*puVar2 == param_2) goto LAB_146fdde68;
        uVar1 = puVar2[4];
      } while (uVar1 != 0xffffffff);
    }
  }
  puVar2 = (uint *)0x0;
LAB_146fdde68:
  return *(undefined8 *)(puVar2 + 2);
}



// FUNCTION 146fddeb8 FUN_146fddeb8 body=35 status=ok
// SIG undefined FUN_146fddeb8(void)

undefined8 * FUN_146fddeb8(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_146fddedc(param_1 + 0x90);
  return param_2;
}



// FUNCTION 146fddedc FUN_146fddedc body=713 status=ok
// SIG undefined FUN_146fddedc(void)

void FUN_146fddedc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_14480809c(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar5 != 0) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar5);
    }
    FUN_146b7f620(&local_98,uVar5);
    iVar4 = 1;
    if (3 < uVar5) {
      uVar5 = (uVar5 | 1) + 0xe;
      iVar4 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      iVar4 = 1 << ((byte)iVar4 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar4)) {
      local_50 = iVar4;
      FUN_1449809d4();
    }
  }
  iVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
    FUN_14480809c(param_2);
  }
  local_b0 = param_1 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_1;
  if (iStack_a4 < (int)local_b0[3]) {
    do {
      lVar1 = *local_e0;
      lVar2 = (longlong)iStack_c4;
      if ((int)uStack_90 != local_64) {
        uVar5 = *(uint *)(lVar1 + lVar2 * 0x18);
        puVar3 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar3 = local_60;
        }
        for (iVar4 = *(int *)(puVar3 + (ulonglong)(local_50 - 1U & uVar5) * 4); iVar4 != -1;
            iVar4 = *(int *)(local_98 + (longlong)iVar4 * 0xc + 4)) {
          if (*(uint *)(local_98 + (longlong)iVar4 * 0xc) == uVar5) goto LAB_146fde087;
        }
      }
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_1447808da(param_2,iVar4);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar4 * 4) = *(undefined4 *)(lVar2 * 0x18 + lVar1);
      FUN_144980568(&local_98,&local_b8,(longlong)iStack_c4 * 0x18 + *local_e0,0);
LAB_146fde087:
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < (int)local_d0[3]);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fde1a8 FUN_146fde1a8 body=41 status=ok
// SIG undefined FUN_146fde1a8(void)

void FUN_146fde1a8(void)

{
  FUN_140033559(".\\Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h",0x53,
                L"Pure virtual not implemented (%s)",L"UClothingAssetBase::RefreshBoneMapping");
  return;
}



// FUNCTION 146fde1d2 FUN_146fde1d2 body=42 status=ok
// SIG undefined FUN_146fde1d2(void)

undefined8 FUN_146fde1d2(void)

{
  FUN_140033559(".\\Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h",0x57,
                L"Pure virtual not implemented (%s)",L"UClothingAssetBase::IsValidLod()");
  return 0;
}



// FUNCTION 146fde1fc FUN_146fde1fc body=42 status=ok
// SIG undefined FUN_146fde1fc(void)

undefined8 FUN_146fde1fc(void)

{
  FUN_140033559(".\\Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h",0x5b,
                L"Pure virtual not implemented (%s)",L"UClothingAssetBase::GetNumLods()");
  return 0;
}



// FUNCTION 146fde226 FUN_146fde226 body=41 status=ok
// SIG undefined FUN_146fde226(void)

void FUN_146fde226(void)

{
  FUN_140033559(".\\Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h",0x5f,
                L"Pure virtual not implemented (%s)",L"UClothingAssetBase::PostUpdateAllAssets()");
  return;
}



// FUNCTION 146fde250 FUN_146fde250 body=42 status=ok
// SIG undefined FUN_146fde250(void)

undefined8 FUN_146fde250(void)

{
  FUN_140033559("Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothConfigBase.h",0x1b,
                L"Pure virtual not implemented (%s)",L"UClothConfigBase::NeedsSelfCollisionData");
  return 0;
}



// FUNCTION 146fde27a FUN_146fde27a body=42 status=ok
// SIG undefined FUN_146fde27a(void)

undefined8 FUN_146fde27a(void)

{
  FUN_140033559("Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothConfigBase.h",0x1f,
                L"Pure virtual not implemented (%s)",L"UClothConfigBase::NeedsInverseMasses");
  return 0;
}



// FUNCTION 146fde2a4 FUN_146fde2a4 body=42 status=ok
// SIG undefined FUN_146fde2a4(void)

undefined8 FUN_146fde2a4(void)

{
  FUN_140033559("Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothConfigBase.h",0x23,
                L"Pure virtual not implemented (%s)",L"UClothConfigBase::NeedsNumInfluences");
  return 0;
}



// FUNCTION 146fde2ce FUN_146fde2ce body=42 status=ok
// SIG undefined FUN_146fde2ce(void)

undefined8 FUN_146fde2ce(void)

{
  FUN_140033559("Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothConfigBase.h",0x27,
                L"Pure virtual not implemented (%s)",L"UClothConfigBase::NeedsTethers");
  return 0;
}



// FUNCTION 146fde2f8 FUN_146fde2f8 body=43 status=ok
// SIG undefined FUN_146fde2f8(void)

undefined8 FUN_146fde2f8(void)

{
  FUN_140033559("Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothConfigBase.h",0x2b,
                L"Pure virtual not implemented (%s)",L"UClothConfigBase::GetSelfCollisionRadius");
  return 0;
}



// FUNCTION 146fde324 FUN_146fde324 body=42 status=ok
// SIG undefined FUN_146fde324(void)

undefined8 FUN_146fde324(void)

{
  FUN_140033559("Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothConfigBase.h",0x2f,
                L"Pure virtual not implemented (%s)",L"UClothConfigBase::TethersUseGeodesicDistance"
               );
  return 0;
}



// FUNCTION 146fde352 FUN_146fde352 body=42 status=ok
// SIG undefined FUN_146fde352(void)

undefined8 FUN_146fde352(void)

{
  FUN_140033559("Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingSimulationFactory.h",0x36,
                L"Pure virtual not implemented (%s)",L"UClothingSimulationFactory::CreateSimulation"
               );
  return 0;
}



// FUNCTION 146fde37c FUN_146fde37c body=41 status=ok
// SIG undefined FUN_146fde37c(void)

void FUN_146fde37c(void)

{
  FUN_140033559("Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingSimulationFactory.h",0x3a,
                L"Pure virtual not implemented (%s)",
                L"UClothingSimulationFactory::DestroySimulation");
  return;
}



// FUNCTION 146fde3a6 FUN_146fde3a6 body=42 status=ok
// SIG undefined FUN_146fde3a6(void)

undefined8 FUN_146fde3a6(void)

{
  FUN_140033559("Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingSimulationFactory.h",0x3f,
                L"Pure virtual not implemented (%s)",L"UClothingSimulationFactory::SupportsAsset");
  return 0;
}



// FUNCTION 146fde3d0 FUN_146fde3d0 body=42 status=ok
// SIG undefined FUN_146fde3d0(void)

undefined8 FUN_146fde3d0(void)

{
  FUN_140033559("Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingSimulationFactory.h",0x44,
                L"Pure virtual not implemented (%s)",
                L"UClothingSimulationFactory::SupportsRuntimeInteraction");
  return 0;
}



// FUNCTION 146fde3fa FUN_146fde3fa body=42 status=ok
// SIG undefined FUN_146fde3fa(void)

undefined8 FUN_146fde3fa(void)

{
  FUN_140033559("Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingSimulationFactory.h",0x49,
                L"Pure virtual not implemented (%s)",L"UClothingSimulationFactory::CreateInteractor"
               );
  return 0;
}



// FUNCTION 146fde424 FUN_146fde424 body=62 status=ok
// SIG undefined FUN_146fde424(void)

undefined8 * FUN_146fde424(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingSimulationFactory.h",0x4d,
                L"Pure virtual not implemented (%s)",
                L"UClothingSimulationFactory::GetClothConfigClasses");
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 146fde462 FUN_146fde462 body=42 status=ok
// SIG undefined FUN_146fde462(void)

undefined8 FUN_146fde462(void)

{
  FUN_140033559("Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingSimulationFactory.h",0x51,
                L"Pure virtual not implemented (%s)",
                L"UClothingSimulationFactory::GetWeightMapTargetEnum");
  return 0;
}



// FUNCTION 146fde48e FUN_146fde48e body=42 status=ok
// SIG undefined FUN_146fde48e(void)

undefined8 FUN_146fde48e(void)

{
  FUN_140033559("Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingSimulationInteractor.h",
                0x99,L"Pure virtual not implemented (%s)",
                L"UClothingSimulationInteractor::CreateClothingInteractor");
  return 0;
}



// FUNCTION 146fde4b8 FUN_146fde4b8 body=41 status=ok
// SIG undefined FUN_146fde4b8(void)

void FUN_146fde4b8(void)

{
  FUN_140033559("Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingSimulationInteractor.h",
                0x4a,L"Pure virtual not implemented (%s)",
                L"UClothingSimulationInteractor::PhysicsAssetUpdated");
  return;
}



// FUNCTION 146fde4e2 FUN_146fde4e2 body=41 status=ok
// SIG undefined FUN_146fde4e2(void)

void FUN_146fde4e2(void)

{
  FUN_140033559("Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingSimulationInteractor.h",
                0x4f,L"Pure virtual not implemented (%s)",
                L"UClothingSimulationInteractor::ClothConfigUpdated");
  return;
}



// FUNCTION 146fde50c FUN_146fde50c body=41 status=ok
// SIG undefined FUN_146fde50c(void)

void FUN_146fde50c(void)

{
  FUN_140033559("Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingSimulationInteractor.h",
                0x54,L"Pure virtual not implemented (%s)",
                L"UClothingSimulationInteractor::SetAnimDriveSpringStiffness");
  return;
}



// FUNCTION 146fde536 FUN_146fde536 body=41 status=ok
// SIG undefined FUN_146fde536(void)

void FUN_146fde536(void)

{
  FUN_140033559("Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingSimulationInteractor.h",
                0x59,L"Pure virtual not implemented (%s)",
                L"UClothingSimulationInteractor::EnableGravityOverride");
  return;
}



// FUNCTION 146fde560 FUN_146fde560 body=41 status=ok
// SIG undefined FUN_146fde560(void)

void FUN_146fde560(void)

{
  FUN_140033559("Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingSimulationInteractor.h",
                0x5e,L"Pure virtual not implemented (%s)",
                L"UClothingSimulationInteractor::DisableGravityOverride");
  return;
}



// FUNCTION 146fde58a FUN_146fde58a body=41 status=ok
// SIG undefined FUN_146fde58a(void)

void FUN_146fde58a(void)

{
  FUN_140033559("Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingSimulationInteractor.h",99
                ,L"Pure virtual not implemented (%s)",
                L"UClothingSimulationInteractor::SetNumIterations");
  return;
}



// FUNCTION 146fde5b4 FUN_146fde5b4 body=41 status=ok
// SIG undefined FUN_146fde5b4(void)

void FUN_146fde5b4(void)

{
  FUN_140033559("Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingSimulationInteractor.h",
                0x68,L"Pure virtual not implemented (%s)",
                L"UClothingSimulationInteractor::SetMaxNumIterations");
  return;
}



// FUNCTION 146fde5de FUN_146fde5de body=41 status=ok
// SIG undefined FUN_146fde5de(void)

void FUN_146fde5de(void)

{
  FUN_140033559("Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingSimulationInteractor.h",
                0x6d,L"Pure virtual not implemented (%s)",
                L"UClothingSimulationInteractor::SetNumSubsteps");
  return;
}



// FUNCTION 146fde632 FUN_146fde632 body=34 status=ok
// SIG undefined FUN_146fde632(void)

undefined8 FUN_146fde632(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 146fde6fc FUN_146fde6fc body=59 status=ok
// SIG undefined FUN_146fde6fc(void)

undefined8 FUN_146fde6fc(longlong *param_1)

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



// FUNCTION 146fde80a FUN_146fde80a body=59 status=ok
// SIG undefined FUN_146fde80a(void)

undefined8 FUN_146fde80a(longlong *param_1)

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



// FUNCTION 146fde8f0 FUN_146fde8f0 body=83 status=ok
// SIG undefined FUN_146fde8f0(void)

undefined1 FUN_146fde8f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[5];
      uVar8 = puVar1[6];
      uVar9 = puVar1[7];
      puVar2 = (undefined4 *)(param_2 + lVar10);
      puVar2[4] = puVar1[4];
      puVar2[5] = uVar7;
      puVar2[6] = uVar8;
      puVar2[7] = uVar9;
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      FUN_14054c6c4();
      lVar10 = lVar10 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146fde96c FUN_146fde96c body=59 status=ok
// SIG undefined FUN_146fde96c(void)

undefined8 FUN_146fde96c(longlong *param_1)

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



// FUNCTION 146fde9b2 FUN_146fde9b2 body=38 status=ok
// SIG undefined FUN_146fde9b2(void)

void FUN_146fde9b2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 146fdea6a FUN_146fdea6a body=81 status=ok
// SIG undefined FUN_146fdea6a(void)

undefined8 FUN_146fdea6a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      FUN_146fdec04(param_2 + -0x10,param_3 + -0x10);
      FUN_1405b70a4(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146fdeae4 FUN_146fdeae4 body=59 status=ok
// SIG undefined FUN_146fdeae4(void)

undefined8 FUN_146fdeae4(longlong *param_1)

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



// FUNCTION 146fdeb2a FUN_146fdeb2a body=34 status=ok
// SIG undefined FUN_146fdeb2a(void)

void FUN_146fdeb2a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_146fdeb9a(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146fdeb9a FUN_146fdeb9a body=58 status=ok
// SIG undefined FUN_146fdeb9a(void)

void FUN_146fdeb9a(longlong *param_1)

{
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_146fdebd4(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fdebd4 FUN_146fdebd4 body=47 status=ok
// SIG undefined FUN_146fdebd4(void)

void FUN_146fdebd4(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146fdec04 FUN_146fdec04 body=95 status=ok
// SIG undefined FUN_146fdec04(void)

undefined8 * FUN_146fdec04(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_146fdebd4(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146fdec64(param_1,iVar1);
      FUN_146fdecd7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146fdec64 FUN_146fdec64 body=115 status=ok
// SIG undefined FUN_146fdec64(void)

void FUN_146fdec64(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,0x10);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146fdecd7 FUN_146fdecd7 body=135 status=ok
// SIG undefined FUN_146fdecd7(void)

void FUN_146fdecd7(longlong param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  
  if (param_3 != 0) {
    puVar9 = (undefined8 *)(param_1 + 0x20);
    do {
      uVar2 = *param_2;
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      uVar6 = param_2[5];
      uVar7 = param_2[6];
      uVar8 = param_2[7];
      *(undefined4 *)(puVar9 + -2) = param_2[4];
      *(undefined4 *)((longlong)puVar9 + -0xc) = uVar6;
      *(undefined4 *)(puVar9 + -1) = uVar7;
      *(undefined4 *)((longlong)puVar9 + -4) = uVar8;
      *(undefined4 *)(puVar9 + -4) = uVar2;
      *(undefined4 *)((longlong)puVar9 + -0x1c) = uVar3;
      *(undefined4 *)(puVar9 + -3) = uVar4;
      *(undefined4 *)((longlong)puVar9 + -0x14) = uVar5;
      *puVar9 = 0;
      iVar1 = param_2[10];
      _Src = *(void **)(param_2 + 8);
      *(int *)(puVar9 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
      }
      else {
        FUN_144a06ca8(puVar9,iVar1,0);
        memcpy((void *)*puVar9,_Src,(longlong)iVar1 << 2);
      }
      param_2 = param_2 + 0xc;
      puVar9 = puVar9 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146fdee0c FUN_146fdee0c body=39 status=ok
// SIG undefined FUN_146fdee0c(void)

undefined8 FUN_146fdee0c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146fdee5c FUN_146fdee5c body=59 status=ok
// SIG undefined FUN_146fdee5c(void)

undefined8 FUN_146fdee5c(longlong *param_1)

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



// FUNCTION 146fdef42 FUN_146fdef42 body=38 status=ok
// SIG undefined FUN_146fdef42(void)

undefined8 FUN_146fdef42(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined4 *)(param_3 + lVar1);
      puVar4 = (undefined4 *)(param_2 + lVar1);
      for (lVar2 = 0x13; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x4c;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146fdef90 FUN_146fdef90 body=59 status=ok
// SIG undefined FUN_146fdef90(void)

undefined8 FUN_146fdef90(longlong *param_1)

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



// FUNCTION 146fdf078 FUN_146fdf078 body=54 status=ok
// SIG undefined FUN_146fdf078(void)

undefined1 FUN_146fdf078(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140114d7e(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 146fdf0d6 FUN_146fdf0d6 body=59 status=ok
// SIG undefined FUN_146fdf0d6(void)

undefined8 FUN_146fdf0d6(longlong *param_1)

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



// FUNCTION 146fdf11c FUN_146fdf11c body=32 status=ok
// SIG undefined FUN_146fdf11c(void)

void FUN_146fdf11c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1400bc83e(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 146fdf18a FUN_146fdf18a body=115 status=ok
// SIG undefined FUN_146fdf18a(void)

void FUN_146fdf18a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146fdf1fd FUN_146fdf1fd body=52 status=ok
// SIG undefined FUN_146fdf1fd(void)

void FUN_146fdf1fd(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_146fdf232(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 146fdf232 FUN_146fdf232 body=165 status=ok
// SIG undefined FUN_146fdf232(void)

undefined8 * FUN_146fdf232(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_146fdec64(param_1,iVar1,0);
    FUN_146fdecd7(*param_1,uVar2,iVar1);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1405b70fe(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 0x18);
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 146fdf2d8 FUN_146fdf2d8 body=115 status=ok
// SIG undefined FUN_146fdf2d8(void)

void FUN_146fdf2d8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x60,0x10);
    iVar2 = (int)(uVar1 / 0x60);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x60,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146fdf34c FUN_146fdf34c body=113 status=ok
// SIG undefined FUN_146fdf34c(void)

void FUN_146fdf34c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 146fdf3be FUN_146fdf3be body=113 status=ok
// SIG undefined FUN_146fdf3be(void)

void FUN_146fdf3be(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x60,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x60)) {
      uVar2 = uVar1 / 0x60 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x60,0x10);
  }
  return;
}



// FUNCTION 146fdf430 FUN_146fdf430 body=147 status=ok
// SIG undefined FUN_146fdf430(void)

void FUN_146fdf430(longlong param_1,int param_2)

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



// FUNCTION 146fdf4c4 FUN_146fdf4c4 body=147 status=ok
// SIG undefined FUN_146fdf4c4(void)

void FUN_146fdf4c4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146fdf558 FUN_146fdf558 body=114 status=ok
// SIG undefined FUN_146fdf558(void)

void FUN_146fdf558(longlong *param_1,int param_2)

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



// FUNCTION 146fdf5ca FUN_146fdf5ca body=34 status=ok
// SIG undefined FUN_146fdf5ca(void)

void FUN_146fdf5ca(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_149fbf760;
  return;
}



// FUNCTION 146fdf5ec FUN_146fdf5ec body=36 status=ok
// SIG undefined FUN_146fdf5ec(void)

undefined8 FUN_146fdf5ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 146fdf62c FUN_146fdf62c body=93 status=ok
// SIG undefined FUN_146fdf62c(void)

void FUN_146fdf62c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149fc0990;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146fdf68a FUN_146fdf68a body=126 status=ok
// SIG undefined FUN_146fdf68a(void)

void FUN_146fdf68a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149fc0990;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146fdf6f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146fdf714 FUN_146fdf714 body=21 status=ok
// SIG undefined FUN_146fdf714(void)

undefined8 FUN_146fdf714(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146fdf72a FUN_146fdf72a body=114 status=ok
// SIG undefined FUN_146fdf72a(void)

void FUN_146fdf72a(longlong *param_1,int param_2)

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



// FUNCTION 146fdf7b3 FUN_146fdf7b3 body=31 status=ok
// SIG undefined FUN_146fdf7b3(void)

undefined2 * FUN_146fdf7b3(char param_1)

{
  if ((byte)(param_1 + 2U) < 0x22) {
    return (undefined2 *)(&PTR_u_Platform_149fc1b70)[(byte)(param_1 + 2U)];
  }
  return &DAT_149e01fe8;
}



// FUNCTION 146fdf7d2 FUN_146fdf7d2 body=976 status=ok
// SIG undefined FUN_146fdf7d2(void)

void FUN_146fdf7d2(byte *param_1,undefined8 param_2)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_144a80a00(param_2,&DAT_149e43d78);
  if (iVar1 == 0) {
    bVar2 = 0;
  }
  else {
    iVar1 = FUN_144a80a00(param_2,L"Epic");
    if (iVar1 == 0) {
      bVar2 = 1;
    }
    else {
      iVar1 = FUN_144a80a00(param_2,L"Xbox");
      if (iVar1 == 0) {
        bVar2 = 2;
      }
      else {
        iVar1 = FUN_144a80a00(param_2,&DAT_149fc1844);
        if (iVar1 == 0) {
          bVar2 = 3;
        }
        else {
          iVar1 = FUN_144a80a00(param_2,L"Nintendo");
          if (iVar1 == 0) {
            bVar2 = 4;
          }
          else {
            iVar1 = FUN_144a80a00(param_2,L"Reserved_5");
            if (iVar1 == 0) {
              bVar2 = 5;
            }
            else {
              iVar1 = FUN_144a80a00(param_2,L"Steam");
              if (iVar1 == 0) {
                bVar2 = 6;
              }
              else {
                iVar1 = FUN_144a80a00(param_2,L"Google");
                if (iVar1 == 0) {
                  bVar2 = 7;
                }
                else {
                  iVar1 = FUN_144a80a00(param_2,L"GooglePlay");
                  if (iVar1 == 0) {
                    bVar2 = 8;
                  }
                  else {
                    iVar1 = FUN_144a80a00(param_2,L"Apple");
                    if (iVar1 == 0) {
                      bVar2 = 9;
                    }
                    else {
                      iVar1 = FUN_144a80a00(param_2,L"AppleGameKit");
                      if (iVar1 == 0) {
                        bVar2 = 10;
                      }
                      else {
                        iVar1 = FUN_144a80a00(param_2,L"Samsung");
                        if (iVar1 == 0) {
                          bVar2 = 0xb;
                        }
                        else {
                          iVar1 = FUN_144a80a00(param_2,L"Oculus");
                          if (iVar1 == 0) {
                            bVar2 = 0xc;
                          }
                          else {
                            iVar1 = FUN_144a80a00(param_2,L"Tencent");
                            if (iVar1 == 0) {
                              bVar2 = 0xd;
                            }
                            else {
                              iVar1 = FUN_144a80a00(param_2,L"Reserved_14");
                              if (iVar1 == 0) {
                                bVar2 = 0xe;
                              }
                              else {
                                iVar1 = FUN_144a80a00(param_2,L"Reserved_15");
                                if (iVar1 == 0) {
                                  bVar2 = 0xf;
                                }
                                else {
                                  iVar1 = FUN_144a80a00(param_2,L"Reserved_16");
                                  if (iVar1 == 0) {
                                    bVar2 = 0x10;
                                  }
                                  else {
                                    iVar1 = FUN_144a80a00(param_2,L"Reserved_17");
                                    if (iVar1 == 0) {
                                      bVar2 = 0x11;
                                    }
                                    else {
                                      iVar1 = FUN_144a80a00(param_2,L"Reserved_18");
                                      if (iVar1 == 0) {
                                        bVar2 = 0x12;
                                      }
                                      else {
                                        iVar1 = FUN_144a80a00(param_2,L"Reserved_19");
                                        if (iVar1 == 0) {
                                          bVar2 = 0x13;
                                        }
                                        else {
                                          iVar1 = FUN_144a80a00(param_2,L"Reserved_20");
                                          if (iVar1 == 0) {
                                            bVar2 = 0x14;
                                          }
                                          else {
                                            iVar1 = FUN_144a80a00(param_2,L"Reserved_21");
                                            if (iVar1 == 0) {
                                              bVar2 = 0x15;
                                            }
                                            else {
                                              iVar1 = FUN_144a80a00(param_2,L"Reserved_22");
                                              if (iVar1 == 0) {
                                                bVar2 = 0x16;
                                              }
                                              else {
                                                iVar1 = FUN_144a80a00(param_2,L"Reserved_23");
                                                if (iVar1 == 0) {
                                                  bVar2 = 0x17;
                                                }
                                                else {
                                                  iVar1 = FUN_144a80a00(param_2,L"Reserved_24");
                                                  if (iVar1 == 0) {
                                                    bVar2 = 0x18;
                                                  }
                                                  else {
                                                    iVar1 = FUN_144a80a00(param_2,L"Reserved_25");
                                                    if (iVar1 == 0) {
                                                      bVar2 = 0x19;
                                                    }
                                                    else {
                                                      iVar1 = FUN_144a80a00(param_2,L"Reserved_26");
                                                      if (iVar1 == 0) {
                                                        bVar2 = 0x1a;
                                                      }
                                                      else {
                                                        iVar1 = FUN_144a80a00(param_2,L"Reserved_27"
                                                                             );
                                                        if (iVar1 == 0) {
                                                          bVar2 = 0x1b;
                                                        }
                                                        else {
                                                          iVar1 = FUN_144a80a00(param_2,
                                                  L"GameDefined_0");
                                                  if (iVar1 == 0) {
                                                    bVar2 = 0x1c;
                                                  }
                                                  else {
                                                    iVar1 = FUN_144a80a00(param_2,L"GameDefined_1");
                                                    if (iVar1 == 0) {
                                                      bVar2 = 0x1d;
                                                    }
                                                    else {
                                                      iVar1 = FUN_144a80a00(param_2,L"GameDefined_2"
                                                                           );
                                                      if (iVar1 == 0) {
                                                        bVar2 = 0x1e;
                                                      }
                                                      else {
                                                        iVar1 = FUN_144a80a00(param_2,
                                                  L"GameDefined_3");
                                                  if (iVar1 == 0) {
                                                    bVar2 = 0x1f;
                                                  }
                                                  else {
                                                    iVar1 = FUN_144a80a00(param_2,&DAT_149e01fe8);
                                                    if (iVar1 == 0) {
                                                      bVar2 = 0xfd;
                                                    }
                                                    else {
                                                      iVar1 = FUN_144a80a00(param_2,L"Platform");
                                                      if (iVar1 == 0) {
                                                        bVar2 = 0xfe;
                                                      }
                                                      else {
                                                        iVar1 = FUN_144a80a00(param_2,L"Default");
                                                        bVar2 = -(iVar1 == 0) | 0xfd;
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
  *param_1 = bVar2;
  return;
}



// FUNCTION 146fdfba2 thunk_FUN_146fdfba8 body=5 status=ok
// SIG undefined thunk_FUN_146fdfba8(void)

undefined * thunk_FUN_146fdfba8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99d548) {
    FUN_144b3d300(&DAT_14c99d548);
    if (DAT_14c99d548 == -1) {
      FUN_146fdfc1c();
      DAT_14c99d540 = &DAT_14c99d448;
      atexit(FUN_142ac3261);
      _Init_thread_footer(&DAT_14c99d548);
    }
  }
  return DAT_14c99d540;
}



// FUNCTION 146fdfba8 FUN_146fdfba8 body=115 status=ok
// SIG undefined FUN_146fdfba8(void)

undefined * FUN_146fdfba8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99d548) {
    FUN_144b3d300(&DAT_14c99d548);
    if (DAT_14c99d548 == -1) {
      FUN_146fdfc1c();
      DAT_14c99d540 = &DAT_14c99d448;
      atexit(FUN_142ac3261);
      _Init_thread_footer(&DAT_14c99d548);
    }
  }
  return DAT_14c99d540;
}



// FUNCTION 146fdfc1c FUN_146fdfc1c body=226 status=ok
// SIG undefined FUN_146fdfc1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146fdfc1c(void)

{
  _DAT_14c99d468 = 0;
  _DAT_14c99d470 = 0;
  _DAT_14c99d448 = 0;
  uRam000000014c99d450 = 0;
  _DAT_14c99d474 = 0xffffffff00000080;
  _DAT_14c99d47c = 0;
  _DAT_14c99d488 = 0;
  _DAT_14c99d490 = 0;
  _DAT_14c99d498 = (undefined8 *)FUN_14494321d(0x50);
  _DAT_14c99d498[4] = 0;
  _DAT_14c99d498[5] = 0;
  _DAT_14c99d498[6] = 0;
  _DAT_14c99d498[7] = 0;
  *_DAT_14c99d498 = 0;
  _DAT_14c99d498[1] = 0;
  _DAT_14c99d498[2] = 0;
  _DAT_14c99d498[3] = 0;
  _DAT_14c99d498[8] = 0;
  _DAT_14c99d498[9] = 0;
  *(undefined4 *)((longlong)_DAT_14c99d498 + 0x2c) = 0x80;
  *(undefined4 *)(_DAT_14c99d498 + 6) = 0xffffffff;
  _DAT_14c99d4c0 = 0;
  _DAT_14c99d4c8 = 0;
  _DAT_14c99d4a0 = 0;
  uRam000000014c99d4a8 = 0;
  _DAT_14c99d4cc = 0xffffffff00000080;
  _DAT_14c99d4d4 = 0;
  _DAT_14c99d4e0 = 0;
  _DAT_14c99d4e8 = 0;
  _DAT_14c99d510 = 0;
  _DAT_14c99d518 = 0;
  _DAT_14c99d4f0 = 0;
  uRam000000014c99d4f8 = 0;
  _DAT_14c99d51c = 0xffffffff00000080;
  _DAT_14c99d524 = 0;
  _DAT_14c99d530 = 0;
  _DAT_14c99d538 = 0;
  return;
}



// FUNCTION 146fdfcfe FUN_146fdfcfe body=134 status=ok
// SIG undefined FUN_146fdfcfe(void)

void FUN_146fdfcfe(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_146fe05a0(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_146fe06f2(param_1 + 0x58);
  FUN_146fe0996(*(undefined8 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_146fe0844(param_1);
  return;
}



// FUNCTION 146fdfd84 FUN_146fdfd84 body=184 status=ok
// SIG undefined FUN_146fdfd84(void)

longlong * FUN_146fdfd84(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  plVar1 = (longlong *)FUN_146fdfe3e(0,*(undefined1 *)(param_3 + 3));
  if (plVar1 == (longlong *)0x0) {
    FUN_146fdfea2(*(undefined8 *)(param_1 + 0x50),&local_30,param_3);
  }
  else {
    (**(code **)(*plVar1 + 8))(plVar1,&local_30,param_3);
  }
  if (&local_30 == param_2) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_30;
    *(undefined4 *)(param_2 + 1) = local_28;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdfe3e FUN_146fdfe3e body=99 status=ok
// SIG undefined FUN_146fdfe3e(void)

undefined8 FUN_146fdfe3e(longlong *param_1,byte param_2)

{
  byte *pbVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & (uint)param_2) * 4);
    if (iVar2 != -1) {
      do {
        pbVar1 = (byte *)(*param_1 + (longlong)iVar2 * 0x28);
        if (*pbVar1 == param_2) {
          if (((ulonglong)(pbVar1 + 8) & 0xfffffffffffffff7) != 0) {
            return *(undefined8 *)(pbVar1 + 0x10);
          }
          return 0;
        }
        iVar2 = *(int *)(pbVar1 + 0x20);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146fdfea2 FUN_146fdfea2 body=245 status=ok
// SIG undefined FUN_146fdfea2(void)

undefined8 * FUN_146fdfea2(longlong *param_1,undefined8 *param_2,uint *param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  param_2[1] = 0;
  uVar2 = *param_3;
  uVar3 = uVar2 & 0xffffff;
  if ((uVar3 != 0) && ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar2 >> 0x18) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar4 * 0x70;
        if (*(char *)(*param_1 + (longlong)iVar4 * 0x70) == (char)(uVar2 >> 0x18)) {
          if (((lVar1 + 8U & 0xfffffffffffffff7) != 0) && ((int)uVar3 <= *(int *)(lVar1 + 0x60))) {
            FUN_142746b98(&local_28,
                          *(undefined8 *)
                           (*(longlong *)(lVar1 + 0x58) + -0x10 + (ulonglong)(uVar3 << 4)),
                          *(undefined4 *)
                           (*(longlong *)(lVar1 + 0x58) + -8 + (ulonglong)(uVar3 << 4)));
            if ((undefined8 *)&local_28 == param_2) {
              if (CONCAT44(uStack_24,local_28) != 0) {
                FUN_1400020a8();
              }
            }
            else {
              *(undefined4 *)param_2 = local_28;
              *(undefined4 *)((longlong)param_2 + 4) = uStack_24;
              *(undefined4 *)(param_2 + 1) = uStack_20;
              *(undefined4 *)((longlong)param_2 + 0xc) = uStack_1c;
            }
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x68);
      } while (iVar4 != -1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146fdff98 FUN_146fdff98 body=184 status=ok
// SIG undefined FUN_146fdff98(void)

longlong * FUN_146fdff98(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  plVar1 = (longlong *)FUN_146fdfe3e(0,*(undefined1 *)(param_3 + 3));
  if (plVar1 == (longlong *)0x0) {
    FUN_146fe0052(*(undefined8 *)(param_1 + 0x50),&local_30,param_3);
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_30,param_3);
  }
  if (&local_30 == param_2) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_30;
    *(undefined4 *)(param_2 + 1) = local_28;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe0052 FUN_146fe0052 body=335 status=ok
// SIG undefined FUN_146fe0052(void)

longlong * FUN_146fe0052(longlong *param_1,longlong *param_2,uint *param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined2 *local_48;
  int local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  uVar2 = *param_3;
  uVar3 = uVar2 & 0xffffff;
  if ((uVar3 != 0) && ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar2 >> 0x18) * 4);
    if (iVar5 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar5 * 0x70;
        if (*(char *)(*param_1 + (longlong)iVar5 * 0x70) == (char)(uVar2 >> 0x18)) {
          if (((lVar1 + 8U & 0xfffffffffffffff7) != 0) && ((int)uVar3 <= *(int *)(lVar1 + 0x60))) {
            lVar4 = (ulonglong)(uVar3 - 1) * 0x10;
            FUN_142746b98(&local_48,*(undefined8 *)(*(longlong *)(lVar1 + 0x58) + lVar4),
                          *(undefined4 *)(*(longlong *)(lVar1 + 0x58) + 8 + lVar4));
            local_58 = local_48;
            if (local_40 == 0) {
              local_58 = &DAT_149dfb77a;
            }
            FUN_140002266(&local_38,L"ForeignId=[Type=%d Handle=%d RepData=[%s]",uVar2 >> 0x18,
                          uVar3 - 1);
            if (&local_38 == param_2) {
              if (local_38 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              *param_2 = local_38;
              local_38 = 0;
              param_2[1] = local_30;
              local_30 = 0;
            }
            if (local_48 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x68);
      } while (iVar5 != -1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146fe01a2 FUN_146fe01a2 body=184 status=ok
// SIG undefined FUN_146fe01a2(void)

longlong * FUN_146fe01a2(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  plVar1 = (longlong *)FUN_146fdfe3e(0,*(undefined1 *)(param_3 + 3));
  if (plVar1 == (longlong *)0x0) {
    FUN_146fe025c(*(undefined8 *)(param_1 + 0x50),&local_30,param_3);
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_30,param_3);
  }
  if (&local_30 == param_2) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_30;
    *(undefined4 *)(param_2 + 1) = local_28;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe025c FUN_146fe025c body=159 status=ok
// SIG undefined FUN_146fe025c(void)

undefined8 * FUN_146fe025c(longlong *param_1,undefined8 *param_2,uint *param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  uVar2 = *param_3;
  uVar3 = uVar2 & 0xffffff;
  if ((uVar3 != 0) && ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar2 >> 0x18) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar4 * 0x70;
        if (*(char *)(*param_1 + (longlong)iVar4 * 0x70) == (char)(uVar2 >> 0x18)) {
          if ((lVar1 + 8U & 0xfffffffffffffff7) == 0) {
            return param_2;
          }
          if (*(int *)(lVar1 + 0x60) < (int)uVar3) {
            return param_2;
          }
          FUN_1447a122a(param_2,*(longlong *)(lVar1 + 0x58) + (ulonglong)(uVar3 << 4) + -0x10);
          return param_2;
        }
        iVar4 = *(int *)(lVar1 + 0x68);
      } while (iVar4 != -1);
    }
  }
  return param_2;
}



// FUNCTION 146fe02fc FUN_146fe02fc body=137 status=ok
// SIG undefined FUN_146fe02fc(void)

undefined4 *
FUN_146fe02fc(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_146fdfe3e(param_1,param_3);
  if (plVar1 == (longlong *)0x0) {
    FUN_146fe0386(*(undefined8 *)(param_1 + 0x50),&local_2c,param_3,param_4);
  }
  else {
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_2c,param_4);
  }
  *param_2 = local_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe0386 FUN_146fe0386 body=371 status=ok
// SIG undefined FUN_146fe0386(void)

uint * FUN_146fe0386(undefined8 param_1,uint *param_2,byte param_3,longlong *param_4)

{
  undefined8 *puVar1;
  void *_Src;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [47];
  byte local_59;
  longlong *local_58;
  uint *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  local_59 = param_3;
  if ((int)param_4[1] != 0) {
    plVar3 = (longlong *)FUN_146fe0cf6(param_1,param_3);
    uVar4 = 0;
    if ((longlong)(int)param_4[1] != 0) {
      lVar5 = 0;
      uVar4 = 0;
      do {
        uVar4 = (ulonglong)
                ((uint)uVar4 ^
                (uint)*(byte *)(*param_4 + lVar5) + (int)(uVar4 >> 2) + (uint)uVar4 * 0x40 +
                0x9e3779b9);
        lVar5 = lVar5 + 1;
      } while ((int)param_4[1] != lVar5);
    }
    iVar2 = FUN_146fe14f4(plVar3,uVar4,param_4);
    if ((iVar2 == -1) || (lVar5 = (longlong)iVar2 * 0x20 + *plVar3, lVar5 == 0)) {
      iVar2 = (int)plVar3[0xb];
      *(uint *)(plVar3 + 0xb) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar3 + 0x5c) < iVar2 + 1U) {
        FUN_146b28064(plVar3 + 10,iVar2);
      }
      lVar5 = plVar3[10];
      lVar6 = (longlong)iVar2 * 0x10;
      puVar1 = (undefined8 *)(lVar5 + lVar6);
      *(undefined8 *)(lVar5 + lVar6) = 0;
      iVar2 = (int)param_4[1];
      _Src = (void *)*param_4;
      *(int *)(lVar5 + 8 + lVar6) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1447a127e(puVar1,iVar2,0);
        memcpy((void *)*puVar1,_Src,(longlong)iVar2);
      }
      *param_2 = (uint)local_59 << 0x18 | *(uint *)(plVar3 + 0xb) & 0xffffff;
      local_58 = param_4;
      local_50 = param_2;
      FUN_146fe157a(plVar3,local_44);
    }
    else {
      *param_2 = *(uint *)(lVar5 + 0x10);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe04fa FUN_146fe04fa body=164 status=ok
// SIG undefined FUN_146fe04fa(void)

undefined8 FUN_146fe04fa(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_146fdfba8();
  FUN_146fdff98(uVar2,&local_30,param_2);
  local_38 = local_30;
  if (local_28 == 0) {
    local_38 = &DAT_149dfb77a;
  }
  uVar1 = *param_2;
  uVar2 = FUN_146fdf7b3(uVar1 >> 0x18);
  FUN_140002266(param_1,L"%s:%d (%s)",uVar2,uVar1 & 0xffffff);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146fe05a0 FUN_146fe05a0 body=52 status=ok
// SIG undefined FUN_146fe05a0(void)

void FUN_146fe05a0(longlong *param_1)

{
  FUN_146fe05d4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fe05d4 FUN_146fe05d4 body=284 status=ok
// SIG undefined FUN_146fe05d4(void)

void FUN_146fe05d4(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = param_1 + 0x10;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = lVar1;
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(lVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe06f2 FUN_146fe06f2 body=52 status=ok
// SIG undefined FUN_146fe06f2(void)

void FUN_146fe06f2(longlong *param_1)

{
  FUN_146fe0726();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fe0726 FUN_146fe0726 body=284 status=ok
// SIG undefined FUN_146fe0726(void)

void FUN_146fe0726(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = param_1 + 0x10;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = lVar1;
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(lVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe0844 FUN_146fe0844 body=52 status=ok
// SIG undefined FUN_146fe0844(void)

void FUN_146fe0844(longlong *param_1)

{
  FUN_146fe0878();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fe0878 FUN_146fe0878 body=284 status=ok
// SIG undefined FUN_146fe0878(void)

void FUN_146fe0878(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = param_1 + 0x10;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = lVar1;
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(lVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe0996 FUN_146fe0996 body=66 status=ok
// SIG undefined FUN_146fe0996(void)

void FUN_146fe0996(longlong param_1)

{
  if (param_1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_146fe09d8(param_1);
  thunk_FUN_1400020a8(param_1,0x50);
  return;
}



// FUNCTION 146fe09d8 FUN_146fe09d8 body=52 status=ok
// SIG undefined FUN_146fe09d8(void)

void FUN_146fe09d8(longlong *param_1)

{
  FUN_146fe0a0c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fe0a0c FUN_146fe0a0c body=310 status=ok
// SIG undefined FUN_146fe0a0c(void)

void FUN_146fe0a0c(longlong *param_1)

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
      FUN_146fe0b44(*local_68 + (longlong)iStack_4c * 0x70 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140875b54(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe0b44 FUN_146fe0b44 body=68 status=ok
// SIG undefined FUN_146fe0b44(void)

void FUN_146fe0b44(longlong param_1)

{
  FUN_1459ab2e7(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_146fe0b88(param_1);
  return;
}



// FUNCTION 146fe0b88 FUN_146fe0b88 body=52 status=ok
// SIG undefined FUN_146fe0b88(void)

void FUN_146fe0b88(longlong *param_1)

{
  FUN_146fe0bbc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fe0bbc FUN_146fe0bbc body=312 status=ok
// SIG undefined FUN_146fe0bbc(void)

void FUN_146fe0bbc(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe0cf6 FUN_146fe0cf6 body=180 status=ok
// SIG undefined FUN_146fe0cf6(void)

longlong FUN_146fe0cf6(longlong *param_1,uint param_2,char *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  char *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x70;
        if (*(char *)(*param_1 + (longlong)iVar1 * 0x70) == *param_3) {
          if (lVar3 != 0) goto LAB_146fe0d8d;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x68);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_146fe0dac(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x70 + *param_1;
LAB_146fe0d8d:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 146fe0dac FUN_146fe0dac body=266 status=ok
// SIG undefined FUN_146fe0dac(void)

undefined4 * FUN_146fe0dac(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146fe0eb8(param_1,local_48);
  FUN_146fe1036(param_4,local_40);
  *(undefined4 *)(local_40 + 0x68) = 0xffffffff;
  cVar1 = FUN_146fe0f9a(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x6c) = param_3;
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x68) =
           *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4);
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_146fe1358(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe0eb8 FUN_146fe0eb8 body=226 status=ok
// SIG undefined FUN_146fe0eb8(void)

int * FUN_146fe0eb8(longlong *param_1,int *param_2)

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
      FUN_140275bcc(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x70);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x70) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x70 + *param_1;
  return param_2;
}



// FUNCTION 146fe0f9a FUN_146fe0f9a body=156 status=ok
// SIG undefined FUN_146fe0f9a(void)

undefined8 FUN_146fe0f9a(longlong *param_1,uint param_2,char *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x70);
        if (*(char *)(*param_1 + (longlong)iVar2 * 0x70) == *param_3) {
          FUN_146fe0b44((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x68);
          FUN_146fe12e4(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x68);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 146fe1036 FUN_146fe1036 body=170 status=ok
// SIG undefined FUN_146fe1036(void)

undefined1 * FUN_146fe1036(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_50 = 0x8000000000;
  local_48 = 0xffffffff;
  local_28 = 0;
  uStack_20 = 0;
  *param_2 = *(undefined1 *)*param_1;
  FUN_146fe10e2(param_2 + 8,&local_78);
  *(undefined8 *)(param_2 + 0x58) = local_28;
  local_28 = 0;
  *(undefined4 *)(param_2 + 0x60) = (undefined4)uStack_20;
  *(undefined4 *)(param_2 + 100) = uStack_20._4_4_;
  uStack_20 = 0;
  FUN_146fe0b44(&local_78);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe10e2 FUN_146fe10e2 body=123 status=ok
// SIG undefined FUN_146fe10e2(void)

undefined8 * FUN_146fe10e2(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_146fe115e();
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



// FUNCTION 146fe115e FUN_146fe115e body=388 status=ok
// SIG undefined FUN_146fe115e(void)

longlong * FUN_146fe115e(longlong *param_1,longlong *param_2)

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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar5 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, uStack_48 != plVar1)) {
      do {
        local_60 = uVar5;
        if (*(longlong *)(*local_78 + (longlong)iVar6 * 0x20) != 0) {
          FUN_1400020a8();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar7));
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe12e4 FUN_146fe12e4 body=116 status=ok
// SIG undefined FUN_146fe12e4(void)

void FUN_146fe12e4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x70) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70 + 4) = uVar5;
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



// FUNCTION 146fe1358 FUN_146fe1358 body=410 status=ok
// SIG undefined FUN_146fe1358(void)

void FUN_146fe1358(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
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
        lVar6 = (longlong)iVar4 * 0x70;
        uVar8 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar2 + lVar6);
        *(uint *)(lVar2 + 0x6c + lVar6) = uVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x68 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 146fe14f4 FUN_146fe14f4 body=134 status=ok
// SIG undefined FUN_146fe14f4(void)

int FUN_146fe14f4(longlong *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  void *_Buf2;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar3 = *param_1;
      iVar2 = *(int *)(param_3 + 1);
      _Buf2 = (void *)*param_3;
      do {
        lVar6 = (longlong)iVar1 * 0x20;
        if (*(int *)(lVar3 + 8 + lVar6) == iVar2) {
          if (iVar2 == 0) {
            return iVar1;
          }
          iVar4 = memcmp(*(void **)(lVar3 + lVar6),_Buf2,(longlong)iVar2);
          if (iVar4 == 0) {
            return iVar1;
          }
        }
        iVar1 = *(int *)(lVar3 + 0x18 + lVar6);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 146fe157a FUN_146fe157a body=415 status=ok
// SIG undefined FUN_146fe157a(void)

undefined4 * FUN_146fe157a(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  void *_Src;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 local_50 [2];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146fe171a(param_1,local_50);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  *local_48 = 0;
  iVar8 = *(int *)(puVar1 + 1);
  _Src = (void *)*puVar1;
  *(int *)(local_48 + 1) = iVar8;
  if ((longlong)iVar8 == 0) {
    *(undefined4 *)((longlong)local_48 + 0xc) = 0;
    iVar8 = 0;
    lVar6 = 0;
  }
  else {
    FUN_1447a127e(local_48,iVar8,0);
    memcpy((void *)*local_48,_Src,(longlong)iVar8);
    lVar6 = *local_48;
    iVar8 = (int)local_48[1];
  }
  *(undefined4 *)(local_48 + 2) = *puVar2;
  *(undefined4 *)(local_48 + 3) = 0xffffffff;
  local_54 = local_50[0];
  uVar10 = 0;
  if (iVar8 != 0) {
    lVar9 = 0;
    uVar10 = 0;
    do {
      uVar10 = uVar10 ^ (uint)*(byte *)(lVar6 + lVar9) + (uVar10 >> 2) + uVar10 * 0x40 + 0x9e3779b9;
      lVar9 = lVar9 + 1;
    } while (iVar8 != lVar9);
  }
  cVar4 = FUN_146fe1800(param_1,uVar10,local_48,&local_54);
  uVar3 = local_54;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar5) {
      uVar7 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar10 = *(int *)(param_1 + 0x48) - 1U & uVar10;
      *(uint *)((longlong)local_48 + 0x1c) = uVar10;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 3) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar10) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar10) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_146fe18e4(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe171a FUN_146fe171a body=229 status=ok
// SIG undefined FUN_146fe171a(void)

int * FUN_146fe171a(longlong *param_1,int *param_2)

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



// FUNCTION 146fe1800 FUN_146fe1800 body=114 status=ok
// SIG undefined FUN_146fe1800(void)

undefined8 FUN_146fe1800(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_146fe14f4(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_146fe1872(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 146fe1872 FUN_146fe1872 body=114 status=ok
// SIG undefined FUN_146fe1872(void)

void FUN_146fe1872(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 146fe18e4 FUN_146fe18e4 body=498 status=ok
// SIG undefined FUN_146fe18e4(void)

void FUN_146fe18e4(longlong *param_1)

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
  longlong lVar11;
  longlong lVar12;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_68;
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
    uVar3 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar4 = local_68._4_4_;
      local_68 = uVar3;
      do {
        lVar2 = *local_80;
        lVar6 = (longlong)iVar4 * 0x20;
        lVar11 = (longlong)*(int *)(lVar2 + 8 + lVar6);
        if (lVar11 == 0) {
          uVar8 = 0;
        }
        else {
          lVar12 = 0;
          uVar8 = 0;
          do {
            uVar8 = uVar8 ^ (uint)*(byte *)(*(longlong *)(lVar2 + lVar6) + lVar12) +
                            (uVar8 >> 2) + uVar8 * 0x40 + 0x9e3779b9;
            lVar12 = lVar12 + 1;
          } while (lVar11 != lVar12);
        }
        uVar10 = (longlong)(int)uVar8 & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + lVar6 + 0x1c) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + lVar6 + 0x18) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar4 = local_68._4_4_;
        uVar3 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fe1ad8 FUN_146fe1ad8 body=52 status=ok
// SIG undefined FUN_146fe1ad8(void)

void FUN_146fe1ad8(longlong *param_1)

{
  FUN_146fe1b0c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fe1b0c FUN_146fe1b0c body=334 status=ok
// SIG undefined FUN_146fe1b0c(void)

void FUN_146fe1b0c(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
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
      if (*(longlong *)(*local_68 + 0x10 + (longlong)iStack_4c * 0x60) != 0) {
        lVar3 = *local_68 + (longlong)iStack_4c * 0x60;
        plVar2 = *(longlong **)(lVar3 + 0x20);
        plVar4 = (longlong *)(lVar3 + 0x30);
        if (plVar2 != (longlong *)0x0) {
          plVar4 = plVar2;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1401283f4(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe1c5c FUN_146fe1c5c body=68 status=ok
// SIG undefined FUN_146fe1c5c(void)

void FUN_146fe1c5c(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
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
  FUN_146fe1ca0(param_1);
  return;
}



// FUNCTION 146fe1ca0 FUN_146fe1ca0 body=451 status=ok
// SIG undefined FUN_146fe1ca0(void)

void FUN_146fe1ca0(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x54 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x50 + lVar7) =
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



// FUNCTION 146fe1e64 FUN_146fe1e64 body=95 status=ok
// SIG undefined FUN_146fe1e64(void)

void FUN_146fe1e64(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x54 + (longlong)param_2 * 0x60);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x50 + lVar5 * 0x60);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x60 + 0x50);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x60 + 0x50);
  FUN_146fe1ec4();
  return;
}



// FUNCTION 146fe1ec4 FUN_146fe1ec4 body=195 status=ok
// SIG undefined FUN_146fe1ec4(void)

void FUN_146fe1ec4(longlong *param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (*(longlong *)(*param_1 + 0x10 + (longlong)param_2 * 0x60) != 0) {
    lVar5 = *param_1 + (longlong)param_2 * 0x60;
    plVar4 = *(longlong **)(lVar5 + 0x20);
    plVar6 = (longlong *)(lVar5 + 0x30);
    if (plVar4 != (longlong *)0x0) {
      plVar6 = plVar4;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  lVar5 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar5 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar5 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar5 + (longlong)param_2 * 0x60 + 4) = uVar3;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar2 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 146fe1f88 FUN_146fe1f88 body=36 status=ok
// SIG undefined FUN_146fe1f88(void)

undefined8 FUN_146fe1f88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 146fe1fc8 FUN_146fe1fc8 body=93 status=ok
// SIG undefined FUN_146fe1fc8(void)

void FUN_146fe1fc8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149fc1cf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146fe2026 FUN_146fe2026 body=123 status=ok
// SIG undefined FUN_146fe2026(void)

void FUN_146fe2026(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149fc1cf0;
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



// FUNCTION 146fe20a2 FUN_146fe20a2 body=21 status=ok
// SIG undefined FUN_146fe20a2(void)

undefined8 FUN_146fe20a2(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146fe20c0 FUN_146fe20c0 body=266 status=ok
// SIG undefined FUN_146fe20c0(void)

ulonglong FUN_146fe20c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_e8 = 0xffffffff;
  local_b8 = 0;
  local_b0 = 0x200000000;
  local_e4 = 0;
  uStack_dc = 0;
  local_d4 = 0;
  uStack_cc = 0;
  local_c4 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0xffffffff;
  local_48 = 0;
  local_40 = 0;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = 0;
  local_3c = 2;
  local_38 = 0;
  FUN_146863b7e(&local_118);
  FUN_146863b7e(&local_a8,param_3);
  plVar1 = (longlong *)FUN_14479d2ce(param_1);
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_118);
  uVar3 = CONCAT71((int7)((ulonglong)plVar1 >> 8),local_38);
  FUN_14128b0c2(&local_a8);
  FUN_14128b0c2(&local_118);
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe21d2 FUN_146fe21d2 body=285 status=ok
// SIG undefined FUN_146fe21d2(void)

void FUN_146fe21d2(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_b8 [36];
  int local_94;
  undefined8 local_90;
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_94 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_94);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_94);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14700c032(local_88,local_90,local_94 != 0);
  FUN_14128b194(param_3,local_88);
  FUN_14128b0c2(local_88);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe22f0 FUN_146fe22f0 body=253 status=ok
// SIG undefined FUN_146fe22f0(void)

void FUN_146fe22f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_68 = 0xffffffff;
  local_38 = 0;
  local_30 = 0x200000000;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = 0;
  uStack_4c = 0;
  local_44 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_98;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14700c5f4(puVar2);
  *param_3 = uVar1;
  FUN_14128b0c2(&local_98);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe23ee FUN_146fe23ee body=253 status=ok
// SIG undefined FUN_146fe23ee(void)

void FUN_146fe23ee(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_68 = 0xffffffff;
  local_38 = 0;
  local_30 = 0x200000000;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = 0;
  uStack_4c = 0;
  local_44 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_98;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14700c132(puVar2);
  *param_3 = uVar1;
  FUN_14128b0c2(&local_98);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe24ec FUN_146fe24ec body=125 status=ok
// SIG undefined FUN_146fe24ec(void)

void FUN_146fe24ec(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14700bfea(&local_28);
  if (DAT_14c950c29 == '\x01') {
    if (local_28 == 0) {
      local_28 = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  *param_3 = local_28;
  param_3[1] = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe256a FUN_146fe256a body=528 status=ok
// SIG undefined FUN_146fe256a(void)

void FUN_146fe256a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  ulonglong uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined8 local_34;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_108 = 0;
  local_100 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_fc = 0xffffffff00000080;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_36 = 0;
  local_34 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_178);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_178);
  }
  puVar2 = &local_178;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  local_188 = 0;
  uStack_180 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_188);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_188);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_188;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142ae01f4(puVar2,plVar1);
  FUN_140195631(local_188,uStack_180 & 0xffffffff);
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  FUN_14019571a(&local_178);
  if ((local_20 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe277c FUN_146fe277c body=253 status=ok
// SIG undefined FUN_146fe277c(void)

void FUN_146fe277c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_68 = 0xffffffff;
  local_38 = 0;
  local_30 = 0x200000000;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = 0;
  uStack_4c = 0;
  local_44 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_98;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14700c12a(puVar2);
  *param_3 = uVar1;
  FUN_14128b0c2(&local_98);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe287a FUN_146fe287a body=334 status=ok
// SIG undefined FUN_146fe287a(void)

void FUN_146fe287a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined4 local_34;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_58 = 0xffffffff;
  local_28 = 0;
  local_20 = 0x200000000;
  local_54 = 0;
  uStack_4c = 0;
  local_44 = 0;
  uStack_3c = 0;
  local_34 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar1 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14700c27c(&local_98,puVar1);
  if (&local_98 == param_3) {
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_98;
    local_98 = 0;
    *(undefined4 *)(param_3 + 1) = local_90;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_8c;
  }
  FUN_14128b0c2(&local_88);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe29ca FUN_146fe29ca body=334 status=ok
// SIG undefined FUN_146fe29ca(void)

void FUN_146fe29ca(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined4 local_34;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_58 = 0xffffffff;
  local_28 = 0;
  local_20 = 0x200000000;
  local_54 = 0;
  uStack_4c = 0;
  local_44 = 0;
  uStack_3c = 0;
  local_34 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar1 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14700c0c8(&local_98,puVar1);
  if (&local_98 == param_3) {
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_98;
    local_98 = 0;
    *(undefined4 *)(param_3 + 1) = local_90;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_8c;
  }
  FUN_14128b0c2(&local_88);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe2b22 FUN_146fe2b22 body=486 status=ok
// SIG undefined FUN_146fe2b22(void)

void FUN_146fe2b22(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_e8 [32];
  longlong local_c8 [3];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined4 local_54;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_78 = 0xffffffff;
  local_48 = 0;
  local_40 = 0x200000000;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  puVar2 = &local_a8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  local_b0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  puVar4 = &local_b0;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_c8[0] = 0;
  local_c8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = local_c8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14700c29e(puVar2,puVar4,plVar3);
  *param_3 = uVar1;
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_14128b0c2(&local_a8);
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe2d10 FUN_146fe2d10 body=252 status=ok
// SIG undefined FUN_146fe2d10(void)

void FUN_146fe2d10(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_68 = 0xffffffff;
  local_38 = 0;
  local_30 = 0x200000000;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = 0;
  uStack_4c = 0;
  local_44 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_98;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14700c210(puVar2);
  *param_3 = uVar1;
  FUN_14128b0c2(&local_98);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe2e14 FUN_146fe2e14 body=252 status=ok
// SIG undefined FUN_146fe2e14(void)

void FUN_146fe2e14(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_68 = 0xffffffff;
  local_38 = 0;
  local_30 = 0x200000000;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = 0;
  uStack_4c = 0;
  local_44 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_98;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14700c0ea(puVar2);
  *param_3 = uVar1;
  FUN_14128b0c2(&local_98);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe2f18 FUN_146fe2f18 body=252 status=ok
// SIG undefined FUN_146fe2f18(void)

void FUN_146fe2f18(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_68 = 0xffffffff;
  local_38 = 0;
  local_30 = 0x200000000;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = 0;
  uStack_4c = 0;
  local_44 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_98;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = thunk_FUN_1406742aa(puVar2);
  *param_3 = uVar1;
  FUN_14128b0c2(&local_98);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe301c FUN_146fe301c body=252 status=ok
// SIG undefined FUN_146fe301c(void)

void FUN_146fe301c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_68 = 0xffffffff;
  local_38 = 0;
  local_30 = 0x200000000;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = 0;
  uStack_4c = 0;
  local_44 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_98;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14700c0b0(puVar2);
  *param_3 = uVar1;
  FUN_14128b0c2(&local_98);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe311a FUN_146fe311a body=577 status=ok
// SIG undefined FUN_146fe311a(void)

void FUN_146fe311a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_2f8 [32];
  longlong local_2d8;
  ulonglong uStack_2d0;
  undefined1 local_2c8 [336];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined8 local_34;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  local_108 = 0;
  local_100 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_fc = 0xffffffff00000080;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_36 = 0;
  local_34 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_178);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_178);
  }
  puVar1 = &local_178;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  local_2d8 = 0;
  uStack_2d0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d8);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = &local_2d8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14700c2a6(local_2c8,puVar1,plVar2);
  FUN_146fe335c(param_3,local_2c8);
  FUN_14019571a(local_2c8);
  FUN_146ffecca(local_2d8,uStack_2d0 & 0xffffffff);
  if (local_2d8 != 0) {
    FUN_1400020a8();
  }
  FUN_14019571a(&local_178);
  if ((local_28 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe335c FUN_146fe335c body=303 status=ok
// SIG undefined FUN_146fe335c(void)

longlong * FUN_146fe335c(longlong *param_1,longlong *param_2)

{
  if (param_1 == param_2) {
    FUN_14171b3ac(param_1 + 4,param_2 + 4);
  }
  else {
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
    FUN_14171b3ac(param_1 + 4,param_2 + 4);
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = param_2[6];
    param_2[6] = 0;
    *(int *)(param_1 + 7) = (int)param_2[7];
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
    param_2[7] = 0;
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    param_1[8] = param_2[8];
    param_2[8] = 0;
    *(int *)(param_1 + 9) = (int)param_2[9];
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
    param_2[9] = 0;
  }
  FUN_146ffa3c2(param_1 + 10,param_2 + 10);
  FUN_14170f558(param_1 + 0x14,param_2 + 0x14);
  FUN_146ffa366(param_1 + 0x1e,param_2 + 0x1e);
  param_1[0x28] = param_2[0x28];
  *(int *)(param_1 + 0x29) = (int)param_2[0x29];
  return param_1;
}



// FUNCTION 146fe348c FUN_146fe348c body=276 status=ok
// SIG undefined FUN_146fe348c(void)

void FUN_146fe348c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  plVar1 = &local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14700d192(plVar1,local_29);
  FUN_140195631(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe35a2 FUN_146fe35a2 body=367 status=ok
// SIG undefined FUN_146fe35a2(void)

void FUN_146fe35a2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  plVar1 = &local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_39 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = (undefined4)local_38;
  uStack_4c = local_38._4_4_;
  uStack_48 = (undefined4)uStack_30;
  uStack_44 = uStack_30._4_4_;
  FUN_14700c6f4(plVar1,&local_50,local_39);
  FUN_140195631(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe3712 FUN_146fe3712 body=349 status=ok
// SIG undefined FUN_146fe3712(void)

void FUN_146fe3712(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined4 local_34;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_58 = 0xffffffff;
  local_28 = 0;
  local_20 = 0x200000000;
  local_54 = 0;
  uStack_4c = 0;
  local_44 = 0;
  uStack_3c = 0;
  local_34 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar1 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14700c10a(&local_a8,puVar1);
  *param_3 = local_a8;
  param_3[1] = uStack_a4;
  param_3[2] = uStack_a0;
  param_3[3] = uStack_9c;
  if (&local_a8 == param_3) {
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_3 + 4) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_3 + 4) = local_98;
    local_98 = 0;
    param_3[6] = local_90;
    param_3[7] = local_8c;
  }
  FUN_14128b0c2(&local_88);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe3873 FUN_146fe3873 body=741 status=ok
// SIG undefined FUN_146fe3873(void)

void FUN_146fe3873(uint *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [40];
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a8b87e(param_2,&local_30);
  *param_2 = local_30;
  param_2[1] = iStack_2c;
  param_2[2] = iStack_28;
  param_2[3] = iStack_24;
  iVar2 = param_2[2];
  switch(iVar2 + -1) {
  case 0:
switchD_146fe38c1_caseD_0:
    uVar3 = *(undefined8 *)param_2;
    iVar2 = FUN_144a54874(uVar3,&DAT_149fc3c34,1);
    if ((iVar2 != 0) && (iVar2 = FUN_144a54874(uVar3,&DAT_149e25dfc,1), iVar2 != 0)) {
      pwVar4 = L"t";
      uVar5 = 1;
      goto LAB_146fe3a32;
    }
    goto LAB_146fe3a1a;
  case 1:
switchD_146fe38c1_caseD_1:
    uVar3 = *(undefined8 *)param_2;
    pwVar4 = L"on";
    uVar5 = 2;
    goto LAB_146fe3a32;
  case 2:
switchD_146fe38c1_caseD_2:
    uVar3 = *(undefined8 *)param_2;
    pwVar4 = L"off";
    uVar5 = 3;
    goto LAB_146fe3a11;
  case 3:
switchD_146fe38c1_caseD_3:
    uVar3 = *(undefined8 *)param_2;
    pwVar4 = L"true";
    uVar5 = 4;
    goto LAB_146fe3a32;
  case 4:
    iVar1 = FUN_144a54874(*(undefined8 *)param_2,L"Never",5);
    if ((iVar1 == 0) || (iVar1 = FUN_144a54874(*(undefined8 *)param_2,L"false",5), iVar1 == 0))
    goto LAB_146fe3a1a;
    switch(iVar2 + -1) {
    case 0:
      goto switchD_146fe38c1_caseD_0;
    case 1:
      goto switchD_146fe38c1_caseD_1;
    case 2:
      goto switchD_146fe38c1_caseD_2;
    case 3:
      goto switchD_146fe38c1_caseD_3;
    }
    break;
  case 6:
    uVar3 = *(undefined8 *)param_2;
    pwVar4 = L"Default";
    uVar5 = 7;
    goto LAB_146fe3a32;
  case 10:
    uVar3 = *(undefined8 *)param_2;
    pwVar4 = L"AlwaysWrite";
    uVar5 = 0xb;
    goto LAB_146fe397e;
  case 0x12:
    uVar3 = *(undefined8 *)param_2;
    pwVar4 = L"NeverWriteNeverRead";
    uVar5 = 0x13;
LAB_146fe3a11:
    iVar2 = FUN_144a54874(uVar3,pwVar4,uVar5);
    if (iVar2 == 0) {
LAB_146fe3a1a:
      *param_1 = 0;
      goto LAB_146fe3a5d;
    }
    break;
  case 0x13:
    uVar3 = *(undefined8 *)param_2;
    iVar2 = FUN_144a54874(uVar3,L"NeverWriteAlwaysRead",0x14);
    if (iVar2 == 0) {
      *param_1 = 2;
      goto LAB_146fe3a5d;
    }
    iVar2 = FUN_144a54874(uVar3,L"AlwaysWriteNeverRead",0x14);
    if (iVar2 == 0) {
      *param_1 = 0x20;
      goto LAB_146fe3a5d;
    }
    break;
  case 0x14:
    uVar3 = *(undefined8 *)param_2;
    iVar2 = FUN_144a54874(uVar3,L"NeverWriteDefaultRead",0x15);
    if (iVar2 == 0) {
      *param_1 = 1;
      goto LAB_146fe3a5d;
    }
    iVar2 = FUN_144a54874(uVar3,L"DefaultWriteNeverRead",0x15);
    if (iVar2 == 0) {
      *param_1 = 0x10;
      goto LAB_146fe3a5d;
    }
    iVar2 = FUN_144a54874(*(undefined8 *)param_2,L"AlwaysWriteAlwaysRead",0x15);
    if (iVar2 == 0) {
      *param_1 = 0x22;
      goto LAB_146fe3a5d;
    }
    break;
  case 0x15:
    iVar2 = FUN_144a54874(*(undefined8 *)param_2,L"DefaultWriteAlwaysRead",0x16);
    if (iVar2 == 0) {
      *param_1 = 0x12;
      goto LAB_146fe3a5d;
    }
    uVar3 = *(undefined8 *)param_2;
    pwVar4 = L"AlwaysWriteDefaultRead";
    uVar5 = 0x16;
LAB_146fe397e:
    iVar2 = FUN_144a54874(uVar3,pwVar4,uVar5);
    if (iVar2 == 0) {
      *param_1 = 0x21;
      goto LAB_146fe3a5d;
    }
    break;
  case 0x16:
    uVar3 = *(undefined8 *)param_2;
    pwVar4 = L"DefaultWriteDefaultRead";
    uVar5 = 0x17;
LAB_146fe3a32:
    iVar2 = FUN_144a54874(uVar3,pwVar4,uVar5);
    if (iVar2 == 0) {
      *param_1 = 0x11;
      goto LAB_146fe3a5d;
    }
  }
  local_30 = 0;
  FUN_14682b8c6(&local_30,param_2);
  *param_1 = -(uint)(local_30 == 0) | 0x11;
LAB_146fe3a5d:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe3b5a FUN_146fe3b5a body=380 status=ok
// SIG undefined FUN_146fe3b5a(void)

undefined8 * FUN_146fe3b5a(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  uint local_68;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  param_1[1] = 0;
  plVar1 = (longlong *)FUN_14054d1d4();
  FUN_1449b8608(&local_48,&DAT_14c99d680,L"_*.bin");
  puVar3 = local_48;
  if (local_40 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = local_68 & 0xffffff00;
  (**(code **)(*plVar1 + 0x78))(plVar1,param_1,puVar3,1);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_1 + 1) != 0) {
    FUN_140bee914(&local_48,&DAT_14c99d680);
    if ((longlong)*(int *)(param_1 + 1) != 0) {
      plVar1 = (longlong *)*param_1;
      lVar4 = (longlong)*(int *)(param_1 + 1) << 4;
      do {
        iVar2 = (int)plVar1[1] + -1;
        if ((int)plVar1[1] == 0) {
          iVar2 = 0;
        }
        local_68 = iVar2 + 1 + (uint)(local_40 == 0);
        local_58 = 0;
        FUN_14125bce8(&local_58,local_48,local_40,0);
        FUN_1401aebe8(&local_58,*plVar1,iVar2);
        if (plVar1 == &local_58) {
          if (local_58 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*plVar1 != 0) {
            FUN_1400020a8();
          }
          *plVar1 = local_58;
          local_58 = 0;
          *(undefined4 *)(plVar1 + 1) = local_50;
          *(undefined4 *)((longlong)plVar1 + 0xc) = local_4c;
        }
        plVar1 = plVar1 + 2;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146fe3cd7 FUN_146fe3cd7 body=176 status=ok
// SIG undefined FUN_146fe3cd7(void)

undefined4 FUN_146fe3cd7(undefined8 *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  size_t sVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined4 local_40;
  wchar_t *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = 0;
  uVar4 = 0;
  if (DAT_14c99d650 == '\x01') {
    plVar2 = (longlong *)FUN_140e92164();
    FUN_14006620a(&local_38,*param_1,*(undefined4 *)(param_1 + 1));
    local_48 = L"";
    if (local_30 != 0) {
      local_48 = local_38;
    }
    if (local_48 != (wchar_t *)0x0) {
      sVar3 = wcslen(local_48);
      uVar4 = (int)sVar3;
    }
    local_40 = uVar4;
    uVar1 = (**(code **)(*plVar2 + 0xd8))(plVar2,&local_48,0);
    if (local_38 != (wchar_t *)0x0) {
      FUN_1400020a8(local_38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe3d88 FUN_146fe3d88 body=99 status=ok
// SIG undefined FUN_146fe3d88(void)

void FUN_146fe3d88(longlong *param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      FUN_1446f8c06(param_1,0);
      return;
    }
  }
  else {
    FUN_1409ee492(param_1,*(int *)(param_2 + 1) + 1,0);
    memcpy((void *)*param_1,(void *)*param_2,(longlong)*(int *)(param_2 + 1) * 2);
    *(undefined2 *)(*param_1 + (longlong)*(int *)(param_2 + 1) * 2) = 0;
  }
  return;
}



// FUNCTION 146fe3dec FUN_146fe3dec body=413 status=ok
// SIG undefined FUN_146fe3dec(void)

longlong *
FUN_146fe3dec(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             longlong *param_5,undefined1 param_6,undefined1 param_7)

{
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14006620a(&local_50,*param_2,*(undefined4 *)(param_2 + 1));
  if (&local_50 == param_1) {
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_50;
    local_50 = 0;
    *(undefined4 *)(param_1 + 1) = local_48;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_44;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_14006620a(&local_50,*param_3,*(undefined4 *)(param_3 + 1));
  if (&local_50 == param_1 + 2) {
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = local_50;
    local_50 = 0;
    *(undefined4 *)(param_1 + 3) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x1c) = local_44;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_14006620a(&local_50,*param_4,*(undefined4 *)(param_4 + 1));
  if (&local_50 == param_1 + 4) {
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = local_50;
    *(undefined4 *)(param_1 + 5) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2c) = local_44;
  }
  param_1[6] = *param_5;
  *(undefined1 *)(param_1 + 7) = param_6;
  *(undefined1 *)((longlong)param_1 + 0x39) = param_7;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe3f8a FUN_146fe3f8a body=168 status=ok
// SIG undefined FUN_146fe3f8a(void)

void FUN_146fe3f8a(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined1 param_6,undefined1 param_7)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = *param_4;
  uStack_60 = param_4[1];
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_146fe3d88();
  FUN_146fe3d88(param_1 + 0x10,&local_58);
  FUN_146fe3d88(param_1 + 0x20,&local_68);
  *(undefined1 *)(param_1 + 0x38) = param_6;
  *(undefined1 *)(param_1 + 0x39) = param_7;
  *(undefined8 *)(param_1 + 0x30) = *param_5;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe4034 FUN_146fe4034 body=297 status=ok
// SIG undefined FUN_146fe4034(void)

longlong *
FUN_146fe4034(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14006620a(&local_50,*param_2,*(undefined4 *)(param_2 + 1));
  if (&local_50 == param_1) {
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_50;
    local_50 = 0;
    *(undefined4 *)(param_1 + 1) = local_48;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_44;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_14006620a(&local_50,*param_3,*(undefined4 *)(param_3 + 1));
  if (&local_50 == param_1 + 2) {
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = local_50;
    *(undefined4 *)(param_1 + 3) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x1c) = local_44;
  }
  param_1[4] = *param_4;
  *(undefined1 *)(param_1 + 5) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x29) = param_6;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe415e FUN_146fe415e body=96 status=ok
// SIG undefined FUN_146fe415e(void)

void FUN_146fe415e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149fc3ee8;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_146ffeeda(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fe41be FUN_146fe41be body=181 status=ok
// SIG undefined FUN_146fe41be(void)

void FUN_146fe41be(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x10);
    iVar2 = *(int *)(param_1 + 0x18);
    uVar4 = 0;
    if ((longlong)iVar2 != 0) {
      lVar6 = 0;
      do {
        FUN_146fe41be(*(undefined8 *)(lVar5 + lVar6));
        puVar3 = *(undefined8 **)(lVar5 + lVar6);
        if (puVar3 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar5 + lVar6) = 0;
          LOCK();
          piVar1 = (int *)(puVar3 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar2 * 8 != lVar6);
      uVar4 = *(undefined4 *)(param_1 + 0x18);
      lVar5 = *(longlong *)(param_1 + 0x10);
    }
    FUN_146ffeeda(lVar5,uVar4);
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_146ffef14(param_1 + 0x10,0);
    }
    if (*(char *)(param_1 + 0x56) == '\0') {
      LOCK();
      piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x88) + 0xe4);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    *(longlong *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 146fe4274 FUN_146fe4274 body=154 status=ok
// SIG undefined FUN_146fe4274(void)

void FUN_146fe4274(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x38) == 0) {
      iVar2 = *(int *)(lVar1 + 0x68) + -1;
      if (*(int *)(lVar1 + 0x68) == 0) {
        iVar2 = 0;
      }
      if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
        FUN_1449668a2(param_2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48,*(undefined8 *)(lVar1 + 0x60),iVar2);
    }
    FUN_146fe4274(*(longlong *)(param_1 + 0x38),param_2);
    local_28 = *(undefined8 *)(param_1 + 0x40);
    local_20 = *(int *)(param_1 + 0x48) + -1;
    if (*(int *)(param_1 + 0x48) == 0) {
      local_20 = 0;
    }
    FUN_1404d3f7a(param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 146fe4318 FUN_146fe4318 body=113 status=ok
// SIG undefined FUN_146fe4318(void)

void FUN_146fe4318(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(longlong *)(param_1 + 0x30) != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
    FUN_146fe4318();
    local_28 = *(undefined8 *)(param_1 + 0x40);
    local_20 = *(int *)(param_1 + 0x48) + -1;
    if (*(int *)(param_1 + 0x48) == 0) {
      local_20 = 0;
    }
    FUN_1404d3f7a(param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe438a FUN_146fe438a body=191 status=ok
// SIG undefined FUN_146fe438a(void)

undefined8 * FUN_146fe438a(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 *local_138;
  undefined1 *local_130;
  ulonglong *local_128;
  char local_120;
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_138 = local_118;
  local_120 = '\0';
  local_128 = &local_18;
  local_130 = local_138;
  FUN_146fe4318(param_1,&local_138);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14006620a(&local_148,local_138,(ulonglong)((longlong)local_130 - (longlong)local_138) >> 1);
  if ((undefined8 *)&local_148 == param_2) {
    if (CONCAT44(uStack_144,local_148) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)param_2 = local_148;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_144;
    *(undefined4 *)(param_2 + 1) = uStack_140;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_13c;
  }
  if (local_120 == '\x01') {
    FUN_1400020a8(local_138);
  }
  if ((local_18 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe444a FUN_146fe444a body=274 status=ok
// SIG undefined FUN_146fe444a(void)

void FUN_146fe444a(longlong param_1,undefined4 *param_2,char *param_3,undefined2 *param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined2 local_3b;
  undefined1 local_39;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    *param_4 = 0;
    *(undefined1 *)(param_4 + 1) = 0;
  }
  else {
    uVar2 = 1;
    if (*param_3 == '\0') {
      uVar2 = (undefined1)*(undefined4 *)(param_1 + 0x50);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x51);
    if (param_3[1] != '\0') {
      uVar3 = 1;
    }
    local_3b = CONCAT11(uVar3,uVar2);
    local_39 = *(undefined1 *)(param_1 + 0x52);
    if (param_3[2] != '\0') {
      local_39 = 1;
    }
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    if (param_2[2] != 0) {
      local_78 = *param_2;
      uStack_74 = param_2[1];
      uStack_70 = param_2[2];
      uStack_6c = param_2[3];
      FUN_144907528(&local_78,&local_50,&local_60);
      local_38 = (undefined4)local_50;
      uStack_34 = local_50._4_4_;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      lVar1 = FUN_146fe471e(param_1);
      if (lVar1 != 0) {
        local_88 = (undefined4)local_60;
        uStack_84 = local_60._4_4_;
        uStack_80 = uStack_58;
        uStack_7c = uStack_54;
        FUN_146fe444a(lVar1,&local_88,&local_3b,param_4);
        goto LAB_146fe44d6;
      }
    }
    *(undefined1 *)(param_4 + 1) = local_39;
    *param_4 = local_3b;
  }
LAB_146fe44d6:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe455e FUN_146fe455e body=136 status=ok
// SIG undefined FUN_146fe455e(void)

longlong FUN_146fe455e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = (longlong)*(int *)(param_1 + 0x1c) << 3;
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    lVar5 = 0;
    do {
      lVar2 = FUN_146fe455e(*(undefined8 *)(lVar4 + lVar5));
      lVar3 = lVar3 + lVar2 + 0x58;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  lVar3 = (longlong)*(int *)(param_1 + 0x2c) * 0x10 + lVar3;
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    lVar4 = 0;
    do {
      lVar3 = lVar3 + (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0xc + lVar4) * 2;
      lVar4 = lVar4 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x28) * 0x10 != lVar4);
  }
  return lVar3 + (longlong)*(int *)(param_1 + 0x4c) * 2;
}



// FUNCTION 146fe45e6 FUN_146fe45e6 body=311 status=ok
// SIG undefined FUN_146fe45e6(void)

longlong FUN_146fe45e6(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  uVar5 = FUN_146fe4bfc();
  plVar1 = (longlong *)(param_1 + 0x10);
  uVar7 = (ulonglong)uVar5;
  if (uVar5 != *(uint *)(param_1 + 0x18)) {
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    lVar6 = *(longlong *)(*plVar1 + uVar7 * 8);
    local_68 = *(undefined8 *)(lVar6 + 0x40);
    local_60 = *(int *)(lVar6 + 0x48) + -1;
    if (*(int *)(lVar6 + 0x48) == 0) {
      local_60 = 0;
    }
    cVar4 = FUN_146819142();
    if (cVar4 != '\0') goto LAB_146fe46a2;
  }
  lVar6 = FUN_14001cc68(0x58,0x10);
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  FUN_142ac3410(lVar6,*(undefined8 *)(param_1 + 0x30),param_1);
  iVar2 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar2 + 1;
  if (*(int *)(param_1 + 0x1c) == iVar2) {
    FUN_146fff20e(plVar1,iVar2);
  }
  memmove((void *)(*plVar1 + uVar7 * 8 + 8),(void *)(*plVar1 + uVar7 * 8),
          (ulonglong)(iVar2 - uVar5) << 3);
  lVar3 = *plVar1;
  *(longlong *)(lVar3 + uVar7 * 8) = lVar6;
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    lVar6 = *(longlong *)(lVar3 + uVar7 * 8);
  }
LAB_146fe46a2:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 146fe471e FUN_146fe471e body=142 status=ok
// SIG undefined FUN_146fe471e(void)

longlong FUN_146fe471e(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  uVar3 = FUN_146fe4bfc();
  lVar4 = 0;
  if (uVar3 != *(uint *)(param_1 + 0x18)) {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar3 * 8);
    local_58 = *(undefined8 *)(lVar1 + 0x40);
    local_50 = *(int *)(lVar1 + 0x48) + -1;
    if (*(int *)(lVar1 + 0x48) == 0) {
      local_50 = 0;
    }
    cVar2 = FUN_146819142();
    if (cVar2 != '\0') {
      lVar4 = lVar1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 146fe47ae FUN_146fe47ae body=316 status=ok
// SIG undefined FUN_146fe47ae(void)

void FUN_146fe47ae(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x53) == '\0') {
    puVar8 = *(undefined8 **)(param_1 + 0x20);
    iVar3 = *(int *)(param_1 + 0x28);
    lVar7 = (longlong)iVar3;
    local_60 = puVar8;
    if (lVar7 != 0) {
      puVar1 = puVar8 + lVar7 * 2;
      iVar4 = *(int *)(param_2 + 1);
      do {
        uVar5 = *(uint *)(puVar8 + 1);
        iVar6 = uVar5 - 1;
        if (uVar5 == 0) {
          iVar6 = 0;
        }
        if (iVar6 == iVar4) {
          if (uVar5 < 2) goto LAB_146fe47d3;
          iVar6 = FUN_144a54874(*puVar8,*param_2,(longlong)iVar4);
          if (iVar6 == 0) goto LAB_146fe47d3;
        }
        puVar8 = puVar8 + 2;
      } while (puVar8 != puVar1);
    }
    *(uint *)(param_1 + 0x28) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x2c) < iVar3 + 1U) {
      FUN_1447a1bd6((undefined8 *)(param_1 + 0x20),iVar3);
      local_60 = *(undefined8 **)(param_1 + 0x20);
    }
    plVar2 = local_60 + lVar7 * 2;
    local_60[lVar7 * 2] = 0;
    (local_60 + lVar7 * 2)[1] = 0;
    FUN_14006620a(&local_58,*param_2,*(undefined4 *)(param_2 + 1));
    if (&local_58 == plVar2) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      *plVar2 = local_58;
      *(undefined4 *)(plVar2 + 1) = local_50;
      *(undefined4 *)((longlong)plVar2 + 0xc) = local_4c;
    }
  }
LAB_146fe47d3:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe48ec FUN_146fe48ec body=481 status=ok
// SIG undefined FUN_146fe48ec(void)

void FUN_146fe48ec(longlong param_1,longlong *param_2,char *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  int local_58;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x56) == '\0') {
    if ((((*(char *)(param_1 + 0x53) == '\0') && (*(longlong *)(param_1 + 0x30) != 0)) &&
        ((*param_3 != '\0' || ((*(byte *)(param_1 + 0x50) & 1) != 0)))) &&
       (((((*(byte *)(param_1 + 0x51) | param_3[1]) & 1) == 0 || (param_3[2] != '\0')) ||
        ((*(byte *)(param_1 + 0x52) & 1) != 0)))) {
      if (param_1 != 0) {
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
      }
      local_60 = CONCAT62(CONCAT51(local_60._3_5_,param_3[2]),*(undefined2 *)param_3);
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_146fff10e(param_2,iVar4);
      }
      lVar1 = *param_2;
      lVar6 = (longlong)iVar4 * 0x10;
      *(longlong *)(lVar1 + lVar6) = param_1;
      *(undefined2 *)(lVar1 + 8 + lVar6) = (undefined2)local_60;
      *(undefined1 *)(lVar1 + 10 + lVar6) = local_60._2_1_;
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if (iVar4 == 0) {
      bVar5 = 0;
    }
    else {
      local_4b = 1;
      if (*param_3 == '\0') {
        local_4b = (undefined1)*(undefined4 *)(param_1 + 0x50);
      }
      local_4a = *(undefined1 *)(param_1 + 0x51);
      if (param_3[1] != '\0') {
        local_4a = 1;
      }
      local_49 = *(undefined1 *)(param_1 + 0x52);
      if (param_3[2] != '\0') {
        local_49 = 1;
      }
      local_60 = 0;
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      local_58 = iVar4;
      FUN_146fff194(&local_60,iVar4);
      FUN_146fff1ed(local_60,uVar2,iVar4);
      lVar1 = local_60;
      lVar6 = (longlong)local_58;
      if (lVar6 == 0) {
        bVar5 = 0;
        iVar4 = 0;
      }
      else {
        bVar5 = 1;
        lVar7 = 0;
        do {
          lVar3 = *(longlong *)(lVar1 + lVar7);
          if (*(char *)(lVar3 + 0x56) == '\0') {
            FUN_146fe48ec(lVar3,param_2,&local_4b);
            bVar5 = bVar5 & *(byte *)(*(longlong *)(lVar1 + lVar7) + 0x56);
          }
          lVar7 = lVar7 + 8;
        } while (lVar6 * 8 != lVar7);
        bVar5 = bVar5 ^ 1;
        iVar4 = local_58;
      }
      FUN_146ffeeda(local_60,iVar4);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    if (!bVar8 && bVar5 == 0) {
      FUN_142ac41cc(param_1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe4ace FUN_146fe4ace body=112 status=ok
// SIG undefined FUN_146fe4ace(void)

void FUN_146fe4ace(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar3 = 0;
    do {
      FUN_146fe4ace(*(undefined8 *)(lVar1 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar2 * 8 != lVar3);
    iVar2 = *(int *)(param_1 + 0x18);
  }
  if (*(int *)(param_1 + 0x1c) != iVar2) {
    FUN_146ffef14(param_1 + 0x10);
  }
  if (*(int *)(param_1 + 0x2c) == *(int *)(param_1 + 0x28)) {
    return;
  }
  FUN_1408be2c4(param_1 + 0x20);
  return;
}



// FUNCTION 146fe4b3e FUN_146fe4b3e body=173 status=ok
// SIG undefined FUN_146fe4b3e(void)

void FUN_146fe4b3e(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  uVar3 = FUN_146fe4bfc();
  if ((int)uVar3 < *(int *)(param_1 + 0x18)) {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar3 * 8);
    local_58 = *(undefined8 *)(lVar1 + 0x40);
    local_50 = *(int *)(lVar1 + 0x48) + -1;
    if (*(int *)(lVar1 + 0x48) == 0) {
      local_50 = 0;
    }
    cVar2 = FUN_146819142();
    if (cVar2 != '\0') {
      FUN_146fe41be(lVar1);
      FUN_146fff294((longlong *)(param_1 + 0x10),uVar3);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe4bfc FUN_146fe4bfc body=189 status=ok
// SIG undefined FUN_146fe4bfc(void)

int FUN_146fe4bfc(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)*(uint *)(param_1 + 0x18) < 1) {
    iVar7 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x10);
    iVar7 = 0;
    uVar8 = *(uint *)(param_1 + 0x18);
    do {
      uVar1 = (uVar8 >> 1) + iVar7;
      local_58 = *param_2;
      uStack_54 = param_2[1];
      uStack_50 = param_2[2];
      uStack_4c = param_2[3];
      lVar4 = *(longlong *)(lVar3 + (ulonglong)uVar1 * 8);
      local_68 = *(undefined8 *)(lVar4 + 0x40);
      iVar2 = *(int *)(lVar4 + 0x48);
      local_60 = 0;
      if (iVar2 != 0) {
        local_60 = iVar2 + -1;
      }
      cVar6 = FUN_14490770e(&local_68,&local_58);
      if (cVar6 != '\0') {
        iVar7 = uVar1 + (uVar8 & 1);
      }
      bVar5 = 1 < uVar8;
      uVar8 = uVar8 >> 1;
    } while (bVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe4cba FUN_146fe4cba body=439 status=ok
// SIG undefined FUN_146fe4cba(void)

undefined8 *
FUN_146fe4cba(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_14006620a(&local_40,*param_3,*(undefined4 *)(param_3 + 1));
  if (&local_40 == param_1 + 0xc) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0xc] != 0) {
      FUN_1400020a8();
    }
    param_1[0xc] = local_40;
    local_40 = 0;
    *(undefined4 *)(param_1 + 0xd) = local_38;
    *(undefined4 *)((longlong)param_1 + 0x6c) = local_34;
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_14006620a(&local_40,*param_4,*(undefined4 *)(param_4 + 1));
  if (&local_40 == param_1 + 0xe) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0xe] != 0) {
      FUN_1400020a8();
    }
    param_1[0xe] = local_40;
    local_40 = 0;
    *(undefined4 *)(param_1 + 0xf) = local_38;
    *(undefined4 *)((longlong)param_1 + 0x7c) = local_34;
  }
  param_1[0x10] = 0;
  param_1[0x11] = param_2;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  local_58 = 0;
  uStack_50 = 0;
  FUN_142ac3410(puVar3,param_1,0);
  puVar2 = (undefined8 *)param_1[0x10];
  if (puVar2 != puVar3) {
    param_1[0x10] = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
      UNLOCK();
    }
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  FUN_146fe4e72(param_1);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe4e72 FUN_146fe4e72 body=2218 status=ok
// SIG undefined FUN_146fe4e72(void)

void FUN_146fe4e72(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  uint *puVar4;
  undefined1 *puVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_3e8 [32];
  undefined1 local_3c8;
  undefined4 *local_3c0;
  undefined8 local_3b0;
  int local_3a8;
  undefined8 local_3a0;
  int local_398;
  undefined8 local_390;
  int local_388;
  ulonglong *local_380;
  undefined8 local_378;
  uint *puStack_370;
  uint local_368;
  int iStack_364;
  undefined8 uStack_360;
  undefined2 local_353;
  undefined1 local_351;
  undefined8 local_350;
  int local_348;
  longlong local_340;
  int local_338;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined8 uStack_328;
  uint local_320;
  int iStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined1 local_310;
  undefined1 local_30f [4];
  undefined1 local_30b;
  undefined1 local_309;
  longlong *local_308;
  undefined8 local_300;
  ulonglong *local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e4;
  ulonglong local_e8;
  longlong *plStack_e0;
  uint local_d8;
  int iStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  int local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  local_78 = 0;
  iVar12 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  plVar8 = param_1 + 2;
  plVar1 = param_1 + 4;
  local_e8 = 0x100000000;
  local_d8 = 0xffffffff;
  iStack_d4 = 0;
  local_d0 = 0;
  plStack_e0 = plVar1;
  if ((int)param_1[7] != 0) {
    FUN_1449c0562(&local_e8);
    iVar12 = (int)param_1[7];
  }
  local_2f0._0_4_ = local_d8;
  local_2f0._4_4_ = iStack_d4;
  local_2e8 = local_d0;
  local_2e4 = local_cc;
  local_300 = (ulonglong *)local_e8;
  local_2f8 = (ulonglong *)plStack_e0;
  local_308 = plVar8;
  if ((iStack_d4 != iVar12) || (plStack_e0 != plVar1)) {
    do {
      FUN_14482b35e(local_98,&local_e8,(longlong)local_2f0._4_4_ * 0x18 + *local_308,0);
      local_2f0._0_4_ = (uint)local_2f0 & ~local_300._4_4_;
      FUN_1449c0562(&local_300);
    } while (local_308 != plVar8 || (local_2f8 != (ulonglong *)plVar1 || local_2f0._4_4_ != iVar12))
    ;
  }
  FUN_145d323a0(plVar8,*(undefined4 *)(param_1[0x11] + 0x78));
  lVar13 = param_1[0x11];
  if ((longlong)*(int *)(lVar13 + 0x68) != 0) {
    puVar11 = *(undefined8 **)(lVar13 + 0x60);
    puVar10 = puVar11 + (longlong)*(int *)(lVar13 + 0x68) * 2;
    do {
      local_308 = (longlong *)0x0;
      local_300 = (ulonglong *)((ulonglong)local_300 & 0xffffffff00000000);
      local_340 = param_1[0xe];
      local_338 = (int)param_1[0xf] + -1;
      if ((int)param_1[0xf] == 0) {
        local_338 = 0;
      }
      local_350 = *puVar11;
      local_348 = *(int *)(puVar11 + 1) + -1;
      if (*(int *)(puVar11 + 1) == 0) {
        local_348 = 0;
      }
      cVar6 = FUN_14022fd12(&local_350,&local_340,&local_308);
      if (cVar6 != '\0') {
        FUN_146fe5dac(plVar8,&local_e8,&local_308);
      }
      puVar11 = puVar11 + 2;
    } while (puVar11 != puVar10);
    lVar13 = param_1[0x11];
  }
  if ((longlong)*(int *)(lVar13 + 0x78) != 0) {
    lVar9 = *(longlong *)(lVar13 + 0x70);
    lVar13 = (longlong)*(int *)(lVar13 + 0x78) << 4;
    do {
      FUN_14482b35e(plVar8,&local_308,lVar9,0);
      lVar9 = lVar9 + 0x10;
      lVar13 = lVar13 + -0x10;
    } while (lVar13 != 0);
  }
  if ((longlong)(int)param_1[1] != 0) {
    lVar13 = *param_1;
    lVar9 = (longlong)(int)param_1[1] << 4;
    do {
      FUN_14482b35e(plVar8,&local_308,lVar13,0);
      lVar13 = lVar13 + 0x10;
      lVar9 = lVar9 + -0x10;
    } while (lVar9 != 0);
  }
  local_c8 = 0;
  iVar12 = 0;
  local_c0 = 0;
  local_e8 = 0;
  plStack_e0 = (longlong *)0x0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_380 = (ulonglong *)0x100000000;
  puStack_370 = (uint *)0xffffffff;
  local_368 = 0;
  local_378 = plVar1;
  if ((int)param_1[7] != 0) {
    FUN_1449c0562(&local_380);
    iVar12 = (int)param_1[7];
  }
  local_2f0 = (ulonglong)puStack_370;
  uVar3 = local_2f0;
  local_2e8 = local_368;
  local_2e4 = iStack_364;
  local_300 = local_380;
  local_2f8 = (ulonglong *)local_378;
  local_2f0._4_4_ = (int)((ulonglong)puStack_370 >> 0x20);
  iVar7 = local_2f0._4_4_;
  local_308 = plVar8;
  if ((local_2f0._4_4_ != iVar12) || (local_2f0 = uVar3, local_378 != plVar1)) {
    do {
      local_2f0 = uVar3;
      lVar13 = (longlong)iVar7 * 0x18 + *local_308;
      iVar7 = FUN_1411a58b4(local_98,lVar13);
      if (iVar7 == 0) {
        FUN_14482b35e(&local_e8,&local_380,lVar13,0);
      }
      local_2f0 = CONCAT44(local_2f0._4_4_,(uint)local_2f0 & ~local_300._4_4_);
      FUN_1449c0562(&local_300);
      iVar7 = local_2f0._4_4_;
      uVar3 = local_2f0;
    } while (local_308 != plVar8 || (local_2f8 != (ulonglong *)plVar1 || local_2f0._4_4_ != iVar12))
    ;
  }
  local_308 = (longlong *)&local_2e8;
  local_2f0 = local_2f0 & 0xffffffffffffff00;
  local_2f8 = &local_e8;
  local_300 = (ulonglong *)local_308;
  plVar8 = (longlong *)FUN_14054d1d4();
  local_30b = 0;
  local_309 = 0;
  local_353 = 0;
  local_351 = 0;
  local_30f._0_3_ = 0x10100;
  uStack_328 = &local_d8;
  local_330 = 0;
  uStack_32c = 1;
  local_320 = 0xffffffff;
  iStack_31c = 0;
  uStack_318 = 0;
  iVar12 = 0;
  if (local_c0 != 0) {
    FUN_1449c0562(&local_330);
    iVar12 = local_c0;
    uStack_328 = uStack_328;
  }
  puStack_370 = uStack_328;
  local_378 = (longlong *)CONCAT44(uStack_32c,local_330);
  local_368 = local_320;
  iStack_364 = iStack_31c;
  uStack_360 = CONCAT44(uStack_314,uStack_318);
  local_380 = &local_e8;
  if ((iStack_31c != iVar12) || (puStack_370 != &local_d8)) {
    uStack_328 = puStack_370;
    do {
      uVar3 = *local_380;
      lVar13 = (longlong)iStack_364;
      local_300 = (ulonglong *)local_308;
      iVar7 = (int)param_1[0xd] + -1;
      if ((int)param_1[0xd] == 0) {
        iVar7 = 0;
      }
      FUN_1449668a2(&local_308,param_1[0xc],iVar7);
      local_390 = *(undefined8 *)(uVar3 + lVar13 * 0x18);
      iVar7 = *(int *)(uVar3 + 8 + lVar13 * 0x18);
      local_388 = iVar7 + -1;
      if (iVar7 == 0) {
        local_388 = 0;
      }
      FUN_1404d3f7a(&local_308,&local_390);
      *(undefined2 *)local_300 = 0;
      cVar6 = (**(code **)(*plVar8 + 0x50))(plVar8,local_308);
      puVar4 = uStack_328;
      if (cVar6 != '\0') {
        puVar11 = (undefined8 *)(uVar3 + lVar13 * 0x18);
        uStack_328._0_4_ = (uint)uStack_328._3_1_ << 0x18;
        local_330 = 0;
        uStack_32c = 0;
        local_3a0 = *puVar11;
        iVar7 = *(int *)(puVar11 + 1);
        local_398 = iVar7 + -1;
        if (iVar7 == 0) {
          local_398 = 0;
        }
        local_3c0 = &local_330;
        local_3c8 = 1;
        FUN_142ac36f0(param_1[0x10],&local_3a0,&local_353,&local_310);
        puVar11 = (undefined8 *)CONCAT44(uStack_32c,local_330);
        puVar4 = (uint *)CONCAT44(uStack_328._4_4_,(uint)uStack_328);
        if (puVar11 != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(puVar11 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          puVar4 = (uint *)CONCAT44(uStack_328._4_4_,(uint)uStack_328);
          if (*piVar2 == 0) {
            (**(code **)*puVar11)(puVar11,1);
            puVar4 = (uint *)CONCAT44(uStack_328._4_4_,(uint)uStack_328);
          }
        }
      }
      local_368 = local_368 & ~local_378._4_4_;
      uStack_328 = puVar4;
      FUN_1449c0562(&local_378);
    } while (local_380 != &local_e8 || (puStack_370 != &local_d8 || iStack_364 != iVar12));
  }
  local_30f._1_2_ = 0x100;
  uStack_328 = (uint *)local_88;
  local_330 = 0;
  uStack_32c = 1;
  local_320 = 0xffffffff;
  iStack_31c = 0;
  uStack_318 = 0;
  if (local_70 == 0) {
    iVar12 = 0;
    puStack_370 = uStack_328;
  }
  else {
    FUN_1449c0562(&local_330);
    iVar12 = local_70;
    puStack_370 = (uint *)(undefined1 *)uStack_328;
  }
  uStack_360 = CONCAT44(uStack_314,uStack_318);
  local_368 = local_320;
  iStack_364 = iStack_31c;
  local_378 = (longlong *)CONCAT44(uStack_32c,local_330);
  local_380 = (ulonglong *)local_98;
  if ((iStack_31c != iVar12) || (uStack_328 = puStack_370, puStack_370 != (uint *)local_88)) {
    puVar5 = (undefined1 *)puStack_370;
    do {
      uStack_328._4_4_ = (undefined4)((ulonglong)puVar5 >> 0x20);
      uStack_328._0_4_ = (uint)puVar5;
      uStack_328._0_4_ = (uint)uStack_328 & 0xff000000;
      local_330 = 0;
      uStack_32c = 0;
      local_3b0 = *(undefined8 *)(*local_380 + (longlong)iStack_364 * 0x18);
      iVar7 = *(int *)(*local_380 + 8 + (longlong)iStack_364 * 0x18);
      local_3a8 = iVar7 + -1;
      if (iVar7 == 0) {
        local_3a8 = 0;
      }
      local_3c8 = 0;
      local_3c0 = &local_330;
      FUN_142ac36f0(param_1[0x10],&local_3b0,&local_353,&local_310);
      puVar11 = (undefined8 *)CONCAT44(uStack_32c,local_330);
      if (puVar11 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar11 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar11)(puVar11,1);
        }
      }
      local_368 = local_368 & ~local_378._4_4_;
      FUN_1449c0562(&local_378);
      puVar5 = (undefined1 *)uStack_328;
    } while (local_380 != (ulonglong *)local_98 ||
             (puStack_370 != (uint *)local_88 || iStack_364 != iVar12));
  }
  if ((char)local_2f0 == '\x01') {
    FUN_1400020a8(local_308);
  }
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_e8);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(local_98);
  if ((local_48 ^ (ulonglong)auStack_3e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe571e FUN_146fe571e body=187 status=ok
// SIG undefined FUN_146fe571e(void)

void FUN_146fe571e(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  FUN_146fe41be(param_1[0x10]);
  puVar2 = (undefined8 *)param_1[0x10];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[0x10] = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    puVar2 = (undefined8 *)param_1[0x10];
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 2);
  FUN_1447a1747(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fe57da FUN_146fe57da body=211 status=ok
// SIG undefined FUN_146fe57da(void)

undefined8
FUN_146fe57da(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  int local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  uVar2 = 0;
  uStack_30 = 0;
  local_48 = *(undefined8 *)(param_1 + 0x60);
  local_40 = *(int *)(param_1 + 0x68) + -1;
  if (*(int *)(param_1 + 0x68) == 0) {
    local_40 = 0;
  }
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  cVar1 = FUN_14022fd12(&local_58,&local_48);
  if (cVar1 != '\0') {
    local_5a = 0;
    local_5c = 0;
    local_78 = (undefined4)local_38;
    uStack_74 = local_38._4_4_;
    uStack_70 = uStack_30;
    uStack_6c = uStack_2c;
    local_80 = param_5;
    local_88 = param_4;
    uVar2 = FUN_142ac34ec(*(undefined8 *)(param_1 + 0x80),&local_78,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe58ae FUN_146fe58ae body=403 status=ok
// SIG undefined FUN_146fe58ae(void)

longlong FUN_146fe58ae(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = FUN_146fe455e(param_1[0x10]);
  lVar6 = lVar6 + (longlong)*(int *)((longlong)param_1 + 0xc) * 0x10 + 0x58;
  if ((longlong)(int)param_1[1] != 0) {
    lVar7 = 0;
    do {
      lVar6 = lVar6 + (longlong)*(int *)(*param_1 + 0xc + lVar7) * 2;
      lVar7 = lVar7 + 0x10;
    } while ((longlong)(int)param_1[1] * 0x10 != lVar7);
  }
  iVar3 = *(int *)((longlong)param_1 + 0x7c);
  plVar1 = param_1 + 2;
  iVar4 = *(int *)((longlong)param_1 + 0x1c);
  iVar5 = *(int *)((longlong)param_1 + 0x3c);
  iVar8 = 0;
  lVar7 = (longlong)(int)param_1[0xb] * 4;
  if ((ulonglong)(longlong)(int)param_1[0xb] < 2) {
    lVar7 = 0;
  }
  plVar2 = param_1 + 4;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar2;
  if ((int)param_1[7] != 0) {
    FUN_1449c0562(&local_58);
    iVar8 = (int)param_1[7];
  }
  lVar7 = lVar6 + (longlong)iVar3 * 2 + (longlong)iVar4 * 0x18 + (ulonglong)(iVar5 + 0x1fU >> 5) * 4
          + lVar7;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = plVar1;
  if ((iStack_44 != iVar8) || (local_50 != plVar2)) {
    do {
      lVar7 = lVar7 + (longlong)*(int *)(*local_80 + 0xc + (longlong)iStack_64 * 0x18) * 2;
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (local_70 != plVar2 || iStack_64 != iVar8));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe5a42 FUN_146fe5a42 body=72 status=ok
// SIG undefined FUN_146fe5a42(void)

void FUN_146fe5a42(longlong param_1)

{
  FUN_146fe4ace(*(undefined8 *)(param_1 + 0x80));
  if (*(int *)(param_1 + 0xc) != *(int *)(param_1 + 8)) {
    FUN_1408be2c4(param_1);
  }
  FUN_145cb12da(param_1 + 0x10);
  FUN_145cb1204(param_1 + 0x10,*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x44),1);
  return;
}



// FUNCTION 146fe5a8a FUN_146fe5a8a body=180 status=ok
// SIG undefined FUN_146fe5a8a(void)

void FUN_146fe5a8a(longlong param_1,undefined4 *param_2,undefined2 *param_3)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  int local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = *(undefined8 *)(param_1 + 0x60);
  local_30 = *(int *)(param_1 + 0x68) + -1;
  if (*(int *)(param_1 + 0x68) == 0) {
    local_30 = 0;
  }
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  cVar1 = FUN_14022fd12(&local_48,&local_38);
  if (cVar1 == '\0') {
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  else {
    local_4a = 0;
    local_4c = 0;
    local_68 = (undefined4)local_28;
    uStack_64 = local_28._4_4_;
    uStack_60 = uStack_20;
    uStack_5c = uStack_1c;
    FUN_146fe444a(*(undefined8 *)(param_1 + 0x80),&local_68,&local_4c,param_3);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe5b40 FUN_146fe5b40 body=618 status=ok
// SIG undefined FUN_146fe5b40(void)

undefined4
FUN_146fe5b40(longlong *param_1,undefined4 *param_2,undefined1 *param_3,undefined1 param_4,
             longlong *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  longlong *local_d0;
  undefined1 local_c1;
  undefined4 *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  int local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_68;
  int local_60;
  undefined1 local_58 [8];
  undefined3 uStack_50;
  undefined1 uStack_4d;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = param_1[0xc];
  local_80 = (int)param_1[0xd] + -1;
  if ((int)param_1[0xd] == 0) {
    local_80 = 0;
  }
  local_98 = *param_2;
  uStack_94 = param_2[1];
  uStack_90 = param_2[2];
  uStack_8c = param_2[3];
  cVar3 = FUN_14022fd12();
  if (cVar3 == '\0') {
LAB_146fe5d2e:
    if ((param_5 != (longlong *)0x0) &&
       (puVar2 = (undefined8 *)*param_5, puVar2 != (undefined8 *)0x0)) {
      *param_5 = 0;
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    uVar4 = 0;
  }
  else {
    if ((param_3[5] == '\x01') &&
       (local_c1 = param_4, local_c0 = param_2, (longlong)(int)param_1[1] != 0)) {
      puVar5 = (ulonglong *)*param_1;
      puVar6 = puVar5 + (longlong)(int)param_1[1] * 2;
      do {
        local_58[0] = (undefined1)local_78;
        local_58[1] = (char)((ulonglong)local_78 >> 8);
        local_58[2] = (undefined1)((ulonglong)local_78 >> 0x10);
        local_58[3] = (char)((ulonglong)local_78 >> 0x18);
        local_58[4] = (undefined1)((ulonglong)local_78 >> 0x20);
        local_58[5] = (undefined1)((ulonglong)local_78 >> 0x28);
        local_58[6] = (undefined1)((ulonglong)local_78 >> 0x30);
        local_58[7] = (undefined1)((ulonglong)local_78 >> 0x38);
        uStack_50 = (undefined3)uStack_70;
        uStack_4d = (undefined1)((uint)uStack_70 >> 0x18);
        uStack_4c = uStack_6c;
        local_68 = *puVar5;
        local_60 = (int)puVar5[1] + -1;
        if ((int)puVar5[1] == 0) {
          local_60 = 0;
        }
        cVar3 = FUN_14474d122(&local_68,local_58);
        if (cVar3 != '\0') {
          local_58[1] = param_3[1];
          if (local_58[1] == '\x01') {
            local_58[0] = *param_3;
          }
          local_58[3] = param_3[3];
          if (local_58[3] == '\x01') {
            local_58[2] = param_3[2];
          }
          local_58[4] = param_3[4];
          cVar3 = param_3[7];
          stack0xffffffffffffffaf = CONCAT31(uStack_50,cVar3);
          if (cVar3 == '\x01') {
            local_58[6] = param_3[6];
          }
          local_58[5] = 0;
          if ((local_58[3] == '\0' && local_58[1] == '\0') && cVar3 == '\0') goto LAB_146fe5d2e;
          local_a8 = *local_c0;
          uStack_a4 = local_c0[1];
          uStack_a0 = local_c0[2];
          uStack_9c = local_c0[3];
          local_d8 = param_5;
          uVar4 = FUN_146fe5b40(param_1,&local_a8,local_58,local_c1);
          goto LAB_146fe5d56;
        }
        puVar5 = puVar5 + 2;
        param_4 = local_c1;
      } while (puVar5 != puVar6);
    }
    local_d0 = param_5;
    if (param_5 == (longlong *)0x0) {
      local_d0 = (longlong *)local_58;
    }
    local_58[0] = 0;
    local_58[1] = '\0';
    local_58[2] = 0;
    local_58[3] = '\0';
    local_58[4] = 0;
    local_58[5] = 0;
    local_58[6] = 0;
    stack0xffffffffffffffaf = 0;
    local_68 = local_68 & 0xffffffffff000000;
    local_b8 = (undefined4)local_78;
    uStack_b4 = local_78._4_4_;
    uStack_b0 = uStack_70;
    uStack_ac = uStack_6c;
    local_d8 = (longlong *)CONCAT71(local_d8._1_7_,param_4);
    uVar4 = FUN_142ac36f0(param_1[0x10],&local_b8,&local_68,param_3);
    puVar2 = (undefined8 *)
             CONCAT17(local_58[7],
                      CONCAT16(local_58[6],
                               CONCAT15(local_58[5],
                                        CONCAT14(local_58[4],
                                                 CONCAT13(local_58[3],
                                                          CONCAT12(local_58[2],
                                                                   CONCAT11(local_58[1],local_58[0])
                                                                  ))))));
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
LAB_146fe5d56:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 146fe5dac FUN_146fe5dac body=412 status=ok
// SIG undefined FUN_146fe5dac(void)

undefined4 * FUN_146fe5dac(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50 [2];
  longlong *local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14482b5a6(param_1,local_50);
  *local_48 = 0;
  local_48[1] = 0;
  FUN_14006620a(&local_40,*param_3,*(undefined4 *)(param_3 + 1));
  if (&local_40 == local_48) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*local_48 != 0) {
      FUN_1400020a8();
    }
    *local_48 = local_40;
    local_40 = 0;
    *(undefined4 *)(local_48 + 1) = local_38;
    *(undefined4 *)((longlong)local_48 + 0xc) = local_34;
  }
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_40 = CONCAT44(local_40._4_4_,local_50[0]);
  iVar7 = (int)local_48[1];
  if (iVar7 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*local_48;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar6);
  local_58 = 0;
  cVar2 = FUN_14170e316(param_1,uVar3,local_48,&local_40);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_48 + 0x14) = uVar3;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = (undefined4)local_40;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14482b9e8(param_1);
    }
  }
  *param_2 = (undefined4)local_40;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe5f4a FUN_146fe5f4a body=301 status=ok
// SIG undefined FUN_146fe5f4a(void)

void FUN_146fe5f4a(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  lVar5 = (longlong)iVar2;
  if (lVar5 != 0) {
    lVar7 = lVar5 << 4;
    puVar6 = puVar4;
    do {
      local_58._0_4_ = *(undefined4 *)param_2;
      local_58._4_4_ = *(undefined4 *)((longlong)param_2 + 4);
      uStack_50 = *(undefined4 *)(param_2 + 1);
      uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
      local_68 = *puVar6;
      local_60 = *(int *)(puVar6 + 1) + -1;
      if (*(int *)(puVar6 + 1) == 0) {
        local_60 = 0;
      }
      cVar3 = FUN_146819142(&local_68,&local_58);
      if (cVar3 != '\0') {
        if (puVar6 != (undefined8 *)0x0) goto LAB_146fe6035;
        break;
      }
      puVar6 = puVar6 + 2;
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
  }
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1447a1bd6(param_1,iVar2);
    puVar4 = (undefined8 *)*param_1;
  }
  plVar1 = puVar4 + lVar5 * 2;
  puVar4[lVar5 * 2] = 0;
  (puVar4 + lVar5 * 2)[1] = 0;
  FUN_14006620a(&local_58,*param_2,*(undefined4 *)(param_2 + 1));
  if (&local_58 == plVar1) {
    if (CONCAT44(local_58._4_4_,(undefined4)local_58) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    *plVar1 = CONCAT44(local_58._4_4_,(undefined4)local_58);
    *(undefined4 *)(plVar1 + 1) = uStack_50;
    *(undefined4 *)((longlong)plVar1 + 0xc) = uStack_4c;
  }
LAB_146fe6035:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fe6078 FUN_146fe6078 body=150 status=ok
// SIG undefined FUN_146fe6078(void)

void FUN_146fe6078(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined2 local_2c;
  undefined1 local_2a;
  longlong local_28;
  undefined8 uStack_20;
  undefined1 local_b [3];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = &local_28;
  local_28 = 0;
  uStack_20 = 0;
  local_2a = 0;
  local_2c = 0;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_58 = local_b;
  lVar1 = FUN_142ac34ec(*(undefined8 *)(param_1 + 0x80),&local_48,1);
  if (lVar1 != 0) {
    FUN_142ac426a(lVar1,(int)uStack_20 < 2);
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe6110 FUN_146fe6110 body=238 status=ok
// SIG undefined FUN_146fe6110(void)

bool FUN_146fe6110(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  uVar1 = *(uint *)(param_1 + 1);
  uVar6 = uVar1;
  if (0 < (int)uVar1) {
    uVar7 = (ulonglong)uVar1;
    uVar4 = 0;
    bVar5 = false;
    do {
      while( true ) {
        uVar6 = (uint)uVar7;
        local_58 = local_78;
        uStack_54 = uStack_74;
        uStack_50 = uStack_70;
        uStack_4c = uStack_6c;
        local_68 = *(undefined8 *)(*param_1 + uVar4 * 0x10);
        iVar2 = *(int *)(*param_1 + 8 + uVar4 * 0x10);
        local_60 = iVar2 + -1;
        if (iVar2 == 0) {
          local_60 = 0;
        }
        cVar3 = FUN_146819142(&local_68,&local_58);
        if (cVar3 == '\0') break;
        FUN_146294fd6(param_1,uVar4 & 0xffffffff);
        uVar7 = (ulonglong)(int)param_1[1];
        bVar5 = true;
        if ((longlong)uVar7 <= (longlong)uVar4) goto LAB_146fe61c5;
      }
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)(int)uVar6);
    if (bVar5) {
LAB_146fe61c5:
      FUN_140b12644(param_1);
      uVar6 = *(uint *)(param_1 + 1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1 != uVar6;
}



// FUNCTION 146fe6200 FUN_146fe6200 body=54 status=ok
// SIG undefined FUN_146fe6200(void)

void FUN_146fe6200(undefined8 *param_1)

{
  FUN_1447a1747(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1408be2c4(param_1,0);
    return;
  }
  return;
}



// FUNCTION 146fe6236 FUN_146fe6236 body=351 status=ok
// SIG undefined FUN_146fe6236(void)

longlong * FUN_146fe6236(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_2a8 [32];
  undefined1 *local_288;
  undefined4 local_280;
  undefined8 local_278;
  int local_270;
  undefined1 *local_268;
  undefined1 *local_260;
  ulonglong *local_258;
  char local_250;
  undefined1 local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)(int)param_1[1] != 0) {
    puVar4 = (undefined8 *)*param_1;
    puVar3 = puVar4 + (longlong)(int)param_1[1] * 2;
    do {
      local_250 = '\0';
      iVar1 = (int)param_1[0xd] + -1;
      if ((int)param_1[0xd] == 0) {
        iVar1 = 0;
      }
      local_268 = local_248;
      local_260 = local_248;
      local_258 = &local_48;
      FUN_1449668a2(&local_268,param_1[0xc],iVar1);
      local_278 = *puVar4;
      local_270 = *(int *)(puVar4 + 1) + -1;
      if (*(int *)(puVar4 + 1) == 0) {
        local_270 = 0;
      }
      FUN_1404d3f7a(&local_268,&local_278);
      local_288 = local_268;
      local_280 = (undefined4)((ulonglong)((longlong)local_260 - (longlong)local_268) >> 1);
      lVar2 = FUN_146fe6396(param_1[0x11],&local_288);
      if (lVar2 != 0) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_146fff38c(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
      }
      if (local_250 == '\x01') {
        FUN_1400020a8(local_268);
      }
      puVar4 = puVar4 + 2;
    } while (puVar4 != puVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe6396 FUN_146fe6396 body=148 status=ok
// SIG undefined FUN_146fe6396(void)

longlong FUN_146fe6396(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  uVar3 = FUN_146fe8848();
  lVar4 = 0;
  if (uVar3 != *(uint *)(param_1 + 0x148)) {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x140) + (ulonglong)uVar3 * 8);
    local_58 = *(undefined8 *)(lVar1 + 0x60);
    local_50 = *(int *)(lVar1 + 0x68) + -1;
    if (*(int *)(lVar1 + 0x68) == 0) {
      local_50 = 0;
    }
    cVar2 = FUN_146819142();
    if (cVar2 != '\0') {
      lVar4 = lVar1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 146fe642c FUN_146fe642c body=576 status=ok
// SIG undefined FUN_146fe642c(void)

void FUN_146fe642c(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = &PTR_LAB_149fc3ef0;
  LOCK();
  *(int *)((longlong)param_1 + 0xdc) = *(int *)((longlong)param_1 + 0xdc) + 1;
  UNLOCK();
  if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1a] + 0x20))();
    plVar2 = (longlong *)param_1[0x1a];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,1);
    }
    param_1[0x1a] = 0;
  }
  lVar4 = param_1[0x28];
  iVar1 = *(int *)(param_1 + 0x29);
  uVar3 = 0;
  if ((longlong)iVar1 != 0) {
    lVar5 = 0;
    do {
      *(undefined8 *)(*(longlong *)(lVar4 + lVar5) + 0x90) = 0;
      FUN_146fe6200(*(undefined8 *)(lVar4 + lVar5));
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
    uVar3 = *(undefined4 *)(param_1 + 0x29);
    lVar4 = param_1[0x28];
  }
  FUN_146fff4b0(lVar4,uVar3);
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (*(int *)((longlong)param_1 + 0x14c) != 0) {
    FUN_146fff5fc(param_1 + 0x28,0);
  }
  FUN_146fe666c(param_1 + 0x30);
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_146fff52a(param_1[0x2c],*(undefined4 *)(param_1 + 0x2d));
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_146fff4f4(param_1[0x2a],*(undefined4 *)(param_1 + 0x2b));
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_146fff4b0(param_1[0x28],*(undefined4 *)(param_1 + 0x29));
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_146fff473(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_146fff411(param_1[0x20],*(undefined4 *)(param_1 + 0x21));
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x1e],*(undefined4 *)(param_1 + 0x1f));
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_144a75412(param_1 + 0x1d);
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x10);
  FUN_1447a1747(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
                    /* WARNING: Could not recover jumptable at 0x000146fe6669. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



// FUNCTION 146fe666c FUN_146fe666c body=62 status=ok
// SIG undefined FUN_146fe666c(void)

void FUN_146fe666c(longlong *param_1)

{
  FUN_146ffa5ca(param_1 + 4);
  FUN_146ffa616(param_1 + 2);
  FUN_146ffa660(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fe66ae FUN_146fe66ae body=68 status=ok
// SIG undefined FUN_146fe66ae(void)

ulonglong FUN_146fe66ae(DWORD *param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  undefined8 unaff_RBX;
  
  EnterCriticalSection(param_2);
  DVar1 = param_1[1];
  if ((char)DVar1 == '\0') {
    *(undefined1 *)(param_1 + 1) = 1;
    DVar2 = GetCurrentThreadId();
    *param_1 = DVar2;
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
  }
  return (CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)DVar1) ^ 1) & 0xffffffff;
}



// FUNCTION 146fe66f2 FUN_146fe66f2 body=75 status=ok
// SIG undefined FUN_146fe66f2(void)

void FUN_146fe66f2(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 8));
  *(undefined1 *)(lVar2 + 0x34) = 0;
  *(undefined4 *)(lVar2 + 0x30) = 0;
  if ((LPCRITICAL_SECTION)(lVar2 + 8) != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 8));
  }
  if (*(longlong *)(*param_1 + 0xd0) != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0xe0);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}



// FUNCTION 146fe6748 FUN_146fe6748 body=318 status=ok
// SIG undefined FUN_146fe6748(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146fe6748(undefined8 *param_1)

{
  undefined1 auStack_a8 [32];
  longlong local_88 [6];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined1 *)((longlong)param_1 + 0x31) = 0;
  FUN_146ffa660(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1470039b0(param_1,0);
  }
  if (*(longlong *)param_1[3] != 0) {
    do {
      local_88[4] = 0;
      local_88[5] = 0;
      local_88[2] = 0;
      local_88[3] = 0;
      local_88[0] = 0;
      local_88[1] = 0;
      local_48 = (ulonglong)DAT_14c83e2e8;
      _local_58 = CONCAT44(uRam000000014c83e2dc,_DAT_14c83e2d8);
      _uStack_50 = CONCAT44(uRam000000014c83e2e4,_DAT_14c83e2e0);
      FUN_146fed15a(param_1 + 2,local_88);
      FUN_146fedb88(local_88 + 2);
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
    } while (*(longlong *)param_1[3] != 0);
  }
  if (*(longlong *)param_1[5] != 0) {
    do {
      local_88[2] = 0;
      local_88[3] = 0;
      local_88[0] = 0;
      local_88[1] = 0;
      local_88[4] = local_88[4] & 0xffffffff00000000;
      FUN_146fed1e8(param_1 + 4,local_88);
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
    } while (*(longlong *)param_1[5] != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe6888 FUN_146fe6888 body=565 status=ok
// SIG undefined FUN_146fe6888(void)

/* WARNING: Removing unreachable block (ram,0x000146fe6a32) */

void FUN_146fe6888(longlong param_1,undefined4 *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  LPCRITICAL_SECTION local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = (LPCRITICAL_SECTION)(param_1 + 0x38);
  local_78 = param_2;
  EnterCriticalSection(local_70);
  if (DAT_14c99d668 == '\x01') {
    FUN_14006620a(&local_58,*param_3,*(undefined4 *)(param_3 + 1));
    pvVar4 = local_58;
    uVar6 = (undefined4)uStack_50;
    uVar7 = uStack_50._4_4_;
    iVar1 = *(int *)(param_1 + 0xf8);
    *(uint *)(param_1 + 0xf8) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0xfc) < iVar1 + 1U) {
      FUN_1447a1bd6((longlong *)(param_1 + 0xf0),iVar1);
    }
    lVar3 = *(longlong *)(param_1 + 0xf0);
    lVar9 = (longlong)iVar1 * 0x10;
    *(void **)(lVar3 + lVar9) = pvVar4;
    *(undefined4 *)(lVar3 + 8 + lVar9) = uVar6;
    *(undefined4 *)(lVar3 + 0xc + lVar9) = uVar7;
  }
  else {
    lVar3 = param_4[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar9 = *param_4;
      lVar10 = 0;
      do {
        local_58 = (void *)0x0;
        uVar2 = *(uint *)(lVar9 + 0x18 + lVar10);
        pvVar4 = *(void **)(lVar9 + 0x10 + lVar10);
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
        if ((longlong)(int)uVar2 == 0) {
          uStack_50 = (ulonglong)uVar2;
        }
        else {
          FUN_1446dd670(&local_58,uVar2,0);
          memcpy(local_58,pvVar4,(longlong)(int)uVar2 * 2);
        }
        iVar1 = *(int *)(param_1 + 0xf8);
        *(uint *)(param_1 + 0xf8) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0xfc) < iVar1 + 1U) {
          FUN_1447a1bd6((longlong *)(param_1 + 0xf0),iVar1);
        }
        lVar5 = *(longlong *)(param_1 + 0xf0);
        lVar8 = (longlong)iVar1 * 0x10;
        *(undefined8 *)(lVar5 + lVar8) = 0;
        *(void **)(lVar5 + lVar8) = local_58;
        local_58 = (void *)0x0;
        *(undefined4 *)(lVar5 + 8 + lVar8) = (undefined4)uStack_50;
        *(undefined4 *)(lVar5 + 0xc + lVar8) = uStack_50._4_4_;
        uStack_50 = 0;
        lVar10 = lVar10 + 0x40;
      } while ((longlong)(int)lVar3 * 0x40 != lVar10);
    }
  }
  if (*(int *)(param_5 + 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x108);
    *(uint *)(param_1 + 0x108) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x10c) < iVar1 + 1U) {
      FUN_146fffe64(param_1 + 0x100,iVar1);
    }
    local_58 = (void *)*param_5;
    uStack_50 = param_5[1];
    local_68 = *local_78;
    uStack_64 = local_78[1];
    uStack_60 = local_78[2];
    uStack_5c = local_78[3];
    FUN_146fe890c((longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x100));
    *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + *(int *)(param_5 + 1);
  }
  LeaveCriticalSection(local_70);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe6abe FUN_146fe6abe body=121 status=ok
// SIG undefined FUN_146fe6abe(void)

void FUN_146fe6abe(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146fff10e(param_1,iVar1);
    }
    FUN_146fff7ea((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146fff806(param_1,param_2,iVar1 - param_2);
    FUN_146fff860(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146fe6b38 FUN_146fe6b38 body=147 status=ok
// SIG undefined FUN_146fe6b38(void)

void FUN_146fe6b38(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [36];
  undefined2 local_34;
  undefined1 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x148);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x140);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + lVar4) + 0x80);
      if (*(char *)(lVar3 + 0x56) == '\0') {
        local_32 = 0;
        local_34 = 0;
        FUN_146fe48ec(lVar3,param_2,&local_34);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fe6bcc FUN_146fe6bcc body=348 status=ok
// SIG undefined FUN_146fe6bcc(void)

ulonglong FUN_146fe6bcc(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  wchar_t *_Str;
  size_t sVar4;
  wchar_t *_Str_00;
  uint uVar5;
  ulonglong unaff_RBP;
  undefined7 uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  lVar8 = *param_1;
  uVar1 = *(uint *)(param_1 + 1);
  _Str = (wchar_t *)FUN_1415380f8(1);
  uVar7 = 0;
  uVar10 = 0;
  if (_Str != (wchar_t *)0x0) {
    sVar4 = wcslen(_Str);
    uVar10 = (uint)sVar4;
  }
  _Str_00 = (wchar_t *)FUN_1415380f8(2);
  if (_Str_00 != (wchar_t *)0x0) {
    sVar4 = wcslen(_Str_00);
    uVar7 = (uint)sVar4;
  }
  uVar9 = uVar1;
  if ((int)uVar10 < (int)uVar1) {
    uVar9 = uVar10;
  }
  uVar5 = 0;
  if (0 < (int)uVar9) {
    uVar5 = uVar9;
  }
  if (uVar10 == uVar5) {
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),2);
    if ((uVar10 == 0) || ((int)uVar9 < 1)) goto LAB_146fe6d10;
    iVar3 = FUN_144a54874(_Str,lVar8 + (longlong)(int)uVar1 * 2 + (ulonglong)uVar10 * -2);
    if (iVar3 == 0) goto LAB_146fe6d10;
  }
  uVar10 = uVar1;
  if ((int)uVar7 < (int)uVar1) {
    uVar10 = uVar7;
  }
  uVar9 = 0;
  if (0 < (int)uVar10) {
    uVar9 = uVar10;
  }
  if (uVar7 == uVar9) {
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),2);
    if ((uVar7 == 0) || ((int)uVar10 < 1)) goto LAB_146fe6d10;
    iVar3 = FUN_144a54874(_Str_00,lVar8 + (longlong)(int)uVar1 * 2 + (ulonglong)uVar7 * -2);
    if (iVar3 == 0) goto LAB_146fe6d10;
  }
  uVar1 = *(uint *)(param_1 + 1);
  lVar8 = (longlong)(int)uVar1;
  if (5 < lVar8) {
    lVar2 = *param_1;
    iVar3 = FUN_144a54874(L".verse",lVar2 + lVar8 * 2 + -0xc,6);
    uVar6 = (undefined7)(unaff_RBP >> 8);
    if (iVar3 == 0) {
      unaff_RBP = CONCAT71(uVar6,3);
      goto LAB_146fe6d10;
    }
    if (7 < uVar1) {
      iVar3 = FUN_144a54874(L".vmodule",lVar2 + lVar8 * 2 + -0x10,8);
      unaff_RBP = CONCAT71(uVar6,(iVar3 == 0) << 2);
      goto LAB_146fe6d10;
    }
  }
  unaff_RBP = 0;
LAB_146fe6d10:
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 146fe6d28 FUN_146fe6d28 body=286 status=ok
// SIG undefined FUN_146fe6d28(void)

ulonglong FUN_146fe6d28(char param_1,longlong *param_2)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = (int)param_2[1];
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((longlong)iVar3 != 0) {
    if (param_1 == '\x04') {
      iVar3 = iswalpha(*(wint_t *)*param_2);
      psVar5 = (short *)*param_2;
      if ((iVar3 != 0) || (*psVar5 == 0x5f)) {
        lVar2 = param_2[1];
        if ((longlong)(int)lVar2 != 0) {
          lVar8 = 0;
          do {
            iVar3 = iswalnum(*(wint_t *)((longlong)psVar5 + lVar8));
            if ((iVar3 == 0) && (*(short *)((longlong)psVar5 + lVar8) != 0x5f)) goto LAB_146fe6e04;
            lVar8 = lVar8 + 2;
          } while ((longlong)(int)lVar2 * 2 != lVar8);
        }
LAB_146fe6e02:
        uVar6 = 0;
      }
    }
    else {
      if (param_1 == '\x03') {
        psVar5 = &DAT_149e35230;
        do {
          sVar1 = *psVar5;
          if (sVar1 != 0x2e) {
            if (sVar1 == 0) goto LAB_146fe6e02;
            if (0 < iVar3) {
              lVar2 = *param_2;
              uVar7 = 0;
              do {
                if (*(short *)(lVar2 + uVar7) == sVar1) {
                  if ((~uVar7 & 0x1fffffffe) != 0) goto LAB_146fe6e04;
                  break;
                }
                lVar8 = lVar2 + uVar7;
                uVar7 = uVar7 + 2;
              } while (lVar8 + 2U < (ulonglong)(lVar2 + (longlong)iVar3 * 2));
            }
          }
          psVar5 = psVar5 + 1;
        } while( true );
      }
      local_48 = (undefined4)*param_2;
      uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_40 = (undefined4)param_2[1];
      uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar4 = FUN_1449073fc(&local_48,0);
      uVar6 = (ulonglong)uVar4;
    }
  }
LAB_146fe6e04:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 146fe6e48 FUN_146fe6e48 body=105 status=ok
// SIG undefined FUN_146fe6e48(void)

void FUN_146fe6e48(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146fff990(param_1,iVar1);
    }
    FUN_146fff981((longlong)iVar1 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146fffa0e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146fe6eb2 FUN_146fe6eb2 body=1359 status=ok
// SIG undefined FUN_146fe6eb2(void)

/* WARNING: Removing unreachable block (ram,0x000146fe7347) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146fe6eb2(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int iVar14;
  undefined1 auStack_1e8 [40];
  longlong local_1c0;
  undefined8 *local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined2 *local_198;
  int local_190;
  undefined2 *local_188;
  int local_180;
  longlong local_178;
  int local_170;
  longlong local_168;
  int local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  int local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  longlong local_118;
  undefined4 local_110;
  undefined2 *local_108;
  undefined8 uStack_100;
  undefined2 *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined5 uStack_d0;
  undefined3 uStack_cb;
  int iStack_c8;
  undefined4 uStack_c4;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined2 *local_88;
  int local_80;
  undefined8 local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if (*(char *)(param_1 + 0x31) != '\0') {
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_98 = 0;
    local_1c0 = param_1;
    cVar4 = FUN_146fed1e8(param_1 + 0x20);
    if (cVar4 != '\0') {
      do {
        lVar7 = local_b8;
        local_168 = local_b8;
        iVar14 = (int)uStack_b0 + -1;
        if ((int)uStack_b0 == 0) {
          iVar14 = 0;
        }
        local_160 = iVar14;
        lVar6 = FUN_146fed282(local_1c0,&local_168);
        if ((*(char *)(lVar6 + 0xa0) != '\0') || (*(char *)(local_1c0 + 0x31) == '\x02')) {
          local_178 = lVar7;
          local_170 = iVar14;
          lVar7 = FUN_146fed4f6(lVar6,&local_178);
          *(undefined8 *)(lVar7 + 0x20) = local_a8;
          *(undefined8 *)(lVar7 + 0x28) = uStack_a0;
          *(undefined4 *)(lVar7 + 0x30) = local_98;
        }
        cVar4 = FUN_146fed1e8(param_1 + 0x20,&local_b8);
      } while (cVar4 != '\0');
    }
    lVar6 = local_1c0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = (undefined2 *)0x0;
    uStack_f0 = 0;
    local_108 = (undefined2 *)0x0;
    uStack_100 = 0;
    uStack_c4 = 0;
    local_d8 = _DAT_14c83e2d8;
    uStack_d0 = (undefined5)_DAT_14c83e2e0;
    uStack_cb = (undefined3)((ulonglong)_DAT_14c83e2e0 >> 0x28);
    iStack_c8 = DAT_14c83e2e8;
    lVar7 = local_1c0 + 0x10;
    cVar4 = FUN_146fed15a(lVar7,&local_108);
    if (cVar4 != '\0') {
      local_1b0 = lVar7;
      do {
        local_188 = local_108;
        local_180 = (int)uStack_100 + -1;
        if ((int)uStack_100 == 0) {
          local_180 = 0;
        }
        lVar8 = FUN_146fed282(lVar6,&local_188);
        if ((*(char *)(lVar8 + 0xa0) != '\0') || (*(char *)(lVar6 + 0x31) == '\x02')) {
          local_198 = local_108;
          local_190 = (int)uStack_100 + -1;
          if ((int)uStack_100 == 0) {
            local_190 = 0;
          }
          local_1b8 = (undefined8 *)FUN_146fed4f6(lVar8,&local_198);
          if (*(int *)(local_1b8 + 1) != 0) {
            local_138 = 0;
            local_130 = 0;
            local_158 = 0;
            uStack_150 = 0;
            local_12c = 0xffffffff00000080;
            local_124 = 0;
            local_118 = 0;
            local_110 = 0;
            local_88 = local_f8;
            local_80 = (int)uStack_f0;
            FUN_14282d1cc(&local_158,&local_88);
            if ((longlong)*(int *)(local_1b8 + 1) != 0) {
              puVar12 = (undefined8 *)*local_1b8;
              lVar7 = (longlong)*(int *)(local_1b8 + 1) << 4;
              do {
                puVar11 = &DAT_149dfb77a;
                iVar14 = 0;
                if (*(int *)(puVar12 + 1) != 0) {
                  puVar11 = (undefined2 *)*puVar12;
                  iVar14 = *(int *)(puVar12 + 1) + -1;
                }
                uVar5 = FUN_144a49b4a(iVar14,puVar11);
                iVar14 = FUN_1456cf568(&local_158,uVar5,puVar12);
                if (iVar14 == -1) {
                  local_88 = local_108;
                  local_80 = (int)uStack_100 + -1;
                  if ((int)uStack_100 == 0) {
                    local_80 = 0;
                  }
                  local_78 = *puVar12;
                  local_70 = *(int *)(puVar12 + 1) + -1;
                  if (*(int *)(puVar12 + 1) == 0) {
                    local_70 = 0;
                  }
                  FUN_140bee87a(&local_1a8,&local_88,2);
                  iVar14 = *(int *)(lVar8 + 0x78);
                  *(uint *)(lVar8 + 0x78) = iVar14 + 1U;
                  if (*(uint *)(lVar8 + 0x7c) < iVar14 + 1U) {
                    FUN_1447a1bd6((longlong *)(lVar8 + 0x70),iVar14);
                  }
                  lVar6 = *(longlong *)(lVar8 + 0x70);
                  lVar13 = (longlong)iVar14 * 0x10;
                  *(undefined8 *)(lVar6 + lVar13) = 0;
                  *(undefined8 *)(lVar6 + lVar13) = local_1a8;
                  local_1a8 = 0;
                  *(undefined4 *)(lVar6 + 8 + lVar13) = (undefined4)local_1a0;
                  *(undefined4 *)(lVar6 + 0xc + lVar13) = local_1a0._4_4_;
                  local_1a0 = 0;
                }
                puVar12 = puVar12 + 2;
                lVar7 = lVar7 + -0x10;
              } while (lVar7 != 0);
            }
            local_110 = 0;
            if (local_118 != 0) {
              FUN_1400020a8();
            }
            FUN_1408910a4(&local_158);
            lVar6 = local_1c0;
            lVar7 = local_1b0;
          }
          puVar12 = local_1b8;
          auVar1._8_8_ = _DAT_14c83e2e0;
          auVar1._0_8_ = _DAT_14c83e2d8;
          auVar3._8_5_ = uStack_d0;
          auVar3._0_8_ = local_d8;
          auVar3._13_3_ = uStack_cb;
          if (auVar1 == auVar3 && DAT_14c83e2e8 == iStack_c8) {
            auVar2._8_8_ = _DAT_14c83e2e0;
            auVar2._0_8_ = _DAT_14c83e2d8;
            if (DAT_14c83e2e8 == *(int *)(local_1b8 + 6) &&
                auVar2 == *(undefined1 (*) [16])(local_1b8 + 4)) {
              plVar9 = (longlong *)FUN_1400dbadc();
              plVar10 = (longlong *)*plVar9;
              if (plVar10 == (longlong *)0x0) {
                plVar10 = (longlong *)FUN_140e92164();
                *plVar9 = (longlong)plVar10;
              }
              puVar11 = &DAT_149dfb77a;
              if ((int)uStack_100 != 0) {
                puVar11 = local_108;
              }
              (**(code **)(*plVar10 + 0x160))(plVar10,&local_158,puVar11);
              iStack_c8 = local_140;
              local_d8 = uStack_150;
              uStack_d0 = (undefined5)uStack_148;
              uStack_cb = (undefined3)((ulonglong)uStack_148 >> 0x28);
            }
            else {
              iStack_c8 = *(int *)(local_1b8 + 6);
              local_d8 = local_1b8[4];
              uStack_d0 = (undefined5)local_1b8[5];
              uStack_cb = (undefined3)((ulonglong)local_1b8[5] >> 0x28);
            }
          }
          FUN_1410e5bda(puVar12,&local_f8);
          FUN_146ffbebe(puVar12 + 2,&local_e8);
          *(ulonglong *)((longlong)puVar12 + 0x2d) =
               CONCAT17((undefined1)uStack_c4,CONCAT43(iStack_c8,uStack_cb));
          puVar12[4] = local_d8;
          puVar12[5] = CONCAT35(uStack_cb,uStack_d0);
          *(undefined1 *)((longlong)puVar12 + 0x34) = 1;
        }
        cVar4 = FUN_146fed15a(lVar7,&local_108);
      } while (cVar4 != '\0');
    }
    FUN_146fedb88(&local_f8);
    if (local_108 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe7402 FUN_146fe7402 body=304 status=ok
// SIG undefined FUN_146fe7402(void)

void FUN_146fe7402(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_145cb12da(param_1 + 0x80);
  FUN_145cb1204(param_1 + 0x80,*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0xb4),1);
  if (*(int *)(param_1 + 0xfc) != *(int *)(param_1 + 0xf8)) {
    FUN_1408be2c4(param_1 + 0xf0);
  }
  if (*(int *)(param_1 + 0x10c) != *(int *)(param_1 + 0x108)) {
    FUN_146fffb1a(param_1 + 0x100);
  }
  if (*(int *)(param_1 + 0x11c) != *(int *)(param_1 + 0x118)) {
    FUN_146fffb7a(param_1 + 0x110);
  }
  iVar2 = *(int *)(param_1 + 0x14c);
  if (iVar2 != *(int *)(param_1 + 0x148)) {
    FUN_146fff5fc((longlong *)(param_1 + 0x140));
    iVar2 = *(int *)(param_1 + 0x148);
  }
  if (iVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x140);
    lVar3 = 0;
    do {
      FUN_146fe5a42(*(undefined8 *)(lVar1 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar2 * 8 != lVar3);
  }
  FUN_146fff52a(*(undefined8 *)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x168));
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(int *)(param_1 + 0x16c) != 0) {
    FUN_146fffc80(param_1 + 0x160);
  }
  *(undefined4 *)(param_1 + 0x178) = 0;
  if (*(int *)(param_1 + 0x17c) == 0) {
    return;
  }
  FUN_146fffcb0(param_1 + 0x170);
  return;
}



// FUNCTION 146fe7532 FUN_146fe7532 body=141 status=ok
// SIG undefined FUN_146fe7532(void)

void FUN_146fe7532(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_3 + 8) == 0) {
    if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  local_28 = *param_2;
  local_20 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_20 = 0;
  }
  lVar1 = FUN_146febfae(param_1,&local_28);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_3 + 8);
  if (*(int *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 146fe75e2 FUN_146fe75e2 body=420 status=ok
// SIG undefined FUN_146fe75e2(void)

void FUN_146fe75e2(longlong param_1,double param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  undefined8 uVar2;
  float fVar3;
  double dVar4;
  undefined1 auStack_b8 [32];
  LARGE_INTEGER local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((*(byte *)(param_1 + 0xd9) & 1) == 0) && ((*(byte *)(param_1 + 0xd9) & 1) == 0)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
    uVar1 = 0;
    do {
      if ((uVar1 & 1) == 0) {
        uVar1 = FUN_146fe66ae(param_1 + 0x30,lpCriticalSection);
      }
      if ((uVar1 & 1) == 0) {
        uVar2 = 0x3dcccccd;
        if (param_2 <= 0.0) {
LAB_146fe773f:
          FUN_14000f986(uVar2);
          goto LAB_146fe76c5;
        }
        QueryPerformanceCounter(&local_98);
        dVar4 = param_2 - ((double)local_98.QuadPart * DAT_14c83f420 + 16777216.0);
        fVar3 = (float)dVar4;
        uVar2 = 0x3dcccccd;
        if ((0.1 < fVar3) || (uVar2 = CONCAT44((int)((ulonglong)dVar4 >> 0x20),fVar3), 0.0 < fVar3))
        goto LAB_146fe773f;
LAB_146fe76cb:
        QueryPerformanceCounter(&local_98);
        if (param_2 < (double)local_98.QuadPart * DAT_14c83f420 + 16777216.0) break;
      }
      else {
        FUN_142ac4680(param_1,1);
LAB_146fe76c5:
        if (0.0 < param_2) goto LAB_146fe76cb;
      }
    } while ((*(byte *)(param_1 + 0xd9) & 1) == 0);
    if ((uVar1 & 1) != 0) {
      EnterCriticalSection(lpCriticalSection);
      *(undefined1 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  if ((local_90 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fe7788 FUN_146fe7788 body=158 status=ok
// SIG undefined FUN_146fe7788(void)

longlong * FUN_146fe7788(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14006620a(&local_28,*param_2,*(undefined4 *)(param_2 + 1));
  if (&local_28 == param_1) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_28;
    *(undefined4 *)(param_1 + 1) = local_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
  }
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 3;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe7828 FUN_146fe7828 body=151 status=ok
// SIG undefined FUN_146fe7828(void)

undefined8 * FUN_146fe7828(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_142ac76a8();
  if (*(int *)(param_1 + 3) == 3) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if (*(int *)(param_1 + 3) == 2) {
    local_28 = *param_1;
    local_20 = *(int *)(param_1 + 1) + -1;
    if (*(int *)(param_1 + 1) == 0) {
      local_20 = 0;
    }
    FUN_1412a5ca6(param_2);
  }
  else {
    *param_2 = *param_1;
    iVar1 = *(int *)(param_1 + 1) + -1;
    if (*(int *)(param_1 + 1) == 0) {
      iVar1 = 0;
    }
    *(int *)(param_2 + 1) = iVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe78c2 FUN_146fe78c2 body=264 status=ok
// SIG undefined FUN_146fe78c2(void)

longlong FUN_146fe78c2(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  int local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  uVar2 = FUN_146fe8848();
  if ((int)uVar2 < *(int *)(param_1 + 0x148)) {
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x140) + (ulonglong)uVar2 * 8);
    local_68 = *(undefined8 *)(lVar3 + 0x60);
    local_60 = *(int *)(lVar3 + 0x68) + -1;
    if (*(int *)(lVar3 + 0x68) == 0) {
      local_60 = 0;
    }
    cVar1 = FUN_146819142();
    if (cVar1 != '\0') goto LAB_146fe7961;
  }
  if ((uVar2 != 0) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x140) + -8 + (ulonglong)uVar2 * 8), lVar3 != 0)
     ) {
    do {
      local_78 = *param_2;
      uStack_74 = param_2[1];
      uStack_70 = param_2[2];
      uStack_6c = param_2[3];
      local_88 = *(undefined8 *)(lVar3 + 0x60);
      local_80 = *(int *)(lVar3 + 0x68) + -1;
      if (*(int *)(lVar3 + 0x68) == 0) {
        local_80 = 0;
      }
      cVar1 = FUN_14474d122(&local_88,&local_78);
      if (cVar1 != '\0') goto LAB_146fe7961;
      lVar3 = *(longlong *)(lVar3 + 0x90);
    } while (lVar3 != 0);
  }
  lVar3 = 0;
LAB_146fe7961:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 146fe79cc FUN_146fe79cc body=218 status=ok
// SIG undefined FUN_146fe79cc(void)

void FUN_146fe79cc(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  iVar1 = *(int *)(param_1 + 0x118);
  uVar3 = iVar1 + 1;
  *(uint *)(param_1 + 0x118) = uVar3;
  if (*(uint *)(param_1 + 0x11c) < uVar3) {
    FUN_146fffeea(param_1 + 0x110);
  }
  lVar2 = *(longlong *)(param_1 + 0x110);
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar2 + lVar4) = 0;
  *(undefined8 *)(lVar2 + lVar4) = *param_2;
  *param_2 = 0;
  *(undefined4 *)(lVar2 + 8 + lVar4) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(lVar2 + 0xc + lVar4) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(lVar2 + 0x18 + lVar4) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)(lVar2 + 0x1c + lVar4) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  *(undefined8 *)(lVar2 + 0x20 + lVar4) = param_2[6];
  *(undefined1 *)(lVar2 + 0x28 + lVar4) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)(lVar2 + 0x29 + lVar4) = *(undefined1 *)((longlong)param_2 + 0x39);
  *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
                    /* WARNING: Could not recover jumptable at 0x000146fe7a8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}



// FUNCTION 146fe7aa6 FUN_146fe7aa6 body=61 status=ok
// SIG undefined FUN_146fe7aa6(void)

void FUN_146fe7aa6(longlong *param_1)

{
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



// FUNCTION 146fe7ae4 FUN_146fe7ae4 body=153 status=ok
// SIG undefined FUN_146fe7ae4(void)

void FUN_146fe7ae4(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((byte)(*(byte *)(param_3 + 7) | *(byte *)(param_3 + 1) | *(byte *)(param_3 + 3) |
            *(byte *)(param_3 + 5)) == 1) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    local_30 = 0xbff0000000000000;
    FUN_142ac73d6(param_1,0);
    FUN_142ac89c8(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe7b92 FUN_146fe7b92 body=155 status=ok
// SIG undefined FUN_146fe7b92(void)

ulonglong FUN_146fe7b92(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [2];
  byte bStack_36;
  undefined1 uStack_35;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  _local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  lVar1 = FUN_146fe78c2(param_1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    _local_38 = (uint3)local_38[0];
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    FUN_146fe5a8a(lVar1,&local_48,local_38);
    uVar2 = CONCAT71((int7)((ulonglong)param_2 >> 8),(bStack_36 ^ 1) & local_38[1]);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe7c2e FUN_146fe7c2e body=691 status=ok
// SIG undefined FUN_146fe7c2e(void)

longlong FUN_146fe7c2e(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    LOCK();
    *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
    UNLOCK();
  }
  local_58 = param_1;
  cVar2 = FUN_146fe66ae(param_1 + 0x30,param_1 + 8);
  while (cVar2 == '\0') {
    FUN_14000f986(0x3a83126f);
    cVar2 = FUN_146fe66ae(param_1 + 0x30,param_1 + 8);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  lVar3 = (longlong)*(int *)(param_1 + 0x6c) << 4;
  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
    lVar5 = 0;
    do {
      lVar3 = lVar3 + (longlong)*(int *)(*(longlong *)(param_1 + 0x60) + 0xc + lVar5) * 2;
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x68) * 0x10 != lVar5);
  }
  lVar5 = (longlong)*(int *)(param_1 + 0x7c) << 4;
  if ((longlong)*(int *)(param_1 + 0x78) != 0) {
    lVar6 = 0;
    do {
      lVar5 = lVar5 + (longlong)*(int *)(*(longlong *)(param_1 + 0x70) + 0xc + lVar6) * 2;
      lVar6 = lVar6 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x78) * 0x10 != lVar6);
  }
  lVar4 = FUN_146fe7ee2(param_1 + 0x80);
  lVar6 = lVar4 + 0x38;
  if (*(longlong *)(param_1 + 0xd0) == 0) {
    lVar6 = lVar4;
  }
  lVar4 = (longlong)*(int *)(param_1 + 0xfc) << 4;
  if ((longlong)*(int *)(param_1 + 0xf8) != 0) {
    lVar7 = 0;
    do {
      lVar4 = lVar4 + (longlong)*(int *)(*(longlong *)(param_1 + 0xf0) + 0xc + lVar7) * 2;
      lVar7 = lVar7 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0xf8) * 0x10 != lVar7);
  }
  lVar7 = (longlong)*(int *)(param_1 + 0x10c) << 5;
  if ((longlong)*(int *)(param_1 + 0x108) != 0) {
    lVar8 = 0;
    do {
      lVar7 = lVar7 + (longlong)*(int *)(*(longlong *)(param_1 + 0x100) + 0xc + lVar8) * 2 +
              (longlong)*(int *)(*(longlong *)(param_1 + 0x100) + 0x1c + lVar8) * 0x30;
      lVar8 = lVar8 + 0x20;
    } while ((longlong)*(int *)(param_1 + 0x108) * 0x20 != lVar8);
  }
  lVar8 = (longlong)*(int *)(param_1 + 0x11c) * 0x30;
  if ((longlong)*(int *)(param_1 + 0x118) != 0) {
    lVar9 = 0;
    do {
      lVar8 = lVar8 + ((longlong)*(int *)(*(longlong *)(param_1 + 0x110) + 0x1c + lVar9) +
                      (longlong)*(int *)(*(longlong *)(param_1 + 0x110) + 0xc + lVar9)) * 2;
      lVar9 = lVar9 + 0x30;
    } while ((longlong)*(int *)(param_1 + 0x118) * 0x30 != lVar9);
  }
  lVar3 = lVar4 + lVar6 + lVar5 + lVar3 + lVar7 + lVar8 + (longlong)*(int *)(param_1 + 0x14c) * 8;
  iVar1 = *(int *)(param_1 + 0x148);
  if ((longlong)iVar1 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x140);
    lVar6 = 0;
    do {
      lVar4 = FUN_146fe58ae(*(undefined8 *)(lVar5 + lVar6));
      lVar3 = lVar3 + lVar4 + 0xa0;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  lVar5 = (longlong)*(int *)(param_1 + 0x16c) << 7;
  if ((longlong)*(int *)(param_1 + 0x168) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x160);
    lVar4 = (longlong)*(int *)(param_1 + 0x168) << 7;
    do {
      lVar7 = FUN_146fe8024(lVar6);
      lVar5 = lVar5 + lVar7;
      lVar6 = lVar6 + 0x80;
      lVar4 = lVar4 + -0x80;
    } while (lVar4 != 0);
  }
  iVar1 = *(int *)(param_1 + 0x17c);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  FUN_146fe66f2(&local_58);
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return (longlong)iVar1 + lVar5 + lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe7ee2 FUN_146fe7ee2 body=320 status=ok
// SIG undefined FUN_146fe7ee2(void)

longlong FUN_146fe7ee2(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
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
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = *(int *)((longlong)param_1 + 0x2c);
  iVar5 = 0;
  lVar4 = (longlong)(int)param_1[9] * 4;
  if ((ulonglong)(longlong)(int)param_1[9] < 2) {
    lVar4 = 0;
  }
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
    iVar5 = (int)param_1[5];
  }
  lVar4 = (ulonglong)(iVar3 + 0x1fU >> 5) * 4 + (longlong)iVar2 * 0x18 + lVar4;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if ((iStack_3c != iVar5) || (local_48 != plVar1)) {
    do {
      lVar4 = lVar4 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iStack_5c * 0x18) * 2;
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 || (local_68 != plVar1 || iStack_5c != iVar5));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe8024 FUN_146fe8024 body=174 status=ok
// SIG undefined FUN_146fe8024(void)

longlong FUN_146fe8024(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    lVar2 = *(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x10);
  }
  else {
    lVar2 = 0;
  }
  if (*(char *)(param_1 + 0x48) == '\x01') {
    lVar1 = *(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x30);
  }
  else {
    lVar1 = 0;
  }
  lVar3 = (longlong)*(int *)(param_1 + 0x5c) << 6;
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x50);
    lVar5 = 0;
    do {
      lVar3 = lVar3 + ((longlong)*(int *)(lVar4 + 0x2c + lVar5) +
                      (longlong)*(int *)(lVar4 + 0x1c + lVar5) +
                      (longlong)*(int *)(lVar4 + 0xc + lVar5)) * 2;
      lVar5 = lVar5 + 0x40;
    } while ((longlong)*(int *)(param_1 + 0x58) * 0x40 != lVar5);
  }
  lVar4 = (longlong)*(int *)(param_1 + 0x6c) << 6;
  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x60);
    lVar6 = 0;
    do {
      lVar4 = lVar4 + ((longlong)*(int *)(lVar5 + 0x2c + lVar6) +
                      (longlong)*(int *)(lVar5 + 0x1c + lVar6) +
                      (longlong)*(int *)(lVar5 + 0xc + lVar6)) * 2;
      lVar6 = lVar6 + 0x40;
    } while ((longlong)*(int *)(param_1 + 0x68) * 0x40 != lVar6);
  }
  return lVar1 + lVar2 + lVar3 + lVar4;
}



// FUNCTION 146fe80d2 FUN_146fe80d2 body=160 status=ok
// SIG undefined FUN_146fe80d2(void)

void FUN_146fe80d2(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  char local_39 [9];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  local_39[0] = '\0';
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  FUN_146fe8174(param_1,param_2,&local_58,local_39);
  if (local_39[0] == '\0') {
    local_39[1] = '\0';
    local_39[2] = '\0';
    local_39[3] = '\0';
    local_39[4] = '\0';
    local_39[5] = '\0';
    local_39[6] = '\0';
    local_39[7] = -0x10;
    local_39[8] = -0x41;
    FUN_142ac73d6(param_1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000146fe8166. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe8174 FUN_146fe8174 body=875 status=ok
// SIG undefined FUN_146fe8174(void)

void FUN_146fe8174(longlong param_1,undefined8 *param_2,undefined4 *param_3,byte *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_158 [40];
  longlong local_130;
  byte *local_128;
  undefined4 *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  int local_100;
  undefined8 local_f8;
  int local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  int local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  int local_b0;
  undefined8 local_a8;
  int local_a0;
  undefined8 local_98;
  int local_90;
  undefined8 local_88;
  int local_80;
  undefined8 local_78;
  int local_70;
  undefined8 local_68;
  int local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_58 = 0;
  uStack_50 = 0;
  *param_4 = 0;
  iVar1 = *(int *)(param_1 + 0x148);
  local_120 = param_3;
  local_118 = param_1;
  if ((longlong)iVar1 == 0) {
    local_130 = 0;
  }
  else {
    local_110 = *(longlong *)(param_1 + 0x140);
    lVar8 = 0;
    local_130 = 0;
    local_128 = param_4;
    do {
      uVar2 = *param_2;
      iVar13 = *(int *)(param_2 + 1) + -1;
      if (*(int *)(param_2 + 1) == 0) {
        iVar13 = 0;
      }
      lVar7 = *(longlong *)(local_110 + lVar8);
      uVar3 = *(undefined8 *)(lVar7 + 0x60);
      iVar10 = *(int *)(lVar7 + 0x68) + -1;
      if (*(int *)(lVar7 + 0x68) == 0) {
        iVar10 = 0;
      }
      local_78 = uVar3;
      local_70 = iVar10;
      local_68 = uVar2;
      local_60 = iVar13;
      cVar5 = FUN_146819142(&local_78,&local_68);
      if (cVar5 != '\0') {
        *local_128 = 1;
        goto LAB_146fe833e;
      }
      local_98 = uVar3;
      local_90 = iVar10;
      local_88 = uVar2;
      local_80 = iVar13;
      cVar5 = FUN_14474d122(&local_98,&local_88);
      lVar12 = lVar7;
      if (((cVar5 == '\0') &&
          (local_b8 = uVar2, local_b0 = iVar13, local_a8 = uVar3, local_a0 = iVar10,
          cVar5 = FUN_14474d122(&local_b8,&local_a8), uVar4 = uStack_50, lVar12 = local_130,
          cVar5 != '\0')) &&
         (*(longlong *)(lVar7 + 0x90) == local_130 || *(longlong *)(lVar7 + 0x90) == 0)) {
        lVar12 = (longlong)(int)uStack_50;
        uVar6 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
        if (uStack_50._4_4_ < uVar6) {
          FUN_146fff38c(&local_58,uVar4 & 0xffffffff);
        }
        *(longlong *)(local_58 + lVar12 * 8) = lVar7;
        lVar12 = local_130;
      }
      local_130 = lVar12;
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar1 * 8 != lVar8);
    if ((*local_128 & 1) != 0) goto LAB_146fe833e;
  }
  lVar8 = local_118;
  local_e8 = 0xbff0000000000000;
  FUN_142ac73d6(local_118,0);
  local_c8 = *local_120;
  uStack_c4 = local_120[1];
  uStack_c0 = local_120[2];
  uStack_bc = local_120[3];
  local_d8 = *param_2;
  local_d0 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_d0 = 0;
  }
  lVar7 = FUN_146fe84e0(lVar8);
  lVar8 = local_130;
  if (local_130 != 0) {
    local_e8 = 0;
    local_e0 = 0;
    local_f8 = *(undefined8 *)(local_130 + 0x60);
    local_f0 = *(int *)(local_130 + 0x68) + -1;
    if (*(int *)(local_130 + 0x68) == 0) {
      local_f0 = 0;
    }
    local_108 = *param_2;
    local_100 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_100 = 0;
    }
    FUN_14022fd12();
    FUN_142ac43e8(lVar8,lVar7);
    lVar12 = local_58;
    *(longlong *)(lVar7 + 0x90) = lVar8;
    lVar9 = (longlong)(int)uStack_50;
    if (lVar9 != 0) {
      lVar11 = 0;
      do {
        FUN_142ac44ac(lVar8,*(undefined8 *)(lVar12 + lVar11));
        lVar11 = lVar11 + 8;
      } while (lVar9 * 8 != lVar11);
    }
  }
  lVar8 = local_58;
  lVar12 = (longlong)(int)uStack_50;
  if (lVar12 != 0) {
    lVar9 = 0;
    do {
      lVar11 = *(longlong *)(lVar8 + lVar9);
      FUN_142ac43e8(lVar7,lVar11);
      *(longlong *)(lVar11 + 0x90) = lVar7;
      lVar9 = lVar9 + 8;
    } while (lVar12 * 8 != lVar9);
  }
LAB_146fe833e:
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fe84e0 FUN_146fe84e0 body=331 status=ok
// SIG undefined FUN_146fe84e0(void)

longlong FUN_146fe84e0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  int local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  uVar4 = FUN_146fe8848();
  plVar1 = (longlong *)(param_1 + 0x140);
  uVar6 = (ulonglong)uVar4;
  if (uVar4 != *(uint *)(param_1 + 0x148)) {
    local_68 = *param_2;
    uStack_64 = param_2[1];
    uStack_60 = param_2[2];
    uStack_5c = param_2[3];
    lVar5 = *(longlong *)(*plVar1 + uVar6 * 8);
    local_78 = *(undefined8 *)(lVar5 + 0x60);
    local_70 = *(int *)(lVar5 + 0x68) + -1;
    if (*(int *)(lVar5 + 0x68) == 0) {
      local_70 = 0;
    }
    cVar3 = FUN_146819142();
    if (cVar3 != '\0') goto LAB_146fe85b2;
  }
  lVar5 = FUN_14001cc68(0xa0,0x10);
  local_88 = *param_3;
  uStack_80 = param_3[1];
  local_98 = *param_2;
  uStack_94 = param_2[1];
  uStack_90 = param_2[2];
  uStack_8c = param_2[3];
  FUN_146fe4cba(lVar5,param_1);
  iVar2 = *(int *)(param_1 + 0x148);
  *(int *)(param_1 + 0x148) = iVar2 + 1;
  if (*(int *)(param_1 + 0x14c) == iVar2) {
    FUN_146fffdde(plVar1,iVar2);
  }
  memmove((void *)(*plVar1 + uVar6 * 8 + 8),(void *)(*plVar1 + uVar6 * 8),
          (ulonglong)(iVar2 - uVar4) << 3);
  *(longlong *)(*plVar1 + uVar6 * 8) = lVar5;
LAB_146fe85b2:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 146fe862c FUN_146fe862c body=119 status=ok
// SIG undefined FUN_146fe862c(void)

void FUN_146fe862c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  local_28 = 0xbff0000000000000;
  FUN_142ac73d6(param_1,0);
  FUN_146fe86a4(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000146fe8697. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe86a4 FUN_146fe86a4 body=418 status=ok
// SIG undefined FUN_146fe86a4(void)

void FUN_146fe86a4(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_a8 [40];
  longlong local_80;
  int local_78;
  undefined8 local_70;
  int local_68;
  undefined8 local_60;
  int local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = *param_2;
  local_48 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_48 = 0;
  }
  uVar5 = FUN_146fe8848();
  if (uVar5 != *(uint *)(param_1 + 0x148)) {
    plVar7 = (longlong *)(param_1 + 0x140);
    local_60 = *param_2;
    local_58 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_58 = 0;
    }
    lVar6 = *plVar7;
    lVar1 = *(longlong *)(lVar6 + (ulonglong)uVar5 * 8);
    local_70 = *(undefined8 *)(lVar1 + 0x60);
    local_68 = *(int *)(lVar1 + 0x68) + -1;
    if (*(int *)(lVar1 + 0x68) == 0) {
      local_68 = 0;
    }
    cVar4 = FUN_146819142();
    if (cVar4 != '\0') {
      *(undefined8 *)(lVar6 + (ulonglong)uVar5 * 8) = 0;
      FUN_146fffce0(plVar7,uVar5);
      FUN_146fffd42(plVar7);
      lVar6 = *(longlong *)(lVar1 + 0x90);
      if (lVar6 == 0) {
        FUN_146fe6236(lVar1);
        if ((longlong)local_78 != 0) {
          lVar6 = 0;
          do {
            *(undefined8 *)(*(longlong *)(local_80 + lVar6) + 0x90) = 0;
            lVar6 = lVar6 + 8;
          } while ((longlong)local_78 * 8 != lVar6);
        }
        if (local_80 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        FUN_146fe6236(lVar1,&local_80);
        lVar3 = local_80;
        if ((longlong)local_78 != 0) {
          lVar8 = 0;
          do {
            lVar2 = *(longlong *)(lVar3 + lVar8);
            FUN_142ac43e8(lVar6,lVar2);
            *(longlong *)(lVar2 + 0x90) = lVar6;
            lVar8 = lVar8 + 8;
          } while ((longlong)local_78 * 8 != lVar8);
        }
        if (local_80 != 0) {
          FUN_1400020a8(local_80);
        }
        FUN_142ac44ac(lVar6,lVar1);
      }
      if (lVar1 != 0) {
        FUN_146fe571e(lVar1);
        FUN_1400020a8(lVar1);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fe8848 FUN_146fe8848 body=195 status=ok
// SIG undefined FUN_146fe8848(void)

int FUN_146fe8848(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)*(uint *)(param_1 + 0x148) < 1) {
    iVar7 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x140);
    iVar7 = 0;
    uVar8 = *(uint *)(param_1 + 0x148);
    do {
      uVar1 = (uVar8 >> 1) + iVar7;
      local_58 = *param_2;
      uStack_54 = param_2[1];
      uStack_50 = param_2[2];
      uStack_4c = param_2[3];
      lVar4 = *(longlong *)(lVar3 + (ulonglong)uVar1 * 8);
      local_68 = *(undefined8 *)(lVar4 + 0x60);
      iVar2 = *(int *)(lVar4 + 0x68);
      local_60 = 0;
      if (iVar2 != 0) {
        local_60 = iVar2 + -1;
      }
      cVar6 = FUN_14490770e(&local_68,&local_58);
      if (cVar6 != '\0') {
        iVar7 = uVar1 + (uVar8 & 1);
      }
      bVar5 = 1 < uVar8;
      uVar8 = uVar8 >> 1;
    } while (bVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe890c FUN_146fe890c body=384 status=ok
// SIG undefined FUN_146fe890c(void)

longlong * FUN_146fe890c(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  int local_60;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14006620a(&local_58,*param_2,*(undefined4 *)(param_2 + 1));
  if (&local_58 == param_1) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_58;
    local_58 = 0;
    *(int *)(param_1 + 1) = local_50;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_4c;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  iVar2 = (int)param_3[1];
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (iVar2 != 0) {
    plVar1 = param_1 + 2;
    FUN_146fffb7a(plVar1);
    if ((longlong)(int)param_3[1] != 0) {
      lVar4 = (longlong)(int)param_3[1] << 6;
      lVar3 = *param_3 + 0x30;
      do {
        iVar2 = (int)param_1[3];
        *(uint *)(param_1 + 3) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
          FUN_146fffeea(plVar1,iVar2);
        }
        local_70 = *(undefined1 *)(lVar3 + 9);
        local_78 = *(undefined1 *)(lVar3 + 8);
        local_58 = *(longlong *)(lVar3 + -0x20);
        local_50 = *(int *)(lVar3 + -0x18) + -1;
        if (*(int *)(lVar3 + -0x18) == 0) {
          local_50 = 0;
        }
        local_68 = *(undefined8 *)(lVar3 + -0x30);
        local_60 = *(int *)(lVar3 + -0x28) + -1;
        if (*(int *)(lVar3 + -0x28) == 0) {
          local_60 = 0;
        }
        FUN_146fe4034((longlong)iVar2 * 0x30 + *plVar1,&local_68,&local_58,lVar3);
        lVar3 = lVar3 + 0x40;
        lVar4 = lVar4 + -0x40;
      } while (lVar4 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146fe8a8e FUN_146fe8a8e body=777 status=ok
// SIG undefined FUN_146fe8a8e(void)

void FUN_146fe8a8e(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  *param_1 = &PTR_LAB_149fc3ff0;
  FUN_146fe8d98();
  FUN_147000078(param_1 + 0x3a);
  FUN_147000078();
  iVar1 = *(int *)(param_1 + 0x2d);
  if ((longlong)iVar1 != 0) {
    lVar6 = param_1[0x2c];
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar6 + lVar5);
      if (lVar2 != 0) {
        FUN_146fe8e20(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (*(int *)((longlong)param_1 + 0x16c) != 0) {
    FUN_1470003d6(param_1 + 0x2c);
  }
  if ((longlong)*(int *)(param_1 + 0x2f) != 0) {
    lVar6 = param_1[0x2e];
    lVar5 = (longlong)*(int *)(param_1 + 0x2f) * 0x10 + lVar6;
    do {
      lVar2 = *(longlong *)(lVar6 + 8);
      if (lVar2 != 0) {
        lVar3 = *(longlong *)(lVar2 + -8);
        if (lVar3 != 0) {
          lVar7 = lVar3 * 0x110;
          do {
            FUN_146fe8e20(lVar2 + -0x110 + lVar7);
            lVar7 = lVar7 + -0x110;
          } while (lVar7 != 0);
        }
        thunk_FUN_1400020a8(lVar2 + -8,lVar3 * 0x110 | 8);
      }
      lVar6 = lVar6 + 0x10;
    } while (lVar6 != lVar5);
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if (*(int *)((longlong)param_1 + 0x17c) != 0) {
    FUN_147000406(param_1 + 0x2e);
  }
  *(undefined4 *)(param_1 + 0x43) = 0;
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  FUN_146ffa93a(param_1 + 0x3a);
  *(undefined4 *)(param_1 + 0x39) = 0;
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_146ffa93a(param_1 + 0x30);
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x25],*(undefined4 *)(param_1 + 0x26));
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x20],*(undefined4 *)(param_1 + 0x21));
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_146ffe131(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_146ffe131(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_147000037(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_147000037(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_146ffff7e(param_1[0x13]);
  plVar4 = (longlong *)param_1[0x11];
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
                    /* WARNING: Could not recover jumptable at 0x000146fe8d5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



// FUNCTION 146fe8d98 FUN_146fe8d98 body=136 status=ok
// SIG undefined FUN_146fe8d98(void)

void FUN_146fe8d98(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[0x11];
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((longlong *)plVar1[0x1a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)plVar1[0x1a] + 0x20))();
    plVar2 = (longlong *)plVar1[0x1a];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,1);
    }
    plVar1[0x1a] = 0;
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  if ((longlong *)param_1[0xc] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc] + 0x20))();
    plVar1 = (longlong *)param_1[0xc];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
    }
    param_1[0xc] = 0;
  }
  return;
}



// FUNCTION 146fe8e20 FUN_146fe8e20 body=55 status=ok
// SIG undefined FUN_146fe8e20(void)

void FUN_146fe8e20(longlong param_1)

{
  FUN_146ff7a86(param_1 + 0x28);
  FUN_140195631(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fe8e58 FUN_146fe8e58 body=149 status=ok
// SIG undefined FUN_146fe8e58(void)

void FUN_146fe8e58(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(char *)(param_1 + 0x6c) == '\x01') && (*(longlong *)(param_1 + 0x60) == 0)) {
    *(undefined1 *)(param_1 + 0x22c) = 0;
    uVar2 = FUN_1411b1052(param_1,L"FAssetDataGatherer",0,2,0xffffffffffffffff,0);
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    lVar1 = *(longlong *)(param_1 + 0x88);
    if ((*(char *)(lVar1 + 0xd8) == '\x01') && (*(longlong *)(lVar1 + 0xd0) == 0)) {
      uVar2 = FUN_1411b1052(lVar1,L"FAssetDataDiscovery",0,2,0xffffffffffffffff,0);
      *(undefined8 *)(lVar1 + 0xd0) = uVar2;
    }
  }
  return;
}



// FUNCTION 146fe8ef2 FUN_146fe8ef2 body=136 status=ok
// SIG undefined FUN_146fe8ef2(void)

void FUN_146fe8ef2(longlong param_1,byte *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  *param_2 = 0;
  if (((*(int *)(param_1 + 0x78) == 0) && ((*(byte *)(param_1 + 0x90) & 1) != 0)) &&
     (*(char *)(param_1 + 0x22d) == '\0')) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    *param_2 = *(byte *)(param_1 + 0x92) & 1;
    uVar1 = *(undefined4 *)(param_1 + 0x150);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    if (*param_2 == 1) {
      FUN_146fea974(param_1,param_3);
      *(undefined1 *)(param_1 + 0x22d) = 1;
      *(undefined4 *)(param_1 + 0x224) = uVar1;
    }
    LOCK();
    *(undefined1 *)(param_1 + 0x90) = 0;
    UNLOCK();
  }
  return;
}



// FUNCTION 146fe8f7a FUN_146fe8f7a body=31 status=ok
// SIG undefined FUN_146fe8f7a(void)

void FUN_146fe8f7a(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))();
  LOCK();
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  UNLOCK();
  return;
}



// FUNCTION 146fe8f9c FUN_146fe8f9c body=207 status=ok
// SIG undefined FUN_146fe8f9c(void)

void FUN_146fe8f9c(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  longlong local_88;
  int local_80;
  undefined1 local_78 [16];
  longlong local_68;
  int local_60;
  longlong local_58;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x54)) {
    do {
      FUN_146fec0dc(param_1 + 0x48,&local_68);
      local_88 = local_68;
      local_80 = local_60 + -1;
      if (local_60 == 0) {
        local_80 = 0;
      }
      FUN_1412a5ca6(local_78,&local_88);
      uVar1 = FUN_146febfae(param_1,local_78);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
      FUN_146fec170(uVar1,&local_68);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    } while (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x54));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe906c FUN_146fe906c body=342 status=ok
// SIG undefined FUN_146fe906c(void)

void FUN_146fe906c(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined2 local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar1 = param_3;
  if ((0 < param_3) && (iVar1 = param_3, *(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x3c))) {
    local_4c = param_3;
    iVar4 = param_3;
    do {
      FUN_146fec0dc(param_1 + 0x30,&local_80);
      iVar1 = *(int *)(param_2 + 0x12c8);
      *(uint *)(param_2 + 0x12c8) = iVar1 + 1U;
      if (*(uint *)(param_2 + 0x12cc) < iVar1 + 1U) {
        FUN_147000774(param_2,iVar1);
      }
      lVar2 = *(longlong *)(param_2 + 0x12c0);
      if (*(longlong *)(param_2 + 0x12c0) == 0) {
        lVar2 = param_2;
      }
      lVar3 = (longlong)iVar1 * 0x30;
      *(undefined8 *)(lVar2 + lVar3) = local_80;
      local_80 = 0;
      *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_78;
      *(undefined4 *)(lVar2 + 0xc + lVar3) = local_78._4_4_;
      local_78 = 0;
      *(undefined8 *)(lVar2 + 0x10 + lVar3) = local_70;
      local_70 = 0;
      *(undefined4 *)(lVar2 + 0x18 + lVar3) = local_68;
      *(undefined4 *)(lVar2 + 0x1c + lVar3) = local_64;
      *(undefined8 *)(lVar2 + 0x20 + lVar3) = local_60;
      *(undefined2 *)(lVar2 + 0x28 + lVar3) = local_58;
      iVar1 = 0;
    } while ((1 < iVar4) &&
            (iVar4 = iVar4 + -1, iVar1 = iVar4, *(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x3c)
            ));
  }
  local_4c = iVar1;
  FUN_1470005c6(param_1,param_2,&local_4c);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + (local_4c - param_3);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fe91c4 FUN_146fe91c4 body=80 status=ok
// SIG undefined FUN_146fe91c4(void)

longlong * FUN_146fe91c4(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1470009ac(*param_1,(int)param_1[1]);
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



// FUNCTION 146fe9214 FUN_146fe9214 body=624 status=ok
// SIG undefined FUN_146fe9214(void)

void FUN_146fe9214(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *param_2;
  uVar3 = (ulonglong)(int)param_2[1];
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    lVar7 = 0;
    iVar4 = 0;
    do {
      iVar4 = iVar4 + *(int *)(lVar2 + 0x10 + lVar7);
      lVar7 = lVar7 + 0x18;
    } while (uVar3 * 0x18 != lVar7);
    if (iVar4 != 0) {
      lVar2 = param_1 + 0x180;
      uVar1 = *(int *)(param_1 + 0x188) - *(int *)(param_1 + 0x1b4);
      uVar5 = iVar4 + uVar1;
      if (uVar1 < uVar5) {
        if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b((longlong)(int)uVar5);
        }
        FUN_14700185e(lVar2,uVar5);
        iVar4 = 1;
        if (3 < uVar5) {
          uVar1 = (uVar5 | 1) + 0xe;
          iVar4 = 0x1f;
          if (uVar1 != 0) {
            for (; uVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
            }
          }
          iVar4 = 1 << ((byte)iVar4 & 0x1f);
        }
        if ((*(int *)(param_1 + 0x1c8) == 0) || (*(int *)(param_1 + 0x1c8) < iVar4)) {
          *(int *)(param_1 + 0x1c8) = iVar4;
          FUN_1470001fc(lVar2);
        }
      }
      local_88 = param_2;
      if ((longlong)(int)param_2[1] != 0) {
        plVar8 = (longlong *)*param_2;
        local_78 = plVar8 + (longlong)(int)param_2[1] * 3;
        local_80 = (longlong *)(param_1 + 0x170);
        local_70 = param_1;
        do {
          if (0 < (int)plVar8[2]) {
            lVar7 = 0;
            lVar9 = 0;
            lVar6 = 0;
            do {
              local_68 = plVar8[1] + lVar7;
              local_60 = *plVar8 + lVar9;
              local_58 = &local_68;
              FUN_1470019fa(lVar2,local_4c,&local_60);
              lVar6 = lVar6 + 1;
              lVar9 = lVar9 + 8;
              lVar7 = lVar7 + 0x110;
            } while (lVar6 < (int)plVar8[2]);
          }
          param_1 = local_70;
          lVar7 = plVar8[1];
          plVar8[1] = 0;
          iVar4 = *(int *)(local_70 + 0x178);
          *(uint *)(local_70 + 0x178) = iVar4 + 1U;
          if (*(uint *)(local_70 + 0x17c) < iVar4 + 1U) {
            FUN_147001b4a(local_80,iVar4);
          }
          lVar6 = *local_80;
          *(int *)(lVar6 + (longlong)iVar4 * 0x10) = (int)plVar8[2];
          *(longlong *)(lVar6 + 8 + (longlong)iVar4 * 0x10) = lVar7;
          FUN_146fea936(plVar8);
          plVar8 = plVar8 + 3;
        } while (plVar8 != local_78);
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
      iVar4 = *(int *)(param_1 + 0x188) - *(int *)(param_1 + 0x1b4);
      if (iVar4 < 0) {
LAB_146fe9476:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar4);
      }
      if (*(int *)(param_1 + 0xcc) < iVar4) {
        FUN_146ffe15a(param_1 + 0xc0);
        iVar4 = *(int *)(param_1 + 0x188) - *(int *)(param_1 + 0x1b4);
        if (iVar4 < 0) goto LAB_146fe9476;
      }
      param_2 = local_88;
      if (*(int *)(param_1 + 0xac) < iVar4) {
        FUN_1470015c0(param_1 + 0xa0);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
      uVar3 = (ulonglong)*(uint *)(param_2 + 1);
      lVar2 = *param_2;
    }
  }
  FUN_1470009ac(lVar2,uVar3);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe9486 FUN_146fe9486 body=120 status=ok
// SIG undefined FUN_146fe9486(void)

void FUN_146fe9486(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x648);
    *(uint *)(param_1 + 0x648) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x64c) - iVar2) < uVar1) {
      FUN_147000aea(param_1,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x640);
    if (*(longlong *)(param_1 + 0x640) == 0) {
      lVar3 = param_1;
    }
    memmove((void *)((longlong)iVar2 * 0x10 + lVar3),(void *)*param_2,(longlong)(int)uVar1 << 4);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 146fe94fe FUN_146fe94fe body=170 status=ok
// SIG undefined FUN_146fe94fe(void)

undefined8 * FUN_146fe94fe(undefined8 *param_1,undefined8 *param_2)

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
  
  *param_1 = *param_2;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 2);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 3);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 4);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 4) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar7;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  FUN_146ffcaac(param_1 + 6,param_2 + 6);
  FUN_1406fa324(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x94);
  uVar2 = *(undefined4 *)(param_2 + 0x13);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x9c);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xa4);
  uVar6 = *(undefined4 *)(param_2 + 0x15);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0xac);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0xad);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0xb1);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0xb5);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0xb9);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar1;
  *(undefined4 *)(param_1 + 0x13) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar5;
  *(undefined4 *)(param_1 + 0x15) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0xad) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0xb1) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0xb5) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0xb9) = uVar11;
  FUN_146ffa9c8(param_1 + 0x18,param_2 + 0x18);
  FUN_146ffaa22(param_1 + 0x1a,param_2 + 0x1a);
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(param_2 + 0x1c);
  return param_1;
}



// FUNCTION 146fe95a8 FUN_146fe95a8 body=117 status=ok
// SIG undefined FUN_146fe95a8(void)

void FUN_146fe95a8(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x328);
    *(uint *)(param_1 + 0x328) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x32c) - iVar2) < uVar1) {
      FUN_147000ce6(param_1,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 800);
    if (*(longlong *)(param_1 + 800) == 0) {
      lVar3 = param_1;
    }
    memmove((void *)(lVar3 + (longlong)iVar2 * 8),(void *)*param_2,(longlong)(int)uVar1 << 3);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 146fe961e FUN_146fe961e body=117 status=ok
// SIG undefined FUN_146fe961e(void)

void FUN_146fe961e(longlong *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  
  uVar1 = *(uint *)((longlong)param_2 + 0x328);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_147000f6e(param_1,iVar2);
    }
    _Src = *(void **)((longlong)param_2 + 800);
    if (*(void **)((longlong)param_2 + 800) == (void *)0x0) {
      _Src = param_2;
    }
    memmove((void *)((longlong)iVar2 * 8 + *param_1),_Src,(longlong)(int)uVar1 << 3);
    *(undefined4 *)((longlong)param_2 + 0x328) = 0;
  }
  return;
}



// FUNCTION 146fe9694 FUN_146fe9694 body=116 status=ok
// SIG undefined FUN_146fe9694(void)

void FUN_146fe9694(longlong *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  
  uVar1 = *(uint *)((longlong)param_2 + 0x5aa8);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_146ffd49a(param_1,iVar2);
    }
    _Src = *(void **)((longlong)param_2 + 0x5aa0);
    if (*(void **)((longlong)param_2 + 0x5aa0) == (void *)0x0) {
      _Src = param_2;
    }
    memmove((void *)((longlong)iVar2 * 0xe8 + *param_1),_Src,(longlong)(int)uVar1 * 0xe8);
    *(undefined4 *)((longlong)param_2 + 0x5aa8) = 0;
  }
  return;
}



// FUNCTION 146fe9708 FUN_146fe9708 body=115 status=ok
// SIG undefined FUN_146fe9708(void)

void FUN_146fe9708(longlong *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  
  uVar1 = *(uint *)((longlong)param_2 + 0x648);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447a1bd6(param_1,iVar2);
    }
    _Src = *(void **)((longlong)param_2 + 0x640);
    if (*(void **)((longlong)param_2 + 0x640) == (void *)0x0) {
      _Src = param_2;
    }
    memmove((void *)((longlong)iVar2 * 0x10 + *param_1),_Src,(longlong)(int)uVar1 << 4);
    *(undefined4 *)((longlong)param_2 + 0x648) = 0;
  }
  return;
}



// FUNCTION 146fe977c FUN_146fe977c body=115 status=ok
// SIG undefined FUN_146fe977c(void)

void FUN_146fe977c(longlong *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  
  uVar1 = *(uint *)((longlong)param_2 + 0x328);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1446f84a2(param_1,iVar2);
    }
    _Src = *(void **)((longlong)param_2 + 800);
    if (*(void **)((longlong)param_2 + 800) == (void *)0x0) {
      _Src = param_2;
    }
    memmove((void *)((longlong)iVar2 * 8 + *param_1),_Src,(longlong)(int)uVar1 << 3);
    *(undefined4 *)((longlong)param_2 + 0x328) = 0;
  }
  return;
}



// FUNCTION 146fe97f0 FUN_146fe97f0 body=62 status=ok
// SIG undefined FUN_146fe97f0(void)

void FUN_146fe97f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x640);
  if (*(longlong *)(param_1 + 0x640) == 0) {
    lVar1 = param_1;
  }
  FUN_1447a1747(lVar1,*(undefined4 *)(param_1 + 0x648));
  if (*(longlong *)(param_1 + 0x640) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fe982e FUN_146fe982e body=62 status=ok
// SIG undefined FUN_146fe982e(void)

void FUN_146fe982e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x5aa0);
  if (*(longlong *)(param_1 + 0x5aa0) == 0) {
    lVar1 = param_1;
  }
  FUN_146ffe131(lVar1,*(undefined4 *)(param_1 + 0x5aa8));
  if (*(longlong *)(param_1 + 0x5aa0) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fe986c FUN_146fe986c body=62 status=ok
// SIG undefined FUN_146fe986c(void)

void FUN_146fe986c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 800);
  if (*(longlong *)(param_1 + 800) == 0) {
    lVar1 = param_1;
  }
  FUN_147000037(lVar1,*(undefined4 *)(param_1 + 0x328));
  if (*(longlong *)(param_1 + 800) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fe98aa FUN_146fe98aa body=62 status=ok
// SIG undefined FUN_146fe98aa(void)

void FUN_146fe98aa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x12c0);
  if (*(longlong *)(param_1 + 0x12c0) == 0) {
    lVar1 = param_1;
  }
  FUN_146fff473(lVar1,*(undefined4 *)(param_1 + 0x12c8));
  if (*(longlong *)(param_1 + 0x12c0) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fe98e8 FUN_146fe98e8 body=370 status=ok
// SIG undefined FUN_146fe98e8(void)

/* WARNING: Removing unreachable block (ram,0x000146fe9993) */

ulonglong FUN_146fe98e8(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4,
                       uint param_5)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined8 local_48;
  char local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar3 = FUN_142ae805a(param_1,param_2,&local_39);
  if (cVar3 != '\0') {
    if (local_39 == '\x01') {
      FUN_147018094(param_1,&local_50);
      iVar2 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar2 + 1U) {
        FUN_1447a1bd6(param_4,iVar2);
      }
      lVar5 = *param_4;
      lVar6 = (longlong)iVar2 * 0x10;
      *(undefined8 *)(lVar5 + lVar6) = 0;
      *(longlong *)(lVar5 + lVar6) = local_50;
      local_50 = 0;
      *(undefined4 *)(lVar5 + 8 + lVar6) = (undefined4)local_48;
      *(undefined4 *)(lVar5 + 0xc + lVar6) = local_48._4_4_;
      local_48 = 0;
    }
    cVar3 = FUN_147018bf4(param_1,param_3,param_5);
    if (cVar3 != '\0') {
      uVar4 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
      if ((0x208 < *(int *)(param_1 + 0x40)) &&
         ((param_5 & 2) != 0 && *(int *)(param_1 + 0x40) == 0x209)) {
        FUN_1427b4e9f(&local_50);
        if ((longlong)(int)param_2[1] != 0) {
          lVar5 = 0;
          do {
            if ((*(longlong *)(*(longlong *)(*param_2 + lVar5) + 0x20) == local_50) &&
               (*(longlong *)(*(longlong *)(*param_2 + lVar5) + 0x28) == local_48)) {
              iVar2 = *(int *)(param_3 + 200);
              if ((longlong)iVar2 != 0) {
                lVar5 = *(longlong *)(param_3 + 0xc0);
                lVar6 = 0;
                do {
                  pbVar1 = (byte *)(lVar5 + 8 + lVar6);
                  *pbVar1 = *pbVar1 | 2;
                  lVar6 = lVar6 + 0xc;
                } while ((longlong)iVar2 * 0xc != lVar6);
              }
              break;
            }
            lVar5 = lVar5 + 8;
          } while ((longlong)(int)param_2[1] * 8 != lVar5);
        }
      }
      goto LAB_146fe9a08;
    }
  }
  uVar4 = 0;
LAB_146fe9a08:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe9a5c FUN_146fe9a5c body=400 status=ok
// SIG undefined FUN_146fe9a5c(void)

void FUN_146fe9a5c(longlong param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  
  FUN_146fe9bec(param_1,param_2,0);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  FUN_142acbb78(param_2 + 0xa0,param_1 + 0x128);
  FUN_142acbb78(param_2 + 0x158,param_1 + 0xe0);
  FUN_146ffaf2a(param_2 + 0x170,*(undefined8 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf8));
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(int *)(param_1 + 0xfc) < 0) {
    FUN_1402191ca(param_1 + 0xf0,0);
  }
  FUN_1457de550(param_2 + 0x188,param_1 + 0x100);
  iVar1 = *(int *)(param_1 + 0x10c);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0x108));
  *(undefined4 *)(param_1 + 0x108) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x10c) != 0)) {
    FUN_1408be2c4(param_1 + 0x100,0);
  }
  FUN_146fe9f28(param_3 + 8,param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(int *)(param_1 + 0x11c) < 0) {
    FUN_140cb0586(param_1 + 0x110,0);
  }
  lVar2 = *(longlong *)(param_1 + 0x98);
  *(int *)(param_3 + 0x18) =
       (*(int *)(lVar2 + 0x58) + *(int *)(lVar2 + 0x60)) - *(int *)(lVar2 + 0x54);
  *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_1 + 0x148);
  param_3[0x20] = *(byte *)(param_1 + 0x155) ^ 1;
  uVar3 = 1;
  if (*(char *)(param_1 + 0x157) == '\x01') {
    lVar2 = *(longlong *)(param_1 + 0x98);
    if (*(int *)(lVar2 + 0x60) == *(int *)(lVar2 + 0x54) - *(int *)(lVar2 + 0x58)) {
      if (*(char *)(param_1 + 0x156) == '\0') {
        *(undefined1 *)(param_1 + 0x156) = 1;
        FUN_146fe9f8a(param_1);
      }
      uVar3 = 0;
    }
  }
  *param_3 = uVar3;
  param_3[1] = *(byte *)(param_1 + 0x157) ^ 1;
                    /* WARNING: Could not recover jumptable at 0x000146fe9bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



// FUNCTION 146fe9bec FUN_146fe9bec body=826 status=ok
// SIG undefined FUN_146fe9bec(void)

void FUN_146fe9bec(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  longlong local_78;
  LPCRITICAL_SECTION local_70;
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = (LPCRITICAL_SECTION)(param_1 + 0x30);
  EnterCriticalSection(local_70);
  plVar5 = *(longlong **)(param_1 + 0xa0);
  uVar2 = 0;
  local_78 = param_1;
  if ((longlong)*(int *)(param_1 + 0xa8) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0xa8) << 3;
    do {
      if (param_3 != '\0') {
        local_60 = *(longlong **)*plVar5;
        FUN_144a13f80(param_2 + 0x250,&local_68,&local_60,0);
      }
      local_60 = (longlong *)*plVar5;
      local_58 = plVar5;
      FUN_1470013a2(param_2,&local_68,&local_60);
      plVar5 = plVar5 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
    uVar2 = *(undefined4 *)(local_78 + 0xa8);
    plVar5 = *(longlong **)(local_78 + 0xa0);
  }
  lVar3 = local_78;
  iVar1 = *(int *)(local_78 + 0xac);
  FUN_147000037(plVar5,uVar2);
  *(undefined4 *)(lVar3 + 0xa8) = 0;
  if ((iVar1 < 0) && (*(int *)(lVar3 + 0xac) != 0)) {
    FUN_1470015c0(lVar3 + 0xa0,0);
  }
  plVar5 = *(longlong **)(lVar3 + 0xb0);
  uVar2 = 0;
  if ((longlong)*(int *)(lVar3 + 0xb8) != 0) {
    lVar3 = (longlong)*(int *)(lVar3 + 0xb8) << 3;
    do {
      if (param_3 != '\0') {
        local_60 = *(longlong **)*plVar5;
        FUN_144a13f80(param_2 + 0x250,&local_68,&local_60,0);
      }
      local_60 = (longlong *)*plVar5;
      local_58 = plVar5;
      FUN_1470013a2(param_2 + 0x50,&local_68,&local_60);
      plVar5 = plVar5 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
    uVar2 = *(undefined4 *)(local_78 + 0xb8);
    plVar5 = *(longlong **)(local_78 + 0xb0);
    lVar3 = local_78;
  }
  iVar1 = *(int *)(lVar3 + 0xbc);
  FUN_147000037(plVar5,uVar2);
  *(undefined4 *)(lVar3 + 0xb8) = 0;
  if ((iVar1 < 0) && (*(int *)(lVar3 + 0xbc) != 0)) {
    FUN_1470015c0(lVar3 + 0xb0,0);
  }
  plVar5 = *(longlong **)(lVar3 + 0xc0);
  uVar2 = 0;
  if ((longlong)*(int *)(lVar3 + 200) != 0) {
    lVar3 = (longlong)*(int *)(lVar3 + 200) * 0xe8;
    do {
      local_68 = *plVar5;
      local_60 = &local_68;
      local_58 = plVar5;
      FUN_147001620(param_2 + 0xb8,local_4c,&local_60);
      plVar5 = plVar5 + 0x1d;
      lVar3 = lVar3 + -0xe8;
    } while (lVar3 != 0);
    uVar2 = *(undefined4 *)(local_78 + 200);
    plVar5 = *(longlong **)(local_78 + 0xc0);
    lVar3 = local_78;
  }
  iVar1 = *(int *)(lVar3 + 0xcc);
  FUN_146ffe131(plVar5,uVar2);
  *(undefined4 *)(lVar3 + 200) = 0;
  if ((iVar1 < 0) && (*(int *)(lVar3 + 0xcc) != 0)) {
    FUN_146ffe15a(lVar3 + 0xc0,0);
  }
  plVar5 = *(longlong **)(lVar3 + 0xd0);
  uVar2 = 0;
  if ((longlong)*(int *)(lVar3 + 0xd8) != 0) {
    lVar4 = (longlong)*(int *)(lVar3 + 0xd8) * 0xe8;
    do {
      local_68 = *plVar5;
      local_60 = &local_68;
      local_58 = plVar5;
      FUN_147001620(param_2 + 0x108,local_4c,&local_60);
      plVar5 = plVar5 + 0x1d;
      lVar4 = lVar4 + -0xe8;
    } while (lVar4 != 0);
    uVar2 = *(undefined4 *)(lVar3 + 0xd8);
    plVar5 = *(longlong **)(lVar3 + 0xd0);
  }
  iVar1 = *(int *)(lVar3 + 0xdc);
  FUN_146ffe131(plVar5,uVar2);
  *(undefined4 *)(lVar3 + 0xd8) = 0;
  if ((iVar1 < 0) && (*(int *)(lVar3 + 0xdc) != 0)) {
    FUN_146ffe15a(lVar3 + 0xd0,0);
  }
  LeaveCriticalSection(local_70);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fe9f28 FUN_146fe9f28 body=98 status=ok
// SIG undefined FUN_146fe9f28(void)

void FUN_146fe9f28(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_144941252(param_1,iVar2);
    }
    memmove((void *)((longlong)iVar2 * 8 + *param_1),(void *)*param_2,(longlong)(int)uVar1 << 3);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 146fe9f8a FUN_146fe9f8a body=234 status=ok
// SIG undefined FUN_146fe9f8a(void)

void FUN_146fe9f8a(longlong param_1)

{
  FUN_146feb55e(*(undefined8 *)(param_1 + 0x98));
  if (*(int *)(param_1 + 0xac) != *(int *)(param_1 + 0xa8)) {
    FUN_1470015c0(param_1 + 0xa0);
  }
  if (*(int *)(param_1 + 0xcc) != *(int *)(param_1 + 200)) {
    FUN_146ffe15a(param_1 + 0xc0);
  }
  if (*(int *)(param_1 + 0xec) != *(int *)(param_1 + 0xe8)) {
    FUN_1408be2c4(param_1 + 0xe0);
  }
  if (*(int *)(param_1 + 0xfc) != *(int *)(param_1 + 0xf8)) {
    FUN_1402191ca(param_1 + 0xf0);
  }
  if (*(int *)(param_1 + 0x10c) != *(int *)(param_1 + 0x108)) {
    FUN_1408be2c4(param_1 + 0x100);
  }
  if (*(int *)(param_1 + 0x11c) != *(int *)(param_1 + 0x118)) {
    FUN_140cb0586(param_1 + 0x110);
  }
  if (*(int *)(param_1 + 0x134) == *(int *)(param_1 + 0x130)) {
    return;
  }
  FUN_1408be2c4(param_1 + 0x128);
  return;
}



// FUNCTION 146fea074 FUN_146fea074 body=225 status=ok
// SIG undefined FUN_146fea074(void)

undefined4 * FUN_146fea074(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x88);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x38));
  *param_2 = *(undefined4 *)(lVar1 + 0x130);
  param_2[3] = *(undefined4 *)(lVar1 + 0x134);
  param_2[4] = *(undefined4 *)(lVar1 + 0x138);
  if ((LPCRITICAL_SECTION)(lVar1 + 0x38) != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x38));
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  param_2[1] = *(undefined4 *)(param_1 + 0x120);
  param_2[5] = *(undefined4 *)(param_1 + 0x14c);
  param_2[6] = *(undefined4 *)(param_1 + 0x150);
  FUN_1402160b8(&local_30);
  param_2[2] = (float)((double)(local_30 - *(longlong *)(param_1 + 0x70)) / 10000000.0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fea156 FUN_146fea156 body=271 status=ok
// SIG undefined FUN_146fea156(void)

void FUN_146fea156(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong *local_98;
  undefined4 local_90;
  longlong *local_88;
  undefined4 local_80;
  longlong local_78;
  int local_70;
  longlong local_68 [4];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  cVar1 = *(char *)(param_1 + 0x157);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if (cVar1 == '\0') {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    FUN_146fea266();
    local_78 = local_38;
    local_70 = local_30 + -1;
    if (local_30 == 0) {
      local_70 = 0;
    }
    FUN_146fe7788(local_68);
    local_80 = 1;
    local_a8 = 0;
    local_88 = local_68;
    FUN_142ac7c16(*(undefined8 *)(param_1 + 0x88),&local_88,0,0);
    local_90 = 1;
    local_98 = local_68;
    FUN_142acbbc4(param_1);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fea266 FUN_146fea266 body=325 status=ok
// SIG undefined FUN_146fea266(void)

longlong * FUN_146fea266(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14006620a(&local_40,*param_2,*(undefined4 *)(param_2 + 1));
  if (&local_40 == param_1) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)param_1 = (undefined4)local_40;
    *(undefined4 *)((longlong)param_1 + 4) = local_40._4_4_;
    *(undefined4 *)(param_1 + 1) = uStack_38;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_34;
  }
  FUN_140aa5ef8(&local_40,param_1);
  if (&local_40 == param_1) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_40;
    local_40 = 0;
    *(undefined4 *)(param_1 + 1) = uStack_38;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_34;
  }
  local_50 = *param_1;
  iVar2 = (int)param_1[1] + -1;
  if ((int)param_1[1] == 0) {
    iVar2 = 0;
  }
  local_48 = iVar2;
  cVar1 = FUN_146819044();
  if (cVar1 != '\0') {
    do {
      if (iVar2 < 2) {
        iVar2 = 1;
      }
      FUN_14496493a(param_1,iVar2 + -1,1,1);
      local_50 = *param_1;
      iVar2 = (int)param_1[1] + -1;
      if ((int)param_1[1] == 0) {
        iVar2 = 0;
      }
      local_48 = iVar2;
      cVar1 = FUN_146819044(&local_50);
    } while (cVar1 != '\0');
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fea3ac FUN_146fea3ac body=481 status=ok
// SIG undefined FUN_146fea3ac(void)

void FUN_146fea3ac(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  EnterCriticalSection(lpCriticalSection);
  bVar4 = 1;
  if ((*(byte *)(param_1 + 0x92) & 1) == 0) {
    bVar4 = *(byte *)(param_1 + 0x91);
  }
  LOCK();
  *(undefined1 *)(param_1 + 0x92) = 0;
  UNLOCK();
  LOCK();
  *(undefined1 *)(param_1 + 0x91) = 0;
  UNLOCK();
  iVar1 = *(int *)(param_1 + 0x228);
  LeaveCriticalSection(lpCriticalSection);
  if ((bVar4 & 1) != 0) {
    while (0 < iVar1) {
      FUN_14000f986(0x3a83126f);
      EnterCriticalSection(lpCriticalSection);
      iVar1 = *(int *)(param_1 + 0x228);
      LeaveCriticalSection(lpCriticalSection);
    }
    EnterCriticalSection(lpCriticalSection);
    FUN_147000078(param_1 + 0x1d0);
    FUN_147000078(param_1 + 0x180);
    iVar1 = *(int *)(param_1 + 0x168);
    if ((longlong)iVar1 != 0) {
      lVar7 = *(longlong *)(param_1 + 0x160);
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(lVar7 + lVar5);
        if (lVar2 != 0) {
          FUN_146fe8e20(lVar2);
          FUN_1400020a8(lVar2);
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
    *(undefined4 *)(param_1 + 0x168) = 0;
    if (*(int *)(param_1 + 0x16c) != 0) {
      FUN_1470003d6(param_1 + 0x160);
    }
    if ((longlong)*(int *)(param_1 + 0x178) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x170);
      lVar5 = (longlong)*(int *)(param_1 + 0x178) * 0x10 + lVar7;
      do {
        lVar2 = *(longlong *)(lVar7 + 8);
        if (lVar2 != 0) {
          lVar3 = *(longlong *)(lVar2 + -8);
          if (lVar3 != 0) {
            lVar6 = lVar3 * 0x110;
            do {
              FUN_146fe8e20(lVar2 + -0x110 + lVar6);
              lVar6 = lVar6 + -0x110;
            } while (lVar6 != 0);
          }
          thunk_FUN_1400020a8(lVar2 + -8,lVar3 * 0x110 | 8);
        }
        lVar7 = lVar7 + 0x10;
      } while (lVar7 != lVar5);
    }
    *(undefined4 *)(param_1 + 0x178) = 0;
    if (*(int *)(param_1 + 0x17c) != 0) {
      FUN_147000406(param_1 + 0x170);
    }
                    /* WARNING: Could not recover jumptable at 0x000146fea564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  return;
}



// FUNCTION 146fea58e FUN_146fea58e body=628 status=ok
// SIG undefined FUN_146fea58e(void)

/* WARNING: Removing unreachable block (ram,0x000146fea700) */

void FUN_146fea58e(longlong param_1,longlong *param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 local_d2;
  undefined1 local_d1;
  longlong local_d0;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  int local_a0;
  longlong local_98;
  int local_90;
  longlong local_88;
  int local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined5 local_68;
  undefined3 uStack_63;
  undefined5 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_58 = 0;
  uStack_50 = 0;
  iVar1 = (int)param_2[1];
  local_d0 = param_1;
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  local_d2 = param_4;
  local_d1 = param_3;
  if (iVar1 != 0) {
    FUN_147001782(&local_58);
    if ((longlong)(int)param_2[1] != 0) {
      puVar5 = (undefined8 *)*param_2;
      puVar6 = puVar5 + (longlong)(int)param_2[1] * 2;
      do {
        local_a8 = *puVar5;
        local_a0 = *(int *)(puVar5 + 1) + -1;
        if (*(int *)(puVar5 + 1) == 0) {
          local_a0 = 0;
        }
        FUN_146fea266(&local_98,&local_a8);
        local_88 = local_98;
        local_80 = local_90 + -1;
        if (local_90 == 0) {
          local_80 = 0;
        }
        FUN_146fe7788(&local_78,&local_88);
        uVar2 = uStack_50;
        lVar4 = (longlong)(int)uStack_50;
        uVar3 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
        if (uStack_50._4_4_ < uVar3) {
          FUN_1470017d8(&local_58,uVar2 & 0xffffffff);
        }
        lVar4 = lVar4 * 0x20;
        *(undefined8 *)(local_58 + lVar4) = 0;
        *(undefined8 *)(local_58 + lVar4) = local_78;
        *(undefined4 *)(local_58 + 8 + lVar4) = (undefined4)local_70;
        *(undefined4 *)(local_58 + 0xc + lVar4) = local_70._4_4_;
        *(ulonglong *)(local_58 + 0x15 + lVar4) = CONCAT53(uStack_60,uStack_63);
        *(ulonglong *)(local_58 + 0x10 + lVar4) = CONCAT35(uStack_63,local_68);
        local_70 = 0;
        local_78 = 0;
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        puVar5 = puVar5 + 2;
      } while (puVar5 != puVar6);
    }
  }
  lVar4 = local_d0;
  local_b8 = local_58;
  local_b0 = (int)uStack_50;
  local_e8 = local_d2;
  FUN_142ac7c16(*(undefined8 *)(local_d0 + 0x88),&local_b8,1,local_d1);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x30));
  if (*(char *)(lVar4 + 0x157) != '\0') {
    *(undefined4 *)(lVar4 + 0x155) = 0x1000000;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x30));
  local_c8 = local_58;
  local_c0 = (int)uStack_50;
  FUN_142acbbc4(lVar4);
  FUN_147001757(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fea804 FUN_146fea804 body=246 status=ok
// SIG undefined FUN_146fea804(void)

void FUN_146fea804(longlong param_1,undefined8 *param_2,undefined4 param_3,int *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puVar2 = (undefined8 *)*param_2;
    lVar1 = (longlong)*(int *)(param_2 + 1) << 5;
    do {
      FUN_142ac76a8(puVar2);
      if (*(int *)(puVar2 + 3) - 1U < 2) {
        local_68 = *puVar2;
        local_60 = *(int *)(puVar2 + 1) + -1;
        if (*(int *)(puVar2 + 1) == 0) {
          local_60 = 0;
        }
        FUN_146febd78(*(undefined8 *)(param_1 + 0x98),&local_68,param_3);
      }
      else if (*(int *)(puVar2 + 3) == 0) {
        local_58 = *puVar2;
        local_50 = *(int *)(puVar2 + 1) + -1;
        if (*(int *)(puVar2 + 1) == 0) {
          local_50 = 0;
        }
        FUN_146febcf2(*(undefined8 *)(param_1 + 0x98),&local_58,param_3);
      }
      puVar2 = puVar2 + 4;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  *param_4 = *(int *)(*(longlong *)(param_1 + 0x98) + 0x40) -
             *(int *)(*(longlong *)(param_1 + 0x98) + 0x3c);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


