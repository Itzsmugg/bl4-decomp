// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14340a302 FUN_14340a302 body=884 status=ok
// SIG undefined FUN_14340a302(void)

void FUN_14340a302(longlong *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  longlong *local_158;
  longlong *local_150;
  undefined8 local_148 [12];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  plVar4 = (longlong *)*param_1;
  if ((longlong)(int)plVar4[0x25] != 0) {
    puVar12 = (undefined8 *)plVar4[0x24];
    puVar15 = puVar12 + (longlong)(int)plVar4[0x25] * 2;
    do {
      plVar16 = (longlong *)*puVar12;
      plVar14 = (longlong *)puVar12[1];
      if (plVar14 == (longlong *)0x0) {
        local_168 = (undefined4)param_1[0xe];
        (**(code **)(*plVar16 + 0x28))
                  (plVar16,plVar4,*(undefined4 *)((longlong)param_1 + 0xc),param_1 + 2);
      }
      else {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
        local_168 = (undefined4)param_1[0xe];
        (**(code **)(*plVar16 + 0x28))
                  (plVar16,plVar4,*(undefined4 *)((longlong)param_1 + 0xc),param_1 + 2);
        LOCK();
        plVar16 = plVar14 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      puVar12 = puVar12 + 2;
    } while (puVar12 != puVar15);
  }
  local_158 = plVar4 + 0x3c;
  iVar3 = (int)plVar4[0x3d];
  lVar18 = (longlong)iVar3;
  iVar10 = *(int *)((longlong)param_1 + 0xc);
  if (iVar3 <= iVar10) {
    uVar11 = (ulonglong)((iVar10 - iVar3) + 1);
    lVar17 = lVar18 * 0x110 + 0xc0;
    local_150 = param_1;
    do {
      puVar12 = &DAT_14c846480;
      puVar15 = local_148;
      for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar15 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar15 = puVar15 + 1;
      }
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_88 = 0;
      uStack_84 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      local_98 = 0;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      local_78 = 0;
      iVar3 = (int)plVar4[0x3d];
      *(uint *)(plVar4 + 0x3d) = iVar3 + 1U;
      if (*(uint *)((longlong)plVar4 + 0x1ec) < iVar3 + 1U) {
        FUN_14796a950(local_158,iVar3);
      }
      lVar9 = plVar4[0x3c];
      lVar13 = (longlong)iVar3 * 0x110;
      memcpy((void *)(lVar9 + lVar13),local_148,0x90);
      *(undefined4 *)(lVar9 + 0x90 + lVar13) = 0;
      *(undefined1 *)(lVar9 + 0x94 + lVar13) = 0;
      puVar12 = (undefined8 *)(lVar9 + 0x98 + lVar13);
      *puVar12 = 0x3f0000003f800000;
      puVar12[1] = 0x3f000000469c4000;
      puVar12 = (undefined8 *)(lVar9 + 0xa8 + lVar13);
      *puVar12 = 0x3f0000003f800000;
      puVar12[1] = 0x3f000000469c4000;
      *(undefined4 *)(lVar9 + 0xb8 + lVar13) = 0;
      *(undefined4 *)(lVar9 + 0xc0 + lVar13) = 0;
      puVar2 = (undefined4 *)(lVar9 + 0xc4 + lVar13);
      *puVar2 = uStack_ac;
      puVar2[1] = (undefined4)local_a8;
      puVar2[2] = local_a8._4_4_;
      puVar2[3] = uStack_a0;
      puVar12 = (undefined8 *)(lVar9 + 0xd4 + lVar13);
      *puVar12 = CONCAT44(local_98,uStack_9c);
      puVar12[1] = CONCAT44(uStack_90,uStack_94);
      puVar12 = (undefined8 *)(lVar9 + 0xe4 + lVar13);
      *puVar12 = CONCAT44(local_88,uStack_8c);
      puVar12[1] = CONCAT44(uStack_80,uStack_84);
      puVar12 = (undefined8 *)(lVar9 + 0xf0 + lVar13);
      *puVar12 = CONCAT44(uStack_7c,uStack_80);
      puVar12[1] = local_78;
      *(longlong **)(lVar9 + 0x100 + lVar13) = plVar4;
      if ((-1 < lVar18) && (lVar18 < (int)plVar4[0x3d])) {
        *(int *)(*local_158 + lVar17) = (int)lVar18;
      }
      lVar17 = lVar17 + 0x110;
      lVar18 = lVar18 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    iVar10 = *(int *)((longlong)local_150 + 0xc);
    param_1 = local_150;
  }
  plVar16 = (longlong *)((longlong)iVar10 * 0x110 + *local_158);
  dVar6 = DAT_14c8464f0;
  dVar7 = DAT_14c8464e8;
  dVar5 = DAT_14c8464e0;
  if (0.0 < *(float *)(param_1 + 0xe)) {
    dVar5 = 1.0 / (double)*(float *)(param_1 + 0xe);
    dVar6 = ((double)param_1[8] - (double)plVar16[6]) * dVar5;
    dVar7 = ((double)param_1[7] - (double)plVar16[5]) * dVar5;
    dVar5 = dVar5 * ((double)param_1[6] - (double)plVar16[4]);
  }
  plVar16[0xc] = (longlong)dVar5;
  plVar16[0xd] = (longlong)dVar7;
  plVar16[0xe] = (longlong)dVar6;
  cVar8 = FUN_147977aa4(plVar16,param_1 + 2);
  *(int *)((longlong)plVar16 + 0xbc) = (int)param_1[1];
  plVar14 = param_1 + 2;
  for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
    *plVar16 = *plVar14;
    plVar14 = plVar14 + 1;
    plVar16 = plVar16 + 1;
  }
  if (cVar8 != '\0') {
    FUN_147960d1a(plVar4,1);
  }
  if ((local_70 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340a662. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x1f0))(plVar4,local_158);
  return;
}



// FUNCTION 14340a682 FUN_14340a682 body=29 status=ok
// SIG undefined FUN_14340a682(void)

void FUN_14340a682(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14340a6a0 FUN_14340a6a0 body=29 status=ok
// SIG undefined FUN_14340a6a0(void)

undefined8 FUN_14340a6a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340a6be FUN_14340a6be body=81 status=ok
// SIG undefined FUN_14340a6be(void)

void FUN_14340a6be(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = param_1[4];
  local_28 = *(undefined4 *)(param_1 + 2);
  uStack_24 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_20 = *(undefined4 *)(param_1 + 3);
  uStack_1c = *(undefined4 *)((longlong)param_1 + 0x1c);
  FUN_1434024ea(*param_1,*(undefined4 *)(param_1 + 1));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14340a71a FUN_14340a71a body=29 status=ok
// SIG undefined FUN_14340a71a(void)

void FUN_14340a71a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14340a738 FUN_14340a738 body=29 status=ok
// SIG undefined FUN_14340a738(void)

undefined8 FUN_14340a738(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340a77a FUN_14340a77a body=29 status=ok
// SIG undefined FUN_14340a77a(void)

undefined8 FUN_14340a77a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340a798 FUN_14340a798 body=146 status=ok
// SIG undefined FUN_14340a798(void)

void FUN_14340a798(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [32];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  longlong *local_38;
  undefined1 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *param_1;
  FUN_1479610d0(local_80,param_1 + 2);
  local_60 = (undefined4)param_1[6];
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_58 = (undefined4)param_1[7];
  uStack_54 = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_50 = (undefined4)param_1[8];
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0x44);
  uStack_48 = (undefined4)param_1[9];
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0x4c);
  local_40 = (undefined4)param_1[10];
  local_38 = param_1 + 1;
  local_30 = local_80;
  FUN_14796cd72(lVar1 + 0x7f8,local_24);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14340a836 FUN_14340a836 body=29 status=ok
// SIG undefined FUN_14340a836(void)

void FUN_14340a836(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14340a854 FUN_14340a854 body=29 status=ok
// SIG undefined FUN_14340a854(void)

undefined8 FUN_14340a854(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340a872 FUN_14340a872 body=31 status=ok
// SIG undefined FUN_14340a872(void)

undefined8 FUN_14340a872(undefined8 *param_1,undefined8 *param_2)

{
  (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,*param_1,param_1[1]);
  return 1;
}



// FUNCTION 14340a892 FUN_14340a892 body=31 status=ok
// SIG undefined FUN_14340a892(void)

undefined8 FUN_14340a892(undefined8 *param_1,undefined8 *param_2)

{
  (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,*param_1,param_1[1]);
  return 1;
}



// FUNCTION 14340a8b2 FUN_14340a8b2 body=45 status=ok
// SIG undefined FUN_14340a8b2(void)

undefined8 FUN_14340a8b2(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_2;
  (**(code **)(*plVar1 + 0x20))(plVar1,*param_1);
  (**(code **)(*plVar1 + 0x40))(plVar1,*param_1);
  return 1;
}



// FUNCTION 14340a8e0 FUN_14340a8e0 body=45 status=ok
// SIG undefined FUN_14340a8e0(void)

undefined8 FUN_14340a8e0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_2;
  (**(code **)(*plVar1 + 0x28))(plVar1,*param_1);
  (**(code **)(*plVar1 + 0x48))(plVar1,*param_1);
  return 1;
}



// FUNCTION 14340a90e FUN_14340a90e body=27 status=ok
// SIG undefined FUN_14340a90e(void)

undefined8 FUN_14340a90e(undefined8 *param_1,undefined8 *param_2)

{
  (**(code **)(*(longlong *)*param_2 + 0x30))((longlong *)*param_2,*param_1);
  return 1;
}



// FUNCTION 14340a92a FUN_14340a92a body=45 status=ok
// SIG undefined FUN_14340a92a(void)

undefined8 FUN_14340a92a(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_2;
  (**(code **)(*plVar1 + 0x38))(plVar1,*param_1);
  (**(code **)(*plVar1 + 0x48))(plVar1,*param_1);
  return 1;
}



// FUNCTION 14340a97e FUN_14340a97e body=29 status=ok
// SIG undefined FUN_14340a97e(void)

undefined8 FUN_14340a97e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340a9c8 FUN_14340a9c8 body=29 status=ok
// SIG undefined FUN_14340a9c8(void)

undefined8 FUN_14340a9c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340a9e6 FUN_14340a9e6 body=65 status=ok
// SIG undefined FUN_14340a9e6(void)

void FUN_14340a9e6(undefined8 *param_1)

{
  FUN_1434028c8(*param_1,param_1[1],param_1[2],*(undefined4 *)(param_1 + 3),
                *(undefined4 *)((longlong)param_1 + 0x1c),*(undefined4 *)(param_1 + 4),
                *(undefined1 *)((longlong)param_1 + 0x24));
  return;
}



// FUNCTION 14340aa32 FUN_14340aa32 body=29 status=ok
// SIG undefined FUN_14340aa32(void)

void FUN_14340aa32(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14340aa50 FUN_14340aa50 body=29 status=ok
// SIG undefined FUN_14340aa50(void)

undefined8 FUN_14340aa50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340aa90 FUN_14340aa90 body=29 status=ok
// SIG undefined FUN_14340aa90(void)

void FUN_14340aa90(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14340aaae FUN_14340aaae body=29 status=ok
// SIG undefined FUN_14340aaae(void)

undefined8 FUN_14340aaae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340aaf6 FUN_14340aaf6 body=29 status=ok
// SIG undefined FUN_14340aaf6(void)

undefined8 FUN_14340aaf6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340ab3a FUN_14340ab3a body=29 status=ok
// SIG undefined FUN_14340ab3a(void)

undefined8 FUN_14340ab3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340ab76 FUN_14340ab76 body=29 status=ok
// SIG undefined FUN_14340ab76(void)

undefined8 FUN_14340ab76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340abbc FUN_14340abbc body=29 status=ok
// SIG undefined FUN_14340abbc(void)

undefined8 FUN_14340abbc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340abfe FUN_14340abfe body=29 status=ok
// SIG undefined FUN_14340abfe(void)

undefined8 FUN_14340abfe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340ac30 FUN_14340ac30 body=125 status=ok
// SIG undefined FUN_14340ac30(void)

void FUN_14340ac30(undefined4 *param_1)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb0d2b0 != 0) && (*(longlong *)(DAT_14cb0d2b0 + 0xf50) != 0)) {
    FUN_147973036(*(longlong *)(DAT_14cb0d2b0 + 0xf50),local_30,*param_1);
    if (local_28 != 0) {
      *(undefined8 *)(local_28 + 0x490) = *(undefined8 *)(param_1 + 2);
    }
    FUN_14051bf10(local_30);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14340acc4 FUN_14340acc4 body=29 status=ok
// SIG undefined FUN_14340acc4(void)

undefined8 FUN_14340acc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340ad0c FUN_14340ad0c body=29 status=ok
// SIG undefined FUN_14340ad0c(void)

undefined8 FUN_14340ad0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340ad4e FUN_14340ad4e body=29 status=ok
// SIG undefined FUN_14340ad4e(void)

void FUN_14340ad4e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14340ad6c FUN_14340ad6c body=87 status=ok
// SIG undefined FUN_14340ad6c(void)

undefined8 * FUN_14340ad6c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a7ecb70;
  FUN_145aa5488(param_1[0x130],*(undefined4 *)(param_1 + 0x131));
  if (param_1[0x130] != 0) {
    FUN_1400020a8();
  }
  FUN_1478b3298(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340adc4 FUN_14340adc4 body=36 status=ok
// SIG undefined FUN_14340adc4(void)

void FUN_14340adc4(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1479bd5a0(*param_1);
  if (lVar1 == 0) {
    return;
  }
  FUN_1479be634(lVar1,0);
  return;
}



// FUNCTION 14340adfe FUN_14340adfe body=29 status=ok
// SIG undefined FUN_14340adfe(void)

undefined8 FUN_14340adfe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340ae42 FUN_14340ae42 body=29 status=ok
// SIG undefined FUN_14340ae42(void)

undefined8 FUN_14340ae42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340ae60 FUN_14340ae60 body=122 status=ok
// SIG undefined FUN_14340ae60(void)

void FUN_14340ae60(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(DAT_14cb0d2b0 + 0xf50) != 0) {
    FUN_147973036(*(longlong *)(DAT_14cb0d2b0 + 0xf50),local_30,*param_1);
    if (local_28 != 0) {
      FUN_14796095e(local_28,param_2);
    }
    FUN_14051bf10(local_30);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14340aef2 FUN_14340aef2 body=29 status=ok
// SIG undefined FUN_14340aef2(void)

undefined8 FUN_14340aef2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340af3e FUN_14340af3e body=29 status=ok
// SIG undefined FUN_14340af3e(void)

undefined8 FUN_14340af3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340af5c FUN_14340af5c body=123 status=ok
// SIG undefined FUN_14340af5c(void)

void FUN_14340af5c(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined8 local_38;
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
  local_48[0] = param_1[2];
  local_38 = param_1[4];
  param_1[4] = 0;
  local_28 = *(undefined4 *)(param_1 + 6);
  uStack_24 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_20 = *(undefined4 *)(param_1 + 7);
  uStack_1c = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_18 = *(undefined4 *)(param_1 + 8);
  uStack_14 = *(undefined4 *)((longlong)param_1 + 0x44);
  uStack_10 = *(undefined4 *)(param_1 + 9);
  uStack_c = *(undefined4 *)((longlong)param_1 + 0x4c);
  if (local_48[0] != 0) {
    param_1[2] = 0;
  }
  FUN_147962214(*param_1,param_1[1],local_48);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14340afe2 FUN_14340afe2 body=29 status=ok
// SIG undefined FUN_14340afe2(void)

void FUN_14340afe2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14340b000 FUN_14340b000 body=71 status=ok
// SIG undefined FUN_14340b000(void)

undefined8 * FUN_14340b000(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14a7ecc10;
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



// FUNCTION 14340b072 FUN_14340b072 body=29 status=ok
// SIG undefined FUN_14340b072(void)

undefined8 FUN_14340b072(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340b0b8 FUN_14340b0b8 body=29 status=ok
// SIG undefined FUN_14340b0b8(void)

undefined8 FUN_14340b0b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340b0d6 FUN_14340b0d6 body=44 status=ok
// SIG undefined FUN_14340b0d6(void)

void FUN_14340b0d6(undefined8 *param_1)

{
  (**(code **)(*(longlong *)*param_1 + 0x60))
            ((longlong *)*param_1,param_1[1],*(undefined1 *)(param_1 + 2),
             *(undefined1 *)((longlong)param_1 + 0x11),*(undefined1 *)((longlong)param_1 + 0x12));
  return;
}



// FUNCTION 14340b118 FUN_14340b118 body=29 status=ok
// SIG undefined FUN_14340b118(void)

undefined8 FUN_14340b118(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340b15c FUN_14340b15c body=29 status=ok
// SIG undefined FUN_14340b15c(void)

undefined8 FUN_14340b15c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340b1a0 FUN_14340b1a0 body=29 status=ok
// SIG undefined FUN_14340b1a0(void)

undefined8 FUN_14340b1a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340b1e6 FUN_14340b1e6 body=29 status=ok
// SIG undefined FUN_14340b1e6(void)

undefined8 FUN_14340b1e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340b228 FUN_14340b228 body=29 status=ok
// SIG undefined FUN_14340b228(void)

undefined8 FUN_14340b228(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340b26c FUN_14340b26c body=29 status=ok
// SIG undefined FUN_14340b26c(void)

undefined8 FUN_14340b26c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340b2ae FUN_14340b2ae body=29 status=ok
// SIG undefined FUN_14340b2ae(void)

void FUN_14340b2ae(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14340b2cc FUN_14340b2cc body=29 status=ok
// SIG undefined FUN_14340b2cc(void)

undefined8 FUN_14340b2cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340b316 FUN_14340b316 body=29 status=ok
// SIG undefined FUN_14340b316(void)

undefined8 FUN_14340b316(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340b364 FUN_14340b364 body=29 status=ok
// SIG undefined FUN_14340b364(void)

undefined8 FUN_14340b364(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340b392 FUN_14340b392 body=4256 status=ok
// SIG undefined FUN_14340b392(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340b392(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  code *local_88;
  int local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  ppuStack_a0 = &PTR_FUN_14a7e0060;
  uStack_98 = 1;
  local_a8 = 3;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7e0080);
  FUN_1400b22c2(&local_88,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_88,&DAT_14cacd770);
  if (cVar2 == '\0') {
    _DAT_14cacd770 = 0;
    uRam000000014cacd778 = 0;
  }
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_88 = (code *)&DAT_14a19662d;
  local_80 = 4;
  local_7c = 0;
  FUN_14001a6c0(&local_88,1);
  uStack_98 = 1;
  ppuStack_a0 = &PTR_FUN_14a7e09f0;
  local_a8 = 2;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7e0a60,1,&PTR_FUN_14a7e0a10);
  ppuStack_a0 = (undefined **)0x0;
  uStack_98 = 0;
  local_a8 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7e0b50);
  local_88 = (code *)0x149fca2ba;
  local_80 = 0xd;
  local_7c = 0;
  uVar3 = FUN_14001a6c0(&local_88,1);
  _DAT_14cacd880 = (ulonglong)uVar3;
  uStack_98 = 0;
  local_a8 = 0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7e16c0,1,0);
  FUN_1446f470e(&local_88,&DAT_149e3a952,1);
  DAT_14cace040 = local_88;
  FUN_1446f470e(&local_88,L"PrimaryAssetLabel",1);
  DAT_14cacd8a0 = local_88;
  FUN_1446f470e(&local_88,L"PackageChunk",1);
  DAT_14cacd8a8 = local_88;
  FUN_1446f470e(&local_88,L"__Suppressed__",1);
  DAT_14cacd8b0 = local_88;
  FUN_140056680(&DAT_14cacd8b8,L"$AssetSearchRoots");
  atexit((_func_5014 *)&LAB_1433f702d);
  FUN_140056680(&DAT_14cacd8c8,L"$DynamicSearchRoots");
  atexit((_func_5014 *)&LAB_1433f703e);
  DAT_14cacd8d8 = 0;
  _DAT_14cacd8e0 = 0;
  _DAT_14cacd8e8 = 2;
  atexit(FUN_1433f704f);
  DAT_14cacd8f0 = 0;
  _DAT_14cacd8f8 = 0;
  _DAT_14cacd900 = 2;
  atexit(FUN_1433f7080);
  local_78 = 0;
  local_68 = &PTR_LAB_149e01e20;
  local_60 = FUN_143408a4a;
  local_88 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cacd908,0,&local_88);
  local_88 = (code *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,2,0x10);
  local_80 = 2;
  *(undefined ***)local_88 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_88 + 0x10) = lVar4;
  *(undefined ***)local_88 = &PTR_FUN_149e062c0;
  *(code **)(local_88 + 0x18) = FUN_1433f9d96;
  local_a8 = CONCAT44(local_a8._4_4_,1);
  FUN_14152bcb8(&DAT_14cacd978,L"AssetManager.DumpTypeSummary",
                L"Shows a summary of types known about by the asset manager",&local_88);
  if (local_80 == 0) {
LAB_14340b713:
    if (local_88 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_88 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    local_80 = 0;
    goto LAB_14340b713;
  }
  atexit(FUN_1433fa491);
  local_88 = (code *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,2,0x10);
  local_80 = 2;
  *(undefined ***)local_88 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_88 + 0x10) = lVar4;
  *(undefined ***)local_88 = &PTR_FUN_149e062c0;
  *(code **)(local_88 + 0x18) = FUN_1433fa4d6;
  local_a8 = CONCAT44(local_a8._4_4_,1);
  FUN_14152bcb8(&DAT_14cacd988,L"AssetManager.DumpLoadedAssets",
                L"Shows a list of all loaded primary assets and bundles",&local_88);
  if (local_80 == 0) {
LAB_14340b7f1:
    if (local_88 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_88 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    local_80 = 0;
    goto LAB_14340b7f1;
  }
  atexit(FUN_1433fb663);
  local_88 = (code *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,2,0x10);
  local_80 = 2;
  *(undefined ***)local_88 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_88 + 0x10) = lVar4;
  *(undefined ***)local_88 = &PTR_FUN_149e00260;
  *(code **)(local_88 + 0x18) = FUN_1433fb6a8;
  local_a8 = CONCAT44(local_a8._4_4_,1);
  FUN_1415c7246(&DAT_14cacd998,L"AssetManager.DumpBundlesForAsset",
                L"Shows a list of all bundles for the specified primary asset by primary asset id (i.e. Map:Entry)"
                ,&local_88);
  if (local_80 == 0) {
LAB_14340b8dd:
    if (local_88 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_88 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    local_80 = 0;
    goto LAB_14340b8dd;
  }
  atexit(FUN_1433fb7a5);
  local_88 = (code *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,2,0x10);
  local_80 = 2;
  *(undefined ***)local_88 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_88 + 0x10) = lVar4;
  *(undefined ***)local_88 = &PTR_FUN_149e062c0;
  *(code **)(local_88 + 0x18) = FUN_1433fb7ea;
  local_a8 = CONCAT44(local_a8._4_4_,1);
  FUN_14152bcb8(&DAT_14cacd9a8,L"AssetManager.DumpAssetRegistryInfo",
                L"Dumps extended info about asset registry to log",&local_88);
  if (local_80 == 0) {
LAB_14340b9bb:
    if (local_88 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_88 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    local_80 = 0;
    goto LAB_14340b9bb;
  }
  atexit(FUN_1433fb811);
  local_88 = (code *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,2,0x10);
  local_80 = 2;
  *(undefined ***)local_88 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_88 + 0x10) = lVar4;
  *(undefined ***)local_88 = &PTR_FUN_149e00260;
  *(code **)(local_88 + 0x18) = FUN_1433fb856;
  local_a8 = CONCAT44(local_a8._4_4_,1);
  FUN_1415c7246(&DAT_14cacd9b8,L"AssetManager.DumpReferencersForPackage",
                L"Generates a graph viz and log file of all references to a specified package",
                &local_88);
  if (local_80 == 0) {
LAB_14340ba99:
    if (local_88 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_88 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    local_80 = 0;
    goto LAB_14340ba99;
  }
  atexit(FUN_1433fbcb5);
  uStack_98 = 1;
  ppuStack_a0 = &PTR_FUN_14a7e2aa0;
  local_a8 = 3;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7e2ac0);
  uStack_98 = 0;
  local_a8 = 0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7e2e80,1,0);
  uStack_98 = 0;
  local_a8 = 0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7e5610,6,0);
  uStack_98 = 0;
  local_a8 = 0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7e5e20,1,0);
  uStack_98 = 0;
  local_a8 = 0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7e7090,1,0);
  uStack_98 = 3;
  ppuStack_a0 = &PTR_FUN_14a7e7730;
  local_a8 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7e7790);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cacdc40,L"au.DisableStereoSpread",&DAT_14cacdc50,
                L"When set to 1, ignores the 3D Stereo Spread property in attenuation settings and instead renders audio from a singular point.\n0: Not Disabled, 1: Disabled"
               );
  atexit(FUN_1433fc0a8);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cacdc58,L"au.AllowAudioSpatialization",&DAT_14c7612fc,
                L"Controls if we allow spatialization of audio, normally this is enabled.  If disabled all audio won\'t be spatialized, but will have attenuation.\n0: Disable, >0: Enable"
               );
  atexit(FUN_1433fc0ed);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cacdc68,L"au.EnableOcclusionFilterScale",&DAT_14cacdc78,
                L"Whether or not we scale occlusion by 0.25f to compensate for change in filter cutoff frequencies in audio mixer. \n0: Not Enabled, 1: Enabled"
               );
  atexit(FUN_1433fc132);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cacdc80,L"au.BypassPlayWhenSilent",&DAT_14cacdc90,
                L"When set to 1, ignores the Play When Silent flag for non-procedural sources.\n0: Honor the Play When Silent flag, 1: stop all silent non-procedural sources."
               );
  atexit(FUN_1433fc177);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cacdc98,L"au.WaveInstanceMinVolume",&DAT_14c761300,
                L"Sets the minimum volume for a wave instance to be considered active\nDefault is 0.0001 (-80 dB)"
               );
  atexit(FUN_1433fc1bc);
  uStack_98 = 1;
  ppuStack_a0 = &PTR_FUN_14a7e8680;
  local_a8 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7e86a0,1,0);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cacdd20,L"au.editor.CookOverrideCachingInterval",&DAT_14c761304,
                L"This sets the max latency between when a cook override is changed in the project settings and when it is applied to new audio sources.\nn: Time between caching intervals, in seconds."
               );
  atexit(FUN_1433fd2e1);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cacdd30,L"au.streamcaching.MinimumCacheUsage",&DAT_14c761308,
                L"This value is the minimum potential usage of the stream cache we feasibly want to support. Setting this to 0.25, for example, cause us to potentially be using 25% of our cache size when we start evicting chunks, worst cast scenario.\n0.0: limit the number of chunks to our (Cache Size / Max Chunk Size) [0.01-0.99]: Increase our number of chunks to limit disk IO when we have lots of small sounds playing."
               );
  atexit(FUN_1433fd326);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cacdd40,L"au.streamcaching.ChunkSlotNumScalar",&DAT_14c76130c,
                L"This allows scaling the number of chunk slots pre-allocated.\n1.0: is the lower limit"
               );
  atexit(FUN_1433fd36b);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cacdd50);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cacdd50,4000);
  atexit((_func_5014 *)&LAB_1433fd3b0);
  local_88 = (code *)CONCAT44(local_88._4_4_,1);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cacdd78,L"AudioThread.UseBackgroundThreadPool",&local_88,
                L"If true, use the background thread pool for realtime audio decompression.");
  atexit(FUN_1433fdf1f);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cacddf8,L"au.compression.AsyncCompression",&DAT_14c761310,
                L"1: Allow async compression of USoundWave when supported by the codec.\n0: Disable async compression."
               );
  atexit(FUN_1433fdfa1);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cacde08,L"au.SetAudioChannelCount",&DAT_14cacde18,
                L"Changes the audio channel count. Max value is clamped to the MaxChannelCount the audio engine was initialize with.\n0: Disable, >0: Enable"
               );
  atexit(FUN_1433fe081);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cacde20,L"au.SetAudioChannelScaleCount",&DAT_14c761314,
                L"Changes the audio channel count by percentage.\n");
  atexit(FUN_1433fe0c6);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cacde30,L"au.DisableStoppingVoices",&DAT_14cacde40,
                L"Disables stopping voices feature.\n0: Not Disabled, 1: Disabled");
  atexit(FUN_1433fe10b);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cacde48,L"au.ForceRealtimeDecompression",&DAT_14cacde58,
                L"When set to 1, this deliberately ensures that all audio assets are decompressed as they play, rather than fully on load.\n0: Allow full decompression on load, 1: force realtime decompression."
               );
  atexit(FUN_1433fe150);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cacde60,L"au.DisableAppVolume",&DAT_14cacde70,
                L"Disables application volume when set to 1.\n0: App volume enabled, 1: App volume disabled"
               );
  atexit(FUN_1433fe195);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cacde78,L"au.DisableAutomaticPrecache",&DAT_14cacde88,
                L"When set to 1, this disables precaching on load or startup, it will only precache synchronously when playing.\n0: Use normal precaching logic, 1: disables all precaching except for synchronous calls."
               );
  atexit(FUN_1433fe1da);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cacde90,L"au.DecompressionThreshold",&DAT_14cacdea0,
                L"If non-zero, overrides the decompression threshold set in either the sound group or the platform\'s runtime settings.\nValue: Maximum duration we should fully decompress, in seconds."
               );
  atexit(FUN_1433fe21f);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cacdea8,L"au.RealtimeDecompressZeroDurationSounds",&DAT_14cacdeb8,
                L"When set to 1, we will fallback to realtime decoding any sound waves with an invalid duration..\n0: Fully decompress sounds with a duration of 0, 1: realtime decompress sounds with a duration of 0."
               );
  atexit(FUN_1433fe264);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cacdec0,L"au.WaitForSoundWaveToLoad",&DAT_14c761318,
                L"When set to 1, we will refuse to play any sound unless the USoundWave has been loaded.\n0: Attempt to play back, 1: Wait for load."
               );
  atexit(FUN_1433fe2a9);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cacded0,L"au.BakedAnalysisEnabled",&DAT_14c76131c,
                L"Enables or disables queries to baked analysis from audio component.\n");
  atexit(FUN_1433fe2ee);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cacdee0,L"au.NumPrecacheFrames",&DAT_14cacdef0,
                L"When set to > 0, will use that value as the number of frames to precache audio buffers with.\n0: Use default value for precache frames, >0: Number of frames to precache."
               );
  atexit(FUN_1433fe333);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cacdef8,L"au.DisableLegacyReverb",&DAT_14cacdf08,
                L"Disables reverb on legacy audio backends.\n0: Enabled, 1: Disabled");
  atexit(FUN_1433fe378);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cacdf10,L"au.SoundDistanceOptimizationLength",&DAT_14c761320,
                L"The maximum duration a sound must be in order to be a candidate to be culled due to one-shot distance optimization.\n"
               );
  atexit(FUN_1433fe3bd);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cacdf20,L"au.EnableBinauralAudioForAllSpatialSounds",&DAT_14cacdf30,
                L"Toggles binaural audio rendering for all spatial sounds if binaural rendering is available.\n"
               );
  atexit(FUN_1433fe402);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cacdf38,L"au.DisableBinauralSpatialization",&DAT_14cacdf48,
                L"Disables binaural spatialization.\n");
  atexit(FUN_1433fe447);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cacdf50,L"au.FlushAudioRenderThreadOnGC",&DAT_14cacdf60,
                L"When set to 1, every time the GC runs, we flush all pending audio render thread commands.\n"
               );
  atexit(FUN_1433fe48c);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cacdf68,L"au.MaxWorldDistance",&DAT_14c761324,
                L"Maximum world distance used in audio-related calculations (eg. attenuation).\n");
  atexit(FUN_1433fe4d1);
  local_88 = (code *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,2,0x10);
  local_80 = 2;
  *(undefined ***)local_88 = &PTR_LAB_14a1e1a40;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_88 + 0x10) = lVar4;
  *(undefined ***)local_88 = &PTR_FUN_14a1e19d0;
  *(code **)(local_88 + 0x18) = FUN_143408730;
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_14156bb80(&DAT_14cacdf78,L"au.spatialization.ListAvailableSpatialPlugins",
                L"This will output a list of currently available/active spatialization plugins",
                &local_88);
  if (local_80 == 0) {
LAB_14340c1f5:
    if (local_88 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_88 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    local_80 = 0;
    goto LAB_14340c1f5;
  }
  atexit(FUN_1433fe516);
  local_88 = (code *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,2,0x10);
  local_80 = 2;
  *(undefined ***)local_88 = &PTR_LAB_149e30fe0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_88 + 0x10) = lVar4;
  *(undefined ***)local_88 = &PTR_FUN_149e3c9b0;
  *(code **)(local_88 + 0x18) = FUN_143408938;
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_14170c604(&DAT_14cacdf88,L"au.spatialization.SetCurrentSpatialPlugin",
                L"Attempt to swap to the named spatialization plugin (au.spatialization.ListAvailableSpatialPlugins to see what is availible)"
                ,&local_88);
  if (local_80 != 0) {
    if (local_88 == (code *)0x0) goto LAB_14340c2ef;
    (*(code *)**(undefined8 **)local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    local_80 = 0;
  }
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_14340c2ef:
  atexit(FUN_1433fe55b);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cacdf98,L"au.EnableRelativeRenderCostVoiceLimit",&DAT_14cacdfa8,
                L"Enables or disables using the relative render cost of rendering sources to count toward max channels culling."
               );
  atexit(FUN_1433fe5a0);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14340c434 FUN_14340c434 body=69 status=ok
// SIG undefined FUN_14340c434(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340c434(void)

{
  _DAT_14cace050 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340c476. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace058,1);
  return;
}



// FUNCTION 14340c479 FUN_14340c479 body=69 status=ok
// SIG undefined FUN_14340c479(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340c479(void)

{
  _DAT_14cace068 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340c4bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace070,1);
  return;
}



// FUNCTION 14340c4be FUN_14340c4be body=69 status=ok
// SIG undefined FUN_14340c4be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340c4be(void)

{
  _DAT_14cace080 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340c500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace088,1);
  return;
}



// FUNCTION 14340c503 FUN_14340c503 body=69 status=ok
// SIG undefined FUN_14340c503(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340c503(void)

{
  _DAT_14cace098 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340c545. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace0a0,1);
  return;
}



// FUNCTION 14340c548 FUN_14340c548 body=69 status=ok
// SIG undefined FUN_14340c548(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340c548(void)

{
  _DAT_14cace0b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340c58a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace0b8,1);
  return;
}



// FUNCTION 14340c58e FUN_14340c58e body=17 status=ok
// SIG undefined FUN_14340c58e(void)

undefined8 * FUN_14340c58e(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  return param_1;
}



// FUNCTION 14340c5a0 FUN_14340c5a0 body=1540 status=ok
// SIG undefined FUN_14340c5a0(void)

void FUN_14340c5a0(longlong *param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  byte bVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  LARGE_INTEGER local_a8;
  undefined8 uStack_a0;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  int local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1f);
  local_d8 = 0;
  uStack_d0 = 0;
  EnterCriticalSection(lpCriticalSection);
  plVar2 = param_1 + 0x15;
  FUN_1463ad99c(plVar2,&local_d8);
  LeaveCriticalSection(lpCriticalSection);
  lVar4 = local_d8;
  lVar10 = (longlong)(int)uStack_d0;
  if (0 < lVar10) {
    lVar9 = 0;
    do {
      FUN_1479863d0(&DAT_14cacedd0,*(undefined4 *)(lVar4 + lVar9));
      lVar9 = lVar9 + 4;
    } while (lVar10 * 4 != lVar9);
  }
  if (((DAT_14c844290 & 1) != 0) && ((DAT_14c844291 & 1) == 0)) {
    FUN_143412e42(&DAT_14cace5a8);
    puVar5 = DAT_14cace5b8;
    if (DAT_14cace5b8 != (undefined8 *)0x0) {
      if (DAT_14c87e718 == '\0') {
        iVar3 = *(int *)((longlong)DAT_14cace5b8 + 0x1c);
        if (2 < iVar3) {
          bVar7 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
          if (bVar7 < 3) {
            local_a8.QuadPart = 0x20100000001;
            uStack_a0 = 0x30100000101;
            local_98 = DAT_14c7585c8;
            local_94 = DAT_14c7585c8 | 0x200;
            local_90 = DAT_14c7585c8 | 0x100;
            local_8c = DAT_14c7585c8 | 0x300;
            local_88 = 0x20000000000;
            uStack_80 = 0x100;
            uStack_7c = CONCAT44(uStack_7c._4_4_,0x300);
            if (*(byte *)((longlong)&local_a8 + (ulonglong)(iVar3 - 3) * 4) == bVar7)
            goto LAB_14340cb56;
          }
        }
        QueryPerformanceCounter(&local_a8);
        uStack_a0 = 0xffffffffffffffff;
        FUN_140056092(puVar5,&local_a8);
      }
      else {
LAB_14340cb56:
        FUN_140082318(puVar5);
      }
      puVar5 = DAT_14cace5b8;
      DAT_14cace5b8 = (undefined8 *)0x0;
      if (puVar5 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar5 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
    }
    uVar8 = FUN_140c61bfa();
    if (DAT_14cace5c0 != 0) {
      FUN_14480f766(uVar8);
    }
    uVar8 = FUN_140b631de();
    if (DAT_14cace5c8 != 0) {
      FUN_14480f766(uVar8);
    }
    if (DAT_14cace5d0 != 0) {
      FUN_14480f766(&DAT_14c964740);
    }
    if (DAT_14cace5d8 != 0) {
      FUN_14480f766(&DAT_14c964758);
    }
    DAT_14c844290 = 0;
    FUN_1400daade(DAT_14cace598);
    plVar6 = DAT_14cace598;
    if (DAT_14cace598 != (longlong *)0x0) {
      DAT_14cace598 = (longlong *)0x0;
      puVar5 = (undefined8 *)*plVar6;
      if (puVar5 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar5 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
      FUN_1400020a8(plVar6);
    }
    if (DAT_14cace510 == '\x01') {
      FUN_140457ffc(&DAT_14cb10950,&DAT_14cace4c8);
      if ((DAT_14cace4e8 != (byte *)0x0) && ((*DAT_14cace4e8 & 1) != 0)) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14cb0c040) {
          FUN_144b3d300(&DAT_14cb0c040);
          if (DAT_14cb0c040 == -1) {
            FUN_145e17f72(&DAT_14cb0bff0);
            atexit(FUN_14374ca90);
            _Init_thread_footer(&DAT_14cb0c040);
          }
        }
        FUN_1402eb48e(*(undefined8 *)(DAT_14cace4e8 + 0x28),&DAT_14cace4c8);
        *DAT_14cace4e8 = *DAT_14cace4e8 & 0xfe;
      }
      DAT_14cace510 = '\0';
    }
    FUN_143412764();
  }
  local_88 = 0;
  uStack_80 = 0;
  local_a8.QuadPart = 0;
  uStack_a0 = 0;
  uStack_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  EnterCriticalSection(lpCriticalSection);
  FUN_1461b883c(&local_a8,plVar2);
  LeaveCriticalSection(lpCriticalSection);
  if ((int)uStack_a0 != local_74) {
    FUN_14798648c(&local_a8);
    FUN_1479865d0(&local_a8);
  }
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0xffffffff;
  FUN_145794544(param_1 + 0x12,&local_c8);
  FUN_14051bf10(&local_c8);
  FUN_140457ffc(&DAT_14c872b90,param_1);
  *(undefined4 *)(param_1 + 0x32) = 0;
  local_60 = 0;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_145e9fa84(&local_a8);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  lVar4 = param_1[0x31];
  if (lVar4 == 0) goto LAB_14340c78a;
  if (DAT_14c87e718 == '\0') {
    iVar3 = *(int *)(lVar4 + 0x1c);
    if (2 < iVar3) {
      bVar7 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
      if (bVar7 < 3) {
        local_a8.QuadPart = 0x20100000001;
        uStack_a0 = 0x30100000101;
        local_98 = DAT_14c7585c8;
        local_94 = DAT_14c7585c8 | 0x200;
        local_90 = DAT_14c7585c8 | 0x100;
        local_8c = DAT_14c7585c8 | 0x300;
        local_88 = 0x20000000000;
        uStack_80 = 0x100;
        uStack_7c = CONCAT44(uStack_7c._4_4_,0x300);
        if (*(byte *)((longlong)&local_a8 + (ulonglong)(iVar3 - 3) * 4) == bVar7)
        goto LAB_14340ca76;
      }
    }
    QueryPerformanceCounter(&local_a8);
    uStack_a0 = 0xffffffffffffffff;
    FUN_140056092(lVar4,&local_a8);
  }
  else {
LAB_14340ca76:
    FUN_140082318(lVar4);
  }
  puVar5 = (undefined8 *)param_1[0x31];
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
LAB_14340c78a:
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_145d148b4(param_1 + 0x26);
  DeleteCriticalSection(lpCriticalSection);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_145e9fa84(plVar2);
  FUN_14051bf10(param_1 + 0x12);
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_14798639d(param_1[0xd],(int)param_1[0xe]);
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  lVar4 = param_1[0xc];
  if (lVar4 != 0) {
    (**(code **)(lVar4 + -0x10))(lVar4 + -0x10);
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145d14944(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14340cba6 FUN_14340cba6 body=288 status=ok
// SIG undefined FUN_14340cba6(void)

void FUN_14340cba6(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  undefined8 uStack_50;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *param_1;
  if (lVar3 == 0) goto LAB_14340cc33;
  if (DAT_14c87e718 == '\0') {
    iVar2 = *(int *)(lVar3 + 0x1c);
    if (2 < iVar2) {
      bVar4 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
      if (bVar4 < 3) {
        local_58.QuadPart = 0x20100000001;
        uStack_50 = 0x30100000101;
        local_48 = DAT_14c7585c8;
        local_44 = DAT_14c7585c8 | 0x200;
        local_40 = DAT_14c7585c8 | 0x100;
        local_3c = DAT_14c7585c8 | 0x300;
        local_38 = 0;
        uStack_34 = 0x200;
        uStack_30 = 0x100;
        uStack_2c = 0x300;
        if (*(byte *)((longlong)&local_58 + (ulonglong)(iVar2 - 3) * 4) == bVar4)
        goto LAB_14340cccf;
      }
    }
    QueryPerformanceCounter(&local_58);
    uStack_50 = 0xffffffffffffffff;
    FUN_140056092(lVar3,&local_58);
  }
  else {
LAB_14340cccf:
    FUN_140082318(lVar3);
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
    }
  }
LAB_14340cc33:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14340ccdc FUN_14340ccdc body=878 status=ok
// SIG undefined FUN_14340ccdc(void)

undefined8 * FUN_14340ccdc(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  longlong *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  char local_7f;
  longlong *local_78;
  longlong local_70 [2];
  uint local_5c;
  uint *local_58;
  longlong **local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar8 = *(int *)(param_1 + 0x120) + 1;
  *(uint *)(param_1 + 0x120) = uVar8;
  local_a8 = (undefined8 *)0x0;
  local_5c = uVar8;
  FUN_14797244e(local_70,uVar8,*(undefined1 *)(param_3 + 1),*(undefined1 *)((longlong)param_3 + 9));
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = *(undefined1 *)(param_3 + 1);
  local_7f = *(char *)((longlong)param_3 + 9);
  local_78 = (longlong *)param_3[2];
  if (local_7f == '\x01') {
    FUN_1446f470e(&local_58,L"NonRealtimeAudioRenderer",1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
    plVar4 = (longlong *)FUN_1402c9134(&DAT_14c874628,local_58,local_44,0);
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x50))(plVar4);
  }
  else if (local_78 == (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x78) + 0x50))();
    if (plVar4 == (longlong *)0x0) {
      local_a0 = plVar4;
      plVar4 = (longlong *)FUN_14001cc68(0xe50,0x10);
      (**(code **)(**(longlong **)(param_1 + 0x78) + 0x58))();
      FUN_1477ba824(plVar4);
    }
  }
  else {
    plVar4 = (longlong *)(**(code **)(*local_78 + 0x50))();
  }
  local_a0 = plVar4;
  plVar5 = (longlong *)FUN_145b54fcc();
  lVar6 = plVar5[0x22];
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 1000))(plVar5);
    lVar6 = plVar5[0x22];
  }
  iVar3 = -1;
  if ((longlong)*(int *)(lVar6 + 0x180) != 0) {
    lVar7 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(lVar6 + 0x178) + 0x10 + lVar7);
      if (iVar3 <= iVar1) {
        iVar3 = iVar1;
      }
      lVar7 = lVar7 + 0x18;
    } while ((longlong)*(int *)(lVar6 + 0x180) * 0x18 != lVar7);
  }
  plVar5 = (longlong *)(param_1 + 0xa8);
  local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,*(undefined4 *)((longlong)param_3 + 0x1c));
  cVar2 = FUN_1433fe5e6(plVar4,uVar8,iVar3,*(undefined4 *)(param_3 + 3));
  plVar4 = local_a0;
  if (cVar2 == '\0') {
    FUN_1433ff2cc(local_a0);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)*plVar4)(plVar4,1);
    }
    local_a0 = (longlong *)0x0;
  }
  else {
    lVar6 = FUN_14795e9a2();
    plVar4 = local_a0;
    FUN_1433ff704(local_a0,*(undefined4 *)(lVar6 + 0x10));
    (**(code **)(*plVar4 + 0x48))(plVar4);
  }
  local_58 = &local_5c;
  local_50 = &local_a0;
  FUN_147986aee(plVar5,local_44);
  FUN_14340d97a(&local_a0);
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar6 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar6 = *(longlong *)(param_1 + 0xe8);
    }
    iVar3 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & local_5c) * 4);
    if (iVar3 != -1) {
      do {
        lVar6 = *plVar5 + (longlong)iVar3 * 0x40;
        if (*(uint *)(*plVar5 + (longlong)iVar3 * 0x40) == local_5c) goto LAB_14340cf69;
        iVar3 = *(int *)(lVar6 + 0x38);
      } while (iVar3 != -1);
    }
  }
  lVar6 = 0;
LAB_14340cf69:
  plVar4 = (longlong *)(lVar6 + 8);
  if (lVar6 == 0) {
    plVar4 = (longlong *)0x0;
  }
  if (*plVar4 == 0) {
    FUN_147986fbe(plVar5,local_5c);
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0xffffffff;
  }
  else {
    uVar9 = FUN_14340d04c(param_1,*param_3);
    local_a8 = param_3;
    FUN_1479727a2(uVar9,param_2,plVar4,local_5c);
    FUN_1479863d0(&DAT_14caced90,local_5c);
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14340d04c FUN_14340d04c body=236 status=ok
// SIG undefined FUN_14340d04c(void)

void FUN_14340d04c(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  if ((param_2 != 0) && (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc))) {
    lVar1 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xe8);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & param_3) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0xa8) + (longlong)iVar2 * 0x40;
        if (*(uint *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar2 * 0x40) == param_3) {
          if ((lVar1 + 8U & 0xfffffffffffffff7) != 0) {
            if ((longlong)*(int *)(lVar1 + 0x20) == 0) goto LAB_14340d117;
            lVar3 = 0;
            while (*(longlong *)(*(longlong *)(lVar1 + 0x18) + lVar3) != param_2) {
              lVar3 = lVar3 + 8;
              if ((longlong)*(int *)(lVar1 + 0x20) * 8 == lVar3) {
LAB_14340d117:
                FUN_1479866ec(lVar1 + 0x18,&local_28);
                    /* WARNING: Subroutine does not return */
                FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
              }
            }
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x38);
      } while (iVar2 != -1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14340d14e FUN_14340d14e body=371 status=ok
// SIG undefined FUN_14340d14e(void)

void FUN_14340d14e(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if ((param_2 != 0) && (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc))) {
    lVar2 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xe8);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & param_3) * 4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0xa8) + (longlong)iVar3 * 0x40;
        if (*(uint *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar3 * 0x40) == param_3) {
          if ((lVar2 + 8U & 0xfffffffffffffff7) != 0) {
            if ((longlong)*(int *)(lVar2 + 0x20) == 0) goto LAB_14340d216;
            lVar5 = 0;
            goto LAB_14340d203;
          }
          break;
        }
        iVar3 = *(int *)(lVar2 + 0x38);
      } while (iVar3 != -1);
    }
  }
  goto LAB_14340d276;
  while (lVar5 = lVar5 + 8, (longlong)*(int *)(lVar2 + 0x20) * 8 != lVar5) {
LAB_14340d203:
    if (*(longlong *)(*(longlong *)(lVar2 + 0x18) + lVar5) == param_2) {
      local_28 = &local_30;
      FUN_14798688e();
      FUN_1479867de(&DAT_14cb10790,local_30,param_3);
      break;
    }
  }
LAB_14340d216:
  if (*(int *)(param_1 + 0x94) == 0) {
LAB_14340d2be:
    lVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x90);
    lVar2 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar4 == (longlong *)0x0) ||
         (((int)plVar4[2] != *(int *)(param_1 + 0x94) || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)
          ))) goto LAB_14340d2be;
      lVar2 = *plVar4;
    }
  }
  if (lVar2 == local_30) {
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
LAB_14340d276:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14340d2c2 FUN_14340d2c2 body=947 status=ok
// SIG undefined FUN_14340d2c2(void)

void FUN_14340d2c2(longlong param_1)

{
  uint uVar1;
  void *_Src;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cace200) {
    FUN_144b3d300(&DAT_14cace200);
    if (DAT_14cace200 == -1) {
      FUN_140056680(&DAT_14cace1f0,L"/Engine/EngineSounds");
      atexit((_func_5014 *)&LAB_14340e3b8);
      _Init_thread_footer(&DAT_14cace200);
    }
  }
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x1c8) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    FUN_14482b126(lVar3,0x40000000);
    *(undefined8 *)(param_1 + 0x1c8) = 0;
  }
  lVar3 = param_1 + 0x38;
  lVar2 = FUN_140081d40(lVar3,0);
  if (lVar2 != 0) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x1c8) = lVar2;
    uVar1 = *(uint *)(lVar2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    FUN_1447f71cc(lVar2,0x40000000);
  }
  _Src = DAT_14cace1f0;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar2 = (longlong)DAT_14cace1f8;
    local_50 = (void *)0x0;
    local_48 = DAT_14cace1f8;
    FUN_1446dd670(&local_50,(uint)(lVar2 == 0) + DAT_14cace1f8 + 7,0);
    if (lVar2 != 0) {
      memcpy(local_50,_Src,lVar2 * 2);
    }
    FUN_1401aebe8(&local_50,L"Master",6);
    local_40 = local_50;
    local_38 = local_48 + -1;
    if (local_48 == 0) {
      local_38 = 0;
    }
    FUN_14475bf92(lVar3);
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
    lVar3 = FUN_140081d40(lVar3,0);
    if (lVar3 != 0) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar3);
      }
      *(longlong *)(param_1 + 0x1c8) = lVar3;
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      FUN_1447f71cc(lVar3,0x40000000);
    }
  }
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x1d0) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    FUN_14482b126(lVar3,0x40000000);
    *(undefined8 *)(param_1 + 0x1d0) = 0;
  }
  lVar3 = FUN_140081d40(param_1 + 0x58,0);
  if (lVar3 != 0) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar3);
    }
    *(longlong *)(param_1 + 0x1d0) = lVar3;
    uVar1 = *(uint *)(lVar3 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    FUN_1447f71cc(lVar3,0x40000000);
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x1d8) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    FUN_14482b126(lVar3,0x40000000);
    *(undefined8 *)(param_1 + 0x1d8) = 0;
  }
  lVar3 = FUN_140081d40(param_1 + 0x78,0);
  if (lVar3 != 0) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar3);
    }
    *(longlong *)(param_1 + 0x1d8) = lVar3;
    uVar1 = *(uint *)(lVar3 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    FUN_1447f71cc(lVar3,0x40000000);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14340d676 FUN_14340d676 body=179 status=ok
// SIG undefined FUN_14340d676(void)

void FUN_14340d676(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x1e0) == '\0') {
    *(undefined1 *)(param_1 + 0x1e0) = 1;
    plVar1 = (longlong *)FUN_1470452f8();
    FUN_147d290a5(local_28);
    (**(code **)(*plVar1 + 0x18))(plVar1,local_28);
    FUN_147d293ad(local_38);
    (**(code **)(*plVar1 + 0x18))(plVar1,local_38);
    FUN_147d297db(local_48);
    (**(code **)(*plVar1 + 0x18))(plVar1,local_48);
    FUN_147d29c09(local_58);
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14340d72a FUN_14340d72a body=391 status=ok
// SIG undefined FUN_14340d72a(void)

void FUN_14340d72a(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  LARGE_INTEGER local_48;
  undefined8 uStack_40;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14cace090 == 0) goto LAB_14340d7f9;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    local_78 = 0;
    local_68 = &PTR_LAB_14a7fe9f0;
    local_88[0] = &LAB_143419aa6;
    local_60 = param_1;
    FUN_1415826cc(local_88);
  }
  local_90 = (undefined8 *)0x0;
  FUN_14340dba2(&local_90);
  FUN_14340da64(&local_90,0);
  puVar3 = local_90;
  if (local_90 == (undefined8 *)0x0) goto LAB_14340d7f9;
  if (DAT_14c87e718 == '\0') {
    iVar2 = *(int *)((longlong)local_90 + 0x1c);
    if (2 < iVar2) {
      bVar4 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
      if (bVar4 < 3) {
        local_48.QuadPart = 0x20100000001;
        uStack_40 = 0x30100000101;
        local_38 = DAT_14c7585c8;
        local_34 = DAT_14c7585c8 | 0x200;
        local_30 = DAT_14c7585c8 | 0x100;
        local_2c = DAT_14c7585c8 | 0x300;
        local_28 = 0;
        uStack_24 = 0x200;
        uStack_20 = 0x100;
        uStack_1c = 0x300;
        if (*(byte *)((longlong)&local_48 + (ulonglong)(iVar2 - 3) * 4) == bVar4)
        goto LAB_14340d8a5;
      }
    }
    QueryPerformanceCounter(&local_48);
    uStack_40 = 0xffffffffffffffff;
    FUN_140056092(puVar3,&local_48);
  }
  else {
LAB_14340d8a5:
    FUN_140082318(puVar3);
  }
  LOCK();
  piVar1 = (int *)(puVar3 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)*puVar3)(puVar3,1);
  }
LAB_14340d7f9:
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14340d8b2 FUN_14340d8b2 body=198 status=ok
// SIG undefined FUN_14340d8b2(void)

ulonglong FUN_14340d8b2(longlong param_1)

{
  undefined8 unaff_RSI;
  ulonglong uVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  longlong local_48;
  undefined2 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(longlong *)(param_1 + 0x98) == 0) {
    local_38 = 0;
    local_30 = 0xffffffffffffffff;
    local_40 = 1;
    local_48 = DAT_14cb10918;
    FUN_1479725e0(param_1,local_60);
    FUN_145794544(param_1 + 0x90,local_60);
    FUN_14051bf10(local_60);
    if (*(longlong *)(param_1 + 0x98) == 0) {
      uVar1 = 0;
    }
    else {
      if (DAT_14cb10918 != 0) {
        FUN_140becc00(DAT_14cb10918,param_1 + 0x90);
      }
      FUN_147972ae4();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14340d97a FUN_14340d97a body=81 status=ok
// SIG undefined FUN_14340d97a(void)

void FUN_14340d97a(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x40))();
    FUN_1433ff2cc(*param_1);
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *param_1 = 0;
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14340d9d8 FUN_14340d9d8 body=89 status=ok
// SIG undefined FUN_14340d9d8(void)

bool FUN_14340d9d8(void)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_146212cbe();
  if ((lVar2 == 0) || (cVar1 = FUN_147972802(lVar2), cVar1 != '\0')) {
    if (DAT_14cace0c0 != 0) {
      return *(int *)(DAT_14cace0c0 + 400) == 2;
    }
  }
  else {
    FUN_14340c5a0(lVar2);
    FUN_1400020a8(lVar2);
    DAT_14cace0c0 = 0;
  }
  return false;
}



// FUNCTION 14340da32 FUN_14340da32 body=50 status=ok
// SIG undefined FUN_14340da32(void)

void FUN_14340da32(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14cace0c0;
  if (DAT_14cace0c0 != 0) {
    FUN_14340c5a0(DAT_14cace0c0);
    FUN_1400020a8(lVar1);
    DAT_14cace0c0 = 0;
  }
  return;
}



// FUNCTION 14340da64 FUN_14340da64 body=295 status=ok
// SIG undefined FUN_14340da64(void)

void FUN_14340da64(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  undefined8 uStack_50;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *param_1;
  if (lVar3 == 0) goto LAB_14340daf8;
  if (DAT_14c87e718 == '\0') {
    iVar2 = *(int *)(lVar3 + 0x1c);
    if (2 < iVar2) {
      bVar4 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
      if (bVar4 < 3) {
        local_58.QuadPart = 0x20100000001;
        uStack_50 = 0x30100000101;
        local_48 = DAT_14c7585c8;
        local_44 = DAT_14c7585c8 | 0x200;
        local_40 = DAT_14c7585c8 | 0x100;
        local_3c = DAT_14c7585c8 | 0x300;
        local_38 = 0;
        uStack_34 = 0x200;
        uStack_30 = 0x100;
        uStack_2c = 0x300;
        if (*(byte *)((longlong)&local_58 + (ulonglong)(iVar2 - 3) * 4) == bVar4)
        goto LAB_14340db94;
      }
    }
    QueryPerformanceCounter(&local_58);
    uStack_50 = 0xffffffffffffffff;
    FUN_140056092(lVar3,&local_58);
  }
  else {
LAB_14340db94:
    FUN_140082318(lVar3);
  }
  lVar3 = *param_1;
  *param_1 = 0;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
    }
  }
LAB_14340daf8:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14340dba2 FUN_14340dba2 body=389 status=ok
// SIG undefined FUN_14340dba2(void)

void FUN_14340dba2(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  undefined8 uStack_50;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((DAT_14c844290 & 1) == 0) || ((DAT_14c844291 & 1) != 0)) goto LAB_14340dbc1;
  lVar3 = *param_1;
  if (lVar3 != 0) {
    if (DAT_14c87e718 == '\0') {
      iVar2 = *(int *)(lVar3 + 0x1c);
      if (2 < iVar2) {
        bVar5 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
        if (bVar5 < 3) {
          local_58.QuadPart = 0x20100000001;
          uStack_50 = 0x30100000101;
          local_48 = DAT_14c7585c8;
          local_44 = DAT_14c7585c8 | 0x200;
          local_40 = DAT_14c7585c8 | 0x100;
          local_3c = DAT_14c7585c8 | 0x300;
          local_38 = 0;
          uStack_34 = 0x200;
          uStack_30 = 0x100;
          uStack_2c = 0x300;
          if (*(byte *)((longlong)&local_58 + (ulonglong)(iVar2 - 3) * 4) == bVar5)
          goto LAB_14340dd12;
        }
      }
      QueryPerformanceCounter(&local_58);
      uStack_50 = 0xffffffffffffffff;
      FUN_140056092(lVar3,&local_58);
    }
    else {
LAB_14340dd12:
      FUN_140082318(lVar3);
    }
  }
  if (((DAT_14c844290 & 1) != 0) && ((DAT_14c844291 & 1) == 0)) {
    FUN_143412e42(&DAT_14cace5a8);
  }
  lVar4 = DAT_14cace5b8;
  lVar3 = *param_1;
  if (lVar3 != DAT_14cace5b8) {
    *param_1 = DAT_14cace5b8;
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      LOCK();
      piVar1 = (int *)(lVar3 + 8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
      }
    }
  }
LAB_14340dbc1:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14340dd3e FUN_14340dd3e body=172 status=ok
// SIG undefined FUN_14340dd3e(void)

void FUN_14340dd3e(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined8 local_88;
  undefined **local_78;
  undefined8 local_70;
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar1 = FUN_146269f19();
  if (cVar1 == '\0') {
    local_48 = 0;
    local_38 = &PTR_LAB_14a7fe9b0;
    local_58 = &LAB_143419a20;
    local_30 = param_1;
    local_28 = param_2;
    FUN_1415826cc();
  }
  else {
    local_88 = 0;
    local_78 = &PTR_LAB_14a7fe9d0;
    local_98 = &LAB_143419a64;
    local_70 = param_2;
    FUN_14797347e(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14340ddeb FUN_14340ddeb body=59 status=ok
// SIG undefined FUN_14340ddeb(void)

void FUN_14340ddeb(void)

{
  FUN_144760e21(DAT_14cacedb8,DAT_14cacedc0);
  if (DAT_14cacedb8 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340de18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14caced90);
  return;
}



// FUNCTION 14340de26 FUN_14340de26 body=59 status=ok
// SIG undefined FUN_14340de26(void)

void FUN_14340de26(void)

{
  FUN_144760e21(DAT_14cacedf8,DAT_14cacee00);
  if (DAT_14cacedf8 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340de53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14cacedd0);
  return;
}



// FUNCTION 14340de62 FUN_14340de62 body=170 status=ok
// SIG undefined FUN_14340de62(void)

void FUN_14340de62(longlong param_1)

{
  double dVar1;
  
  if (*(longlong *)(param_1 + 0x160) != 0) {
    *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0x1e0);
    *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x1d0);
    *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x1d8);
    *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x1c0);
    *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x1c8);
    *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x1b0);
    *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0x1b8);
    dVar1 = DAT_14c866ff8;
    *(double *)(param_1 + 0x170) = DAT_14c866ff8;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined8 *)(param_1 + 0x1f8) = 0x3f80000044160000;
    *(undefined8 *)(param_1 + 0x200) = 0x447a00003f800000;
    *(undefined1 **)(param_1 + 0x208) = &DAT_3f8000003f800000;
    *(undefined8 *)(param_1 + 0x210) = 0x3f80000044fa0000;
    *(undefined8 *)(param_1 + 0x218) = 0x461c40003f800000;
    *(undefined1 **)(param_1 + 0x220) = &DAT_3f8000003f800000;
    *(double *)(param_1 + 0x1f0) = (double)*(float *)(*(longlong *)(param_1 + 0x160) + 0x8c) + dVar1
    ;
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  return;
}



// FUNCTION 14340df0c FUN_14340df0c body=596 status=ok
// SIG undefined FUN_14340df0c(void)

void FUN_14340df0c(longlong param_1,char *param_2,char param_3)

{
  double dVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  longlong local_40 [2];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_2 == *(char *)(param_1 + 0x140)) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar3);
    }
    if (((*(longlong *)(param_2 + 8) == lVar3) && (param_3 == '\0')) &&
       (ABS(*(float *)(param_2 + 0x18) - *(float *)(param_1 + 0x158)) <= 1e-08)) goto LAB_14340df7a;
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    FUN_140056680(local_40,&DAT_149e01fe8);
  }
  else {
    local_50[0] = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18);
    FUN_1400021e4(local_50,local_40);
  }
  if (*(longlong *)(param_2 + 8) == 0) {
    FUN_140056680(local_50,&DAT_149e01fe8);
  }
  else {
    local_30 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x18);
    FUN_1400021e4(&local_30,local_50);
  }
  *(char *)(param_1 + 0x140) = *param_2;
  lVar3 = *(longlong *)(param_2 + 8);
  if (DAT_14c950c29 == 1) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *(longlong *)(param_2 + 8);
    }
  }
  bVar2 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x148) = lVar3;
  lVar3 = *(longlong *)(param_2 + 0x10);
  if ((bVar2 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *(longlong *)(param_2 + 0x10);
    }
  }
  *(longlong *)(param_1 + 0x150) = lVar3;
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0x56) = *(undefined4 *)(param_1 + 0x9e);
  *(undefined4 *)(param_1 + 0x5a) = *(undefined4 *)(param_1 + 0xa2);
  *(undefined4 *)(param_1 + 0x5e) = *(undefined4 *)(param_1 + 0xa6);
  *(undefined4 *)(param_1 + 0x62) = *(undefined4 *)(param_1 + 0xaa);
  *(double *)(param_1 + 0x28) = DAT_14c866ff8;
  FUN_147973cc0(param_1 + 0xf8,*(undefined8 *)(param_2 + 8));
  *(undefined1 *)(param_1 + 0x22a) = 1;
  dVar1 = DAT_14c866ff8;
  if (param_3 == '\0') {
    dVar1 = DAT_14c866ff8 + (double)*(float *)(param_2 + 0x1c);
  }
  *(double *)(param_1 + 0x100) = dVar1;
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x18);
  lVar3 = *(longlong *)(param_2 + 8);
  if ((lVar3 == 0) || (*param_2 == '\0')) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    lVar3 = *(longlong *)(param_2 + 8);
  }
  if (DAT_14c950c29 == 1) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *(longlong *)(param_2 + 8);
    }
  }
  *(longlong *)(param_1 + 0x18) = lVar3;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
LAB_14340df7a:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14340e162 FUN_14340e162 body=292 status=ok
// SIG undefined FUN_14340e162(void)

void FUN_14340e162(longlong param_1,longlong param_2,char param_3,byte param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x160);
    if (((lVar1 == param_2 & (param_4 ^ 1)) == 0) &&
       (((lVar1 == 0 || (param_3 != '\0')) ||
        (*(float *)(lVar1 + 0x2c) <= *(float *)(param_2 + 0x2c) &&
         *(float *)(param_2 + 0x2c) != *(float *)(lVar1 + 0x2c))))) {
      *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0x1e0);
      *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x1d0);
      *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x1d4);
      *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x1d8);
      *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x1dc);
      *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x1c0);
      *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x1c8);
      *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x1b0);
      *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0x1b8);
      dVar11 = DAT_14c866ff8;
      *(double *)(param_1 + 0x170) = DAT_14c866ff8;
      if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
        *(undefined8 *)(param_1 + 0x1f0) = 0;
        *(undefined8 *)(param_1 + 0x1f8) = 0x3f80000044160000;
        *(undefined8 *)(param_1 + 0x200) = 0x447a00003f800000;
        *(undefined1 **)(param_1 + 0x208) = &DAT_3f8000003f800000;
        *(undefined8 *)(param_1 + 0x210) = 0x3f80000044fa0000;
        *(undefined8 *)(param_1 + 0x218) = 0x461c40003f800000;
        *(undefined1 **)(param_1 + 0x220) = &DAT_3f8000003f800000;
      }
      else {
        *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 0x68);
        uVar9 = *(undefined8 *)(param_2 + 0x38);
        uVar10 = *(undefined8 *)(param_2 + 0x40);
        uVar2 = *(undefined4 *)(param_2 + 0x48);
        uVar3 = *(undefined4 *)(param_2 + 0x4c);
        uVar4 = *(undefined4 *)(param_2 + 0x50);
        uVar5 = *(undefined4 *)(param_2 + 0x54);
        uVar6 = *(undefined4 *)(param_2 + 0x5c);
        uVar7 = *(undefined4 *)(param_2 + 0x60);
        uVar8 = *(undefined4 *)(param_2 + 100);
        *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x58);
        *(undefined4 *)(param_1 + 0x214) = uVar6;
        *(undefined4 *)(param_1 + 0x218) = uVar7;
        *(undefined4 *)(param_1 + 0x21c) = uVar8;
        *(undefined4 *)(param_1 + 0x200) = uVar2;
        *(undefined4 *)(param_1 + 0x204) = uVar3;
        *(undefined4 *)(param_1 + 0x208) = uVar4;
        *(undefined4 *)(param_1 + 0x20c) = uVar5;
        *(undefined8 *)(param_1 + 0x1f0) = uVar9;
        *(undefined8 *)(param_1 + 0x1f8) = uVar10;
      }
      *(double *)(param_1 + 0x1f0) = dVar11 + (double)*(float *)(param_2 + 0x84);
      FUN_147974068(param_1 + 0x1e8);
      *(undefined1 *)(param_1 + 0x22b) = 1;
      *(longlong *)(param_1 + 0x160) = param_2;
    }
  }
  return;
}



// FUNCTION 14340e297 FUN_14340e297 body=69 status=ok
// SIG undefined FUN_14340e297(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340e297(void)

{
  _DAT_14cace110 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340e2d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace118,1);
  return;
}



// FUNCTION 14340e2dc FUN_14340e2dc body=55 status=ok
// SIG undefined FUN_14340e2dc(void)

void FUN_14340e2dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cace138 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cace138 = FUN_14171c317(FUN_1463add1a,uVar1,L"EVoiceSampleRate");
  }
  return;
}



// FUNCTION 14340e313 FUN_14340e313 body=55 status=ok
// SIG undefined FUN_14340e313(void)

void FUN_14340e313(void)

{
  undefined8 uVar1;
  
  if (DAT_14cace150 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cace150 = FUN_14171c317(FUN_1463add49,uVar1,L"EPanningMethod");
  }
  return;
}



// FUNCTION 14340e34a FUN_14340e34a body=55 status=ok
// SIG undefined FUN_14340e34a(void)

void FUN_14340e34a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cace168 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cace168 = FUN_14171c317(FUN_1463add78,uVar1,L"EMonoChannelUpmixMethod");
  }
  return;
}



// FUNCTION 14340e381 FUN_14340e381 body=55 status=ok
// SIG undefined FUN_14340e381(void)

void FUN_14340e381(void)

{
  undefined8 uVar1;
  
  if (DAT_14cace180 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cace180 = FUN_14171c317(FUN_1463adda7,uVar1,L"EDefaultAudioCompressionType");
  }
  return;
}



// FUNCTION 14340e3c9 FUN_14340e3c9 body=69 status=ok
// SIG undefined FUN_14340e3c9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340e3c9(void)

{
  _DAT_14cace208 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340e40b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace210,1);
  return;
}



// FUNCTION 14340e40e FUN_14340e40e body=69 status=ok
// SIG undefined FUN_14340e40e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340e40e(void)

{
  _DAT_14cace220 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340e450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace228,1);
  return;
}



// FUNCTION 14340e453 FUN_14340e453 body=69 status=ok
// SIG undefined FUN_14340e453(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340e453(void)

{
  _DAT_14cace238 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340e495. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace240,1);
  return;
}



// FUNCTION 14340e498 FUN_14340e498 body=69 status=ok
// SIG undefined FUN_14340e498(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340e498(void)

{
  _DAT_14cace248 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340e4da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace250,1);
  return;
}



// FUNCTION 14340e4dd FUN_14340e4dd body=69 status=ok
// SIG undefined FUN_14340e4dd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340e4dd(void)

{
  _DAT_14cace258 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340e51f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace260,1);
  return;
}



// FUNCTION 14340e522 FUN_14340e522 body=69 status=ok
// SIG undefined FUN_14340e522(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340e522(void)

{
  _DAT_14cace270 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340e564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace278,1);
  return;
}



// FUNCTION 14340e567 FUN_14340e567 body=69 status=ok
// SIG undefined FUN_14340e567(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340e567(void)

{
  _DAT_14cace280 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340e5a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace288,1);
  return;
}



// FUNCTION 14340e5ac FUN_14340e5ac body=69 status=ok
// SIG undefined FUN_14340e5ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340e5ac(void)

{
  _DAT_14cace298 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340e5ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace2a0,1);
  return;
}



// FUNCTION 14340e5f1 FUN_14340e5f1 body=69 status=ok
// SIG undefined FUN_14340e5f1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340e5f1(void)

{
  _DAT_14cace2a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340e633. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace2b0,1);
  return;
}



// FUNCTION 14340e636 FUN_14340e636 body=69 status=ok
// SIG undefined FUN_14340e636(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340e636(void)

{
  _DAT_14cace2c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340e678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace2c8,1);
  return;
}



// FUNCTION 14340e67b FUN_14340e67b body=69 status=ok
// SIG undefined FUN_14340e67b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340e67b(void)

{
  _DAT_14cace2d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340e6bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace2e0,1);
  return;
}



// FUNCTION 14340e6c0 FUN_14340e6c0 body=69 status=ok
// SIG undefined FUN_14340e6c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340e6c0(void)

{
  _DAT_14cace2f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340e702. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace2f8,1);
  return;
}



// FUNCTION 14340e705 FUN_14340e705 body=69 status=ok
// SIG undefined FUN_14340e705(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340e705(void)

{
  _DAT_14cace300 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340e747. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace308,1);
  return;
}



// FUNCTION 14340e74a FUN_14340e74a body=69 status=ok
// SIG undefined FUN_14340e74a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340e74a(void)

{
  _DAT_14cace310 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340e78c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace318,1);
  return;
}



// FUNCTION 14340e78f FUN_14340e78f body=69 status=ok
// SIG undefined FUN_14340e78f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340e78f(void)

{
  _DAT_14cace328 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340e7d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace330,1);
  return;
}



// FUNCTION 14340e7d4 FUN_14340e7d4 body=69 status=ok
// SIG undefined FUN_14340e7d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340e7d4(void)

{
  _DAT_14cace340 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340e816. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace348,1);
  return;
}



// FUNCTION 14340e819 FUN_14340e819 body=69 status=ok
// SIG undefined FUN_14340e819(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340e819(void)

{
  _DAT_14cace350 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340e85b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace358,1);
  return;
}



// FUNCTION 14340e85e FUN_14340e85e body=69 status=ok
// SIG undefined FUN_14340e85e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340e85e(void)

{
  _DAT_14cace360 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340e8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace368,1);
  return;
}



// FUNCTION 14340e8a3 FUN_14340e8a3 body=69 status=ok
// SIG undefined FUN_14340e8a3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340e8a3(void)

{
  _DAT_14cace378 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340e8e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace380,1);
  return;
}



// FUNCTION 14340e8e8 FUN_14340e8e8 body=69 status=ok
// SIG undefined FUN_14340e8e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340e8e8(void)

{
  _DAT_14cace388 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340e92a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace390,1);
  return;
}



// FUNCTION 14340e92d FUN_14340e92d body=69 status=ok
// SIG undefined FUN_14340e92d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340e92d(void)

{
  _DAT_14cace398 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340e96f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace3a0,1);
  return;
}



// FUNCTION 14340e972 FUN_14340e972 body=69 status=ok
// SIG undefined FUN_14340e972(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340e972(void)

{
  _DAT_14cace3a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014340e9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace3b0,1);
  return;
}



// FUNCTION 14340e9ba FUN_14340e9ba body=59 status=ok
// SIG undefined FUN_14340e9ba(void)

undefined8 FUN_14340e9ba(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar2 = (longlong)*(int *)(param_1 + 0x18) * 0x170;
    do {
      FUN_14797564e(lVar1);
      lVar1 = lVar1 + 0x170;
      lVar2 = lVar2 + -0x170;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 14340e9fa FUN_14340e9fa body=152 status=ok
// SIG undefined FUN_14340e9fa(void)

void FUN_14340e9fa(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  
  LOCK();
  *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + *(longlong *)(param_2 + 8);
  UNLOCK();
  uVar4 = *(ulonglong *)(param_1 + 0x48);
  if (DAT_14c761334 != 0) {
    uVar2 = *(longlong *)(param_1 + 0x40) + *(longlong *)(param_1 + 0x30) + uVar4;
    uVar1 = *(ulonglong *)(param_1 + 0x38);
    uVar3 = uVar2 - uVar1;
    if (uVar1 <= uVar2 && uVar3 != 0) {
      fVar5 = DAT_14c761340;
      if (0.0 < DAT_14c761340) {
        if (1.0 <= DAT_14c761340) {
          fVar5 = 1.0;
        }
        uVar3 = (ulonglong)(fVar5 * (float)uVar1);
        uVar4 = (longlong)uVar3 >> 0x3f;
        fVar5 = fVar5 * (float)uVar1 - 9.223372e+18;
        uVar3 = (longlong)fVar5 & uVar4 | uVar3;
      }
      FUN_14340f4aa(fVar5,uVar3,CONCAT71((int7)(uVar4 >> 8),1));
      return;
    }
  }
  return;
}



// FUNCTION 14340ea92 FUN_14340ea92 body=1191 status=ok
// SIG undefined FUN_14340ea92(void)

undefined8 *
FUN_14340ea92(undefined8 param_1,undefined8 *param_2,longlong *param_3,uint param_4,char param_5,
             undefined1 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  undefined1 auStack_148 [32];
  longlong local_128;
  uint local_120;
  longlong local_108;
  ulonglong local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  longlong local_d8;
  longlong *local_d0;
  undefined1 *local_c8;
  undefined8 local_b8;
  undefined **local_a8;
  undefined *local_a0;
  undefined1 *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  int local_70;
  undefined **local_68;
  undefined *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  bVar15 = DAT_14cace268 == 0;
  lVar9 = *param_3;
  if (lVar9 == 0) {
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[4] = 0xffffffff00000000;
    goto LAB_14340eb98;
  }
  lVar12 = *(longlong *)(lVar9 + 0x10);
  local_d0 = *(longlong **)(lVar9 + 0x18);
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
    UNLOCK();
  }
  local_d8 = lVar12;
  if ((lVar12 == 0) || (lVar9 = FUN_14340ef3a(param_1,param_3), lVar9 == 0)) {
LAB_14340eb3f:
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[4] = 0xffffffff00000000;
  }
  else {
    local_f8 = *(undefined8 *)(lVar12 + 0x7c);
    uStack_f0 = *(undefined4 *)(lVar12 + 0xc4);
    uStack_ec = *(undefined4 *)(lVar12 + 200);
    uStack_e8 = *(undefined4 *)(lVar12 + 0xcc);
    uStack_e4 = *(undefined4 *)(lVar12 + 0xd0);
    uStack_e0 = param_4;
    if ((param_4 == 0xffffffff) || (uVar6 = FUN_14795d958(lVar12 + 0x10), uVar6 <= param_4))
    goto LAB_14340eb3f;
    FUN_147975b14(lVar9,&local_f8);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x58));
    puVar10 = (undefined4 *)FUN_14340f26e(lVar9,&local_f8);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)FUN_14340f350(lVar9,&local_f8,&local_d8);
      if (puVar10 == (undefined4 *)0x0) {
        uVar13 = 0xffffffffffffffff;
      }
      else {
        uVar13 = *(undefined8 *)(puVar10 + 0x10);
        if (bVar15 && param_5 == '\0') {
          local_78 = 0;
          local_68 = &PTR_LAB_14a7fed80;
          local_60 = &DAT_143419af8;
          local_88 = &LAB_1479879bc;
          local_120 = CONCAT31(local_120._1_3_,param_6) & 0xffffff01;
          local_128 = CONCAT44(local_128._4_4_,0xff);
          FUN_14340f65c(lVar9,puVar10,&local_f8);
          if (*(char *)(lVar9 + 0x160) == '\x01') {
            uVar7 = FUN_1479754b4(puVar10);
            uVar6 = uStack_e0;
            uVar14 = local_f8;
            local_108 = CONCAT44(local_108._4_4_,uVar7);
            puVar11 = (undefined8 *)FUN_14001cc68(0x20,0x10);
            *puVar11 = 0;
            puVar11[1] = uVar14;
            *(uint *)(puVar11 + 2) = uVar6;
            *(undefined4 *)((longlong)puVar11 + 0x14) = (undefined4)local_108;
            *(undefined1 *)(puVar11 + 3) = 0;
            if (puVar11 != (undefined8 *)0x0) {
              puVar4 = *(undefined8 **)(lVar9 + 0x150);
              *(undefined8 **)(lVar9 + 0x150) = puVar11;
              *puVar4 = puVar11;
            }
          }
        }
        else {
          lVar12 = FUN_147975514(puVar10,uStack_e0);
          if (lVar12 != 0) {
            uVar6 = *(uint *)(lVar12 + 4);
            local_100 = (ulonglong)uVar6;
            LOCK();
            *(longlong *)(lVar9 + 0x30) = *(longlong *)(lVar9 + 0x30) - (ulonglong)(uint)puVar10[10]
            ;
            UNLOCK();
            local_108 = (longlong)(int)uVar6;
            local_88 = (undefined1 *)FUN_14001fdce(*(undefined8 *)(puVar10 + 8),local_108,0);
            *(undefined1 **)(puVar10 + 8) = local_88;
            cVar5 = FUN_147d3feda(lVar12);
            if (cVar5 != '\0') {
              LOCK();
              *(longlong *)(lVar9 + 0x30) = *(longlong *)(lVar9 + 0x30) + local_108;
              UNLOCK();
              *(ulonglong *)(puVar10 + 3) = CONCAT44(uStack_e8,uStack_ec);
              *(ulonglong *)(puVar10 + 5) = CONCAT44(uStack_e0,uStack_e4);
              *puVar10 = (undefined4)local_f8;
              puVar10[1] = local_f8._4_4_;
              puVar10[2] = uStack_f0;
              puVar10[3] = uStack_ec;
              puVar10[10] = (int)local_108;
              LOCK();
              puVar10[0x16] = 1;
              UNLOCK();
              if ((int)puVar10[0x17] < 0) {
                LOCK();
                puVar10[0x17] = 1;
                UNLOCK();
              }
              else {
                LOCK();
                puVar10[0x17] = puVar10[0x17] + 1;
                UNLOCK();
              }
              uVar7 = (undefined4)local_100;
              goto LAB_14340ec7c;
            }
          }
        }
      }
LAB_14340edf5:
      uVar7 = 0;
      uVar14 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(puVar10 + 0x10);
      FUN_1479760fe(lVar9,puVar10);
      if (puVar10[0x16] == 0) {
        if (bVar15 && param_5 == '\0') goto LAB_14340edf5;
        LOCK();
        plVar3 = *(longlong **)(puVar10 + 0x18);
        *(undefined8 *)(puVar10 + 0x18) = 1;
        UNLOCK();
        if (&DAT_00000001 < plVar3) {
          (**(code **)(*plVar3 + 0x10))(plVar3,0);
          (**(code **)*plVar3)(plVar3,1);
        }
      }
      LOCK();
      puVar10[0x17] = puVar10[0x17] + 1;
      UNLOCK();
      uVar7 = puVar10[10];
LAB_14340ec7c:
      uVar14 = *(undefined8 *)(puVar10 + 8);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x58));
    FUN_147975b86(lVar9,&local_f8,uVar13);
    if (*param_3 == 0) goto LAB_14340eb3f;
    iVar8 = FUN_14795d958(*(longlong *)(*param_3 + 0x10) + 0x10);
    if (2 < iVar8) {
      if (iVar8 - 1U == param_4) {
        iVar8 = 1;
      }
      else {
        iVar8 = param_4 + 1;
        if (iVar8 == -1) goto LAB_14340ee3d;
      }
      local_88 = (undefined1 *)0x0;
      uStack_80 = 0;
      local_78 = 0;
      if (local_d8 != 0) {
        local_88 = *(undefined1 **)(local_d8 + 0x7c);
        uStack_80 = *(undefined8 *)(local_d8 + 0xc4);
        local_78 = *(undefined8 *)(local_d8 + 0xcc);
      }
      local_b8 = 0;
      local_a8 = &PTR_LAB_14a7fed80;
      local_a0 = &DAT_143419af6;
      local_c8 = &LAB_1479879bc;
      local_120 = local_120 & 0xffffff00;
      local_128 = CONCAT44(local_128._4_4_,0xff);
      local_70 = iVar8;
      lVar12 = FUN_147975c00(lVar9,&local_88,&local_d8);
      if (lVar12 != -1) {
        FUN_147975b86(lVar9,&local_88,lVar12);
      }
    }
LAB_14340ee3d:
    if (*param_3 == 0) goto LAB_14340eb3f;
    local_128 = *(longlong *)(*param_3 + 0x10) + 0x7c;
    local_120 = param_4;
    FUN_147a35934(param_2,uVar14,uVar7,param_3);
  }
  plVar3 = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_14340eb98:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14340ef3a FUN_14340ef3a body=103 status=ok
// SIG undefined FUN_14340ef3a(void)

uint * FUN_14340ef3a(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  
  if ((*param_2 != 0) && (uVar1 = FUN_14795d958(*(longlong *)(*param_2 + 0x10) + 0x10), 1 < uVar1))
  {
    lVar2 = FUN_147d41804(*param_2,1);
    lVar3 = (longlong)*(int *)(param_1 + 0x18);
    if (0 < lVar3) {
      puVar4 = *(uint **)(param_1 + 0x10);
      do {
        if (*(uint *)(lVar2 + 4) <= *puVar4) {
          return puVar4;
        }
        puVar4 = puVar4 + 0x5c;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      return (uint *)0x0;
    }
  }
  return (uint *)0x0;
}



// FUNCTION 14340efa2 FUN_14340efa2 body=118 status=ok
// SIG undefined FUN_14340efa2(void)

void FUN_14340efa2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = (longlong)*(int *)(param_1 + 0x18);
  if (0 < lVar1) {
    puVar2 = *(uint **)(param_1 + 0x10);
    do {
      if (*(uint *)(param_2 + 8) <= *puVar2) goto LAB_14340efd9;
      puVar2 = puVar2 + 0x5c;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  puVar2 = (uint *)0x0;
LAB_14340efd9:
  local_10 = *(undefined4 *)(param_2 + 0x24);
  local_28 = *(undefined8 *)(param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 0x14);
  uStack_1c = *(undefined4 *)(param_2 + 0x18);
  uStack_18 = *(undefined4 *)(param_2 + 0x1c);
  uStack_14 = *(undefined4 *)(param_2 + 0x20);
  FUN_147975f1a(puVar2,&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14340f01a FUN_14340f01a body=118 status=ok
// SIG undefined FUN_14340f01a(void)

void FUN_14340f01a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = (longlong)*(int *)(param_1 + 0x18);
  if (0 < lVar1) {
    puVar2 = *(uint **)(param_1 + 0x10);
    do {
      if (*(uint *)(param_2 + 8) <= *puVar2) goto LAB_14340f051;
      puVar2 = puVar2 + 0x5c;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  puVar2 = (uint *)0x0;
LAB_14340f051:
  local_10 = *(undefined4 *)(param_2 + 0x24);
  local_28 = *(undefined8 *)(param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 0x14);
  uStack_1c = *(undefined4 *)(param_2 + 0x18);
  uStack_18 = *(undefined4 *)(param_2 + 0x1c);
  uStack_14 = *(undefined4 *)(param_2 + 0x20);
  FUN_147975f5a(puVar2,&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14340f092 FUN_14340f092 body=474 status=ok
// SIG undefined FUN_14340f092(void)

ulonglong FUN_14340f092(undefined8 param_1,longlong *param_2,undefined4 param_3,longlong *param_4,
                       undefined4 param_5,undefined1 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78 [2];
  undefined8 local_68 [7];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar4 = FUN_14340ef3a();
  lVar5 = *param_2;
  if (lVar5 == 0 || lVar4 == 0) {
    uVar7 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar5 + 0x10);
    plVar6 = *(longlong **)(lVar5 + 0x18);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    if (lVar3 != 0) {
      local_98 = *(undefined8 *)(lVar3 + 0x7c);
      uStack_90 = *(undefined8 *)(lVar3 + 0xc4);
      local_88 = *(undefined8 *)(lVar3 + 0xcc);
    }
    local_80 = param_3;
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
    local_78[0] = *param_4;
    local_68[0] = 0;
    if (local_78[0] != 0) {
      plVar6 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar6 = (longlong *)param_4[2];
      }
      (**(code **)*plVar6)(plVar6,local_68);
    }
    local_a8 = *(undefined8 *)(*param_2 + 0x10);
    plVar6 = *(longlong **)(*param_2 + 0x18);
    local_a0 = plVar6;
    if (plVar6 == (longlong *)0x0) {
      local_b0 = param_6;
      local_b8 = param_5;
      lVar5 = FUN_147975c00(lVar4,&local_98,&local_a8,local_78);
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      local_b0 = param_6;
      local_b8 = param_5;
      lVar5 = FUN_147975c00(lVar4,&local_98,&local_a8,local_78);
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
    FUN_147975b86(lVar4,&local_98,lVar5);
    uVar7 = CONCAT71((int7)((ulonglong)lVar4 >> 8),lVar5 != -1);
  }
  if (*param_4 != 0) {
    plVar6 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14340f26e FUN_14340f26e body=226 status=ok
// SIG undefined FUN_14340f26e(void)

longlong FUN_14340f26e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  lVar2 = FUN_147975b14(param_1,param_2);
  if (lVar2 != -1) {
    lVar2 = (longlong)(int)lVar2 * 0x68 + *(longlong *)(param_1 + 8);
    cVar1 = FUN_147975474(lVar2,param_2);
    if (cVar1 != '\0') goto LAB_14340f2df;
  }
  if (DAT_14cace370 != 0) {
    if (DAT_14c761348 == 0) {
      lVar5 = *(longlong *)(param_1 + 0x18);
      lVar2 = 0;
      if (lVar5 != 0) {
        iVar3 = 0;
        do {
          cVar1 = FUN_147975474(param_2,lVar5);
          lVar2 = lVar5;
          if ((cVar1 != '\0') || (lVar5 = *(longlong *)(lVar5 + 0x38), lVar2 = 0, lVar5 == 0))
          break;
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1 + 0x28));
      }
      goto LAB_14340f2df;
    }
    lVar5 = (longlong)*(int *)(param_1 + 0x28);
    if (0 < lVar5) {
      lVar4 = *(longlong *)(param_1 + 8);
      do {
        cVar1 = FUN_147975474(param_2,lVar4);
        lVar2 = lVar4;
        if (cVar1 != '\0') break;
        lVar4 = lVar4 + 0x68;
        lVar5 = lVar5 + -1;
        lVar2 = 0;
      } while (lVar5 != 0);
      goto LAB_14340f2df;
    }
  }
  lVar2 = 0;
LAB_14340f2df:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return lVar2;
}



// FUNCTION 14340f350 FUN_14340f350 body=345 status=ok
// SIG undefined FUN_14340f350(void)

undefined4 * FUN_14340f350(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x58);
  EnterCriticalSection(lpCriticalSection);
  if ((*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x10)) &&
     ((ulonglong)
      (*(longlong *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40) + *(longlong *)(param_1 + 0x30)
      ) < *(ulonglong *)(param_1 + 0x38))) {
    lVar13 = (longlong)*(int *)(param_1 + 0x28) * 0x68;
    puVar10 = (undefined4 *)(*(longlong *)(param_1 + 8) + lVar13);
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x40 + lVar13) = (longlong)*(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  else {
    if (DAT_14cace3b8 == '\0') {
      DAT_14cace3b8 = '\x01';
    }
    puVar10 = (undefined4 *)FUN_14340fd34(param_1,0);
    if ((puVar10 == (undefined4 *)0x0) && (DAT_14cace2d0 != 0)) {
      puVar10 = (undefined4 *)FUN_14340fd34(param_1,1);
    }
    if (puVar10 == (undefined4 *)0x0) {
      LeaveCriticalSection(lpCriticalSection);
      return (undefined4 *)0x0;
    }
  }
  LOCK();
  puVar10[0x16] = 0;
  UNLOCK();
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  uVar8 = param_2[5];
  uVar9 = param_2[6];
  puVar10[3] = param_2[3];
  puVar10[4] = uVar7;
  puVar10[5] = uVar8;
  puVar10[6] = uVar9;
  *puVar10 = uVar3;
  puVar10[1] = uVar4;
  puVar10[2] = uVar5;
  puVar10[3] = uVar6;
  *(undefined8 *)(puVar10 + 0x12) = *param_3;
  plVar2 = (longlong *)param_3[1];
  plVar12 = *(longlong **)(puVar10 + 0x14);
  if (plVar12 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar12 = *(longlong **)(puVar10 + 0x14);
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))();
      }
    }
    *(longlong **)(puVar10 + 0x14) = plVar2;
  }
  FUN_1479760fe(param_1,puVar10);
  if ((*(longlong *)(param_1 + 0x20) == 0) && (1 < *(int *)(param_1 + 0x28))) {
    EnterCriticalSection(lpCriticalSection);
    lVar13 = *(longlong *)(param_1 + 0x18);
    do {
      lVar11 = lVar13;
      lVar13 = *(longlong *)(lVar11 + 0x38);
    } while (lVar13 != 0);
    *(longlong *)(param_1 + 0x20) = lVar11;
    LeaveCriticalSection(lpCriticalSection);
  }
  LeaveCriticalSection(lpCriticalSection);
  FUN_147975b86(param_1,param_2,*(undefined8 *)(puVar10 + 0x10));
  return puVar10;
}



// FUNCTION 14340f4aa FUN_14340f4aa body=434 status=ok
// SIG undefined FUN_14340f4aa(void)

ulonglong FUN_14340f4aa(longlong param_1,ulonglong param_2,char param_3)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if ((*(longlong *)(param_1 + 0x18) == 0) ||
     (puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x38), puVar5 == (undefined8 *)0x0))
  {
    uVar3 = 0;
  }
  else {
    puVar4 = *(undefined8 **)(param_1 + 0x20);
    bVar6 = param_2 != 0;
    if (param_2 == 0 || puVar4 == puVar5) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      do {
        if (((*(int *)((longlong)puVar4 + 0x5c) < 1) && (*(int *)(puVar4 + 0xb) != 0)) &&
           (uVar2 = (ulonglong)*(uint *)(puVar4 + 5), uVar2 != 0)) {
          uVar3 = uVar3 + uVar2;
          LOCK();
          *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) - uVar2;
          UNLOCK();
          FUN_1400020a8(puVar4[4]);
          puVar4[4] = 0;
          *(undefined4 *)(puVar4 + 5) = 0;
          FUN_1479884c8(param_1 + 0x80,puVar4);
          puVar4[2] = 0;
          *puVar4 = 0;
          puVar4[1] = 0;
          *(undefined4 *)(puVar4 + 3) = 0xffffffff;
        }
        puVar4 = (undefined8 *)puVar4[6];
        bVar6 = uVar3 < param_2;
      } while ((puVar4 != puVar5) && (uVar3 < param_2));
    }
    if ((param_3 != '\0') && ((0 < DAT_14c76133c && (bVar6)))) {
      puVar5 = *(undefined8 **)(param_1 + 0x20);
      puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x38);
      if ((puVar5 != puVar4) && (uVar3 < param_2)) {
        do {
          if ((((*(int *)(puVar5 + 5) != 0) && (cVar1 = FUN_1479755e4(puVar5), cVar1 != '\0')) &&
              (FUN_14797558c(puVar5), *(int *)((longlong)puVar5 + 0x5c) < 1)) &&
             (*(int *)(puVar5 + 0xb) != 0)) {
            uVar3 = uVar3 + *(uint *)(puVar5 + 5);
            LOCK();
            *(longlong *)(param_1 + 0x30) =
                 *(longlong *)(param_1 + 0x30) - (ulonglong)*(uint *)(puVar5 + 5);
            UNLOCK();
            FUN_1400020a8(puVar5[4]);
            puVar5[4] = 0;
            *(undefined4 *)(puVar5 + 5) = 0;
            FUN_1479884c8(param_1 + 0x80,puVar5);
            puVar5[2] = 0;
            *puVar5 = 0;
            puVar5[1] = 0;
            *(undefined4 *)(puVar5 + 3) = 0xffffffff;
          }
          puVar5 = (undefined8 *)puVar5[6];
        } while ((puVar5 != puVar4) && (uVar3 < param_2));
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return uVar3;
}



// FUNCTION 14340f65c FUN_14340f65c body=1750 status=ok
// SIG undefined FUN_14340f65c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340f65c(undefined1 *param_1,longlong param_2,undefined4 *param_3,longlong *param_4,
                  undefined4 param_5,char param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  bool bVar18;
  undefined1 auStack_158 [32];
  longlong local_138;
  int local_130;
  code **local_128;
  undefined8 local_120;
  undefined1 local_111;
  undefined8 local_110;
  undefined1 *local_108;
  size_t local_100;
  longlong local_f8;
  longlong local_e8 [2];
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int iStack_94;
  undefined4 uStack_90;
  code *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar8 = FUN_147975514(param_2,param_3[6]);
  if (lVar8 != 0) {
    iVar7 = DAT_14c761338;
    if (param_6 != '\0') {
      iVar7 = DAT_14cace2b8;
    }
    iVar4 = 0x204 - iVar7;
    if (3 < iVar7 - 1U) {
      iVar4 = 0x204;
    }
    iVar7 = *(int *)(lVar8 + 4);
    LOCK();
    *(ulonglong *)(param_1 + 0x30) =
         *(longlong *)(param_1 + 0x30) - (ulonglong)*(uint *)(param_2 + 0x28);
    UNLOCK();
    uVar9 = FUN_14001fdce(*(undefined8 *)(param_2 + 0x20),(longlong)*(int *)(lVar8 + 4),0);
    *(undefined8 *)(param_2 + 0x20) = uVar9;
    uVar13 = *(uint *)(lVar8 + 4);
    *(uint *)(param_2 + 0x28) = uVar13;
    LOCK();
    *(ulonglong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + (ulonglong)uVar13;
    UNLOCK();
    if (*(int *)(param_2 + 0x58) == 0) {
      LOCK();
      plVar14 = *(longlong **)(param_2 + 0x60);
      *(undefined8 *)(param_2 + 0x60) = 1;
      UNLOCK();
      if (&DAT_00000001 < plVar14) {
        (**(code **)(*plVar14 + 0x28))(plVar14);
        (**(code **)(*plVar14 + 0x10))(plVar14,0);
        (**(code **)*plVar14)(plVar14,1);
      }
    }
    LOCK();
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    UNLOCK();
    local_f8 = *param_4;
    local_e8[0] = 0;
    local_108 = param_1;
    if (local_f8 != 0) {
      plVar14 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar14 = (longlong *)param_4[2];
      }
      (**(code **)*plVar14)(plVar14,local_e8);
    }
    uStack_b0 = *param_3;
    uStack_ac = param_3[1];
    uStack_a8 = param_3[2];
    uStack_a4 = param_3[3];
    uStack_a0 = param_3[4];
    uStack_9c = param_3[5];
    uStack_98 = param_3[6];
    uStack_90 = param_5;
    local_88[0] = (code *)0x0;
    local_78 = (longlong *)0x0;
    local_b8 = param_2;
    iStack_94 = iVar7;
    local_78 = (longlong *)FUN_14001cc68(0x90,0x10);
    *local_78 = (longlong)&PTR_FUN_14a7fea20;
    local_78[2] = (longlong)local_108;
    local_78[4] = local_f8;
    local_78[6] = local_e8[0];
    local_78[10] = local_c8;
    local_78[0xb] = lStack_c0;
    local_78[8] = local_d8;
    local_78[9] = lStack_d0;
    local_78[0xc] = local_b8;
    local_78[0xd] = CONCAT44(uStack_ac,uStack_b0);
    *(undefined4 *)(local_78 + 0xe) = uStack_a8;
    *(undefined4 *)((longlong)local_78 + 0x74) = uStack_a4;
    *(undefined4 *)(local_78 + 0xf) = uStack_a0;
    *(undefined4 *)((longlong)local_78 + 0x7c) = uStack_9c;
    *(undefined4 *)((longlong)local_78 + 0x7c) = uStack_9c;
    *(undefined4 *)(local_78 + 0x10) = uStack_98;
    *(int *)((longlong)local_78 + 0x84) = iStack_94;
    *(undefined4 *)(local_78 + 0x11) = uStack_90;
    if (local_78 + 2 != (longlong *)0x0) {
      local_88[0] = FUN_143419d1a;
    }
    *(undefined8 *)(param_2 + 0x60) = 0;
    if (*(longlong *)(lVar8 + 0x10) == 0) {
      local_138 = (longlong)iVar7;
      local_120 = *(undefined8 *)(param_2 + 0x20);
      uVar16 = 0xffffffffffffffff;
      if ((ulonglong)*(uint5 *)(lVar8 + 0x1d) != 0xffffffffff) {
        uVar16 = (ulonglong)*(uint5 *)(lVar8 + 0x1d);
      }
      local_128 = local_88;
      local_130 = iVar4;
      FUN_1411dbd50(&local_108,0xffffffffff,lVar8 + 0x28,uVar16);
      puVar5 = local_108;
      if (local_108 == (undefined1 *)0x0) {
        local_108 = &DAT_00000003;
        pcVar3 = (code *)*param_4;
        plVar14 = param_4 + 4;
        if ((longlong *)param_4[2] != (longlong *)0x0) {
          plVar14 = (longlong *)param_4[2];
        }
        uVar9 = (**(code **)(*plVar14 + 8))();
        (*pcVar3)(uVar9,&local_108);
        LOCK();
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar8 = *(longlong *)(param_2 + 0x60);
        bVar18 = lVar8 == 0;
        if (bVar18) {
          *(longlong *)(param_2 + 0x60) = (longlong)local_108;
          lVar8 = 0;
        }
        UNLOCK();
        if (lVar8 == 1 && !bVar18) {
          puVar2 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar11 = (uint *)*puVar2;
          if (puVar11 != (uint *)0x0) goto LAB_14340f985;
          while( true ) {
            uVar13 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar13 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar13 | 1;
              __tlregdtor(&LAB_1434195e1);
            }
            lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar10 = *(undefined4 **)(lVar8 + 0x310);
            *(undefined8 *)(lVar8 + 0x310) = 0;
            if (puVar10 == (undefined4 *)0x0) {
              puVar10 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar10 = 0xffffffff;
            *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            FUN_140217a48(puVar2);
            puVar11 = (uint *)*puVar2;
LAB_14340f985:
            puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar17 + 0x16);
            uVar13 = puVar11[0x12];
            if (puVar15 <= puVar11 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
              LOCK();
              uVar12 = *puVar11;
              *puVar11 = *puVar11 + uVar13 + 1;
              UNLOCK();
              if ((uVar12 ^ uVar13) != 0xffffffff) break;
              puVar11 = (uint *)*puVar2;
              *puVar11 = 0xffffffff;
              *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
              puVar11[0x12] = 0;
              *puVar2 = puVar11;
              puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
              puVar15 = (uint *)(puVar17 + 0x16);
              uVar13 = 0;
              if (puVar15 <= puVar11 + 0x4000) {
                uVar13 = 1;
                goto LAB_14340fa05;
              }
            }
          }
          uVar13 = uVar13 + 1;
LAB_14340fa05:
          *(uint **)(puVar11 + 0x10) = puVar15;
          puVar11[0x12] = uVar13;
          FUN_1447247dc(puVar17,0);
          *puVar17 = &PTR_FUN_14a7fea10;
          puVar17[0x15] = puVar5;
          uVar13 = DAT_14cace3f8;
          if (((DAT_14cace3f0 != 0x400) || (DAT_14c7585d8 != 0)) &&
             ((DAT_14cace3f0 != 0x800 || (DAT_14c7585dc != 0)))) {
            uVar13 = DAT_14cace3f0 | _DAT_14cace3f4;
          }
          uVar12 = uVar13 >> 10 & 3;
          if ((uVar13 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
          }
          else {
            uVar16 = 2;
          }
          if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
          }
          puVar17[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar17[9] = puVar17;
          puVar17[10] = puVar17;
          lVar8 = *(longlong *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2b8);
          if (lVar8 == 0) {
            uVar6 = 1;
            if ((char)uVar16 != '\x06') {
              uVar6 = uVar16;
            }
            uVar16 = uVar6;
            uVar9 = 0;
          }
          else {
            if ((char)uVar16 == '\x06') {
              uVar16 = *(ulonglong *)(lVar8 + 0x38) >> 0x3b;
            }
            uVar9 = *(undefined8 *)(lVar8 + 0x30);
          }
          puVar17[0xf] = uVar9;
          puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
          *(undefined4 *)((longlong)puVar17 + 0x1c) = 0;
          if (puVar17 == (undefined8 *)0x0) {
            local_108 = (undefined1 *)CONCAT71(local_108._1_7_,1);
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
            UNLOCK();
            local_108 = (undefined1 *)CONCAT71(local_108._1_7_,1);
            FUN_1447439e4(puVar17);
            LOCK();
            piVar1 = (int *)(puVar17 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar17)(puVar17,1);
            }
          }
        }
      }
    }
    else {
      FUN_147d3ffb2(lVar8,&local_108);
      puVar5 = local_108;
      memcpy(*(void **)(param_2 + 0x20),local_108,local_100);
      pcVar3 = local_88[0];
      local_110 = 0;
      local_111 = 0;
      plVar14 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar14 = local_68;
      }
      uVar9 = (**(code **)(*plVar14 + 8))();
      (*pcVar3)(uVar9,&local_111,&local_110);
      if (puVar5 != (undefined1 *)0x0) {
        FUN_1400020a8(puVar5);
      }
    }
    if (local_88[0] != (code *)0x0) {
      plVar14 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar14 = local_68;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
  }
  if (*param_4 != 0) {
    plVar14 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar14 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14340fd34 FUN_14340fd34 body=336 status=ok
// SIG undefined FUN_14340fd34(void)

longlong FUN_14340fd34(longlong param_1,byte param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 == 0) {
LAB_14340fded:
    lVar3 = 0;
  }
  else {
    if (*(int *)(lVar3 + 0x5c) < 1) {
      bVar6 = *(int *)(lVar3 + 0x58) != 0;
    }
    else {
      bVar6 = false;
    }
    bVar5 = true;
    if (*(int *)(lVar3 + 0x58) == 0) {
      bVar5 = 0 < *(int *)(lVar3 + 0x5c);
    }
    if (!bVar6) {
      if (bVar5 || param_2 != 1) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38);
        if (lVar3 != lVar2) {
          while( true ) {
            if (*(int *)(lVar3 + 0x5c) < 1) {
              bVar6 = *(int *)(lVar3 + 0x58) != 0;
            }
            else {
              bVar6 = false;
            }
            if (*(int *)(lVar3 + 0x58) == 0) {
              bVar5 = *(int *)(lVar3 + 0x5c) < 1;
            }
            else {
              bVar5 = false;
            }
            if (bVar6) break;
            if ((bVar5 & param_2) == 1) {
              LOCK();
              plVar1 = *(longlong **)(lVar3 + 0x60);
              *(undefined8 *)(lVar3 + 0x60) = 1;
              UNLOCK();
              if (&DAT_00000001 < plVar1) {
                (**(code **)(*plVar1 + 0x28))(plVar1);
                (**(code **)(*plVar1 + 0x10))(plVar1,0);
                (**(code **)*plVar1)(plVar1,1);
              }
              break;
            }
            lVar3 = *(longlong *)(lVar3 + 0x30);
            if (lVar3 == 0) {
              return 0;
            }
            if (lVar3 == lVar2) {
              return 0;
            }
          }
          lVar2 = *(longlong *)(lVar3 + 0x38);
          if (*(longlong *)(lVar3 + 0x30) == 0) {
            uVar4 = 0;
          }
          else {
            *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x38) = lVar2;
            uVar4 = *(undefined8 *)(lVar3 + 0x30);
          }
          *(undefined8 *)(lVar2 + 0x30) = uVar4;
          return lVar3;
        }
        goto LAB_14340fded;
      }
      LOCK();
      plVar1 = *(longlong **)(lVar3 + 0x60);
      *(undefined8 *)(lVar3 + 0x60) = 1;
      UNLOCK();
      if (&DAT_00000001 < plVar1) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
        (**(code **)(*plVar1 + 0x10))(plVar1,0);
        (**(code **)*plVar1)(plVar1,1);
      }
    }
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar3 + 0x30);
  }
  return lVar3;
}



// FUNCTION 14340fe84 FUN_14340fe84 body=106 status=ok
// SIG undefined FUN_14340fe84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14340fe84(void)

{
  _DAT_14cace3e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace3e8,1);
  if (DAT_14cace3d0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cace3c0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14340feee FUN_14340feee body=7610 status=ok
// SIG undefined FUN_14340feee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_14340feee(longlong param_1,int *param_2,longlong param_3,ulonglong param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  double dVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  size_t sVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  int *piVar14;
  undefined2 *puVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined *puVar19;
  LPCRITICAL_SECTION p_Var20;
  int iVar21;
  undefined4 uVar22;
  ulonglong uVar23;
  undefined4 uVar24;
  ulonglong uVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  double dVar31;
  undefined1 auVar32 [16];
  float fVar33;
  double dVar34;
  undefined1 auVar35 [16];
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  float fVar41;
  undefined1 auStack_338 [32];
  double local_318;
  undefined8 *local_310;
  undefined4 *local_308;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined8 *local_2f0;
  wchar_t *local_2e8;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  wchar_t *local_2d8;
  undefined2 *local_2d0;
  undefined2 *local_2c8;
  undefined2 *local_2c0;
  longlong local_2b8;
  ulonglong local_2b0;
  ulonglong local_2a8;
  LPCRITICAL_SECTION local_2a0;
  int local_294;
  int *local_290;
  int local_288;
  int local_284;
  ulonglong local_280;
  ulonglong local_278;
  wchar_t *local_270;
  undefined4 local_268;
  wchar_t *local_260;
  undefined4 local_258;
  wchar_t *local_250;
  undefined4 local_248;
  wchar_t *local_240;
  undefined4 local_238;
  wchar_t *local_230;
  undefined4 local_228;
  wchar_t *local_220;
  undefined4 local_218;
  wchar_t *local_210;
  undefined4 local_208;
  wchar_t *local_200;
  undefined4 local_1f8;
  wchar_t *local_1f0;
  int local_1e8;
  wchar_t *local_1e0;
  undefined4 local_1d8;
  wchar_t *local_1d0;
  undefined4 local_1c8;
  wchar_t *local_1c0;
  int local_1b8;
  wchar_t *local_1b0;
  undefined4 local_1a8;
  wchar_t *local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  int local_18c;
  wchar_t *local_188;
  int local_180;
  wchar_t *local_178;
  int local_170;
  wchar_t *local_168;
  undefined4 local_160;
  wchar_t *local_158;
  int local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  undefined4 local_130;
  undefined4 local_12c;
  wchar_t *local_128;
  int local_120;
  undefined8 local_118;
  int iStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  local_2b0 = param_4;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  FUN_140002266(&local_108,L"Number of chunks loaded: %d of %d",*(undefined4 *)(param_1 + 0x28),
                *(undefined4 *)(param_1 + 0x10));
  puVar15 = local_108;
  if ((int)uStack_100 == 0) {
    puVar15 = &DAT_149dfb77a;
  }
  FUN_140056680(&local_178,puVar15);
  if (local_108 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  iVar18 = *(int *)(param_1 + 4);
  FUN_140002266(&local_108,L"The cache has blown %d times)",iVar18);
  puVar15 = local_108;
  if ((int)uStack_100 == 0) {
    puVar15 = &DAT_149dfb77a;
  }
  FUN_140056680(&local_188,puVar15);
  if (local_108 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar24 = 0;
  local_18c = 0;
  local_190 = 0;
  FUN_147a9832e(*(undefined8 *)(DAT_14cb0d2b0 + 0x58),L"Cache XX ");
  local_1a0 = local_178;
  if (local_170 == 0) {
    local_1a0 = L"";
  }
  uVar2 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  if (local_1a0 != (wchar_t *)0x0) {
    sVar9 = wcslen(local_1a0);
    uVar24 = (int)sVar9;
  }
  uVar22 = SUB84((double)(int)(local_18c + (uint)local_2b0),0);
  local_308 = &DAT_149e1e308;
  local_310 = (undefined8 *)&DAT_149e1dd14;
  local_318 = (double)uVar2;
  local_198 = uVar24;
  FUN_147d8e230(param_3,uVar22,SUB84((double)(param_5 + -0xc),0));
  puVar19 = &DAT_149e1dd34;
  if (iVar18 == 0) {
    puVar19 = &DAT_149e1dd14;
  }
  local_1b0 = local_188;
  if (local_180 == 0) {
    local_1b0 = L"";
  }
  uVar2 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  iVar18 = 0;
  local_1a8 = 0;
  if (local_1b0 != (wchar_t *)0x0) {
    sVar9 = wcslen(local_1b0);
    local_1a8 = (int)sVar9;
  }
  local_308 = &DAT_149e1e308;
  local_318 = (double)uVar2;
  local_310 = (undefined8 *)puVar19;
  FUN_147d8e230(param_3,uVar22,SUB84((double)(param_5 + -2),0));
  iVar17 = 0;
  iVar21 = 0;
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar11 = 0;
    lVar13 = 0x58;
    iVar6 = 0;
    iVar21 = 0;
    iVar18 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(param_1 + 8) + -0x30 + lVar13);
      if (iVar1 == 0) {
        iVar21 = iVar21 + 1;
      }
      else if (*(int *)(*(longlong *)(param_1 + 8) + lVar13) == 0) {
        iVar17 = iVar17 + 1;
      }
      else {
        iVar18 = iVar18 + 1;
      }
      iVar6 = iVar6 + iVar1;
      lVar11 = lVar11 + 1;
      lVar13 = lVar13 + 0x68;
    } while (lVar11 < *(int *)(param_1 + 0x28));
  }
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar7 = iVar6 + (int)uVar3 + (int)uVar2;
  dVar5 = (double)uVar7;
  auVar35._8_4_ = (int)((ulonglong)uVar2 >> 0x20);
  auVar35._0_8_ = uVar2;
  auVar35._12_4_ = 0x45300000;
  dVar34 = ((double)CONCAT44(0x43300000,(int)uVar2) - 4503599627370496.0) +
           (auVar35._8_8_ - 1.9342813113834067e+25);
  fVar36 = 0.0;
  fVar38 = 0.0;
  if (uVar7 != 0) {
    fVar38 = (float)(dVar34 / dVar5);
  }
  local_318 = (((double)CONCAT44(0x43300000,(int)*(undefined8 *)(param_1 + 0x38)) -
               4503599627370496.0) +
              ((double)CONCAT44(0x45300000,(int)((ulonglong)*(undefined8 *)(param_1 + 0x38) >> 0x20)
                               ) - 1.9342813113834067e+25)) * 9.5367431640625e-07;
  auVar32._8_4_ = (int)((ulonglong)uVar3 >> 0x20);
  auVar32._0_8_ = uVar3;
  auVar32._12_4_ = 0x45300000;
  dVar31 = ((double)CONCAT44(0x43300000,(int)uVar3) - 4503599627370496.0) +
           (auVar32._8_8_ - 1.9342813113834067e+25);
  if (uVar7 != 0) {
    fVar36 = (float)(dVar31 / dVar5);
  }
  local_2a0 = (LPCRITICAL_SECTION)(param_1 + 0x58);
  FUN_140002266(&local_108,
                L"Using: %.4f Megabytes (%llu bytes). Max Potential Usage: %.4f Megabytes.",
                dVar5 * 9.5367431640625e-07,
                *(longlong *)(param_1 + 0x48) +
                *(longlong *)(param_1 + 0x40) + *(longlong *)(param_1 + 0x30));
  puVar15 = local_108;
  if ((int)uStack_100 == 0) {
    puVar15 = &DAT_149dfb77a;
  }
  FUN_140056680(&local_1c0,puVar15);
  if (local_108 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_1d0 = local_1c0;
  if (local_1b8 == 0) {
    local_1d0 = L"";
  }
  uVar2 = *(undefined8 *)(DAT_14cb0d2b0 + 0x80);
  local_1c8 = 0;
  local_290 = param_2;
  if (local_1d0 != (wchar_t *)0x0) {
    sVar9 = wcslen(local_1d0);
    local_1c8 = (int)sVar9;
  }
  uVar24 = SUB84((double)(int)(uint)local_2b0,0);
  local_308 = &DAT_149e1e308;
  local_310 = &DAT_149e1e2f8;
  local_318 = (double)uVar2;
  FUN_147d8e230(param_3,uVar24,SUB84((double)(param_5 + 0x14),0));
  fVar28 = fVar38 + fVar36;
  if (ABS(fVar28 + -1.0) <= 1e-08) {
    fVar26 = 3.4e+38;
  }
  else {
    fVar26 = (float)(iVar17 + iVar18 + iVar21);
    if (0.0 < fVar28) {
      fVar26 = fVar26 + (float)(int)((fVar28 / (1.0 - fVar28)) * fVar26);
    }
  }
  fVar26 = (float)(~-(uint)(fVar26 == 0.0) & (uint)fVar26 | -(uint)(fVar26 == 0.0) & 0x3f800000);
  local_2b8 = CONCAT44(local_2b8._4_4_,*(undefined4 *)(param_3 + 0xa4));
  fVar28 = 0.0 / fVar26;
  local_318 = *(double *)(DAT_14cb0d2b0 + 0x58);
  local_1e0 = L"Cache Composition:";
  local_1d8 = 0x12;
  local_308 = &DAT_149e1e308;
  local_310 = &DAT_149e1e2f8;
  FUN_147d8e230(param_3,uVar24,SUB84((double)(param_5 + 0x2c),0));
  uVar22 = SUB84((double)((fVar28 + fVar28) * 100.0),0);
  FUN_140002266(&local_108,L"Retained: %.2f %%",uVar22);
  puVar15 = local_108;
  if ((int)uStack_100 == 0) {
    puVar15 = &DAT_149dfb77a;
  }
  FUN_140056680(&local_1f0,puVar15);
  if (local_108 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_200 = local_1f0;
  if (local_1e8 == 0) {
    local_200 = L"";
  }
  uVar2 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  local_1f8 = 0;
  if (local_200 != (wchar_t *)0x0) {
    sVar9 = wcslen(local_200);
    local_1f8 = (int)sVar9;
  }
  local_308 = &DAT_149e1e308;
  local_310 = (undefined8 *)&DAT_14a7f1ac4;
  local_318 = (double)uVar2;
  FUN_147d8e230(param_3,uVar24,SUB84((double)(param_5 + 0x3b),0));
  FUN_140002266(&local_108,L"Primed: %.2f %%",uVar22);
  puVar15 = local_108;
  if ((int)uStack_100 == 0) {
    puVar15 = &DAT_149dfb77a;
  }
  FUN_14020fad6(&local_1f0,puVar15);
  if (local_108 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_210 = local_1f0;
  if (local_1e8 == 0) {
    local_210 = L"";
  }
  uVar2 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  local_208 = 0;
  if (local_210 != (wchar_t *)0x0) {
    sVar9 = wcslen(local_210);
    local_208 = (int)sVar9;
  }
  local_308 = &DAT_149e1e308;
  local_310 = (undefined8 *)&DAT_14a7f1af4;
  local_318 = (double)uVar2;
  FUN_147d8e230(param_3,uVar24,SUB84((double)(param_5 + 0x4a),0));
  FUN_140002266(&local_108,L"Load On Demand: %.2f %%",uVar22);
  puVar15 = local_108;
  if ((int)uStack_100 == 0) {
    puVar15 = &DAT_149dfb77a;
  }
  FUN_14020fad6(&local_1f0,puVar15);
  if (local_108 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_220 = local_1f0;
  if (local_1e8 == 0) {
    local_220 = L"";
  }
  uVar2 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  local_218 = 0;
  if (local_220 != (wchar_t *)0x0) {
    sVar9 = wcslen(local_220);
    local_218 = (int)sVar9;
  }
  local_308 = &DAT_149e1e308;
  local_310 = (undefined8 *)&DAT_14a7f1b34;
  local_318 = (double)uVar2;
  FUN_147d8e230(param_3,uVar24,SUB84((double)(param_5 + 0x59),0));
  FUN_140002266(&local_108,L"Trimmed: %.2f %%",(double)(((float)iVar21 / fVar26) * 100.0));
  puVar15 = local_108;
  if ((int)uStack_100 == 0) {
    puVar15 = &DAT_149dfb77a;
  }
  FUN_14020fad6(&local_1f0,puVar15);
  if (local_108 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_230 = local_1f0;
  if (local_1e8 == 0) {
    local_230 = L"";
  }
  uVar2 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  local_228 = 0;
  if (local_230 != (wchar_t *)0x0) {
    sVar9 = wcslen(local_230);
    local_228 = (int)sVar9;
  }
  local_308 = &DAT_149e1e308;
  local_310 = (undefined8 *)&DAT_14cace400;
  local_318 = (double)uVar2;
  FUN_147d8e230(param_3,uVar24,SUB84((double)(param_5 + 0x68),0));
  FUN_140002266(&local_108,L"Load In Progress: %.2f %%",(double)(((float)iVar17 / fVar26) * 100.0));
  puVar15 = local_108;
  if ((int)uStack_100 == 0) {
    puVar15 = &DAT_149dfb77a;
  }
  FUN_14020fad6(&local_1f0,puVar15);
  if (local_108 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_240 = local_1f0;
  if (local_1e8 == 0) {
    local_240 = L"";
  }
  uVar2 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  local_238 = 0;
  if (local_240 != (wchar_t *)0x0) {
    sVar9 = wcslen(local_240);
    local_238 = (int)sVar9;
  }
  local_308 = &DAT_149e1e308;
  local_310 = (undefined8 *)&DAT_14cace410;
  local_318 = (double)uVar2;
  FUN_147d8e230(param_3,uVar24,SUB84((double)(param_5 + 0x77),0));
  FUN_140002266(&local_108,L"Force Inline: %.2f %% (%.2f MB)",(double)(fVar38 * 100.0),
                SUB84(dVar34 * 9.5367431640625e-07,0));
  puVar15 = local_108;
  if ((int)uStack_100 == 0) {
    puVar15 = &DAT_149dfb77a;
  }
  FUN_14020fad6(&local_1f0,puVar15);
  if (local_108 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_250 = local_1f0;
  if (local_1e8 == 0) {
    local_250 = L"";
  }
  uVar2 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  local_248 = 0;
  if (local_250 != (wchar_t *)0x0) {
    sVar9 = wcslen(local_250);
    local_248 = (int)sVar9;
  }
  iVar6 = (int)local_2b0;
  iVar1 = iVar6 * 2;
  local_308 = &DAT_149e1e308;
  local_310 = (undefined8 *)&DAT_14a7f1bdc;
  local_318 = (double)uVar2;
  FUN_147d8e230(param_3,uVar24,SUB84((double)(param_5 + 0x86),0));
  FUN_140002266(&local_108,L"External Features: %.2f %% (%.2f MB)",(double)(fVar36 * 100.0),
                SUB84(dVar31 * 9.5367431640625e-07,0));
  puVar15 = local_108;
  if ((int)uStack_100 == 0) {
    puVar15 = &DAT_149dfb77a;
  }
  iVar6 = (int)local_2b8 + iVar6 * -2;
  FUN_14020fad6(&local_1f0,puVar15);
  if (local_108 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_260 = local_1f0;
  if (local_1e8 == 0) {
    local_260 = L"";
  }
  fVar33 = (float)iVar6 * 0.5;
  uVar2 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  local_258 = 0;
  if (local_260 != (wchar_t *)0x0) {
    sVar9 = wcslen(local_260);
    local_258 = (int)sVar9;
  }
  local_308 = &DAT_149e1e308;
  local_310 = (undefined8 *)&DAT_14a7f1c38;
  local_318 = (double)uVar2;
  FUN_147d8e230(param_3,uVar24,SUB84((double)(param_5 + 0x95),0));
  FUN_140002266(&local_108,L"Other: %.2f %%");
  puVar15 = local_108;
  if ((int)uStack_100 == 0) {
    puVar15 = &DAT_149dfb77a;
  }
  fVar41 = (float)(int)fVar33;
  FUN_14020fad6(&local_1f0,puVar15);
  if (local_108 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_270 = local_1f0;
  if (local_1e8 == 0) {
    local_270 = L"";
  }
  iVar6 = (int)(fVar28 * fVar41);
  local_284 = (int)(((float)iVar21 / fVar26) * fVar41);
  local_2b8 = CONCAT44(local_2b8._4_4_,(int)(((float)iVar17 / fVar26) * fVar41));
  local_280 = (ulonglong)(uint)(int)(((float)iVar18 / fVar26) * fVar41);
  local_278 = (ulonglong)(uint)(int)(fVar38 * fVar41);
  uVar2 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  local_268 = 0;
  local_294 = iVar1;
  if (local_270 != (wchar_t *)0x0) {
    sVar9 = wcslen(local_270);
    local_268 = (int)sVar9;
  }
  local_2a8 = CONCAT44(local_2a8._4_4_,(int)(fVar36 * fVar41));
  local_308 = &DAT_149e1e308;
  local_310 = (undefined8 *)&DAT_14cace420;
  local_318 = (double)uVar2;
  FUN_147d8e230(param_3,uVar24,SUB84((double)(param_5 + 0xae),0));
  local_2e0 = 2;
  if (*(char *)(param_3 + 0xa1) != '\0') {
    local_2e0 = 0xd;
  }
  local_2e8 = (wchar_t *)0x0;
  local_2f0 = (undefined8 *)&DAT_149e1e308;
  local_2f8 = 0;
  local_300 = 0;
  local_308 = (undefined4 *)((ulonglong)local_308 & 0xffffffff00000000);
  local_310 = (undefined8 *)((ulonglong)local_310 & 0xffffffff00000000);
  local_318 = 28.0;
  FUN_1401e04ba(param_3,uVar24,SUB84((double)(param_5 + 0xc6),0),SUB84((double)((int)fVar33 + 4),0))
  ;
  iVar18 = (int)local_2b0;
  uVar22 = SUB84((double)(iVar18 + 2),0);
  local_2e0 = 2;
  if (*(char *)(param_3 + 0xa1) != '\0') {
    local_2e0 = 0xd;
  }
  local_2e8 = (wchar_t *)0x0;
  local_2f0 = (undefined8 *)&DAT_14a7f1c68;
  local_2f8 = 0;
  local_300 = 0;
  local_308 = (undefined4 *)((ulonglong)local_308 & 0xffffffff00000000);
  local_310 = (undefined8 *)((ulonglong)local_310 & 0xffffffff00000000);
  local_318 = 24.0;
  uVar27 = SUB84((double)(param_5 + 200),0);
  uVar30 = SUB84((double)iVar6,0);
  FUN_1401e04ba(param_3,uVar22,uVar27,uVar30);
  iVar18 = iVar18 + iVar6 * 2 + 2;
  uVar37 = SUB84((double)iVar18,0);
  local_288 = iVar6 * 2;
  local_2e0 = 2;
  if (*(char *)(param_3 + 0xa1) != '\0') {
    local_2e0 = 0xd;
  }
  local_2e8 = (wchar_t *)0x0;
  local_2f0 = (undefined8 *)&DAT_14a7f1c68;
  local_2f8 = 0;
  local_300 = 0;
  local_308 = (undefined4 *)((ulonglong)local_308 & 0xffffffff00000000);
  local_310 = (undefined8 *)((ulonglong)local_310 & 0xffffffff00000000);
  local_318 = 24.0;
  FUN_1401e04ba(param_3,uVar37,uVar27,uVar30);
  iVar18 = iVar18 + iVar6 * 2;
  uVar39 = SUB84((double)iVar18,0);
  local_2e0 = 2;
  if (*(char *)(param_3 + 0xa1) != '\0') {
    local_2e0 = 0xd;
  }
  local_2e8 = (wchar_t *)0x0;
  local_2f0 = (undefined8 *)&DAT_14a7f1c68;
  local_2f8 = 0;
  local_300 = 0;
  local_308 = (undefined4 *)((ulonglong)local_308 & 0xffffffff00000000);
  local_310 = (undefined8 *)((ulonglong)local_310 & 0xffffffff00000000);
  local_318 = 24.0;
  FUN_1401e04ba(param_3,uVar39,uVar27,uVar30);
  iVar18 = iVar18 + iVar6 * 2;
  uVar40 = SUB84((double)iVar18,0);
  local_2e0 = 2;
  if (*(char *)(param_3 + 0xa1) != '\0') {
    local_2e0 = 0xd;
  }
  local_2e8 = (wchar_t *)0x0;
  local_2f0 = (undefined8 *)&DAT_14a7f1c68;
  local_2f8 = 0;
  local_300 = 0;
  local_308 = (undefined4 *)((ulonglong)local_308 & 0xffffffff00000000);
  local_310 = (undefined8 *)((ulonglong)local_310 & 0xffffffff00000000);
  local_318 = 24.0;
  FUN_1401e04ba(param_3,uVar40,uVar27,uVar30);
  uVar27 = SUB84((double)local_288,0);
  local_2e0 = 2;
  if (*(char *)(param_3 + 0xa1) != '\0') {
    local_2e0 = 0xd;
  }
  local_2e8 = (wchar_t *)0x0;
  local_2f0 = (undefined8 *)&DAT_14a7f1ac4;
  local_2f8 = 0;
  local_300 = 0;
  local_308 = (undefined4 *)((ulonglong)local_308 & 0xffffffff00000000);
  local_310 = (undefined8 *)((ulonglong)local_310 & 0xffffffff00000000);
  local_318 = 20.0;
  uVar29 = SUB84((double)(param_5 + 0xca),0);
  FUN_1401e04ba(param_3,uVar22,uVar29,uVar27);
  local_2e0 = 2;
  if (*(char *)(param_3 + 0xa1) != '\0') {
    local_2e0 = 0xd;
  }
  local_2e8 = (wchar_t *)0x0;
  local_2f0 = (undefined8 *)&DAT_14cace430;
  local_2f8 = 0;
  local_300 = 0;
  local_308 = (undefined4 *)((ulonglong)local_308 & 0xffffffff00000000);
  local_310 = (undefined8 *)((ulonglong)local_310 & 0xffffffff00000000);
  local_318 = 20.0;
  FUN_1401e04ba(param_3,uVar37,uVar29,uVar27);
  uVar22 = 0xd;
  local_2e0 = 2;
  if (*(char *)(param_3 + 0xa1) != '\0') {
    local_2e0 = 0xd;
  }
  local_2e8 = (wchar_t *)0x0;
  local_2f0 = (undefined8 *)&DAT_14a7f1af4;
  local_2f8 = 0;
  local_300 = 0;
  local_308 = (undefined4 *)((ulonglong)local_308 & 0xffffffff00000000);
  local_310 = (undefined8 *)((ulonglong)local_310 & 0xffffffff00000000);
  local_318 = 20.0;
  FUN_1401e04ba(param_3,uVar39,uVar29,uVar27);
  local_2e0 = 2;
  if (*(char *)(param_3 + 0xa1) != '\0') {
    local_2e0 = uVar22;
  }
  local_2e8 = (wchar_t *)0x0;
  local_2f0 = (undefined8 *)&DAT_14a7f1c78;
  local_2f8 = 0;
  local_300 = 0;
  local_308 = (undefined4 *)((ulonglong)local_308 & 0xffffffff00000000);
  local_310 = (undefined8 *)((ulonglong)local_310 & 0xffffffff00000000);
  local_318 = 20.0;
  FUN_1401e04ba(param_3,uVar40,uVar29,uVar27);
  iVar18 = iVar18 + iVar6 * 2;
  local_2e0 = 2;
  if (*(char *)(param_3 + 0xa1) != '\0') {
    local_2e0 = uVar22;
  }
  local_2e8 = (wchar_t *)0x0;
  local_2f0 = (undefined8 *)&DAT_14a7f1b34;
  local_2f8 = 0;
  local_300 = 0;
  local_308 = (undefined4 *)((ulonglong)local_308 & 0xffffffff00000000);
  local_310 = (undefined8 *)((ulonglong)local_310 & 0xffffffff00000000);
  local_318 = 20.0;
  FUN_1401e04ba(param_3,SUB84((double)iVar18,0),uVar29,uVar30);
  iVar18 = iVar18 + iVar6;
  local_2e0 = 2;
  if (*(char *)(param_3 + 0xa1) != '\0') {
    local_2e0 = uVar22;
  }
  local_2e8 = (wchar_t *)0x0;
  local_2f0 = (undefined8 *)&DAT_14a7f1c88;
  local_2f8 = 0;
  local_300 = 0;
  local_308 = (undefined4 *)((ulonglong)local_308 & 0xffffffff00000000);
  local_310 = (undefined8 *)((ulonglong)local_310 & 0xffffffff00000000);
  local_318 = 20.0;
  FUN_1401e04ba(param_3,SUB84((double)iVar18,0),uVar29,uVar30);
  iVar17 = local_284;
  iVar18 = iVar18 + iVar6;
  uVar22 = 0xd;
  local_2e0 = 2;
  if (*(char *)(param_3 + 0xa1) != '\0') {
    local_2e0 = 0xd;
  }
  local_2e8 = (wchar_t *)0x0;
  local_2f0 = (undefined8 *)&DAT_14cace400;
  local_2f8 = 0;
  local_300 = 0;
  local_308 = (undefined4 *)((ulonglong)local_308 & 0xffffffff00000000);
  local_310 = (undefined8 *)((ulonglong)local_310 & 0xffffffff00000000);
  local_318 = 20.0;
  FUN_1401e04ba(param_3,SUB84((double)iVar18,0),uVar29,SUB84((double)local_284,0));
  iVar18 = iVar18 + iVar17;
  iVar6 = (int)local_2b8;
  local_2e0 = 2;
  if (*(char *)(param_3 + 0xa1) != '\0') {
    local_2e0 = uVar22;
  }
  local_2e8 = (wchar_t *)0x0;
  local_2f0 = (undefined8 *)&DAT_14cace410;
  local_2f8 = 0;
  local_300 = 0;
  local_308 = (undefined4 *)((ulonglong)local_308 & 0xffffffff00000000);
  local_310 = (undefined8 *)((ulonglong)local_310 & 0xffffffff00000000);
  local_318 = 20.0;
  FUN_1401e04ba(param_3,SUB84((double)iVar18,0),uVar29,SUB84((double)(int)local_2b8,0));
  iVar18 = iVar18 + iVar6;
  iVar6 = (int)local_280;
  local_2e0 = 2;
  if (*(char *)(param_3 + 0xa1) != '\0') {
    local_2e0 = uVar22;
  }
  local_2e8 = (wchar_t *)0x0;
  local_2f0 = (undefined8 *)&DAT_14cace420;
  local_2f8 = 0;
  local_300 = 0;
  local_308 = (undefined4 *)((ulonglong)local_308 & 0xffffffff00000000);
  local_310 = (undefined8 *)((ulonglong)local_310 & 0xffffffff00000000);
  local_318 = 20.0;
  local_2b8 = param_3;
  FUN_1401e04ba(param_3,SUB84((double)iVar18,0),uVar29,SUB84((double)iVar6,0));
  piVar14 = local_290;
  lVar11 = local_2b8;
  iVar17 = (int)local_278;
  if ((0 < iVar17) || (0 < (int)local_2a8)) {
    local_2e0 = 2;
    if (*(char *)(local_2b8 + 0xa1) != '\0') {
      local_2e0 = uVar22;
    }
    local_2f0 = (undefined8 *)&DAT_149e1e308;
    local_2f8 = 0;
    local_300 = 0;
    local_308 = (undefined4 *)((ulonglong)local_308 & 0xffffffff00000000);
    local_310 = (undefined8 *)((ulonglong)local_310 & 0xffffffff00000000);
    local_318 = 20.0;
    local_2e8 = (wchar_t *)0x0;
    FUN_1401e04ba(local_2b8,SUB84((double)(iVar18 + iVar6),0),uVar29,0);
    iVar18 = iVar6 + iVar18 + 5;
    if (0 < iVar17) {
      local_2e0 = 2;
      if (*(char *)(lVar11 + 0xa1) != '\0') {
        local_2e0 = 0xd;
      }
      local_2f0 = (undefined8 *)&DAT_14a7f1bdc;
      local_2f8 = 0;
      local_300 = 0;
      local_308 = (undefined4 *)((ulonglong)local_308 & 0xffffffff00000000);
      local_310 = (undefined8 *)((ulonglong)local_310 & 0xffffffff00000000);
      local_318 = 20.0;
      local_2e8 = (wchar_t *)0x0;
      FUN_1401e04ba(lVar11,SUB84((double)iVar18,0),uVar29,SUB84((double)(iVar17 + -5),0));
      iVar18 = iVar18 + iVar17;
    }
    if (0 < (int)local_2a8) {
      local_2e0 = 2;
      if (*(char *)(local_2b8 + 0xa1) != '\0') {
        local_2e0 = 0xd;
      }
      local_2f0 = (undefined8 *)&DAT_14a7f1c38;
      local_2f8 = 0;
      local_300 = 0;
      local_308 = (undefined4 *)((ulonglong)local_308 & 0xffffffff00000000);
      local_310 = (undefined8 *)((ulonglong)local_310 & 0xffffffff00000000);
      local_318 = 20.0;
      local_2e8 = (wchar_t *)0x0;
      FUN_1401e04ba(local_2b8,SUB84((double)iVar18,0),uVar29,SUB84((double)((int)local_2a8 + -5),0))
      ;
    }
  }
  uVar7 = param_5 + 0xe2;
  uVar12 = (ulonglong)uVar7;
  *piVar14 = (int)local_2b0;
  piVar14[1] = uVar7;
  p_Var20 = local_2a0;
  if (DAT_14c761344 == 2) {
    local_108 = (undefined2 *)0x0;
    uStack_100 = 0;
    lVar11 = *(longlong *)(param_1 + 0x18);
    if (lVar11 != 0) {
      iVar18 = (int)((double)(*(int *)(local_2b8 + 0xa4) - local_294) * 0.5);
      fVar38 = (float)*(int *)(param_1 + 0x28) /
               (float)(int)(((uint)((ulonglong)((longlong)iVar18 * 0x66666667) >> 0x22) -
                            (iVar18 >> 0x1f)) * 4);
      fVar36 = 1.0;
      if (1.0 <= fVar38) {
        fVar36 = fVar38;
      }
      iVar6 = (int)ROUND(-0.5 - (fVar36 + fVar36)) >> 1;
      local_2a8 = (ulonglong)(uint)(iVar18 + (int)local_2b0);
      uVar25 = local_2b0 & 0xffffffff;
      do {
        uVar16 = (uint)uVar12;
        uVar7 = uStack_100._4_4_;
        iVar18 = 0;
        if (uStack_100 < 0) {
          uStack_100 = (ulonglong)uStack_100._4_4_ << 0x20;
          FUN_14481578e();
          uVar7 = uStack_100._4_4_;
          iVar18 = (int)uStack_100;
          if ((int)uStack_100 < 0xd) goto LAB_1434114b3;
          if ((int)uStack_100 != 0xd) {
            uStack_100 = CONCAT44(uStack_100._4_4_,0xd);
            FUN_14479f406();
          }
        }
        else {
LAB_1434114b3:
          uStack_100 = CONCAT44(uStack_100._4_4_,0xd);
          if (uVar7 - iVar18 < 0xdU - iVar18) {
            FUN_1446f48e2(&local_108);
          }
          memset(local_108 + (longlong)iVar18 * 2,0,(ulonglong)(0xdU - iVar18) << 2);
        }
        if (iVar6 < 0) {
          iVar18 = 1;
          do {
            if (*(int *)(lVar11 + 0x28) == 0) {
              piVar14 = (int *)(local_108 + 0x14);
            }
            else if (*(int *)(lVar11 + 0x58) == 0) {
              piVar14 = (int *)(local_108 + 0x16);
            }
            else {
              piVar14 = (int *)(local_108 + 0x18);
            }
            *piVar14 = *piVar14 + 1;
            lVar11 = *(longlong *)(lVar11 + 0x38);
          } while ((lVar11 != 0) && (bVar4 = iVar18 < -iVar6, iVar18 = iVar18 + 1, bVar4));
        }
        iVar18 = -1;
        uVar23 = 0;
        uVar12 = 0;
        do {
          if (iVar18 < *(int *)(local_108 + uVar23 * 2)) {
            uVar12 = uVar23 & 0xffffffff;
            iVar18 = *(int *)(local_108 + uVar23 * 2);
          }
          uVar23 = uVar23 + 1;
        } while (uVar23 != 0xd);
        local_118._0_4_ = _DAT_14cace420;
        local_118._4_4_ = uRam000000014cace424;
        iStack_110 = iRam000000014cace428;
        uStack_10c = uRam000000014cace42c;
        switch(uVar12) {
        case 0:
        case 4:
          local_118._0_4_ = 0x3e200000;
          local_118._4_4_ = 0x3f010000;
          iStack_110 = 0x3e440000;
          uStack_10c = 0x3f800000;
          break;
        case 1:
        case 5:
          local_118._0_4_ = _DAT_14cace430;
          local_118._4_4_ = uRam000000014cace434;
          iStack_110 = iRam000000014cace438;
          uStack_10c = uRam000000014cace43c;
          break;
        case 2:
        case 6:
          local_118._0_4_ = 0;
          local_118._4_4_ = 0x3ed00000;
          iStack_110 = 0x3f2e0000;
          uStack_10c = 0x3f800000;
          break;
        case 3:
        case 7:
          local_118._0_4_ = 0x3e820000;
          local_118._4_4_ = 0x3f5a0000;
          iStack_110 = 0x3f7f0000;
          uStack_10c = 0x3f800000;
          break;
        case 8:
          local_118._0_4_ = 0x3f2c0000;
          local_118._4_4_ = 0x3f000000;
          iStack_110 = 0x3dd80000;
          uStack_10c = 0x3f800000;
          break;
        case 9:
          local_118._0_4_ = 0x3f7f0000;
          local_118._4_4_ = 0x3f450000;
          iStack_110 = 0x3b800000;
          uStack_10c = 0x3f800000;
          break;
        case 10:
          local_118._0_4_ = _DAT_14cace400;
          local_118._4_4_ = uRam000000014cace404;
          iStack_110 = iRam000000014cace408;
          uStack_10c = uRam000000014cace40c;
          break;
        case 0xb:
          local_118._0_4_ = _DAT_14cace410;
          local_118._4_4_ = uRam000000014cace414;
          iStack_110 = iRam000000014cace418;
          uStack_10c = uRam000000014cace41c;
        }
        local_2e0 = 2;
        if (*(char *)(local_2b8 + 0xa1) != '\0') {
          local_2e0 = 0xd;
        }
        local_2f0 = &local_118;
        local_2f8 = 0;
        local_300 = 0;
        local_308 = (undefined4 *)((ulonglong)local_308 & 0xffffffff00000000);
        local_310 = (undefined8 *)((ulonglong)local_310 & 0xffffffff00000000);
        local_318 = 10.0;
        local_2e8 = (wchar_t *)0x0;
        FUN_1401e04ba(local_2b8,SUB84((double)(int)uVar25,0),SUB84((double)(int)uVar16,0),0);
        piVar14 = local_290;
        uVar7 = (int)uVar25 + 10;
        uVar8 = uVar16 + 10;
        if ((int)uVar7 < (int)local_2a8) {
          uVar8 = uVar16;
        }
        if ((int)local_2a8 <= (int)uVar7) {
          uVar7 = (uint)local_2b0;
        }
        uVar25 = (ulonglong)uVar7;
        uVar12 = (ulonglong)uVar8;
      } while (lVar11 != 0);
      p_Var20 = local_2a0;
      if (local_108 != (undefined2 *)0x0) {
        FUN_1400020a8();
        p_Var20 = local_2a0;
      }
    }
  }
  else {
    if (DAT_14c761344 == 3) {
      EnterCriticalSection(local_2a0);
      lVar11 = *(longlong *)(param_1 + 0x18);
      local_2a8 = uVar12;
      if (lVar11 != 0) {
        iVar6 = (int)((float)(*(int *)(local_2b8 + 0xa4) - local_294) * 0.5);
        local_2b0 = (ulonglong)((int)local_2b0 + 1);
        iVar18 = 0;
        do {
          uVar24 = _DAT_14cace400;
          uVar22 = uRam000000014cace404;
          iVar17 = iRam000000014cace408;
          uVar27 = uRam000000014cace40c;
          if ((*(int *)(lVar11 + 0x28) != 0) &&
             (uVar24 = _DAT_14cace410, uVar22 = uRam000000014cace414, iVar17 = iRam000000014cace418,
             uVar27 = uRam000000014cace41c, *(int *)(lVar11 + 0x58) != 0)) {
            uVar24 = 0x3f000000;
            uVar22 = 0x3f000000;
            iVar17 = 0x3f000000;
            uVar27 = 0x3f800000;
          }
          local_108 = (undefined2 *)CONCAT44(uVar22,uVar24);
          uStack_100 = CONCAT44(uVar27,iVar17);
          local_2e0 = 2;
          if (*(char *)(local_2b8 + 0xa1) != '\0') {
            local_2e0 = 0xd;
          }
          local_2f0 = &local_108;
          local_2f8 = 0x40400000;
          local_300 = 0x40400000;
          local_308 = (undefined4 *)((ulonglong)local_308 & 0xffffffff00000000);
          local_310 = (undefined8 *)((ulonglong)local_310 & 0xffffffff00000000);
          local_318 = 3.0;
          local_2e8 = (wchar_t *)0x0;
          FUN_1401e04ba(local_2b8,SUB84((double)((int)local_2b0 + iVar18),0),
                        SUB84((double)((int)uVar12 + 1),0),0);
          iVar17 = iVar18 + 5;
          iVar18 = iVar17;
          if (iVar6 <= iVar17) {
            iVar18 = 0;
          }
          uVar25 = (ulonglong)((int)uVar12 + 7);
          if (iVar17 < iVar6) {
            uVar25 = uVar12;
          }
          lVar11 = *(longlong *)(lVar11 + 0x38);
          uVar7 = (uint)uVar25;
          uVar12 = uVar25;
        } while (lVar11 != 0);
      }
      *local_290 = 0;
      local_290[1] = uVar7 - (int)local_2a8;
      p_Var20 = local_2a0;
      piVar14 = local_290;
    }
    else {
      if (DAT_14c761344 != 0) goto LAB_143411841;
      EnterCriticalSection(local_2a0);
      FUN_140002266(&local_118,L"Number of chunks loaded: %d of %d",*(undefined4 *)(param_1 + 0x28),
                    *(undefined4 *)(param_1 + 0x10));
      if (iStack_110 == 0) {
        puVar15 = &DAT_149dfb77a;
      }
      else {
        puVar15 = (undefined2 *)CONCAT44(local_118._4_4_,(undefined4)local_118);
      }
      FUN_140056680(&local_108,puVar15);
      if (CONCAT44(local_118._4_4_,(undefined4)local_118) != 0) {
        FUN_1400020a8();
      }
      FUN_140002266(&local_128,L"The cache has blown %d times)",*(undefined4 *)(param_1 + 4));
      pwVar10 = local_128;
      if (local_120 == 0) {
        pwVar10 = L"";
      }
      FUN_140056680(&local_118,pwVar10);
      if (local_128 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      param_5 = param_5 + 0xe6;
      local_12c = 0;
      local_130 = 0;
      FUN_147a9832e(*(undefined8 *)(DAT_14cb0d2b0 + 0x58),L"Cache XX ");
      lVar11 = *(longlong *)(param_1 + 0x18);
      iVar18 = param_5;
      if ((lVar11 != 0) && (-1 < DAT_14c76132c)) {
        fVar36 = 0.0;
        iVar6 = 0;
        do {
          iVar17 = *(int *)(lVar11 + 0x28);
          pwVar10 = L"TRIMMED CHUNK";
          if (iVar17 != 0) {
            FUN_1400021e4(lVar11,&local_158);
            pwVar10 = L"";
            if (local_150 != 0) {
              pwVar10 = local_158;
            }
          }
          local_2f8 = *(undefined4 *)(lVar11 + 0x5c);
          local_2c0 = &DAT_149dfb77a;
          local_2c8 = &DAT_149dfb77a;
          local_2d0 = &DAT_149dfb77a;
          local_2e0 = 0x49dfb77a;
          uStack_2dc = 1;
          local_2e8 = L"ESoundWaveLoadingBehavior::Uninitialized";
          local_2f0 = (undefined8 *)0xbff0000000000000;
          local_300 = 0;
          uStack_2fc = 0xbff00000;
          local_308 = (undefined4 *)CONCAT44(local_308._4_4_,0xffffffff);
          local_310 = (undefined8 *)CONCAT44(local_310._4_4_,0xffffffff);
          local_318 = (double)CONCAT44(local_318._4_4_,*(undefined4 *)(lVar11 + 0x18));
          local_2d8 = pwVar10;
          FUN_140002266(&local_148,
                        L"%4i. Size: %6.2f KB   Chunk: %d of %d   Request Count: %d    Average Index: %6.2f  Number of Handles Retaining Chunk: %d     Chunk Load Time(in ms): %6.4fms      Loading Behavior: %s%s      Name: %s Notes: %s %s %s"
                        ,iVar6,(double)((float)*(uint *)(lVar11 + 0x28) * 0.0009765625));
          puVar15 = &DAT_149dfb77a;
          if (iStack_140 != 0) {
            puVar15 = (undefined2 *)CONCAT44(uStack_144,local_148);
          }
          FUN_140056680(&local_128,puVar15);
          if (CONCAT44(uStack_144,local_148) != 0) {
            FUN_1400020a8();
          }
          if ((iVar17 != 0) && (local_158 != (wchar_t *)0x0)) {
            FUN_1400020a8();
          }
          fVar36 = fVar36 + 0.04;
          if (1.0 <= fVar36) {
            fVar36 = 1.0;
          }
          FUN_1467edc58(&local_148,&DAT_14a7f12e4,&DAT_149e1dcd8,fVar36);
          if (*(int *)(lVar11 + 0x58) == 0) {
            local_148 = 0x3f800000;
            uStack_144 = 0x3f800000;
            iStack_140 = 0;
LAB_143411b6a:
            uStack_13c = 0x3f800000;
          }
          else if (*(int *)(lVar11 + 0x5c) < 1) {
            if (iVar17 == 0) {
              local_148 = 0x3f4c0000;
              uStack_144 = 0x3e380000;
              iStack_140 = 0x3e2c0000;
              goto LAB_143411b6a;
            }
          }
          else {
            fVar36 = (float)*(int *)(lVar11 + 0x5c) / 12.0;
            if (1.0 <= fVar36) {
              fVar36 = 1.0;
            }
            FUN_1467edc58(&local_148,&DAT_14a7f12c4,&DAT_14a7f12d4,fVar36);
          }
          uVar2 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
          local_168 = L"";
          if (local_120 != 0) {
            local_168 = local_128;
          }
          uVar22 = 0;
          if (local_168 != (wchar_t *)0x0) {
            sVar9 = wcslen(local_168);
            uVar22 = (int)sVar9;
          }
          local_308 = &DAT_149e1e308;
          local_318 = (double)uVar2;
          local_310 = (undefined8 *)&local_148;
          local_160 = uVar22;
          FUN_147d8e230(local_2b8,uVar24,SUB84((double)iVar18,0),&local_168);
          lVar11 = *(longlong *)(lVar11 + 0x38);
          if (local_128 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          iVar18 = iVar18 + 0xc;
        } while ((lVar11 != 0) && (bVar4 = iVar6 < DAT_14c76132c, iVar6 = iVar6 + 1, bVar4));
      }
      piVar14 = local_290;
      *local_290 = 0;
      local_290[1] = iVar18 - param_5;
      if (CONCAT44(local_118._4_4_,(undefined4)local_118) != 0) {
        FUN_1400020a8();
      }
      p_Var20 = local_2a0;
      if (local_108 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    LeaveCriticalSection(p_Var20);
  }
LAB_143411841:
  if (local_1f0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_1c0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_188 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_178 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection(p_Var20);
  if ((local_f0 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return piVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143411caa FUN_143411caa body=2164 status=ok
// SIG undefined FUN_143411caa(void)

undefined8 * FUN_143411caa(longlong param_1,undefined8 *param_2)

{
  LPCRITICAL_SECTION p_Var1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 *puVar7;
  void *_Src;
  int iVar8;
  wchar_t *pwVar9;
  uint uVar10;
  int iVar11;
  undefined2 *puVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  wchar_t *pwVar20;
  undefined1 auVar21 [16];
  undefined1 auStack_1e8 [32];
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  undefined8 local_1a0;
  wchar_t *local_198;
  wchar_t *local_190;
  undefined2 *local_188;
  undefined2 *local_180;
  undefined2 *local_178;
  wchar_t *local_170;
  wchar_t *local_168;
  undefined8 *local_158;
  longlong local_150;
  LPCRITICAL_SECTION local_148;
  wchar_t *local_140;
  int local_138;
  undefined2 *local_130;
  undefined8 local_128;
  undefined2 *local_120;
  int local_118;
  int local_114;
  undefined2 *local_110;
  int local_108;
  undefined2 *local_100;
  int local_f8;
  undefined2 *local_f0;
  int local_e8;
  void *local_e0;
  int local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  p_Var1 = (LPCRITICAL_SECTION)(param_1 + 0x58);
  EnterCriticalSection(p_Var1);
  *param_2 = 0;
  param_2[1] = 0;
  local_158 = param_2;
  FUN_140002266(&local_f0,L"Number of chunks loaded: %d of %d",*(undefined4 *)(param_1 + 0x28),
                *(undefined4 *)(param_1 + 0x10));
  puVar12 = local_f0;
  if (local_e8 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  FUN_140056680(&local_e0,puVar12);
  if (local_f0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_100,L"The cache has blown %d times",*(undefined4 *)(param_1 + 4));
  puVar12 = local_100;
  if (local_f8 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  FUN_140056680(&local_f0,puVar12);
  if (local_100 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  _Src = local_e0;
  lVar15 = (longlong)local_d8;
  local_100 = (undefined2 *)0x0;
  local_f8 = local_d8;
  FUN_1446dd670(&local_100,(uint)(lVar15 == 0) + local_d8 + 1,0);
  if (lVar15 != 0) {
    memcpy(local_100,_Src,lVar15 * 2);
  }
  FUN_1400020e8(&local_100,&DAT_149e01f72,1);
  iVar13 = local_f8 + -1;
  if (local_f8 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(local_158,local_100,iVar13);
  if (local_100 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar12 = local_f0;
  lVar15 = (longlong)local_e8;
  local_100 = (undefined2 *)0x0;
  local_f8 = local_e8;
  FUN_1446dd670(&local_100,(uint)(lVar15 == 0) + local_e8 + 1,0);
  if (lVar15 != 0) {
    memcpy(local_100,puVar12,lVar15 * 2);
  }
  FUN_1400020e8(&local_100,&DAT_149e01f72,1);
  iVar13 = local_f8 + -1;
  if (local_f8 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(local_158,local_100,iVar13);
  if (local_100 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar15 = *(longlong *)(param_1 + 0x18);
  iVar13 = 0;
  if (lVar15 == 0) {
    dVar6 = 0.0;
  }
  else {
    uVar10 = 0;
    do {
      iVar13 = iVar13 + *(int *)(lVar15 + 0x28);
      if (0 < *(int *)(lVar15 + 0x5c)) {
        uVar10 = uVar10 + *(int *)(lVar15 + 0x28);
      }
      lVar15 = *(longlong *)(lVar15 + 0x38);
    } while (lVar15 != 0);
    dVar6 = (double)uVar10 * 9.5367431640625e-07;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  auVar19._8_4_ = (int)((ulonglong)uVar5 >> 0x20);
  auVar19._0_8_ = uVar5;
  auVar19._12_4_ = 0x45300000;
  dVar18 = (((double)CONCAT44(0x43300000,(int)uVar5) - 4503599627370496.0) +
           (auVar19._8_8_ - 1.9342813113834067e+25)) * 9.5367431640625e-07;
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  auVar17._8_4_ = (int)((ulonglong)uVar5 >> 0x20);
  auVar17._0_8_ = uVar5;
  auVar17._12_4_ = 0x45300000;
  dVar16 = (((double)CONCAT44(0x43300000,(int)uVar5) - 4503599627370496.0) +
           (auVar17._8_8_ - 1.9342813113834067e+25)) * 9.5367431640625e-07;
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  auVar21._8_4_ = (int)((ulonglong)uVar5 >> 0x20);
  auVar21._0_8_ = uVar5;
  auVar21._12_4_ = 0x45300000;
  pwVar20 = (wchar_t *)
            ((((double)CONCAT44(0x43300000,(int)uVar5) - 4503599627370496.0) +
             (auVar21._8_8_ - 1.9342813113834067e+25)) * 9.5367431640625e-07);
  FUN_140002266(&local_110,
                L"External Features:\t, Force Inline:\t, Retaining:\t, Loaded:\t, Max Potential Usage:\t, \n"
               );
  puVar12 = local_110;
  if (local_108 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  FUN_140056680(&local_100,puVar12);
  if (local_110 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_1a0 = *(undefined8 *)(param_1 + 0x30);
  local_1c8 = dVar18;
  local_1c0 = dVar18 / (double)pwVar20;
  local_1b8 = dVar6;
  local_1b0 = dVar6 / (double)pwVar20;
  local_1a8 = (double)(uint)((int)uVar4 + (int)uVar3 + iVar13) * 9.5367431640625e-07;
  local_198 = pwVar20;
  FUN_140002266(&local_120,
                L"%.4f Megabytes (%.3f%% of total capacity)\t %.4f Megabytes (%.3f%% of total capacity)\t %.4f Megabytes (%.3f%% of total capacity)\t,  %.4f Megabytes (%llu bytes)\t, %.4f Megabytes\t, \n"
                ,dVar16,SUB84(dVar16 / (double)pwVar20,0));
  puVar12 = local_120;
  if (local_118 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  FUN_140056680(&local_110,puVar12);
  if (local_120 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140474144(&local_130,&local_100,&local_110);
  iVar13 = (int)local_128;
  iVar8 = ((int)local_128 == 0) + 1;
  local_120 = local_130;
  local_130 = (undefined2 *)0x0;
  local_118 = (int)local_128;
  iVar2 = local_128._4_4_;
  local_114 = local_128._4_4_;
  local_128 = 0;
  iVar11 = iVar8 + iVar13;
  if (iVar11 < iVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar11);
  }
  if (iVar2 < iVar11) {
    FUN_1446f8c06(&local_120);
  }
  FUN_1400020e8(&local_120,&DAT_149e01f72,1);
  iVar13 = local_118 + -1;
  if (local_118 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(local_158,local_120,iVar13);
  if (local_120 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_148 = p_Var1;
  if (local_130 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar15 = *(longlong *)(param_1 + 0x18);
  local_150 = param_1;
  FUN_1400020e8(local_158,
                L"Index:\t, Size (KB):\t, Chunk:\t, Request Count:\t, Average Index:\t, Number of Handles Retaining Chunk:\t, Chunk Load Time:\t, Name: \t, LoadingBehavior: \t, Notes:\t, \n"
                ,0xa0);
  if (lVar15 != 0) {
    iVar13 = 0;
    do {
      iVar2 = *(int *)(lVar15 + 0x28);
      pwVar20 = L"";
      if (*(int *)(lVar15 + 0x58) == 0) {
        pwVar20 = L"(Loading In Progress)";
      }
      pwVar9 = L"TRIMMED CHUNK";
      if (iVar2 != 0) {
        FUN_1400021e4(lVar15,&local_140);
        pwVar9 = L"";
        if (local_138 != 0) {
          pwVar9 = local_140;
        }
      }
      local_168 = L"(Disk)";
      local_178 = &DAT_149dfb77a;
      local_180 = &DAT_149dfb77a;
      local_188 = &DAT_149dfb77a;
      local_190 = L"ESoundWaveLoadingBehavior::Uninitialized";
      local_1a0 = 0xbff0000000000000;
      local_1a8 = (double)CONCAT44(local_1a8._4_4_,*(undefined4 *)(lVar15 + 0x5c));
      local_1b0 = -1.0;
      local_1b8 = (double)CONCAT44(local_1b8._4_4_,0xffffffff);
      local_1c0 = (double)CONCAT44(local_1c0._4_4_,0xffffffff);
      local_1c8 = (double)CONCAT44(local_1c8._4_4_,*(undefined4 *)(lVar15 + 0x18));
      local_198 = pwVar9;
      local_170 = pwVar20;
      FUN_140002266(&local_130,
                    L"%4i.\t, %6.2f\t, %d of %d\t, %d\t, %6.2f\t, %d\t,  %6.4f\t, %s\t, %s%s, %s %s %s %s"
                    ,iVar13,(double)((float)*(uint *)(lVar15 + 0x28) * 0.0009765625));
      puVar12 = &DAT_149dfb77a;
      if ((int)local_128 != 0) {
        puVar12 = local_130;
      }
      FUN_140056680(&local_120,puVar12);
      if (local_130 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (iVar2 != 0) {
        if (local_140 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        puVar12 = local_120;
        lVar14 = (longlong)local_118;
        local_130 = (undefined2 *)0x0;
        local_128 = CONCAT44(local_128._4_4_,local_118);
        FUN_1446dd670(&local_130,(uint)(lVar14 == 0) + local_118 + 1,0);
        if (lVar14 != 0) {
          memcpy(local_130,puVar12,lVar14 * 2);
        }
        FUN_1400020e8(&local_130,&DAT_149e01f72,1);
        iVar2 = (int)local_128 + -1;
        if ((int)local_128 == 0) {
          iVar2 = 0;
        }
        FUN_1400020e8(local_158,local_130,iVar2);
        if (local_130 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar15 = *(longlong *)(lVar15 + 0x38);
      if (local_120 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      iVar13 = iVar13 + 1;
    } while (lVar15 != 0);
  }
  puVar7 = local_158;
  FUN_1400020e8(local_158,L"Cache Miss Log:\n",0x10);
  FUN_147976174(local_150,&local_120);
  iVar13 = local_118 + -1;
  if (local_118 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(puVar7,local_120,iVar13);
  if (local_120 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  p_Var1 = local_148;
  if (local_110 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_100 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_f0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e0 != (void *)0x0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection(p_Var1);
  if ((local_d0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_158;
}



// FUNCTION 143412520 FUN_143412520 body=114 status=ok
// SIG undefined FUN_143412520(void)

longlong FUN_143412520(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  
  uVar3 = param_2;
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar4 = (longlong)*(int *)(param_1 + 0x18) * 0x170;
    do {
      lVar4 = lVar4 + -0x170;
      uVar1 = FUN_14340f4aa(lVar2,uVar3,0);
      bVar5 = uVar1 <= uVar3;
      uVar1 = uVar3 - uVar1;
      uVar3 = 0;
      if (bVar5) {
        uVar3 = uVar1;
      }
    } while ((bVar5 && uVar1 != 0) && (lVar2 = lVar2 + 0x170, lVar4 != 0));
  }
  return param_2 - uVar3;
}



// FUNCTION 143412592 FUN_143412592 body=69 status=ok
// SIG undefined FUN_143412592(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143412592(void)

{
  _DAT_14cace440 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434125d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace448,1);
  return;
}



// FUNCTION 1434125d7 FUN_1434125d7 body=69 status=ok
// SIG undefined FUN_1434125d7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434125d7(void)

{
  _DAT_14cace458 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143412619. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace460,1);
  return;
}



// FUNCTION 14341261c FUN_14341261c body=69 status=ok
// SIG undefined FUN_14341261c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14341261c(void)

{
  _DAT_14cace470 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014341265e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace478,1);
  return;
}



// FUNCTION 143412661 FUN_143412661 body=69 status=ok
// SIG undefined FUN_143412661(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143412661(void)

{
  _DAT_14cace488 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434126a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace490,1);
  return;
}



// FUNCTION 1434126a6 FUN_1434126a6 body=69 status=ok
// SIG undefined FUN_1434126a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434126a6(void)

{
  _DAT_14cace498 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434126e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace4a0,1);
  return;
}



// FUNCTION 1434126eb FUN_1434126eb body=69 status=ok
// SIG undefined FUN_1434126eb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434126eb(void)

{
  _DAT_14cace4a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014341272d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace4b0,1);
  return;
}



// FUNCTION 143412730 FUN_143412730 body=51 status=ok
// SIG undefined FUN_143412730(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143412730(void)

{
  _DAT_14cace4c8 = &PTR_FUN_14a7fd210;
  FUN_1463af974(&DAT_14cace4f0);
  FUN_144760f98(&DAT_14cace4c8);
  return;
}



// FUNCTION 143412764 FUN_143412764 body=514 status=ok
// SIG undefined FUN_143412764(void)

void FUN_143412764(void)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_118 [32];
  code *local_f8 [2];
  longlong *local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong lStack_c0;
  char local_a8;
  code *local_98 [2];
  longlong *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong lStack_60;
  char local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar4 = (longlong *)*DAT_14cace4f0;
  if (plVar4 != (longlong *)0x0) {
    local_98[0] = (code *)plVar4[2];
    local_88 = (longlong *)plVar4[4];
    plVar4[4] = 0;
    local_78 = *(undefined4 *)(plVar4 + 6);
    uStack_74 = *(undefined4 *)((longlong)plVar4 + 0x34);
    uStack_70 = *(undefined4 *)(plVar4 + 7);
    uStack_6c = *(undefined4 *)((longlong)plVar4 + 0x3c);
    local_68 = plVar4[8];
    lStack_60 = plVar4[9];
    if (local_98[0] != (code *)0x0) {
      plVar4[2] = 0;
    }
    local_48 = '\x01';
    DAT_14cace4f0 = plVar4;
    do {
      cVar2 = FUN_146269f19();
      pcVar1 = local_98[0];
      if (cVar2 == '\0') {
        plVar4 = local_88;
        if (local_88 == (longlong *)0x0) {
          plVar4 = (longlong *)&local_78;
        }
        uVar3 = (**(code **)(*plVar4 + 8))();
        (*pcVar1)(uVar3);
      }
      else {
        local_f8[0] = local_98[0];
        local_e8 = local_88;
        local_88 = (longlong *)0x0;
        local_c8 = local_68;
        lStack_c0 = lStack_60;
        local_d8 = local_78;
        uStack_d4 = uStack_74;
        uStack_d0 = uStack_70;
        uStack_cc = uStack_6c;
        if (local_98[0] != (code *)0x0) {
          local_98[0] = (code *)0x0;
        }
        FUN_147983e75(local_f8);
        if (local_f8[0] != (code *)0x0) {
          plVar4 = local_e8;
          if (local_e8 == (longlong *)0x0) {
            plVar4 = (longlong *)&local_d8;
          }
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      plVar4 = (longlong *)*DAT_14cace4f0;
      if (plVar4 == (longlong *)0x0) {
        local_a8 = '\0';
      }
      else {
        local_f8[0] = (code *)plVar4[2];
        local_e8 = (longlong *)plVar4[4];
        plVar4[4] = 0;
        local_d8 = (undefined4)plVar4[6];
        uStack_d4 = *(undefined4 *)((longlong)plVar4 + 0x34);
        uStack_d0 = (undefined4)plVar4[7];
        uStack_cc = *(undefined4 *)((longlong)plVar4 + 0x3c);
        local_c8 = plVar4[8];
        lStack_c0 = plVar4[9];
        if (local_f8[0] != (code *)0x0) {
          plVar4[2] = 0;
        }
        local_a8 = '\x01';
        DAT_14cace4f0 = plVar4;
      }
      FUN_147983b0e(local_98,local_f8);
      if ((local_a8 == '\x01') && (local_f8[0] != (code *)0x0)) {
        plVar4 = local_e8;
        if (local_e8 == (longlong *)0x0) {
          plVar4 = (longlong *)&local_d8;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
    } while (local_48 != '\0');
  }
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143412967 FUN_143412967 body=69 status=ok
// SIG undefined FUN_143412967(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143412967(void)

{
  _DAT_14cace518 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434129a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace520,1);
  return;
}



// FUNCTION 1434129ac FUN_1434129ac body=69 status=ok
// SIG undefined FUN_1434129ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434129ac(void)

{
  _DAT_14cace528 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434129ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace530,1);
  return;
}



// FUNCTION 143412a19 FUN_143412a19 body=69 status=ok
// SIG undefined FUN_143412a19(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143412a19(void)

{
  _DAT_14cace538 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143412a5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace540,1);
  return;
}



// FUNCTION 143412aad FUN_143412aad body=61 status=ok
// SIG undefined FUN_143412aad(void)

void FUN_143412aad(void)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cace598;
  if (DAT_14cace598 != (longlong *)0x0) {
    puVar2 = (undefined8 *)*DAT_14cace598;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    FUN_1400020a8(plVar3);
    return;
  }
  return;
}



// FUNCTION 143412aea FUN_143412aea body=459 status=ok
// SIG undefined FUN_143412aea(void)

void FUN_143412aea(void)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar4 = DAT_14cace598;
  if (((DAT_14c844290 & 1) != 0) && (DAT_14cace5a0 = DAT_14cace5a0 + -1, DAT_14cace5a0 == 0)) {
    DAT_14c844291 = 0;
    FUN_1400daade(DAT_14cace598);
    plVar4 = (longlong *)FUN_14001cc68(8,0x10);
    puVar5 = (undefined8 *)FUN_1448fe162(0xa8);
    *puVar5 = UE::Tasks::Private::FTaskBase::vftable;
    puVar5[1] = &DAT_100000001;
    puVar5[2] = 0;
    *(undefined4 *)(puVar5 + 3) = 0;
    *(undefined4 *)(puVar5 + 4) = 0xffffffff;
    puVar5[6] = 0;
    puVar5[7] = 0x100000000;
    *(undefined1 *)(puVar5 + 8) = 1;
    puVar5[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                  ::TTaskDelegateDummy::vftable;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0xe800000000000020;
    puVar5[0x12] = 0;
    puVar5[0x13] = 0x100000000;
    *(undefined2 *)(puVar5 + 0x14) = 0;
    LOCK();
    bVar7 = *(char *)(puVar5 + 8) == '\x01';
    if (bVar7) {
      *(char *)(puVar5 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar7) {
      FUN_14008cdb0(puVar5 + 8);
    }
    *puVar5 = &PTR_FUN_149e1e2e0;
    if (*(code **)(puVar5[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar5[0xe] + 0x18))(puVar5 + 0xe,puVar5 + 9);
    }
    puVar5[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                  ::
                  TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                  ::vftable;
    puVar5[9] = puVar5;
    puVar5[10] = puVar5;
    lVar2 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar2 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar2 + 0x30);
    }
    puVar5[0xf] = uVar6;
    puVar5[0x10] = 0xc80000529fc8f500;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = 2;
    *plVar4 = (longlong)puVar5;
    plVar3 = DAT_14cace598;
    if (DAT_14cace598 != (longlong *)0x0) {
      puVar5 = (undefined8 *)*DAT_14cace598;
      DAT_14cace598 = plVar4;
      if (puVar5 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar5 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
      FUN_1400020a8(plVar3);
      return;
    }
  }
  DAT_14cace598 = plVar4;
  return;
}



// FUNCTION 143412cba FUN_143412cba body=141 status=ok
// SIG undefined FUN_143412cba(void)

void FUN_143412cba(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  
  if (DAT_14c76134c != 0) {
    iVar7 = (int)param_1[1];
    if (DAT_14c761350 <= iVar7) {
      FUN_143412e42(param_1);
      iVar7 = (int)param_1[1];
    }
    *(uint *)(param_1 + 1) = iVar7 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
      FUN_1460608c8(param_1,iVar7);
    }
    lVar2 = *param_1;
    lVar6 = (longlong)iVar7 * 0x40;
    *(undefined8 *)(lVar2 + lVar6) = *param_2;
    *(undefined8 *)(lVar2 + 0x10 + lVar6) = param_2[2];
    param_2[2] = 0;
    uVar3 = param_2[4];
    uVar4 = param_2[5];
    uVar5 = param_2[7];
    puVar1 = (undefined8 *)(lVar2 + 0x30 + lVar6);
    *puVar1 = param_2[6];
    puVar1[1] = uVar5;
    puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar6);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    if (*(longlong *)(lVar2 + lVar6) != 0) {
      *param_2 = 0;
    }
  }
  return;
}



// FUNCTION 143412d48 FUN_143412d48 body=248 status=ok
// SIG undefined FUN_143412d48(void)

undefined8 *
FUN_143412d48(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  undefined8 unaff_RBP;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14341a590(0xf0);
  local_60 = param_7;
  local_68 = param_6;
  FUN_147989210(puVar1,param_3,param_4,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff);
  *puVar1 = &PTR_FUN_14a7feac0;
  LOCK();
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
  UNLOCK();
  LOCK();
  *(int *)((longlong)puVar1 + 0xc) = *(int *)((longlong)puVar1 + 0xc) + 1;
  UNLOCK();
  puVar1[2] = param_1;
  local_49 = 1;
  FUN_1447439e4(puVar1);
  *param_2 = puVar1;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143412e42 FUN_143412e42 body=687 status=ok
// SIG undefined FUN_143412e42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143412e42(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  ulonglong local_40;
  
  bVar7 = DAT_14c76135a;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    uVar10 = (ulonglong)DAT_14c76135a;
    uVar4 = *param_1;
    *param_1 = 0;
    uVar3 = *(undefined4 *)((longlong)param_1 + 0xc);
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    puVar8 = (undefined8 *)FUN_147984056();
    *puVar8 = UE::Tasks::Private::FTaskBase::vftable;
    puVar8[1] = &DAT_100000002;
    puVar8[2] = 0;
    *(undefined4 *)(puVar8 + 3) = 0;
    *(undefined4 *)(puVar8 + 4) = 0xffffffff;
    puVar8[6] = 0;
    puVar8[7] = 0x100000000;
    *(undefined1 *)(puVar8 + 8) = 1;
    puVar8[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                  ::TTaskDelegateDummy::vftable;
    puVar8[0xf] = 0;
    puVar8[0x10] = 0xe800000000000020;
    puVar8[0x12] = 0;
    puVar8[0x13] = 0x100000000;
    *(undefined2 *)(puVar8 + 0x14) = 0;
    LOCK();
    bVar11 = *(char *)(puVar8 + 8) == '\x01';
    if (bVar11) {
      *(char *)(puVar8 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar11) {
      FUN_14008cdb0(puVar8 + 8);
    }
    *puVar8 = &PTR_FUN_14a7fd2f8;
    if (*(code **)(puVar8[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar8[0xe] + 0x18))(puVar8 + 0xe,puVar8 + 9);
    }
    puVar8[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                  ::
                  TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                  ::vftable;
    puVar8[9] = puVar8;
    puVar8[10] = puVar8;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar10 = 1;
      if (bVar7 != 6) {
        uVar10 = (ulonglong)bVar7;
      }
      uVar9 = 0;
    }
    else {
      if (bVar7 == 6) {
        uVar10 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar9 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar8[0xf] = uVar9;
    puVar8[0x10] = uVar10 << 0x3b | 0xc00000529ff4b400;
    *(undefined4 *)((longlong)puVar8 + 0x1c) = 0;
    puVar8[0x15] = uVar4;
    *(int *)(puVar8 + 0x16) = iVar2;
    *(undefined4 *)((longlong)puVar8 + 0xb4) = uVar3;
    *puVar8 = &PTR_FUN_14a7fd2e8;
    LOCK();
    _DAT_14c8442a0 = _DAT_14c8442a0 + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)puVar8 + 0xc) = *(int *)((longlong)puVar8 + 0xc) + 1;
    UNLOCK();
    puVar8[2] = &DAT_14c844298;
    local_41 = 1;
    FUN_1447439e4(puVar8);
    puVar6 = (undefined8 *)param_1[2];
    param_1[2] = puVar8;
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar6 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
    FUN_144a80dc3(0,0);
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    FUN_144a80dc3(*param_1,*(undefined4 *)(param_1 + 1));
    *(undefined4 *)(param_1 + 1) = 0;
    if ((iVar2 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
      FUN_14798420a(param_1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434130f2 FUN_1434130f2 body=1221 status=ok
// SIG undefined FUN_1434130f2(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff98 : 0x000143413311 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1434130f2(longlong *param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_1d8 [32];
  code **local_1b8;
  undefined8 *local_1b0;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  code *local_198 [2];
  undefined8 *local_188;
  code *local_158;
  longlong *local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  code *local_108;
  longlong *local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  code *local_c8 [2];
  longlong *local_b8;
  longlong local_a8 [4];
  code *local_88;
  longlong *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if ((DAT_14c761358 == '\x01') && ((DAT_14cace510 & 1) != 0)) {
    pcVar2 = (code *)*param_1;
    plVar7 = (longlong *)param_1[2];
    param_1[2] = 0;
    local_d8 = (int)param_1[6];
    uStack_d4 = *(undefined4 *)((longlong)param_1 + 0x34);
    uStack_d0 = (int)param_1[7];
    uStack_cc = *(undefined4 *)((longlong)param_1 + 0x3c);
    local_e8 = (int)param_1[4];
    uStack_e4 = *(undefined4 *)((longlong)param_1 + 0x24);
    uStack_e0 = (int)param_1[5];
    uStack_dc = *(undefined4 *)((longlong)param_1 + 0x2c);
    if (pcVar2 != (code *)0x0) {
      *param_1 = 0;
    }
    plVar6 = (longlong *)&local_e8;
    local_108 = pcVar2;
    if (((DAT_14c844290 & 1) == 0) || ((DAT_14c844291 & 1) != 0)) {
      plVar5 = plVar7;
      if (plVar7 == (longlong *)0x0) {
        plVar5 = plVar6;
      }
      local_f8 = plVar7;
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar2)(uVar4);
      plVar7 = local_f8;
      pcVar2 = local_108;
    }
    else {
      local_f8 = (longlong *)0x0;
      if (pcVar2 != (code *)0x0) {
        local_108 = (code *)0x0;
      }
      local_88 = pcVar2;
      local_68 = (int)param_1[4];
      uStack_64 = *(undefined4 *)((longlong)param_1 + 0x24);
      uStack_60 = (int)param_1[5];
      uStack_5c = *(undefined4 *)((longlong)param_1 + 0x2c);
      local_58 = (int)param_1[6];
      uStack_54 = *(undefined4 *)((longlong)param_1 + 0x34);
      uStack_50 = (int)param_1[7];
      uStack_4c = *(undefined4 *)((longlong)param_1 + 0x3c);
      plVar5 = (longlong *)FUN_14798423a();
      plVar5[2] = (longlong)pcVar2;
      plVar5[4] = (longlong)plVar7;
      local_78 = (longlong *)0x0;
      *(undefined4 *)(plVar5 + 8) = local_58;
      *(undefined4 *)((longlong)plVar5 + 0x44) = uStack_54;
      *(undefined4 *)(plVar5 + 9) = uStack_50;
      *(undefined4 *)((longlong)plVar5 + 0x4c) = uStack_4c;
      *(undefined4 *)(plVar5 + 6) = local_68;
      *(undefined4 *)((longlong)plVar5 + 0x34) = uStack_64;
      *(undefined4 *)(plVar5 + 7) = uStack_60;
      *(undefined4 *)((longlong)plVar5 + 0x3c) = uStack_5c;
      if (pcVar2 != (code *)0x0) {
        local_88 = (code *)0x0;
      }
      *DAT_14cace4f8 = (longlong)plVar5;
      DAT_14cace4f8 = plVar5;
      plVar7 = local_f8;
      pcVar2 = local_108;
      if (local_88 != (code *)0x0) {
        (**(code **)(CONCAT44(uStack_64,local_68) + 0x10))();
        plVar7 = local_f8;
        pcVar2 = local_108;
      }
    }
  }
  else {
    if (((DAT_14c844290 & 1) == 0) || ((DAT_14c844291 & 1) != 0)) {
      pcVar2 = (code *)*param_1;
      plVar6 = param_1 + 4;
      if ((longlong *)param_1[2] != (longlong *)0x0) {
        plVar6 = (longlong *)param_1[2];
      }
      uVar4 = (**(code **)(*plVar6 + 8))();
      (*pcVar2)(uVar4);
      goto LAB_1434131fa;
    }
    if (DAT_14c761359 == '\x01') {
      pcVar2 = (code *)*param_1;
      plVar6 = (longlong *)&local_138;
      lVar3 = param_1[2];
      param_1[2] = 0;
      local_138 = (undefined4)param_1[4];
      uStack_134 = *(undefined4 *)((longlong)param_1 + 0x24);
      uStack_130 = (undefined4)param_1[5];
      uStack_12c = *(undefined4 *)((longlong)param_1 + 0x2c);
      local_128 = (undefined4)param_1[6];
      uStack_124 = *(undefined4 *)((longlong)param_1 + 0x34);
      uStack_120 = (undefined4)param_1[7];
      uStack_11c = *(undefined4 *)((longlong)param_1 + 0x3c);
      if (pcVar2 != (code *)0x0) {
        *param_1 = 0;
      }
      local_158 = pcVar2;
      uVar4 = FUN_1401cb356();
      local_148 = (longlong *)0x0;
      local_68 = local_138;
      uStack_64 = uStack_134;
      uStack_60 = uStack_130;
      uStack_5c = uStack_12c;
      local_58 = local_128;
      uStack_54 = uStack_124;
      uStack_50 = uStack_120;
      uStack_4c = uStack_11c;
      if (pcVar2 != (code *)0x0) {
        local_158 = (code *)0x0;
      }
      local_c8[0] = (code *)0x0;
      local_88 = pcVar2;
      local_b8 = (longlong *)FUN_14001cc68(0x60,0x10);
      *local_b8 = (longlong)&PTR_LAB_14a7feae0;
      local_b8[2] = (longlong)pcVar2;
      local_b8[4] = lVar3;
      local_78 = (longlong *)0x0;
      *(undefined4 *)(local_b8 + 8) = local_128;
      *(undefined4 *)((longlong)local_b8 + 0x44) = uStack_124;
      *(undefined4 *)(local_b8 + 9) = uStack_120;
      *(undefined4 *)((longlong)local_b8 + 0x4c) = uStack_11c;
      *(undefined4 *)(local_b8 + 6) = local_138;
      *(undefined4 *)((longlong)local_b8 + 0x34) = uStack_134;
      *(undefined4 *)(local_b8 + 7) = uStack_130;
      *(undefined4 *)((longlong)local_b8 + 0x3c) = uStack_12c;
      if (pcVar2 != (code *)0x0) {
        local_88 = (code *)0x0;
      }
      if (local_b8 != (longlong *)&DAT_fffffffffffffff0) {
        local_c8[0] = FUN_14341a9fc;
      }
      local_1b8 = local_c8;
      FUN_1401cbba4(uVar4,local_1a8,L"FAudioThread::RunCommandOnGameThread",0);
      if (local_1a0 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_1a0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1a0 + 0x10))();
        }
      }
      if (local_c8[0] != (code *)0x0) {
        plVar7 = local_b8;
        if (local_b8 == (longlong *)0x0) {
          plVar7 = local_a8;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      plVar7 = local_148;
      pcVar2 = local_158;
      if (local_88 != (code *)0x0) {
        plVar7 = local_78;
        if (local_78 == (longlong *)0x0) {
          plVar7 = (longlong *)&local_68;
        }
        (**(code **)(*plVar7 + 0x10))();
        plVar7 = local_148;
        pcVar2 = local_158;
      }
    }
    else {
      pcVar2 = (code *)*param_1;
      plVar6 = (longlong *)&local_68;
      lVar3 = param_1[2];
      param_1[2] = 0;
      local_68 = (undefined4)param_1[4];
      uStack_64 = *(undefined4 *)((longlong)param_1 + 0x24);
      uStack_60 = (undefined4)param_1[5];
      uStack_5c = *(undefined4 *)((longlong)param_1 + 0x2c);
      local_58 = (undefined4)param_1[6];
      uStack_54 = *(undefined4 *)((longlong)param_1 + 0x34);
      uStack_50 = (undefined4)param_1[7];
      uStack_4c = *(undefined4 *)((longlong)param_1 + 0x3c);
      if (pcVar2 != (code *)0x0) {
        *param_1 = 0;
      }
      local_198[0] = (code *)0x0;
      local_88 = pcVar2;
      local_188 = (undefined8 *)FUN_14001cc68(0x60,0x10);
      *local_188 = &PTR_LAB_14a7feb00;
      local_188[2] = pcVar2;
      local_188[4] = lVar3;
      local_78 = (longlong *)0x0;
      *(undefined4 *)(local_188 + 8) = local_58;
      *(undefined4 *)((longlong)local_188 + 0x44) = uStack_54;
      *(undefined4 *)(local_188 + 9) = uStack_50;
      *(undefined4 *)((longlong)local_188 + 0x4c) = uStack_4c;
      *(undefined4 *)(local_188 + 6) = local_68;
      *(undefined4 *)((longlong)local_188 + 0x34) = uStack_64;
      *(undefined4 *)(local_188 + 7) = uStack_60;
      *(undefined4 *)((longlong)local_188 + 0x3c) = uStack_5c;
      if (pcVar2 != (code *)0x0) {
        local_88 = (code *)0x0;
      }
      if (local_188 != (undefined8 *)&DAT_fffffffffffffff0) {
        local_198[0] = FUN_14341aa96;
      }
      local_1b8 = (code **)CONCAT44(local_1b8._4_4_,1);
      FUN_14014aede(&local_1b0,local_198);
      plVar7 = local_78;
      pcVar2 = local_88;
      if (local_1b0 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_1b0 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_1b0)(local_1b0,1);
          plVar7 = local_78;
          pcVar2 = local_88;
        }
      }
    }
  }
  if (pcVar2 != (code *)0x0) {
    if (plVar7 != (longlong *)0x0) {
      plVar6 = plVar7;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_1434131fa:
  if (*param_1 != 0) {
    plVar6 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434135b8 FUN_1434135b8 body=69 status=ok
// SIG undefined FUN_1434135b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434135b8(void)

{
  _DAT_14cace5e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434135fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace5e8,1);
  return;
}



// FUNCTION 1434135fd FUN_1434135fd body=69 status=ok
// SIG undefined FUN_1434135fd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434135fd(void)

{
  _DAT_14cace5f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014341363f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace5f8,1);
  return;
}



// FUNCTION 143413642 FUN_143413642 body=69 status=ok
// SIG undefined FUN_143413642(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143413642(void)

{
  _DAT_14cace600 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143413684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace608,1);
  return;
}



// FUNCTION 143413687 FUN_143413687 body=69 status=ok
// SIG undefined FUN_143413687(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143413687(void)

{
  _DAT_14cace610 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434136c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace618,1);
  return;
}



// FUNCTION 1434136cc FUN_1434136cc body=69 status=ok
// SIG undefined FUN_1434136cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434136cc(void)

{
  _DAT_14cace620 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014341370e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace628,1);
  return;
}



// FUNCTION 143413712 FUN_143413712 body=168 status=ok
// SIG undefined FUN_143413712(void)

undefined8 FUN_143413712(longlong param_1,undefined8 param_2,char param_3,longlong param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (*(char *)((longlong)plVar1 + 0x39) == '\0') {
    return 0;
  }
  if (DAT_14c76135c == 0) {
    return 0;
  }
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x19a) & 8) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x300))();
    if (cVar2 == '\0') {
      return 0;
    }
    if (*(char *)(param_1 + 0x19e) == '\0') {
      if ((((*(byte *)(param_1 + 0x19b) & 0x20) == 0) &&
          (cVar2 = FUN_147962554(param_2,*(undefined8 *)(param_1 + 0x30)), cVar2 == '\0')) &&
         ((param_3 == '\0' || (cVar2 = FUN_147977878(param_1,param_2), cVar2 == '\0')))) {
        uVar3 = FUN_1478b349c(param_1,param_2);
        *(undefined8 *)(param_4 + 0x10) = uVar3;
        FUN_14797793c(param_4);
        return 1;
      }
      return 0;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 1434137ba FUN_1434137ba body=136 status=ok
// SIG undefined FUN_1434137ba(void)

undefined8 FUN_1434137ba(float *param_1,float param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  float fVar3;
  
  lVar1 = *(longlong *)(param_1 + 4);
  fVar3 = *(float *)(lVar1 + 0x1b0) * param_2;
  *(float *)(lVar1 + 0x1a8) = *(float *)(lVar1 + 0x1a8) + fVar3;
  param_1[1] = fVar3 + param_1[1];
  fVar3 = *param_1;
  if (param_3 == '\0') {
    if (param_1[2] <= 0.0) goto LAB_14341381d;
    *param_1 = param_2 + fVar3;
    if (param_2 + fVar3 < param_1[2]) {
      return 0;
    }
  }
  *param_1 = 0.0;
LAB_14341381d:
  FUN_1479779ea(param_1);
  cVar2 = FUN_147977878(*(undefined8 *)(param_1 + 4),0);
  if (cVar2 == '\0') {
    FUN_14797793c(param_1);
    return 0;
  }
  return 1;
}



// FUNCTION 143413842 FUN_143413842 body=55 status=ok
// SIG undefined FUN_143413842(void)

void FUN_143413842(void)

{
  undefined8 uVar1;
  
  if (DAT_14cace638 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cace638 = FUN_14171c317(FUN_1463ae227,uVar1,L"EAudioVolumeLocationState");
  }
  return;
}



// FUNCTION 14341387a FUN_14341387a body=22 status=ok
// SIG undefined FUN_14341387a(void)

undefined1 * FUN_14341387a(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0x3f0000003f800000;
  *(undefined8 *)(param_1 + 0xc) = 0x3f000000469c4000;
  *(undefined8 *)(param_1 + 0x14) = 0x3f0000003f800000;
  *(undefined8 *)(param_1 + 0x1c) = 0x3f000000469c4000;
  return param_1;
}



// FUNCTION 143413890 FUN_143413890 body=352 status=ok
// SIG undefined FUN_143413890(void)

void FUN_143413890(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined1 local_1b0 [136];
  undefined1 local_128 [136];
  undefined1 local_a0 [8];
  longlong local_98;
  undefined1 *local_88 [2];
  undefined8 *local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    FUN_14051bf56(lVar1,local_a0);
    if (local_98 != 0) {
      FUN_1479785c2(local_128,param_1);
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1b8 = 0xffffffff;
      FUN_147973aee(&local_1c8,local_a0);
      FUN_1479786e0(local_1b0,local_128);
      local_88[0] = (undefined1 *)0x0;
      puVar2 = (undefined8 *)FUN_14001cc68(0xa8,8);
      *puVar2 = &PTR_LAB_14a7feb20;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *(undefined4 *)(puVar2 + 3) = 0xffffffff;
      local_78 = puVar2;
      FUN_145794544(puVar2 + 1,&local_1c8);
      FUN_147989342(puVar2 + 4,local_1b0);
      if (puVar2 != (undefined8 *)&DAT_fffffffffffffff8) {
        local_88[0] = &LAB_14341ab32;
      }
      FUN_1415826cc(local_88);
      FUN_14796516a(local_1b0);
      FUN_14051bf10(&local_1c8);
      FUN_14796516a(local_128);
    }
    FUN_14051bf10(local_a0);
  }
  if ((local_40 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434139f2 FUN_1434139f2 body=273 status=ok
// SIG undefined FUN_1434139f2(void)

void FUN_1434139f2(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined1 local_90 [8];
  longlong local_88;
  code *local_78 [2];
  undefined8 *local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = FUN_1447210f0();
  if (lVar2 != 0) {
    FUN_14051bf56(lVar2,local_90);
    if (local_88 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0xc);
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0xffffffff;
      FUN_147973aee(&local_b8,local_90);
      local_78[0] = (code *)0x0;
      local_a0 = uVar1;
      puVar3 = (undefined8 *)FUN_14001cc68(0x28,8);
      *puVar3 = &PTR_LAB_14a7feb40;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *(undefined4 *)(puVar3 + 3) = 0xffffffff;
      local_68 = puVar3;
      FUN_145794544(puVar3 + 1,&local_b8);
      *(undefined4 *)(puVar3 + 4) = local_a0;
      if (puVar3 != (undefined8 *)&DAT_fffffffffffffff8) {
        local_78[0] = FUN_14341abb2;
      }
      FUN_1415826cc(local_78);
      FUN_14051bf10(&local_b8);
    }
    FUN_14051bf10(local_90);
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143413b04 FUN_143413b04 body=305 status=ok
// SIG undefined FUN_143413b04(void)

void FUN_143413b04(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_1a8 [40];
  longlong local_180;
  undefined1 local_178 [136];
  undefined1 local_f0 [136];
  undefined1 *local_68 [2];
  undefined8 *local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar1 = FUN_1447210f0();
  if ((lVar1 != 0) &&
     ((lVar1 = *(longlong *)(lVar1 + 0x1d8), lVar1 != 0 ||
      ((((DAT_14cb0d2b0 != 0 && (*(longlong *)(DAT_14cb0d2b0 + 0xf50) != 0)) &&
        (*(longlong *)(DAT_14cb0d2b0 + 0xf60) != 0)) &&
       (lVar1 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0xf50) + 0x98), lVar1 != 0)))))) {
    FUN_1479785c2(local_f0,param_1);
    local_180 = lVar1;
    FUN_1479786e0(local_178,local_f0);
    local_68[0] = (undefined1 *)0x0;
    puVar2 = (undefined8 *)FUN_14001cc68(0x98,8);
    *puVar2 = &PTR_LAB_14a7feb60;
    puVar2[1] = local_180;
    local_58 = puVar2;
    FUN_147989342(puVar2 + 2,local_178);
    if (puVar2 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_68[0] = &LAB_14341ac62;
    }
    FUN_1415826cc(local_68);
    FUN_14796516a(local_178);
    FUN_14796516a(local_f0);
  }
  if ((local_20 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143413c36 FUN_143413c36 body=69 status=ok
// SIG undefined FUN_143413c36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143413c36(void)

{
  _DAT_14cace720 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143413c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace728,1);
  return;
}



// FUNCTION 143413c7c FUN_143413c7c body=575 status=ok
// SIG undefined FUN_143413c7c(void)

void FUN_143413c7c(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  longlong local_40;
  code *local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != 0) {
    lVar6 = *(longlong *)(param_2 + 0x10);
    if (((lVar6 != 0) && (lVar4 = FUN_145a70286(), lVar4 != 0)) &&
       ((*(byte *)(lVar4 + 0xd5) & 0x40) != 0)) {
      if (DAT_14c950d78 == 0) {
        local_60 = &local_38;
        local_38 = FUN_1449e2820;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_14081d0ea;
        local_68 = &LAB_1468b50ee;
        local_70 = FUN_1427f23a3;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x10004001;
        local_90 = 8;
        local_98 = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
      }
      if (DAT_14c950d78 != lVar4) {
        do {
          if (0 < (longlong)*(int *)(lVar6 + 0x1e0)) {
            lVar5 = 0;
            do {
              lVar2 = *(longlong *)(*(longlong *)(lVar6 + 0x1d8) + lVar5);
              if (((lVar2 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
                 (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
                  == lVar4 + 0x30)) {
                plVar3 = (longlong *)*param_1;
                iVar1 = (int)plVar3[1];
                *(uint *)(plVar3 + 1) = iVar1 + 1U;
                if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
                  FUN_1417b9ece(plVar3,iVar1);
                }
                *(longlong *)(*plVar3 + (longlong)iVar1 * 8) = param_2;
                goto LAB_143413d83;
              }
              lVar5 = lVar5 + 0x10;
            } while ((longlong)*(int *)(lVar6 + 0x1e0) * 0x10 != lVar5);
          }
          lVar6 = *(longlong *)(lVar6 + 0x40);
        } while (lVar6 != 0);
      }
    }
LAB_143413d83:
    local_40 = FUN_145a70286();
    if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_40);
    }
    FUN_1406ca43a(param_2,&local_38,&local_40);
    if ((longlong)(int)local_30 != 0) {
      plVar3 = (longlong *)param_1[1];
      iVar1 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar1 + local_30;
      if ((uint)(*(int *)((longlong)plVar3 + 0xc) - iVar1) < local_30) {
        FUN_1478c88cc(plVar3,iVar1);
      }
      memcpy((void *)((longlong)iVar1 * 8 + *plVar3),local_38,(longlong)(int)local_30 << 3);
    }
    if (local_38 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143413ebc FUN_143413ebc body=1055 status=ok
// SIG undefined FUN_143413ebc(void)

void FUN_143413ebc(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_228 [32];
  longlong *local_208;
  undefined4 *local_200;
  longlong local_1f8;
  int local_1f0;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  longlong local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined8 local_130;
  longlong lStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_98 [2];
  undefined8 *local_88;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (param_2 == 0) goto LAB_143413f1f;
  cVar1 = (**(code **)(*param_1 + 0xa8))();
  if (cVar1 == '\0') goto LAB_143413f1f;
  cVar1 = (**(code **)(*param_1 + 0xb0))(param_1);
  if (cVar1 != '\0') goto LAB_143413f1f;
  lVar2 = (**(code **)(*param_1 + 0x88))(param_1);
  if (lVar2 == 0) goto LAB_143413f1f;
  uStack_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  local_168 = CONCAT31(local_168._1_3_,0xc);
  uStack_164 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  uStack_1dc = CONCAT31(uStack_1dc._1_3_,1);
  local_1e8 = param_2;
  plVar3 = (longlong *)(**(code **)(*param_1 + 0xa0))(param_1);
  lStack_128 = 0;
  if (plVar3 == (longlong *)0x0) {
LAB_1434140f0:
    uStack_140 = (undefined4)local_1e8;
    uStack_13c = local_1e8._4_4_;
    local_138 = uStack_1e0;
    uStack_134 = uStack_1dc;
    local_130 = CONCAT44(local_130._4_4_,local_1d8);
    local_148 = lVar2;
    if ((lStack_128 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lStack_128);
    }
    local_120 = uStack_1c8;
    uStack_1c8 = 0;
    local_118 = local_1c0;
    uStack_110 = uStack_1b8;
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_108 = local_1b0;
    uStack_100 = uStack_1a8;
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_f8 = local_1a0;
    uStack_f0 = uStack_198;
    local_1a0 = 0;
    uStack_198 = 0;
    local_e8 = local_190;
    uStack_e0 = uStack_188;
    local_190 = 0;
    uStack_188 = 0;
    local_d8 = local_180;
    local_180 = 0;
    uStack_d0 = uStack_178;
    uStack_178 = 0;
    local_c8 = local_170;
    local_170 = 0;
    local_b8 = CONCAT44(local_b8._4_4_,uStack_160);
    local_c0 = CONCAT44(uStack_164,local_168);
    uStack_b0 = local_158;
    local_158 = 0;
    local_a8 = (undefined4)uStack_150;
    local_a4 = uStack_150._4_4_;
    uStack_150 = 0;
    local_98[0] = (code *)0x0;
    puVar4 = (undefined8 *)FUN_14001cc68(0xb0,8);
    *puVar4 = &PTR_LAB_14a7fec10;
    puVar4[1] = lVar2;
    local_88 = puVar4;
    FUN_1470469b8(puVar4 + 2,&uStack_140);
    if (puVar4 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_98[0] = FUN_14341ace2;
    }
    uVar5 = (**(code **)(*param_1 + 0x90))(param_1);
    FUN_147962214(lVar2,uVar5,local_98);
    FUN_147046490(&uStack_140);
  }
  else {
    local_138 = local_1d8;
    local_148 = local_1e8;
    uStack_140 = uStack_1e0;
    uStack_13c = uStack_1dc;
    local_130 = 0;
    lStack_128 = 0;
    uStack_1c8 = 0;
    local_1c0 = 0;
    local_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    uStack_1b8 = 0;
    local_1b0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    uStack_1a8 = 0;
    local_1a0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    uStack_198 = 0;
    local_190 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    uStack_188 = 0;
    local_180 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    uStack_178 = 0;
    local_170 = 0;
    local_c8 = CONCAT44(uStack_164,local_168);
    local_c0 = CONCAT44(local_c0._4_4_,uStack_160);
    local_b8 = 0;
    uStack_b0 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_200 = &local_a8;
    local_208 = &local_148;
    FUN_14797b140(&local_1f8);
    FUN_147046490(&local_148);
    (**(code **)(*plVar3 + 0x340))(plVar3,&local_1f8,DAT_14cace7d0);
    if (local_1f0 != 0) {
      FUN_14797a17a(&local_1e8);
      FUN_145aa5488(local_1f8,local_1f0);
      if (local_1f8 != 0) {
        FUN_1400020a8();
      }
      lStack_128 = local_1d0;
      goto LAB_1434140f0;
    }
    FUN_145aa5488(local_1f8,0);
    if (local_1f8 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_147046490(&local_1e8);
LAB_143413f1f:
  if ((local_50 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434142dc FUN_1434142dc body=385 status=ok
// SIG undefined FUN_1434142dc(void)

void FUN_1434142dc(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  undefined1 *local_68 [2];
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar3 = (**(code **)(*param_1 + 0xa8))();
  if (cVar3 != '\0') {
    cVar3 = (**(code **)(*param_1 + 0xb0))(param_1);
    local_78 = 0;
    uStack_70 = 0;
    if (cVar3 == '\0') {
      FUN_1477c2298(&local_78,param_2);
      uVar4 = (**(code **)(*param_1 + 0x98))(param_1);
      FUN_1470429a6(param_2,uVar4);
      lVar5 = (**(code **)(*param_1 + 0x88))(param_1);
      if (lVar5 != 0) {
        plVar6 = (longlong *)(**(code **)(*param_1 + 0xa0))(param_1);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x340))(plVar6,&local_78,DAT_14cace7d0);
        }
        lVar1 = local_78;
        iVar2 = (int)uStack_70;
        if ((int)uStack_70 != 0) {
          local_2c = uStack_70._4_4_;
          local_78 = 0;
          uStack_70 = 0;
          local_58 = 0;
          local_48 = &PTR_LAB_14a7fec30;
          local_38 = lVar1;
          local_30 = iVar2;
          local_68[0] = &LAB_14341adf8;
          local_40 = lVar5;
          uVar4 = (**(code **)(*param_1 + 0x90))(param_1);
          FUN_147962214(lVar5,uVar4,local_68);
          FUN_145aa5488(0,0);
        }
      }
      goto LAB_14341441f;
    }
  }
  uStack_70 = 0;
  local_78 = 0;
  uVar4 = (**(code **)(*param_1 + 0x98))(param_1);
  FUN_1470429a6(param_2,uVar4);
LAB_14341441f:
  FUN_145aa5488(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14341445e FUN_14341445e body=47 status=ok
// SIG undefined FUN_14341445e(void)

void FUN_14341445e(void)

{
  DAT_14caced68 = &PTR_FUN_14a7fec50;
  FUN_144725486(&DAT_14caced68);
  FUN_1463ae92e(&DAT_14caced68);
  return;
}



// FUNCTION 14341448d FUN_14341448d body=69 status=ok
// SIG undefined FUN_14341448d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14341448d(void)

{
  _DAT_14cace7e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434144cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace7f0,1);
  return;
}



// FUNCTION 1434144d2 FUN_1434144d2 body=6952 status=ok
// SIG undefined FUN_1434144d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434144d2(ulonglong *param_1,undefined8 *param_2,undefined4 param_3,int param_4,
                  float param_5,longlong param_6,longlong *param_7,float *param_8,char param_9,
                  float param_10,double *param_11,undefined8 param_12,float param_13)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar14;
  longlong lVar15;
  float *pfVar16;
  char cVar17;
  double *pdVar18;
  double dVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  longlong lVar27;
  uint uVar28;
  ulonglong *puVar29;
  longlong lVar30;
  int iVar31;
  longlong *plVar32;
  double dVar33;
  uint uVar34;
  uint uVar35;
  double dVar36;
  float fVar37;
  undefined1 auStack_248 [32];
  double *local_228;
  float *local_220;
  double *local_218;
  float *local_210;
  double *local_208;
  code *local_200;
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined8 *local_1c0;
  ulonglong *local_1b8;
  double local_1b0;
  undefined1 local_1a5;
  float local_1a4;
  double local_1a0;
  double local_198;
  float local_190;
  float local_18c;
  double local_188;
  double dStack_180;
  undefined8 local_178;
  double dStack_170;
  double dStack_168;
  double local_160;
  double dStack_158;
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
  double dStack_f8;
  longlong local_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  longlong lStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong local_90;
  ulonglong local_80;
  
  fVar37 = param_10;
  pfVar16 = param_8;
  plVar32 = param_7;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_108 = 1.0;
  local_100 = 0.0;
  dStack_f8 = 0.0;
  local_f0 = 0;
  dStack_e8 = 0.0;
  local_e0 = 1.0;
  local_d8 = 0.0;
  lStack_d0 = 0;
  local_c8 = 0.0;
  dStack_c0 = 0.0;
  local_b8 = 1.0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_18c = param_10;
  uVar21 = (int)param_5 - 0xe;
  local_1c0 = param_2;
  local_1b8 = param_1;
  if (uVar21 < 0x20) {
    local_1b0 = (double)CONCAT44(local_1b0._4_4_,param_3);
    uVar28 = (uint)param_5 & 1;
    iVar31 = ((uVar21 & 4) >> 2) + ((uVar21 & 2) >> 1) + uVar28;
    if ((uVar21 & 0xe) == 8 && uVar28 == 0) {
      fVar37 = 1.0;
      local_18c = fVar37;
      FUN_143415ffb(param_2,0);
      uVar34 = 0x3ff00000;
      uVar28 = 0;
      local_b8 = 0.0;
      local_e0 = 0.0;
      local_108 = 0.0;
      local_c8 = 0.0;
      dStack_c0 = 0.0;
      local_d8 = 0.0;
    }
    else {
      FUN_143415ffb(param_2,(uVar21 & 8) >> 2);
      uVar34 = 0;
      local_108 = 0.0;
      if (uVar28 != 0) {
        local_108 = 1.0;
      }
      local_e0 = 0.0;
      if ((uVar21 & 2) != 0) {
        local_e0 = 1.0;
      }
      uVar35 = 0;
      if ((uVar21 & 4) != 0) {
        uVar35 = 0x3ff00000;
      }
      local_b8 = (double)((ulonglong)uVar35 << 0x20);
      uVar28 = 0;
      if ((uVar21 & 8) != 0) {
        uVar28 = 0x3ff00000;
      }
      plVar32 = param_7;
      if (uVar21 < 0x10 || iVar31 == 0) {
        local_c8 = 0.0;
        dStack_c0 = 0.0;
        local_d8 = 0.0;
      }
      else {
        dVar36 = (double)iVar31;
        local_b8 = (double)(float)((double)((ulonglong)uVar35 << 0x20) / dVar36);
        local_e0 = (double)(float)(local_e0 / dVar36);
        local_108 = (double)(float)(local_108 / dVar36);
        local_c8 = local_108;
        dStack_c0 = local_e0;
        local_d8 = local_b8;
      }
    }
    local_f0 = (ulonglong)uVar34 << 0x20;
    lStack_d0 = (ulonglong)uVar34 << 0x20;
    local_b0 = (ulonglong)uVar34 << 0x20;
    local_90 = (ulonglong)uVar28 << 0x20;
    param_3 = local_1b0._0_4_;
  }
  lVar15 = param_6;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_a8 = 0;
  local_100 = dStack_c0;
  dStack_f8 = local_d8;
  dStack_e8 = local_c8;
  if (plVar32 != (longlong *)0x0) {
    local_188 = (double)*(float *)(param_6 + 0x40);
    local_228 = &local_188;
    dStack_180 = (double)*(float *)(param_6 + 0x44);
    local_178 = (double)*(float *)(param_6 + 0x48);
    dStack_170 = (double)*(float *)(param_6 + 0x4c);
    dStack_168 = (double)*(float *)(param_6 + 0x50);
    local_160 = (double)*(float *)(param_6 + 0x54);
    dStack_158 = (double)*(float *)(param_6 + 0x58);
    local_150 = (double)*(float *)(param_6 + 0x5c);
    local_148 = (double)*(float *)(param_6 + 0x60);
    local_140 = (double)*(float *)(param_6 + 100);
    local_138 = (double)*(float *)(param_6 + 0x68);
    local_130 = (double)*(float *)(param_6 + 0x6c);
    local_110 = (double)*(float *)(param_6 + 0x7c);
    local_118 = (double)*(float *)(param_6 + 0x248) + (double)*(float *)(param_6 + 0x78);
    local_120 = (double)*(float *)(param_6 + 0x244) + (double)*(float *)(param_6 + 0x74);
    local_128 = (double)*(float *)(param_6 + 0x240) + (double)*(float *)(param_6 + 0x70);
    local_210 = pfVar16;
    local_218 = &local_108;
    local_220 = (float *)CONCAT44(local_220._4_4_,fVar37);
    (**(code **)(*plVar32 + 8))(plVar32,local_1b8);
    goto LAB_143414f4d;
  }
  lVar30 = (longlong)param_4;
  uVar25 = *(undefined8 *)(&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + lVar30 * 2) * 8)
  ;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb05f28) &&
     (FUN_144b3d300(&DAT_14cb05f28,ThreadLocalStoragePointer,local_1c0), DAT_14cb05f28 == -1)) {
    FUN_146041606();
    local_1e0 = &LAB_14712ac08;
    local_1e8 = &LAB_14712ac0c;
    local_1f0 = &LAB_147d13f32;
    local_1f8 = &LAB_147d13f36;
    local_200 = FUN_147d13f3a;
    local_208 = (double *)FUN_147d13f62;
    local_220 = (float *)0x14a1fb01a;
    local_228 = (double *)0x14a89d6bc;
    local_1d0 = 0;
    local_1d8 = 0xf0;
    local_210 = (float *)CONCAT44(local_210._4_4_,1);
    local_218 = (double *)((ulonglong)local_218 & 0xffffffff00000000);
    FUN_140db5666(&DAT_14cb05e80,0,&DAT_14cb05e18,L"FSimpleElementVS");
    _DAT_14cb05e80 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_1436b0af0);
    _Init_thread_footer(&DAT_14cb05f28);
  }
  FUN_1448e935e(uVar25,&local_188,&DAT_14cb05e80,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb05f28) && (FUN_144b3d300(&DAT_14cb05f28), DAT_14cb05f28 == -1)) {
    FUN_146041606();
    local_1e0 = &LAB_14712ac08;
    local_1e8 = &LAB_14712ac0c;
    local_1f0 = &LAB_147d13f32;
    local_1f8 = &LAB_147d13f36;
    local_200 = FUN_147d13f3a;
    local_208 = (double *)FUN_147d13f62;
    local_220 = (float *)0x14a1fb01a;
    local_228 = (double *)0x14a89d6bc;
    local_1d0 = 0;
    local_1d8 = 0xf0;
    local_210 = (float *)CONCAT44(local_210._4_4_,1);
    local_218 = (double *)((ulonglong)local_218 & 0xffffffff00000000);
    FUN_140db5666(&DAT_14cb05e80,0,&DAT_14cb05e18,L"FSimpleElementVS");
    _DAT_14cb05e80 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_1436b0af0);
    _Init_thread_footer(&DAT_14cb05f28);
  }
  dVar19 = dStack_180;
  dVar36 = local_188;
  cVar17 = param_9;
  *local_1c0 = DAT_14caced78;
  if (local_188 == 0.0) {
    lVar22 = 0;
  }
  else {
    lVar22 = *(longlong *)
              (*(longlong *)(*(longlong *)((longlong)dStack_180 + 8) + 0x50) +
              (longlong)*(int *)((longlong)local_188 + 0xd4) * 8);
    if (lVar22 == 0) {
      lVar22 = FUN_1400bafc2(*(longlong *)((longlong)dStack_180 + 8),
                             (longlong)*(int *)((longlong)local_188 + 0xd4),1);
    }
  }
  puVar29 = local_1b8;
  local_1c0[1] = lVar22;
  if (cVar17 == '\0') {
    if (param_5 == 1.4013e-45) {
      local_1c0[6] = DAT_14c9c0d50;
      if (*(char *)((longlong)param_8 + 0x46) == '\x01') {
        uVar25 = *(undefined8 *)
                  (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + lVar30 * 2) * 8);
        uVar23 = FUN_145cfa474();
        lVar30 = 0;
        FUN_1448e935e(uVar25,&local_188,uVar23,0);
        FUN_145cfa474();
        if (local_188 != 0.0) {
          lVar30 = *(longlong *)
                    (*(longlong *)(*(longlong *)((longlong)dStack_180 + 8) + 0x50) +
                    (longlong)*(int *)((longlong)local_188 + 0xd4) * 8);
          if (lVar30 == 0) {
            lVar30 = FUN_1400bafc2(*(longlong *)((longlong)dStack_180 + 8),
                                   (longlong)*(int *)((longlong)local_188 + 0xd4),1);
          }
        }
        local_1c0[2] = lVar30;
        lVar30 = FUN_140028f18(puVar29,local_1c0);
        if ((lVar30 != 0) && ((*(byte *)((longlong)local_1c0 + 0xcb) & 0x10) == 0)) {
          uVar1 = *(undefined4 *)local_1c0;
          uVar2 = *(undefined4 *)((longlong)local_1c0 + 4);
          uVar3 = *(undefined4 *)(local_1c0 + 1);
          uVar4 = *(undefined4 *)((longlong)local_1c0 + 0xc);
          uVar7 = *(undefined4 *)(local_1c0 + 2);
          uVar8 = *(undefined4 *)((longlong)local_1c0 + 0x14);
          uVar9 = *(undefined4 *)(local_1c0 + 3);
          uVar10 = *(undefined4 *)((longlong)local_1c0 + 0x1c);
          uVar11 = *(undefined4 *)((longlong)local_1c0 + 0x24);
          uVar12 = *(undefined4 *)(local_1c0 + 5);
          uVar13 = *(undefined4 *)((longlong)local_1c0 + 0x2c);
          *(undefined4 *)(puVar29 + 0x35) = *(undefined4 *)(local_1c0 + 4);
          *(undefined4 *)((longlong)puVar29 + 0x1ac) = uVar11;
          *(undefined4 *)(puVar29 + 0x36) = uVar12;
          *(undefined4 *)((longlong)puVar29 + 0x1b4) = uVar13;
          *(undefined4 *)(puVar29 + 0x33) = uVar7;
          *(undefined4 *)((longlong)puVar29 + 0x19c) = uVar8;
          *(undefined4 *)(puVar29 + 0x34) = uVar9;
          *(undefined4 *)((longlong)puVar29 + 0x1a4) = uVar10;
          *(undefined4 *)(puVar29 + 0x31) = uVar1;
          *(undefined4 *)((longlong)puVar29 + 0x18c) = uVar2;
          *(undefined4 *)(puVar29 + 0x32) = uVar3;
          *(undefined4 *)((longlong)puVar29 + 0x194) = uVar4;
          puVar24 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
          puVar26 = puVar24 + 4;
          if ((undefined8 *)puVar29[1] < puVar26) {
            FUN_140023dd8(puVar29,0x28);
            puVar24 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
            puVar26 = puVar24 + 4;
          }
          *puVar29 = (ulonglong)puVar26;
          *(int *)(puVar29 + 0xc) = (int)puVar29[0xc] + 1;
          *(undefined8 **)puVar29[6] = puVar24;
          puVar29[6] = (ulonglong)(puVar24 + 1);
          puVar24[1] = 0;
          *puVar24 = &PTR_LAB_14a37d348;
          puVar24[2] = lVar30;
          *(undefined4 *)(puVar24 + 3) = param_3;
          *(undefined1 *)((longlong)puVar24 + 0x1c) = 1;
        }
        if (local_188 == 0.0) {
          lVar30 = 0;
        }
        else {
          lVar30 = *(longlong *)
                    (*(longlong *)(*(longlong *)((longlong)dStack_180 + 8) + 0x50) +
                    (longlong)*(int *)((longlong)local_188 + 0xd4) * 8);
          if (lVar30 == 0) {
            lVar30 = FUN_1400bafc2(*(longlong *)((longlong)dStack_180 + 8),
                                   (longlong)*(int *)((longlong)local_188 + 0xd4),1);
          }
        }
        local_210 = &param_5;
        local_218 = (double *)&param_13;
        local_220 = &param_10;
        local_228 = (double *)&param_8;
        FUN_14798ab37(puVar29,&local_188,lVar30,&param_12);
      }
      else {
        uVar25 = *(undefined8 *)
                  (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + lVar30 * 2) * 8);
        uVar23 = FUN_1460b1aae();
        lVar30 = 0;
        FUN_1448e935e(uVar25,&local_188,uVar23,0);
        FUN_1460b1aae();
        if (local_188 != 0.0) {
          lVar30 = *(longlong *)
                    (*(longlong *)(*(longlong *)((longlong)dStack_180 + 8) + 0x50) +
                    (longlong)*(int *)((longlong)local_188 + 0xd4) * 8);
          if (lVar30 == 0) {
            lVar30 = FUN_1400bafc2(*(longlong *)((longlong)dStack_180 + 8),
                                   (longlong)*(int *)((longlong)local_188 + 0xd4),1);
          }
        }
        local_1c0[2] = lVar30;
        lVar30 = FUN_140028f18(puVar29,local_1c0);
        if ((lVar30 != 0) && ((*(byte *)((longlong)local_1c0 + 0xcb) & 0x10) == 0)) {
          uVar1 = *(undefined4 *)local_1c0;
          uVar2 = *(undefined4 *)((longlong)local_1c0 + 4);
          uVar3 = *(undefined4 *)(local_1c0 + 1);
          uVar4 = *(undefined4 *)((longlong)local_1c0 + 0xc);
          uVar7 = *(undefined4 *)(local_1c0 + 2);
          uVar8 = *(undefined4 *)((longlong)local_1c0 + 0x14);
          uVar9 = *(undefined4 *)(local_1c0 + 3);
          uVar10 = *(undefined4 *)((longlong)local_1c0 + 0x1c);
          uVar11 = *(undefined4 *)((longlong)local_1c0 + 0x24);
          uVar12 = *(undefined4 *)(local_1c0 + 5);
          uVar13 = *(undefined4 *)((longlong)local_1c0 + 0x2c);
          *(undefined4 *)(puVar29 + 0x35) = *(undefined4 *)(local_1c0 + 4);
          *(undefined4 *)((longlong)puVar29 + 0x1ac) = uVar11;
          *(undefined4 *)(puVar29 + 0x36) = uVar12;
          *(undefined4 *)((longlong)puVar29 + 0x1b4) = uVar13;
          *(undefined4 *)(puVar29 + 0x33) = uVar7;
          *(undefined4 *)((longlong)puVar29 + 0x19c) = uVar8;
          *(undefined4 *)(puVar29 + 0x34) = uVar9;
          *(undefined4 *)((longlong)puVar29 + 0x1a4) = uVar10;
          *(undefined4 *)(puVar29 + 0x31) = uVar1;
          *(undefined4 *)((longlong)puVar29 + 0x18c) = uVar2;
          *(undefined4 *)(puVar29 + 0x32) = uVar3;
          *(undefined4 *)((longlong)puVar29 + 0x194) = uVar4;
          puVar24 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
          puVar26 = puVar24 + 4;
          if ((undefined8 *)puVar29[1] < puVar26) {
            FUN_140023dd8(puVar29,0x28);
            puVar24 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
            puVar26 = puVar24 + 4;
          }
          *puVar29 = (ulonglong)puVar26;
          *(int *)(puVar29 + 0xc) = (int)puVar29[0xc] + 1;
          *(undefined8 **)puVar29[6] = puVar24;
          puVar29[6] = (ulonglong)(puVar24 + 1);
          puVar24[1] = 0;
          *puVar24 = &PTR_LAB_14a37d348;
          puVar24[2] = lVar30;
          *(undefined4 *)(puVar24 + 3) = param_3;
          *(undefined1 *)((longlong)puVar24 + 0x1c) = 1;
        }
        if (local_188 == 0.0) {
          lVar30 = 0;
        }
        else {
          lVar30 = *(longlong *)
                    (*(longlong *)(*(longlong *)((longlong)dStack_180 + 8) + 0x50) +
                    (longlong)*(int *)((longlong)local_188 + 0xd4) * 8);
          if (lVar30 == 0) {
            lVar30 = FUN_1400bafc2(*(longlong *)((longlong)dStack_180 + 8),
                                   (longlong)*(int *)((longlong)local_188 + 0xd4),1);
          }
        }
        local_210 = &param_5;
        local_218 = (double *)&param_13;
        local_220 = &param_10;
        local_228 = (double *)&param_8;
        FUN_14798ac88(puVar29,&local_188,lVar30,&param_12);
      }
    }
    else if ((int)param_5 - 5U < 4) {
      local_190 = param_13;
      uVar25 = DAT_14c9c0d50;
      if ((int)param_5 - 7U < 2) {
        local_190 = 0.0;
        uVar25 = DAT_14ca38470;
      }
      local_1c0[6] = uVar25;
      uVar25 = *(undefined8 *)
                (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + lVar30 * 2) * 8);
      uVar23 = FUN_145dc3f84();
      lVar30 = 0;
      FUN_1448e935e(uVar25,&local_188,uVar23,0);
      FUN_145dc3f84();
      local_1a0 = local_188;
      local_198 = dStack_180;
      if (local_188 != 0.0) {
        lVar30 = *(longlong *)
                  (*(longlong *)(*(longlong *)((longlong)dStack_180 + 8) + 0x50) +
                  (longlong)*(int *)((longlong)local_188 + 0xd4) * 8);
        if (lVar30 == 0) {
          lVar30 = FUN_1400bafc2(*(longlong *)((longlong)dStack_180 + 8),
                                 (longlong)*(int *)((longlong)local_188 + 0xd4),1);
        }
      }
      puVar26 = local_1c0;
      local_1c0[2] = lVar30;
      lVar30 = FUN_140028f18(puVar29,local_1c0);
      if ((lVar30 != 0) && ((*(byte *)((longlong)puVar26 + 0xcb) & 0x10) == 0)) {
        uVar1 = *(undefined4 *)puVar26;
        uVar2 = *(undefined4 *)((longlong)puVar26 + 4);
        uVar3 = *(undefined4 *)(puVar26 + 1);
        uVar4 = *(undefined4 *)((longlong)puVar26 + 0xc);
        uVar7 = *(undefined4 *)(puVar26 + 2);
        uVar8 = *(undefined4 *)((longlong)puVar26 + 0x14);
        uVar9 = *(undefined4 *)(puVar26 + 3);
        uVar10 = *(undefined4 *)((longlong)puVar26 + 0x1c);
        uVar11 = *(undefined4 *)((longlong)puVar26 + 0x24);
        uVar12 = *(undefined4 *)(puVar26 + 5);
        uVar13 = *(undefined4 *)((longlong)puVar26 + 0x2c);
        *(undefined4 *)(puVar29 + 0x35) = *(undefined4 *)(puVar26 + 4);
        *(undefined4 *)((longlong)puVar29 + 0x1ac) = uVar11;
        *(undefined4 *)(puVar29 + 0x36) = uVar12;
        *(undefined4 *)((longlong)puVar29 + 0x1b4) = uVar13;
        *(undefined4 *)(puVar29 + 0x33) = uVar7;
        *(undefined4 *)((longlong)puVar29 + 0x19c) = uVar8;
        *(undefined4 *)(puVar29 + 0x34) = uVar9;
        *(undefined4 *)((longlong)puVar29 + 0x1a4) = uVar10;
        *(undefined4 *)(puVar29 + 0x31) = uVar1;
        *(undefined4 *)((longlong)puVar29 + 0x18c) = uVar2;
        *(undefined4 *)(puVar29 + 0x32) = uVar3;
        *(undefined4 *)((longlong)puVar29 + 0x194) = uVar4;
        puVar24 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
        puVar26 = puVar24 + 4;
        if ((undefined8 *)puVar29[1] < puVar26) {
          FUN_140023dd8(puVar29,0x28);
          puVar24 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
          puVar26 = puVar24 + 4;
        }
        *puVar29 = (ulonglong)puVar26;
        *(int *)(puVar29 + 0xc) = (int)puVar29[0xc] + 1;
        *(undefined8 **)puVar29[6] = puVar24;
        puVar29[6] = (ulonglong)(puVar24 + 1);
        puVar24[1] = 0;
        *puVar24 = &PTR_LAB_14a37d348;
        puVar24[2] = lVar30;
        *(undefined4 *)(puVar24 + 3) = param_3;
        *(undefined1 *)((longlong)puVar24 + 0x1c) = 1;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cace808) &&
         (FUN_144b3d300(&DAT_14cace808), pfVar16 = param_8, DAT_14cace808 == -1)) {
        uVar21 = (**(code **)(*(longlong *)param_8 + 0x38))(param_8);
        uVar28 = (**(code **)(*(longlong *)pfVar16 + 0x30))(pfVar16);
        _DAT_14cace7f8 = (double)(-1.0 / (float)uVar28);
        _DAT_14cace800 = (double)(-1.0 / (float)uVar21);
        _Init_thread_footer(&DAT_14cace808);
      }
      pdVar18 = param_11;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cace81c) && (FUN_144b3d300(&DAT_14cace81c), DAT_14cace81c == -1))
      {
        _DAT_14cace80c = 0;
        uRam000000014cace810 = 0;
        uRam000000014cace814 = 0;
        uRam000000014cace818 = 0x3f800000;
        _Init_thread_footer(&DAT_14cace81c);
      }
      fVar37 = DAT_14c761370 + DAT_14c761370;
      uVar21 = (**(code **)(*(longlong *)param_8 + 0x30))();
      puVar29 = local_1b8;
      local_1a4 = fVar37 / (float)uVar21;
      local_1a5 = ((int)param_5 - 6U & 0xfffffffd) == 0;
      if (pdVar18 == (double *)0x0) {
        local_188 = 0.0;
        dStack_180 = 0.0;
        local_178 = (double)((ulonglong)local_178._4_4_ << 0x20);
        dStack_170 = 0.0;
        dStack_168 = 0.0;
        local_160 = 0.0;
        dStack_158 = 0.0;
      }
      else {
        dStack_158 = pdVar18[6];
        local_188 = *pdVar18;
        dStack_180 = pdVar18[1];
        local_178 = pdVar18[2];
        dStack_170 = pdVar18[3];
        dStack_168 = pdVar18[4];
        local_160 = pdVar18[5];
      }
      if (local_1a0 == 0.0) {
        lVar30 = 0;
      }
      else {
        lVar30 = *(longlong *)
                  (*(longlong *)(*(longlong *)((longlong)local_198 + 8) + 0x50) +
                  (longlong)*(int *)((longlong)local_1a0 + 0xd4) * 8);
        if (lVar30 == 0) {
          lVar30 = FUN_1400bafc2(*(longlong *)((longlong)local_198 + 8),
                                 (longlong)*(int *)((longlong)local_1a0 + 0xd4),1);
        }
      }
      local_200 = (code *)&param_5;
      local_210 = &local_1a4;
      local_218 = (double *)&local_1a5;
      local_220 = &local_190;
      local_228 = (double *)&param_10;
      local_208 = &local_188;
      FUN_14798add9(puVar29,&local_1a0,lVar30,&param_8);
    }
    else {
      local_1b0 = dVar36;
      if (((uint)param_5 & 0xfffffffe) == 0xc) {
        FUN_143415ffb(local_1c0);
        if (ABS(param_10 + -1.0) < 0.0001) {
          uVar25 = *(undefined8 *)
                    (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + lVar30 * 2) * 8);
          uVar23 = FUN_1460b183e();
          lVar30 = 0;
          FUN_1448e935e(uVar25,&local_188,uVar23,0);
          FUN_1460b183e();
          if (local_188 != 0.0) {
            lVar30 = *(longlong *)
                      (*(longlong *)(*(longlong *)((longlong)dStack_180 + 8) + 0x50) +
                      (longlong)*(int *)((longlong)local_188 + 0xd4) * 8);
            if (lVar30 == 0) {
              lVar30 = FUN_1400bafc2(*(longlong *)((longlong)dStack_180 + 8),
                                     (longlong)*(int *)((longlong)local_188 + 0xd4),1);
            }
          }
          local_1c0[2] = lVar30;
          lVar30 = FUN_140028f18(puVar29,local_1c0);
          if ((lVar30 != 0) && ((*(byte *)((longlong)local_1c0 + 0xcb) & 0x10) == 0)) {
            uVar1 = *(undefined4 *)local_1c0;
            uVar2 = *(undefined4 *)((longlong)local_1c0 + 4);
            uVar3 = *(undefined4 *)(local_1c0 + 1);
            uVar4 = *(undefined4 *)((longlong)local_1c0 + 0xc);
            uVar7 = *(undefined4 *)(local_1c0 + 2);
            uVar8 = *(undefined4 *)((longlong)local_1c0 + 0x14);
            uVar9 = *(undefined4 *)(local_1c0 + 3);
            uVar10 = *(undefined4 *)((longlong)local_1c0 + 0x1c);
            uVar11 = *(undefined4 *)((longlong)local_1c0 + 0x24);
            uVar12 = *(undefined4 *)(local_1c0 + 5);
            uVar13 = *(undefined4 *)((longlong)local_1c0 + 0x2c);
            *(undefined4 *)(puVar29 + 0x35) = *(undefined4 *)(local_1c0 + 4);
            *(undefined4 *)((longlong)puVar29 + 0x1ac) = uVar11;
            *(undefined4 *)(puVar29 + 0x36) = uVar12;
            *(undefined4 *)((longlong)puVar29 + 0x1b4) = uVar13;
            *(undefined4 *)(puVar29 + 0x33) = uVar7;
            *(undefined4 *)((longlong)puVar29 + 0x19c) = uVar8;
            *(undefined4 *)(puVar29 + 0x34) = uVar9;
            *(undefined4 *)((longlong)puVar29 + 0x1a4) = uVar10;
            *(undefined4 *)(puVar29 + 0x31) = uVar1;
            *(undefined4 *)((longlong)puVar29 + 0x18c) = uVar2;
            *(undefined4 *)(puVar29 + 0x32) = uVar3;
            *(undefined4 *)((longlong)puVar29 + 0x194) = uVar4;
            puVar24 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
            puVar26 = puVar24 + 4;
            if ((undefined8 *)puVar29[1] < puVar26) {
              FUN_140023dd8(puVar29,0x28);
              puVar24 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
              puVar26 = puVar24 + 4;
            }
            *puVar29 = (ulonglong)puVar26;
            *(int *)(puVar29 + 0xc) = (int)puVar29[0xc] + 1;
            *(undefined8 **)puVar29[6] = puVar24;
            puVar29[6] = (ulonglong)(puVar24 + 1);
            puVar24[1] = 0;
            *puVar24 = &PTR_LAB_14a37d348;
            puVar24[2] = lVar30;
            *(undefined4 *)(puVar24 + 3) = param_3;
            *(undefined1 *)((longlong)puVar24 + 0x1c) = 1;
          }
          if (local_188 == 0.0) {
            lVar30 = 0;
          }
          else {
            lVar30 = *(longlong *)
                      (*(longlong *)(*(longlong *)((longlong)dStack_180 + 8) + 0x50) +
                      (longlong)*(int *)((longlong)local_188 + 0xd4) * 8);
            if (lVar30 == 0) {
              lVar30 = FUN_1400bafc2(*(longlong *)((longlong)dStack_180 + 8),
                                     (longlong)*(int *)((longlong)local_188 + 0xd4),1);
            }
          }
          local_228 = (double *)&param_8;
          FUN_14798af6e(puVar29,&local_188,lVar30,&param_12);
        }
        else {
          uVar25 = *(undefined8 *)
                    (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + lVar30 * 2) * 8);
          uVar23 = FUN_1415d3d4e();
          FUN_1448e935e(uVar25,&local_188,uVar23,0);
          FUN_1415d3d4e();
          if (local_188 == 0.0) {
            local_1c0[2] = 0;
LAB_143414c88:
            dVar33 = local_188;
            puVar26 = local_1c0;
            lVar30 = FUN_140028f18(puVar29,local_1c0);
            if ((lVar30 != 0) && ((*(byte *)((longlong)puVar26 + 0xcb) & 0x10) == 0)) {
              uVar1 = *(undefined4 *)puVar26;
              uVar2 = *(undefined4 *)((longlong)puVar26 + 4);
              uVar3 = *(undefined4 *)(puVar26 + 1);
              uVar4 = *(undefined4 *)((longlong)puVar26 + 0xc);
              uVar7 = *(undefined4 *)(puVar26 + 2);
              uVar8 = *(undefined4 *)((longlong)puVar26 + 0x14);
              uVar9 = *(undefined4 *)(puVar26 + 3);
              uVar10 = *(undefined4 *)((longlong)puVar26 + 0x1c);
              uVar11 = *(undefined4 *)((longlong)puVar26 + 0x24);
              uVar12 = *(undefined4 *)(puVar26 + 5);
              uVar13 = *(undefined4 *)((longlong)puVar26 + 0x2c);
              *(undefined4 *)(puVar29 + 0x35) = *(undefined4 *)(puVar26 + 4);
              *(undefined4 *)((longlong)puVar29 + 0x1ac) = uVar11;
              *(undefined4 *)(puVar29 + 0x36) = uVar12;
              *(undefined4 *)((longlong)puVar29 + 0x1b4) = uVar13;
              *(undefined4 *)(puVar29 + 0x33) = uVar7;
              *(undefined4 *)((longlong)puVar29 + 0x19c) = uVar8;
              *(undefined4 *)(puVar29 + 0x34) = uVar9;
              *(undefined4 *)((longlong)puVar29 + 0x1a4) = uVar10;
              *(undefined4 *)(puVar29 + 0x31) = uVar1;
              *(undefined4 *)((longlong)puVar29 + 0x18c) = uVar2;
              *(undefined4 *)(puVar29 + 0x32) = uVar3;
              *(undefined4 *)((longlong)puVar29 + 0x194) = uVar4;
              puVar24 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
              puVar26 = puVar24 + 4;
              if ((undefined8 *)puVar29[1] < puVar26) {
                FUN_140023dd8(puVar29,0x28);
                puVar24 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
                puVar26 = puVar24 + 4;
              }
              *puVar29 = (ulonglong)puVar26;
              *(int *)(puVar29 + 0xc) = (int)puVar29[0xc] + 1;
              *(undefined8 **)puVar29[6] = puVar24;
              puVar29[6] = (ulonglong)(puVar24 + 1);
              puVar24[1] = 0;
              *puVar24 = &PTR_LAB_14a37d348;
              puVar24[2] = lVar30;
              *(undefined4 *)(puVar24 + 3) = param_3;
              *(undefined1 *)((longlong)puVar24 + 0x1c) = 1;
            }
            lVar30 = 0;
          }
          else {
            lVar30 = *(longlong *)((longlong)dStack_180 + 8);
            lVar27 = (longlong)*(int *)((longlong)local_188 + 0xd4);
            lVar22 = *(longlong *)(*(longlong *)(lVar30 + 0x50) + lVar27 * 8);
            dVar33 = local_188;
            dVar14 = dStack_180;
joined_r0x000143414c54:
            local_188 = dVar33;
            dStack_180 = dVar14;
            if (lVar22 == 0) {
              lVar22 = FUN_1400bafc2(lVar30,lVar27,1);
            }
            local_1c0[2] = lVar22;
            lVar30 = FUN_140028f18(puVar29,local_1c0);
            if ((lVar30 != 0) && ((*(byte *)((longlong)local_1c0 + 0xcb) & 0x10) == 0)) {
              uVar1 = *(undefined4 *)local_1c0;
              uVar2 = *(undefined4 *)((longlong)local_1c0 + 4);
              uVar3 = *(undefined4 *)(local_1c0 + 1);
              uVar4 = *(undefined4 *)((longlong)local_1c0 + 0xc);
              uVar7 = *(undefined4 *)(local_1c0 + 2);
              uVar8 = *(undefined4 *)((longlong)local_1c0 + 0x14);
              uVar9 = *(undefined4 *)(local_1c0 + 3);
              uVar10 = *(undefined4 *)((longlong)local_1c0 + 0x1c);
              uVar11 = *(undefined4 *)((longlong)local_1c0 + 0x24);
              uVar12 = *(undefined4 *)(local_1c0 + 5);
              uVar13 = *(undefined4 *)((longlong)local_1c0 + 0x2c);
              *(undefined4 *)(puVar29 + 0x35) = *(undefined4 *)(local_1c0 + 4);
              *(undefined4 *)((longlong)puVar29 + 0x1ac) = uVar11;
              *(undefined4 *)(puVar29 + 0x36) = uVar12;
              *(undefined4 *)((longlong)puVar29 + 0x1b4) = uVar13;
              *(undefined4 *)(puVar29 + 0x33) = uVar7;
              *(undefined4 *)((longlong)puVar29 + 0x19c) = uVar8;
              *(undefined4 *)(puVar29 + 0x34) = uVar9;
              *(undefined4 *)((longlong)puVar29 + 0x1a4) = uVar10;
              *(undefined4 *)(puVar29 + 0x31) = uVar1;
              *(undefined4 *)((longlong)puVar29 + 0x18c) = uVar2;
              *(undefined4 *)(puVar29 + 0x32) = uVar3;
              *(undefined4 *)((longlong)puVar29 + 0x194) = uVar4;
              puVar24 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
              puVar26 = puVar24 + 4;
              if ((undefined8 *)puVar29[1] < puVar26) {
                FUN_140023dd8(puVar29,0x28);
                puVar24 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
                puVar26 = puVar24 + 4;
              }
              *puVar29 = (ulonglong)puVar26;
              *(int *)(puVar29 + 0xc) = (int)puVar29[0xc] + 1;
              *(undefined8 **)puVar29[6] = puVar24;
              puVar29[6] = (ulonglong)(puVar24 + 1);
              puVar24[1] = 0;
              *puVar24 = &PTR_LAB_14a37d348;
              puVar24[2] = lVar30;
              *(undefined4 *)(puVar24 + 3) = param_3;
              *(undefined1 *)((longlong)puVar24 + 0x1c) = 1;
            }
            lVar30 = *(longlong *)
                      (*(longlong *)(*(longlong *)((longlong)dVar14 + 8) + 0x50) +
                      (longlong)*(int *)((longlong)dVar33 + 0xd4) * 8);
            if (lVar30 == 0) {
              lVar30 = FUN_1400bafc2(*(longlong *)((longlong)dVar14 + 8),
                                     (longlong)*(int *)((longlong)dVar33 + 0xd4),1);
            }
          }
          lVar22 = FUN_144821ef4(puVar29);
          local_220 = (float *)CONCAT44(local_220._4_4_,param_5);
          local_228 = (double *)CONCAT44(local_228._4_4_,param_10);
          FUN_1400d09c4(dVar33,lVar22,param_12,param_8);
          iVar31 = *(int *)(lVar22 + 0x30) + *(int *)(lVar22 + 0x20);
          iVar20 = iVar31 + *(int *)(lVar22 + 0x40);
          if (iVar20 != 0 && SCARRY4(iVar31,*(int *)(lVar22 + 0x40)) == iVar20 < 0) {
            puVar24 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
            puVar26 = puVar24 + 0xb;
            if ((undefined8 *)puVar29[1] < puVar26) {
              FUN_140023dd8(puVar29,0x60);
              puVar24 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
              puVar26 = puVar24 + 0xb;
            }
            *puVar29 = (ulonglong)puVar26;
            *(int *)(puVar29 + 0xc) = (int)puVar29[0xc] + 1;
            *(undefined8 **)puVar29[6] = puVar24;
            puVar29[6] = (ulonglong)(puVar24 + 1);
            uVar25 = *(undefined8 *)(lVar22 + 0x38);
            uVar1 = *(undefined4 *)(lVar22 + 0x40);
            uVar23 = *(undefined8 *)(lVar22 + 0x28);
            uVar2 = *(undefined4 *)(lVar22 + 0x30);
            uVar5 = *(undefined8 *)(lVar22 + 0x18);
            uVar3 = *(undefined4 *)(lVar22 + 0x20);
            uVar6 = *(undefined8 *)(lVar22 + 8);
            uVar4 = *(undefined4 *)(lVar22 + 0x10);
            puVar24[1] = 0;
            *puVar24 = &PTR_FUN_14a1e7fd8;
            puVar24[2] = lVar30;
            puVar24[3] = uVar6;
            *(undefined4 *)(puVar24 + 4) = uVar4;
            puVar24[5] = uVar5;
            *(undefined4 *)(puVar24 + 6) = uVar3;
            puVar24[7] = uVar23;
            *(undefined4 *)(puVar24 + 8) = uVar2;
            puVar24[9] = uVar25;
            *(undefined4 *)(puVar24 + 10) = uVar1;
            *(undefined8 *)(lVar22 + 8) = 0;
            *(undefined4 *)(lVar22 + 0x10) = 0;
            *(undefined8 *)(lVar22 + 0x18) = 0;
            *(undefined4 *)(lVar22 + 0x20) = 0;
            *(undefined8 *)(lVar22 + 0x28) = 0;
            *(undefined4 *)(lVar22 + 0x30) = 0;
            *(undefined8 *)(lVar22 + 0x38) = 0;
            *(undefined4 *)(lVar22 + 0x40) = 0;
            dVar36 = local_1b0;
            puVar29 = local_1b8;
          }
        }
      }
      else if ((int)param_5 - 0xeU < 0x20) {
        FUN_14797ccb6(&local_188,
                      *(undefined8 *)
                       (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + lVar30 * 2) * 8));
        if (local_188 == 0.0) {
          lVar30 = 0;
        }
        else {
          lVar30 = *(longlong *)
                    (*(longlong *)(*(longlong *)((longlong)dStack_180 + 8) + 0x50) +
                    (longlong)*(int *)((longlong)local_188 + 0xd4) * 8);
          if (lVar30 == 0) {
            lVar30 = FUN_1400bafc2(*(longlong *)((longlong)dStack_180 + 8),
                                   (longlong)*(int *)((longlong)local_188 + 0xd4),1);
          }
        }
        local_1c0[2] = lVar30;
        lVar30 = FUN_140028f18(puVar29,local_1c0);
        if ((lVar30 != 0) && ((*(byte *)((longlong)local_1c0 + 0xcb) & 0x10) == 0)) {
          uVar1 = *(undefined4 *)local_1c0;
          uVar2 = *(undefined4 *)((longlong)local_1c0 + 4);
          uVar3 = *(undefined4 *)(local_1c0 + 1);
          uVar4 = *(undefined4 *)((longlong)local_1c0 + 0xc);
          uVar7 = *(undefined4 *)(local_1c0 + 2);
          uVar8 = *(undefined4 *)((longlong)local_1c0 + 0x14);
          uVar9 = *(undefined4 *)(local_1c0 + 3);
          uVar10 = *(undefined4 *)((longlong)local_1c0 + 0x1c);
          uVar11 = *(undefined4 *)((longlong)local_1c0 + 0x24);
          uVar12 = *(undefined4 *)(local_1c0 + 5);
          uVar13 = *(undefined4 *)((longlong)local_1c0 + 0x2c);
          *(undefined4 *)(puVar29 + 0x35) = *(undefined4 *)(local_1c0 + 4);
          *(undefined4 *)((longlong)puVar29 + 0x1ac) = uVar11;
          *(undefined4 *)(puVar29 + 0x36) = uVar12;
          *(undefined4 *)((longlong)puVar29 + 0x1b4) = uVar13;
          *(undefined4 *)(puVar29 + 0x33) = uVar7;
          *(undefined4 *)((longlong)puVar29 + 0x19c) = uVar8;
          *(undefined4 *)(puVar29 + 0x34) = uVar9;
          *(undefined4 *)((longlong)puVar29 + 0x1a4) = uVar10;
          *(undefined4 *)(puVar29 + 0x31) = uVar1;
          *(undefined4 *)((longlong)puVar29 + 0x18c) = uVar2;
          *(undefined4 *)(puVar29 + 0x32) = uVar3;
          *(undefined4 *)((longlong)puVar29 + 0x194) = uVar4;
          puVar24 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
          puVar26 = puVar24 + 4;
          if ((undefined8 *)puVar29[1] < puVar26) {
            FUN_140023dd8(puVar29,0x28);
            puVar24 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
            puVar26 = puVar24 + 4;
          }
          *puVar29 = (ulonglong)puVar26;
          *(int *)(puVar29 + 0xc) = (int)puVar29[0xc] + 1;
          *(undefined8 **)puVar29[6] = puVar24;
          puVar29[6] = (ulonglong)(puVar24 + 1);
          puVar24[1] = 0;
          *puVar24 = &PTR_LAB_14a37d348;
          puVar24[2] = lVar30;
          *(undefined4 *)(puVar24 + 3) = param_3;
          *(undefined1 *)((longlong)puVar24 + 0x1c) = 1;
        }
        if (local_188 == 0.0) {
          lVar30 = 0;
        }
        else {
          lVar30 = *(longlong *)
                    (*(longlong *)(*(longlong *)((longlong)dStack_180 + 8) + 0x50) +
                    (longlong)*(int *)((longlong)local_188 + 0xd4) * 8);
          if (lVar30 == 0) {
            lVar30 = FUN_1400bafc2(*(longlong *)((longlong)dStack_180 + 8),
                                   (longlong)*(int *)((longlong)local_188 + 0xd4),1);
          }
        }
        local_220 = &local_18c;
        local_228 = &local_108;
        FUN_14798b07f(puVar29,&local_188,lVar30,&param_8);
      }
      else {
        FUN_143415ffb(local_1c0);
        if (0.0001 <= ABS(param_10 + -1.0)) {
          uVar25 = *(undefined8 *)
                    (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + lVar30 * 2) * 8);
          if (*(char *)((longlong)param_8 + 0x46) == '\x01') {
            uVar23 = FUN_1415d3b1a();
            FUN_1448e935e(uVar25,&local_188,uVar23,0);
            FUN_1415d3b1a();
          }
          else {
            uVar23 = FUN_1415d3c34();
            FUN_1448e935e(uVar25,&local_188,uVar23,0);
            FUN_1415d3c34();
          }
          if (local_188 == 0.0) {
            local_1c0[2] = 0;
            goto LAB_143414c88;
          }
          lVar30 = *(longlong *)((longlong)dStack_180 + 8);
          lVar27 = (longlong)*(int *)((longlong)local_188 + 0xd4);
          lVar22 = *(longlong *)(*(longlong *)(lVar30 + 0x50) + lVar27 * 8);
          dVar33 = local_188;
          dVar14 = dStack_180;
          goto joined_r0x000143414c54;
        }
        FUN_14797cd1a(&local_188,
                      *(undefined8 *)
                       (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + lVar30 * 2) * 8));
        if (local_188 == 0.0) {
          lVar30 = 0;
        }
        else {
          lVar30 = *(longlong *)
                    (*(longlong *)(*(longlong *)((longlong)dStack_180 + 8) + 0x50) +
                    (longlong)*(int *)((longlong)local_188 + 0xd4) * 8);
          if (lVar30 == 0) {
            lVar30 = FUN_1400bafc2(*(longlong *)((longlong)dStack_180 + 8),
                                   (longlong)*(int *)((longlong)local_188 + 0xd4),1);
          }
        }
        local_1c0[2] = lVar30;
        lVar30 = FUN_140028f18(puVar29,local_1c0);
        if ((lVar30 != 0) && ((*(byte *)((longlong)local_1c0 + 0xcb) & 0x10) == 0)) {
          uVar1 = *(undefined4 *)local_1c0;
          uVar2 = *(undefined4 *)((longlong)local_1c0 + 4);
          uVar3 = *(undefined4 *)(local_1c0 + 1);
          uVar4 = *(undefined4 *)((longlong)local_1c0 + 0xc);
          uVar7 = *(undefined4 *)(local_1c0 + 2);
          uVar8 = *(undefined4 *)((longlong)local_1c0 + 0x14);
          uVar9 = *(undefined4 *)(local_1c0 + 3);
          uVar10 = *(undefined4 *)((longlong)local_1c0 + 0x1c);
          uVar11 = *(undefined4 *)((longlong)local_1c0 + 0x24);
          uVar12 = *(undefined4 *)(local_1c0 + 5);
          uVar13 = *(undefined4 *)((longlong)local_1c0 + 0x2c);
          *(undefined4 *)(puVar29 + 0x35) = *(undefined4 *)(local_1c0 + 4);
          *(undefined4 *)((longlong)puVar29 + 0x1ac) = uVar11;
          *(undefined4 *)(puVar29 + 0x36) = uVar12;
          *(undefined4 *)((longlong)puVar29 + 0x1b4) = uVar13;
          *(undefined4 *)(puVar29 + 0x33) = uVar7;
          *(undefined4 *)((longlong)puVar29 + 0x19c) = uVar8;
          *(undefined4 *)(puVar29 + 0x34) = uVar9;
          *(undefined4 *)((longlong)puVar29 + 0x1a4) = uVar10;
          *(undefined4 *)(puVar29 + 0x31) = uVar1;
          *(undefined4 *)((longlong)puVar29 + 0x18c) = uVar2;
          *(undefined4 *)(puVar29 + 0x32) = uVar3;
          *(undefined4 *)((longlong)puVar29 + 0x194) = uVar4;
          puVar24 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
          puVar26 = puVar24 + 4;
          if ((undefined8 *)puVar29[1] < puVar26) {
            FUN_140023dd8(puVar29,0x28);
            puVar24 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
            puVar26 = puVar24 + 4;
          }
          *puVar29 = (ulonglong)puVar26;
          *(int *)(puVar29 + 0xc) = (int)puVar29[0xc] + 1;
          *(undefined8 **)puVar29[6] = puVar24;
          puVar29[6] = (ulonglong)(puVar24 + 1);
          puVar24[1] = 0;
          *puVar24 = &PTR_LAB_14a37d348;
          puVar24[2] = lVar30;
          *(undefined4 *)(puVar24 + 3) = param_3;
          *(undefined1 *)((longlong)puVar24 + 0x1c) = 1;
        }
        if (local_188 == 0.0) {
          lVar30 = 0;
        }
        else {
          lVar30 = *(longlong *)
                    (*(longlong *)(*(longlong *)((longlong)dStack_180 + 8) + 0x50) +
                    (longlong)*(int *)((longlong)local_188 + 0xd4) * 8);
          if (lVar30 == 0) {
            lVar30 = FUN_1400bafc2(*(longlong *)((longlong)dStack_180 + 8),
                                   (longlong)*(int *)((longlong)local_188 + 0xd4),1);
          }
        }
        local_228 = (double *)&param_8;
        FUN_14798b1a7(puVar29,&local_188,lVar30,&param_12);
      }
    }
  }
  else {
    if ((uint)param_5 < 0xe) {
      local_1c0[6] = DAT_14c9c0d50;
    }
    uVar25 = *(undefined8 *)
              (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + lVar30 * 2) * 8);
    uVar23 = FUN_1460458e6();
    lVar30 = 0;
    FUN_1448e935e(uVar25,&local_188,uVar23,0);
    FUN_1460458e6();
    if (local_188 != 0.0) {
      lVar30 = *(longlong *)
                (*(longlong *)(*(longlong *)((longlong)dStack_180 + 8) + 0x50) +
                (longlong)*(int *)((longlong)local_188 + 0xd4) * 8);
      if (lVar30 == 0) {
        lVar30 = FUN_1400bafc2(*(longlong *)((longlong)dStack_180 + 8),
                               (longlong)*(int *)((longlong)local_188 + 0xd4),1);
      }
    }
    local_1c0[2] = lVar30;
    lVar30 = FUN_140028f18(puVar29,local_1c0);
    if ((lVar30 != 0) && ((*(byte *)((longlong)local_1c0 + 0xcb) & 0x10) == 0)) {
      uVar1 = *(undefined4 *)local_1c0;
      uVar2 = *(undefined4 *)((longlong)local_1c0 + 4);
      uVar3 = *(undefined4 *)(local_1c0 + 1);
      uVar4 = *(undefined4 *)((longlong)local_1c0 + 0xc);
      uVar7 = *(undefined4 *)(local_1c0 + 2);
      uVar8 = *(undefined4 *)((longlong)local_1c0 + 0x14);
      uVar9 = *(undefined4 *)(local_1c0 + 3);
      uVar10 = *(undefined4 *)((longlong)local_1c0 + 0x1c);
      uVar11 = *(undefined4 *)((longlong)local_1c0 + 0x24);
      uVar12 = *(undefined4 *)(local_1c0 + 5);
      uVar13 = *(undefined4 *)((longlong)local_1c0 + 0x2c);
      *(undefined4 *)(puVar29 + 0x35) = *(undefined4 *)(local_1c0 + 4);
      *(undefined4 *)((longlong)puVar29 + 0x1ac) = uVar11;
      *(undefined4 *)(puVar29 + 0x36) = uVar12;
      *(undefined4 *)((longlong)puVar29 + 0x1b4) = uVar13;
      *(undefined4 *)(puVar29 + 0x33) = uVar7;
      *(undefined4 *)((longlong)puVar29 + 0x19c) = uVar8;
      *(undefined4 *)(puVar29 + 0x34) = uVar9;
      *(undefined4 *)((longlong)puVar29 + 0x1a4) = uVar10;
      *(undefined4 *)(puVar29 + 0x31) = uVar1;
      *(undefined4 *)((longlong)puVar29 + 0x18c) = uVar2;
      *(undefined4 *)(puVar29 + 0x32) = uVar3;
      *(undefined4 *)((longlong)puVar29 + 0x194) = uVar4;
      puVar24 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
      puVar26 = puVar24 + 4;
      if ((undefined8 *)puVar29[1] < puVar26) {
        FUN_140023dd8(puVar29,0x28);
        puVar24 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
        puVar26 = puVar24 + 4;
      }
      *puVar29 = (ulonglong)puVar26;
      *(int *)(puVar29 + 0xc) = (int)puVar29[0xc] + 1;
      *(undefined8 **)puVar29[6] = puVar24;
      puVar29[6] = (ulonglong)(puVar24 + 1);
      puVar24[1] = 0;
      *puVar24 = &PTR_LAB_14a37d348;
      puVar24[2] = lVar30;
      *(undefined4 *)(puVar24 + 3) = param_3;
      *(undefined1 *)((longlong)puVar24 + 0x1c) = 1;
    }
    if (local_188 == 0.0) {
      lVar30 = 0;
    }
    else {
      lVar30 = *(longlong *)
                (*(longlong *)(*(longlong *)((longlong)dStack_180 + 8) + 0x50) +
                (longlong)*(int *)((longlong)local_188 + 0xd4) * 8);
      if (lVar30 == 0) {
        lVar30 = FUN_1400bafc2(*(longlong *)((longlong)dStack_180 + 8),
                               (longlong)*(int *)((longlong)local_188 + 0xd4),1);
      }
    }
    FUN_14798aa36(puVar29,&local_188,lVar30,&param_8);
  }
  if (dVar36 == 0.0) {
    lVar30 = 0;
  }
  else {
    lVar30 = *(longlong *)
              (*(longlong *)(*(longlong *)((longlong)dVar19 + 8) + 0x50) +
              (longlong)*(int *)((longlong)dVar36 + 0xd4) * 8);
    if (lVar30 == 0) {
      lVar30 = FUN_1400bafc2(*(longlong *)((longlong)dVar19 + 8),
                             (longlong)*(int *)((longlong)dVar36 + 0xd4),1);
    }
  }
  lVar22 = FUN_144821ef4(puVar29);
  FUN_1447f9c4a(lVar22,(longlong)dVar36 + 0xe0,lVar15 + 0x40,0);
  FUN_1447f9a48(lVar22,(longlong)dVar36 + 0xe6,lVar15 + 0x240,0);
  iVar31 = *(int *)(lVar22 + 0x30) + *(int *)(lVar22 + 0x20);
  iVar20 = iVar31 + *(int *)(lVar22 + 0x40);
  if (iVar20 != 0 && SCARRY4(iVar31,*(int *)(lVar22 + 0x40)) == iVar20 < 0) {
    puVar24 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
    puVar26 = puVar24 + 0xb;
    if ((undefined8 *)puVar29[1] < puVar26) {
      FUN_140023dd8(puVar29,0x60);
      puVar24 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
      puVar26 = puVar24 + 0xb;
    }
    *puVar29 = (ulonglong)puVar26;
    *(int *)(puVar29 + 0xc) = (int)puVar29[0xc] + 1;
    *(undefined8 **)puVar29[6] = puVar24;
    puVar29[6] = (ulonglong)(puVar24 + 1);
    uVar25 = *(undefined8 *)(lVar22 + 0x38);
    uVar1 = *(undefined4 *)(lVar22 + 0x40);
    uVar23 = *(undefined8 *)(lVar22 + 0x28);
    uVar2 = *(undefined4 *)(lVar22 + 0x30);
    uVar5 = *(undefined8 *)(lVar22 + 0x18);
    uVar3 = *(undefined4 *)(lVar22 + 0x20);
    uVar6 = *(undefined8 *)(lVar22 + 8);
    uVar4 = *(undefined4 *)(lVar22 + 0x10);
    puVar24[1] = 0;
    *puVar24 = &PTR_FUN_14a1e7fd8;
    puVar24[2] = lVar30;
    puVar24[3] = uVar6;
    *(undefined4 *)(puVar24 + 4) = uVar4;
    puVar24[5] = uVar5;
    *(undefined4 *)(puVar24 + 6) = uVar3;
    puVar24[7] = uVar23;
    *(undefined4 *)(puVar24 + 8) = uVar2;
    puVar24[9] = uVar25;
    *(undefined4 *)(puVar24 + 10) = uVar1;
    *(undefined8 *)(lVar22 + 8) = 0;
    *(undefined4 *)(lVar22 + 0x10) = 0;
    *(undefined8 *)(lVar22 + 0x18) = 0;
    *(undefined4 *)(lVar22 + 0x20) = 0;
    *(undefined8 *)(lVar22 + 0x28) = 0;
    *(undefined4 *)(lVar22 + 0x30) = 0;
    *(undefined8 *)(lVar22 + 0x38) = 0;
    *(undefined4 *)(lVar22 + 0x40) = 0;
  }
LAB_143414f4d:
  if ((local_80 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143415ffb FUN_143415ffb body=236 status=ok
// SIG undefined FUN_143415ffb(void)

void FUN_143415ffb(longlong param_1,uint param_2)

{
  char cVar1;
  undefined **ppuVar2;
  longlong *plVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caceb80) && (FUN_144b3d300(&DAT_14caceb80), DAT_14caceb80 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.HDR.UI.CompositeMode",1);
    if (plVar3 == (longlong *)0x0) {
      DAT_14caceb78 = 0;
    }
    else {
      DAT_14caceb78 = (**(code **)(*plVar3 + 0x68))(plVar3);
    }
    _Init_thread_footer(&DAT_14caceb80);
  }
  if ((((DAT_14caceb78 != 0 & DAT_14ca84f23) == 1) && (*(int *)(DAT_14caceb78 + 4) != 0)) &&
     (cVar1 = FUN_140348454(), cVar1 != '\0')) {
    if (0xd < param_2) {
      return;
    }
    ppuVar2 = &PTR_DAT_14a7fee08;
  }
  else {
    if (0xd < param_2) {
      return;
    }
    ppuVar2 = &PTR_DAT_14a7fee78;
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)ppuVar2[(int)param_2];
  return;
}



// FUNCTION 1434160e7 FUN_1434160e7 body=69 status=ok
// SIG undefined FUN_1434160e7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434160e7(void)

{
  _DAT_14cace930 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143416129. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace938,1);
  return;
}



// FUNCTION 14341612c FUN_14341612c body=69 status=ok
// SIG undefined FUN_14341612c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14341612c(void)

{
  _DAT_14cace948 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014341616e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cace950,1);
  return;
}



// FUNCTION 143416172 FUN_143416172 body=449 status=ok
// SIG undefined FUN_143416172(void)

void FUN_143416172(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_108 [40];
  undefined **local_e0 [5];
  byte local_b8;
  byte local_b6;
  byte local_b4;
  byte local_ab;
  longlong *local_88;
  undefined8 local_80;
  longlong local_68;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(char *)(param_1 + 0x21) == '\x01') {
    if (((param_2 == (longlong *)0x0) || ((*(uint *)(param_2 + 1) >> 10 & 1) != 0)) ||
       ((*(uint *)(param_2 + 1) & 0x10) != 0)) {
      *(undefined1 *)(param_1 + 0x21) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x18) = param_2[3];
      *(longlong *)(param_1 + 0x10) = param_2[2];
      *(char *)(param_1 + 0x20) = (char)(int)param_2[1];
      uVar1 = FUN_14341662c(param_1);
      if ((*(int *)(param_1 + 0x40) != 0) &&
         (*(undefined4 *)(param_1 + 0x40) = 0, *(int *)(param_1 + 0x44) != 0)) {
        FUN_144893a1c(param_1 + 0x38);
      }
      memset(local_e0,0,0x90);
      FUN_144869430(local_e0);
      local_50 = 0;
      local_e0[0] = &PTR_FUN_149e1e590;
      local_40 = 0;
      local_b8 = local_b8 | 4;
      local_48 = param_1 + 0x38;
      FUN_1449c2eca(local_e0,0);
      local_b6 = local_b6 & 0x7b;
      local_e0[0] = &PTR_FUN_14a7fe430;
      local_b4 = local_b4 | 1;
      local_b8 = local_b8 | 0x20;
      local_ab = local_ab | 0x10;
      local_80 = uVar1;
      (**(code **)(*param_2 + 0xd8))(param_2,local_e0);
      local_e0[0] = &PTR__purecall_149e35f70;
      if (local_88 != (longlong *)0x0) {
        if (*local_88 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_88);
      }
      if (local_68 != 0) {
        if (*(longlong *)(local_68 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_68);
      }
    }
  }
  if (*param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_108);
  }
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14341634c FUN_14341634c body=318 status=ok
// SIG undefined FUN_14341634c(void)

void FUN_14341634c(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cace978) {
      FUN_144b3d300(&DAT_14cace978);
      if (DAT_14cace978 == -1) {
        DAT_14cace974 = '\0';
        FUN_14052bb08(DAT_14c872ce0,L"Kismet",L"bPersistentUberGraphFrame",&DAT_14cace974,
                      &DAT_14c872ce8);
        _Init_thread_footer(&DAT_14cace978);
      }
    }
    if (((DAT_14cace974 == '\x01') && (*(longlong *)(param_1 + 0x2c8) != 0)) &&
       (*(longlong *)(param_1 + 0x2d0) != 0)) {
      lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x2c8) + 0x44);
      lVar1 = *(longlong *)(param_2 + lVar2);
      *(undefined8 *)(param_2 + lVar2) = 0;
      if (lVar1 != 0) {
        for (plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x2d0) + 0x70);
            plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[9]) {
          if ((*(byte *)((longlong)plVar3 + 0x3c) & 0x10) == 0) {
            (**(code **)(*plVar3 + 0x148))(plVar3,*(int *)((longlong)plVar3 + 0x44) + lVar1);
          }
        }
        FUN_1400020a8(lVar1);
      }
    }
  }
  if (param_3 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143416429. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x398))(*(longlong **)(param_1 + 0x40),param_2,0);
  return;
}



// FUNCTION 14341648a FUN_14341648a body=65 status=ok
// SIG undefined FUN_14341648a(void)

bool FUN_14341648a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
LAB_14341648f:
  lVar2 = param_1;
  lVar1 = lVar2;
  if (*(longlong *)(lVar2 + 0x20) != 0) goto code_r0x00014341649e;
  goto LAB_1434164a9;
code_r0x00014341649e:
  param_1 = *(longlong *)(lVar2 + 0x20);
  if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) != 0) {
    lVar1 = FUN_142840154(lVar2);
LAB_1434164a9:
    if (lVar1 != 0) {
      return (*(byte *)(lVar1 + 0x2e) & 2) == 0;
    }
    param_1 = *(longlong *)(lVar2 + 0x20);
  }
  goto LAB_14341648f;
}



// FUNCTION 1434164cc FUN_1434164cc body=351 status=ok
// SIG undefined FUN_1434164cc(void)

undefined4 FUN_1434164cc(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((((*(uint *)(param_1 + 8) & 0x50) == 0) && ((*(uint *)(param_1 + 8) & 1) != 0)) &&
      ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) &&
     (((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xd4) & 0x10) == 0 &&
      (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != 0)))) {
    if (DAT_14c951858 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1468c5283;
      local_50 = FUN_142809da0;
      local_58 = L"Engine";
      local_60 = 0x400000000;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    if (*(int *)(DAT_14c951858 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) {
      uVar2 = 0;
      if ((*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) != DAT_14c951858 + 0x30) ||
         (lVar1 == DAT_14c951640)) goto LAB_1434164fa;
      if (((*(uint *)(lVar1 + 8) & 0x40) == 0) && ((*(byte *)(lVar1 + 0x2e) & 0x10) == 0)) {
        uVar2 = CONCAT31((int3)(*(uint *)(lVar1 + 8) >> 8),-1 < *(int *)(param_1 + 0xd4));
        goto LAB_1434164fa;
      }
    }
  }
  uVar2 = 0;
LAB_1434164fa:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14341662c FUN_14341662c body=130 status=ok
// SIG undefined FUN_14341662c(void)

undefined8 FUN_14341662c(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  if (*(int *)(param_1 + 0x30) == 0) {
    if (0 < *(int *)(param_1 + 8)) {
      if (*(int *)(param_1 + 0x34) < *(int *)(param_1 + 8)) {
        FUN_1447ab16c();
      }
      FUN_14797e90e(param_1,&local_20,*(undefined8 *)(param_1 + 0x10),0);
      uVar1 = local_20;
      goto LAB_14341666b;
    }
  }
  else if (0 < *(int *)(param_1 + 0x30)) {
    uVar1 = **(undefined8 **)(param_1 + 0x28);
    goto LAB_14341666b;
  }
  uVar1 = 0;
LAB_14341666b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434166af FUN_1434166af body=55 status=ok
// SIG undefined FUN_1434166af(void)

void FUN_1434166af(void)

{
  undefined8 uVar1;
  
  if (DAT_14cace988 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cace988 = FUN_14171c317(FUN_1463aef78,uVar1,L"EStructUtilsResult");
  }
  return;
}



// FUNCTION 1434166e6 FUN_1434166e6 body=3408 status=ok
// SIG undefined FUN_1434166e6(void)

void FUN_1434166e6(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  ushort uVar4;
  void *_Src;
  bool bVar5;
  short sVar6;
  DWORD DVar7;
  short sVar8;
  int iVar9;
  DWORD DVar10;
  DWORD dwTlsIndex;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *lpTlsValue;
  ulonglong uVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  uint *puVar18;
  undefined4 uVar19;
  longlong *plVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  int *piVar24;
  uint *puVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  bool bVar31;
  bool bVar32;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  undefined1 *local_a8;
  code *local_a0;
  uint *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70;
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  param_1[9] = 0;
  local_70 = param_2;
  if ((((*(int *)((longlong)param_1 + 0x34) == 0) ||
       (uVar27 = *(uint *)(param_1 + 6), (int)uVar27 < 0)) || (DAT_14c9647dc <= (int)uVar27)) ||
     (((plVar20 = (longlong *)
                  ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8)),
       plVar20 == (longlong *)0x0 || ((int)plVar20[2] != *(int *)((longlong)param_1 + 0x34))) ||
      (((*(uint *)(plVar20 + 1) & 0x10200000) != 0 ||
       (plVar20 = (longlong *)*plVar20, plVar20 == (longlong *)0x0)))))) {
LAB_1434167c3:
    bVar32 = true;
    plVar20 = (longlong *)0x0;
LAB_1434167cd:
    *(undefined4 *)(param_1 + 8) = 0;
    plVar12 = (longlong *)0x0;
    bVar5 = true;
    iVar9 = 0;
  }
  else {
    if (DAT_14cb06da8 == 0) {
      local_b0 = &local_68;
      local_68 = FUN_1449e2820;
      local_a0 = FUN_14081d0ea;
      local_a8 = &LAB_1464003b0;
      local_b8 = &LAB_147d17bdf;
      local_c0 = &LAB_1417edf22;
      local_c8 = L"Engine";
      local_d0 = 0;
      local_d8 = 0x10000000;
      local_e0 = 8;
      local_e8 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(plVar20[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar20[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
        DAT_14cb06da8 + 0x30)) {
      lVar11 = FUN_140f5e1c2();
      if ((*(int *)(plVar20[2] + 0x38) < *(int *)(lVar11 + 0x38)) ||
         (*(longlong *)(*(longlong *)(plVar20[2] + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
          lVar11 + 0x30)) goto LAB_1434167c3;
      param_1[9] = (longlong)(plVar20 + 10);
      bVar32 = true;
      plVar12 = plVar20;
      plVar20 = (longlong *)0x0;
    }
    else {
      lVar11 = (**(code **)(*plVar20 + 0x310))(plVar20);
      param_1[9] = lVar11;
      plVar12 = (longlong *)(**(code **)(*plVar20 + 0x3f8))(plVar20);
      bVar32 = false;
      if (plVar12 == (longlong *)0x0) goto LAB_1434167cd;
    }
    uVar27 = *(uint *)((longlong)plVar12 + 0xc);
    *(uint *)(param_1 + 8) = uVar27;
    if ((int)uVar27 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      bVar5 = false;
      LOCK();
      iVar9 = *(int *)(lVar11 + 0x10);
      bVar31 = iVar9 == 0;
      if (bVar31) {
        *(int *)(lVar11 + 0x10) = iVar15;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar31) {
        iVar9 = iVar15;
      }
    }
    else {
      bVar5 = false;
      iVar9 = *(int *)(lVar11 + 0x10);
    }
  }
  *(int *)((longlong)param_1 + 0x44) = iVar9;
  if (plVar20 == (longlong *)0x0) {
    *(undefined4 *)(param_1 + 7) = 0;
    iVar9 = 0;
  }
  else {
    uVar27 = *(uint *)((longlong)plVar20 + 0xc);
    *(uint *)(param_1 + 7) = uVar27;
    if ((int)uVar27 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar9 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar31 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar31) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar9 = *(int *)(lVar11 + 0x10);
      bVar31 = iVar9 == 0;
      if (bVar31) {
        *(int *)(lVar11 + 0x10) = iVar15;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar31) {
        iVar9 = iVar15;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x3c) = iVar9;
  if (bVar5) {
    iVar9 = *(int *)(param_1[9] + 0x28);
  }
  else {
    iVar9 = *(int *)(param_1[9] + 0x28);
    if (*(int *)(param_1[9] + 0x28) < (int)plVar12[0xf]) {
      iVar9 = (int)plVar12[0xf];
    }
  }
  plVar1 = param_1 + 2;
  *(int *)(param_1 + 5) = iVar9;
  uVar27 = iVar9 + 0x1f;
  if (0x1f < uVar27) {
    uVar29 = uVar27 >> 5;
    if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar29) {
      if ((0x9f < uVar27) || (param_1[4] != 0)) {
        uVar28 = 0;
        if (0x9f < uVar27) {
          uVar28 = uVar29;
        }
        FUN_1446efa72(param_1 + 4,0,uVar28,4);
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar27 & 0xffffffe0;
    }
    plVar17 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar17 = plVar1;
    }
    if (uVar27 < 0x120) {
      uVar29 = uVar27 >> 3 & 0x3c;
    }
    else {
      uVar29 = uVar29 << 2;
    }
    memset(plVar17,0,(ulonglong)uVar29);
    iVar9 = (int)param_1[5];
    iVar15 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar15 = iVar9;
    }
    if (iVar9 % 0x20 != 0) {
      plVar17 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar17 = plVar1;
      }
      bVar14 = -(char)(iVar9 % 0x20);
      *(uint *)((longlong)plVar17 + (longlong)(iVar15 >> 5) * 4) =
           (uint)(*(int *)((longlong)plVar17 + (longlong)(iVar15 >> 5) * 4) << (bVar14 & 0x1f)) >>
           (bVar14 & 0x1f);
    }
  }
  lVar11 = param_1[1];
  if (0 < (longlong)(int)lVar11) {
    lVar21 = 0;
    do {
      uVar4 = *(ushort *)(*param_1 + lVar21 * 2);
      plVar17 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar17 = plVar1;
      }
      puVar25 = (uint *)((longlong)plVar17 + (ulonglong)(uVar4 >> 5) * 4);
      *puVar25 = *puVar25 | 1 << ((byte)uVar4 & 0x1f);
      lVar21 = lVar21 + 1;
    } while ((int)lVar11 != lVar21);
  }
  plVar1 = param_1 + 10;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (*(int *)((longlong)param_1 + 0x5c) < 0) {
    FUN_14481578e(plVar1,0);
  }
  if (bVar32) {
    local_68 = (code *)CONCAT44(local_68._4_4_,0xffffffff);
    FUN_1448156a8(plVar1,&local_68,(int)plVar12[0x11]);
    if (0 < (int)param_1[1]) {
      lVar11 = 0;
      do {
        uVar4 = *(ushort *)(*param_1 + lVar11 * 2);
        *(uint *)(param_1[10] + (ulonglong)uVar4 * 4) = (uint)uVar4;
        lVar11 = lVar11 + 1;
      } while (lVar11 < (int)param_1[1]);
    }
    iVar9 = (int)param_1[0xb];
    _Src = (void *)param_1[10];
    *(int *)(param_1 + 0xd) = iVar9;
    if (iVar9 == 0 && *(int *)((longlong)param_1 + 0x6c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
    }
    else {
      FUN_144a06ca8(param_1 + 0xc,iVar9);
      if (iVar9 != 0) {
        memcpy((void *)param_1[0xc],_Src,(longlong)iVar9 << 2);
      }
    }
  }
  else {
    lVar11 = FUN_140f76254(plVar12,plVar20,param_3);
    FUN_14054c6c4(plVar1,lVar11);
    FUN_14054c6c4(param_1 + 0xc,lVar11 + 0x10);
  }
  uVar27 = *(uint *)(param_1 + 1);
  uVar13 = (ulonglong)uVar27;
  plVar20 = param_1 + 0x12;
  FUN_1410915d8(plVar20);
  if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar13);
  }
  plVar12 = param_1 + 0xe;
  iVar9 = *(int *)((longlong)param_1 + 0x7c);
  iVar15 = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (iVar9 < (int)uVar27) {
    FUN_14481578e(plVar12,uVar27);
    iVar15 = (int)param_1[0xf];
    iVar9 = *(int *)((longlong)param_1 + 0x7c);
  }
  *(uint *)(param_1 + 0xf) = uVar27 + iVar15;
  if ((uint)(iVar9 - iVar15) < uVar27) {
    FUN_1446f48e2(plVar12);
  }
  plVar17 = param_1 + 0x10;
  FUN_1410915d8(plVar17,(int)param_1[0xb]);
  iVar9 = *(int *)(param_1[9] + 0xf8);
  if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar9);
  }
  local_88 = param_1 + 0x14;
  *(undefined4 *)(param_1 + 0x15) = 0;
  local_80 = plVar17;
  if (*(int *)((longlong)param_1 + 0xac) < iVar9) {
    FUN_14072a708(local_88);
  }
  dwTlsIndex = DAT_14c761374;
  if (DAT_14c761374 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar10 = 0xffffffff;
    LOCK();
    bVar32 = DAT_14c761374 != 0xffffffff;
    DVar7 = dwTlsIndex;
    if (bVar32) {
      DVar10 = DAT_14c761374;
      DVar7 = DAT_14c761374;
    }
    DAT_14c761374 = DVar7;
    UNLOCK();
    if (bVar32) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar10;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (undefined8 *)0x0) {
    lpTlsValue = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *lpTlsValue = 0;
    lpTlsValue[1] = 0;
    DVar10 = GetCurrentThreadId();
    *(DWORD *)(lpTlsValue + 1) = DVar10;
    *lpTlsValue = &PTR_FUN_14a7fece0;
    lpTlsValue[2] = 0;
    lpTlsValue[3] = 0;
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  plVar17 = local_80;
  iVar9 = (int)param_1[0xd];
  if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar9);
  }
  local_90 = (uint *)(lpTlsValue + 2);
  iVar15 = *(int *)((longlong)lpTlsValue + 0x1c);
  uVar30 = 0;
  *(undefined4 *)(lpTlsValue + 3) = 0;
  if (iVar15 < iVar9) {
    FUN_14481578e(local_90,iVar9);
    uVar30 = (ulonglong)*(uint *)(lpTlsValue + 3);
    iVar15 = *(int *)((longlong)lpTlsValue + 0x1c);
  }
  uVar29 = *(uint *)(param_1 + 0xd);
  iVar9 = uVar29 + (int)uVar30;
  *(int *)(lpTlsValue + 3) = iVar9;
  if ((uint)(iVar15 - (int)uVar30) < uVar29) {
    FUN_1446f48e2(local_90);
    iVar9 = *(int *)(lpTlsValue + 3);
  }
  if (iVar9 != 0) {
    memset(*(void **)local_90,(int)CONCAT71((int7)(uVar30 >> 8),0xff),(longlong)iVar9 << 2);
  }
  puVar25 = local_90;
  if (uVar13 != 0) {
    uVar30 = 0;
    local_78 = plVar12;
    do {
      uVar4 = *(ushort *)(*param_1 + uVar30 * 2);
      if ((int)(uint)uVar4 < *(int *)(lpTlsValue + 3)) {
        uVar29 = (uint)uVar4;
        *(int *)(*(longlong *)puVar25 + (ulonglong)uVar29 * 4) = (int)uVar30;
        uVar19 = 0xffffffff;
        if (((int)uVar29 < *(int *)(param_1[9] + 0x28)) &&
           (lVar11 = (longlong)
                     *(int *)(*(longlong *)(param_1[9] + 0x20) + 8 + (ulonglong)uVar29 * 0xc),
           lVar11 != -1)) {
          uVar19 = *(undefined4 *)(*(longlong *)puVar25 + lVar11 * 4);
        }
        iVar9 = (int)param_1[0x13];
        uVar29 = iVar9 + 1;
        *(uint *)(param_1 + 0x13) = uVar29;
      }
      else {
        iVar9 = (int)param_1[0x13];
        uVar29 = iVar9 + 1;
        *(uint *)(param_1 + 0x13) = uVar29;
        uVar19 = 0;
      }
      if (*(uint *)((longlong)param_1 + 0x9c) < uVar29) {
        FUN_1408f8cfa(plVar20,iVar9);
        puVar25 = local_90;
      }
      *(undefined4 *)(*plVar20 + (longlong)iVar9 * 4) = uVar19;
      uVar30 = uVar30 + 1;
    } while (uVar13 != uVar30);
    uVar13 = 1;
    if (1 < (int)uVar27) {
      uVar13 = (ulonglong)uVar27;
    }
    uVar30 = 0;
    do {
      uVar4 = *(ushort *)(*param_1 + uVar30 * 2);
      uVar19 = 0xffffffff;
      if ((int)(uint)uVar4 < (int)param_1[0xd]) {
        uVar19 = *(undefined4 *)(param_1[0xc] + (ulonglong)uVar4 * 4);
      }
      *(undefined4 *)(*local_78 + uVar30 * 4) = uVar19;
      uVar30 = uVar30 + 1;
      plVar17 = local_80;
    } while (uVar13 != uVar30);
  }
  if (0 < (int)param_1[0xb]) {
    lVar11 = 0;
    do {
      iVar9 = *(int *)(*plVar1 + lVar11 * 4);
      uVar19 = 0xffffffff;
      if ((-1 < (longlong)iVar9) && (iVar9 < *(int *)(lpTlsValue + 3))) {
        uVar19 = *(undefined4 *)(*(longlong *)puVar25 + (longlong)iVar9 * 4);
      }
      iVar9 = (int)param_1[0x11];
      *(uint *)(param_1 + 0x11) = iVar9 + 1U;
      if (*(uint *)((longlong)param_1 + 0x8c) < iVar9 + 1U) {
        FUN_1408f8cfa(plVar17,iVar9);
        puVar25 = local_90;
      }
      *(undefined4 *)(param_1[0x10] + (longlong)iVar9 * 4) = uVar19;
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_1[0xb]);
  }
  lVar11 = (longlong)*(int *)(param_1[9] + 0xf8);
  if (lVar11 != 0) {
    piVar24 = *(int **)(param_1[9] + 0xf0);
    piVar2 = piVar24 + lVar11 * 3;
    do {
      iVar9 = *piVar24;
      iVar15 = *(int *)(lpTlsValue + 3);
      iVar16 = -1;
      iVar26 = -1;
      if ((-1 < (longlong)iVar9) && (iVar9 < iVar15)) {
        iVar26 = *(int *)(*(longlong *)puVar25 + (longlong)iVar9 * 4);
      }
      iVar9 = piVar24[1];
      if ((-1 < (longlong)iVar9) && (iVar9 < iVar15)) {
        iVar16 = *(int *)(*(longlong *)puVar25 + (longlong)iVar9 * 4);
      }
      iVar9 = piVar24[2];
      if ((((-1 < (longlong)iVar9) && (iVar9 < iVar15)) && (iVar26 != -1)) &&
         ((iVar16 != -1 &&
          (iVar9 = *(int *)(*(longlong *)puVar25 + (longlong)iVar9 * 4), iVar9 != -1)))) {
        iVar15 = (int)param_1[0x15];
        lVar11 = (longlong)iVar15;
        *(uint *)(param_1 + 0x15) = iVar15 + 1U;
        if (*(uint *)((longlong)param_1 + 0xac) < iVar15 + 1U) {
          FUN_14798b62e(local_88,iVar15);
          puVar25 = local_90;
        }
        lVar21 = *local_88;
        *(int *)(lVar21 + lVar11 * 0xc) = iVar26;
        *(int *)(lVar21 + 4 + lVar11 * 0xc) = iVar16;
        *(int *)(lVar21 + 8 + lVar11 * 0xc) = iVar9;
      }
      piVar24 = piVar24 + 3;
    } while (piVar24 != piVar2);
  }
  FUN_143417600(param_1,local_70);
  if ((int)param_1[0x21] != *(int *)((longlong)param_1 + 0x134)) {
    plVar20 = param_1 + 0x27;
    if ((longlong *)param_1[0x28] != (longlong *)0x0) {
      plVar20 = (longlong *)param_1[0x28];
    }
    iVar9 = (int)param_1[0x29];
    iVar15 = iVar9 + 3;
    if (-1 < iVar9) {
      iVar15 = iVar9;
    }
    if ((int)param_1[0x21] - *(int *)((longlong)param_1 + 0x134) < iVar15 >> 2) {
      iVar9 = (int)param_1[0x25];
      if (iVar9 == 0) {
        uVar13 = 0;
        uVar30 = 1;
        iVar15 = 0;
        iVar26 = 0;
      }
      else {
        puVar25 = (uint *)param_1[0x24];
        if ((uint *)param_1[0x24] == (uint *)0x0) {
          puVar25 = (uint *)(param_1 + 0x22);
        }
        uVar27 = *puVar25;
        if (uVar27 == 0) {
          iVar15 = iVar9 + 0x1e;
          if (-1 < iVar9 + -1) {
            iVar15 = iVar9 + -1;
          }
          uVar13 = 0;
          uVar30 = (ulonglong)(uint)(iVar15 >> 5);
          if (iVar15 >> 5 < 1) {
            uVar30 = uVar13;
          }
          iVar26 = 0;
          do {
            if (uVar30 == uVar13) goto LAB_143416e59;
            iVar26 = iVar26 + 0x20;
            uVar27 = puVar25[uVar13 + 1];
            uVar13 = uVar13 + 1;
          } while (uVar27 == 0);
        }
        else {
          uVar13 = 0;
          iVar26 = 0;
        }
        uVar30 = (ulonglong)(-uVar27 & uVar27);
        uVar3 = uVar30 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar15 = (iVar26 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar9 <= iVar15) {
          iVar15 = iVar9;
        }
      }
      if (iVar15 != iVar9) {
        uVar27 = 0xffffffff;
        do {
          *(undefined4 *)
           ((longlong)plVar20 +
           (longlong)*(int *)(param_1[0x20] + 0x3c + (longlong)iVar15 * 0x40) * 4) = 0xffffffff;
          uVar27 = ~(uint)uVar30 & uVar27;
          puVar25 = (uint *)param_1[0x24];
          if ((uint *)param_1[0x24] == (uint *)0x0) {
            puVar25 = (uint *)(param_1 + 0x22);
          }
          iVar16 = (int)param_1[0x25];
          iVar15 = (int)uVar13;
          lVar11 = (longlong)iVar15;
          uVar29 = puVar25[lVar11] & uVar27;
          if (uVar29 == 0) {
            iVar22 = iVar16 + 0x1e;
            if (-1 < iVar16 + -1) {
              iVar22 = iVar16 + -1;
            }
            iVar22 = iVar22 >> 5;
            iVar26 = iVar26 + 0x20;
            iVar23 = iVar22;
            if (iVar22 < iVar15) {
              iVar23 = iVar15;
            }
            if (iVar15 < iVar22) {
              lVar21 = 0;
              do {
                uVar29 = puVar25[lVar11 + lVar21 + 1];
                if (uVar29 != 0) {
                  uVar13 = (ulonglong)(iVar15 + (int)lVar21 + 1);
                  uVar27 = 0xffffffff;
                  goto LAB_14341719f;
                }
                iVar26 = iVar26 + 0x20;
                lVar21 = lVar21 + 1;
              } while (iVar23 - lVar11 != lVar21);
              uVar27 = 0xffffffff;
              iVar15 = iVar23;
            }
            uVar13 = (ulonglong)(iVar15 + 1);
            iVar15 = iVar16;
          }
          else {
LAB_14341719f:
            uVar30 = (ulonglong)(-uVar29 & uVar29);
            uVar3 = uVar30 * 2 + 1;
            lVar11 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            iVar15 = (iVar26 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
            if (iVar16 <= iVar15) {
              iVar15 = iVar16;
            }
          }
        } while (iVar15 != iVar9);
      }
    }
    else if (0 < iVar9) {
      lVar11 = 0;
      do {
        *(undefined4 *)((longlong)plVar20 + lVar11 * 4) = 0xffffffff;
        lVar11 = lVar11 + 1;
      } while (lVar11 < (int)param_1[0x29]);
    }
LAB_143416e59:
    puVar25 = (uint *)(param_1 + 0x22);
    iVar9 = (int)param_1[0x25];
    if (iVar9 == 0) {
      uVar13 = 0;
      uVar30 = 1;
      iVar15 = 0;
      iVar26 = 0;
    }
    else {
      puVar18 = (uint *)param_1[0x24];
      if ((uint *)param_1[0x24] == (uint *)0x0) {
        puVar18 = puVar25;
      }
      uVar27 = *puVar18;
      if (uVar27 == 0) {
        iVar15 = iVar9 + 0x1e;
        if (-1 < iVar9 + -1) {
          iVar15 = iVar9 + -1;
        }
        uVar13 = 0;
        uVar30 = (ulonglong)(uint)(iVar15 >> 5);
        if (iVar15 >> 5 < 1) {
          uVar30 = uVar13;
        }
        iVar26 = 0;
        do {
          if (uVar30 == uVar13) goto LAB_143416fd4;
          iVar26 = iVar26 + 0x20;
          uVar27 = puVar18[uVar13 + 1];
          uVar13 = uVar13 + 1;
        } while (uVar27 == 0);
      }
      else {
        uVar13 = 0;
        iVar26 = 0;
      }
      uVar30 = (ulonglong)(-uVar27 & uVar27);
      uVar3 = uVar30 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar15 = (iVar26 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      if (iVar9 <= iVar15) {
        iVar15 = iVar9;
      }
    }
    if (iVar15 < iVar9) {
      uVar27 = 0xffffffff;
      do {
        lVar11 = param_1[0x20];
        if (*(longlong *)(lVar11 + 0x28 + (longlong)iVar15 * 0x40) != 0) {
          local_90 = puVar25;
          FUN_1400020a8();
          puVar25 = local_90;
        }
        if (*(longlong *)(lVar11 + (longlong)iVar15 * 0x40 + 0x18) != 0) {
          FUN_1400020a8();
        }
        uVar27 = uVar27 & ~(uint)uVar30;
        puVar18 = (uint *)param_1[0x24];
        if ((uint *)param_1[0x24] == (uint *)0x0) {
          puVar18 = puVar25;
        }
        iVar9 = (int)param_1[0x25];
        iVar15 = (int)uVar13;
        lVar11 = (longlong)iVar15;
        uVar29 = puVar18[lVar11] & uVar27;
        if (uVar29 == 0) {
          iVar16 = iVar9 + 0x1e;
          if (-1 < iVar9 + -1) {
            iVar16 = iVar9 + -1;
          }
          iVar16 = iVar16 >> 5;
          iVar22 = iVar16;
          if (iVar16 < iVar15) {
            iVar22 = iVar15;
          }
          if (iVar16 <= iVar15) break;
          lVar21 = 0;
          while( true ) {
            iVar26 = iVar26 + 0x20;
            uVar29 = puVar18[lVar11 + lVar21 + 1];
            if (uVar29 != 0) break;
            lVar21 = lVar21 + 1;
            if (iVar22 - lVar11 == lVar21) goto LAB_143416fd4;
          }
          uVar13 = (ulonglong)(iVar15 + (int)lVar21 + 1);
          uVar27 = 0xffffffff;
        }
        uVar30 = (ulonglong)(-uVar29 & uVar29);
        uVar3 = uVar30 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar15 = (iVar26 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar15 < iVar9);
    }
LAB_143416fd4:
    *(undefined4 *)(param_1 + 0x21) = 0;
    if (*(int *)((longlong)param_1 + 0x10c) < 0) {
      FUN_140b7ce44(param_1 + 0x20,0);
    }
    param_1[0x26] = 0xffffffff;
    *(undefined4 *)(param_1 + 0x25) = 0;
  }
  sVar6 = (short)(int)param_1[0x1f];
  sVar8 = sVar6 + 1;
  if (sVar8 == 0) {
    sVar8 = sVar6 + 2;
  }
  *(short *)(param_1 + 0x1f) = sVar8;
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143417438 FUN_143417438 body=421 status=ok
// SIG undefined FUN_143417438(void)

undefined8 *
FUN_143417438(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  *param_1 = 0;
  iVar2 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140817052(param_1,iVar2,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar2 * 2);
  }
  param_1[4] = 0;
  param_1[5] = 0x8000000000;
  param_1[6] = 0;
  iVar2 = 0;
  if (param_4 != 0) {
    uVar1 = *(uint *)(param_4 + 0xc);
    *(uint *)(param_1 + 6) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar4 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar3;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x34) = iVar2;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf5) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  memset(param_1 + 7,0,0x89);
  *(undefined8 *)((longlong)param_1 + 300) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 2;
  FUN_1434166e6(param_1,param_3,0);
  return param_1;
}



// FUNCTION 1434175de FUN_1434175de body=33 status=ok
// SIG undefined FUN_1434175de(void)

undefined4 FUN_1434175de(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(*(longlong *)(param_1 + 0x48) + 0x28))) {
    uVar1 = *(undefined4 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x20) + 8 + (ulonglong)param_2 * 0xc);
  }
  return uVar1;
}



// FUNCTION 143417600 FUN_143417600 body=1199 status=ok
// SIG undefined FUN_143417600(void)

void FUN_143417600(code *param_1,longlong **param_2)

{
  code *pcVar1;
  longlong lVar2;
  uint uVar3;
  short sVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  longlong *local_190;
  undefined4 local_188;
  code *local_180;
  longlong **local_178;
  longlong *local_170;
  code *local_168;
  code **local_160;
  longlong local_158;
  ulonglong uStack_150;
  undefined1 local_148;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(int *)(param_1 + 0xbc) < 0) {
    FUN_1474da402(param_1 + 0xb0,0);
  }
  param_1[0xc0] = (code)0x0;
  param_1[200] = (code)0x0;
  param_1[200] = *(code *)(param_2 + 1);
  pcVar1 = param_1 + 0xd0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) < 0) {
    FUN_14798b6c2(pcVar1,0);
  }
  param_1[0xe0] = (code)0x0;
  lVar5 = FUN_1409ca440(param_1 + 0x40);
  if (lVar5 != 0) {
    local_58 = (longlong *)0x0;
    local_50 = 0x2000000000;
    if (*param_2 != (longlong *)0x0) {
      FUN_147953e04(&local_158);
    }
    if (*(char *)(param_2 + 1) != '\x01') {
      local_160 = &local_180;
      local_168 = FUN_14341b05a;
      local_180 = param_1;
      local_178 = param_2;
      local_170 = &local_158;
      lVar5 = FUN_14498be06(lVar5 + 0x28);
      if (lVar5 != 0) {
        (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x10))(lVar5 + 0x28,&local_168);
      }
      local_190 = &local_158;
      if (local_58 != (longlong *)0x0) {
        local_190 = local_58;
      }
      local_188 = (undefined4)local_50;
      FUN_140df8b76(param_1 + 0xb0);
    }
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (((((*(int *)(param_1 + 0x3c) != 0) && (uVar11 = *(uint *)(param_1 + 0x38), -1 < (int)uVar11))
       && ((int)uVar11 < DAT_14c9647dc)) &&
      ((plVar10 = (longlong *)
                  ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
       plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)(param_1 + 0x3c))))) &&
     (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (*plVar10 != 0)))) {
    plVar10 = (longlong *)(*plVar10 + 0xd8);
    local_158 = FUN_144a89504();
    if ((local_158 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_158);
    }
    lVar5 = (**(code **)(*plVar10 + 0x18))(plVar10,&local_158);
    if (lVar5 != 0) {
      lVar6 = FUN_144a89504();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30)) {
        local_158 = 0;
        uStack_150 = 0;
        local_148 = (code)0x0;
        local_178 = &local_198;
        local_180 = FUN_14341b25c;
        local_198 = &local_158;
        (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x10))(lVar5 + 0x28);
        uVar11 = *(uint *)(param_1 + 0xd8);
        uVar3 = (uint)uStack_150;
        if ((int)(uint)uStack_150 < 1 || uVar11 != 0) {
          if ((uint)uStack_150 != 0) {
            if (param_1[0xe0] == (code)0x0) {
              FUN_1433e3ca1(*(undefined8 *)(param_1 + 0xd0),uVar11);
              param_1[0xe0] = (code)0x1;
            }
            if (local_148 == (code)0x0) {
              FUN_1433e3ca1(local_158,uStack_150 & 0xffffffff);
              local_148 = (code)0x1;
            }
            uVar13 = uVar11;
            if ((int)uVar11 < (int)uVar3) {
              uVar13 = uVar3;
            }
            iVar9 = (int)uVar13 / 2 + uVar13;
            if (iVar9 < 0) {
LAB_143417aa9:
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar9);
            }
            if (*(int *)(param_1 + 0xdc) < iVar9) {
              FUN_14798b6c2(pcVar1);
            }
            uVar13 = 0;
            if (uVar11 != 0 || (int)uVar3 < 1) {
              lVar5 = 0;
              uVar12 = 0;
              uVar13 = 0;
              do {
                if ((uVar13 == uVar3) && ((longlong)uVar12 <= (longlong)(int)uVar11))
                goto LAB_143417871;
                plVar10 = (longlong *)(local_158 + (longlong)(int)uVar13 * 0xc);
                lVar6 = *plVar10;
                lVar2 = *(longlong *)(*(longlong *)pcVar1 + lVar5);
                if (lVar2 == lVar6) {
                  plVar8 = (longlong *)(*(longlong *)pcVar1 + lVar5);
LAB_143417a29:
                  *(int *)(plVar8 + 1) = (int)plVar10[1];
                  *plVar8 = *plVar10;
                  uVar13 = uVar13 + 1;
                }
                else {
                  iVar9 = (int)lVar2 - (int)lVar6;
                  if (iVar9 == 0) {
                    iVar9 = (int)((ulonglong)lVar2 >> 0x20) - (int)((ulonglong)lVar6 >> 0x20);
                  }
                  if (-1 < iVar9) {
                    plVar8 = (longlong *)FUN_14798b772(pcVar1,uVar12 & 0xffffffff);
                    uVar11 = *(uint *)(param_1 + 0xd8);
                    *plVar8 = *plVar10;
                    goto LAB_143417a29;
                  }
                }
                uVar12 = uVar12 + 1;
                lVar5 = lVar5 + 0xc;
              } while (uVar12 != uVar11 || (int)uVar3 <= (int)uVar13);
            }
            iVar9 = (uVar3 - uVar13) + *(int *)(param_1 + 0xd8);
            if (iVar9 < 0) goto LAB_143417aa9;
            if (*(int *)(param_1 + 0xdc) < iVar9) {
              FUN_14798b6c2(pcVar1);
            }
            iVar9 = uVar3 - uVar13;
            if (iVar9 != 0 && (int)uVar13 <= (int)uVar3) {
              lVar5 = (longlong)(int)uVar13 * 0xc;
              do {
                lVar6 = local_158;
                puVar7 = (undefined8 *)FUN_14798b732(pcVar1);
                *puVar7 = *(undefined8 *)(lVar6 + lVar5);
                *puVar7 = *(undefined8 *)(lVar6 + lVar5);
                *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(lVar6 + 8 + lVar5);
                lVar5 = lVar5 + 0xc;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
          }
        }
        else {
          FUN_1470d35ca(pcVar1,&local_158);
          param_1[0xe0] = local_148;
        }
LAB_143417871:
        if (local_158 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  sVar4 = (short)*(undefined4 *)(param_1 + 0xf8) + 1;
  if (sVar4 == 0) {
    sVar4 = (short)*(undefined4 *)(param_1 + 0xf8) + 2;
  }
  *(short *)(param_1 + 0xf8) = sVar4;
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143417ab2 FUN_143417ab2 body=5243 status=ok
// SIG undefined FUN_143417ab2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_143417ab2(longlong *param_1,longlong *param_2,uint *param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double *pdVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  byte bVar30;
  int iVar31;
  int iVar32;
  uint *puVar33;
  longlong *plVar34;
  longlong *plVar35;
  uint *puVar36;
  longlong lVar37;
  uint uVar38;
  uint uVar39;
  longlong lVar40;
  longlong lVar41;
  int iVar42;
  int iVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  int iVar47;
  int iVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  uint uVar51;
  longlong *plVar52;
  longlong lVar53;
  longlong lVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  ulonglong uVar59;
  ulonglong uVar60;
  double dVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  float fVar69;
  undefined1 auVar70 [16];
  float fVar71;
  undefined1 auStack_158 [40];
  longlong *local_130;
  longlong *local_128;
  undefined8 *local_120;
  undefined1 local_118 [16];
  uint local_104;
  longlong *local_100;
  undefined4 local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar28 = param_3[1];
  if ((((((uVar28 == 0) || (uVar51 = *param_3, (int)uVar51 < 0)) || (DAT_14c9647dc <= (int)uVar51))
       || ((lVar53 = (ulonglong)((uVar51 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar51 >> 0x10) * 8), lVar53 == 0 ||
           (*(uint *)(lVar53 + 0x10) != uVar28)))) || ((*(uint *)(lVar53 + 8) & 0x10200000) != 0))
     || (((param_3[3] == 0 || (uVar51 = param_3[2], (int)uVar51 < 0)) ||
         ((DAT_14c9647dc <= (int)uVar51 ||
          (((lVar53 = (ulonglong)((uVar51 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar51 >> 0x10) * 8), lVar53 == 0 ||
            (*(uint *)(lVar53 + 0x10) != param_3[3])) ||
           (puVar33 = param_3, (*(uint *)(lVar53 + 8) & 0x10200000) != 0)))))))) {
    uVar28 = *(uint *)((longlong)param_1 + 0x44);
    if (uVar28 != 0) {
      puVar33 = (uint *)(param_1 + 8);
      goto LAB_143417bd8;
    }
LAB_14341897c:
    lVar53 = 0;
  }
  else {
LAB_143417bd8:
    uVar51 = *puVar33;
    lVar53 = 0;
    if ((-1 < (int)uVar51) && ((int)uVar51 < DAT_14c9647dc)) {
      plVar34 = (longlong *)
                ((ulonglong)((uVar51 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar51 >> 0x10) * 8));
      if ((plVar34 == (longlong *)0x0) ||
         ((*(uint *)(plVar34 + 2) != uVar28 || ((*(uint *)(plVar34 + 1) & 0x10200000) != 0))))
      goto LAB_14341897c;
      lVar53 = *plVar34;
    }
  }
  if (*(int *)(lVar53 + 0x1c0) != *(int *)(lVar53 + 0x1ec)) {
    lVar37 = *param_2;
    uVar28 = (uint)((ulonglong)lVar37 >> 0x10);
    uVar51 = (uint)lVar37 & 0xffff;
    lVar54 = lVar53 + 0x1f0;
    if (*(longlong *)(lVar53 + 0x1f8) != 0) {
      lVar54 = *(longlong *)(lVar53 + 0x1f8);
    }
    iVar47 = *(int *)(lVar54 + (ulonglong)
                               (*(int *)(lVar53 + 0x200) - 1U &
                               (int)((ulonglong)lVar37 >> 0x20) + ((uint)lVar37 << 0x10 | uVar51) +
                               (uVar28 << 0x13 | uVar28 & 0xffff) + (uVar51 >> 4)) * 4);
    if (iVar47 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar53 + 0x1b8) + (longlong)iVar47 * 0x28) == lVar37)
        goto LAB_143417cac;
        iVar47 = *(int *)(*(longlong *)(lVar53 + 0x1b8) + (longlong)iVar47 * 0x28 + 0x20);
      } while (iVar47 != -1);
    }
  }
  lVar37 = 0;
LAB_143417cac:
  if (lVar53 == 0) {
LAB_143418e41:
    lVar53 = 0;
    lVar54 = 0;
  }
  else {
    lVar54 = *(longlong *)(lVar53 + 0x20);
    if (lVar54 == 0) {
      lVar54 = *(longlong *)(lVar53 + 0x18);
      lVar53 = 0;
    }
    else {
      if (*(longlong *)(lVar54 + 0x20) != 0) goto LAB_143418e41;
      lVar54 = *(longlong *)(lVar54 + 0x18);
      lVar53 = *(longlong *)(lVar53 + 0x18);
    }
  }
  plVar34 = param_1 + 0x20;
  local_118._0_8_ = plVar34;
  uVar28 = *(uint *)(param_1 + 0x21);
  local_130 = (longlong *)(ulonglong)uVar28;
  uVar51 = *(uint *)((longlong)param_1 + 0x134);
  uVar57 = (uint)lVar54;
  uVar58 = (uint)lVar53;
  uVar44 = (uint)lVar37;
  iVar43 = (int)((ulonglong)lVar54 >> 0x20);
  iVar47 = (int)((ulonglong)lVar53 >> 0x20);
  iVar31 = (int)((ulonglong)lVar37 >> 0x20);
  uVar39 = (uint)((ulonglong)lVar54 >> 0x10);
  uVar46 = (uint)((ulonglong)lVar53 >> 0x10);
  uVar12 = (uint)((ulonglong)lVar37 >> 0x10);
  local_128 = param_4;
  if (uVar28 != uVar51) {
    uVar56 = iVar31 + (uVar44 << 0x10 | uVar44 & 0xffff) +
             ((uVar44 & 0xffff) >> 4) + (uVar12 << 0x13 | uVar12 & 0xffff);
    uVar55 = iVar43 + (uVar57 << 0x10 | uVar57 & 0xffff) + (uVar39 << 0x13 | uVar39 & 0xffff) +
             ((uVar57 & 0xffff) >> 4);
    uVar38 = uVar56 >> 0xd ^
             ((uVar55 >> 2) + 0x9e3779b9 +
              (uVar58 << 0x10 | uVar58 & 0xffff) + iVar47 + (uVar46 << 0x13 | uVar46 & 0xffff) +
              ((uVar58 & 0xffff) >> 4) + uVar55 * 0x40 ^ uVar55) - uVar56;
    uVar45 = uVar38 << 8 ^ (-0x61c88647 - uVar56) - uVar38;
    uVar55 = uVar45 >> 0xd ^ (uVar56 - uVar38) - uVar45;
    uVar56 = uVar55 >> 0xc ^ (uVar38 - uVar45) - uVar55;
    uVar38 = uVar56 << 0x10 ^ (uVar45 - uVar55) - uVar56;
    uVar45 = uVar38 >> 5 ^ (uVar55 - uVar56) - uVar38;
    uVar55 = uVar45 >> 3 ^ (uVar56 - uVar38) - uVar45;
    uVar38 = uVar55 << 10 ^ (uVar38 - uVar45) - uVar55;
    plVar35 = param_1 + 0x27;
    if ((longlong *)param_1[0x28] != (longlong *)0x0) {
      plVar35 = (longlong *)param_1[0x28];
    }
    iVar48 = *(int *)((longlong)plVar35 +
                     (ulonglong)
                     ((int)param_1[0x29] - 1U & (uVar38 >> 0xf ^ uVar45 - (uVar55 + uVar38))) * 4);
    if (iVar48 != -1) {
      lVar41 = *plVar34;
      do {
        lVar40 = (longlong)iVar48 * 0x40;
        if (((*(longlong *)(lVar41 + lVar40) == lVar54) &&
            (lVar1 = lVar41 + lVar40, *(longlong *)(lVar1 + 8) == lVar53)) &&
           (*(longlong *)(lVar1 + 0x10) == lVar37)) {
          if (lVar1 != 0) {
            plVar34 = (longlong *)(lVar1 + 0x18);
            goto LAB_143417ea5;
          }
          break;
        }
        iVar48 = *(int *)(lVar41 + 0x38 + lVar40);
      } while (iVar48 != -1);
    }
  }
  if (uVar51 == 0) {
    *(uint *)(param_1 + 0x21) = uVar28 + 1;
    if (*(uint *)((longlong)param_1 + 0x10c) == uVar28) {
      FUN_1406cd6a8(plVar34,local_130);
    }
    iVar48 = (int)param_1[0x25];
    if (iVar48 == 0) {
      iVar27 = -1;
    }
    else {
      iVar27 = iVar48 + 0x1e;
      if (-1 < iVar48 + -1) {
        iVar27 = iVar48 + -1;
      }
      iVar27 = iVar27 >> 5;
    }
    plVar34 = param_1 + 0x22;
    iVar32 = iVar48 + 1;
    iVar42 = iVar48 + 0x1f;
    if (-1 < iVar48) {
      iVar42 = iVar48;
    }
    if (iVar42 >> 5 == iVar27) {
      *(int *)(param_1 + 0x25) = iVar32;
    }
    else {
      if (*(int *)((longlong)param_1 + 300) <= iVar48) {
        iVar27 = iVar48;
        if (iVar48 + 0x20U < 0xa0) {
          iVar32 = 0x80;
        }
        else {
          uVar28 = iVar48 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 300) + 0x1fU < 0xa0) {
            uVar51 = 4;
            if (4 < uVar28) {
              uVar51 = uVar28;
            }
          }
          else {
            uVar51 = uVar28 + (uVar28 * 3 >> 3) + 0x10;
          }
          uVar59 = (ulonglong)(uVar51 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar55 = (uint)(uVar59 + 0xf);
              if (uVar51 < 0x1ffd) {
                uVar59 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar59 + 0xf >> 4]];
              }
              else {
                uVar60 = (ulonglong)(uVar55 & 0xfffffff0);
                if (uVar60 < 0x7ff1) {
                  bVar30 = (&DAT_14c841e00)[uVar55 >> 4];
                  uVar49 = 0x32;
                  if (0x32 < bVar30) {
                    uVar49 = (ulonglong)bVar30;
                  }
                  uVar50 = 0x32 - (ulonglong)bVar30;
                  do {
                    uVar59 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar50 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar50 & 0xffffffff] & 0xf) == 0) goto LAB_143418d8e;
                    lVar41 = uVar49 + 1 + uVar50;
                    uVar50 = uVar50 - 1;
                  } while (lVar41 != 0x33);
                }
                uVar59 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar59 = (ulonglong)DAT_14c841df8;
                }
                uVar59 = -uVar59 & (uVar60 + uVar59) - 1;
              }
            }
            else {
              local_120 = (undefined8 *)(ulonglong)uVar28;
              uVar59 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar59,0);
              uVar28 = (uint)local_120;
              iVar27 = (int)param_1[0x25];
            }
          }
LAB_143418d8e:
          iVar29 = (int)(uVar59 >> 2);
          iVar32 = -0x20;
          if ((int)uVar28 <= iVar29) {
            iVar32 = iVar29 << 5;
          }
        }
        *(int *)((longlong)param_1 + 300) = iVar32;
        FUN_1446efbd8(plVar34,iVar27);
        iVar32 = (int)param_1[0x25] + 1;
      }
      iVar27 = iVar32 + 0x1f;
      if (-1 < iVar32) {
        iVar27 = iVar32;
      }
      *(int *)(param_1 + 0x25) = iVar32;
      if (iVar32 % 0x20 != 0) {
        plVar35 = (longlong *)param_1[0x24];
        if ((longlong *)param_1[0x24] == (longlong *)0x0) {
          plVar35 = plVar34;
        }
        bVar30 = -(char)(iVar32 % 0x20);
        *(uint *)((longlong)plVar35 + (longlong)(iVar27 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar35 + (longlong)(iVar27 >> 5) * 4) << (bVar30 & 0x1f)) >>
             (bVar30 & 0x1f);
      }
    }
    lVar41 = (longlong)(int)local_130;
    if ((longlong *)param_1[0x24] != (longlong *)0x0) {
      plVar34 = (longlong *)param_1[0x24];
    }
    bVar30 = (byte)iVar48 & 0x1f;
    puVar33 = (uint *)((longlong)plVar34 + (longlong)(iVar42 >> 5) * 4);
    *puVar33 = *puVar33 & (-2 << bVar30 | 0xfffffffeU >> 0x20 - bVar30);
  }
  else {
    local_130 = (longlong *)(ulonglong)*(uint *)(param_1 + 0x26);
    lVar41 = (longlong)(int)*(uint *)(param_1 + 0x26);
    iVar48 = *(int *)(param_1[0x20] + 4 + lVar41 * 0x40);
    *(int *)(param_1 + 0x26) = iVar48;
    *(uint *)((longlong)param_1 + 0x134) = uVar51 - 1;
    if (uVar51 - 1 != 0) {
      *(undefined4 *)(param_1[0x20] + (longlong)iVar48 * 0x40) = 0xffffffff;
    }
  }
  iVar48 = (int)local_130;
  puVar33 = (uint *)(param_1 + 0x22);
  puVar36 = (uint *)param_1[0x24];
  if ((uint *)param_1[0x24] == (uint *)0x0) {
    puVar36 = puVar33;
  }
  iVar27 = iVar48 + 0x1f;
  if (-1 < iVar48) {
    iVar27 = iVar48;
  }
  puVar36[iVar27 >> 5] = puVar36[iVar27 >> 5] | 1 << ((byte)local_130 & 0x1f);
  lVar40 = param_1[0x20];
  lVar41 = lVar41 * 0x40;
  puVar2 = (undefined8 *)(lVar40 + lVar41);
  *(longlong *)(lVar40 + lVar41) = lVar54;
  *(longlong *)(lVar40 + 8 + lVar41) = lVar53;
  *(longlong *)(lVar40 + 0x10 + lVar41) = lVar37;
  puVar3 = (undefined8 *)(lVar40 + 0x18 + lVar41);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3 = (undefined8 *)(lVar40 + 0x28 + lVar41);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined4 *)(lVar40 + 0x38 + lVar41) = 0xffffffff;
  uVar28 = (uVar44 << 0x10 | uVar44 & 0xffff) + iVar31 +
           ((uVar44 & 0xffff) >> 4) + (uVar12 << 0x13 | uVar12 & 0xffff);
  uVar51 = (uVar57 << 0x10 | uVar57 & 0xffff) + iVar43 +
           ((uVar57 & 0xffff) >> 4) + (uVar39 << 0x13 | uVar39 & 0xffff);
  uVar39 = uVar28 >> 0xd ^
           ((uVar51 >> 2) + 0x9e3779b9 +
            (uVar58 << 0x10 | uVar58 & 0xffff) + iVar47 +
            ((uVar58 & 0xffff) >> 4) + (uVar46 << 0x13 | uVar46 & 0xffff) + uVar51 * 0x40 ^ uVar51)
           - uVar28;
  uVar46 = uVar39 << 8 ^ (-0x61c88647 - uVar28) - uVar39;
  uVar51 = uVar46 >> 0xd ^ (uVar28 - uVar39) - uVar46;
  uVar28 = uVar51 >> 0xc ^ (uVar39 - uVar46) - uVar51;
  uVar39 = uVar28 << 0x10 ^ (uVar46 - uVar51) - uVar28;
  uVar46 = uVar39 >> 5 ^ (uVar51 - uVar28) - uVar39;
  uVar51 = uVar46 >> 3 ^ (uVar28 - uVar39) - uVar46;
  uVar28 = uVar51 << 10 ^ (uVar39 - uVar46) - uVar51;
  uVar51 = uVar28 >> 0xf ^ uVar46 - (uVar51 + uVar28);
  uVar39 = (int)param_1[0x21] - *(int *)((longlong)param_1 + 0x134);
  uVar28 = 1;
  if (1 < uVar39) {
    plVar34 = param_1 + 0x27;
    if ((longlong *)param_1[0x28] != (longlong *)0x0) {
      plVar34 = (longlong *)param_1[0x28];
    }
    iVar47 = *(int *)((longlong)plVar34 + (ulonglong)((int)param_1[0x29] - 1U & uVar51) * 4);
    if (iVar47 != -1) {
      lVar41 = *(longlong *)local_118._0_8_;
      do {
        lVar40 = (longlong)iVar47 * 0x40;
        local_120 = puVar2;
        if (((*(longlong *)(lVar41 + lVar40) == lVar54) &&
            (puVar3 = (undefined8 *)(lVar41 + lVar40), puVar3[1] == lVar53)) &&
           (puVar3[2] == lVar37)) {
          if (puVar3[5] != 0) {
            FUN_1400020a8();
          }
          plVar35 = local_128;
          if (puVar3[3] != 0) {
            FUN_1400020a8();
          }
          uVar6 = *local_120;
          uVar7 = local_120[1];
          uVar13 = *(undefined4 *)(local_120 + 2);
          uVar14 = *(undefined4 *)((longlong)local_120 + 0x14);
          uVar15 = *(undefined4 *)(local_120 + 3);
          uVar16 = *(undefined4 *)((longlong)local_120 + 0x1c);
          uVar17 = *(undefined4 *)(local_120 + 4);
          uVar18 = *(undefined4 *)((longlong)local_120 + 0x24);
          uVar19 = *(undefined4 *)(local_120 + 5);
          uVar20 = *(undefined4 *)((longlong)local_120 + 0x2c);
          puVar3[6] = local_120[6];
          *(undefined4 *)(puVar3 + 4) = uVar17;
          *(undefined4 *)((longlong)puVar3 + 0x24) = uVar18;
          *(undefined4 *)(puVar3 + 5) = uVar19;
          *(undefined4 *)((longlong)puVar3 + 0x2c) = uVar20;
          *(undefined4 *)(puVar3 + 2) = uVar13;
          *(undefined4 *)((longlong)puVar3 + 0x14) = uVar14;
          *(undefined4 *)(puVar3 + 3) = uVar15;
          *(undefined4 *)((longlong)puVar3 + 0x1c) = uVar16;
          *puVar3 = uVar6;
          puVar3[1] = uVar7;
          FUN_14798b7e6(local_118._0_8_,local_130);
          iVar48 = iVar47;
          goto LAB_1434182c1;
        }
        iVar47 = *(int *)(lVar41 + 0x38 + lVar40);
      } while (iVar47 != -1);
    }
  }
  if (3 < uVar39) {
    uVar59 = (ulonglong)(uVar39 & 0xfffffffe) + 0xf;
    lVar53 = 0x3f;
    if (uVar59 != 0) {
      for (; uVar59 >> lVar53 == 0; lVar53 = lVar53 + -1) {
      }
    }
    uVar28 = 1 << ((byte)lVar53 & 0x1f);
  }
  if (((int)uVar39 < 1) || ((int)uVar28 <= (int)param_1[0x29])) {
    uVar51 = (int)param_1[0x29] - 1U & uVar51;
    *(uint *)((longlong)puVar2 + 0x3c) = uVar51;
    plVar34 = (longlong *)param_1[0x28];
    if ((longlong *)param_1[0x28] == (longlong *)0x0) {
      plVar34 = param_1 + 0x27;
    }
    *(undefined4 *)(puVar2 + 7) =
         *(undefined4 *)
          ((longlong)plVar34 + ((longlong)(int)param_1[0x29] - 1U & (longlong)(int)uVar51) * 4);
    plVar34 = (longlong *)param_1[0x28];
    if ((longlong *)param_1[0x28] == (longlong *)0x0) {
      plVar34 = param_1 + 0x27;
    }
    *(int *)((longlong)plVar34 + ((longlong)(int)param_1[0x29] - 1U & (longlong)(int)uVar51) * 4) =
         iVar48;
    plVar35 = local_128;
    goto LAB_1434182c1;
  }
  *(uint *)(param_1 + 0x29) = uVar28;
  plVar34 = param_1 + 0x28;
  local_118._0_8_ = puVar33;
  if (param_1[0x28] != 0) {
    FUN_1446efa72(plVar34,0,0,4);
    uVar28 = *(uint *)(param_1 + 0x29);
    puVar33 = (uint *)local_118._0_8_;
  }
  plVar35 = param_1 + 0x27;
  if (uVar28 == 1) {
    if (*plVar34 != 0) {
      FUN_1446efa72(plVar34,0,0,4);
      puVar33 = (uint *)local_118._0_8_;
    }
LAB_1434189a7:
    uVar51 = 0;
    do {
      plVar34 = (longlong *)param_1[0x28];
      if ((longlong *)param_1[0x28] == (longlong *)0x0) {
        plVar34 = plVar35;
      }
      *(undefined4 *)
       ((longlong)plVar34 + (ulonglong)((int)param_1[0x29] + 0x7fffffffU & uVar51) * 4) = 0xffffffff
      ;
      uVar51 = uVar51 + 1;
    } while (uVar28 != uVar51);
LAB_1434189d7:
    iVar47 = (int)param_1[0x25];
    if (iVar47 == 0) {
      uVar59 = 0;
      uVar60 = 1;
      iVar43 = 0;
      iVar31 = 0;
    }
    else {
      puVar36 = (uint *)param_1[0x24];
      if ((uint *)param_1[0x24] == (uint *)0x0) {
        puVar36 = puVar33;
      }
      uVar28 = *puVar36;
      if (uVar28 == 0) {
        iVar43 = iVar47 + 0x1e;
        if (-1 < iVar47 + -1) {
          iVar43 = iVar47 + -1;
        }
        uVar59 = 0;
        uVar51 = iVar43 >> 5;
        if (iVar43 >> 5 < 1) {
          uVar51 = 0;
        }
        iVar31 = 0;
        do {
          if (uVar51 == uVar59) {
            plVar35 = local_128;
            iVar48 = (int)local_130;
            goto LAB_1434182c1;
          }
          iVar31 = iVar31 + 0x20;
          uVar28 = puVar36[uVar59 + 1];
          uVar59 = uVar59 + 1;
        } while (uVar28 == 0);
      }
      else {
        uVar59 = 0;
        iVar31 = 0;
      }
      uVar60 = (ulonglong)(-uVar28 & uVar28);
      uVar49 = uVar60 * 2 + 1;
      lVar53 = 0x3f;
      if (uVar49 != 0) {
        for (; uVar49 >> lVar53 == 0; lVar53 = lVar53 + -1) {
        }
      }
      iVar43 = (iVar31 - ((uint)lVar53 ^ 0x3f)) + 0x3e;
      if (iVar47 <= iVar43) {
        iVar43 = iVar47;
      }
    }
    if (iVar43 < iVar47) {
      uVar28 = 0xffffffff;
      do {
        local_104 = uVar28;
        lVar53 = param_1[0x20];
        local_120 = (undefined8 *)(longlong)iVar43;
        lVar37 = (longlong)local_120 * 0x40;
        uVar6 = *(undefined8 *)(lVar53 + 0x10 + lVar37);
        uVar28 = (uint)((ulonglong)uVar6 >> 0x10);
        uVar51 = (uint)uVar6 & 0xffff;
        uVar46 = ((uint)uVar6 << 0x10 | uVar51) + (int)((ulonglong)uVar6 >> 0x20) +
                 (uVar28 << 0x13 | uVar28 & 0xffff) + (uVar51 >> 4);
        uVar6 = *(undefined8 *)(lVar53 + lVar37);
        uVar7 = *(undefined8 *)(lVar53 + 8 + lVar37);
        uVar28 = (uint)((ulonglong)uVar7 >> 0x10);
        uVar51 = (uint)((ulonglong)uVar6 >> 0x10);
        uVar39 = (uint)uVar6 & 0xffff;
        uVar39 = ((uint)uVar6 << 0x10 | uVar39) + (int)((ulonglong)uVar6 >> 0x20) +
                 (uVar51 << 0x13 | uVar51 & 0xffff) + (uVar39 >> 4);
        uVar51 = (uint)uVar7 & 0xffff;
        uVar51 = uVar46 >> 0xd ^
                 ((uVar39 >> 2) + 0x9e3779b9 +
                  ((uint)uVar7 << 0x10 | uVar51) + (int)((ulonglong)uVar7 >> 0x20) +
                  (uVar28 << 0x13 | uVar28 & 0xffff) + (uVar51 >> 4) + uVar39 * 0x40 ^ uVar39) -
                 uVar46;
        uVar28 = uVar51 << 8 ^ (-0x61c88647 - uVar46) - uVar51;
        uVar46 = uVar28 >> 0xd ^ (uVar46 - uVar51) - uVar28;
        uVar51 = uVar46 >> 0xc ^ (uVar51 - uVar28) - uVar46;
        uVar39 = uVar51 << 0x10 ^ (uVar28 - uVar46) - uVar51;
        uVar28 = uVar39 >> 5 ^ (uVar46 - uVar51) - uVar39;
        uVar46 = uVar28 >> 3 ^ (uVar51 - uVar39) - uVar28;
        uVar51 = uVar46 << 10 ^ (uVar39 - uVar28) - uVar46;
        uVar49 = (longlong)(int)(uVar51 >> 0xf ^ uVar28 - (uVar46 + uVar51)) &
                 (longlong)(int)param_1[0x29] - 1U;
        iVar47 = (int)uVar49;
        *(int *)(lVar53 + 0x3c + lVar37) = iVar47;
        plVar34 = (longlong *)param_1[0x28];
        if ((longlong *)param_1[0x28] == (longlong *)0x0) {
          plVar34 = plVar35;
        }
        *(undefined4 *)(lVar53 + 0x38 + lVar37) =
             *(undefined4 *)((longlong)plVar34 + ((longlong)(int)param_1[0x29] - 1U & uVar49) * 4);
        plVar34 = (longlong *)param_1[0x28];
        if ((longlong *)param_1[0x28] == (longlong *)0x0) {
          plVar34 = plVar35;
        }
        *(int *)((longlong)plVar34 + ((longlong)iVar47 & (longlong)(int)param_1[0x29] - 1U) * 4) =
             iVar43;
        uVar28 = ~(uint)uVar60 & local_104;
        lVar53 = param_1[0x24];
        if (param_1[0x24] == 0) {
          lVar53 = local_118._0_8_;
        }
        iVar47 = (int)param_1[0x25];
        iVar43 = (int)uVar59;
        lVar37 = (longlong)iVar43;
        uVar51 = *(uint *)(lVar53 + lVar37 * 4) & uVar28;
        local_100 = plVar35;
        if (uVar51 == 0) {
          iVar48 = iVar47 + 0x1e;
          if (-1 < iVar47 + -1) {
            iVar48 = iVar47 + -1;
          }
          iVar48 = iVar48 >> 5;
          iVar27 = iVar48;
          if (iVar48 < iVar43) {
            iVar27 = iVar43;
          }
          if (iVar48 <= iVar43) break;
          lVar54 = 0;
          while( true ) {
            iVar31 = iVar31 + 0x20;
            uVar51 = *(uint *)(lVar53 + lVar37 * 4 + 4 + lVar54 * 4);
            if (uVar51 != 0) break;
            lVar54 = lVar54 + 1;
            if (iVar27 - lVar37 == lVar54) goto LAB_143418cdd;
          }
          uVar59 = (ulonglong)(iVar43 + (int)lVar54 + 1);
          uVar28 = 0xffffffff;
        }
        uVar60 = (ulonglong)(-uVar51 & uVar51);
        uVar49 = uVar60 * 2 + 1;
        lVar53 = 0x3f;
        if (uVar49 != 0) {
          for (; uVar49 >> lVar53 == 0; lVar53 = lVar53 + -1) {
          }
        }
        iVar43 = (iVar31 - ((uint)lVar53 ^ 0x3f)) + 0x3e;
      } while (iVar43 < iVar47);
    }
  }
  else if (uVar28 != 0) {
    FUN_1446efa72(plVar34,0,uVar28,4);
    puVar33 = (uint *)local_118._0_8_;
    if (0 < (int)uVar28) goto LAB_1434189a7;
    goto LAB_1434189d7;
  }
LAB_143418cdd:
  iVar48 = (int)local_130;
  plVar35 = local_128;
LAB_1434182c1:
  lVar37 = param_1[0x20];
  lVar41 = (longlong)iVar48 * 0x40;
  lVar54 = param_1[9];
  uVar28 = *(uint *)(param_1 + 1);
  lVar53 = lVar37 + lVar41;
  local_130 = (longlong *)(lVar53 + 0x28);
  *(undefined4 *)(lVar53 + 0x30) = 0;
  if (*(int *)(lVar53 + 0x34) < 0) {
    FUN_14481578e(local_130,0);
  }
  plVar34 = (longlong *)(lVar37 + lVar41 + 0x18);
  if (0 < (int)uVar28) {
    lVar41 = lVar41 + lVar37;
    uVar59 = 0;
    local_118 = ZEXT816(0x3ff0000000000000) << 0x40;
    do {
      uVar51 = *(uint *)(param_1[0xe] + uVar59 * 4);
      uVar39 = uVar51;
      if (((((param_3[1] != 0) && (uVar46 = *param_3, -1 < (int)uVar46)) &&
           ((int)uVar46 < DAT_14c9647dc)) &&
          ((lVar53 = (ulonglong)((uVar46 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar46 >> 0x10) * 8), lVar53 != 0 &&
           (*(uint *)(lVar53 + 0x10) == param_3[1])))) &&
         (((((*(uint *)(lVar53 + 8) & 0x10200000) == 0 &&
            ((param_3[3] != 0 && (uVar46 = param_3[2], -1 < (int)uVar46)))) &&
           ((int)uVar46 < DAT_14c9647dc)) &&
          ((((lVar53 = (ulonglong)((uVar46 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar46 >> 0x10) * 8), lVar53 != 0
             && (*(uint *)(lVar53 + 0x10) == param_3[3])) &&
            ((*(uint *)(lVar53 + 8) & 0x10200000) == 0)) &&
           ((uVar39 = 0xffffffff, -1 < (int)uVar51 && ((int)uVar51 < (int)param_3[10])))))))) {
        uVar39 = *(uint *)(*(longlong *)(param_3 + 8) + (ulonglong)uVar51 * 4);
      }
      if (*(char *)((longlong)param_1 + 0xfa) == '\0') {
        if ((((*(int *)((longlong)param_1 + 0x3c) == 0) ||
             (uVar46 = *(uint *)(param_1 + 7), (int)uVar46 < 0)) ||
            ((DAT_14c9647dc <= (int)uVar46 ||
             (((plVar52 = (longlong *)
                          ((ulonglong)((uVar46 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar46 >> 0x10) * 8)),
               plVar52 == (longlong *)0x0 || ((int)plVar52[2] != *(int *)((longlong)param_1 + 0x3c))
               ) || ((*(uint *)(plVar52 + 1) & 0x10200000) != 0)))))) ||
           ((*plVar52 == 0 || (lVar53 = *(longlong *)(*plVar52 + 0x530), lVar53 == 0)))) {
          if ((*(int *)((longlong)param_1 + 0x44) == 0) ||
             (uVar46 = *(uint *)(param_1 + 8), (int)uVar46 < 0)) {
LAB_143418815:
            lVar53 = 0;
          }
          else {
            lVar53 = 0;
            if ((int)uVar46 < DAT_14c9647dc) {
              plVar52 = (longlong *)
                        ((ulonglong)((uVar46 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar46 >> 0x10) * 8));
              if (((plVar52 == (longlong *)0x0) ||
                  ((int)plVar52[2] != *(int *)((longlong)param_1 + 0x44))) ||
                 ((*(uint *)(plVar52 + 1) & 0x10200000) != 0)) goto LAB_143418815;
              lVar53 = *plVar52;
            }
          }
          if ((-1 < (int)uVar51) && ((int)uVar51 < *(int *)(lVar53 + 0x48))) {
            plVar52 = (longlong *)(lVar53 + 0x40);
            goto LAB_14341850b;
          }
        }
        else if ((-1 < (int)uVar51) && ((int)uVar51 < *(int *)(lVar53 + 0x40))) {
          plVar52 = (longlong *)(lVar53 + 0x38);
LAB_14341850b:
          if (((*(char *)(*plVar52 + (ulonglong)uVar51) == '\x04') && (-1 < (int)uVar39)) &&
             ((int)uVar39 < (int)plVar35[1])) {
            lVar53 = *plVar35;
            lVar37 = (ulonglong)uVar39 * 0x60;
            pdVar4 = (double *)(lVar53 + 0x20 + lVar37);
            dVar21 = *pdVar4;
            dVar22 = pdVar4[1];
            dVar23 = *(double *)(lVar53 + 0x30 + lVar37);
            plVar52 = (longlong *)(param_1[0x1d] + 0x10);
            if (param_1[0x1d] == 0) {
              plVar52 = (longlong *)(lVar54 + 0x30);
            }
            lVar40 = *plVar52;
            uVar60 = (ulonglong)((uint)*(ushort *)(*param_1 + uVar59 * 2) * 0x60);
            dVar24 = *(double *)(lVar40 + 0x30 + uVar60);
            pdVar4 = (double *)(lVar40 + 0x20 + uVar60);
            dVar25 = *pdVar4;
            dVar26 = pdVar4[1];
            dVar5 = *(double *)(lVar53 + 0x28 + lVar37);
            dVar61 = *(double *)(lVar40 + 0x28 + uVar60);
            if (((0.0010000000474974513 < ABS(dVar21 - dVar25)) ||
                (0.0010000000474974513 < ABS(dVar5 - dVar61))) ||
               (0.0010000000474974513 < ABS(dVar23 - dVar24))) {
              fVar69 = (float)SQRT(dVar23 * dVar23 + dVar21 * dVar21 + dVar5 * dVar5);
              fVar71 = (float)SQRT(dVar24 * dVar24 + dVar25 * dVar25 + dVar61 * dVar61);
              if (1e-08 < ABS(fVar69 * fVar71)) {
                dVar8 = 1.0 / (double)fVar69;
                dVar10 = dVar23 * dVar8;
                dVar5 = dVar5 * dVar8;
                dVar8 = dVar8 * dVar21;
                dVar66 = 1.0 / (double)fVar71;
                dVar68 = dVar10 * dVar24 * dVar66 +
                         dVar8 * dVar66 * dVar25 + dVar5 * dVar61 * dVar66 + 1.0;
                dVar65 = dVar24 * dVar66;
                dVar67 = dVar66 * dVar25;
                dVar61 = dVar61 * dVar66;
                if (dVar68 < 9.999999974752427e-07) {
                  if ((ABS(dVar8) <= ABS(dVar5)) || (ABS(dVar8) <= ABS(dVar10))) {
                    dVar68 = 0.0;
                    dVar65 = -DAT_14c8463b0;
                    dVar67 = -DAT_14c8463a0;
                    dVar61 = -DAT_14c8463a8;
                  }
                  else {
                    dVar68 = 0.0;
                    dVar65 = DAT_14c846398;
                    dVar67 = DAT_14c846388;
                    dVar61 = DAT_14c846390;
                  }
                }
                dVar66 = dVar8 * dVar61 - dVar67 * dVar5;
                dVar67 = dVar10 * dVar67 - dVar65 * dVar8;
                dVar10 = dVar5 * dVar65 - dVar61 * dVar10;
                auVar62._0_8_ = dVar10 * dVar10;
                auVar62._8_8_ = dVar67 * dVar67;
                dVar5 = dVar66 * dVar66 + auVar62._0_8_;
                dVar61 = dVar68 * dVar68 + auVar62._8_8_;
                auVar70._8_4_ = SUB84(dVar61,0);
                auVar70._0_8_ = dVar5;
                auVar70._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
                dVar8 = dVar5 + auVar70._8_8_;
                uVar60 = -(ulonglong)(9.99999993922529e-09 <= dVar5 + dVar61);
                auVar9._8_4_ = SUB84(dVar8,0);
                auVar9._0_8_ = dVar5 + dVar61;
                auVar9._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
                auVar63 = sqrtpd(auVar62,auVar9);
                auVar70 = divpd(_DAT_149934d80,auVar63);
                dVar68 = dVar68 * auVar70._8_8_;
                auVar64._8_8_ = -(ulonglong)(9.99999993922529e-09 <= dVar8);
                auVar64._0_8_ = uVar60;
                auVar63._8_4_ = SUB84(dVar68,0);
                auVar63._0_8_ = dVar66 * auVar70._0_8_;
                auVar63._12_4_ = (int)((ulonglong)dVar68 >> 0x20);
                auVar63 = blendvpd(local_118,auVar63,auVar64);
                iVar47 = *(int *)(lVar41 + 0x20);
                *(uint *)(lVar41 + 0x20) = iVar47 + 1U;
                if (*(uint *)(lVar41 + 0x24) < iVar47 + 1U) {
                  FUN_1417ba41e(plVar34,iVar47);
                }
                uVar49 = -(ulonglong)(9.99999993922529e-09 <= dVar8) &
                         (ulonglong)(dVar67 * auVar70._8_8_);
                lVar53 = *plVar34;
                lVar37 = (longlong)iVar47 * 0x60;
                auVar11._8_4_ = (int)uVar49;
                auVar11._0_8_ = uVar60 & (ulonglong)(dVar10 * auVar70._0_8_);
                auVar11._12_4_ = (int)(uVar49 >> 0x20);
                *(undefined1 (*) [16])(lVar53 + lVar37) = auVar11;
                *(undefined1 (*) [16])(lVar53 + 0x10 + lVar37) = auVar63;
                *(float *)(lVar53 + 0x20 + lVar37) = fVar71 / fVar69;
                pdVar4 = (double *)(lVar53 + 0x28 + lVar37);
                *pdVar4 = dVar21;
                pdVar4[1] = dVar22;
                *(double *)(lVar53 + 0x38 + lVar37) = dVar23;
                pdVar4 = (double *)(lVar53 + 0x40 + lVar37);
                *pdVar4 = dVar25;
                pdVar4[1] = dVar26;
                *(double *)(lVar53 + 0x50 + lVar37) = dVar24;
                if (*(int *)(lVar41 + 0x30) == 0) {
                  local_f4 = 0xffffffff;
                  FUN_1448156a8(local_130,&local_f4,(ulonglong)uVar28);
                }
                *(int *)(*local_130 + uVar59 * 4) = iVar47;
                plVar35 = local_128;
              }
            }
          }
        }
      }
      uVar59 = uVar59 + 1;
    } while (uVar28 != uVar59);
  }
LAB_143417ea5:
  if ((local_f0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return plVar34;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143418f2e FUN_143418f2e body=568 status=ok
// SIG undefined FUN_143418f2e(void)

void FUN_143418f2e(void)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  longlong local_68;
  int local_60;
  longlong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar15 = 0;
  lVar10 = 0;
  if ((DAT_14cace0c0 != 0) && (*(int *)(DAT_14cace0c0 + 400) == 2)) {
    lVar10 = DAT_14cace0c0;
  }
  local_58[0] = 0;
  local_58[1] = 0;
  iVar2 = *(int *)(lVar10 + 0xd0);
  if (iVar2 == 0) {
    uVar16 = 1;
    iVar11 = 0;
    iVar4 = 0;
  }
  else {
    puVar5 = *(uint **)(lVar10 + 200);
    if (*(uint **)(lVar10 + 200) == (uint *)0x0) {
      puVar5 = (uint *)(lVar10 + 0xb8);
    }
    uVar12 = *puVar5;
    if (uVar12 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar16 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar16 = uVar15;
      }
      iVar11 = 0;
      do {
        if (uVar16 == uVar15) goto LAB_143419135;
        iVar11 = iVar11 + 0x20;
        uVar12 = puVar5[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar15 = 0;
      iVar11 = 0;
    }
    uVar16 = (ulonglong)(-uVar12 & uVar12);
    uVar1 = uVar16 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar4 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar12 = 0xffffffff;
    do {
      puVar6 = (undefined4 *)((longlong)iVar4 * 0x40 + *(longlong *)(lVar10 + 0xa8));
      local_78 = puVar6 + 4;
      FUN_14797244e(&local_68,*puVar6,*(undefined1 *)(puVar6 + 10),
                    *(undefined1 *)((longlong)puVar6 + 0x29));
      iVar4 = local_60 + -1;
      if (local_60 == 0) {
        iVar4 = 0;
      }
      FUN_1400020e8(local_58,local_68,iVar4);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      uVar12 = uVar12 & ~(uint)uVar16;
      puVar5 = *(uint **)(lVar10 + 200);
      if (*(uint **)(lVar10 + 200) == (uint *)0x0) {
        puVar5 = (uint *)(lVar10 + 0xb8);
      }
      iVar3 = *(int *)(lVar10 + 0xd0);
      iVar4 = (int)uVar15;
      lVar14 = (longlong)iVar4;
      uVar9 = puVar5[lVar14] & uVar12;
      if (uVar9 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar4) {
          iVar8 = iVar4;
        }
        if (iVar4 < iVar7) {
          lVar13 = 0;
          do {
            uVar9 = puVar5[lVar14 + lVar13 + 1];
            if (uVar9 != 0) {
              uVar15 = (ulonglong)(iVar4 + (int)lVar13 + 1);
              uVar12 = 0xffffffff;
              goto LAB_1434190ea;
            }
            iVar11 = iVar11 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar8 - lVar14 != lVar13);
          uVar12 = 0xffffffff;
          iVar4 = iVar8;
        }
        uVar15 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_1434190ea:
        uVar16 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar16 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar4 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_143419135:
  if ((local_58[2] ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434191a0 FUN_1434191a0 body=40 status=ok
// SIG undefined FUN_1434191a0(void)

void FUN_1434191a0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140083894();
                    /* WARNING: Could not recover jumptable at 0x0001434191c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(lVar1 + 0x38) + 0xb8))
            (*(longlong **)(lVar1 + 0x38),0x7fffffffffffffff);
  return;
}



// FUNCTION 1434191c8 FUN_1434191c8 body=410 status=ok
// SIG undefined FUN_1434191c8(void)

void FUN_1434191c8(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  wchar_t *_Str;
  longlong lVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  
  if (0 < (int)param_1[1]) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    dVar6 = _wtof(_Str);
    fVar7 = (float)dVar6;
    if (0.0 < fVar7) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14caceb70) {
        FUN_144b3d300(&DAT_14caceb70);
        if (DAT_14caceb70 == -1) {
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          DAT_14caceb68 =
               (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"au.streamcaching.StreamCacheSizeOverrideMB",1);
          _Init_thread_footer(&DAT_14caceb70);
        }
      }
      uVar1 = (ulonglong)(fVar7 * 1024.0);
      uVar1 = (longlong)(fVar7 * 1024.0 - 9.223372e+18) & (longlong)uVar1 >> 0x3f | uVar1;
      fVar5 = (float)(**(code **)(*DAT_14caceb68 + 0xb8))();
      uVar2 = (ulonglong)(fVar5 * 1024.0);
      uVar2 = ((longlong)(fVar5 * 1024.0 - 9.223372e+18) & (longlong)uVar2 >> 0x3f | uVar2) * 0x400;
      lVar4 = uVar2 + uVar1 * -0x400;
      if (uVar1 * 0x400 <= uVar2 && lVar4 != 0) {
        lVar3 = FUN_140083894();
        (**(code **)(**(longlong **)(lVar3 + 0x38) + 0xb8))(*(longlong **)(lVar3 + 0x38),lVar4);
      }
      FUN_140635f48(DAT_14caceb68,fVar7,0xd000000,0);
      return;
    }
  }
  return;
}



// FUNCTION 143419362 FUN_143419362 body=32 status=ok
// SIG undefined FUN_143419362(void)

void FUN_143419362(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140083894();
                    /* WARNING: Could not recover jumptable at 0x00014341937f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(lVar1 + 0x38) + 0xd0))(*(longlong **)(lVar1 + 0x38),1);
  return;
}



// FUNCTION 143419382 FUN_143419382 body=32 status=ok
// SIG undefined FUN_143419382(void)

void FUN_143419382(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140083894();
                    /* WARNING: Could not recover jumptable at 0x00014341939f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(lVar1 + 0x38) + 0xd0))(*(longlong **)(lVar1 + 0x38),0);
  return;
}



// FUNCTION 1434193a2 FUN_1434193a2 body=393 status=ok
// SIG undefined FUN_1434193a2(void)

void FUN_1434193a2(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_118 [32];
  longlong local_f8 [2];
  longlong *local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  char local_a8;
  code *local_98 [2];
  longlong *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  char local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar1 = **(longlong **)(param_1 + 0x28);
  if (lVar1 != 0) {
    local_98[0] = *(code **)(lVar1 + 0x10);
    local_88 = *(longlong **)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x20) = 0;
    local_68 = *(undefined8 *)(lVar1 + 0x40);
    uStack_60 = *(undefined8 *)(lVar1 + 0x48);
    local_78 = *(undefined4 *)(lVar1 + 0x30);
    uStack_74 = *(undefined4 *)(lVar1 + 0x34);
    uStack_70 = *(undefined4 *)(lVar1 + 0x38);
    uStack_6c = *(undefined4 *)(lVar1 + 0x3c);
    if (*(code **)(lVar1 + 0x10) != (code *)0x0) {
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    local_48 = '\x01';
    *(longlong *)(param_1 + 0x28) = lVar1;
    do {
      pcVar2 = local_98[0];
      plVar4 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar4 = (longlong *)&local_78;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar2)(uVar3);
      lVar1 = **(longlong **)(param_1 + 0x28);
      if (lVar1 == 0) {
        local_a8 = '\0';
      }
      else {
        local_f8[0] = *(longlong *)(lVar1 + 0x10);
        local_e8 = *(longlong **)(lVar1 + 0x20);
        *(undefined8 *)(lVar1 + 0x20) = 0;
        local_d8 = *(undefined4 *)(lVar1 + 0x30);
        uStack_d4 = *(undefined4 *)(lVar1 + 0x34);
        uStack_d0 = *(undefined4 *)(lVar1 + 0x38);
        uStack_cc = *(undefined4 *)(lVar1 + 0x3c);
        local_c8 = *(undefined8 *)(lVar1 + 0x40);
        uStack_c0 = *(undefined8 *)(lVar1 + 0x48);
        if (local_f8[0] != 0) {
          *(undefined8 *)(lVar1 + 0x10) = 0;
        }
        local_a8 = '\x01';
        *(longlong *)(param_1 + 0x28) = lVar1;
      }
      FUN_147983b0e(local_98,local_f8);
      if ((local_a8 == '\x01') && (local_f8[0] != 0)) {
        plVar4 = local_e8;
        if (local_e8 == (longlong *)0x0) {
          plVar4 = (longlong *)&local_d8;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
    } while (local_48 != '\0');
  }
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14341952c FUN_14341952c body=42 status=ok
// SIG undefined FUN_14341952c(void)

undefined8 FUN_14341952c(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = (code *)*param_1;
  plVar3 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[2];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  return 0;
}



// FUNCTION 143419556 FUN_143419556 body=139 status=ok
// SIG undefined FUN_143419556(void)

void FUN_143419556(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(param_1 + 0xa8);
  if ((longlong)*(int *)(param_1 + 0xb0) == 0) {
    uVar4 = 0;
  }
  else {
    puVar5 = puVar6 + (longlong)*(int *)(param_1 + 0xb0) * 8;
    do {
      pcVar1 = (code *)*puVar6;
      plVar3 = puVar6 + 4;
      if ((longlong *)puVar6[2] != (longlong *)0x0) {
        plVar3 = (longlong *)puVar6[2];
      }
      uVar2 = (**(code **)(*plVar3 + 8))();
      (*pcVar1)(uVar2);
      puVar6 = puVar6 + 8;
    } while (puVar6 != puVar5);
    uVar4 = *(undefined4 *)(param_1 + 0xb0);
    puVar6 = *(undefined8 **)(param_1 + 0xa8);
  }
  FUN_144a80dc3(puVar6,uVar4);
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1434196d4 FUN_1434196d4 body=47 status=ok
// SIG undefined FUN_1434196d4(void)

void FUN_1434196d4(void)

{
  DAT_14cacebd0 = 0;
  if (DAT_14cacebc8 != 0) {
    FUN_1400020a8();
  }
  FUN_145de63f0(&DAT_14caceb88);
  return;
}



// FUNCTION 143419704 FUN_143419704 body=149 status=ok
// SIG undefined FUN_143419704(void)

void FUN_143419704(longlong *param_1,int param_2,int param_3)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if ((0 < param_3) && ((*(ulonglong *)(*param_1 + 0x38) & 0x1040000000) == 0)) {
    puVar1 = (ulonglong *)param_1[1];
    if ((int)puVar1[1] == 0) {
      lVar4 = 0;
    }
    else {
      if ((*(byte *)(param_1 + 3) & 1) == 0) {
        uVar3 = *puVar1;
      }
      else {
        uVar3 = *puVar1;
        if ((uVar3 & 1) != 0) {
          uVar3 = (longlong)puVar1 + ((longlong)uVar3 >> 0x18);
        }
      }
      lVar4 = (longlong)(int)param_1[2] * (longlong)param_2 + uVar3;
    }
    do {
      plVar2 = (longlong *)*param_1;
      if ((plVar2[7] & 0x1000000000U) == 0) {
        (**(code **)(*plVar2 + 0x148))(plVar2,lVar4);
      }
      lVar4 = lVar4 + (int)param_1[2];
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1434197a6 FUN_1434197a6 body=112 status=ok
// SIG undefined FUN_1434197a6(void)

undefined8 * FUN_1434197a6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = &PTR__purecall_149e35f70;
  plVar1 = (longlong *)param_1[0xb];
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
  }
  lVar2 = param_1[0xf];
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar2);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14341984a FUN_14341984a body=29 status=ok
// SIG undefined FUN_14341984a(void)

undefined8 FUN_14341984a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14341988c FUN_14341988c body=29 status=ok
// SIG undefined FUN_14341988c(void)

undefined8 FUN_14341988c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434198d8 FUN_1434198d8 body=29 status=ok
// SIG undefined FUN_1434198d8(void)

undefined8 FUN_1434198d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14341991e FUN_14341991e body=29 status=ok
// SIG undefined FUN_14341991e(void)

undefined8 FUN_14341991e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143419964 FUN_143419964 body=29 status=ok
// SIG undefined FUN_143419964(void)

undefined8 FUN_143419964(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434199b2 FUN_1434199b2 body=29 status=ok
// SIG undefined FUN_1434199b2(void)

undefined8 FUN_1434199b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143419a02 FUN_143419a02 body=29 status=ok
// SIG undefined FUN_143419a02(void)

undefined8 FUN_143419a02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143419a46 FUN_143419a46 body=29 status=ok
// SIG undefined FUN_143419a46(void)

undefined8 FUN_143419a46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143419a88 FUN_143419a88 body=29 status=ok
// SIG undefined FUN_143419a88(void)

undefined8 FUN_143419a88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143419ad8 FUN_143419ad8 body=29 status=ok
// SIG undefined FUN_143419ad8(void)

undefined8 FUN_143419ad8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143419afa FUN_143419afa body=262 status=ok
// SIG undefined FUN_143419afa(void)

void FUN_143419afa(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 143419c00 FUN_143419c00 body=282 status=ok
// SIG undefined FUN_143419c00(void)

undefined8 * FUN_143419c00(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1434195e1);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143419d1a FUN_143419d1a body=990 status=ok
// SIG undefined FUN_143419d1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143419d1a(longlong *param_1,char *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = *param_2;
  lVar4 = *param_1;
  LOCK();
  uVar15 = *(ulonglong *)(param_1[10] + 0x60);
  *(ulonglong *)(param_1[10] + 0x60) = 1;
  UNLOCK();
  if (1 < uVar15) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar10 = (uint *)*puVar2;
    if (puVar10 != (uint *)0x0) goto LAB_143419df6;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_1434195e1);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar9 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar9 = 0xffffffff;
      *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
      puVar9[0x12] = 0;
      *puVar2 = puVar9;
      FUN_140217a48(puVar2);
      puVar10 = (uint *)*puVar2;
LAB_143419df6:
      puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar14 = (uint *)(puVar16 + 0x16);
      uVar13 = puVar10[0x12];
      if (puVar14 <= puVar10 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
        LOCK();
        uVar12 = *puVar10;
        *puVar10 = *puVar10 + uVar13 + 1;
        UNLOCK();
        if ((uVar12 ^ uVar13) != 0xffffffff) break;
        puVar10 = (uint *)*puVar2;
        *puVar10 = 0xffffffff;
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar2 = puVar10;
        puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar16 + 0x16);
        uVar13 = 0;
        if (puVar14 <= puVar10 + 0x4000) {
          uVar13 = 1;
          goto LAB_143419e76;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_143419e76:
    *(uint **)(puVar10 + 0x10) = puVar14;
    puVar10[0x12] = uVar13;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14a7fea10;
    puVar16[0x15] = uVar15;
    uVar13 = DAT_14cace3f8;
    if (((DAT_14cace3f0 != 0x400) || (DAT_14c7585d8 != 0)) &&
       ((DAT_14cace3f0 != 0x800 || (DAT_14c7585dc != 0)))) {
      uVar13 = DAT_14cace3f0 | _DAT_14cace3f4;
    }
    uVar12 = uVar13 >> 10 & 3;
    if ((uVar13 >> 9 & 1) == 0 || uVar12 < 2) {
      uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
    }
    else {
      uVar15 = 2;
    }
    if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
    }
    puVar16[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar16[9] = puVar16;
    puVar16[10] = puVar16;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar8 = 1;
      if ((char)uVar15 != '\x06') {
        uVar8 = uVar15;
      }
      uVar15 = uVar8;
      uVar11 = 0;
    }
    else {
      if ((char)uVar15 == '\x06') {
        uVar15 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar11 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar11;
    puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
    *(undefined4 *)((longlong)puVar16 + 0x1c) = 0;
    if (puVar16 == (undefined8 *)0x0) {
      local_39 = 1;
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_39 = 1;
      FUN_1447439e4(puVar16);
      LOCK();
      piVar1 = (int *)(puVar16 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar16)(puVar16);
      }
    }
  }
  puVar9 = (undefined4 *)param_1[10];
  uVar11 = *(undefined8 *)((longlong)param_1 + 0x6c);
  *(undefined8 *)(puVar9 + 3) = *(undefined8 *)((longlong)param_1 + 100);
  *(undefined8 *)(puVar9 + 5) = uVar11;
  uVar6 = *(undefined4 *)((longlong)param_1 + 0x5c);
  lVar5 = param_1[0xc];
  uVar7 = *(undefined4 *)((longlong)param_1 + 100);
  *puVar9 = (int)param_1[0xb];
  puVar9[1] = uVar6;
  puVar9[2] = (int)lVar5;
  puVar9[3] = uVar7;
  *(undefined4 *)(param_1[10] + 0x28) = *(undefined4 *)((longlong)param_1 + 0x74);
  LOCK();
  *(undefined4 *)(param_1[10] + 0x58) = 1;
  UNLOCK();
  if (cVar3 == '\0') {
    uVar11 = 0;
  }
  else {
    memset(*(void **)(param_1[10] + 0x20),0,(ulonglong)*(uint *)(param_1[10] + 0x28));
    uVar11 = 2;
  }
  FUN_147975f9a(uVar11,param_1 + 2,param_1 + 0xf);
  LOCK();
  *(int *)(lVar4 + 0x50) = *(int *)(lVar4 + 0x50) + -1;
  UNLOCK();
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14341a0fa FUN_14341a0fa body=139 status=ok
// SIG undefined FUN_14341a0fa(void)

undefined8 * FUN_14341a0fa(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  *param_2 = puVar5;
  *puVar5 = &PTR_FUN_14a7fea20;
  puVar5[2] = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar5[4] = lVar1;
  puVar5[6] = 0;
  if (lVar1 != 0) {
    puVar6 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar6)(puVar6,puVar5 + 6);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x84);
  *(undefined8 *)((longlong)puVar5 + 0x7c) = *(undefined8 *)(param_1 + 0x7c);
  *(undefined8 *)((longlong)puVar5 + 0x84) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  puVar5[0xe] = *(undefined8 *)(param_1 + 0x70);
  puVar5[0xf] = uVar4;
  puVar5[0xc] = uVar2;
  puVar5[0xd] = uVar3;
  return puVar5 + 2;
}



// FUNCTION 14341a186 FUN_14341a186 body=5 status=ok
// SIG undefined FUN_14341a186(void)

longlong FUN_14341a186(longlong param_1)

{
  return param_1 + 0x10;
}



// FUNCTION 14341a18c FUN_14341a18c body=29 status=ok
// SIG undefined FUN_14341a18c(void)

void FUN_14341a18c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14341a1aa FUN_14341a1aa body=71 status=ok
// SIG undefined FUN_14341a1aa(void)

undefined8 * FUN_14341a1aa(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a7fea20;
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



// FUNCTION 14341a1f2 FUN_14341a1f2 body=92 status=ok
// SIG undefined FUN_14341a1f2(void)

void FUN_14341a1f2(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = *(undefined1 *)(param_1 + 8);
  pcVar1 = (code *)*param_1;
  plVar3 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[2];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14341a25a FUN_14341a25a body=29 status=ok
// SIG undefined FUN_14341a25a(void)

void FUN_14341a25a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14341a278 FUN_14341a278 body=71 status=ok
// SIG undefined FUN_14341a278(void)

undefined8 * FUN_14341a278(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14a7fea40;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14341a2c0 FUN_14341a2c0 body=121 status=ok
// SIG undefined FUN_14341a2c0(void)

void FUN_14341a2c0(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  
  DAT_14c844291 = 1;
  lVar1 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xcc0);
  lVar2 = *DAT_14cace598;
  LOCK();
  *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
  UNLOCK();
  cVar3 = FUN_1456bb142(lVar2 + 0x88,lVar1);
  if (cVar3 == '\0') {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + -1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    FUN_1456bb1d4(lVar1 + 0x28,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00014341a320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)*param_1 + 0x10))();
  return;
}



// FUNCTION 14341a350 FUN_14341a350 body=29 status=ok
// SIG undefined FUN_14341a350(void)

undefined8 FUN_14341a350(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14341a36e FUN_14341a36e body=277 status=ok
// SIG undefined FUN_14341a36e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14341a36e(undefined8 *param_1)

{
  code *pcVar1;
  double dVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cace568);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cace568);
  QueryPerformanceCounter(&local_58);
  dVar2 = (double)local_58.QuadPart * DAT_14c83f420;
  pcVar1 = (code *)*param_1;
  plVar4 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
  (*pcVar1)(uVar3);
  QueryPerformanceCounter(&local_58);
  dVar2 = (((double)local_58.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar2 + 16777216.0)) * 1000.0
  ;
  if (_DAT_14cace590 < dVar2) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cace568);
    _DAT_14cace590 = dVar2;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cace568);
  }
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14341a48e FUN_14341a48e body=29 status=ok
// SIG undefined FUN_14341a48e(void)

void FUN_14341a48e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14341a4ac FUN_14341a4ac body=71 status=ok
// SIG undefined FUN_14341a4ac(void)

undefined8 * FUN_14341a4ac(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14a7fea80;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14341a4f4 FUN_14341a4f4 body=43 status=ok
// SIG undefined FUN_14341a4f4(void)

void FUN_14341a4f4(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014341a51c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 14341a52a FUN_14341a52a body=29 status=ok
// SIG undefined FUN_14341a52a(void)

void FUN_14341a52a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14341a548 FUN_14341a548 body=71 status=ok
// SIG undefined FUN_14341a548(void)

undefined8 * FUN_14341a548(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14a7feaa0;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14341a590 FUN_14341a590 body=583 status=ok
// SIG undefined FUN_14341a590(void)

undefined8 * FUN_14341a590(ulonglong param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  
  if (0x100 < param_1) {
                    /* WARNING: Could not recover jumptable at 0x00014341a5fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar3 = (undefined8 *)(**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,0xf0,0x10);
    return puVar3;
  }
  puVar3 = TlsGetValue(DAT_14c896140);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 2) = 0;
    TlsSetValue(DAT_14c896140,puVar3);
  }
  puVar6 = (undefined8 *)puVar3[1];
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*puVar3;
    if (puVar6 == (undefined8 *)0x0) {
      uVar9 = (uint)DAT_14c896180;
      uVar1 = DAT_14c896180;
      while (DAT_14c896180 = uVar1, (uVar1 & 0x3ffffff) != 0) {
        uVar5 = (uVar1 & 0xfffffffffc000000) + 0x4000000;
        if (uVar5 >> 0x1a < uVar1 >> 0x1a) {
          FUN_14000f986(0x3a83126f);
        }
        uVar8 = (ulonglong)((uVar9 & 0x3ffffff) >> 0xe);
        uVar10 = (ulonglong)((uint)uVar1 & 0x3fff);
        LOCK();
        bVar11 = uVar1 == DAT_14c896180;
        uVar1 = uVar5 | *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar8 * 8) + 0x10 + uVar10 * 0x18);
        if (!bVar11) {
          uVar1 = DAT_14c896180;
        }
        DAT_14c896180 = uVar1;
        UNLOCK();
        if (bVar11) {
          *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar8 * 8) + uVar10 * 0x18 + 0x10) = 0;
          puVar6 = *(undefined8 **)
                    (*(longlong *)(&DAT_14c833b00 + uVar8 * 8) + 8 +
                    (ulonglong)(uVar9 & 0x3fff) * 0x18);
          FUN_1447d080c(uVar9 & 0x3ffffff);
          puVar3[1] = puVar6;
          if (puVar6 != (undefined8 *)0x0) goto LAB_14341a745;
          goto LAB_14341a7aa;
        }
        uVar9 = (uint)DAT_14c896180;
        uVar1 = DAT_14c896180;
      }
      puVar3[1] = 0;
LAB_14341a7aa:
      puVar6 = (undefined8 *)FUN_14001cc68(0x10000,0);
      puVar3[1] = puVar6;
      iVar2 = 0xff;
      puVar7 = puVar6;
      do {
        puVar4 = puVar7 + 0x20;
        *puVar7 = puVar4;
        iVar2 = iVar2 + -1;
        puVar7 = puVar4;
      } while (iVar2 != 0);
    }
    else {
      puVar3[1] = puVar6;
      puVar4 = puVar3;
    }
    *puVar4 = 0;
LAB_14341a745:
    *(undefined4 *)(puVar3 + 2) = 0x100;
    iVar2 = 0xff;
  }
  else {
    iVar2 = *(int *)(puVar3 + 2) + -1;
  }
  puVar3[1] = *puVar6;
  *(int *)(puVar3 + 2) = iVar2;
  return puVar6;
}



// FUNCTION 14341a7d8 FUN_14341a7d8 body=547 status=ok
// SIG undefined FUN_14341a7d8(void)

longlong * FUN_14341a7d8(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 14341a9fc FUN_14341a9fc body=42 status=ok
// SIG undefined FUN_14341a9fc(void)

undefined8 FUN_14341a9fc(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = (code *)*param_1;
  plVar3 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[2];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  return 0;
}



// FUNCTION 14341aa30 FUN_14341aa30 body=29 status=ok
// SIG undefined FUN_14341aa30(void)

void FUN_14341aa30(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14341aa4e FUN_14341aa4e body=71 status=ok
// SIG undefined FUN_14341aa4e(void)

undefined8 * FUN_14341aa4e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14a7feae0;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14341aa96 FUN_14341aa96 body=43 status=ok
// SIG undefined FUN_14341aa96(void)

void FUN_14341aa96(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014341aabe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 14341aacc FUN_14341aacc body=29 status=ok
// SIG undefined FUN_14341aacc(void)

void FUN_14341aacc(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14341aaea FUN_14341aaea body=71 status=ok
// SIG undefined FUN_14341aaea(void)

undefined8 * FUN_14341aaea(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14a7feb00;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14341ab52 FUN_14341ab52 body=29 status=ok
// SIG undefined FUN_14341ab52(void)

void FUN_14341ab52(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14341ab70 FUN_14341ab70 body=66 status=ok
// SIG undefined FUN_14341ab70(void)

undefined8 * FUN_14341ab70(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a7feb20;
  FUN_14796516a(param_1 + 4);
  FUN_14051bf10(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14341abb2 FUN_14341abb2 body=83 status=ok
// SIG undefined FUN_14341abb2(void)

void FUN_14341abb2(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 != 0) {
    FUN_147989a36(lVar3 + 0x7a8);
    iVar2 = *(int *)(lVar3 + 0x5c0);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(lVar3 + 0x5b8);
      lVar4 = 0;
      do {
        pbVar1 = (byte *)(*(longlong *)(lVar3 + lVar4) + 0x19a);
        *pbVar1 = *pbVar1 & 0xef;
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar2 * 8 != lVar4);
    }
  }
  return;
}



// FUNCTION 14341ac10 FUN_14341ac10 body=29 status=ok
// SIG undefined FUN_14341ac10(void)

void FUN_14341ac10(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14341ac2e FUN_14341ac2e body=52 status=ok
// SIG undefined FUN_14341ac2e(void)

undefined8 * FUN_14341ac2e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a7feb40;
  FUN_14051bf10(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14341ac7c FUN_14341ac7c body=29 status=ok
// SIG undefined FUN_14341ac7c(void)

void FUN_14341ac7c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14341ac9a FUN_14341ac9a body=52 status=ok
// SIG undefined FUN_14341ac9a(void)

undefined8 * FUN_14341ac9a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a7feb60;
  FUN_14796516a(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14341ace2 FUN_14341ace2 body=185 status=ok
// SIG undefined FUN_14341ace2(void)

void FUN_14341ace2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_108 [40];
  undefined1 *local_e0;
  ulonglong *local_d8;
  longlong local_d0;
  undefined4 local_c8;
  undefined1 local_c0 [160];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar1 = *(longlong **)(param_2 + 0x188);
  if (plVar1 != (longlong *)0x0) {
    FUN_1477cfa06(local_c0,param_1 + 8);
    local_d8 = &local_20;
    local_e0 = local_c0;
    FUN_14797b140(&local_d0);
    FUN_147046490(local_c0);
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_d0);
    FUN_145aa5488(local_d0,local_c8);
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14341ada6 FUN_14341ada6 body=29 status=ok
// SIG undefined FUN_14341ada6(void)

void FUN_14341ada6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14341adc4 FUN_14341adc4 body=52 status=ok
// SIG undefined FUN_14341adc4(void)

undefined8 * FUN_14341adc4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a7fec10;
  FUN_147046490(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14341ae30 FUN_14341ae30 body=69 status=ok
// SIG undefined FUN_14341ae30(void)

undefined8 * FUN_14341ae30(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a7fec30;
  FUN_145aa5488(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14341ae96 FUN_14341ae96 body=203 status=ok
// SIG undefined FUN_14341ae96(void)

undefined8 FUN_14341ae96(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  
  lVar1 = *param_2;
  param_1 = (longlong *)*param_1;
  if ((*(code **)(*param_1 + 0x80) == FUN_1449734ec) ||
     (cVar3 = (**(code **)(*param_1 + 0x80))(param_1,lVar1), cVar3 == '\0')) {
    uVar2 = *(ulonglong *)(lVar1 + 0x38);
    uVar4 = (uint)uVar2;
    if (((uVar4 >> 0x18 & 1) != 0) || ((*(byte *)((longlong)param_1 + 0x2b) & 0x40) == 0)) {
      if ((uVar2 & 0x80800c20202000) == 0) {
        return 1;
      }
      if ((((((uVar4 >> 0xd & 1) == 0) || ((*(byte *)((longlong)param_1 + 0x29) & 1) == 0)) ||
           (0 < (int)param_1[6])) &&
          (((uVar4 >> 0x15 & 1) == 0 || ((*(byte *)((longlong)param_1 + 0x35) & 0x10) == 0)))) &&
         (((((uVar2 >> 0x2f & 1) == 0 ||
            ((*(uint *)((longlong)param_1 + 0x34) & 0x401000) != 0x1000)) &&
           ((((uVar4 >> 0x1d & 1) == 0 || ((*(byte *)((longlong)param_1 + 0x37) & 8) != 0)) ||
            ((*(byte *)(param_1 + 5) & 0x24) == 0)))) &&
          (((uVar2 >> 0x37 & 1) == 0 ||
           (((*(byte *)(param_1 + 5) & 0x20) == 0 &&
            ((*(byte *)((longlong)param_1 + 0x37) & 0x20) != 0)))))))) {
        if ((uVar2 >> 0x23 & 1) == 0) {
          return 1;
        }
        if ((*(byte *)((longlong)param_1 + 0x2b) & 0x20) == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14341af62 FUN_14341af62 body=55 status=ok
// SIG undefined FUN_14341af62(void)

undefined8 FUN_14341af62(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1417ba030(param_1,iVar1);
  }
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 8) = uVar2;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 14341af9a FUN_14341af9a body=126 status=ok
// SIG undefined FUN_14341af9a(void)

void FUN_14341af9a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  lVar2 = *param_2;
  if ((*(uint *)(lVar2 + 8) & 0x40020) != 0) {
    plVar3 = (longlong *)*param_1;
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    iVar1 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
      FUN_1447f76d2(plVar3,iVar1);
    }
    *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8) = uVar4;
    param_1 = (longlong *)*param_1;
    uVar4 = FUN_144938c96(lVar2);
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447f76d2(param_1,iVar1);
    }
    *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar4;
  }
  return;
}



// FUNCTION 14341b030 FUN_14341b030 body=12 status=ok
// SIG undefined FUN_14341b030(void)

void FUN_14341b030(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014341b039. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14341b03c FUN_14341b03c body=29 status=ok
// SIG undefined FUN_14341b03c(void)

undefined8 FUN_14341b03c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14341b05a FUN_14341b05a body=514 status=ok
// SIG undefined FUN_14341b05a(void)

void FUN_14341b05a(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  byte bVar12;
  
  lVar7 = param_1[2];
  cVar2 = *(char *)((longlong)param_3 + 0x11) + '\x02';
  if (*(char *)((longlong)param_3 + 0x12) == '\0') {
    cVar2 = *(char *)((longlong)param_3 + 0x11);
  }
  lVar6 = *(longlong *)(lVar7 + 0x100);
  if (*(longlong *)(lVar7 + 0x100) == 0) {
    lVar6 = lVar7;
  }
  lVar1 = *param_1;
  iVar5 = *(int *)(lVar7 + 0x108);
  bVar3 = true;
  if ((longlong)iVar5 != 0) {
    iVar8 = 1;
    lVar11 = 0;
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar6 + lVar11) == *param_2) {
        if (iVar8 != 0) {
          iVar8 = iVar5 - iVar8;
          if (iVar8 != 0) {
            iVar9 = 1;
            if (iVar8 < 1) {
              iVar9 = iVar8;
            }
            memmove((void *)(lVar6 + (lVar4 >> 0x20) * 8),
                    (void *)(lVar6 + (longlong)(iVar5 - iVar9) * 8),(longlong)iVar9 << 3);
            iVar5 = *(int *)(lVar7 + 0x108);
          }
          *(int *)(lVar7 + 0x108) = iVar5 + -1;
          bVar12 = 2;
          bVar3 = false;
          goto LAB_14341b133;
        }
        break;
      }
      lVar4 = lVar4 + 0x100000000;
      iVar8 = iVar8 + 1;
      lVar11 = lVar11 + 8;
    } while ((longlong)iVar5 << 3 != lVar11);
  }
  bVar12 = 0;
LAB_14341b133:
  if ((int)(uint)*(byte *)(param_3 + 2) < *(int *)(param_1[1] + 0xc)) {
LAB_14341b1a1:
    bVar12 = bVar12 | 1;
  }
  else {
    if (0 < (longlong)(int)param_3[1]) {
      lVar7 = 0;
      do {
        uVar10 = *(uint *)(*param_3 + 8 + lVar7);
        if (((((~uVar10 & 0x7fffffff) != 0) && (*(longlong *)(*param_3 + lVar7) != 0)) &&
            (uVar10 = (int)(uVar10 * 2) >> 1, -1 < (int)uVar10)) &&
           (((int)uVar10 < *(int *)(lVar1 + 0x88) &&
            (*(int *)(*(longlong *)(lVar1 + 0x80) + (ulonglong)uVar10 * 4) != -1))))
        goto LAB_14341b23f;
        lVar7 = lVar7 + 0x10;
      } while ((longlong)(int)param_3[1] * 0x10 != lVar7);
      goto LAB_14341b1a1;
    }
LAB_14341b23f:
    if (bVar3) goto LAB_14341b1e2;
  }
  lVar7 = *param_2;
  iVar5 = *(int *)(lVar1 + 0xb8);
  *(uint *)(lVar1 + 0xb8) = iVar5 + 1U;
  if (*(uint *)(lVar1 + 0xbc) < iVar5 + 1U) {
    FUN_1474d5ad8(lVar1 + 0xb0,iVar5);
  }
  lVar6 = *(longlong *)(lVar1 + 0xb0);
  *(longlong *)(lVar6 + (longlong)iVar5 * 0xc) = lVar7;
  *(byte *)(lVar6 + 8 + (longlong)iVar5 * 0xc) = bVar12;
  *(undefined1 *)(lVar1 + 0xc0) = 0;
LAB_14341b1e2:
  if (cVar2 != '\0') {
    iVar5 = *(int *)(lVar1 + 0xd8);
    *(uint *)(lVar1 + 0xd8) = iVar5 + 1U;
    if (*(uint *)(lVar1 + 0xdc) < iVar5 + 1U) {
      FUN_1417ba2a8(lVar1 + 0xd0,iVar5);
    }
    lVar7 = *(longlong *)(lVar1 + 0xd0);
    *(longlong *)(lVar7 + (longlong)iVar5 * 0xc) = *param_2;
    *(char *)(lVar7 + 8 + (longlong)iVar5 * 0xc) = cVar2;
    *(undefined1 *)(lVar1 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 14341b25c FUN_14341b25c body=94 status=ok
// SIG undefined FUN_14341b25c(void)

void FUN_14341b25c(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  
  cVar4 = *(char *)(param_3 + 0x11) + '\x02';
  if (*(char *)(param_3 + 0x12) == '\0') {
    cVar4 = *(char *)(param_3 + 0x11);
  }
  if (cVar4 != '\0') {
    uVar2 = *param_2;
    param_1 = (longlong *)*param_1;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1417ba2a8(param_1,iVar1);
    }
    lVar3 = *param_1;
    *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = uVar2;
    *(char *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = cVar4;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 14341b2ba FUN_14341b2ba body=5363 status=ok
// SIG undefined FUN_14341b2ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14341b2ba(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  char *local_98;
  int local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined **local_78;
  code *local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  local_78 = &PTR_LAB_149f36510;
  local_70 = FUN_14147eb06;
  local_98 = &DAT_145a5efaa;
  FUN_141293f6e(&DAT_14cace048,4,&local_98);
  local_b8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cace050,L"AudioThread.EnableAudioThreadWait",&DAT_14c761328,
                L"Enables waiting on the audio thread to finish its commands.\n0: Not Enabled, 1: Enabled"
               );
  atexit(FUN_14340c434);
  local_b8._0_4_ = 0;
  FUN_141471170(&DAT_14cace068,L"au.3dVisualize.Enabled",&DAT_14cace078,
                L"Whether or not audio visualization is enabled. \n0: Not Enabled, 1: Enabled");
  atexit(FUN_14340c479);
  local_b8._0_4_ = 0;
  FUN_141471170(&DAT_14cace080,L"au.FlushAudioRenderCommandsOnSuspend",&DAT_14cace090,
                L"When set to 1, ensures that we pump through all pending commands to the audio thread and audio render thread on app suspension.\n0: Not Disabled, 1: Disabled"
               );
  atexit(FUN_14340c4be);
  local_b8._0_4_ = 0;
  FUN_141471170(&DAT_14cace098,L"au.NeverMuteNonRealtimeAudioDevices",&DAT_14cace0a8,
                L"When set to 1, nonrealtime audio devices will be exempt from normal audio device muting (for example, when a window goes out of focus.\n0: Not Disabled, 1: Disabled"
               );
  atexit(FUN_14340c503);
  local_98 = (char *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_149e062c0;
  *(code **)(local_98 + 0x18) = FUN_143418f2e;
  local_b8 = (char **)((ulonglong)local_b8._4_4_ << 0x20);
  FUN_14152bcb8(&DAT_14cace0b0,L"au.ReportAudioDevices",
                L"This will log any active audio devices (instances of the audio engine) alive right now."
                ,&local_98);
  if (local_90 == 0) {
LAB_14341b4af:
    if (local_98 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_14341b4af;
  }
  atexit(FUN_14340c548);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14caced90);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14caced90,4000);
  DAT_14cacedb8 = 0;
  _DAT_14cacedc0 = 0;
  _DAT_14cacedc8 = 2;
  atexit(FUN_14340ddeb);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cacedd0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cacedd0,4000);
  DAT_14cacedf8 = 0;
  _DAT_14cacee00 = 0;
  _DAT_14cacee08 = 2;
  atexit(FUN_14340de26);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = (char **)0x1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7ed760);
  FUN_140056680(&DAT_14cace100,&DAT_149dfb77a);
  atexit((_func_5014 *)&LAB_14340e286);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_141707242(&DAT_14cace110,L"au.DefaultModulationPlugin",&DAT_14cace100,
                L"Name of default modulation plugin to load and use (overridden by platform-specific implementation name in config.\n"
               );
  atexit(FUN_14340e297);
  ppuStack_b0 = &PTR_FUN_14a7eee40;
  uStack_a8 = 4;
  local_b8 = (char **)0x3;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7eef40,1,&PTR_FUN_14a7eeec0);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cace208,L"au.SpoofFailedStreamChunkLoad",&DAT_14cace218,
                L"Forces failing to load streamed chunks.\n0: Not Enabled, 1: Enabled");
  atexit(FUN_14340e3c9);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cace220,L"au.MaxConcurrentStreams",&DAT_14cace230,
                L"Overrides the max concurrent streams.\n0: Not Overridden, >0 Overridden");
  atexit(FUN_14340e40e);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cace238,L"au.streamcaching.MaxCachesToDisplay",&DAT_14c76132c,
                L"Sets the max amount of stream chunks to display on screen.\nn: Number of elements to display on screen."
               );
  atexit(FUN_14340e453);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cace248,L"au.streamcaching.KeepCacheMissBufferOnFlush",&DAT_14c761330,
                L"If set to 1, this will maintain the buffer of recorded cache misses after calling AudioMemReport. Otherwise, calling audiomemreport will flush all previous recorded cache misses.\n1: All cache misses from the whole session will show up in audiomemreport. 0: Only cache misses since the previous call to audiomemreport will show up in the current audiomemreport."
               );
  atexit(FUN_14340e498);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cace258,L"au.streamcaching.ForceBlockForLoad",&DAT_14cace268,
                L"When set to a nonzero value, blocks GetLoadedChunk until the disk read is complete.\n"
               );
  atexit(FUN_14340e4dd);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cace270,L"au.streamcaching.TrimCacheWhenOverBudget",&DAT_14c761334,
                L"When set to a nonzero value, TrimMemory will be called in AddOrTouchChunk to ensure we never go over budget.\n"
               );
  atexit(FUN_14340e522);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cace280,L"au.streamcaching.AlwaysLogCacheMisses",&DAT_14cace290,
                L"When set to a nonzero value, all cache misses will be added to the audiomemreport.\n0: Don\'t log cache misses until au.streamcaching.StartProfiling is called. 1: Always log cache misses."
               );
  atexit(FUN_14340e567);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cace298,L"au.streamcaching.ReadRequestPriority",&DAT_14c761338,
                L"This cvar sets the default request priority for audio chunks when Stream Caching is turned on.\n0: High, 1: Normal, 2: Below Normal, 3: Low, 4: Min"
               );
  atexit(FUN_14340e5ac);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cace2a8,L"au.streamcaching.PlaybackRequestPriority",&DAT_14cace2b8,
                L"This cvar sets the default request priority for audio chunks that are about to play back, but aren\'t in the cache.\n0: High, 1: Normal, 2: Below Normal, 3: Low, 4: Min"
               );
  atexit(FUN_14340e5f1);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cace2c0,L"au.streamcaching.BlockForPendingLoadOnCacheOverflow",&DAT_14cace2d0
                ,
                L"This cvar sets the default request priority for audio chunks that are about to play back, but aren\'t in the cache.\n0: When we blow the cache we clear any soundwave retainers. 1:When we blow the cache we attempt to cancel a load in flight."
               );
  atexit(FUN_14340e636);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cace2d8,L"au.streamcaching.NumSoundWavesToClearOnCacheOverflow",
                &DAT_14cace2e8,
                L"When set > 0, we will attempt to release retainers for only that many sounds every time we have a cache overflow.\n0: reset all retained sounds on cache overflow, >0: evict this many sounds on any cache overflow."
               );
  atexit(FUN_14340e67b);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cace2f0,L"au.streamcaching.EnableTrimmingRetainedAudio",&DAT_14c76133c,
                L"When set > 0, we will trim retained audio when the stream cache goes over the memory limit.\n0: never trims retained audio, >0: will trim retained audio."
               );
  atexit(FUN_14340e6c0);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cace300,L"au.streamcaching.MemoryLimitTrimPercentage",&DAT_14c761340,
                L"When set > 0.0, we will trim percentage of memory cache audio per trim call audio when the stream cache goes over the memory limit.\n0.0: trims only the amount needed to allocate a single chunk, >0: that percentage of memory limit."
               );
  atexit(FUN_14340e705);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cace310,L"au.streamcaching.StreamCacheSizeOverrideMB",&DAT_14cace320,
                L"This cvar can be set to override the size of the cache.\n0: use cache size from project settings. n: the new cache size in megabytes."
               );
  atexit(FUN_14340e74a);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cace328,L"au.streamcaching.SaveAudiomemReportOnCacheOverflow",&DAT_14cace338,
                L"When set to one, we print an audiomemreport when the cache has overflown.\n0: Disabled, 1: Enabled"
               );
  atexit(FUN_14340e78f);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cace340,L"au.streamcaching.DebugView",&DAT_14c761344,
                L"Controls Drawing the Debug Display for the Stream Cache.\n0: Legacy, 1: Default, 2: Averaged View, 3: High Detail View"
               );
  atexit(FUN_14340e7d4);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cace350,L"au.streamcaching.SearchUsingChunkArray",&DAT_14c761348,
                L"If performing an exhaustive search of the cache, use the chunk array instead of the LRU (we give up knowing how far down the cache an element was).\n0: Search using LRU (linked list). 1: Search using Chunk Pool (TArray)"
               );
  atexit(FUN_14340e819);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cace360,L"au.streamcaching.EnableExhaustiveCacheSearches",&DAT_14cace370,
                L"Enables an exhaustive search of the cache in FindElementForKey.\n0: Rely on chunk offset. 1: Search using linear search"
               );
  atexit(FUN_14340e85e);
  local_98 = (char *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_149e062c0;
  *(code **)(local_98 + 0x18) = FUN_1434191a0;
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_14152bcb8(&DAT_14cace378,L"au.streamcaching.FlushAudioCache",
                L"This will flush any non retained audio from the cache when Stream Caching is enabled."
                ,&local_98);
  if (local_90 == 0) {
LAB_14341ba3a:
    if (local_98 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_14341ba3a;
  }
  atexit(FUN_14340e8a3);
  local_98 = (char *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_149e00260;
  *(code **)(local_98 + 0x18) = FUN_1434191c8;
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_1415c7246(&DAT_14cace388,L"au.streamcaching.ResizeAudioCacheTo",
                L"This will try to cull enough audio chunks to shrink the audio stream cache to the new size if neccessary, and keep the cache at that size."
                ,&local_98);
  if (local_90 == 0) {
LAB_14341bb26:
    if (local_98 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_14341bb26;
  }
  atexit(FUN_14340e8e8);
  local_98 = (char *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_149e062c0;
  *(code **)(local_98 + 0x18) = FUN_143419362;
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_14152bcb8(&DAT_14cace398,L"au.streamcaching.StartProfiling",
                L"This will start a performance-intensive profiling mode for this streaming manager. Profile stats can be output with audiomemreport."
                ,&local_98);
  if (local_90 == 0) {
LAB_14341bc04:
    if (local_98 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_14341bc04;
  }
  atexit(FUN_14340e92d);
  local_98 = (char *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_149e062c0;
  *(code **)(local_98 + 0x18) = FUN_143419382;
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_14152bcb8(&DAT_14cace3a8,L"au.streamcaching.StopProfiling",
                L"This will start a performance-intensive profiling mode for this streaming manager. Profile stats can be output with audiomemreport."
                ,&local_98);
  if (local_90 == 0) {
LAB_14341bce2:
    if (local_98 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_14341bce2;
  }
  atexit(FUN_14340e972);
  ppuStack_b0 = (undefined **)((ulonglong)ppuStack_b0 & 0xffffffff00000000);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_1412c7f16(&DAT_14cace3c0,L"TaskGraph.TaskPriorities.ClearAudioChunkCacheReadRequest",
                L"Task and thread priority for an async task that clears FCacheElement::ReadRequest"
                ,0x800);
  atexit(FUN_14340fe84);
  _DAT_14cace430 = 0x3f80000000000000;
  uRam000000014cace438 = 0x3f80000000000000;
  _DAT_14cace410 = 0;
  uRam000000014cace418 = 0x3f80000000000000;
  _DAT_14cace400 = 0x3f800000;
  uRam000000014cace408 = 0x3f80000000000000;
  _DAT_14cace420 = 0x3f000000;
  uRam000000014cace424 = 0x3f000000;
  uRam000000014cace428 = 0x3f000000;
  uRam000000014cace42c = 0x3f800000;
  local_b8._0_4_ = 1;
  FUN_141471170(&DAT_14cace440,L"AudioThread.SuspendAudioThread",&DAT_14cace450,
                L"0=Resume, 1=Suspend");
  atexit(FUN_143412592);
  local_b8._0_4_ = 0;
  FUN_141471170(&DAT_14cace458,L"AudioThread.AboveNormalPriority",&DAT_14cace468,
                L"0=Normal, 1=AboveNormal");
  atexit(FUN_1434125d7);
  local_b8._0_4_ = 0;
  FUN_141471170(&DAT_14cace470,L"AudioThread.EnableAudioCommandLogging",&DAT_14cace480,
                L"0=Disbaled, 1=Enabled");
  atexit(FUN_14341261c);
  local_b8._0_4_ = 0;
  FUN_141471170(&DAT_14cace488,L"AudioThread.EnableBatchProcessing",&DAT_14c76134c,
                L"Enables batch processing audio thread commands.\n0: Not Enabled, 1: Enabled");
  atexit(FUN_143412661);
  local_b8._0_4_ = 0;
  FUN_141471170(&DAT_14cace498,L"AudioThread.BatchAsyncBatchSize",&DAT_14c761350,
                L"When AudioThread.EnableBatchProcessing = 1, controls the number of audio commands grouped together for threading."
               );
  atexit(FUN_1434126a6);
  local_b8 = (char **)((ulonglong)local_b8._4_4_ << 0x20);
  FUN_141471170(&DAT_14cace4a8,L"AudioCommand.FenceWaitTimeMs",&DAT_14c761354,
                L"Sets number of ms for fence wait");
  atexit(FUN_1434126eb);
  _DAT_14cace4b8 = 0x800000014a7f2060;
  local_98 = (char *)CONCAT44(local_98._4_4_,0x1c);
  _DAT_14cace4c0 = FUN_145af9a78("FGameThreadAudioCommandQueue",&local_98);
  DAT_14cace4c4 = 0;
  FUN_1463adfc8();
  atexit(FUN_143412730);
  local_98 = (char *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_149e17030;
  *(code **)(local_98 + 0x18) = FUN_1479776c7;
  ppuStack_b0 = (undefined **)((ulonglong)ppuStack_b0 & 0xffffffff00000000);
  local_b8 = &local_98;
  FUN_14171ec12(&DAT_14cace518,L"AudioThread.BatchCommands",&DAT_14c761358,
                L"Batch audio commands that are created from the audio thread and executed on the game thread so that they are executed in a single task."
               );
  if (local_90 == 0) {
LAB_14341bfae:
    if (local_98 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_14341bfae;
  }
  atexit(FUN_143412967);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cace528,L"AudioThread.UseSafeRunCommandOnGameThread",&DAT_14c761359,
                L"When active, limit commands sent to the game thread to run at a safe place inside a tick"
               );
  atexit(FUN_1434129ac);
  local_98 = (char *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_149e00260;
  *(undefined **)(local_98 + 0x18) = &DAT_1434129f1;
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_1415c7246(&DAT_14cace538,L"AudioThread.TaskPriority",
                L"Takes a single parameter of value `High`, `Normal`, `BackgroundHigh`, `BackgroundNormal` or `BackgroundLow`."
                ,&local_98);
  if (local_90 == 0) {
LAB_14341c0bb:
    if (local_98 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_14341c0bb;
  }
  atexit(FUN_143412a19);
  local_98 = (char *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_149e062c0;
  *(undefined1 **)(local_98 + 0x18) = &LAB_143412a5e;
  FUN_141253d16(&DAT_14cace548,&local_98);
  if (local_90 != 0) {
    if (local_98 == (char *)0x0) goto LAB_14341c191;
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
  }
  if (local_98 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_14341c191:
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cace568);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cace568,4000);
  atexit((_func_5014 *)&LAB_143412a9f);
  DAT_14cace598 = 0;
  atexit(FUN_143412aad);
  DAT_14cace5a8 = 0;
  _DAT_14cace5b0 = 0;
  DAT_14cace5b8 = 0;
  atexit((_func_5014 *)&LAB_143412cb5);
  DAT_14cace5c0 = 0;
  DAT_14cace5c8 = 0;
  DAT_14cace5d0 = 0;
  DAT_14cace5d8 = 0;
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cace5e0,L"au.VirtualLoops.Enabled",&DAT_14c76135c,
                L"Enables or disables whether virtualizing is supported for audio loops.\n");
  atexit(FUN_1434135b8);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cace5f0,L"au.VirtualLoops.PerfDistance",&DAT_14c761360,
                L"Sets virtual loop distance to scale update rate between min and max beyond max audible distance of sound.\n"
               );
  atexit(FUN_1434135fd);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cace600,L"au.VirtualLoops.ForceUpdateListenerMoveDistance",&DAT_14c761364,
                L"Sets distance threshold required to force an update on virtualized sounds to check for if listener moves in a single frame over the given distance.\n"
               );
  atexit(FUN_143413642);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cace610,L"au.VirtualLoops.UpdateRate.Min",&DAT_14c761368,
                L"Sets minimum rate to check if sound becomes audible again at sound\'s max audible distance.\n"
               );
  atexit(FUN_143413687);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cace620,L"au.VirtualLoops.UpdateRate.Max",&DAT_14c76136c,
                L"Sets maximum rate to check if sound becomes audible again (at beyond sound\'s max audible distance + perf scaling distance).\n"
               );
  atexit(FUN_1434136cc);
  ppuStack_b0 = &PTR_FUN_14a7f41a0;
  uStack_a8 = 1;
  local_b8 = (char **)0x3;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7f4240,1,&PTR_FUN_14a7f41c0);
  FUN_1446f470e(&DAT_14cace6f0,L"GetActorSoundParams",1);
  uStack_a8 = 0;
  local_b8 = (char **)0x0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7f46e0,1,0);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cace720,&DAT_14a7f47de,&DAT_14cace718,
                L"When true, allows the interface to search for attached components and actors that implement the interface."
               );
  atexit(FUN_143413c36);
  local_98 = "AssetRegistry";
  local_90 = 0xd;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cace730 = (ulonglong)uVar3;
  uStack_a8 = 0;
  local_b8 = (char **)0x0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7f4b90,1,0);
  uStack_a8 = 0;
  local_b8 = (char **)0x0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7f60a0,2,0);
  local_98 = "SoundParameterControllerInterface";
  local_90 = 0x21;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cace7d0 = (ulonglong)uVar3;
  FUN_1400b22c2(&local_98,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_98,&DAT_14cace7d8);
  if (cVar2 == '\0') {
    _DAT_14cace7d8 = 0;
    uRam000000014cace7e0 = 0;
  }
  if (local_98 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14caced70 = 0xffffffff;
  _DAT_14caced74 = 0x105;
  DAT_14caced76 = 0;
  DAT_14caced78 = 0;
  DAT_14caced68 = &PTR_FUN_14a7fec50;
  FUN_1463afbde();
  atexit(FUN_14341445e);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cace7e8,L"Canvas.DistanceFieldSmoothness",&DAT_14c761370,
                L"Global sharpness of distance field fonts/shapes rendered by canvas.");
  atexit(FUN_14341448d);
  uStack_a8 = 0;
  local_b8 = (char **)0x0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7f69a0,1,0);
  FUN_1446f470e(&DAT_14cace838,L"InvisibleWall",1);
  uStack_a8 = 0;
  local_b8 = (char **)0x0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7f6d60,1,0);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = (char **)0x8;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7f81a0,1,&PTR_FUN_14a7f8060);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cace930,L"bp.NativePropertyInitFastPathDisabled",&DAT_14cace940,
                L"Disable the native property initialization fast path.");
  atexit(FUN_1434160e7);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cace948,L"bp.ComponentInstancingFastPathDisabled",&DAT_14cace958,
                L"Disable the Blueprint component instancing fast path.");
  atexit(FUN_14341612c);
  uStack_a8 = 1;
  ppuStack_b0 = &PTR_FUN_14a7f9260;
  local_b8 = (char **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7f9280,1,0);
  uStack_a8 = 0;
  local_b8 = (char **)0x0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7faa40,1,0);
  uStack_a8 = 0;
  local_b8 = (char **)0x0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7fc2b0,1,0);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = (char **)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7fc850,1,&PTR_FUN_14a7fc820);
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14341c7b5 FUN_14341c7b5 body=69 status=ok
// SIG undefined FUN_14341c7b5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14341c7b5(void)

{
  _DAT_14cacef50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014341c7f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacef58,1);
  return;
}



// FUNCTION 14341c7fa FUN_14341c7fa body=69 status=ok
// SIG undefined FUN_14341c7fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14341c7fa(void)

{
  _DAT_14cacef68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014341c83c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacef70,1);
  return;
}



// FUNCTION 14341c83f FUN_14341c83f body=55 status=ok
// SIG undefined FUN_14341c83f(void)

void FUN_14341c83f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacf0f8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacf0f8 = FUN_14171c317(FUN_1463b05f4,uVar1,L"EInterfaceValidResult");
  }
  return;
}



// FUNCTION 14341c879 FUN_14341c879 body=69 status=ok
// SIG undefined FUN_14341c879(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14341c879(void)

{
  _DAT_14cacf1f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014341c8bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacf1f8,1);
  return;
}



// FUNCTION 14341c8be FUN_14341c8be body=69 status=ok
// SIG undefined FUN_14341c8be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14341c8be(void)

{
  _DAT_14cacf208 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014341c900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacf210,1);
  return;
}



// FUNCTION 14341c903 FUN_14341c903 body=69 status=ok
// SIG undefined FUN_14341c903(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14341c903(void)

{
  _DAT_14cacf220 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014341c945. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacf228,1);
  return;
}



// FUNCTION 14341c948 FUN_14341c948 body=69 status=ok
// SIG undefined FUN_14341c948(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14341c948(void)

{
  _DAT_14cacf238 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014341c98a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacf240,1);
  return;
}



// FUNCTION 14341c98d FUN_14341c98d body=69 status=ok
// SIG undefined FUN_14341c98d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14341c98d(void)

{
  _DAT_14cacf250 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014341c9cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacf258,1);
  return;
}



// FUNCTION 14341c9d2 FUN_14341c9d2 body=594 status=ok
// SIG undefined FUN_14341c9d2(void)

undefined8 FUN_14341c9d2(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  byte bVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  
  FUN_140079348();
  if ((0.0 < *(float *)(param_1 + 0x40)) &&
     (iVar13 = *(int *)(param_1 + 0x50), 0 < (longlong)iVar13)) {
    plVar1 = (longlong *)(param_1 + 0x48);
    lVar11 = *plVar1;
    lVar10 = 0;
    do {
      lVar6 = *(longlong *)(lVar11 + lVar10);
      if (lVar6 != 0) {
        fVar15 = *(float *)(param_1 + 0x40);
        iVar2 = *(int *)(lVar11 + 0xc + lVar10);
        if (((((iVar2 != 0) && (uVar5 = *(uint *)(lVar11 + 8 + lVar10), -1 < (int)uVar5)) &&
             ((int)uVar5 < DAT_14c9647dc)) &&
            ((puVar9 = (undefined8 *)
                       ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
             puVar9 != (undefined8 *)0x0 && (*(int *)(puVar9 + 2) == iVar2)))) &&
           ((*(uint *)(puVar9 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(puVar9 + 1) & 0x10200000) == 0) {
            uVar7 = *puVar9;
          }
          else {
            uVar7 = 0;
          }
          fVar14 = (float)FUN_1479904aa(uVar7,param_3);
          fVar15 = fVar15 * fVar14;
          lVar6 = *(longlong *)(lVar11 + lVar10);
        }
        FUN_14341cc24(lVar6,param_2,fVar15,param_3);
      }
      lVar10 = lVar10 + 0x18;
    } while ((longlong)iVar13 * 0x18 != lVar10);
    uVar12 = (ulonglong)*(int *)(param_1 + 0x50);
    if (0 < (longlong)uVar12) {
      iVar13 = -*(int *)(param_1 + 0x50);
      lVar11 = uVar12 * 0x18;
      do {
        lVar10 = *plVar1;
        lVar6 = *(longlong *)(lVar10 + -0x18 + lVar11);
        if ((DAT_14c950c29 == '\x01') && (lVar6 != 0)) {
          FUN_1456cec3c(lVar6);
          bVar8 = *(byte *)(lVar10 + -8 + lVar11);
LAB_14341cb01:
          if (*(longlong **)(lVar6 + 0x30) == (longlong *)0x0) {
LAB_14341cb9f:
            *(undefined1 *)(lVar6 + 0xd0) = 0;
            bVar3 = false;
            goto LAB_14341cba9;
          }
          uVar5 = *(uint *)(lVar10 + -0x10 + lVar11);
          iVar2 = *(int *)(lVar10 + -0xc + lVar11);
          cVar4 = (**(code **)(**(longlong **)(lVar6 + 0x30) + 0x2c0))();
          if ((cVar4 != '\0') ||
             ((iVar2 != 0 &&
              (((((int)uVar5 < 0 || (DAT_14c9647dc <= (int)uVar5)) ||
                (lVar10 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar10 == 0
                )) || ((*(int *)(lVar10 + 0x10) != iVar2 ||
                       ((*(uint *)(lVar10 + 8) & 0x10200000) != 0)))))))) {
            if (*(longlong **)(lVar6 + 0x30) != (longlong *)0x0) {
              (**(code **)(**(longlong **)(lVar6 + 0x30) + 0x2d0))();
            }
            goto LAB_14341cb9f;
          }
        }
        else {
          bVar8 = *(byte *)(lVar10 + -8 + lVar11);
          if (lVar6 != 0) goto LAB_14341cb01;
          bVar3 = true;
LAB_14341cba9:
          uVar5 = *(uint *)(param_1 + 0x50);
          if (uVar12 != uVar5) {
            memmove((void *)(*(longlong *)(param_1 + 0x48) + lVar11 + -0x18),
                    (void *)(*(longlong *)(param_1 + 0x48) + lVar11),
                    (longlong)(int)(uVar5 + iVar13) * 0x18);
            uVar5 = *(uint *)(param_1 + 0x50);
          }
          *(uint *)(param_1 + 0x50) = uVar5 - 1;
          FUN_1479ae3ac(plVar1);
          if ((!bVar3) && ((bVar8 & 1) == 0)) {
            FUN_147990830(param_1,lVar6);
          }
        }
        iVar13 = iVar13 + 1;
        lVar11 = lVar11 + -0x18;
        bVar3 = 1 < uVar12;
        uVar12 = uVar12 - 1;
      } while (bVar3);
    }
  }
  return 0;
}


