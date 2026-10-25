// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147fc10ec FUN_147fc10ec body=137 status=ok
// SIG undefined FUN_147fc10ec(void)

void FUN_147fc10ec(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x180))(param_1 + -0x28);
  if (((lVar1 == 0) || (lVar1 = FUN_147fc22a4(lVar1), lVar1 == 0)) ||
     (lVar1 = FUN_147fc1176(lVar1), lVar1 == 0)) {
    FUN_1446f470e(&local_18,L"StandaloneCameraAnimationLinker",1);
    uVar2 = FUN_1409ffe1d();
    FUN_147fc230c(uVar2,local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fc1176 FUN_147fc1176 body=309 status=ok
// SIG undefined FUN_147fc1176(void)

longlong FUN_147fc1176(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + 0x30);
  if (lVar4 != 0) goto LAB_147fc1195;
  FUN_1446f470e(&local_28,L"CameraAnimationSequenceSubsystemLinker",1);
  lVar4 = FUN_147fc230c(param_1,local_28);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar4);
  }
  *(longlong *)(param_1 + 0x30) = lVar4;
  FUN_1432d437c(lVar4,&local_38);
  plVar1 = local_30;
  if (local_30 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = local_38;
    plVar5 = *(longlong **)(param_1 + 0x40);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x40) = 0;
LAB_147fc1246:
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x000147fc1271:
        if (iVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x38) = local_38;
    plVar5 = *(longlong **)(param_1 + 0x40);
    if (local_30 == plVar5) {
      LOCK();
      plVar5 = local_30 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar5 = plVar1;
        goto joined_r0x000147fc1271;
      }
    }
    else {
      *(longlong **)(param_1 + 0x40) = local_30;
      if (plVar5 != (longlong *)0x0) goto LAB_147fc1246;
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
LAB_147fc1195:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc12b4 FUN_147fc12b4 body=74 status=ok
// SIG undefined FUN_147fc12b4(void)

void FUN_147fc12b4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong in_stack_00000030;
  
  lVar2 = *(longlong *)(param_1 + 0x260);
  if (lVar2 != 0) {
    iVar1 = *(int *)(in_stack_00000030 + 0x10);
    *(uint *)(in_stack_00000030 + 0x10) = iVar1 + 1U;
    if (*(uint *)(in_stack_00000030 + 0x14) < iVar1 + 1U) {
      FUN_14571f162(in_stack_00000030,iVar1);
    }
    lVar3 = *(longlong *)(in_stack_00000030 + 8);
    if (*(longlong *)(in_stack_00000030 + 8) == 0) {
      lVar3 = in_stack_00000030;
    }
    *(longlong *)(lVar3 + (longlong)iVar1 * 8) = lVar2;
  }
  return;
}



// FUNCTION 147fc12fe FUN_147fc12fe body=65 status=ok
// SIG undefined FUN_147fc12fe(void)

void FUN_147fc12fe(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  *(longlong *)(param_1 + 0x288) = param_2;
  FUN_14485c47a(param_1 + 0x280,param_2);
  return;
}



// FUNCTION 147fc1340 FUN_147fc1340 body=877 status=ok
// SIG undefined FUN_147fc1340(void)

void FUN_147fc1340(longlong *param_1,longlong *param_2,int param_3,float param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  float fVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined4 local_60;
  int local_58;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[0x52] != 0) {
    FUN_147fc16ae(param_1);
    lVar5 = FUN_1475542ea(param_1 + 0x53);
    if (lVar5 != 0) {
      FUN_140457ffc(lVar5 + 0x6a0,param_1);
    }
  }
  if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  param_1[0x52] = (longlong)param_2;
  lVar5 = (**(code **)(*param_2 + 0x2e8))(param_2);
  if (lVar5 == 0) {
    *(undefined1 *)((longlong)param_1 + 0x327) = 0;
    param_1[0x62] = 0;
    param_1[99] = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    iVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar5 + 0x118);
    uVar2 = *(undefined8 *)(lVar5 + 0x120);
    FUN_1432dae44(param_1 + 0x57,uVar2,uVar1,*(undefined1 *)(lVar5 + 0x128));
    uVar3 = *(undefined8 *)(lVar5 + 0x110);
    FUN_144a808d5(&local_68,
                  (int)((ulonglong)*(undefined8 *)(lVar5 + 0x108) >> 0x20) +
                  *(int *)(&DAT_14a46e5f8 +
                          (ulonglong)((char)*(undefined8 *)(lVar5 + 0x108) == '\0') * 4),uVar1,uVar2
                 );
    FUN_144a808d5(&local_58,
                  (int)((ulonglong)uVar3 >> 0x20) +
                  *(int *)(&DAT_14a46e600 + (ulonglong)((char)uVar3 == '\x01') * 4),uVar1,uVar2);
    iVar4 = 0;
    if (0 < param_3) {
      iVar4 = param_3;
    }
    iVar4 = iVar4 + (int)local_68;
    *(int *)(param_1 + 0x62) = iVar4;
    auVar8 = roundps(ZEXT416((uint)local_54),ZEXT416((uint)local_54),1);
    fVar9 = (local_54 - auVar8._0_4_) + 0.5 + -0.5;
    iVar6 = (local_58 - iVar4) + (int)auVar8._0_4_;
    if (0.99999994 <= fVar9) {
      fVar9 = 0.99999994;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    *(int *)((longlong)param_1 + 0x314) = iVar6;
    *(float *)(param_1 + 99) = fVar9;
    *(int *)((longlong)param_1 + 0x31c) = iVar6;
    *(float *)(param_1 + 100) = fVar9;
    *(undefined1 *)((longlong)param_1 + 0x327) = 0;
    if (0.0 < param_4) {
      dVar10 = ((double)(int)uVar2 * (double)param_4) / (double)(int)((ulonglong)uVar2 >> 0x20);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = dVar10;
      auVar8 = roundpd(auVar8,auVar8,1);
      dVar11 = auVar8._0_8_;
      dVar10 = dVar10 - dVar11;
      if (2147483647.0 <= dVar11) {
        dVar11 = 2147483647.0;
      }
      if (dVar11 <= -2147483648.0) {
        dVar11 = -2147483648.0;
      }
      iVar6 = (int)dVar10;
      fVar12 = (float)dVar10 - (float)iVar6;
      iVar6 = (int)dVar11 + iVar6;
      fVar9 = fVar12;
      if (0.99999994 <= fVar12) {
        fVar9 = 0.99999994;
      }
      fVar9 = (float)(~-(uint)(0.0 < fVar12) & (uint)fVar12 | (uint)fVar9 & -(uint)(0.0 < fVar12)) +
              0.5 + -0.5;
      if (0.99999994 <= fVar9) {
        fVar9 = 0.99999994;
      }
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      iVar7 = (int)*(undefined8 *)((longlong)param_1 + 0x314);
      if ((iVar7 < iVar6) ||
         ((iVar6 == iVar7 &&
          ((float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x314) >> 0x20) < fVar9)))) {
        *(int *)((longlong)param_1 + 0x31c) = iVar6;
        *(float *)(param_1 + 100) = fVar9;
        *(undefined1 *)((longlong)param_1 + 0x327) = 1;
      }
      else {
        *(int *)((longlong)param_1 + 0x314) = iVar6;
        *(float *)(param_1 + 99) = fVar9;
      }
    }
  }
  FUN_141402f90(param_1 + 0x57,iVar4);
  *(undefined2 *)((longlong)param_1 + 0x324) = 0;
  lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar5 != 0) {
    FUN_147fc22a4(lVar5);
  }
  FUN_140b556ce(param_1 + 0x53,param_1[0x52],param_1 + 5,0);
  lVar5 = FUN_1475542ea(param_1 + 0x53);
  if (lVar5 != 0) {
    local_68 = &LAB_147fc185c;
    local_60 = 0;
    FUN_147fc1780(lVar5 + 0x6a0,&local_58,param_1);
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fc16ae FUN_147fc16ae body=209 status=ok
// SIG undefined FUN_147fc16ae(void)

void FUN_147fc16ae(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x328) != '\0') {
    *(undefined1 *)(param_1 + 0x328) = 0;
    FUN_141402f90(param_1 + 0x2b8,*(undefined4 *)(param_1 + 0x310));
    FUN_14179e79c(param_1 + 0x298,&local_30);
    lVar3 = local_30;
    if (local_30 != 0) {
      FUN_1432dad1c(param_1 + 0x298,&local_34);
      cVar4 = FUN_14179d8a8(lVar3,local_34);
      if (cVar4 != '\0') {
        FUN_14029f298(local_30,0,0);
      }
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)local_28 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc1780 FUN_147fc1780 body=218 status=ok
// SIG undefined FUN_147fc1780(void)

undefined8
FUN_147fc1780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14a4d7700;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14ad04700;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1409960cc(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc1868 FUN_147fc1868 body=12 status=ok
// SIG undefined FUN_147fc1868(void)

void FUN_147fc1868(longlong param_1)

{
  FUN_1432dadb8(param_1 + 0x298);
  return;
}



// FUNCTION 147fc1874 FUN_147fc1874 body=124 status=ok
// SIG undefined FUN_147fc1874(void)

void FUN_147fc1874(longlong param_1,undefined1 param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (param_3 != '\0') {
    iVar1 = *(int *)(param_1 + 0x314);
    if (iVar1 < 1) {
      iVar4 = 0;
    }
    else {
      uVar2 = rand();
      iVar3 = (int)((float)iVar1 * ((float)(uVar2 & 0x7fff) / 32767.0));
      iVar4 = iVar1 + -1;
      if (iVar3 < iVar1 + -1) {
        iVar4 = iVar3;
      }
    }
    FUN_141402f90(param_1 + 0x2b8,iVar4 + *(int *)(param_1 + 0x310));
  }
  *(undefined1 *)(param_1 + 0x326) = param_2;
  *(undefined1 *)(param_1 + 0x328) = 1;
  return;
}



// FUNCTION 147fc18f0 FUN_147fc18f0 body=1088 status=ok
// SIG undefined FUN_147fc18f0(void)

void FUN_147fc18f0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  float fVar12;
  double dVar13;
  undefined1 auVar14 [16];
  float fVar15;
  double dVar16;
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auStack_178 [44];
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_100 [40];
  uint local_d8;
  undefined8 local_d4;
  byte local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong *local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_178;
  fVar18 = (float)(param_2 >> 0x20);
  if ((*(char *)(param_1 + 0x326) != '\0') || (bVar8 = *(byte *)(param_1 + 0x327), bVar8 == 1)) {
    do {
      uVar6 = *(undefined8 *)(param_1 + 0x314);
      fVar12 = (float)((ulonglong)uVar6 >> 0x20);
      fVar15 = fVar12 + 0.0;
      iVar7 = ((int)ROUND(fVar15 + fVar15 + -0.5) >> 1) + *(int *)(param_1 + 0x310) + (int)uVar6;
      iVar9 = (int)param_2;
      if (iVar9 <= iVar7) {
        auVar17 = roundss(ZEXT416(0),ZEXT416((uint)fVar15),9);
        fVar15 = (fVar15 - auVar17._0_4_) + 0.5 + -0.5;
        if (0.99999994 <= fVar15) {
          fVar15 = 0.99999994;
        }
        if (iVar9 != iVar7) goto LAB_147fc1a1c;
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
        if (fVar18 < fVar15) goto LAB_147fc1a1c;
      }
      fVar18 = fVar18 - fVar12;
      auVar17 = roundps(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18),1);
      param_2 = (ulonglong)(uint)((iVar9 - (int)uVar6) + (int)auVar17._0_4_);
      fVar18 = fVar18 - auVar17._0_4_;
      FUN_141402f90(param_1 + 0x2b8);
      *(short *)(param_1 + 0x324) = *(short *)(param_1 + 0x324) + 1;
    } while( true );
  }
  uVar6 = *(undefined8 *)(param_1 + 0x314);
  fVar12 = (float)((ulonglong)uVar6 >> 0x20) + 0.0;
  uVar10 = *(int *)(param_1 + 0x310) + (int)uVar6 + ((int)ROUND(fVar12 + fVar12 + -0.5) >> 1);
  uVar11 = (ulonglong)uVar10;
  auVar17 = roundss(ZEXT416(0),ZEXT416((uint)fVar12),9);
  fVar12 = (fVar12 - auVar17._0_4_) + 0.5 + -0.5;
  if ((int)uVar10 < (int)(uint)param_2) {
LAB_147fc1ceb:
    if (0.99999994 <= fVar12) {
      fVar12 = 0.99999994;
    }
    fVar18 = fVar12;
    if (fVar12 <= 0.0) {
      fVar18 = 0.0;
    }
    bVar4 = true;
    goto LAB_147fc1a26;
  }
  if (uVar10 == (uint)param_2) {
    fVar15 = fVar12;
    if (0.99999994 <= fVar12) {
      fVar15 = 0.99999994;
    }
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    if (fVar15 <= fVar18) goto LAB_147fc1ceb;
  }
LAB_147fc1a24:
  bVar4 = false;
  uVar11 = param_2 & 0xffffffff;
LAB_147fc1a26:
  bVar3 = bVar4;
  if ((bVar8 & 1) != 0) {
    dVar16 = ((double)(float)((ulonglong)uVar6 >> 0x20) + (double)(int)uVar6) *
             (double)*(ushort *)(param_1 + 0x324);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = dVar16;
    auVar17 = roundpd(auVar17,auVar17,1);
    dVar13 = auVar17._0_8_;
    dVar16 = dVar16 - dVar13;
    if (2147483647.0 <= dVar13) {
      dVar13 = 2147483647.0;
    }
    if (dVar13 <= -2147483648.0) {
      dVar13 = -2147483648.0;
    }
    fVar12 = (float)dVar16;
    if (0.99999994 <= fVar12) {
      fVar12 = 0.99999994;
    }
    fVar15 = 0.0;
    if (fVar12 <= 0.0) {
      fVar12 = fVar15;
    }
    auVar14._4_12_ = ZEXT812(0);
    fVar12 = fVar12 + 0.5 + -0.5;
    if (0.99999994 <= fVar12) {
      fVar12 = 0.99999994;
    }
    if (fVar12 <= 0.0) {
      fVar12 = fVar15;
    }
    auVar14._0_4_ = fVar12 + fVar18;
    iVar7 = (int)dVar13 + (int)uVar11 + ((int)ROUND(auVar14._0_4_ + auVar14._0_4_ + -0.5) >> 1);
    iVar9 = (int)*(undefined8 *)(param_1 + 0x31c);
    bVar3 = true;
    if (iVar7 <= iVar9) {
      auVar17 = roundss(ZEXT416(0),auVar14,9);
      fVar12 = (auVar14._0_4_ - auVar17._0_4_) + 0.5 + -0.5;
      if (0.99999994 <= fVar12) {
        fVar12 = 0.99999994;
      }
      if (fVar12 <= 0.0) {
        fVar12 = fVar15;
      }
      bVar3 = (bool)(bVar4 | ((float)((ulonglong)*(undefined8 *)(param_1 + 0x31c) >> 0x20) <= fVar12
                             && iVar7 == iVar9));
    }
  }
  FUN_14179e79c(param_1 + 0x298,&local_a0);
  if (local_a0 != 0) {
    FUN_1432db21e(param_1 + 0x2b8,&local_c8,uVar11 | (ulonglong)(uint)fVar18 << 0x20);
    bVar8 = *(byte *)(param_1 + 0x328);
    local_128 = local_a8;
    local_138 = local_b8;
    uStack_130 = uStack_b0;
    local_148 = local_c8;
    uStack_140 = uStack_c0;
    local_120 = 0x3f800000;
    local_118 = 0;
    local_110 = 0;
    uStack_108 = 0;
    FUN_1432db5de(local_100);
    lVar5 = local_a0;
    local_d8 = (uint)bVar8;
    local_d4 = 0x80000000;
    local_cc = local_cc & 0xc0;
    FUN_1432dad1c(param_1 + 0x298,&local_14c);
    FUN_1404117b8(lVar5,&local_148,local_14c,0);
    FUN_14029f298(local_a0);
    FUN_144adeafa(&local_148);
  }
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_98 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar2 = (int *)((longlong)local_98 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_98 + 0x10))(local_98);
      }
    }
  }
  if (bVar3) {
    FUN_147fc16ae(param_1);
  }
  if ((local_90 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147fc1a1c:
  bVar8 = *(byte *)(param_1 + 0x327);
  goto LAB_147fc1a24;
}



// FUNCTION 147fc1d42 FUN_147fc1d42 body=973 status=ok
// SIG undefined FUN_147fc1d42(void)

void FUN_147fc1d42(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStack_1c8 [32];
  longlong *local_1a8;
  char local_19d;
  int local_19c;
  longlong local_198;
  ulonglong local_190;
  longlong local_188;
  undefined2 local_180;
  undefined2 local_17e;
  undefined1 local_17b;
  undefined4 local_178;
  undefined1 local_174;
  longlong *local_170;
  short *local_168;
  longlong local_160;
  longlong *local_158;
  int local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  int local_130;
  undefined4 local_124;
  longlong local_120;
  longlong *local_118;
  undefined2 local_10a;
  short local_108;
  short local_106;
  undefined1 local_f8 [80];
  longlong local_a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_188 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x548);
  lVar4 = FUN_14009d2a0();
  local_180 = *(undefined2 *)(lVar4 + 0x4e);
  local_17e = *(undefined2 *)(lVar4 + 0x6a);
  local_17b = 0;
  local_178 = 0x6ff;
  local_174 = 0;
  local_10a = *(undefined2 *)(lVar4 + 0x11a);
  FUN_147fc8af4(&local_108);
  local_170 = (longlong *)&local_10a;
  local_168 = &local_108;
  FUN_1447c44f6(local_f8);
  if ((local_108 != -1) && (local_106 != -1)) {
    lVar4 = *(longlong *)(param_1 + 0x28);
    local_19d = *(char *)(lVar4 + 0x298);
    FUN_14150e78a(&local_140,lVar4 + 0x28,local_f8);
    local_19c = *(int *)(lVar4 + 0x38);
    if (local_130 != local_19c) {
      do {
        lVar4 = *(longlong *)(*(longlong *)(local_138 + 0x60) + (longlong)local_130 * 8);
        if (local_19d == '\0') {
          *(undefined4 *)(lVar4 + 0x14) = 0;
          local_198 = lVar4;
        }
        else {
          local_198 = 0;
        }
        if (*(ushort *)(lVar4 + 0xc) != 0) {
          plVar12 = *(longlong **)(lVar4 + 0x28);
          lVar8 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar12 + 0x1e) == local_106) goto LAB_147fc1ecc;
            plVar12 = plVar12 + 4;
            lVar8 = lVar8 + -0x20;
          } while (lVar8 != 0);
        }
        plVar12 = (longlong *)0x0;
LAB_147fc1ecc:
        iVar2 = *(int *)(lVar4 + 0x14);
        if (iVar2 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar12 + 1));
        }
        LOCK();
        *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
        UNLOCK();
        lVar8 = *plVar12;
        if (*(ushort *)(lVar4 + 0xc) != 0) {
          plVar5 = *(longlong **)(lVar4 + 0x28);
          lVar9 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar5 + 0x1e) == local_108) goto LAB_147fc1ef5;
            plVar5 = plVar5 + 4;
            lVar9 = lVar9 + -0x20;
          } while (lVar9 != 0);
        }
        plVar5 = (longlong *)0x0;
LAB_147fc1ef5:
        iVar3 = *(int *)(lVar4 + 0x14);
        if (iVar3 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar5 + 1));
        }
        LOCK();
        *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
        UNLOCK();
        local_160 = *plVar5;
        local_168 = (short *)CONCAT44(local_168._4_4_,iVar3);
        local_190 = (ulonglong)*(ushort *)(lVar4 + 0xe);
        local_170 = plVar5;
        local_158 = plVar12;
        local_150 = iVar2;
        local_148 = lVar8;
        if (local_190 != 0) {
          lVar4 = 0;
          uVar10 = 0;
          do {
            lVar13 = local_148 + lVar4;
            lVar8 = *(longlong *)(local_188 + 8);
            lVar11 = (ulonglong)*(ushort *)(local_160 + uVar10 * 4) * 0x128;
            lVar9 = *(longlong *)(lVar8 + 0x100 + lVar11);
            plVar12 = *(longlong **)(lVar8 + 0x108 + lVar11);
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              UNLOCK();
              LOCK();
              plVar5 = plVar12 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 == 0) {
                (**(code **)*plVar12)(plVar12);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                }
              }
            }
            local_120 = CONCAT44(local_120._4_4_,*(undefined4 *)(lVar8 + lVar11 + 0x110));
            plVar5 = (longlong *)FUN_1400d1226(lVar9,&local_120);
            plVar6 = (longlong *)FUN_1400a16d0(lVar9 + 0x38);
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              UNLOCK();
            }
            local_124 = *(undefined4 *)(lVar8 + lVar11 + 0x110);
            local_120 = lVar9;
            local_118 = plVar12;
            uVar7 = (**(code **)(*plVar5 + 0x2e8))(plVar5);
            local_1a8 = &local_120;
            (**(code **)(*plVar6 + 0x10))(plVar6,lVar13,uVar7,&local_124);
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              plVar5 = plVar12 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 == 0) {
                (**(code **)*plVar12)(plVar12);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                }
              }
            }
            uVar10 = uVar10 + 1;
            lVar4 = lVar4 + 0x10;
          } while (local_190 != uVar10);
        }
        FUN_147fc8bae(&local_170);
        if (local_198 != 0) {
          *(undefined4 *)(local_198 + 0x14) = 1;
        }
        local_130 = FUN_1403b8464(&local_140);
      } while (local_130 != local_19c);
    }
    if (local_140 != 0) {
      if (*(char *)(local_138 + 0x270) == '\0') {
        *(int *)(local_138 + 0x264) = *(int *)(local_138 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_138 + 0x264) = *(int *)(local_138 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fc2110 FUN_147fc2110 body=403 status=ok
// SIG undefined FUN_147fc2110(void)

void FUN_147fc2110(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_138 [32];
  undefined **local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined2 local_100;
  undefined2 local_fe;
  undefined2 local_fc;
  undefined2 local_fa;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined2 *local_90;
  undefined8 *local_88;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar1 = FUN_14009d2a0();
  local_110 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x548);
  local_118 = &PTR_FUN_14ad042a0;
  local_108 = FUN_14009d2a0();
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_b8 = 0;
  local_d8 = 0x10000000000;
  local_b0 = 0x10000000000;
  local_a8 = 0;
  uStack_a0 = 0;
  local_fa = *(undefined2 *)(lVar1 + 100);
  local_88 = &local_f8;
  local_90 = &local_fa;
  lVar2 = FUN_1403b5126(&local_f8,&local_90,2);
  local_fe = *(undefined2 *)(lVar1 + 0x4e);
  local_88 = (undefined8 *)&local_fa;
  local_fc = *(undefined2 *)(lVar1 + 0x11a);
  local_90 = &local_fe;
  FUN_1447c44f6(lVar2,&local_90);
  local_100 = *(undefined2 *)(lVar1 + 0x11c);
  local_88 = (undefined8 *)&local_fe;
  local_90 = &local_100;
  FUN_1447c44f6(lVar2 + 0x28,&local_90);
  FUN_1403b8af8(&local_90,lVar2);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_140857d6a(*(longlong *)(param_1 + 0x28) + 0x28,&local_90,&local_118,3);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc22a4 FUN_147fc22a4 body=103 status=ok
// SIG undefined FUN_147fc22a4(void)

void FUN_147fc22a4(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145b66cfc();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_18);
  }
  FUN_147fc8c04(param_1 + 0x870,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc230c FUN_147fc230c body=183 status=ok
// SIG undefined FUN_147fc230c(void)

undefined8 FUN_147fc230c(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145b66c12();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc23c6 FUN_147fc23c6 body=80 status=ok
// SIG undefined FUN_147fc23c6(void)

void FUN_147fc23c6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x38) = 0;
  plVar3 = *(longlong **)(param_1 + 0x40);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
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
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 147fc243e FUN_147fc243e body=486 status=ok
// SIG undefined FUN_147fc243e(void)

undefined8 FUN_147fc243e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
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
  local_40 = 0;
  local_38 = 0x100000000;
  if ((longlong)*(int *)(param_1 + 0x7e8) != 0) {
    lVar6 = (longlong)*(int *)(param_1 + 0x7e8) * 0x138;
    lVar4 = *(longlong *)(param_1 + 0x7e0) + 0x28;
    do {
      FUN_140f937a0(&local_58,lVar4);
      lVar4 = lVar4 + 0x138;
      lVar6 = lVar6 + -0x138;
    } while (lVar6 != 0);
  }
  lVar4 = local_40;
  local_60 = (longlong *)FUN_14001cc68(0x60,0x10);
  local_60[1] = (longlong)&DAT_100000001;
  *local_60 = (longlong)&PTR_FUN_14a492060;
  local_68 = local_60 + 2;
  local_60[2] = 0;
  local_60[3] = 0;
  local_60[4] = 0;
  local_60[5] = 0;
  local_60[6] = 2;
  if (lVar4 == 0) {
    local_60[9] = local_48;
    *(undefined4 *)(local_60 + 7) = local_58;
    *(undefined4 *)((longlong)local_60 + 0x3c) = uStack_54;
    *(undefined4 *)(local_60 + 8) = uStack_50;
    *(undefined4 *)((longlong)local_60 + 0x44) = uStack_4c;
  }
  local_60[10] = lVar4;
  local_40 = 0;
  *(undefined4 *)(local_60 + 0xb) = (undefined4)local_38;
  *(undefined4 *)((longlong)local_60 + 0x5c) = local_38._4_4_;
  local_38 = 0x100000000;
  FUN_140aec6f8(&local_68);
  plVar1 = local_60;
  if (local_60 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0xe0) = local_68;
    plVar5 = *(longlong **)(param_1 + 0xe8);
    if (plVar5 == (longlong *)0x0) goto LAB_147fc25cf;
    *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_147fc2599:
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_147fc25cf;
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
    *(longlong **)(param_1 + 0xe0) = local_68;
    plVar5 = *(longlong **)(param_1 + 0xe8);
    if (local_60 != plVar5) {
      *(longlong **)(param_1 + 0xe8) = local_60;
      if (plVar5 == (longlong *)0x0) goto LAB_147fc25cf;
      goto LAB_147fc2599;
    }
    LOCK();
    plVar5 = local_60 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_147fc25cf;
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
LAB_147fc25cf:
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
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc2626 FUN_147fc2626 body=163 status=ok
// SIG undefined FUN_147fc2626(void)

undefined4 FUN_147fc2626(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = FUN_14755452a(param_4,param_1 + -0xf8,0);
  uVar2 = FUN_1475545d8(param_4,param_3);
  FUN_147554828(param_4,param_2,uVar1,uVar2);
  if (0 < *(int *)(param_1 + 0x6f0)) {
    do {
      iVar3 = iVar3 + 1;
      uVar1 = FUN_14755452a(param_4,param_1 + -0xf8,iVar3);
      uVar2 = FUN_1475545d8(param_4,param_3);
      FUN_147554828(param_4,param_2,uVar1,uVar2);
    } while (iVar3 < *(int *)(param_1 + 0x6f0));
  }
  return 1;
}



// FUNCTION 147fc26ca FUN_147fc26ca body=810 status=ok
// SIG undefined FUN_147fc26ca(void)

void FUN_147fc26ca(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined2 *puVar11;
  longlong lVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_148 [40];
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  uint local_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  uint local_fc;
  undefined **local_f8;
  uint local_f0;
  uint local_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  uint local_c4;
  undefined1 local_c0;
  undefined1 local_bc;
  undefined2 local_b8;
  longlong local_b0;
  undefined1 local_a8;
  undefined1 local_a0;
  undefined1 local_98 [64];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar12 = param_1 + -0xf8;
  lVar9 = FUN_1432e0ea6(lVar12);
  if (lVar9 != 0) {
    lVar10 = FUN_145898f48();
    if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
        == lVar10 + 0x30)) {
      local_118 = param_4;
      FUN_145ec5176((ulonglong)*(ushort *)(param_3 + 0x30) * 0x128 +
                    *(longlong *)(*(longlong *)(param_2 + 0x548) + 8),local_98);
      FUN_14029898a(lVar12,&local_fc);
      uVar8 = local_fc;
      if ((longlong)local_50 != 0) {
        puVar14 = local_98;
        if (local_58 != (undefined1 *)0x0) {
          puVar14 = local_58;
        }
        lVar10 = 0;
        do {
          uVar8 = *(uint *)(puVar14 + lVar10);
          if (local_fc != 0) {
            uVar8 = FUN_144a78877(local_fc,*(uint *)(puVar14 + lVar10));
          }
          local_fc = uVar8;
          lVar10 = lVar10 + 8;
          uVar8 = local_fc;
        } while ((longlong)local_50 * 8 != lVar10);
      }
      if (*(int *)(param_3 + 0x10) == 0) {
        uVar15 = 0;
        if (*(longlong *)(lVar9 + 0x68) == 0) {
          uVar16 = 0;
          local_120 = 0;
          local_11c = 0;
          uVar15 = 0;
        }
        else {
          iVar13 = FUN_1415c6332();
          uVar16 = 0;
          local_120 = 0;
          local_11c = 0;
          if (0 < iVar13) {
            lVar9 = FUN_14574ef0a(*(undefined8 *)(lVar9 + 0x68),0);
            uVar15 = *(undefined4 *)(lVar9 + 0xa0);
            uVar16 = *(undefined4 *)(lVar9 + 0xa4);
            local_120 = *(undefined4 *)(lVar9 + 0xa8);
            local_11c = *(undefined4 *)(lVar9 + 0xac);
          }
        }
        FUN_1414f4f68(param_3,&local_10c);
        bVar5 = iStack_108 != 0;
        bVar6 = local_10c != 0;
        bVar4 = iStack_104 != 0;
        bVar3 = iStack_100 != 0;
        lVar9 = FUN_14009d2a0();
        uVar2 = *(undefined2 *)(lVar9 + 100);
        local_ec = local_10c;
        uStack_e8 = CONCAT44(iStack_104,iStack_108);
        uStack_e0 = CONCAT44(uStack_e0._4_4_,iStack_100);
        puVar11 = (undefined2 *)FUN_145e3d254();
        uVar7 = local_118;
        uStack_e0._0_5_ = CONCAT14(1,(undefined4)uStack_e0);
        local_d8 = CONCAT22(local_d8._2_2_,*puVar11);
        local_c0 = 1;
        uStack_cc = local_120;
        local_c8 = local_11c;
        local_bc = 0;
        local_f8 = &PTR_FUN_14ad04770;
        local_f0 = (uint)CONCAT12(((bVar5 || bVar6) || bVar4) || bVar3,uVar2);
        uStack_d4 = uVar15;
        uStack_d0 = uVar16;
        local_c4 = uVar8;
        FUN_147fc29f6(local_118,&local_f8);
        FUN_145ec4d14(lVar12,param_2,param_3,uVar7);
      }
      else {
        iVar13 = *(int *)(param_3 + 0x10) + -1;
        if ((-1 < iVar13) && (iVar13 < *(int *)(param_1 + 0x6f0))) {
          lVar12 = FUN_14009d2a0();
          lVar9 = FUN_145e3d254();
          lVar10 = (longlong)(*(int *)(param_3 + 0x10) + -1) * 0x138;
          puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x6e8) + lVar10);
          lVar10 = *(longlong *)(param_1 + 0x6e8) + lVar10 + 0x28;
          iVar13 = FUN_14752e14e(lVar10);
          if ((0 < iVar13) ||
             ((*(char *)((longlong)puVar1 + 0xa4) == '\x01' &&
              ((*(float *)(puVar1 + 0x14) != 1.0 || (NAN(*(float *)(puVar1 + 0x14)))))))) {
            uStack_e8 = *puVar1;
            uStack_e0 = puVar1[1];
            local_d8 = *(undefined4 *)(puVar1 + 2);
            uStack_d4 = *(undefined4 *)((longlong)puVar1 + 0x14);
            uStack_d0 = *(undefined4 *)(puVar1 + 3);
            uStack_cc = *(undefined4 *)((longlong)puVar1 + 0x1c);
            local_c8 = *(undefined4 *)(puVar1 + 4);
            local_c4 = *(uint *)((longlong)puVar1 + 0x24);
            local_b8 = *(undefined2 *)(lVar12 + 0x7e);
            local_f0 = CONCAT22(local_f0._2_2_,*(undefined2 *)(lVar9 + 2));
            local_c0 = 1;
            local_a8 = 1;
            local_a0 = 1;
            local_f8 = &PTR_FUN_14ad04790;
            local_ec = uVar8;
            local_b0 = lVar10;
            FUN_147fc2af0(local_118);
          }
        }
      }
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fc29f6 FUN_147fc29f6 body=248 status=ok
// SIG undefined FUN_147fc29f6(void)

void FUN_147fc29f6(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_98 [42];
  undefined2 uStack_6e;
  undefined2 local_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = *(char *)(param_2 + 0x1c);
  if (cVar2 == '\x01') {
    local_58 = *(undefined4 *)(param_2 + 0xc);
    uStack_54 = *(undefined4 *)(param_2 + 0x10);
    uStack_50 = *(undefined4 *)(param_2 + 0x14);
    uStack_4c = *(undefined4 *)(param_2 + 0x18);
  }
  cVar3 = *(char *)(param_2 + 0x38);
  if (cVar3 == '\x01') {
    uStack_5c = *(undefined4 *)(param_2 + 0x34);
    local_6c = (undefined2)*(undefined4 *)(param_2 + 0x24);
    uStack_6a = (undefined2)((uint)*(undefined4 *)(param_2 + 0x24) >> 0x10);
    uStack_68 = (undefined2)*(undefined4 *)(param_2 + 0x28);
    uStack_66 = (undefined2)((uint)*(undefined4 *)(param_2 + 0x28) >> 0x10);
    uStack_64 = (undefined2)*(undefined4 *)(param_2 + 0x2c);
    uStack_62 = (undefined2)((uint)*(undefined4 *)(param_2 + 0x2c) >> 0x10);
    uStack_60 = (undefined2)*(undefined4 *)(param_2 + 0x30);
    uStack_5e = (undefined2)((uint)*(undefined4 *)(param_2 + 0x30) >> 0x10);
  }
  uVar6 = *(undefined4 *)(param_2 + 8);
  uVar5 = *(undefined2 *)(param_2 + 0x20);
  uVar4 = *(undefined1 *)(param_2 + 0x3c);
  iVar7 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar7 + 1U) {
    FUN_140561fb4(param_1,iVar7);
  }
  lVar8 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar8 = param_1;
  }
  puVar1 = (undefined8 *)(lVar8 + (longlong)iVar7 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) | 3;
  *puVar1 = &PTR_FUN_14ad04770;
  *(undefined4 *)(puVar1 + 1) = uVar6;
  *(ulonglong *)((longlong)puVar1 + 0xc) = CONCAT44(uStack_54,local_58);
  *(ulonglong *)((longlong)puVar1 + 0x14) = CONCAT44(uStack_4c,uStack_50);
  *(char *)((longlong)puVar1 + 0x1c) = cVar2;
  *(undefined2 *)(puVar1 + 4) = uVar5;
  *(uint *)((longlong)puVar1 + 0x22) = CONCAT22(local_6c,uStack_6e);
  *(uint *)((longlong)puVar1 + 0x26) = CONCAT22(uStack_68,uStack_6a);
  *(uint *)((longlong)puVar1 + 0x2a) = CONCAT22(uStack_64,uStack_66);
  *(uint *)((longlong)puVar1 + 0x2e) = CONCAT22(uStack_60,uStack_62);
  puVar1[6] = CONCAT44(uStack_5c,CONCAT22(uStack_5e,uStack_60));
  *(char *)(puVar1 + 7) = cVar3;
  *(undefined1 *)((longlong)puVar1 + 0x3c) = uVar4;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc2af0 FUN_147fc2af0 body=245 status=ok
// SIG undefined FUN_147fc2af0(void)

void FUN_147fc2af0(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar5 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_147fc8cc8(puVar5);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar4 = param_1;
  }
  puVar1 = (undefined4 *)(lVar4 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  bVar3 = local_28;
  if ((local_28 & 1) != 0) {
    bVar3 = local_28 & 0xfe;
    *(byte *)(puVar1 + 0x10) = (*(byte *)(puVar1 + 0x10) & 0xfc | local_28 & 2) + 1;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
  }
  if ((bVar3 & 1) != 0) {
    if ((bVar3 & 2) == 0) {
      puVar5 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = bVar3 & 0xfe;
    (**(code **)*puVar5)(puVar5,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc2bf0 FUN_147fc2bf0 body=206 status=ok
// SIG undefined FUN_147fc2bf0(void)

void FUN_147fc2bf0(longlong param_1,float *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  float fVar4;
  
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2e8))();
    if (lVar2 != 0) {
      uVar3 = -(uint)(0.0 < *(float *)(param_1 + 0x30));
      if (*(char *)(param_1 + 0x44) == '\x01') {
        fVar4 = *(float *)(param_1 + 0x40);
      }
      else {
        lVar1 = *(longlong *)(lVar2 + 0x118);
        fVar4 = (float)(((double)((lVar1 >> 0x20) *
                                 ((longlong)*(int *)(lVar2 + 0x114) -
                                 (longlong)*(int *)(lVar2 + 0x10c))) +
                        (double)((ulonglong)(double)(int)((ulonglong)lVar1 >> 0x20) &
                                0x8000000000000000)) / (double)(int)lVar1);
      }
      *param_2 = fVar4 / (float)(~uVar3 & 0x3f800000 | (uint)*(float *)(param_1 + 0x30) & uVar3);
      *(undefined1 *)(param_2 + 1) = 0;
      param_2[2] = *(float *)(param_1 + 0x38);
      param_2[3] = *(float *)(param_1 + 0x3c);
    }
  }
  return;
}



// FUNCTION 147fc2cbe FUN_147fc2cbe body=169 status=ok
// SIG undefined FUN_147fc2cbe(void)

void FUN_147fc2cbe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_147fc0b68(*(undefined8 *)(param_1 + 0x50));
  lVar1 = *(longlong *)(param_1 + 0x48);
  lVar2 = *(longlong *)(param_1 + 0x50);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar2);
  }
  *(longlong *)(lVar1 + 0x288) = lVar2;
  FUN_14485c47a(lVar1 + 0x280,lVar2);
  if (*(char *)(param_2 + 1) == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(param_2 + 4);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  FUN_147fc1340(*(undefined8 *)(param_1 + 0x48),uVar3,0,uVar5);
  uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),*(undefined1 *)(param_1 + 0x44));
  FUN_147fc1874(*(undefined8 *)(param_1 + 0x48),uVar4,uVar4 & 0xffffffff);
  FUN_1479913ac(param_1 + 0x58,param_1,param_2);
  return;
}



// FUNCTION 147fc2d68 FUN_147fc2d68 body=349 status=ok
// SIG undefined FUN_147fc2d68(void)

void FUN_147fc2d68(longlong param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  undefined8 uVar4;
  longlong lVar6;
  undefined1 auVar7 [16];
  double dVar5;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  double dVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  
  uVar14 = (undefined4)((ulonglong)param_4 >> 0x20);
  uVar4 = FUN_14799143a(param_1 + 0x58,*param_2);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if ((*(byte *)(param_1 + 0x74) & 4) == 0) {
    FUN_147fc16ae();
    return;
  }
  dVar12 = ((double)(int)*(undefined8 *)(lVar1 + 0x2b8) *
           (double)(*param_2 * *(float *)(param_1 + 0x30))) /
           (double)(int)((ulonglong)*(undefined8 *)(lVar1 + 0x2b8) >> 0x20);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar12;
  auVar7 = roundpd(auVar7,auVar7,1);
  dVar5 = auVar7._0_8_;
  dVar12 = dVar12 - dVar5;
  if (2147483647.0 <= dVar5) {
    dVar5 = 2147483647.0;
  }
  if (dVar5 <= -2147483648.0) {
    dVar5 = -2147483648.0;
  }
  iVar2 = (int)dVar12;
  fVar13 = (float)dVar12 - (float)iVar2;
  fVar11 = 0.99999994;
  fVar3 = fVar13;
  if (0.99999994 <= fVar13) {
    fVar3 = fVar11;
  }
  auVar8._0_4_ = ~-(uint)(0.0 < fVar13) & (uint)fVar13;
  auVar8._4_4_ = uVar14;
  auVar8._8_4_ = in_XMM3_Dc;
  auVar8._12_4_ = in_XMM3_Dd;
  auVar8 = auVar8 | ZEXT416((uint)fVar3 & -(uint)(0.0 < fVar13));
  auVar9._4_12_ = auVar8._4_12_;
  fVar3 = auVar8._0_4_ + 0.5 + -0.5;
  if (0.99999994 <= fVar3) {
    fVar3 = fVar11;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  auVar9._0_4_ = fVar3 + *(float *)(lVar1 + 0x2d0);
  auVar7 = roundss(ZEXT416(0),auVar9,9);
  fVar3 = (auVar9._0_4_ - auVar7._0_4_) + 0.5 + -0.5;
  if (0.99999994 <= fVar3) {
    fVar3 = fVar11;
  }
  auVar10._4_12_ = auVar9._4_12_;
  auVar10._0_4_ = fVar3;
  lVar6 = auVar10._0_8_;
  if (fVar3 <= 0.0) {
    lVar6 = 0;
  }
  FUN_147fc2ec6(param_1,(ulonglong)
                        (uint)(iVar2 + *(int *)(lVar1 + 0x2cc) + (int)dVar5 +
                              ((int)ROUND(auVar9._0_4_ + auVar9._0_4_ + -0.5) >> 1)) | lVar6 << 0x20
                ,param_2 + 4,param_3);
  FUN_1479916aa(param_3,uVar4);
  return;
}



// FUNCTION 147fc2ec6 FUN_147fc2ec6 body=418 status=ok
// SIG undefined FUN_147fc2ec6(void)

void FUN_147fc2ec6(longlong param_1,undefined8 param_2,undefined8 param_3,double *param_4)

{
  float fVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x48) != 0)) {
    cVar4 = FUN_1432dadb8(*(longlong *)(param_1 + 0x48) + 0x298);
    if (cVar4 != '\0') {
      uVar5 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x28) + 0x10))
                        (*(longlong *)(param_1 + 0x48) + 0x28);
      uVar5 = FUN_1475542ea(uVar5);
      FUN_147fc0f5e(*(undefined8 *)(param_1 + 0x50),param_3);
      FUN_14009d2a0();
      lVar6 = FUN_14038fb82();
      FUN_147fc8126(&local_78,uVar5,lVar6 + 0x30);
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x50) + 0x28);
      FUN_147fc18f0(*(undefined8 *)(param_1 + 0x48),param_2);
      FUN_147fc1002(*(undefined8 *)(param_1 + 0x50));
      lVar6 = *(longlong *)(param_1 + 0x50);
      local_78 = *(undefined4 *)(lVar6 + 0x9b0);
      uStack_74 = *(undefined4 *)(lVar6 + 0x9b4);
      uStack_70 = *(undefined4 *)(lVar6 + 0x9b8);
      uStack_6c = *(undefined4 *)(lVar6 + 0x9bc);
      dVar7 = (double)*(float *)(param_1 + 0x34);
      local_68 = *(undefined4 *)(lVar6 + 0x9c0);
      uStack_64 = *(undefined4 *)(lVar6 + 0x9c4);
      uStack_60 = *(undefined4 *)(lVar6 + 0x9c8);
      uStack_5c = *(undefined4 *)(lVar6 + 0x9cc);
      dVar2 = *(double *)(lVar6 + 0x9e0);
      dVar3 = *(double *)(lVar6 + 0x9d8);
      *param_4 = dVar7 * *(double *)(lVar6 + 0x9d0);
      param_4[1] = dVar3 * dVar7;
      param_4[2] = dVar2 * dVar7;
      FUN_1448052ee(&local_78,&local_58);
      dVar2 = (double)*(float *)(param_1 + 0x34);
      param_4[3] = dVar2 * local_58;
      param_4[4] = local_50 * dVar2;
      param_4[5] = local_48 * dVar2;
      *(float *)(param_4 + 6) =
           (*(float *)(*(longlong *)(param_1 + 0x50) + 0x28) - fVar1) * *(float *)(param_1 + 0x34);
      FUN_14477b16e(param_4 + 8,*(longlong *)(param_1 + 0x50) + 0x40);
      *(undefined4 *)(param_4 + 0x120) = *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x900);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc306a FUN_147fc306a body=314 status=ok
// SIG undefined FUN_147fc306a(void)

void FUN_147fc306a(longlong param_1,float *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  float *pfVar3;
  ulonglong uVar4;
  float fVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  float fVar10;
  
  pfVar3 = param_2;
  uVar6 = FUN_14799151e(param_1 + 0x58,*param_2);
  if ((*(byte *)(param_1 + 0x74) & 4) == 0) {
    FUN_147fc16ae();
    return;
  }
  iVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x28) + 0x38))
                    (*(longlong *)(param_1 + 0x48) + 0x28);
  if (iVar2 != 1) {
    uVar4 = CONCAT71((int7)((ulonglong)pfVar3 >> 8),*(undefined1 *)(param_1 + 0x44));
    FUN_147fc1874(*(undefined8 *)(param_1 + 0x48),uVar4,uVar4 & 0xffffffff);
  }
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x2b8);
  dVar9 = ((double)(int)uVar1 * (double)(*param_2 * *(float *)(param_1 + 0x30))) /
          (double)(int)((ulonglong)uVar1 >> 0x20);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar9;
  auVar8 = roundpd(auVar8,auVar8,1);
  dVar7 = auVar8._0_8_;
  dVar9 = dVar9 - dVar7;
  if (2147483647.0 <= dVar7) {
    dVar7 = 2147483647.0;
  }
  if (dVar7 <= -2147483648.0) {
    dVar7 = -2147483648.0;
  }
  iVar2 = (int)dVar9;
  fVar5 = (float)dVar9 - (float)iVar2;
  fVar10 = fVar5;
  if (0.99999994 <= fVar5) {
    fVar10 = 0.99999994;
  }
  fVar10 = (float)(~-(uint)(0.0 < fVar5) & (uint)fVar5 | (uint)fVar10 & -(uint)(0.0 < fVar5)) + 0.5
           + -0.5;
  if (0.99999994 <= fVar10) {
    fVar10 = 0.99999994;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  FUN_147fc2ec6(param_1,CONCAT44(fVar10,(int)dVar7 + iVar2),param_2 + 4,param_3);
  FUN_1479916aa(param_3,uVar6);
  return;
}



// FUNCTION 147fc31a4 FUN_147fc31a4 body=38 status=ok
// SIG undefined FUN_147fc31a4(void)

bool FUN_147fc31a4(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 == 0) {
    bVar3 = true;
  }
  else {
    iVar2 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x38))(lVar1 + 0x28);
    bVar3 = iVar2 == 0;
  }
  return bVar3;
}



// FUNCTION 147fc31ca FUN_147fc31ca body=95 status=ok
// SIG undefined FUN_147fc31ca(void)

void FUN_147fc31ca(longlong param_1,char *param_2)

{
  longlong lVar1;
  char *pcVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    pcVar2 = param_2;
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2e8))();
    uVar4 = (undefined7)((ulonglong)pcVar2 >> 8);
    if (*(longlong *)(param_1 + 0x48) != 0 && lVar1 != 0) {
      if (*param_2 == '\x01') {
        FUN_147fc16ae();
        uVar3 = CONCAT71(uVar4,*param_2);
      }
      else {
        uVar3 = 0;
      }
      FUN_147991546(param_1 + 0x58,uVar3 & 0xffffffffffffff01);
      return;
    }
  }
  return;
}



// FUNCTION 147fc322a FUN_147fc322a body=90 status=ok
// SIG undefined FUN_147fc322a(void)

void FUN_147fc322a(longlong param_1)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147fc16ae(*(undefined8 *)(param_1 + 0x48));
  FUN_145833896(&local_38);
  *(undefined4 *)(param_1 + 0x58) = local_38;
  *(undefined4 *)(param_1 + 0x5c) = uStack_34;
  *(undefined4 *)(param_1 + 0x60) = uStack_30;
  *(undefined4 *)(param_1 + 100) = uStack_2c;
  *(undefined4 *)(param_1 + 0x68) = local_28;
  *(undefined4 *)(param_1 + 0x6c) = uStack_24;
  *(undefined4 *)(param_1 + 0x70) = uStack_20;
  *(undefined4 *)(param_1 + 0x74) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc3292 FUN_147fc3292 body=1272 status=ok
// SIG undefined FUN_147fc3292(void)

void FUN_147fc3292(longlong param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  char cVar9;
  longlong lVar10;
  undefined2 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined1 auStack_218 [35];
  char local_1f5;
  int local_1f4;
  undefined8 local_1f0;
  int local_1e4;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  undefined2 *local_1c0;
  short *local_1b8;
  undefined2 local_1ac;
  undefined2 local_1aa;
  undefined2 local_1a8;
  undefined1 local_1a3;
  undefined4 local_1a0;
  undefined1 local_19c;
  longlong local_198;
  int local_190;
  longlong *local_188;
  int local_180;
  longlong local_178;
  longlong *local_170;
  int local_168;
  longlong local_160;
  longlong *local_158;
  int local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  int local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined2 local_114;
  undefined2 local_112;
  short local_110;
  short local_10e;
  short local_10c;
  undefined1 local_f8 [80];
  longlong local_a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  cVar9 = FUN_147546242(param_1 + 0x40,*(longlong *)(param_1 + 0x28) + 0x28);
  if (cVar9 != '\0') {
    lVar10 = FUN_14009d2a0();
    puVar11 = (undefined2 *)FUN_145e3d254();
    local_1c8 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x548);
    local_1ac = *(undefined2 *)(lVar10 + 0x4e);
    local_1aa = *(undefined2 *)(lVar10 + 100);
    local_1a8 = *puVar11;
    local_1a3 = 0;
    local_1a0 = 0x6ff;
    local_19c = 0;
    local_114 = *(undefined2 *)(lVar10 + 0x11a);
    local_1c0 = &local_114;
    local_112 = *(undefined2 *)(lVar10 + 0x11c);
    local_1b8 = &local_110;
    FUN_147fc378c(&local_1ac,&local_110);
    if (((local_110 != -1) && (local_10e != -1)) && (local_10c != -1)) {
      lVar12 = *(longlong *)(param_1 + 0x28);
      local_1f5 = *(char *)(lVar12 + 0x298);
      local_1d8 = lVar10;
      FUN_14150e78a(&local_140,lVar12 + 0x28,local_f8);
      local_1e4 = *(int *)(lVar12 + 0x38);
      if (local_130 != local_1e4) {
        do {
          iVar8 = local_130;
          lVar12 = local_138;
          lVar10 = *(longlong *)(*(longlong *)(local_138 + 0x60) + (longlong)local_130 * 8);
          if (local_1f5 == '\0') {
            *(undefined4 *)(lVar10 + 0x14) = 0;
            lVar15 = lVar10;
          }
          else {
            lVar15 = 0;
          }
          if (*(ushort *)(lVar10 + 0xc) != 0) {
            plVar17 = *(longlong **)(lVar10 + 0x28);
            lVar16 = (ulonglong)*(ushort *)(lVar10 + 0xc) << 5;
            do {
              if (*(short *)((longlong)plVar17 + 0x1e) == local_10c) goto LAB_147fc3459;
              plVar17 = plVar17 + 4;
              lVar16 = lVar16 + -0x20;
            } while (lVar16 != 0);
          }
          plVar17 = (longlong *)0x0;
LAB_147fc3459:
          iVar4 = *(int *)(lVar10 + 0x14);
          if (iVar4 == 1) {
            AcquireSRWLockShared((PSRWLOCK)(plVar17 + 1));
          }
          LOCK();
          *(int *)(plVar17 + 3) = (int)plVar17[3] + 1;
          UNLOCK();
          lVar16 = *plVar17;
          local_1f0 = lVar12;
          if (*(ushort *)(lVar10 + 0xc) != 0) {
            plVar13 = *(longlong **)(lVar10 + 0x28);
            lVar12 = (ulonglong)*(ushort *)(lVar10 + 0xc) << 5;
            do {
              if (*(short *)((longlong)plVar13 + 0x1e) == local_10e) goto LAB_147fc3494;
              plVar13 = plVar13 + 4;
              lVar12 = lVar12 + -0x20;
            } while (lVar12 != 0);
          }
          plVar13 = (longlong *)0x0;
LAB_147fc3494:
          iVar5 = *(int *)(lVar10 + 0x14);
          local_1f4 = iVar4;
          local_1d0 = lVar15;
          if (iVar5 == 1) {
            AcquireSRWLockShared((PSRWLOCK)(plVar13 + 1));
          }
          LOCK();
          *(int *)(plVar13 + 3) = (int)plVar13[3] + 1;
          UNLOCK();
          local_1e0 = *plVar13;
          if (*(ushort *)(lVar10 + 0xc) != 0) {
            plVar18 = *(longlong **)(lVar10 + 0x28);
            lVar12 = (ulonglong)*(ushort *)(lVar10 + 0xc) << 5;
            do {
              if (*(short *)((longlong)plVar18 + 0x1e) == local_110) goto LAB_147fc34c4;
              plVar18 = plVar18 + 4;
              lVar12 = lVar12 + -0x20;
            } while (lVar12 != 0);
          }
          plVar18 = (longlong *)0x0;
LAB_147fc34c4:
          iVar4 = *(int *)(lVar10 + 0x14);
          if (iVar4 == 1) {
            AcquireSRWLockShared((PSRWLOCK)(plVar18 + 1));
          }
          LOCK();
          *(int *)(plVar18 + 3) = (int)plVar18[3] + 1;
          UNLOCK();
          lVar10 = *plVar18;
          local_160 = local_1e0;
          local_150 = local_1f4;
          local_198 = local_1f0;
          local_190 = iVar8;
          local_188 = plVar18;
          local_180 = iVar4;
          local_178 = lVar10;
          local_170 = plVar13;
          local_168 = iVar5;
          local_158 = plVar17;
          local_148 = lVar16;
          lVar12 = FUN_141645258(&local_198);
          uVar3 = *(ushort *)(local_1d8 + 0x11a);
          if ((uVar3 == 0xffff) ||
             (*(uint *)(lVar12 + 0x20) == (uint)uVar3 ||
              (int)*(uint *)(lVar12 + 0x20) < (int)(uint)uVar3)) {
            local_1f0 = (ulonglong)local_1f0._4_4_ << 0x20;
          }
          else {
            local_1f0 = CONCAT44(local_1f0._4_4_,
                                 (uint)CONCAT11((char)(uVar3 >> 8),
                                                (*(uint *)(lVar12 + (ulonglong)(uVar3 >> 5) * 4) >>
                                                 (uVar3 & 0x1f) & 1) != 0));
          }
          uVar3 = *(ushort *)(local_1d8 + 0x11c);
          if ((uVar3 == 0xffff) ||
             (*(uint *)(lVar12 + 0x20) == (uint)uVar3 ||
              (int)*(uint *)(lVar12 + 0x20) < (int)(uint)uVar3)) {
            local_1f4 = 0;
          }
          else {
            uVar6 = *(uint *)(lVar12 + (ulonglong)(uVar3 >> 5) * 4);
            local_1f4 = CONCAT31((int3)(uVar6 >> 8),(uVar6 >> (uVar3 & 0x1f) & 1) != 0);
          }
          uVar3 = *(ushort *)
                   (*(longlong *)(*(longlong *)(local_198 + 0x60) + (longlong)local_190 * 8) + 0xe);
          if (uVar3 != 0) {
            lVar12 = 0;
            do {
              lVar15 = *(longlong *)(local_1c8 + 8);
              lVar14 = (ulonglong)*(ushort *)(lVar10 + lVar12) * 0x128;
              lVar7 = *(longlong *)(lVar15 + 0x100 + lVar14);
              plVar17 = *(longlong **)(lVar15 + 0x108 + lVar14);
              if (plVar17 == (longlong *)0x0) {
                plVar13 = (longlong *)FUN_1432dbf3e(lVar7 + 0x38);
              }
              else {
                LOCK();
                *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                UNLOCK();
                plVar13 = (longlong *)FUN_1432dbf3e(lVar7 + 0x38);
                LOCK();
                plVar18 = plVar17 + 1;
                *(int *)plVar18 = (int)*plVar18 + -1;
                UNLOCK();
                if ((int)*plVar18 == 0) {
                  (**(code **)*plVar17)(plVar17);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar17 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar17 + 0x10))(plVar17);
                  }
                }
              }
              if (plVar13 != (longlong *)0x0) {
                if ((char)local_1f0 == '\0') {
                  if ((char)local_1f4 != '\0') {
                    (**(code **)(*plVar13 + 0x18))(plVar13,lVar16);
                  }
                }
                else {
                  puVar2 = (undefined4 *)(local_1e0 + lVar12 * 4);
                  local_118 = *(undefined4 *)(lVar15 + lVar14 + 0x110);
                  local_128 = *puVar2;
                  uStack_124 = puVar2[1];
                  uStack_120 = puVar2[2];
                  uStack_11c = puVar2[3];
                  (**(code **)(*plVar13 + 0x10))(plVar13,lVar16,&local_128);
                }
              }
              lVar12 = lVar12 + 4;
              lVar16 = lVar16 + 0x14;
            } while ((ulonglong)uVar3 * 4 != lVar12);
          }
          FUN_147fc8e0a(&local_188);
          if (local_1d0 != 0) {
            *(undefined4 *)(local_1d0 + 0x14) = 1;
          }
          local_130 = FUN_1403b8464(&local_140,local_130 + 1);
        } while (local_130 != local_1e4);
      }
      if (local_140 != 0) {
        if (*(char *)(local_138 + 0x270) == '\0') {
          *(int *)(local_138 + 0x264) = *(int *)(local_138 + 0x264) + -1;
        }
        else {
          LOCK();
          *(int *)(local_138 + 0x264) = *(int *)(local_138 + 0x264) + -1;
          UNLOCK();
        }
      }
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fc378c FUN_147fc378c body=149 status=ok
// SIG undefined FUN_147fc378c(void)

undefined8 * FUN_147fc378c(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_147fc8d62(param_2,param_2 + 3);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1403b5126(param_2 + 3,&local_38,2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc3822 FUN_147fc3822 body=3522 status=ok
// SIG undefined FUN_147fc3822(void)

void FUN_147fc3822(longlong param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  ushort uVar3;
  short sVar4;
  undefined2 uVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [8];
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int *piVar17;
  uint uVar18;
  undefined **ppuVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong *plVar24;
  longlong lVar25;
  longlong *plVar26;
  undefined **ppuVar27;
  longlong *plVar28;
  undefined1 auStack_278 [32];
  longlong *local_258;
  undefined **local_250;
  uint local_244;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  uint local_214;
  undefined2 *local_210;
  undefined2 *local_208;
  undefined2 local_200;
  undefined2 uStack_1fe;
  undefined2 uStack_1fc;
  undefined2 uStack_1fa;
  undefined2 uStack_1f8;
  undefined1 local_1f3;
  undefined4 local_1f0;
  undefined1 local_1ec;
  undefined1 local_1e8 [8];
  undefined8 uStack_1e0;
  undefined2 local_1d2;
  undefined2 local_1d0;
  undefined2 uStack_1ce;
  undefined2 uStack_1cc;
  undefined2 uStack_1ca;
  undefined1 local_1c8;
  undefined1 uStack_1c7;
  undefined2 uStack_1c6;
  undefined4 uStack_1c4;
  uint local_1c0;
  undefined1 local_1b8 [4];
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  longlong local_140;
  undefined **local_e0;
  undefined8 local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  longlong *plStack_c8;
  longlong *local_c0;
  int local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong local_98;
  longlong *local_90;
  undefined4 local_88;
  longlong local_80;
  undefined2 local_78;
  undefined4 uStack_76;
  undefined2 uStack_72;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  lVar14 = FUN_14009d2a0();
  lVar15 = FUN_145e3d254();
  uStack_1ce = *(undefined2 *)(lVar14 + 0x50);
  uStack_1cc = *(undefined2 *)(lVar15 + 2);
  uStack_1c7 = 0;
  uStack_1c4 = 0x6ff;
  local_1c0 = local_1c0 & 0xffffff00;
  local_1b8._0_2_ = *(undefined2 *)(lVar14 + 0x11a);
  FUN_147fc8e80(&local_1a8);
  local_e0 = (undefined **)local_1b8;
  local_d8 = (longlong *)(local_1b8 + 2);
  FUN_1447c44f6(&uStack_190);
  local_228 = lVar14;
  local_220 = lVar15;
  if ((local_1a8._2_2_ != -1) && (local_1a8._4_2_ != -1)) {
    lVar14 = *(longlong *)(param_1 + 0x28);
    local_230 = CONCAT71(local_230._1_7_,*(undefined1 *)(lVar14 + 0x298));
    FUN_14150e78a(&local_78,lVar14 + 0x28,&uStack_190);
    local_244 = *(uint *)(lVar14 + 0x38);
    uVar23 = (ulonglong)CONCAT22(uStack_66,uStack_68);
    if (CONCAT22(uStack_66,uStack_68) != local_244) {
      local_238 = param_1 + 0x40;
      do {
        lVar15 = *(longlong *)
                  (*(longlong *)
                    (CONCAT26(uStack_6a,CONCAT24(uStack_6c,CONCAT22(uStack_6e,uStack_70))) + 0x60) +
                  (longlong)(int)uVar23 * 8);
        if ((char)local_230 == '\0') {
          *(undefined4 *)(lVar15 + 0x14) = 0;
          local_240 = lVar15;
        }
        else {
          local_240 = 0;
        }
        if (*(ushort *)(lVar15 + 0xc) != 0) {
          plVar26 = *(longlong **)(lVar15 + 0x28);
          lVar14 = (ulonglong)*(ushort *)(lVar15 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar26 + 0x1e) == local_1a8._4_2_) goto LAB_147fc40ce;
            plVar26 = plVar26 + 4;
            lVar14 = lVar14 + -0x20;
          } while (lVar14 != 0);
        }
        plVar26 = (longlong *)0x0;
LAB_147fc40ce:
        iVar13 = *(int *)(lVar15 + 0x14);
        if (iVar13 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar26 + 1));
        }
        LOCK();
        *(int *)(plVar26 + 3) = (int)plVar26[3] + 1;
        UNLOCK();
        lVar14 = *plVar26;
        if (*(ushort *)(lVar15 + 0xc) != 0) {
          plVar24 = *(longlong **)(lVar15 + 0x28);
          lVar16 = (ulonglong)*(ushort *)(lVar15 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar24 + 0x1e) == local_1a8._2_2_) goto LAB_147fc40f8;
            plVar24 = plVar24 + 4;
            lVar16 = lVar16 + -0x20;
          } while (lVar16 != 0);
        }
        plVar24 = (longlong *)0x0;
LAB_147fc40f8:
        iVar6 = *(int *)(lVar15 + 0x14);
        if (iVar6 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar24 + 1));
        }
        LOCK();
        *(int *)(plVar24 + 3) = (int)plVar24[3] + 1;
        UNLOCK();
        local_258 = (longlong *)*plVar24;
        local_250 = *(undefined ***)(lVar15 + 0x18);
        uVar3 = *(ushort *)(lVar15 + 0xe);
        local_e0 = local_250;
        local_d8 = plVar24;
        iStack_d0 = iVar6;
        plStack_c8 = local_258;
        local_c0 = plVar26;
        local_b8 = iVar13;
        local_b0 = lVar14;
        if ((ulonglong)uVar3 != 0) {
          uVar23 = 0;
          do {
            uVar12 = *(uint *)((longlong)local_258 + uVar23 * 4);
            sVar4 = *(short *)((longlong)local_250 + uVar23 * 2);
            local_200 = (undefined2)uVar12;
            uStack_1fe = (undefined2)(uVar12 >> 0x10);
            iVar13 = *(int *)(lVar14 + uVar23 * 0x2c);
            uStack_1fc = (undefined2)iVar13;
            uStack_1fa = (undefined2)((uint)iVar13 >> 0x10);
            uVar12 = uVar12 & 0xffff;
            lVar22 = FUN_147fc8f98(local_238,
                                   iVar13 + (uVar12 >> 2) + uVar12 * 0x40 + 0x9e3779b9 ^ uVar12);
            lVar15 = *(longlong *)(lVar22 + 8);
            lVar16 = lVar15;
            if (lVar15 == 0) {
              lVar16 = lVar22;
            }
            iVar13 = *(int *)(lVar22 + 0x10);
            lVar21 = (longlong)iVar13;
            if (lVar21 != 0) {
              lVar25 = 0;
              do {
                if (*(short *)(lVar16 + lVar25) == sVar4) goto LAB_147fc42b0;
                lVar25 = lVar25 + 2;
              } while (lVar21 * 2 != lVar25);
            }
            *(uint *)(lVar22 + 0x10) = iVar13 + 1U;
            if (*(uint *)(lVar22 + 0x14) < iVar13 + 1U) {
              FUN_147fc955e(lVar22,iVar13);
              lVar15 = *(longlong *)(lVar22 + 8);
            }
            if (lVar15 != 0) {
              lVar22 = lVar15;
            }
            *(short *)(lVar22 + lVar21 * 2) = sVar4;
            iVar13 = *(int *)(uVar23 * 0x2c + lVar14 + 0x28);
            if (iVar13 - 1U < 2) {
              *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
            }
            else if (iVar13 == 0) {
              *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
            }
LAB_147fc42b0:
            uVar23 = uVar23 + 1;
          } while (uVar23 != uVar3);
        }
        FUN_147fc8f40(&local_e0);
        if (local_240 != 0) {
          *(undefined4 *)(local_240 + 0x14) = 1;
        }
        uVar23 = FUN_1403b8464(&local_78,CONCAT22(uStack_66,uStack_68) + 1);
        uStack_68 = (undefined2)uVar23;
        uStack_66 = (undefined2)(uVar23 >> 0x10);
        lVar15 = local_220;
      } while ((uint)uVar23 != local_244);
    }
    if (CONCAT26(uStack_72,CONCAT42(uStack_76,local_78)) != 0) {
      lVar14 = CONCAT26(uStack_6a,CONCAT24(uStack_6c,CONCAT22(uStack_6e,uStack_70)));
      if (*(char *)(lVar14 + 0x270) == '\0') {
        *(int *)(lVar14 + 0x264) = *(int *)(lVar14 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(lVar14 + 0x264) = *(int *)(lVar14 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  lVar14 = local_228;
  if (local_140 != 0) {
    FUN_1400020a8();
  }
  uStack_1ce = *(undefined2 *)(lVar14 + 0x50);
  uStack_1cc = *(undefined2 *)(lVar15 + 2);
  uStack_1c7 = 0;
  uStack_1c4 = 0x6ff;
  local_1c0 = local_1c0 & 0xffffff00;
  local_1e8._2_2_ = uStack_1cc;
  local_1e8._0_2_ = *(undefined2 *)(lVar14 + 0x11c);
  FUN_147fc8e80(&local_1a8);
  local_e0 = (undefined **)local_1e8;
  local_d8 = (longlong *)(local_1e8 + 4);
  FUN_1447c44f6(&uStack_190);
  if ((local_1a8._2_2_ != -1) && (local_1a8._4_2_ != -1)) {
    lVar15 = *(longlong *)(param_1 + 0x28);
    local_240 = CONCAT71(local_240._1_7_,*(undefined1 *)(lVar15 + 0x298));
    FUN_14150e78a(&local_78,lVar15 + 0x28,&uStack_190);
    uVar23 = (ulonglong)CONCAT22(uStack_66,uStack_68);
    local_230 = CONCAT44(local_230._4_4_,*(uint *)(lVar15 + 0x38));
    if (CONCAT22(uStack_66,uStack_68) != *(uint *)(lVar15 + 0x38)) {
      local_258 = (longlong *)(param_1 + 0x40);
      local_250 = (undefined **)(param_1 + 0x78);
      do {
        lVar15 = *(longlong *)
                  (*(longlong *)
                    (CONCAT26(uStack_6a,CONCAT24(uStack_6c,CONCAT22(uStack_6e,uStack_70))) + 0x60) +
                  (longlong)(int)uVar23 * 8);
        if ((char)local_240 == '\0') {
          *(undefined4 *)(lVar15 + 0x14) = 0;
          local_238 = lVar15;
        }
        else {
          local_238 = 0;
        }
        if (*(ushort *)(lVar15 + 0xc) != 0) {
          plVar26 = *(longlong **)(lVar15 + 0x28);
          lVar14 = (ulonglong)*(ushort *)(lVar15 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar26 + 0x1e) == local_1a8._4_2_) goto LAB_147fc433a;
            plVar26 = plVar26 + 4;
            lVar14 = lVar14 + -0x20;
          } while (lVar14 != 0);
        }
        plVar26 = (longlong *)0x0;
LAB_147fc433a:
        iVar13 = *(int *)(lVar15 + 0x14);
        if (iVar13 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar26 + 1));
        }
        LOCK();
        *(int *)(plVar26 + 3) = (int)plVar26[3] + 1;
        UNLOCK();
        lVar14 = *plVar26;
        if (*(ushort *)(lVar15 + 0xc) != 0) {
          plVar24 = *(longlong **)(lVar15 + 0x28);
          lVar16 = (ulonglong)*(ushort *)(lVar15 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar24 + 0x1e) == local_1a8._2_2_) goto LAB_147fc4376;
            plVar24 = plVar24 + 4;
            lVar16 = lVar16 + -0x20;
          } while (lVar16 != 0);
        }
        plVar24 = (longlong *)0x0;
LAB_147fc4376:
        iVar6 = *(int *)(lVar15 + 0x14);
        if (iVar6 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar24 + 1));
        }
        LOCK();
        *(int *)(plVar24 + 3) = (int)plVar24[3] + 1;
        UNLOCK();
        plVar28 = (longlong *)*plVar24;
        ppuVar7 = *(undefined ***)(lVar15 + 0x18);
        uVar3 = *(ushort *)(lVar15 + 0xe);
        local_e0 = ppuVar7;
        local_d8 = plVar24;
        iStack_d0 = iVar6;
        plStack_c8 = plVar28;
        local_c0 = plVar26;
        local_b8 = iVar13;
        local_b0 = lVar14;
        if ((ulonglong)uVar3 != 0) {
          uVar23 = 0;
          plVar26 = local_258;
          ppuVar27 = local_250;
          do {
            local_1b8 = *(undefined1 (*) [4])((longlong)plVar28 + uVar23 * 4);
            local_1d2 = *(undefined2 *)((longlong)ppuVar7 + uVar23 * 2);
            uStack_1b4 = *(uint *)(lVar14 + uVar23 * 0x2c);
            if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
              uVar12 = (uint)local_1b8 & 0xffff;
              ppuVar19 = *(undefined ***)(param_1 + 0x80);
              if (*(undefined ***)(param_1 + 0x80) == (undefined **)0x0) {
                ppuVar19 = ppuVar27;
              }
              uVar12 = *(uint *)((longlong)ppuVar19 +
                                (ulonglong)
                                (*(int *)(param_1 + 0x88) - 1U &
                                (uStack_1b4 + (uVar12 >> 2) + uVar12 * 0x40 + 0x9e3779b9 ^ uVar12))
                                * 4);
              if (uVar12 != 0xffffffff) {
                do {
                  puVar2 = (uint *)(*plVar26 + (longlong)(int)uVar12 * 0x28);
                  if (((undefined1  [4])*puVar2 == local_1b8) &&
                     (*(uint *)(*plVar26 + 4 + (longlong)(int)uVar12 * 0x28) == uStack_1b4)) {
                    if (puVar2 + 2 != (uint *)0x0 && puVar2 != (uint *)0x0) {
                      local_200 = SUB82(&local_1d2,0);
                      uStack_1fe = (undefined2)((ulonglong)&local_1d2 >> 0x10);
                      uStack_1fc = (undefined2)((ulonglong)&local_1d2 >> 0x20);
                      uStack_1fa = (undefined2)((ulonglong)&local_1d2 >> 0x30);
                      iVar13 = FUN_147fc965c(puVar2 + 2,&local_200);
                      if (0 < iVar13) {
                        iVar13 = *(int *)(uVar23 * 0x2c + lVar14 + 0x28);
                        if (iVar13 - 1U < 2) {
                          *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + -1;
                        }
                        else if (iVar13 == 0) {
                          *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + -1;
                        }
                      }
                      plVar26 = local_258;
                      ppuVar27 = local_250;
                      if (puVar2[6] == 0) {
                        FUN_147fc9738(local_258,local_1b8);
                        plVar26 = local_258;
                        ppuVar27 = local_250;
                      }
                    }
                    break;
                  }
                  uVar12 = puVar2[8];
                } while (uVar12 != 0xffffffff);
              }
            }
            uVar23 = uVar23 + 1;
          } while (uVar23 != uVar3);
        }
        FUN_147fc8f40(&local_e0);
        if (local_238 != 0) {
          *(undefined4 *)(local_238 + 0x14) = 1;
        }
        uVar23 = FUN_1403b8464(&local_78,CONCAT22(uStack_66,uStack_68) + 1);
        uStack_68 = (undefined2)uVar23;
        uStack_66 = (undefined2)(uVar23 >> 0x10);
      } while ((int)uVar23 != (int)local_230);
    }
    lVar14 = local_228;
    lVar15 = local_220;
    if (CONCAT26(uStack_72,CONCAT42(uStack_76,local_78)) != 0) {
      lVar16 = CONCAT26(uStack_6a,CONCAT24(uStack_6c,CONCAT22(uStack_6e,uStack_70)));
      if (*(char *)(lVar16 + 0x270) == '\0') {
        *(int *)(lVar16 + 0x264) = *(int *)(lVar16 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(lVar16 + 0x264) = *(int *)(lVar16 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_140 != 0) {
    FUN_1400020a8();
  }
  local_1e8 = (undefined1  [8])0x0;
  uStack_1e0 = 0;
  uStack_1fe = (undefined2)*(undefined4 *)(lVar14 + 0x50);
  uStack_1fc = (undefined2)((uint)*(undefined4 *)(lVar14 + 0x50) >> 0x10);
  uStack_1fa = (undefined2)*(undefined4 *)(lVar14 + 0x48);
  uStack_1f8 = (undefined2)((uint)*(undefined4 *)(lVar14 + 0x48) >> 0x10);
  local_1f3 = 0;
  local_1f0 = 0x6ff;
  local_1ec = 0;
  local_1d2 = *(undefined2 *)(lVar14 + 0x11a);
  local_210 = &local_1d2;
  local_208 = &local_1d0;
  FUN_147fc45e6(&local_200,&local_1a8);
  if (((local_1a8._2_2_ != -1) && (local_1a8._6_2_ != -1)) && ((short)uStack_1a0 != -1)) {
    lVar15 = *(longlong *)(param_1 + 0x28);
    local_244 = CONCAT31(local_244._1_3_,*(undefined1 *)(lVar15 + 0x298));
    FUN_14150e78a(&local_1d0,lVar15 + 0x28,&uStack_190);
    local_214 = *(uint *)(lVar15 + 0x38);
    if (local_1c0 != local_214) {
      do {
        plVar26 = *(longlong **)
                   (*(longlong *)
                     (CONCAT44(uStack_1c4,CONCAT22(uStack_1c6,CONCAT11(uStack_1c7,local_1c8))) +
                     0x60) + (longlong)(int)local_1c0 * 8);
        if ((char)local_244 == '\0') {
          *(undefined4 *)((longlong)plVar26 + 0x14) = 0;
          local_258 = plVar26;
        }
        else {
          local_258 = (longlong *)0x0;
        }
        if (*(ushort *)((longlong)plVar26 + 0xc) != 0) {
          plVar24 = (longlong *)plVar26[5];
          lVar15 = (ulonglong)*(ushort *)((longlong)plVar26 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar24 + 0x1e) == (short)uStack_1a0) goto LAB_147fc3cfd;
            plVar24 = plVar24 + 4;
            lVar15 = lVar15 + -0x20;
          } while (lVar15 != 0);
        }
        plVar24 = (longlong *)0x0;
LAB_147fc3cfd:
        local_250 = (undefined **)CONCAT44(local_250._4_4_,*(int *)((longlong)plVar26 + 0x14));
        if (*(int *)((longlong)plVar26 + 0x14) == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar24 + 1));
        }
        LOCK();
        *(int *)(plVar24 + 3) = (int)plVar24[3] + 1;
        UNLOCK();
        local_238 = *plVar24;
        if (*(ushort *)((longlong)plVar26 + 0xc) != 0) {
          plVar28 = (longlong *)plVar26[5];
          lVar15 = (ulonglong)*(ushort *)((longlong)plVar26 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar28 + 0x1e) == local_1a8._6_2_) goto LAB_147fc3d2f;
            plVar28 = plVar28 + 4;
            lVar15 = lVar15 + -0x20;
          } while (lVar15 != 0);
        }
        plVar28 = (longlong *)0x0;
LAB_147fc3d2f:
        local_240 = CONCAT44(local_240._4_4_,*(int *)((longlong)plVar26 + 0x14));
        if (*(int *)((longlong)plVar26 + 0x14) == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar28 + 1));
        }
        LOCK();
        *(int *)(plVar28 + 3) = (int)plVar28[3] + 1;
        UNLOCK();
        local_230 = *plVar28;
        FUN_147fc9984(plVar26,&local_78,local_1a8._4_2_);
        if (*(ushort *)((longlong)plVar26 + 0xc) != 0) {
          plVar20 = (longlong *)plVar26[5];
          lVar15 = (ulonglong)*(ushort *)((longlong)plVar26 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar20 + 0x1e) == local_1a8._2_2_) goto LAB_147fc3d75;
            plVar20 = plVar20 + 4;
            lVar15 = lVar15 + -0x20;
          } while (lVar15 != 0);
        }
        plVar20 = (longlong *)0x0;
LAB_147fc3d75:
        iVar13 = *(int *)((longlong)plVar26 + 0x14);
        if (iVar13 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar20 + 1));
        }
        LOCK();
        *(int *)(plVar20 + 3) = (int)plVar20[3] + 1;
        UNLOCK();
        plStack_c8 = (longlong *)*plVar20;
        local_e0 = (undefined **)plVar26[3];
        local_c0 = (longlong *)CONCAT26(uStack_72,CONCAT42(uStack_76,local_78));
        local_b8 = CONCAT22(uStack_6e,uStack_70);
        local_b0 = CONCAT44(uStack_64,CONCAT22(uStack_66,uStack_68));
        local_a0 = (undefined4)local_240;
        local_98 = local_230;
        local_88 = local_250._0_4_;
        local_80 = local_238;
        uVar3 = *(ushort *)((longlong)plVar26 + 0xe);
        local_d8 = plVar20;
        iStack_d0 = iVar13;
        local_a8 = plVar28;
        local_90 = plVar24;
        if ((ulonglong)uVar3 != 0) {
          uVar23 = 0;
          do {
            piVar17 = (int *)(local_b0 + uVar23 * 4);
            if (local_b0 == 0) {
              piVar17 = (int *)0x0;
            }
            if (piVar17 == (int *)0x0) {
              piVar17 = &DAT_14cb28aa4;
            }
            if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
              uVar12 = *(uint *)((longlong)plStack_c8 + uVar23 * 4);
              uVar18 = uVar12 & 0xffff;
              lVar15 = *(longlong *)(param_1 + 0x80);
              if (*(longlong *)(param_1 + 0x80) == 0) {
                lVar15 = param_1 + 0x78;
              }
              iVar13 = *(int *)(lVar15 + (ulonglong)
                                         (*(int *)(param_1 + 0x88) - 1U &
                                         (*piVar17 + (uVar18 >> 2) + uVar18 * 0x40 + 0x9e3779b9 ^
                                         uVar18)) * 4);
              if (iVar13 != -1) {
                sVar4 = *(short *)(local_98 + uVar23 * 2);
                uVar5 = *(undefined2 *)((longlong)local_e0 + uVar23 * 2);
                lVar15 = *(longlong *)(param_1 + 0x40);
                do {
                  lVar14 = (longlong)iVar13;
                  if ((*(uint *)(lVar15 + lVar14 * 0x28) == uVar12) &&
                     (*(int *)(lVar15 + 4 + lVar14 * 0x28) == *piVar17)) {
                    if (sVar4 != -1) {
                      FUN_147fc9a3e(*(longlong *)(param_1 + 0x28) + 0x28,&local_78,sVar4,
                                    *(undefined2 *)(local_228 + 100));
                      uVar11 = uStack_1e0;
                      puVar2 = (uint *)CONCAT44(uStack_64,CONCAT22(uStack_66,uStack_68));
                      if (puVar2 != (uint *)0x0) {
                        local_1b8 = (undefined1  [4])*puVar2;
                        uStack_1b4 = puVar2[1];
                        uStack_1b0 = puVar2[2];
                        uStack_1ac = puVar2[3];
                        lVar15 = (longlong)(int)uStack_1e0;
                        uVar12 = (int)uStack_1e0 + 1;
                        uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar12);
                        if (uStack_1e0._4_4_ < uVar12) {
                          FUN_147fc9b6c(local_1e8,uVar11 & 0xffffffff);
                        }
                        *(undefined2 *)((longlong)local_1e8 + lVar15 * 0x14) = uVar5;
                        puVar2 = (uint *)((longlong)local_1e8 + lVar15 * 0x14 + 4);
                        *puVar2 = (uint)local_1b8;
                        puVar2[1] = uStack_1b4;
                        puVar2[2] = uStack_1b0;
                        puVar2[3] = uStack_1ac;
                      }
                      lVar15 = CONCAT26(uStack_72,CONCAT42(uStack_76,local_78));
                      if (lVar15 != 0) {
                        LOCK();
                        piVar17 = (int *)(lVar15 + 0x18);
                        *piVar17 = *piVar17 + -1;
                        UNLOCK();
                        if (CONCAT22(uStack_6e,uStack_70) == 1) {
                          ReleaseSRWLockShared
                                    ((PSRWLOCK)
                                     (CONCAT26(uStack_72,CONCAT42(uStack_76,local_78)) + 8));
                        }
                      }
                    }
                    break;
                  }
                  iVar13 = *(int *)(lVar15 + lVar14 * 0x28 + 0x20);
                } while (iVar13 != -1);
              }
            }
            uVar23 = uVar23 + 1;
          } while (uVar23 != uVar3);
        }
        FUN_147fc98ea(&local_e0);
        if (local_258 != (longlong *)0x0) {
          *(undefined4 *)((longlong)local_258 + 0x14) = 1;
        }
        local_1c0 = FUN_1403b8464(&local_1d0,local_1c0 + 1);
      } while (local_1c0 != local_214);
    }
    lVar15 = local_220;
    if (CONCAT26(uStack_1ca,CONCAT24(uStack_1cc,CONCAT22(uStack_1ce,local_1d0))) != 0) {
      lVar14 = CONCAT44(uStack_1c4,CONCAT22(uStack_1c6,CONCAT11(uStack_1c7,local_1c8)));
      if (*(char *)(lVar14 + 0x270) == '\0') {
        *(int *)(lVar14 + 0x264) = *(int *)(lVar14 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(lVar14 + 0x264) = *(int *)(lVar14 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_140 != 0) {
    FUN_1400020a8();
  }
  auVar10 = local_1e8;
  lVar14 = local_228;
  lVar16 = (longlong)(int)uStack_1e0;
  if (lVar16 != 0) {
    lVar22 = 0;
    do {
      plVar26 = local_c0;
      puVar1 = (undefined8 *)((longlong)auVar10 + lVar22 + 4);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      uStack_76 = (undefined4)uVar8;
      uStack_72 = (undefined2)((ulonglong)uVar8 >> 0x20);
      uStack_70 = (undefined2)((ulonglong)uVar8 >> 0x30);
      uStack_6e = (undefined2)uVar9;
      uStack_6c = (undefined2)((ulonglong)uVar9 >> 0x10);
      uStack_6a = (undefined2)((ulonglong)uVar9 >> 0x20);
      uStack_68 = (undefined2)((ulonglong)uVar9 >> 0x30);
      local_d8 = (longlong *)CONCAT62(local_d8._2_6_,*(undefined2 *)(lVar15 + 4));
      plStack_c8 = (longlong *)CONCAT35(plStack_c8._5_3_,0x100000000);
      iStack_d0 = (int)((ulonglong)uVar8 >> 0x20);
      uStack_cc = (undefined4)uVar9;
      local_d8 = (longlong *)CONCAT44(uStack_76,(undefined4)local_d8);
      plStack_c8 = (longlong *)CONCAT44(plStack_c8._4_4_,(int)((ulonglong)uVar9 >> 0x20));
      local_c0 = (longlong *)CONCAT62(local_c0._2_6_,*(undefined2 *)(lVar14 + 0x134));
      plVar24 = local_c0;
      local_c0._5_3_ = SUB83(plVar26,5);
      local_c0._0_5_ = (uint5)(uint)plVar24;
      local_e0 = &PTR_FUN_14ad047b0;
      uStack_180 = 0;
      local_168 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_158 = 0;
      local_188 = 0x10000000000;
      uStack_160 = 0x10000000000;
      FUN_147fc467c(&local_e0,*(longlong *)(param_1 + 0x28) + 0x28,
                    *(undefined2 *)((longlong)auVar10 + lVar22),&local_1a8);
      lVar22 = lVar22 + 0x14;
    } while (lVar16 * 0x14 != lVar22);
  }
  if (local_1e8 != (undefined1  [8])0x0) {
    FUN_1400020a8(local_1e8);
  }
  if ((local_60 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fc45e6 FUN_147fc45e6 body=148 status=ok
// SIG undefined FUN_147fc45e6(void)

undefined8 * FUN_147fc45e6(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[2] = param_1[2];
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_147fc9842(param_2,param_2 + 3);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc467c FUN_147fc467c body=363 status=ok
// SIG undefined FUN_147fc467c(void)

void FUN_147fc467c(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_108 [40];
  longlong local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong local_d0;
  undefined4 local_c8;
  undefined8 local_b8;
  undefined1 local_b0 [16];
  longlong local_a0;
  undefined8 local_98;
  undefined1 local_90 [40];
  undefined1 local_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar2 = FUN_1432d4db6(param_2,param_3);
  local_48 = 0;
  FUN_1400abb7c(local_68,uVar2);
  FUN_140dbcae2(param_4,local_90,local_68);
  FUN_140dba9e6(local_90,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(local_90,*(undefined2 *)(param_1 + 0x20));
  local_a0 = 0;
  local_98 = 0x200000000;
  local_b8 = *(undefined8 *)(param_2 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_2 + 0x230),*(char *)(param_1 + 0x24) * '\x02' + '\x01',
                local_90);
  cVar1 = FUN_1403b8874(local_90,local_68,0);
  if (cVar1 == '\0') {
    FUN_140dbc1e0(param_2,param_3,local_90);
  }
  FUN_1432d4ca4(param_2,&local_d0,param_3);
  if (local_d0 != 0) {
    FUN_140c37182(param_1 + 8,local_d0,local_c8);
    local_e0 = local_d0;
    local_d8 = local_c8;
    local_d4 = 1;
    FUN_14163869e(local_b0,&local_e0,&local_b8);
  }
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc47e8 FUN_147fc47e8 body=215 status=ok
// SIG undefined FUN_147fc47e8(void)

void FUN_147fc47e8(longlong param_1,ushort *param_2,undefined8 *param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  
  uVar1 = *param_2;
  uVar5 = (uVar1 >> 2) + 0x9e3779b9 + (uint)uVar1 * 0x40 + *(int *)(param_2 + 2) ^ (uint)uVar1;
  iVar3 = FUN_1447addd0(param_2 + 4,0x10);
  uVar5 = (uVar5 >> 2) + 0x9e3779b9 + uVar5 * 0x40 + iVar3 ^ uVar5;
  uVar2 = *(undefined8 *)(param_2 + 0xc);
  iVar3 = FUN_144a788f7();
  lVar4 = FUN_147fc9e96(param_1 + 0x40,
                        (uVar5 >> 2) + 0x9e3779b9 +
                        (int)((ulonglong)uVar2 >> 0x20) + iVar3 + uVar5 * 0x40 ^ uVar5,param_2);
  iVar3 = *(int *)(lVar4 + 0x18);
  if ((longlong)iVar3 < 2) {
    *(uint *)(lVar4 + 0x18) = iVar3 + 1U;
    if (*(uint *)(lVar4 + 0x1c) < iVar3 + 1U) {
      FUN_147fca4ea(lVar4,iVar3);
    }
    if (*(longlong *)(lVar4 + 0x10) != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
    }
    *(undefined8 *)(lVar4 + (longlong)iVar3 * 8) = *param_3;
  }
  return;
}



// FUNCTION 147fc48c0 FUN_147fc48c0 body=216 status=ok
// SIG undefined FUN_147fc48c0(void)

void FUN_147fc48c0(longlong param_1,ushort *param_2,undefined8 param_3)

{
  longlong lVar1;
  ushort uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = *param_2;
  uVar5 = (uVar2 >> 2) + 0x9e3779b9 + (uint)uVar2 * 0x40 + *(int *)(param_2 + 2) ^ (uint)uVar2;
  iVar4 = FUN_1447addd0(param_2 + 4,0x10);
  uVar5 = (uVar5 >> 2) + 0x9e3779b9 + uVar5 * 0x40 + iVar4 ^ uVar5;
  uVar3 = *(undefined8 *)(param_2 + 0xc);
  iVar4 = FUN_144a788f7();
  iVar4 = FUN_147fc9f1e((longlong *)(param_1 + 0x40),
                        (uVar5 >> 2) + 0x9e3779b9 +
                        (int)((ulonglong)uVar3 >> 0x20) + iVar4 + uVar5 * 0x40 ^ uVar5,param_2);
  if ((iVar4 != -1) &&
     (lVar1 = *(longlong *)(param_1 + 0x40) + (longlong)iVar4 * 0x48, lVar1 != -0x20 && lVar1 != 0))
  {
    FUN_147fc4998(param_3);
    return;
  }
  return;
}



// FUNCTION 147fc4998 FUN_147fc4998 body=116 status=ok
// SIG undefined FUN_147fc4998(void)

void FUN_147fc4998(longlong param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  
  uVar1 = *(uint *)((longlong)param_2 + 0x18);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x1c) - iVar2) < uVar1) {
      FUN_147fca4ea(param_1,iVar2);
    }
    _Src = *(void **)((longlong)param_2 + 0x10);
    if (*(void **)((longlong)param_2 + 0x10) == (void *)0x0) {
      _Src = param_2;
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar3 = param_1;
    }
    memcpy((void *)(lVar3 + (longlong)iVar2 * 8),_Src,(longlong)(int)uVar1 << 3);
    return;
  }
  return;
}



// FUNCTION 147fc4a0c FUN_147fc4a0c body=837 status=ok
// SIG undefined FUN_147fc4a0c(void)

void FUN_147fc4a0c(code *param_1,undefined8 param_2)

{
  undefined1 auVar1 [8];
  undefined1 auVar2 [8];
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_1e8 [32];
  code **local_1c8;
  code **local_1c0;
  code **local_1b8;
  undefined4 local_1a4;
  undefined1 *local_1a0;
  undefined8 *local_198;
  undefined8 local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined1 local_16e [6];
  undefined8 local_168;
  undefined1 local_160 [8];
  undefined4 local_158;
  ulonglong local_154;
  undefined4 local_14c;
  undefined1 local_147;
  undefined4 local_144;
  undefined1 local_140;
  undefined2 local_138;
  undefined2 local_136;
  undefined2 local_134;
  ushort local_130;
  undefined4 local_12c;
  undefined1 local_128;
  ushort local_118;
  longlong local_d0;
  longlong local_b8;
  code *local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar4 = FUN_14009d2a0();
  lVar5 = FUN_14038fb82();
  lVar6 = FUN_145e3d254();
  lVar7 = FUN_147fc4d52(*(undefined8 *)(param_1 + 0x28));
  bVar3 = (byte)local_130;
  local_136 = *(undefined2 *)(lVar6 + 2);
  local_138 = *(undefined2 *)(lVar4 + 0x50);
  local_134 = *(undefined2 *)(lVar4 + 0xbc);
  local_130 = (ushort)(byte)local_130;
  local_12c = 0x6ff;
  local_128 = 0;
  local_190._0_2_ = CONCAT11(2,bVar3);
  local_1c0 = (code **)&local_168;
  local_168 = FUN_147fca8ea;
  local_160[0] = 3;
  local_1c8 = (code **)&local_190;
  local_1b8 = &local_58;
  local_58 = param_1;
  FUN_147fca5ec(&local_138,&local_174,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
  if (lVar7 != 0) {
    if (0 < *(int *)(lVar7 + 0x94)) {
      local_160 = *(undefined1 (*) [8])(lVar4 + 0xce);
      local_158 = *(undefined4 *)(lVar4 + 0xd6);
      local_154 = *(ulonglong *)(lVar4 + 0xbc);
      local_1a4 = *(undefined4 *)(lVar4 + 0xc4);
      local_168._0_6_ = CONCAT24(*(undefined2 *)(lVar4 + 0x62),*(undefined4 *)(lVar4 + 0x50));
      local_168 = (code *)CONCAT26(*(undefined2 *)(lVar6 + 4),(undefined6)local_168);
      local_147 = 0;
      local_144 = 0x6ff;
      local_140 = 0;
      local_16e._0_2_ = *(ushort *)(lVar5 + 0x84);
      local_188 = local_16e;
      local_16e._2_2_ = *(undefined2 *)(lVar5 + 0x6c);
      local_180 = local_16e + 4;
      local_14c = local_1a4;
      FUN_147fc4db4(&local_168,&local_138);
      local_1c8 = (code **)(local_16e + 4);
      local_16e._4_2_ = local_118 & 0xfdff;
      local_58 = FUN_147fcafee;
      local_50 = 3;
      local_1c0 = &local_58;
      local_1b8 = (code **)&local_190;
      local_190 = param_1;
      FUN_147fcad8a(&local_138,&local_178,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      thunk_FUN_1406adae8(param_2,local_174,local_178);
    }
    auVar1 = local_160;
    if (0 < *(int *)(lVar7 + 0x90)) {
      local_168._0_6_ = CONCAT24(*(undefined2 *)(lVar4 + 0x62),*(undefined4 *)(lVar4 + 0x50));
      local_168 = (code *)CONCAT26(*(undefined2 *)(lVar6 + 4),(undefined6)local_168);
      local_160._2_2_ = *(undefined2 *)(lVar4 + 0xbc);
      local_160._0_2_ = *(undefined2 *)(lVar4 + 0xce);
      auVar2 = local_160;
      local_160._6_2_ = auVar1._6_2_;
      local_160._0_5_ = auVar2._0_5_;
      local_160[5] = 0;
      local_158 = 0x6ff;
      local_154 = local_154 & 0xffffffffffffff00;
      local_16e._4_2_ = *(ushort *)(lVar5 + 0x30);
      local_1a0 = local_16e + 4;
      local_198 = &local_168;
      FUN_147fc4e58(&local_168,&local_138);
      local_1c8 = (code **)local_16e;
      local_16e._0_2_ = (ushort)local_12c & 0xfdff;
      local_58 = FUN_147fcc28e;
      local_50 = 3;
      local_1c0 = &local_58;
      local_1b8 = (code **)&local_190;
      local_190 = param_1;
      FUN_147fcc02e(&local_138,&local_178,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
      if (local_d0 != 0) {
        FUN_1400020a8();
      }
      thunk_FUN_1406adae8(param_2,local_174,local_178);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc4d52 FUN_147fc4d52 body=96 status=ok
// SIG undefined FUN_147fc4d52(void)

void FUN_147fc4d52(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145b66fba();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_18);
  }
  FUN_1400a1050(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc4db4 FUN_147fc4db4 body=162 status=ok
// SIG undefined FUN_147fc4db4(void)

undefined8 * FUN_147fc4db4(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar8 = *param_1;
  uVar9 = param_1[1];
  uVar1 = *(undefined4 *)(param_1 + 2);
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 3);
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x1c);
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)((longlong)param_1 + 0x24);
  uVar7 = *(undefined4 *)(param_1 + 5);
  *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(undefined4 *)(param_2 + 4) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar6;
  *(undefined4 *)(param_2 + 5) = uVar7;
  *(undefined4 *)(param_2 + 2) = uVar1;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar2;
  *(undefined4 *)(param_2 + 3) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar4;
  *param_2 = uVar8;
  param_2[1] = uVar9;
  param_2[10] = 0x10000000000;
  param_2[0xf] = 0x10000000000;
  param_2[0x16] = 0x10000000000;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x1b] = 0x10000000000;
  FUN_147fcace2(param_2,param_2 + 6);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1403b5126(param_2 + 6,&local_38,2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc4e58 FUN_147fc4e58 body=148 status=ok
// SIG undefined FUN_147fc4e58(void)

undefined8 * FUN_147fc4e58(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[2] = param_1[2];
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_147fcbf68(param_2,param_2 + 3);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc4eee FUN_147fc4eee body=823 status=ok
// SIG undefined FUN_147fc4eee(void)

void FUN_147fc4eee(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined1 auVar2 [8];
  undefined1 auVar3 [8];
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined2 *local_1a0;
  undefined2 *local_198;
  undefined8 *local_190;
  longlong local_188;
  undefined2 *local_180;
  undefined2 *local_178;
  undefined8 local_170;
  undefined1 local_168 [8];
  undefined4 local_160;
  ulonglong local_15c;
  undefined4 local_154;
  undefined1 local_14f;
  undefined4 local_14c;
  undefined1 local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined2 local_12c;
  undefined2 local_12a;
  undefined2 local_128;
  undefined2 local_126;
  undefined2 local_124;
  undefined1 local_11f;
  undefined4 local_11c;
  undefined1 local_118;
  longlong local_c0;
  longlong local_a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar4 = FUN_14009d2a0();
  lVar5 = FUN_14038fb82();
  lVar6 = FUN_145e3d254();
  lVar7 = FUN_147fc4d52(*(undefined8 *)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
    FUN_147fc9c32(param_1 + 0x40);
    FUN_147fc9d76(param_1 + 0x40);
  }
  local_126 = *(undefined2 *)(lVar6 + 2);
  local_128 = *(undefined2 *)(lVar4 + 0x50);
  local_124 = *(undefined2 *)(lVar4 + 0xbc);
  local_11f = 0;
  local_11c = 0x6ff;
  local_118 = 0;
  local_1b0 = &local_170;
  local_1b8 = param_3;
  local_170 = param_1;
  FUN_1438d596e(&local_128,&local_138,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
  if (local_138 != (undefined8 *)0x0) {
    FUN_147552ffc(param_2,0xffff,&local_138);
  }
  if (lVar7 != 0) {
    if (0 < *(int *)(lVar7 + 0x94)) {
      local_168 = *(undefined1 (*) [8])(lVar4 + 0xce);
      local_160 = *(undefined4 *)(lVar4 + 0xd6);
      local_15c = *(ulonglong *)(lVar4 + 0xbc);
      local_154 = *(undefined4 *)(lVar4 + 0xc4);
      local_170._0_6_ = CONCAT24(*(undefined2 *)(lVar4 + 0x62),*(undefined4 *)(lVar4 + 0x50));
      local_170 = CONCAT26(*(undefined2 *)(lVar6 + 4),(undefined6)local_170);
      local_14f = 0;
      local_14c = 0x6ff;
      local_148 = 0;
      local_12c = *(undefined2 *)(lVar5 + 0x84);
      local_180 = &local_12c;
      local_12a = *(undefined2 *)(lVar5 + 0x6c);
      local_178 = &local_128;
      FUN_147fc4db4(&local_170,&local_128);
      local_1b0 = &local_188;
      local_1b8 = param_3;
      local_188 = param_1;
      FUN_1438d5e7c(&local_128,&local_140,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
      if (local_140 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_140 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_140)(local_140,1);
        }
      }
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
    }
    auVar2 = local_168;
    if (0 < *(int *)(lVar7 + 0x90)) {
      local_170._0_6_ = CONCAT24(*(undefined2 *)(lVar4 + 0x62),*(undefined4 *)(lVar4 + 0x50));
      local_170 = CONCAT26(*(undefined2 *)(lVar6 + 4),(undefined6)local_170);
      local_168._2_2_ = *(undefined2 *)(lVar4 + 0xbc);
      local_168._0_2_ = *(undefined2 *)(lVar4 + 0xce);
      auVar3 = local_168;
      local_168._6_2_ = auVar2._6_2_;
      local_168._0_5_ = auVar3._0_5_;
      local_168[5] = 0;
      local_160 = 0x6ff;
      local_15c = local_15c & 0xffffffffffffff00;
      local_12c = *(undefined2 *)(lVar5 + 0x30);
      local_1a0 = &local_12c;
      local_198 = &local_12a;
      FUN_147fc4e58(&local_170,&local_128);
      local_1b0 = &local_188;
      local_1b8 = param_3;
      local_188 = param_1;
      FUN_1438d6310(&local_128,&local_190,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
      if (local_190 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_190 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_190)(local_190,1);
        }
      }
      if (local_c0 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_138 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_138 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_138)(local_138,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc522a FUN_147fc522a body=144 status=ok
// SIG undefined FUN_147fc522a(void)

void FUN_147fc522a(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    lVar1 = FUN_144a78d6a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_40 = *(undefined8 *)(param_3 + 0x18);
      local_30 = &local_40;
      local_38 = param_2;
      FUN_147fce5e8(param_1 + 0x98,local_24);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc52bc FUN_147fc52bc body=371 status=ok
// SIG undefined FUN_147fc52bc(void)

undefined8 FUN_147fc52bc(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = param_1 + 0x70;
  lVar3 = FUN_14479d2ce(lVar4);
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 0x78) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(lVar4,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(lVar4,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_144a797b2();
  if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) && (lVar4 = FUN_144a6c4d8(), lVar4 != 0)) &&
     (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) {
    if (param_2 == 0) {
      return 0;
    }
    if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30) {
      return 0;
    }
    lVar4 = FUN_144a78d6a();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
       (*(longlong *)(param_2 + 0xa8) != 0)) {
      lVar4 = *(longlong *)(*(longlong *)(param_2 + 0xa8) + 0x10);
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38)) {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        return CONCAT71((int7)((ulonglong)lVar4 >> 8),
                        *(longlong *)(lVar4 + (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)
        ;
      }
    }
  }
  return 0;
}



// FUNCTION 147fc5430 FUN_147fc5430 body=296 status=ok
// SIG undefined FUN_147fc5430(void)

void FUN_147fc5430(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 != 0) {
    lVar3 = FUN_144a6c4d8();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
      uVar1 = FUN_1447addd0(param_2,0x10);
      iVar2 = FUN_147fce85e((longlong *)(param_1 + 0x98),uVar1,param_2);
      if ((iVar2 != -1) &&
         (lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x98), lVar5 = lVar3 + 0x10,
         lVar5 != 0 && lVar3 != 0)) {
        FUN_1400021e4(lVar5,&local_38);
        puVar6 = local_38;
        if (local_30 == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        uVar4 = FUN_144a78d6a();
        lVar3 = FUN_140277b32(uVar4,param_3,puVar6,0);
        if (local_38 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (lVar3 != 0) {
          iVar2 = *(int *)(param_4 + 0x10);
          *(uint *)(param_4 + 0x10) = iVar2 + 1U;
          if (*(uint *)(param_4 + 0x14) < iVar2 + 1U) {
            FUN_14571f162(param_4,iVar2);
          }
          lVar5 = *(longlong *)(param_4 + 8);
          if (*(longlong *)(param_4 + 8) == 0) {
            lVar5 = param_4;
          }
          *(longlong *)(lVar5 + (longlong)iVar2 * 8) = lVar3;
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fc5560 FUN_147fc5560 body=62 status=ok
// SIG undefined FUN_147fc5560(void)

undefined8 FUN_147fc5560(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a78d6a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return *(undefined8 *)(param_2 + 0xa8);
    }
  }
  return 0;
}



// FUNCTION 147fc55c2 FUN_147fc55c2 body=469 status=ok
// SIG undefined FUN_147fc55c2(void)

undefined8 FUN_147fc55c2(undefined8 param_1,longlong param_2,undefined4 *param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [48];
  undefined1 local_88;
  byte local_86;
  byte local_84;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_2 != 0) {
    lVar8 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
    if (lVar8 != 0) {
      FUN_1411371f6(local_b8);
      local_88 = 1;
      local_84 = local_84 | 0x40;
      local_86 = local_86 | 0xc;
      uVar9 = FUN_1459944c6();
      local_128 = local_b8;
      lVar8 = FUN_141137228(lVar8,uVar9,0,0);
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      uVar3 = param_3[3];
      uVar4 = param_3[4];
      uVar5 = param_3[5];
      uVar6 = param_3[6];
      uVar7 = param_3[7];
      *(undefined4 *)(lVar8 + 0x398) = *param_3;
      *(undefined4 *)(lVar8 + 0x39c) = uVar1;
      *(undefined4 *)(lVar8 + 0x3a0) = uVar2;
      *(undefined4 *)(lVar8 + 0x3a4) = uVar3;
      *(undefined4 *)(lVar8 + 0x3a8) = uVar4;
      *(undefined4 *)(lVar8 + 0x3ac) = uVar5;
      *(undefined4 *)(lVar8 + 0x3b0) = uVar6;
      *(undefined4 *)(lVar8 + 0x3b4) = uVar7;
      *(undefined8 *)(lVar8 + 0x3b8) = *(undefined8 *)(param_3 + 8);
      FUN_1400bbfc4(&local_118,param_2);
      *(undefined4 *)(lVar8 + 0x3c8) = (undefined4)local_118;
      *(undefined4 *)(lVar8 + 0x3cc) = local_118._4_4_;
      *(undefined4 *)(lVar8 + 0x3d0) = (undefined4)uStack_110;
      *(undefined4 *)(lVar8 + 0x3d4) = uStack_110._4_4_;
      if ((undefined8 *)(lVar8 + 0x3c8) == &local_118) {
        if (local_108 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(lVar8 + 0x3d8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar8 + 0x3d8) = local_108;
        local_108 = 0;
        *(undefined4 *)(lVar8 + 0x3e0) = uStack_100;
        *(undefined4 *)(lVar8 + 0x3e4) = uStack_fc;
      }
      FUN_147fc62f8(lVar8);
      *param_4 = lVar8;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      uStack_fc = 0x3ff00000;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      uStack_d4 = 0x3ff00000;
      uStack_d0 = 0;
      uStack_cc = 0x3ff00000;
      local_c8 = 0x3ff0000000000000;
      uStack_c0 = 0;
      local_128 = (undefined1 *)((ulonglong)local_128 & 0xffffffffffffff00);
      FUN_14113775c(lVar8,&local_118,0,0);
      uVar9 = *(undefined8 *)(lVar8 + 0x3c0);
      if (local_78 != 0) {
        if (local_68 == (longlong *)0x0) {
          local_68 = local_58;
        }
        (**(code **)(*local_68 + 0x10))();
      }
      goto LAB_147fc560c;
    }
  }
  uVar9 = 0;
LAB_147fc560c:
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc5798 FUN_147fc5798 body=401 status=ok
// SIG undefined FUN_147fc5798(void)

void FUN_147fc5798(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  FUN_1409f5c24(puVar3);
  *puVar3 = &PTR_FUN_14ad03640;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14ad04a80;
  plVar4[2] = (longlong)puVar3;
  if ((puVar3 != (undefined8 *)0x0) &&
     (((puVar3[1] == 0 || (puVar3[2] == 0)) || (*(int *)(puVar3[2] + 8) < 1)))) {
    if (plVar4 == (longlong *)0x0) {
      puVar3[1] = puVar3;
      plVar5 = (longlong *)puVar3[2];
      if (plVar5 != (longlong *)0x0) {
LAB_147fc584e:
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
        puVar3[2] = plVar4;
        if (plVar4 != (longlong *)0x0) goto LAB_147fc587c;
      }
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
        plVar5 = (longlong *)puVar3[2];
        if (plVar5 != (longlong *)0x0) goto LAB_147fc584e;
        puVar3[2] = plVar4;
      }
LAB_147fc587c:
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
  *(undefined8 **)(param_1 + 0x360) = puVar3;
  plVar5 = *(longlong **)(param_1 + 0x368);
  if (plVar4 == plVar5) {
    if (plVar4 == (longlong *)0x0) goto LAB_147fc58fd;
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_147fc58fd;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar5 = plVar4;
  }
  else {
    *(longlong **)(param_1 + 0x368) = plVar4;
    if (plVar5 == (longlong *)0x0) goto LAB_147fc58fd;
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_147fc58fd;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_147fc58fd:
  FUN_14485c47a(param_1 + 0x4a0,param_3);
  FUN_1475780a0(param_1,param_2,param_4);
  return;
}



// FUNCTION 147fc592a FUN_147fc592a body=178 status=ok
// SIG undefined FUN_147fc592a(void)

undefined8 FUN_147fc592a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14179efe6(param_1,&local_48);
  local_38 = local_48;
  local_30 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  local_58 = &local_38;
  FUN_14755598a(param_1 + 0x10,param_2,param_3,&DAT_14cb28aa4);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc59de FUN_147fc59de body=22 status=ok
// SIG undefined FUN_147fc59de(void)

undefined8 FUN_147fc59de(undefined8 param_1,undefined8 param_2)

{
  FUN_1438d67a6();
  return param_2;
}



// FUNCTION 147fc5a0e FUN_147fc5a0e body=843 status=ok
// SIG undefined FUN_147fc5a0e(void)

void FUN_147fc5a0e(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  void *_Src;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  void *local_48;
  ulonglong uStack_40;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1427dc336(local_30);
  switchD_143c3d4dc::caseD_3d(param_1,local_30);
  lVar5 = param_1 + 0x70;
  lVar3 = FUN_14479d2ce(lVar5);
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar3 = FUN_140007850();
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar3 == 0) || (cVar2 == '\0')) {
        FUN_14485c47a(lVar5,lVar3);
        if (lVar3 == 0) goto LAB_147fc5ba9;
      }
      else {
        uVar1 = *(uint *)(lVar3 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(lVar5,lVar3);
        }
      }
      if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0) goto LAB_147fc5a65;
    }
  }
  else {
LAB_147fc5a65:
    lVar4 = FUN_144a797b2();
    if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) && (lVar4 = FUN_144a6c4d8(), lVar4 != 0)) &&
       ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)))) {
      lVar3 = FUN_14479d2ce(lVar5);
      if (lVar3 == 0) {
        if (*(longlong *)(param_1 + 0x78) != 0) {
          lVar3 = FUN_140007850();
          cVar2 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar3 == 0) || (cVar2 == '\0')) {
            FUN_14485c47a(lVar5,lVar3);
            if (lVar3 == 0) goto LAB_147fc5cb5;
          }
          else {
            uVar1 = *(uint *)(lVar3 + 0xc);
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar4 = 0;
            }
            if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(lVar5,lVar3);
            }
          }
          if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0) goto LAB_147fc5acf;
        }
LAB_147fc5cb5:
        lVar4 = 0;
      }
      else {
LAB_147fc5acf:
        lVar5 = FUN_144a797b2();
        if ((((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) ||
            (lVar5 = FUN_144a6c4d8(), lVar5 == 0)) ||
           (*(int *)(lVar3 + 0x38) < *(int *)(lVar5 + 0x38))) goto LAB_147fc5cb5;
        lVar4 = 0;
        if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30) {
          lVar4 = lVar3;
        }
      }
      local_48 = (void *)0x0;
      uStack_40 = 0;
      FUN_1401031ac(lVar4,0,&local_48);
      FUN_1446ddc76(&local_50,"BoundActorClass",1);
      _Src = local_48;
      lVar5 = (longlong)(int)uStack_40;
      local_70 = local_50;
      local_68 = (void *)0x0;
      local_60 = (int)uStack_40;
      if (lVar5 == 0) {
        local_5c = 0;
      }
      else {
        FUN_1446dd670(&local_68,uStack_40 & 0xffffffff,0);
        memcpy(local_68,_Src,lVar5 * 2);
      }
      local_58 = 1;
      FUN_1407c67d8(param_2);
      goto joined_r0x000147fc5c05;
    }
  }
LAB_147fc5ba9:
  FUN_1400b22c2(&local_48,"(None)");
  FUN_1446ddc76(&local_98,"BoundActorClass",1);
  local_90 = local_98;
  local_88 = local_48;
  uStack_80 = uStack_40;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_78 = 1;
  FUN_1407c67d8(param_2);
  _Src = local_48;
joined_r0x000147fc5c05:
  if (_Src != (void *)0x0) {
    FUN_1400020a8(_Src);
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc5d60 FUN_147fc5d60 body=38 status=ok
// SIG undefined FUN_147fc5d60(void)

void FUN_147fc5d60(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147fc5d86();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147fc5d86 FUN_147fc5d86 body=70 status=ok
// SIG undefined FUN_147fc5d86(void)

longlong FUN_147fc5d86(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140007850(param_1 + 0x3c8);
  if (lVar1 != 0) {
    lVar2 = FUN_145898f48();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 147fc5dcc FUN_147fc5dcc body=78 status=ok
// SIG undefined FUN_147fc5dcc(void)

void FUN_147fc5dcc(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = *(longlong *)(param_1 + 0x3c0);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x298) == 0)) {
    lVar1 = 0;
  }
  else if (DAT_14c950c29 == '\x01') {
    FUN_14689c22e(lVar1);
  }
  *param_3 = lVar1;
  return;
}



// FUNCTION 147fc5e1a FUN_147fc5e1a body=38 status=ok
// SIG undefined FUN_147fc5e1a(void)

void FUN_147fc5e1a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147fc5e40();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147fc5e40 FUN_147fc5e40 body=72 status=ok
// SIG undefined FUN_147fc5e40(void)

longlong FUN_147fc5e40(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140081d40(param_1 + 0x3c8,0);
  if (lVar1 != 0) {
    lVar2 = FUN_145898f48();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 147fc5e8e FUN_147fc5e8e body=235 status=ok
// SIG undefined FUN_147fc5e8e(void)

void FUN_147fc5e8e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
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
  FUN_147fc5f7a(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc5f7a FUN_147fc5f7a body=189 status=ok
// SIG undefined FUN_147fc5f7a(void)

void FUN_147fc5f7a(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14485c47a(param_1 + 1000);
  *(undefined1 *)(param_1 + 0x3f0) = param_3;
  lVar2 = FUN_147fc5d86(param_1);
  if (((lVar2 != 0) && (*(longlong *)(param_1 + 0x3c0) != 0)) && (*(longlong *)(lVar2 + 0x68) != 0))
  {
    iVar1 = FUN_1415c6332();
    if (0 < iVar1) {
      lVar2 = FUN_14574ef0a(*(undefined8 *)(lVar2 + 0x68),0);
      local_38 = *(int *)(lVar2 + 0xa0);
      iStack_34 = *(int *)(lVar2 + 0xa4);
      iStack_30 = *(int *)(lVar2 + 0xa8);
      iStack_2c = *(int *)(lVar2 + 0xac);
      if (((iStack_34 != 0 || local_38 != 0) || iStack_30 != 0) || iStack_2c != 0) {
        FUN_140e06640(*(longlong *)(param_1 + 0x3c0) + 0x38,&local_38,&DAT_14cb28aa4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc6038 FUN_147fc6038 body=156 status=ok
// SIG undefined FUN_147fc6038(void)

void FUN_147fc6038(undefined8 param_1,longlong param_2)

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
  FUN_147fc60d6(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc60d6 FUN_147fc60d6 body=248 status=ok
// SIG undefined FUN_147fc60d6(void)

void FUN_147fc60d6(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_1432dd8b8(*(undefined8 *)(param_1 + 0x3c0));
  if (cVar2 == '\0') {
    FUN_1400bbfc4(&local_48,param_2);
    *(undefined4 *)(param_1 + 0x3c8) = local_48;
    *(undefined4 *)(param_1 + 0x3cc) = uStack_44;
    *(undefined4 *)(param_1 + 0x3d0) = uStack_40;
    *(undefined4 *)(param_1 + 0x3d4) = uStack_3c;
    if ((undefined4 *)(param_1 + 0x3c8) == &local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x3d8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x3d8) = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x3e0) = local_30;
      *(undefined4 *)(param_1 + 0x3e4) = local_2c;
    }
    if (param_2 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x3c0);
      uVar3 = FUN_1447210f0(param_1);
      FUN_147fc5798(uVar1,param_2,uVar3,param_1 + 0x398);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc61d2 FUN_147fc61d2 body=104 status=ok
// SIG undefined FUN_147fc61d2(void)

void FUN_147fc61d2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb28c80) {
    FUN_144b3d300(&DAT_14cb28c80);
    if (DAT_14cb28c80 == -1) {
      FUN_1446f470e(&DAT_14cb28c78,L"SequencePlayer",1);
      _Init_thread_footer(&DAT_14cb28c80);
      return;
    }
  }
  return;
}



// FUNCTION 147fc6240 FUN_147fc6240 body=140 status=ok
// SIG undefined FUN_147fc6240(void)

void FUN_147fc6240(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c2c6fa();
  FUN_1446f470e(&local_38,L"SequencePlayer",1);
  uVar1 = FUN_1459944c6();
  FUN_1459944c6();
  uVar1 = FUN_140f1fabf(uVar1,local_38);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc62ce FUN_147fc62ce body=41 status=ok
// SIG undefined FUN_147fc62ce(void)

void FUN_147fc62ce(longlong param_1)

{
  FUN_141348dd0();
  FUN_140d63f24(*(undefined8 *)(param_1 + 0x3c0),param_1);
  FUN_147fc62f8(param_1);
  return;
}



// FUNCTION 147fc62f8 FUN_147fc62f8 body=399 status=ok
// SIG undefined FUN_147fc62f8(void)

void FUN_147fc62f8(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_58 [3];
  undefined8 *local_40;
  undefined4 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    uVar3 = FUN_1447210f0();
    cVar2 = FUN_144b2c332(uVar3);
    if (cVar2 != '\0') {
      lVar4 = FUN_147fc5d86(param_1);
      if (lVar4 == 0) {
        cVar2 = (*(code *)PTR_FUN_14c75b118)();
        if (cVar2 == '\0') {
          lVar4 = FUN_147fc5e40(param_1);
          if (lVar4 != *(longlong *)(*(longlong *)(param_1 + 0x3c0) + 0x298)) goto LAB_147fc636f;
        }
        else {
          local_40 = (undefined8 *)0x0;
          local_38 = 0;
          FUN_1446efa72(&local_40,0,3,0x10);
          puVar1 = local_40;
          local_38 = 3;
          *local_40 = &PTR_LAB_149e665f0;
          uVar3 = FUN_144a3f946();
          puVar1[2] = uVar3;
          *puVar1 = &PTR_FUN_14ad04860;
          puVar1[3] = 0;
          FUN_14485c47a(puVar1 + 3,param_1);
          *(undefined4 *)(puVar1 + 5) = 0;
          puVar1[4] = FUN_147fc6508;
          local_30 = *(longlong *)(param_1 + 0x3c8);
          if (local_30 == 0) {
            local_58[0] = 0;
            local_58[1] = 0;
          }
          else {
            FUN_1400021e4(&local_30,local_58);
          }
          local_68 = 0xffffffff;
          FUN_1427d6730(local_58,&local_40,0,0);
          if (local_58[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
      else if (lVar4 != *(longlong *)(*(longlong *)(param_1 + 0x3c0) + 0x298)) {
LAB_147fc636f:
        FUN_1447210f0(param_1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fc64a2 FUN_147fc64a2 body=45 status=ok
// SIG undefined FUN_147fc64a2(void)

void FUN_147fc64a2(longlong param_1)

{
  FUN_1405f1eac();
  if ((*(byte *)(param_1 + 0x398) & 1) == 0) {
    return;
  }
  FUN_140ef5ee2(*(undefined8 *)(param_1 + 0x3c0));
  return;
}



// FUNCTION 147fc64d0 FUN_147fc64d0 body=56 status=ok
// SIG undefined FUN_147fc64d0(void)

void FUN_147fc64d0(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    FUN_140c7df0a();
    FUN_140873278(*(undefined8 *)(param_1 + 0x3c0));
  }
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 147fc6508 FUN_147fc6508 body=98 status=ok
// SIG undefined FUN_147fc6508(void)

void FUN_147fc6508(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_4 == 1) {
    lVar2 = FUN_147fc5d86();
    lVar1 = *(longlong *)(param_1 + 0x3c0);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x298) != lVar2)) {
      uVar3 = FUN_1447210f0(param_1);
      FUN_147fc5798(lVar1,lVar2,uVar3,param_1 + 0x398);
      return;
    }
  }
  return;
}



// FUNCTION 147fc656a FUN_147fc656a body=248 status=ok
// SIG undefined FUN_147fc656a(void)

ulonglong FUN_147fc656a(longlong param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  
  lVar2 = FUN_147fc5d86(param_1 + -0x390);
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (lVar2 != 0) {
    iVar7 = 0;
    if (*(longlong *)(lVar2 + 0x68) == 0) {
      iVar5 = 0;
      iVar8 = 0;
      iVar4 = 0;
    }
    else {
      iVar1 = FUN_1415c6332();
      iVar5 = 0;
      iVar8 = 0;
      iVar4 = 0;
      iVar7 = 0;
      if (0 < iVar1) {
        lVar2 = FUN_14574ef0a(*(undefined8 *)(lVar2 + 0x68),0);
        iVar8 = *(int *)(lVar2 + 0xa0);
        iVar5 = *(int *)(lVar2 + 0xa4);
        iVar7 = *(int *)(lVar2 + 0xa8);
        iVar4 = *(int *)(lVar2 + 0xac);
      }
    }
    if ((((((iVar5 != 0 || iVar7 != 0) || iVar8 != 0) || iVar4 != 0) && (iVar8 == *param_2)) &&
        (iVar5 == param_2[1])) && ((iVar7 == param_2[2] && (iVar4 == param_2[3])))) {
      uVar3 = FUN_14479d2ce(param_1 + 0x58);
      if (uVar3 != 0) {
        iVar7 = *(int *)(param_4 + 0x10);
        *(uint *)(param_4 + 0x10) = iVar7 + 1U;
        if (*(uint *)(param_4 + 0x14) < iVar7 + 1U) {
          FUN_14571f162(param_4,iVar7);
        }
        lVar2 = *(longlong *)(param_4 + 8);
        if (*(longlong *)(param_4 + 8) == 0) {
          lVar2 = param_4;
        }
        *(ulonglong *)(lVar2 + (longlong)iVar7 * 8) = uVar3;
        uVar6 = uVar3;
      }
      uVar6 = CONCAT71((int7)(uVar6 >> 8),*(undefined1 *)(param_1 + 0x60)) ^ 1;
    }
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 147fc6666 FUN_147fc6666 body=512 status=ok
// SIG undefined FUN_147fc6666(void)

void FUN_147fc6666(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  uint local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = CONCAT22(local_48._2_2_,0x100);
  uStack_44 = 0x3f800000;
  uStack_40 = 0;
  local_38 = local_38 & 0xffffff00;
  uStack_34 = 2;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
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
  plVar2 = &local_60;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = CONCAT44(uStack_34,local_38);
  local_78 = local_48;
  uStack_74 = uStack_44;
  uStack_70 = (undefined4)uStack_40;
  uStack_6c = uStack_40._4_4_;
  local_88 = (undefined4)local_58;
  uStack_84 = local_58._4_4_;
  uStack_80 = (undefined4)uStack_50;
  uStack_7c = uStack_50._4_4_;
  uVar1 = FUN_147fc55c2(local_28,local_30,&local_88,plVar2);
  *param_3 = uVar1;
  if ((DAT_14c950c29 == '\x01') && (*plVar2 != 0)) {
    FUN_14689c22e();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc6876 FUN_147fc6876 body=237 status=ok
// SIG undefined FUN_147fc6876(void)

void FUN_147fc6876(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_a78 [40];
  undefined8 local_a50;
  undefined1 local_a48 [2264];
  longlong local_170;
  longlong local_e8;
  char local_58;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a78;
  local_a50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147fc6964(local_a48,local_a50);
  FUN_147fc6a5e(param_3,local_a48);
  if (local_58 == '\x01') {
    local_58 = '\0';
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if (local_170 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_a78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc6964 FUN_147fc6964 body=249 status=ok
// SIG undefined FUN_147fc6964(void)

void * FUN_147fc6964(void *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *_Src;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  _Src = (void *)(**(code **)(**(longlong **)(param_2 + 0x448) + 0x670))();
  memcpy(param_1,_Src,0x98);
  cVar1 = *(char *)((longlong)_Src + 0x9c);
  *(char *)((longlong)param_1 + 0x9c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x98) = *(undefined4 *)((longlong)_Src + 0x98);
  }
  *(undefined4 *)((longlong)param_1 + 0xa8) = *(undefined4 *)((longlong)_Src + 0xa8);
  *(undefined8 *)((longlong)param_1 + 0xa0) = *(undefined8 *)((longlong)_Src + 0xa0);
  FUN_144903306((longlong)param_1 + 0xb0,(longlong)_Src + 0xb0);
  uVar2 = *(undefined8 *)((longlong)_Src + 0x978);
  uVar3 = *(undefined8 *)((longlong)_Src + 0x980);
  uVar4 = *(undefined8 *)((longlong)_Src + 0x988);
  *(undefined8 *)((longlong)param_1 + 0x970) = *(undefined8 *)((longlong)_Src + 0x970);
  *(undefined8 *)((longlong)param_1 + 0x978) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x980) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x988) = uVar4;
  cVar1 = *(char *)((longlong)_Src + 0x9f0);
  *(char *)((longlong)param_1 + 0x9f0) = cVar1;
  if (cVar1 == '\x01') {
    puVar6 = (undefined8 *)((longlong)_Src + 0x990);
    puVar7 = (undefined8 *)((longlong)param_1 + 0x990);
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  *(undefined8 *)((longlong)param_1 + 0xa20) = *(undefined8 *)((longlong)_Src + 0xa20);
  uVar2 = *(undefined8 *)((longlong)_Src + 0xa00);
  uVar3 = *(undefined8 *)((longlong)_Src + 0xa08);
  uVar4 = *(undefined8 *)((longlong)_Src + 0xa18);
  *(undefined8 *)((longlong)param_1 + 0xa10) = *(undefined8 *)((longlong)_Src + 0xa10);
  *(undefined8 *)((longlong)param_1 + 0xa18) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0xa00) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0xa08) = uVar3;
  return param_1;
}



// FUNCTION 147fc6a5e FUN_147fc6a5e body=289 status=ok
// SIG undefined FUN_147fc6a5e(void)

void * FUN_147fc6a5e(void *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  memcpy(param_1,param_2,0x98);
  if (param_2 != param_1) {
    if (*(char *)((longlong)param_2 + 0x9c) == '\x01') {
      *(undefined4 *)((longlong)param_1 + 0x98) = *(undefined4 *)((longlong)param_2 + 0x98);
      uVar4 = 1;
    }
    else {
      if (*(char *)((longlong)param_1 + 0x9c) != '\x01') goto LAB_147fc6aa0;
      uVar4 = 0;
    }
    *(undefined1 *)((longlong)param_1 + 0x9c) = uVar4;
  }
LAB_147fc6aa0:
  *(undefined1 *)((longlong)param_1 + 0xa0) = *(undefined1 *)((longlong)param_2 + 0xa0);
  *(undefined1 *)((longlong)param_1 + 0xa4) = *(undefined1 *)((longlong)param_2 + 0xa4);
  *(undefined4 *)((longlong)param_1 + 0xa8) = *(undefined4 *)((longlong)param_2 + 0xa8);
  FUN_1414d07a4((longlong)param_1 + 0xb0,(longlong)param_2 + 0xb0);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x978);
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x980);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x988);
  *(undefined8 *)((longlong)param_1 + 0x970) = *(undefined8 *)((longlong)param_2 + 0x970);
  *(undefined8 *)((longlong)param_1 + 0x978) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x980) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x988) = uVar3;
  if (param_2 != param_1) {
    if (*(char *)((longlong)param_2 + 0x9f0) == '\x01') {
      puVar6 = (undefined8 *)((longlong)param_2 + 0x990);
      puVar7 = (undefined8 *)((longlong)param_1 + 0x990);
      for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      uVar4 = 1;
    }
    else {
      if (*(char *)((longlong)param_1 + 0x9f0) != '\x01') goto LAB_147fc6b25;
      uVar4 = 0;
    }
    *(undefined1 *)((longlong)param_1 + 0x9f0) = uVar4;
  }
LAB_147fc6b25:
  *(undefined8 *)((longlong)param_1 + 0xa20) = *(undefined8 *)((longlong)param_2 + 0xa20);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xa00);
  uVar2 = *(undefined8 *)((longlong)param_2 + 0xa08);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0xa18);
  *(undefined8 *)((longlong)param_1 + 0xa10) = *(undefined8 *)((longlong)param_2 + 0xa10);
  *(undefined8 *)((longlong)param_1 + 0xa18) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0xa00) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0xa08) = uVar2;
  return param_1;
}



// FUNCTION 147fc6b80 FUN_147fc6b80 body=237 status=ok
// SIG undefined FUN_147fc6b80(void)

void FUN_147fc6b80(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_a78 [40];
  undefined8 local_a50;
  undefined1 local_a48 [2264];
  longlong local_170;
  longlong local_e8;
  char local_58;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a78;
  local_a50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147fc6c6e(local_a48,local_a50);
  FUN_147fc6a5e(param_3,local_a48);
  if (local_58 == '\x01') {
    local_58 = '\0';
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if (local_170 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_a78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc6c6e FUN_147fc6c6e body=249 status=ok
// SIG undefined FUN_147fc6c6e(void)

void * FUN_147fc6c6e(void *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *_Src;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  _Src = (void *)(**(code **)(**(longlong **)(param_2 + 0x448) + 0x678))();
  memcpy(param_1,_Src,0x98);
  cVar1 = *(char *)((longlong)_Src + 0x9c);
  *(char *)((longlong)param_1 + 0x9c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x98) = *(undefined4 *)((longlong)_Src + 0x98);
  }
  *(undefined4 *)((longlong)param_1 + 0xa8) = *(undefined4 *)((longlong)_Src + 0xa8);
  *(undefined8 *)((longlong)param_1 + 0xa0) = *(undefined8 *)((longlong)_Src + 0xa0);
  FUN_144903306((longlong)param_1 + 0xb0,(longlong)_Src + 0xb0);
  uVar2 = *(undefined8 *)((longlong)_Src + 0x978);
  uVar3 = *(undefined8 *)((longlong)_Src + 0x980);
  uVar4 = *(undefined8 *)((longlong)_Src + 0x988);
  *(undefined8 *)((longlong)param_1 + 0x970) = *(undefined8 *)((longlong)_Src + 0x970);
  *(undefined8 *)((longlong)param_1 + 0x978) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x980) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x988) = uVar4;
  cVar1 = *(char *)((longlong)_Src + 0x9f0);
  *(char *)((longlong)param_1 + 0x9f0) = cVar1;
  if (cVar1 == '\x01') {
    puVar6 = (undefined8 *)((longlong)_Src + 0x990);
    puVar7 = (undefined8 *)((longlong)param_1 + 0x990);
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  *(undefined8 *)((longlong)param_1 + 0xa20) = *(undefined8 *)((longlong)_Src + 0xa20);
  uVar2 = *(undefined8 *)((longlong)_Src + 0xa00);
  uVar3 = *(undefined8 *)((longlong)_Src + 0xa08);
  uVar4 = *(undefined8 *)((longlong)_Src + 0xa18);
  *(undefined8 *)((longlong)param_1 + 0xa10) = *(undefined8 *)((longlong)_Src + 0xa10);
  *(undefined8 *)((longlong)param_1 + 0xa18) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0xa00) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0xa08) = uVar3;
  return param_1;
}



// FUNCTION 147fc6d70 FUN_147fc6d70 body=466 status=ok
// SIG undefined FUN_147fc6d70(void)

void FUN_147fc6d70(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_918 [32];
  undefined4 local_8f8;
  undefined4 local_8f4;
  undefined8 local_8f0;
  undefined1 local_8e8 [2088];
  longlong local_c0;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_918;
  local_8f0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8f0);
  }
  local_8f4 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8f4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8f4);
  }
  FUN_144894d4c(local_8e8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_8e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_8e8);
  }
  puVar2 = local_8e8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_8f8 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8f8);
  }
  puVar3 = &local_8f8;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147fc6f44(local_8f0,local_8f4,puVar2,puVar3);
  *param_3 = uVar1;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_918) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc6f44 FUN_147fc6f44 body=162 status=ok
// SIG undefined FUN_147fc6f44(void)

undefined8 FUN_147fc6f44(longlong param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147c918ce(*(undefined8 *)(param_1 + 0x448),&local_30,&local_38);
  if (local_30 != (undefined8 *)0x0) {
    if ((local_38 != (undefined8 *)0x0 && param_2 < *(int *)(local_30 + 1)) &&
       (param_2 < *(int *)(local_38 + 1))) {
      FUN_14477b16e(param_3,*local_30);
      puVar1 = (undefined4 *)*local_38;
      *param_4 = *puVar1;
      uVar2 = CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
      goto LAB_147fc6fc6;
    }
  }
  uVar2 = 0;
LAB_147fc6fc6:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc6fee FUN_147fc6fee body=75 status=ok
// SIG undefined FUN_147fc6fee(void)

bool FUN_147fc6fee(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_147fc7027;
    }
  }
  lVar2 = 0;
LAB_147fc7027:
  lVar1 = FUN_145b66de6();
  return lVar2 == lVar1;
}



// FUNCTION 147fc703f FUN_147fc703f body=174 status=ok
// SIG undefined FUN_147fc703f(void)

undefined8 FUN_147fc703f(undefined8 param_1)

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
  uVar1 = FUN_145b66de6();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
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



// FUNCTION 147fc70ee FUN_147fc70ee body=336 status=ok
// SIG undefined FUN_147fc70ee(void)

longlong * FUN_147fc70ee(longlong *param_1,undefined4 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(**(code **)(*param_1 + 800))();
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_145b66de6();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) goto LAB_147fc7123;
  }
  plVar1 = (longlong *)0x0;
LAB_147fc7123:
  uVar2 = FUN_14073751e();
  lVar3 = FUN_144a78ede(param_1,uVar2);
  lVar4 = (**(code **)(*param_3 + 0x2e8))(param_3);
  FUN_144a808d5(local_38,((int)((ulonglong)*(undefined8 *)(lVar4 + 0x110) >> 0x20) +
                         *(int *)(&DAT_14a46e600 +
                                 (ulonglong)((char)*(undefined8 *)(lVar4 + 0x110) == '\x01') * 4)) -
                         ((int)((ulonglong)*(undefined8 *)(lVar4 + 0x108) >> 0x20) +
                         *(int *)(&DAT_14a46e5f8 +
                                 (ulonglong)((char)*(undefined8 *)(lVar4 + 0x108) == '\0') * 4)),
                *(undefined8 *)(lVar4 + 0x118),*(undefined8 *)(lVar3 + 0x118));
  local_48 = (**(code **)(*param_1 + 0x2e8))(param_1);
  (**(code **)(*plVar1 + 0x300))(plVar1,param_1 + 0x1f,param_2,local_38[0]);
  FUN_147585940(plVar1,param_3);
  (**(code **)(*param_1 + 0x318))(param_1,plVar1);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar1;
}



// FUNCTION 147fc7266 FUN_147fc7266 body=45 status=ok
// SIG undefined FUN_147fc7266(void)

longlong FUN_147fc7266(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145bf16aa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fc7294 FUN_147fc7294 body=48 status=ok
// SIG undefined FUN_147fc7294(void)

longlong FUN_147fc7294(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xf8;
  FUN_145bf7782(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fc72d4 FUN_147fc72d4 body=45 status=ok
// SIG undefined FUN_147fc72d4(void)

longlong FUN_147fc72d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140a07204(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fc7302 FUN_147fc7302 body=48 status=ok
// SIG undefined FUN_147fc7302(void)

longlong FUN_147fc7302(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x210;
  FUN_140a07204(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fc7332 FUN_147fc7332 body=38 status=ok
// SIG undefined FUN_147fc7332(void)

undefined8 FUN_147fc7332(undefined8 param_1,int param_2)

{
  FUN_1409f5a94();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fc7358 FUN_147fc7358 body=38 status=ok
// SIG undefined FUN_147fc7358(void)

undefined8 FUN_147fc7358(undefined8 param_1,int param_2)

{
  FUN_1409f5ace();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fc737e FUN_147fc737e body=69 status=ok
// SIG undefined FUN_147fc737e(void)

undefined8 FUN_147fc737e(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_14479d2ce(param_1 + 0x70);
  plVar3 = *(longlong **)(param_4 + 8);
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
  return uVar4;
}



// FUNCTION 147fc73c6 FUN_147fc73c6 body=29 status=ok
// SIG undefined FUN_147fc73c6(void)

undefined8 FUN_147fc73c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fc73f4 FUN_147fc73f4 body=453 status=ok
// SIG undefined FUN_147fc73f4(void)

void FUN_147fc73f4(longlong param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x10) + 0x4e))
      goto LAB_147fc7437;
      plVar9 = plVar9 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_147fc7437:
  uVar8 = (ulonglong)*(ushort *)(param_2 + 0xe);
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x10) + 0x4a))
      goto LAB_147fc7482;
      plVar7 = plVar7 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_147fc7482:
  lVar5 = *plVar9;
  iVar3 = *(int *)(param_2 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x10) + 100);
  if (((uVar1 != 0xffff) &&
      (*(uint *)(param_3 + 0x20) != (uint)uVar1 &&
       (int)(uint)uVar1 <= (int)*(uint *)(param_3 + 0x20))) &&
     ((*(uint *)(param_3 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0)) {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      plVar11 = *(longlong **)(param_2 + 0x28);
      lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(ushort *)((longlong)plVar11 + 0x1e) == uVar1) goto LAB_147fc74f5;
        plVar11 = plVar11 + 4;
        lVar6 = lVar6 + -0x20;
      } while (lVar6 != 0);
    }
    plVar11 = (longlong *)0x0;
LAB_147fc74f5:
    lVar6 = *plVar7;
    iVar4 = *(int *)(param_2 + 0x14);
    if (iVar4 == 1) {
      AcquireSRWLockShared((PSRWLOCK)(plVar11 + 1));
    }
    LOCK();
    *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
    UNLOCK();
    if (uVar8 != 0) {
      lVar10 = *plVar11;
      do {
        FUN_147fc75ba(param_1,lVar5,lVar10,lVar6);
        lVar5 = lVar5 + 4;
        lVar10 = lVar10 + 0x10;
        lVar6 = lVar6 + 8;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
      UNLOCK();
      if (iVar4 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(plVar11 + 1));
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147fc75a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar9 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 147fc75ba FUN_147fc75ba body=234 status=ok
// SIG undefined FUN_147fc75ba(void)

void FUN_147fc75ba(longlong param_1,ushort *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined8 local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
  lVar6 = (ulonglong)*param_2 * 0x128;
  uVar5 = *(undefined8 *)(lVar3 + 0x100 + lVar6);
  plVar4 = *(longlong **)(lVar3 + 0x108 + lVar6);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  local_44 = *(undefined4 *)(lVar3 + lVar6 + 0x110);
  FUN_1405e06c2(uVar5,&local_40,param_3);
  if (0 < local_38) {
    uVar5 = FUN_14479d2ce(local_40);
    *param_4 = uVar5;
  }
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc76a6 FUN_147fc76a6 body=38 status=ok
// SIG undefined FUN_147fc76a6(void)

void FUN_147fc76a6(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x138);
  FUN_1406ed278((longlong)param_2 + 0x28);
  return;
}



// FUNCTION 147fc770a FUN_147fc770a body=91 status=ok
// SIG undefined FUN_147fc770a(void)

undefined8 FUN_147fc770a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
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
      lVar2 = param_2 + 0x28 + lVar10;
      *(undefined8 *)(lVar2 + -8) = *(undefined8 *)(puVar1 + 8);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[5];
      uVar8 = puVar1[6];
      uVar9 = puVar1[7];
      *(undefined4 *)(lVar2 + -0x18) = puVar1[4];
      *(undefined4 *)(lVar2 + -0x14) = uVar7;
      *(undefined4 *)(lVar2 + -0x10) = uVar8;
      *(undefined4 *)(lVar2 + -0xc) = uVar9;
      *(undefined4 *)(lVar2 + -0x28) = uVar3;
      *(undefined4 *)(lVar2 + -0x24) = uVar4;
      *(undefined4 *)(lVar2 + -0x20) = uVar5;
      *(undefined4 *)(lVar2 + -0x1c) = uVar6;
      FUN_14753be88();
      lVar10 = lVar10 + 0x138;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fc778e FUN_147fc778e body=59 status=ok
// SIG undefined FUN_147fc778e(void)

undefined8 FUN_147fc778e(longlong *param_1)

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



// FUNCTION 147fc77da FUN_147fc77da body=39 status=ok
// SIG undefined FUN_147fc77da(void)

void FUN_147fc77da(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x138) == '\x01') {
    FUN_1404dbc70(param_2 + 0x28);
    *(undefined1 *)(param_2 + 0x138) = 0;
  }
  return;
}



// FUNCTION 147fc7852 FUN_147fc7852 body=59 status=ok
// SIG undefined FUN_147fc7852(void)

undefined8 * FUN_147fc7852(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad04530;
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fc788e FUN_147fc788e body=78 status=ok
// SIG undefined FUN_147fc788e(void)

undefined8 FUN_147fc788e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147fc7964();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc78de FUN_147fc78de body=63 status=ok
// SIG undefined FUN_147fc78de(void)

void FUN_147fc78de(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  }
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 0x20));
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 147fc791e FUN_147fc791e body=70 status=ok
// SIG undefined FUN_147fc791e(void)

void FUN_147fc791e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_3;
  if (lVar1 == 0) {
    return;
  }
  lVar2 = param_3[1];
  FUN_140659abc(param_1 + 8,lVar1,(int)lVar2);
  FUN_147fc7a9a(param_1 + 0x20,lVar1,(int)lVar2);
  return;
}



// FUNCTION 147fc7964 FUN_147fc7964 body=309 status=ok
// SIG undefined FUN_147fc7964(void)

undefined2 * FUN_147fc7964(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  }
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 0x20));
  local_48 = 0;
  local_40 = 0x200000000;
  local_60 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x3c) * '\x02' + '\x01',param_4
               );
  FUN_140560464(param_3,&local_78,param_4);
  uVar2 = local_70;
  lVar1 = local_78;
  if (local_78 == 0) {
    local_78 = 0;
  }
  else {
    FUN_140659abc(param_1 + 8,local_78,local_70);
    FUN_147fc7a9a(param_1 + 0x20,lVar1,uVar2);
  }
  local_80 = local_70;
  local_7c = 1;
  local_88 = local_78;
  FUN_14163869e(local_58,&local_88,&local_60);
  *param_2 = local_68;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc7a9a FUN_147fc7a9a body=158 status=ok
// SIG undefined FUN_147fc7a9a(void)

void FUN_147fc7a9a(short *param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *param_1) goto LAB_147fc7acd;
      plVar8 = plVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_147fc7acd:
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  lVar6 = *plVar8;
  lVar7 = (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar8 + 0x1c);
  *(undefined4 *)(lVar6 + 0x10 + lVar7) = *(undefined4 *)(param_1 + 10);
  uVar3 = *(undefined4 *)(param_1 + 4);
  uVar4 = *(undefined4 *)(param_1 + 6);
  uVar5 = *(undefined4 *)(param_1 + 8);
  puVar1 = (undefined4 *)(lVar6 + lVar7);
  *puVar1 = *(undefined4 *)(param_1 + 2);
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  if ((char)param_1[0xc] == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147fc7b27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 147fc7b38 FUN_147fc7b38 body=59 status=ok
// SIG undefined FUN_147fc7b38(void)

undefined8 * FUN_147fc7b38(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad04550;
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fc7b74 FUN_147fc7b74 body=78 status=ok
// SIG undefined FUN_147fc7b74(void)

undefined8 FUN_147fc7b74(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147fc7c44();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc7bc4 FUN_147fc7bc4 body=57 status=ok
// SIG undefined FUN_147fc7bc4(void)

void FUN_147fc7bc4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 0x40));
  if (*(char *)(param_1 + 0x58) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 147fc7bfe FUN_147fc7bfe body=70 status=ok
// SIG undefined FUN_147fc7bfe(void)

void FUN_147fc7bfe(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_3;
  if (lVar1 == 0) {
    return;
  }
  lVar2 = param_3[1];
  FUN_147fc7d72(param_1 + 8,lVar1,(int)lVar2);
  FUN_140b5f80c(param_1 + 0x40,lVar1,(int)lVar2);
  return;
}



// FUNCTION 147fc7c44 FUN_147fc7c44 body=300 status=ok
// SIG undefined FUN_147fc7c44(void)

undefined2 * FUN_147fc7c44(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 0x40));
  local_48 = 0;
  local_40 = 0x200000000;
  local_60 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x58) * '\x02' + '\x01',param_4
               );
  FUN_140560464(param_3,&local_78,param_4);
  uVar2 = local_70;
  lVar1 = local_78;
  if (local_78 == 0) {
    local_78 = 0;
  }
  else {
    FUN_147fc7d72(param_1 + 8,local_78,local_70);
    FUN_140b5f80c(param_1 + 0x40,lVar1,uVar2);
  }
  local_80 = local_70;
  local_7c = 1;
  local_88 = local_78;
  FUN_14163869e(local_58,&local_88,&local_60);
  *param_2 = local_68;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc7d72 FUN_147fc7d72 body=169 status=ok
// SIG undefined FUN_147fc7d72(void)

void FUN_147fc7d72(short *param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
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
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar16 = *(longlong **)(param_2 + 0x28);
    lVar14 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar16 + 0x1e) == *param_1) goto LAB_147fc7da5;
      plVar16 = plVar16 + 4;
      lVar14 = lVar14 + -0x20;
    } while (lVar14 != 0);
  }
  plVar16 = (longlong *)0x0;
LAB_147fc7da5:
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar16 + 1));
  }
  LOCK();
  *(int *)(plVar16 + 3) = (int)plVar16[3] + 1;
  UNLOCK();
  lVar14 = *plVar16;
  lVar15 = (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar16 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 2);
  uVar4 = *(undefined4 *)(param_1 + 4);
  uVar5 = *(undefined4 *)(param_1 + 6);
  uVar6 = *(undefined4 *)(param_1 + 8);
  uVar7 = *(undefined4 *)(param_1 + 10);
  uVar8 = *(undefined4 *)(param_1 + 0xc);
  uVar9 = *(undefined4 *)(param_1 + 0xe);
  uVar10 = *(undefined4 *)(param_1 + 0x10);
  uVar11 = *(undefined4 *)(param_1 + 0x12);
  uVar12 = *(undefined4 *)(param_1 + 0x14);
  uVar13 = *(undefined4 *)(param_1 + 0x16);
  puVar1 = (undefined4 *)(lVar14 + 0x1c + lVar15);
  *puVar1 = *(undefined4 *)(param_1 + 0x10);
  puVar1[1] = uVar11;
  puVar1[2] = uVar12;
  puVar1[3] = uVar13;
  puVar1 = (undefined4 *)(lVar14 + 0x10 + lVar15);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  puVar1 = (undefined4 *)(lVar14 + lVar15);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  if ((char)param_1[0x18] == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 3) = (int)plVar16[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147fc7e0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar16 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 147fc7e1c FUN_147fc7e1c body=49 status=ok
// SIG undefined FUN_147fc7e1c(void)

undefined8 * FUN_147fc7e1c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad04570;
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fc7e4e FUN_147fc7e4e body=78 status=ok
// SIG undefined FUN_147fc7e4e(void)

undefined8 FUN_147fc7e4e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147fc7eee();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc7e9e FUN_147fc7e9e body=57 status=ok
// SIG undefined FUN_147fc7e9e(void)

void FUN_147fc7e9e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 0x20));
  if (*(char *)(param_1 + 0x24) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 147fc7eee FUN_147fc7eee body=281 status=ok
// SIG undefined FUN_147fc7eee(void)

undefined2 * FUN_147fc7eee(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  undefined4 local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 0x20));
  local_40 = 0;
  local_38 = 0x200000000;
  local_58 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x24) * '\x02' + '\x01',param_4
               );
  FUN_140560464(param_3,&local_70,param_4);
  if (local_70 == 0) {
    local_70 = 0;
  }
  else {
    FUN_140c37182(param_1 + 8,local_70,local_68);
  }
  local_78 = local_68;
  local_74 = 1;
  local_80 = local_70;
  FUN_14163869e(local_50,&local_80,&local_58);
  *param_2 = local_60;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc8084 FUN_147fc8084 body=59 status=ok
// SIG undefined FUN_147fc8084(void)

undefined8 FUN_147fc8084(longlong *param_1)

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



// FUNCTION 147fc8126 FUN_147fc8126 body=287 status=ok
// SIG undefined FUN_147fc8126(void)

void FUN_147fc8126(undefined8 param_1,longlong param_2,undefined2 *param_3)

{
  longlong *plVar1;
  undefined1 auStack_158 [40];
  undefined2 *local_130;
  undefined2 *local_128;
  longlong *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined2 local_102;
  undefined2 local_100;
  undefined4 local_fe;
  undefined2 local_fa;
  undefined2 local_f8;
  undefined1 local_f3;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined1 local_e8 [13];
  byte local_db;
  uint local_d8;
  longlong local_80;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  plVar1 = (longlong *)FUN_14009d2a0();
  local_120 = *(longlong **)(*plVar1 + (longlong)*(int *)(param_3 + 4) * 0x58);
  local_118 = 0;
  uStack_110 = 0;
  if (local_120 != (longlong *)0x0) {
    (**(code **)(*local_120 + 8))(local_120,&local_118);
  }
  local_100 = *(undefined2 *)((longlong)plVar1 + 0x4a);
  local_fa = (undefined2)plVar1[0x21];
  local_fe = *(undefined4 *)((longlong)plVar1 + 0x104);
  local_f8 = param_3[1];
  local_f3 = 0;
  local_f0 = 0x6ff;
  local_ec = 0;
  local_102 = *param_3;
  local_130 = &local_102;
  local_128 = &local_100;
  FUN_147fc8246(&local_100,local_e8);
  local_d8 = *(uint *)(param_2 + 0x290);
  local_db = local_db & 0xfe | (local_d8 & 0xfffffeff) == 1;
  FUN_147fc82dc(local_e8,param_2 + 0x28,&local_120);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc8246 FUN_147fc8246 body=148 status=ok
// SIG undefined FUN_147fc8246(void)

undefined8 * FUN_147fc8246(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[2] = param_1[2];
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_147fc8356(param_2,param_2 + 3);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc82dc FUN_147fc82dc body=121 status=ok
// SIG undefined FUN_147fc82dc(void)

void FUN_147fc82dc(short *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_118 [40];
  undefined1 local_f0 [104];
  longlong local_88;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*param_1 != -1) && (param_1[4] != -1)) {
    FUN_147fc83ea(local_f0,param_2,param_1);
    FUN_1438d6de4(local_f0,param_3);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc8356 FUN_147fc8356 body=147 status=ok
// SIG undefined FUN_147fc8356(void)

void FUN_147fc8356(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  FUN_140dad887(param_1 + 1,param_2);
  local_32 = param_1[4];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc83ea FUN_147fc83ea body=127 status=ok
// SIG undefined FUN_147fc83ea(void)

undefined4 * FUN_147fc83ea(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  FUN_1400abb7c(param_1 + 0x1e,param_3 + 0x1e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1400abb7c(param_1 + 0x28,param_3 + 0x28);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 147fc846a FUN_147fc846a body=650 status=ok
// SIG undefined FUN_147fc846a(void)

void FUN_147fc846a(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  int local_14c;
  undefined8 local_148;
  undefined8 local_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined8 local_118;
  undefined4 local_110;
  longlong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined8 *local_d0;
  int local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 *local_70;
  undefined8 local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  short local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar9 + 0x1e) == param_4[4]) goto LAB_147fc84bd;
      puVar9 = puVar9 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_147fc84bd:
  iVar1 = *(int *)(lVar3 + 0x14);
  local_140 = param_1;
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(puVar9 + 1));
  }
  LOCK();
  *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
  UNLOCK();
  uVar4 = *puVar9;
  local_4c = param_4[3];
  local_50 = *(undefined4 *)(param_4 + 1);
  FUN_1410bd8a8(&local_118,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_50,param_3);
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar8 = *(undefined8 **)(lVar3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar8 + 0x1e) == *param_4) goto LAB_147fc8537;
      puVar8 = puVar8 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar8 = (undefined8 *)0x0;
LAB_147fc8537:
  iVar2 = *(int *)(lVar3 + 0x14);
  local_14c = iVar1;
  local_148 = uVar4;
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
  }
  lVar6 = local_d8;
  lVar7 = local_f0;
  lVar3 = local_108;
  uVar5 = local_148;
  LOCK();
  *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
  UNLOCK();
  uVar4 = *puVar8;
  local_b8 = local_118;
  local_b0 = local_110;
  local_118 = 0;
  local_a8 = local_108;
  local_108 = 0;
  local_a0 = local_100;
  local_98 = local_f8;
  local_100 = 0;
  local_90 = local_f0;
  local_f0 = 0;
  local_88 = local_e8;
  local_80 = local_e0;
  local_e8 = 0;
  local_78 = local_d8;
  local_d8 = 0;
  local_60 = local_14c;
  local_58 = local_148;
  local_d0 = puVar8;
  local_c8 = iVar2;
  local_c0 = uVar4;
  local_70 = puVar9;
  local_68 = param_3;
  FUN_1432f59b8();
  local_138 = 0;
  lStack_130 = 0;
  local_128 = 0;
  if (lVar3 != 0) {
    local_138 = lVar3;
  }
  if (lVar7 != 0) {
    lStack_130 = lVar7;
  }
  if (lVar6 != 0) {
    local_128 = lVar6;
  }
  local_158 = uVar5;
  FUN_147fc86f6(local_140,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                uVar4,&local_138);
  FUN_147fc87da(&local_d0);
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fc86f6 FUN_147fc86f6 body=227 status=ok
// SIG undefined FUN_147fc86f6(void)

void FUN_147fc86f6(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong param_5)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  
  uVar1 = *(ushort *)(param_2 + 0xe);
  uVar5 = (ulonglong)uVar1;
  lVar2 = *param_4;
  if (lVar2 == 0) {
    lVar2 = param_4[1];
    if (lVar2 == 0) {
      lVar2 = param_4[2];
      if (uVar1 != 0 && lVar2 != 0) {
        lVar6 = 0;
        do {
          fVar7 = (float)FUN_1458fbfa0(*(undefined8 *)(lVar2 + lVar6 * 2),
                                       *(undefined8 *)(param_3 + lVar6));
          *(double *)(param_5 + lVar6) = (double)fVar7;
          lVar6 = lVar6 + 8;
        } while ((ulonglong)uVar1 * 8 != lVar6);
      }
    }
    else if (uVar5 != 0) {
      uVar4 = 0;
      do {
        uVar3 = (ulonglong)*(ushort *)(lVar2 + uVar4 * 2);
        if (uVar3 != 0) {
          *(double *)(param_5 + uVar4 * 8) =
               (double)*(float *)(*(longlong *)(param_3 + uVar4 * 8) + uVar3);
        }
        uVar4 = uVar4 + 1;
      } while (uVar5 != uVar4);
    }
  }
  else if (uVar5 != 0) {
    uVar4 = 0;
    do {
      fVar7 = (float)(**(code **)(*(longlong *)(param_1 + 8) + 0x18 +
                                 (longlong)*(int *)(param_1 + 0x14) *
                                 (ulonglong)*(ushort *)(lVar2 + uVar4 * 2)))
                               (*(undefined8 *)(param_3 + uVar4 * 8));
      *(double *)(param_5 + uVar4 * 8) = (double)fVar7;
      uVar4 = uVar4 + 1;
    } while (uVar5 != uVar4);
  }
  return;
}



// FUNCTION 147fc87da FUN_147fc87da body=117 status=ok
// SIG undefined FUN_147fc87da(void)

void FUN_147fc87da(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[0xc];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[0xd]) {
      uVar3 = param_1[0xd];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[0xc] + 0x18) = *(int *)(param_1[0xc] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[0xe] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[0xc] + 8));
    }
  }
  FUN_1432f59b8(param_1 + 3);
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147fc8841. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147fc8850 FUN_147fc8850 body=29 status=ok
// SIG undefined FUN_147fc8850(void)

undefined8 FUN_147fc8850(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fc8888 FUN_147fc8888 body=29 status=ok
// SIG undefined FUN_147fc8888(void)

bool FUN_147fc8888(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147fc88a6 FUN_147fc88a6 body=26 status=ok
// SIG undefined FUN_147fc88a6(void)

bool FUN_147fc88a6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147fc88c0 FUN_147fc88c0 body=24 status=ok
// SIG undefined FUN_147fc88c0(void)

bool FUN_147fc88c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147fc88d8 FUN_147fc88d8 body=101 status=ok
// SIG undefined FUN_147fc88d8(void)

void FUN_147fc88d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a4d7700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad04700;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147fc893e FUN_147fc893e body=101 status=ok
// SIG undefined FUN_147fc893e(void)

void FUN_147fc893e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a4d7700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad04700;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147fc89a4 FUN_147fc89a4 body=134 status=ok
// SIG undefined FUN_147fc89a4(void)

void FUN_147fc89a4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a4d7700;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad04700;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147fc8a1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147fc8a2a FUN_147fc8a2a body=44 status=ok
// SIG undefined FUN_147fc8a2a(void)

void FUN_147fc8a2a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147fc8a53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 147fc8a56 FUN_147fc8a56 body=156 status=ok
// SIG undefined FUN_147fc8a56(void)

bool FUN_147fc8a56(longlong param_1,undefined8 param_2)

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



// FUNCTION 147fc8af4 FUN_147fc8af4 body=184 status=ok
// SIG undefined FUN_147fc8af4(void)

undefined8 * FUN_147fc8af4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[6] = 0x10000000000;
  param_1[0xb] = 0x10000000000;
  param_1[0x12] = 0x10000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x17] = 0x10000000000;
  local_32 = *(undefined2 *)param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 2,&local_48);
  local_32 = *(undefined2 *)((longlong)param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc8bae FUN_147fc8bae body=85 status=ok
// SIG undefined FUN_147fc8bae(void)

void FUN_147fc8bae(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147fc8bf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147fc8c04 FUN_147fc8c04 body=76 status=ok
// SIG undefined FUN_147fc8c04(void)

void FUN_147fc8c04(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145b66cfc();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_147fc8c18;
    }
  }
  lVar2 = 0;
LAB_147fc8c18:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 147fc8c50 FUN_147fc8c50 body=59 status=ok
// SIG undefined FUN_147fc8c50(void)

undefined8 * FUN_147fc8c50(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad04530;
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fc8c8c FUN_147fc8c8c body=59 status=ok
// SIG undefined FUN_147fc8c8c(void)

undefined8 * FUN_147fc8c8c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad04550;
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fc8cc8 FUN_147fc8cc8 body=153 status=ok
// SIG undefined FUN_147fc8cc8(void)

void FUN_147fc8cc8(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar8 = (undefined8 *)FUN_14001cc68(0x60,8);
  *param_1 = puVar8;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar8;
  }
  *param_1 = &PTR_FUN_14ad04550;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 8);
  cVar2 = *(char *)(param_2 + 0x38);
  *(char *)(param_1 + 7) = cVar2;
  if (cVar2 == '\x01') {
    uVar3 = *(undefined8 *)(param_2 + 0xc);
    uVar4 = *(undefined8 *)(param_2 + 0x14);
    uVar5 = *(undefined8 *)(param_2 + 0x1c);
    uVar6 = *(undefined8 *)(param_2 + 0x24);
    uVar7 = *(undefined8 *)(param_2 + 0x30);
    param_1[5] = *(undefined8 *)(param_2 + 0x28);
    param_1[6] = uVar7;
    *(undefined8 *)((longlong)param_1 + 0x1c) = uVar5;
    *(undefined8 *)((longlong)param_1 + 0x24) = uVar6;
    *(undefined8 *)((longlong)param_1 + 0xc) = uVar3;
    *(undefined8 *)((longlong)param_1 + 0x14) = uVar4;
  }
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 0x40);
  cVar2 = *(char *)(param_2 + 0x50);
  *(char *)(param_1 + 10) = cVar2;
  if (cVar2 == '\x01') {
    param_1[9] = *(undefined8 *)(param_2 + 0x48);
  }
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *param_1 = &PTR_FUN_14ad04790;
  return;
}



// FUNCTION 147fc8d62 FUN_147fc8d62 body=166 status=ok
// SIG undefined FUN_147fc8d62(void)

void FUN_147fc8d62(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[1];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[2];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc8e0a FUN_147fc8e0a body=118 status=ok
// SIG undefined FUN_147fc8e0a(void)

void FUN_147fc8e0a(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[7] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147fc8e72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147fc8e80 FUN_147fc8e80 body=191 status=ok
// SIG undefined FUN_147fc8e80(void)

undefined8 * FUN_147fc8e80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[7] = 0x10000000000;
  param_1[0xc] = 0x10000000000;
  param_1[0x13] = 0x10000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x18] = 0x10000000000;
  local_32 = *(undefined2 *)((longlong)param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 3,&local_48);
  local_32 = *(undefined2 *)((longlong)param_1 + 4);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 3,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc8f40 FUN_147fc8f40 body=87 status=ok
// SIG undefined FUN_147fc8f40(void)

void FUN_147fc8f40(longlong param_1)

{
  int *piVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x28) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x20) + 8));
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x10) == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147fc8f89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 8) + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147fc8f98 FUN_147fc8f98 body=121 status=ok
// SIG undefined FUN_147fc8f98(void)

longlong FUN_147fc8f98(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_147fc9012();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_147fc906a(param_1,&local_24,param_2);
    lVar1 = *param_1 + (longlong)local_24 * 0x28;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 8;
}



// FUNCTION 147fc9012 FUN_147fc9012 body=87 status=ok
// SIG undefined FUN_147fc9012(void)

int * FUN_147fc9012(longlong *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar2 * 0x28);
        if ((*piVar1 == *param_3) && (*(int *)(*param_1 + 4 + (longlong)iVar2 * 0x28) == param_3[1])
           ) {
          return piVar1;
        }
        iVar2 = piVar1[8];
      } while (iVar2 != -1);
    }
  }
  return (int *)0x0;
}



// FUNCTION 147fc906a FUN_147fc906a body=292 status=ok
// SIG undefined FUN_147fc906a(void)

undefined4 * FUN_147fc906a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_147fc9190(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[2] = 0;
  local_40[3] = 0x200000000;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  cVar1 = FUN_147fc9276(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x24) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
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
      FUN_147fc9392(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc9190 FUN_147fc9190 body=230 status=ok
// SIG undefined FUN_147fc9190(void)

int * FUN_147fc9190(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 147fc9276 FUN_147fc9276 body=169 status=ok
// SIG undefined FUN_147fc9276(void)

undefined8 FUN_147fc9276(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar10 * 0x28);
        if ((*piVar1 == *param_3) &&
           (*(int *)(*param_1 + 4 + (longlong)iVar10 * 0x28) == param_3[1])) {
          if (*(longlong *)(piVar1 + 4) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[5];
          iVar7 = param_3[6];
          iVar8 = param_3[7];
          piVar1[4] = param_3[4];
          piVar1[5] = iVar6;
          piVar1[6] = iVar7;
          piVar1[7] = iVar8;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_147fc9320(param_1,*param_4);
          *param_4 = iVar10;
          return 1;
        }
        iVar10 = piVar1[8];
      } while (iVar10 != -1);
    }
  }
  return 0;
}



// FUNCTION 147fc9320 FUN_147fc9320 body=114 status=ok
// SIG undefined FUN_147fc9320(void)

void FUN_147fc9320(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 147fc9392 FUN_147fc9392 body=459 status=ok
// SIG undefined FUN_147fc9392(void)

void FUN_147fc9392(longlong *param_1)

{
  longlong *plVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
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
  uVar3 = *(uint *)(param_1 + 9);
  uVar5 = local_58;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
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
    uVar5 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar6 = local_58._4_4_;
      local_58 = uVar5;
      do {
        lVar4 = *local_70;
        lVar7 = (longlong)iVar6;
        uVar2 = *(ushort *)(lVar4 + lVar7 * 0x28);
        uVar11 = (longlong)
                 (int)((uint)uVar2 * 0x40 + *(int *)(lVar4 + 4 + lVar7 * 0x28) + (uint)(uVar2 >> 2)
                       + 0x9e3779b9 ^ (uint)uVar2) & (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar4 + 0x24 + lVar7 * 0x28) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x20 + lVar7 * 0x28) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar6 = local_58._4_4_;
        uVar5 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar5;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fc955e FUN_147fc955e body=122 status=ok
// SIG undefined FUN_147fc955e(void)

void FUN_147fc955e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x14) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 * 2,0);
      iVar3 = (int)(uVar4 >> 1);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x14) = iVar6;
    FUN_147fc95da(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147fc95da FUN_147fc95da body=130 status=ok
// SIG undefined FUN_147fc95da(void)

void FUN_147fc95da(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,2);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 * 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,2);
  return;
}



// FUNCTION 147fc965c FUN_147fc965c body=219 status=ok
// SIG undefined FUN_147fc965c(void)

int FUN_147fc965c(short *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  bool bVar10;
  
  iVar3 = *(int *)(param_1 + 8);
  lVar4 = (longlong)iVar3;
  if (lVar4 == 0) {
    iVar3 = 0;
  }
  else {
    psVar9 = *(short **)(param_1 + 4);
    if (*(short **)(param_1 + 4) == (short *)0x0) {
      psVar9 = param_1;
    }
    iVar2 = 0;
    bVar10 = *psVar9 == *(short *)*param_2;
    iVar6 = 0;
    do {
      iVar1 = iVar6 + 1;
      if (iVar6 + 1 < iVar3) {
        iVar1 = iVar3;
      }
      iVar7 = iVar6;
      lVar5 = (longlong)iVar6;
      do {
        lVar5 = lVar5 + 1;
        iVar8 = iVar1;
        if (lVar4 <= lVar5) break;
        iVar7 = iVar7 + 1;
        iVar8 = iVar7;
      } while (bVar10 == (psVar9[lVar5] == *(short *)*param_2));
      if (bVar10 == false) {
        if (iVar2 != iVar6) {
          memmove(psVar9 + iVar2,psVar9 + iVar6,(longlong)(iVar8 - iVar6) * 2);
        }
        iVar2 = iVar2 + (iVar8 - iVar6);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar6 = iVar8;
    } while (lVar5 < lVar4);
    *(int *)(param_1 + 8) = iVar2;
    iVar3 = iVar3 - iVar2;
  }
  return iVar3;
}



// FUNCTION 147fc9738 FUN_147fc9738 body=125 status=ok
// SIG undefined FUN_147fc9738(void)

void FUN_147fc9738(longlong *param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar3 = *param_2 & 0xffff;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 +
                    ((longlong)(int)(uVar3 * 0x40 + param_2[1] + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3)
                    & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar5 = (longlong)iVar1;
        if ((*(uint *)(lVar2 + lVar5 * 0x28) == *param_2) &&
           (*(uint *)(lVar2 + 4 + lVar5 * 0x28) == param_2[1])) {
          FUN_147fc97b6();
          return;
        }
        iVar1 = *(int *)(lVar2 + lVar5 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 147fc97b6 FUN_147fc97b6 body=87 status=ok
// SIG undefined FUN_147fc97b6(void)

void FUN_147fc97b6(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_147fc980e();
  return;
}



// FUNCTION 147fc980e FUN_147fc980e body=52 status=ok
// SIG undefined FUN_147fc980e(void)

void FUN_147fc980e(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 0x10 + (longlong)param_2 * 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_147fc9320(param_1,param_2);
  return;
}



// FUNCTION 147fc9842 FUN_147fc9842 body=167 status=ok
// SIG undefined FUN_147fc9842(void)

void FUN_147fc9842(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *(undefined2 *)(param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = *(undefined2 *)(param_1 + 6);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = *(undefined2 *)(param_1 + 8);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc98ea FUN_147fc98ea body=153 status=ok
// SIG undefined FUN_147fc98ea(void)

void FUN_147fc98ea(longlong param_1)

{
  int *piVar1;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x58) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x50) + 8));
    }
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x40) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x38) + 8));
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x28) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x20) + 8));
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x10) == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147fc9975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 8) + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147fc9984 FUN_147fc9984 body=85 status=ok
// SIG undefined FUN_147fc9984(void)

undefined8 * FUN_147fc9984(longlong param_1,undefined8 *param_2,short param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(ushort *)(param_1 + 0xc) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar1 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)(lVar2 + 0x1e) == param_3) {
        if (lVar2 != 0) {
          FUN_147fc99da(param_2,lVar2,*(undefined4 *)(param_1 + 0x14));
          return param_2;
        }
        break;
      }
      lVar2 = lVar2 + 0x20;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 147fc99da FUN_147fc99da body=100 status=ok
// SIG undefined FUN_147fc99da(void)

longlong * FUN_147fc99da(longlong *param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  
  *param_1 = 0;
  param_1[2] = 0;
  if (param_3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(param_2 + 1));
  }
  LOCK();
  *(int *)(param_2 + 3) = (int)param_2[3] + 1;
  UNLOCK();
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
    }
  }
  *param_1 = (longlong)param_2;
  *(int *)(param_1 + 1) = param_3;
  param_1[2] = *param_2;
  return param_1;
}



// FUNCTION 147fc9a3e FUN_147fc9a3e body=185 status=ok
// SIG undefined FUN_147fc9a3e(void)

undefined8 * FUN_147fc9a3e(longlong param_1,undefined8 *param_2,ushort param_3,ushort param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_4 != 0xffff) {
    uVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x98) + (ulonglong)param_3 * 8);
    if (((uVar4 != 0xffff) &&
        ((int)(uint)param_4 < *(int *)(*(longlong *)(param_1 + 8) + 0x20 + uVar4 * 0x28))) &&
       ((*(uint *)(*(longlong *)(param_1 + 8) + uVar4 * 0x28 + (ulonglong)(param_4 >> 5) * 4) >>
         (param_4 & 0x1f) & 1) != 0)) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar4 * 8);
      uVar1 = *(ushort *)(lVar3 + 0xc);
      if (uVar1 != 0) {
        lVar3 = *(longlong *)(lVar3 + 0x28);
        lVar2 = (ulonglong)uVar1 << 5;
        do {
          if (*(ushort *)(lVar3 + 0x1e) == param_4) {
            FUN_147fc9af8(param_2,lVar3,*(char *)(param_1 + 0x270) != '\0',
                          *(undefined2 *)
                           (*(longlong *)(param_1 + 0x98) + 2 + (ulonglong)param_3 * 8));
            return param_2;
          }
          lVar3 = lVar3 + 0x20;
          lVar2 = lVar2 + -0x20;
        } while (lVar2 != 0);
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 147fc9af8 FUN_147fc9af8 body=116 status=ok
// SIG undefined FUN_147fc9af8(void)

longlong * FUN_147fc9af8(longlong *param_1,longlong *param_2,int param_3,uint param_4)

{
  int *piVar1;
  
  *param_1 = 0;
  param_1[2] = 0;
  if (param_2 != (longlong *)0x0) {
    if (param_3 == 1) {
      AcquireSRWLockShared((PSRWLOCK)(param_2 + 1));
    }
    LOCK();
    *(int *)(param_2 + 3) = (int)param_2[3] + 1;
    UNLOCK();
    if (*param_1 != 0) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x18);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((int)param_1[1] == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      }
    }
    *param_1 = (longlong)param_2;
    *(int *)(param_1 + 1) = param_3;
    param_1[2] = (ulonglong)param_4 * 0x10 + *param_2;
  }
  return param_1;
}



// FUNCTION 147fc9b6c FUN_147fc9b6c body=147 status=ok
// SIG undefined FUN_147fc9b6c(void)

void FUN_147fc9b6c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147fc9c00 FUN_147fc9c00 body=49 status=ok
// SIG undefined FUN_147fc9c00(void)

undefined8 * FUN_147fc9c00(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad04570;
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fc9c32 FUN_147fc9c32 body=322 status=ok
// SIG undefined FUN_147fc9c32(void)

void FUN_147fc9c32(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x44 + (longlong)iVar4 * 0x48) * 4) =
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



// FUNCTION 147fc9d76 FUN_147fc9d76 body=287 status=ok
// SIG undefined FUN_147fc9d76(void)

void FUN_147fc9d76(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(longlong *)(*local_60 + 0x30 + (longlong)iStack_44 * 0x48) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1403af08a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc9e96 FUN_147fc9e96 body=135 status=ok
// SIG undefined FUN_147fc9e96(void)

longlong FUN_147fc9e96(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_147fc9f1e();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x48 != 0) goto LAB_147fc9ed0;
  }
  local_30 = param_3;
  FUN_147fc9fb4(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_147fc9ed0:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x48 + 0x20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc9f1e FUN_147fc9f1e body=149 status=ok
// SIG undefined FUN_147fc9f1e(void)

int FUN_147fc9f1e(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2;
        if ((((*(int *)(lVar3 + lVar5 * 0x48) == *param_3) &&
             (lVar1 = lVar3 + lVar5 * 0x48, *(int *)(lVar1 + 4) == param_3[1])) &&
            (*(int *)(lVar1 + 8) == param_3[2])) &&
           (((*(int *)(lVar1 + 0xc) == param_3[3] && (*(int *)(lVar1 + 0x10) == param_3[4])) &&
            ((*(int *)(lVar1 + 0x14) == param_3[5] &&
             (*(longlong *)(lVar1 + 0x18) == *(longlong *)(param_3 + 6))))))) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x40 + lVar5 * 0x48);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 147fc9fb4 FUN_147fc9fb4 body=296 status=ok
// SIG undefined FUN_147fc9fb4(void)

undefined4 * FUN_147fc9fb4(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147fca0de(param_1,local_48);
  puVar1 = (undefined8 *)*param_4;
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  uVar2 = *(undefined4 *)((longlong)puVar1 + 0x14);
  uVar3 = *(undefined4 *)(puVar1 + 3);
  uVar4 = *(undefined4 *)((longlong)puVar1 + 0x1c);
  *(undefined4 *)(local_40 + 2) = *(undefined4 *)(puVar1 + 2);
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar2;
  *(undefined4 *)(local_40 + 3) = uVar3;
  *(undefined4 *)((longlong)local_40 + 0x1c) = uVar4;
  *local_40 = uVar5;
  local_40[1] = uVar6;
  local_40[4] = 0;
  local_40[5] = 0;
  *(undefined8 *)((longlong)local_40 + 0x2c) = 0;
  *(undefined8 *)((longlong)local_40 + 0x34) = 0;
  *(undefined8 *)((longlong)local_40 + 0x3c) = 0xffffffff00000002;
  cVar7 = FUN_147fca1c4(param_1,param_3,local_40,local_48);
  if (cVar7 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x44) = param_3;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 8) =
           *(undefined4 *)
            (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_147fca2bc(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fca0de FUN_147fca0de body=230 status=ok
// SIG undefined FUN_147fca0de(void)

int * FUN_147fca0de(longlong *param_1,int *param_2)

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
      FUN_14021b4e8(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x48);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x48) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 147fca1c4 FUN_147fca1c4 body=133 status=ok
// SIG undefined FUN_147fca1c4(void)

undefined8 FUN_147fca1c4(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
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
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar17 = FUN_147fc9f1e(), iVar17 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar17 * 0x48);
    if (*(longlong *)(puVar1 + 0xc) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[4];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    uVar10 = param_3[8];
    uVar11 = param_3[9];
    uVar12 = param_3[10];
    uVar13 = param_3[0xb];
    uVar14 = param_3[0xd];
    uVar15 = param_3[0xe];
    uVar16 = param_3[0xf];
    puVar1[0xc] = param_3[0xc];
    puVar1[0xd] = uVar14;
    puVar1[0xe] = uVar15;
    puVar1[0xf] = uVar16;
    puVar1[8] = uVar10;
    puVar1[9] = uVar11;
    puVar1[10] = uVar12;
    puVar1[0xb] = uVar13;
    puVar1[4] = uVar6;
    puVar1[5] = uVar7;
    puVar1[6] = uVar8;
    puVar1[7] = uVar9;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_147fca24a(param_1,*param_4);
    *param_4 = iVar17;
    return 1;
  }
  return 0;
}



// FUNCTION 147fca24a FUN_147fca24a body=114 status=ok
// SIG undefined FUN_147fca24a(void)

void FUN_147fca24a(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x48) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x48);
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



// FUNCTION 147fca2bc FUN_147fca2bc body=556 status=ok
// SIG undefined FUN_147fca2bc(void)

void FUN_147fca2bc(longlong *param_1)

{
  longlong *plVar1;
  ushort *puVar2;
  ushort uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar10 = *(uint *)(param_1 + 9);
  uVar4 = local_78;
  if (uVar10 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar10,4);
    if (0 < (int)uVar10) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar10 != uVar9);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar4 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar5 = local_78._4_4_;
      local_78 = uVar4;
      do {
        puVar2 = (ushort *)(*local_90 + (longlong)iVar5 * 0x48);
        uVar3 = *puVar2;
        uVar10 = (uVar3 >> 2) + 0x9e3779b9 + (uint)uVar3 * 0x40 + *(int *)(puVar2 + 2) ^ (uint)uVar3
        ;
        iVar6 = FUN_1447addd0(puVar2 + 4,0x10);
        uVar10 = (uVar10 >> 2) + 0x9e3779b9 + uVar10 * 0x40 + iVar6 ^ uVar10;
        uVar4 = *(undefined8 *)(puVar2 + 0xc);
        iVar6 = FUN_144a788f7();
        uVar8 = (longlong)
                (int)((uVar10 >> 2) + 0x9e3779b9 +
                      iVar6 + (int)((ulonglong)uVar4 >> 0x20) + uVar10 * 0x40 ^ uVar10) &
                (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(puVar2 + 0x22) = iVar6;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar2 + 0x20) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar5 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fca4ea FUN_147fca4ea body=124 status=ok
// SIG undefined FUN_147fca4ea(void)

void FUN_147fca4ea(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    FUN_147fca568(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147fca568 FUN_147fca568 body=132 status=ok
// SIG undefined FUN_147fca568(void)

void FUN_147fca568(void *param_1,int param_2,undefined8 param_3)

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
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,8);
  return;
}



// FUNCTION 147fca5ec FUN_147fca5ec body=764 status=ok
// SIG undefined FUN_147fca5ec(void)

int * FUN_147fca5ec(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,longlong *param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
  undefined1 auStack_1a8 [32];
  code **local_188;
  undefined1 **local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  undefined4 local_154;
  longlong *local_150;
  longlong *local_148;
  undefined1 *local_140;
  short **local_138;
  short *local_130;
  longlong *local_128;
  longlong *local_120;
  code *local_118;
  byte local_110;
  undefined1 local_108 [32];
  undefined8 local_e8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined1 local_80 [32];
  undefined8 local_60;
  code *local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((((*param_1 == -1) || (param_1[1] == -1)) || (param_1[2] == -1)) ||
     (cVar7 = FUN_147fca940(param_1,param_3), cVar7 == '\0')) {
    *param_2 = -1;
    goto LAB_147fca632;
  }
  plVar8 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14ad047d0;
  plVar8[2] = (longlong)&PTR_FUN_14ad047e8;
  lVar3 = *param_7;
  plVar8[3] = lVar3;
  plVar8[4] = *(longlong *)(*(longlong *)(lVar3 + 0x28) + 0x548);
  uVar4 = *(undefined4 *)(param_1 + 2);
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)(plVar8 + 5) = *(undefined4 *)param_1;
  *(undefined4 *)((longlong)plVar8 + 0x2c) = uVar4;
  *(undefined4 *)(plVar8 + 6) = uVar5;
  *(undefined4 *)((longlong)plVar8 + 0x34) = uVar6;
  *(undefined4 *)(plVar8 + 7) = *(undefined4 *)(param_1 + 8);
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
  local_60 = 0x10000000000;
  local_88 = 0x10000000000;
  FUN_140dba9e6(local_80,*param_1);
  FUN_140dba9e6(local_80,param_1[1]);
  FUN_140dba9e6(local_80,param_1[2]);
  local_e8 = 0x10000000000;
  local_c0 = 0x10000000000;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_147fca9ea(param_1,local_108);
  local_138 = &local_130;
  local_140 = &LAB_147fcaad0;
  local_110 = *(byte *)(param_6 + 8);
  local_130 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_110])(&local_118);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_168 = local_a8;
  local_180 = &local_140;
  local_188 = &local_118;
  local_178 = local_108;
  local_170 = local_80;
  local_150 = plVar8 + 2;
  local_148 = plVar8;
  FUN_1406ac01c(param_4,param_2,param_5,&local_150);
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_58);
      *param_2 = (int)local_58;
      if ((int)local_58 != -1) goto LAB_147fca804;
    }
  }
  else {
LAB_147fca804:
    local_50 = 0;
    local_58 = FUN_1438d6f18;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_188 = &local_58;
    local_128 = plVar8 + 2;
    local_120 = plVar8;
    FUN_1406abf4a(param_4,&local_154,param_5,&local_128);
    thunk_FUN_1407ce0e2(param_4,*param_2,local_154);
    thunk_FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
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
LAB_147fca632:
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147fca8ea FUN_147fca8ea body=84 status=ok
// SIG undefined FUN_147fca8ea(void)

void FUN_147fca8ea(longlong *param_1,undefined4 *param_2,longlong param_3)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_147fcabf0(param_3 + 8,
                *(undefined8 *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8),
                &local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fca940 FUN_147fca940 body=170 status=ok
// SIG undefined FUN_147fca940(void)

undefined8 FUN_147fca940(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[2];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4 & bVar5);
}



// FUNCTION 147fca9ea FUN_147fca9ea body=166 status=ok
// SIG undefined FUN_147fca9ea(void)

void FUN_147fca9ea(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[1];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[2];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fcaa92 FUN_147fcaa92 body=1 status=ok
// SIG undefined FUN_147fcaa92(void)

void FUN_147fcaa92(void)

{
  return;
}



// FUNCTION 147fcaa94 FUN_147fcaa94 body=29 status=ok
// SIG undefined FUN_147fcaa94(void)

undefined8 FUN_147fcaa94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fcaab2 FUN_147fcaab2 body=29 status=ok
// SIG undefined FUN_147fcaab2(void)

undefined8 FUN_147fcaab2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fcaae8 FUN_147fcaae8 body=263 status=ok
// SIG undefined FUN_147fcaae8(void)

void FUN_147fcaae8(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  ushort uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,3);
  uVar3 = *(ushort *)(param_2 + 0xc);
  uVar2 = (uint)uVar3;
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar2 != 0) {
    lVar5 = (ulonglong)uVar3 << 5;
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_1) goto LAB_147fcab39;
      puVar4 = puVar4 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_147fcab39:
  lVar5 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    uVar2 = (uint)uVar3;
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[1]) goto LAB_147fcab8d;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_147fcab8d:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 4 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    uVar2 = (uint)uVar3;
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[2]) goto LAB_147fcabd2;
      puVar1 = puVar1 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_147fcabd2:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar5 + 8 + lVar7 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 147fcabf0 FUN_147fcabf0 body=241 status=ok
// SIG undefined FUN_147fcabf0(void)

void FUN_147fcabf0(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  ushort uVar1;
  uint *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  float local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar2 = (uint *)*param_3;
  lVar3 = *(longlong *)(param_2 + 0x20);
  puVar5 = (undefined4 *)0x0;
  puVar8 = (undefined4 *)(lVar3 + (ulonglong)puVar2[2]);
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    puVar8 = puVar5;
  }
  puVar6 = (undefined4 *)(lVar3 + (ulonglong)puVar2[1]);
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    puVar6 = puVar5;
  }
  puVar7 = (undefined4 *)(lVar3 + (ulonglong)*puVar2);
  if ((ulonglong)*puVar2 == 0xffffffff) {
    puVar7 = puVar5;
  }
  uVar1 = *(ushort *)(param_2 + 0xe);
  if ((ulonglong)uVar1 != 0) {
    uVar4 = 0;
    do {
      local_4c = (float)*(double *)(puVar8 + uVar4 * 2);
      local_50 = puVar6[10];
      local_70 = puVar7[uVar4];
      local_6c = *puVar6;
      local_68 = puVar6[1];
      uStack_64 = puVar6[2];
      uStack_60 = puVar6[3];
      uStack_5c = puVar6[4];
      local_58 = *(undefined8 *)(puVar6 + 7);
      FUN_147fc47e8(*param_1,&local_70,&local_50);
      uVar4 = uVar4 + 1;
      puVar6 = puVar6 + 0xb;
    } while (uVar1 != uVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fcace2 FUN_147fcace2 body=166 status=ok
// SIG undefined FUN_147fcace2(void)

void FUN_147fcace2(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[2];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[3];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fcad8a FUN_147fcad8a body=611 status=ok
// SIG undefined FUN_147fcad8a(void)

int * FUN_147fcad8a(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,longlong *param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
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
  undefined4 uVar14;
  char cVar15;
  longlong *plVar16;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((*param_1 == -1) || (param_1[2] == -1)) || (param_1[3] == -1)) ||
     (cVar15 = FUN_147fcb040(param_1,param_3), cVar15 == '\0')) {
    *param_2 = -1;
    goto LAB_147fcadd0;
  }
  plVar16 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar16[1] = (longlong)&DAT_100000001;
  *plVar16 = (longlong)&PTR_FUN_14ad047f0;
  plVar16[2] = (longlong)&PTR_FUN_14ad04808;
  plVar16[3] = *param_7;
  uVar4 = *(undefined4 *)param_1;
  uVar5 = *(undefined4 *)(param_1 + 2);
  uVar6 = *(undefined4 *)(param_1 + 4);
  uVar7 = *(undefined4 *)(param_1 + 6);
  uVar8 = *(undefined4 *)(param_1 + 8);
  uVar9 = *(undefined4 *)(param_1 + 10);
  uVar10 = *(undefined4 *)(param_1 + 0xc);
  uVar11 = *(undefined4 *)(param_1 + 0xe);
  uVar12 = *(undefined4 *)(param_1 + 0x10);
  uVar13 = *(undefined4 *)(param_1 + 0x12);
  uVar14 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((longlong)plVar16 + 0x3c) = *(undefined4 *)(param_1 + 0xe);
  *(undefined4 *)(plVar16 + 8) = uVar12;
  *(undefined4 *)((longlong)plVar16 + 0x44) = uVar13;
  *(undefined4 *)(plVar16 + 9) = uVar14;
  *(undefined4 *)(plVar16 + 6) = uVar8;
  *(undefined4 *)((longlong)plVar16 + 0x34) = uVar9;
  *(undefined4 *)(plVar16 + 7) = uVar10;
  *(undefined4 *)((longlong)plVar16 + 0x3c) = uVar11;
  *(undefined4 *)(plVar16 + 4) = uVar4;
  *(undefined4 *)((longlong)plVar16 + 0x24) = uVar5;
  *(undefined4 *)(plVar16 + 5) = uVar6;
  *(undefined4 *)((longlong)plVar16 + 0x2c) = uVar7;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar16 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x48);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x5c);
  FUN_147fcb0ea(param_1,local_70,local_98);
  local_b8 = &local_b0;
  local_c0 = &LAB_147fcb29e;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0x18;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar16 + 2;
  local_c8 = plVar16;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_147fcaf7a;
    }
  }
  else {
LAB_147fcaf7a:
    thunk_FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    thunk_FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar16 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
LAB_147fcadd0:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147fcafee FUN_147fcafee body=80 status=ok
// SIG undefined FUN_147fcafee(void)

void FUN_147fcafee(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_147fcb8b4(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fcb040 FUN_147fcb040 body=170 status=ok
// SIG undefined FUN_147fcb040(void)

undefined8 FUN_147fcb040(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[2];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[3];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4 & bVar5);
}



// FUNCTION 147fcb0ea FUN_147fcb0ea body=373 status=ok
// SIG undefined FUN_147fcb0ea(void)

void FUN_147fcb0ea(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140dba9e6(param_2,*param_1);
  if (param_1[1] != -1) {
    FUN_140dba9e6(param_2);
  }
  FUN_140dba9e6(param_2,param_1[2]);
  FUN_140dba9e6(param_2,param_1[3]);
  if (param_1[4] != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[5] != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[6] != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[7] != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[8] != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[9] != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[10] != -1) {
    FUN_140dba9e6(param_2);
    FUN_140dba9e6(param_3,param_1[10]);
  }
  if (param_1[0xb] != -1) {
    FUN_140dba9e6(param_2);
    FUN_140dba9e6(param_3,param_1[0xb]);
  }
  if (param_1[0xc] != -1) {
    FUN_140dba9e6(param_2);
    FUN_140dba9e6(param_3,param_1[0xc]);
  }
  if (param_1[0xd] != -1) {
    FUN_140dba9e6(param_2);
    FUN_140dba9e6(param_3,param_1[0xd]);
  }
  if (param_1[0xe] != -1) {
    FUN_140dba9e6(param_2);
    FUN_140dba9e6(param_3,param_1[0xe]);
  }
  if (param_1[0xf] != -1) {
    FUN_140dba9e6(param_2);
    FUN_140dba9e6(param_3,param_1[0xf]);
    return;
  }
  return;
}



// FUNCTION 147fcb260 FUN_147fcb260 body=1 status=ok
// SIG undefined FUN_147fcb260(void)

void FUN_147fcb260(void)

{
  return;
}



// FUNCTION 147fcb262 FUN_147fcb262 body=29 status=ok
// SIG undefined FUN_147fcb262(void)

undefined8 FUN_147fcb262(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fcb280 FUN_147fcb280 body=29 status=ok
// SIG undefined FUN_147fcb280(void)

undefined8 FUN_147fcb280(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fcb2b6 FUN_147fcb2b6 body=1533 status=ok
// SIG undefined FUN_147fcb2b6(void)

void FUN_147fcb2b6(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar8 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3);
  uVar2 = *(ushort *)(param_2 + 0xc);
  uVar3 = (uint)uVar2;
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar3 != 0) {
    lVar5 = (ulonglong)uVar2 << 5;
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_1) goto LAB_147fcb308;
      puVar4 = puVar4 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_147fcb308:
  lVar5 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + lVar8 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar2 = *(ushort *)(param_2 + 0xc);
    uVar3 = (uint)uVar2;
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar3 != 0) {
    lVar6 = 0;
    do {
      if (*(short *)((longlong)puVar1 + lVar6 + 0x1e) == param_1[1]) {
        if ((longlong)puVar1 + lVar6 != 0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *(ulonglong *)((longlong)puVar1 + lVar6)) {
            *(int *)(lVar5 + 4 + lVar8 * 4) =
                 (int)*(ulonglong *)((longlong)puVar1 + lVar6) - (int)*(ulonglong *)(param_2 + 0x20)
            ;
            lVar5 = *param_3;
            uVar3 = (uint)*(ushort *)(param_2 + 0xc);
            puVar1 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      lVar6 = lVar6 + 0x20;
    } while ((ulonglong)uVar2 << 5 != lVar6);
    if ((short)uVar3 != 0) {
      puVar4 = (ulonglong *)0x0;
      uVar7 = 0;
      do {
        if (*(short *)((longlong)puVar1 + uVar7 + 0x1e) == param_1[2]) {
          puVar4 = (ulonglong *)(uVar7 + (longlong)puVar1);
          break;
        }
        uVar7 = uVar7 + 0x20;
      } while (uVar3 << 5 != uVar7);
      goto LAB_147fcb392;
    }
  }
  uVar3 = 0;
  puVar4 = (ulonglong *)0x0;
LAB_147fcb392:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 8 + lVar8 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    uVar3 = (uint)*(ushort *)(param_2 + 0xc);
  }
  uVar2 = (ushort)uVar3;
  if (uVar2 != 0) {
    uVar7 = (ulonglong)(uVar3 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[3]) goto LAB_147fcb3dd;
      puVar4 = puVar4 + 4;
      uVar7 = uVar7 - 0x20;
    } while (uVar7 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_147fcb3dd:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 0xc + lVar8 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar2 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    uVar3 = (uint)uVar2;
  }
  if (uVar2 != 0) {
    uVar7 = 0;
    do {
      if (*(short *)((longlong)puVar1 + uVar7 + 0x1e) == param_1[4]) {
        if ((longlong)puVar1 + uVar7 != 0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *(ulonglong *)((longlong)puVar1 + uVar7)) {
            *(int *)(lVar5 + 0x10 + lVar8 * 4) =
                 (int)*(ulonglong *)((longlong)puVar1 + uVar7) - (int)*(ulonglong *)(param_2 + 0x20)
            ;
            lVar5 = *param_3;
            uVar2 = *(ushort *)(param_2 + 0xc);
            puVar1 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      uVar7 = uVar7 + 0x20;
    } while (uVar3 << 5 != uVar7);
    if (uVar2 != 0) {
      uVar3 = (uint)uVar2;
      lVar6 = 0;
      do {
        if (*(short *)((longlong)puVar1 + lVar6 + 0x1e) == param_1[5]) {
          if ((longlong)puVar1 + lVar6 != 0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *(ulonglong *)((longlong)puVar1 + lVar6)) {
              *(int *)(lVar5 + 0x14 + lVar8 * 4) =
                   (int)*(ulonglong *)((longlong)puVar1 + lVar6) -
                   (int)*(ulonglong *)(param_2 + 0x20);
              uVar3 = (uint)*(ushort *)(param_2 + 0xc);
              if (*(ushort *)(param_2 + 0xc) == 0) {
                return;
              }
              lVar5 = *param_3;
              puVar1 = *(ulonglong **)(param_2 + 0x28);
            }
          }
          break;
        }
        lVar6 = lVar6 + 0x20;
      } while ((ulonglong)uVar2 << 5 != lVar6);
      puVar4 = puVar1;
      do {
        if (*(short *)((longlong)puVar4 + 0x1e) == param_1[6]) {
          if (puVar4 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
              *(int *)(lVar5 + 0x18 + lVar8 * 4) =
                   (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
              uVar3 = (uint)*(ushort *)(param_2 + 0xc);
              if (*(ushort *)(param_2 + 0xc) == 0) {
                return;
              }
              lVar5 = *param_3;
              puVar1 = *(ulonglong **)(param_2 + 0x28);
            }
          }
          break;
        }
        puVar4 = puVar4 + 4;
      } while (puVar4 != (ulonglong *)((ulonglong)(uVar3 << 5) + (longlong)puVar1));
      puVar4 = puVar1;
      do {
        if (*(short *)((longlong)puVar4 + 0x1e) == param_1[7]) {
          if (puVar4 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
              *(int *)(lVar5 + 0x1c + lVar8 * 4) =
                   (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
              uVar3 = (uint)*(ushort *)(param_2 + 0xc);
              if (*(ushort *)(param_2 + 0xc) == 0) {
                return;
              }
              lVar5 = *param_3;
              puVar1 = *(ulonglong **)(param_2 + 0x28);
            }
          }
          break;
        }
        puVar4 = puVar4 + 4;
      } while (puVar4 != (ulonglong *)((ulonglong)(uVar3 << 5) + (longlong)puVar1));
      puVar4 = puVar1;
      do {
        if (*(short *)((longlong)puVar4 + 0x1e) == param_1[8]) {
          if (puVar4 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
              *(int *)(lVar5 + 0x20 + lVar8 * 4) =
                   (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
              uVar3 = (uint)*(ushort *)(param_2 + 0xc);
              if (*(ushort *)(param_2 + 0xc) == 0) {
                return;
              }
              lVar5 = *param_3;
              puVar1 = *(ulonglong **)(param_2 + 0x28);
            }
          }
          break;
        }
        puVar4 = puVar4 + 4;
      } while (puVar4 != (ulonglong *)((ulonglong)(uVar3 << 5) + (longlong)puVar1));
      puVar4 = puVar1;
      do {
        if (*(short *)((longlong)puVar4 + 0x1e) == param_1[9]) {
          if (puVar4 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
              *(int *)(lVar5 + 0x24 + lVar8 * 4) =
                   (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
              uVar3 = (uint)*(ushort *)(param_2 + 0xc);
              if (*(ushort *)(param_2 + 0xc) == 0) {
                return;
              }
              lVar5 = *param_3;
              puVar1 = *(ulonglong **)(param_2 + 0x28);
            }
          }
          break;
        }
        puVar4 = puVar4 + 4;
      } while (puVar4 != (ulonglong *)((ulonglong)(uVar3 << 5) + (longlong)puVar1));
      puVar4 = puVar1;
      do {
        if (*(short *)((longlong)puVar4 + 0x1e) == param_1[10]) {
          if (puVar4 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
              *(int *)(lVar5 + 0x28 + lVar8 * 4) =
                   (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
              uVar3 = (uint)*(ushort *)(param_2 + 0xc);
              if (*(ushort *)(param_2 + 0xc) == 0) {
                return;
              }
              lVar5 = *param_3;
              puVar1 = *(ulonglong **)(param_2 + 0x28);
            }
          }
          break;
        }
        puVar4 = puVar4 + 4;
      } while (puVar4 != (ulonglong *)((ulonglong)(uVar3 << 5) + (longlong)puVar1));
      puVar4 = puVar1;
      do {
        if (*(short *)((longlong)puVar4 + 0x1e) == param_1[0xb]) {
          if (puVar4 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
              *(int *)(lVar5 + 0x2c + lVar8 * 4) =
                   (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
              uVar3 = (uint)*(ushort *)(param_2 + 0xc);
              if (*(ushort *)(param_2 + 0xc) == 0) {
                return;
              }
              lVar5 = *param_3;
              puVar1 = *(ulonglong **)(param_2 + 0x28);
            }
          }
          break;
        }
        puVar4 = puVar4 + 4;
      } while (puVar4 != (ulonglong *)((ulonglong)(uVar3 << 5) + (longlong)puVar1));
      puVar4 = puVar1;
      do {
        if (*(short *)((longlong)puVar4 + 0x1e) == param_1[0xc]) {
          if (puVar4 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
              *(int *)(lVar5 + 0x30 + lVar8 * 4) =
                   (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
              uVar3 = (uint)*(ushort *)(param_2 + 0xc);
              if (*(ushort *)(param_2 + 0xc) == 0) {
                return;
              }
              lVar5 = *param_3;
              puVar1 = *(ulonglong **)(param_2 + 0x28);
            }
          }
          break;
        }
        puVar4 = puVar4 + 4;
      } while (puVar4 != (ulonglong *)((ulonglong)(uVar3 << 5) + (longlong)puVar1));
      puVar4 = puVar1;
      do {
        if (*(short *)((longlong)puVar4 + 0x1e) == param_1[0xd]) {
          if (puVar4 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
              *(int *)(lVar5 + 0x34 + lVar8 * 4) =
                   (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
              uVar3 = (uint)*(ushort *)(param_2 + 0xc);
              if (*(ushort *)(param_2 + 0xc) == 0) {
                return;
              }
              lVar5 = *param_3;
              puVar1 = *(ulonglong **)(param_2 + 0x28);
            }
          }
          break;
        }
        puVar4 = puVar4 + 4;
      } while (puVar4 != (ulonglong *)((ulonglong)(uVar3 << 5) + (longlong)puVar1));
      puVar4 = puVar1;
      do {
        if (*(short *)((longlong)puVar4 + 0x1e) == param_1[0xe]) {
          if (puVar4 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
              *(int *)(lVar5 + 0x38 + lVar8 * 4) =
                   (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
              uVar3 = (uint)*(ushort *)(param_2 + 0xc);
              if (*(ushort *)(param_2 + 0xc) == 0) {
                return;
              }
              lVar5 = *param_3;
              puVar1 = *(ulonglong **)(param_2 + 0x28);
            }
          }
          break;
        }
        puVar4 = puVar4 + 4;
      } while (puVar4 != (ulonglong *)((ulonglong)(uVar3 << 5) + (longlong)puVar1));
      puVar4 = (ulonglong *)((ulonglong)(uVar3 << 5) + (longlong)puVar1);
      do {
        if (*(short *)((longlong)puVar1 + 0x1e) == param_1[0xf]) {
          if (puVar1 == (ulonglong *)0x0) {
            return;
          }
          if (*puVar1 < *(ulonglong *)(param_2 + 0x20)) {
            return;
          }
          *(int *)(lVar5 + 0x3c + lVar8 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
          return;
        }
        puVar1 = puVar1 + 4;
      } while (puVar1 != puVar4);
    }
  }
  return;
}



// FUNCTION 147fcb8b4 FUN_147fcb8b4 body=786 status=ok
// SIG undefined FUN_147fcb8b4(void)

void FUN_147fcb8b4(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar2 = (uint *)*param_3;
  lVar5 = *(longlong *)(lVar1 + 0x20);
  lVar12 = 0;
  lVar11 = lVar5 + (ulonglong)*puVar2;
  if ((ulonglong)*puVar2 == 0xffffffff) {
    lVar11 = lVar12;
  }
  lVar3 = lVar5 + (ulonglong)puVar2[1];
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    lVar3 = lVar12;
  }
  lVar6 = lVar5 + (ulonglong)puVar2[2];
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    lVar6 = lVar12;
  }
  lVar17 = lVar5 + (ulonglong)puVar2[3];
  if ((ulonglong)puVar2[3] == 0xffffffff) {
    lVar17 = lVar12;
  }
  lVar16 = lVar5 + (ulonglong)puVar2[4];
  if ((ulonglong)puVar2[4] == 0xffffffff) {
    lVar16 = lVar12;
  }
  lVar8 = lVar5 + (ulonglong)puVar2[5];
  if ((ulonglong)puVar2[5] == 0xffffffff) {
    lVar8 = lVar12;
  }
  lVar15 = lVar5 + (ulonglong)puVar2[6];
  if ((ulonglong)puVar2[6] == 0xffffffff) {
    lVar15 = lVar12;
  }
  lVar19 = lVar5 + (ulonglong)puVar2[7];
  if ((ulonglong)puVar2[7] == 0xffffffff) {
    lVar19 = lVar12;
  }
  lVar18 = lVar5 + (ulonglong)puVar2[8];
  if ((ulonglong)puVar2[8] == 0xffffffff) {
    lVar18 = lVar12;
  }
  lVar7 = lVar5 + (ulonglong)puVar2[9];
  if ((ulonglong)puVar2[9] == 0xffffffff) {
    lVar7 = lVar12;
  }
  lVar10 = lVar5 + (ulonglong)puVar2[10];
  if ((ulonglong)puVar2[10] == 0xffffffff) {
    lVar10 = lVar12;
  }
  lVar9 = lVar5 + (ulonglong)puVar2[0xb];
  if ((ulonglong)puVar2[0xb] == 0xffffffff) {
    lVar9 = lVar12;
  }
  lVar14 = lVar5 + (ulonglong)puVar2[0xc];
  if ((ulonglong)puVar2[0xc] == 0xffffffff) {
    lVar14 = lVar12;
  }
  lVar13 = lVar5 + (ulonglong)puVar2[0xd];
  if ((ulonglong)puVar2[0xd] == 0xffffffff) {
    lVar13 = lVar12;
  }
  lVar4 = lVar5 + (ulonglong)puVar2[0xe];
  if ((ulonglong)puVar2[0xe] == 0xffffffff) {
    lVar4 = lVar12;
  }
  lVar5 = lVar5 + (ulonglong)puVar2[0xf];
  if ((ulonglong)puVar2[0xf] == 0xffffffff) {
    lVar5 = lVar12;
  }
  FUN_147fcbbc6(param_1,lVar1,lVar11,lVar3,lVar6,lVar17,lVar16,lVar8,lVar15,lVar19,lVar18,lVar7,
                lVar10,lVar9,lVar14,lVar13,lVar4,lVar5);
  return;
}



// FUNCTION 147fcbbc6 FUN_147fcbbc6 body=928 status=ok
// SIG undefined FUN_147fcbbc6(void)

void FUN_147fcbbc6(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9,longlong param_10,longlong param_11,longlong param_12,
                  longlong param_13,longlong param_14,longlong param_15,longlong param_16,
                  longlong param_17,longlong param_18)

{
  float fVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  double dVar6;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = param_1;
  local_a0 = param_2;
  local_98 = param_3;
  local_90 = param_4;
  if (*(short *)(param_2 + 0xe) != 0) {
    uVar5 = 0;
    do {
      local_88 = *(undefined4 *)(local_98 + uVar5 * 4);
      puVar2 = (undefined4 *)(param_6 + uVar5 * 0x10);
      local_80 = *puVar2;
      uStack_7c = puVar2[1];
      uStack_78 = puVar2[2];
      uStack_74 = puVar2[3];
      puVar2 = (undefined4 *)(local_90 + uVar5 * 4);
      if (local_90 == 0) {
        puVar2 = &DAT_14cb28aa4;
      }
      local_84 = *puVar2;
      local_58 = (undefined1 *)0x0;
      local_50 = 0x200000000;
      local_70 = *(undefined8 *)(param_5 + 8 + uVar5 * 0x14);
      FUN_147fc48c0(*local_a8,&local_88,local_68);
      puVar3 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar3 = local_68;
      }
      if ((longlong)(int)local_50 != 0) {
        lVar4 = 0;
        do {
          fVar1 = *(float *)(puVar3 + lVar4 + 4);
          if (*(int *)(puVar3 + lVar4) == 2) {
            if (param_16 != 0) {
              if (param_10 == 0) {
                dVar6 = (double)fVar1 * *(double *)(param_16 + uVar5 * 8);
              }
              else {
                dVar6 = (double)(float)*(double *)(param_10 + uVar5 * 8);
                dVar6 = (double)fVar1 * (*(double *)(param_16 + uVar5 * 8) - dVar6) + dVar6;
              }
              *(double *)(param_16 + uVar5 * 8) = dVar6;
            }
            if (param_17 != 0) {
              if (param_11 == 0) {
                dVar6 = (double)fVar1 * *(double *)(param_17 + uVar5 * 8);
              }
              else {
                dVar6 = (double)(float)*(double *)(param_11 + uVar5 * 8);
                dVar6 = (double)fVar1 * (*(double *)(param_17 + uVar5 * 8) - dVar6) + dVar6;
              }
              *(double *)(param_17 + uVar5 * 8) = dVar6;
            }
            if (param_18 != 0) {
              if (param_12 == 0) {
                dVar6 = (double)fVar1 * *(double *)(param_18 + uVar5 * 8);
              }
              else {
                dVar6 = (double)(float)*(double *)(param_12 + uVar5 * 8);
                dVar6 = (double)fVar1 * (*(double *)(param_18 + uVar5 * 8) - dVar6) + dVar6;
              }
              *(double *)(param_18 + uVar5 * 8) = dVar6;
            }
          }
          else if (*(int *)(puVar3 + lVar4) == 1) {
            if (param_13 != 0) {
              if (param_7 == 0) {
                dVar6 = (double)fVar1 * *(double *)(param_13 + uVar5 * 8);
              }
              else {
                dVar6 = (double)(float)*(double *)(param_7 + uVar5 * 8);
                dVar6 = (*(double *)(param_13 + uVar5 * 8) - dVar6) * (double)fVar1 + dVar6;
              }
              *(double *)(param_13 + uVar5 * 8) = dVar6;
            }
            if (param_14 != 0) {
              if (param_8 == 0) {
                dVar6 = (double)fVar1 * *(double *)(param_14 + uVar5 * 8);
              }
              else {
                dVar6 = (double)(float)*(double *)(param_8 + uVar5 * 8);
                dVar6 = (double)fVar1 * (*(double *)(param_14 + uVar5 * 8) - dVar6) + dVar6;
              }
              *(double *)(param_14 + uVar5 * 8) = dVar6;
            }
            if (param_15 != 0) {
              if (param_9 == 0) {
                dVar6 = (double)fVar1 * *(double *)(param_15 + uVar5 * 8);
              }
              else {
                dVar6 = (double)(float)*(double *)(param_9 + uVar5 * 8);
                dVar6 = (double)fVar1 * (*(double *)(param_15 + uVar5 * 8) - dVar6) + dVar6;
              }
              *(double *)(param_15 + uVar5 * 8) = dVar6;
            }
          }
          lVar4 = lVar4 + 8;
        } while ((longlong)(int)local_50 * 8 != lVar4);
      }
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)(local_a0 + 0xe));
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fcbf68 FUN_147fcbf68 body=197 status=ok
// SIG undefined FUN_147fcbf68(void)

void FUN_147fcbf68(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[2];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[3];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[5];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fcc02e FUN_147fcc02e body=606 status=ok
// SIG undefined FUN_147fcc02e(void)

int * FUN_147fcc02e(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,longlong *param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((*param_1 == -1) || (param_1[2] == -1)) || (param_1[3] == -1)) ||
     ((param_1[5] == -1 || (cVar7 = FUN_147fcc2e0(param_1,param_3), cVar7 == '\0')))) {
    *param_2 = -1;
    goto LAB_147fcc07c;
  }
  plVar8 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14ad04810;
  plVar8[2] = (longlong)&PTR_FUN_14ad04828;
  plVar8[3] = *param_7;
  plVar8[6] = *(longlong *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 2);
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)(plVar8 + 4) = *(undefined4 *)param_1;
  *(undefined4 *)((longlong)plVar8 + 0x24) = uVar4;
  *(undefined4 *)(plVar8 + 5) = uVar5;
  *(undefined4 *)((longlong)plVar8 + 0x2c) = uVar6;
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x3c);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x50);
  FUN_147fcc3c0(param_1,local_70,local_98);
  local_b8 = &local_b0;
  local_c0 = &LAB_147fcc474;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0xc;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar8 + 2;
  local_c8 = plVar8;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_147fcc219;
    }
  }
  else {
LAB_147fcc219:
    thunk_FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    thunk_FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
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
LAB_147fcc07c:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147fcc28e FUN_147fcc28e body=80 status=ok
// SIG undefined FUN_147fcc28e(void)

void FUN_147fcc28e(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_147fcc6b0(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fcc2e0 FUN_147fcc2e0 body=223 status=ok
// SIG undefined FUN_147fcc2e0(void)

undefined8 FUN_147fcc2e0(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[2];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[3];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[5];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar6 = false;
  }
  else {
    bVar6 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4 & bVar5 & bVar6);
}



// FUNCTION 147fcc3c0 FUN_147fcc3c0 body=118 status=ok
// SIG undefined FUN_147fcc3c0(void)

void FUN_147fcc3c0(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140dba9e6(param_2,*param_1);
  if (param_1[1] != -1) {
    FUN_140dba9e6(param_2);
  }
  FUN_140dba9e6(param_2,param_1[2]);
  FUN_140dba9e6(param_2,param_1[3]);
  if (param_1[4] != -1) {
    FUN_140dba9e6(param_2);
  }
  FUN_140dba9e6(param_2,param_1[5]);
  FUN_140dba9e6(param_3,param_1[5]);
  return;
}



// FUNCTION 147fcc436 FUN_147fcc436 body=1 status=ok
// SIG undefined FUN_147fcc436(void)

void FUN_147fcc436(void)

{
  return;
}



// FUNCTION 147fcc438 FUN_147fcc438 body=29 status=ok
// SIG undefined FUN_147fcc438(void)

undefined8 FUN_147fcc438(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fcc456 FUN_147fcc456 body=29 status=ok
// SIG undefined FUN_147fcc456(void)

undefined8 FUN_147fcc456(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fcc48c FUN_147fcc48c body=547 status=ok
// SIG undefined FUN_147fcc48c(void)

void FUN_147fcc48c(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  
  lVar8 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3);
  uVar2 = *(ushort *)(param_2 + 0xc);
  uVar3 = (uint)uVar2;
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar3 != 0) {
    lVar4 = (ulonglong)uVar2 << 5;
    puVar7 = puVar1;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == *param_1) goto LAB_147fcc4de;
      puVar7 = puVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_147fcc4de:
  lVar4 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar7) {
    *(int *)(lVar4 + lVar8 * 4) = (int)*puVar7 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar4 = *param_3;
    uVar2 = *(ushort *)(param_2 + 0xc);
    uVar3 = (uint)uVar2;
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar3 != 0) {
    lVar5 = 0;
    do {
      if (*(short *)((longlong)puVar1 + lVar5 + 0x1e) == param_1[1]) {
        if ((longlong)puVar1 + lVar5 != 0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *(ulonglong *)((longlong)puVar1 + lVar5)) {
            *(int *)(lVar4 + 4 + lVar8 * 4) =
                 (int)*(ulonglong *)((longlong)puVar1 + lVar5) - (int)*(ulonglong *)(param_2 + 0x20)
            ;
            lVar4 = *param_3;
            uVar3 = (uint)*(ushort *)(param_2 + 0xc);
            puVar1 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      lVar5 = lVar5 + 0x20;
    } while ((ulonglong)uVar2 << 5 != lVar5);
    if ((short)uVar3 != 0) {
      puVar7 = (ulonglong *)0x0;
      uVar6 = 0;
      do {
        if (*(short *)((longlong)puVar1 + uVar6 + 0x1e) == param_1[2]) {
          puVar7 = (ulonglong *)(uVar6 + (longlong)puVar1);
          break;
        }
        uVar6 = uVar6 + 0x20;
      } while (uVar3 << 5 != uVar6);
      goto LAB_147fcc568;
    }
  }
  uVar3 = 0;
  puVar7 = (ulonglong *)0x0;
LAB_147fcc568:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar7) {
    *(int *)(lVar4 + 8 + lVar8 * 4) = (int)*puVar7 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar4 = *param_3;
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    uVar3 = (uint)*(ushort *)(param_2 + 0xc);
  }
  uVar2 = (ushort)uVar3;
  if (uVar2 != 0) {
    uVar6 = (ulonglong)(uVar3 << 5);
    puVar7 = puVar1;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_1[3]) goto LAB_147fcc5b3;
      puVar7 = puVar7 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_147fcc5b3:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar7) {
    *(int *)(lVar4 + 0xc + lVar8 * 4) = (int)*puVar7 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar4 = *param_3;
    uVar2 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    uVar3 = (uint)uVar2;
  }
  if (uVar2 != 0) {
    uVar6 = 0;
    do {
      if (*(short *)((longlong)puVar1 + uVar6 + 0x1e) == param_1[4]) {
        if ((longlong)puVar1 + uVar6 != 0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *(ulonglong *)((longlong)puVar1 + uVar6)) {
            *(int *)(lVar4 + 0x10 + lVar8 * 4) =
                 (int)*(ulonglong *)((longlong)puVar1 + uVar6) - (int)*(ulonglong *)(param_2 + 0x20)
            ;
            lVar4 = *param_3;
            uVar2 = *(ushort *)(param_2 + 0xc);
            puVar1 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      uVar6 = uVar6 + 0x20;
    } while (uVar3 << 5 != uVar6);
    if (uVar2 != 0) {
      lVar5 = (ulonglong)uVar2 << 5;
      do {
        if (*(short *)((longlong)puVar1 + 0x1e) == param_1[5]) goto LAB_147fcc61f;
        puVar1 = puVar1 + 4;
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
    }
  }
  puVar1 = (ulonglong *)0x0;
LAB_147fcc61f:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar4 + 0x14 + lVar8 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 147fcc6b0 FUN_147fcc6b0 body=186 status=ok
// SIG undefined FUN_147fcc6b0(void)

void FUN_147fcc6b0(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar2 = (uint *)*param_3;
  lVar3 = *(longlong *)(lVar1 + 0x20);
  lVar4 = 0;
  lVar7 = lVar3 + (ulonglong)*puVar2;
  if ((ulonglong)*puVar2 == 0xffffffff) {
    lVar7 = lVar4;
  }
  lVar8 = lVar3 + (ulonglong)puVar2[1];
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    lVar8 = lVar4;
  }
  lVar6 = lVar3 + (ulonglong)puVar2[2];
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    lVar6 = lVar4;
  }
  lVar5 = lVar3 + (ulonglong)puVar2[3];
  if ((ulonglong)puVar2[3] == 0xffffffff) {
    lVar5 = lVar4;
  }
  lVar9 = lVar3 + (ulonglong)puVar2[4];
  if ((ulonglong)puVar2[4] == 0xffffffff) {
    lVar9 = lVar4;
  }
  lVar3 = lVar3 + (ulonglong)puVar2[5];
  if ((ulonglong)puVar2[5] == 0xffffffff) {
    lVar3 = lVar4;
  }
  FUN_147fcc76a(param_1,lVar1,lVar7,lVar8,lVar6,lVar5,lVar9,lVar3);
  return;
}



// FUNCTION 147fcc76a FUN_147fcc76a body=393 status=ok
// SIG undefined FUN_147fcc76a(void)

void FUN_147fcc76a(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  double dVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(short *)(param_2 + 0xe) != 0) {
    uVar4 = 0;
    do {
      local_88 = *(undefined4 *)(param_3 + uVar4 * 4);
      puVar1 = (undefined4 *)(param_6 + uVar4 * 0x10);
      local_80 = *puVar1;
      uStack_7c = puVar1[1];
      uStack_78 = puVar1[2];
      uStack_74 = puVar1[3];
      puVar1 = (undefined4 *)(param_4 + uVar4 * 4);
      if (param_4 == 0) {
        puVar1 = &DAT_14cb28aa4;
      }
      local_84 = *puVar1;
      local_58 = (undefined1 *)0x0;
      local_50 = 0x200000000;
      local_70 = *(undefined8 *)(param_5 + 8 + uVar4 * 0x14);
      FUN_147fc48c0(*param_1,&local_88);
      puVar2 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar2 = local_68;
      }
      if ((longlong)(int)local_50 != 0) {
        lVar3 = 0;
        do {
          if (*(int *)(puVar2 + lVar3) == 0 && param_8 != 0) {
            if (param_7 == 0) {
              dVar5 = (double)*(float *)(puVar2 + lVar3 + 4) * *(double *)(param_8 + uVar4 * 8);
            }
            else {
              dVar5 = (double)(float)*(double *)(param_7 + uVar4 * 8);
              dVar5 = (*(double *)(param_8 + uVar4 * 8) - dVar5) *
                      (double)*(float *)(puVar2 + lVar3 + 4) + dVar5;
            }
            *(double *)(param_8 + uVar4 * 8) = dVar5;
          }
          lVar3 = lVar3 + 8;
        } while ((longlong)(int)local_50 * 8 != lVar3);
      }
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(param_2 + 0xe));
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fcc8f4 FUN_147fcc8f4 body=219 status=ok
// SIG undefined FUN_147fcc8f4(void)

void FUN_147fcc8f4(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  ulonglong *local_48;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = 0xffff;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[2];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fcc9d0 FUN_147fcc9d0 body=560 status=ok
// SIG undefined FUN_147fcc9d0(void)

void FUN_147fcc9d0(undefined8 *param_1,longlong param_2,short *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined1 auStack_e8 [36];
  int local_c4;
  undefined8 *local_c0;
  longlong *local_b8;
  int local_b0;
  longlong local_a8;
  undefined8 *local_a0;
  int local_98;
  undefined4 *local_90;
  longlong *local_88;
  int local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  float local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar12 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar12 + 0x1e) == param_3[2]) goto LAB_147fcca0e;
      plVar12 = plVar12 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar12 = (longlong *)0x0;
LAB_147fcca0e:
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar12 + 1));
  }
  LOCK();
  *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar11 = *(undefined8 **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar11 + 0x1e) == param_3[1]) goto LAB_147fcca37;
      puVar11 = puVar11 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar11 = (undefined8 *)0x0;
LAB_147fcca37:
  lVar6 = *plVar12;
  iVar3 = *(int *)(param_2 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar11 + 1));
  }
  LOCK();
  *(int *)(puVar11 + 3) = *(int *)(puVar11 + 3) + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *param_3) goto LAB_147fcca7a;
      plVar8 = plVar8 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_147fcca7a:
  puVar9 = (undefined4 *)*puVar11;
  iVar4 = *(int *)(param_2 + 0x14);
  local_c4 = iVar2;
  local_c0 = param_1;
  if (iVar4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar8 + 1));
  }
  puVar5 = local_c0;
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  lVar7 = *plVar8;
  local_80 = local_c4;
  uVar1 = *(ushort *)(param_2 + 0xe);
  local_b8 = plVar8;
  local_b0 = iVar4;
  local_a8 = lVar7;
  local_a0 = puVar11;
  local_98 = iVar3;
  local_90 = puVar9;
  local_88 = plVar12;
  local_78 = lVar6;
  if ((ulonglong)uVar1 != 0) {
    uVar10 = 0;
    do {
      local_4c = (float)*(double *)(lVar6 + uVar10 * 8);
      local_50 = puVar9[10];
      local_70 = *(undefined4 *)(lVar7 + uVar10 * 4);
      local_6c = *puVar9;
      local_68 = puVar9[1];
      uStack_64 = puVar9[2];
      uStack_60 = puVar9[3];
      uStack_5c = puVar9[4];
      local_58 = *(undefined8 *)(puVar9 + 7);
      FUN_147fc47e8(*puVar5,&local_70,&local_50);
      uVar10 = uVar10 + 1;
      puVar9 = puVar9 + 0xb;
    } while (uVar1 != uVar10);
  }
  FUN_147fccc02(&local_b8);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fccc02 FUN_147fccc02 body=118 status=ok
// SIG undefined FUN_147fccc02(void)

void FUN_147fccc02(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[7] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147fccc6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147fccc78 FUN_147fccc78 body=138 status=ok
// SIG undefined FUN_147fccc78(void)

undefined8 *
FUN_147fccc78(undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 2);
  uVar2 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = uVar2;
  param_1[7] = 0x10000000000;
  param_1[0xc] = 0x10000000000;
  param_1[0x13] = 0x10000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x18] = 0x10000000000;
  FUN_147fca9ea(0,param_1 + 3);
  param_1[0x19] = param_2;
  param_1[0x1a] = *(undefined8 *)(param_2 + 0x248);
  lVar1 = *param_4;
  param_1[0x1b] = lVar1;
  param_1[0x1c] = *(undefined8 *)(*(longlong *)(lVar1 + 0x28) + 0x548);
  return param_1;
}



// FUNCTION 147fccd02 FUN_147fccd02 body=144 status=ok
// SIG undefined FUN_147fccd02(void)

undefined4 * FUN_147fccd02(undefined4 *param_1,longlong param_2,undefined4 *param_3)

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
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[4];
  uVar6 = param_3[5];
  uVar7 = param_3[6];
  uVar8 = param_3[7];
  uVar9 = param_3[8];
  uVar10 = param_3[9];
  uVar11 = param_3[10];
  param_1[7] = param_3[7];
  param_1[8] = uVar9;
  param_1[9] = uVar10;
  param_1[10] = uVar11;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1403b8af8(param_1 + 0xc,param_3 + 0xc);
  *(undefined8 *)(param_1 + 0x2c) = 0;
  FUN_1400abb7c(param_1 + 0x24,param_3 + 0x24);
  *(undefined8 *)(param_1 + 0x36) = 0;
  FUN_1400abb7c(param_1 + 0x2e,param_3 + 0x2e);
  *(longlong *)(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x3a) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 147fccd92 FUN_147fccd92 body=708 status=ok
// SIG undefined FUN_147fccd92(void)

void FUN_147fccd92(short *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  short *local_50;
  ulonglong *local_48;
  short local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = -1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  if (local_3a != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    FUN_147552f5e(param_2,param_3);
  }
  local_3a = param_1[2];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[3];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if (param_1[4] != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = param_1[4];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[5] != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = param_1[5];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[6] != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = param_1[6];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[7] != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = param_1[7];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[8] != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = param_1[8];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[9] != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = param_1[9];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[10] != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = param_1[10];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[0xb] != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = param_1[0xb];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[0xc] != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = param_1[0xc];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[0xd] != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = param_1[0xd];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[0xe] != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = param_1[0xe];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[0xf] != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = param_1[0xf];
    FUN_147552f5e(param_2,param_3);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fcd058 FUN_147fcd058 body=355 status=ok
// SIG undefined FUN_147fcd058(void)

void FUN_147fcd058(longlong param_1,longlong *param_2,undefined8 param_3)

{
  short sVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da764(param_3,&local_30);
  sVar1 = *(short *)(param_1 + 0x14);
  if (sVar1 != -1) {
    local_28 = *param_2;
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
      sVar1 = *(short *)(param_1 + 0x14);
    }
    FUN_1432da954(param_3,sVar1,&local_28);
  }
  sVar1 = *(short *)(param_1 + 0x16);
  if (sVar1 != -1) {
    local_28 = *param_2;
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
      sVar1 = *(short *)(param_1 + 0x16);
    }
    FUN_1432da954(param_3,sVar1,&local_28);
  }
  sVar1 = *(short *)(param_1 + 0x18);
  if (sVar1 != -1) {
    local_28 = *param_2;
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
      sVar1 = *(short *)(param_1 + 0x18);
    }
    FUN_1432da954(param_3,sVar1,&local_28);
  }
  sVar1 = *(short *)(param_1 + 0x1a);
  if (sVar1 != -1) {
    local_28 = *param_2;
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
      sVar1 = *(short *)(param_1 + 0x1a);
    }
    FUN_1432da954(param_3,sVar1,&local_28);
  }
  sVar1 = *(short *)(param_1 + 0x1c);
  if (sVar1 != -1) {
    local_28 = *param_2;
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
      sVar1 = *(short *)(param_1 + 0x1c);
    }
    FUN_1432da954(param_3,sVar1,&local_28);
  }
  sVar1 = *(short *)(param_1 + 0x1e);
  if (sVar1 != -1) {
    local_28 = *param_2;
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
      sVar1 = *(short *)(param_1 + 0x1e);
    }
    FUN_1432da954(param_3,sVar1,&local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fcd1bc FUN_147fcd1bc body=2724 status=ok
// SIG undefined FUN_147fcd1bc(void)

/* WARNING: Removing unreachable block (ram,0x000147fcd83d) */
/* WARNING: Removing unreachable block (ram,0x000147fcd84b) */
/* WARNING: Removing unreachable block (ram,0x000147fcd86a) */
/* WARNING: Removing unreachable block (ram,0x000147fcd878) */
/* WARNING: Removing unreachable block (ram,0x000147fcd897) */
/* WARNING: Removing unreachable block (ram,0x000147fcd8a5) */
/* WARNING: Removing unreachable block (ram,0x000147fcd8c4) */
/* WARNING: Removing unreachable block (ram,0x000147fcd8d2) */
/* WARNING: Removing unreachable block (ram,0x000147fcd8f1) */
/* WARNING: Removing unreachable block (ram,0x000147fcd8ff) */
/* WARNING: Removing unreachable block (ram,0x000147fcd91e) */
/* WARNING: Removing unreachable block (ram,0x000147fcd92d) */
/* WARNING: Removing unreachable block (ram,0x000147fcd931) */
/* WARNING: Removing unreachable block (ram,0x000147fcd943) */
/* WARNING: Removing unreachable block (ram,0x000147fcd962) */
/* WARNING: Removing unreachable block (ram,0x000147fcd971) */
/* WARNING: Removing unreachable block (ram,0x000147fcd975) */
/* WARNING: Removing unreachable block (ram,0x000147fcd987) */
/* WARNING: Removing unreachable block (ram,0x000147fcd9a6) */
/* WARNING: Removing unreachable block (ram,0x000147fcd9b5) */
/* WARNING: Removing unreachable block (ram,0x000147fcd9b9) */
/* WARNING: Removing unreachable block (ram,0x000147fcd9cb) */
/* WARNING: Removing unreachable block (ram,0x000147fcd9ea) */
/* WARNING: Removing unreachable block (ram,0x000147fcd9f9) */
/* WARNING: Removing unreachable block (ram,0x000147fcd9fd) */
/* WARNING: Removing unreachable block (ram,0x000147fcda0f) */
/* WARNING: Removing unreachable block (ram,0x000147fcda2e) */
/* WARNING: Removing unreachable block (ram,0x000147fcda3d) */
/* WARNING: Removing unreachable block (ram,0x000147fcda41) */
/* WARNING: Removing unreachable block (ram,0x000147fcda53) */
/* WARNING: Removing unreachable block (ram,0x000147fcda72) */
/* WARNING: Removing unreachable block (ram,0x000147fcda81) */
/* WARNING: Removing unreachable block (ram,0x000147fcda85) */
/* WARNING: Removing unreachable block (ram,0x000147fcda97) */

void FUN_147fcd1bc(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_418 [32];
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_388;
  undefined8 local_368;
  undefined8 local_360 [2];
  undefined8 local_350;
  undefined8 local_348 [3];
  undefined8 local_330 [2];
  undefined8 local_320;
  undefined8 local_318 [2];
  undefined8 local_308;
  undefined8 local_300 [2];
  undefined8 local_2f0;
  undefined8 local_2e8 [2];
  undefined8 local_2d8;
  undefined8 local_2d0 [2];
  undefined8 local_2c0;
  undefined8 local_2b8 [3];
  undefined8 local_2a0;
  undefined8 local_298 [3];
  undefined8 local_280;
  undefined8 local_278 [3];
  undefined8 local_260;
  undefined8 local_258 [3];
  undefined8 local_240;
  undefined8 local_238 [3];
  undefined8 local_220;
  undefined8 local_218 [3];
  undefined8 local_200;
  undefined8 *local_1f8;
  int local_1f0;
  undefined8 local_1e8;
  undefined8 *local_1c8;
  int local_1c0;
  undefined8 local_1b8;
  undefined8 *local_1b0;
  int local_1a8;
  undefined8 local_1a0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_418;
  FUN_1476ae894(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                local_218,param_4[0xf],param_3);
  FUN_1476ae894(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                local_238,param_4[0xe],param_3);
  FUN_1476ae894(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                local_258,param_4[0xd],param_3);
  FUN_1476ae894(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                local_278,param_4[0xc],param_3);
  FUN_1476ae894(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                local_298,param_4[0xb],param_3);
  FUN_1476ae894(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                local_2b8,param_4[10],param_3);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                local_2d0,param_4[9]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                local_2e8,param_4[8]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                local_300,param_4[7]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                local_318,param_4[6]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                local_330,param_4[5]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                local_348,param_4[4]);
  lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    puVar8 = *(undefined8 **)(lVar4 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar8 + 0x1e) == param_4[3]) goto LAB_147fcd3aa;
      puVar8 = puVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar8 = (undefined8 *)0x0;
LAB_147fcd3aa:
  iVar1 = *(int *)(lVar4 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
  }
  LOCK();
  *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
  UNLOCK();
  lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar4 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar9 + 0x1e) == param_4[2]) goto LAB_147fcd3e0;
      puVar9 = puVar9 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_147fcd3e0:
  local_388 = *puVar8;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
  }
  LOCK();
  *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
  UNLOCK();
  uVar5 = *puVar9;
  FUN_147fc9984(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                local_360,param_4[1]);
  lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    puVar7 = *(undefined8 **)(lVar4 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == *param_4) goto LAB_147fcd44e;
      puVar7 = puVar7 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar7 = (undefined8 *)0x0;
LAB_147fcd44e:
  iVar3 = *(int *)(lVar4 + 0x14);
  local_368 = param_1;
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar7 + 1));
  }
  LOCK();
  *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
  UNLOCK();
  local_1e8 = *puVar7;
  local_1a0 = local_388;
  local_200 = 0;
  local_218[0] = 0;
  local_220 = 0;
  local_238[0] = 0;
  local_240 = 0;
  local_258[0] = 0;
  local_260 = 0;
  local_278[0] = 0;
  local_280 = 0;
  local_298[0] = 0;
  local_2a0 = 0;
  local_2b8[0] = 0;
  local_2c0 = 0;
  local_2d0[0] = 0;
  local_2d8 = 0;
  local_2e8[0] = 0;
  local_2f0 = 0;
  local_300[0] = 0;
  local_308 = 0;
  local_318[0] = 0;
  local_320 = 0;
  local_330[0] = 0;
  local_348[0] = 0;
  local_360[0] = 0;
  local_3f0 = local_388;
  local_3f8 = uVar5;
  local_1f8 = puVar7;
  local_1f0 = iVar3;
  local_1c8 = puVar9;
  local_1c0 = iVar2;
  local_1b8 = uVar5;
  local_1b0 = puVar8;
  local_1a8 = iVar1;
  FUN_147fcbbc6(local_368,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                local_1e8,local_350);
  FUN_147fcdc62(&local_1f8);
  if ((local_48 ^ (ulonglong)auStack_418) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fcdc62 FUN_147fcdc62 body=814 status=ok
// SIG undefined FUN_147fcdc62(void)

void FUN_147fcdc62(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[0x32];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[0x33]) {
      uVar3 = param_1[0x33];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[0x32] + 0x18) = *(int *)(param_1[0x32] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[0x34] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[0x32] + 8));
    }
  }
  lVar2 = param_1[0x2e];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[0x2f]) {
      uVar3 = param_1[0x2f];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[0x2e] + 0x18) = *(int *)(param_1[0x2e] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[0x30] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[0x2e] + 8));
    }
  }
  lVar2 = param_1[0x2a];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[0x2b]) {
      uVar3 = param_1[0x2b];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[0x2a] + 0x18) = *(int *)(param_1[0x2a] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[0x2c] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[0x2a] + 8));
    }
  }
  lVar2 = param_1[0x26];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[0x27]) {
      uVar3 = param_1[0x27];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[0x26] + 0x18) = *(int *)(param_1[0x26] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[0x28] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[0x26] + 8));
    }
  }
  lVar2 = param_1[0x22];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[0x23]) {
      uVar3 = param_1[0x23];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[0x22] + 0x18) = *(int *)(param_1[0x22] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[0x24] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[0x22] + 8));
    }
  }
  lVar2 = param_1[0x1e];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[0x1f]) {
      uVar3 = param_1[0x1f];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[0x1e] + 0x18) = *(int *)(param_1[0x1e] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[0x20] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[0x1e] + 8));
    }
  }
  if (param_1[0x1b] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x1b] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x1c] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x1b] + 8));
    }
  }
  if (param_1[0x18] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x18] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x19] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x18] + 8));
    }
  }
  if (param_1[0x15] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x15] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x16] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x15] + 8));
    }
  }
  if (param_1[0x12] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x12] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x13] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x12] + 8));
    }
  }
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xf] + 8));
    }
  }
  if (param_1[0xc] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xc] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0xd] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xc] + 8));
    }
  }
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[9] + 8));
    }
  }
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[7] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147fcdf82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147fcdf90 FUN_147fcdf90 body=127 status=ok
// SIG undefined FUN_147fcdf90(void)

undefined4 * FUN_147fcdf90(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  FUN_1400abb7c(param_1 + 0x1e,param_3 + 0x1e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1400abb7c(param_1 + 0x28,param_3 + 0x28);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 147fce010 FUN_147fce010 body=322 status=ok
// SIG undefined FUN_147fce010(void)

void FUN_147fce010(short *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  short *local_50;
  ulonglong *local_48;
  short local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = -1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  if (local_3a != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    FUN_147552f5e(param_2,param_3);
  }
  local_3a = param_1[2];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[3];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[4];
  if (local_3a != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    FUN_147552f5e(param_2,param_3);
  }
  local_3a = param_1[5];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fce154 FUN_147fce154 body=125 status=ok
// SIG undefined FUN_147fce154(void)

void FUN_147fce154(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da764(param_3,&local_30);
  local_28 = *param_2;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da954(param_3,*(undefined2 *)(param_1 + 10),&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fce1d2 FUN_147fce1d2 body=799 status=ok
// SIG undefined FUN_147fce1d2(void)

void FUN_147fce1d2(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  int local_13c;
  int local_138;
  int local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  int local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  int local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  int local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar9 + 0x1e) == param_4[5]) goto LAB_147fce227;
      puVar9 = puVar9 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_147fce227:
  iVar1 = *(int *)(lVar2 + 0x14);
  local_120 = param_3;
  local_118 = param_1;
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(puVar9 + 1));
  }
  LOCK();
  *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
  UNLOCK();
  uVar3 = *puVar9;
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_f8,param_4[4]);
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar8 = *(undefined8 **)(lVar2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar8 + 0x1e) == param_4[3]) goto LAB_147fce281;
      puVar8 = puVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar8 = (undefined8 *)0x0;
LAB_147fce281:
  local_138 = *(int *)(lVar2 + 0x14);
  if (local_138 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
  }
  LOCK();
  *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
  UNLOCK();
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar6 = *(undefined8 **)(lVar2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar6 + 0x1e) == param_4[2]) goto LAB_147fce2be;
      puVar6 = puVar6 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar6 = (undefined8 *)0x0;
LAB_147fce2be:
  uVar4 = *puVar8;
  local_13c = *(int *)(lVar2 + 0x14);
  local_134 = iVar1;
  if (local_13c == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar6 + 1));
  }
  LOCK();
  *(int *)(puVar6 + 3) = *(int *)(puVar6 + 3) + 1;
  UNLOCK();
  local_130 = *puVar6;
  FUN_147fc9984(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_110,param_4[1]);
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar7 = *(undefined8 **)(lVar2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == *param_4) goto LAB_147fce325;
      puVar7 = puVar7 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar7 = (undefined8 *)0x0;
LAB_147fce325:
  iVar1 = *(int *)(lVar2 + 0x14);
  local_128 = uVar3;
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar7 + 1));
  }
  LOCK();
  *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
  UNLOCK();
  local_d0 = *puVar7;
  local_c8 = local_110;
  local_c0 = local_108;
  local_110 = 0;
  local_b8 = local_100;
  local_a8 = local_13c;
  local_a0 = local_130;
  local_90 = local_138;
  local_80 = local_f8;
  local_78 = local_f0;
  local_f8 = 0;
  local_70 = local_e8;
  local_60 = local_120;
  local_58 = local_134;
  local_50 = local_128;
  local_150 = local_128;
  local_158 = local_e8;
  local_168 = local_130;
  local_160 = uVar4;
  local_e0 = puVar7;
  local_d8 = iVar1;
  local_b0 = puVar6;
  local_98 = puVar8;
  local_88 = uVar4;
  local_68 = puVar9;
  FUN_147fcc76a(local_118,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8));
  FUN_147fce4f2(&local_e0);
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fce4f2 FUN_147fce4f2 body=246 status=ok
// SIG undefined FUN_147fce4f2(void)

void FUN_147fce4f2(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[0xf];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[0x10]) {
      uVar3 = param_1[0x10];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[0xf] + 0x18) = *(int *)(param_1[0xf] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[0x11] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[0xf] + 8));
    }
  }
  if (param_1[0xc] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xc] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0xd] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xc] + 8));
    }
  }
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[9] + 8));
    }
  }
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[7] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147fce5da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147fce5e8 FUN_147fce5e8 body=305 status=ok
// SIG undefined FUN_147fce5e8(void)

undefined4 * FUN_147fce5e8(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147fce71a(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  *(undefined8 *)(local_40 + 4) = *puVar2;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = FUN_1447addd0(local_40,0x10);
  cVar6 = FUN_147fce800(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[7] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[6] = *(undefined4 *)
                     (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
      ;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_147fce944(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fce71a FUN_147fce71a body=229 status=ok
// SIG undefined FUN_147fce71a(void)

int * FUN_147fce71a(longlong *param_1,int *param_2)

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
      FUN_1405b363e(param_1,iVar6);
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



// FUNCTION 147fce800 FUN_147fce800 body=93 status=ok
// SIG undefined FUN_147fce800(void)

undefined8 FUN_147fce800(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_147fce85e(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(param_3 + 4);
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_147fce8d2(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 147fce85e FUN_147fce85e body=115 status=ok
// SIG undefined FUN_147fce85e(void)

int FUN_147fce85e(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x20;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 147fce8d2 FUN_147fce8d2 body=114 status=ok
// SIG undefined FUN_147fce8d2(void)

void FUN_147fce8d2(longlong *param_1,int param_2)

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



// FUNCTION 147fce944 FUN_147fce944 body=449 status=ok
// SIG undefined FUN_147fce944(void)

void FUN_147fce944(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
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
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x20;
        iVar6 = FUN_1447addd0(lVar3 + lVar10,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fceb06 FUN_147fceb06 body=152 status=ok
// SIG undefined FUN_147fceb06(void)

void FUN_147fceb06(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_1447addd0(param_2,0x10);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x20;
        if ((((*(int *)(lVar1 + lVar4) == *param_2) && (*(int *)(lVar1 + 4 + lVar4) == param_2[1]))
            && (*(int *)(lVar1 + 8 + lVar4) == param_2[2])) &&
           (*(int *)(lVar1 + 0xc + lVar4) == param_2[3])) {
          FUN_147fceb9e(param_1);
          return;
        }
        iVar2 = *(int *)(lVar4 + lVar1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147fceb9e FUN_147fceb9e body=90 status=ok
// SIG undefined FUN_147fceb9e(void)

void FUN_147fceb9e(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_147fce8d2();
  return;
}



// FUNCTION 147fcebf8 FUN_147fcebf8 body=29 status=ok
// SIG undefined FUN_147fcebf8(void)

undefined8 FUN_147fcebf8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fcec30 FUN_147fcec30 body=29 status=ok
// SIG undefined FUN_147fcec30(void)

bool FUN_147fcec30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147fcec4e FUN_147fcec4e body=26 status=ok
// SIG undefined FUN_147fcec4e(void)

bool FUN_147fcec4e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147fcec68 FUN_147fcec68 body=24 status=ok
// SIG undefined FUN_147fcec68(void)

bool FUN_147fcec68(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147fcec80 FUN_147fcec80 body=101 status=ok
// SIG undefined FUN_147fcec80(void)

void FUN_147fcec80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad04860;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147fcece6 FUN_147fcece6 body=101 status=ok
// SIG undefined FUN_147fcece6(void)

void FUN_147fcece6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad04860;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147fced4c FUN_147fced4c body=134 status=ok
// SIG undefined FUN_147fced4c(void)

void FUN_147fced4c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e665f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad04860;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147fcedc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147fcedd2 FUN_147fcedd2 body=62 status=ok
// SIG undefined FUN_147fcedd2(void)

void FUN_147fcedd2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147fcee0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147fcee10 FUN_147fcee10 body=177 status=ok
// SIG undefined FUN_147fcee10(void)

bool FUN_147fcee10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fceec2 FUN_147fceec2 body=29 status=ok
// SIG undefined FUN_147fceec2(void)

undefined8 FUN_147fceec2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fcef6a FUN_147fcef6a body=31 status=ok
// SIG undefined FUN_147fcef6a(void)

undefined8 FUN_147fcef6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fcef8a FUN_147fcef8a body=312 status=ok
// SIG undefined FUN_147fcef8a(void)

void FUN_147fcef8a(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147fcefc9;
      plVar11 = plVar11 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_147fcefc9:
  iVar2 = *(int *)(param_3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  lVar7 = *param_2;
  if (*(ushort *)(lVar7 + 0xc) != 0) {
    plVar12 = *(longlong **)(lVar7 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar7 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar12 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147fcf00c;
      plVar12 = plVar12 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  plVar12 = (longlong *)0x0;
LAB_147fcf00c:
  lVar9 = *plVar11;
  iVar3 = *(int *)(lVar7 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar12 + 1));
  }
  LOCK();
  *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    puVar8 = (undefined4 *)((longlong)(int)param_2[1] * 0x14 + *plVar12);
    lVar7 = 0;
    do {
      lVar10 = (longlong)*(int *)(*param_4 + lVar7 * 4);
      puVar8[4] = *(undefined4 *)(lVar9 + 0x10 + lVar10 * 0x14);
      puVar1 = (undefined4 *)(lVar9 + lVar10 * 0x14);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *puVar8 = *puVar1;
      puVar8[1] = uVar4;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
      lVar7 = lVar7 + 1;
      puVar8 = puVar8 + 5;
    } while (lVar7 < (int)param_4[1]);
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 3) = (int)plVar12[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar12 + 1));
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147fcf0ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar11 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 147fcf0c2 FUN_147fcf0c2 body=29 status=ok
// SIG undefined FUN_147fcf0c2(void)

undefined8 FUN_147fcf0c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fcf192 FUN_147fcf192 body=31 status=ok
// SIG undefined FUN_147fcf192(void)

undefined8 FUN_147fcf192(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fcf1b2 FUN_147fcf1b2 body=319 status=ok
// SIG undefined FUN_147fcf1b2(void)

void FUN_147fcf1b2(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar16 = *(longlong **)(param_3 + 0x28);
    lVar12 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar16 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147fcf1f1;
      plVar16 = plVar16 + 4;
      lVar12 = lVar12 + -0x20;
    } while (lVar12 != 0);
  }
  plVar16 = (longlong *)0x0;
LAB_147fcf1f1:
  iVar3 = *(int *)(param_3 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar16 + 1));
  }
  LOCK();
  *(int *)(plVar16 + 3) = (int)plVar16[3] + 1;
  UNLOCK();
  lVar12 = *param_2;
  if (*(ushort *)(lVar12 + 0xc) != 0) {
    plVar17 = *(longlong **)(lVar12 + 0x28);
    lVar14 = (ulonglong)*(ushort *)(lVar12 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar17 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147fcf234;
      plVar17 = plVar17 + 4;
      lVar14 = lVar14 + -0x20;
    } while (lVar14 != 0);
  }
  plVar17 = (longlong *)0x0;
LAB_147fcf234:
  lVar14 = *plVar16;
  iVar4 = *(int *)(lVar12 + 0x14);
  if (iVar4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar17 + 1));
  }
  LOCK();
  *(int *)(plVar17 + 3) = (int)plVar17[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    puVar13 = (undefined4 *)((longlong)(int)param_2[1] * 0x2c + *plVar17);
    lVar12 = 0;
    do {
      lVar15 = (longlong)*(int *)(*param_4 + lVar12 * 4) * 0x2c;
      puVar1 = (undefined4 *)(lVar14 + lVar15);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined8 *)(lVar14 + 0x10 + lVar15);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar14 + 0x1c + lVar15);
      uVar11 = puVar2[1];
      *(undefined8 *)(puVar13 + 7) = *puVar2;
      *(undefined8 *)(puVar13 + 9) = uVar11;
      *(undefined8 *)(puVar13 + 4) = uVar9;
      *(undefined8 *)(puVar13 + 6) = uVar10;
      *puVar13 = uVar5;
      puVar13[1] = uVar6;
      puVar13[2] = uVar7;
      puVar13[3] = uVar8;
      lVar12 = lVar12 + 1;
      puVar13 = puVar13 + 0xb;
    } while (lVar12 < (int)param_4[1]);
  }
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar17 + 3) = (int)plVar17[3] + -1;
    UNLOCK();
    if (iVar4 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar17 + 1));
    }
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 3) = (int)plVar16[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147fcf2da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar16 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 147fcf2f2 FUN_147fcf2f2 body=31 status=ok
// SIG undefined FUN_147fcf2f2(void)

undefined8 FUN_147fcf2f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fcf32e FUN_147fcf32e body=93 status=ok
// SIG undefined FUN_147fcf32e(void)

void FUN_147fcf32e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ad049d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147fcf38c FUN_147fcf38c body=126 status=ok
// SIG undefined FUN_147fcf38c(void)

void FUN_147fcf38c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad049d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147fcf3fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147fcf40a FUN_147fcf40a body=21 status=ok
// SIG undefined FUN_147fcf40a(void)

undefined8 FUN_147fcf40a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147fcf420 FUN_147fcf420 body=24 status=ok
// SIG undefined FUN_147fcf420(void)

void FUN_147fcf420(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147fcf434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 147fcf438 FUN_147fcf438 body=29 status=ok
// SIG undefined FUN_147fcf438(void)

undefined8 FUN_147fcf438(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fcf4ae FUN_147fcf4ae body=10 status=ok
// SIG undefined FUN_147fcf4ae(void)

void FUN_147fcf4ae(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147fcf4b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x58))();
  return;
}



// FUNCTION 147fcf4b8 FUN_147fcf4b8 body=10 status=ok
// SIG undefined FUN_147fcf4b8(void)

void FUN_147fcf4b8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147fcf4bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))();
  return;
}



// FUNCTION 147fcf4e6 FUN_147fcf4e6 body=127 status=ok
// SIG undefined FUN_147fcf4e6(void)

void FUN_147fcf4e6(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  if ((0 < param_2) && (*(int *)(param_1 + 0x28) != 0)) {
    iVar2 = 0;
    do {
      if ((longlong)*(int *)(param_1 + 0x38) != 0) {
        lVar1 = 0;
        do {
          if ((*(int *)(*(longlong *)(param_1 + 0x30) + 8 + lVar1) != 0) &&
             (*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar1) != 0)) {
            FUN_147fcfd22(param_1,2,*(undefined8 *)(param_1 + 0x20),0);
            break;
          }
          lVar1 = lVar1 + 0x10;
        } while ((longlong)*(int *)(param_1 + 0x38) * 0x10 != lVar1);
      }
      FUN_147fcfeb8(param_1 + 0x20);
      iVar2 = iVar2 + 1;
    } while (iVar2 != param_2);
  }
  return;
}



// FUNCTION 147fcf566 FUN_147fcf566 body=584 status=ok
// SIG undefined FUN_147fcf566(void)

bool FUN_147fcf566(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4,
                  longlong param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  byte bVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_90;
  undefined1 local_88 [48];
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_147fdae86(param_2 + 9);
  if ((param_5 != 0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(param_5);
  }
  local_58 = param_5;
  local_50 = param_3 + 0xb8;
  lVar6 = FUN_147fdb02e(param_2 + 4);
  if (lVar6 != 0) {
    FUN_147fd932e(param_2 + 0x27,param_3 + 0xc0);
    FUN_147fd9e12(&local_a0,param_2 + 9);
    plVar7 = local_90;
    local_a0 = *(undefined8 *)(param_1 + 0x18);
    local_98 = *param_4;
    plVar3 = (longlong *)param_4[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_90 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        puVar4 = (undefined8 *)*local_90;
        local_90 = plVar3;
        (*(code *)*puVar4)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar3 = local_90;
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          plVar3 = local_90;
        }
      }
    }
    local_90 = plVar3;
    FUN_147fcf7b0(param_1,local_c8);
    FUN_147fcf8ac(local_88,local_c8);
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_c0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_c0 + 0x10))(local_c0);
        }
      }
    }
    FUN_147fdabe0(lVar6,&local_a0,param_2 + 0x16);
    *param_2 = *param_4;
    plVar3 = (longlong *)param_4[1];
    plVar7 = (longlong *)param_2[1];
    if (plVar7 != plVar3) {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)param_2[1];
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      param_2[1] = (longlong)plVar3;
    }
    if (param_3 != 0 && DAT_14c950c29 == 1) {
      FUN_14689c22e(param_3);
    }
    bVar5 = DAT_14c950c29;
    param_2[2] = param_3;
    if ((param_5 != 0) && ((bVar5 & 1) != 0)) {
      FUN_14689c22e(param_5);
    }
    param_2[3] = param_5;
    param_2[8] = lVar6;
    *(undefined1 *)((longlong)param_2 + 0xb91) = *(undefined1 *)(*param_4 + 0xb11);
    *(undefined1 *)(param_2 + 0x172) = 1;
    FUN_147fcf93c(&local_a0);
  }
  plVar3 = (longlong *)param_4[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return lVar6 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fcf7b0 FUN_147fcf7b0 body=245 status=ok
// SIG undefined FUN_147fcf7b0(void)

undefined8 * FUN_147fcf7b0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x28) < 1) {
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[4] = 0;
    if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  if (puVar2[8] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(puVar2[8] + 0x20);
  }
  local_28 = puVar2[2];
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_38 = 0;
  local_30 = puVar2[1];
  if (local_30 != 0) {
    iVar3 = *(int *)(local_30 + 8);
    do {
      if (iVar3 == 0) {
        local_30 = 0;
        goto LAB_147fcf854;
      }
      LOCK();
      iVar1 = *(int *)(local_30 + 8);
      bVar5 = iVar3 == iVar1;
      if (bVar5) {
        *(int *)(local_30 + 8) = iVar3 + 1;
        iVar1 = iVar3;
      }
      iVar3 = iVar1;
      UNLOCK();
    } while (!bVar5);
    if (local_30 != 0) {
      local_38 = *puVar2;
    }
  }
LAB_147fcf854:
  local_48 = uVar4;
  FUN_147fcf9f0(param_2,&local_38,&local_28,puVar2 + 0x16);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
}



// FUNCTION 147fcf8ac FUN_147fcf8ac body=144 status=ok
// SIG undefined FUN_147fcf8ac(void)

undefined8 * FUN_147fcf8ac(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    plVar2 = (longlong *)param_2[1];
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      param_2[1] = 0;
      param_1[1] = plVar2;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
  }
  lVar5 = param_2[2];
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = param_2[2];
    }
  }
  param_1[2] = lVar5;
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar4;
  return param_1;
}



// FUNCTION 147fcf93c FUN_147fcf93c body=100 status=ok
// SIG undefined FUN_147fcf93c(void)

void FUN_147fcf93c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
                    /* WARNING: Could not recover jumptable at 0x000147fcf994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147fcf9a0 FUN_147fcf9a0 body=80 status=ok
// SIG undefined FUN_147fcf9a0(void)

void FUN_147fcf9a0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  thunk_FUN_147fd6bde(param_1 + 4,1);
  param_1[8] = 0;
  FUN_147fdae86(param_1 + 9);
  param_1[3] = 0;
  plVar2 = (longlong *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *(undefined1 *)((longlong)param_1 + 0xb95) = 1;
  return;
}


