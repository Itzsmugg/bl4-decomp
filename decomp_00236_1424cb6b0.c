// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1424cb6b0 Unwind@1424cb6b0 body=34 status=ok
// SIG undefined Unwind@1424cb6b0(void)

void Unwind_1424cb6b0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1424cb6e0 FUN_1424cb6e0 body=235 status=ok
// SIG undefined FUN_1424cb6e0(void)

undefined8 * FUN_1424cb6e0(undefined8 *param_1,int *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = icu_64::Calendar::vftable;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 2;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c5) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
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
  *(undefined8 *)((longlong)param_1 + 0x77) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*param_2 < 1) {
    lVar1 = FUN_1424b77f0();
    param_1[0x1e] = lVar1;
    if (lVar1 == 0) {
      *param_2 = 7;
    }
    uVar2 = FUN_1424a3b00();
    FUN_1424cb850(param_1,uVar2,0,param_2);
  }
  return param_1;
}



// FUNCTION 1424cb7d0 Unwind@1424cb7d0 body=32 status=ok
// SIG undefined Unwind@1424cb7d0(void)

void Unwind_1424cb7d0(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1424cb7f0 FUN_1424cb7f0 body=82 status=ok
// SIG undefined FUN_1424cb7f0(void)

void FUN_1424cb7f0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x77) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  return;
}



// FUNCTION 1424cb850 FUN_1424cb850 body=1021 status=ok
// SIG undefined FUN_1424cb850(void)

void FUN_1424cb850(longlong param_1,longlong param_2,char *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int *piVar7;
  undefined1 local_3d8 [20];
  char local_3c4;
  int local_2f8 [56];
  undefined1 local_218 [224];
  longlong local_138;
  longlong local_130 [2];
  undefined1 local_11e [198];
  longlong local_58;
  longlong local_50;
  undefined4 local_44;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (0 < *param_4) {
    return;
  }
  *(undefined4 *)(param_1 + 0x100) = 1;
  *(undefined1 *)(param_1 + 0x104) = 1;
  *(undefined4 *)(param_1 + 0x108) = 7;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 1;
  *(undefined4 *)(param_1 + 0x114) = 86400000;
  local_44 = 0;
  FUN_1424a3ce0(local_3d8);
  FUN_1424a4140(local_3d8,&local_44);
  FUN_1424a3c00(local_218);
  if ((*(char *)(param_2 + 0x1a) == '\0') ||
     ((*(char *)(param_2 + 0x14) != '\0' && (local_3c4 == '\0')))) {
    local_44 = 0;
    FUN_1424a3ce0(&local_138,param_2);
    FUN_1424a4070(&local_138,&local_44);
    FUN_1412ae150(local_2f8,local_130,local_11e,0,0);
    FUN_1424a3e60(local_218,local_2f8);
    FUN_1414b3f60(local_2f8);
    FUN_1414b3f60(&local_138);
  }
  else {
    FUN_1424a3d10(local_218,param_2);
  }
  uVar2 = FUN_1424a5500(local_218);
  lVar4 = 0;
  lVar3 = FUN_1424ebfe0(0,uVar2,param_4);
  FUN_1424ecc30(lVar3,"calendar",lVar3,param_4);
  if (param_3 != (char *)0x0) {
    if ((*param_3 == '\0') || (iVar1 = strcmp(param_3,"gregorian"), iVar1 == 0)) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_1424ec1c0(lVar3,param_3,0,param_4);
      FUN_1424ec1c0(lVar4,"monthNames",lVar4,param_4);
      if ((lVar4 != 0) && (iVar1 = *param_4, iVar1 != 2)) goto joined_r0x0001424cba9a;
    }
  }
  *param_4 = 0;
  lVar4 = FUN_1424ec1c0(lVar3,"gregorian",lVar4,param_4);
  FUN_1424ec1c0(lVar4,"monthNames",lVar4,param_4);
  iVar1 = *param_4;
joined_r0x0001424cba9a:
  if (iVar1 < 1) {
    local_130[0] = param_1 + 0x1c5;
    local_138 = param_1 + 0x128;
    local_58 = lVar3;
    uVar2 = FUN_1424ed0b0(lVar4,0,param_4);
    local_50 = lVar4;
    uVar5 = FUN_1424ed0b0(lVar4,1,param_4);
    FUN_1425321b0(&local_138,uVar5,uVar2);
    FUN_1424d5310(*(undefined8 *)(param_2 + 0x28),1,&local_138,4,param_4);
    lVar6 = FUN_1424edad0(0,"supplementalData",param_4);
    FUN_1424ecc30(lVar6,"weekData",lVar6,param_4);
    uVar2 = FUN_1424ecc30(lVar6,&local_138,0,param_4);
    lVar4 = local_50;
    iVar1 = *param_4;
    if ((lVar6 != 0) && (iVar1 == 2)) {
      *param_4 = 0;
      uVar2 = FUN_1424ecc30(lVar6,&DAT_149939ac3,0,param_4);
      iVar1 = *param_4;
    }
    lVar3 = local_58;
    if (iVar1 < 1) {
      piVar7 = (int *)FUN_1424eaea0(uVar2,local_2f8,param_4);
      if ((((*param_4 < 1) && (local_2f8[0] == 6)) && (*piVar7 - 1U < 7)) &&
         (((piVar7[1] - 1U < 7 && (piVar7[2] - 1U < 7)) && (piVar7[4] - 1U < 7)))) {
        *(int *)(param_1 + 0x100) = *piVar7;
        *(char *)(param_1 + 0x104) = (char)piVar7[1];
        *(int *)(param_1 + 0x108) = piVar7[2];
        *(int *)(param_1 + 0x10c) = piVar7[3];
        *(int *)(param_1 + 0x110) = piVar7[4];
        *(int *)(param_1 + 0x114) = piVar7[5];
      }
      else {
        *param_4 = 3;
      }
    }
    else {
      *param_4 = -0x80;
    }
    FUN_1424ea9f0(uVar2);
    FUN_1424ea9f0(lVar6);
  }
  else {
    *param_4 = -0x80;
  }
  if (lVar4 != 0) {
    FUN_1424ea9f0(lVar4);
  }
  if (lVar3 != 0) {
    FUN_1424ea9f0(lVar3);
  }
  FUN_1414b3f60(local_218);
  FUN_1414b3f60(local_3d8);
  return;
}



// FUNCTION 1424cbc50 Unwind@1424cbc50 body=86 status=ok
// SIG undefined Unwind@1424cbc50(void)

void Unwind_1424cbc50(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x3b8) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x3b8));
  }
  if (*(longlong *)(param_2 + 0x3b0) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x3b0));
  }
  return;
}



// FUNCTION 1424cbcb0 Unwind@1424cbcb0 body=54 status=ok
// SIG undefined Unwind@1424cbcb0(void)

void Unwind_1424cbcb0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x2d0);
  return;
}



// FUNCTION 1424cbcf0 Unwind@1424cbcf0 body=54 status=ok
// SIG undefined Unwind@1424cbcf0(void)

void Unwind_1424cbcf0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x1f0);
  return;
}



// FUNCTION 1424cbd30 Unwind@1424cbd30 body=51 status=ok
// SIG undefined Unwind@1424cbd30(void)

void Unwind_1424cbd30(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x30);
  return;
}



// FUNCTION 1424cbd70 FUN_1424cbd70 body=227 status=ok
// SIG undefined FUN_1424cbd70(void)

undefined8 * FUN_1424cbd70(undefined8 *param_1,longlong param_2,undefined8 param_3,int *param_4)

{
  *param_1 = icu_64::Calendar::vftable;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 2;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c5) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*param_4 < 1) {
    if (param_2 == 0) {
      *param_4 = 1;
    }
    else {
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *(undefined8 *)((longlong)param_1 + 0x77) = 0;
      *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
      *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x1e] = param_2;
      FUN_1424cb850(param_1,param_3,0,param_4,param_1,0xfffffffffffffffe);
    }
  }
  return param_1;
}



// FUNCTION 1424cbe60 Unwind@1424cbe60 body=30 status=ok
// SIG undefined Unwind@1424cbe60(void)

void Unwind_1424cbe60(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1424cbe80 FUN_1424cbe80 body=257 status=ok
// SIG undefined FUN_1424cbe80(void)

undefined8 * FUN_1424cbe80(undefined8 *param_1,longlong *param_2,undefined8 param_3,int *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  *param_1 = icu_64::Calendar::vftable;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 2;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c5) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*param_4 < 1) {
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined8 *)((longlong)param_1 + 0x77) = 0;
    *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
    *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    lVar1 = (**(code **)(*param_2 + 0x58))(param_2);
    param_1[0x1e] = lVar1;
    if (lVar1 == 0) {
      *param_4 = 7;
    }
    FUN_1424cb850(param_1,param_3,0,param_4,param_1,uVar2);
  }
  return param_1;
}



// FUNCTION 1424cbf90 Unwind@1424cbf90 body=34 status=ok
// SIG undefined Unwind@1424cbf90(void)

void Unwind_1424cbf90(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1424cbfc0 FUN_1424cbfc0 body=53 status=ok
// SIG undefined FUN_1424cbfc0(void)

void FUN_1424cbfc0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::Calendar::vftable;
  puVar1 = (undefined8 *)param_1[0x1e];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 1424cc000 FUN_1424cc000 body=58 status=ok
// SIG undefined FUN_1424cc000(void)

undefined8 * FUN_1424cc000(undefined8 *param_1)

{
  *param_1 = icu_64::Calendar::vftable;
  param_1[0x1e] = 0;
  FUN_1424cc060();
  return param_1;
}



// FUNCTION 1424cc040 Unwind@1424cc040 body=30 status=ok
// SIG undefined Unwind@1424cc040(void)

void Unwind_1424cc040(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1424cc060 FUN_1424cc060 body=473 status=ok
// SIG undefined FUN_1424cc060(void)

longlong FUN_1424cc060(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  if (param_1 != param_2) {
    uVar20 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x60) = uVar20;
    uVar20 = *(undefined8 *)(param_2 + 0x54);
    *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_2 + 0x4c);
    *(undefined8 *)(param_1 + 0x54) = uVar20;
    uVar20 = *(undefined8 *)(param_2 + 0xc);
    uVar14 = *(undefined8 *)(param_2 + 0x14);
    uVar15 = *(undefined8 *)(param_2 + 0x1c);
    uVar16 = *(undefined8 *)(param_2 + 0x24);
    uVar17 = *(undefined8 *)(param_2 + 0x2c);
    uVar18 = *(undefined8 *)(param_2 + 0x34);
    uVar19 = *(undefined8 *)(param_2 + 0x44);
    *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
    *(undefined8 *)(param_1 + 0x44) = uVar19;
    *(undefined8 *)(param_1 + 0x2c) = uVar17;
    *(undefined8 *)(param_1 + 0x34) = uVar18;
    *(undefined8 *)(param_1 + 0x1c) = uVar15;
    *(undefined8 *)(param_1 + 0x24) = uVar16;
    *(undefined8 *)(param_1 + 0xc) = uVar20;
    *(undefined8 *)(param_1 + 0x14) = uVar14;
    *(undefined8 *)(param_1 + 0x77) = *(undefined8 *)(param_2 + 0x77);
    uVar20 = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x70) = uVar20;
    uVar20 = *(undefined8 *)(param_2 + 200);
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
    *(undefined8 *)(param_1 + 200) = uVar20;
    uVar20 = *(undefined8 *)(param_2 + 0x88);
    uVar2 = *(undefined4 *)(param_2 + 0x90);
    uVar3 = *(undefined4 *)(param_2 + 0x94);
    uVar4 = *(undefined4 *)(param_2 + 0x98);
    uVar5 = *(undefined4 *)(param_2 + 0x9c);
    uVar6 = *(undefined4 *)(param_2 + 0xa0);
    uVar7 = *(undefined4 *)(param_2 + 0xa4);
    uVar8 = *(undefined4 *)(param_2 + 0xa8);
    uVar9 = *(undefined4 *)(param_2 + 0xac);
    uVar10 = *(undefined4 *)(param_2 + 0xb0);
    uVar11 = *(undefined4 *)(param_2 + 0xb4);
    uVar12 = *(undefined4 *)(param_2 + 0xb8);
    uVar13 = *(undefined4 *)(param_2 + 0xbc);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(param_1 + 0x88) = uVar20;
    *(undefined4 *)(param_1 + 0x90) = uVar2;
    *(undefined4 *)(param_1 + 0x94) = uVar3;
    *(undefined4 *)(param_1 + 0x98) = uVar4;
    *(undefined4 *)(param_1 + 0x9c) = uVar5;
    *(undefined4 *)(param_1 + 0xa0) = uVar6;
    *(undefined4 *)(param_1 + 0xa4) = uVar7;
    *(undefined4 *)(param_1 + 0xa8) = uVar8;
    *(undefined4 *)(param_1 + 0xac) = uVar9;
    *(undefined4 *)(param_1 + 0xb0) = uVar10;
    *(undefined4 *)(param_1 + 0xb4) = uVar11;
    *(undefined4 *)(param_1 + 0xb8) = uVar12;
    *(undefined4 *)(param_1 + 0xbc) = uVar13;
    uVar20 = *(undefined8 *)(param_2 + 0xd4);
    *(undefined8 *)(param_1 + 0xcc) = *(undefined8 *)(param_2 + 0xcc);
    *(undefined8 *)(param_1 + 0xd4) = uVar20;
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(param_2 + 0xe8);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
    puVar1 = *(undefined8 **)(param_1 + 0xf0);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0xf0) = 0;
    if (*(longlong **)(param_2 + 0xf0) != (longlong *)0x0) {
      uVar20 = (**(code **)(**(longlong **)(param_2 + 0xf0) + 0x58))();
      *(undefined8 *)(param_1 + 0xf0) = uVar20;
    }
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
    *(undefined1 *)(param_1 + 0x104) = *(undefined1 *)(param_2 + 0x104);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_2 + 0x114);
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
    strncpy((char *)(param_1 + 0x128),(char *)(param_2 + 0x128),0x9d);
    strncpy((char *)(param_1 + 0x1c5),(char *)(param_2 + 0x1c5),0x9d);
    *(undefined1 *)(param_1 + 0x1c4) = 0;
    *(undefined1 *)(param_1 + 0x261) = 0;
  }
  return param_1;
}



// FUNCTION 1424cc240 FUN_1424cc240 body=368 status=ok
// SIG undefined FUN_1424cc240(void)

longlong FUN_1424cc240(undefined8 *param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  double dVar4;
  longlong local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_38 = 0;
  local_30 = param_1;
  FUN_1424ccdd0(param_2,&local_38);
  if (*param_3 < 1) {
    lVar3 = (**(code **)(**(longlong **)(local_38 + 0x18) + 0x10))();
    FUN_142537ca0(local_38);
    puVar2 = local_30;
    if (lVar3 != 0) {
      if (local_30 != (undefined8 *)0x0) {
        puVar1 = *(undefined8 **)(lVar3 + 0xf0);
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        *(undefined8 **)(lVar3 + 0xf0) = puVar2;
        *(undefined1 *)(lVar3 + 9) = 0;
      }
      dVar4 = (double)FUN_1424d9690();
      if (0 < *param_3) {
        return lVar3;
      }
      if (dVar4 <= 1.838821689216e+17) {
        if ((dVar4 < -1.84303902528e+17) &&
           (dVar4 = -1.84303902528e+17, *(char *)(lVar3 + 0xe8) == '\0')) goto LAB_1424cc3a5;
      }
      else {
        if (*(char *)(lVar3 + 0xe8) == '\0') {
LAB_1424cc3a5:
          *param_3 = 1;
          return lVar3;
        }
        dVar4 = 1.838821689216e+17;
      }
      *(double *)(lVar3 + 0xe0) = dVar4;
      *(undefined4 *)(lVar3 + 8) = 0x1000001;
      *(undefined8 *)(lVar3 + 0xc) = 0;
      *(undefined8 *)(lVar3 + 0x14) = 0;
      *(undefined8 *)(lVar3 + 0x1c) = 0;
      *(undefined8 *)(lVar3 + 0x24) = 0;
      *(undefined8 *)(lVar3 + 0x2c) = 0;
      *(undefined8 *)(lVar3 + 0x34) = 0;
      *(undefined8 *)(lVar3 + 0x3c) = 0;
      *(undefined8 *)(lVar3 + 0x44) = 0;
      *(undefined8 *)(lVar3 + 0x4c) = 0;
      *(undefined8 *)(lVar3 + 0x54) = 0;
      *(undefined8 *)(lVar3 + 0x5c) = 0;
      *(undefined8 *)(lVar3 + 100) = 0;
      *(undefined8 *)(lVar3 + 0x6c) = 0;
      *(undefined8 *)(lVar3 + 0x74) = 0;
      *(undefined4 *)(lVar3 + 0x7b) = 0;
      *(undefined8 *)(lVar3 + 0x80) = 0;
      *(undefined8 *)(lVar3 + 0x88) = 0;
      *(undefined8 *)(lVar3 + 0x90) = 0;
      *(undefined8 *)(lVar3 + 0x98) = 0;
      *(undefined8 *)(lVar3 + 0xa0) = 0;
      *(undefined8 *)(lVar3 + 0xa8) = 0;
      *(undefined8 *)(lVar3 + 0xb0) = 0;
      *(undefined8 *)(lVar3 + 0xb8) = 0;
      *(undefined8 *)(lVar3 + 0xc0) = 0;
      *(undefined8 *)(lVar3 + 200) = 0;
      *(undefined8 *)(lVar3 + 0xcc) = 0;
      *(undefined8 *)(lVar3 + 0xd4) = 0;
      return lVar3;
    }
    *param_3 = 7;
  }
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)(local_30,1);
  }
  return 0;
}



// FUNCTION 1424cc3b0 Unwind@1424cc3b0 body=48 status=ok
// SIG undefined Unwind@1424cc3b0(void)

void Unwind_1424cc3b0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x28) != 0) {
    (**(code **)**(undefined8 **)(param_2 + 0x28))(*(undefined8 **)(param_2 + 0x28),1);
  }
  return;
}



// FUNCTION 1424cc3e0 FUN_1424cc3e0 body=37 status=ok
// SIG undefined FUN_1424cc3e0(void)

void FUN_1424cc3e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1424b77f0();
  FUN_1424cc240(uVar1,param_1,param_2);
  return;
}



// FUNCTION 1424cc410 FUN_1424cc410 body=1147 status=ok
// SIG undefined FUN_1424cc410(void)

undefined8 * FUN_1424cc410(undefined4 param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*param_3 < 1) {
    local_30 = (undefined8 *)0x0;
    switch(param_1) {
    case 0:
      local_28 = (undefined8 *)thunk_FUN_1424da030(0x290);
      if (local_28 != (undefined8 *)0x0) {
        FUN_1424a20e0(local_28,param_2,param_3);
      }
      FUN_1424d40e0(&local_30,local_28,param_3);
      puVar1 = local_30;
      break;
    case 1:
      local_28 = (undefined8 *)thunk_FUN_1424da030(0x290);
      if (local_28 != (undefined8 *)0x0) {
        FUN_142575f90(local_28,param_2,param_3);
      }
      FUN_1424d40e0(&local_30,local_28,param_3);
      puVar1 = local_30;
      break;
    case 2:
      local_28 = (undefined8 *)thunk_FUN_1424da030(0x290);
      if (local_28 != (undefined8 *)0x0) {
        FUN_1425766a0(local_28,param_2,param_3);
      }
      FUN_1424d40e0(&local_30,local_28,param_3);
      puVar1 = local_30;
      break;
    case 3:
      local_28 = (undefined8 *)thunk_FUN_1424da030(0x290);
      if (local_28 != (undefined8 *)0x0) {
        FUN_142576af0(local_28,param_2,param_3);
      }
      FUN_1424d40e0(&local_30,local_28,param_3);
      puVar1 = local_30;
      break;
    case 4:
      local_28 = (undefined8 *)thunk_FUN_1424da030(0x268);
      if (local_28 != (undefined8 *)0x0) {
        FUN_142577010(local_28,param_2,param_3);
      }
      FUN_1424d40e0(&local_30,local_28,param_3);
      puVar1 = local_30;
      break;
    case 5:
      local_28 = (undefined8 *)thunk_FUN_1424da030(0x270);
      if (local_28 != (undefined8 *)0x0) {
        FUN_142574eb0(local_28,param_2,param_3,1);
      }
      FUN_1424d40e0(&local_30,local_28,param_3);
      puVar1 = local_30;
      break;
    case 6:
    case 0x11:
      local_28 = (undefined8 *)thunk_FUN_1424da030(0x270);
      if (local_28 == (undefined8 *)0x0) {
        puVar1 = local_30;
        if (*param_3 < 1) {
          *param_3 = 7;
          puVar1 = local_28;
        }
      }
      else {
        FUN_142574eb0(local_28,param_2,param_3,0);
        puVar1 = local_28;
        if (0 < *param_3) {
          (**(code **)*local_28)(local_28,1);
          puVar1 = local_30;
        }
      }
      break;
    case 7:
      local_28 = (undefined8 *)thunk_FUN_1424da030(0x268);
      if (local_28 != (undefined8 *)0x0) {
        FUN_142577680(local_28,param_2,param_3);
      }
      FUN_1424d40e0(&local_30,local_28,param_3);
      puVar1 = local_30;
      break;
    case 8:
      local_28 = (undefined8 *)thunk_FUN_1424da030(0x278);
      if (local_28 != (undefined8 *)0x0) {
        FUN_1425788b0(local_28,param_2,param_3);
      }
      FUN_1424d40e0(&local_30,local_28,param_3);
      puVar1 = local_30;
      break;
    case 9:
      local_28 = (undefined8 *)thunk_FUN_1424da030(0x268);
      if (local_28 != (undefined8 *)0x0) {
        FUN_14257a2d0(local_28,param_2,param_3);
      }
      FUN_1424d40e0(&local_30,local_28,param_3);
      puVar1 = local_30;
      break;
    case 10:
      local_28 = (undefined8 *)thunk_FUN_1424da030(0x268);
      if (local_28 != (undefined8 *)0x0) {
        FUN_14257b170(local_28,param_2,param_3);
      }
      FUN_1424d40e0(&local_30,local_28,param_3);
      puVar1 = local_30;
      break;
    case 0xb:
      local_28 = (undefined8 *)thunk_FUN_1424da030(0x270);
      if (local_28 != (undefined8 *)0x0) {
        FUN_14257b580(local_28,param_2,param_3,0);
      }
      FUN_1424d40e0(&local_30,local_28,param_3);
      puVar1 = local_30;
      break;
    case 0xc:
      local_28 = (undefined8 *)thunk_FUN_1424da030(0x270);
      if (local_28 != (undefined8 *)0x0) {
        FUN_14257b580(local_28,param_2,param_3,1);
      }
      FUN_1424d40e0(&local_30,local_28,param_3);
      puVar1 = local_30;
      break;
    case 0xd:
      local_28 = (undefined8 *)thunk_FUN_1424da030(0x290);
      if (local_28 != (undefined8 *)0x0) {
        FUN_1424a20e0(local_28,param_2,param_3);
      }
      FUN_1424d40e0(&local_30,local_28,param_3);
      puVar1 = local_30;
      if (local_30 != (undefined8 *)0x0) {
        if (*(int *)(local_30 + 0x20) != 2) {
          *(undefined4 *)(local_30 + 0x20) = 2;
          *(undefined1 *)((longlong)local_30 + 9) = 0;
        }
        if (*(char *)((longlong)local_30 + 0x104) != '\x04') {
          *(undefined1 *)((longlong)local_30 + 0x104) = 4;
          *(undefined1 *)((longlong)local_30 + 9) = 0;
        }
      }
      break;
    case 0xe:
      local_28 = (undefined8 *)thunk_FUN_1424da030(0x278);
      if (local_28 != (undefined8 *)0x0) {
        FUN_14257ba40(local_28,param_2,param_3);
      }
      FUN_1424d40e0(&local_30,local_28,param_3);
      puVar1 = local_30;
      break;
    case 0xf:
      local_28 = (undefined8 *)thunk_FUN_1424da030(0x270);
      if (local_28 != (undefined8 *)0x0) {
        FUN_142574eb0(local_28,param_2,param_3,2);
      }
      FUN_1424d40e0(&local_30,local_28,param_3);
      puVar1 = local_30;
      break;
    case 0x10:
      local_28 = (undefined8 *)thunk_FUN_1424da030(0x270);
      if (local_28 != (undefined8 *)0x0) {
        FUN_142574eb0(local_28,param_2,param_3,3);
      }
      FUN_1424d40e0(&local_30,local_28,param_3);
      puVar1 = local_30;
      break;
    default:
      *param_3 = 0x10;
      puVar1 = local_30;
    }
  }
  else {
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}



// FUNCTION 1424cc890 Unwind@1424cc890 body=34 status=ok
// SIG undefined Unwind@1424cc890(void)

void Unwind_1424cc890(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1424cc8c0 Unwind@1424cc8c0 body=34 status=ok
// SIG undefined Unwind@1424cc8c0(void)

void Unwind_1424cc8c0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1424cc8f0 Unwind@1424cc8f0 body=34 status=ok
// SIG undefined Unwind@1424cc8f0(void)

void Unwind_1424cc8f0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1424cc920 Unwind@1424cc920 body=34 status=ok
// SIG undefined Unwind@1424cc920(void)

void Unwind_1424cc920(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1424cc950 Unwind@1424cc950 body=34 status=ok
// SIG undefined Unwind@1424cc950(void)

void Unwind_1424cc950(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1424cc980 Unwind@1424cc980 body=34 status=ok
// SIG undefined Unwind@1424cc980(void)

void Unwind_1424cc980(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1424cc9b0 Unwind@1424cc9b0 body=34 status=ok
// SIG undefined Unwind@1424cc9b0(void)

void Unwind_1424cc9b0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1424cc9e0 Unwind@1424cc9e0 body=34 status=ok
// SIG undefined Unwind@1424cc9e0(void)

void Unwind_1424cc9e0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1424cca10 Unwind@1424cca10 body=34 status=ok
// SIG undefined Unwind@1424cca10(void)

void Unwind_1424cca10(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1424cca40 Unwind@1424cca40 body=34 status=ok
// SIG undefined Unwind@1424cca40(void)

void Unwind_1424cca40(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1424cca70 Unwind@1424cca70 body=34 status=ok
// SIG undefined Unwind@1424cca70(void)

void Unwind_1424cca70(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1424ccaa0 Unwind@1424ccaa0 body=34 status=ok
// SIG undefined Unwind@1424ccaa0(void)

void Unwind_1424ccaa0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1424ccad0 Unwind@1424ccad0 body=34 status=ok
// SIG undefined Unwind@1424ccad0(void)

void Unwind_1424ccad0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1424ccb00 Unwind@1424ccb00 body=34 status=ok
// SIG undefined Unwind@1424ccb00(void)

void Unwind_1424ccb00(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1424ccb30 Unwind@1424ccb30 body=34 status=ok
// SIG undefined Unwind@1424ccb30(void)

void Unwind_1424ccb30(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1424ccb60 Unwind@1424ccb60 body=34 status=ok
// SIG undefined Unwind@1424ccb60(void)

void Unwind_1424ccb60(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1424ccb90 Unwind@1424ccb90 body=34 status=ok
// SIG undefined Unwind@1424ccb90(void)

void Unwind_1424ccb90(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1424ccbc0 Unwind@1424ccbc0 body=44 status=ok
// SIG undefined Unwind@1424ccbc0(void)

void Unwind_1424ccbc0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}



// FUNCTION 1424ccbf0 FUN_1424ccbf0 body=462 status=ok
// SIG undefined FUN_1424ccbf0(void)

void FUN_1424ccbf0(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_188 [32];
  int *local_168;
  int local_154;
  int local_150;
  undefined1 local_14c [4];
  undefined1 local_148 [32];
  undefined1 local_128 [264];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_150 = 0;
  iVar1 = FUN_1424ea1f0(param_1,local_128,0xff,&local_150);
  if (local_150 < 1) {
    local_128[iVar1] = 0;
    local_168 = &local_150;
    iVar1 = FUN_1424e74e0(local_128,"calendar",local_148,0x1f);
    if (local_150 < 1) {
      local_148[iVar1] = 0;
      iVar1 = FUN_1424cdc90(local_148);
      if (iVar1 != -1) goto LAB_1424ccdae;
    }
    local_150 = 0;
    local_168 = &local_150;
    FUN_1424d5310(local_128,1,local_14c,4);
    if (local_150 < 1) {
      lVar2 = FUN_1424edad0(0,"supplementalData",&local_150);
      FUN_1424ecc30(lVar2,"calendarPreferenceData",lVar2,&local_150);
      lVar3 = FUN_1424ecc30(lVar2,local_14c,0,&local_150);
      if ((lVar2 != 0) && (local_150 == 2)) {
        local_150 = 0;
        lVar3 = FUN_1424ecc30(lVar2,&DAT_149939ac3,0,&local_150);
      }
      local_148[0] = 0;
      if ((local_150 < 1) && (lVar3 != 0)) {
        local_154 = 0;
        uVar4 = FUN_1424ebec0(lVar3,0,&local_154,&local_150);
        if (local_154 < 0x20) {
          FUN_14250ae10(uVar4,local_148);
          local_148[local_154] = 0;
          FUN_1424cdc90(local_148);
        }
      }
      FUN_1424ea9f0(lVar3);
      FUN_1424ea9f0(lVar2);
    }
  }
LAB_1424ccdae:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_188);
}



// FUNCTION 1424ccdd0 FUN_1424ccdd0 body=158 status=ok
// SIG undefined FUN_1424ccdd0(void)

void FUN_1424ccdd0(undefined8 param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  undefined **local_120;
  undefined4 local_118;
  undefined1 local_114;
  undefined1 local_110 [224];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar1 = FUN_14253ea50(param_3);
  if (*param_3 < 1) {
    local_118 = 0;
    local_114 = 0;
    local_120 = icu_64::LocaleCacheKey<icu_64::SharedCalendar>::vftable;
    FUN_1424a3ce0(local_110,param_1);
    FUN_1424d4140(uVar1,&local_120,0,param_2,param_3);
    local_120 = icu_64::LocaleCacheKey<icu_64::SharedCalendar>::vftable;
    FUN_1414b3f60(local_110);
    thunk_FUN_1424b70d0(&local_120);
  }
  return;
}



// FUNCTION 1424cce70 Unwind@1424cce70 body=63 status=ok
// SIG undefined Unwind@1424cce70(void)

void Unwind_1424cce70(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x28) = icu_64::LocaleCacheKey<icu_64::SharedCalendar>::vftable;
  FUN_1414b3f60(param_2 + 0x38);
  thunk_FUN_1424b70d0(param_2 + 0x28);
  return;
}



// FUNCTION 1424cceb0 Unwind@1424cceb0 body=43 status=ok
// SIG undefined Unwind@1424cceb0(void)

void Unwind_1424cceb0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x28);
  return;
}



// FUNCTION 1424ccee0 FUN_1424ccee0 body=57 status=ok
// SIG undefined FUN_1424ccee0(void)

void FUN_1424ccee0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0xf0);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(longlong *)(param_1 + 0xf0) = param_2;
    *(undefined1 *)(param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 1424ccf20 FUN_1424ccf20 body=185 status=ok
// SIG undefined FUN_1424ccf20(void)

void FUN_1424ccf20(longlong param_1,double param_2,int *param_3)

{
  if (0 < *param_3) {
    return;
  }
  if (param_2 <= 1.838821689216e+17) {
    if ((param_2 < -1.84303902528e+17) &&
       (param_2 = -1.84303902528e+17, *(char *)(param_1 + 0xe8) == '\0')) goto LAB_1424ccfd1;
  }
  else {
    if (*(char *)(param_1 + 0xe8) == '\0') {
LAB_1424ccfd1:
      *param_3 = 1;
      return;
    }
    param_2 = 1.838821689216e+17;
  }
  *(double *)(param_1 + 0xe0) = param_2;
  *(undefined4 *)(param_1 + 8) = 0x1000001;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  return;
}



// FUNCTION 1424ccfe0 thunk_FUN_1424d9690 body=5 status=ok
// SIG undefined thunk_FUN_1424d9690(void)

void thunk_FUN_1424d9690(void)

{
  undefined1 auStack_48 [32];
  _FILETIME _Stack_28;
  ulonglong uStack_20;
  
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  GetSystemTimeAsFileTime(&_Stack_28);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_20 ^ (ulonglong)auStack_48,((longlong)_Stack_28 + -0x19db1ded53e8000) / 10000
               );
}



// FUNCTION 1424ccff0 FUN_1424ccff0 body=130 status=ok
// SIG undefined FUN_1424ccff0(void)

void FUN_1424ccff0(undefined8 param_1,char *param_2,int param_3,int *param_4)

{
  char *_Source;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1424ccdd0(param_1,&local_28,param_4);
  if (*param_4 < 1) {
    _Source = (char *)(**(code **)(**(longlong **)(local_28 + 0x18) + 0xb0))();
    strncpy(param_2,_Source,(longlong)param_3);
    FUN_142537ca0(local_28);
    if (param_2[(longlong)param_3 - 1] != '\0') {
      *param_4 = 0xf;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424cd080 FUN_1424cd080 body=234 status=ok
// SIG undefined FUN_1424cd080(void)

void FUN_1424cd080(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  cVar1 = (**(code **)(*param_1 + 0x20))();
  if (cVar1 != '\0') {
    if ((char)param_1[1] == '\0') {
      (**(code **)(*param_1 + 0xd8))(param_1,&local_34);
      if (0 < local_34) goto LAB_1424cd13d;
      if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
        *(undefined1 *)((longlong)param_1 + 9) = 0;
      }
      *(undefined1 *)(param_1 + 1) = 1;
      *(undefined1 *)((longlong)param_1 + 0xb) = 0;
    }
    if (((char)param_2[1] == '\0') &&
       ((**(code **)(*param_2 + 0xd8))(param_2,&local_34), local_34 < 1)) {
      if (((char)param_2[0x1d] != '\0') || (*(char *)((longlong)param_2 + 10) == '\0')) {
        *(undefined1 *)((longlong)param_2 + 9) = 0;
      }
      *(undefined1 *)(param_2 + 1) = 1;
      *(undefined1 *)((longlong)param_2 + 0xb) = 0;
    }
  }
LAB_1424cd13d:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
}



// FUNCTION 1424cd180 FUN_1424cd180 body=105 status=ok
// SIG undefined FUN_1424cd180(void)

undefined8 FUN_1424cd180(longlong *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = 0;
  uVar2 = 0;
  if (0 < *param_2) goto LAB_1424cd1da;
  if ((char)param_1[1] == '\0') {
    (**(code **)(*param_1 + 0xd8))(param_1);
    if (0 < *param_2) goto LAB_1424cd1da;
    if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
      *(undefined1 *)((longlong)param_1 + 9) = 0;
    }
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined1 *)((longlong)param_1 + 0xb) = 0;
    if (0 < *param_2) goto LAB_1424cd1da;
  }
  uVar1 = (undefined4)param_1[0x1c];
  uVar2 = (undefined4)((ulonglong)param_1[0x1c] >> 0x20);
LAB_1424cd1da:
  return CONCAT44(uVar2,uVar1);
}



// FUNCTION 1424cd1f0 FUN_1424cd1f0 body=222 status=ok
// SIG undefined FUN_1424cd1f0(void)

bool FUN_1424cd1f0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar3 = __RTtypeid();
  lVar4 = __RTtypeid(param_2);
  iVar2 = __std_type_info_compare(lVar3 + 8,lVar4 + 8);
  if ((((((iVar2 == 0) && (*(char *)(param_1 + 0xe8) == *(char *)(param_2 + 0xe8))) &&
        (*(int *)(param_1 + 0xf8) == *(int *)(param_2 + 0xf8))) &&
       ((*(int *)(param_1 + 0xfc) == *(int *)(param_2 + 0xfc) &&
        (*(int *)(param_1 + 0x100) == *(int *)(param_2 + 0x100))))) &&
      ((*(char *)(param_1 + 0x104) == *(char *)(param_2 + 0x104) &&
       ((*(int *)(param_1 + 0x108) == *(int *)(param_2 + 0x108) &&
        (*(int *)(param_1 + 0x10c) == *(int *)(param_2 + 0x10c))))))) &&
     ((*(int *)(param_1 + 0x110) == *(int *)(param_2 + 0x110) &&
      (*(int *)(param_1 + 0x114) == *(int *)(param_2 + 0x114))))) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x10))
                      (*(longlong **)(param_1 + 0xf0),*(undefined8 *)(param_2 + 0xf0));
    bVar5 = cVar1 != '\0';
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}



// FUNCTION 1424cd2d0 FUN_1424cd2d0 body=8 status=ok
// SIG undefined FUN_1424cd2d0(void)

undefined1 FUN_1424cd2d0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xe8);
}



// FUNCTION 1424cd2e0 FUN_1424cd2e0 body=147 status=ok
// SIG undefined FUN_1424cd2e0(void)

undefined4 FUN_1424cd2e0(longlong *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (0 < *param_3) {
    return 0;
  }
  if ((char)param_1[1] == '\0') {
    (**(code **)(*param_1 + 0xd8))(param_1,param_3);
    if (0 < *param_3) {
      return 0;
    }
    if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
      *(undefined1 *)((longlong)param_1 + 9) = 0;
    }
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined1 *)((longlong)param_1 + 0xb) = 0;
    if (0 < *param_3) {
      return 0;
    }
  }
  if ((*(char *)((longlong)param_1 + 9) != '\0') ||
     (((**(code **)(*param_1 + 0xe0))(param_1,param_3), *param_3 < 1 &&
      (*(undefined2 *)((longlong)param_1 + 9) = 0x101, *param_3 < 1)))) {
    uVar1 = *(undefined4 *)((longlong)param_1 + (longlong)param_2 * 4 + 0xc);
  }
  return uVar1;
}



// FUNCTION 1424cd380 FUN_1424cd380 body=111 status=ok
// SIG undefined FUN_1424cd380(void)

void FUN_1424cd380(longlong *param_1,int *param_2)

{
  if ((char)param_1[1] == '\0') {
    (**(code **)(*param_1 + 0xd8))(param_1,param_2);
    if (0 < *param_2) {
      return;
    }
    if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
      *(undefined1 *)((longlong)param_1 + 9) = 0;
    }
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined1 *)((longlong)param_1 + 0xb) = 0;
    if (0 < *param_2) {
      return;
    }
  }
  if ((*(char *)((longlong)param_1 + 9) == '\0') &&
     ((**(code **)(*param_1 + 0xe0))(param_1,param_2), *param_2 < 1)) {
    *(undefined2 *)((longlong)param_1 + 9) = 0x101;
  }
  return;
}



// FUNCTION 1424cd3f0 FUN_1424cd3f0 body=314 status=ok
// SIG undefined FUN_1424cd3f0(void)

void FUN_1424cd3f0(longlong *param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)((longlong)param_1 + 0xb) != '\0') {
    local_2c = 0;
    (**(code **)(*param_1 + 0xe0))(param_1);
  }
  lVar1 = (longlong)param_2;
  *(undefined4 *)((longlong)param_1 + lVar1 * 4 + 0xc) = param_3;
  iVar2 = *(int *)((longlong)param_1 + 0xdc);
  if (iVar2 == 10000) {
    *(undefined4 *)((longlong)param_1 + 0xdc) = 1;
    iVar3 = 0;
    do {
      iVar2 = *(int *)((longlong)param_1 + 0xdc);
      uVar6 = 0xffffffff;
      iVar7 = 10000;
      uVar4 = 0;
      while( true ) {
        iVar8 = *(int *)((longlong)param_1 + uVar4 * 4 + 0x80);
        uVar9 = uVar4 & 0xffffffff;
        if (iVar7 <= iVar8 || iVar8 <= iVar2) {
          uVar9 = uVar6;
        }
        if (uVar4 + 1 == 0x17) break;
        if (iVar7 <= iVar8 || iVar8 <= iVar2) {
          iVar8 = iVar7;
        }
        iVar7 = *(int *)((longlong)param_1 + uVar4 * 4 + 0x84);
        uVar5 = (uint)(uVar4 + 1);
        if (iVar7 <= iVar2 || iVar8 <= iVar7) {
          uVar5 = (uint)uVar9;
          iVar7 = iVar8;
        }
        uVar6 = (ulonglong)uVar5;
        uVar4 = uVar4 + 2;
      }
      if ((int)(uint)uVar9 < 0) goto LAB_1424cd509;
      *(int *)((longlong)param_1 + 0xdc) = iVar2 + 1;
      *(int *)((longlong)param_1 + uVar9 * 4 + 0x80) = iVar2 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x17);
    iVar2 = *(int *)((longlong)param_1 + 0xdc);
LAB_1424cd509:
    iVar2 = iVar2 + 1;
  }
  *(int *)((longlong)param_1 + 0xdc) = iVar2 + 1;
  *(int *)((longlong)param_1 + lVar1 * 4 + 0x80) = iVar2;
  *(undefined1 *)((longlong)param_1 + lVar1 + 0x68) = 1;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 1) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 1424cd550 FUN_1424cd550 body=1365 status=ok
// SIG undefined FUN_1424cd550(void)

void FUN_1424cd550(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)((longlong)param_1 + 0xb) != '\0') {
    local_34 = 0;
    (**(code **)(*param_1 + 0xe0))();
  }
  *(undefined4 *)(param_1 + 2) = param_2;
  iVar1 = *(int *)((longlong)param_1 + 0xdc);
  if (iVar1 == 10000) {
    *(undefined4 *)((longlong)param_1 + 0xdc) = 1;
    iVar2 = 0;
    do {
      iVar1 = *(int *)((longlong)param_1 + 0xdc);
      uVar7 = 0xffffffff;
      iVar3 = 10000;
      uVar8 = 0;
      while( true ) {
        iVar4 = *(int *)((longlong)param_1 + uVar8 * 4 + 0x80);
        uVar5 = uVar8 & 0xffffffff;
        if (iVar3 <= iVar4 || iVar4 <= iVar1) {
          uVar5 = uVar7;
        }
        if (uVar8 + 1 == 0x17) break;
        if (iVar3 <= iVar4 || iVar4 <= iVar1) {
          iVar4 = iVar3;
        }
        iVar3 = *(int *)((longlong)param_1 + uVar8 * 4 + 0x84);
        uVar6 = (uint)(uVar8 + 1);
        if (iVar3 <= iVar1 || iVar4 <= iVar3) {
          uVar6 = (uint)uVar5;
          iVar3 = iVar4;
        }
        uVar7 = (ulonglong)uVar6;
        uVar8 = uVar8 + 2;
      }
      if ((int)(uint)uVar5 < 0) goto LAB_1424cd668;
      *(int *)((longlong)param_1 + 0xdc) = iVar1 + 1;
      *(int *)((longlong)param_1 + uVar5 * 4 + 0x80) = iVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x17);
    iVar1 = *(int *)((longlong)param_1 + 0xdc);
LAB_1424cd668:
    iVar1 = iVar1 + 1;
  }
  *(int *)((longlong)param_1 + 0x84) = iVar1;
  iVar1 = iVar1 + 1;
  *(undefined1 *)((longlong)param_1 + 0x69) = 1;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_3;
  if (iVar1 == 10000) {
    *(undefined4 *)((longlong)param_1 + 0xdc) = 1;
    iVar2 = 0;
    do {
      iVar1 = *(int *)((longlong)param_1 + 0xdc);
      uVar7 = 0xffffffff;
      iVar3 = 10000;
      uVar8 = 0;
      while( true ) {
        iVar4 = *(int *)((longlong)param_1 + uVar8 * 4 + 0x80);
        uVar5 = uVar8 & 0xffffffff;
        if (iVar3 <= iVar4 || iVar4 <= iVar1) {
          uVar5 = uVar7;
        }
        if (uVar8 + 1 == 0x17) break;
        if (iVar3 <= iVar4 || iVar4 <= iVar1) {
          iVar4 = iVar3;
        }
        iVar3 = *(int *)((longlong)param_1 + uVar8 * 4 + 0x84);
        uVar6 = (uint)(uVar8 + 1);
        if (iVar3 <= iVar1 || iVar4 <= iVar3) {
          uVar6 = (uint)uVar5;
          iVar3 = iVar4;
        }
        uVar7 = (ulonglong)uVar6;
        uVar8 = uVar8 + 2;
      }
      if ((int)(uint)uVar5 < 0) goto LAB_1424cd738;
      *(int *)((longlong)param_1 + 0xdc) = iVar1 + 1;
      *(int *)((longlong)param_1 + uVar5 * 4 + 0x80) = iVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x17);
    iVar1 = *(int *)((longlong)param_1 + 0xdc);
LAB_1424cd738:
    iVar1 = iVar1 + 1;
  }
  *(int *)(param_1 + 0x11) = iVar1;
  iVar1 = iVar1 + 1;
  *(undefined1 *)((longlong)param_1 + 0x6a) = 1;
  *(undefined4 *)(param_1 + 4) = param_4;
  if (iVar1 == 10000) {
    *(undefined4 *)((longlong)param_1 + 0xdc) = 1;
    iVar2 = 0;
    do {
      iVar1 = *(int *)((longlong)param_1 + 0xdc);
      uVar7 = 0xffffffff;
      iVar3 = 10000;
      uVar8 = 0;
      while( true ) {
        iVar4 = *(int *)((longlong)param_1 + uVar8 * 4 + 0x80);
        uVar5 = uVar8 & 0xffffffff;
        if (iVar3 <= iVar4 || iVar4 <= iVar1) {
          uVar5 = uVar7;
        }
        if (uVar8 + 1 == 0x17) break;
        if (iVar3 <= iVar4 || iVar4 <= iVar1) {
          iVar4 = iVar3;
        }
        iVar3 = *(int *)((longlong)param_1 + uVar8 * 4 + 0x84);
        uVar6 = (uint)(uVar8 + 1);
        if (iVar3 <= iVar1 || iVar4 <= iVar3) {
          uVar6 = (uint)uVar5;
          iVar3 = iVar4;
        }
        uVar7 = (ulonglong)uVar6;
        uVar8 = uVar8 + 2;
      }
      if ((int)(uint)uVar5 < 0) goto LAB_1424cd819;
      *(int *)((longlong)param_1 + 0xdc) = iVar1 + 1;
      *(int *)((longlong)param_1 + uVar5 * 4 + 0x80) = iVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x17);
    iVar1 = *(int *)((longlong)param_1 + 0xdc);
LAB_1424cd819:
    iVar1 = iVar1 + 1;
  }
  *(int *)((longlong)param_1 + 0x94) = iVar1;
  iVar1 = iVar1 + 1;
  *(undefined1 *)((longlong)param_1 + 0x6d) = 1;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 7) = param_5;
  if (iVar1 == 10000) {
    *(undefined4 *)((longlong)param_1 + 0xdc) = 1;
    iVar2 = 0;
    do {
      iVar1 = *(int *)((longlong)param_1 + 0xdc);
      uVar7 = 0xffffffff;
      iVar3 = 10000;
      uVar8 = 0;
      while( true ) {
        iVar4 = *(int *)((longlong)param_1 + uVar8 * 4 + 0x80);
        uVar5 = uVar8 & 0xffffffff;
        if (iVar3 <= iVar4 || iVar4 <= iVar1) {
          uVar5 = uVar7;
        }
        if (uVar8 + 1 == 0x17) break;
        if (iVar3 <= iVar4 || iVar4 <= iVar1) {
          iVar4 = iVar3;
        }
        iVar3 = *(int *)((longlong)param_1 + uVar8 * 4 + 0x84);
        uVar6 = (uint)(uVar8 + 1);
        if (iVar3 <= iVar1 || iVar4 <= iVar3) {
          uVar6 = (uint)uVar5;
          iVar3 = iVar4;
        }
        uVar7 = (ulonglong)uVar6;
        uVar8 = uVar8 + 2;
      }
      if ((int)(uint)uVar5 < 0) goto LAB_1424cd909;
      *(int *)((longlong)param_1 + 0xdc) = iVar1 + 1;
      *(int *)((longlong)param_1 + uVar5 * 4 + 0x80) = iVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x17);
    iVar1 = *(int *)((longlong)param_1 + 0xdc);
LAB_1424cd909:
    iVar1 = iVar1 + 1;
  }
  *(int *)((longlong)param_1 + 0xac) = iVar1;
  iVar1 = iVar1 + 1;
  *(undefined1 *)((longlong)param_1 + 0x73) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_6;
  if (iVar1 == 10000) {
    *(undefined4 *)((longlong)param_1 + 0xdc) = 1;
    iVar2 = 0;
    do {
      iVar1 = *(int *)((longlong)param_1 + 0xdc);
      uVar7 = 0xffffffff;
      iVar3 = 10000;
      uVar8 = 0;
      while( true ) {
        iVar4 = *(int *)((longlong)param_1 + uVar8 * 4 + 0x80);
        uVar5 = uVar8 & 0xffffffff;
        if (iVar3 <= iVar4 || iVar4 <= iVar1) {
          uVar5 = uVar7;
        }
        if (uVar8 + 1 == 0x17) break;
        if (iVar3 <= iVar4 || iVar4 <= iVar1) {
          iVar4 = iVar3;
        }
        iVar3 = *(int *)((longlong)param_1 + uVar8 * 4 + 0x84);
        uVar6 = (uint)(uVar8 + 1);
        if (iVar3 <= iVar1 || iVar4 <= iVar3) {
          uVar6 = (uint)uVar5;
          iVar3 = iVar4;
        }
        uVar7 = (ulonglong)uVar6;
        uVar8 = uVar8 + 2;
      }
      if ((int)(uint)uVar5 < 0) goto LAB_1424cd9e9;
      *(int *)((longlong)param_1 + 0xdc) = iVar1 + 1;
      *(int *)((longlong)param_1 + uVar5 * 4 + 0x80) = iVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x17);
    iVar1 = *(int *)((longlong)param_1 + 0xdc);
LAB_1424cd9e9:
    iVar1 = iVar1 + 1;
  }
  *(int *)(param_1 + 0x16) = iVar1;
  iVar1 = iVar1 + 1;
  *(undefined1 *)((longlong)param_1 + 0x74) = 1;
  *(undefined4 *)(param_1 + 8) = param_7;
  if (iVar1 == 10000) {
    *(undefined4 *)((longlong)param_1 + 0xdc) = 1;
    iVar2 = 0;
    do {
      iVar1 = *(int *)((longlong)param_1 + 0xdc);
      uVar7 = 0xffffffff;
      iVar3 = 10000;
      uVar8 = 0;
      while( true ) {
        iVar4 = *(int *)((longlong)param_1 + uVar8 * 4 + 0x80);
        uVar5 = uVar8 & 0xffffffff;
        if (iVar3 <= iVar4 || iVar4 <= iVar1) {
          uVar5 = uVar7;
        }
        if (uVar8 + 1 == 0x17) break;
        if (iVar3 <= iVar4 || iVar4 <= iVar1) {
          iVar4 = iVar3;
        }
        iVar3 = *(int *)((longlong)param_1 + uVar8 * 4 + 0x84);
        uVar6 = (uint)(uVar8 + 1);
        if (iVar3 <= iVar1 || iVar4 <= iVar3) {
          uVar6 = (uint)uVar5;
          iVar3 = iVar4;
        }
        uVar7 = (ulonglong)uVar6;
        uVar8 = uVar8 + 2;
      }
      if ((int)(uint)uVar5 < 0) goto LAB_1424cdac8;
      *(int *)((longlong)param_1 + 0xdc) = iVar1 + 1;
      *(int *)((longlong)param_1 + uVar5 * 4 + 0x80) = iVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x17);
    iVar1 = *(int *)((longlong)param_1 + 0xdc);
LAB_1424cdac8:
    iVar1 = iVar1 + 1;
  }
  *(int *)((longlong)param_1 + 0xdc) = iVar1 + 1;
  *(int *)((longlong)param_1 + 0xb4) = iVar1;
  *(undefined1 *)((longlong)param_1 + 0x75) = 1;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 1) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
}



// FUNCTION 1424cdb00 FUN_1424cdb00 body=398 status=ok
// SIG undefined FUN_1424cdb00(void)

int FUN_1424cdb00(longlong *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *param_2) {
    return 0;
  }
  if ((char)param_1[1] == '\0') {
    (**(code **)(*param_1 + 0xd8))(param_1,param_2);
    if (0 < *param_2) {
      return 0;
    }
    if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
      *(undefined1 *)((longlong)param_1 + 9) = 0;
    }
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined1 *)((longlong)param_1 + 0xb) = 0;
    if (0 < *param_2) {
      return 0;
    }
  }
  if ((*(char *)((longlong)param_1 + 9) != '\0') ||
     (((**(code **)(*param_1 + 0xe0))(param_1,param_2), *param_2 < 1 &&
      (*(undefined2 *)((longlong)param_1 + 9) = 0x101, *param_2 < 1)))) {
    iVar4 = (int)param_1[0xb];
    uVar3 = (**(code **)(*param_1 + 0xb0))(param_1);
    uVar1 = FUN_1424cdc90(uVar3);
    switch(uVar1) {
    case 4:
      iVar4 = iVar4 + 0x26e;
      break;
    case 5:
    case 6:
    case 0xf:
    case 0x10:
    case 0x11:
      if (iVar4 < 0x575) {
        iVar2 = (((uint)((ulonglong)(0x574U - iVar4) * 0x7a44c6b >> 0x20) & 0xfffffffe) -
                (uint)((0x574U - iVar4) % 0x43 < 0x22)) + 2;
      }
      else {
        iVar2 = (((iVar4 - 0x575U) % 0x43 < 0x21) - 1) -
                ((uint)((ulonglong)(iVar4 - 0x575U) * 0x7a44c6b >> 0x20) & 0xfffffffe);
      }
      iVar4 = iVar4 + iVar2 + 0x243;
      break;
    case 7:
      iVar4 = iVar4 + -0xeb0;
      break;
    case 8:
      iVar4 = iVar4 + -0xa4d;
      break;
    case 9:
      iVar4 = iVar4 + 0x4f;
      break;
    case 10:
      iVar4 = iVar4 + 0x11c;
      break;
    case 0xb:
      iVar4 = iVar4 + 8;
      break;
    case 0xc:
      iVar4 = iVar4 + -0x1574;
      break;
    case 0xe:
      iVar4 = iVar4 + -0x91d;
    }
  }
  return iVar4;
}



// FUNCTION 1424cdc90 FUN_1424cdc90 body=544 status=ok
// SIG undefined FUN_1424cdc90(void)

uint FUN_1424cdc90(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_142503a40(param_1,"gregorian");
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_142503a40(param_1,"japanese");
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = FUN_142503a40(param_1,"buddhist");
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        iVar1 = FUN_142503a40(param_1,&DAT_14993d488);
        if (iVar1 == 0) {
          uVar2 = 3;
        }
        else {
          iVar1 = FUN_142503a40(param_1,"persian");
          if (iVar1 == 0) {
            uVar2 = 4;
          }
          else {
            iVar1 = FUN_142503a40(param_1,"islamic-civil");
            if (iVar1 == 0) {
              uVar2 = 5;
            }
            else {
              iVar1 = FUN_142503a40(param_1,"islamic");
              if (iVar1 == 0) {
                uVar2 = 6;
              }
              else {
                iVar1 = FUN_142503a40(param_1,"hebrew");
                if (iVar1 == 0) {
                  uVar2 = 7;
                }
                else {
                  iVar1 = FUN_142503a40(param_1,"chinese");
                  if (iVar1 == 0) {
                    uVar2 = 8;
                  }
                  else {
                    iVar1 = FUN_142503a40(param_1,"indian");
                    if (iVar1 == 0) {
                      uVar2 = 9;
                    }
                    else {
                      iVar1 = FUN_142503a40(param_1,"coptic");
                      if (iVar1 == 0) {
                        uVar2 = 10;
                      }
                      else {
                        iVar1 = FUN_142503a40(param_1,"ethiopic");
                        if (iVar1 == 0) {
                          uVar2 = 0xb;
                        }
                        else {
                          iVar1 = FUN_142503a40(param_1,"ethiopic-amete-alem");
                          if (iVar1 == 0) {
                            uVar2 = 0xc;
                          }
                          else {
                            iVar1 = FUN_142503a40(param_1,"iso8601");
                            if (iVar1 == 0) {
                              uVar2 = 0xd;
                            }
                            else {
                              iVar1 = FUN_142503a40(param_1,"dangi");
                              if (iVar1 == 0) {
                                uVar2 = 0xe;
                              }
                              else {
                                iVar1 = FUN_142503a40(param_1,"islamic-umalqura");
                                if (iVar1 == 0) {
                                  uVar2 = 0xf;
                                }
                                else {
                                  iVar1 = FUN_142503a40(param_1,"islamic-tbla");
                                  if (iVar1 == 0) {
                                    uVar2 = 0x10;
                                  }
                                  else {
                                    iVar1 = FUN_142503a40(param_1,"islamic-rgsa");
                                    uVar2 = -(uint)(iVar1 != 0) | 0x11;
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
  return uVar2;
}



// FUNCTION 1424cdeb0 FUN_1424cdeb0 body=519 status=ok
// SIG undefined FUN_1424cdeb0(void)

void FUN_1424cdeb0(longlong *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0xb0))();
  uVar1 = FUN_1424cdc90();
  switch(uVar1) {
  case 4:
    param_2 = param_2 + -0x26e;
    break;
  case 5:
  case 6:
  case 0xf:
  case 0x10:
  case 0x11:
    if (param_2 < 0x7b9) {
      uVar3 = 0x7b8 - param_2;
      iVar2 = ((uVar3 - (((uint)((ulonglong)uVar3 * 0xfc0fc0fd >> 0x20) & 0xffffffc0) + uVar3 / 0x41
                        ) < 0x21) - 2) + (uVar3 / 0x41) * -2;
    }
    else {
      iVar2 = (uint)(0x1f < (param_2 - 0x7b9U) % 0x41) + ((param_2 - 0x7b9U) / 0x41) * 2;
    }
    param_2 = param_2 + iVar2 + -0x243;
    break;
  case 7:
    param_2 = param_2 + 0xeb0;
    break;
  case 8:
    param_2 = param_2 + 0xa4d;
    break;
  case 9:
    param_2 = param_2 + -0x4f;
    break;
  case 10:
    param_2 = param_2 + -0x11c;
    break;
  case 0xb:
    param_2 = param_2 + -8;
    break;
  case 0xc:
    param_2 = param_2 + 0x1574;
    break;
  case 0xe:
    param_2 = param_2 + 0x91d;
  }
  if (*(char *)((longlong)param_1 + 0xb) != '\0') {
    local_24 = 0;
    (**(code **)(*param_1 + 0xe0))(param_1,&local_24);
  }
  *(int *)(param_1 + 0xb) = param_2;
  iVar2 = *(int *)((longlong)param_1 + 0xdc);
  if (iVar2 == 10000) {
    *(undefined4 *)((longlong)param_1 + 0xdc) = 1;
    iVar4 = 0;
    do {
      iVar2 = *(int *)((longlong)param_1 + 0xdc);
      uVar9 = 0xffffffff;
      iVar5 = 10000;
      uVar6 = 0;
      while( true ) {
        iVar7 = *(int *)((longlong)param_1 + uVar6 * 4 + 0x80);
        uVar8 = uVar6 & 0xffffffff;
        if (iVar5 <= iVar7 || iVar7 <= iVar2) {
          uVar8 = uVar9;
        }
        if (uVar6 + 1 == 0x17) break;
        if (iVar5 <= iVar7 || iVar7 <= iVar2) {
          iVar7 = iVar5;
        }
        iVar5 = *(int *)((longlong)param_1 + uVar6 * 4 + 0x84);
        uVar3 = (uint)(uVar6 + 1);
        if (iVar5 <= iVar2 || iVar7 <= iVar5) {
          uVar3 = (uint)uVar8;
          iVar5 = iVar7;
        }
        uVar9 = (ulonglong)uVar3;
        uVar6 = uVar6 + 2;
      }
      if ((int)(uint)uVar8 < 0) goto LAB_1424ce048;
      *(int *)((longlong)param_1 + 0xdc) = iVar2 + 1;
      *(int *)((longlong)param_1 + uVar8 * 4 + 0x80) = iVar2 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x17);
    iVar2 = *(int *)((longlong)param_1 + 0xdc);
LAB_1424ce048:
    iVar2 = iVar2 + 1;
  }
  *(int *)((longlong)param_1 + 0xdc) = iVar2 + 1;
  *(int *)((longlong)param_1 + 0xcc) = iVar2;
  *(undefined1 *)((longlong)param_1 + 0x7b) = 1;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 1) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424ce0d0 FUN_1424ce0d0 body=24 status=ok
// SIG undefined FUN_1424ce0d0(void)

bool FUN_1424ce0d0(longlong param_1,int param_2)

{
  if (*(char *)(param_1 + 0xb) != '\0') {
    return true;
  }
  return *(int *)(param_1 + 0x80 + (longlong)param_2 * 4) != 0;
}



// FUNCTION 1424ce0f0 FUN_1424ce0f0 body=276 status=ok
// SIG undefined FUN_1424ce0f0(void)

void FUN_1424ce0f0(longlong param_1,int param_2,int param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  
  if (param_2 <= param_3) {
    lVar6 = (longlong)param_2;
    if (6 < (uint)(param_3 - param_2)) {
      uVar4 = (ulonglong)(uint)(param_3 - param_2) + 1;
      uVar5 = uVar4 & 0xfffffffffffffff8;
      lVar3 = param_1 + lVar6 * 4;
      uVar7 = 0;
      uVar8 = param_4;
      uVar9 = param_4;
      uVar12 = param_4;
      uVar11 = param_4;
      uVar13 = param_4;
      uVar14 = param_4;
      uVar10 = param_4;
      do {
        puVar2 = (uint *)(lVar3 + 0x80 + uVar7 * 4);
        puVar1 = (uint *)(lVar3 + 0x90 + uVar7 * 4);
        uVar15 = -(uint)((int)param_4 < (int)*puVar2);
        uVar16 = -(uint)((int)uVar8 < (int)puVar2[1]);
        uVar17 = -(uint)((int)uVar9 < (int)puVar2[2]);
        uVar18 = -(uint)((int)uVar12 < (int)puVar2[3]);
        param_4 = ~uVar15 & param_4 | *puVar2 & uVar15;
        uVar8 = ~uVar16 & uVar8 | puVar2[1] & uVar16;
        uVar9 = ~uVar17 & uVar9 | puVar2[2] & uVar17;
        uVar12 = ~uVar18 & uVar12 | puVar2[3] & uVar18;
        uVar15 = -(uint)((int)uVar11 < (int)*puVar1);
        uVar16 = -(uint)((int)uVar13 < (int)puVar1[1]);
        uVar17 = -(uint)((int)uVar14 < (int)puVar1[2]);
        uVar18 = -(uint)((int)uVar10 < (int)puVar1[3]);
        uVar11 = ~uVar15 & uVar11 | *puVar1 & uVar15;
        uVar13 = ~uVar16 & uVar13 | puVar1[1] & uVar16;
        uVar14 = ~uVar17 & uVar14 | puVar1[2] & uVar17;
        uVar10 = ~uVar18 & uVar10 | puVar1[3] & uVar18;
        uVar7 = uVar7 + 8;
      } while (uVar5 != uVar7);
      uVar11 = ~-(uint)((int)uVar11 < (int)param_4) & uVar11 |
               param_4 & -(uint)((int)uVar11 < (int)param_4);
      uVar13 = ~-(uint)((int)uVar13 < (int)uVar8) & uVar13 |
               uVar8 & -(uint)((int)uVar13 < (int)uVar8);
      uVar14 = ~-(uint)((int)uVar14 < (int)uVar9) & uVar14 |
               uVar9 & -(uint)((int)uVar14 < (int)uVar9);
      uVar12 = ~-(uint)((int)uVar10 < (int)uVar12) & uVar10 |
               uVar12 & -(uint)((int)uVar10 < (int)uVar12);
      uVar8 = -(uint)((int)uVar14 < (int)uVar11);
      uVar9 = -(uint)((int)uVar12 < (int)uVar13);
      uVar8 = ~uVar8 & uVar14 | uVar11 & uVar8;
      uVar9 = ~uVar9 & uVar12 | uVar13 & uVar9;
      uVar12 = -(uint)((int)uVar9 < (int)uVar8);
      param_4 = ~uVar12 & uVar9 | uVar8 & uVar12;
      lVar6 = uVar5 + lVar6;
      if (uVar4 == uVar5) {
        return;
      }
    }
    lVar3 = 0;
    do {
      uVar8 = *(uint *)(param_1 + lVar6 * 4 + 0x80 + lVar3 * 4);
      if ((int)param_4 < (int)uVar8) {
        param_4 = uVar8;
      }
      lVar3 = lVar3 + 1;
    } while ((param_3 - (int)lVar6) + 1 != (int)lVar3);
  }
  return;
}



// FUNCTION 1424ce210 FUN_1424ce210 body=586 status=ok
// SIG undefined FUN_1424ce210(void)

void FUN_1424ce210(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = (**(code **)(*param_1 + 0xa8))();
  iVar2 = (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  lVar9 = (longlong)param_2;
  iVar3 = *(int *)((longlong)param_1 + lVar9 * 4 + 0xc);
  if (iVar1 < iVar3) {
    if (*(char *)((longlong)param_1 + 0xb) != '\0') {
      local_34 = 0;
      (**(code **)(*param_1 + 0xe0))(param_1,&local_34);
    }
    *(int *)((longlong)param_1 + lVar9 * 4 + 0xc) = iVar1;
    iVar3 = *(int *)((longlong)param_1 + 0xdc);
    if (iVar3 == 10000) {
      *(undefined4 *)((longlong)param_1 + 0xdc) = 1;
      iVar1 = 0;
      do {
        iVar3 = *(int *)((longlong)param_1 + 0xdc);
        uVar8 = 0xffffffff;
        iVar2 = 10000;
        uVar4 = 0;
        while( true ) {
          iVar5 = *(int *)((longlong)param_1 + uVar4 * 4 + 0x80);
          uVar6 = uVar4 & 0xffffffff;
          if (iVar2 <= iVar5 || iVar5 <= iVar3) {
            uVar6 = uVar8;
          }
          if (uVar4 + 1 == 0x17) break;
          if (iVar2 <= iVar5 || iVar5 <= iVar3) {
            iVar5 = iVar2;
          }
          iVar2 = *(int *)((longlong)param_1 + uVar4 * 4 + 0x84);
          uVar7 = (uint)(uVar4 + 1);
          if (iVar2 <= iVar3 || iVar5 <= iVar2) {
            uVar7 = (uint)uVar6;
            iVar2 = iVar5;
          }
          uVar8 = (ulonglong)uVar7;
          uVar4 = uVar4 + 2;
        }
        if ((int)(uint)uVar6 < 0) goto LAB_1424ce448;
        *(int *)((longlong)param_1 + 0xdc) = iVar3 + 1;
        *(int *)((longlong)param_1 + uVar6 * 4 + 0x80) = iVar3 + 1;
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0x17);
LAB_1424ce442:
      iVar3 = *(int *)((longlong)param_1 + 0xdc);
LAB_1424ce448:
      iVar3 = iVar3 + 1;
    }
  }
  else {
    if (iVar2 <= iVar3) goto LAB_1424ce46b;
    if (*(char *)((longlong)param_1 + 0xb) != '\0') {
      local_34 = 0;
      (**(code **)(*param_1 + 0xe0))(param_1,&local_34);
    }
    *(int *)((longlong)param_1 + lVar9 * 4 + 0xc) = iVar2;
    iVar3 = *(int *)((longlong)param_1 + 0xdc);
    if (iVar3 == 10000) {
      *(undefined4 *)((longlong)param_1 + 0xdc) = 1;
      iVar1 = 0;
      do {
        iVar3 = *(int *)((longlong)param_1 + 0xdc);
        uVar8 = 0xffffffff;
        iVar2 = 10000;
        uVar4 = 0;
        while( true ) {
          iVar5 = *(int *)((longlong)param_1 + uVar4 * 4 + 0x80);
          uVar6 = uVar4 & 0xffffffff;
          if (iVar2 <= iVar5 || iVar5 <= iVar3) {
            uVar6 = uVar8;
          }
          if (uVar4 + 1 == 0x17) break;
          if (iVar2 <= iVar5 || iVar5 <= iVar3) {
            iVar5 = iVar2;
          }
          iVar2 = *(int *)((longlong)param_1 + uVar4 * 4 + 0x84);
          uVar7 = (uint)(uVar4 + 1);
          if (iVar2 <= iVar3 || iVar5 <= iVar2) {
            uVar7 = (uint)uVar6;
            iVar2 = iVar5;
          }
          uVar8 = (ulonglong)uVar7;
          uVar4 = uVar4 + 2;
        }
        if ((int)(uint)uVar6 < 0) goto LAB_1424ce448;
        *(int *)((longlong)param_1 + 0xdc) = iVar3 + 1;
        *(int *)((longlong)param_1 + uVar6 * 4 + 0x80) = iVar3 + 1;
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0x17);
      goto LAB_1424ce442;
    }
  }
  *(int *)((longlong)param_1 + 0xdc) = iVar3 + 1;
  *(int *)((longlong)param_1 + lVar9 * 4 + 0x80) = iVar3;
  *(undefined1 *)((longlong)param_1 + lVar9 + 0x68) = 1;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 1) = 0;
LAB_1424ce46b:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
}



// FUNCTION 1424ce490 FUN_1424ce490 body=723 status=ok
// SIG undefined FUN_1424ce490(void)

void FUN_1424ce490(longlong *param_1,int *param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_98 [32];
  int *local_78;
  longlong *local_70;
  int local_5c;
  int local_58;
  undefined1 local_54 [4];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_2 < 1) {
    dVar10 = (double)param_1[0x1c];
    local_78 = &local_5c;
    local_70 = (longlong *)param_2;
    (**(code **)(*(longlong *)param_1[0x1e] + 0x18))((longlong *)param_1[0x1e],dVar10,0,&local_58);
    uVar2 = 0x80067;
    lVar4 = 0x69;
    while( true ) {
      *(uint *)((longlong)param_1 + lVar4 * 4 + -0x124) = uVar2 & 1 ^ 1;
      *(bool *)((longlong)param_1 + lVar4 + -1) = (uVar2 & 1) == 0;
      if (lVar4 == 0x7f) break;
      uVar6 = uVar2 >> 1 & 1;
      *(uint *)((longlong)param_1 + lVar4 * 4 + -0x120) = uVar6 ^ 1;
      *(bool *)((longlong)param_1 + lVar4) = uVar6 == 0;
      uVar2 = uVar2 >> 2;
      lVar4 = lVar4 + 2;
    }
    dVar10 = dVar10 + (double)(local_5c + local_58);
    dVar8 = (double)FUN_1424d97b0(dVar10 / 86400000.0);
    *(int *)((longlong)param_1 + 0x5c) = (int)dVar8 + 0x253d8c;
    *(undefined4 *)(param_1 + 0x1a) = 1;
    *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
    local_70 = param_1 + 0x24;
    local_78 = (int *)local_54;
    FUN_142500f10((double)(int)dVar8,param_1 + 0x23,(longlong)param_1 + 0x11c,
                  (longlong)param_1 + 0x124);
    dVar9 = fmod((double)((int)dVar8 + 0x253d8c) + 1.0,7.0);
    cVar5 = '\x01';
    if ((char)(int)dVar9 < '\0') {
      cVar5 = '\b';
    }
    uVar2 = (uint)(byte)(cVar5 + (char)(int)dVar9);
    *(uint *)(param_1 + 5) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x9c) = 1;
    *(undefined1 *)((longlong)param_1 + 0x6f) = 1;
    iVar3 = uVar2 - (int)param_1[0x20];
    iVar7 = iVar3 + 8;
    if (-1 < iVar3) {
      iVar7 = iVar3 + 1;
    }
    *(undefined4 *)(param_1 + 0x19) = 1;
    *(undefined1 *)((longlong)param_1 + 0x7a) = 1;
    *(int *)((longlong)param_1 + 0x54) = iVar7;
    (**(code **)(*param_1 + 0x140))(param_1,*(undefined4 *)((longlong)param_1 + 0x5c),param_2);
    FUN_1424ce790(param_1,param_2);
    iVar3 = (int)(dVar10 - (double)(int)dVar8 * 86400000.0);
    *(int *)(param_1 + 0xc) = iVar3;
    *(int *)((longlong)param_1 + 0x44) = iVar3 % 1000;
    *(int *)(param_1 + 8) = (iVar3 / 1000) % 0x3c;
    *(int *)((longlong)param_1 + 0x3c) = (iVar3 / 60000) % 0x3c;
    iVar7 = iVar3 / 3600000;
    *(int *)(param_1 + 7) = iVar7;
    *(int *)(param_1 + 6) = iVar3 / 43200000;
    sVar1 = (short)((uint)(iVar7 * 0x2aab) >> 0x10);
    *(int *)((longlong)param_1 + 0x34) =
         (int)(short)((short)iVar7 + ((sVar1 >> 1) - (sVar1 >> 0xf)) * -0xc);
    *(int *)(param_1 + 9) = local_58;
    *(int *)((longlong)param_1 + 0x4c) = local_5c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_98);
}



// FUNCTION 1424ce780 FUN_1424ce780 body=8 status=ok
// SIG undefined FUN_1424ce780(void)

undefined8 FUN_1424ce780(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



// FUNCTION 1424ce790 FUN_1424ce790 body=733 status=ok
// SIG undefined FUN_1424ce790(void)

void FUN_1424ce790(longlong *param_1,int *param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  if (*param_2 < 1) {
    iVar8 = (int)param_1[0xb];
    iVar11 = *(int *)((longlong)param_1 + 0x24);
    iVar7 = (int)param_1[5];
    lVar2 = param_1[0x20];
    iVar3 = iVar11 + (int)lVar2;
    iVar4 = iVar7 - iVar3;
    iVar3 = (int)((ulonglong)((longlong)((iVar7 - iVar3) + 0x1b59) * -0x6db6db6d) >> 0x20) + iVar4 +
            0x1b59;
    iVar3 = ((iVar3 >> 2) - (iVar3 >> 0x1f)) * -7 + iVar4 + 0x1b59;
    iVar4 = iVar11 + iVar3 +
            (int)((ulonglong)((longlong)(iVar11 + iVar3 + -1) * -0x6db6db6d) >> 0x20) + -1;
    iVar3 = (uint)((uint)*(byte *)((longlong)param_1 + 0x104) <= 7U - iVar3) +
            ((iVar4 >> 2) - (iVar4 >> 0x1f));
    if (iVar3 == 0) {
      iVar8 = iVar8 + -1;
      iVar4 = (**(code **)(*param_1 + 0x110))(param_1,iVar8);
      iVar4 = iVar4 + iVar11;
      iVar11 = iVar7 - ((int)param_1[0x20] + iVar4);
      iVar3 = (int)((ulonglong)((longlong)(iVar11 + 1) * -0x6db6db6d) >> 0x20) + iVar11 + 1;
      iVar3 = ((iVar3 >> 2) - (iVar3 >> 0x1f)) * -7;
      iVar6 = iVar11 + iVar3 + 1;
      iVar3 = iVar11 + 8 + iVar3;
      if (-1 < iVar6) {
        iVar3 = iVar6;
      }
      iVar11 = (int)((ulonglong)((longlong)(iVar3 + iVar4 + -1) * -0x6db6db6d) >> 0x20) +
               iVar4 + iVar3 + -1;
      uVar5 = (uint)*(byte *)((longlong)param_1 + 0x104);
      iVar3 = (((iVar11 >> 2) - (iVar11 >> 0x1f)) + 1) -
              (uint)(7U - iVar3 < (uint)*(byte *)((longlong)param_1 + 0x104));
    }
    else {
      iVar4 = (**(code **)(*param_1 + 0x110))(param_1,iVar8);
      bVar1 = *(byte *)((longlong)param_1 + 0x104);
      uVar5 = (uint)bVar1;
      if (iVar4 + -5 <= iVar11) {
        iVar6 = iVar7 - (int)lVar2;
        iVar9 = (int)((ulonglong)((longlong)(iVar6 + 7) * -0x6db6db6d) >> 0x20) + iVar6 + 7;
        iVar9 = iVar6 + ((iVar9 >> 2) - (iVar9 >> 0x1f)) * -7 + 7;
        iVar6 = (iVar9 - iVar11) + iVar4;
        iVar10 = iVar6 % 7;
        iVar6 = iVar6 % 7 + 7;
        if (-1 < iVar10) {
          iVar6 = iVar10;
        }
        uVar5 = (uint)bVar1;
        if ((uint)bVar1 <= 6U - iVar6) {
          iVar11 = (iVar11 - iVar9) + 7;
          if (iVar4 < iVar11) {
            iVar3 = 1;
          }
          iVar8 = iVar8 + (uint)(iVar4 < iVar11);
        }
      }
    }
    *(int *)(param_1 + 3) = iVar3;
    *(int *)(param_1 + 10) = iVar8;
    iVar3 = (int)param_1[4];
    iVar7 = iVar7 - ((int)param_1[0x20] + iVar3);
    iVar8 = (int)((ulonglong)((longlong)(iVar7 + 1) * -0x6db6db6d) >> 0x20) + iVar7 + 1;
    iVar8 = ((iVar8 >> 2) - (iVar8 >> 0x1f)) * -7;
    iVar11 = iVar7 + iVar8 + 1;
    iVar8 = iVar7 + 8 + iVar8;
    if (-1 < iVar11) {
      iVar8 = iVar11;
    }
    *(uint *)((longlong)param_1 + 0x1c) =
         ((iVar8 + iVar3 + -1) / 7 + 1) - (uint)(7U - iVar8 < uVar5);
    iVar3 = iVar3 + (int)((ulonglong)((longlong)(iVar3 + -1) * -0x6db6db6d) >> 0x20) + -1;
    *(int *)((longlong)param_1 + 0x2c) = ((iVar3 >> 2) - (iVar3 >> 0x1f)) + 1;
  }
  return;
}



// FUNCTION 1424cea70 FUN_1424cea70 body=93 status=ok
// SIG undefined FUN_1424cea70(void)

void FUN_1424cea70(longlong param_1,int param_2)

{
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  longlong local_20;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1 + 0x120;
  local_28 = local_c;
  FUN_142500f10((double)(param_2 + -0x253d8c),param_1 + 0x118,param_1 + 0x11c,param_1 + 0x124);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424ceae0 FUN_1424ceae0 body=7 status=ok
// SIG undefined FUN_1424ceae0(void)

undefined4 FUN_1424ceae0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x100);
}



// FUNCTION 1424ceaf0 FUN_1424ceaf0 body=8 status=ok
// SIG undefined FUN_1424ceaf0(void)

undefined1 FUN_1424ceaf0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x104);
}



// FUNCTION 1424ceb00 FUN_1424ceb00 body=133 status=ok
// SIG undefined FUN_1424ceb00(void)

int FUN_1424ceb00(longlong param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  param_4 = param_4 - (param_3 + *(int *)(param_1 + 0x100));
  iVar1 = (int)((ulonglong)((longlong)(param_4 + 1) * -0x6db6db6d) >> 0x20) + param_4 + 1;
  iVar1 = ((iVar1 >> 2) - (iVar1 >> 0x1f)) * -7;
  iVar2 = param_4 + iVar1 + 1;
  iVar1 = param_4 + 8 + iVar1;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = (int)((ulonglong)((longlong)(param_2 + iVar1 + -1) * -0x6db6db6d) >> 0x20) +
          param_2 + iVar1 + -1;
  return (((iVar2 >> 2) - (iVar2 >> 0x1f)) + 1) -
         (uint)(7U - iVar1 < (uint)*(byte *)(param_1 + 0x104));
}



// FUNCTION 1424ceb90 FUN_1424ceb90 body=131 status=ok
// SIG undefined FUN_1424ceb90(void)

void FUN_1424ceb90(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(param_1 + 0x88) = 1;
  *(undefined1 *)(param_1 + 0x6a) = 1;
  *(undefined1 **)(param_1 + 0x94) = &DAT_100000001;
  *(undefined2 *)(param_1 + 0x6d) = 0x101;
  *(ulonglong *)(param_1 + 0x20) =
       CONCAT44((int)*(undefined8 *)(param_1 + 0x120),
                (int)((ulonglong)*(undefined8 *)(param_1 + 0x120) >> 0x20));
  *(int *)(param_1 + 0x58) = iVar1;
  *(undefined4 *)(param_1 + 0xcc) = 1;
  *(undefined1 *)(param_1 + 0x7b) = 1;
  iVar2 = 1 - iVar1;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  *(uint *)(param_1 + 0xc) = (uint)(0 < iVar1);
  *(undefined1 **)(param_1 + 0x80) = &DAT_100000001;
  *(undefined2 *)(param_1 + 0x68) = 0x101;
  *(int *)(param_1 + 0x10) = iVar2;
  return;
}



// FUNCTION 1424cec20 FUN_1424cec20 body=10 status=ok
// SIG undefined FUN_1424cec20(void)

void FUN_1424cec20(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001424cec27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}



// FUNCTION 1424cec30 FUN_1424cec30 body=2897 status=ok
// SIG undefined FUN_1424cec30(void)

void FUN_1424cec30(longlong *param_1,uint param_2,int param_3,int *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  char *_Str1;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_a8 [36];
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3 == 0) goto LAB_1424cf7de;
  if ((char)param_1[1] == '\0') {
    (**(code **)(*param_1 + 0xd8))(param_1,param_4);
    if (0 < *param_4) goto LAB_1424cf7de;
    if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
      *(undefined1 *)((longlong)param_1 + 9) = 0;
    }
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined1 *)((longlong)param_1 + 0xb) = 0;
    if (0 < *param_4) goto LAB_1424cf7de;
  }
  if (*(char *)((longlong)param_1 + 9) == '\0') {
    (**(code **)(*param_1 + 0xe0))(param_1,param_4);
    if (0 < *param_4) goto LAB_1424cf7de;
    *(undefined2 *)((longlong)param_1 + 9) = 0x101;
    iVar3 = *param_4;
  }
  else {
    iVar3 = *param_4;
  }
  if (0 < iVar3) goto LAB_1424cf7de;
  if (0x15 < param_2) goto switchD_1424cecae_caseD_f;
  uVar11 = (ulonglong)param_2;
  switch(uVar11) {
  default:
    iVar3 = (**(code **)(*param_1 + 0xa0))(param_1,param_2,param_4);
    iVar4 = (**(code **)(*param_1 + 0xa8))(param_1,param_2);
    uVar5 = (iVar4 - iVar3) + 1;
    iVar4 = ((param_3 - iVar3) + *(int *)((longlong)param_1 + uVar11 * 4 + 0xc)) % (int)uVar5;
    if (*(char *)((longlong)param_1 + 0xb) != '\0') {
      local_84 = 0;
      (**(code **)(*param_1 + 0xe0))(param_1,&local_84);
    }
    *(uint *)((longlong)param_1 + uVar11 * 4 + 0xc) = iVar4 + iVar3 + (iVar4 >> 0x1f & uVar5);
    iVar3 = *(int *)((longlong)param_1 + 0xdc);
    if (iVar3 == 10000) {
      *(undefined4 *)((longlong)param_1 + 0xdc) = 1;
      iVar4 = 0;
      do {
        iVar3 = *(int *)((longlong)param_1 + 0xdc);
        uVar10 = 0xffffffff;
        iVar6 = 10000;
        uVar8 = 0;
        while( true ) {
          iVar7 = *(int *)((longlong)param_1 + uVar8 * 4 + 0x80);
          uVar9 = uVar8 & 0xffffffff;
          if (iVar6 <= iVar7 || iVar7 <= iVar3) {
            uVar9 = uVar10;
          }
          if (uVar8 + 1 == 0x17) break;
          if (iVar6 <= iVar7 || iVar7 <= iVar3) {
            iVar7 = iVar6;
          }
          iVar6 = *(int *)((longlong)param_1 + uVar8 * 4 + 0x84);
          uVar5 = (uint)(uVar8 + 1);
          if (iVar6 <= iVar3 || iVar7 <= iVar6) {
            uVar5 = (uint)uVar9;
            iVar6 = iVar7;
          }
          uVar10 = (ulonglong)uVar5;
          uVar8 = uVar8 + 2;
        }
        if ((int)(uint)uVar9 < 0) goto LAB_1424cede8;
        *(int *)((longlong)param_1 + 0xdc) = iVar3 + 1;
        *(int *)((longlong)param_1 + uVar9 * 4 + 0x80) = iVar3 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x17);
      iVar3 = *(int *)((longlong)param_1 + 0xdc);
LAB_1424cede8:
      iVar3 = iVar3 + 1;
    }
    *(int *)((longlong)param_1 + 0xdc) = iVar3 + 1;
    *(int *)((longlong)param_1 + uVar11 * 4 + 0x80) = iVar3;
    *(undefined1 *)((longlong)param_1 + uVar11 + 0x68) = 1;
    *(undefined1 *)((longlong)param_1 + 0xb) = 0;
    *(undefined2 *)(param_1 + 1) = 0;
    break;
  case 1:
  case 0x11:
    if ((char)param_1[1] == '\0') {
      (**(code **)(*param_1 + 0xd8))(param_1,param_4);
      if (*param_4 < 1) {
        if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
          *(undefined1 *)((longlong)param_1 + 9) = 0;
        }
        *(undefined1 *)(param_1 + 1) = 1;
        *(undefined1 *)((longlong)param_1 + 0xb) = 0;
        if ((*param_4 < 1) &&
           ((*(char *)((longlong)param_1 + 9) != '\0' ||
            (((**(code **)(*param_1 + 0xe0))(param_1,param_4), *param_4 < 1 &&
             (*(undefined2 *)((longlong)param_1 + 9) = 0x101, *param_4 < 1)))))) goto LAB_1424cee87;
      }
LAB_1424cf48e:
      _Str1 = (char *)(**(code **)(*param_1 + 0xb0))(param_1);
      iVar3 = strcmp(_Str1,"gregorian");
      if (((iVar3 == 0) || (iVar3 = strcmp(_Str1,"roc"), iVar3 == 0)) ||
         (iVar3 = strcmp(_Str1,"coptic"), iVar3 == 0)) {
        param_3 = -param_3;
        iVar3 = 0;
        bVar2 = false;
      }
      else {
        bVar2 = true;
        iVar3 = 0;
      }
    }
    else {
LAB_1424cee87:
      iVar3 = *(int *)((longlong)param_1 + 0xc);
      bVar2 = true;
      if (iVar3 == 0) goto LAB_1424cf48e;
    }
    param_3 = param_3 + *(int *)((longlong)param_1 + uVar11 * 4 + 0xc);
    if ((iVar3 < 1) && (param_3 < 1)) {
      iVar4 = 1;
      if (bVar2) {
        iVar4 = param_3;
      }
LAB_1424cf5f6:
      cVar1 = *(char *)((longlong)param_1 + 0xb);
    }
    else {
      iVar3 = (**(code **)(*param_1 + 0xa8))(param_1,param_2);
      if (0x7fff < iVar3) {
        iVar4 = 1;
        if (1 < param_3) {
          iVar4 = param_3;
        }
        goto LAB_1424cf5f6;
      }
      if (param_3 < 1) {
        iVar4 = param_3 % iVar3 + iVar3;
        cVar1 = *(char *)((longlong)param_1 + 0xb);
      }
      else {
        iVar4 = param_3;
        if (param_3 <= iVar3) goto LAB_1424cf5f6;
        iVar4 = (param_3 + -1) % iVar3 + 1;
        cVar1 = *(char *)((longlong)param_1 + 0xb);
      }
    }
    if (cVar1 != '\0') {
      local_84 = 0;
      (**(code **)(*param_1 + 0xe0))(param_1,&local_84);
    }
    *(int *)((longlong)param_1 + uVar11 * 4 + 0xc) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0xdc);
    if (iVar3 == 10000) {
      *(undefined4 *)((longlong)param_1 + 0xdc) = 1;
      iVar4 = 0;
      do {
        iVar3 = *(int *)((longlong)param_1 + 0xdc);
        uVar10 = 0xffffffff;
        iVar6 = 10000;
        uVar8 = 0;
        while( true ) {
          iVar7 = *(int *)((longlong)param_1 + uVar8 * 4 + 0x80);
          uVar9 = uVar8 & 0xffffffff;
          if (iVar6 <= iVar7 || iVar7 <= iVar3) {
            uVar9 = uVar10;
          }
          if (uVar8 + 1 == 0x17) break;
          if (iVar6 <= iVar7 || iVar7 <= iVar3) {
            iVar7 = iVar6;
          }
          iVar6 = *(int *)((longlong)param_1 + uVar8 * 4 + 0x84);
          uVar5 = (uint)(uVar8 + 1);
          if (iVar6 <= iVar3 || iVar7 <= iVar6) {
            uVar5 = (uint)uVar9;
            iVar6 = iVar7;
          }
          uVar10 = (ulonglong)uVar5;
          uVar8 = uVar8 + 2;
        }
        if ((int)(uint)uVar9 < 0) goto LAB_1424cf6d5;
        *(int *)((longlong)param_1 + 0xdc) = iVar3 + 1;
        *(int *)((longlong)param_1 + uVar9 * 4 + 0x80) = iVar3 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x17);
      iVar3 = *(int *)((longlong)param_1 + 0xdc);
LAB_1424cf6d5:
      iVar3 = iVar3 + 1;
    }
    *(int *)((longlong)param_1 + 0xdc) = iVar3 + 1;
    *(int *)((longlong)param_1 + uVar11 * 4 + 0x80) = iVar3;
    *(undefined1 *)((longlong)param_1 + uVar11 + 0x68) = 1;
    *(undefined1 *)((longlong)param_1 + 0xb) = 0;
    *(undefined2 *)(param_1 + 1) = 0;
    (**(code **)(*param_1 + 0x158))(param_1,2,param_4);
    (**(code **)(*param_1 + 0x158))(param_1,5,param_4);
    break;
  case 2:
    iVar3 = (**(code **)(*param_1 + 0xa8))(param_1,2,param_4);
    iVar4 = (param_3 + *(int *)((longlong)param_1 + 0x14)) % (int)(iVar3 + 1U);
    FUN_1424cd3f0(param_1,2,(iVar4 >> 0x1f & iVar3 + 1U) + iVar4);
    goto LAB_1424cf3ca;
  case 3:
    iVar4 = (int)param_1[5] - (int)param_1[0x20];
    iVar3 = iVar4 + 7;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    iVar6 = iVar3 - *(int *)((longlong)param_1 + 0x24);
    iVar4 = (int)((ulonglong)((longlong)(iVar6 + 1) * -0x6db6db6d) >> 0x20) + iVar6 + 1;
    iVar4 = ((iVar4 >> 2) - (iVar4 >> 0x1f)) * -7;
    iVar7 = iVar6 + iVar4 + 1;
    iVar4 = iVar6 + 8 + iVar4;
    if (-1 < iVar7) {
      iVar4 = iVar7;
    }
    iVar6 = 8;
    if ((uint)*(byte *)((longlong)param_1 + 0x104) <= 7U - iVar4) {
      iVar6 = 1;
    }
    iVar6 = iVar6 - iVar4;
    iVar4 = (**(code **)(*param_1 + 0xa8))(param_1,6,param_4);
    uVar5 = (iVar4 - (((iVar3 + iVar4) - *(int *)((longlong)param_1 + 0x24)) % 7 + iVar6)) + 7;
    iVar3 = ((param_3 * 7 + *(int *)((longlong)param_1 + 0x24)) - iVar6) % (int)uVar5;
    iVar3 = (uVar5 & iVar3 >> 0x1f) + iVar6 + iVar3;
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    if (iVar4 <= iVar3) {
      iVar3 = iVar4;
    }
    FUN_1424cd3f0(param_1,6,iVar3);
    if (*(char *)((longlong)param_1 + 0xb) != '\0') {
      local_84 = 0;
      (**(code **)(*param_1 + 0xe0))(param_1,&local_84);
    }
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x11) = 0;
    *(undefined1 *)((longlong)param_1 + 0x6a) = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    break;
  case 4:
    (**(code **)(*param_1 + 0xa8))(param_1,5,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_a8);
  case 6:
    iVar3 = *(int *)((longlong)param_1 + 0x24);
    dVar13 = (double)param_1[0x1c];
    iVar4 = (**(code **)(*param_1 + 0xa8))(param_1,6,param_4);
    fmod(((double)param_3 * 86400000.0 + (double)param_1[0x1c]) -
         (dVar13 - (double)(iVar3 + -1) * 86400000.0),(double)iVar4 * 86400000.0);
    goto LAB_1424cf365;
  case 7:
  case 0x12:
    iVar3 = *(int *)((longlong)param_1 + uVar11 * 4 + 0xc);
    iVar4 = 1;
    if (param_2 == 7) {
      iVar4 = (int)param_1[0x20];
    }
    iVar6 = iVar3 - iVar4;
    iVar3 = (iVar3 + 7) - iVar4;
    if (-1 < iVar6) {
      iVar3 = iVar6;
    }
    dVar13 = (double)param_1[0x1c] - (double)iVar3 * 86400000.0;
    dVar12 = fmod(((double)param_3 * 86400000.0 + (double)param_1[0x1c]) - dVar13,604800000.0);
    if (0 < *param_4) break;
    dVar13 = (double)(~-(ulonglong)(dVar12 < 0.0) & (ulonglong)dVar12 |
                     (ulonglong)(dVar12 + 604800000.0) & -(ulonglong)(dVar12 < 0.0)) + dVar13;
    if (dVar13 <= 1.838821689216e+17) {
      if ((dVar13 < -1.84303902528e+17) &&
         (dVar13 = -1.84303902528e+17, (char)param_1[0x1d] == '\0')) goto switchD_1424cecae_caseD_f;
      param_1[0x1c] = (longlong)dVar13;
    }
    else {
      if ((char)param_1[0x1d] == '\0') goto switchD_1424cecae_caseD_f;
      param_1[0x1c] = 0x43846a3eddf8cd80;
    }
LAB_1424cf771:
    *(undefined4 *)(param_1 + 1) = 0x1000001;
    *(undefined8 *)((longlong)param_1 + 0xc) = 0;
    *(undefined8 *)((longlong)param_1 + 0x14) = 0;
    *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x24) = 0;
    *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x34) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x44) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x54) = 0;
    *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
    *(undefined8 *)((longlong)param_1 + 100) = 0;
    *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x74) = 0;
    *(undefined4 *)((longlong)param_1 + 0x7b) = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
    *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
    break;
  case 8:
    iVar3 = (int)((ulonglong)((longlong)((int)param_1[4] + -1) * -0x6db6db6d) >> 0x20) +
            (int)param_1[4] + -1;
    iVar4 = (iVar3 >> 2) - (iVar3 >> 0x1f);
    iVar3 = (**(code **)(*param_1 + 0xa8))(param_1,5,param_4);
    fmod(((double)param_3 * 604800000.0 + (double)param_1[0x1c]) -
         ((double)param_1[0x1c] - (double)iVar4 * 604800000.0),
         (double)((iVar3 - (int)param_1[4]) / 7 + iVar4 + 1) * 604800000.0);
LAB_1424cf365:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_a8);
  case 10:
  case 0xb:
    if ((char)param_1[1] == '\0') {
      (**(code **)(*param_1 + 0xd8))(param_1,param_4);
      dVar13 = 0.0;
      if (*param_4 < 1) {
        if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
          *(undefined1 *)((longlong)param_1 + 9) = 0;
        }
        *(undefined1 *)(param_1 + 1) = 1;
        *(undefined1 *)((longlong)param_1 + 0xb) = 0;
        if (*param_4 < 1) goto LAB_1424cef5e;
      }
    }
    else {
LAB_1424cef5e:
      dVar13 = (double)param_1[0x1c];
    }
    iVar3 = *(int *)((longlong)param_1 + uVar11 * 4 + 0xc);
    iVar4 = (**(code **)(*param_1 + 0x70))(param_1,param_2);
    iVar6 = (param_3 + iVar3) % (int)(iVar4 + 1U);
    if (0 < *param_4) break;
    dVar13 = dVar13 + (double)(int)(((iVar6 - iVar3) + (iVar6 >> 0x1f & iVar4 + 1U)) * 3600000);
    if (dVar13 <= 1.838821689216e+17) {
      if ((-1.84303902528e+17 <= dVar13) ||
         (dVar13 = -1.84303902528e+17, (char)param_1[0x1d] != '\0')) goto LAB_1424cf769;
    }
    else if ((char)param_1[0x1d] != '\0') {
      dVar13 = 1.838821689216e+17;
LAB_1424cf769:
      param_1[0x1c] = (longlong)dVar13;
      goto LAB_1424cf771;
    }
  case 0xf:
  case 0x10:
switchD_1424cecae_caseD_f:
    *param_4 = 1;
    break;
  case 0x13:
    FUN_1424cd3f0(param_1,0x13,param_3 + (int)param_1[0xb]);
    (**(code **)(*param_1 + 0x158))(param_1,2,param_4);
LAB_1424cf3ca:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_a8);
  case 0x14:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_a8);
  }
LAB_1424cf7de:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1424cf860 thunk_FUN_1424cf870 body=5 status=ok
// SIG undefined thunk_FUN_1424cf870(void)

void thunk_FUN_1424cf870(longlong *param_1,uint param_2,int param_3,int *param_4)

{
  double dVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  char *_Str1;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  undefined1 auStack_88 [32];
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong uStack_60;
  
  uStack_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 == 0) goto LAB_1424d03f3;
  if (0x15 < param_2) {
switchD_1424cf8d2_caseD_f:
    *param_4 = 1;
    goto LAB_1424d03f3;
  }
  dVar1 = (double)param_3;
  iVar9 = 0;
  bVar15 = true;
  uVar7 = (ulonglong)param_2;
  switch(uVar7) {
  case 0:
    iVar5 = 0;
    iVar9 = 0;
    if (*param_4 < 1) {
      iVar9 = iVar5;
      if ((char)param_1[1] == '\0') {
        (**(code **)(*param_1 + 0xd8))(param_1,param_4);
        if (*param_4 < 1) {
          if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
            *(undefined1 *)((longlong)param_1 + 9) = 0;
          }
          *(undefined1 *)(param_1 + 1) = 1;
          *(undefined1 *)((longlong)param_1 + 0xb) = 0;
          if (*param_4 < 1) goto LAB_1424cf9ad;
        }
      }
      else {
LAB_1424cf9ad:
        if ((*(char *)((longlong)param_1 + 9) != '\0') ||
           (((**(code **)(*param_1 + 0xe0))(param_1,param_4), *param_4 < 1 &&
            (*(undefined2 *)((longlong)param_1 + 9) = 0x101, *param_4 < 1)))) {
          iVar9 = *(int *)((longlong)param_1 + 0xc);
        }
      }
    }
    if (*(char *)((longlong)param_1 + 0xb) != '\0') {
      uStack_68 = 0;
      (**(code **)(*param_1 + 0xe0))(param_1,&uStack_68);
    }
    *(int *)((longlong)param_1 + 0xc) = iVar9 + param_3;
    iVar9 = *(int *)((longlong)param_1 + 0xdc);
    if (iVar9 == 10000) {
      *(undefined4 *)((longlong)param_1 + 0xdc) = 1;
      iVar5 = 0;
      do {
        iVar9 = *(int *)((longlong)param_1 + 0xdc);
        uVar6 = 0xffffffff;
        iVar4 = 10000;
        uVar7 = 0;
        while( true ) {
          iVar13 = *(int *)((longlong)param_1 + uVar7 * 4 + 0x80);
          uVar11 = uVar7 & 0xffffffff;
          if (iVar4 <= iVar13 || iVar13 <= iVar9) {
            uVar11 = uVar6;
          }
          if (uVar7 + 1 == 0x17) break;
          if (iVar4 <= iVar13 || iVar13 <= iVar9) {
            iVar13 = iVar4;
          }
          iVar4 = *(int *)((longlong)param_1 + uVar7 * 4 + 0x84);
          uVar8 = (uint)(uVar7 + 1);
          if (iVar4 <= iVar9 || iVar13 <= iVar4) {
            uVar8 = (uint)uVar11;
            iVar4 = iVar13;
          }
          uVar6 = (ulonglong)uVar8;
          uVar7 = uVar7 + 2;
        }
        if ((int)(uint)uVar11 < 0) goto LAB_1424d0388;
        *(int *)((longlong)param_1 + 0xdc) = iVar9 + 1;
        *(int *)((longlong)param_1 + uVar11 * 4 + 0x80) = iVar9 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0x17);
      iVar9 = *(int *)((longlong)param_1 + 0xdc);
LAB_1424d0388:
      iVar9 = iVar9 + 1;
    }
    *(int *)((longlong)param_1 + 0xdc) = iVar9 + 1;
    *(int *)(param_1 + 0x10) = iVar9;
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)((longlong)param_1 + 0xb) = 0;
    *(undefined2 *)(param_1 + 1) = 0;
    (**(code **)(*param_1 + 0x158))(param_1,0,param_4);
    goto LAB_1424d03f3;
  case 1:
  case 0x11:
    if (*param_4 < 1) {
      if ((char)param_1[1] == '\0') {
        (**(code **)(*param_1 + 0xd8))(param_1,param_4);
        if (*param_4 < 1) {
          if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
            *(undefined1 *)((longlong)param_1 + 9) = 0;
          }
          *(undefined1 *)(param_1 + 1) = 1;
          *(undefined1 *)((longlong)param_1 + 0xb) = 0;
          if (*param_4 < 1) goto LAB_1424cfd04;
        }
      }
      else {
LAB_1424cfd04:
        if (((*(char *)((longlong)param_1 + 9) != '\0') ||
            (((**(code **)(*param_1 + 0xe0))(param_1,param_4), *param_4 < 1 &&
             (*(undefined2 *)((longlong)param_1 + 9) = 0x101, *param_4 < 1)))) &&
           (*(int *)((longlong)param_1 + 0xc) != 0)) goto switchD_1424cf8d2_caseD_2;
      }
    }
    _Str1 = (char *)(**(code **)(*param_1 + 0xb0))(param_1);
    iVar9 = strcmp(_Str1,"gregorian");
    if (((iVar9 == 0) || (iVar9 = strcmp(_Str1,"roc"), iVar9 == 0)) ||
       (iVar9 = strcmp(_Str1,"coptic"), iVar9 == 0)) {
      param_3 = -param_3;
    }
  case 2:
  case 0x13:
switchD_1424cf8d2_caseD_2:
    lVar2 = param_1[0x1d];
    *(undefined1 *)(param_1 + 0x1d) = 1;
    iVar5 = 0;
    iVar9 = 0;
    if (*param_4 < 1) {
      iVar9 = iVar5;
      if ((char)param_1[1] == '\0') {
        (**(code **)(*param_1 + 0xd8))(param_1,param_4);
        if (*param_4 < 1) {
          if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
            *(undefined1 *)((longlong)param_1 + 9) = 0;
          }
          *(undefined1 *)(param_1 + 1) = 1;
          *(undefined1 *)((longlong)param_1 + 0xb) = 0;
          if (*param_4 < 1) goto LAB_1424cf977;
        }
      }
      else {
LAB_1424cf977:
        if ((*(char *)((longlong)param_1 + 9) != '\0') ||
           (((**(code **)(*param_1 + 0xe0))(param_1,param_4), *param_4 < 1 &&
            (*(undefined2 *)((longlong)param_1 + 9) = 0x101, *param_4 < 1)))) {
          iVar9 = *(int *)((longlong)param_1 + uVar7 * 4 + 0xc);
        }
      }
    }
    if (*(char *)((longlong)param_1 + 0xb) != '\0') {
      uStack_68 = 0;
      (**(code **)(*param_1 + 0xe0))(param_1,&uStack_68);
    }
    *(int *)((longlong)param_1 + uVar7 * 4 + 0xc) = iVar9 + param_3;
    iVar9 = *(int *)((longlong)param_1 + 0xdc);
    if (iVar9 == 10000) {
      *(undefined4 *)((longlong)param_1 + 0xdc) = 1;
      iVar5 = 0;
      do {
        iVar9 = *(int *)((longlong)param_1 + 0xdc);
        uVar11 = 0xffffffff;
        iVar4 = 10000;
        uVar6 = 0;
        while( true ) {
          iVar13 = *(int *)((longlong)param_1 + uVar6 * 4 + 0x80);
          uVar10 = uVar6 & 0xffffffff;
          if (iVar4 <= iVar13 || iVar13 <= iVar9) {
            uVar10 = uVar11;
          }
          if (uVar6 + 1 == 0x17) break;
          if (iVar4 <= iVar13 || iVar13 <= iVar9) {
            iVar13 = iVar4;
          }
          iVar4 = *(int *)((longlong)param_1 + uVar6 * 4 + 0x84);
          uVar8 = (uint)(uVar6 + 1);
          if (iVar4 <= iVar9 || iVar13 <= iVar4) {
            uVar8 = (uint)uVar10;
            iVar4 = iVar13;
          }
          uVar11 = (ulonglong)uVar8;
          uVar6 = uVar6 + 2;
        }
        if ((int)(uint)uVar10 < 0) goto LAB_1424cfea8;
        *(int *)((longlong)param_1 + 0xdc) = iVar9 + 1;
        *(int *)((longlong)param_1 + uVar10 * 4 + 0x80) = iVar9 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0x17);
      iVar9 = *(int *)((longlong)param_1 + 0xdc);
LAB_1424cfea8:
      iVar9 = iVar9 + 1;
    }
    *(int *)((longlong)param_1 + 0xdc) = iVar9 + 1;
    *(int *)((longlong)param_1 + uVar7 * 4 + 0x80) = iVar9;
    *(undefined1 *)((longlong)param_1 + uVar7 + 0x68) = 1;
    *(undefined1 *)((longlong)param_1 + 0xb) = 0;
    *(undefined2 *)(param_1 + 1) = 0;
    (**(code **)(*param_1 + 0x158))(param_1,5,param_4);
    if ((char)lVar2 != '\0') goto LAB_1424d03f3;
    if ((char)param_1[1] == '\0') {
      (**(code **)(*param_1 + 0xd8))(param_1,param_4);
      if (*param_4 < 1) {
        if (((char)param_1[0x1d] == '\0') && (*(char *)((longlong)param_1 + 10) != '\0')) {
          bVar15 = *(char *)((longlong)param_1 + 9) == '\0';
        }
        else {
          *(undefined1 *)((longlong)param_1 + 9) = 0;
          bVar15 = true;
        }
        *(undefined1 *)(param_1 + 1) = 1;
        *(undefined1 *)((longlong)param_1 + 0xb) = 0;
        if ((*param_4 < 1) && (bVar15)) goto LAB_1424d020f;
      }
    }
    else if (*(char *)((longlong)param_1 + 9) == '\0') {
LAB_1424d020f:
      (**(code **)(*param_1 + 0xe0))(param_1,param_4);
      if (*param_4 < 1) {
        *(undefined2 *)((longlong)param_1 + 9) = 0x101;
      }
    }
    *(undefined1 *)(param_1 + 0x1d) = 0;
    goto LAB_1424d03f3;
  case 3:
  case 4:
  case 8:
    dVar18 = 604800000.0;
    iVar9 = *param_4;
    goto joined_r0x0001424cf9ca;
  default:
    dVar18 = 86400000.0;
    iVar9 = *param_4;
    goto joined_r0x0001424cf9ca;
  case 9:
    dVar18 = 43200000.0;
    iVar9 = *param_4;
joined_r0x0001424cf9ca:
    if (0 < iVar9) goto LAB_1424d03f3;
    if ((char)param_1[1] == '\0') {
      (**(code **)(*param_1 + 0xd8))(param_1,param_4);
      if (0 < *param_4) goto LAB_1424d03f3;
      if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
        *(undefined1 *)((longlong)param_1 + 9) = 0;
      }
      *(undefined1 *)(param_1 + 1) = 1;
      *(undefined1 *)((longlong)param_1 + 0xb) = 0;
      if (0 < *param_4) goto LAB_1424d03f3;
    }
    if (*(char *)((longlong)param_1 + 9) == '\0') {
      (**(code **)(*param_1 + 0xe0))(param_1,param_4);
      if ((0 < *param_4) || (*(undefined2 *)((longlong)param_1 + 9) = 0x101, 0 < *param_4))
      goto LAB_1424d03f3;
      iVar9 = *(int *)((longlong)param_1 + 0x4c);
      if ((char)param_1[1] != '\0') goto LAB_1424cf9e3;
      (**(code **)(*param_1 + 0xd8))(param_1,param_4);
      if (0 < *param_4) goto LAB_1424d03f3;
      if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
        *(undefined1 *)((longlong)param_1 + 9) = 0;
      }
      *(undefined1 *)(param_1 + 1) = 1;
      *(undefined1 *)((longlong)param_1 + 0xb) = 0;
      if (0 < *param_4) goto LAB_1424d03f3;
      if (*(char *)((longlong)param_1 + 9) != '\0') goto LAB_1424cf9e3;
      (**(code **)(*param_1 + 0xe0))(param_1,param_4);
      if ((0 < *param_4) || (*(undefined2 *)((longlong)param_1 + 9) = 0x101, 0 < *param_4))
      goto LAB_1424d03f3;
      iVar9 = iVar9 + (int)param_1[9];
      if ((char)param_1[1] == '\0') {
        (**(code **)(*param_1 + 0xd8))(param_1,param_4);
        if (0 < *param_4) goto LAB_1424d03f3;
        if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
          *(undefined1 *)((longlong)param_1 + 9) = 0;
        }
        *(undefined1 *)(param_1 + 1) = 1;
        *(undefined1 *)((longlong)param_1 + 0xb) = 0;
        if ((0 < *param_4) ||
           ((*(char *)((longlong)param_1 + 9) == '\0' &&
            (((**(code **)(*param_1 + 0xe0))(param_1,param_4), 0 < *param_4 ||
             (*(undefined2 *)((longlong)param_1 + 9) = 0x101, 0 < *param_4)))))) goto LAB_1424d03f3;
      }
    }
    else {
      iVar9 = *(int *)((longlong)param_1 + 0x4c);
LAB_1424cf9e3:
      iVar9 = iVar9 + (int)param_1[9];
    }
    dVar1 = dVar1 * dVar18;
    iVar5 = (int)param_1[0xc];
    bVar15 = false;
    goto LAB_1424cfa44;
  case 10:
  case 0xb:
    dVar1 = dVar1 * 3600000.0;
    break;
  case 0xc:
    dVar1 = dVar1 * 60000.0;
    break;
  case 0xd:
    dVar1 = dVar1 * 1000.0;
    break;
  case 0xe:
  case 0x15:
    break;
  case 0xf:
  case 0x10:
    goto switchD_1424cf8d2_caseD_f;
  }
  iVar5 = 0;
LAB_1424cfa44:
  iVar4 = *param_4;
  if (iVar4 < 1) {
    if ((char)param_1[1] == '\0') {
      (**(code **)(*param_1 + 0xd8))(param_1,param_4);
      iVar4 = *param_4;
      if (iVar4 < 1) {
        if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
          *(undefined1 *)((longlong)param_1 + 9) = 0;
        }
        *(undefined1 *)(param_1 + 1) = 1;
        *(undefined1 *)((longlong)param_1 + 0xb) = 0;
        iVar4 = *param_4;
        if (iVar4 < 1) goto LAB_1424cfaa7;
      }
      goto LAB_1424cfa4a;
    }
LAB_1424cfaa7:
    dVar1 = dVar1 + (double)param_1[0x1c];
    if (dVar1 <= 1.838821689216e+17) {
      if ((dVar1 < -1.84303902528e+17) && (dVar1 = -1.84303902528e+17, (char)param_1[0x1d] == '\0'))
      goto LAB_1424cfd77;
LAB_1424cfb3a:
      param_1[0x1c] = (longlong)dVar1;
      *(undefined4 *)(param_1 + 1) = 0x1000001;
      *(undefined8 *)((longlong)param_1 + 0xc) = 0;
      *(undefined8 *)((longlong)param_1 + 0x14) = 0;
      *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
      *(undefined8 *)((longlong)param_1 + 0x24) = 0;
      *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
      *(undefined8 *)((longlong)param_1 + 0x34) = 0;
      *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
      *(undefined8 *)((longlong)param_1 + 0x44) = 0;
      *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
      *(undefined8 *)((longlong)param_1 + 0x54) = 0;
      *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
      *(undefined8 *)((longlong)param_1 + 100) = 0;
      *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
      *(undefined8 *)((longlong)param_1 + 0x74) = 0;
      *(undefined4 *)((longlong)param_1 + 0x7b) = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
      *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
      if (bVar15) goto LAB_1424d03f3;
      iVar4 = *param_4;
      iVar13 = 0;
      if (iVar4 < 1) {
        if ((char)param_1[1] == '\0') {
          (**(code **)(*param_1 + 0xd8))(param_1,param_4);
          iVar4 = *param_4;
          if (iVar4 < 1) {
            if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
              *(undefined1 *)((longlong)param_1 + 9) = 0;
            }
            *(undefined1 *)(param_1 + 1) = 1;
            *(undefined1 *)((longlong)param_1 + 0xb) = 0;
            iVar4 = *param_4;
            if (iVar4 < 1) goto LAB_1424cfbc7;
          }
        }
        else {
LAB_1424cfbc7:
          if (*(char *)((longlong)param_1 + 9) == '\0') {
            (**(code **)(*param_1 + 0xe0))(param_1,param_4);
            iVar4 = *param_4;
            if (iVar4 < 1) {
              *(undefined2 *)((longlong)param_1 + 9) = 0x101;
              iVar4 = *param_4;
              if (iVar4 < 1) goto LAB_1424cfbd1;
            }
          }
          else {
LAB_1424cfbd1:
            iVar13 = (int)param_1[0xc];
          }
        }
      }
    }
    else {
      if ((char)param_1[0x1d] != '\0') {
        dVar1 = 1.838821689216e+17;
        goto LAB_1424cfb3a;
      }
LAB_1424cfd77:
      *param_4 = 1;
      if (bVar15) goto LAB_1424d03f3;
      iVar13 = 0;
      iVar4 = 1;
    }
  }
  else {
LAB_1424cfa4a:
    iVar13 = 0;
    if (bVar15) goto LAB_1424d03f3;
  }
  if (iVar13 == iVar5) goto LAB_1424d03f3;
  dVar1 = (double)param_1[0x1c];
  uVar16 = SUB84(dVar1,0);
  uVar17 = (undefined4)((ulonglong)dVar1 >> 0x20);
  iVar14 = 0;
  if (iVar4 < 1) {
    if ((char)param_1[1] == '\0') {
      (**(code **)(*param_1 + 0xd8))(param_1,param_4);
      iVar4 = *param_4;
      if (iVar4 < 1) {
        if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
          *(undefined1 *)((longlong)param_1 + 9) = 0;
        }
        *(undefined1 *)(param_1 + 1) = 1;
        *(undefined1 *)((longlong)param_1 + 0xb) = 0;
        iVar4 = *param_4;
        if (iVar4 < 1) goto LAB_1424cfd27;
      }
      goto LAB_1424cfa72;
    }
LAB_1424cfd27:
    if (*(char *)((longlong)param_1 + 9) != '\0') {
      iVar12 = *(int *)((longlong)param_1 + 0x4c);
      goto LAB_1424cfd35;
    }
    (**(code **)(*param_1 + 0xe0))(param_1,param_4);
    iVar4 = *param_4;
    if (0 < iVar4) goto LAB_1424cfa72;
    *(undefined2 *)((longlong)param_1 + 9) = 0x101;
    iVar4 = *param_4;
    if (0 < iVar4) goto LAB_1424cfa72;
    iVar12 = *(int *)((longlong)param_1 + 0x4c);
    if ((char)param_1[1] != '\0') goto LAB_1424cfd35;
    (**(code **)(*param_1 + 0xd8))(param_1,param_4);
    iVar4 = *param_4;
    if (iVar4 < 1) {
      if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
        *(undefined1 *)((longlong)param_1 + 9) = 0;
      }
      *(undefined1 *)(param_1 + 1) = 1;
      *(undefined1 *)((longlong)param_1 + 0xb) = 0;
      iVar4 = *param_4;
      if (iVar4 < 1) {
        if (*(char *)((longlong)param_1 + 9) == '\0') {
          (**(code **)(*param_1 + 0xe0))(param_1,param_4);
          iVar4 = *param_4;
          if (iVar4 < 1) {
            *(undefined2 *)((longlong)param_1 + 9) = 0x101;
            iVar4 = *param_4;
            if (iVar4 < 1) goto LAB_1424cfd35;
          }
        }
        else {
LAB_1424cfd35:
          iVar14 = (int)param_1[9];
        }
      }
    }
  }
  else {
LAB_1424cfa72:
    iVar12 = 0;
  }
  uVar8 = iVar9 - (iVar12 + iVar14);
  if (uVar8 == 0) goto LAB_1424d03f3;
  if ((int)uVar8 < 0) {
    iVar9 = (-uVar8 / 86400000) * 86400000;
  }
  else {
    iVar9 = (uVar8 / 86400000) * -86400000;
  }
  iVar9 = uVar8 + iVar9;
  if (iVar9 != 0) {
    iVar14 = 0;
    iVar13 = 0;
    if (iVar4 < 1) {
      dVar1 = (double)iVar9 + dVar1;
      if (dVar1 <= 1.838821689216e+17) {
        if ((dVar1 < -1.84303902528e+17) &&
           (dVar1 = -1.84303902528e+17, (char)param_1[0x1d] == '\0')) goto LAB_1424d03e8;
      }
      else {
        if ((char)param_1[0x1d] == '\0') {
LAB_1424d03e8:
          *param_4 = 1;
          iVar13 = iVar14;
          goto LAB_1424d03ee;
        }
        dVar1 = 1.838821689216e+17;
      }
      param_1[0x1c] = (longlong)dVar1;
      *(undefined4 *)(param_1 + 1) = 0x1000001;
      *(undefined8 *)((longlong)param_1 + 0xc) = 0;
      *(undefined8 *)((longlong)param_1 + 0x14) = 0;
      *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
      *(undefined8 *)((longlong)param_1 + 0x24) = 0;
      *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
      *(undefined8 *)((longlong)param_1 + 0x34) = 0;
      *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
      *(undefined8 *)((longlong)param_1 + 0x44) = 0;
      *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
      *(undefined8 *)((longlong)param_1 + 0x54) = 0;
      *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
      *(undefined8 *)((longlong)param_1 + 100) = 0;
      *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
      *(undefined8 *)((longlong)param_1 + 0x74) = 0;
      *(undefined4 *)((longlong)param_1 + 0x7b) = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
      *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
      if (((*param_4 < 1) &&
          ((**(code **)(*param_1 + 0xe0))(param_1,param_4), iVar13 = iVar14, *param_4 < 1)) &&
         (*(undefined2 *)((longlong)param_1 + 9) = 0x101, *param_4 < 1)) {
        iVar13 = (int)param_1[0xc];
      }
    }
  }
LAB_1424d03ee:
  if (iVar13 != iVar5) {
    iVar5 = *(int *)((longlong)param_1 + 0xfc);
    if (iVar5 == 0) {
      if (iVar9 < 0) {
LAB_1424d0437:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(uStack_60 ^ (ulonglong)auStack_88);
      }
    }
    else if (iVar5 == 2) {
      if (0 < iVar9) {
        uVar16 = (undefined4)param_1[0x1c];
        uVar17 = (undefined4)((ulonglong)param_1[0x1c] >> 0x20);
      }
      cVar3 = FUN_1424d04d0(param_1,CONCAT44(uVar17,uVar16),&uStack_68,param_4);
      if ((cVar3 != '\0') && (*param_4 < 1)) {
        FUN_1424ccf20(param_1,CONCAT44(uStack_64,uStack_68),param_4);
      }
    }
    else if ((iVar5 == 1) && (0 < iVar9)) goto LAB_1424d0437;
  }
LAB_1424d03f3:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_60 ^ (ulonglong)auStack_88);
}



// FUNCTION 1424cf870 FUN_1424cf870 body=3048 status=ok
// SIG undefined FUN_1424cf870(void)

void FUN_1424cf870(longlong *param_1,uint param_2,int param_3,int *param_4)

{
  double dVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  char *_Str1;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 == 0) goto LAB_1424d03f3;
  if (0x15 < param_2) {
switchD_1424cf8d2_caseD_f:
    *param_4 = 1;
    goto LAB_1424d03f3;
  }
  dVar1 = (double)param_3;
  iVar9 = 0;
  bVar15 = true;
  uVar7 = (ulonglong)param_2;
  switch(uVar7) {
  case 0:
    iVar5 = 0;
    iVar9 = 0;
    if (*param_4 < 1) {
      iVar9 = iVar5;
      if ((char)param_1[1] == '\0') {
        (**(code **)(*param_1 + 0xd8))(param_1,param_4);
        if (*param_4 < 1) {
          if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
            *(undefined1 *)((longlong)param_1 + 9) = 0;
          }
          *(undefined1 *)(param_1 + 1) = 1;
          *(undefined1 *)((longlong)param_1 + 0xb) = 0;
          if (*param_4 < 1) goto LAB_1424cf9ad;
        }
      }
      else {
LAB_1424cf9ad:
        if ((*(char *)((longlong)param_1 + 9) != '\0') ||
           (((**(code **)(*param_1 + 0xe0))(param_1,param_4), *param_4 < 1 &&
            (*(undefined2 *)((longlong)param_1 + 9) = 0x101, *param_4 < 1)))) {
          iVar9 = *(int *)((longlong)param_1 + 0xc);
        }
      }
    }
    if (*(char *)((longlong)param_1 + 0xb) != '\0') {
      local_68 = 0;
      (**(code **)(*param_1 + 0xe0))(param_1,&local_68);
    }
    *(int *)((longlong)param_1 + 0xc) = iVar9 + param_3;
    iVar9 = *(int *)((longlong)param_1 + 0xdc);
    if (iVar9 == 10000) {
      *(undefined4 *)((longlong)param_1 + 0xdc) = 1;
      iVar5 = 0;
      do {
        iVar9 = *(int *)((longlong)param_1 + 0xdc);
        uVar6 = 0xffffffff;
        iVar4 = 10000;
        uVar7 = 0;
        while( true ) {
          iVar13 = *(int *)((longlong)param_1 + uVar7 * 4 + 0x80);
          uVar11 = uVar7 & 0xffffffff;
          if (iVar4 <= iVar13 || iVar13 <= iVar9) {
            uVar11 = uVar6;
          }
          if (uVar7 + 1 == 0x17) break;
          if (iVar4 <= iVar13 || iVar13 <= iVar9) {
            iVar13 = iVar4;
          }
          iVar4 = *(int *)((longlong)param_1 + uVar7 * 4 + 0x84);
          uVar8 = (uint)(uVar7 + 1);
          if (iVar4 <= iVar9 || iVar13 <= iVar4) {
            uVar8 = (uint)uVar11;
            iVar4 = iVar13;
          }
          uVar6 = (ulonglong)uVar8;
          uVar7 = uVar7 + 2;
        }
        if ((int)(uint)uVar11 < 0) goto LAB_1424d0388;
        *(int *)((longlong)param_1 + 0xdc) = iVar9 + 1;
        *(int *)((longlong)param_1 + uVar11 * 4 + 0x80) = iVar9 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0x17);
      iVar9 = *(int *)((longlong)param_1 + 0xdc);
LAB_1424d0388:
      iVar9 = iVar9 + 1;
    }
    *(int *)((longlong)param_1 + 0xdc) = iVar9 + 1;
    *(int *)(param_1 + 0x10) = iVar9;
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)((longlong)param_1 + 0xb) = 0;
    *(undefined2 *)(param_1 + 1) = 0;
    (**(code **)(*param_1 + 0x158))(param_1,0,param_4);
    goto LAB_1424d03f3;
  case 1:
  case 0x11:
    if (*param_4 < 1) {
      if ((char)param_1[1] == '\0') {
        (**(code **)(*param_1 + 0xd8))(param_1,param_4);
        if (*param_4 < 1) {
          if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
            *(undefined1 *)((longlong)param_1 + 9) = 0;
          }
          *(undefined1 *)(param_1 + 1) = 1;
          *(undefined1 *)((longlong)param_1 + 0xb) = 0;
          if (*param_4 < 1) goto LAB_1424cfd04;
        }
      }
      else {
LAB_1424cfd04:
        if (((*(char *)((longlong)param_1 + 9) != '\0') ||
            (((**(code **)(*param_1 + 0xe0))(param_1,param_4), *param_4 < 1 &&
             (*(undefined2 *)((longlong)param_1 + 9) = 0x101, *param_4 < 1)))) &&
           (*(int *)((longlong)param_1 + 0xc) != 0)) goto switchD_1424cf8d2_caseD_2;
      }
    }
    _Str1 = (char *)(**(code **)(*param_1 + 0xb0))(param_1);
    iVar9 = strcmp(_Str1,"gregorian");
    if (((iVar9 == 0) || (iVar9 = strcmp(_Str1,"roc"), iVar9 == 0)) ||
       (iVar9 = strcmp(_Str1,"coptic"), iVar9 == 0)) {
      param_3 = -param_3;
    }
  case 2:
  case 0x13:
switchD_1424cf8d2_caseD_2:
    lVar2 = param_1[0x1d];
    *(undefined1 *)(param_1 + 0x1d) = 1;
    iVar5 = 0;
    iVar9 = 0;
    if (*param_4 < 1) {
      iVar9 = iVar5;
      if ((char)param_1[1] == '\0') {
        (**(code **)(*param_1 + 0xd8))(param_1,param_4);
        if (*param_4 < 1) {
          if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
            *(undefined1 *)((longlong)param_1 + 9) = 0;
          }
          *(undefined1 *)(param_1 + 1) = 1;
          *(undefined1 *)((longlong)param_1 + 0xb) = 0;
          if (*param_4 < 1) goto LAB_1424cf977;
        }
      }
      else {
LAB_1424cf977:
        if ((*(char *)((longlong)param_1 + 9) != '\0') ||
           (((**(code **)(*param_1 + 0xe0))(param_1,param_4), *param_4 < 1 &&
            (*(undefined2 *)((longlong)param_1 + 9) = 0x101, *param_4 < 1)))) {
          iVar9 = *(int *)((longlong)param_1 + uVar7 * 4 + 0xc);
        }
      }
    }
    if (*(char *)((longlong)param_1 + 0xb) != '\0') {
      local_68 = 0;
      (**(code **)(*param_1 + 0xe0))(param_1,&local_68);
    }
    *(int *)((longlong)param_1 + uVar7 * 4 + 0xc) = iVar9 + param_3;
    iVar9 = *(int *)((longlong)param_1 + 0xdc);
    if (iVar9 == 10000) {
      *(undefined4 *)((longlong)param_1 + 0xdc) = 1;
      iVar5 = 0;
      do {
        iVar9 = *(int *)((longlong)param_1 + 0xdc);
        uVar11 = 0xffffffff;
        iVar4 = 10000;
        uVar6 = 0;
        while( true ) {
          iVar13 = *(int *)((longlong)param_1 + uVar6 * 4 + 0x80);
          uVar10 = uVar6 & 0xffffffff;
          if (iVar4 <= iVar13 || iVar13 <= iVar9) {
            uVar10 = uVar11;
          }
          if (uVar6 + 1 == 0x17) break;
          if (iVar4 <= iVar13 || iVar13 <= iVar9) {
            iVar13 = iVar4;
          }
          iVar4 = *(int *)((longlong)param_1 + uVar6 * 4 + 0x84);
          uVar8 = (uint)(uVar6 + 1);
          if (iVar4 <= iVar9 || iVar13 <= iVar4) {
            uVar8 = (uint)uVar10;
            iVar4 = iVar13;
          }
          uVar11 = (ulonglong)uVar8;
          uVar6 = uVar6 + 2;
        }
        if ((int)(uint)uVar10 < 0) goto LAB_1424cfea8;
        *(int *)((longlong)param_1 + 0xdc) = iVar9 + 1;
        *(int *)((longlong)param_1 + uVar10 * 4 + 0x80) = iVar9 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0x17);
      iVar9 = *(int *)((longlong)param_1 + 0xdc);
LAB_1424cfea8:
      iVar9 = iVar9 + 1;
    }
    *(int *)((longlong)param_1 + 0xdc) = iVar9 + 1;
    *(int *)((longlong)param_1 + uVar7 * 4 + 0x80) = iVar9;
    *(undefined1 *)((longlong)param_1 + uVar7 + 0x68) = 1;
    *(undefined1 *)((longlong)param_1 + 0xb) = 0;
    *(undefined2 *)(param_1 + 1) = 0;
    (**(code **)(*param_1 + 0x158))(param_1,5,param_4);
    if ((char)lVar2 != '\0') goto LAB_1424d03f3;
    if ((char)param_1[1] == '\0') {
      (**(code **)(*param_1 + 0xd8))(param_1,param_4);
      if (*param_4 < 1) {
        if (((char)param_1[0x1d] == '\0') && (*(char *)((longlong)param_1 + 10) != '\0')) {
          bVar15 = *(char *)((longlong)param_1 + 9) == '\0';
        }
        else {
          *(undefined1 *)((longlong)param_1 + 9) = 0;
          bVar15 = true;
        }
        *(undefined1 *)(param_1 + 1) = 1;
        *(undefined1 *)((longlong)param_1 + 0xb) = 0;
        if ((*param_4 < 1) && (bVar15)) goto LAB_1424d020f;
      }
    }
    else if (*(char *)((longlong)param_1 + 9) == '\0') {
LAB_1424d020f:
      (**(code **)(*param_1 + 0xe0))(param_1,param_4);
      if (*param_4 < 1) {
        *(undefined2 *)((longlong)param_1 + 9) = 0x101;
      }
    }
    *(undefined1 *)(param_1 + 0x1d) = 0;
    goto LAB_1424d03f3;
  case 3:
  case 4:
  case 8:
    dVar18 = 604800000.0;
    iVar9 = *param_4;
    goto joined_r0x0001424cf9ca;
  default:
    dVar18 = 86400000.0;
    iVar9 = *param_4;
    goto joined_r0x0001424cf9ca;
  case 9:
    dVar18 = 43200000.0;
    iVar9 = *param_4;
joined_r0x0001424cf9ca:
    if (0 < iVar9) goto LAB_1424d03f3;
    if ((char)param_1[1] == '\0') {
      (**(code **)(*param_1 + 0xd8))(param_1,param_4);
      if (0 < *param_4) goto LAB_1424d03f3;
      if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
        *(undefined1 *)((longlong)param_1 + 9) = 0;
      }
      *(undefined1 *)(param_1 + 1) = 1;
      *(undefined1 *)((longlong)param_1 + 0xb) = 0;
      if (0 < *param_4) goto LAB_1424d03f3;
    }
    if (*(char *)((longlong)param_1 + 9) == '\0') {
      (**(code **)(*param_1 + 0xe0))(param_1,param_4);
      if ((0 < *param_4) || (*(undefined2 *)((longlong)param_1 + 9) = 0x101, 0 < *param_4))
      goto LAB_1424d03f3;
      iVar9 = *(int *)((longlong)param_1 + 0x4c);
      if ((char)param_1[1] != '\0') goto LAB_1424cf9e3;
      (**(code **)(*param_1 + 0xd8))(param_1,param_4);
      if (0 < *param_4) goto LAB_1424d03f3;
      if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
        *(undefined1 *)((longlong)param_1 + 9) = 0;
      }
      *(undefined1 *)(param_1 + 1) = 1;
      *(undefined1 *)((longlong)param_1 + 0xb) = 0;
      if (0 < *param_4) goto LAB_1424d03f3;
      if (*(char *)((longlong)param_1 + 9) != '\0') goto LAB_1424cf9e3;
      (**(code **)(*param_1 + 0xe0))(param_1,param_4);
      if ((0 < *param_4) || (*(undefined2 *)((longlong)param_1 + 9) = 0x101, 0 < *param_4))
      goto LAB_1424d03f3;
      iVar9 = iVar9 + (int)param_1[9];
      if ((char)param_1[1] == '\0') {
        (**(code **)(*param_1 + 0xd8))(param_1,param_4);
        if (0 < *param_4) goto LAB_1424d03f3;
        if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
          *(undefined1 *)((longlong)param_1 + 9) = 0;
        }
        *(undefined1 *)(param_1 + 1) = 1;
        *(undefined1 *)((longlong)param_1 + 0xb) = 0;
        if ((0 < *param_4) ||
           ((*(char *)((longlong)param_1 + 9) == '\0' &&
            (((**(code **)(*param_1 + 0xe0))(param_1,param_4), 0 < *param_4 ||
             (*(undefined2 *)((longlong)param_1 + 9) = 0x101, 0 < *param_4)))))) goto LAB_1424d03f3;
      }
    }
    else {
      iVar9 = *(int *)((longlong)param_1 + 0x4c);
LAB_1424cf9e3:
      iVar9 = iVar9 + (int)param_1[9];
    }
    dVar1 = dVar1 * dVar18;
    iVar5 = (int)param_1[0xc];
    bVar15 = false;
    goto LAB_1424cfa44;
  case 10:
  case 0xb:
    dVar1 = dVar1 * 3600000.0;
    break;
  case 0xc:
    dVar1 = dVar1 * 60000.0;
    break;
  case 0xd:
    dVar1 = dVar1 * 1000.0;
    break;
  case 0xe:
  case 0x15:
    break;
  case 0xf:
  case 0x10:
    goto switchD_1424cf8d2_caseD_f;
  }
  iVar5 = 0;
LAB_1424cfa44:
  iVar4 = *param_4;
  if (iVar4 < 1) {
    if ((char)param_1[1] == '\0') {
      (**(code **)(*param_1 + 0xd8))(param_1,param_4);
      iVar4 = *param_4;
      if (iVar4 < 1) {
        if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
          *(undefined1 *)((longlong)param_1 + 9) = 0;
        }
        *(undefined1 *)(param_1 + 1) = 1;
        *(undefined1 *)((longlong)param_1 + 0xb) = 0;
        iVar4 = *param_4;
        if (iVar4 < 1) goto LAB_1424cfaa7;
      }
      goto LAB_1424cfa4a;
    }
LAB_1424cfaa7:
    dVar1 = dVar1 + (double)param_1[0x1c];
    if (dVar1 <= 1.838821689216e+17) {
      if ((dVar1 < -1.84303902528e+17) && (dVar1 = -1.84303902528e+17, (char)param_1[0x1d] == '\0'))
      goto LAB_1424cfd77;
LAB_1424cfb3a:
      param_1[0x1c] = (longlong)dVar1;
      *(undefined4 *)(param_1 + 1) = 0x1000001;
      *(undefined8 *)((longlong)param_1 + 0xc) = 0;
      *(undefined8 *)((longlong)param_1 + 0x14) = 0;
      *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
      *(undefined8 *)((longlong)param_1 + 0x24) = 0;
      *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
      *(undefined8 *)((longlong)param_1 + 0x34) = 0;
      *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
      *(undefined8 *)((longlong)param_1 + 0x44) = 0;
      *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
      *(undefined8 *)((longlong)param_1 + 0x54) = 0;
      *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
      *(undefined8 *)((longlong)param_1 + 100) = 0;
      *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
      *(undefined8 *)((longlong)param_1 + 0x74) = 0;
      *(undefined4 *)((longlong)param_1 + 0x7b) = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
      *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
      if (bVar15) goto LAB_1424d03f3;
      iVar4 = *param_4;
      iVar13 = 0;
      if (iVar4 < 1) {
        if ((char)param_1[1] == '\0') {
          (**(code **)(*param_1 + 0xd8))(param_1,param_4);
          iVar4 = *param_4;
          if (iVar4 < 1) {
            if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
              *(undefined1 *)((longlong)param_1 + 9) = 0;
            }
            *(undefined1 *)(param_1 + 1) = 1;
            *(undefined1 *)((longlong)param_1 + 0xb) = 0;
            iVar4 = *param_4;
            if (iVar4 < 1) goto LAB_1424cfbc7;
          }
        }
        else {
LAB_1424cfbc7:
          if (*(char *)((longlong)param_1 + 9) == '\0') {
            (**(code **)(*param_1 + 0xe0))(param_1,param_4);
            iVar4 = *param_4;
            if (iVar4 < 1) {
              *(undefined2 *)((longlong)param_1 + 9) = 0x101;
              iVar4 = *param_4;
              if (iVar4 < 1) goto LAB_1424cfbd1;
            }
          }
          else {
LAB_1424cfbd1:
            iVar13 = (int)param_1[0xc];
          }
        }
      }
    }
    else {
      if ((char)param_1[0x1d] != '\0') {
        dVar1 = 1.838821689216e+17;
        goto LAB_1424cfb3a;
      }
LAB_1424cfd77:
      *param_4 = 1;
      if (bVar15) goto LAB_1424d03f3;
      iVar13 = 0;
      iVar4 = 1;
    }
  }
  else {
LAB_1424cfa4a:
    iVar13 = 0;
    if (bVar15) goto LAB_1424d03f3;
  }
  if (iVar13 == iVar5) goto LAB_1424d03f3;
  dVar1 = (double)param_1[0x1c];
  uVar16 = SUB84(dVar1,0);
  uVar17 = (undefined4)((ulonglong)dVar1 >> 0x20);
  iVar14 = 0;
  if (iVar4 < 1) {
    if ((char)param_1[1] == '\0') {
      (**(code **)(*param_1 + 0xd8))(param_1,param_4);
      iVar4 = *param_4;
      if (iVar4 < 1) {
        if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
          *(undefined1 *)((longlong)param_1 + 9) = 0;
        }
        *(undefined1 *)(param_1 + 1) = 1;
        *(undefined1 *)((longlong)param_1 + 0xb) = 0;
        iVar4 = *param_4;
        if (iVar4 < 1) goto LAB_1424cfd27;
      }
      goto LAB_1424cfa72;
    }
LAB_1424cfd27:
    if (*(char *)((longlong)param_1 + 9) != '\0') {
      iVar12 = *(int *)((longlong)param_1 + 0x4c);
      goto LAB_1424cfd35;
    }
    (**(code **)(*param_1 + 0xe0))(param_1,param_4);
    iVar4 = *param_4;
    if (0 < iVar4) goto LAB_1424cfa72;
    *(undefined2 *)((longlong)param_1 + 9) = 0x101;
    iVar4 = *param_4;
    if (0 < iVar4) goto LAB_1424cfa72;
    iVar12 = *(int *)((longlong)param_1 + 0x4c);
    if ((char)param_1[1] != '\0') goto LAB_1424cfd35;
    (**(code **)(*param_1 + 0xd8))(param_1,param_4);
    iVar4 = *param_4;
    if (iVar4 < 1) {
      if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
        *(undefined1 *)((longlong)param_1 + 9) = 0;
      }
      *(undefined1 *)(param_1 + 1) = 1;
      *(undefined1 *)((longlong)param_1 + 0xb) = 0;
      iVar4 = *param_4;
      if (iVar4 < 1) {
        if (*(char *)((longlong)param_1 + 9) == '\0') {
          (**(code **)(*param_1 + 0xe0))(param_1,param_4);
          iVar4 = *param_4;
          if (iVar4 < 1) {
            *(undefined2 *)((longlong)param_1 + 9) = 0x101;
            iVar4 = *param_4;
            if (iVar4 < 1) goto LAB_1424cfd35;
          }
        }
        else {
LAB_1424cfd35:
          iVar14 = (int)param_1[9];
        }
      }
    }
  }
  else {
LAB_1424cfa72:
    iVar12 = 0;
  }
  uVar8 = iVar9 - (iVar12 + iVar14);
  if (uVar8 == 0) goto LAB_1424d03f3;
  if ((int)uVar8 < 0) {
    iVar9 = (-uVar8 / 86400000) * 86400000;
  }
  else {
    iVar9 = (uVar8 / 86400000) * -86400000;
  }
  iVar9 = uVar8 + iVar9;
  if (iVar9 != 0) {
    iVar14 = 0;
    iVar13 = 0;
    if (iVar4 < 1) {
      dVar1 = (double)iVar9 + dVar1;
      if (dVar1 <= 1.838821689216e+17) {
        if ((dVar1 < -1.84303902528e+17) &&
           (dVar1 = -1.84303902528e+17, (char)param_1[0x1d] == '\0')) goto LAB_1424d03e8;
      }
      else {
        if ((char)param_1[0x1d] == '\0') {
LAB_1424d03e8:
          *param_4 = 1;
          iVar13 = iVar14;
          goto LAB_1424d03ee;
        }
        dVar1 = 1.838821689216e+17;
      }
      param_1[0x1c] = (longlong)dVar1;
      *(undefined4 *)(param_1 + 1) = 0x1000001;
      *(undefined8 *)((longlong)param_1 + 0xc) = 0;
      *(undefined8 *)((longlong)param_1 + 0x14) = 0;
      *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
      *(undefined8 *)((longlong)param_1 + 0x24) = 0;
      *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
      *(undefined8 *)((longlong)param_1 + 0x34) = 0;
      *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
      *(undefined8 *)((longlong)param_1 + 0x44) = 0;
      *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
      *(undefined8 *)((longlong)param_1 + 0x54) = 0;
      *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
      *(undefined8 *)((longlong)param_1 + 100) = 0;
      *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
      *(undefined8 *)((longlong)param_1 + 0x74) = 0;
      *(undefined4 *)((longlong)param_1 + 0x7b) = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
      *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
      if (((*param_4 < 1) &&
          ((**(code **)(*param_1 + 0xe0))(param_1,param_4), iVar13 = iVar14, *param_4 < 1)) &&
         (*(undefined2 *)((longlong)param_1 + 9) = 0x101, *param_4 < 1)) {
        iVar13 = (int)param_1[0xc];
      }
    }
  }
LAB_1424d03ee:
  if (iVar13 != iVar5) {
    iVar5 = *(int *)((longlong)param_1 + 0xfc);
    if (iVar5 == 0) {
      if (iVar9 < 0) {
LAB_1424d0437:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_88);
      }
    }
    else if (iVar5 == 2) {
      if (0 < iVar9) {
        uVar16 = (undefined4)param_1[0x1c];
        uVar17 = (undefined4)((ulonglong)param_1[0x1c] >> 0x20);
      }
      cVar3 = FUN_1424d04d0(param_1,CONCAT44(uVar17,uVar16),&local_68,param_4);
      if ((cVar3 != '\0') && (*param_4 < 1)) {
        FUN_1424ccf20(param_1,CONCAT44(uStack_64,local_68),param_4);
      }
    }
    else if ((iVar5 == 1) && (0 < iVar9)) goto LAB_1424d0437;
  }
LAB_1424d03f3:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_88);
}



// FUNCTION 1424d04c0 FUN_1424d04c0 body=7 status=ok
// SIG undefined FUN_1424d04c0(void)

void FUN_1424d04c0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xe8) = param_2;
  return;
}



// FUNCTION 1424d04d0 FUN_1424d04d0 body=149 status=ok
// SIG undefined FUN_1424d04d0(void)

undefined8
FUN_1424d04d0(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined4 *param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_60 [32];
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  plVar2 = (longlong *)FUN_1424d1cc0();
  if (plVar2 == (longlong *)0x0) {
    *param_4 = 0x10;
  }
  else {
    FUN_14257c0f0(local_60);
    cVar1 = (**(code **)(*plVar2 + 0x70))(plVar2,param_2,1,local_60);
    if (cVar1 != '\0') {
      uVar3 = FUN_14257c2c0(local_60);
      *param_3 = uVar3;
      FUN_14257c110(local_60);
      return 1;
    }
    *param_4 = 5;
    FUN_14257c110(local_60);
  }
  return 0;
}



// FUNCTION 1424d0570 Unwind@1424d0570 body=49 status=ok
// SIG undefined Unwind@1424d0570(void)

void Unwind_1424d0570(undefined8 param_1,longlong param_2)

{
  FUN_14257c110(param_2 + 0x28);
  return;
}



// FUNCTION 1424d05b0 FUN_1424d05b0 body=10 status=ok
// SIG undefined FUN_1424d05b0(void)

void FUN_1424d05b0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001424d05b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))();
  return;
}



// FUNCTION 1424d05c0 FUN_1424d05c0 body=2042 status=ok
// SIG undefined FUN_1424d05c0(void)

uint FUN_1424d05c0(longlong *param_1,double param_2,undefined4 param_3,int *param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  iVar3 = *param_4;
  if (0 < iVar3) {
    return 0;
  }
  if ((char)param_1[1] == '\0') {
    (**(code **)(*param_1 + 0xd8))(param_1,param_4);
    iVar3 = *param_4;
    uVar8 = 0;
    uVar9 = 0;
    if (iVar3 < 1) {
      if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
        *(undefined1 *)((longlong)param_1 + 9) = 0;
      }
      *(undefined1 *)(param_1 + 1) = 1;
      *(undefined1 *)((longlong)param_1 + 0xb) = 0;
      iVar3 = *param_4;
      if (iVar3 < 1) goto LAB_1424d061b;
    }
  }
  else {
LAB_1424d061b:
    uVar8 = (undefined4)param_1[0x1c];
    uVar9 = (undefined4)((ulonglong)param_1[0x1c] >> 0x20);
  }
  if ((double)CONCAT44(uVar9,uVar8) <= param_2 && param_2 != (double)CONCAT44(uVar9,uVar8)) {
    if (iVar3 < 1) {
      uVar6 = 1;
      uVar4 = 0;
      do {
        uVar5 = uVar6;
        if ((double)CONCAT44(uVar9,uVar8) < 1.838821689216e+17 ||
            (double)CONCAT44(uVar9,uVar8) == 1.838821689216e+17) {
          lVar7 = CONCAT44(uVar9,uVar8);
          if ((-1.84303902528e+17 < (double)CONCAT44(uVar9,uVar8) ||
               (double)CONCAT44(uVar9,uVar8) == -1.84303902528e+17) ||
             (lVar7 = -0x3c7b89c49df8cd80, (char)param_1[0x1d] != '\0')) goto LAB_1424d0a39;
LAB_1424d0a9a:
          *param_4 = 1;
        }
        else {
          lVar7 = 0x43846a3eddf8cd80;
          if ((char)param_1[0x1d] == '\0') goto LAB_1424d0a9a;
LAB_1424d0a39:
          param_1[0x1c] = lVar7;
          *(undefined4 *)(param_1 + 1) = 0x1000001;
          *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
          *(undefined8 *)((longlong)param_1 + 0x74) = 0;
          *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
          *(undefined8 *)((longlong)param_1 + 100) = 0;
          *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
          *(undefined8 *)((longlong)param_1 + 0x54) = 0;
          *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
          *(undefined8 *)((longlong)param_1 + 0x44) = 0;
          *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
          *(undefined8 *)((longlong)param_1 + 0x34) = 0;
          *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
          *(undefined8 *)((longlong)param_1 + 0x24) = 0;
          *(undefined8 *)((longlong)param_1 + 0xc) = 0;
          *(undefined8 *)((longlong)param_1 + 0x14) = 0;
          *(undefined4 *)((longlong)param_1 + 0x7b) = 0;
          *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
          *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
          param_1[0x18] = 0;
          param_1[0x19] = 0;
          param_1[0x16] = 0;
          param_1[0x17] = 0;
          param_1[0x14] = 0;
          param_1[0x15] = 0;
          param_1[0x12] = 0;
          param_1[0x13] = 0;
          param_1[0x10] = 0;
          param_1[0x11] = 0;
        }
        (**(code **)(*param_1 + 0x28))(param_1,param_3,uVar5,param_4);
        iVar3 = *param_4;
        uVar10 = 0;
        uVar11 = 0;
        if (iVar3 < 1) {
          if ((char)param_1[1] == '\0') {
            (**(code **)(*param_1 + 0xd8))(param_1,param_4);
            iVar3 = *param_4;
            if (iVar3 < 1) {
              if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
                *(undefined1 *)((longlong)param_1 + 9) = 0;
              }
              *(undefined1 *)(param_1 + 1) = 1;
              *(undefined1 *)((longlong)param_1 + 0xb) = 0;
              iVar3 = *param_4;
              if (iVar3 < 1) goto LAB_1424d0ac2;
            }
          }
          else {
LAB_1424d0ac2:
            uVar10 = (undefined4)param_1[0x1c];
            uVar11 = (undefined4)((ulonglong)param_1[0x1c] >> 0x20);
          }
        }
        bVar1 = (double)CONCAT44(uVar11,uVar10) != param_2;
        if ((!bVar1) && (!NAN((double)CONCAT44(uVar11,uVar10)) && !NAN(param_2))) {
          return uVar5;
        }
        uVar6 = uVar5;
        if (param_2 <= (double)CONCAT44(uVar11,uVar10) && bVar1) break;
        if (uVar5 == 0x7fffffff) {
          *param_4 = 1;
          iVar3 = 1;
          uVar6 = 0x7fffffff;
          break;
        }
        uVar6 = uVar5 * 2;
        if (0x7ffffffe < uVar5 * 2) {
          uVar6 = 0x7fffffff;
        }
        uVar4 = uVar5;
      } while (iVar3 < 1);
    }
    else {
      uVar4 = 0;
      uVar6 = 1;
    }
    while (1 < (int)(uVar6 - uVar4)) {
      if (0 < iVar3) goto LAB_1424d0d44;
      if ((double)CONCAT44(uVar9,uVar8) < 1.838821689216e+17 ||
          (double)CONCAT44(uVar9,uVar8) == 1.838821689216e+17) {
        lVar7 = CONCAT44(uVar9,uVar8);
        if ((-1.84303902528e+17 < (double)CONCAT44(uVar9,uVar8) ||
             (double)CONCAT44(uVar9,uVar8) == -1.84303902528e+17) ||
           (lVar7 = -0x3c7b89c49df8cd80, (char)param_1[0x1d] != '\0')) goto LAB_1424d0709;
LAB_1424d0770:
        *param_4 = 1;
      }
      else {
        lVar7 = 0x43846a3eddf8cd80;
        if ((char)param_1[0x1d] == '\0') goto LAB_1424d0770;
LAB_1424d0709:
        param_1[0x1c] = lVar7;
        *(undefined4 *)(param_1 + 1) = 0x1000001;
        *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
        *(undefined8 *)((longlong)param_1 + 0x74) = 0;
        *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
        *(undefined8 *)((longlong)param_1 + 100) = 0;
        *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
        *(undefined8 *)((longlong)param_1 + 0x54) = 0;
        *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
        *(undefined8 *)((longlong)param_1 + 0x44) = 0;
        *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
        *(undefined8 *)((longlong)param_1 + 0x34) = 0;
        *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
        *(undefined8 *)((longlong)param_1 + 0x24) = 0;
        *(undefined8 *)((longlong)param_1 + 0xc) = 0;
        *(undefined8 *)((longlong)param_1 + 0x14) = 0;
        *(undefined4 *)((longlong)param_1 + 0x7b) = 0;
        *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
        *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
        param_1[0x18] = 0;
        param_1[0x19] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        param_1[0x10] = 0;
        param_1[0x11] = 0;
      }
      uVar5 = (uVar6 - uVar4 >> 1) + uVar4;
      (**(code **)(*param_1 + 0x28))(param_1,param_3,uVar5,param_4);
      iVar3 = *param_4;
      uVar10 = 0;
      uVar11 = 0;
      if (iVar3 < 1) {
        if ((char)param_1[1] == '\0') {
          (**(code **)(*param_1 + 0xd8))(param_1,param_4);
          iVar3 = *param_4;
          if (iVar3 < 1) {
            if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
              *(undefined1 *)((longlong)param_1 + 9) = 0;
            }
            *(undefined1 *)(param_1 + 1) = 1;
            *(undefined1 *)((longlong)param_1 + 0xb) = 0;
            iVar3 = *param_4;
            if (iVar3 < 1) goto LAB_1424d06a0;
          }
        }
        else {
LAB_1424d06a0:
          uVar10 = (undefined4)param_1[0x1c];
          uVar11 = (undefined4)((ulonglong)param_1[0x1c] >> 0x20);
        }
      }
      bVar1 = (double)CONCAT44(uVar11,uVar10) != param_2;
      bVar2 = param_2 <= (double)CONCAT44(uVar11,uVar10);
      if (bVar2 && bVar1) {
        uVar6 = uVar5;
      }
      if ((NAN((double)CONCAT44(uVar11,uVar10)) || NAN(param_2)) || (!bVar2 || !bVar1)) {
        uVar4 = uVar5;
      }
      if ((!bVar1) && (!NAN((double)CONCAT44(uVar11,uVar10)) && !NAN(param_2))) {
        return uVar5;
      }
    }
  }
  else {
    uVar4 = 0;
    if (param_2 <= (double)CONCAT44(uVar9,uVar8) && (double)CONCAT44(uVar9,uVar8) != param_2) {
      if (iVar3 < 1) {
        uVar4 = 0;
        uVar6 = 0xffffffff;
        do {
          if ((double)CONCAT44(uVar9,uVar8) < 1.838821689216e+17 ||
              (double)CONCAT44(uVar9,uVar8) == 1.838821689216e+17) {
            lVar7 = CONCAT44(uVar9,uVar8);
            if ((-1.84303902528e+17 < (double)CONCAT44(uVar9,uVar8) ||
                 (double)CONCAT44(uVar9,uVar8) == -1.84303902528e+17) ||
               (lVar7 = -0x3c7b89c49df8cd80, (char)param_1[0x1d] != '\0')) goto LAB_1424d0bb3;
LAB_1424d0c14:
            *param_4 = 1;
          }
          else {
            lVar7 = 0x43846a3eddf8cd80;
            if ((char)param_1[0x1d] == '\0') goto LAB_1424d0c14;
LAB_1424d0bb3:
            param_1[0x1c] = lVar7;
            *(undefined4 *)(param_1 + 1) = 0x1000001;
            *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
            *(undefined8 *)((longlong)param_1 + 0x74) = 0;
            *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
            *(undefined8 *)((longlong)param_1 + 100) = 0;
            *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
            *(undefined8 *)((longlong)param_1 + 0x54) = 0;
            *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
            *(undefined8 *)((longlong)param_1 + 0x44) = 0;
            *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
            *(undefined8 *)((longlong)param_1 + 0x34) = 0;
            *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
            *(undefined8 *)((longlong)param_1 + 0x24) = 0;
            *(undefined8 *)((longlong)param_1 + 0xc) = 0;
            *(undefined8 *)((longlong)param_1 + 0x14) = 0;
            *(undefined4 *)((longlong)param_1 + 0x7b) = 0;
            *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
            *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
            param_1[0x18] = 0;
            param_1[0x19] = 0;
            param_1[0x16] = 0;
            param_1[0x17] = 0;
            param_1[0x14] = 0;
            param_1[0x15] = 0;
            param_1[0x12] = 0;
            param_1[0x13] = 0;
            param_1[0x10] = 0;
            param_1[0x11] = 0;
          }
          (**(code **)(*param_1 + 0x28))(param_1,param_3,uVar6,param_4);
          iVar3 = *param_4;
          uVar10 = 0;
          uVar11 = 0;
          if (iVar3 < 1) {
            if ((char)param_1[1] == '\0') {
              (**(code **)(*param_1 + 0xd8))(param_1,param_4);
              iVar3 = *param_4;
              if (iVar3 < 1) {
                if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
                  *(undefined1 *)((longlong)param_1 + 9) = 0;
                }
                *(undefined1 *)(param_1 + 1) = 1;
                *(undefined1 *)((longlong)param_1 + 0xb) = 0;
                iVar3 = *param_4;
                if (iVar3 < 1) goto LAB_1424d0c3c;
              }
            }
            else {
LAB_1424d0c3c:
              uVar10 = (undefined4)param_1[0x1c];
              uVar11 = (undefined4)((ulonglong)param_1[0x1c] >> 0x20);
            }
          }
          if (((double)CONCAT44(uVar11,uVar10) == param_2) &&
             (!NAN((double)CONCAT44(uVar11,uVar10)) && !NAN(param_2))) {
            return uVar6;
          }
          uVar5 = uVar6;
          if ((double)CONCAT44(uVar11,uVar10) <= param_2 &&
              param_2 != (double)CONCAT44(uVar11,uVar10)) break;
          uVar5 = uVar6 * 2;
          uVar4 = uVar6;
          if (uVar5 == 0) {
            *param_4 = 1;
            iVar3 = 1;
            uVar5 = 0;
            break;
          }
          uVar6 = uVar5;
        } while (iVar3 < 1);
      }
      else {
        uVar4 = 0;
        uVar5 = 0xffffffff;
      }
      while (1 < (int)(uVar4 - uVar5)) {
        if (0 < iVar3) goto LAB_1424d0d44;
        if ((double)CONCAT44(uVar9,uVar8) < 1.838821689216e+17 ||
            (double)CONCAT44(uVar9,uVar8) == 1.838821689216e+17) {
          lVar7 = CONCAT44(uVar9,uVar8);
          if ((-1.84303902528e+17 < (double)CONCAT44(uVar9,uVar8) ||
               (double)CONCAT44(uVar9,uVar8) == -1.84303902528e+17) ||
             (lVar7 = -0x3c7b89c49df8cd80, (char)param_1[0x1d] != '\0')) goto LAB_1424d08a9;
LAB_1424d0910:
          *param_4 = 1;
        }
        else {
          lVar7 = 0x43846a3eddf8cd80;
          if ((char)param_1[0x1d] == '\0') goto LAB_1424d0910;
LAB_1424d08a9:
          param_1[0x1c] = lVar7;
          *(undefined4 *)(param_1 + 1) = 0x1000001;
          *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
          *(undefined8 *)((longlong)param_1 + 0x74) = 0;
          *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
          *(undefined8 *)((longlong)param_1 + 100) = 0;
          *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
          *(undefined8 *)((longlong)param_1 + 0x54) = 0;
          *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
          *(undefined8 *)((longlong)param_1 + 0x44) = 0;
          *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
          *(undefined8 *)((longlong)param_1 + 0x34) = 0;
          *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
          *(undefined8 *)((longlong)param_1 + 0x24) = 0;
          *(undefined8 *)((longlong)param_1 + 0xc) = 0;
          *(undefined8 *)((longlong)param_1 + 0x14) = 0;
          *(undefined4 *)((longlong)param_1 + 0x7b) = 0;
          *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
          *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
          param_1[0x18] = 0;
          param_1[0x19] = 0;
          param_1[0x16] = 0;
          param_1[0x17] = 0;
          param_1[0x14] = 0;
          param_1[0x15] = 0;
          param_1[0x12] = 0;
          param_1[0x13] = 0;
          param_1[0x10] = 0;
          param_1[0x11] = 0;
        }
        uVar6 = (int)(uVar5 - uVar4) / 2 + uVar4;
        (**(code **)(*param_1 + 0x28))(param_1,param_3,uVar6,param_4);
        iVar3 = *param_4;
        uVar10 = 0;
        uVar11 = 0;
        if (iVar3 < 1) {
          if ((char)param_1[1] == '\0') {
            (**(code **)(*param_1 + 0xd8))(param_1,param_4);
            iVar3 = *param_4;
            if (iVar3 < 1) {
              if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
                *(undefined1 *)((longlong)param_1 + 9) = 0;
              }
              *(undefined1 *)(param_1 + 1) = 1;
              *(undefined1 *)((longlong)param_1 + 0xb) = 0;
              iVar3 = *param_4;
              if (iVar3 < 1) goto LAB_1424d0830;
            }
          }
          else {
LAB_1424d0830:
            uVar10 = (undefined4)param_1[0x1c];
            uVar11 = (undefined4)((ulonglong)param_1[0x1c] >> 0x20);
          }
        }
        bVar1 = param_2 != (double)CONCAT44(uVar11,uVar10);
        bVar2 = (double)CONCAT44(uVar11,uVar10) <= param_2;
        if (bVar2 && bVar1) {
          uVar5 = uVar6;
        }
        if ((NAN(param_2) || NAN((double)CONCAT44(uVar11,uVar10))) || (!bVar2 || !bVar1)) {
          uVar4 = uVar6;
        }
        if (((double)CONCAT44(uVar11,uVar10) == param_2) &&
           (!NAN((double)CONCAT44(uVar11,uVar10)) && !NAN(param_2))) {
          return uVar6;
        }
      }
    }
  }
  if (0 < iVar3) goto LAB_1424d0d44;
  if ((double)CONCAT44(uVar9,uVar8) < 1.838821689216e+17 ||
      (double)CONCAT44(uVar9,uVar8) == 1.838821689216e+17) {
    if ((double)CONCAT44(uVar9,uVar8) <= -1.84303902528e+17 &&
        (double)CONCAT44(uVar9,uVar8) != -1.84303902528e+17) {
      uVar8 = 0x62073280;
      uVar9 = 0xc384763b;
      if ((char)param_1[0x1d] == '\0') goto LAB_1424d0d3e;
    }
  }
  else {
    if ((char)param_1[0x1d] == '\0') {
LAB_1424d0d3e:
      *param_4 = 1;
      goto LAB_1424d0d44;
    }
    uVar8 = 0xddf8cd80;
    uVar9 = 0x43846a3e;
  }
  param_1[0x1c] = CONCAT44(uVar9,uVar8);
  *(undefined4 *)(param_1 + 1) = 0x1000001;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7b) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
LAB_1424d0d44:
  (**(code **)(*param_1 + 0x28))(param_1,param_3,uVar4,param_4);
  uVar6 = 0;
  if (*param_4 < 1) {
    uVar6 = uVar4;
  }
  return uVar6;
}



// FUNCTION 1424d0de0 FUN_1424d0de0 body=126 status=ok
// SIG undefined FUN_1424d0de0(void)

int FUN_1424d0de0(longlong param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  if (0 < *param_3) {
    return 0;
  }
  if (param_2 - 8U < 0xfffffff9) {
    *param_3 = 1;
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x108);
  iVar2 = *(int *)(param_1 + 0x110);
  if (iVar1 == iVar2) {
    if (iVar1 != param_2) {
      return 0;
    }
    goto LAB_1424d0e2d;
  }
  if (iVar1 < iVar2) {
    if (param_2 < iVar1) {
      return 0;
    }
LAB_1424d0e23:
    if (iVar2 < param_2) {
      return 0;
    }
  }
  else if (param_2 < iVar1) goto LAB_1424d0e23;
  if (iVar1 != param_2) {
    if (iVar2 != param_2) {
      return 1;
    }
    return (uint)(*(int *)(param_1 + 0x114) < 86400000) * 2 + 1;
  }
LAB_1424d0e2d:
  return 2 - (uint)(*(int *)(param_1 + 0x10c) == 0);
}



// FUNCTION 1424d0e60 FUN_1424d0e60 body=47 status=ok
// SIG undefined FUN_1424d0e60(void)

undefined4 FUN_1424d0e60(longlong param_1,int param_2,int *param_3)

{
  if (0 < *param_3) {
    return 0;
  }
  if (*(int *)(param_1 + 0x108) == param_2) {
    return *(undefined4 *)(param_1 + 0x10c);
  }
  if (*(int *)(param_1 + 0x110) == param_2) {
    return *(undefined4 *)(param_1 + 0x114);
  }
  *param_3 = 1;
  return 0;
}



// FUNCTION 1424d0e90 FUN_1424d0e90 body=301 status=ok
// SIG undefined FUN_1424d0e90(void)

undefined4 FUN_1424d0e90(longlong *param_1,double param_2,int *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  if (0 < *param_3) {
    return 0;
  }
  uVar1 = SUB84(param_2,0);
  uVar3 = (undefined4)((ulonglong)param_2 >> 0x20);
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x10))();
  if (plVar2 == (longlong *)0x0) {
    *param_3 = 7;
    return 0;
  }
  if (*param_3 < 1) {
    if (param_2 <= 1.838821689216e+17) {
      if (param_2 < -1.84303902528e+17) {
        uVar1 = 0x62073280;
        uVar3 = 0xc384763b;
        if ((char)plVar2[0x1d] == '\0') goto LAB_1424d0fa3;
      }
    }
    else {
      if ((char)plVar2[0x1d] == '\0') {
LAB_1424d0fa3:
        *param_3 = 1;
        uVar1 = 0;
        goto LAB_1424d0f88;
      }
      uVar1 = 0xddf8cd80;
      uVar3 = 0x43846a3e;
    }
    plVar2[0x1c] = CONCAT44(uVar3,uVar1);
    *(undefined4 *)(plVar2 + 1) = 0x1000001;
    *(undefined8 *)((longlong)plVar2 + 0xc) = 0;
    *(undefined8 *)((longlong)plVar2 + 0x14) = 0;
    *(undefined8 *)((longlong)plVar2 + 0x1c) = 0;
    *(undefined8 *)((longlong)plVar2 + 0x24) = 0;
    *(undefined8 *)((longlong)plVar2 + 0x2c) = 0;
    *(undefined8 *)((longlong)plVar2 + 0x34) = 0;
    *(undefined8 *)((longlong)plVar2 + 0x3c) = 0;
    *(undefined8 *)((longlong)plVar2 + 0x44) = 0;
    *(undefined8 *)((longlong)plVar2 + 0x4c) = 0;
    *(undefined8 *)((longlong)plVar2 + 0x54) = 0;
    *(undefined8 *)((longlong)plVar2 + 0x5c) = 0;
    *(undefined8 *)((longlong)plVar2 + 100) = 0;
    *(undefined8 *)((longlong)plVar2 + 0x6c) = 0;
    *(undefined8 *)((longlong)plVar2 + 0x74) = 0;
    *(undefined4 *)((longlong)plVar2 + 0x7b) = 0;
    plVar2[0x10] = 0;
    plVar2[0x11] = 0;
    plVar2[0x12] = 0;
    plVar2[0x13] = 0;
    plVar2[0x14] = 0;
    plVar2[0x15] = 0;
    plVar2[0x16] = 0;
    plVar2[0x17] = 0;
    plVar2[0x18] = 0;
    plVar2[0x19] = 0;
    *(undefined8 *)((longlong)plVar2 + 0xcc) = 0;
    *(undefined8 *)((longlong)plVar2 + 0xd4) = 0;
    if (*param_3 < 1) {
      uVar1 = (**(code **)(*plVar2 + 200))(plVar2);
      goto LAB_1424d0f88;
    }
  }
  uVar1 = 0;
LAB_1424d0f88:
  (**(code **)*plVar2)(plVar2,1);
  return uVar1;
}



// FUNCTION 1424d0fc0 FUN_1424d0fc0 body=258 status=ok
// SIG undefined FUN_1424d0fc0(void)

void FUN_1424d0fc0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  if ((char)param_1[1] == '\0') {
    (**(code **)(*param_1 + 0xd8))(param_1,&local_2c);
    uVar3 = 0;
    if (0 < local_2c) goto LAB_1424d1048;
    if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
      *(undefined1 *)((longlong)param_1 + 9) = 0;
    }
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined1 *)((longlong)param_1 + 0xb) = 0;
    cVar1 = *(char *)((longlong)param_1 + 9);
  }
  else {
    cVar1 = *(char *)((longlong)param_1 + 9);
  }
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0xe0))(param_1,&local_2c);
    uVar3 = 0;
    if (0 < local_2c) goto LAB_1424d1048;
    *(undefined2 *)((longlong)param_1 + 9) = 0x101;
  }
  uVar3 = (undefined4)param_1[5];
LAB_1424d1048:
  iVar2 = (**(code **)(*param_1 + 0xb8))(param_1,uVar3,&local_2c);
  if ((local_2c < 1) && (iVar2 - 2U < 2)) {
    (**(code **)(*param_1 + 0xc0))(param_1,uVar3,&local_2c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 1424d10d0 FUN_1424d10d0 body=16 status=ok
// SIG undefined FUN_1424d10d0(void)

void FUN_1424d10d0(longlong *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001424d10dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf8))(param_1,param_2,0);
  return;
}



// FUNCTION 1424d10e0 FUN_1424d10e0 body=16 status=ok
// SIG undefined FUN_1424d10e0(void)

void FUN_1424d10e0(longlong *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001424d10ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf8))(param_1,param_2,0);
  return;
}



// FUNCTION 1424d10f0 FUN_1424d10f0 body=19 status=ok
// SIG undefined FUN_1424d10f0(void)

void FUN_1424d10f0(longlong *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001424d1100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf8))(param_1,param_2,3);
  return;
}



// FUNCTION 1424d1110 FUN_1424d1110 body=19 status=ok
// SIG undefined FUN_1424d1110(void)

void FUN_1424d1110(longlong *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001424d1120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf8))(param_1,param_2,3);
  return;
}



// FUNCTION 1424d1130 FUN_1424d1130 body=19 status=ok
// SIG undefined FUN_1424d1130(void)

void FUN_1424d1130(longlong *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001424d1140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf8))(param_1,param_2,1);
  return;
}



// FUNCTION 1424d1150 FUN_1424d1150 body=19 status=ok
// SIG undefined FUN_1424d1150(void)

void FUN_1424d1150(longlong *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001424d1160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf8))(param_1,param_2,1);
  return;
}



// FUNCTION 1424d1170 FUN_1424d1170 body=19 status=ok
// SIG undefined FUN_1424d1170(void)

void FUN_1424d1170(longlong *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001424d1180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf8))(param_1,param_2,2);
  return;
}



// FUNCTION 1424d1190 FUN_1424d1190 body=19 status=ok
// SIG undefined FUN_1424d1190(void)

void FUN_1424d1190(longlong *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001424d11a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf8))(param_1,param_2,2);
  return;
}



// FUNCTION 1424d11b0 FUN_1424d11b0 body=181 status=ok
// SIG undefined FUN_1424d11b0(void)

ulonglong FUN_1424d11b0(longlong *param_1,ulonglong param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = (ulonglong)param_3;
  uVar4 = (uint)param_2;
  if (uVar4 < 0x17) {
    if ((0x75fe80U >> (uVar4 & 0x1f) & 1) == 0) {
      if (uVar4 != 4) goto LAB_1424d1204;
      if (param_3 != 1) {
        if (param_3 == 0) {
          uVar3 = (ulonglong)(*(char *)((longlong)param_1 + 0x104) == '\x01');
        }
        else {
          bVar1 = *(byte *)((longlong)param_1 + 0x104);
          iVar2 = (**(code **)(*param_1 + 0xf0))(param_1,5,param_3);
          iVar5 = 0xd;
          if (param_3 == 2) {
            iVar5 = 7;
          }
          uVar3 = (ulonglong)(uint)((int)((iVar5 - (uint)bVar1) + iVar2) / 7);
        }
      }
    }
    else {
      uVar3 = (ulonglong)
              *(uint *)(&DAT_14993c5c0 + (longlong)(int)param_3 * 4 + (param_2 & 0xffffffff) * 0x10)
      ;
    }
    return uVar3;
  }
LAB_1424d1204:
                    /* WARNING: Could not recover jumptable at 0x0001424d1217. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*param_1 + 0xf0))(param_1,param_2,uVar3);
  return uVar3;
}



// FUNCTION 1424d1270 FUN_1424d1270 body=566 status=ok
// SIG undefined FUN_1424d1270(void)

void FUN_1424d1270(longlong *param_1,int param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = (**(code **)(*param_1 + 0x80))();
  iVar3 = (**(code **)(*param_1 + 0x60))(param_1,param_2);
  if (iVar2 != iVar3) {
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x10))();
    if (plVar5 == (longlong *)0x0) {
      *param_3 = 7;
    }
    else {
      *(undefined1 *)(plVar5 + 0x1d) = 1;
      lVar13 = (longlong)param_2;
      do {
        if (*(char *)((longlong)plVar5 + 0xb) != '\0') {
          local_4c = 0;
          (**(code **)(*plVar5 + 0xe0))(plVar5,&local_4c);
        }
        *(int *)((longlong)plVar5 + lVar13 * 4 + 0xc) = iVar2;
        iVar4 = *(int *)((longlong)plVar5 + 0xdc);
        if (iVar4 == 10000) {
          *(undefined4 *)((longlong)plVar5 + 0xdc) = 1;
          iVar6 = 0;
          do {
            iVar4 = *(int *)((longlong)plVar5 + 0xdc);
            uVar12 = 0xffffffff;
            iVar7 = 10000;
            uVar8 = 0;
            while( true ) {
              iVar9 = *(int *)((longlong)plVar5 + uVar8 * 4 + 0x80);
              uVar10 = uVar8 & 0xffffffff;
              if (iVar7 <= iVar9 || iVar9 <= iVar4) {
                uVar10 = uVar12;
              }
              if (uVar8 + 1 == 0x17) break;
              if (iVar7 <= iVar9 || iVar9 <= iVar4) {
                iVar9 = iVar7;
              }
              iVar7 = *(int *)((longlong)plVar5 + uVar8 * 4 + 0x84);
              uVar11 = (uint)(uVar8 + 1);
              if (iVar7 <= iVar4 || iVar9 <= iVar7) {
                uVar11 = (uint)uVar10;
                iVar7 = iVar9;
              }
              uVar12 = (ulonglong)uVar11;
              uVar8 = uVar8 + 2;
            }
            if ((int)(uint)uVar10 < 0) goto LAB_1424d13d8;
            *(int *)((longlong)plVar5 + 0xdc) = iVar4 + 1;
            *(int *)((longlong)plVar5 + uVar10 * 4 + 0x80) = iVar4 + 1;
            iVar6 = iVar6 + 1;
          } while (iVar6 != 0x17);
          iVar4 = *(int *)((longlong)plVar5 + 0xdc);
LAB_1424d13d8:
          iVar4 = iVar4 + 1;
        }
        *(int *)((longlong)plVar5 + 0xdc) = iVar4 + 1;
        *(int *)((longlong)plVar5 + lVar13 * 4 + 0x80) = iVar4;
        *(undefined1 *)((longlong)plVar5 + lVar13 + 0x68) = 1;
        *(undefined1 *)((longlong)plVar5 + 0xb) = 0;
        *(undefined2 *)(plVar5 + 1) = 0;
        iVar6 = 0;
        iVar4 = 0;
        if ((*param_3 < 1) &&
           ((**(code **)(*plVar5 + 0xd8))(plVar5,param_3), iVar4 = iVar6, *param_3 < 1)) {
          if (((char)plVar5[0x1d] != '\0') || (*(char *)((longlong)plVar5 + 10) == '\0')) {
            *(undefined1 *)((longlong)plVar5 + 9) = 0;
          }
          *(undefined1 *)(plVar5 + 1) = 1;
          *(undefined1 *)((longlong)plVar5 + 0xb) = 0;
          if ((*param_3 < 1) &&
             ((*(char *)((longlong)plVar5 + 9) != '\0' ||
              (((**(code **)(*plVar5 + 0xe0))(plVar5,param_3), *param_3 < 1 &&
               (*(undefined2 *)((longlong)plVar5 + 9) = 0x101, *param_3 < 1)))))) {
            iVar4 = *(int *)((longlong)plVar5 + lVar13 * 4 + 0xc);
          }
        }
      } while ((iVar4 == iVar2) && (bVar1 = iVar3 < iVar2, iVar2 = iVar2 + -1, bVar1));
      (**(code **)*plVar5)(plVar5,1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 1424d14d0 FUN_1424d14d0 body=221 status=ok
// SIG undefined FUN_1424d14d0(void)

void FUN_1424d14d0(longlong *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 8) {
    if (*(int *)((longlong)param_1 + 0x2c) != 0) {
      iVar3 = (**(code **)(*param_1 + 0x70))(param_1,8);
      iVar2 = (**(code **)(*param_1 + 0x60))(param_1,8);
      if ((iVar2 <= *(int *)((longlong)param_1 + 0x2c)) &&
         (*(int *)((longlong)param_1 + 0x2c) <= iVar3)) {
        return;
      }
    }
  }
  else {
    if (param_2 == 6) {
      uVar1 = (**(code **)(*param_1 + 0x118))(param_1);
      iVar2 = (**(code **)(*param_1 + 0x110))(param_1,uVar1);
      iVar3 = *(int *)((longlong)param_1 + 0x24);
    }
    else {
      if (param_2 != 5) {
        iVar2 = (**(code **)(*param_1 + 0x70))(param_1,param_2);
        iVar4 = (**(code **)(*param_1 + 0x60))(param_1,param_2);
        iVar3 = *(int *)((longlong)param_1 + (longlong)param_2 * 4 + 0xc);
        if ((iVar4 <= iVar3) && (iVar3 <= iVar2)) {
          return;
        }
        goto LAB_1424d159e;
      }
      uVar1 = (**(code **)(*param_1 + 0x118))(param_1);
      iVar2 = (**(code **)(*param_1 + 0x108))
                        (param_1,uVar1,*(undefined4 *)((longlong)param_1 + 0x14));
      iVar3 = (int)param_1[4];
    }
    if ((0 < iVar3) && (iVar3 <= iVar2)) {
      return;
    }
  }
LAB_1424d159e:
  *param_3 = 1;
  return;
}



// FUNCTION 1424d15b0 FUN_1424d15b0 body=8 status=ok
// SIG undefined FUN_1424d15b0(void)

undefined4 * FUN_1424d15b0(void)

{
  return &DAT_14993c730;
}



// FUNCTION 1424d15c0 FUN_1424d15c0 body=27 status=ok
// SIG undefined FUN_1424d15c0(void)

int FUN_1424d15c0(longlong param_1,int param_2,int param_3)

{
  if (*(int *)(param_1 + 0x80 + (longlong)param_2 * 4) <
      *(int *)(param_1 + 0x80 + (longlong)param_3 * 4)) {
    param_2 = param_3;
  }
  return param_2;
}



// FUNCTION 1424d15e0 FUN_1424d15e0 body=721 status=ok
// SIG undefined FUN_1424d15e0(void)

void FUN_1424d15e0(longlong *param_1,int *param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  undefined1 auStack_98 [32];
  int *local_78;
  int *local_70;
  double local_60;
  int local_58;
  int local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((char)param_1[0x1d] == '\0') {
    iVar3 = *param_2;
    if (0 < iVar3) goto LAB_1424d18a4;
    uVar7 = 0;
    do {
      if (1 < *(int *)((longlong)param_1 + uVar7 * 4 + 0x80)) {
        (**(code **)(*param_1 + 0x130))(param_1,uVar7 & 0xffffffff,param_2);
        iVar3 = *param_2;
      }
    } while ((uVar7 < 0x16) && (uVar7 = uVar7 + 1, iVar3 < 1));
    if (0 < iVar3) goto LAB_1424d18a4;
  }
  iVar3 = FUN_1424d18d0(param_1);
  uVar4 = *(uint *)(param_1 + 0x15);
  if ((int)*(uint *)((longlong)param_1 + 0xd4) < 2) {
    uVar5 = *(uint *)((longlong)param_1 + 0xa4);
    uVar6 = *(uint *)((longlong)param_1 + 0xac);
LAB_1424d1703:
    if ((int)uVar5 < (int)uVar4) {
      uVar5 = uVar4;
    }
    uVar4 = uVar6;
    if ((int)uVar6 < (int)uVar5) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
      dVar10 = 0.0;
    }
    else if ((int)uVar6 < (int)uVar5) {
      dVar10 = (double)((int)param_1[6] * 0xc) + (double)*(int *)((longlong)param_1 + 0x34);
    }
    else {
      dVar10 = (double)(int)param_1[7];
    }
    dVar10 = (double)*(int *)((longlong)param_1 + 0x44) +
             ((double)(int)param_1[8] +
             ((double)*(int *)((longlong)param_1 + 0x3c) + dVar10 * 60.0) * 60.0) * 1000.0;
  }
  else {
    uVar5 = *(uint *)((longlong)param_1 + 0xa4);
    uVar6 = *(uint *)((longlong)param_1 + 0xac);
    uVar8 = uVar4;
    if ((int)uVar4 < (int)uVar5) {
      uVar8 = uVar5;
    }
    if ((int)uVar8 <= (int)uVar6) {
      uVar8 = uVar6;
    }
    if ((int)uVar8 <= (int)*(uint *)(param_1 + 0x16)) {
      uVar8 = *(uint *)(param_1 + 0x16);
    }
    if ((int)uVar8 <= (int)*(uint *)((longlong)param_1 + 0xb4)) {
      uVar8 = *(uint *)((longlong)param_1 + 0xb4);
    }
    if ((int)uVar8 <= (int)*(uint *)(param_1 + 0x17)) {
      uVar8 = *(uint *)(param_1 + 0x17);
    }
    uVar9 = 0;
    if (0 < (int)uVar8) {
      uVar9 = uVar8;
    }
    if (*(uint *)((longlong)param_1 + 0xd4) < uVar9) goto LAB_1424d1703;
    dVar10 = (double)(int)param_1[0xc];
  }
  dVar1 = (double)(iVar3 + -0x253d8c) * 86400000.0;
  if ((*(int *)((longlong)param_1 + 0xbc) < 2) && ((int)param_1[0x18] < 2)) {
    if (((char)param_1[0x1d] == '\0') || (*(int *)((longlong)param_1 + 0xfc) == 2)) {
      iVar3 = FUN_1424d1b10(param_1,dVar1,dVar10,param_2);
      dVar1 = (dVar1 + dVar10) - (double)iVar3;
      local_78 = &local_58;
      local_70 = param_2;
      (**(code **)(*(longlong *)param_1[0x1e] + 0x18))((longlong *)param_1[0x1e],dVar1,0,&local_54);
      dVar10 = 0.0;
      if ((*param_2 < 1) && (dVar10 = dVar1, iVar3 != local_58 + local_54)) {
        if ((char)param_1[0x1d] == '\0') {
          *param_2 = 1;
          dVar10 = 0.0;
        }
        else {
          cVar2 = FUN_1424d04d0(param_1,dVar1,&local_60,param_2);
          if (0 < *param_2) {
            local_60 = 0.0;
          }
          dVar10 = local_60;
          if (cVar2 == '\0') {
            dVar10 = 0.0;
          }
        }
      }
    }
    else {
      iVar3 = FUN_1424d1b10(param_1,dVar1,dVar10,param_2);
      dVar10 = (dVar1 + dVar10) - (double)iVar3;
    }
  }
  else {
    dVar10 = (dVar1 + dVar10) - (double)(*(int *)((longlong)param_1 + 0x4c) + (int)param_1[9]);
  }
  if (*param_2 < 1) {
    param_1[0x1c] = (longlong)dVar10;
  }
LAB_1424d18a4:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_98);
}



// FUNCTION 1424d18d0 FUN_1424d18d0 body=561 status=ok
// SIG undefined FUN_1424d18d0(void)

ulonglong FUN_1424d18d0(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  if (1 < (int)*(uint *)(param_1 + 0x1a)) {
    uVar12 = -(uint)((int)*(uint *)(param_1 + 0x12) < (int)*(uint *)(param_1 + 0x10));
    uVar14 = -(uint)((int)*(uint *)((longlong)param_1 + 0x94) <
                    (int)*(uint *)((longlong)param_1 + 0x84));
    uVar15 = -(uint)((int)*(uint *)(param_1 + 0x13) < (int)*(uint *)(param_1 + 0x11));
    uVar16 = -(uint)((int)*(uint *)((longlong)param_1 + 0x9c) <
                    (int)*(uint *)((longlong)param_1 + 0x8c));
    uVar13 = ~uVar12 & *(uint *)(param_1 + 0x12) | *(uint *)(param_1 + 0x10) & uVar12;
    uVar10 = ~uVar14 & *(uint *)((longlong)param_1 + 0x94) |
             *(uint *)((longlong)param_1 + 0x84) & uVar14;
    uVar15 = ~uVar15 & *(uint *)(param_1 + 0x13) | *(uint *)(param_1 + 0x11) & uVar15;
    uVar16 = ~uVar16 & *(uint *)((longlong)param_1 + 0x9c) |
             *(uint *)((longlong)param_1 + 0x8c) & uVar16;
    uVar12 = -(uint)((int)uVar15 < (int)uVar13);
    uVar14 = -(uint)((int)uVar16 < (int)uVar10);
    uVar12 = ~uVar12 & uVar15 | uVar13 & uVar12;
    uVar14 = ~uVar14 & uVar16 | uVar10 & uVar14;
    uVar13 = -(uint)((int)uVar14 < (int)uVar12);
    uVar14 = ~uVar13 & uVar14 | uVar12 & uVar13;
    uVar12 = *(uint *)(param_1 + 0x14);
    if ((int)*(uint *)(param_1 + 0x14) < (int)uVar14) {
      uVar12 = uVar14;
    }
    uVar14 = *(uint *)(param_1 + 0x19);
    if ((int)*(uint *)(param_1 + 0x19) < (int)*(uint *)((longlong)param_1 + 0xc4)) {
      uVar14 = *(uint *)((longlong)param_1 + 0xc4);
    }
    if ((int)uVar14 < (int)uVar12) {
      uVar14 = uVar12;
    }
    if ((int)uVar14 < (int)*(uint *)((longlong)param_1 + 0xcc)) {
      uVar14 = *(uint *)((longlong)param_1 + 0xcc);
    }
    uVar12 = 0;
    if (0 < (int)uVar14) {
      uVar12 = uVar14;
    }
    if (uVar12 <= *(uint *)(param_1 + 0x1a)) {
      return (ulonglong)*(uint *)((longlong)param_1 + 0x5c);
    }
  }
  piVar1 = (int *)(**(code **)(*param_1 + 0x138))(param_1);
  if (*piVar1 != -1) {
    piVar6 = piVar1 + 1;
    lVar7 = 0;
    do {
      uVar12 = piVar1[lVar7 * 0x60];
      if (uVar12 == 0xffffffff) {
        uVar14 = 0x17;
      }
      else {
        lVar5 = 0;
        iVar4 = 0;
        piVar3 = piVar6;
        uVar13 = 0x17;
        do {
          iVar9 = piVar1[lVar5 * 8 + lVar7 * 0x60 + (ulonglong)(0x1f < (int)uVar12)];
          iVar11 = 0;
          uVar14 = uVar13;
          if (iVar9 != -1) {
            piVar8 = piVar3 + (0x1f < (int)uVar12);
            iVar11 = 0;
            do {
              iVar9 = *(int *)((longlong)param_1 + (longlong)iVar9 * 4 + 0x80);
              if (iVar9 == 0) goto LAB_1424d1a12;
              if (iVar11 < iVar9) {
                iVar11 = iVar9;
              }
              iVar9 = *piVar8;
              piVar8 = piVar8 + 1;
            } while (iVar9 != -1);
          }
          if (iVar4 < iVar11) {
            uVar10 = uVar12;
            uVar14 = uVar12;
            if (0x1f < (int)uVar12) {
              uVar10 = 5;
              uVar14 = uVar13;
              if ((uVar12 & 0x1f) != 5 || (int)param_1[0x12] < *(int *)((longlong)param_1 + 0x94)) {
                uVar10 = uVar12 & 0x1f;
                uVar14 = uVar12 & 0x1f;
              }
            }
            if (uVar14 == uVar10) {
              iVar4 = iVar11;
            }
          }
LAB_1424d1a12:
          lVar5 = lVar5 + 1;
          uVar12 = piVar1[lVar7 * 0x60 + lVar5 * 8];
          piVar3 = piVar3 + 8;
          uVar13 = uVar14;
        } while (uVar12 != 0xffffffff);
      }
      lVar7 = lVar7 + 1;
    } while ((piVar1[lVar7 * 0x60] != -1) && (piVar6 = piVar6 + 0x60, uVar14 == 0x17));
    if (uVar14 != 0x17) goto LAB_1424d1ad1;
  }
  uVar14 = 5;
LAB_1424d1ad1:
                    /* WARNING: Could not recover jumptable at 0x0001424d1aee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x120))(param_1,uVar14);
  return uVar2;
}



// FUNCTION 1424d1b10 FUN_1424d1b10 body=404 status=ok
// SIG undefined FUN_1424d1b10(void)

void FUN_1424d1b10(longlong param_1,double param_2,double param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  int *local_68;
  int *local_60;
  int *local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_2 = param_2 + param_3;
  plVar3 = (longlong *)FUN_1424d1cc0();
  if (plVar3 == (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0xf0);
    local_68 = &local_48;
    local_60 = param_4;
    (**(code **)(*plVar3 + 0x18))(plVar3,param_2,1,&local_44);
    if (*(int *)(param_1 + 0xf8) == 1) {
      local_68 = &local_50;
      bVar1 = false;
      local_60 = param_4;
      (**(code **)(*plVar3 + 0x18))
                (plVar3,(param_2 - (double)(local_48 + local_44)) + -21600000.0,0,&local_4c);
      iVar2 = (local_48 + local_44) - (local_4c + local_50);
      if (iVar2 < 0) {
        bVar1 = true;
        local_68 = &local_48;
        local_60 = param_4;
        (**(code **)(*plVar3 + 0x18))(plVar3,(double)iVar2 + param_2,1,&local_44);
      }
    }
    else {
      bVar1 = false;
    }
    if ((!bVar1) && (*(int *)(param_1 + 0xfc) == 1)) {
      local_68 = &local_48;
      local_60 = param_4;
      (**(code **)(*plVar3 + 0x18))(plVar3,param_2 - (double)(local_48 + local_44),0,&local_44);
    }
  }
  else {
    local_60 = &local_48;
    local_68 = &local_44;
    local_58 = param_4;
    (**(code **)(*plVar3 + 0x98))
              (plVar3,param_2,(*(int *)(param_1 + 0xfc) == 1) * '\b' + '\x04',
               (*(int *)(param_1 + 0xf8) != 1) * '\b' + '\x04');
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
}



// FUNCTION 1424d1cc0 FUN_1424d1cc0 body=192 status=ok
// SIG undefined FUN_1424d1cc0(void)

undefined8 FUN_1424d1cc0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(*(undefined8 *)(param_1 + 0xf0),0,&icu_64::TimeZone::RTTI_Type_Descriptor,
                          &icu_64::OlsonTimeZone::RTTI_Type_Descriptor,0);
  if ((((lVar1 == 0) &&
       (lVar1 = __RTDynamicCast(*(undefined8 *)(param_1 + 0xf0),0,
                                &icu_64::TimeZone::RTTI_Type_Descriptor,
                                &icu_64::SimpleTimeZone::RTTI_Type_Descriptor,0), lVar1 == 0)) &&
      (lVar1 = __RTDynamicCast(*(undefined8 *)(param_1 + 0xf0),0,
                               &icu_64::TimeZone::RTTI_Type_Descriptor,
                               &icu_64::RuleBasedTimeZone::RTTI_Type_Descriptor,0), lVar1 == 0)) &&
     (lVar1 = __RTDynamicCast(*(undefined8 *)(param_1 + 0xf0),0,
                              &icu_64::TimeZone::RTTI_Type_Descriptor,
                              &icu_64::VTimeZone::RTTI_Type_Descriptor,0), lVar1 == 0)) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0xf0);
}



// FUNCTION 1424d1d80 FUN_1424d1d80 body=1346 status=ok
// SIG undefined FUN_1424d1d80(void)

int FUN_1424d1d80(longlong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  double dVar20;
  double dVar21;
  
  if ((param_2 == 3) && (*(int *)((longlong)param_1 + 0x84) <= *(int *)((longlong)param_1 + 0xc4)))
  {
    iVar4 = (int)param_1[10];
  }
  else {
    iVar4 = (**(code **)(*param_1 + 0x118))(param_1);
  }
  *(int *)(param_1 + 0xb) = iVar4;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 1;
  *(undefined1 *)((longlong)param_1 + 0x7b) = 1;
  if ((*(char *)((longlong)param_1 + 0xb) == '\0') && ((int)param_1[0x11] == 0)) {
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1,iVar4);
  }
  else {
    uVar5 = *(undefined4 *)((longlong)param_1 + 0x14);
  }
  uVar15 = 0;
  if (param_2 == 8 || (param_2 & 0xfffffffe) == 4) {
    uVar15 = uVar5;
  }
  iVar6 = (**(code **)(*param_1 + 0x100))(param_1,iVar4,uVar15);
  if (param_2 == 6) {
    return *(int *)((longlong)param_1 + 0x24) + iVar6;
  }
  if (param_2 == 5) {
    if ((*(char *)((longlong)param_1 + 0xb) == '\0') && (*(int *)((longlong)param_1 + 0x94) == 0)) {
      iVar4 = (**(code **)(*param_1 + 0x150))(param_1,iVar4,uVar5);
      return iVar4 + iVar6;
    }
    if (0 < *(int *)((longlong)param_1 + 0x94)) {
      return (int)param_1[4] + iVar6;
    }
    return iVar6 + 1;
  }
  iVar7 = (int)param_1[0x20];
  dVar20 = fmod((double)(iVar6 + 1) + 1.0,7.0);
  cVar12 = '\x01';
  if ((char)(int)dVar20 < '\0') {
    cVar12 = '\b';
  }
  iVar10 = (uint)(byte)(cVar12 + (char)(int)dVar20) - iVar7;
  uVar16 = *(uint *)((longlong)param_1 + 0x9c);
  if (uVar16 == 0) {
    uVar16 = 0x17;
    uVar13 = 0;
  }
  else {
    uVar13 = uVar16;
    if ((int)uVar16 < 1) {
      uVar13 = 0;
    }
    if ((int)uVar16 < 1) {
      uVar13 = 0;
    }
    uVar16 = (uint)((int)uVar16 < 1) << 4 | 7;
  }
  iVar19 = iVar10 + 7;
  if (-1 < iVar10) {
    iVar19 = iVar10;
  }
  uVar1 = *(uint *)(param_1 + 0x19);
  uVar2 = 0;
  if (0 < (int)uVar1) {
    uVar2 = uVar1;
  }
  if ((uVar1 == 0) || (uVar2 <= uVar13)) {
    iVar10 = 0;
    if (uVar16 == 7) {
      iVar10 = (int)param_1[5] - (int)param_1[0x20];
    }
  }
  else {
    iVar10 = *(int *)((longlong)param_1 + 0x54) + -1;
  }
  iVar3 = iVar10 % 7 + 7;
  if (-1 < iVar10 % 7) {
    iVar3 = iVar10 % 7;
  }
  uVar16 = iVar3 - iVar19;
  iVar10 = uVar16 + 1;
  if (param_2 == 8) {
    iVar7 = iVar10;
    if (0x7ffffffe < uVar16) {
      iVar7 = uVar16 + 8;
    }
    iVar19 = -7;
    if ((int)param_1[0x14] < 1) {
      iVar10 = 1;
    }
    else {
      iVar10 = *(int *)((longlong)param_1 + 0x2c);
      if (iVar10 < 0) {
        uVar5 = 0;
        if (0 < (int)param_1[0x11]) {
          uVar5 = *(undefined4 *)((longlong)param_1 + 0x14);
        }
        iVar4 = (**(code **)(*param_1 + 0x108))(param_1,iVar4,uVar5);
        iVar10 = (iVar4 - iVar7) / 7 + iVar10;
        iVar19 = 7;
      }
    }
    goto LAB_1424d229c;
  }
  if (param_2 == 3) {
    if ((*(char *)((longlong)param_1 + 0xb) != '\0') || (*(int *)((longlong)param_1 + 0xc4) != 0)) {
      iVar18 = 1;
      piVar17 = &DAT_14993ceb4;
      iVar14 = 0;
      do {
        iVar18 = *(int *)((longlong)param_1 + (longlong)iVar18 * 4 + 0x80);
        iVar8 = 0;
        if (iVar18 == 0) goto LAB_1424d203b;
        if (iVar14 < iVar18) {
          iVar14 = iVar18;
        }
        iVar18 = *piVar17;
        piVar17 = piVar17 + 1;
      } while (iVar18 != -1);
      iVar8 = 0;
      if (-1 < iVar14) {
        iVar8 = iVar14;
      }
LAB_1424d203b:
      iVar14 = 0;
      iVar18 = 0x13;
      piVar17 = &DAT_14993ced4;
      do {
        iVar18 = *(int *)((longlong)param_1 + (longlong)iVar18 * 4 + 0x80);
        if (iVar18 == 0) goto LAB_1424d2079;
        if (iVar14 < iVar18) {
          iVar14 = iVar18;
        }
        iVar18 = *piVar17;
        piVar17 = piVar17 + 1;
      } while (iVar18 != -1);
      if (iVar8 < iVar14) {
        iVar8 = iVar14;
      }
LAB_1424d2079:
      iVar14 = 0;
      iVar18 = 0x11;
      piVar17 = &DAT_14993cef4;
      do {
        iVar18 = *(int *)((longlong)param_1 + (longlong)iVar18 * 4 + 0x80);
        if (iVar18 == 0) {
          bVar9 = false;
          goto LAB_1424d20d5;
        }
        if (iVar14 < iVar18) {
          iVar14 = iVar18;
        }
        iVar18 = *piVar17;
        piVar17 = piVar17 + 1;
      } while (iVar18 != -1);
      bVar9 = iVar8 < iVar14;
LAB_1424d20d5:
      if ((bVar9) || (*(int *)((longlong)param_1 + 0xc4) == 1)) goto LAB_1424d2274;
    }
    iVar18 = (int)param_1[3];
    iVar14 = (**(code **)(*param_1 + 0x100))(param_1,iVar4 + 1,0,0);
    dVar20 = (double)(iVar14 + 1) + 1.0;
    dVar21 = fmod(dVar20,7.0);
    cVar12 = '\x01';
    if ((char)(int)dVar21 < '\0') {
      cVar12 = '\b';
    }
    iVar11 = (uint)(byte)(cVar12 + (char)(int)dVar21) - iVar7;
    iVar8 = iVar11 + 7;
    if (-1 < iVar11) {
      iVar8 = iVar11;
    }
    if (iVar18 == 1) {
      if ((0 < iVar8) && ((int)(uint)*(byte *)((longlong)param_1 + 0x104) <= 7 - iVar8)) {
        dVar20 = fmod(dVar20,7.0);
        cVar12 = '\x01';
        if ((char)(int)dVar20 < '\0') {
          cVar12 = '\b';
        }
        iVar7 = (uint)(byte)(cVar12 + (char)(int)dVar20) - iVar7;
        iVar19 = iVar7 + 7;
        if (-1 < iVar7) {
          iVar19 = iVar7;
        }
        iVar10 = (iVar3 - iVar19) + 1;
        iVar6 = iVar14;
      }
    }
    else {
      iVar8 = (**(code **)(*param_1 + 0x90))(param_1,3);
      if (iVar8 <= iVar18) {
        iVar8 = uVar16 + 8;
        if ((int)(uint)*(byte *)((longlong)param_1 + 0x104) <= 7 - iVar19) {
          iVar8 = iVar10;
        }
        if (iVar14 < iVar6 + iVar18 * 7 + iVar8 + -7) {
          iVar6 = (**(code **)(*param_1 + 0x100))(param_1,iVar4 + -1,0,0);
          dVar20 = fmod((double)(iVar6 + 1) + 1.0,7.0);
          cVar12 = '\x01';
          if ((char)(int)dVar20 < '\0') {
            cVar12 = '\b';
          }
          iVar7 = (uint)(byte)(cVar12 + (char)(int)dVar20) - iVar7;
          iVar19 = iVar7 + 7;
          if (-1 < iVar7) {
            iVar19 = iVar7;
          }
          iVar10 = (iVar3 - iVar19) + 1;
        }
      }
    }
  }
LAB_1424d2274:
  iVar7 = iVar10 + 7;
  if ((int)(uint)*(byte *)((longlong)param_1 + 0x104) <= 7 - iVar19) {
    iVar7 = iVar10;
  }
  iVar10 = *(int *)((longlong)param_1 + (longlong)(int)param_2 * 4 + 0xc);
  iVar19 = -7;
LAB_1424d229c:
  return iVar10 * 7 + iVar6 + iVar19 + iVar7;
}



// FUNCTION 1424d22d0 FUN_1424d22d0 body=3 status=ok
// SIG undefined FUN_1424d22d0(void)

undefined8 FUN_1424d22d0(void)

{
  return 0;
}



// FUNCTION 1424d22e0 FUN_1424d22e0 body=6 status=ok
// SIG undefined FUN_1424d22e0(void)

undefined8 FUN_1424d22e0(void)

{
  return 1;
}



// FUNCTION 1424d22f0 FUN_1424d22f0 body=915 status=ok
// SIG undefined FUN_1424d22f0(void)

int FUN_1424d22f0(longlong *param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  double dVar18;
  
  lVar12 = 0;
  uVar16 = 0x17;
  uVar9 = 5;
  puVar13 = &DAT_14993c734;
  iVar14 = 0;
  do {
    iVar17 = (&DAT_14993c730)[lVar12 * 8 + (ulonglong)(0x1f < (int)uVar9)];
    iVar4 = 0;
    if (iVar17 != -1) {
      piVar11 = puVar13 + (0x1f < (int)uVar9);
      iVar4 = 0;
      do {
        iVar17 = *(int *)((longlong)param_1 + (longlong)iVar17 * 4 + 0x80);
        if (iVar17 == 0) goto LAB_1424d2364;
        if (iVar4 < iVar17) {
          iVar4 = iVar17;
        }
        iVar17 = *piVar11;
        piVar11 = piVar11 + 1;
      } while (iVar17 != -1);
    }
    if (iVar14 < iVar4) {
      uVar6 = uVar9;
      if (0x1f < (int)uVar9) {
        uVar15 = uVar9 & 0x1f;
        uVar9 = uVar16;
        uVar6 = 5;
        if (uVar15 != 5 || (int)param_1[0x12] < *(int *)((longlong)param_1 + 0x94)) {
          uVar9 = uVar15;
          uVar6 = uVar15;
        }
      }
      uVar16 = uVar9;
      if (uVar9 == uVar6) {
        iVar14 = iVar4;
      }
    }
LAB_1424d2364:
    lVar12 = lVar12 + 1;
    uVar9 = (&DAT_14993c730)[lVar12 * 8];
    puVar13 = puVar13 + 8;
  } while (uVar9 != 0xffffffff);
  if (uVar16 == 0x17) {
    lVar12 = 0;
    uVar6 = 0x17;
    uVar16 = 0x17;
    uVar9 = 3;
    puVar13 = &DAT_14993c8b4;
    iVar14 = 0;
    do {
      iVar17 = (&DAT_14993c8b0)[lVar12 * 8 + (ulonglong)(0x1f < (int)uVar9)];
      iVar4 = 0;
      if (iVar17 != -1) {
        piVar11 = puVar13 + (0x1f < (int)uVar9);
        iVar4 = 0;
        do {
          iVar17 = *(int *)((longlong)param_1 + (longlong)iVar17 * 4 + 0x80);
          if (iVar17 == 0) goto LAB_1424d243c;
          if (iVar4 < iVar17) {
            iVar4 = iVar17;
          }
          iVar17 = *piVar11;
          piVar11 = piVar11 + 1;
        } while (iVar17 != -1);
      }
      if (iVar14 < iVar4) {
        uVar16 = uVar9;
        if (0x1f < (int)uVar9) {
          uVar15 = uVar9 & 0x1f;
          uVar9 = 5;
          uVar16 = uVar6;
          if (uVar15 != 5 || (int)param_1[0x12] < *(int *)((longlong)param_1 + 0x94)) {
            uVar9 = uVar15;
            uVar16 = uVar15;
          }
        }
        uVar6 = uVar16;
        if (uVar16 == uVar9) {
          iVar14 = iVar4;
        }
      }
LAB_1424d243c:
      lVar12 = lVar12 + 1;
      uVar9 = (&DAT_14993c8b0)[lVar12 * 8];
      puVar13 = puVar13 + 8;
    } while (uVar9 != 0xffffffff);
  }
  uVar9 = *(uint *)((longlong)param_1 + 0x9c);
  if (uVar9 == 0) {
    uVar9 = 0x17;
    uVar6 = 0;
  }
  else {
    uVar6 = uVar9;
    if ((int)uVar9 < 1) {
      uVar6 = 0;
    }
    if ((int)uVar9 < 1) {
      uVar6 = 0;
    }
    uVar9 = (uint)((int)uVar9 < 1) << 4 | 7;
  }
  uVar15 = *(uint *)(param_1 + 0x19);
  uVar2 = 0;
  if (0 < (int)uVar15) {
    uVar2 = uVar15;
  }
  if ((uVar15 == 0) || (uVar2 <= uVar6)) {
    iVar14 = 0;
    if (uVar9 == 7) {
      iVar14 = (int)param_1[5] - (int)param_1[0x20];
    }
  }
  else {
    iVar14 = *(int *)((longlong)param_1 + 0x54) + -1;
  }
  iVar17 = iVar14 % 7 + 7;
  if (-1 < iVar14 % 7) {
    iVar17 = iVar14 % 7;
  }
  lVar12 = param_1[0x20];
  iVar14 = (**(code **)(*param_1 + 0x100))(param_1,param_2,0,0);
  iVar10 = param_2 + 1;
  iVar4 = (**(code **)(*param_1 + 0x100))(param_1,iVar10,0,0);
  dVar18 = fmod((double)(iVar14 + 1) + 1.0,7.0);
  cVar8 = '\x01';
  if ((char)(int)dVar18 < '\0') {
    cVar8 = '\b';
  }
  iVar7 = (uint)(byte)(cVar8 + (char)(int)dVar18) - (int)lVar12;
  iVar5 = iVar7 + 7;
  if (-1 < iVar7) {
    iVar5 = iVar7;
  }
  iVar7 = param_2;
  if (uVar16 == 5) {
    if (((*(int *)((longlong)param_1 + 0x14) != 0) ||
        (iVar14 = (**(code **)(*param_1 + 0x90))(param_1,3), iVar7 = iVar10, param_3 < iVar14)) &&
       (iVar7 = param_2, param_3 == 1)) {
      iVar7 = param_2 + -1 + (uint)(*(int *)((longlong)param_1 + 0x14) == 0);
    }
  }
  else if (uVar16 == 3) {
    bVar1 = *(byte *)((longlong)param_1 + 0x104);
    iVar3 = -iVar5;
    if (param_3 == 1) {
      iVar7 = param_2 - (uint)(iVar17 < iVar5 && (int)(uint)bVar1 <= iVar3 + 7);
    }
    else {
      iVar5 = (**(code **)(*param_1 + 0x90))(param_1,3);
      if (iVar5 <= param_3) {
        if ((int)(uint)bVar1 <= iVar3 + 7) {
          iVar3 = iVar3 + -7;
        }
        iVar7 = iVar10;
        if (iVar3 + param_3 * 7 + iVar14 + iVar17 + 1 < iVar4) {
          iVar7 = param_2;
        }
      }
    }
  }
  return iVar7;
}



// FUNCTION 1424d2690 FUN_1424d2690 body=67 status=ok
// SIG undefined FUN_1424d2690(void)

int FUN_1424d2690(longlong *param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x100))(param_1,param_2,param_3 + 1,1);
  iVar2 = (**(code **)(*param_1 + 0x100))(param_1,param_2 & 0xffffffff,param_3,1);
  return iVar1 - iVar2;
}



// FUNCTION 1424d26e0 FUN_1424d26e0 body=64 status=ok
// SIG undefined FUN_1424d26e0(void)

int FUN_1424d26e0(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x100))(param_1,param_2 + 1,0,0);
  iVar2 = (**(code **)(*param_1 + 0x100))(param_1,param_2,0,0);
  return iVar1 - iVar2;
}



// FUNCTION 1424d2720 FUN_1424d2720 body=363 status=ok
// SIG undefined FUN_1424d2720(void)

ulonglong FUN_1424d2720(longlong *param_1,uint param_2,int *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  if (param_2 < 0x16) {
    if ((0x35fe80U >> (param_2 & 0x1f) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001424d2757. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*param_1 + 0x70))(param_1,param_2);
      return uVar4;
    }
    if (param_2 == 5) {
      if (*param_3 < 1) {
        plVar5 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1);
        if (plVar5 != (longlong *)0x0) {
          *(undefined1 *)(plVar5 + 0x1d) = 1;
          (**(code **)(*plVar5 + 0xe8))(plVar5,5,0,param_3);
          uVar1 = FUN_1424cd2e0(plVar5,2,param_3);
          uVar3 = FUN_1424cd2e0(plVar5,0x13,param_3);
          uVar2 = (**(code **)(*param_1 + 0x108))(param_1,uVar3,uVar1);
LAB_1424d2835:
          (**(code **)*plVar5)(plVar5,1);
          return (ulonglong)uVar2;
        }
LAB_1424d287a:
        *param_3 = 7;
      }
    }
    else {
      if (param_2 != 6) goto LAB_1424d2848;
      if (*param_3 < 1) {
        plVar5 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1);
        if (plVar5 != (longlong *)0x0) {
          *(undefined1 *)(plVar5 + 0x1d) = 1;
          (**(code **)(*plVar5 + 0xe8))(plVar5,6,0,param_3);
          uVar1 = FUN_1424cd2e0(plVar5,0x13,param_3);
          uVar2 = (**(code **)(*param_1 + 0x110))(param_1,uVar1);
          goto LAB_1424d2835;
        }
        goto LAB_1424d287a;
      }
    }
    uVar4 = 0;
  }
  else {
LAB_1424d2848:
    uVar1 = (**(code **)(*param_1 + 0x70))(param_1,param_2);
    uVar3 = (**(code **)(*param_1 + 0x90))(param_1,param_2);
    uVar4 = FUN_1424d2890(param_1,param_2,uVar3,uVar1,param_3);
  }
  return uVar4;
}



// FUNCTION 1424d2890 FUN_1424d2890 body=841 status=ok
// SIG undefined FUN_1424d2890(void)

void FUN_1424d2890(longlong *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_78 [43];
  undefined1 local_4d;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_3 == param_4) || (0 < *param_5)) goto LAB_1424d2ada;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x10))();
  if (plVar2 == (longlong *)0x0) {
    *param_5 = 7;
    goto LAB_1424d2ada;
  }
  if ((char)plVar2[1] == '\0') {
    (**(code **)(*plVar2 + 0xd8))(plVar2,param_5);
    if (*param_5 < 1) {
      if (((char)plVar2[0x1d] != '\0') || (*(char *)((longlong)plVar2 + 10) == '\0')) {
        *(undefined1 *)((longlong)plVar2 + 9) = 0;
      }
      *(undefined1 *)(plVar2 + 1) = 1;
      *(undefined1 *)((longlong)plVar2 + 0xb) = 0;
      if (*param_5 < 1) goto LAB_1424d28ea;
    }
  }
  else {
LAB_1424d28ea:
    if ((*(char *)((longlong)plVar2 + 9) == '\0') &&
       ((**(code **)(*plVar2 + 0xe0))(plVar2,param_5), *param_5 < 1)) {
      *(undefined2 *)((longlong)plVar2 + 9) = 0x101;
    }
  }
  *(undefined1 *)(plVar2 + 0x1d) = 1;
  (**(code **)(*plVar2 + 0xe8))(plVar2,param_2,param_4 <= param_3,param_5);
  if (*(char *)((longlong)plVar2 + 0xb) != '\0') {
    local_4c = 0;
    (**(code **)(*plVar2 + 0xe0))(plVar2,&local_4c);
  }
  lVar9 = (longlong)param_2;
  *(int *)((longlong)plVar2 + lVar9 * 4 + 0xc) = param_3;
  iVar1 = *(int *)((longlong)plVar2 + 0xdc);
  if (iVar1 == 10000) {
    *(undefined4 *)((longlong)plVar2 + 0xdc) = 1;
    iVar3 = 0;
    do {
      iVar1 = *(int *)((longlong)plVar2 + 0xdc);
      uVar8 = 0xffffffff;
      iVar4 = 10000;
      uVar10 = 0;
      while( true ) {
        iVar5 = *(int *)((longlong)plVar2 + uVar10 * 4 + 0x80);
        uVar6 = uVar10 & 0xffffffff;
        if (iVar4 <= iVar5 || iVar5 <= iVar1) {
          uVar6 = uVar8;
        }
        if (uVar10 + 1 == 0x17) break;
        if (iVar4 <= iVar5 || iVar5 <= iVar1) {
          iVar5 = iVar4;
        }
        iVar4 = *(int *)((longlong)plVar2 + uVar10 * 4 + 0x84);
        uVar7 = (uint)(uVar10 + 1);
        if (iVar4 <= iVar1 || iVar5 <= iVar4) {
          uVar7 = (uint)uVar6;
          iVar4 = iVar5;
        }
        uVar8 = (ulonglong)uVar7;
        uVar10 = uVar10 + 2;
      }
      if ((int)(uint)uVar6 < 0) goto LAB_1424d2a68;
      *(int *)((longlong)plVar2 + 0xdc) = iVar1 + 1;
      *(int *)((longlong)plVar2 + uVar6 * 4 + 0x80) = iVar1 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x17);
    iVar1 = *(int *)((longlong)plVar2 + 0xdc);
LAB_1424d2a68:
    iVar1 = iVar1 + 1;
    local_4d = param_3 < param_4;
  }
  *(int *)((longlong)plVar2 + 0xdc) = iVar1 + 1;
  *(int *)((longlong)plVar2 + lVar9 * 4 + 0x80) = iVar1;
  *(undefined1 *)((longlong)plVar2 + lVar9 + 0x68) = 1;
  *(undefined1 *)((longlong)plVar2 + 0xb) = 0;
  *(undefined2 *)(plVar2 + 1) = 0;
  if ((*param_5 < 1) && ((**(code **)(*plVar2 + 0xd8))(plVar2,param_5), *param_5 < 1)) {
    if (((char)plVar2[0x1d] != '\0') || (*(char *)((longlong)plVar2 + 10) == '\0')) {
      *(undefined1 *)((longlong)plVar2 + 9) = 0;
    }
    *(undefined1 *)(plVar2 + 1) = 1;
    *(undefined1 *)((longlong)plVar2 + 0xb) = 0;
    if (((*param_5 < 1) &&
        ((*(char *)((longlong)plVar2 + 9) != '\0' ||
         (((**(code **)(*plVar2 + 0xe0))(plVar2,param_5), *param_5 < 1 &&
          (*(undefined2 *)((longlong)plVar2 + 9) = 0x101, *param_5 < 1)))))) &&
       ((param_4 <= param_3 ||
        ((param_2 == 4 || (*(int *)((longlong)plVar2 + lVar9 * 4 + 0xc) == param_3)))))) {
      iVar1 = (uint)(param_3 < param_4) * 2 + -1;
      while ((**(code **)(*plVar2 + 0x28))(plVar2,param_2,iVar1,param_5), *param_5 < 1) {
        if ((char)plVar2[1] == '\0') {
          (**(code **)(*plVar2 + 0xd8))(plVar2,param_5);
          if (0 < *param_5) break;
          if (((char)plVar2[0x1d] != '\0') || (*(char *)((longlong)plVar2 + 10) == '\0')) {
            *(undefined1 *)((longlong)plVar2 + 9) = 0;
          }
          *(undefined1 *)(plVar2 + 1) = 1;
          *(undefined1 *)((longlong)plVar2 + 0xb) = 0;
          if (0 < *param_5) break;
        }
        if ((((*(char *)((longlong)plVar2 + 9) == '\0') &&
             (((**(code **)(*plVar2 + 0xe0))(plVar2,param_5), 0 < *param_5 ||
              (*(undefined2 *)((longlong)plVar2 + 9) = 0x101, 0 < *param_5)))) ||
            (param_3 = param_3 + iVar1, param_3 != *(int *)((longlong)plVar2 + lVar9 * 4 + 0xc))) ||
           (param_4 == param_3)) break;
      }
    }
  }
  (**(code **)*plVar2)(plVar2,1);
LAB_1424d2ada:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 1424d2c00 FUN_1424d2c00 body=2330 status=ok
// SIG undefined FUN_1424d2c00(void)

void FUN_1424d2c00(longlong *param_1,int param_2,char param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)((longlong)param_1 + 0xb) != '\0') {
    local_3c = 0;
    (**(code **)(*param_1 + 0xe0))(param_1,&local_3c);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar4 = *(int *)((longlong)param_1 + 0xdc);
  if (iVar4 == 10000) {
    *(undefined4 *)((longlong)param_1 + 0xdc) = 1;
    iVar1 = 0;
    do {
      iVar4 = *(int *)((longlong)param_1 + 0xdc);
      uVar9 = 0xffffffff;
      iVar5 = 10000;
      uVar10 = 0;
      while( true ) {
        iVar6 = *(int *)((longlong)param_1 + uVar10 * 4 + 0x80);
        uVar7 = uVar10 & 0xffffffff;
        if (iVar5 <= iVar6 || iVar6 <= iVar4) {
          uVar7 = uVar9;
        }
        if (uVar10 + 1 == 0x17) break;
        if (iVar5 <= iVar6 || iVar6 <= iVar4) {
          iVar6 = iVar5;
        }
        iVar5 = *(int *)((longlong)param_1 + uVar10 * 4 + 0x84);
        uVar8 = (uint)(uVar10 + 1);
        if (iVar5 <= iVar4 || iVar6 <= iVar5) {
          uVar8 = (uint)uVar7;
          iVar5 = iVar6;
        }
        uVar9 = (ulonglong)uVar8;
        uVar10 = uVar10 + 2;
      }
      if ((int)(uint)uVar7 < 0) goto LAB_1424d2d18;
      *(int *)((longlong)param_1 + 0xdc) = iVar4 + 1;
      *(int *)((longlong)param_1 + uVar7 * 4 + 0x80) = iVar4 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x17);
    iVar4 = *(int *)((longlong)param_1 + 0xdc);
LAB_1424d2d18:
    iVar4 = iVar4 + 1;
  }
  iVar1 = iVar4 + 1;
  *(int *)((longlong)param_1 + 0xdc) = iVar1;
  *(int *)((longlong)param_1 + 0xd4) = iVar4;
  *(undefined1 *)((longlong)param_1 + 0x7d) = 1;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  switch(param_2) {
  case 1:
  case 0x13:
    uVar2 = (**(code **)(*param_1 + 0x80))(param_1,6);
    if (*(char *)((longlong)param_1 + 0xb) != '\0') {
      local_3c = 0;
      (**(code **)(*param_1 + 0xe0))(param_1,&local_3c);
    }
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
    iVar4 = *(int *)((longlong)param_1 + 0xdc);
    if (iVar4 == 10000) {
      *(undefined4 *)((longlong)param_1 + 0xdc) = 1;
      iVar1 = 0;
      do {
        iVar4 = *(int *)((longlong)param_1 + 0xdc);
        uVar9 = 0xffffffff;
        iVar5 = 10000;
        uVar10 = 0;
        while( true ) {
          iVar6 = *(int *)((longlong)param_1 + uVar10 * 4 + 0x80);
          uVar7 = uVar10 & 0xffffffff;
          if (iVar5 <= iVar6 || iVar6 <= iVar4) {
            uVar7 = uVar9;
          }
          if (uVar10 + 1 == 0x17) break;
          if (iVar5 <= iVar6 || iVar6 <= iVar4) {
            iVar6 = iVar5;
          }
          iVar5 = *(int *)((longlong)param_1 + uVar10 * 4 + 0x84);
          uVar8 = (uint)(uVar10 + 1);
          if (iVar5 <= iVar4 || iVar6 <= iVar5) {
            uVar8 = (uint)uVar7;
            iVar5 = iVar6;
          }
          uVar9 = (ulonglong)uVar8;
          uVar10 = uVar10 + 2;
        }
        if ((int)(uint)uVar7 < 0) goto LAB_1424d2e58;
        *(int *)((longlong)param_1 + 0xdc) = iVar4 + 1;
        *(int *)((longlong)param_1 + uVar7 * 4 + 0x80) = iVar4 + 1;
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0x17);
      iVar4 = *(int *)((longlong)param_1 + 0xdc);
LAB_1424d2e58:
      iVar4 = iVar4 + 1;
    }
    *(int *)((longlong)param_1 + 0xdc) = iVar4 + 1;
    *(int *)(param_1 + 0x13) = iVar4;
    *(undefined1 *)((longlong)param_1 + 0x6e) = 1;
    break;
  case 3:
  case 4:
    iVar4 = (int)param_1[0x20];
    if (param_3 != '\0') {
      iVar5 = (int)((ulonglong)((longlong)(iVar4 + 6) * -0x6db6db6d) >> 0x20) + iVar4 + 6;
      iVar5 = ((iVar5 >> 2) - (iVar5 >> 0x1f)) * -7;
      iVar6 = iVar4 + iVar5 + 6;
      iVar4 = iVar4 + 0xd + iVar5;
      if (0 < iVar6) {
        iVar4 = iVar6;
      }
    }
    *(int *)(param_1 + 5) = iVar4;
    if (iVar1 == 10000) {
      *(undefined4 *)((longlong)param_1 + 0xdc) = 1;
      iVar4 = 0;
      do {
        iVar1 = *(int *)((longlong)param_1 + 0xdc);
        uVar9 = 0xffffffff;
        iVar5 = 10000;
        uVar10 = 0;
        while( true ) {
          iVar6 = *(int *)((longlong)param_1 + uVar10 * 4 + 0x80);
          uVar7 = uVar10 & 0xffffffff;
          if (iVar5 <= iVar6 || iVar6 <= iVar1) {
            uVar7 = uVar9;
          }
          if (uVar10 + 1 == 0x17) break;
          if (iVar5 <= iVar6 || iVar6 <= iVar1) {
            iVar6 = iVar5;
          }
          iVar5 = *(int *)((longlong)param_1 + uVar10 * 4 + 0x84);
          uVar8 = (uint)(uVar10 + 1);
          if (iVar5 <= iVar1 || iVar6 <= iVar5) {
            uVar8 = (uint)uVar7;
            iVar5 = iVar6;
          }
          uVar9 = (ulonglong)uVar8;
          uVar10 = uVar10 + 2;
        }
        if ((int)(uint)uVar7 < 0) goto LAB_1424d33f8;
        *(int *)((longlong)param_1 + 0xdc) = iVar1 + 1;
        *(int *)((longlong)param_1 + uVar7 * 4 + 0x80) = iVar1 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x17);
LAB_1424d33f2:
      iVar1 = *(int *)((longlong)param_1 + 0xdc);
LAB_1424d33f8:
      iVar1 = iVar1 + 1;
    }
    goto LAB_1424d33fa;
  default:
    goto switchD_1424d2d51_caseD_5;
  case 8:
    *(undefined4 *)(param_1 + 4) = 1;
    if (iVar1 == 10000) {
      *(undefined4 *)((longlong)param_1 + 0xdc) = 1;
      iVar4 = 0;
      do {
        iVar1 = *(int *)((longlong)param_1 + 0xdc);
        uVar9 = 0xffffffff;
        iVar5 = 10000;
        uVar10 = 0;
        while( true ) {
          iVar6 = *(int *)((longlong)param_1 + uVar10 * 4 + 0x80);
          uVar7 = uVar10 & 0xffffffff;
          if (iVar5 <= iVar6 || iVar6 <= iVar1) {
            uVar7 = uVar9;
          }
          if (uVar10 + 1 == 0x17) break;
          if (iVar5 <= iVar6 || iVar6 <= iVar1) {
            iVar6 = iVar5;
          }
          iVar5 = *(int *)((longlong)param_1 + uVar10 * 4 + 0x84);
          uVar8 = (uint)(uVar10 + 1);
          if (iVar5 <= iVar1 || iVar6 <= iVar5) {
            uVar8 = (uint)uVar7;
            iVar5 = iVar6;
          }
          uVar9 = (ulonglong)uVar8;
          uVar10 = uVar10 + 2;
        }
        if ((int)(uint)uVar7 < 0) goto LAB_1424d3058;
        *(int *)((longlong)param_1 + 0xdc) = iVar1 + 1;
        *(int *)((longlong)param_1 + uVar7 * 4 + 0x80) = iVar1 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x17);
      iVar1 = *(int *)((longlong)param_1 + 0xdc);
LAB_1424d3058:
      iVar1 = iVar1 + 1;
    }
    *(int *)((longlong)param_1 + 0xdc) = iVar1 + 1;
    *(int *)((longlong)param_1 + 0x94) = iVar1;
    *(undefined1 *)((longlong)param_1 + 0x6d) = 1;
    *(undefined1 *)((longlong)param_1 + 0xb) = 0;
    *(undefined2 *)(param_1 + 1) = 0;
    uVar2 = 0;
    if (*param_4 < 1) {
      (**(code **)(*param_1 + 0xd8))(param_1,param_4);
      uVar2 = 0;
      if (*param_4 < 1) {
        if (((char)param_1[0x1d] != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
          *(undefined1 *)((longlong)param_1 + 9) = 0;
        }
        *(undefined1 *)(param_1 + 1) = 1;
        *(undefined1 *)((longlong)param_1 + 0xb) = 0;
        uVar2 = 0;
        if (0 < *param_4) goto LAB_1424d3328;
        if (*(char *)((longlong)param_1 + 9) == '\0') {
          (**(code **)(*param_1 + 0xe0))(param_1,param_4);
          uVar2 = 0;
          if ((0 < *param_4) || (*(undefined2 *)((longlong)param_1 + 9) = 0x101, 0 < *param_4))
          goto LAB_1424d309c;
        }
        uVar2 = (undefined4)param_1[5];
      }
LAB_1424d309c:
      if (*(char *)((longlong)param_1 + 0xb) != '\0') {
        local_3c = 0;
        (**(code **)(*param_1 + 0xe0))(param_1,&local_3c);
      }
    }
LAB_1424d3328:
    *(undefined4 *)(param_1 + 5) = uVar2;
    iVar1 = *(int *)((longlong)param_1 + 0xdc);
    if (iVar1 == 10000) {
      *(undefined4 *)((longlong)param_1 + 0xdc) = 1;
      iVar4 = 0;
      do {
        iVar1 = *(int *)((longlong)param_1 + 0xdc);
        uVar9 = 0xffffffff;
        iVar5 = 10000;
        uVar10 = 0;
        while( true ) {
          iVar6 = *(int *)((longlong)param_1 + uVar10 * 4 + 0x80);
          uVar7 = uVar10 & 0xffffffff;
          if (iVar5 <= iVar6 || iVar6 <= iVar1) {
            uVar7 = uVar9;
          }
          if (uVar10 + 1 == 0x17) break;
          if (iVar5 <= iVar6 || iVar6 <= iVar1) {
            iVar6 = iVar5;
          }
          iVar5 = *(int *)((longlong)param_1 + uVar10 * 4 + 0x84);
          uVar8 = (uint)(uVar10 + 1);
          if (iVar5 <= iVar1 || iVar6 <= iVar5) {
            uVar8 = (uint)uVar7;
            iVar5 = iVar6;
          }
          uVar9 = (ulonglong)uVar8;
          uVar10 = uVar10 + 2;
        }
        if ((int)(uint)uVar7 < 0) goto LAB_1424d33f8;
        *(int *)((longlong)param_1 + 0xdc) = iVar1 + 1;
        *(int *)((longlong)param_1 + uVar7 * 4 + 0x80) = iVar1 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x17);
      goto LAB_1424d33f2;
    }
LAB_1424d33fa:
    *(int *)((longlong)param_1 + 0xdc) = iVar1 + 1;
    *(int *)((longlong)param_1 + 0x9c) = iVar1;
    *(undefined1 *)((longlong)param_1 + 0x6f) = 1;
    break;
  case 0x11:
    uVar2 = (**(code **)(*param_1 + 0x80))(param_1,3);
    if (*(char *)((longlong)param_1 + 0xb) != '\0') {
      local_3c = 0;
      (**(code **)(*param_1 + 0xe0))(param_1,&local_3c);
    }
    *(undefined4 *)(param_1 + 3) = uVar2;
    iVar4 = *(int *)((longlong)param_1 + 0xdc);
    if (iVar4 == 10000) {
      *(undefined4 *)((longlong)param_1 + 0xdc) = 1;
      iVar1 = 0;
      do {
        iVar4 = *(int *)((longlong)param_1 + 0xdc);
        uVar9 = 0xffffffff;
        iVar5 = 10000;
        uVar10 = 0;
        while( true ) {
          iVar6 = *(int *)((longlong)param_1 + uVar10 * 4 + 0x80);
          uVar7 = uVar10 & 0xffffffff;
          if (iVar5 <= iVar6 || iVar6 <= iVar4) {
            uVar7 = uVar9;
          }
          if (uVar10 + 1 == 0x17) break;
          if (iVar5 <= iVar6 || iVar6 <= iVar4) {
            iVar6 = iVar5;
          }
          iVar5 = *(int *)((longlong)param_1 + uVar10 * 4 + 0x84);
          uVar8 = (uint)(uVar10 + 1);
          if (iVar5 <= iVar4 || iVar6 <= iVar5) {
            uVar8 = (uint)uVar7;
            iVar5 = iVar6;
          }
          uVar9 = (ulonglong)uVar8;
          uVar10 = uVar10 + 2;
        }
        if ((int)(uint)uVar7 < 0) goto LAB_1424d31c8;
        *(int *)((longlong)param_1 + 0xdc) = iVar4 + 1;
        *(int *)((longlong)param_1 + uVar7 * 4 + 0x80) = iVar4 + 1;
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0x17);
      iVar4 = *(int *)((longlong)param_1 + 0xdc);
LAB_1424d31c8:
      iVar4 = iVar4 + 1;
    }
    *(int *)((longlong)param_1 + 0xdc) = iVar4 + 1;
    *(int *)((longlong)param_1 + 0x8c) = iVar4;
    *(undefined1 *)((longlong)param_1 + 0x6b) = 1;
    *(undefined1 *)((longlong)param_1 + 0xb) = 0;
    *(undefined2 *)(param_1 + 1) = 0;
  case 2:
    uVar2 = (**(code **)(*param_1 + 0x80))(param_1,5);
    if (*(char *)((longlong)param_1 + 0xb) != '\0') {
      local_3c = 0;
      (**(code **)(*param_1 + 0xe0))(param_1,&local_3c);
    }
    *(undefined4 *)(param_1 + 4) = uVar2;
    iVar4 = *(int *)((longlong)param_1 + 0xdc);
    if (iVar4 == 10000) {
      *(undefined4 *)((longlong)param_1 + 0xdc) = 1;
      iVar1 = 0;
      do {
        iVar4 = *(int *)((longlong)param_1 + 0xdc);
        uVar9 = 0xffffffff;
        iVar5 = 10000;
        uVar10 = 0;
        while( true ) {
          iVar6 = *(int *)((longlong)param_1 + uVar10 * 4 + 0x80);
          uVar7 = uVar10 & 0xffffffff;
          if (iVar5 <= iVar6 || iVar6 <= iVar4) {
            uVar7 = uVar9;
          }
          if (uVar10 + 1 == 0x17) break;
          if (iVar5 <= iVar6 || iVar6 <= iVar4) {
            iVar6 = iVar5;
          }
          iVar5 = *(int *)((longlong)param_1 + uVar10 * 4 + 0x84);
          uVar8 = (uint)(uVar10 + 1);
          if (iVar5 <= iVar4 || iVar6 <= iVar5) {
            uVar8 = (uint)uVar7;
            iVar5 = iVar6;
          }
          uVar9 = (ulonglong)uVar8;
          uVar10 = uVar10 + 2;
        }
        if ((int)(uint)uVar7 < 0) goto LAB_1424d32e8;
        *(int *)((longlong)param_1 + 0xdc) = iVar4 + 1;
        *(int *)((longlong)param_1 + uVar7 * 4 + 0x80) = iVar4 + 1;
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0x17);
      iVar4 = *(int *)((longlong)param_1 + 0xdc);
LAB_1424d32e8:
      iVar4 = iVar4 + 1;
    }
    *(int *)((longlong)param_1 + 0xdc) = iVar4 + 1;
    *(int *)((longlong)param_1 + 0x94) = iVar4;
    *(undefined1 *)((longlong)param_1 + 0x6d) = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 1) = 0;
switchD_1424d2d51_caseD_5:
  uVar2 = (**(code **)(*param_1 + 0x80))(param_1);
  if (*(char *)((longlong)param_1 + 0xb) != '\0') {
    local_3c = 0;
    (**(code **)(*param_1 + 0xe0))(param_1);
  }
  lVar3 = (longlong)param_2;
  *(undefined4 *)((longlong)param_1 + lVar3 * 4 + 0xc) = uVar2;
  iVar4 = *(int *)((longlong)param_1 + 0xdc);
  if (iVar4 == 10000) {
    *(undefined4 *)((longlong)param_1 + 0xdc) = 1;
    iVar1 = 0;
    do {
      iVar4 = *(int *)((longlong)param_1 + 0xdc);
      uVar9 = 0xffffffff;
      iVar5 = 10000;
      uVar10 = 0;
      while( true ) {
        iVar6 = *(int *)((longlong)param_1 + uVar10 * 4 + 0x80);
        uVar7 = uVar10 & 0xffffffff;
        if (iVar5 <= iVar6 || iVar6 <= iVar4) {
          uVar7 = uVar9;
        }
        if (uVar10 + 1 == 0x17) break;
        if (iVar5 <= iVar6 || iVar6 <= iVar4) {
          iVar6 = iVar5;
        }
        iVar5 = *(int *)((longlong)param_1 + uVar10 * 4 + 0x84);
        uVar8 = (uint)(uVar10 + 1);
        if (iVar5 <= iVar4 || iVar6 <= iVar5) {
          uVar8 = (uint)uVar7;
          iVar5 = iVar6;
        }
        uVar9 = (ulonglong)uVar8;
        uVar10 = uVar10 + 2;
      }
      if ((int)(uint)uVar7 < 0) goto LAB_1424d3519;
      *(int *)((longlong)param_1 + 0xdc) = iVar4 + 1;
      *(int *)((longlong)param_1 + uVar7 * 4 + 0x80) = iVar4 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x17);
    iVar4 = *(int *)((longlong)param_1 + 0xdc);
LAB_1424d3519:
    iVar4 = iVar4 + 1;
  }
  *(int *)((longlong)param_1 + 0xdc) = iVar4 + 1;
  *(int *)((longlong)param_1 + lVar3 * 4 + 0x80) = iVar4;
  *(undefined1 *)((longlong)param_1 + lVar3 + 0x68) = 1;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 1) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 1424d3590 FUN_1424d3590 body=70 status=ok
// SIG undefined FUN_1424d3590(void)

undefined8 * FUN_1424d3590(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::SharedCalendar::vftable;
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  thunk_FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424d35e0 FUN_1424d35e0 body=2 status=ok
// SIG undefined FUN_1424d35e0(void)

void FUN_1424d35e0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1424d35f0 FUN_1424d35f0 body=52 status=ok
// SIG undefined FUN_1424d35f0(void)

undefined8 FUN_1424d35f0(void)

{
  undefined4 uVar1;
  
  if (DAT_14c77eb18 != (undefined8 *)0x0) {
    (**(code **)*DAT_14c77eb18)(DAT_14c77eb18,1);
    DAT_14c77eb18 = (undefined8 *)0x0;
  }
  uVar1 = DAT_14c77eb20;
  LOCK();
  DAT_14c77eb20 = 0;
  UNLOCK();
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



// FUNCTION 1424d3630 FUN_1424d3630 body=173 status=ok
// SIG undefined FUN_1424d3630(void)

longlong * FUN_1424d3630(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 local_70 [16];
  undefined8 *local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1424a7060(local_70,1,L"Calendar",0xffffffff);
  FUN_142532400(param_1,local_70);
  FUN_140859a90(local_70);
  *param_1 = (longlong)icu_64::CalendarService::vftable;
  local_70[0] = 0;
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0x90);
  local_28 = param_1;
  if (puVar1 != (undefined8 *)0x0) {
    local_30 = puVar1;
    FUN_142532f00(puVar1);
    *local_30 = icu_64::DefaultCalendarFactory::vftable;
    puVar1 = local_30;
  }
  (**(code **)(*local_28 + 0x40))(local_28,puVar1,local_70);
  return local_28;
}



// FUNCTION 1424d36e0 Unwind@1424d36e0 body=37 status=ok
// SIG undefined Unwind@1424d36e0(void)

void Unwind_1424d36e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1424d3710 Unwind@1424d3710 body=37 status=ok
// SIG undefined Unwind@1424d3710(void)

void Unwind_1424d3710(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x68));
  return;
}



// FUNCTION 1424d3740 Unwind@1424d3740 body=37 status=ok
// SIG undefined Unwind@1424d3740(void)

void Unwind_1424d3740(undefined8 param_1,longlong param_2)

{
  FUN_142532480(*(undefined8 *)(param_2 + 0x70));
  return;
}



// FUNCTION 1424d3770 FUN_1424d3770 body=38 status=ok
// SIG undefined FUN_1424d3770(void)

undefined8 FUN_1424d3770(undefined8 param_1,int param_2)

{
  FUN_142532480();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424d37a0 FUN_1424d37a0 body=20 status=ok
// SIG undefined FUN_1424d37a0(void)

bool FUN_1424d37a0(void)

{
  int iVar1;
  
  iVar1 = FUN_142536560();
  return iVar1 == 1;
}



// FUNCTION 1424d37c0 FUN_1424d37c0 body=75 status=ok
// SIG undefined FUN_1424d37c0(void)

void FUN_1424d37c0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           __RTDynamicCast(param_2,0,&icu_64::UObject::RTTI_Type_Descriptor,
                           &icu_64::UnicodeString::RTTI_Type_Descriptor,0);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001424d37f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001424d3807. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2);
  return;
}



// FUNCTION 1424d3810 FUN_1424d3810 body=133 status=ok
// SIG undefined FUN_1424d3810(void)

longlong FUN_1424d3810(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined1 local_110 [224];
  longlong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_1424a3c00(local_110);
  (**(code **)(*param_2 + 0x50))(param_2,local_110);
  local_30 = thunk_FUN_1424da030(0x290);
  if (local_30 == 0) {
    *param_4 = 7;
  }
  else {
    FUN_1424a20e0(local_30,local_110,param_4);
  }
  FUN_1414b3f60(local_110);
  return local_30;
}



// FUNCTION 1424d38a0 Unwind@1424d38a0 body=42 status=ok
// SIG undefined Unwind@1424d38a0(void)

void Unwind_1424d38a0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x108));
  return;
}



// FUNCTION 1424d38d0 Unwind@1424d38d0 body=39 status=ok
// SIG undefined Unwind@1424d38d0(void)

void Unwind_1424d38d0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x28);
  return;
}



// FUNCTION 1424d3900 FUN_1424d3900 body=38 status=ok
// SIG undefined FUN_1424d3900(void)

undefined8 FUN_1424d3900(undefined8 param_1,int param_2)

{
  FUN_142532fc0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424d3930 FUN_1424d3930 body=346 status=ok
// SIG undefined FUN_1424d3930(void)

undefined8 *
FUN_1424d3930(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 local_148 [40];
  undefined8 local_120;
  undefined2 local_68 [4];
  short local_60;
  int local_5c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_1424a3c00(local_148);
  (**(code **)(*param_2 + 0x58))(param_2,local_148);
  puVar2 = (undefined8 *)thunk_FUN_1424da030(0x40);
  if (puVar2 == (undefined8 *)0x0) {
    *param_4 = 7;
  }
  else {
    *puVar2 = &PTR_FUN_149e18960;
    *(undefined2 *)(puVar2 + 1) = 2;
    local_68[0] = 0x40;
    FUN_1424a6cf0(puVar2,local_68,0,1);
    FUN_1424a7060(local_68,1,L"calendar=",9);
    iVar1 = local_5c;
    if (-1 < local_60) {
      iVar1 = (int)local_60 >> 5;
    }
    FUN_1424a9690(puVar2,local_68,0,iVar1);
    FUN_140859a90(local_68);
    iVar1 = FUN_1424ccbf0(local_120);
    FUN_1424a7220(local_68,(&PTR_s_gregorian_14993d1d0)[iVar1],0xffffffff,0);
    if (-1 < local_60) {
      local_5c = (int)local_60 >> 5;
    }
    FUN_1424a9690(puVar2,local_68,0,local_5c);
    FUN_140859a90(local_68);
  }
  FUN_1414b3f60(local_148);
  return puVar2;
}



// FUNCTION 1424d3a90 Unwind@1424d3a90 body=42 status=ok
// SIG undefined Unwind@1424d3a90(void)

void Unwind_1424d3a90(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x100);
  return;
}



// FUNCTION 1424d3ac0 Unwind@1424d3ac0 body=42 status=ok
// SIG undefined Unwind@1424d3ac0(void)

void Unwind_1424d3ac0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x100);
  return;
}



// FUNCTION 1424d3af0 Unwind@1424d3af0 body=39 status=ok
// SIG undefined Unwind@1424d3af0(void)

void Unwind_1424d3af0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x20);
  return;
}



// FUNCTION 1424d3b20 FUN_1424d3b20 body=38 status=ok
// SIG undefined FUN_1424d3b20(void)

undefined8 FUN_1424d3b20(undefined8 param_1,int param_2)

{
  FUN_142536dd0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424d3b50 FUN_1424d3b50 body=620 status=ok
// SIG undefined FUN_1424d3b50(void)

undefined8 FUN_1424d3b50(undefined8 param_1,longlong *param_2,undefined8 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_308 [224];
  undefined1 local_228 [224];
  undefined1 local_148 [160];
  undefined1 local_a8 [8];
  ushort local_a0;
  undefined1 local_9e [2];
  uint local_9c;
  undefined1 *local_90;
  undefined **local_68;
  ushort local_60;
  short local_5e;
  int local_5c;
  short *local_50;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_1424a3c00(local_308);
  FUN_1424a3c00(local_228);
  (**(code **)(*param_2 + 0x58))(param_2,local_308);
  (**(code **)(*param_2 + 0x50))(param_2,local_228);
  local_68 = &PTR_FUN_149e18960;
  local_60 = 2;
  (**(code **)(*param_2 + 0x20))(param_2,&local_68);
  FUN_1424a7060(local_a8,1,L"calendar=",0xffffffff);
  uVar7 = local_9c;
  if (-1 < (short)local_a0) {
    uVar7 = (int)(short)local_a0 >> 5;
  }
  iVar2 = local_5c;
  if (-1 < (short)local_60) {
    iVar2 = (int)(short)local_60 >> 5;
  }
  iVar2 = FUN_1424a8940(&local_68,0x3d,0,iVar2);
  if ((short)local_60 < 0) {
    if (local_5c != 0) {
LAB_1424d3c57:
      if ((local_60 & 2) == 0) {
        local_5e = *local_50;
      }
      if (local_5e == 0x40) {
        if ((local_a0 & 1) == 0) {
          if (-1 < (short)local_a0) {
            local_9c = (int)(short)local_a0 >> 5;
          }
          uVar6 = (int)local_9c >> 0x1f & local_9c;
          if ((int)uVar7 < 0) {
            local_9c = 0;
          }
          else {
            local_9c = local_9c - uVar6;
            if ((int)uVar7 <= (int)local_9c) {
              local_9c = uVar7;
            }
          }
          if ((local_a0 & 2) != 0) {
            local_90 = local_9e;
          }
          cVar1 = FUN_1424a7e30(&local_68,1,iVar2,local_90,uVar6,local_9c);
        }
        else {
          cVar1 = (local_60 & 1) == 0;
        }
        if (cVar1 == '\0') {
          if (-1 < (short)local_60) {
            local_5c = (int)(short)local_60 >> 5;
          }
          iVar2 = FUN_1424a83f0(&local_68,iVar2 + 1,local_5c,local_148,0x9d,0);
          lVar5 = (longlong)iVar2;
          goto LAB_1424d3cf5;
        }
      }
    }
  }
  else if ((short)local_60 >> 5 != 0) goto LAB_1424d3c57;
  lVar5 = 0;
LAB_1424d3cf5:
  local_148[lVar5] = 0;
  FUN_140859a90(local_a8);
  if ((*param_4 < 1) && (iVar2 = FUN_1424cdc90(local_148), iVar2 != -1)) {
    uVar3 = FUN_1424cdc90(local_148);
    uVar4 = FUN_1424cc410(uVar3,local_228,param_4);
  }
  else {
    uVar4 = 0;
  }
  FUN_140859a90(&local_68);
  FUN_1414b3f60(local_228);
  FUN_1414b3f60(local_308);
  return uVar4;
}



// FUNCTION 1424d3dc0 Unwind@1424d3dc0 body=42 status=ok
// SIG undefined Unwind@1424d3dc0(void)

void Unwind_1424d3dc0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x290);
  return;
}



// FUNCTION 1424d3df0 Unwind@1424d3df0 body=42 status=ok
// SIG undefined Unwind@1424d3df0(void)

void Unwind_1424d3df0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x2d0);
  return;
}



// FUNCTION 1424d3e20 Unwind@1424d3e20 body=42 status=ok
// SIG undefined Unwind@1424d3e20(void)

void Unwind_1424d3e20(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x110);
  return;
}



// FUNCTION 1424d3e50 Unwind@1424d3e50 body=39 status=ok
// SIG undefined Unwind@1424d3e50(void)

void Unwind_1424d3e50(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x30);
  return;
}



// FUNCTION 1424d3e80 FUN_1424d3e80 body=310 status=ok
// SIG undefined FUN_1424d3e80(void)

void FUN_1424d3e80(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 local_d0 [64];
  undefined1 local_90 [8];
  short local_88;
  int local_84;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*param_3 < 1) {
    for (uVar2 = 0; uVar2 != 0x12; uVar2 = uVar2 + 1) {
      FUN_1424a6c10(local_d0,0x40);
      FUN_1424a7060(local_90,1,L"calendar=",0xffffffff);
      iVar1 = local_84;
      if (-1 < local_88) {
        iVar1 = (int)local_88 >> 5;
      }
      FUN_1424a9690(local_d0,local_90,0,iVar1);
      FUN_140859a90(local_90);
      FUN_1424a7220(local_90,(&PTR_s_gregorian_14993d1d0)[uVar2],0xffffffff,0);
      iVar1 = local_84;
      if (-1 < local_88) {
        iVar1 = (int)local_88 >> 5;
      }
      FUN_1424a9690(local_d0,local_90,0,iVar1);
      FUN_140859a90(local_90);
      local_50 = thunk_FUN_1424da030(0x40);
      if (local_50 != 0) {
        FUN_1424a6be0(local_50,local_d0);
      }
      FUN_142502aa0(*param_2,local_50,param_1,param_3);
      FUN_140859a90(local_d0);
    }
  }
  return;
}



// FUNCTION 1424d3fe0 Unwind@1424d3fe0 body=55 status=ok
// SIG undefined Unwind@1424d3fe0(void)

void Unwind_1424d3fe0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x68);
  return;
}



// FUNCTION 1424d4020 Unwind@1424d4020 body=55 status=ok
// SIG undefined Unwind@1424d4020(void)

void Unwind_1424d4020(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x68);
  return;
}



// FUNCTION 1424d4060 Unwind@1424d4060 body=55 status=ok
// SIG undefined Unwind@1424d4060(void)

void Unwind_1424d4060(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1424d40a0 Unwind@1424d40a0 body=55 status=ok
// SIG undefined Unwind@1424d40a0(void)

void Unwind_1424d40a0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xa8));
  return;
}



// FUNCTION 1424d40e0 FUN_1424d40e0 body=91 status=ok
// SIG undefined FUN_1424d40e0(void)

void FUN_1424d40e0(longlong *param_1,undefined8 *param_2,int *param_3)

{
  undefined8 *puVar1;
  
  if (*param_3 < 1) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *param_1 = (longlong)param_2;
    if (param_2 == (undefined8 *)0x0) {
      *param_3 = 7;
    }
  }
  else if (param_2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001424d410a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_2)(param_2,1);
    return;
  }
  return;
}



// FUNCTION 1424d4140 FUN_1424d4140 body=167 status=ok
// SIG undefined FUN_1424d4140(void)

void FUN_1424d4140(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  int *param_5)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  int *local_38;
  longlong local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < *param_5) goto LAB_1424d41da;
  local_24 = 0;
  local_30 = 0;
  local_38 = &local_24;
  FUN_14253f870(param_1,param_2,&local_30,param_3);
  lVar1 = local_30;
  if ((local_24 < 1) && (*param_4 != local_30)) {
    if (*param_4 != 0) {
      FUN_142537ca0();
    }
    *param_4 = lVar1;
    if (lVar1 != 0) {
      FUN_142537c90(lVar1);
LAB_1424d41c3:
      FUN_142537ca0(lVar1);
    }
  }
  else if (local_30 != 0) goto LAB_1424d41c3;
  if ((*param_5 == 0) || (0 < local_24)) {
    *param_5 = local_24;
  }
LAB_1424d41da:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 1424d41f0 FUN_1424d41f0 body=60 status=ok
// SIG undefined FUN_1424d41f0(void)

undefined8 * FUN_1424d41f0(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::LocaleCacheKey<icu_64::SharedCalendar>::vftable;
  FUN_1414b3f60(param_1 + 2);
  thunk_FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424d4230 FUN_1424d4230 body=76 status=ok
// SIG undefined FUN_1424d4230(void)

int FUN_1424d4230(longlong param_1)

{
  int iVar1;
  int iVar2;
  char *_Str;
  size_t sVar3;
  
  _Str = (char *)__std_type_info_name(0x14c6d8fc8,&DAT_14c793310);
  sVar3 = strlen(_Str);
  iVar1 = FUN_142504d90(_Str,sVar3 & 0xffffffff);
  iVar2 = FUN_1424a4050(param_1 + 0x10);
  return iVar2 + iVar1 * 0x25;
}



// FUNCTION 1424d4280 FUN_1424d4280 body=102 status=ok
// SIG undefined FUN_1424d4280(void)

undefined8 * FUN_1424d4280(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = icu_64::CacheKeyBase::vftable;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined1 *)((longlong)puVar1 + 0xc) = 0;
    *puVar1 = icu_64::LocaleCacheKey<icu_64::SharedCalendar>::vftable;
    FUN_1424a3ce0(puVar1 + 2,param_1 + 0x10);
  }
  return puVar1;
}



// FUNCTION 1424d42f0 Unwind@1424d42f0 body=43 status=ok
// SIG undefined Unwind@1424d42f0(void)

void Unwind_1424d42f0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  thunk_FUN_1424b70d0(uVar1);
  FUN_1401773f0(uVar1);
  return;
}



// FUNCTION 1424d4320 FUN_1424d4320 body=94 status=ok
// SIG undefined FUN_1424d4320(void)

undefined8 FUN_1424d4320(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1 == param_2) {
    uVar4 = 1;
  }
  else {
    lVar2 = __RTtypeid();
    lVar3 = __RTtypeid(param_2);
    iVar1 = __std_type_info_compare(lVar2 + 8,lVar3 + 8);
    if (iVar1 == 0) {
      uVar4 = FUN_1424a3f70(param_1 + 0x10,param_2 + 0x10);
      return uVar4;
    }
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 1424d4380 FUN_1424d4380 body=43 status=ok
// SIG undefined FUN_1424d4380(void)

char * FUN_1424d4380(longlong param_1,char *param_2,int param_3)

{
  strncpy(param_2,*(char **)(param_1 + 0x38),(longlong)param_3);
  param_2[(longlong)param_3 - 1] = '\0';
  return param_2;
}



// FUNCTION 1424d43b0 FUN_1424d43b0 body=134 status=ok
// SIG undefined FUN_1424d43b0(void)

uint FUN_1424d43b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  undefined1 local_48 [24];
  uint local_30;
  char local_2c;
  
  uVar1 = 0;
  if (*param_4 < 1) {
    FUN_14257c370(local_48);
    FUN_1424d4440(param_1,local_48,param_4);
    if (*param_4 < 1) {
      uVar1 = local_30;
      if (local_2c == '\0') {
        FUN_142504d00(param_2,param_3,local_30,param_4);
      }
      else {
        *param_4 = 0xf;
      }
    }
    else {
      uVar1 = local_30 | -(uint)(local_2c == '\0');
    }
    FUN_14257c350(local_48);
  }
  return uVar1;
}



// FUNCTION 1424d4440 FUN_1424d4440 body=409 status=ok
// SIG undefined FUN_1424d4440(void)

void FUN_1424d4440(undefined8 param_1,longlong *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  ulonglong uVar4;
  char *pcVar5;
  char *_Str;
  int iVar6;
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  undefined4 *local_120;
  char *local_118;
  int *local_110;
  longlong *local_108;
  int *local_100;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e2;
  undefined1 local_de [6];
  char local_d8 [164];
  undefined1 local_34 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1424ea1f0(param_1,local_d8,0x9d,param_3);
  iVar2 = *param_3;
  if ((iVar2 != 0xf) && (iVar2 != -0x7c)) {
    if (0 < iVar2) goto LAB_1424d448f;
    local_e8 = 0xc;
    local_ec = 6;
    local_f0 = 4;
    local_118 = (char *)&local_f0;
    local_128 = &local_ec;
    local_120 = &local_e2;
    local_110 = param_3;
    iVar2 = FUN_1424d5500(local_d8,local_34,&local_e8,local_de);
    if (*param_3 < 1) {
      for (_Str = local_d8 + iVar2; (*_Str == '_' || (*_Str == '-')); _Str = _Str + 1) {
      }
      sVar3 = strlen(_Str);
      if (0 < (int)sVar3) {
        uVar4 = sVar3 & 0xffffffff;
        pcVar5 = _Str;
        iVar2 = 0;
        do {
          cVar1 = *pcVar5;
          iVar6 = 0;
          if ((cVar1 != '-') && (cVar1 != '_')) {
            if (cVar1 == '@') break;
            if (8 < iVar2) goto LAB_1424d4483;
            iVar6 = iVar2 + 1;
          }
          pcVar5 = pcVar5 + 1;
          uVar4 = uVar4 - 1;
          iVar2 = iVar6;
        } while (uVar4 != 0);
      }
      local_110 = (int *)CONCAT44(local_110._4_4_,(int)sVar3);
      local_120 = (undefined4 *)CONCAT44(local_120._4_4_,local_f0);
      local_128 = &local_e2;
      local_118 = _Str;
      local_108 = param_2;
      local_100 = param_3;
      cVar1 = FUN_1424d5730(local_34,local_e8,local_de,local_ec);
      if (cVar1 == '\0') {
        sVar3 = strlen(local_d8);
        (**(code **)(*param_2 + 8))(param_2,local_d8,sVar3 & 0xffffffff);
      }
      goto LAB_1424d448f;
    }
    if (*param_3 != 0xf) goto LAB_1424d448f;
  }
LAB_1424d4483:
  *param_3 = 1;
LAB_1424d448f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_148);
}



// FUNCTION 1424d4600 FUN_1424d4600 body=2230 status=ok
// SIG undefined FUN_1424d4600(void)

void FUN_1424d4600(undefined8 param_1,longlong *param_2,int *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  size_t sVar6;
  char *pcVar7;
  int iVar8;
  char *_Str;
  ulonglong _Size;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  int *piVar13;
  char local_258 [160];
  undefined1 local_1b8 [168];
  longlong local_110;
  undefined4 local_108;
  undefined2 local_104;
  undefined4 local_d8;
  longlong local_d0 [2];
  undefined1 local_ba [12];
  undefined1 local_ae [6];
  longlong local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  int local_70;
  undefined1 local_64 [4];
  size_t local_60;
  uint local_54;
  uint local_50;
  uint local_4c [3];
  
  local_4c[1] = 0xfffffffe;
  local_4c[2] = 0xffffffff;
  FUN_1424ea1f0(param_1,local_258,0x9d,param_3);
  iVar4 = *param_3;
  if ((iVar4 == 0xf) || (iVar4 == -0x7c)) {
    *param_3 = 1;
    return;
  }
  if (0 < iVar4) {
    return;
  }
  local_110 = (longlong)&local_104 + 1;
  local_108 = 0x28;
  local_104 = 0;
  local_d8 = 0;
  local_4c[0] = 0xc;
  local_54 = 6;
  local_50 = 4;
  puVar11 = local_64;
  piVar13 = param_3;
  iVar4 = FUN_1424d5500(local_258,local_ba,local_4c,local_ae,&local_54,local_64,&local_50,param_3);
  if (*param_3 < 1) {
    for (_Str = local_258 + iVar4; (*_Str == '_' || (*_Str == '-')); _Str = _Str + 1) {
    }
    local_60 = strlen(_Str);
    if (0 < (int)local_60) {
      uVar5 = local_60 & 0xffffffff;
      pcVar7 = _Str;
      iVar4 = 0;
      do {
        cVar1 = *pcVar7;
        iVar8 = 0;
        if ((cVar1 != '-') && (cVar1 != '_')) {
          if (cVar1 == '@') break;
          if (8 < iVar4) goto LAB_1424d4b7a;
          iVar8 = iVar4 + 1;
        }
        pcVar7 = pcVar7 + 1;
        uVar5 = uVar5 - 1;
        iVar4 = iVar8;
      } while (uVar5 != 0);
    }
    local_a8 = (longlong)&local_9c + 1;
    local_a0 = 0x28;
    local_9c = 0;
    local_70 = 0;
    FUN_142505290(local_d0,&local_a8);
    uVar3 = local_50;
    uVar2 = local_54;
    if (*param_3 < 1) {
      uVar5 = (ulonglong)local_50;
      if (((3 < (int)local_50) || (uVar9 = (ulonglong)local_54, 5 < (int)local_54)) ||
         (uVar10 = (ulonglong)local_4c[0], 0xb < (int)local_4c[0])) goto LAB_1424d4816;
      if ((int)local_4c[0] < 1) {
        uVar10 = 0;
      }
      else {
        memcpy(local_1b8,local_ba,uVar10);
      }
      if (0 < (int)uVar2) {
        local_1b8[uVar10] = 0x5f;
        memcpy(local_1b8 + uVar10 + 1,local_ae,uVar9);
        uVar10 = (ulonglong)((int)uVar10 + uVar2 + 1);
      }
      if (0 < (int)uVar3) {
        local_1b8[uVar10] = 0x5f;
        memcpy(local_1b8 + uVar10 + 1,local_64,uVar5);
        uVar10 = (ulonglong)((int)uVar10 + uVar3 + 1);
      }
      (**(code **)(local_d0[0] + 8))(local_d0,local_1b8,uVar10);
    }
    else if (*param_3 == 0xf) {
LAB_1424d4816:
      *param_3 = 1;
    }
    thunk_FUN_14257c350(local_d0);
    FUN_142505290(local_1b8,&local_110);
    FUN_1424d4440(local_a8,local_1b8,param_3);
    thunk_FUN_14257c350(local_1b8);
    if ((char)local_9c != '\0') {
      FUN_1424da110(local_a8);
    }
    if (0 < *param_3) goto LAB_1424d4e06;
    local_a8 = (longlong)&local_9c + 1;
    local_a0 = 0x28;
    local_9c = 0;
    local_70 = 0;
    FUN_142505290(local_1b8,&local_a8);
    uVar9 = (ulonglong)piVar13 & 0xffffffff00000000;
    uVar5 = (ulonglong)puVar11 & 0xffffffff00000000;
    FUN_1424d5730(local_ba,local_4c[0],0,0,0,uVar5,0,uVar9,local_1b8,param_3);
    uVar12 = (undefined4)(uVar5 >> 0x20);
    thunk_FUN_14257c350(local_1b8);
    iVar4 = 2;
    if (((*param_3 < 1) && (iVar4 = 0, local_70 != 0)) &&
       (iVar8 = FUN_142503ad0(local_110,local_a8), iVar8 == 0)) {
      if (*param_3 < 1) {
        uVar5 = (ulonglong)local_4c[0];
        if (0xb < (int)local_4c[0]) goto LAB_1424d4add;
        if ((int)local_4c[0] < 1) {
          uVar5 = 0;
        }
        else {
          memcpy(local_1b8,local_ba,uVar5);
        }
        (**(code **)(*param_2 + 8))(param_2,local_1b8,uVar5);
        if (0 < (int)local_60) {
          if (*_Str != '@') {
            (**(code **)(*param_2 + 8))(param_2,L"_Common",1);
            (**(code **)(*param_2 + 8))(param_2,L"_Common",1);
          }
          (**(code **)(*param_2 + 8))(param_2,_Str,local_60);
        }
      }
      else {
        iVar4 = 1;
        if (*param_3 != 0xf) goto LAB_1424d497b;
LAB_1424d4add:
        *param_3 = 1;
      }
      iVar4 = 1;
    }
LAB_1424d497b:
    if ((char)local_9c != '\0') {
      FUN_1424da110(local_a8);
    }
    if (iVar4 != 2) {
      if (iVar4 != 0) goto LAB_1424d4e06;
      if (0 < (int)local_50) {
        local_a8 = (longlong)&local_9c + 1;
        local_a0 = 0x28;
        local_9c = 0;
        local_70 = 0;
        FUN_142505290(local_1b8,&local_a8);
        uVar5 = CONCAT44(uVar12,local_50);
        uVar9 = uVar9 & 0xffffffff00000000;
        FUN_1424d5730(local_ba,local_4c[0],0,0,local_64,uVar5,0,uVar9,local_1b8,param_3);
        thunk_FUN_14257c350(local_1b8);
        iVar4 = 2;
        if (*param_3 < 1) {
          iVar8 = FUN_142503ad0(local_110,local_a8,local_70);
          uVar2 = local_50;
          iVar4 = 0;
          if (iVar8 == 0) {
            if (*param_3 < 1) {
              uVar10 = (ulonglong)local_50;
              if ((3 < (int)local_50) || (_Size = (ulonglong)local_4c[0], 0xb < (int)local_4c[0]))
              goto LAB_1424d4b4a;
              if ((int)local_4c[0] < 1) {
                _Size = 0;
              }
              else {
                memcpy(local_1b8,local_ba,_Size);
              }
              if (0 < (int)uVar2) {
                local_1b8[_Size] = 0x5f;
                memcpy(local_1b8 + _Size + 1,local_64,uVar10);
                _Size = (ulonglong)((int)_Size + uVar2 + 1);
              }
              (**(code **)(*param_2 + 8))(param_2,local_1b8,_Size);
              if (0 < (int)local_60) {
                if ((*_Str != '@') &&
                   ((**(code **)(*param_2 + 8))(param_2,L"_Common",1), (int)uVar2 < 1)) {
                  (**(code **)(*param_2 + 8))(param_2,L"_Common",1);
                }
                (**(code **)(*param_2 + 8))(param_2,_Str,local_60);
              }
            }
            else {
              iVar4 = 1;
              if (*param_3 != 0xf) goto LAB_1424d4b56;
LAB_1424d4b4a:
              *param_3 = 1;
            }
            iVar4 = 1;
          }
        }
LAB_1424d4b56:
        if ((char)local_9c != '\0') {
          FUN_1424da110(local_a8);
        }
        if (iVar4 != 0) {
LAB_1424d4b70:
          if (iVar4 != 2) goto LAB_1424d4e06;
          goto LAB_1424d4b7a;
        }
        if ((0 < (int)local_54) && (0 < (int)local_50)) {
          local_a8 = (longlong)&local_9c + 1;
          local_a0 = 0x28;
          local_9c = 0;
          local_70 = 0;
          FUN_142505290(local_1b8,&local_a8);
          FUN_1424d5730(local_ba,local_4c[0],local_ae,local_54,0,uVar5 & 0xffffffff00000000,0,
                        uVar9 & 0xffffffff00000000,local_1b8,param_3);
          thunk_FUN_14257c350(local_1b8);
          iVar4 = 2;
          if (*param_3 < 1) {
            iVar8 = FUN_142503ad0(local_110,local_a8,local_70);
            uVar2 = local_54;
            iVar4 = 0;
            if (iVar8 == 0) {
              if (*param_3 < 1) {
                uVar5 = (ulonglong)local_54;
                if ((5 < (int)local_54) || (uVar9 = (ulonglong)local_4c[0], 0xb < (int)local_4c[0]))
                goto LAB_1424d4dc0;
                if ((int)local_4c[0] < 1) {
                  uVar9 = 0;
                }
                else {
                  memcpy(local_1b8,local_ba,uVar9);
                }
                if (0 < (int)uVar2) {
                  local_1b8[uVar9] = 0x5f;
                  memcpy(local_1b8 + uVar9 + 1,local_ae,uVar5);
                  uVar9 = (ulonglong)((int)uVar9 + uVar2 + 1);
                }
                (**(code **)(*param_2 + 8))(param_2,local_1b8,uVar9);
                if (0 < (int)local_60) {
                  if (*_Str != '@') {
                    (**(code **)(*param_2 + 8))(param_2,L"_Common",1);
                    (**(code **)(*param_2 + 8))(param_2,L"_Common",1);
                  }
                  (**(code **)(*param_2 + 8))(param_2,_Str,local_60);
                }
              }
              else {
                iVar4 = 1;
                if (*param_3 != 0xf) goto LAB_1424d4dcc;
LAB_1424d4dc0:
                *param_3 = 1;
              }
              iVar4 = 1;
            }
          }
LAB_1424d4dcc:
          if ((char)local_9c != '\0') {
            FUN_1424da110(local_a8);
          }
          if (iVar4 != 0) goto LAB_1424d4b70;
        }
      }
      sVar6 = strlen(local_258);
      (**(code **)(*param_2 + 8))(param_2,local_258,sVar6 & 0xffffffff);
      goto LAB_1424d4e06;
    }
LAB_1424d4b7a:
    if (0 < *param_3) goto LAB_1424d4e06;
  }
  else if (*param_3 != 0xf) goto LAB_1424d4e06;
  *param_3 = 1;
LAB_1424d4e06:
  if ((char)local_104 != '\0') {
    FUN_1424da110(local_110);
  }
  return;
}



// FUNCTION 1424d4ed0 Unwind@1424d4ed0 body=58 status=ok
// SIG undefined Unwind@1424d4ed0(void)

void Unwind_1424d4ed0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_14257c350(param_2 + 0x1d8);
  return;
}



// FUNCTION 1424d4f10 Unwind@1424d4f10 body=67 status=ok
// SIG undefined Unwind@1424d4f10(void)

void Unwind_1424d4f10(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20c) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x200));
  }
  return;
}



// FUNCTION 1424d4f60 Unwind@1424d4f60 body=55 status=ok
// SIG undefined Unwind@1424d4f60(void)

void Unwind_1424d4f60(undefined8 param_1,longlong param_2)

{
  thunk_FUN_14257c350(param_2 + 0xf0);
  return;
}



// FUNCTION 1424d4fa0 Unwind@1424d4fa0 body=67 status=ok
// SIG undefined Unwind@1424d4fa0(void)

void Unwind_1424d4fa0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20c) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x200));
  }
  return;
}



// FUNCTION 1424d4ff0 Unwind@1424d4ff0 body=55 status=ok
// SIG undefined Unwind@1424d4ff0(void)

void Unwind_1424d4ff0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_14257c350(param_2 + 0xf0);
  return;
}



// FUNCTION 1424d5030 Unwind@1424d5030 body=67 status=ok
// SIG undefined Unwind@1424d5030(void)

void Unwind_1424d5030(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20c) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x200));
  }
  return;
}



// FUNCTION 1424d5080 Unwind@1424d5080 body=67 status=ok
// SIG undefined Unwind@1424d5080(void)

void Unwind_1424d5080(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20c) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x200));
  }
  return;
}



// FUNCTION 1424d50d0 Unwind@1424d50d0 body=67 status=ok
// SIG undefined Unwind@1424d50d0(void)

void Unwind_1424d50d0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a4) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x198));
  }
  return;
}



// FUNCTION 1424d5120 Unwind@1424d5120 body=55 status=ok
// SIG undefined Unwind@1424d5120(void)

void Unwind_1424d5120(undefined8 param_1,longlong param_2)

{
  thunk_FUN_14257c350(param_2 + 0xf0);
  return;
}



// FUNCTION 1424d5160 FUN_1424d5160 body=379 status=ok
// SIG undefined FUN_1424d5160(void)

undefined8 FUN_1424d5160(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 local_88 [16];
  longlong local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined4 local_40;
  char local_34 [8];
  undefined1 local_2c [8];
  int local_24 [3];
  
  local_24[1] = -2;
  local_24[2] = -1;
  local_24[0] = 0;
  iVar2 = FUN_1424e8c40(param_1,local_2c,8,local_24);
  if (((local_24[0] < 1) && (local_24[0] != -0x7c)) && (iVar2 != 0)) {
LAB_1424d51a7:
    uVar3 = FUN_1425634b0(0x100a,local_2c);
    uVar5 = FUN_14257c480(uVar3);
  }
  else {
    local_24[0] = 0;
    uVar4 = FUN_1424e8be0(param_1,local_34,8,local_24);
    if (0 < local_24[0]) {
      return 0;
    }
    if (local_24[0] == -0x7c) {
      return 0;
    }
    if (((int)uVar4 < 1) ||
       (pcVar6 = strstr("root-en-es-pt-zh-ja-ko-de-fr-it-ar+he+fa+ru-nl-pl-th-tr-",local_34),
       pcVar6 == (char *)0x0)) {
LAB_1424d522a:
      local_24[0] = 0;
      local_78 = (longlong)&local_6c + 1;
      local_70 = 0x28;
      local_6c = 0;
      local_40 = 0;
      FUN_142505290(local_88,&local_78);
      FUN_1424d4440(param_1,local_88,local_24);
      thunk_FUN_14257c350(local_88);
      bVar1 = true;
      if ((local_24[0] < 1) && (local_24[0] != -0x7c)) {
        iVar2 = FUN_1424e8c40(local_78,local_2c,8,local_24);
        bVar1 = iVar2 == 0 || (local_24[0] == -0x7c || 0 < local_24[0]);
      }
      if ((char)local_6c != '\0') {
        FUN_1424da110(local_78);
      }
      if (!bVar1) goto LAB_1424d51a7;
    }
    else if (pcVar6[uVar4] != '-') {
      if (pcVar6[uVar4] == '+') {
        return 1;
      }
      goto LAB_1424d522a;
    }
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 1424d52e0 Unwind@1424d52e0 body=43 status=ok
// SIG undefined Unwind@1424d52e0(void)

void Unwind_1424d52e0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x3c) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x30));
  }
  return;
}



// FUNCTION 1424d5310 FUN_1424d5310 body=430 status=ok
// SIG undefined FUN_1424d5310(void)

undefined8 FUN_1424d5310(undefined8 param_1,char param_2,char *param_3,int param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 local_a0 [16];
  longlong local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined4 local_58;
  char local_4c [2];
  int local_4a;
  char local_46;
  int local_44 [3];
  
  local_44[1] = -2;
  local_44[2] = -1;
  if (0 < *param_5) {
    return 0;
  }
  local_44[0] = 0;
  iVar2 = FUN_1424e74e0(param_1,&DAT_14993dbb9,local_4c,8,local_44);
  if ((local_44[0] < 1) && (iVar2 == 6)) {
    if (local_4c[0] != '\0') {
      pcVar5 = local_4c;
      do {
        pcVar5 = pcVar5 + 1;
        cVar1 = FUN_1425038f0();
        pcVar5[-1] = cVar1;
      } while (*pcVar5 != '\0');
    }
    if (local_46 == '\0' && local_4a == 0x5a5a5a5a) {
      iVar2 = 2;
      goto LAB_1424d547f;
    }
  }
  iVar3 = FUN_1424e8d90(param_1,local_4c,8,param_5);
  iVar2 = 0;
  if (((*param_5 < 1) && (iVar2 = iVar3, param_2 != '\0')) && (iVar3 == 0)) {
    local_44[0] = 0;
    local_90 = (longlong)&local_84 + 1;
    local_88 = 0x28;
    local_84 = 0;
    local_58 = 0;
    FUN_142505290(local_a0,&local_90);
    FUN_1424d4440(param_1,local_a0,local_44);
    thunk_FUN_14257c350(local_a0);
    iVar2 = 0;
    if (local_44[0] < 1) {
      iVar3 = FUN_1424e8d90(local_90,local_4c,8,param_5);
      iVar2 = 0;
      if (*param_5 < 1) {
        iVar2 = iVar3;
      }
    }
    if ((char)local_84 != '\0') {
      FUN_1424da110(local_90);
    }
  }
LAB_1424d547f:
  local_4c[iVar2] = '\0';
  strncpy(param_3,local_4c,(longlong)param_4);
  uVar4 = FUN_142504d00(param_3,param_4,iVar2,param_5);
  return uVar4;
}



// FUNCTION 1424d54c0 Unwind@1424d54c0 body=57 status=ok
// SIG undefined Unwind@1424d54c0(void)

void Unwind_1424d54c0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x44) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}



// FUNCTION 1424d5500 FUN_1424d5500 body=527 status=ok
// SIG undefined FUN_1424d5500(void)

void FUN_1424d5500(byte *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  int *param_5,longlong param_6,int *param_7,int *param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_78 [40];
  byte *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  auVar5._0_4_ = -(uint)((int)param_4 == 0);
  auVar5._4_4_ = -(uint)((int)((ulonglong)param_4 >> 0x20) == 0);
  auVar5._8_4_ = -(uint)((int)param_5 == 0);
  auVar5._12_4_ = -(uint)((int)((ulonglong)param_5 >> 0x20) == 0);
  auVar6._4_4_ = auVar5._0_4_;
  auVar6._0_4_ = auVar5._4_4_;
  auVar6._8_4_ = auVar5._12_4_;
  auVar6._12_4_ = auVar5._8_4_;
  auVar4._0_4_ = -(uint)((int)param_2 == 0);
  auVar4._4_4_ = -(uint)((int)((ulonglong)param_2 >> 0x20) == 0);
  auVar4._8_4_ = -(uint)((int)param_3 == 0);
  auVar4._12_4_ = -(uint)((int)((ulonglong)param_3 >> 0x20) == 0);
  auVar3._4_4_ = auVar4._0_4_;
  auVar3._0_4_ = auVar4._4_4_;
  auVar3._8_4_ = auVar4._12_4_;
  auVar3._12_4_ = auVar4._8_4_;
  auVar3 = packssdw(auVar3 & auVar4,auVar6 & auVar5);
  iVar2 = movmskps((int)param_1,auVar3);
  local_50 = param_1;
  if ((((iVar2 == 0) && (param_6 != 0)) && (param_7 != (int *)0x0)) && (*param_8 < 1)) {
    uVar1 = FUN_1424e8190(param_1,param_2,*param_3,&local_50);
    FUN_142504d00(param_2,*param_3,uVar1,param_8);
    if (*param_8 < 1) {
      *param_3 = uVar1;
      if ((*local_50 == 0x5f) || (*local_50 == 0x2d)) {
        local_50 = local_50 + 1;
      }
      iVar2 = FUN_1424e8410(local_50,param_4,*param_5,&local_50);
      FUN_142504d00(param_4,*param_5,iVar2,param_8);
      if (*param_8 < 1) {
        *param_5 = iVar2;
        if (0 < iVar2) {
          iVar2 = FUN_142503ad0(param_4,&DAT_14993dbbc,iVar2);
          if (iVar2 == 0) {
            *param_5 = 0;
          }
          if ((*local_50 == 0x5f) || (*local_50 == 0x2d)) {
            local_50 = local_50 + 1;
          }
        }
        iVar2 = FUN_1424e84e0(local_50,param_6,*param_7,&local_50);
        FUN_142504d00(param_6,*param_7,iVar2,param_8);
        if (*param_8 < 1) {
          *param_7 = iVar2;
          if (iVar2 < 1) {
            if ((*local_50 & 0xbf) != 0) {
              local_50 = local_50 + -1;
            }
          }
          else {
            iVar2 = FUN_142503ad0(param_6,&DAT_14993dbc1,iVar2);
            if (iVar2 == 0) {
              *param_7 = 0;
            }
          }
        }
      }
    }
  }
  else if (*param_8 < 1) {
    *param_8 = 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 1424d5730 FUN_1424d5730 body=1669 status=ok
// SIG undefined FUN_1424d5730(void)

undefined8
FUN_1424d5730(void *param_1,uint param_2,void *param_3,uint param_4,void *param_5,uint param_6,
             undefined8 param_7,undefined4 param_8,undefined8 param_9,int *param_10)

{
  uint uVar1;
  longlong lVar2;
  ulonglong _Size;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong _Size_00;
  longlong local_1d8 [20];
  undefined1 local_138 [160];
  longlong local_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined4 local_60;
  longlong local_58 [2];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_10) {
    return 0;
  }
  _Size = (ulonglong)param_4;
  _Size_00 = (ulonglong)param_2;
  if ((0 < (int)param_4) && (0 < (int)param_6)) {
    local_98 = (longlong)&local_8c + 1;
    local_90 = 0x28;
    local_8c = 0;
    local_60 = 0;
    FUN_142505290(local_1d8,&local_98);
    if (*param_10 < 1) {
      if (((0xb < (int)param_2) || (5 < param_4)) || (3 < param_6)) goto LAB_1424d5824;
      if ((int)param_2 < 1) {
        uVar1 = 0;
      }
      else {
        memcpy(local_138,param_1,_Size_00);
        uVar1 = param_2;
      }
      uVar4 = (ulonglong)uVar1;
      local_138[uVar4] = 0x5f;
      memcpy(local_138 + uVar4 + 1,param_3,_Size);
      uVar5 = uVar4 + _Size + 1;
      local_138[uVar4 + _Size + 1] = 0x5f;
      memcpy(local_138 + (uVar5 & 0xffffffff) + 1,param_5,(ulonglong)param_6);
      (**(code **)(local_1d8[0] + 8))(local_1d8,local_138,(int)uVar5 + param_6 + 1);
    }
    else if (*param_10 == 0xf) {
LAB_1424d5824:
      *param_10 = 1;
    }
    thunk_FUN_14257c350(local_1d8);
    iVar3 = 2;
    if ((*param_10 < 1) && (lVar2 = FUN_1424d6000(local_98,local_1d8,param_10), *param_10 < 1)) {
      if (lVar2 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = 1;
        FUN_1424d6230(0,0,0,0,0,0,param_7,param_8,lVar2,param_9,param_10);
      }
    }
    if ((char)local_8c != '\0') {
      FUN_1424da110(local_98);
    }
    if (iVar3 == 0) {
LAB_1424d594d:
      local_98 = (longlong)&local_8c + 1;
      local_90 = 0x28;
      local_8c = 0;
      local_60 = 0;
      FUN_142505290(local_58,&local_98);
      if (*param_10 < 1) {
        if ((0xb < (int)param_2) || (5 < param_4)) goto LAB_1424d59c2;
        if ((int)param_2 < 1) {
          uVar4 = 0;
        }
        else {
          memcpy(local_138,param_1,_Size_00);
          uVar4 = _Size_00;
        }
        local_138[uVar4] = 0x5f;
        memcpy(local_138 + uVar4 + 1,param_3,_Size);
        (**(code **)(local_58[0] + 8))(local_58,local_138,(int)uVar4 + param_4 + 1);
      }
      else if (*param_10 == 0xf) {
LAB_1424d59c2:
        *param_10 = 1;
      }
      thunk_FUN_14257c350(local_58);
      iVar3 = 2;
      if ((*param_10 < 1) && (lVar2 = FUN_1424d6000(local_98,local_1d8,param_10), *param_10 < 1)) {
        if (lVar2 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = 1;
          FUN_1424d6230(0,0,0,0,param_5,param_6,param_7,param_8,lVar2,param_9,param_10);
        }
      }
      if ((char)local_8c != '\0') {
        FUN_1424da110(local_98);
      }
      if (iVar3 == 0) goto LAB_1424d5ad3;
    }
joined_r0x0001424d5c62:
    if (iVar3 != 2) {
      return 1;
    }
    goto LAB_1424d5abf;
  }
  if (0 < (int)param_4) goto LAB_1424d594d;
LAB_1424d5ad3:
  if (0 < (int)param_6) {
    local_90 = 0x28;
    local_8c = 0;
    local_60 = 0;
    local_98 = (longlong)&local_8c + 1;
    FUN_142505290(local_58,&local_98);
    if (*param_10 < 1) {
      if ((0xb < (int)param_2) || (3 < param_6)) goto LAB_1424d5b5c;
      if ((int)param_2 < 1) {
        uVar4 = 0;
      }
      else {
        memcpy(local_138,param_1,_Size_00);
        uVar4 = _Size_00;
      }
      local_138[uVar4] = 0x5f;
      memcpy(local_138 + uVar4 + 1,param_5,(ulonglong)param_6);
      (**(code **)(local_58[0] + 8))(local_58,local_138,(int)uVar4 + param_6 + 1);
    }
    else if (*param_10 == 0xf) {
LAB_1424d5b5c:
      *param_10 = 1;
    }
    thunk_FUN_14257c350(local_58);
    iVar3 = 2;
    if ((*param_10 < 1) && (lVar2 = FUN_1424d6000(local_98,local_1d8,param_10), *param_10 < 1)) {
      if (lVar2 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = 1;
        FUN_1424d6230(0,0,param_3,_Size,0,0,param_7,param_8,lVar2,param_9,param_10);
      }
    }
    if ((char)local_8c != '\0') {
      FUN_1424da110(local_98);
    }
    if (iVar3 != 0) goto joined_r0x0001424d5c62;
  }
  local_90 = 0x28;
  local_8c = 0;
  local_60 = 0;
  local_98 = (longlong)&local_8c + 1;
  FUN_142505290(local_58,&local_98);
  if (*param_10 < 1) {
    if (0xb < (int)param_2) goto LAB_1424d5cb7;
    if ((int)param_2 < 1) {
      _Size_00 = 0;
    }
    else {
      memcpy(local_138,param_1,(ulonglong)param_2);
    }
    (**(code **)(local_58[0] + 8))(local_58,local_138,_Size_00);
  }
  else if (*param_10 == 0xf) {
LAB_1424d5cb7:
    *param_10 = 1;
  }
  thunk_FUN_14257c350(local_58);
  iVar3 = 2;
  if ((*param_10 < 1) && (lVar2 = FUN_1424d6000(local_98,local_1d8,param_10), *param_10 < 1)) {
    if (lVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = 1;
      FUN_1424d6230(0,0,param_3,_Size,param_5,param_6,param_7,param_8,lVar2,param_9,param_10);
    }
  }
  if ((char)local_8c != '\0') {
    FUN_1424da110(local_98);
  }
  if (iVar3 != 2) {
    if (iVar3 == 0) {
      return 0;
    }
    return 1;
  }
LAB_1424d5abf:
  if (*param_10 < 1) {
    *param_10 = 1;
  }
  return 0;
}



// FUNCTION 1424d5dc0 Unwind@1424d5dc0 body=67 status=ok
// SIG undefined Unwind@1424d5dc0(void)

void Unwind_1424d5dc0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1ac) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x1a0));
  }
  return;
}



// FUNCTION 1424d5e10 Unwind@1424d5e10 body=67 status=ok
// SIG undefined Unwind@1424d5e10(void)

void Unwind_1424d5e10(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1ac) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x1a0));
  }
  return;
}



// FUNCTION 1424d5e60 Unwind@1424d5e60 body=67 status=ok
// SIG undefined Unwind@1424d5e60(void)

void Unwind_1424d5e60(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1ac) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x1a0));
  }
  return;
}



// FUNCTION 1424d5eb0 Unwind@1424d5eb0 body=67 status=ok
// SIG undefined Unwind@1424d5eb0(void)

void Unwind_1424d5eb0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1ac) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x1a0));
  }
  return;
}



// FUNCTION 1424d5f00 Unwind@1424d5f00 body=55 status=ok
// SIG undefined Unwind@1424d5f00(void)

void Unwind_1424d5f00(undefined8 param_1,longlong param_2)

{
  thunk_FUN_14257c350(param_2 + 0x60);
  return;
}



// FUNCTION 1424d5f40 Unwind@1424d5f40 body=58 status=ok
// SIG undefined Unwind@1424d5f40(void)

void Unwind_1424d5f40(undefined8 param_1,longlong param_2)

{
  thunk_FUN_14257c350(param_2 + 0x1e0);
  return;
}



// FUNCTION 1424d5f80 Unwind@1424d5f80 body=58 status=ok
// SIG undefined Unwind@1424d5f80(void)

void Unwind_1424d5f80(undefined8 param_1,longlong param_2)

{
  thunk_FUN_14257c350(param_2 + 0x1e0);
  return;
}



// FUNCTION 1424d5fc0 Unwind@1424d5fc0 body=58 status=ok
// SIG undefined Unwind@1424d5fc0(void)

void Unwind_1424d5fc0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_14257c350(param_2 + 0x1e0);
  return;
}



// FUNCTION 1424d6000 FUN_1424d6000 body=470 status=ok
// SIG undefined FUN_1424d6000(void)

void * FUN_1424d6000(char *param_1,void *param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *local_a0;
  undefined4 local_98;
  undefined2 local_94;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  longlong local_40;
  int local_38;
  int local_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (0 < *param_3) {
    return (void *)0x0;
  }
  local_38 = 0;
  local_34 = 0;
  lVar4 = FUN_1424edad0(0,"likelySubtags",&local_34);
  if (local_34 < 1) {
    local_a0 = (char *)((longlong)&local_94 + 1);
    local_98 = 0x28;
    local_94 = 0;
    local_68 = 0;
    if (param_1 == (char *)0x0) {
      param_1 = (char *)0x0;
LAB_1424d60ff:
      uVar5 = FUN_1424ecf00(lVar4,param_1,&local_38,&local_34);
      if (local_34 < 1) {
        if (local_38 < 0x9d) {
          FUN_14250ae10(uVar5,param_2,local_38 + 1);
          bVar1 = true;
          if (((2 < local_38) && (iVar3 = FUN_142503ad0(param_2,&DAT_14993dbd2,3), iVar3 == 0)) &&
             (((longlong)local_38 == 3 || (*(char *)((longlong)param_2 + 3) == '_')))) {
            memmove(param_2,(void *)((longlong)param_2 + 3),(longlong)local_38 - 2);
          }
        }
        else {
          *param_3 = 5;
          bVar1 = true;
          param_2 = (void *)0x0;
        }
      }
      else {
        bVar1 = true;
        if (local_34 == 2) {
          param_2 = (void *)0x0;
        }
        else {
          *param_3 = local_34;
          param_2 = (void *)0x0;
        }
      }
    }
    else {
      if (*param_1 == '\0') {
        param_1 = "und";
        goto LAB_1424d60ff;
      }
      if (*param_1 != '_') goto LAB_1424d60ff;
      local_40 = lVar4;
      FUN_1425038b0(&local_60,&DAT_14993dbd2);
      FUN_142503520(&local_a0,local_60,local_58,param_3);
      FUN_1425038b0(&local_50,param_1);
      FUN_142503520(&local_a0,local_50,local_48,param_3);
      param_1 = local_a0;
      lVar4 = local_40;
      if (*param_3 < 1) goto LAB_1424d60ff;
      param_2 = (void *)0x0;
      bVar1 = false;
    }
    if ((char)local_94 != '\0') {
      FUN_1424da110(local_a0);
    }
    if (!bVar1) {
      bVar2 = false;
      bVar1 = false;
      goto joined_r0x0001424d61d2;
    }
  }
  else {
    *param_3 = local_34;
    param_2 = (void *)0x0;
  }
  bVar2 = true;
  bVar1 = true;
joined_r0x0001424d61d2:
  if (lVar4 != 0) {
    FUN_1424ea9f0(lVar4);
    bVar1 = bVar2;
  }
  if (!bVar1) {
    return (void *)0x0;
  }
  return param_2;
}



// FUNCTION 1424d61e0 Unwind@1424d61e0 body=65 status=ok
// SIG undefined Unwind@1424d61e0(void)

void Unwind_1424d61e0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x34) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x28));
  }
  if (*(longlong *)(param_2 + 0x88) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x88));
  }
  return;
}



// FUNCTION 1424d6230 FUN_1424d6230 body=674 status=ok
// SIG undefined FUN_1424d6230(void)

void FUN_1424d6230(undefined1 *param_1,uint param_2,undefined1 *param_3,uint param_4,void *param_5,
                  uint param_6,char *param_7,int param_8,longlong param_9,longlong *param_10,
                  int *param_11)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong _Size;
  undefined1 local_118 [36];
  undefined1 local_f4 [12];
  undefined1 local_e8 [168];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)local_118;
  iVar2 = *param_11;
  if (iVar2 < 1) {
    _Size = (ulonglong)param_2;
    if ((((int)param_2 < 0xc) && ((int)param_4 < 6)) && ((int)param_6 < 4)) {
      if ((int)param_2 < 1) {
        if (param_9 != 0) {
          param_2 = FUN_1424e8be0(param_9,local_f4,0xc,param_11);
          iVar2 = *param_11;
          if ((0 < iVar2) || (0xb < (int)param_2)) goto LAB_1424d6261;
          if (param_2 != 0) {
            _Size = (ulonglong)(int)param_2;
            param_1 = local_f4;
            goto LAB_1424d62bf;
          }
          goto LAB_1424d62c4;
        }
        param_2 = 0;
        if ((int)param_4 < 1) goto LAB_1424d62ed;
LAB_1424d62cd:
        lVar3 = (longlong)(int)param_2;
        local_e8[lVar3] = 0x5f;
LAB_1424d62e3:
        memcpy(local_e8 + lVar3 + 1,param_3,(ulonglong)param_4);
        param_2 = param_2 + param_4 + 1;
      }
      else {
LAB_1424d62bf:
        memcpy(local_e8,param_1,_Size);
LAB_1424d62c4:
        if (0 < (int)param_4) goto LAB_1424d62cd;
        if (param_9 != 0) {
          param_4 = FUN_1424e8c40(param_9,local_f4,6,param_11);
          iVar2 = *param_11;
          if ((0 < iVar2) || (5 < (int)param_4)) goto LAB_1424d6261;
          if ((int)param_4 < 1) goto LAB_1424d62ed;
          lVar3 = (longlong)(int)param_2;
          local_e8[lVar3] = 0x5f;
          param_3 = local_f4;
          goto LAB_1424d62e3;
        }
      }
LAB_1424d62ed:
      if ((int)param_6 < 1) {
        if (param_9 != 0) {
          param_6 = FUN_1424e8d90(param_9,local_f4,4,param_11);
          iVar2 = *param_11;
          if ((0 < iVar2) || (3 < (int)param_6)) goto LAB_1424d6261;
          if (0 < (int)param_6) {
            local_e8[(int)param_2] = 0x5f;
            memcpy(local_e8 + (longlong)(int)param_2 + 1,local_f4,(ulonglong)param_6);
            goto LAB_1424d631b;
          }
        }
        bVar1 = false;
      }
      else {
        local_e8[(int)param_2] = 0x5f;
        memcpy(local_e8 + (longlong)(int)param_2 + 1,param_5,(ulonglong)param_6);
LAB_1424d631b:
        param_2 = param_2 + param_6 + 1;
        bVar1 = true;
      }
      (**(code **)(*param_10 + 8))(param_10,local_e8,param_2);
      if (0 < param_8) {
        if ((*param_7 != '@') && ((**(code **)(*param_10 + 8))(param_10,L"_Common",1), !bVar1)) {
          (**(code **)(*param_10 + 8))(param_10,L"_Common",1);
        }
        (**(code **)(*param_10 + 8))(param_10,param_7,param_8);
      }
      goto LAB_1424d6329;
    }
  }
  else {
LAB_1424d6261:
    if ((iVar2 != 0xf) && (0 < iVar2)) goto LAB_1424d6329;
  }
  *param_11 = 1;
LAB_1424d6329:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)local_118);
}



// FUNCTION 1424d64f0 FUN_1424d64f0 body=50 status=ok
// SIG undefined FUN_1424d64f0(void)

void FUN_1424d64f0(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1424da220(0);
  FUN_14257ea70(param_1,uVar1,0,0,FUN_14257d7c0);
  return;
}



// FUNCTION 1424d6530 FUN_1424d6530 body=59 status=ok
// SIG undefined FUN_1424d6530(void)

void FUN_1424d6530(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1424a5500(param_2);
  uVar2 = FUN_1424da220(uVar1);
  FUN_14257ea70(param_1,uVar2,0,0,FUN_14257d7c0);
  return;
}



// FUNCTION 1424d6570 FUN_1424d6570 body=50 status=ok
// SIG undefined FUN_1424d6570(void)

void FUN_1424d6570(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1424da220(0);
  FUN_14257ea70(param_1,uVar1,0,0,FUN_14257d890);
  return;
}



// FUNCTION 1424d65b0 FUN_1424d65b0 body=59 status=ok
// SIG undefined FUN_1424d65b0(void)

void FUN_1424d65b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1424a5500(param_2);
  uVar2 = FUN_1424da220(uVar1);
  FUN_14257ea70(param_1,uVar2,0,0,FUN_14257d890);
  return;
}



// FUNCTION 1424d65f0 FUN_1424d65f0 body=282 status=ok
// SIG undefined FUN_1424d65f0(void)

void FUN_1424d65f0(void)

{
  longlong lVar1;
  
  FUN_142501320(0);
  FUN_142501400(0);
  if (DAT_14c77eb30 != (code *)0x0) {
    (*DAT_14c77eb30)();
    DAT_14c77eb30 = (code *)0x0;
  }
  if (DAT_14c77eb38 != (code *)0x0) {
    (*DAT_14c77eb38)();
    DAT_14c77eb38 = (code *)0x0;
  }
  if (DAT_14c77eb40 != (code *)0x0) {
    (*DAT_14c77eb40)();
    DAT_14c77eb40 = (code *)0x0;
  }
  if (DAT_14c77eb48 != (code *)0x0) {
    (*DAT_14c77eb48)();
    DAT_14c77eb48 = (code *)0x0;
  }
  if (DAT_14c77eb50 != (code *)0x0) {
    (*DAT_14c77eb50)();
    DAT_14c77eb50 = (code *)0x0;
  }
  if (DAT_14c77eb58 != (code *)0x0) {
    (*DAT_14c77eb58)();
    DAT_14c77eb58 = (code *)0x0;
  }
  if (DAT_14c77eb60 != (code *)0x0) {
    (*DAT_14c77eb60)();
    DAT_14c77eb60 = (code *)0x0;
  }
  if (DAT_14c77eb68 != (code *)0x0) {
    (*DAT_14c77eb68)();
    DAT_14c77eb68 = (code *)0x0;
  }
  lVar1 = 0;
  do {
    if (*(code **)((longlong)&DAT_14c77eb70 + lVar1) != (code *)0x0) {
      (**(code **)((longlong)&DAT_14c77eb70 + lVar1))();
      *(undefined8 *)((longlong)&DAT_14c77eb70 + lVar1) = 0;
    }
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0xb8);
  FUN_1424da1f0();
  FUN_14257f5e0();
  return;
}



// FUNCTION 1424d6720 FUN_1424d6720 body=57 status=ok
// SIG undefined FUN_1424d6720(void)

void FUN_1424d6720(uint param_1,undefined8 param_2)

{
  if (param_1 < 0x17) {
    FUN_142501320(0);
    (&DAT_14c77eb70)[param_1] = param_2;
    FUN_142501400(0);
    return;
  }
  return;
}



// FUNCTION 1424d6760 FUN_1424d6760 body=19 status=ok
// SIG undefined FUN_1424d6760(void)

void FUN_1424d6760(uint param_1,undefined8 param_2)

{
  if (param_1 < 8) {
    (&DAT_14c77eb30)[param_1] = param_2;
  }
  return;
}



// FUNCTION 1424d6780 FUN_1424d6780 body=30 status=ok
// SIG undefined FUN_1424d6780(void)

void FUN_1424d6780(undefined8 param_1,int *param_2)

{
  if (0 < *param_2) {
    return;
  }
  FUN_14257f9a0(&PTR_DAT_14993ee10,0,FUN_1424d67a0,param_1);
  return;
}



// FUNCTION 1424d67a0 FUN_1424d67a0 body=20 status=ok
// SIG undefined FUN_1424d67a0(void)

undefined8 FUN_1424d67a0(undefined8 *param_1)

{
  (*(code *)param_1[1])(*param_1);
  return 1;
}



// FUNCTION 1424d67c0 FUN_1424d67c0 body=8 status=ok
// SIG undefined FUN_1424d67c0(void)

undefined ** FUN_1424d67c0(void)

{
  return &PTR_DAT_14993ee10;
}



// FUNCTION 1424d67d0 FUN_1424d67d0 body=982 status=ok
// SIG undefined FUN_1424d67d0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1424d67d0(uint param_1,undefined8 *param_2)

{
  longlong lVar1;
  ushort uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar4;
  ushort *puVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar10;
  uint uVar11;
  
  if ((int)param_1 < 0x130) {
    if (param_1 == 0x49) {
      uVar6 = *param_2;
      UNRECOVERED_JUMPTABLE = (code *)param_2[1];
      iVar7 = 0x69;
      goto LAB_1424d6826;
    }
    if (param_1 == 0x69) {
      uVar6 = *param_2;
      UNRECOVERED_JUMPTABLE = (code *)param_2[1];
      iVar7 = 0x49;
      goto LAB_1424d6826;
    }
  }
  else {
    if (param_1 == 0x130) {
                    /* WARNING: Could not recover jumptable at 0x0001424d6851. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_2[3])(*param_2,&DAT_14993ef70,2);
      return;
    }
    if (param_1 == 0x131) {
      return;
    }
  }
  if (param_1 < 0xd800) {
    uVar9 = param_1 >> 5;
LAB_1424d6883:
    uVar9 = (param_1 & 0x1f) + (uint)*(ushort *)(&DAT_1499405e0 + (ulonglong)uVar9 * 2) * 4;
  }
  else {
    if (param_1 < 0x10000) {
      uVar9 = (param_1 >> 5) + 0x140;
      if (0xdbff < param_1) {
        uVar9 = param_1 >> 5;
      }
      goto LAB_1424d6883;
    }
    uVar9 = 0xd58;
    if ((param_1 < 0x110000) && (uVar9 = 0x2fd0, param_1 < 0xe0800)) {
      uVar9 = (param_1 >> 5 & 0x3f) +
              (uint)*(ushort *)(&DAT_149941620 + (ulonglong)(param_1 >> 0xb) * 2);
      goto LAB_1424d6883;
    }
  }
  uVar2 = *(ushort *)(&DAT_1499405e0 + (ulonglong)uVar9 * 2);
  if ((uVar2 & 8) != 0) {
    uVar4 = (ulonglong)(uVar2 >> 4);
    lVar1 = uVar4 * 2;
    puVar10 = (ushort *)(&DAT_14993f5e2 + lVar1);
    uVar2 = *(ushort *)(&DAT_14993f5e0 + uVar4 * 2);
    uVar9 = (uint)uVar2;
    if ((uVar2 & 1) != 0) {
      if ((uVar2 & 0x100) == 0) {
        param_1 = (uint)*puVar10;
      }
      else {
        param_1 = CONCAT22(*(undefined2 *)(&DAT_14993f5e2 + uVar4 * 2),
                           *(undefined2 *)(&DAT_14993f5e4 + uVar4 * 2));
      }
      (*(code *)param_2[1])(*param_2,param_1);
    }
    if ((uVar2 & 2) != 0) {
      uVar4 = (ulonglong)(byte)(&DAT_14993ee70)[uVar9 & 1];
      if ((uVar2 & 0x100) == 0) {
        param_1 = (uint)puVar10[uVar4];
      }
      else {
        param_1 = CONCAT22(puVar10[uVar4 * 2],*(undefined2 *)(&DAT_14993f5e4 + uVar4 * 4 + lVar1));
      }
      (*(code *)param_2[1])(*param_2,param_1);
    }
    if ((uVar2 & 4) != 0) {
      uVar4 = (ulonglong)(byte)(&DAT_14993ee70)[uVar9 & 3];
      if ((uVar2 & 0x100) == 0) {
        param_1 = (uint)puVar10[uVar4];
      }
      else {
        param_1 = CONCAT22(puVar10[uVar4 * 2],*(undefined2 *)(&DAT_14993f5e4 + uVar4 * 4 + lVar1));
      }
      (*(code *)param_2[1])(*param_2,param_1);
    }
    if ((uVar2 & 8) != 0) {
      uVar4 = (ulonglong)(byte)(&DAT_14993ee70)[uVar9 & 7];
      if ((uVar2 & 0x100) == 0) {
        param_1 = (uint)puVar10[uVar4];
      }
      else {
        param_1 = CONCAT22(puVar10[uVar4 * 2],*(undefined2 *)(&DAT_14993f5e4 + uVar4 * 4 + lVar1));
      }
      (*(code *)param_2[1])(*param_2,param_1);
    }
    if ((uVar2 & 0x10) != 0) {
      uVar4 = (ulonglong)(byte)(&DAT_14993ee70)[uVar9 & 0xf];
      if ((uVar2 & 0x100) == 0) {
        uVar11 = (uint)puVar10[uVar4];
      }
      else {
        uVar11 = CONCAT22(puVar10[uVar4 * 2],*(undefined2 *)(&DAT_14993f5e4 + uVar4 * 4 + lVar1));
      }
      uVar8 = -uVar11;
      if ((uVar2 & 0x400) == 0) {
        uVar8 = uVar11;
      }
      (*(code *)param_2[1])(*param_2,uVar8 + param_1);
    }
    if ((uVar2 & 0x40) == 0) {
      puVar5 = (ushort *)0x0;
      uVar11 = 0;
    }
    else {
      puVar5 = (ushort *)
               (&DAT_14993f5e4 + (ulonglong)(byte)(&DAT_14993ee70)[uVar9 & 0x3f] * 4 + lVar1);
      if ((uVar2 & 0x100) == 0) {
        puVar5 = puVar10 + (byte)(&DAT_14993ee70)[uVar9 & 0x3f];
      }
      uVar11 = *puVar5 & 0xf;
      puVar5 = puVar5 + 1;
    }
    if ((char)uVar2 < '\0') {
      puVar5 = (ushort *)
               (&DAT_14993f5e4 + (ulonglong)(byte)(&DAT_14993ee70)[uVar9 & 0x7f] * 4 + lVar1);
      if ((uVar2 & 0x100) == 0) {
        puVar5 = puVar10 + (byte)(&DAT_14993ee70)[uVar9 & 0x7f];
      }
      uVar2 = *puVar5;
      puVar5 = puVar5 + (ulonglong)(uVar2 & 0xf) + 1;
      uVar9 = uVar2 >> 4 & 0xf;
      if ((uVar2 >> 4 & 0xf) != 0) {
        (*(code *)param_2[3])(*param_2,puVar5,uVar9);
        puVar5 = puVar5 + uVar9;
      }
      puVar5 = puVar5 + (ulonglong)(uVar2 >> 8 & 0xf) + (ulonglong)(uVar2 >> 0xc);
    }
    if (uVar11 != 0) {
      iVar7 = 0;
      do {
        uVar2 = puVar5[iVar7];
        uVar9 = (uint)uVar2;
        iVar3 = iVar7 + 1;
        if ((uVar2 & 0xfc00) == 0xd800) {
          iVar3 = iVar7 + 2;
          uVar9 = (uint)uVar2 * 0x400 + (uint)puVar5[iVar7 + 1] + 0xfca02400;
        }
        (*(code *)param_2[1])(*param_2,uVar9);
        iVar7 = iVar3;
      } while (iVar3 < (int)uVar11);
    }
    return;
  }
  if (uVar2 < 0x80) {
    return;
  }
  if ((uVar2 & 3) == 0) {
    return;
  }
  uVar6 = *param_2;
  UNRECOVERED_JUMPTABLE = (code *)param_2[1];
  iVar7 = ((int)(short)uVar2 >> 7) + param_1;
LAB_1424d6826:
                    /* WARNING: Could not recover jumptable at 0x0001424d6830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar6,iVar7);
  return;
}



// FUNCTION 1424d6bc0 FUN_1424d6bc0 body=294 status=ok
// SIG undefined FUN_1424d6bc0(void)

ulonglong FUN_1424d6bc0(longlong param_1,int param_2,undefined8 *param_3)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar7;
  int iVar8;
  ulonglong uVar6;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 - 4U < 0xfffffffe) {
    return 0;
  }
  uVar2 = 0x49;
  iVar7 = 0;
  while( true ) {
    uVar5 = (int)(iVar7 + uVar2) / 2;
    uVar6 = (ulonglong)uVar5;
    lVar3 = 0;
    iVar4 = param_2 + 1;
    do {
      uVar1 = *(ushort *)(&DAT_1499402fa + lVar3 + (longlong)(int)(uVar5 * 5) * 2);
      if (uVar1 == 0) {
        iVar8 = 1;
        goto LAB_1424d6c06;
      }
      iVar8 = (uint)*(ushort *)(param_1 + lVar3) - (uint)uVar1;
      if (iVar8 != 0) goto LAB_1424d6c72;
      lVar3 = lVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (1 < iVar4);
    if (param_2 == 3) break;
    iVar8 = -(uint)(*(short *)(&DAT_1499402fa + lVar3 + (longlong)(int)(uVar5 * 5) * 2) != 0);
LAB_1424d6c72:
    if (iVar8 == 0) break;
LAB_1424d6c06:
    if (-1 < iVar8) {
      iVar7 = uVar5 + 1;
      uVar5 = uVar2;
    }
    uVar2 = uVar5;
    if ((int)uVar2 <= iVar7) {
      return 0;
    }
  }
  iVar7 = 3;
  do {
    uVar1 = *(ushort *)(&DAT_1499402fa + (longlong)iVar7 * 2 + (longlong)(int)(uVar5 * 5) * 2);
    uVar2 = (uint)uVar1;
    uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
    if (uVar1 == 0) {
      return uVar6;
    }
    iVar4 = iVar7 + 1;
    if ((uVar1 & 0xfc00) == 0xd800) {
      iVar4 = iVar7 + 2;
      uVar2 = (uint)uVar1 * 0x400 +
              (uint)*(ushort *)
                     (&DAT_1499402fa + (longlong)(iVar7 + 1) * 2 + (longlong)(int)(uVar5 * 5) * 2) +
              0xfca02400;
    }
    (*(code *)param_3[1])(*param_3,uVar2);
    FUN_1424d67d0(uVar2,param_3);
    iVar7 = iVar4;
  } while (iVar4 < 5);
  return uVar6;
}



// FUNCTION 1424d6cf0 FUN_1424d6cf0 body=136 status=ok
// SIG undefined FUN_1424d6cf0(void)

ushort FUN_1424d6cf0(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 < 0xd800) {
    uVar1 = param_1 >> 5;
  }
  else if (param_1 < 0x10000) {
    uVar1 = (param_1 >> 5) + 0x140;
    if (0xdbff < param_1) {
      uVar1 = param_1 >> 5;
    }
  }
  else {
    lVar2 = 0xd58;
    if ((0x10ffff < param_1) || (lVar2 = 0x2fd0, 0xe07ff < param_1)) goto LAB_1424d6d69;
    uVar1 = (param_1 >> 5 & 0x3f) +
            (uint)*(ushort *)(&DAT_149941620 + (ulonglong)(param_1 >> 0xb) * 2);
  }
  lVar2 = (ulonglong)(param_1 & 0x1f) +
          (ulonglong)*(ushort *)(&DAT_1499405e0 + (ulonglong)uVar1 * 2) * 4;
LAB_1424d6d69:
  return *(ushort *)(&DAT_1499405e0 + lVar2 * 2) & 3;
}



// FUNCTION 1424d6d80 FUN_1424d6d80 body=136 status=ok
// SIG undefined FUN_1424d6d80(void)

ushort FUN_1424d6d80(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 < 0xd800) {
    uVar1 = param_1 >> 5;
  }
  else if (param_1 < 0x10000) {
    uVar1 = (param_1 >> 5) + 0x140;
    if (0xdbff < param_1) {
      uVar1 = param_1 >> 5;
    }
  }
  else {
    lVar2 = 0xd58;
    if ((0x10ffff < param_1) || (lVar2 = 0x2fd0, 0xe07ff < param_1)) goto LAB_1424d6df9;
    uVar1 = (param_1 >> 5 & 0x3f) +
            (uint)*(ushort *)(&DAT_149941620 + (ulonglong)(param_1 >> 0xb) * 2);
  }
  lVar2 = (ulonglong)(param_1 & 0x1f) +
          (ulonglong)*(ushort *)(&DAT_1499405e0 + (ulonglong)uVar1 * 2) * 4;
LAB_1424d6df9:
  return *(ushort *)(&DAT_1499405e0 + lVar2 * 2) & 7;
}



// FUNCTION 1424d6e10 FUN_1424d6e10 body=313 status=ok
// SIG undefined FUN_1424d6e10(void)

undefined8 FUN_1424d6e10(char *param_1)

{
  char cVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte bVar4;
  
  cVar1 = *param_1;
  if (cVar1 == 'z') {
    return 1;
  }
  if (cVar1 == 'e') {
switchD_1424d6e94_caseD_45:
    if ((param_1[1] & 0xdfU) != 0x4c) {
      return 1;
    }
    bVar4 = param_1[2];
    if ((bVar4 & 0xdf) == 0x4c) {
      bVar4 = param_1[3];
    }
    uVar2 = 4;
  }
  else {
    if (cVar1 < 'a') {
      switch(cVar1) {
      case 'A':
        goto switchD_1424d6e78_caseD_61;
      default:
        goto LAB_1424d6f48;
      case 'E':
        goto switchD_1424d6e94_caseD_45;
      case 'L':
        goto switchD_1424d6e78_caseD_6c;
      case 'N':
        goto switchD_1424d6e78_caseD_6e;
      case 'T':
        goto switchD_1424d6e78_caseD_74;
      }
    }
    switch(cVar1) {
    case 'a':
switchD_1424d6e78_caseD_61:
      if ((param_1[1] & 0xdfU) != 0x5a) {
        return 1;
      }
      bVar4 = param_1[2];
      if ((bVar4 & 0xdf) == 0x45) {
        bVar4 = param_1[3];
      }
      uVar2 = 2;
      break;
    default:
      goto LAB_1424d6f48;
    case 'l':
switchD_1424d6e78_caseD_6c:
      bVar4 = param_1[1];
      if ((bVar4 & 0xdf) == 0x49) {
        bVar4 = param_1[2];
        pbVar3 = (byte *)(param_1 + 3);
      }
      else {
        pbVar3 = (byte *)(param_1 + 2);
      }
      if ((bVar4 & 0xdf) != 0x54) {
        return 1;
      }
      bVar4 = *pbVar3;
      uVar2 = 3;
      break;
    case 'n':
switchD_1424d6e78_caseD_6e:
      if ((param_1[1] & 0xdfU) != 0x4c) {
        return 1;
      }
      bVar4 = param_1[2];
      if ((bVar4 & 0xdf) == 0x44) {
        bVar4 = param_1[3];
      }
      uVar2 = 5;
      break;
    case 't':
switchD_1424d6e78_caseD_74:
      bVar4 = param_1[1];
      if ((bVar4 & 0xdf) == 0x55) {
        bVar4 = param_1[2];
        pbVar3 = (byte *)(param_1 + 3);
      }
      else {
        pbVar3 = (byte *)(param_1 + 2);
      }
      if ((bVar4 & 0xdf) != 0x52) {
        return 1;
      }
      bVar4 = *pbVar3;
      uVar2 = 2;
    }
  }
  if (bVar4 == 0) {
    return uVar2;
  }
  if (bVar4 == 0x2d) {
    return uVar2;
  }
  if (bVar4 == 0x5f) {
    return uVar2;
  }
LAB_1424d6f48:
  return 1;
}



// FUNCTION 1424d6f50 FUN_1424d6f50 body=2090 status=ok
// SIG undefined FUN_1424d6f50(void)

uint FUN_1424d6f50(uint param_1,code *param_2,undefined8 param_3,undefined8 *param_4,int param_5)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  undefined *puVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  ushort *puVar13;
  undefined7 uVar14;
  
  if (param_1 < 0xd800) {
    uVar7 = param_1 >> 5;
LAB_1424d6fcd:
    uVar7 = (param_1 & 0x1f) + (uint)*(ushort *)(&DAT_1499405e0 + (ulonglong)uVar7 * 2) * 4;
  }
  else {
    if (param_1 < 0x10000) {
      uVar7 = (param_1 >> 5) + 0x140;
      if (0xdbff < param_1) {
        uVar7 = param_1 >> 5;
      }
      goto LAB_1424d6fcd;
    }
    uVar7 = 0xd58;
    if ((param_1 < 0x110000) && (uVar7 = 0x2fd0, param_1 < 0xe0800)) {
      uVar7 = (param_1 >> 5 & 0x3f) +
              (uint)*(ushort *)(&DAT_149941620 + (ulonglong)(param_1 >> 0xb) * 2);
      goto LAB_1424d6fcd;
    }
  }
  uVar2 = *(ushort *)(&DAT_1499405e0 + (ulonglong)uVar7 * 2);
  uVar7 = param_1;
  if ((uVar2 & 8) == 0) {
    if ((uVar2 & 2) != 0) {
      uVar7 = ((int)(short)uVar2 >> 7) + param_1;
    }
    goto LAB_1424d7007;
  }
  uVar10 = (ulonglong)(uVar2 >> 4);
  lVar1 = uVar10 * 2;
  puVar13 = (ushort *)(&DAT_14993f5e2 + lVar1);
  uVar3 = *(ushort *)(&DAT_14993f5e0 + uVar10 * 2);
  if ((uVar3 & 0x4000) == 0) {
    if ((char)uVar3 < '\0') {
      puVar8 = (ushort *)
               (&DAT_14993f5e4 + (ulonglong)(byte)(&DAT_14993ee70)[uVar3 & 0x7f] * 4 + lVar1);
      if ((uVar3 & 0x100) == 0) {
        puVar8 = puVar13 + (byte)(&DAT_14993ee70)[uVar3 & 0x7f];
      }
      uVar5 = *puVar8;
      if ((uVar5 & 0xf) != 0) {
        *param_4 = puVar8 + 1;
        return uVar5 & 0xf;
      }
    }
  }
  else {
    if (param_5 == 3) {
      if (0x127 < (int)param_1) {
        if ((int)param_1 < 0x130) {
          if (param_1 != 0x128) {
            if (param_1 != 0x12e) goto LAB_1424d76cc;
            goto LAB_1424d70f0;
          }
LAB_1424d72c2:
          puVar9 = &DAT_14993f596;
          goto LAB_1424d738b;
        }
        goto LAB_1424d7696;
      }
      if (param_1 - 0x49 < 2) {
LAB_1424d70f0:
        if ((param_2 != (code *)0x0) && (uVar6 = (*param_2)(param_3,1), -1 < (int)uVar6)) {
          if (uVar6 < 0xd800) {
            uVar11 = uVar6 >> 5;
LAB_1424d7181:
            lVar12 = (ulonglong)(uVar6 & 0x1f) +
                     (ulonglong)*(ushort *)(&DAT_1499405e0 + (ulonglong)uVar11 * 2) * 4;
          }
          else {
            if (uVar6 < 0x10000) {
              uVar11 = (uVar6 >> 5) + 0x140;
              if (0xdbff < uVar6) {
                uVar11 = uVar6 >> 5;
              }
              goto LAB_1424d7181;
            }
            lVar12 = 0xd58;
            if ((uVar6 < 0x110000) && (lVar12 = 0x2fd0, uVar6 < 0xe0800)) {
              uVar11 = (uVar6 >> 5 & 0x3f) +
                       (uint)*(ushort *)(&DAT_149941620 + (ulonglong)(uVar6 >> 0xb) * 2);
              goto LAB_1424d7181;
            }
          }
          uVar5 = *(ushort *)(&DAT_1499405e0 + lVar12 * 2);
          if ((uVar5 & 8) != 0) {
            uVar5 = *(ushort *)(&DAT_14993f5e0 + (ulonglong)(uVar5 >> 4) * 2) >> 7;
          }
          if ((uVar5 & 0x60) != 0x40) {
            if ((uVar5 & 0x60) == 0x60) {
              do {
                uVar6 = (*param_2)(param_3,0);
                if ((int)uVar6 < 0) goto LAB_1424d72a2;
                if (uVar6 < 0xd800) {
                  uVar11 = uVar6 >> 5;
LAB_1424d7243:
                  lVar12 = (ulonglong)(uVar6 & 0x1f) +
                           (ulonglong)*(ushort *)(&DAT_1499405e0 + (ulonglong)uVar11 * 2) * 4;
                }
                else {
                  if (uVar6 < 0x10000) {
                    uVar11 = (uVar6 >> 5) + 0x140;
                    if (0xdbff < uVar6) {
                      uVar11 = uVar6 >> 5;
                    }
                    goto LAB_1424d7243;
                  }
                  lVar12 = 0xd58;
                  if ((uVar6 < 0x110000) && (lVar12 = 0x2fd0, uVar6 < 0xe0800)) {
                    uVar11 = (uVar6 >> 5 & 0x3f) +
                             (uint)*(ushort *)(&DAT_149941620 + (ulonglong)(uVar6 >> 0xb) * 2);
                    goto LAB_1424d7243;
                  }
                }
                uVar5 = *(ushort *)(&DAT_1499405e0 + lVar12 * 2);
                if ((uVar5 & 8) != 0) {
                  uVar5 = *(ushort *)(&DAT_14993f5e0 + (ulonglong)(uVar5 >> 4) * 2) >> 7;
                }
              } while ((uVar5 & 0x60) == 0x60);
              if ((uVar5 & 0x60) == 0x40) goto LAB_1424d7271;
            }
            goto LAB_1424d72a2;
          }
LAB_1424d7271:
          if (0xcc < (int)param_1) {
            if (param_1 != 0xcd) {
              if (param_1 != 0x128) {
                if (param_1 != 0x12e) {
                  return 0;
                }
                puVar9 = &DAT_14993f584;
                goto LAB_1424d75d5;
              }
              goto LAB_1424d72c2;
            }
            goto LAB_1424d7384;
          }
          if (param_1 != 0x49) {
            if (param_1 == 0x4a) {
              puVar9 = &DAT_14993f580;
              goto LAB_1424d75d5;
            }
            if (param_1 != 0xcc) {
              return 0;
            }
            goto LAB_1424d7341;
          }
          goto LAB_1424d75ce;
        }
LAB_1424d72a2:
        if (param_1 == 0xcc) goto LAB_1424d7341;
        if (param_1 != 0xcd) {
          if (param_1 == 0x128) goto LAB_1424d72c2;
          goto LAB_1424d72ce;
        }
      }
      else {
        if (param_1 == 0xcc) {
LAB_1424d7341:
          puVar9 = &DAT_14993f58a;
          goto LAB_1424d738b;
        }
        if (param_1 != 0xcd) goto LAB_1424d76cc;
      }
LAB_1424d7384:
      puVar9 = &DAT_14993f590;
LAB_1424d738b:
      *param_4 = puVar9;
      return 3;
    }
LAB_1424d72ce:
    if ((param_1 == 0x130) && (param_5 == 2)) {
      return 0x69;
    }
    if ((param_1 == 0x307) && (param_5 == 2)) {
      if ((param_2 == (code *)0x0) || (uVar6 = (*param_2)(param_3,0xff), (int)uVar6 < 0))
      goto LAB_1424d76cc;
      if (uVar6 == 0x49) {
LAB_1424d7333:
        *param_4 = 0;
        return 0;
      }
      if (uVar6 < 0xd800) {
        uVar11 = uVar6 >> 5;
LAB_1424d73b6:
        lVar12 = (ulonglong)(uVar6 & 0x1f) +
                 (ulonglong)*(ushort *)(&DAT_1499405e0 + (ulonglong)uVar11 * 2) * 4;
      }
      else {
        if (uVar6 < 0x10000) {
          uVar11 = (uVar6 >> 5) + 0x140;
          if (0xdbff < uVar6) {
            uVar11 = uVar6 >> 5;
          }
          goto LAB_1424d73b6;
        }
        lVar12 = 0xd58;
        if ((uVar6 < 0x110000) && (lVar12 = 0x2fd0, uVar6 < 0xe0800)) {
          uVar11 = (uVar6 >> 5 & 0x3f) +
                   (uint)*(ushort *)(&DAT_149941620 + (ulonglong)(uVar6 >> 0xb) * 2);
          goto LAB_1424d73b6;
        }
      }
      uVar5 = *(ushort *)(&DAT_1499405e0 + lVar12 * 2);
      if ((uVar5 & 8) != 0) {
        uVar5 = *(ushort *)(&DAT_14993f5e0 + (ulonglong)(uVar5 >> 4) * 2) >> 7;
      }
      if ((~uVar5 & 0x60) != 0) goto LAB_1424d76cc;
      do {
        uVar6 = (*param_2)(param_3,0);
        if ((int)uVar6 < 0) break;
        if (uVar6 == 0x49) goto LAB_1424d7333;
        if (uVar6 < 0xd800) {
          uVar11 = uVar6 >> 5;
LAB_1424d744d:
          lVar12 = (ulonglong)(uVar6 & 0x1f) +
                   (ulonglong)*(ushort *)(&DAT_1499405e0 + (ulonglong)uVar11 * 2) * 4;
        }
        else {
          if (uVar6 < 0x10000) {
            uVar11 = (uVar6 >> 5) + 0x140;
            if (0xdbff < uVar6) {
              uVar11 = uVar6 >> 5;
            }
            goto LAB_1424d744d;
          }
          lVar12 = 0xd58;
          if ((uVar6 < 0x110000) && (lVar12 = 0x2fd0, uVar6 < 0xe0800)) {
            uVar11 = (uVar6 >> 5 & 0x3f) +
                     (uint)*(ushort *)(&DAT_149941620 + (ulonglong)(uVar6 >> 0xb) * 2);
            goto LAB_1424d744d;
          }
        }
        uVar5 = *(ushort *)(&DAT_1499405e0 + lVar12 * 2);
        if ((uVar5 & 8) != 0) {
          uVar5 = *(ushort *)(&DAT_14993f5e0 + (ulonglong)(uVar5 >> 4) * 2) >> 7;
        }
      } while ((~uVar5 & 0x60) == 0);
    }
    if ((param_1 == 0x49) && (param_5 == 2)) {
      if (param_2 == (code *)0x0) {
        return 0x131;
      }
      uVar6 = (*param_2)(param_3,1);
      if ((int)uVar6 < 0) {
        return 0x131;
      }
      if (uVar6 != 0x307) {
        if (uVar6 < 0xd800) {
          uVar11 = uVar6 >> 5;
        }
        else if (uVar6 < 0x10000) {
          uVar11 = (uVar6 >> 5) + 0x140;
          if (0xdbff < uVar6) {
            uVar11 = uVar6 >> 5;
          }
        }
        else {
          lVar12 = 0xd58;
          if ((0x10ffff < uVar6) || (lVar12 = 0x2fd0, 0xe07ff < uVar6)) goto LAB_1424d75bc;
          uVar11 = (uVar6 >> 5 & 0x3f) +
                   (uint)*(ushort *)(&DAT_149941620 + (ulonglong)(uVar6 >> 0xb) * 2);
        }
        lVar12 = (ulonglong)(uVar6 & 0x1f) +
                 (ulonglong)*(ushort *)(&DAT_1499405e0 + (ulonglong)uVar11 * 2) * 4;
LAB_1424d75bc:
        uVar5 = *(ushort *)(&DAT_1499405e0 + lVar12 * 2);
        if ((uVar5 & 8) == 0) goto LAB_1424d75e5;
        uVar5 = *(ushort *)(&DAT_14993f5e0 + (ulonglong)(uVar5 >> 4) * 2);
        do {
          uVar5 = uVar5 >> 7;
LAB_1424d75e5:
          do {
            if ((~uVar5 & 0x60) != 0) {
              return 0x131;
            }
            uVar6 = (*param_2)(param_3,0);
            if ((int)uVar6 < 0) {
              return 0x131;
            }
            if (uVar6 == 0x307) goto LAB_1424d7696;
            if (uVar6 < 0xd800) {
              uVar11 = uVar6 >> 5;
LAB_1424d7670:
              lVar12 = (ulonglong)(uVar6 & 0x1f) +
                       (ulonglong)*(ushort *)(&DAT_1499405e0 + (ulonglong)uVar11 * 2) * 4;
            }
            else {
              if (uVar6 < 0x10000) {
                uVar11 = (uVar6 >> 5) + 0x140;
                if (0xdbff < uVar6) {
                  uVar11 = uVar6 >> 5;
                }
                goto LAB_1424d7670;
              }
              lVar12 = 0xd58;
              if ((uVar6 < 0x110000) && (lVar12 = 0x2fd0, uVar6 < 0xe0800)) {
                uVar11 = (uVar6 >> 5 & 0x3f) +
                         (uint)*(ushort *)(&DAT_149941620 + (ulonglong)(uVar6 >> 0xb) * 2);
                goto LAB_1424d7670;
              }
            }
            uVar5 = *(ushort *)(&DAT_1499405e0 + lVar12 * 2);
          } while ((uVar5 & 8) == 0);
          uVar5 = *(ushort *)(&DAT_14993f5e0 + (ulonglong)(uVar5 >> 4) * 2);
        } while( true );
      }
    }
    else {
LAB_1424d7696:
      if (param_1 == 0x130) {
LAB_1424d75ce:
        puVar9 = &DAT_14993ef70;
LAB_1424d75d5:
        *param_4 = puVar9;
        return 2;
      }
      if (param_1 == 0x3a3) {
        uVar14 = (undefined7)((ulonglong)puVar13 >> 8);
        cVar4 = FUN_1424d7780(param_2,param_3,CONCAT71(uVar14,1));
        if ((cVar4 == '\0') &&
           (cVar4 = FUN_1424d7780(param_2,param_3,CONCAT71(uVar14,0xff)), cVar4 != '\0')) {
          return 0x3c2;
        }
      }
    }
  }
LAB_1424d76cc:
  if (((uVar2 & 2) != 0) && ((uVar3 & 0x10) != 0)) {
    uVar10 = (ulonglong)(byte)(&DAT_14993ee70)[uVar3 & 0xf];
    if ((uVar3 & 0x100) == 0) {
      uVar7 = (uint)puVar13[uVar10];
    }
    else {
      uVar7 = CONCAT22(puVar13[uVar10 * 2],*(undefined2 *)(&DAT_14993f5e4 + uVar10 * 4 + lVar1));
    }
    uVar6 = -uVar7;
    if ((uVar3 & 0x400) == 0) {
      uVar6 = uVar7;
    }
    return uVar6 + param_1;
  }
  if ((uVar3 & 1) != 0) {
    if ((uVar3 & 0x100) == 0) {
      uVar7 = (uint)*puVar13;
    }
    else {
      uVar7 = CONCAT22(*(undefined2 *)(&DAT_14993f5e2 + uVar10 * 2),
                       *(undefined2 *)(&DAT_14993f5e4 + uVar10 * 2));
    }
  }
LAB_1424d7007:
  return -(uint)(uVar7 == param_1) ^ uVar7;
}



// FUNCTION 1424d7780 FUN_1424d7780 body=331 status=ok
// SIG undefined FUN_1424d7780(void)

ulonglong FUN_1424d7780(code *param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong unaff_RBX;
  
  if ((param_1 == (code *)0x0) || (uVar3 = (*param_1)(param_2,param_3), (int)uVar3 < 0)) {
    unaff_RBX = 0;
    goto LAB_1424d78c8;
  }
  if (uVar3 < 0xd800) {
    uVar5 = uVar3 >> 5;
LAB_1424d7807:
    lVar6 = (ulonglong)(uVar3 & 0x1f) +
            (ulonglong)*(ushort *)(&DAT_1499405e0 + (ulonglong)uVar5 * 2) * 4;
  }
  else {
    if (uVar3 < 0x10000) {
      uVar5 = (uVar3 >> 5) + 0x140;
      if (0xdbff < uVar3) {
        uVar5 = uVar3 >> 5;
      }
      goto LAB_1424d7807;
    }
    lVar6 = 0xd58;
    if ((uVar3 < 0x110000) && (lVar6 = 0x2fd0, uVar3 < 0xe0800)) {
      uVar5 = (uVar3 >> 5 & 0x3f) +
              (uint)*(ushort *)(&DAT_149941620 + (ulonglong)(uVar3 >> 0xb) * 2);
      goto LAB_1424d7807;
    }
  }
  uVar2 = *(ushort *)(&DAT_1499405e0 + lVar6 * 2) & 7;
  if (3 < uVar2) {
    unaff_RBX = 0;
    do {
      uVar4 = (*param_1)(param_2,0);
      uVar3 = (uint)uVar4;
      if ((int)uVar3 < 0) goto LAB_1424d78c8;
      if (uVar3 < 0xd800) {
        uVar5 = (uint)(uVar4 >> 5) & 0x7ffffff;
LAB_1424d7845:
        lVar6 = (ulonglong)(uVar3 & 0x1f) +
                (ulonglong)*(ushort *)(&DAT_1499405e0 + (ulonglong)uVar5 * 2) * 4;
      }
      else {
        if (uVar3 < 0x10000) {
          uVar1 = (uint)(uVar4 >> 5) & 0x7ffffff;
          uVar5 = uVar1 + 0x140;
          if (0xdbff < uVar3) {
            uVar5 = uVar1;
          }
          goto LAB_1424d7845;
        }
        lVar6 = 0xd58;
        if ((uVar3 < 0x110000) && (lVar6 = 0x2fd0, uVar3 < 0xe0800)) {
          uVar5 = ((uint)(uVar4 >> 5) & 0x3f) +
                  (uint)*(ushort *)(&DAT_149941620 + (uVar4 >> 0xb & 0x1fffff) * 2);
          goto LAB_1424d7845;
        }
      }
      uVar2 = *(ushort *)(&DAT_1499405e0 + lVar6 * 2) & 7;
    } while (3 < uVar2);
  }
  unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),uVar2 != 0);
LAB_1424d78c8:
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 1424d78e0 FUN_1424d78e0 body=28 status=ok
// SIG undefined FUN_1424d78e0(void)

void FUN_1424d78e0(void)

{
  FUN_1424d7900();
  return;
}



// FUNCTION 1424d7900 FUN_1424d7900 body=1014 status=ok
// SIG undefined FUN_1424d7900(void)

uint FUN_1424d7900(uint param_1,code *param_2,undefined8 param_3,undefined8 *param_4,int param_5,
                  char param_6)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ulonglong uVar5;
  sbyte sVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ushort *puVar10;
  
  if (param_1 < 0xd800) {
    uVar7 = param_1 >> 5;
LAB_1424d797d:
    uVar7 = (param_1 & 0x1f) + (uint)*(ushort *)(&DAT_1499405e0 + (ulonglong)uVar7 * 2) * 4;
  }
  else {
    if (param_1 < 0x10000) {
      uVar7 = (param_1 >> 5) + 0x140;
      if (0xdbff < param_1) {
        uVar7 = param_1 >> 5;
      }
      goto LAB_1424d797d;
    }
    uVar7 = 0xd58;
    if ((param_1 < 0x110000) && (uVar7 = 0x2fd0, param_1 < 0xe0800)) {
      uVar7 = (param_1 >> 5 & 0x3f) +
              (uint)*(ushort *)(&DAT_149941620 + (ulonglong)(param_1 >> 0xb) * 2);
      goto LAB_1424d797d;
    }
  }
  uVar2 = *(ushort *)(&DAT_1499405e0 + (ulonglong)uVar7 * 2);
  if ((uVar2 & 8) == 0) {
    uVar7 = param_1;
    if ((uVar2 & 3) == 1) {
      uVar7 = ((int)(short)uVar2 >> 7) + param_1;
    }
    goto LAB_1424d79bd;
  }
  lVar1 = (ulonglong)(uVar2 >> 4) * 2;
  uVar3 = *(ushort *)(&DAT_14993f5e0 + (ulonglong)(uVar2 >> 4) * 2);
  if ((uVar3 & 0x4000) == 0) {
    if ((char)uVar3 < '\0') {
      puVar10 = (ushort *)
                (&DAT_14993f5e4 + (ulonglong)(byte)(&DAT_14993ee70)[uVar3 & 0x7f] * 4 + lVar1);
      if ((uVar3 & 0x100) == 0) {
        puVar10 = (ushort *)
                  (&DAT_14993f5e2 + (ulonglong)(byte)(&DAT_14993ee70)[uVar3 & 0x7f] * 2 + lVar1);
      }
      uVar4 = *puVar10;
      uVar7 = (uint)(uVar4 >> 0xc);
      if (param_6 != '\0') {
        uVar7 = (uint)(uVar4 >> 8);
      }
      if ((uVar7 & 0xf) != 0) {
        uVar5 = 0;
        if (param_6 == '\0') {
          uVar5 = (ulonglong)(uVar4 >> 8 & 0xf);
        }
        *param_4 = puVar10 + (ulonglong)(uVar4 & 0xf) + (ulonglong)(uVar4 >> 4 & 0xf) + uVar5 + 1;
        return uVar7 & 0xf;
      }
    }
  }
  else {
    if ((param_1 == 0x69) && (param_5 == 2)) {
      return 0x130;
    }
    if ((((param_2 != (code *)0x0) && (param_1 == 0x307)) && (param_5 == 3)) &&
       (uVar7 = (*param_2)(param_3,0xff), -1 < (int)uVar7)) {
      if (uVar7 < 0xd800) {
        uVar8 = uVar7 >> 5;
LAB_1424d7b40:
        lVar9 = (ulonglong)(uVar7 & 0x1f) +
                (ulonglong)*(ushort *)(&DAT_1499405e0 + (ulonglong)uVar8 * 2) * 4;
      }
      else {
        if (uVar7 < 0x10000) {
          uVar8 = (uVar7 >> 5) + 0x140;
          if (0xdbff < uVar7) {
            uVar8 = uVar7 >> 5;
          }
          goto LAB_1424d7b40;
        }
        lVar9 = 0xd58;
        if ((uVar7 < 0x110000) && (lVar9 = 0x2fd0, uVar7 < 0xe0800)) {
          uVar8 = (uVar7 >> 5 & 0x3f) +
                  (uint)*(ushort *)(&DAT_149941620 + (ulonglong)(uVar7 >> 0xb) * 2);
          goto LAB_1424d7b40;
        }
      }
      uVar4 = *(ushort *)(&DAT_1499405e0 + lVar9 * 2);
      if ((uVar4 & 8) != 0) {
        uVar4 = *(ushort *)(&DAT_14993f5e0 + (ulonglong)(uVar4 >> 4) * 2) >> 7;
      }
      if ((uVar4 & 0x60) == 0x20) {
LAB_1424d7c29:
        *param_4 = 0;
        return 0;
      }
      if ((uVar4 & 0x60) == 0x60) {
        do {
          uVar7 = (*param_2)(param_3,0);
          if ((int)uVar7 < 0) goto LAB_1424d7c37;
          if (uVar7 < 0xd800) {
            uVar8 = uVar7 >> 5;
LAB_1424d7bfa:
            lVar9 = (ulonglong)(uVar7 & 0x1f) +
                    (ulonglong)*(ushort *)(&DAT_1499405e0 + (ulonglong)uVar8 * 2) * 4;
          }
          else {
            if (uVar7 < 0x10000) {
              uVar8 = (uVar7 >> 5) + 0x140;
              if (0xdbff < uVar7) {
                uVar8 = uVar7 >> 5;
              }
              goto LAB_1424d7bfa;
            }
            lVar9 = 0xd58;
            if ((uVar7 < 0x110000) && (lVar9 = 0x2fd0, uVar7 < 0xe0800)) {
              uVar8 = (uVar7 >> 5 & 0x3f) +
                      (uint)*(ushort *)(&DAT_149941620 + (ulonglong)(uVar7 >> 0xb) * 2);
              goto LAB_1424d7bfa;
            }
          }
          uVar4 = *(ushort *)(&DAT_1499405e0 + lVar9 * 2);
          if ((uVar4 & 8) != 0) {
            uVar4 = *(ushort *)(&DAT_14993f5e0 + (ulonglong)(uVar4 >> 4) * 2) >> 7;
          }
        } while ((uVar4 & 0x60) == 0x60);
        if ((uVar4 & 0x60) == 0x20) goto LAB_1424d7c29;
      }
    }
  }
LAB_1424d7c37:
  if (((uVar2 & 3) == 1) && ((uVar3 & 0x10) != 0)) {
    uVar5 = (ulonglong)(byte)(&DAT_14993ee70)[uVar3 & 0xf];
    if ((uVar3 & 0x100) == 0) {
      uVar7 = (uint)*(ushort *)(&DAT_14993f5e2 + uVar5 * 2 + lVar1);
    }
    else {
      uVar7 = CONCAT22(*(undefined2 *)(&DAT_14993f5e2 + uVar5 * 4 + lVar1),
                       *(undefined2 *)(&DAT_14993f5e4 + uVar5 * 4 + lVar1));
    }
    uVar8 = -uVar7;
    if ((uVar3 & 0x400) == 0) {
      uVar8 = uVar7;
    }
    return uVar8 + param_1;
  }
  if (((param_6 != '\0') || (sVar6 = 3, (uVar3 & 8) == 0)) && (sVar6 = 2, (uVar3 & 4) == 0)) {
    return ~param_1;
  }
  uVar5 = (ulonglong)(byte)(&DAT_14993ee70)[(uint)uVar3 & ~(-1 << sVar6)];
  if ((uVar3 & 0x100) == 0) {
    uVar7 = (uint)*(ushort *)(&DAT_14993f5e2 + uVar5 * 2 + lVar1);
  }
  else {
    uVar7 = CONCAT22(*(undefined2 *)(&DAT_14993f5e2 + uVar5 * 4 + lVar1),
                     *(undefined2 *)(&DAT_14993f5e4 + uVar5 * 4 + lVar1));
  }
LAB_1424d79bd:
  return -(uint)(uVar7 == param_1) ^ uVar7;
}



// FUNCTION 1424d7d00 FUN_1424d7d00 body=28 status=ok
// SIG undefined FUN_1424d7d00(void)

void FUN_1424d7d00(void)

{
  FUN_1424d7900();
  return;
}



// FUNCTION 1424d7d20 FUN_1424d7d20 body=458 status=ok
// SIG undefined FUN_1424d7d20(void)

uint FUN_1424d7d20(uint param_1,ulonglong param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  sbyte sVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  if (param_1 < 0xd800) {
    uVar5 = param_1 >> 5;
  }
  else if (param_1 < 0x10000) {
    uVar5 = (param_1 >> 5) + 0x140;
    if (0xdbff < param_1) {
      uVar5 = param_1 >> 5;
    }
  }
  else {
    lVar6 = 0xd58;
    if ((0x10ffff < param_1) || (lVar6 = 0x2fd0, 0xe07ff < param_1)) goto LAB_1424d7d6c;
    uVar5 = (param_1 >> 5 & 0x3f) +
            (uint)*(ushort *)(&DAT_149941620 + (ulonglong)(param_1 >> 0xb) * 2);
  }
  lVar6 = (ulonglong)(param_1 & 0x1f) +
          (ulonglong)*(ushort *)(&DAT_1499405e0 + (ulonglong)uVar5 * 2) * 4;
LAB_1424d7d6c:
  uVar1 = *(ushort *)(&DAT_1499405e0 + lVar6 * 2);
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 2) != 0) {
      return param_1 + ((int)(short)uVar1 >> 7);
    }
  }
  else {
    uVar2 = *(ushort *)(&DAT_14993f5e0 + (ulonglong)(uVar1 >> 4) * 2);
    if ((short)uVar2 < 0) {
      if ((param_2 & 7) == 0) {
        if (param_1 == 0x49) {
          return 0x69;
        }
        if (param_1 == 0x130) {
          return 0x130;
        }
      }
      else {
        if (param_1 == 0x49) {
          return 0x131;
        }
        if (param_1 == 0x130) {
          return 0x69;
        }
      }
    }
    if ((uVar2 & 0x200) == 0) {
      lVar6 = (ulonglong)(uVar1 >> 4) * 2;
      if (((uVar1 & 2) != 0) && ((uVar2 & 0x10) != 0)) {
        uVar3 = (ulonglong)(byte)(&DAT_14993ee70)[uVar2 & 0xf];
        if ((uVar2 & 0x100) == 0) {
          uVar5 = (uint)*(ushort *)(&DAT_14993f5e2 + uVar3 * 2 + lVar6);
        }
        else {
          uVar5 = CONCAT22(*(undefined2 *)(&DAT_14993f5e2 + uVar3 * 4 + lVar6),
                           *(undefined2 *)(&DAT_14993f5e4 + uVar3 * 4 + lVar6));
        }
        uVar7 = -uVar5;
        if ((uVar2 & 0x400) == 0) {
          uVar7 = uVar5;
        }
        return param_1 + uVar7;
      }
      sVar4 = 1;
      if (((uVar2 & 2) != 0) || (sVar4 = 0, (uVar2 & 1) != 0)) {
        uVar3 = (ulonglong)(byte)(&DAT_14993ee70)[(uint)uVar2 & ~(-1 << sVar4)];
        if ((uVar2 & 0x100) == 0) {
          return (uint)*(ushort *)(&DAT_14993f5e2 + uVar3 * 2 + lVar6);
        }
        param_1 = CONCAT22(*(undefined2 *)(&DAT_14993f5e2 + uVar3 * 4 + lVar6),
                           *(undefined2 *)(&DAT_14993f5e4 + uVar3 * 4 + lVar6));
      }
    }
  }
  return param_1;
}



// FUNCTION 1424d7ef0 FUN_1424d7ef0 body=578 status=ok
// SIG undefined FUN_1424d7ef0(void)

uint FUN_1424d7ef0(uint param_1,undefined8 *param_2,ulonglong param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  sbyte sVar7;
  uint uVar8;
  ushort *puVar9;
  
  if (param_1 < 0xd800) {
    uVar8 = param_1 >> 5;
LAB_1424d7f27:
    lVar5 = (ulonglong)(param_1 & 0x1f) +
            (ulonglong)*(ushort *)(&DAT_1499405e0 + (ulonglong)uVar8 * 2) * 4;
  }
  else {
    if (param_1 < 0x10000) {
      uVar8 = (param_1 >> 5) + 0x140;
      if (0xdbff < param_1) {
        uVar8 = param_1 >> 5;
      }
      goto LAB_1424d7f27;
    }
    lVar5 = 0xd58;
    if ((param_1 < 0x110000) && (lVar5 = 0x2fd0, param_1 < 0xe0800)) {
      uVar8 = (param_1 >> 5 & 0x3f) +
              (uint)*(ushort *)(&DAT_149941620 + (ulonglong)(param_1 >> 0xb) * 2);
      goto LAB_1424d7f27;
    }
  }
  uVar1 = *(ushort *)(&DAT_1499405e0 + lVar5 * 2);
  if ((uVar1 & 8) == 0) {
    uVar8 = param_1;
    if ((uVar1 & 2) != 0) {
      uVar8 = ((int)(short)uVar1 >> 7) + param_1;
    }
LAB_1424d7f5f:
    uVar8 = -(uint)(uVar8 == param_1) ^ uVar8;
  }
  else {
    lVar5 = (ulonglong)(uVar1 >> 4) * 2;
    uVar2 = *(ushort *)(&DAT_14993f5e0 + (ulonglong)(uVar1 >> 4) * 2);
    uVar8 = (uint)uVar2;
    if ((short)uVar2 < 0) {
      if ((param_3 & 7) == 0) {
        if (param_1 == 0x49) {
          return 0x69;
        }
        if (param_1 == 0x130) {
          *param_2 = &DAT_14993ef70;
          return 2;
        }
      }
      else {
        if (param_1 == 0x49) {
          return 0x131;
        }
        if (param_1 == 0x130) {
          return 0x69;
        }
      }
    }
    else if ((char)uVar2 < '\0') {
      puVar9 = (ushort *)
               (&DAT_14993f5e4 + (ulonglong)(byte)(&DAT_14993ee70)[uVar8 & 0x7f] * 4 + lVar5);
      if ((uVar2 & 0x100) == 0) {
        puVar9 = (ushort *)
                 (&DAT_14993f5e2 + (ulonglong)(byte)(&DAT_14993ee70)[uVar8 & 0x7f] * 2 + lVar5);
      }
      uVar3 = *puVar9 >> 4;
      if ((uVar3 & 0xf) != 0) {
        *param_2 = puVar9 + (ulonglong)(*puVar9 & 0xf) + 1;
        return uVar3 & 0xf;
      }
    }
    if ((uVar2 & 0x200) == 0) {
      if (((uVar1 & 2) != 0) && ((uVar2 & 0x10) != 0)) {
        uVar6 = (ulonglong)(byte)(&DAT_14993ee70)[uVar8 & 0xf];
        if ((uVar2 & 0x100) == 0) {
          uVar8 = (uint)*(ushort *)(&DAT_14993f5e2 + uVar6 * 2 + lVar5);
        }
        else {
          uVar8 = CONCAT22(*(undefined2 *)(&DAT_14993f5e2 + uVar6 * 4 + lVar5),
                           *(undefined2 *)(&DAT_14993f5e4 + uVar6 * 4 + lVar5));
        }
        uVar4 = -uVar8;
        if ((uVar2 & 0x400) == 0) {
          uVar4 = uVar8;
        }
        return uVar4 + param_1;
      }
      sVar7 = 1;
      if (((uVar2 & 2) != 0) || (sVar7 = 0, (uVar2 & 1) != 0)) {
        uVar6 = (ulonglong)(byte)(&DAT_14993ee70)[uVar8 & ~(-1 << sVar7)];
        if ((uVar2 & 0x100) == 0) {
          uVar8 = (uint)*(ushort *)(&DAT_14993f5e2 + uVar6 * 2 + lVar5);
        }
        else {
          uVar8 = CONCAT22(*(undefined2 *)(&DAT_14993f5e2 + uVar6 * 4 + lVar5),
                           *(undefined2 *)(&DAT_14993f5e4 + uVar6 * 4 + lVar5));
        }
        goto LAB_1424d7f5f;
      }
    }
    uVar8 = ~param_1;
  }
  return uVar8;
}



// FUNCTION 1424d8140 thunk_FUN_1424d7d20 body=5 status=ok
// SIG undefined thunk_FUN_1424d7d20(void)

uint thunk_FUN_1424d7d20(uint param_1,ulonglong param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  sbyte sVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  if (param_1 < 0xd800) {
    uVar5 = param_1 >> 5;
  }
  else if (param_1 < 0x10000) {
    uVar5 = (param_1 >> 5) + 0x140;
    if (0xdbff < param_1) {
      uVar5 = param_1 >> 5;
    }
  }
  else {
    lVar6 = 0xd58;
    if ((0x10ffff < param_1) || (lVar6 = 0x2fd0, 0xe07ff < param_1)) goto LAB_1424d7d6c;
    uVar5 = (param_1 >> 5 & 0x3f) +
            (uint)*(ushort *)(&DAT_149941620 + (ulonglong)(param_1 >> 0xb) * 2);
  }
  lVar6 = (ulonglong)(param_1 & 0x1f) +
          (ulonglong)*(ushort *)(&DAT_1499405e0 + (ulonglong)uVar5 * 2) * 4;
LAB_1424d7d6c:
  uVar1 = *(ushort *)(&DAT_1499405e0 + lVar6 * 2);
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 2) != 0) {
      return param_1 + ((int)(short)uVar1 >> 7);
    }
  }
  else {
    uVar2 = *(ushort *)(&DAT_14993f5e0 + (ulonglong)(uVar1 >> 4) * 2);
    if ((short)uVar2 < 0) {
      if ((param_2 & 7) == 0) {
        if (param_1 == 0x49) {
          return 0x69;
        }
        if (param_1 == 0x130) {
          return 0x130;
        }
      }
      else {
        if (param_1 == 0x49) {
          return 0x131;
        }
        if (param_1 == 0x130) {
          return 0x69;
        }
      }
    }
    if ((uVar2 & 0x200) == 0) {
      lVar6 = (ulonglong)(uVar1 >> 4) * 2;
      if (((uVar1 & 2) != 0) && ((uVar2 & 0x10) != 0)) {
        uVar3 = (ulonglong)(byte)(&DAT_14993ee70)[uVar2 & 0xf];
        if ((uVar2 & 0x100) == 0) {
          uVar5 = (uint)*(ushort *)(&DAT_14993f5e2 + uVar3 * 2 + lVar6);
        }
        else {
          uVar5 = CONCAT22(*(undefined2 *)(&DAT_14993f5e2 + uVar3 * 4 + lVar6),
                           *(undefined2 *)(&DAT_14993f5e4 + uVar3 * 4 + lVar6));
        }
        uVar7 = -uVar5;
        if ((uVar2 & 0x400) == 0) {
          uVar7 = uVar5;
        }
        return param_1 + uVar7;
      }
      sVar4 = 1;
      if (((uVar2 & 2) != 0) || (sVar4 = 0, (uVar2 & 1) != 0)) {
        uVar3 = (ulonglong)(byte)(&DAT_14993ee70)[(uint)uVar2 & ~(-1 << sVar4)];
        if ((uVar2 & 0x100) == 0) {
          return (uint)*(ushort *)(&DAT_14993f5e2 + uVar3 * 2 + lVar6);
        }
        param_1 = CONCAT22(*(undefined2 *)(&DAT_14993f5e2 + uVar3 * 4 + lVar6),
                           *(undefined2 *)(&DAT_14993f5e4 + uVar3 * 4 + lVar6));
      }
    }
  }
  return param_1;
}



// FUNCTION 1424d8150 FUN_1424d8150 body=1221 status=ok
// SIG undefined FUN_1424d8150(void)

void FUN_1424d8150(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_30;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switch(param_2) {
  case 0x16:
    break;
  case 0x1b:
    break;
  case 0x1e:
    break;
  case 0x22:
    break;
  case 0x31:
    break;
  case 0x32:
    break;
  case 0x33:
    local_38 = 1;
    FUN_1424d6f50(param_1,0,0,local_20);
    break;
  case 0x34:
    local_30 = 1;
    goto LAB_1424d827f;
  case 0x37:
    local_38 = 1;
    iVar1 = FUN_1424d6f50(param_1,0,0,local_20);
    if (-1 < iVar1) break;
    local_30 = 1;
    local_38 = 1;
    iVar1 = FUN_1424d7900(param_1,0,0,local_20);
    if (-1 < iVar1) break;
  case 0x35:
    local_30 = 0;
LAB_1424d827f:
    local_38 = 1;
    FUN_1424d7900(param_1,0,0,local_20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 1424d8620 FUN_1424d8620 body=108 status=ok
// SIG undefined FUN_1424d8620(void)

void FUN_1424d8620(int *param_1)

{
  char cVar1;
  
  if (*param_1 < 1) {
    if (DAT_14c77ec28 != 2) {
      cVar1 = FUN_142501800(&DAT_14c77ec28);
      if (cVar1 != '\0') {
        FUN_1425807a0(param_1);
        FUN_1424d6720(0x14,&LAB_1424d8690);
        DAT_14c77ec2c = *param_1;
        FUN_1425019c0(&DAT_14c77ec28);
        return;
      }
    }
    if (0 < DAT_14c77ec2c) {
      *param_1 = DAT_14c77ec2c;
    }
  }
  return;
}



// FUNCTION 1424d86a0 FUN_1424d86a0 body=122 status=ok
// SIG undefined FUN_1424d86a0(void)

byte FUN_1424d86a0(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 < 0xd800) {
    uVar1 = param_1 >> 5;
  }
  else if (param_1 < 0x10000) {
    uVar1 = (param_1 >> 5) + 0x140;
    if (0xdbff < param_1) {
      uVar1 = param_1 >> 5;
    }
  }
  else {
    lVar2 = 0x11f4;
    if (0x10ffff < param_1) goto LAB_1424d870c;
    uVar1 = (param_1 >> 5 & 0x3f) +
            (uint)*(ushort *)(&DAT_14994e420 + (ulonglong)(param_1 >> 0xb) * 2);
  }
  lVar2 = (ulonglong)(param_1 & 0x1f) +
          (ulonglong)*(ushort *)(&DAT_14994d3e0 + (ulonglong)uVar1 * 2) * 4;
LAB_1424d870c:
  return (&DAT_14994d3e0)[lVar2 * 2] & 0x1f;
}



// FUNCTION 1424d8720 FUN_1424d8720 body=130 status=ok
// SIG undefined FUN_1424d8720(void)

bool FUN_1424d8720(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 < 0xd800) {
    uVar1 = param_1 >> 5;
  }
  else if (param_1 < 0x10000) {
    uVar1 = (param_1 >> 5) + 0x140;
    if (0xdbff < param_1) {
      uVar1 = param_1 >> 5;
    }
  }
  else {
    lVar2 = 0x11f4;
    if (0x10ffff < param_1) goto LAB_1424d878c;
    uVar1 = (param_1 >> 5 & 0x3f) +
            (uint)*(ushort *)(&DAT_14994e420 + (ulonglong)(param_1 >> 0xb) * 2);
  }
  lVar2 = (ulonglong)(param_1 & 0x1f) +
          (ulonglong)*(ushort *)(&DAT_14994d3e0 + (ulonglong)uVar1 * 2) * 4;
LAB_1424d878c:
  return (*(ushort *)(&DAT_14994d3e0 + lVar2 * 2) & 0x1f) == 2;
}



// FUNCTION 1424d87b0 FUN_1424d87b0 body=130 status=ok
// SIG undefined FUN_1424d87b0(void)

bool FUN_1424d87b0(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 < 0xd800) {
    uVar1 = param_1 >> 5;
  }
  else if (param_1 < 0x10000) {
    uVar1 = (param_1 >> 5) + 0x140;
    if (0xdbff < param_1) {
      uVar1 = param_1 >> 5;
    }
  }
  else {
    lVar2 = 0x11f4;
    if (0x10ffff < param_1) goto LAB_1424d881c;
    uVar1 = (param_1 >> 5 & 0x3f) +
            (uint)*(ushort *)(&DAT_14994e420 + (ulonglong)(param_1 >> 0xb) * 2);
  }
  lVar2 = (ulonglong)(param_1 & 0x1f) +
          (ulonglong)*(ushort *)(&DAT_14994d3e0 + (ulonglong)uVar1 * 2) * 4;
LAB_1424d881c:
  return (*(ushort *)(&DAT_14994d3e0 + lVar2 * 2) & 0x1f) == 9;
}



// FUNCTION 1424d8840 FUN_1424d8840 body=171 status=ok
// SIG undefined FUN_1424d8840(void)

bool FUN_1424d8840(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (((param_1 - 0x41 < 0x26) && (param_1 - 0x61 < 0xffffffe6)) ||
     ((param_1 - 0xff21 < 0x26 && (param_1 - 0xff41 < 0xffffffe6)))) {
    return true;
  }
  if (param_1 < 0xd800) {
    uVar1 = param_1 >> 5;
  }
  else if (param_1 < 0x10000) {
    uVar1 = (param_1 >> 5) + 0x140;
    if (0xdbff < param_1) {
      uVar1 = param_1 >> 5;
    }
  }
  else {
    lVar2 = 0x11f4;
    if (0x10ffff < param_1) goto LAB_1424d88d5;
    uVar1 = (param_1 >> 5 & 0x3f) +
            (uint)*(ushort *)(&DAT_14994e420 + (ulonglong)(param_1 >> 0xb) * 2);
  }
  lVar2 = (ulonglong)(param_1 & 0x1f) +
          (ulonglong)*(ushort *)(&DAT_14994d3e0 + (ulonglong)uVar1 * 2) * 4;
LAB_1424d88d5:
  return (*(ushort *)(&DAT_14994d3e0 + lVar2 * 2) & 0x1f) == 9;
}



// FUNCTION 1424d88f0 FUN_1424d88f0 body=154 status=ok
// SIG undefined FUN_1424d88f0(void)

undefined4 FUN_1424d88f0(uint param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if (2 < param_2) {
    return 0;
  }
  if (param_1 < 0xd800) {
    uVar1 = param_1 >> 5;
  }
  else if (param_1 < 0x10000) {
    uVar1 = (param_1 >> 5) + 0x140;
    if (0xdbff < param_1) {
      uVar1 = param_1 >> 5;
    }
  }
  else {
    lVar2 = 0x13d8;
    if (0x10ffff < param_1) goto LAB_1424d896e;
    uVar1 = (param_1 >> 5 & 0x3f) +
            (uint)*(ushort *)(&DAT_149958fc0 + (ulonglong)(param_1 >> 0xb) * 2);
  }
  lVar2 = (ulonglong)(param_1 & 0x1f) +
          (ulonglong)*(ushort *)(&DAT_149957f80 + (ulonglong)uVar1 * 2) * 4;
LAB_1424d896e:
  return *(undefined4 *)
          (&DAT_149946750 +
          ((longlong)param_2 + (ulonglong)*(ushort *)(&DAT_149957f80 + lVar2 * 2)) * 4);
}



// FUNCTION 1424d8990 FUN_1424d8990 body=272 status=ok
// SIG undefined FUN_1424d8990(void)

ulonglong FUN_1424d8990(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 < 0xd800) {
    uVar1 = param_1 >> 5;
LAB_1424d89e8:
    lVar2 = (ulonglong)(param_1 & 0x1f) +
            (ulonglong)*(ushort *)(&DAT_149957f80 + (ulonglong)uVar1 * 2) * 4;
  }
  else {
    if (param_1 < 0x10000) {
      uVar1 = (param_1 >> 5) + 0x140;
      if (0xdbff < param_1) {
        uVar1 = param_1 >> 5;
      }
      goto LAB_1424d89e8;
    }
    lVar2 = 0x13d8;
    if (param_1 < 0x110000) {
      uVar1 = (param_1 >> 5 & 0x3f) +
              (uint)*(ushort *)(&DAT_149958fc0 + (ulonglong)(param_1 >> 0xb) * 2);
      goto LAB_1424d89e8;
    }
  }
  if (((&DAT_149946755)[(ulonglong)*(ushort *)(&DAT_149957f80 + lVar2 * 2) * 4] & 1) != 0) {
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  if (param_1 < 0xd800) {
    uVar1 = param_1 >> 5;
  }
  else if (param_1 < 0x10000) {
    uVar1 = (param_1 >> 5) + 0x140;
    if (0xdbff < param_1) {
      uVar1 = param_1 >> 5;
    }
  }
  else {
    lVar2 = 0x11f4;
    if (0x10ffff < param_1) goto LAB_1424d8a8a;
    uVar1 = (param_1 >> 5 & 0x3f) +
            (uint)*(ushort *)(&DAT_14994e420 + (ulonglong)(param_1 >> 0xb) * 2);
  }
  lVar2 = (ulonglong)(param_1 & 0x1f) +
          (ulonglong)*(ushort *)(&DAT_14994d3e0 + (ulonglong)uVar1 * 2) * 4;
LAB_1424d8a8a:
  return (ulonglong)((*(ushort *)(&DAT_14994d3e0 + lVar2 * 2) & 0x1f) == 9);
}



// FUNCTION 1424d8aa0 FUN_1424d8aa0 body=153 status=ok
// SIG undefined FUN_1424d8aa0(void)

bool FUN_1424d8aa0(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 < 0xa0) {
    return param_1 == 0x20 || param_1 == 9;
  }
  if (param_1 < 0xd800) {
    uVar1 = param_1 >> 5;
  }
  else if (param_1 < 0x10000) {
    uVar1 = (param_1 >> 5) + 0x140;
    if (0xdbff < param_1) {
      uVar1 = param_1 >> 5;
    }
  }
  else {
    lVar2 = 0x11f4;
    if (0x10ffff < param_1) goto LAB_1424d8b23;
    uVar1 = (param_1 >> 5 & 0x3f) +
            (uint)*(ushort *)(&DAT_14994e420 + (ulonglong)(param_1 >> 0xb) * 2);
  }
  lVar2 = (ulonglong)(param_1 & 0x1f) +
          (ulonglong)*(ushort *)(&DAT_14994d3e0 + (ulonglong)uVar1 * 2) * 4;
LAB_1424d8b23:
  return (*(ushort *)(&DAT_14994d3e0 + lVar2 * 2) & 0x1f) == 0xc;
}



// FUNCTION 1424d8b40 FUN_1424d8b40 body=134 status=ok
// SIG undefined FUN_1424d8b40(void)

byte FUN_1424d8b40(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 < 0xd800) {
    uVar1 = param_1 >> 5;
  }
  else if (param_1 < 0x10000) {
    uVar1 = (param_1 >> 5) + 0x140;
    if (0xdbff < param_1) {
      uVar1 = param_1 >> 5;
    }
  }
  else {
    lVar2 = 0x13d8;
    if (0x10ffff < param_1) goto LAB_1424d8bac;
    uVar1 = (param_1 >> 5 & 0x3f) +
            (uint)*(ushort *)(&DAT_149958fc0 + (ulonglong)(param_1 >> 0xb) * 2);
  }
  lVar2 = (ulonglong)(param_1 & 0x1f) +
          (ulonglong)*(ushort *)(&DAT_149957f80 + (ulonglong)uVar1 * 2) * 4;
LAB_1424d8bac:
  return (&DAT_149946754)[(ulonglong)*(ushort *)(&DAT_149957f80 + lVar2 * 2) * 4] & 1;
}



// FUNCTION 1424d8bd0 FUN_1424d8bd0 body=325 status=ok
// SIG undefined FUN_1424d8bd0(void)

undefined * FUN_1424d8bd0(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_1 < 0xd800) {
    uVar3 = (ulonglong)(param_1 >> 5);
    if ((*(ushort *)
          (&DAT_14994d3e0 +
          ((ulonglong)(param_1 & 0x1f) + (ulonglong)*(ushort *)(&DAT_14994d3e0 + uVar3 * 2) * 4) * 2
          ) & 0x1f) == 0xc) {
      return &DAT_14994d301;
    }
  }
  else {
    if (param_1 < 0x10000) {
      uVar1 = (param_1 >> 5) + 0x140;
      if (0xdbff < param_1) {
        uVar1 = param_1 >> 5;
      }
      if ((*(ushort *)
            (&DAT_14994d3e0 +
            ((ulonglong)(param_1 & 0x1f) +
            (ulonglong)*(ushort *)(&DAT_14994d3e0 + (ulonglong)uVar1 * 2) * 4) * 2) & 0x1f) == 0xc)
      {
        return &DAT_14994d301;
      }
    }
    else {
      lVar2 = 0x11f4;
      if (param_1 < 0x110000) {
        lVar2 = (ulonglong)(param_1 & 0x1f) +
                (ulonglong)
                *(ushort *)
                 (&DAT_14994d3e0 +
                 ((ulonglong)(param_1 >> 5 & 0x3f) +
                 (ulonglong)*(ushort *)(&DAT_14994e420 + (ulonglong)(param_1 >> 0xb) * 2)) * 2) * 4;
      }
      if ((*(ushort *)(&DAT_14994d3e0 + lVar2 * 2) & 0x1f) == 0xc) {
        return (undefined *)CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
      }
      if (0xffff < param_1) {
        lVar2 = 0x11f4;
        if (0x10ffff < param_1) goto LAB_1424d8cd8;
        uVar3 = (ulonglong)
                ((param_1 >> 5 & 0x3f) +
                (uint)*(ushort *)(&DAT_14994e420 + (ulonglong)(param_1 >> 0xb) * 2));
        goto LAB_1424d8cc4;
      }
    }
    uVar3 = (ulonglong)((param_1 >> 5) + 0x140);
    if (0xdbff < param_1) {
      uVar3 = (ulonglong)(param_1 >> 5);
    }
  }
LAB_1424d8cc4:
  lVar2 = (ulonglong)(param_1 & 0x1f) + (ulonglong)*(ushort *)(&DAT_14994d3e0 + uVar3 * 2) * 4;
LAB_1424d8cd8:
  return (undefined *)(ulonglong)((0x4f001U >> ((byte)(&DAT_14994d3e0)[lVar2 * 2] & 0x1f) & 1) == 0)
  ;
}



// FUNCTION 1424d8d20 FUN_1424d8d20 body=131 status=ok
// SIG undefined FUN_1424d8d20(void)

bool FUN_1424d8d20(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 < 0xd800) {
    uVar1 = param_1 >> 5;
  }
  else if (param_1 < 0x10000) {
    uVar1 = (param_1 >> 5) + 0x140;
    if (0xdbff < param_1) {
      uVar1 = param_1 >> 5;
    }
  }
  else {
    lVar2 = 0x11f4;
    if (0x10ffff < param_1) goto LAB_1424d8d8c;
    uVar1 = (param_1 >> 5 & 0x3f) +
            (uint)*(ushort *)(&DAT_14994e420 + (ulonglong)(param_1 >> 0xb) * 2);
  }
  lVar2 = (ulonglong)(param_1 & 0x1f) +
          (ulonglong)*(ushort *)(&DAT_14994d3e0 + (ulonglong)uVar1 * 2) * 4;
LAB_1424d8d8c:
  return (0x4f001U >> ((byte)(&DAT_14994d3e0)[lVar2 * 2] & 0x1f) & 1) == 0;
}



// FUNCTION 1424d8db0 FUN_1424d8db0 body=140 status=ok
// SIG undefined FUN_1424d8db0(void)

int FUN_1424d8db0(uint param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 < 0xd800) {
    uVar1 = param_1 >> 5;
  }
  else if (param_1 < 0x10000) {
    uVar1 = (param_1 >> 5) + 0x140;
    if (0xdbff < param_1) {
      uVar1 = param_1 >> 5;
    }
  }
  else {
    lVar3 = 0x11f4;
    if (0x10ffff < param_1) goto LAB_1424d8e1c;
    uVar1 = (param_1 >> 5 & 0x3f) +
            (uint)*(ushort *)(&DAT_14994e420 + (ulonglong)(param_1 >> 0xb) * 2);
  }
  lVar3 = (ulonglong)(param_1 & 0x1f) +
          (ulonglong)*(ushort *)(&DAT_14994d3e0 + (ulonglong)uVar1 * 2) * 4;
LAB_1424d8e1c:
  iVar2 = -1;
  if (*(ushort *)(&DAT_14994d3e0 + lVar3 * 2) < 0x2c0) {
    iVar2 = (*(ushort *)(&DAT_14994d3e0 + lVar3 * 2) >> 6) - 1;
  }
  return iVar2;
}



// FUNCTION 1424d8e40 FUN_1424d8e40 body=465 status=ok
// SIG undefined FUN_1424d8e40(void)

double FUN_1424d8e40(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  double dVar7;
  
  if (param_1 < 0xd800) {
    uVar2 = param_1 >> 5;
  }
  else if (param_1 < 0x10000) {
    uVar2 = (param_1 >> 5) + 0x140;
    if (0xdbff < param_1) {
      uVar2 = param_1 >> 5;
    }
  }
  else {
    lVar3 = 0x11f4;
    if (0x10ffff < param_1) goto LAB_1424d8eac;
    uVar2 = (param_1 >> 5 & 0x3f) +
            (uint)*(ushort *)(&DAT_14994e420 + (ulonglong)(param_1 >> 0xb) * 2);
  }
  lVar3 = (ulonglong)(param_1 & 0x1f) +
          (ulonglong)*(ushort *)(&DAT_14994d3e0 + (ulonglong)uVar2 * 2) * 4;
LAB_1424d8eac:
  uVar1 = *(ushort *)(&DAT_14994d3e0 + lVar3 * 2);
  dVar7 = -123456789.0;
  if (0x3f < uVar1) {
    uVar2 = (uint)(uVar1 >> 6);
    if (uVar1 < 0x2c0) {
      return (double)(int)(uVar2 - 1);
    }
    if (uVar1 < 0x540) {
      return (double)(int)(uVar2 - 0xb);
    }
    if (uVar1 < 0x2c00) {
      return (double)(int)(uVar2 - 0x15);
    }
    if (uVar1 < 0x7800) {
      return (double)(int)((uVar1 >> 10) - 0xc) / (double)((uVar2 & 0xf) + 1);
    }
    if (0xbfff < uVar1) {
      if (uVar1 < 0xc900) {
        return (double)(int)(((uVar1 >> 8) - 0xbf) *
                            *(int *)(&DAT_149966e98 + (ulonglong)(uVar2 & 3) * 4));
      }
      if (uVar1 < 0xcf00) {
        bVar4 = (byte)(uVar2 - 0x324 >> 2);
        iVar6 = 0x14;
      }
      else {
        if (0xd2ff < uVar1) {
          return -123456789.0;
        }
        bVar4 = (byte)(uVar2 - 0x33c >> 2);
        iVar6 = 0x20;
      }
      return (double)((uVar2 & 3) * 2 + 1) / (double)(iVar6 << (bVar4 & 0x1f));
    }
    uVar5 = (uVar2 & 0x1f) + 2;
    dVar7 = (double)(int)((uVar1 >> 0xb) - 0xe);
    if (1 < (uVar2 & 0x1f)) {
      do {
        dVar7 = dVar7 * 10000.0;
        uVar5 = uVar5 - 4;
      } while (3 < uVar5);
    }
    if (uVar5 == 1) {
      return dVar7 * 10.0;
    }
    if (uVar5 == 2) {
      return dVar7 * 100.0;
    }
    if (uVar5 == 3) {
      return dVar7 * 1000.0;
    }
  }
  return dVar7;
}



// FUNCTION 1424d9020 FUN_1424d9020 body=294 status=ok
// SIG undefined FUN_1424d9020(void)

int FUN_1424d9020(uint param_1,char param_2)

{
  char cVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  char cVar6;
  
  cVar6 = -1;
  if (0x22 < (byte)(param_2 - 2U)) goto LAB_1424d9139;
  if (param_1 < 0xd800) {
    uVar4 = param_1 >> 5;
LAB_1424d909f:
    lVar5 = (ulonglong)(param_1 & 0x1f) +
            (ulonglong)*(ushort *)(&DAT_14994d3e0 + (ulonglong)uVar4 * 2) * 4;
  }
  else {
    if (param_1 < 0x10000) {
      uVar4 = (param_1 >> 5) + 0x140;
      if (0xdbff < param_1) {
        uVar4 = param_1 >> 5;
      }
      goto LAB_1424d909f;
    }
    lVar5 = 0x11f4;
    if (param_1 < 0x110000) {
      uVar4 = (param_1 >> 5 & 0x3f) +
              (uint)*(ushort *)(&DAT_14994e420 + (ulonglong)(param_1 >> 0xb) * 2);
      goto LAB_1424d909f;
    }
  }
  cVar6 = (char)(*(ushort *)(&DAT_14994d3e0 + lVar5 * 2) >> 6) + -1;
  cVar3 = -1;
  if (*(ushort *)(&DAT_14994d3e0 + lVar5 * 2) < 0x2c0) {
    cVar3 = cVar6;
  }
  if (cVar3 < '\0') {
    cVar1 = (char)param_1;
    if (param_1 - 0x61 < 0x1a) {
      cVar6 = cVar1 + -0x57;
    }
    else if (param_1 - 0x41 < 0x1a) {
      cVar6 = cVar1 + -0x37;
    }
    else if (param_1 - 0xff41 < 0x1a) {
      cVar6 = cVar1 + -0x37;
    }
    else {
      cVar6 = cVar3;
      if (param_1 - 0xff21 < 0x1a) {
        cVar6 = cVar1 + -0x17;
      }
    }
  }
LAB_1424d9139:
  iVar2 = -1;
  if ((int)cVar6 < (int)param_2) {
    iVar2 = (int)cVar6;
  }
  return iVar2;
}



// FUNCTION 1424d9150 FUN_1424d9150 body=120 status=ok
// SIG undefined FUN_1424d9150(void)

undefined2 FUN_1424d9150(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 < 0xd800) {
    uVar1 = param_1 >> 5;
  }
  else if (param_1 < 0x10000) {
    uVar1 = (param_1 >> 5) + 0x140;
    if (0xdbff < param_1) {
      uVar1 = param_1 >> 5;
    }
  }
  else {
    lVar2 = 0x11f4;
    if (0x10ffff < param_1) goto LAB_1424d91bc;
    uVar1 = (param_1 >> 5 & 0x3f) +
            (uint)*(ushort *)(&DAT_14994e420 + (ulonglong)(param_1 >> 0xb) * 2);
  }
  lVar2 = (ulonglong)(param_1 & 0x1f) +
          (ulonglong)*(ushort *)(&DAT_14994d3e0 + (ulonglong)uVar1 * 2) * 4;
LAB_1424d91bc:
  return *(undefined2 *)(&DAT_14994d3e0 + lVar2 * 2);
}



// FUNCTION 1424d91d0 FUN_1424d91d0 body=24 status=ok
// SIG undefined FUN_1424d91d0(void)

undefined4 FUN_1424d91d0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x2a75a31;
  if (param_1 != 2) {
    uVar2 = 0;
  }
  uVar1 = 0xb2cbc;
  if (param_1 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



// FUNCTION 1424d91f0 FUN_1424d91f0 body=168 status=ok
// SIG undefined FUN_1424d91f0(void)

void FUN_1424d91f0(uint param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  
  if (param_2 == (byte *)0x0) {
    return;
  }
  if (param_1 < 0xd800) {
    uVar2 = param_1 >> 5;
  }
  else if (param_1 < 0x10000) {
    uVar2 = (param_1 >> 5) + 0x140;
    if (0xdbff < param_1) {
      uVar2 = param_1 >> 5;
    }
  }
  else {
    lVar3 = 0x13d8;
    if (0x10ffff < param_1) goto LAB_1424d926c;
    uVar2 = (param_1 >> 5 & 0x3f) +
            (uint)*(ushort *)(&DAT_149958fc0 + (ulonglong)(param_1 >> 0xb) * 2);
  }
  lVar3 = (ulonglong)(param_1 & 0x1f) +
          (ulonglong)*(ushort *)(&DAT_149957f80 + (ulonglong)uVar2 * 2) * 4;
LAB_1424d926c:
  bVar1 = (byte)((uint)*(undefined4 *)
                        (&DAT_149946750 + (ulonglong)*(ushort *)(&DAT_149957f80 + lVar3 * 2) * 4) >>
                0x18);
  *param_2 = bVar1 >> 4;
  param_2[1] = bVar1 & 0xf;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}



// FUNCTION 1424d92a0 FUN_1424d92a0 body=205 status=ok
// SIG undefined FUN_1424d92a0(void)

uint FUN_1424d92a0(uint param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0xffffffff;
  if ((param_2 != (int *)0x0) && (*param_2 < 1)) {
    if (0x10ffff < param_1) {
      *param_2 = 1;
      return uVar1;
    }
    if (param_1 < 0xd800) {
      uVar2 = param_1 >> 5;
    }
    else if (param_1 < 0x10000) {
      uVar2 = (param_1 >> 5) + 0x140;
      if (0xdbff < param_1) {
        uVar2 = param_1 >> 5;
      }
    }
    else {
      uVar2 = (param_1 >> 5 & 0x3f) +
              (uint)*(ushort *)(&DAT_149958fc0 + (ulonglong)(param_1 >> 0xb) * 2);
    }
    uVar3 = *(uint *)(&DAT_149946750 +
                     (ulonglong)
                     *(ushort *)
                      (&DAT_149957f80 +
                      ((ulonglong)(param_1 & 0x1f) +
                      (ulonglong)*(ushort *)(&DAT_149957f80 + (ulonglong)uVar2 * 2) * 4) * 2) * 4) &
            0xc000ff;
    if (uVar3 < 0x400000) {
      return uVar3;
    }
    uVar1 = 0;
    if ((0x7fffff < uVar3) && (uVar1 = 1, 0xbfffff < uVar3)) {
      return (uint)*(ushort *)
                    (&DAT_14994d1e0 +
                    (ulonglong)
                    (*(uint *)(&DAT_149946750 +
                              (ulonglong)
                              *(ushort *)
                               (&DAT_149957f80 +
                               ((ulonglong)(param_1 & 0x1f) +
                               (ulonglong)*(ushort *)(&DAT_149957f80 + (ulonglong)uVar2 * 2) * 4) *
                               2) * 4) & 0xff) * 2);
    }
  }
  return uVar1;
}



// FUNCTION 1424d9370 FUN_1424d9370 body=216 status=ok
// SIG undefined FUN_1424d9370(void)

undefined8 FUN_1424d9370(uint param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  ushort *puVar4;
  uint uVar5;
  
  if (param_1 < 0xd800) {
    uVar2 = param_1 >> 5;
  }
  else if (param_1 < 0x10000) {
    uVar2 = (param_1 >> 5) + 0x140;
    if (0xdbff < param_1) {
      uVar2 = param_1 >> 5;
    }
  }
  else {
    lVar3 = 0x13d8;
    if (0x10ffff < param_1) goto LAB_1424d93e3;
    uVar2 = (param_1 >> 5 & 0x3f) +
            (uint)*(ushort *)(&DAT_149958fc0 + (ulonglong)(param_1 >> 0xb) * 2);
  }
  lVar3 = (ulonglong)(param_1 & 0x1f) +
          (ulonglong)*(ushort *)(&DAT_149957f80 + (ulonglong)uVar2 * 2) * 4;
LAB_1424d93e3:
  uVar2 = *(uint *)(&DAT_149946750 + (ulonglong)*(ushort *)(&DAT_149957f80 + lVar3 * 2) * 4);
  puVar4 = (ushort *)(ulonglong)uVar2;
  uVar5 = uVar2 & 0xc000ff;
  if (0x3fffff < uVar5) {
    lVar3 = (ulonglong)(byte)uVar2 * 2;
    if (0xbfffff < uVar5) {
      lVar3 = (ulonglong)*(ushort *)(&DAT_14994d1e2 + lVar3) * 2;
    }
    puVar4 = (ushort *)(&DAT_14994d1e0 + lVar3);
    if (0xbc < (int)param_2) {
      return 0;
    }
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
    } while ((int)(uint)uVar1 < (int)param_2);
    uVar5 = uVar1 & 0x7fff;
  }
  return CONCAT71((int7)((ulonglong)puVar4 >> 8),uVar5 == param_2);
}



// FUNCTION 1424d9460 FUN_1424d9460 body=481 status=ok
// SIG undefined FUN_1424d9460(void)

void FUN_1424d9460(undefined8 *param_1,int *param_2)

{
  if (0 < *param_2) {
    return;
  }
  FUN_14257f9a0(&PTR_DAT_1499466b0,0,FUN_1424d9650,param_1);
  (*(code *)param_1[1])(*param_1,9);
  (*(code *)param_1[1])(*param_1,10);
  (*(code *)param_1[1])(*param_1,0xe);
  (*(code *)param_1[1])(*param_1,0x1c);
  (*(code *)param_1[1])(*param_1,0x20);
  (*(code *)param_1[1])(*param_1,0x85);
  (*(code *)param_1[1])(*param_1,0x86);
  (*(code *)param_1[1])(*param_1,0x7f);
  (*(code *)param_1[1])(*param_1,0x200a);
  (*(code *)param_1[1])(*param_1,0x2010);
  (*(code *)param_1[1])(*param_1,0x206a);
  (*(code *)param_1[1])(*param_1,0x2070);
  (*(code *)param_1[1])(*param_1,&DAT_0000feff);
  (*(code *)param_1[1])(*param_1,0xff00);
  (*(code *)param_1[1])(*param_1,0xa0);
  (*(code *)param_1[1])(*param_1,0xa1);
  (*(code *)param_1[1])(*param_1,0x2007);
  (*(code *)param_1[1])(*param_1,0x2008);
  (*(code *)param_1[1])(*param_1,0x202f);
  (*(code *)param_1[1])(*param_1,0x2030);
  (*(code *)param_1[1])(*param_1,0x61);
  (*(code *)param_1[1])(*param_1,0x7b);
  (*(code *)param_1[1])(*param_1,0x41);
  (*(code *)param_1[1])(*param_1,0x5b);
  (*(code *)param_1[1])(*param_1,0xff41);
  (*(code *)param_1[1])(*param_1,0xff5b);
  (*(code *)param_1[1])(*param_1,0xff21);
  (*(code *)param_1[1])(*param_1,0xff3b);
  (*(code *)param_1[1])(*param_1,0x67);
  (*(code *)param_1[1])(*param_1,0x47);
  (*(code *)param_1[1])(*param_1,0xff47);
  (*(code *)param_1[1])(*param_1,0xff27);
  (*(code *)param_1[1])(*param_1,0x2060);
  (*(code *)param_1[1])(*param_1,0xfff0);
  (*(code *)param_1[1])(*param_1,0xfffc);
  (*(code *)param_1[1])(*param_1,0xe0000);
  (*(code *)param_1[1])(*param_1,0xe1000);
  (*(code *)param_1[1])(*param_1,0x34f);
                    /* WARNING: Could not recover jumptable at 0x0001424d963e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[1])(*param_1,0x350);
  return;
}



// FUNCTION 1424d9650 FUN_1424d9650 body=20 status=ok
// SIG undefined FUN_1424d9650(void)

undefined8 FUN_1424d9650(undefined8 *param_1)

{
  (*(code *)param_1[1])(*param_1);
  return 1;
}



// FUNCTION 1424d9670 FUN_1424d9670 body=30 status=ok
// SIG undefined FUN_1424d9670(void)

void FUN_1424d9670(undefined8 param_1,int *param_2)

{
  if (0 < *param_2) {
    return;
  }
  FUN_14257f9a0(&PTR_DAT_149946700,0,FUN_1424d9650,param_1);
  return;
}



// FUNCTION 1424d9690 FUN_1424d9690 body=98 status=ok
// SIG undefined FUN_1424d9690(void)

void FUN_1424d9690(void)

{
  undefined1 auStack_48 [32];
  _FILETIME local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  GetSystemTimeAsFileTime(&local_28);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48,((longlong)local_28 + -0x19db1ded53e8000) / 10000);
}



// FUNCTION 1424d9700 FUN_1424d9700 body=35 status=ok
// SIG undefined FUN_1424d9700(void)

undefined8 FUN_1424d9700(ulonglong param_1)

{
  return CONCAT71(0x7ff00000000000,0x7ff0000000000000 < (param_1 & 0x7fffffffffffffff));
}



// FUNCTION 1424d9730 FUN_1424d9730 body=35 status=ok
// SIG undefined FUN_1424d9730(void)

undefined8 FUN_1424d9730(ulonglong param_1)

{
  return CONCAT71(0x7ff00000000000,(param_1 & 0x7fffffffffffffff) == 0x7ff0000000000000);
}



// FUNCTION 1424d9760 FUN_1424d9760 body=48 status=ok
// SIG undefined FUN_1424d9760(void)

undefined8 FUN_1424d9760(double param_1)

{
  return CONCAT71(0x7ff00000000000,ABS(param_1) == INFINITY && 0.0 < param_1);
}



// FUNCTION 1424d9790 FUN_1424d9790 body=9 status=ok
// SIG undefined FUN_1424d9790(void)

undefined8 FUN_1424d9790(void)

{
  return 0x7ff8000000000000;
}



// FUNCTION 1424d97a0 FUN_1424d97a0 body=9 status=ok
// SIG undefined FUN_1424d97a0(void)

undefined8 FUN_1424d97a0(void)

{
  return 0x7ff0000000000000;
}



// FUNCTION 1424d97b0 FUN_1424d97b0 body=5 status=ok
// SIG undefined FUN_1424d97b0(void)

void FUN_1424d97b0(double param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014992cfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  floor(param_1);
  return;
}



// FUNCTION 1424d97c0 ceil body=5 status=ok
// SIG double ceil(double _X)

double __cdecl ceil(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014992d2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = ceil(_X);
  return dVar1;
}



// FUNCTION 1424d97d0 FUN_1424d97d0 body=13 status=ok
// SIG undefined FUN_1424d97d0(void)

void FUN_1424d97d0(double param_1)

{
  floor(param_1 + 0.5);
  return;
}



// FUNCTION 1424d97e0 FUN_1424d97e0 body=8 status=ok
// SIG undefined FUN_1424d97e0(void)

ulonglong FUN_1424d97e0(ulonglong param_1)

{
  return param_1 & 0x7fffffffffffffff;
}



// FUNCTION 1424d97f0 fmod body=5 status=ok
// SIG double fmod(double _X, double _Y)

double __cdecl fmod(double _X,double _Y)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014992d330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = fmod(_X,_Y);
  return dVar1;
}



// FUNCTION 1424d9800 FUN_1424d9800 body=17 status=ok
// SIG undefined FUN_1424d9800(void)

void FUN_1424d9800(int param_1)

{
  pow(10.0,(double)param_1);
  return;
}



// FUNCTION 1424d9820 FUN_1424d9820 body=9 status=ok
// SIG undefined FUN_1424d9820(void)

bool FUN_1424d9820(int param_1,int param_2,int *param_3)

{
  *param_3 = param_1 + param_2;
  return SCARRY4(param_1,param_2);
}



// FUNCTION 1424d9830 FUN_1424d9830 body=74 status=ok
// SIG undefined FUN_1424d9830(void)

double FUN_1424d9830(double param_1)

{
  double dVar1;
  
  if (0x7ff0000000000000 < (ulonglong)ABS(param_1)) {
    return NAN;
  }
  if (ABS(param_1) == INFINITY) {
    return INFINITY;
  }
  if (-1 < (longlong)param_1) {
    dVar1 = floor(param_1);
    return dVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014992d2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = ceil(param_1);
  return dVar1;
}



// FUNCTION 1424d9880 FUN_1424d9880 body=9 status=ok
// SIG undefined FUN_1424d9880(void)

undefined8 FUN_1424d9880(void)

{
  return 0x4350000000000000;
}



// FUNCTION 1424d9890 FUN_1424d9890 body=5 status=ok
// SIG undefined FUN_1424d9890(void)

void FUN_1424d9890(double param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014992d350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log(param_1);
  return;
}



// FUNCTION 1424d98a0 _tzset body=7 status=ok
// SIG void _tzset(void)

void __cdecl _tzset(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001424d98a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _tzset();
  return;
}



// FUNCTION 1424d98b0 FUN_1424d98b0 body=17 status=ok
// SIG undefined FUN_1424d98b0(void)

long FUN_1424d98b0(void)

{
  long *plVar1;
  
  plVar1 = __timezone();
  return *plVar1;
}



// FUNCTION 1424d98d0 FUN_1424d98d0 body=1 status=ok
// SIG undefined FUN_1424d98d0(void)

void FUN_1424d98d0(void)

{
  return;
}



// FUNCTION 1424d98e0 FUN_1424d98e0 body=46 status=ok
// SIG undefined FUN_1424d98e0(void)

void FUN_1424d98e0(int param_1)

{
  longlong lVar1;
  char **ppcVar2;
  
  lVar1 = FUN_1425809b0();
  if (lVar1 != 0) {
    return;
  }
  ppcVar2 = __tzname();
  FUN_142503b70(ppcVar2[param_1]);
  return;
}



// FUNCTION 1424d9910 FUN_1424d9910 body=147 status=ok
// SIG undefined FUN_1424d9910(void)

void FUN_1424d9910(char *param_1)

{
  size_t sVar1;
  char *pcVar2;
  char *_Dest;
  
  _Dest = "";
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    sVar1 = strlen(param_1);
    _Dest = (char *)FUN_1424da030((longlong)((int)sVar1 + 2));
    if (_Dest == (char *)0x0) {
      return;
    }
    strcpy(_Dest,param_1);
    while( true ) {
      pcVar2 = strchr(_Dest,0x2f);
      if (pcVar2 == (char *)0x0) break;
      *pcVar2 = '\\';
    }
  }
  if ((DAT_14c77ec38 != (char *)0x0) && (*DAT_14c77ec38 != '\0')) {
    FUN_1424da110();
  }
  DAT_14c77ec38 = _Dest;
  FUN_1424d6720(0x13,FUN_1424d99b0);
  return;
}



// FUNCTION 1424d99b0 FUN_1424d99b0 body=153 status=ok
// SIG undefined FUN_1424d99b0(void)

undefined8 FUN_1424d99b0(void)

{
  undefined8 *puVar1;
  
  if ((DAT_14c77ec38 != (char *)0x0) && (*DAT_14c77ec38 != '\0')) {
    FUN_1424da110();
  }
  puVar1 = DAT_14c77ec40;
  DAT_14c77ec38 = (char *)0x0;
  LOCK();
  DAT_14c77ed08 = 0;
  UNLOCK();
  if (DAT_14c77ec40 != (undefined8 *)0x0) {
    if (*(char *)((longlong)DAT_14c77ec40 + 0xc) != '\0') {
      FUN_1424da110(*DAT_14c77ec40);
    }
    FUN_1401773f0(puVar1);
  }
  DAT_14c77ec40 = (undefined8 *)0x0;
  LOCK();
  DAT_14c77ec30 = 0;
  UNLOCK();
  if ((DAT_14c77ec48 != 0) && (DAT_14c77ecfa == '\x01')) {
    FUN_1424da110();
    DAT_14c77ec48 = 0;
    DAT_14c77ecfa = '\0';
  }
  return 1;
}



// FUNCTION 1424d9a50 FUN_1424d9a50 body=44 status=ok
// SIG undefined FUN_1424d9a50(void)

undefined1 FUN_1424d9a50(byte *param_1)

{
  byte bVar1;
  
  if (param_1 != (byte *)0x0) {
    bVar1 = *param_1;
    if (bVar1 == 0) {
      return 0;
    }
    if ((bVar1 == 0x2f) || (bVar1 == 0x5c)) {
      return 1;
    }
    if (((byte)((bVar1 & 0xdf) + 0xbf) < 0x1a) && (param_1[1] == 0x3a)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1424d9a80 FUN_1424d9a80 body=77 status=ok
// SIG undefined FUN_1424d9a80(void)

longlong FUN_1424d9a80(void)

{
  char cVar1;
  
  if (DAT_14c77ed08 != 2) {
    cVar1 = FUN_142501800(&DAT_14c77ed08);
    if (cVar1 != '\0') {
      if (DAT_14c77ec38 == 0) {
        FUN_1424d9910(&DAT_149e02088);
      }
      FUN_1425019c0(&DAT_14c77ed08);
    }
  }
  return DAT_14c77ec38;
}



// FUNCTION 1424d9ad0 FUN_1424d9ad0 body=117 status=ok
// SIG undefined FUN_1424d9ad0(void)

undefined1 * FUN_1424d9ad0(int *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  
  puVar2 = &DAT_149e02088;
  if (0 < *param_1) {
    return &DAT_149e02088;
  }
  if ((DAT_14c77ec30 == 2) || (cVar1 = FUN_142501800(&DAT_14c77ec30), cVar1 == '\0')) {
    if (0 < DAT_14c77ec34) {
      *param_1 = DAT_14c77ec34;
      return &DAT_149e02088;
    }
  }
  else {
    FUN_1424d9b50(param_1);
    DAT_14c77ec34 = *param_1;
    FUN_1425019c0(&DAT_14c77ec30);
  }
  if (*param_1 < 1) {
    puVar2 = (undefined1 *)*DAT_14c77ec40;
  }
  return puVar2;
}



// FUNCTION 1424d9b50 FUN_1424d9b50 body=223 status=ok
// SIG undefined FUN_1424d9b50(void)

void FUN_1424d9b50(int *param_1)

{
  longlong *plVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 local_20;
  undefined4 local_18;
  
  FUN_1424d6720(0x13,FUN_1424d99b0);
  plVar1 = (longlong *)thunk_FUN_1424da030(0x40);
  if (plVar1 == (longlong *)0x0) {
    DAT_14c77ec40 = (longlong *)0x0;
    *param_1 = 7;
  }
  else {
    *plVar1 = (longlong)plVar1 + 0xd;
    *(undefined4 *)(plVar1 + 1) = 0x28;
    *(undefined2 *)((longlong)plVar1 + 0xc) = 0;
    *(undefined4 *)(plVar1 + 7) = 0;
    DAT_14c77ec40 = plVar1;
    pcVar2 = getenv("ICU_TIMEZONE_FILES_DIR");
    if (*param_1 < 1) {
      pcVar3 = "";
      if (pcVar2 != (char *)0x0) {
        pcVar3 = pcVar2;
      }
      *(undefined4 *)(plVar1 + 7) = 0;
      *(undefined1 *)((longlong)plVar1 + 0xd) = 0;
      FUN_1425038b0(&local_20,pcVar3);
      FUN_142503520(plVar1,local_20,local_18,param_1);
      pcVar2 = (char *)*DAT_14c77ec40;
      while( true ) {
        pcVar2 = strchr(pcVar2,0x2f);
        if (pcVar2 == (char *)0x0) break;
        *pcVar2 = '\\';
      }
    }
  }
  return;
}



// FUNCTION 1424d9c30 FUN_1424d9c30 body=338 status=ok
// SIG undefined FUN_1424d9c30(void)

void FUN_1424d9c30(void)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  char cVar5;
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  char local_68 [88];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_6c = 0;
  if (DAT_14c77ec48 == (char *)0x0) {
    iVar2 = GetLocaleInfoEx((LPCWSTR)0x0,0x5c,&DAT_14c77ec50,0x55);
    if (0 < iVar2) {
      local_68[0x40] = '\0';
      local_68[0x41] = '\0';
      local_68[0x42] = '\0';
      local_68[0x43] = '\0';
      local_68[0x44] = '\0';
      local_68[0x45] = '\0';
      local_68[0x46] = '\0';
      local_68[0x47] = '\0';
      local_68[0x48] = '\0';
      local_68[0x49] = '\0';
      local_68[0x4a] = '\0';
      local_68[0x4b] = '\0';
      local_68[0x4c] = '\0';
      local_68[0x30] = '\0';
      local_68[0x31] = '\0';
      local_68[0x32] = '\0';
      local_68[0x33] = '\0';
      local_68[0x34] = '\0';
      local_68[0x35] = '\0';
      local_68[0x36] = '\0';
      local_68[0x37] = '\0';
      local_68[0x38] = '\0';
      local_68[0x39] = '\0';
      local_68[0x3a] = '\0';
      local_68[0x3b] = '\0';
      local_68[0x3c] = '\0';
      local_68[0x3d] = '\0';
      local_68[0x3e] = '\0';
      local_68[0x3f] = '\0';
      local_68[0x20] = '\0';
      local_68[0x21] = '\0';
      local_68[0x22] = '\0';
      local_68[0x23] = '\0';
      local_68[0x24] = '\0';
      local_68[0x25] = '\0';
      local_68[0x26] = '\0';
      local_68[0x27] = '\0';
      local_68[0x28] = '\0';
      local_68[0x29] = '\0';
      local_68[0x2a] = '\0';
      local_68[0x2b] = '\0';
      local_68[0x2c] = '\0';
      local_68[0x2d] = '\0';
      local_68[0x2e] = '\0';
      local_68[0x2f] = '\0';
      local_68[0x10] = '\0';
      local_68[0x11] = '\0';
      local_68[0x12] = '\0';
      local_68[0x13] = '\0';
      local_68[0x14] = '\0';
      local_68[0x15] = '\0';
      local_68[0x16] = '\0';
      local_68[0x17] = '\0';
      local_68[0x18] = '\0';
      local_68[0x19] = '\0';
      local_68[0x1a] = '\0';
      local_68[0x1b] = '\0';
      local_68[0x1c] = '\0';
      local_68[0x1d] = '\0';
      local_68[0x1e] = '\0';
      local_68[0x1f] = '\0';
      local_68[0] = '\0';
      local_68[1] = '\0';
      local_68[2] = '\0';
      local_68[3] = '\0';
      local_68[4] = '\0';
      local_68[5] = '\0';
      local_68[6] = '\0';
      local_68[7] = '\0';
      local_68[8] = '\0';
      local_68[9] = '\0';
      local_68[10] = '\0';
      local_68[0xb] = '\0';
      local_68[0xc] = '\0';
      local_68[0xd] = '\0';
      local_68[0xe] = '\0';
      local_68[0xf] = '\0';
      local_68[0x4d] = '\0';
      local_68[0x4e] = '\0';
      local_68[0x4f] = '\0';
      local_68[0x50] = '\0';
      local_68[0x51] = '\0';
      local_68[0x52] = '\0';
      local_68[0x53] = '\0';
      local_68[0x54] = 0;
      lVar3 = 1;
      while( true ) {
        sVar1 = *(short *)((longlong)&DAT_14c77ec48 + lVar3 * 2 + 6);
        if (sVar1 == 0x5f) {
          *(undefined1 *)((longlong)&local_6c + lVar3 + 3) = 0x2d;
        }
        else {
          cVar5 = (char)sVar1;
          *(char *)((longlong)&local_6c + lVar3 + 3) = cVar5;
          if (cVar5 == '\0') goto LAB_1424d9d0a;
        }
        if (lVar3 == 0x55) break;
        if ((&DAT_14c77ec50)[lVar3] == 0x5f) {
          local_68[lVar3] = '-';
        }
        else {
          cVar5 = (char)(&DAT_14c77ec50)[lVar3];
          local_68[lVar3] = cVar5;
          if (cVar5 == '\0') goto LAB_1424d9d0a;
        }
        lVar3 = lVar3 + 2;
      }
      local_68[0x54] = 0;
LAB_1424d9d0a:
      pcVar4 = (char *)FUN_1424da030(0x41);
      if (pcVar4 != (char *)0x0) {
        iVar2 = FUN_1424ea1f0(local_68,pcVar4,0x40,&local_6c);
        if (local_6c < 1) {
          pcVar4[iVar2] = '\0';
          DAT_14c77ecfa = 1;
          DAT_14c77ec48 = pcVar4;
          FUN_1424d6720(0x13,FUN_1424d99b0);
        }
        else {
          FUN_1424da110(pcVar4);
        }
      }
    }
    if (DAT_14c77ec48 == (char *)0x0) {
      DAT_14c77ec48 = "en_US";
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_98);
}



// FUNCTION 1424d9da0 FUN_1424d9da0 body=100 status=ok
// SIG undefined FUN_1424d9da0(void)

char * FUN_1424d9da0(void)

{
  UINT UVar1;
  
  FUN_142501320(0);
  if (DAT_14c77ed00 == (char *)0x0) {
    UVar1 = GetACP();
    if (UVar1 - 1 < 19999) {
      FUN_1424c2e40(&DAT_14c77ed10,"windows-%ld",UVar1);
      DAT_14c77ed00 = &DAT_14c77ed10;
    }
    else {
      DAT_14c77ed00 = "UTF-8";
    }
  }
  FUN_142501400(0);
  return DAT_14c77ed00;
}



// FUNCTION 1424d9e10 FUN_1424d9e10 body=260 status=ok
// SIG undefined FUN_1424d9e10(void)

void FUN_1424d9e10(undefined1 *param_1,char *param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined1 auStack_58 [40];
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (undefined1 *)0x0) {
    if (param_2 != (char *)0x0) {
      uVar1 = strtoul(param_2,&local_30,10);
      *param_1 = (char)uVar1;
      if ((local_30 != param_2) && (*local_30 == '.')) {
        pcVar2 = local_30 + 1;
        uVar1 = strtoul(pcVar2,&local_30,10);
        param_1[1] = (char)uVar1;
        if ((local_30 != pcVar2) && (*local_30 == '.')) {
          pcVar2 = local_30 + 1;
          uVar1 = strtoul(pcVar2,&local_30,10);
          param_1[2] = (char)uVar1;
          if ((local_30 != pcVar2) && (*local_30 == '.')) {
            pcVar2 = local_30 + 1;
            uVar1 = strtoul(pcVar2,&local_30,10);
            param_1[3] = (char)uVar1;
            if (local_30 != pcVar2) goto LAB_1424d9eeb;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
LAB_1424d9eeb:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 1424d9f40 FUN_1424d9f40 body=55 status=ok
// SIG undefined FUN_1424d9f40(void)

void FUN_1424d9f40(undefined8 param_1,longlong param_2,longlong param_3,int *param_4)

{
  if (0 < *param_4) {
    return;
  }
  if ((param_2 == 0) != (param_3 == 0)) {
    *param_4 = 1;
    return;
  }
  DAT_14c77ed50 = param_1;
  DAT_14c77ed58 = param_2;
  DAT_14c77ed60 = param_3;
  return;
}


